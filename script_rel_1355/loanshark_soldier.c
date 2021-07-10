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
	struct<16> Local_18[2];
	int iLocal_51 = 0;
	struct<8> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<43> Local_60[6];
	struct<6> Local_319[5];
	struct<6> Local_350 = { 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_356 = { 0, 0, 0, 0, 0 } ;
	struct<8> Local_361[1];
	struct<8> Local_370[1];
	struct<8> Local_379[12];
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	int iLocal_499[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_506 = 0;
	int iLocal_507 = 0;
	int iLocal_508 = 0;
	vector3 vLocal_509 = { 0f, 0f, 0f };
	vector3 vLocal_512 = { 0f, 0f, 0f };
	float fLocal_515 = 0f;
	float fLocal_516 = 0f;
	vector3 vLocal_517 = { 0f, 0f, 0f };
	vector3 vLocal_520 = { 0f, 0f, 0f };
	int iLocal_523 = 0;
	int iLocal_524 = 0;
	int iLocal_525 = 0;
	int iLocal_526 = 0;
	int iLocal_527 = 0;
	char* sLocal_528 = NULL;
	char* sLocal_529 = NULL;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
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
	var uLocal_577 = -1;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 1097859072;
	var uLocal_587 = 1000;
	var uLocal_588 = 1067450368;
	var uLocal_589 = 5000;
	var uLocal_590 = 42;
	var uLocal_591 = 1103626240;
	var uLocal_592 = 1077936128;
	var uLocal_593 = 1106247680;
	var uLocal_594 = 1103101952;
	var uLocal_595 = 1097859072;
	var uLocal_596 = 1103626240;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = -1;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 1097859072;
	var uLocal_615 = 1000;
	var uLocal_616 = 1067450368;
	var uLocal_617 = 5000;
	var uLocal_618 = 42;
	var uLocal_619 = 1103626240;
	var uLocal_620 = 1077936128;
	var uLocal_621 = 1106247680;
	var uLocal_622 = 1103101952;
	var uLocal_623 = 1097859072;
	var uLocal_624 = 1103626240;
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	struct<2> Local_629[14];
	int iLocal_658 = 0;
	int iLocal_659 = 0;
	bool bLocal_660 = false;
	bool bLocal_661 = false;
	bool bLocal_662 = false;
	bool bLocal_663 = false;
	bool bLocal_664 = false;
	bool bLocal_665 = false;
	bool bLocal_666 = false;
	bool bLocal_667 = false;
	bool bLocal_668 = false;
	bool bLocal_669 = false;
	bool bLocal_670 = false;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	float fLocal_681 = 0f;
	float fLocal_682 = 0f;
	float fLocal_683 = 0f;
	float fLocal_684 = 0f;
	struct<17> Local_685[1];
	vector3 vLocal_703 = { 0f, NaNf, 0f };
	var uLocal_706 = -1;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = -1;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 1073741824;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 1;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 1106247680;
	var uLocal_730 = 1067450368;
	var uLocal_731 = 0;
	var uLocal_732 = 1092616192;
	var uLocal_733 = 1112014848;
	var uLocal_734 = 1106247680;
	var uLocal_735 = 1101529088;
	var uLocal_736 = 1101004800;
	var uLocal_737 = 1084227584;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	int iLocal_764 = 0;
	bool bLocal_765 = false;
	bool bLocal_766 = false;
	bool bLocal_767 = false;
	bool bLocal_768 = false;
	bool bLocal_769 = false;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	struct<2278> Var0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	vLocal_509 = { 1410.53f, 1168.41f, 183.697f };
	vLocal_512 = { 1413.379f, 1169.363f, 183.9591f };
	fLocal_515 = 200.3303f;
	fLocal_516 = 150f;
	vLocal_517 = { 1417.59f, 1171.82f, 184.09f };
	vLocal_520 = { 0f, 0f, 55.58f };
	iLocal_526 = GET_HASH_KEY("PG_LS_SOLDIER2_01X");
	iLocal_527 = GET_HASH_KEY("PG_TEAMSTER_WAGON05X_LIGHTUPGRADE1");
	sLocal_528 = "ls_soldier2_mountL";
	sLocal_529 = "ls_soldier2_mountR";
	bLocal_666 = true;
	fLocal_681 = 20f;
	fLocal_682 = 15f;
	fLocal_683 = 12f;
	fLocal_684 = 9f;
	iLocal_764 = -1;
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
	Var0.f_2216.f_26 = 1106247680;
	Var0.f_2216.f_27 = 1067450368;
	Var0.f_2216.f_29 = 1092616192;
	Var0.f_2216.f_30 = 1112014848;
	Var0.f_2216.f_31 = 1106247680;
	Var0.f_2216.f_32 = 1101529088;
	Var0.f_2216.f_33 = 1101004800;
	Var0.f_2216.f_34 = 1084227584;
	Var0.f_2277 = 1;
	Var0.f_2277.f_1.f_2 = 570;
	Var0.f_2277.f_1.f_3 = 1065353216;
	Var0.f_2277.f_1.f_4 = -1082130432;
	Var0.f_2277.f_1.f_9 = 3;
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

int func_10(char[4] cParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam1;
	PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
	if (PED::IS_PED_USING_ACTION_MODE(Global_35))
	{
		PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_370[0 /*8*/]))
	{
		OBJECT::DELETE_OBJECT(&(Local_370[0 /*8*/]));
	}
	MISC::SET_WEATHER_TYPE(GET_HASH_KEY("SUNNY"), true, true, false, 0f, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_506))
	{
		func_62(&iLocal_506, 1430.027f, 1192.439f, 182.8754f, 359.7534f, 0, 1, 1, 1);
	}
	if (iVar0 == 0)
	{
		if (PED::IS_PED_READY_TO_RENDER(Local_52))
		{
			iLocal_51 = 1;
			func_59(cParam0);
			if (func_63(Global_35, 1, 0, 0) == GET_HASH_KEY("GROUP_PISTOL") || func_63(Global_35, 1, 0, 0) == GET_HASH_KEY("GROUP_REVOLVER"))
			{
				iVar1 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 0);
				func_64(cParam0, iVar1, "w_revolver_cattleman01^1", 0, 0, 0);
			}
			else
			{
				iVar1 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 2);
				func_64(cParam0, iVar1, "w_revolver_cattleman01^1", 0, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_379[0 /*8*/]))
			{
				func_64(cParam0, Local_379[0 /*8*/], "w_revolver_cattleman01", 0, 0, 0);
			}
			func_65("LSSLD2_START", 0);
			func_66(1, 0);
			return 6;
		}
	}
	else if (iVar0 == 1)
	{
		if (!func_49(&uLocal_554))
		{
			if (func_67(cParam0, 1))
			{
				func_68(&uLocal_554);
			}
		}
		else if (func_69(&uLocal_554) > 2f)
		{
			func_70(*cParam0, func_41(1), func_41(2), 1, 2);
			func_66(0, 1);
			func_65("LSSLD2_START", 0);
			return 8;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_71(cParam0))
		{
			func_66(1, 1);
			func_65("LSSLD2_START", 0);
			return 6;
		}
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
	if (func_72(cParam0))
	{
		if (func_73(cParam0->f_346))
		{
			func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
			func_74(&(cParam0->f_32), &(cParam0->f_352));
			func_75(cParam0);
		}
		else
		{
			func_76(cParam0);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			func_77(0, 1, 1);
		}
		func_11(cParam0, 7);
	}
}

void func_13(char[4] cParam0)
{
	int iVar0;

	if (func_73(cParam0->f_346))
	{
		if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 32))
		{
			func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
			if (func_75(cParam0))
			{
				func_78(cParam0, 1);
				iVar0 = func_79(cParam0);
				func_11(cParam0, iVar0);
			}
		}
	}
	else
	{
		func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
		if (func_80(cParam0))
		{
			func_81(cParam0);
			func_78(cParam0, 0);
			iVar0 = func_79(cParam0);
			func_11(cParam0, iVar0);
		}
		else
		{
			func_77(0, 1, 1);
			PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_SKIP_CUTSCENE"), true);
			func_82(cParam0);
		}
	}
}

void func_14(char[4] cParam0)
{
	int iVar0;

	iVar0 = func_83(cParam0);
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
	func_84(*cParam0, 1, 1);
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		func_85(cParam0, 0, 1);
		MISC::_0x1096603B519C905F("");
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		func_86();
		func_87(0);
		func_88(&Global_1935630, 4);
	}
	if (func_89(*cParam0))
	{
		if (func_90(Global_1392626[*cParam0 /*32*/].f_8, 8))
		{
			func_91("OBJ_COMPLETE_NOT", 7500, 0, 1, 0, 0, -1, -1, 0);
		}
		else if (func_90(Global_1392626[*cParam0 /*32*/].f_8, 16))
		{
			func_91("OBJ_COMPLETE_AB", 7500, 0, 1, 0, 0, -1, -1, 0);
		}
		else
		{
			func_91("OBJ_COMPLETE_REC", 7500, 0, 1, 0, 0, -1, -1, 0);
		}
	}
	func_39(cParam0);
	func_43(&(cParam0->f_16), 1);
	bVar0 = false;
	bVar0 = true;
	if (bVar0)
	{
		func_92();
		func_93();
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
		func_92();
		func_93();
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
					func_94(1, 1);
					func_95(&(Global_1347343.f_11), 131072);
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
		func_97(Global_1392626[*cParam0 /*32*/].f_3, iVar2, &(cParam0->f_2208), func_96(), 0, 0);
	}
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		MISC::_0x1096603B519C905F("");
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		func_87(0);
		func_86();
		func_88(&Global_1935630, 4);
	}
	func_98(*cParam0);
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
		func_99(*cParam0);
	}
	if (func_100(64, 1, 1))
	{
		iVar0 = func_101(0);
		if (func_102(iVar0))
		{
			func_22(cParam0);
			func_23(cParam0);
			return;
		}
	}
	if (func_103())
	{
		func_22(cParam0);
		func_23(cParam0);
		return;
	}
	else if (!func_49(&(cParam0->f_2064)) || IntToFloat(func_52(&(cParam0->f_2064))) > func_104(cParam0))
	{
		func_50(&(cParam0->f_2064), 1);
		if (func_105(cParam0))
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
		func_92();
		func_93();
	}
}

void func_19(var uParam0, int iParam1)
{
	func_106(*uParam0, iParam1);
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
	func_107(cParam0);
	func_108(cParam0);
	func_109(cParam0);
	if ((cParam0->f_1 != 12 && func_110(cParam0) != 2) && !func_111(Global_1392626[*cParam0 /*32*/].f_10, 2))
	{
		func_112(*cParam0);
	}
	func_109(cParam0);
	func_113(&(cParam0->f_2210[0]), &(cParam0->f_2213[0]));
	func_113(&(cParam0->f_2210[1]), &(cParam0->f_2213[1]));
	if (func_110(cParam0) == 0)
	{
		func_114(*cParam0);
	}
	func_115(&(Global_1392626[*cParam0 /*32*/].f_11), 1, 0, 1);
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
		func_86();
	}
	func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 4);
	func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 512);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_24(var uParam0)
{
	func_116(uParam0, 0);
	func_27(uParam0, 0);
	func_117(uParam0, 1);
	func_118(uParam0, 1);
	func_119(uParam0, 0);
	func_120(uParam0, 1);
	func_121(uParam0, 1, 1, 1);
}

void func_25(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_122(&(uParam0->f_1), 8);
	}
	else
	{
		func_123(&(uParam0->f_1), 8);
	}
}

void func_26(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_122(&(uParam0->f_1), 2);
	}
	else
	{
		func_123(&(uParam0->f_1), 2);
	}
}

void func_27(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_122(&(uParam0->f_1), 2048);
	}
	else
	{
		func_123(&(uParam0->f_1), 2048);
	}
}

int func_28()
{
	return func_125(func_124());
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
	func_126(uParam0, "LSSOLAU");
	func_127(uParam0, 15);
	func_128(uParam0, 15);
	func_129(uParam0);
	func_130(&(uParam0->f_2041), Local_52.f_6);
	func_130(&(uParam0->f_2041), GET_HASH_KEY("S_M_Y_ARMY_01"));
	func_130(&(uParam0->f_2041), Local_350.f_5);
	func_130(&(uParam0->f_2041), Local_361[0 /*8*/].f_7);
	func_130(&(uParam0->f_2041), GET_HASH_KEY("P_HAMMER03X"));
	func_130(&(uParam0->f_2041), GET_HASH_KEY("WAGON05X"));
	func_130(&(uParam0->f_2041), Local_319[0 /*6*/].f_5);
	func_130(&(uParam0->f_2041), Local_319[1 /*6*/].f_5);
	func_130(&(uParam0->f_2041), GET_HASH_KEY("A_C_HORSE_MORGAN_FLAXENCHESTNUT"));
	PROPSET::_REQUEST_PROP_SET(iLocal_526);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_528);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_529);
	PED::ADD_RELATIONSHIP_GROUP("weathersRel", &iLocal_479);
	PED::ADD_RELATIONSHIP_GROUP("soldiersRel", &iLocal_480);
	MISC::CLEAR_AREA(Local_356.f_1, 50f, 2097152);
	HUD::_TEXT_BLOCK_DELETE(&(uParam0->f_2205));
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
		if (func_131(cParam0))
		{
			func_132(*cParam0, 1024);
			func_35(cParam0, 5);
			return true;
		}
	}
	if (func_100(0, 1, 0))
	{
		iVar0 = func_101(0);
		if (func_102(iVar0) && Global_1392626[*cParam0 /*32*/].f_3 != func_101(0))
		{
			func_133(&(Global_1392626[*cParam0 /*32*/].f_8), 1);
			func_35(cParam0, 6);
			return true;
		}
	}
	if (Global_1392626[*cParam0 /*32*/].f_12 != -1)
	{
		if (func_134(Global_1392626[*cParam0 /*32*/].f_12))
		{
			func_132(*cParam0, 2048);
			return true;
		}
	}
	if (Global_1392626[*cParam0 /*32*/].f_22 != -1)
	{
		if (!func_135(Global_1392626[*cParam0 /*32*/].f_22))
		{
			func_133(&(Global_1392626[*cParam0 /*32*/].f_8), 1);
			func_35(cParam0, 3);
			return true;
		}
	}
	if (func_136(*cParam0))
	{
		func_133(&(Global_1392626[*cParam0 /*32*/].f_8), 1);
		func_35(cParam0, 7);
		return true;
	}
	if (func_137(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		func_132(*cParam0, 16384);
		func_35(cParam0, 4);
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1392626[*cParam0 /*32*/].f_11))
	{
		if (!func_138(*cParam0, (Global_1392626[*cParam0 /*32*/].f_5 + 10f)))
		{
			func_35(cParam0, 2);
			return true;
		}
	}
	else if (func_139(Global_1392626[*cParam0 /*32*/].f_11, 1))
	{
		if (!func_90(Global_1392626[*cParam0 /*32*/].f_8, 256))
		{
			if (!func_138(*cParam0, (Global_1392626[*cParam0 /*32*/].f_5 + 10f)) && !func_140(Global_1392626[*cParam0 /*32*/].f_11, 0, &(cParam0->f_2077), &(cParam0->f_2105), 0, 0))
			{
				func_35(cParam0, 2);
				return true;
			}
		}
	}
	fVar1 = BUILTIN::VDIST2(Global_1392626[*cParam0 /*32*/].f_24, Global_36);
	if (func_141(fVar1))
	{
		func_132(*cParam0, 8192);
		func_35(cParam0, 5);
		return true;
	}
	return false;
}

void func_39(char[4] cParam0)
{
	func_142(cParam0);
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		func_86();
		func_143(0);
		if (!Global_1935630.f_12)
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
		}
		UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
		func_144();
	}
	func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 4);
	if (func_110(cParam0) != 2 && !func_111(Global_1392626[*cParam0 /*32*/].f_10, 2))
	{
		func_112(*cParam0);
	}
	func_109(cParam0);
	if (func_110(cParam0) == 0)
	{
		func_114(*cParam0);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	func_145();
	func_113(&(cParam0->f_2210[0]), &(cParam0->f_2213[0]));
	func_113(&(cParam0->f_2210[1]), &(cParam0->f_2213[1]));
	func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 8);
	func_146(cParam0);
}

void func_40(char[4] cParam0)
{
	if (!func_147(*cParam0, 4))
	{
		if (func_148(Global_35, Global_1392626[*cParam0 /*32*/].f_27, Global_1392626[*cParam0 /*32*/].f_4, 1, 1))
		{
			if (cParam0->f_2204 == -1)
			{
				cParam0->f_2204 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - cParam0->f_2204) > 120000)
			{
				func_149(*cParam0);
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
	if (iVar0 == 1 || iVar0 == 0)
	{
		Var1 = { 1410.855f, 1171.282f, 183.6008f };
		Var1.f_3 = 188.2421f;
	}
	else if (iVar0 == 2)
	{
		Var1 = { 1410.844f, 1170.692f, 183.6964f };
		Var1.f_3 = 302.8225f;
	}
	return Var1;
}

bool func_42(var uParam0)
{
	return func_150(*uParam0, uParam0->f_3);
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
		if (func_151(cParam0))
		{
			return true;
		}
	}
	return false;
}

void func_47(char[4] cParam0)
{
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	if (cParam0->f_1 > 3)
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (cParam0->f_1 <= 3 && HUD::TEXT_BLOCK_IS_LOADED("LOAN"))
	{
		if (!func_147(*cParam0, 4))
		{
			func_152(cParam0);
		}
	}
}

void func_48(char[4] cParam0)
{
	if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 16))
	{
		return;
	}
	if (func_153(cParam0->f_32.f_5))
	{
		cParam0->f_32.f_5 = { func_154(*cParam0) };
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
	if (func_73(cParam0->f_346))
	{
		if (func_155(&(cParam0->f_32), cParam0->f_346, 0, 1))
		{
			if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 32))
			{
				func_156(cParam0);
				func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 32);
			}
		}
		else
		{
			if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 64))
			{
				func_157(cParam0);
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
			func_157(cParam0);
		}
		func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 32);
	}
}

bool func_49(var uParam0)
{
	return func_158(*uParam0, 1);
}

void func_50(var uParam0, bool bParam1)
{
	if (bParam1 || !func_49(uParam0))
	{
		func_68(uParam0);
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
	if (func_159(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_160() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_53(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

bool func_54()
{
	return func_161(Global_1935630, 4096);
}

int func_55(var uParam0)
{
	func_162(&(uParam0->f_2041));
	func_163(&(uParam0->f_2052));
	HUD::TEXT_BLOCK_REQUEST("LOAN");
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2205)))
	{
	}
	else
	{
		HUD::TEXT_BLOCK_REQUEST(&(uParam0->f_2205));
	}
	if (((func_164(&(uParam0->f_2041)) && func_165(&(uParam0->f_2052))) && HUD::TEXT_BLOCK_IS_LOADED("LOAN")) && (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2205)) || HUD::TEXT_BLOCK_IS_LOADED(&(uParam0->f_2205))))
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
	if (func_166(536870912))
	{
		return true;
	}
	if (func_167(uParam0))
	{
		if (func_168())
		{
			if (func_169())
			{
				if (func_170())
				{
					if (func_171(0, 4, "pl_Leadin"))
					{
						func_172(&(uParam0->f_2106), Global_35, "ARTHUR", 0);
						func_172(&(uParam0->f_2106), Local_52, "LOAN_JWEATHERS", 0);
						func_173(536870912);
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_58(char[4] cParam0)
{
	struct<4> Var0;

	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (!func_174(Global_1392626[*cParam0 /*32*/].f_3))
	{
		if (!func_175(Global_1392626[*cParam0 /*32*/].f_3))
		{
			func_176(Global_1392626[*cParam0 /*32*/].f_3, 1);
		}
		func_177(Global_1392626[*cParam0 /*32*/].f_3, 1, 1);
		func_178(&Global_1935630, 4);
		func_179(4);
	}
	func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 4);
	func_112(*cParam0);
	MISC::_0x1096603B519C905F(func_180(*cParam0));
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	func_85(cParam0, 1, 0);
	AUDIO::CLEAR_CONVERSATION_HISTORY();
	func_143(1);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	func_181(1);
	func_182(cParam0);
	if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 512))
	{
		Var0 = { func_41(0) };
		if (!func_42(&Var0))
		{
			func_34(&(cParam0->f_16), 128);
		}
		func_70(*cParam0, func_41(0), func_41(1), 0, 1);
	}
}

void func_59(char[4] cParam0)
{
	cParam0->f_346 = func_183();
	func_184(cParam0, Local_52.f_1);
	func_185(cParam0, &(iLocal_499[2]));
	func_64(cParam0, Global_35, 0, 0, 0, 0);
	func_64(cParam0, Local_52, 0, 0, 0, 0);
	func_64(cParam0, Local_356, "WAGON05X", 0, 0, 0);
	func_64(cParam0, Local_370[0 /*8*/], "p_hammer03x", 0, 0, 0);
	func_64(cParam0, Local_379[0 /*8*/], "w_revolver_cattleman01", 0, 0, 0);
	func_64(cParam0, Local_361[0 /*8*/], "p_cratetools01x", 0, 0, 0);
	func_64(cParam0, Local_319[0 /*6*/], "Horse_01", 0, 0, 0);
	func_64(cParam0, Local_319[1 /*6*/], "Horse_01^1", 0, 0, 0);
	if (func_186())
	{
		if (iLocal_51 == 0)
		{
			func_187(&(cParam0->f_32), "1-HighHonor");
		}
		else
		{
			func_187(&(cParam0->f_32), "1-HighHonor-MultiStart");
		}
		func_189(&(cParam0->f_32), func_188("1-HighHonor-MultiStart"));
	}
	else
	{
		if (iLocal_51 == 0)
		{
			func_187(&(cParam0->f_32), "2-LowHonor");
		}
		else
		{
			func_187(&(cParam0->f_32), "2-LowHonor-MultiStart");
		}
		func_189(&(cParam0->f_32), func_188("2-LowHonor-MultiStart"));
	}
	func_191(cParam0, 26600);
	func_193(cParam0, 26686);
	func_195(&(cParam0->f_32), 27352);
	func_196(&(cParam0->f_32), 131072);
	func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
}

bool func_60(char[4] cParam0)
{
	if (!func_197(cParam0))
	{
		return false;
	}
	func_198(cParam0);
	if (!func_90(Global_1392626[*cParam0 /*32*/].f_8, 512))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_348)) && func_20(Global_1392626[*cParam0 /*32*/].f_9, 16))
		{
			if (func_90(Global_1392626[*cParam0 /*32*/].f_8, 2))
			{
				func_199(&(cParam0->f_352), cParam0->f_348, 0);
			}
			else
			{
				func_200(&(cParam0->f_352), cParam0->f_348, 0, 0);
				if (func_201(&(cParam0->f_352)))
				{
					return true;
				}
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(cParam0->f_346))
		{
			if (func_73(cParam0->f_346))
			{
				if (!func_153(cParam0->f_32.f_5))
				{
					if (VOLUME::DOES_VOLUME_EXIST(cParam0->f_2040))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, cParam0->f_2040, true, 0))
						{
							if (cParam0->f_17 == 2)
							{
								func_108(cParam0);
								return true;
							}
						}
					}
					else if (BUILTIN::VDIST2(Global_36, cParam0->f_32.f_5) < 6f)
					{
						if (cParam0->f_17 == 2)
						{
							func_108(cParam0);
							return true;
						}
					}
				}
				else if (BUILTIN::VDIST2(Global_36, cParam0->f_32.f_5) < 6f)
				{
					func_108(cParam0);
					return true;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1392626[*cParam0 /*32*/].f_11))
		{
			func_202(cParam0);
			if ((!PED::IS_PED_RAGDOLL(Global_35) && !PED::IS_PED_JUMPING(Global_35)) && !PED::IS_PED_INJURED(Global_1392626[*cParam0 /*32*/].f_11))
			{
				if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 1024))
				{
					func_203(&(Global_1392626[*cParam0 /*32*/].f_11), &(cParam0->f_2216), cParam0->f_2295, &(cParam0->f_2277), 0.1f, 3, 0, cParam0->f_2296, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
					if (func_204(&(cParam0->f_2216)))
					{
						func_109(cParam0);
						func_205(cParam0);
						func_108(cParam0);
						return true;
					}
				}
			}
		}
	}
	if (func_206(cParam0))
	{
		if (cParam0->f_17 == 2)
		{
			func_108(cParam0);
			return true;
		}
	}
	return false;
}

void func_61(char[4] cParam0)
{
	int iVar0;

	func_58(cParam0);
	func_207(&(cParam0->f_2277), 0, 0, 1, 0);
	func_109(cParam0);
	func_34(&(cParam0->f_16), 1);
	func_208(cParam0);
	func_11(cParam0, func_209(cParam0));
	iVar0 = func_209(cParam0);
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

int func_62(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
	*iParam0 = func_210(&iVar11, &Var0);
	if (iVar11 == 0)
	{
		return 0;
	}
	else if (iVar11 == 1)
	{
		return 0;
	}
	else if (iVar11 == 2)
	{
		if (!func_139(*iParam0, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_63(int iParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_64(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_211(&(cParam0->f_32), iParam1, sParam2, iParam3, iParam4, bParam5);
}

int func_65(char* sParam0, bool bParam1)
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

void func_66(int iParam0, int iParam1)
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

bool func_67(char[4] cParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		if (!bLocal_769)
		{
			func_212();
			return false;
		}
		else if (!bLocal_670)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_524))
			{
				func_213(&iLocal_524, GET_HASH_KEY("S_VEH_LANTERN_RF"));
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_525))
			{
				func_213(&iLocal_525, GET_HASH_KEY("S_VEH_LANTERN_LF"));
			}
			else
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_525, false, false);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_525, false);
				ENTITY::SET_ENTITY_PROOFS(iLocal_524, 5, false);
				ENTITY::SET_ENTITY_PROOFS(iLocal_525, 5, false);
				bLocal_670 = true;
			}
			return false;
		}
	}
	if (!func_166(1))
	{
		if (func_214())
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_356))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Local_356, 1412.128f, 1167.481f, 184.8345f, 283.7457f, false, true);
				ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(Local_356, false);
			}
			func_173(1);
		}
		return false;
	}
	if (!func_166(8192))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_60[iVar0 /*43*/]))
			{
				func_215(Local_60[iVar0 /*43*/]);
				if (iVar0 != 3)
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_60[iVar0 /*43*/], Local_60[iVar0 /*43*/].f_1, Local_60[iVar0 /*43*/].f_10, true, false, true);
				}
			}
			iVar0++;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_319[2 /*6*/]))
		{
			func_215(Local_319[2 /*6*/]);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_319[2 /*6*/], Local_60[3 /*43*/].f_1, Local_60[3 /*43*/].f_10, true, false, true);
		}
		func_173(8192);
		return false;
	}
	if (!func_166(-2147483648))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_60[iVar0 /*43*/]))
			{
				TASK::TASK_SEEK_COVER_TO_COORDS(Local_60[iVar0 /*43*/], Local_60[iVar0 /*43*/].f_4, Global_36, 10000, 0, 0, 0);
			}
			iVar0++;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_60[3 /*43*/]))
		{
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Local_60[3 /*43*/], Local_60[3 /*43*/].f_4, Global_35, 1.25f, 1, 4f, 5f, 0, 0, 0, GET_HASH_KEY("FIRING_PATTERN_BURST_FIRE"), -1, 0);
		}
		func_173(-2147483648);
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_52))
	{
		PED::SET_PED_CONFIG_FLAG(Local_52, 363, true);
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 363, true);
	if (!MISC::_DOES_ITEM_HAVE_VALID_BASE(iLocal_508))
	{
		iLocal_508 = TASK::ADD_COVER_POINT(vLocal_512, fLocal_515, 1, 2, 0, false);
		return false;
	}
	func_216();
	func_217(1430.027f, 1192.439f, 182.8754f, 359.7534f);
	func_218();
	iLocal_17 = 1;
	func_173(8);
	func_219(Local_52.f_1, 200f, 0);
	func_220(Local_52.f_1, 200f, 0, 0, 0, 0, 0);
	func_30(0, 0);
	func_221();
	return true;
}

void func_68(var uParam0)
{
	func_222(uParam0, 0f);
}

float func_69(var uParam0)
{
	if (!func_49(uParam0))
	{
		return 0f;
	}
	if (func_159(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_223() - uParam0->f_1);
}

void func_70(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<4> Var4;

	if (func_9() != iParam9)
	{
		func_224(0);
	}
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_225(Global_1392626[iParam0 /*32*/].f_3, Var0, Var4, iParam9, iParam10);
}

bool func_71(char[4] cParam0)
{
	if (!bLocal_769)
	{
		bLocal_769 = true;
	}
	if (!func_226())
	{
		return false;
	}
	if (!func_166(8))
	{
		func_37(&(Global_1392626[4 /*32*/].f_9), 16);
		func_67(cParam0, 0);
	}
	else if (!func_166(131072))
	{
		if (func_227())
		{
			func_173(131072);
		}
	}
	else if (!func_166(64))
	{
		if (func_171(1, 4, "PL_LOOP"))
		{
			func_228();
			func_173(64);
			func_173(1048576);
		}
	}
	else if (!func_20(Global_1392626[4 /*32*/].f_9, 16))
	{
		if (!func_166(16))
		{
			func_229(&(Local_319[0 /*6*/]));
			func_229(&(Local_319[1 /*6*/]));
			func_230();
			func_229(&(Local_319[2 /*6*/]));
			func_229(&(Local_319[3 /*6*/]));
			func_229(&(Local_319[4 /*6*/]));
		}
		else if (func_231())
		{
			func_64(cParam0, iLocal_507, "Horse_01", 0, 0, 0);
			func_219(Local_52.f_1, 200f, 0);
			func_220(Local_52.f_1, 200f, 0, 0, 0, 0, 0);
			iLocal_17 = 1;
			func_232(cParam0);
		}
	}
	else if (func_20(Global_1392626[4 /*32*/].f_9, 32))
	{
		return true;
	}
	return false;
}

bool func_72(char[4] cParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_348)))
	{
		if (!func_200(&(cParam0->f_352), cParam0->f_348, 0, 0))
		{
			return false;
		}
	}
	else
	{
		func_77(1, 1, 1);
		func_233(cParam0);
		if (!func_234(cParam0))
		{
			return false;
		}
		if (func_235())
		{
			func_236(1);
			return false;
		}
	}
	if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 32))
	{
		return false;
	}
	return true;
}

bool func_73(char* sParam0)
{
	return (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && ANIMSCENE::_0x5D7BFDA2290B4E39(sParam0));
}

void func_74(var uParam0, var uParam1)
{
	struct<8> Var0;

	if (func_237(uParam1, 32768))
	{
		Var0 = { func_238(uParam0) };
		func_239(uParam0, &Var0);
		if (func_237(uParam1, 131072))
		{
			func_196(uParam0, 268435456);
			if (func_153(uParam0->f_289))
			{
				uParam0->f_289 = { func_240(uParam1, uParam1->f_1450) };
			}
			if (func_153(uParam0->f_286))
			{
				uParam0->f_286 = { func_240(uParam1, uParam1->f_1450) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_286, &(uParam0->f_286.f_2), false);
				uParam0->f_286.f_2 = (uParam0->f_286.f_2 + 0.5f);
			}
		}
		if (func_237(uParam1, 268435456))
		{
			func_241(&(uParam0->f_284), 16384);
		}
	}
	else if (func_237(uParam1, 524288))
	{
		func_196(uParam0, 67108864);
		func_242(uParam1, 524288);
	}
	if (func_243(uParam1, 128))
	{
		func_196(uParam0, 32);
	}
	if (uParam1->f_1669 != 0)
	{
		uParam0->f_296 = uParam1->f_1669;
		if (uParam1->f_1450 >= 0 && func_244(&(uParam1->f_782[uParam1->f_1450 /*41*/]), 256))
		{
			func_241(&(uParam0->f_284), 524288);
		}
	}
	if (*uParam1 == 0 && CAM::_0x927B810E43E99932(&(uParam1->f_1458)))
	{
		MISC::_COPY_MEMORY(&(uParam0->f_297), &(uParam1->f_1458), 16);
	}
}

int func_75(char[4] cParam0)
{
	char cVar0[32];

	StringCopy(&cVar0, cParam0->f_346, 32);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 1;
	}
	return func_245(cVar0, &(cParam0->f_32), cParam0);
}

void func_76(char[4] cParam0)
{
	TASK::CLEAR_PED_TASKS(Global_35, true, false);
	if (ENTITY::DOES_ENTITY_EXIST(Global_1392626[*cParam0 /*32*/].f_11))
	{
		TASK::TASK_LOOK_AT_ENTITY(Global_35, Global_1392626[*cParam0 /*32*/].f_11, -1, 0, 51, 0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Global_1392626[*cParam0 /*32*/].f_11, -1, -1f, -1f, -1f);
	}
}

void func_77(int iParam0, int iParam1, int iParam2)
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

void func_78(char[4] cParam0, bool bParam1)
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
	if (func_73(cParam0->f_346))
	{
		func_246(&(cParam0->f_32));
	}
	else
	{
		func_247(cParam0);
	}
	func_248(&(cParam0->f_32));
	StringCopy(&(cParam0->f_348), "", 32);
}

int func_79(char[4] cParam0)
{
	int iVar0;

	if (iLocal_17 == 0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 1)
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_361[iVar0 /*8*/], Local_361[iVar0 /*8*/].f_1, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(Local_361[iVar0 /*8*/], Local_361[iVar0 /*8*/].f_4, 2, false);
			iVar0++;
		}
		func_217(1430.027f, 1192.439f, 182.8754f, 359.7534f);
		func_218();
		iLocal_17 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(Local_356))
		{
			ENTITY::SET_ENTITY_PROOFS(Local_356, 0, false);
		}
		AICOVERPOINT::_0x1A7A802B2301EDC0(Global_35);
		bLocal_666 = true;
		bLocal_668 = false;
		func_70(*cParam0, func_41(1), func_41(2), 1, 2);
		return 8;
	}
	else if (iLocal_17 == 1)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 1)
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_361[iVar0 /*8*/], Local_361[iVar0 /*8*/].f_1, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(Local_361[iVar0 /*8*/], Local_361[iVar0 /*8*/].f_4, 2, false);
			iVar0++;
		}
		func_217(1420.327f, 1191.839f, 182.4411f, 199.9238f);
		func_218();
		func_229(&Local_52);
		func_229(&Local_350);
		func_229(&iLocal_507);
		func_229(&(Local_319[0 /*6*/]));
		func_229(&(Local_319[1 /*6*/]));
		return 9;
	}
	else if (iLocal_17 == 2)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 1)
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_361[iVar0 /*8*/], Local_361[iVar0 /*8*/].f_1, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(Local_361[iVar0 /*8*/], Local_361[iVar0 /*8*/].f_4, 2, false);
			iVar0++;
		}
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, 1420.332f, 1178.28f, 183.6531f, 141.6994f, true, false, true);
		func_217(1420.327f, 1191.839f, 182.4411f, 199.9238f);
		func_218();
		func_229(&Local_52);
		func_229(&Local_350);
		func_229(&iLocal_507);
		func_229(&(Local_319[0 /*6*/]));
		func_229(&(Local_319[1 /*6*/]));
		return 9;
	}
	return 8;
}

bool func_80(char[4] cParam0)
{
	return false;
}

void func_81(char[4] cParam0)
{
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
}

void func_82(char[4] cParam0)
{
}

int func_83(var uParam0)
{
	int iVar0;

	if (!func_166(134217728))
	{
		AUDIO::_0x6339C1EA3979B5F7("Gunfight", "LSSLD1_Scenes");
		func_173(134217728);
	}
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vLocal_509, 15f) > 0)
	{
		FIRE::STOP_FIRE_IN_RANGE(vLocal_509, 15f);
	}
	func_249();
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_250(uParam0, iVar0);
		iVar0++;
	}
	if (func_49(&uLocal_560))
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
	switch (iLocal_15)
	{
		case 0:
			func_251(uParam0);
			break;
		case 1:
			func_252(uParam0);
			break;
		case 2:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (func_63(Global_35, 1, 0, 0) == GET_HASH_KEY("GROUP_PISTOL") || func_63(Global_35, 1, 0, 0) == GET_HASH_KEY("GROUP_REVOLVER"))
			{
				func_64(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 0), "w_revolver_cattleman01^1", 0, 0, 0);
			}
			else
			{
				func_64(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 2), "w_revolver_cattleman01^1", 0, 0, 0);
			}
			func_64(uParam0, iLocal_507, "Horse_01", 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_356))
			{
				ENTITY::SET_ENTITY_PROOFS(Local_356, 0, false);
			}
			func_253(&uLocal_560);
			return 7;
	}
	return 8;
}

void func_84(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_254(iParam0))
	{
		return;
	}
	else if (!func_102(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (!func_255(1))
	{
		func_256(1);
	}
	func_112(iParam0);
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
		Global_40.f_9422[2 /*7*/] = func_257();
		func_258(&(Global_40.f_9422[2 /*7*/]), 0, 0, 0, 3, 0, 0, 0);
	}
	func_259(Global_1392626[iParam0 /*32*/].f_3, bParam2, bParam1, 0, 1);
	if (Global_1392626[iParam0 /*32*/].f_7 != -1)
	{
		func_260(Global_1392626[iParam0 /*32*/].f_7);
	}
}

void func_85(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_261(0))
	{
		if (func_262(0))
		{
			func_263(0);
		}
	}
	if (func_261(1))
	{
		if (func_262(1))
		{
			func_263(1);
		}
	}
}

void func_86()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_87(bool bParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_264() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13) && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_265(iVar0, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = iVar0;
		Global_1898077.f_8 = func_266();
		Global_1898077.f_9 = func_267(Global_1894899.f_2);
		func_268(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	Global_1898077.f_2 = 0;
}

void func_88(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_89(int iParam0)
{
	return func_90(Global_1392626[iParam0 /*32*/].f_8, 64);
}

bool func_90(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

var func_91(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 1);
	}
	if (Global_1572887.f_12 != -1)
	{
		return func_269(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_270(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_269(sVar0, iParam1, 0, 0, 1, 1);
}

void func_92()
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

void func_93()
{
	Global_1572864.f_8 = -1;
	Global_1572864.f_9 = -1;
	Global_1572864.f_10 = -1;
	func_224(0);
	func_271(0);
	func_272(0);
	func_273(0);
	func_274(0);
	func_275(1f);
}

void func_94(bool bParam0, bool bParam1)
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
		func_276(0);
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

void func_95(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_96()
{
	return false;
}

void func_97(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_277(Global_1347343.f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_95(&(Global_1347343.f_11), 64);
	}
	if (bParam4)
	{
		func_95(&(Global_1347343.f_11), 16384);
	}
	if (func_278() >= 2)
	{
		if (!func_277(Global_1347343.f_11, 16384))
		{
			func_95(&(Global_1347343.f_11), 8);
		}
		func_275(0.88f);
	}
	StringCopy(&(Global_1347343.f_3), sParam2, 64);
	Global_1347343.f_2 = uParam0;
	Global_1347343 = 0;
	Global_1347343.f_1 = iParam1;
	func_178(&Global_1935630, 2048);
	func_279(bParam5);
}

void func_98(int iParam0)
{
	if (!func_254(iParam0))
	{
		return;
	}
	else if (!func_102(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	func_112(iParam0);
	func_133(&(Global_1392626[iParam0 /*32*/].f_8), 1);
	if (iParam0 == 2)
	{
		Global_40.f_9422[2 /*7*/] = func_257();
		func_258(&(Global_40.f_9422[2 /*7*/]), 0, 0, 0, 3, 0, 0, 0);
	}
	Global_40.f_9052.f_1[iParam0] = func_257();
	func_258(&(Global_40.f_9052.f_1[iParam0]), 0, 0, 2, 0, 0, 0, 0);
	func_280(Global_1392626[iParam0 /*32*/].f_3);
	func_281(Global_1392626[iParam0 /*32*/].f_3, 0);
}

void func_99(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	char* sVar3;

	if (func_147(iParam0, 4))
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
	if (func_147(iParam0, 4))
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
			Global_1392626[iParam0 /*32*/].f_23 = func_282(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 4096 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_MEMORY", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_282(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 2048 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_WANTED_REGION", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_282(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 16384 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_PREV_WANTED", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_282(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 8192 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_COMBAT", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_282(sVar3, 10000, 0, 0, 0, 1);
		}
		func_29(&(Global_1392626[iParam0 /*32*/].f_9), 8192);
	}
}

bool func_100(int iParam0, bool bParam1, bool bParam2)
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
		if (func_283())
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
		iVar0 = func_284(Global_1898164.f_1[0 /*5*/]);
		if (func_285(iVar0) && func_286(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_102(Global_1898164.f_1[0 /*5*/]))
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

int func_101(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

bool func_102(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_103()
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

float func_104(var uParam0)
{
	return 0f;
}

bool func_105(var uParam0)
{
	bool bVar0;

	bVar0 = false;
	if (func_110(uParam0) == 0)
	{
		bVar0 = true;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		if (!func_166(2097152))
		{
			if (func_171(1, 4, "PL_POST_CUTSCENE"))
			{
				if (func_69(&uLocal_539) > 3f)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_356))
					{
						ENTITY::SET_ENTITY_PROOFS(Local_356, 0, false);
						FIRE::START_ENTITY_FIRE(Local_356, 0f, -1, 6);
						func_68(&uLocal_539);
						func_173(2097152);
					}
				}
			}
		}
		else if (!func_166(4194304))
		{
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_356, false, false), 8f))
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_18[1 /*16*/]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_18[1 /*16*/]);
				}
			}
			if (func_69(&uLocal_539) > 170f)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_18[1 /*16*/]))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_18[1 /*16*/], "Bool", true, false);
				}
				func_287();
				func_253(&uLocal_539);
				func_173(4194304);
			}
		}
	}
	else if (bLocal_663)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_18[0 /*16*/]))
		{
			if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(Local_18[0 /*16*/], "cs_JohnWeathers"))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_52))
				{
					TASK::TASK_FLEE_PED(Local_52, Global_35, 3, 256, -1082130432 /* Float: -1f */, -1, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_52, false);
				}
				func_288(0);
				bLocal_663 = false;
			}
			else
			{
				TASK::_0x2E1D6D87346BB7D2(Local_52, Global_35, 1, 0);
			}
		}
	}
	else if (func_110(uParam0) == 5 || func_110(uParam0) == 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_52))
		{
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_18[0 /*16*/]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_18[0 /*16*/], true, false))
			{
				if (func_289(0, "pl_exit"))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_52, Global_35, 7000, 0, 51, 0);
					bLocal_663 = true;
				}
			}
		}
	}
	if (!func_290(2097152))
	{
		if (!func_290(1048576))
		{
			if (func_290(262144))
			{
				func_291(2, -1349931633, 1, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				func_292(1048576);
			}
			else if (func_290(524288))
			{
				func_291(13, -1349931633, 1, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				func_292(1048576);
			}
		}
	}
	if (func_110(uParam0) == 0)
	{
		if (!func_148(Global_35, Global_1392626[*uParam0 /*32*/].f_24, 150f, 1, 1))
		{
			if (bVar0)
			{
				if (func_290(1048576) || func_290(2097152))
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
		}
		else
		{
			return false;
		}
	}
	else if (!func_148(Global_35, Global_1392626[*uParam0 /*32*/].f_24, 250f, 1, 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_52))
		{
			if (func_293(Local_52, 1117782016 /* Float: 80f */))
			{
				func_229(&Local_52);
			}
			return false;
		}
		return true;
	}
	else
	{
		return false;
	}
	return true;
}

void func_106(int iParam0, int iParam1)
{
	if (!func_254(iParam0))
	{
		return;
	}
	else if (!func_102(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (func_174(Global_1392626[iParam0 /*32*/].f_3) || func_175(Global_1392626[iParam0 /*32*/].f_3))
	{
		func_294(Global_1392626[iParam0 /*32*/].f_3, 0, 2);
	}
	if (iParam1 == 0)
	{
		MISC::CLEAR_BIT(&(Global_40.f_9052), iParam0);
		func_112(iParam0);
	}
}

void func_107(char[4] cParam0)
{
	if (!func_166(65536))
	{
		func_288(0);
	}
	func_295(1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 363, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 276, false);
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_18[1 /*16*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_18[1 /*16*/]);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_18[0 /*16*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_18[0 /*16*/]);
	}
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_528);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_529);
	FIRE::_0x68F6A75FDF5A70D6(Local_356.f_1, 0f);
	func_287();
	FIRE::STOP_FIRE_IN_RANGE(Local_356.f_1, 20f);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_356.f_1, 20f);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_524))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_524);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_525))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_525);
	}
	func_296(&uLocal_671, 1);
	func_296(&uLocal_672, 1);
	func_296(&uLocal_673, 1);
	func_297(&Local_356);
	PROPSET::_SET_PROP_SET_AS_NO_LONGER_NEEDED(iLocal_523);
	if (func_166(134217728))
	{
		AUDIO::_0x9428447DED71FC7E("LSSLD1_Scenes");
		func_298(134217728);
	}
	func_299(&uLocal_481);
	func_65("LSSLD2_END", 0);
}

void func_108(char[4] cParam0)
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
	func_253(&(cParam0->f_17.f_12));
}

void func_109(char[4] cParam0)
{
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 1024))
	{
		func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 1024);
		if (func_139(Global_1392626[*cParam0 /*32*/].f_11, 0))
		{
			func_207(&(cParam0->f_2277), 0, 0, 1, 0);
			func_300(&(Global_1392626[*cParam0 /*32*/].f_11));
		}
	}
}

int func_110(char[4] cParam0)
{
	return cParam0->f_15;
}

bool func_111(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_112(int iParam0)
{
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	if (MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/]))
	{
		func_301(&(Global_1392626[iParam0 /*32*/].f_10));
		MAP::REMOVE_BLIP(&(Global_1392626[iParam0 /*32*/]));
	}
	if (MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/].f_1))
	{
		func_301(&(Global_1392626[iParam0 /*32*/].f_10));
		MAP::REMOVE_BLIP(&(Global_1392626[iParam0 /*32*/].f_1));
	}
}

void func_113(var uParam0, var uParam1)
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

void func_114(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392626[iParam0 /*32*/].f_30))
	{
		func_302(Global_1392626[iParam0 /*32*/].f_30);
		VOLUME::_DELETE_VOLUME(Global_1392626[iParam0 /*32*/].f_30);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392626[iParam0 /*32*/].f_31))
	{
		func_302(Global_1392626[iParam0 /*32*/].f_31);
		VOLUME::_DELETE_VOLUME(Global_1392626[iParam0 /*32*/].f_31);
	}
	if (iParam0 == 4)
	{
		func_303(1411.856f, 1166.743f, 184.1507f, 200f, 5);
	}
}

void func_115(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_116(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_122(&(uParam0->f_1), 16384);
	}
	else
	{
		func_123(&(uParam0->f_1), 16384);
	}
}

void func_117(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_122(&(uParam0->f_1), 256);
	}
	else
	{
		func_123(&(uParam0->f_1), 256);
	}
}

void func_118(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_123(uParam0, 16);
	}
	else
	{
		func_122(uParam0, 67108864);
		func_122(uParam0, 16);
	}
}

void func_119(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_122(&(uParam0->f_1), 128);
	}
	else
	{
		func_123(&(uParam0->f_1), 128);
	}
}

void func_120(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_123(uParam0, 256);
	}
	else
	{
		func_122(uParam0, 256);
	}
}

void func_121(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_123(uParam0, 268435456);
	}
	else
	{
		func_122(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_123(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_122(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_123(uParam0, 536870912);
	}
	else
	{
		func_122(uParam0, 536870912);
	}
}

void func_122(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_123(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_124()
{
	return Global_1572864.f_8;
}

int func_125(int iParam0)
{
	if (func_304(iParam0) == 6)
	{
		if (func_284(iParam0) == 0)
		{
			return func_305(iParam0);
		}
	}
	return -1;
}

void func_126(var uParam0, char* sParam1)
{
	StringCopy(&(uParam0->f_2205), sParam1, 24);
}

void func_127(var uParam0, int iParam1)
{
	uParam0->f_12 = iParam1;
}

void func_128(var uParam0, int iParam1)
{
	uParam0->f_13 = iParam1;
}

void func_129(var uParam0)
{
	func_306();
	func_307();
	func_308();
	func_309();
	func_310();
	func_311();
	func_312();
	func_313();
	func_314();
	iLocal_476 = func_315(285212672, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
	STREAMING::REQUEST_MODEL(WEAPON::_GET_WEAPONTYPE_MODEL(iLocal_476), false);
	iLocal_477 = func_316(7340032, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
	STREAMING::REQUEST_MODEL(WEAPON::_GET_WEAPONTYPE_MODEL(iLocal_477), false);
	iLocal_478 = func_316(7340032, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
	STREAMING::REQUEST_MODEL(WEAPON::_GET_WEAPONTYPE_MODEL(iLocal_478), false);
	func_317(uParam0, Local_52.f_1, 0f, 0f, 0f, 15f, 15f, 15f);
	func_318(uParam0, fLocal_681, fLocal_682, fLocal_683, fLocal_684, 1f, 0);
	func_133(&(Global_1392626[*uParam0 /*32*/].f_8), 512);
	func_133(&(Global_1392626[*uParam0 /*32*/].f_8), 128);
	func_24(&uLocal_569);
	func_24(&uLocal_597);
	func_25(&uLocal_597, 0);
}

int func_130(var uParam0, int iParam1)
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
	iVar1 = func_319(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

bool func_131(var uParam0)
{
	if (func_320())
	{
		return true;
	}
	return false;
}

void func_132(int iParam0, int iParam1)
{
	if (!func_254(iParam0))
	{
		return;
	}
	func_321(&(Global_1392626[iParam0 /*32*/].f_10), iParam1);
	func_321(&(Global_1392626[iParam0 /*32*/].f_10), 2);
	func_133(&(Global_1392626[iParam0 /*32*/].f_8), 1);
}

void func_133(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_134(int iParam0)
{
	if (!func_322(iParam0))
	{
		return false;
	}
	return func_323(iParam0, 33554432);
}

bool func_135(int iParam0)
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
	iVar0 = func_324(func_257());
	if (func_325(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_325(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_325(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_325(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_325(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_325(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_325(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_325(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_325(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_325(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_325(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_325(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_325(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_325(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_325(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_325(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_325(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_136(int iParam0)
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
		if (func_326(21))
		{
			return true;
		}
	}
	return false;
}

bool func_137(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_327(iParam0, bParam1, bParam2, bParam3))
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

bool func_138(int iParam0, float fParam1)
{
	if (BUILTIN::VDIST2(Global_1392626[iParam0 /*32*/].f_24, Global_36) > (fParam1 * fParam1) && iParam0 != func_125(Global_1572864.f_8))
	{
		return false;
	}
	return true;
}

bool func_139(int iParam0, int iParam1)
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
	if (func_328(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_328(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_328(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_328(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_328(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_328(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_328(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_328(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_140(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_329(uParam2, 1, iVar0);
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
			if (func_330(iParam0, uParam2))
			{
				*iParam3 = 128;
				func_331(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_332(iParam0, uParam2))
				{
					*iParam3 = 8;
					func_331(iParam0, uParam2, *iParam3);
					return true;
				}
				else if (func_333(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					func_331(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_334(iParam0, uParam2))
				{
					*iParam3 = 64;
					func_331(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_327(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_331(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_335(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_336(Global_35, iParam0, uParam2))
					{
						*iParam3 = 4;
						func_331(iParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_337(Global_35, iParam0, uParam2))
					{
						*iParam3 = 256;
						func_331(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_338(Global_35, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					func_331(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (func_338(Global_35, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				func_331(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_339(iParam0, uParam2))
				{
					*iParam3 = 32;
					func_331(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_340(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					func_331(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_341(uParam2, 4000))
				{
					if ((func_342(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_343(uParam2, iParam0)) && func_344(uParam2, iParam0))
					{
						*iParam3 = 2;
						func_331(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_342(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_343(uParam2, iParam0)) && func_344(uParam2, iParam0))
				{
					*iParam3 = 2;
					func_331(iParam0, uParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_345(iParam0, Global_1935630.f_41))
							{
								func_346();
								*iParam3 = 2;
								func_331(iParam0, uParam2, *iParam3);
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
						if (func_345(iParam0, Global_1935630.f_41))
						{
							func_346();
							*iParam3 = 2;
							func_331(iParam0, uParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_347(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_160() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_346();
						*iParam3 = 2;
						func_331(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_348())
					{
						if (func_345(iParam0, Global_1935630.f_42))
						{
							func_346();
							*iParam3 = 2;
							func_331(iParam0, uParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_349(uParam2, iParam0))
			{
				*iParam3 = 1024;
				func_331(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_350(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					func_331(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_351(iParam0, uParam2))
					{
						*iParam3 = 8192;
						func_331(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_352(iParam0, uParam2))
				{
					*iParam3 = 32768;
					func_331(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_353(uParam2, 4000))
				{
					if (func_354(&iParam0, uParam2))
					{
						*iParam3 = 512;
						func_331(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_355(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_4 = 0;
					func_331(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_356(uParam2, iParam0))
			{
				*iParam3 = 1;
				func_331(iParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_141(float fParam0)
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

void func_142(char[4] cParam0)
{
	int iVar0;

	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	func_357(cParam0, 1);
	func_86();
	func_207(&Local_685, 1, 1, 1, 0);
	vLocal_703.f_2 = 0;
	func_300(&Local_52);
	if (func_110(cParam0) == 0)
	{
		FIRE::_0x68F6A75FDF5A70D6(Local_356.f_1, 0f);
		VEHICLE::_0x850CE59DEC2028F3(Local_356, 1);
		func_68(&uLocal_539);
		if (func_290(262144))
		{
			func_358(GET_HASH_KEY("PROVISION_LOCKET_SILVER"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		}
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_60[iVar0 /*43*/]))
			{
				ENTITY::_SET_ENTITY_CARRYING_FLAG(Local_60[iVar0 /*43*/], 2, true);
				ENTITY::_SET_ENTITY_CARRYING_FLAG(Local_60[iVar0 /*43*/], 3, true);
			}
			iVar0++;
		}
		func_288(1);
	}
	else if (func_110(cParam0) == 5 || func_110(cParam0) == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_524))
		{
			ENTITY::SET_ENTITY_PROOFS(iLocal_524, 0, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_356))
		{
			if (ENTITY::_IS_ENTITY_FROZEN(Local_356))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_356, false);
			}
		}
		func_288(0);
	}
	if (func_166(134217728))
	{
		AUDIO::_0x9428447DED71FC7E("LSSLD1_Scenes");
		func_298(134217728);
	}
	func_65("LSSLD2_END", 0);
}

void func_143(int iParam0)
{
	Global_36580 = iParam0;
}

void func_144()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1347702)
	{
		if (func_285(iVar0))
		{
			if (func_359(iVar0, 4))
			{
				if (func_359(iVar0, 16))
				{
					func_360(iVar0, 1);
				}
				if (func_359(iVar0, 8))
				{
					func_361(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_145()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

void func_146(char[4] cParam0)
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
		iVar1 = func_110(cParam0);
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

bool func_147(int iParam0, int iParam1)
{
	if (func_254(iParam0))
	{
		return (Global_40.f_9052.f_11[iParam0] && iParam1) != 0;
	}
	return false;
}

bool func_148(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_362(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_149(int iParam0)
{
	if (!func_147(iParam0, 8))
	{
		func_112(iParam0);
		func_363(iParam0);
		func_364(iParam0, 8);
	}
}

int func_150(vector3 vParam0, var uParam3)
{
	int iVar0;

	if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) != 1)
	{
		func_365(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_63(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_366(0, 0);
		if (func_367(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			func_368(1, 0);
		}
	}
	else
	{
		func_368(1, 0);
	}
	func_271(0);
	func_369(0, vParam0, uParam3);
	return 1;
}

bool func_151(char[4] cParam0)
{
	if (cParam0->f_1 == 8)
	{
		if (Local_52.f_5 == 5)
		{
			if (!CAM::_0x1204EB53A5FBC63D())
			{
				StringCopy(&(cParam0->f_2208), "SOL2_FAIL_1", 16);
				return true;
			}
		}
		if (func_140(Local_52, 0, &uLocal_569, &iLocal_625, 1, 0))
		{
			if (iLocal_625 == 8)
			{
				if (iLocal_628 < 3)
				{
					if (!func_49(&uLocal_542))
					{
						func_68(&uLocal_542);
					}
					else if (iLocal_628 == 0 || func_69(&uLocal_542) > 10f)
					{
						func_370(Local_629[3 /*2*/], 0);
						if (func_371(cParam0, Local_629[13 /*2*/], 0))
						{
							if (func_290(2048))
							{
								func_68(&uLocal_536);
							}
							func_68(&uLocal_542);
							iLocal_628++;
						}
					}
				}
			}
			else if (iLocal_625 == 2)
			{
				StringCopy(&(cParam0->f_2208), "SOL2_FAIL_3", 16);
				return true;
			}
		}
		if (func_372(cParam0, "SOL2_RETURN", "SOL2_FAIL_2", 1416.263f, 1150.719f, 183.66f, 0, 50f, 70f, 30f))
		{
			return true;
		}
	}
	return false;
}

void func_152(char[4] cParam0)
{
	if (!func_290(2))
	{
		if ((func_148(Global_35, Global_1392626[*cParam0 /*32*/].f_27, Global_1392626[*cParam0 /*32*/].f_4, 1, 1) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_IN())
		{
			func_373(cParam0, "OBJ_SEARCH_SOL2", Local_52.f_1);
			func_292(2);
		}
	}
	else if (!func_290(4))
	{
		func_269("OBJ_SEARCH_SOL2", 7500, 0, 0, 0, 1);
		MISC::SET_WEATHER_TYPE(GET_HASH_KEY("SUNNY"), false, true, true, 60f, false);
		func_292(4);
	}
}

bool func_153(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

Vector3 func_154(int iParam0)
{
	if (!func_254(iParam0))
	{
		return Global_36;
	}
	return Global_1392626[iParam0 /*32*/].f_24;
}

bool func_155(var uParam0, char* sParam1, bool bParam2, bool bParam3)
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
			return (func_374(uParam0, 256) && !func_374(uParam0, 4194304));
		}
		uParam0->f_295 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	func_375(uParam0, sParam1);
	if (!func_374(uParam0, 64))
	{
		if (!func_153(func_376(uParam0)))
		{
			func_196(uParam0, 64);
		}
		else
		{
			vVar0 = { func_377(uParam0) };
			if (!func_153(vVar0))
			{
				func_378(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = func_379(Global_35, func_376(uParam0), 1);
	if (func_374(uParam0, 128) || func_374(uParam0, 256))
	{
		if ((fVar3 >= func_380(uParam0) && !bParam2) || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228))
		{
			if (uParam0->f_313)
			{
				func_381();
				uParam0->f_313 = 0;
			}
			func_382(uParam0);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_228);
			}
			func_246(uParam0);
			func_383(uParam0, 128, 1);
			func_383(uParam0, 256, 1);
			func_383(uParam0, 4096, 1);
			func_383(uParam0, 32768, 1);
			func_383(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_384(uParam0) || bParam2)
	{
		if (!func_374(uParam0, 128))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228))
			{
				if (func_384(uParam0) >= func_380(uParam0))
				{
				}
				Var4 = { func_385(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					func_386(uParam0);
				}
				Var4 = { func_385(uParam0) };
				iVar12 = 256;
				if (!func_374(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_228 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_224), iVar12, &Var4, false, true);
				func_387(uParam0, 0, 0, 0, 0);
				func_196(uParam0, 128);
			}
		}
	}
	if (func_374(uParam0, 128))
	{
		if (func_374(uParam0, 256) && !func_374(uParam0, 4194304))
		{
			return true;
		}
		func_388(uParam0);
		if (!uParam0->f_313)
		{
			if (func_389())
			{
				func_390(4096);
				uParam0->f_313 = 1;
			}
		}
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_228, true, false))
		{
			bVar13 = true;
			Var15 = { func_238(uParam0) };
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
			if (!func_374(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_228, &Var15))
				{
					if (!func_374(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_228, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_228, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_228, &Var15))
						{
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_228, &Var15);
						}
						func_196(uParam0, 16777216);
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
			func_196(uParam0, 256);
			func_383(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

void func_156(char[4] cParam0)
{
}

void func_157(char[4] cParam0)
{
	char cVar0[64];
	struct<4> Var8;

	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 64))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(cParam0->f_32.f_4) && !func_153(cParam0->f_32.f_5))
	{
		StringCopy(&cVar0, func_391(*cParam0), 64);
		StringConCat(&cVar0, ".VolRestrictCutscene", 64);
		cParam0->f_32.f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(cParam0->f_32.f_5, 0f, 0f, 0f, 5f, 5f, 5f, &cVar0);
		func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 128);
	}
	if (VOLUME::DOES_VOLUME_EXIST(cParam0->f_32.f_4))
	{
		POPULATION::_0xB56D41A694E42E86(cParam0->f_32.f_4, 0, 0, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(cParam0->f_32.f_4, 0, 0, 0, -1, -1, 0);
		cParam0->f_2213[1] = PED::_0x4C39C95AE5DB1329(cParam0->f_32.f_4, false, 15);
		if (func_392(cParam0->f_32.f_4, &Var8))
		{
			PATHFIND::SET_ROADS_IN_AREA(Var8, Var8.f_3, 0, 1, 0);
		}
	}
	func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 64);
}

bool func_158(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_159(var uParam0)
{
	return func_158(*uParam0, 2);
}

int func_160()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_161(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_162(var uParam0)
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

void func_163(var uParam0)
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

int func_164(var uParam0)
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

int func_165(var uParam0)
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

bool func_166(int iParam0)
{
	return func_328(iLocal_658, iParam0);
}

bool func_167(var uParam0)
{
	if (func_166(512))
	{
		return true;
	}
	if (!func_393())
	{
		return false;
	}
	if (func_139(Local_52, 1))
	{
		Global_1392626[*uParam0 /*32*/].f_11 = Local_52;
		ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(Local_52, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_52, true);
		WEAPON::GIVE_WEAPON_TO_PED(Local_52, iLocal_476, 200, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_52, false, 0f);
		PED::SET_PED_CAN_BE_TARGETTED(Local_52, false);
		PED::SET_PED_CONFIG_FLAG(Local_52, 253, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_52, false);
		PED::SET_PED_CONFIG_FLAG(Local_52, 66, true);
		PED::SET_PED_LASSO_HOGTIE_FLAG(Local_52, 0, false);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(Local_52, 7, false);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(Local_52, 0, false);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(Local_52, 1, false);
		PED::SET_PED_COMBAT_ABILITY(Local_52, 1);
		PED::SET_PED_COMBAT_MOVEMENT(Local_52, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_52, 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_52, 58, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_52, 30, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_52, 111, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_52, iLocal_479);
		PED::SET_PED_CONFIG_FLAG(Local_52, 263, true);
		AUDIO::STOP_PED_SPEAKING(Local_52, true);
		ENTITY::SET_ENTITY_PROOFS(Local_52, 2, true);
		ENTITY::SET_ENTITY_PROOFS(Local_52, 64, true);
		func_173(512);
		return true;
	}
	return false;
}

bool func_168()
{
	int iVar0;
	int iVar1;

	if (func_166(2048))
	{
		return true;
	}
	if (func_394())
	{
		if (((!ENTITY::IS_ENTITY_DEAD(Local_319[0 /*6*/]) && !ENTITY::IS_ENTITY_DEAD(Local_319[1 /*6*/])) && PED::IS_PED_READY_TO_RENDER(Local_319[0 /*6*/])) && PED::IS_PED_READY_TO_RENDER(Local_319[1 /*6*/]))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_319[0 /*6*/], 48, true);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_319[1 /*6*/], 48, true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(Local_319[0 /*6*/], false);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(Local_319[1 /*6*/], false);
			PED::SET_PED_CONFIG_FLAG(Local_319[0 /*6*/], 136, true);
			PED::SET_PED_CONFIG_FLAG(Local_319[1 /*6*/], 136, true);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), Local_319[0 /*6*/], 33, 0, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), Local_319[1 /*6*/], 33, 0, 1);
			func_395(Local_319[0 /*6*/], 1);
			func_395(Local_319[1 /*6*/], 1);
			PED::_0xA2B8E47442C76CEC(Local_319[0 /*6*/], -1758176869);
			PED::_0xA2B8E47442C76CEC(Local_319[1 /*6*/], -1758176869);
			PED::_UPDATE_PED_VARIATION(Local_319[0 /*6*/], false, true, true, true, false);
			PED::_UPDATE_PED_VARIATION(Local_319[1 /*6*/], false, true, true, true, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(10000, 18000));
			TASK::TASK_START_SCENARIO_IN_PLACE_HASH(0, GET_HASH_KEY("WORLD_ANIMAL_HORSE_GRAZING_DOMESTIC"), MISC::GET_RANDOM_INT_IN_RANGE(10000, 20000), true, 0, -1f, false);
			TASK::SET_SEQUENCE_TO_REPEAT(iVar0, true);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_START_SCENARIO_IN_PLACE_HASH(0, GET_HASH_KEY("WORLD_ANIMAL_HORSE_GRAZING_DOMESTIC"), MISC::GET_RANDOM_INT_IN_RANGE(9000, 15000), true, 0, -1f, false);
			TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(10000, 22000));
			TASK::SET_SEQUENCE_TO_REPEAT(iVar1, true);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(Local_319[0 /*6*/], iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Local_319[1 /*6*/], iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			func_173(2048);
			return true;
		}
	}
	return false;
}

bool func_169()
{
	if (func_166(1024))
	{
		return true;
	}
	if (func_396())
	{
		if (func_397())
		{
			func_398(1);
			FIRE::_0x68F6A75FDF5A70D6(Local_356.f_1, 10f);
			ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_356, false);
			func_173(1024);
			return true;
		}
	}
	return false;
}

bool func_170()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_370[0 /*8*/]))
	{
		Local_370[0 /*8*/] = OBJECT::CREATE_OBJECT(GET_HASH_KEY("P_HAMMER03X"), 1414.409f, 1170.342f, 184.176f, true, true, false, false, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_370[0 /*8*/]) && ENTITY::DOES_ENTITY_EXIST(Local_356))
	{
		return true;
	}
	return false;
}

bool func_171(int iParam0, int iParam1, char* sParam2)
{
	if (!Local_18[iParam0 /*16*/].f_14)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_18[iParam0 /*16*/]))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_18[iParam0 /*16*/], true, false))
			{
				Local_18[iParam0 /*16*/].f_14 = 1;
				return Local_18[iParam0 /*16*/].f_14;
			}
		}
		else
		{
			if (MISC::IS_STRING_NULL(sParam2))
			{
				Local_18[iParam0 /*16*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_18[iParam0 /*16*/].f_1, iParam1, Local_18[iParam0 /*16*/].f_15, false, true);
			}
			else
			{
				Local_18[iParam0 /*16*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_18[iParam0 /*16*/].f_1, iParam1, sParam2, false, true);
			}
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_18[iParam0 /*16*/]))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_18[iParam0 /*16*/]);
				if (iParam0 == 0)
				{
					func_399();
				}
			}
		}
	}
	return Local_18[iParam0 /*16*/].f_14;
}

void func_172(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_400(uParam0, iParam1, sParam2))
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

void func_173(int iParam0)
{
	func_401(&iLocal_658, iParam0);
}

bool func_174(int iParam0)
{
	int iVar0;

	iVar0 = func_402(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_175(int iParam0)
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
		iVar0 = func_403(iParam0);
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

void func_176(int iParam0, bool bParam1)
{
	if (!func_102(iParam0))
	{
		return;
	}
	if (!func_404(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_405(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_405(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_304(iParam0), func_284(iParam0), func_305(iParam0), func_405(iParam0), Global_36);
		}
	}
	func_281(iParam0, 1);
	bParam1 = bParam1;
}

void func_177(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_102(iParam0))
	{
		return;
	}
	if (!func_175(iParam0))
	{
		return;
	}
	iVar0 = func_304(iParam0);
	if (bParam1)
	{
		if (func_405(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_405(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != Global_1835011[77 /*74*/].f_1)
			{
				func_406(func_284(iParam0));
			}
			if (func_264() != 0)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_405(iParam0), 0);
			}
			else
			{
				STATS::STATSTRACKER_DEED_STARTED(func_405(iParam0), Global_265238.f_79565.f_208.f_17);
			}
		}
	}
	func_407(iParam0);
	if (!func_102(func_101(0)))
	{
		func_281(iParam0, 3);
		func_408(bParam2);
		if (func_264() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_0x55F37F5F3F2475E1();
			}
			func_409(1);
		}
		func_410(iParam0, -1);
		if (bParam1 && !func_411(2))
		{
			func_412(&Global_0, 1024);
		}
		if (func_264() == -1)
		{
			func_413(&(Global_1347343.f_11), 536870912);
			func_414(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_415(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_416(0);
			}
		}
		if (func_264() == -1)
		{
			iVar1 = func_417(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_418();
				switch (iVar1)
				{
					case 0:
						func_419(0);
						break;
					case 1:
						func_419(1);
						break;
					case 2:
						func_419(2);
						break;
					case 3:
						func_419(3);
						break;
					case 4:
						func_419(4);
						break;
					case 5:
						func_419(5);
						break;
					case 6:
						func_419(5);
						break;
					case 7:
						func_419(7);
						break;
					case 8:
						func_419(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (func_284(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_419(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (func_284(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_419(11);
						break;
					default:
						iVar1 = func_418();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_420(0);
									break;
								case 1:
									func_420(1);
									break;
								case 2:
									func_420(2);
									break;
								case 3:
									func_420(3);
									break;
								case 4:
									func_420(4);
									break;
								case 5:
									func_420(5);
									break;
								case 6:
									func_420(5);
									break;
								case 7:
									func_420(7);
									break;
								case 8:
									func_420(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_421(1);
	}
	else
	{
		func_410(iParam0, -1);
		func_281(iParam0, 4);
	}
	func_422(iParam0, 0);
}

void func_178(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_179(int iParam0)
{
	int iVar0;
	int iVar1;

	if ((Global_1898077.f_1 == 2 || Global_1898077.f_1 == 5) || Global_1898077.f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_264() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_267(Global_1894899.f_2);
	Global_1898077.f_1 = 3;
	Global_1898077.f_2 = 0;
	Global_1898077.f_7 = iVar0;
	Global_1898077.f_8 = iParam0;
	Global_1898077.f_9 = iVar1;
	func_268(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
}

char* func_180(int iParam0)
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

void func_181(bool bParam0)
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
	func_423(0f);
	Global_1935436.f_11 = 1;
	if (func_424())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_425();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_182(char[4] cParam0)
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

char* func_183()
{
	switch (iLocal_17)
	{
		case 0:
			return "LSSOL_INT";
		case 1:
			return "LSSOL_EXT";
	}
	return "";
}

void func_184(char[4] cParam0, vector3 vParam1)
{
	if (!func_153(vParam1))
	{
		cParam0->f_32.f_5 = { vParam1 };
	}
	else
	{
		cParam0->f_32.f_5 = { func_154(*cParam0) };
	}
}

void func_185(char[4] cParam0, var uParam1)
{
	if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
	{
		cParam0->f_32.f_4 = *uParam1;
	}
}

bool func_186()
{
	return func_426() > 0;
}

void func_187(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_230), sParam1, 64);
}

struct<8> func_188(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

void func_189(var uParam0, struct<8> Param1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param1))
	{
		return;
	}
	uParam0->f_238 = { Param1 };
}

void func_190(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_52))
	{
		PED::SET_PED_CONFIG_FLAG(Local_52, 363, true);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_18[0 /*16*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_18[0 /*16*/]);
	}
	AICOVERPOINT::_0x140B3CB1D424A945(Global_35, -1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 363, true);
}

void func_191(char[4] cParam0, int iParam1)
{
	func_427(&(cParam0->f_32), iParam1);
}

void func_192(var uParam0)
{
	int iVar0;

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_18[0 /*16*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_18[0 /*16*/]);
	}
	if (func_428(uParam0, "LSSOL_INT"))
	{
		if (!bLocal_668)
		{
			func_217(1430.027f, 1192.439f, 182.8754f, 359.7534f);
			bLocal_668 = true;
		}
		if (!bLocal_666)
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_356, -102255056))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_361[0 /*8*/], Local_361[0 /*8*/].f_1, false, true, true);
				ENTITY::SET_ENTITY_ROTATION(Local_361[0 /*8*/], Local_361[0 /*8*/].f_4, 2, false);
				bLocal_666 = true;
			}
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_356, -979415648))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_361[0 /*8*/], vLocal_517, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(Local_361[0 /*8*/], vLocal_520, 2, false);
			bLocal_666 = false;
		}
		if (!func_166(16384))
		{
			func_219(Local_52.f_1, 100f, 0);
			func_173(16384);
		}
		else if (!func_166(32768))
		{
			func_220(Local_52.f_1, 100f, 0, 0, 0, 0, 0);
			func_173(32768);
		}
		if (!func_166(1))
		{
			if (func_214())
			{
				func_173(1);
			}
		}
		else if (!func_166(8192))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_60[iVar0 /*43*/]))
				{
					func_215(Local_60[iVar0 /*43*/]);
				}
				iVar0++;
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_319[2 /*6*/]))
			{
				func_215(Local_319[2 /*6*/]);
			}
			func_173(8192);
		}
		else if (!func_166(-2147483648))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_228, "LSSOL_INT_P1A1_T06_Shot_1", true) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_228, "LSSOL_INT_P1_T06_Shot_4", true))
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_60[iVar0 /*43*/]))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_60[iVar0 /*43*/], Local_60[iVar0 /*43*/].f_1, Local_60[iVar0 /*43*/].f_10, true, false, true);
						TASK::TASK_SEEK_COVER_TO_COORDS(Local_60[iVar0 /*43*/], Local_60[iVar0 /*43*/].f_4, Global_36, 10000, 0, 0, 0);
					}
					iVar0++;
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_319[2 /*6*/]))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_319[2 /*6*/], Local_60[iVar0 /*43*/].f_1, Local_60[iVar0 /*43*/].f_10, true, false, true);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_60[3 /*43*/]))
				{
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Local_60[3 /*43*/], Local_60[3 /*43*/].f_4, Global_35, 1.25f, 1, 4f, 5f, 0, 0, 0, GET_HASH_KEY("FIRING_PATTERN_BURST_FIRE"), -1, 0);
				}
				func_173(-2147483648);
			}
		}
	}
	func_429(uParam0, 0);
}

void func_193(char[4] cParam0, int iParam1)
{
	func_430(&(cParam0->f_32), iParam1);
}

int func_194(var uParam0)
{
	int iVar0;

	if (!func_166(16384))
	{
		func_219(Local_52.f_1, 100f, 0);
		func_220(Local_52.f_1, 100f, 0, 0, 0, 0, 0);
		func_173(16384);
	}
	if (!func_166(1))
	{
		if (func_214())
		{
			func_173(1);
		}
	}
	else if (!func_166(8192))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_60[iVar0 /*43*/]))
			{
				func_215(Local_60[iVar0 /*43*/]);
			}
			iVar0++;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_319[2 /*6*/]))
		{
			func_215(Local_319[2 /*6*/]);
		}
		func_173(8192);
	}
	else if (!func_166(-2147483648))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_60[iVar0 /*43*/]))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_60[iVar0 /*43*/], Local_60[iVar0 /*43*/].f_1, Local_60[iVar0 /*43*/].f_10, true, false, true);
				TASK::TASK_SEEK_COVER_TO_COORDS(Local_60[iVar0 /*43*/], Local_60[iVar0 /*43*/].f_4, Global_36, 10000, 0, 0, 0);
			}
			iVar0++;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_319[2 /*6*/]))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_319[2 /*6*/], Local_60[iVar0 /*43*/].f_1, Local_60[iVar0 /*43*/].f_10, true, false, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_60[3 /*43*/]))
		{
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Local_60[3 /*43*/], Local_60[3 /*43*/].f_4, Global_35, 1.25f, 1, 4f, 5f, 0, 0, 0, GET_HASH_KEY("FIRING_PATTERN_BURST_FIRE"), -1, 0);
		}
		func_173(-2147483648);
	}
	else if (!func_166(262144))
	{
		if (AICOVERPOINT::_0x8CBE916CFC64AD5C(Global_35))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_356))
			{
				func_431(Local_356, Local_356.f_1);
				ENTITY::SET_ENTITY_HEADING(Local_356, Local_356.f_4);
			}
			func_68(&uLocal_554);
			func_173(262144);
		}
	}
	else
	{
		MISC::SET_WEATHER_TYPE(GET_HASH_KEY("SUNNY"), true, true, false, 0f, false);
		return 1;
	}
	return 0;
}

void func_195(var uParam0, int iParam1)
{
	uParam0->f_222 = iParam1;
	func_432(uParam0, 4);
}

void func_196(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

bool func_197(char[4] cParam0)
{
	if (!func_53(64))
	{
		return false;
	}
	if (func_54())
	{
		return false;
	}
	else if (func_161(Global_1935630, 131072))
	{
		return false;
	}
	return true;
}

void func_198(char[4] cParam0)
{
	switch (cParam0->f_17)
	{
		case 0:
			if (func_90(Global_1392626[*cParam0 /*32*/].f_8, 128))
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
						func_253(&(cParam0->f_17.f_12));
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
			if (func_90(Global_1392626[*cParam0 /*32*/].f_8, 128))
			{
				cParam0->f_17 = 2;
				return;
			}
			if (func_433(Global_35, Global_1392626[*cParam0 /*32*/].f_24, &(cParam0->f_17.f_12), cParam0->f_17.f_2, cParam0->f_17.f_3, cParam0->f_17.f_4, cParam0->f_17.f_5, cParam0->f_17.f_6, cParam0->f_17.f_7, 0, 1, 1, 1))
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
			if (!func_90(Global_1392626[*cParam0 /*32*/].f_8, 128))
			{
				if ((PED::IS_PED_FULLY_ON_MOUNT(Global_35, true) && !func_434(Global_35, 501393341)) || (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true) && !func_434(Global_35, -828834893)))
				{
					cParam0->f_17 = 0;
				}
			}
			break;
	}
}

void func_199(var uParam0, struct<4> Param1, int iParam5)
{
	switch (func_435(uParam0))
	{
		case 0:
			func_436(uParam0, Param1, iParam5);
			break;
		case 1:
			func_437(uParam0);
			break;
		case 2:
			func_438(uParam0);
			break;
	}
}

bool func_200(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (func_237(uParam0, 32768))
	{
		return true;
	}
	if (func_435(uParam0) >= 3)
	{
		uParam0->f_1662 = func_327(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
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
		func_439(uParam0);
	}
	if (func_435(uParam0) < 10)
	{
		if (func_435(uParam0) == 3)
		{
			func_440(uParam0, iParam5, bParam6);
		}
		else if (func_435(uParam0) > 3)
		{
			if (func_441(uParam0) == 0)
			{
				if (!func_237(uParam0, 524288))
				{
					func_442(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_443(uParam0, 4);
					func_444(uParam0, 10);
					func_445(uParam0, iParam5);
					return true;
				}
			}
			if (!func_237(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!func_244(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			func_446(0);
			func_447();
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_1450 >= 0)
			{
				if (!func_244(&(uParam0->f_782[uParam0->f_1454 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (func_448(uParam0, uParam0->f_1450))
				{
					if (func_449(uParam0) < 7 && uParam0->f_1454 >= 0)
					{
						func_450(uParam0, uParam0->f_782[uParam0->f_1454 /*41*/].f_27, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_1454 >= 0)
				{
					func_450(uParam0, uParam0->f_782[uParam0->f_1454 /*41*/].f_27, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				func_451(uParam0);
			}
		}
	}
	bVar0 = func_452(uParam0, iParam5, bParam6);
	bVar1 = CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0);
	if (bVar0)
	{
		if ((!func_237(uParam0, 268435456) && bVar1) && !func_237(uParam0, 262144))
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
				func_453(uParam0, 131072);
				func_453(uParam0, 268435456);
			}
		}
		if (func_243(uParam0, 64) || (uParam0->f_1450 >= 0 && !func_244(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || func_441(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_435(uParam0) == 3 || func_237(uParam0, 131072))
	{
		func_454(uParam0);
		if (!func_237(uParam0, 262144))
		{
			if ((bVar0 && func_237(uParam0, 65536)) || func_237(uParam0, 131072))
			{
				func_453(uParam0, 32768);
				func_443(uParam0, 4);
				func_444(uParam0, 10);
				uParam0->f_1535 = 1;
				func_445(uParam0, iParam5);
				return true;
			}
		}
	}
	if (func_435(uParam0) >= 3)
	{
		func_455(uParam0, iParam5);
		func_456(uParam0);
		if (!func_457(uParam0, 1))
		{
			func_458(uParam0);
		}
		func_459(uParam0);
	}
	switch (func_435(uParam0))
	{
		case 0:
			func_436(uParam0, Param1, iParam5);
			break;
		case 1:
			func_437(uParam0);
			break;
		case 2:
			func_438(uParam0);
			break;
		case 3:
			if (func_201(uParam0))
			{
				func_460(2);
				func_450(uParam0, uParam0->f_782[uParam0->f_1450 /*41*/].f_27, uParam0->f_1111[uParam0->f_1450 /*22*/].f_1, 1065353216 /* Float: 1f */);
				func_68(&(uParam0->f_1638));
				func_443(uParam0, 1);
				func_461();
				func_444(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!func_237(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (func_435(uParam0) == 5)
			{
				if (func_462(uParam0))
				{
					func_443(uParam0, 2);
					func_444(uParam0, 6);
				}
			}
			if (func_435(uParam0) == 6)
			{
				if (func_463(uParam0))
				{
					func_443(uParam0, 3);
					func_444(uParam0, 8);
				}
			}
			if (uParam0->f_1451 >= 0 || func_69(&(uParam0->f_1638)) >= 15f)
			{
				if (func_464(uParam0, iParam5))
				{
					if (func_465(uParam0))
					{
						uParam0->f_1451 = func_466(uParam0);
						func_68(&(uParam0->f_1638));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						func_443(uParam0, 6);
						func_444(uParam0, 9);
					}
					else
					{
						func_443(uParam0, 4);
						func_444(uParam0, 10);
						func_445(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (func_464(uParam0, iParam5))
			{
				func_445(uParam0, iParam5);
				func_444(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_201(var uParam0)
{
	if (uParam0->f_1536)
	{
		return false;
	}
	return uParam0->f_1535;
}

void func_202(char[4] cParam0)
{
	float fVar0;
	vector3 vVar1;

	fVar0 = 20f;
	if (!func_4(cParam0->f_16, 2))
	{
		if (func_139(Global_1392626[*cParam0 /*32*/].f_11, 0))
		{
			if (func_148(Global_1392626[*cParam0 /*32*/].f_11, Global_36, 40f, 1, 1))
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(Global_1392626[*cParam0 /*32*/].f_11, true, false) };
				if (!func_467(Global_1392626[*cParam0 /*32*/].f_11, fVar0, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */) && func_468(vVar1, &(cParam0->f_3), fVar0))
				{
					func_34(&(cParam0->f_16), 2);
				}
			}
		}
	}
	else
	{
		func_469(Global_1392626[*cParam0 /*32*/].f_11, &(cParam0->f_3), -0.75f, 0f, 0f, 0, 35f, fVar0, -1, 3000, 3000, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */);
	}
}

int func_203(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
	int iVar9;
	int iVar10;
	bool bVar11;

	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		func_470(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam0));
		fVar8 = func_471(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
		func_472(iParam0, iParam1, uParam3, fParam2, fVar8, sParam7);
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*iParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*iParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_68(&(iParam1->f_13));
		}
		if (func_473(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_474(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_203(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_300(iParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*iParam0, 317, true))
						{
							func_475(*iParam0, 1, 1);
						}
					}
					else if (func_476(iParam1, 22))
					{
						func_475(*iParam0, 0, 1);
					}
				}
				if (func_477(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_478(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_479(iParam8);
					func_480(iParam1, uParam3);
					if (func_481(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_482(uParam3);
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
					func_483(iParam1, uParam3, fVar8);
					if (func_484(*iParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_207(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				if (func_477(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_485(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_481(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_478(iParam0, func_477(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_479(iParam8);
					func_480(iParam1, uParam3);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					func_207(uParam3, 0, 0, 1, 1);
					func_486(iParam1, 1);
				}
				if (MISC::IS_BIT_SET(iParam1->f_21, 20))
				{
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						if (!func_434(Global_35, 501393341) && !func_434(Global_35, 242628503))
						{
							iVar9 = 0;
							if (func_487(Global_35, *iParam0, 1f) == 3)
							{
								iVar9 = 131072;
							}
							else
							{
								iVar9 = 262144;
							}
							iParam1->f_28 = PED::GET_MOUNT(Global_35);
							TASK::TASK_DISMOUNT_ANIMAL(Global_35, iVar9, 0, 0, 0, 0);
						}
					}
					else if ((((!PED::IS_PED_ON_MOUNT(Global_35) && func_139(iParam1->f_28, 0)) && func_488(Global_35, iParam1->f_28, iParam1->f_29, 1)) && !func_434(iParam1->f_28, 518218985)) && !func_434(iParam1->f_28, 242628503))
					{
						TASK::TASK_SMART_FLEE_PED(iParam1->f_28, Global_35, (iParam1->f_29 + 3f), -1, 2304, 1f, 0);
						iParam1->f_28 = 0;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
					{
						if (!func_434(Global_35, -828834893) && !func_434(Global_35, 242628503))
						{
							iVar10 = 0;
							if (func_487(Global_35, *iParam0, 1f) == 3)
							{
								iVar10 = 131072;
							}
							else
							{
								iVar10 = 262144;
							}
							TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, iVar10);
						}
					}
					else if (!(MISC::IS_BIT_SET(*iParam1, 12) || func_489(iParam1, iParam0)))
					{
					}
					else if (!(MISC::IS_BIT_SET(*iParam1, 13) || func_490(iParam1)))
					{
					}
					else if (!func_491(iParam1))
					{
					}
					else
					{
						if (fParam4 > 0f)
						{
							func_68(&(iParam1->f_18));
							bVar11 = iParam8 & 128 != false;
							if (bVar11)
							{
								func_492(uParam3, 0, 0);
							}
							iParam1->f_2 = 4;
						}
						if (iParam1->f_2 != 2 && iParam1->f_2 != 4)
						{
							iVar0 = iParam1->f_1;
							if (iVar0 != -1)
							{
								iParam1->f_1 = -1;
							}
							return iVar0;
						}
					}
				}
				break;
			case 4:
				if (func_493(iParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_477(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_485(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_481(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_478(iParam0, func_477(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_479(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_207(uParam3, 0, 0, 1, 1);
					}
					func_486(iParam1, 1);
				}
				func_483(iParam1, uParam3, fVar8);
				if (func_493(iParam0, iParam1, fParam4, bVar6))
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
			func_494(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

bool func_204(var uParam0)
{
	if (uParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

void func_205(char[4] cParam0)
{
	if (!func_90(Global_1392626[*cParam0 /*32*/].f_8, 32))
	{
		if (func_139(Global_1392626[*cParam0 /*32*/].f_11, 0))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Global_1392626[*cParam0 /*32*/].f_11, 0, -1f, -1f, -1f);
		}
	}
}

bool func_206(char[4] cParam0)
{
	func_495(cParam0);
	if (!bLocal_769)
	{
		func_212();
	}
	else if (!bLocal_670)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_524))
		{
			func_213(&iLocal_524, GET_HASH_KEY("S_VEH_LANTERN_RF"));
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_525))
		{
			func_213(&iLocal_525, GET_HASH_KEY("S_VEH_LANTERN_LF"));
		}
		else
		{
			ENTITY::SET_ENTITY_COLLISION(iLocal_525, false, false);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_525, false);
			ENTITY::SET_ENTITY_PROOFS(iLocal_524, 5, false);
			ENTITY::SET_ENTITY_PROOFS(iLocal_525, 5, false);
			bLocal_670 = true;
		}
	}
	if (func_496(Global_35))
	{
		func_497(Global_35, Local_52.f_1, 0, 20f, 15f, 12f, 9f, 1, 1, 1, 0);
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		func_497(Global_35, Local_52.f_1, 0, 20f, 15f, 12f, 9f, 1, 1, 1, 0);
		if (!bLocal_664)
		{
			if (func_379(Global_35, Local_52.f_1, 1) < 10f)
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, 0);
				bLocal_664 = true;
			}
		}
	}
	if (func_488(Global_35, Local_52, 11f, 1))
	{
		TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_52, 500, 0, 51, 0);
	}
	if (!bLocal_766)
	{
		if (func_148(Global_35, Local_52.f_1, 18f, 1, 1) && MAP::DOES_BLIP_EXIST(Global_1392626[4 /*32*/]))
		{
			func_498(&vLocal_703, &Local_685, 0, Global_1392626[4 /*32*/], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			func_499(&(Local_685[0 /*17*/]), "OBJ_INTERACT", " ", GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			func_500(&(Local_685[0 /*17*/]), 0, 0);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), Local_52, 8, 0, 1);
			bLocal_766 = true;
		}
	}
	else if (!bLocal_765)
	{
		iLocal_764 = func_203(&Local_52, &vLocal_703, 5f, &Local_685, 0.1f, 3, 0, 0, 2049, 0, 0, 2, -1082130432 /* Float: -1f */);
		if ((func_488(Global_35, Local_52, 5f, 1) && func_501(Global_35, iLocal_499[3], 0, 1)) || func_501(Global_35, iLocal_499[4], 0, 1))
		{
			if (!bLocal_767)
			{
				func_500(&(Local_685[0 /*17*/]), 1, 0);
				bLocal_767 = true;
			}
		}
		else if (bLocal_767)
		{
			func_500(&(Local_685[0 /*17*/]), 0, 0);
			bLocal_767 = false;
		}
		if (iLocal_764 == 0)
		{
			if (func_501(Global_35, iLocal_499[4], 0, 1) || !func_501(Global_35, iLocal_499[3], 0, 1))
			{
				if (func_186())
				{
					func_239(&(cParam0->f_32), "1-HighHonor-MultiStart");
				}
				else
				{
					func_239(&(cParam0->f_32), "2-LowHonor-MultiStart");
				}
				func_236(0);
				func_502(1);
				func_503(&vLocal_703, Local_52);
				return true;
			}
			func_236(1);
			func_207(&Local_685, 1, 1, 1, 0);
			vLocal_703.f_2 = 0;
			func_300(&Local_52);
			TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_52, 5000, 0, 51, 0);
			WEAPON::_HOLSTER_PED_WEAPONS(Global_35, false, false, true, false);
			if (func_496(Global_35))
			{
				func_504();
				TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, 0);
			}
			bLocal_765 = true;
		}
	}
	else if (!bLocal_768)
	{
		func_472(&Local_52, &vLocal_703, &Local_685, 5f, -1082130432 /* Float: -1f */, 0);
		if (!PED::IS_PED_ON_FOOT(Global_35))
		{
			func_502(0);
			return false;
		}
		if (!func_434(iLocal_506, 713668775))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_506, 1420.438f, 1156.196f, 183.8919f, 1f, -1, 0.25f, 0, 40000f);
		}
		if (!bLocal_665)
		{
			func_502(0);
			if (!func_148(Global_35, 1413.068f, 1164.715f, 185.1305f, 0.8f, 1, 1))
			{
				if (func_69(&uLocal_563) > 6f)
				{
					func_253(&uLocal_563);
					func_68(&uLocal_566);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Local_52, 2000, -1f, -1f, -1f);
					bLocal_665 = true;
					return false;
				}
				if (!func_434(Global_35, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, 1413.068f, 1164.715f, 184.1305f, 1f, 20000, 0.25f, 0, 40000f);
					TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_52, 10000, 0, 51, 0);
					if (!func_49(&uLocal_563))
					{
						func_68(&uLocal_563);
					}
				}
			}
			else
			{
				func_253(&uLocal_563);
				func_68(&uLocal_566);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Local_52, 2000, -1f, -1f, -1f);
				bLocal_665 = true;
				return false;
			}
		}
		else if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_18[0 /*16*/]))
		{
			if (func_69(&uLocal_566) > 1f)
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_18[0 /*16*/], "b_breakout", true, false);
				func_505();
				func_502(1);
				func_253(&uLocal_566);
				bLocal_768 = true;
			}
			else
			{
				func_502(0);
			}
		}
	}
	else if (ANIMSCENE::GET_ANIM_SCENE_PHASE(Local_18[0 /*16*/]) >= 0.99f)
	{
		func_472(&Local_52, &vLocal_703, &Local_685, 5f, -1082130432 /* Float: -1f */, 0);
		func_236(0);
		func_502(1);
		func_503(&vLocal_703, Local_52);
		return true;
	}
	else if (ANIMSCENE::GET_ANIM_SCENE_PHASE(Local_18[0 /*16*/]) > 0.3f)
	{
		func_472(&Local_52, &vLocal_703, &Local_685, 5f, -1082130432 /* Float: -1f */, 0);
		TASK::TASK_LOOK_AT_ENTITY(Local_52, Global_35, 500, 16, 51, 0);
		func_502(1);
	}
	else
	{
		func_472(&Local_52, &vLocal_703, &Local_685, 5f, -1082130432 /* Float: -1f */, 0);
		func_502(1);
	}
	return false;
}

void func_207(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_506((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_507(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

void func_208(char[4] cParam0)
{
	int iVar0;

	if (func_63(Global_35, 1, 0, 0) == GET_HASH_KEY("GROUP_PISTOL") || func_63(Global_35, 1, 0, 0) == GET_HASH_KEY("GROUP_REVOLVER"))
	{
		iVar0 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 0);
		func_64(cParam0, iVar0, "w_revolver_cattleman01^1", 0, 0, 0);
	}
	else
	{
		iVar0 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 2);
		func_64(cParam0, iVar0, "w_revolver_cattleman01^1", 0, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_379[0 /*8*/]))
	{
		func_64(cParam0, Local_379[0 /*8*/], "w_revolver_cattleman01", 0, 0, 0);
	}
	func_65("LSSLD2_START", 0);
}

int func_209(char[4] cParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0) && func_148(iVar0, vLocal_509, 150f, 1, 1))
	{
		func_508(&(cParam0->f_32), 1397.69f, 1200.02f, 178.52f, 303.24f, 1);
	}
	return 7;
}

int func_210(int iParam0, var uParam1)
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

	uParam1->f_10 = func_509(uParam1->f_10);
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
		if (func_153(uParam1->f_6))
		{
		}
	}
	bVar0 = func_510();
	if (*uParam1)
	{
		if (bVar0 && !func_511(Global_1835011[4 /*74*/].f_1, 1))
		{
			if (func_512(5))
			{
				func_513(5);
				func_514(5);
				func_515(0);
				func_516(0);
			}
		}
	}
	if (func_517(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_511(Global_1835011[37 /*74*/].f_1, 1)) && !func_511(Global_1835011[43 /*74*/].f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_511(Global_1835011[43 /*74*/].f_1, 1)) && !func_511(Global_1835011[44 /*74*/].f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_518(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_261(iVar1))
	{
		bVar3 = true;
		if (func_519(iVar1))
		{
			bVar4 = true;
		}
		if (func_262(iVar1))
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
				func_263(uParam1->f_10);
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
			if (!func_512(0) && func_512(1))
			{
				func_520(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_521())
			{
				func_522();
			}
			func_515(0);
			func_516(0);
			func_523(uParam1->f_6);
		}
	}
	if (!func_261(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_524(uParam1->f_10) == 0 || func_525(uParam1->f_10) == 0) || func_526(uParam1->f_10) == 0)
			{
				func_527(uParam1->f_10);
			}
			func_528(uParam1->f_10);
			func_529(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_518(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_261(iVar1))
	{
		bVar3 = true;
		if (func_519(iVar1))
		{
			bVar4 = true;
		}
		if (func_262(iVar1))
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
			if (!func_153(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar2, false);
			}
		}
	}
	if (func_530(uParam1->f_10))
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
			Var8 = { func_531(uParam1->f_10) };
			Var10 = { func_532() };
			func_533(iVar2, &Var8, &Var10, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_534(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		func_535(uParam1->f_10);
		if (uParam1->f_2 && !func_153(uParam1->f_6))
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
	func_536(uParam1->f_10);
	if (func_534(uParam1->f_10))
	{
		iVar16 = func_537(uParam1->f_10);
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

void func_211(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (iParam3 == 0 && !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (iParam3 == 0 && (ENTITY::IS_ENTITY_DEAD(iParam1) && !bParam5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_538(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	iVar0 = func_539(uParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam2))
		{
		}
		else if (uParam0->f_13[iVar0 /*12*/].f_9 != iParam3)
		{
		}
		else if (uParam0->f_13[iVar0 /*12*/].f_10 != iParam4)
		{
		}
		else
		{
			return;
		}
	}
	else
	{
		iVar1 = func_540(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != iParam1)
		{
			func_541(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_542(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0 /*12*/] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam2, 64);
		uParam0->f_13[iVar0 /*12*/].f_9 = iParam3;
		uParam0->f_13[iVar0 /*12*/].f_10 = iParam4;
		if (bParam5)
		{
			func_543(&(uParam0->f_13[iVar0 /*12*/]), 2);
		}
		else
		{
			func_544(&(uParam0->f_13[iVar0 /*12*/]), 2);
		}
	}
}

void func_212()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_356))
	{
		if (PROPSET::_HAS_PROP_SET_LOADED(iLocal_527))
		{
			PROPSET::_ADD_LIGHT_PROP_SET_TO_VEHICLE(Local_356, iLocal_527);
			bLocal_769 = true;
		}
		else
		{
			PROPSET::_REQUEST_PROP_SET(iLocal_527);
		}
	}
}

void func_213(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 0;
	iVar2 = ITEMSET::CREATE_ITEMSET(true);
	iVar3 = PROPSET::_GET_ENTITIES_FROM_PROP_SET(PROPSET::_GET_VEHICLE_LIGHT_PROP_SET(Local_356), iVar2, iParam1, true, false);
	iVar1 = 0;
	while (iVar1 < iVar3)
	{
		iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar2);
		*iParam0 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
		}
		iVar1++;
	}
}

bool func_214()
{
	if (func_545())
	{
		return true;
	}
	return false;
}

void func_215(int iParam0)
{
	ENTITY::SET_ENTITY_VISIBLE(iParam0, true);
	ENTITY::SET_ENTITY_COLLISION(iParam0, true, false);
	AUDIO::STOP_PED_SPEAKING(iParam0, false);
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
}

void func_216()
{
	func_546();
}

void func_217(vector3 vParam0, float fParam3)
{
	if (iLocal_506 == 0)
	{
		func_504();
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_506) && func_488(iLocal_506, Global_35, 100f, 1))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_506, vParam0, fParam3, true, false, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_506, 48, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_506, true);
	}
}

void func_218()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_506))
	{
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_506, 48, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_506, false);
	}
}

void func_219(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_220(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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

void func_221()
{
	func_547();
	TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Global_35, vLocal_509, -1, 1, 0f, 1, 0, 0, 0, 1, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
	PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), func_366(16777216, 0), 0);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, func_366(16777216, 0), true, 0, false, false);
	WEAPON::_REQUEST_WEAPON_ASSET(func_366(16777216, 0), -1, false);
	func_548(Local_60[0 /*43*/].f_4);
}

void func_222(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_223() - fParam1);
	func_549(uParam0, 1);
	func_550(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_223()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_224(int iParam0)
{
	Global_1572864.f_12 = iParam0;
}

void func_225(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	char[] cVar0[8];

	Global_1572864.f_8 = iParam0;
	Global_1572864.f_9 = iParam9;
	Global_1572864.f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_304(iParam0) == 1)
	{
		cVar0 = func_552(func_551(iParam0));
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
	}
	else if (func_304(iParam0) == 8)
	{
		cVar0 = func_554(func_553(iParam0));
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
	}
	func_365(1, 1);
	func_369(1, Param1, Param1.f_3);
	Global_1347394 = { Param5 };
	func_272(0);
	func_273(0);
	func_275(1f);
}

bool func_226()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_507))
	{
		if (func_555(4, &iLocal_507, GET_HASH_KEY("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), 1323.181f, 1349.004f, 173.5631f, 0, 1, 1, 0, 1, 0, 1, 1))
		{
			TASK::TASK_STAND_STILL(iLocal_507, -1);
		}
	}
	else if (PED::IS_PED_READY_TO_RENDER(iLocal_507))
	{
		if (!bLocal_669)
		{
			func_556(iLocal_507, -961634645);
			bLocal_669 = true;
		}
		return true;
	}
	return false;
}

bool func_227()
{
	if (func_557())
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_60[4 /*43*/]))
		{
			func_558(4);
			func_559(Local_60[4 /*43*/], Local_319[3 /*6*/], 0, -1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_60[5 /*43*/]))
		{
			func_558(5);
			func_559(Local_60[5 /*43*/], Local_319[4 /*6*/], 0, -1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_319[3 /*6*/]))
		{
			PED::_0x2EB75FB86C41F026(Local_319[3 /*6*/], 3, 0);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_319[3 /*6*/], Local_60[4 /*43*/].f_7, Local_60[4 /*43*/].f_10, true, false, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_319[4 /*6*/]))
		{
			PED::_0x2EB75FB86C41F026(Local_319[4 /*6*/], 3, 0);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_319[4 /*6*/], Local_60[5 /*43*/].f_7, Local_60[5 /*43*/].f_10, true, false, true);
		}
		return true;
	}
	return false;
}

void func_228()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar2 = 0;
	iVar3 = ITEMSET::CREATE_ITEMSET(true);
	iVar4 = PROPSET::_GET_ENTITIES_FROM_PROP_SET(iLocal_523, iVar3, 0, false, false);
	iVar2 = 0;
	while (iVar2 < iVar4)
	{
		iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar3);
		iVar1 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(iVar0);
		if (!ENTITY::IS_ENTITY_DEAD(Local_356))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				ENTITY::SET_ENTITY_PROOFS(iVar1, 0, false);
				if (FIRE::IS_ENTITY_ON_FIRE(iVar1))
				{
					FIRE::STOP_ENTITY_FIRE(iVar1, 0);
				}
				FIRE::START_ENTITY_FIRE(iVar1, 0f, -1, 10);
			}
		}
		iVar2++;
	}
}

void func_229(int* iParam0)
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

void func_230()
{
	vector3 vVar0;
	int iVar3;

	iVar3 = 0;
	while (iVar3 < 6)
	{
		if (iVar3 == 0)
		{
			vVar0 = { 1420.412f, 1148.344f, 184.912f };
		}
		else if (iVar3 == 1)
		{
			vVar0 = { 1422.869f, 1158.009f, 184.3722f };
		}
		else if (iVar3 == 2)
		{
			vVar0 = { 1420.032f, 1153.267f, 184.9992f };
		}
		else if (iVar3 == 3)
		{
			vVar0 = { 1411.948f, 1149.544f, 184.7963f };
		}
		else if (iVar3 == 4)
		{
			vVar0 = { 1409.688f, 1143.213f, 184.7164f };
		}
		else if (iVar3 == 5)
		{
			vVar0 = { 1412.838f, 1133.55f, 184.2095f };
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_60[iVar3 /*43*/]))
		{
			func_560(Local_60[iVar3 /*43*/]);
			func_431(Local_60[iVar3 /*43*/], vVar0);
			AUDIO::DISABLE_PED_PAIN_AUDIO(Local_60[iVar3 /*43*/], true);
			ENTITY::SET_ENTITY_HEALTH(Local_60[iVar3 /*43*/], 0, 0);
			func_215(Local_60[iVar3 /*43*/]);
		}
		iVar3++;
	}
	func_173(16);
}

bool func_231()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_60[iVar0 /*43*/]) || PED::IS_PED_RAGDOLL(Local_60[iVar0 /*43*/]))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_232(char[4] cParam0)
{
	cParam0->f_346 = func_183();
	func_184(cParam0, Local_52.f_1);
	func_185(cParam0, &(iLocal_499[2]));
	func_64(cParam0, Global_35, 0, 0, 0, 0);
	func_64(cParam0, Local_52, 0, 0, 0, 0);
	func_64(cParam0, Local_356, "WAGON05X", 0, 0, 0);
	func_64(cParam0, Local_379[0 /*8*/], "w_revolver_cattleman01", 0, 0, 0);
	func_64(cParam0, Local_361[0 /*8*/], "p_cratetools01x", 0, 0, 0);
	func_191(cParam0, 90617);
	func_193(cParam0, 90697);
	func_508(&(cParam0->f_32), 1397.69f, 1200.02f, 178.52f, 303.24f, 0);
	func_187(&(cParam0->f_32), "1-Start");
	func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
}

void func_233(char[4] cParam0)
{
	if (iLocal_17 == 1)
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
}

bool func_234(char[4] cParam0)
{
	return true;
}

bool func_235()
{
	return func_563(1);
}

void func_236(int iParam0)
{
	func_564(1, iParam0, 0);
}

bool func_237(var uParam0, int iParam1)
{
	return (uParam0->f_1430 && iParam1) != 0;
}

struct<8> func_238(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_565(uParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { func_566() };
	}
	return Var0;
}

void func_239(var uParam0, char* sParam1)
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
	func_187(uParam0, sParam1);
	func_383(uParam0, 2097152, 1);
	func_196(uParam0, 33554432);
	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_228, sParam1, true);
}

Vector3 func_240(var uParam0, int iParam1)
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
			vVar10 = { func_567(vVar10) * Vector(2f, 2f, 2f) };
			vVar0[0 /*3*/] = { uParam0->f_782[iParam1 /*41*/].f_1 + uParam0->f_782[iParam1 /*41*/].f_4 / Vector(2f, 2f, 2f) + vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[0 /*3*/], &(vVar0[0 /*3*/].f_2), false);
			vVar0[1 /*3*/] = { uParam0->f_782[iParam1 /*41*/].f_1 + uParam0->f_782[iParam1 /*41*/].f_4 / Vector(2f, 2f, 2f) - vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[1 /*3*/], &(vVar0[1 /*3*/].f_2), false);
			if (!func_153(vVar0[0 /*3*/]))
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
			if (!func_153(vVar0[0 /*3*/]))
			{
				return vVar0[0 /*3*/];
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_241(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_242(var uParam0, int iParam1)
{
	uParam0->f_1430 = (uParam0->f_1430 - (uParam0->f_1430 && iParam1));
}

bool func_243(var uParam0, int iParam1)
{
	return (uParam0->f_1432.f_1 && iParam1) != 0;
}

bool func_244(var uParam0, int iParam1)
{
	return func_568(uParam0->f_27, iParam1);
}

int func_245(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
{
	int iVar0;

	func_375(uParam4, &cParam0);
	if (func_374(uParam4, 2) && !func_374(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_SKIP_CUTSCENE"), false);
	}
	if (func_569(uParam4) != 1)
	{
		func_570(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (func_569(uParam4))
	{
		case 1:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_228, false))
				{
					func_571(uParam4, &cParam0);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228))
				{
					func_572(uParam4, 4);
					return 0;
				}
				else if (func_573(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_221);
				}
				func_572(uParam4, 3);
			}
			else if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_230)) && func_374(uParam4, 134217728))
				{
				}
				else
				{
					func_574(uParam4);
				}
				func_68(&(uParam4->f_1));
				func_572(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_388(uParam4);
				if (!func_49(&(uParam4->f_1)))
				{
					func_50(&(uParam4->f_1), 0);
				}
				else if (func_575(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
					}
					func_572(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228) || !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
			{
				if (func_155(uParam4, &cParam0, 1, 1))
				{
					if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
					{
						func_572(uParam4, 4);
					}
					else if (!func_153(func_376(uParam4)) && !func_148(Global_35, func_376(uParam4), 100f, 1, 1))
					{
						func_576(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_376(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_575(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
					}
					func_572(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::UPDATE_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
					func_577(1, 0);
					func_571(uParam4, &cParam0);
					func_572(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (func_575(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
				}
				func_572(uParam4, 4);
			}
			break;
		case 3:
			func_578(uParam4);
			if (func_573(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_221);
			}
			if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_228, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228) || func_374(uParam4, 512)))
			{
				if (!func_374(uParam4, 1024) && func_579(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!func_374(uParam4, 512))
				{
					func_68(&(uParam4->f_1));
					func_196(uParam4, 512);
					func_572(uParam4, 4);
				}
				else if (func_374(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				func_570(uParam4);
			}
			if (func_374(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((func_580(uParam4) - func_581(uParam4)))) <= 2f)
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
				if (func_582(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && func_581(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (func_583(uParam4))
			{
				if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
				}
				func_584(uParam4);
				func_585(uParam4);
				return 1;
			}
			else
			{
				if (func_374(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228))
						{
							ANIMSCENE::TRIGGER_ANIM_SCENE_SKIP(uParam4->f_228);
						}
						func_68(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						func_196(uParam4, 512);
						func_383(uParam4, 67108864, 1);
						func_572(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!func_374(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228)) && CAM::IS_SCREEN_FADED_OUT()) && func_581(uParam4) <= 5000) && func_581(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!func_374(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_586(&(uParam4->f_285), 0);
					func_196(uParam4, 536870912);
				}
				if (func_581(uParam4) >= 5000 && func_581(uParam4) <= (func_580(uParam4) - 5000))
				{
					func_587();
				}
			}
			break;
		case 6:
			if (func_583(uParam4))
			{
				func_584(uParam4);
				func_585(uParam4);
				return 1;
			}
			break;
		case 4:
			if (func_374(uParam4, 524288))
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
						func_196(uParam4, 1073741824 /* Float: 2f */);
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
					Stack.Push(!func_573(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_222);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_228, false);
						}
						func_572(uParam4, 3);
					}
					else if (func_575(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_228, false);
						}
						func_572(uParam4, 3);
					}
				}
				if (func_569(uParam4) == 3)
				{
					if (func_374(uParam4, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		case 5:
			func_572(uParam4, 4);
			break;
	}
	return 0;
}

void func_246(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		if (func_374(uParam0, 16))
		{
			POPULATION::_0xA1CFB35069D23C23(uParam0->f_4);
			POPULATION::_0x74C2B3DC0B294102(uParam0->f_4);
			func_588(uParam0);
			PATHFIND::_0xD17672447692478E(uParam0->f_4, 0);
		}
	}
	if (func_374(uParam0, 8))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_4);
		func_383(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_383(uParam0, 16, 1);
}

void func_247(char[4] cParam0)
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
			if (func_392(cParam0->f_32.f_4, &Var0))
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

void func_248(int* iParam0)
{
	struct<247> Var0;

	Var0 = 1;
	Var0.f_13 = 17;
	Var0.f_218 = 1097859072;
	Var0.f_219 = 1101004800;
	Var0.f_246 = 4;
	MISC::_COPY_MEMORY(iParam0, &Var0, 314);
}

void func_249()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_52))
	{
		switch (Local_52.f_5)
		{
			case 0:
				func_589();
				break;
			case 1:
				func_590();
				break;
			case 2:
				func_591();
				break;
			case 3:
				func_592();
				break;
			case 4:
				func_593();
				break;
		}
	}
	else
	{
		if (func_166(1) && !func_166(256))
		{
			func_173(256);
		}
		func_594(5);
	}
}

void func_250(var uParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_60[iParam1 /*43*/]))
	{
		switch (Local_60[iParam1 /*43*/].f_40)
		{
			case 0:
				func_595(iParam1);
				break;
			case 1:
				func_596(iParam1);
				break;
			case 2:
				func_597(uParam0, iParam1);
				break;
			case 3:
				func_598(iParam1);
				break;
		}
	}
	else
	{
		func_599(iParam1, 4);
	}
}

void func_251(char[4] cParam0)
{
	int iVar0;

	if (!func_166(64))
	{
		if (!func_290(64))
		{
			if (func_69(&uLocal_545) > 2.5f && !func_235())
			{
				if (func_371(cParam0, Local_629[1 /*2*/], 1))
				{
					func_68(&uLocal_536);
				}
			}
		}
		if (!func_290(65536))
		{
			if (func_69(&uLocal_545) > 13f && !func_235())
			{
				if (func_371(cParam0, Local_629[5 /*2*/], 1))
				{
					func_68(&uLocal_536);
				}
			}
		}
	}
	else if (!func_290(2048))
	{
	}
	else if (!func_290(4096))
	{
	}
	if (func_166(131072))
	{
		if ((func_69(&uLocal_548) > 5f && !func_235()) && func_69(&uLocal_536) > 5f)
		{
			if (func_371(cParam0, Local_629[12 /*2*/], 0))
			{
				func_253(&uLocal_548);
				func_68(&uLocal_536);
			}
		}
	}
	if (func_290(16384))
	{
		if (((func_69(&uLocal_536) > 22f && iLocal_627 < 3) && func_488(Local_52, Global_35, 20f, 0)) && !func_235())
		{
			if (func_371(cParam0, Local_629[3 /*2*/], 0))
			{
				func_68(&uLocal_536);
				iLocal_627++;
			}
		}
	}
	func_600();
	func_601();
	if (!func_166(32))
	{
		func_173(32);
	}
	switch (iLocal_14)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (Local_60[iVar0 /*43*/].f_40 != 4)
				{
					func_602(iVar0);
				}
				iVar0++;
			}
			VEHICLE::_0x850CE59DEC2028F3(Local_356, 0);
			func_65("LSSLD2_FIGHT_START", 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_356))
			{
				ENTITY::SET_ENTITY_PROOFS(Local_356, 0, false);
				ENTITY::SET_ENTITY_PROOFS(Local_356, 4, false);
			}
			func_77(0, 0, 1);
			func_232(cParam0);
			func_603(cParam0);
			func_604();
			break;
		case 1:
			func_605(cParam0);
			if (func_606())
			{
				func_607();
				func_68(&uLocal_530);
				func_604();
				func_65("LSSLD2_FIGHT_END", 0);
			}
			break;
		case 2:
			if (!CAM::_0x1204EB53A5FBC63D())
			{
				if (!func_166(4096))
				{
					if (func_69(&uLocal_530) > 3f)
					{
						func_608(1);
					}
				}
				else
				{
					func_608(1);
				}
			}
			else if (!func_166(4096))
			{
				func_173(4096);
			}
			break;
	}
}

void func_252(var uParam0)
{
	switch (iLocal_14)
	{
		case 0:
			func_373(uParam0, "SOL2_RETURN_2", Local_52.f_1);
			func_292(65536);
			if (!func_609(Global_35, iLocal_499[0], 1, 0) && !func_488(Global_35, Local_52, 8f, 1))
			{
				func_91("SOL2_RETURN_2", 7500, 0, 1, 0, 0, -1, -1, 0);
				if (MAP::DOES_BLIP_EXIST(Local_52.f_7))
				{
					MAP::BLIP_ADD_MODIFIER(Local_52.f_7, -546708623);
				}
			}
			func_610(Local_52, 100);
			func_611();
			func_604();
			break;
		case 1:
			func_226();
			func_605(uParam0);
			if (!func_49(&uLocal_560))
			{
				if (func_609(Global_35, iLocal_499[0], 1, 0) || func_488(Global_35, Local_52, 10f, 1))
				{
					func_68(&uLocal_560);
				}
				else if (!func_612())
				{
					func_371(uParam0, Local_629[11 /*2*/], 1);
				}
			}
			else if (func_69(&uLocal_560) > 1f && func_226())
			{
				func_236(0);
				func_604();
			}
			break;
		case 2:
			func_608(2);
			break;
	}
}

void func_253(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_254(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 9);
}

bool func_255(int iParam0)
{
	return (Global_40.f_9052.f_21 && iParam0) != 0;
}

void func_256(int iParam0)
{
	Global_40.f_9052.f_21 = (Global_40.f_9052.f_21 || iParam0);
}

int func_257()
{
	return Global_1899515;
}

void func_258(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_613(*iParam0);
	iVar1 = func_614(*iParam0);
	iVar2 = func_615(*iParam0);
	iVar3 = func_324(*iParam0);
	iVar4 = func_616(*iParam0);
	iVar5 = func_617(*iParam0);
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
	iVar6 = func_618(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_618(iVar1, iVar0);
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
	func_619(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_259(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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

	if (!func_102(iParam0))
	{
		return;
	}
	if (func_402(iParam0) == 4)
	{
		func_620(iParam0, func_257());
		if (!func_403(iParam0) == 5 && !func_403(iParam0) == 6)
		{
			if (bParam3)
			{
				func_281(iParam0, 6);
			}
			else
			{
				func_281(iParam0, 5);
			}
			func_621(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_408(1);
	}
	iVar0 = func_304(iParam0);
	bVar1 = func_264() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_622(0, 2);
		if (!bVar1 && bParam1)
		{
			func_623();
		}
	}
	else
	{
		func_409(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_624(iParam0);
	}
	else
	{
		Var2 = { func_625(GET_HASH_KEY("DEATHS_ON_CURRENT_DEED")) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!func_411(32768))
		{
			Var4 = { func_625(GET_HASH_KEY("LAST_MISSION_NAME")) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && func_403(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_284(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[76 /*74*/].f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[func_284(iParam0) /*74*/].f_8), true);
						}
					}
					else if ((func_284(iParam0) != 95 && func_284(iParam0) != 82) && !func_286(Global_1347702[func_284(iParam0) /*49*/].f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1347702[func_284(iParam0) /*49*/].f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[func_284(iParam0) /*74*/].f_8), true);
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
		func_626(func_284(iParam0), iVar6, func_186());
	}
	else if (iVar0 == 8)
	{
		func_627(func_284(iParam0), iVar6, func_186(), func_424());
	}
	if (!func_403(iParam0) == 5 && !func_403(iParam0) == 6)
	{
		iVar9 = func_628(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_629(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!Global_1879534 && !Global_1879534.f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_630(func_284(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_631((iVar10 - 20), 0, iVar10);
					iVar11 = func_631((iVar11 - 10), 0, iVar11);
				}
				func_632(1);
				func_633(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528.f_217 = 1;
				break;
			case 4:
				func_633(45, 0, 1);
				break;
			case 8:
				iVar10 = func_634(func_284(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_631((iVar10 - 20), 0, iVar10);
					iVar11 = func_631((iVar11 - 10), 0, iVar11);
				}
				func_633(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_635(func_284(iParam0)))
				{
					func_291(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				Global_1899528.f_217 = 1;
				break;
			case 9:
				func_633(120, 0, 1);
				break;
			case 2:
				func_633(120, 0, 1);
				break;
			case 6:
				func_633(func_636(func_305(iParam0)), 0, 1);
				break;
			case 5:
				func_633(120, 0, 1);
				break;
		}
	}
	func_422(iParam0, 1);
	func_620(iParam0, func_257());
	func_621(iParam0);
	if ((!func_403(iParam0) == 0 && bParam1) && func_264() == -1)
	{
		iVar12 = func_417(iParam0);
		if (iVar12 != -1)
		{
			func_87(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_418();
			if (iVar12 != -1)
			{
				func_87(0);
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
				switch (func_284(iParam0))
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
				if (func_285(func_284(iParam0)) && func_286(Global_1347702[func_284(iParam0) /*49*/].f_12, 4))
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
				if (func_284(iParam0) != 77)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = func_637();
				}
				break;
			case 8:
				if (func_284(iParam0) != 58)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = func_637();
				}
				break;
		}
	}
	if (!func_403(iParam0) == 5 && !func_403(iParam0) == 6)
	{
		if (bParam3)
		{
			func_281(iParam0, 6);
		}
		else
		{
			func_281(iParam0, 5);
		}
		func_621(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_284(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					case 1:
						func_638();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_358(GET_HASH_KEY("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_358(GET_HASH_KEY("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_358(GET_HASH_KEY("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_358(GET_HASH_KEY("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_358(GET_HASH_KEY("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_358(GET_HASH_KEY("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_358(GET_HASH_KEY("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_358(GET_HASH_KEY("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_358(GET_HASH_KEY("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_358(GET_HASH_KEY("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_639(GET_HASH_KEY("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_358(GET_HASH_KEY("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_639(GET_HASH_KEY("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_358(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_639(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_358(GET_HASH_KEY("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_639(GET_HASH_KEY("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_358(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_639(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_358(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_639(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_358(GET_HASH_KEY("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_639(GET_HASH_KEY("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_358(GET_HASH_KEY("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_639(GET_HASH_KEY("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_358(GET_HASH_KEY("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_639(GET_HASH_KEY("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_358(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_639(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_358(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_639(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_358(GET_HASH_KEY("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_639(GET_HASH_KEY("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_358(GET_HASH_KEY("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_358(GET_HASH_KEY("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_358(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_358(GET_HASH_KEY("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_640();
						func_641(GET_HASH_KEY("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
						func_642();
						func_643();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(func_644(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131 /* GXTEntry: "Jamie Gillis" */);
						break;
					case 15:
						func_358(GET_HASH_KEY("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_HUNT_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_HUNT_ROOT"), true);
							func_645(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_GAMB_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_GAMB_ROOT"), true);
							func_645(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_646(304805134, 1, 1);
						if (!func_511(Global_1347702[21 /*49*/].f_15, 1))
						{
							func_259(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
						func_647();
						break;
					case 26:
						func_648();
						break;
					case 17:
						func_649(Global_35, GET_HASH_KEY("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
						if (func_650())
						{
							func_651(GET_HASH_KEY("WEAPON_REPEATER_EVANS"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_652(GET_HASH_KEY("TP_RMAY_LETTER_1"), -1))
						{
							iVar15 = func_257();
							func_258(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_653(GET_HASH_KEY("TP_RMAY_LETTER_1"), iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_650())
						{
							func_651(GET_HASH_KEY("WEAPON_REVOLVER_LEMAT"));
						}
						break;
					case 34:
						if (func_650())
						{
							func_651(GET_HASH_KEY("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_654();
						break;
					case 37:
						func_655();
						if (func_656())
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
						func_657();
						break;
					case 43:
						func_658();
						break;
					case 44:
						if (!func_511(Global_1347702[82 /*49*/].f_15, 1))
						{
							func_259(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
						if (!func_511(Global_1347702[83 /*49*/].f_15, 1))
						{
							func_259(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_659();
						break;
					case 59:
						func_660();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_661();
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
						func_662();
						if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_SURV_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_SURV_ROOT"), true);
							func_645(451, 0);
						}
						if (!func_663(GET_HASH_KEY("TAXIDERMY_ORDER_05")))
						{
							if (func_663(GET_HASH_KEY("TAXIDERMY_ORDER_04")))
							{
								iVar16 = func_257();
								func_258(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_653(GET_HASH_KEY("TP_TAXIDERMY_REWARD_04_ES"), iVar16, 1);
							}
						}
						if (func_664(4))
						{
							if (!func_665(GET_HASH_KEY("DOCUMENT_NOTE_RARE_FISH"), 1, 0))
							{
								iVar17 = func_257();
								func_258(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_653(GET_HASH_KEY("TP_RF_INVITATION_01"), iVar17, 1);
							}
						}
						func_358(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_358(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_666(89200);
						func_666(2300);
						func_666(2300);
						break;
					case 68:
						func_667();
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
						func_668();
						func_666(-139100);
						break;
					case 69:
						if (func_511(Global_1347702[9 /*49*/].f_15, 1))
						{
							func_666(-6000);
						}
						break;
					case 70:
						func_666(23400);
						func_666(1900);
						func_666(-15000);
						break;
					case 71:
						func_666(-5500);
						break;
				}
				break;
			case 8:
				switch (func_284(iParam0))
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
						func_669();
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
						func_670();
						break;
					case 66:
						func_671();
						func_672();
						break;
					case 67:
						if (!func_673(6))
						{
							func_674(6);
						}
						if (!func_673(3))
						{
							func_674(3);
						}
						if (func_650())
						{
							func_651(GET_HASH_KEY("WEAPON_PISTOL_M1899"));
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
						if (func_511(Global_1835011[69 /*74*/].f_1, 1))
						{
							func_675(0);
							func_666(40500);
						}
						else
						{
							func_675(0);
							func_666(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_284(iParam0))
				{
					case 0:
						switch (func_305(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297 /* GXTEntry: "Mrs. Londonderry" */);
								break;
						}
						break;
				}
				break;
		}
		func_676(iParam0);
		func_677();
		switch (iVar0)
		{
			case 1:
				switch (func_284(iParam0))
				{
					case 4:
						func_678(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_678(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						func_678(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_678(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_678(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_678(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_678(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_679(iParam0);
						func_678(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_678(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_678(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_665(GET_HASH_KEY("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_358(GET_HASH_KEY("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_678(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_678(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_678(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (func_679(iParam0) == 0)
						{
							func_678(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							func_678(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_286(Global_1347702[func_284(iParam0) /*49*/].f_12, 536870912))
				{
					func_680(11, 1);
				}
				switch (func_284(iParam0))
				{
					case 109:
						func_678(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						func_680(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_678(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_678(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_678(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_678(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_681(0, 10, 11, GET_HASH_KEY("CABR01")))
				{
					func_678(iParam0, func_679(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_681(0, 7, 11, GET_HASH_KEY("CACR02")))
				{
					func_678(iParam0, func_682(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_681(0, 8, 11, GET_HASH_KEY("CACR03")))
				{
					func_678(iParam0, func_682(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_681(0, 11, 11, GET_HASH_KEY("CACR01")))
				{
					func_678(iParam0, func_682(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_681(0, 12, 11, GET_HASH_KEY("CACR04")))
				{
					func_678(iParam0, func_682(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_403(iParam0) == 0)
			{
				if (func_405(iParam0) == 0)
				{
				}
				else if (STATS::STATSTRACKER_IS_INITIALIZED(func_405(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_683(func_304(iParam0), func_405(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_284(iParam0) == 58)
						{
							Global_1879514.f_1 = iParam0;
						}
						func_685(func_684(Global_1879514.f_1));
						if (iVar0 == 8 && func_284(iParam0) == 58)
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
						if (func_285(func_284(iParam0)) && func_286(Global_1347702[func_284(iParam0) /*49*/].f_12, 1))
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
			func_686(bParam2, iVar20);
		}
	}
	func_421(1);
	if ((bVar13 || func_637()) && (func_304(iParam0) == 1 || func_304(iParam0) == 8))
	{
		Global_1879534.f_6 = 1;
		Global_1879534.f_7 = 1;
	}
}

void func_260(int iParam0)
{
	if (!func_254(iParam0))
	{
		return;
	}
	else if (!func_102(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_40.f_9052, iParam0))
	{
		func_112(iParam0);
		MISC::SET_BIT(&(Global_40.f_9052), iParam0);
	}
	if (func_402(Global_1392626[iParam0 /*32*/].f_3) == 3)
	{
		func_294(Global_1392626[iParam0 /*32*/].f_3, 0, 2);
	}
}

bool func_261(int iParam0)
{
	iParam0 = func_509(iParam0);
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

bool func_262(int iParam0)
{
	int iVar0;

	iParam0 = func_509(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_261(iParam0))
	{
		return false;
	}
	iVar0 = func_518(iParam0);
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

void func_263(int iParam0)
{
	int iVar0;

	iParam0 = func_509(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_261(iParam0))
	{
		return;
	}
	iVar0 = func_518(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
}

int func_264()
{
	return Global_1572887.f_12;
}

void func_265(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_266()
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

int func_267(int iParam0)
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

void func_268(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

var func_269(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_270(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return MISC::VAR_STRING(2, func_687(sParam1));
}

void func_271(int iParam0)
{
	Global_1572864.f_11 = iParam0;
}

void func_272(bool bParam0)
{
	Global_1572864.f_14 = bParam0;
	if (bParam0)
	{
		func_274(1);
	}
}

void func_273(bool bParam0)
{
	Global_1572864.f_13 = bParam0;
	if (bParam0)
	{
		func_274(0);
	}
}

void func_274(int iParam0)
{
	Global_1572864.f_15 = iParam0;
}

void func_275(float fParam0)
{
	Global_1572864.f_22 = fParam0;
}

void func_276(bool bParam0)
{
	if (func_688())
	{
		Global_1357509 = 1;
	}
	if (func_689(GET_HASH_KEY("CAMERA_ITEM")))
	{
	}
	if (bParam0 && Global_1935630.f_44 == GET_HASH_KEY("WEAPON_KIT_CAMERA"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_UNARMED"), true, 0, false, false);
		Global_1935630.f_44 = GET_HASH_KEY("WEAPON_UNARMED");
	}
}

bool func_277(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_278()
{
	return Global_1572864.f_12;
}

void func_279(bool bParam0)
{
	int iVar0;
	struct<16> Var1;

	if (func_690(Global_1935630.f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_691();
	Var1.f_3.f_3 = iVar0;
	if ((!func_692(Global_1347343.f_2) && !func_277(Global_1347343.f_11, 64)) || func_411(32768))
	{
		Var1.f_7 = func_693();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_277(Global_1347343.f_11, 1024) && !func_411(32768))
	{
		Var1.f_11 = func_694();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_277(Global_1347343.f_11, 8))
	{
		Var1.f_15 = func_695();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343.f_1 != 2)
	{
		Global_1935630.f_3 = func_696(&Var1, "REPLAY_T", &(Global_1347343.f_3), 0, 1);
	}
	else
	{
		Global_1935630.f_3 = func_697(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !ENTITY::IS_ENTITY_ATTACHED(Global_35))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
	}
	func_95(&(Global_1347343.f_11), 1073741824 /* Float: 2f */);
	if (bParam0)
	{
		func_95(&(Global_1347343.f_11), 1048576);
	}
	CAM::_0x16E9ABDD34DDD931();
}

void func_280(int iParam0)
{
	int iVar0;

	if (!func_102(iParam0))
	{
		return;
	}
	if (iParam0 != func_101(0))
	{
		return;
	}
	if (func_405(iParam0) == 0)
	{
	}
	iVar0 = func_304(iParam0);
	if (func_403(iParam0) == 3)
	{
		if (func_405(iParam0) == 0)
		{
		}
		else if (STATS::STATSTRACKER_IS_INITIALIZED(func_405(iParam0)))
		{
			if (func_304(iParam0) != 1 && func_304(iParam0) != 8)
			{
				func_683(func_304(iParam0), func_405(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_621(iParam0);
	func_408(1);
	func_409(0);
	func_281(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_632(1);
			func_633(15, 0, 1);
			break;
		case 4:
			func_633(10, 0, 1);
			break;
		case 8:
			func_633(10, 0, 1);
			break;
		case 9:
			func_633(10, 0, 1);
			break;
		case 2:
			func_633(10, 0, 1);
			break;
		case 6:
			func_633(10, 0, 1);
			break;
		case 5:
			func_633(10, 0, 1);
			break;
	}
	func_421(1);
}

void func_281(int iParam0, int iParam1)
{
	if (!func_102(iParam0))
	{
		return;
	}
	func_698(iParam0, iParam1);
}

var func_282(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_283()
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

int func_284(int iParam0)
{
	if (!func_102(iParam0))
	{
		return -1;
	}
	return func_700(func_699(iParam0));
}

bool func_285(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_286(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_287()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar2 = 0;
	iVar3 = ITEMSET::CREATE_ITEMSET(true);
	iVar4 = PROPSET::_GET_ENTITIES_FROM_PROP_SET(iLocal_523, iVar3, 0, false, false);
	iVar2 = 0;
	while (iVar2 < iVar4)
	{
		iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar3);
		iVar1 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(iVar0);
		if (!ENTITY::IS_ENTITY_DEAD(Local_356))
		{
			if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_VISIBLE(iVar1)) && FIRE::IS_ENTITY_ON_FIRE(iVar1))
			{
				FIRE::STOP_ENTITY_FIRE(iVar1, 0);
			}
		}
		iVar2++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_356) && FIRE::IS_ENTITY_ON_FIRE(Local_356))
	{
		FIRE::STOP_ENTITY_FIRE(Local_356, 0);
	}
}

void func_288(bool bParam0)
{
	func_503(&vLocal_703, Local_52);
	PED::SET_PED_CONFIG_FLAG(Global_35, 363, false);
	func_408(1);
	TASK::REMOVE_COVER_POINT(iLocal_508);
	func_701();
	if (bParam0)
	{
		func_295(1);
	}
	else
	{
		func_295(0);
	}
	func_218();
	func_702();
	func_173(65536);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	func_207(&Local_685, 1, 1, 1, 0);
	vLocal_703.f_2 = 0;
}

bool func_289(int iParam0, char* sParam1)
{
	if (func_703(iParam0, sParam1))
	{
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(Local_18[iParam0 /*16*/], sParam1, true);
		Local_18[iParam0 /*16*/].f_15 = sParam1;
		return true;
	}
	return false;
}

bool func_290(int iParam0)
{
	return func_328(iLocal_659, iParam0);
}

void func_291(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_264() != -1)
	{
		return;
	}
	if ((Global_36616 && func_704(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_705(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != GET_HASH_KEY("HONOR_EVENT_AMBIENT_KILL") && iParam1 != GET_HASH_KEY("HONOR_EVENT_AMBIENT_KO")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_KILL_VERMIN")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_KILL_HORSE")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_706(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_707(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_706(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_292(int iParam0)
{
	func_401(&iLocal_659, iParam0);
}

bool func_293(int iParam0, float fParam1)
{
	vector3 vVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		if (BUILTIN::VDIST2(Global_36, vVar0) > (fParam1 * fParam1) && !ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_294(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_102(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_174(iParam0) && !func_175(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_405(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_174(iParam0))
	{
		iParam2 = -1;
	}
	if (func_403(iParam0) == 3 || (func_403(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_405(iParam0))))
	{
		func_683(func_304(iParam0), func_405(iParam0), iParam2);
		if ((!func_102(Global_1572864.f_8) && !func_100(0, 1, 0)) && !func_161(Global_1935630, 32768))
		{
			iVar0 = func_417(iParam0);
			if (iVar0 != -1)
			{
				func_87(0);
			}
			else if (func_304(iParam0) == 8)
			{
				iVar0 = func_418();
				if (iVar0 != -1)
				{
					func_87(0);
				}
			}
		}
	}
	func_281(iParam0, 0);
	if (func_101(0) == iParam0)
	{
		func_408(1);
		func_409(0);
		func_421(1);
	}
	func_422(iParam0, 1);
	func_621(iParam0);
}

void func_295(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_319[0 /*6*/]))
		{
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), Local_319[0 /*6*/], 33, 0, 0);
			PED::SET_PED_CONFIG_FLAG(Local_319[0 /*6*/], 136, false);
			func_395(Local_319[0 /*6*/], 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_319[1 /*6*/]))
		{
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), Local_319[1 /*6*/], 33, 0, 0);
			PED::SET_PED_CONFIG_FLAG(Local_319[1 /*6*/], 136, false);
			func_395(Local_319[1 /*6*/], 0);
		}
		func_115(&Local_52, 1, 0, 1);
		func_115(&(Local_319[0 /*6*/]), 1, 0, 1);
		func_115(&(Local_319[1 /*6*/]), 1, 0, 1);
	}
	func_115(&Local_350, 1, 0, 1);
	func_115(&(Local_319[2 /*6*/]), 1, 0, 1);
	func_115(&(Local_319[3 /*6*/]), 1, 0, 1);
	func_115(&(Local_319[4 /*6*/]), 1, 0, 1);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_115(&(Local_60[iVar0 /*43*/]), 1, 0, 1);
		func_708(&(Local_60[iVar0 /*43*/].f_42));
		iVar0++;
	}
}

void func_296(var uParam0, int iParam1)
{
	if (func_709(uParam0))
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(uParam0, iParam1);
	}
}

void func_297(int* iParam0)
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

void func_298(int iParam0)
{
	func_710(&iLocal_658, iParam0);
}

void func_299(var uParam0)
{
	if (uParam0->f_3)
	{
		if (func_506(uParam0->f_5))
		{
			func_507(&(uParam0->f_5), 1, 1);
		}
		if (func_506(uParam0->f_6))
		{
			func_507(&(uParam0->f_6), 1, 1);
		}
		*uParam0 = 0;
		uParam0->f_1 = 0;
		uParam0->f_9 = 0;
		uParam0->f_11 = 0;
		uParam0->f_12 = 0;
		uParam0->f_10 = 0;
		uParam0->f_16 = 0f;
		uParam0->f_17 = 0f;
		uParam0->f_7 = "";
		uParam0->f_8 = "";
		uParam0->f_3 = 0;
		uParam0->f_4 = 0;
		uParam0->f_13 = -1;
		if (uParam0->f_2 != 0)
		{
			GRAPHICS::ANIMPOSTFX_STOP("MissionChoice");
		}
		uParam0->f_2 = 0;
		AUDIO::_0x9428447DED71FC7E("player_decision_moment_scenes");
		HUD::_UIPROMPT_CLEAR_HORIZONTAL_ORIENTATION(uParam0->f_15);
	}
}

void func_300(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		MISC::_0xE98D55C5983F2509(*iParam0);
		PED::SET_PED_CONFIG_FLAG(*iParam0, 297, false);
	}
}

void func_301(var uParam0)
{
	*uParam0 = 0;
}

void func_302(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	func_711(vVar0, 0);
}

void func_303(vector3 vParam0, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_712(vVar0, vVar3, 0f) };
	vVar9 = { func_713(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, 0, 1);
	}
	else
	{
		PATHFIND::_0x6C3F12ECEB6D2E2A(vVar6, vVar9, iParam4, 1);
	}
}

int func_304(int iParam0)
{
	if (!func_102(iParam0))
	{
		return 0;
	}
	return func_714(func_699(iParam0));
}

int func_305(int iParam0)
{
	if (!func_102(iParam0))
	{
		return -1;
	}
	return func_715(func_699(iParam0));
}

void func_306()
{
	Local_52.f_1 = { 1413.079f, 1166.25f, 184.1042f };
	Local_52.f_4 = 0f;
	Local_52.f_6 = GET_HASH_KEY("CS_JOHNWEATHERS");
	Local_52.f_5 = 0;
}

void func_307()
{
	Local_60[0 /*43*/].f_1 = { 1414.398f, 1139.17f, 183.6895f };
	Local_60[0 /*43*/].f_4 = { 1410.575f, 1147.983f, 183.558f };
	Local_60[0 /*43*/].f_7 = { 1462.395f, 1099.259f, 188.6942f };
	Local_60[0 /*43*/].f_10 = 26.1434f;
	Local_60[0 /*43*/].f_41 = GET_HASH_KEY("S_M_Y_ARMY_01");
	Local_60[0 /*43*/].f_40 = 0;
	Local_60[1 /*43*/].f_1 = { 1414.136f, 1132.298f, 183.9324f };
	Local_60[1 /*43*/].f_4 = { 1408.493f, 1137.189f, 184.312f };
	Local_60[1 /*43*/].f_7 = { 1464.988f, 1095.982f, 188.4954f };
	Local_60[1 /*43*/].f_10 = 21.3641f;
	Local_60[1 /*43*/].f_41 = GET_HASH_KEY("S_M_Y_ARMY_01");
	Local_60[1 /*43*/].f_40 = 0;
	Local_60[2 /*43*/].f_1 = { 1418.034f, 1132.949f, 183.5892f };
	Local_60[2 /*43*/].f_4 = { 1420.603f, 1138.341f, 184.1985f };
	Local_60[2 /*43*/].f_7 = { 1469.595f, 1093.98f, 188.5695f };
	Local_60[2 /*43*/].f_10 = 339.3573f;
	Local_60[2 /*43*/].f_41 = GET_HASH_KEY("S_M_Y_ARMY_01");
	Local_60[2 /*43*/].f_40 = 0;
	Local_60[3 /*43*/].f_1 = { 1418.476f, 1126.303f, 183.4368f };
	Local_60[3 /*43*/].f_4 = { 1413.13f, 1135.967f, 183.6986f };
	Local_60[3 /*43*/].f_7 = { 1468.512f, 1088.785f, 187.4044f };
	Local_60[3 /*43*/].f_10 = 18.2313f;
	Local_60[3 /*43*/].f_41 = GET_HASH_KEY("S_M_Y_ARMY_01");
	Local_60[3 /*43*/].f_40 = 0;
	Local_60[4 /*43*/].f_1 = { 1418.322f, 1137.054f, 183.813f };
	Local_60[4 /*43*/].f_4 = { 1415.467f, 1129.905f, 183.4647f };
	Local_60[4 /*43*/].f_7 = { 1444.072f, 1074.533f, 181.7294f };
	Local_60[4 /*43*/].f_10 = 38.9395f;
	Local_60[4 /*43*/].f_41 = GET_HASH_KEY("S_M_Y_ARMY_01");
	Local_60[4 /*43*/].f_40 = 0;
	Local_60[5 /*43*/].f_1 = { 1416.879f, 1144.731f, 183.5307f };
	Local_60[5 /*43*/].f_4 = { 1418.203f, 1132.504f, 183.6696f };
	Local_60[5 /*43*/].f_7 = { 1441.523f, 1082.701f, 182.834f };
	Local_60[5 /*43*/].f_10 = 44.8533f;
	Local_60[5 /*43*/].f_41 = GET_HASH_KEY("S_M_Y_ARMY_01");
	Local_60[5 /*43*/].f_40 = 0;
}

void func_308()
{
	Local_319[0 /*6*/].f_1 = { 1413.76f, 1171.73f, 184.91f };
	Local_319[0 /*6*/].f_4 = -145.75f;
	Local_319[0 /*6*/].f_5 = GET_HASH_KEY("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	Local_319[1 /*6*/].f_1 = { 1415.97f, 1171.44f, 185f };
	Local_319[1 /*6*/].f_4 = -179.32f;
	Local_319[1 /*6*/].f_5 = GET_HASH_KEY("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	Local_319[2 /*6*/].f_1 = { 1464.079f, 1092.902f, 183.1848f };
	Local_319[2 /*6*/].f_4 = 17.9074f;
	Local_319[2 /*6*/].f_5 = GET_HASH_KEY("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	Local_319[3 /*6*/].f_1 = { 1464.079f, 1092.902f, 183.1848f };
	Local_319[3 /*6*/].f_4 = 17.9074f;
	Local_319[3 /*6*/].f_5 = GET_HASH_KEY("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	Local_319[4 /*6*/].f_1 = { 1464.079f, 1092.902f, 183.1848f };
	Local_319[4 /*6*/].f_4 = 17.9074f;
	Local_319[4 /*6*/].f_5 = GET_HASH_KEY("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
}

void func_309()
{
	Local_350.f_1 = { 1418.463f, 1179.922f, 183.5101f };
	Local_350.f_4 = 160.1241f;
	Local_350.f_5 = GET_HASH_KEY("CS_MRSWEATHERS");
}

void func_310()
{
	Local_356.f_1 = { 1412.126f, 1167.47f, 184.843f };
	Local_356.f_4 = 283.34f;
}

void func_311()
{
	Local_361[0 /*8*/].f_1 = { 1415.31f, 1167.53f, 184.14f };
	Local_361[0 /*8*/].f_4 = { 0f, 0f, 25.21f };
	Local_361[0 /*8*/].f_7 = GET_HASH_KEY("P_CRATETOOLS01X");
}

void func_312()
{
	Local_629[0 /*2*/] = { func_716("LS_SOL2_LOOPS", 32) };
	Local_629[1 /*2*/] = { func_716("LS_SOL2_JJ_HRSE", 64) };
	Local_629[2 /*2*/] = { func_716("LS_SOL2_JJ_SHOT", 128) };
	Local_629[3 /*2*/] = { func_716("LS_SOL2_JJ_FGHT", 256) };
	Local_629[4 /*2*/] = { func_716("LS_SOL2_JJ_SCTR", 512) };
	Local_629[11 /*2*/] = { func_716("LS_SOL2_JJ_RTRN", 1024) };
	Local_629[5 /*2*/] = { func_716("LS_SOL2_JJ_EXPL", 65536) };
	Local_629[6 /*2*/] = { func_716("LS_SOL2_JJ_FIRE", 2048) };
	Local_629[7 /*2*/] = { func_716("LS_SOL2_JJ_FIR2", 4096) };
	Local_629[8 /*2*/] = { func_716("LS_SOL2_JJ_FIR3", 8192) };
	Local_629[9 /*2*/] = { func_716("LS_SOL2_JJ_FIR4", 16384) };
	Local_629[10 /*2*/] = { func_716("LS_SOL2_JJ_FAR", 32768) };
	Local_629[12 /*2*/] = { func_716("LS_SOL2_JJ_WAVE", 131072) };
	Local_629[13 /*2*/] = { func_716("LS_SOL2_JJ_AIM", 256) };
}

void func_313()
{
	Local_18[0 /*16*/] = { func_717("script@proc@loansharking@soldier@leadin@int@leadin_ilo", "pl_Leadin") };
	Local_18[1 /*16*/] = { func_717("script@proc@loansharking@soldier@wagonfire@wagonfire", 0) };
}

void func_314()
{
	func_718(&(iLocal_499[0]), 1413.438f, 1171.715f, 185.7091f, 0f, 0f, 12.99997f, 10.5f, 6f, 5f, "MV_BEHIND_WAGON");
	func_718(&(iLocal_499[1]), 1425.042f, 1121.301f, 184.2452f, 0f, 0f, 17.5f, 261.5f, 98.25f, 84.25f, "MV_INFRONT_WAGON");
	func_719(&(iLocal_499[2]), 1413.079f, 1166.25f, 184.104f, 0f, 0f, 0f, 30f, 30f, 30f, "MV_CUTSCENE_RESTRICT");
	func_719(&(iLocal_499[3]), 1413.016f, 1165.55f, 184.104f, 0f, 0f, 104f, 2f, 1.8f, 5.25f, "MV_ILO_VOLUME");
	func_719(&(iLocal_499[4]), 1412.015f, 1169.562f, 184.104f, 0f, 0f, 104f, 1.8f, 1.8f, 5.25f, "MV_ILO_MULTISTART_VOLUME");
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_499[5]))
	{
		iLocal_499[5] = VOLUME::_0x0EB78C2B156635B1(GET_HASH_KEY("VOLCYLINDER"), 1412.662f, 1166.301f, 185.2112f, 0f, 0f, 102.75f, 1.2f, 1.4f, 4.25f);
	}
}

int func_315(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((func_720(iParam0, 16777216) && func_720(iParam0, 33554432)) && func_720(iParam0, 268435456))
	{
		return GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN");
	}
	iVar0 = WEAPON::_0xF8204EF17410BF43(GET_HASH_KEY("GROUP_PISTOL"), iParam1, iParam2, 0);
	iVar1 = WEAPON::_0xF8204EF17410BF43(GET_HASH_KEY("GROUP_REVOLVER"), iParam1, iParam2, 0);
	iVar2 = GET_HASH_KEY("WEAPON_SHOTGUN_SAWEDOFF");
	iVar3 = 0;
	if (!func_720(iParam0, 33554432))
	{
		iVar3 = iVar1;
	}
	if (!func_720(iParam0, 16777216))
	{
		if (!func_367(iVar3) || WEAPON::_0xF2F585411E748B9C(iVar0, 0) > WEAPON::_0xF2F585411E748B9C(iVar3, 0))
		{
			iVar3 = iVar0;
		}
	}
	if (!func_720(iParam0, 268435456) && func_721(iVar2))
	{
		if (!func_367(iVar3) || WEAPON::_0xF2F585411E748B9C(iVar2, 0) > WEAPON::_0xF2F585411E748B9C(iVar3, 0))
		{
			iVar3 = iVar2;
		}
	}
	if (!func_367(iVar3))
	{
		return GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN");
	}
	return iVar3;
}

int func_316(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (((func_720(iParam0, 8388608) && func_720(iParam0, 1048576)) && func_720(iParam0, 2097152)) && func_720(iParam0, 4194304))
	{
		return GET_HASH_KEY("WEAPON_REPEATER_CARBINE");
	}
	iVar0 = WEAPON::_0xF8204EF17410BF43(GET_HASH_KEY("GROUP_REPEATER"), iParam1, iParam2, 0);
	iVar1 = WEAPON::_0xF8204EF17410BF43(GET_HASH_KEY("GROUP_RIFLE"), iParam1, iParam2, 0);
	iVar2 = WEAPON::_0xF8204EF17410BF43(GET_HASH_KEY("GROUP_SNIPER"), iParam1, iParam2, 0);
	iVar3 = WEAPON::_0xF8204EF17410BF43(GET_HASH_KEY("GROUP_SHOTGUN"), iParam1, iParam2, 0);
	while (func_722(iVar3))
	{
		iVar4++;
		if (iVar4 >= 10)
		{
			iVar3 = GET_HASH_KEY("WEAPON_SHOTGUN_DOUBLEBARREL");
			Jump @189; //curOff = 164
		}
		else
		{
			iVar3 = WEAPON::_0xF8204EF17410BF43(GET_HASH_KEY("GROUP_SHOTGUN"), iParam1, iParam2, 0);
		}
	}
	if (!func_721(iVar3))
	{
		iVar3 = GET_HASH_KEY("WEAPON_REPEATER_CARBINE");
	}
	iVar5 = 0;
	if (!func_720(iParam0, 8388608))
	{
		iVar5 = iVar0;
	}
	if (!func_720(iParam0, 1048576))
	{
		if (!func_367(iVar5) || WEAPON::_0xF2F585411E748B9C(iVar1, 0) > WEAPON::_0xF2F585411E748B9C(iVar5, 0))
		{
			iVar5 = iVar1;
		}
	}
	if (!func_720(iParam0, 2097152))
	{
		if (!func_367(iVar5) || WEAPON::_0xF2F585411E748B9C(iVar3, 0) > WEAPON::_0xF2F585411E748B9C(iVar5, 0))
		{
			iVar5 = iVar3;
		}
	}
	if (!func_720(iParam0, 4194304))
	{
		if (!func_367(iVar5) || WEAPON::_0xF2F585411E748B9C(iVar2, 0) > WEAPON::_0xF2F585411E748B9C(iVar5, 0))
		{
			iVar5 = iVar2;
		}
	}
	if (!func_367(iVar5))
	{
		return GET_HASH_KEY("WEAPON_REPEATER_CARBINE");
	}
	return iVar5;
}

void func_317(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	uParam0->f_17.f_9 = { vParam7 };
	uParam0->f_17.f_5 = (vParam7.x + 2f);
	func_719(&(uParam0->f_17.f_8), vParam1, vParam4, uParam0->f_17.f_9, "LS CORE Dismount area");
}

void func_318(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, int iParam6)
{
	uParam0->f_17.f_2 = fParam1;
	uParam0->f_17.f_3 = fParam2;
	uParam0->f_17.f_4 = fParam3;
	uParam0->f_17.f_5 = fParam4;
	uParam0->f_17.f_6 = fParam5;
	uParam0->f_17.f_7 = iParam6;
	uParam0->f_17 = 0;
}

int func_319(var uParam0)
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

bool func_320()
{
	if (ENTITY::IS_ENTITY_DEAD(Local_52))
	{
		return true;
	}
	else if (func_140(Local_52, 0, &uLocal_569, &iLocal_625, 1, 0))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_319[0 /*6*/]))
	{
		return true;
	}
	else if (func_140(Local_319[0 /*6*/], 0, &uLocal_597, &iLocal_625, 1, 0) || PED::IS_PED_FLEEING(Local_319[0 /*6*/]))
	{
		return true;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, Local_356))
		{
			return true;
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_319[1 /*6*/]))
	{
		return true;
	}
	else if (func_140(Local_319[1 /*6*/], 0, &uLocal_597, &iLocal_625, 1, 0) || PED::IS_PED_FLEEING(Local_319[1 /*6*/]))
	{
		return true;
	}
	return false;
}

void func_321(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_322(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_323(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888.f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_324(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_325(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_326(int iParam0)
{
	int iVar0;

	if (!func_723(iParam0))
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

int func_327(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_724(bParam1, bParam2, bParam3);
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

bool func_328(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_329(var uParam0, bool bParam1, int iParam2)
{
	func_725(iParam2);
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
		uParam0->f_13 = func_726(0);
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
							func_123(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_727(1))
						{
							func_123(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_727(1) || *uParam0 & 8192 != 0))
				{
					func_122(uParam0, 33554432);
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
			if (func_728(uParam0))
			{
				uParam0->f_15 = func_160();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_160() - uParam0->f_15) > 500)
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
	func_729(uParam0);
}

bool func_330(int iParam0, var uParam1)
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
			if (!func_730(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_731(iParam0, iVar2) <= func_732(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_331(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_733(iParam2, 1, 1, 1, 0))
	{
		func_123(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_734(uParam1, 1);
	func_145();
}

bool func_332(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_735(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_736(uParam1);
			if (func_737(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_738(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_734(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_734(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_333(int iParam0, int iParam1, var uParam2)
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
	if (func_739(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_736(uParam2);
		if (func_737(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_738(uParam2)
				{
					func_734(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_334(int iParam0, var uParam1)
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
	if (func_730(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_738(uParam1)
		{
			fVar3 = func_736(uParam1);
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

bool func_335(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_160();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_336(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_740(uParam2);
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
			if (func_344(uParam2, iParam1))
			{
				func_734(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_337(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_741(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_344(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_734(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_338(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_742(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_734(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_734(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, 0, 0);
					if (func_743(iParam1, vVar0, vVar4))
					{
						func_734(uParam2, 1);
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
					func_734(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, 0, 0);
					if (func_743(iParam1, vVar0, vVar7))
					{
						func_734(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_339(int iParam0, var uParam1)
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
		if (!func_730(iParam0, uParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_744(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_745(Global_1935630.f_34[iVar0]))
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
			if (func_746(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_747(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_748(uParam1, iParam0, fVar1, iVar0))
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

bool func_340(int iParam0, var uParam1)
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

bool func_341(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_160();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_342(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_749(iVar0, &iVar2))
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
	if (func_750(iVar0, iParam0))
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

int func_343(var uParam0, int iParam1)
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

bool func_344(var uParam0, int iParam1)
{
	if (func_751(uParam0))
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

bool func_345(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_752(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_346()
{
}

bool func_347(var uParam0, int iParam1)
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
		if (func_753(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_160();
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
						if (func_379(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_160();
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

bool func_348()
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
	if ((func_160() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_349(var uParam0, int iParam1)
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
	fVar0 = func_732(uParam0);
	if (uParam0->f_12 > func_754(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_755(iParam1);
	iVar1 = func_756(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, uParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

bool func_350(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam2->f_12 > 4f)
	{
		return false;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_757(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_351(int iParam0, var uParam1)
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
		if (func_758(iParam0, uParam1, 1))
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
					if (!func_759(uParam1, iParam0))
					{
						if (func_379(iVar4, Global_36, 1) < 7f)
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

bool func_352(int iParam0, var uParam1)
{
	if (!func_760(0))
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

bool func_353(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_160();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_354(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

bool func_355(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return false;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_160();
	}
	else if (func_160() - uParam1->f_4) > func_761(uParam1)
	{
		return func_762(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return false;
}

bool func_356(var uParam0, int iParam1)
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

void func_357(char[4] cParam0, int iParam1)
{
	cParam0->f_14 = iParam1;
}

bool func_358(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_763(iParam0, 0))
	{
		return false;
	}
	if (!func_764(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_765(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_766(iParam0, bParam2);
	iVar2 = 0;
	if (func_767(iParam0, 0, 0) == 0)
	{
		if (func_768(iParam0))
		{
			iVar5 = func_769(iParam0);
			iVar6 = func_770(iVar5);
			iVar7 = func_771(iVar6) + 1;
			func_772(iVar5);
			if (func_773(38))
			{
				func_645(483, 0);
			}
			else
			{
				func_645(482, 0);
			}
			if (iVar7 == func_774(iVar6))
			{
				func_358(func_775(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_510() && func_776(4))
				{
					if (func_510() && (func_777(38) || func_773(38)))
					{
						func_779(38, func_775(iVar6), 0, 0, func_778(), 0, -1, 0);
						func_780(2);
					}
					else
					{
						func_779(38, func_775(iVar6), 0, 0, func_778(), 0, -1, 0);
						func_780(1);
					}
				}
			}
			else if (func_510() && func_776(4))
			{
				if (func_510() && (func_777(38) || func_773(38)))
				{
					func_779(38, 0, 0, 0, func_778(), 0, -1, 0);
					func_780(2);
				}
				else
				{
					func_779(38, 0, 0, 0, func_778(), 0, -1, 0);
					func_780(1);
				}
			}
			if (func_510() && func_776(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (func_510() && (func_777(38) || func_773(38)))
					{
						func_781(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_781(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_782(iParam0) == GET_HASH_KEY("CLOTHING"))
	{
		if ((!func_783(iParam0, 866047851) && !func_783(iParam0, -1979000645)) && !func_783(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_784(iParam0, 8388608) && !func_785(28))
	{
		func_786(28);
	}
	if (!bVar3)
	{
		if (func_783(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_787(iParam0) == -1447088266)
			{
				iVar1 = func_789(func_788(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_264() == -1)
					{
						func_790(iVar1);
					}
					if (func_791(0) && func_792(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_793(iParam0, iVar0, iParam5);
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
					if (func_264() == -1)
					{
						func_790(iParam0);
					}
					if (func_791(0) && func_792(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_793(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_782(iParam0) == GET_HASH_KEY("WEAPON"))
		{
			if (!func_794(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_782(iParam0) == GET_HASH_KEY("AMMO") && func_795(iParam0))
		{
			if (!func_796(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_783(iParam0, 866047851))
		{
			func_797(iParam0);
		}
		else if (func_783(iParam0, 2000026003))
		{
			func_798(iParam0);
		}
		else if (func_783(iParam0, -103750053))
		{
			func_800(func_799(GET_HASH_KEY("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == GET_HASH_KEY("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_800(func_801(GET_HASH_KEY("COLLECTED"), GET_HASH_KEY("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_783(iParam0, -121341956) && !func_783(iParam0, 606799272))
		{
			if (iParam0 != GET_HASH_KEY("WEAPON_KIT_DETECTOR") && iParam0 != GET_HASH_KEY("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (func_511(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_645(498, 0);
				}
			}
			if (func_783(iParam0, -2017733358) || func_783(iParam0, -1369131378))
			{
				func_802(iParam0);
			}
		}
		else if (func_783(iParam0, -136654233))
		{
			if (func_783(iParam0, -1021472396))
			{
			}
		}
		else if (func_783(iParam0, -1466706512) && func_783(iParam0, 1147021565))
		{
			func_645(484, 0);
		}
		else if (func_783(iParam0, 1147021565) && func_783(iParam0, -524514947))
		{
		}
		else if (func_783(iParam0, 554195525))
		{
		}
		else if (func_783(iParam0, 589988438))
		{
			if (func_803())
			{
				func_804(GET_HASH_KEY("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_783(iParam0, 787083290) && func_783(iParam0, 949916894))
		{
			func_805(iParam0);
		}
		else if (func_783(iParam0, -1718133314))
		{
			func_806(iParam0);
		}
		else if (func_783(iParam0, -1738650224))
		{
			func_807(iParam0);
		}
		else if (func_783(iParam0, -1112814642) && func_783(iParam0, 949916894))
		{
			func_808(iParam0);
		}
		else if (iParam0 == GET_HASH_KEY("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_783(iParam0, 1841149704))
		{
			func_809();
		}
		else if (func_783(iParam0, 606799272))
		{
			func_810(iParam0, iParam1);
			func_811(iParam0);
		}
		else if (func_783(iParam0, -1112814642) && func_783(iParam0, -1697809989))
		{
			func_812(iParam0, 0, 0, 0);
		}
		else if (func_783(iParam0, -2017733358) || func_783(iParam0, -1369131378))
		{
			func_802(iParam0);
		}
		else if (func_783(iParam0, -1921346699))
		{
			if (func_264() != -1)
			{
				return false;
			}
			func_813(iParam0, iParam5, iParam8);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_783(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_665(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_358(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_665(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_358(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_665(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_358(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_665(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_358(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_665(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_358(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_665(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_358(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_783(iParam0, -839724752) && func_784(iParam0, 4))
		{
			if (!func_773(42))
			{
				func_814(iParam0);
			}
		}
		else if (func_783(iParam0, 1399091007))
		{
			func_815(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_783(iParam0, 1248798204))
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
				func_358(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_786(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					func_816(PLAYER::PLAYER_PED_ID(), GET_HASH_KEY("UPGRADE_OFFHAND_HOLSTER"), 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_817(&iVar9, 0))
				{
					func_792(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case GET_HASH_KEY("UPGRADE_BANDOLIER"):
				if (func_264() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					func_816(PLAYER::PLAYER_PED_ID(), GET_HASH_KEY("UPGRADE_BANDOLIER"), 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case GET_HASH_KEY("WEAPON_KIT_BINOCULARS"):
				break;
			case GET_HASH_KEY("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_645(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_818();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_819();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_820();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_821();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_822();
				break;
			case GET_HASH_KEY("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_01"):
				func_823(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_01"), 0);
				func_824(499813453, 0);
				func_825(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_02"):
				func_823(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_02"), 0);
				func_824(499813453, 0);
				func_825(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_03"):
				func_823(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_03"), 0);
				func_824(499813453, 0);
				func_825(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_04"):
				func_823(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_05"), 0);
				func_824(666607663, 0);
				func_826(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_05"):
				func_823(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_06"), 0);
				func_824(666607663, 0);
				func_826(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_06"):
				func_823(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_07"), 0);
				func_824(666607663, 0);
				func_826(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_07"):
				func_823(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_09"), 0);
				func_824(-220219788, 0);
				func_827(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_08"):
				func_823(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_10"), 0);
				func_824(-220219788, 0);
				func_827(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_09"):
				func_823(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_11"), 0);
				func_824(-220219788, 0);
				func_827(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_10"):
				func_823(218622660, GET_HASH_KEY("TREASURE_HUNT_LOOT_13"), 0);
				func_824(218622660, 0);
				func_828(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_11"):
				func_823(218622660, GET_HASH_KEY("TREASURE_HUNT_LOOT_14"), 0);
				func_824(218622660, 0);
				func_828(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_13"):
				func_823(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_16"), 0);
				func_824(390004462, 0);
				func_829(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_14"):
				func_823(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_17"), 0);
				func_824(390004462, 0);
				func_829(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_15"):
				func_823(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_18"), 0);
				func_824(390004462, 0);
				func_829(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_16"):
				func_823(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_20"), 0);
				func_824(6410548, 0);
				func_830(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_17"):
				func_823(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_21"), 0);
				func_824(6410548, 0);
				func_830(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_18"):
				func_823(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_22"), 0);
				func_824(6410548, 0);
				func_830(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_19"):
				func_823(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_23"), 0);
				func_824(6410548, 0);
				func_830(8);
				break;
			case GET_HASH_KEY("CONSUMABLE_AGED_PIRATE_RUM"):
				func_832(242, func_831(GET_HASH_KEY("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_GINSENG_ELIXIER"):
				func_832(240, func_831(GET_HASH_KEY("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_VALERIAN_ROOT"):
				func_832(241, func_831(GET_HASH_KEY("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case GET_HASH_KEY("CONSUMABLE_POTENT_MEDICINE"):
			case GET_HASH_KEY("CONSUMABLE_MEDICINE"):
			case GET_HASH_KEY("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_833(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_833(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_833(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case GET_HASH_KEY("CONSUMABLE_TONIC"):
			case GET_HASH_KEY("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_833(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_833(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case GET_HASH_KEY("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_833(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_HAIR_TONIC"):
				func_645(488, 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_HAIR_GREASE"):
				func_645(491, 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX"):
				func_645(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_358(func_834(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_358(func_835(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_785(1))
				{
					func_645(487, 0);
				}
				break;
			case GET_HASH_KEY("KIT_GUN_OIL"):
				func_645(486, 0);
				break;
			case GET_HASH_KEY("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_264() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case GET_HASH_KEY("UPGRADE_UPG_COFFEE_KIT"):
				func_645(496, 0);
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
		func_836(&iVar10);
		if (!func_837(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_791(0))
		{
			return true;
		}
		if (func_782(iParam0) == GET_HASH_KEY("CLOTHING"))
		{
			func_838(iParam0);
		}
		if (func_783(iParam0, -1979000645))
		{
			func_839(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_791(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_358(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_840(iVar2, 0);
		}
	}
	Var35 = { func_841(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	func_842(iParam0);
	if (fParam6 > 0f)
	{
		if (func_783(iParam0, -839724752))
		{
			func_843(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_844(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

bool func_359(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_360(int iParam0, bool bParam1)
{
	if (!func_359(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_845(iParam0), func_846(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_845(iParam0), func_846(iParam0), 2, "");
		func_847(iParam0, 16);
	}
	else
	{
		if (func_359(iParam0, 8))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_845(iParam0), func_846(iParam0), 1, "");
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_845(iParam0), func_846(iParam0), 0, "");
		}
		func_848(iParam0, 16);
	}
}

void func_361(int iParam0, bool bParam1)
{
	if (Global_1347702[iParam0 /*49*/].f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_359(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_845(iParam0), func_846(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_359(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_845(iParam0), func_846(iParam0), 1, "");
		}
		func_847(iParam0, 8);
	}
	else
	{
		if (func_359(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_845(iParam0), func_846(iParam0), 0, "");
		}
		func_848(iParam0, 8);
	}
}

float func_362(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_363(int iParam0)
{
	func_850(iParam0, func_849(iParam0), (Global_1392626[iParam0 /*32*/].f_4 / 2f));
}

void func_364(int iParam0, int iParam1)
{
	if (func_254(iParam0))
	{
		Global_40.f_9052.f_11[iParam0] = (Global_40.f_9052.f_11[iParam0] || iParam1);
	}
}

void func_365(int iParam0, bool bParam1)
{
	if (func_264() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_411(32768))
	{
		return;
	}
	if (!func_411(32768))
	{
		func_851(1, bParam1);
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
	if (func_411(32768))
	{
		Global_2621440[iParam0 /*12066*/].f_9.f_14 = func_257();
	}
}

int func_366(int iParam0, int iParam1)
{
	var uVar0;

	return func_852(&uVar0, iParam0, iParam1);
}

bool func_367(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != GET_HASH_KEY("WEAPON_UNARMED"));
}

void func_368(bool bParam0, bool bParam1)
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
			if (func_367(iVar3) && WEAPON::IS_WEAPON_A_GUN(iVar3))
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
		func_853(1);
	}
}

void func_369(int iParam0, vector3 vParam1, var uParam4)
{
	Global_2621440[iParam0 /*12066*/].f_9.f_7 = { vParam1 };
	Global_2621440[iParam0 /*12066*/].f_9.f_13 = uParam4;
	Global_2621440[iParam0 /*12066*/].f_9 = 5;
	Global_2621440[iParam0 /*12066*/].f_9.f_15 = func_854(vParam1, 1);
}

void func_370(char* sParam0, bool bParam1)
{
	func_855(sParam0, bParam1, 0);
}

bool func_371(char[4] cParam0, struct<2> Param1, bool bParam3)
{
	if (!func_290(Param1.f_1))
	{
		if (func_856(&(cParam0->f_2106), Param1, 0))
		{
			if (bParam3)
			{
				func_292(Param1.f_1);
			}
			return true;
		}
	}
	return false;
}

bool func_372(char[4] cParam0, char* sParam1, char* sParam2, vector3 vParam3, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	bool bVar1;

	bVar1 = false;
	if (!iParam6 == 0)
	{
		fVar0 = func_752(Global_35, iParam6, 1, 1);
		bVar1 = true;
	}
	else
	{
		fVar0 = func_379(Global_35, vParam3, 1);
	}
	if (fVar0 > 28f)
	{
		if (!func_290(32768))
		{
			if (func_69(&uLocal_536) > 1f && !func_235())
			{
				if (func_371(cParam0, Local_629[10 /*2*/], 1))
				{
					func_68(&uLocal_536);
				}
			}
		}
	}
	if (iLocal_15 != 1)
	{
		if (!func_857())
		{
			if (fVar0 > 35f)
			{
				func_91("SOL2_OBJ_1", 7500, 0, 1, 0, 0, -1, -1, 0);
			}
		}
	}
	if (!bLocal_660)
	{
		if (fVar0 > fParam7)
		{
			func_91(sParam1, 7500, 0, 0, 0, 0, -1, -1, 0);
			bLocal_660 = true;
		}
	}
	else if (fVar0 < fParam9)
	{
		func_858(sParam1);
		bLocal_660 = false;
	}
	else if (fVar0 > fParam8)
	{
		if (bVar1)
		{
			StringCopy(&(cParam0->f_2208), sParam2, 16);
			return true;
		}
		else
		{
			StringCopy(&(cParam0->f_2208), sParam2, 16);
			return true;
		}
	}
	return false;
}

void func_373(char[4] cParam0, char* sParam1, vector3 vParam2)
{
	if (!func_859(sParam1, 0, 0, -1, -1, 0))
	{
		func_860(sParam1);
		if (!func_49(&(cParam0->f_2067)))
		{
			func_50(&(cParam0->f_2067), 0);
		}
		else
		{
			func_68(&(cParam0->f_2067));
		}
		cParam0->f_2073 = { vParam2 };
		cParam0->f_2076 = MISC::GET_DISTANCE_BETWEEN_COORDS(cParam0->f_2073, Global_36, true);
	}
}

bool func_374(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

void func_375(var uParam0, char* sParam1)
{
	int iVar0;

	if (func_374(uParam0, 8192))
	{
		return;
	}
	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		iVar0 = MISC::_0x94E8CA3DEE952789(sParam1, "@");
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_224), {func_861("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 4);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_224), {func_861("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_196(uParam0, 8192);
}

Vector3 func_376(var uParam0)
{
	return uParam0->f_5;
}

Vector3 func_377(var uParam0)
{
	var uVar0;
	vector3 vVar8;
	var uVar11;
	vector3 vVar14;

	MemCopy(&uVar0, {func_862(uParam0)}, 8);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_229))
	{
		uParam0->f_229 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_224), 0, 0, false, true);
	}
	else if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_229, false))
	{
		if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_229, func_863(Global_35), &vVar14, false, 0, 2))
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

void func_378(var uParam0, vector3 vParam1)
{
	if (func_153(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
}

float func_379(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_380(var uParam0)
{
	return uParam0->f_219;
}

void func_381()
{
	struct<4> Var0;

	Global_1946804.f_858 = (Global_1946804.f_858 - 1);
	if (Global_1946804.f_858 <= 0)
	{
		Var0 = 35;
		func_864(Var0);
	}
}

void func_382(var uParam0)
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

void func_383(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228)) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_228))
	{
		ANIMSCENE::_0x8A8208AE92BF87A5(uParam0->f_228);
	}
}

float func_384(var uParam0)
{
	return uParam0->f_218;
}

struct<8> func_385(var uParam0)
{
	return uParam0->f_230;
}

void func_386(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_865() };
	func_187(uParam0, &Var0);
}

void func_387(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (func_374(uParam0, 16))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_4) && !func_866(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_867());
		func_196(uParam0, 8);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_868(uParam0, uParam0->f_4, 0, 1);
		PATHFIND::SET_ROADS_IN_VOLUME(uParam0->f_4, false, false, bParam2);
		func_196(uParam0, 16);
	}
}

void func_388(var uParam0)
{
	if ((!func_374(uParam0, 32768) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228)) && ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_228, false))
	{
		func_869(uParam0);
		func_870(uParam0, 0);
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_228, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_228);
		}
		func_196(uParam0, 32768);
	}
}

bool func_389()
{
	return Global_1946804.f_1497 != Global_1946804.f_2163.f_1;
}

void func_390(int iParam0)
{
	struct<4> Var0;

	if (func_871(iParam0, 4096))
	{
		Global_1946804.f_858++;
	}
	if (Global_1946804.f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_864(Var0);
}

char* func_391(int iParam0)
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

bool func_392(int iParam0, var uParam1)
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

bool func_393()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_52))
	{
		Local_52 = func_872(Local_52.f_6, Local_52.f_1, Local_52.f_4, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0);
	}
	else
	{
		return true;
	}
	return false;
}

bool func_394()
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(Local_319[0 /*6*/]))
	{
		func_555(4, &(Local_319[0 /*6*/]), Local_319[0 /*6*/].f_5, Local_319[0 /*6*/].f_1, Local_319[0 /*6*/].f_4, 1, 1, 0, 1, 0, 0, 1);
	}
	else
	{
		iVar0++;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_319[1 /*6*/]))
	{
		func_555(4, &(Local_319[1 /*6*/]), Local_319[1 /*6*/].f_5, Local_319[1 /*6*/].f_1, Local_319[1 /*6*/].f_4, 1, 1, 0, 1, 0, 0, 1);
	}
	else
	{
		iVar0++;
	}
	if (iVar0 == 2)
	{
		return true;
	}
	return false;
}

void func_395(int iParam0, bool bParam1)
{
	char* sVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	sVar0 = "HorseMission";
	if (bParam1)
	{
		if (!DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, sVar0, bParam1);
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
	{
		DECORATOR::DECOR_REMOVE(iParam0, sVar0);
	}
}

bool func_396()
{
	if (func_166(1073741824 /* Float: 2f */))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_356))
	{
		Local_356 = VEHICLE::CREATE_VEHICLE(GET_HASH_KEY("WAGON05X"), Local_356.f_1, Local_356.f_4, true, true, true, false);
		ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(Local_356, false);
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_356))
	{
		if (PROPSET::_HAS_PROP_SET_LOADED(iLocal_526))
		{
			if (!PROPSET::DOES_PROP_SET_EXIST(iLocal_523))
			{
				if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROP_SET(Local_356))
				{
					PROPSET::_0xD80FAF919A2E56EA(Local_356, iLocal_526);
				}
				else
				{
					iLocal_523 = PROPSET::_GET_VEHICLE_PROP_SET(Local_356);
				}
			}
			else if (PROPSET::IS_PROP_SET_FULLY_LOADED(iLocal_523))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_356, false);
				VEHICLE::SET_VEHICLE_PROVIDES_COVER(Local_356, true);
				VEHICLE::SET_VEHICLE_HANDBRAKE(Local_356, true);
				func_173(1073741824 /* Float: 2f */);
				return true;
			}
		}
		else
		{
			PROPSET::_REQUEST_PROP_SET(iLocal_526);
		}
	}
	return false;
}

bool func_397()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_361[iVar0 /*8*/]))
		{
			func_873(Local_361[iVar0 /*8*/].f_1, 1f, 0);
			Local_361[iVar0 /*8*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_361[iVar0 /*8*/].f_7, Local_361[iVar0 /*8*/].f_1, true, true, false, false);
			ENTITY::SET_ENTITY_ROTATION(Local_361[iVar0 /*8*/], Local_361[iVar0 /*8*/].f_4, 2, false);
			ENTITY::FREEZE_ENTITY_POSITION(Local_361[iVar0 /*8*/], true);
			ENTITY::SET_ENTITY_PROOFS(Local_361[iVar0 /*8*/], 4, false);
			func_874(&uLocal_671, Local_361[iVar0 /*8*/].f_1, 1.25f, 1, -1, 0);
			func_874(&uLocal_672, vLocal_517, 1f, 1, -1, 0);
			func_874(&uLocal_673, 1412.485f, 1167.037f, 184.0549f, 1.5f, 1, -1, 0);
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		return true;
	}
	return false;
}

void func_398(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!ENTITY::IS_ENTITY_DEAD(Local_356))
	{
		if (bParam0)
		{
		}
		ENTITY::SET_ENTITY_PROOFS(Local_356, 4, false);
		ENTITY::SET_ENTITY_PROOFS(Local_356, 2, false);
		ENTITY::SET_ENTITY_PROOFS(Local_356, 64, false);
	}
	iVar2 = 0;
	iVar3 = ITEMSET::CREATE_ITEMSET(true);
	iVar4 = PROPSET::_GET_ENTITIES_FROM_PROP_SET(iLocal_523, iVar3, 0, false, false);
	iVar2 = 0;
	while (iVar2 < iVar4)
	{
		iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar3);
		iVar1 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(iVar0);
		if (!ENTITY::IS_ENTITY_DEAD(Local_356))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(iVar1, false);
			}
		}
		iVar2++;
	}
}

void func_399()
{
	func_875("ARTHUR", Global_35);
	func_875("CS_JohnWeathers", Local_52);
	func_875("WAGON05X", Local_356);
	func_875("p_hammer03x", Local_370[0 /*8*/]);
}

bool func_400(var uParam0, int iParam1, char* sParam2)
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

void func_401(int iParam0, int iParam1)
{
	func_876(iParam0, iParam1);
}

int func_402(int iParam0)
{
	if (!func_102(iParam0))
	{
		return -1;
	}
	return func_403(iParam0);
}

int func_403(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_877(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

bool func_404(int iParam0)
{
	return func_402(iParam0) == 0;
}

int func_405(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_498[iParam0 /*2*/].f_1;
}

void func_406(int iParam0)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;
	struct<8> Var5;
	struct<8> Var13;
	int iVar21;

	if (!func_723(iParam0))
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

void func_407(int iParam0)
{
	if (!func_102(iParam0))
	{
		return;
	}
	func_879(iParam0, func_878(iParam0) + 1);
}

void func_408(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_88(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_178(&Global_1935630, 4194304);
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

int func_409(bool bParam0)
{
	if (!bParam0 && func_880(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(GET_HASH_KEY("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

int func_410(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_881(iParam0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1898164.f_162 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1898164.f_162;
	func_882(iParam0, iVar0);
	Global_1898164.f_162++;
	if (iParam1 < 0 || iParam1 >= Global_1898164.f_162)
	{
		return iVar0;
	}
	func_883(iVar0, iParam1);
	return iParam1;
}

bool func_411(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

void func_412(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_413(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_414(int iParam0)
{
	Global_1572864.f_3 = (Global_1572864.f_3 - (Global_1572864.f_3 && iParam0));
}

void func_415(bool bParam0)
{
	func_884(bParam0);
	func_885(bParam0);
	func_886(bParam0);
	func_887(bParam0);
	func_888(bParam0);
	func_889(bParam0);
	func_890(bParam0);
	func_891(bParam0);
}

void func_416(bool bParam0)
{
	if (func_264() != -1)
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
		func_645(89, 1);
		ATTRIBUTE::_START_PERIODIC_ICON(5);
	}
	else
	{
		func_645(90, 1);
		ATTRIBUTE::_STOP_PERIODIC_ICON(5);
	}
	func_892(1, bParam0, 1);
	func_822();
	Global_40.f_11095.f_43 = bParam0;
}

int func_417(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_304(iParam0))
	{
		case 1:
			iVar0 = func_284(iParam0);
			return func_893(iVar0);
		case 8:
			iVar1 = func_284(iParam0);
			if (func_286(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				return func_894(iVar1);
			}
			break;
	}
	return -1;
}

int func_418()
{
	if (!func_511(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_511(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_511(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_511(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_511(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_511(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_511(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_419(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (func_264() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077.f_1 = 2;
	Global_1898077.f_2 = 0;
	Global_1898077.f_3 = iParam0;
	Global_1898077.f_7 = iVar0;
	func_895(Global_1898077.f_7, Global_1898077.f_3);
}

void func_420(int iParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 2)
	{
		return;
	}
	iVar0 = 0;
	if (func_264() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077.f_1 = 5;
	Global_1898077.f_2 = 0;
	Global_1898077.f_4 = iParam0;
	Global_1898077.f_7 = iVar0;
	func_896(Global_1898077.f_7, Global_1898077.f_4);
}

void func_421(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_422(int iParam0, bool bParam1)
{
	if (func_264() != -1)
	{
		return;
	}
	if (func_101(0) != iParam0)
	{
		return;
	}
	if (func_897(iParam0))
	{
		if (bParam1)
		{
			func_898(-525676072);
		}
		else
		{
			func_899(-525676072);
		}
	}
}

void func_423(float fParam0)
{
	func_900(10, fParam0);
}

bool func_424()
{
	if (func_264() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

void func_425()
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1935436.f_12 = 0f;
}

int func_426()
{
	return Global_40.f_11095.f_35;
}

void func_427(var uParam0, int iParam1)
{
	uParam0->f_220 = iParam1;
	func_432(uParam0, 1);
}

bool func_428(var uParam0, char* sParam1)
{
	return MISC::_DOES_STRING_EXIST_IN_STRING(&(uParam0->f_224), sParam1);
}

void func_429(var uParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = false;
	bVar0 = CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(0, 0, 0);
	if (bParam1 || func_579(uParam0, 1))
	{
		if (!func_166(8388608))
		{
			if (bVar0)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, 1409.629f, 1168.742f, 183.5563f, 213.6526f, true, false, true);
				func_901(1415.768f, 1136.341f, 185.4908f, 0);
			}
			func_173(8388608);
		}
	}
	if (bParam1 || func_902(uParam0, Global_35, 0, 0, 1, 1))
	{
		if (!func_166(16777216))
		{
			func_547();
			if (!bVar0)
			{
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Global_35, vLocal_509, -1, 1, 0f, 1, 0, 0, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
			}
			func_173(16777216);
		}
	}
}

void func_430(var uParam0, int iParam1)
{
	uParam0->f_221 = iParam1;
	func_432(uParam0, 2);
}

void func_431(int iParam0, vector3 vParam1)
{
	vector3 vVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar0 = { vParam1 };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false))
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vVar0, true, false, true, true);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, true, false, true, true);
		}
	}
}

void func_432(var uParam0, int iParam1)
{
	uParam0->f_223 = (uParam0->f_223 || iParam1);
}

bool func_433(int iParam0, vector3 vParam1, var uParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, float fParam12, float fParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	func_497(iParam0, vParam1, 0, fParam5, bParam6, fParam7, bParam8, fParam12, fParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	bVar4 = func_379(iParam0, vParam1, 1);
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
		func_253(uParam4);
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
		if (func_575(uParam4) >= fParam9)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_903(iParam0, 501393341))
			{
				if (PED::IS_PED_ON_MOUNT(iParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, 0, 0, 0, 0, 0);
					return true;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !func_903(iParam0, -828834893))
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

bool func_434(int iParam0, int iParam1)
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

int func_435(var uParam0)
{
	return uParam0->f_1;
}

void func_436(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	func_904(uParam0, 4);
	if (func_905(uParam0, &uParam1, iParam5))
	{
		func_444(uParam0, 1);
	}
}

void func_437(var uParam0)
{
	if (!func_906(uParam0))
	{
		return;
	}
	if (!func_237(uParam0, 4194304))
	{
		func_907(uParam0);
		func_453(uParam0, 4194304);
	}
	if (func_908(uParam0))
	{
		func_909(uParam0);
		func_910(uParam0);
		func_444(uParam0, 2);
	}
}

void func_438(var uParam0)
{
	uParam0->f_1451 = -1;
	func_443(uParam0, 0);
	func_444(uParam0, 3);
	func_911(uParam0, 0);
	func_253(&(uParam0->f_1635));
	func_912(uParam0);
	func_253(&(uParam0->f_1638));
}

void func_439(var uParam0)
{
	bool bVar0;

	if (!func_237(uParam0, 134217728))
	{
		bVar0 = true;
		SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("BANDANA"));
		if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(GET_HASH_KEY("BANDANA")))
		{
			bVar0 = false;
		}
		STREAMING::REQUEST_ANIM_DICT(func_913(1));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_913(1)))
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_453(uParam0, 134217728);
		}
	}
}

void func_440(var uParam0, int iParam1, bool bParam2)
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
	if (!func_237(uParam0, 65536))
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
	if (!func_237(uParam0, 4096) && uParam0->f_1662)
	{
		return;
	}
	if (!func_237(uParam0, 16777216))
	{
		return;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	func_451(uParam0);
	func_914(uParam0, uParam0->f_1663, uParam0->f_1665);
	func_915(uParam0);
	if (uParam0->f_1666 && !uParam0->f_1665)
	{
		if (((((uParam0->f_1661 >= 0 && uParam0->f_782[uParam0->f_1661 /*41*/].f_17 > 0f) && uParam0->f_1454 >= 0) && !func_148(Global_35, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, (uParam0->f_782[uParam0->f_1661 /*41*/].f_17 + 5f), 1, 1)) && !func_237(uParam0, 33554432)) && !func_237(uParam0, 4))
		{
			func_916(uParam0, uParam0->f_1663);
			return;
		}
	}
	if (!func_237(uParam0, 4))
	{
		if (func_917(uParam0))
		{
			if (!bParam2)
			{
				uParam0->f_1450 = uParam0->f_1454;
				func_453(uParam0, 8);
				return;
			}
		}
		else
		{
			func_916(uParam0, uParam0->f_1663);
		}
		if (uParam0->f_782[uParam0->f_1456 /*41*/].f_29)
		{
			fVar0 = func_918(uParam0, uParam0->f_1456);
			if (fVar0 < 0f || (uParam0->f_1663 && fVar0 < 1f))
			{
				uParam0->f_1454 = uParam0->f_1456;
				if (!bParam2)
				{
					uParam0->f_1450 = uParam0->f_1456;
					func_453(uParam0, 8);
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
					func_453(uParam0, 16);
					if (((!func_237(uParam0, 32) && iParam1 != 2) && !bParam2) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, true) < (uParam0->f_782[uParam0->f_1454 /*41*/].f_11 + 5f))
					{
						func_919(uParam0);
						func_453(uParam0, 32);
					}
				}
			}
			else if (uParam0->f_1454 == uParam0->f_1456)
			{
				func_242(uParam0, 16);
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
		if (func_244(&(uParam0->f_782[uParam0->f_1454 /*41*/]), 2) && uParam0->f_1663)
		{
			return;
		}
	}
	if (func_237(uParam0, 16))
	{
		fVar4 = func_379(Global_35, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, 1);
		if (uParam0->f_1663 && fVar4 <= (uParam0->f_782[uParam0->f_1454 /*41*/].f_17 + 5f))
		{
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_JUMP"), false);
		}
		fVar5 = func_920(Global_36, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, 1);
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
				func_450(uParam0, uParam0->f_782[uParam0->f_1454 /*41*/].f_27, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, fVar6);
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
	if (((uParam0->f_1663 && iVar3) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_1664) > 1.25f) || func_237(uParam0, 4))
	{
		if (((VOLUME::IS_POINT_IN_VOLUME(uParam0->f_1641, uParam0->f_1645) && func_918(uParam0, uParam0->f_1454) < 10000f) && func_237(uParam0, 16)) || func_237(uParam0, 4))
		{
			if (!func_237(uParam0, 4))
			{
				func_453(uParam0, 4);
			}
			iVar7 = 5152;
			iVar7 |= 32;
			iVar7 |= 4096;
			iVar7 |= 1;
			if (!func_448(uParam0, uParam0->f_1454))
			{
				iVar7 |= 2048;
			}
			if (func_921(Global_35, &(uParam0->f_1452), iVar7, 0, 0, 1084227584 /* Float: 5f */, 100, uParam0->f_782[uParam0->f_1454 /*41*/].f_7, uParam0->f_782[uParam0->f_1454 /*41*/].f_7.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				uParam0->f_1452 = 0;
				func_242(uParam0, 4);
			}
		}
	}
	else if (func_237(uParam0, 4))
	{
		func_242(uParam0, 4);
	}
}

int func_441(var uParam0)
{
	return *uParam0;
}

void func_442(var uParam0)
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (func_237(uParam0, 512))
	{
		return;
	}
	if (func_69(&(uParam0->f_1638)) < 2f)
	{
		return;
	}
	if (func_922(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		func_453(uParam0, 524288);
	}
}

void func_443(var uParam0, int iParam1)
{
	uParam0->f_1449 = iParam1;
}

void func_444(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

int func_445(var uParam0, int iParam1)
{
	int iVar0;

	if (func_243(uParam0, 4))
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
			if (func_923())
			{
				if (!func_237(uParam0, 524288))
				{
					HUD::_HIDE_HUD_COMPONENT(-1679307491);
				}
				HUD::_DISPLAY_HUD_COMPONENT(474191950);
			}
			break;
	}
	if (func_923())
	{
		func_242(uParam0, 512);
		func_924(uParam0, 128);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin", false, -1);
		if (func_925(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 4))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, func_926(uParam0->f_782[uParam0->f_1450 /*41*/].f_39), false, -1);
		}
		PED::SET_PED_CONFIG_FLAG(Global_35, 255, true);
	}
	func_927();
	func_928(uParam0, 1, 0);
	func_929(uParam0);
	if (func_237(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	func_924(uParam0, 4);
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_1641))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_1641);
	}
	if (func_243(uParam0, 8) && CAM::_0xDD0B7C5AE58F721D(func_930()))
	{
		CAM::_0x798BE43C9393632B(func_930());
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1111[iVar0 /*22*/].f_2)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1111[iVar0 /*22*/].f_2), func_930())) && CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1111[iVar0 /*22*/].f_2)))
		{
			if (uParam0->f_1111[iVar0 /*22*/].f_21)
			{
				CAM::_0x798BE43C9393632B(&(uParam0->f_1111[iVar0 /*22*/].f_2));
			}
		}
		iVar0++;
	}
	PLAYER::RESET_PLAYER_INPUT_GAIT(PLAYER::GET_PLAYER_INDEX());
	if (func_237(uParam0, 524288) || iParam1 == 1)
	{
		func_931();
	}
	if (func_243(uParam0, 16))
	{
		if (func_441(uParam0) == 0)
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
	func_932();
	if (func_243(uParam0, 32))
	{
		TASK::SET_PED_PATH_FOLIAGE_COST_MODIFIER(Global_35, 1f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1667))
	{
		if (!func_237(uParam0, 8192))
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
	func_458(uParam0);
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1687))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_1687);
	}
	return 1;
}

void func_446(bool bParam0)
{
	if (bParam0)
	{
		func_933(4);
	}
	func_933(2);
	MISC::SET_BIT(&(Global_1956580.f_1), 0);
}

void func_447()
{
	Global_1905944.f_5695 = 1;
}

bool func_448(var uParam0, int iParam1)
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

int func_449(var uParam0)
{
	return uParam0->f_2;
}

void func_450(var uParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;

	if (func_568(uParam1, 8))
	{
		iVar0 |= 8;
	}
	if (func_568(uParam1, 8192))
	{
		iVar0 |= 32;
	}
	if (uParam0->f_1663)
	{
		fParam3 = 0.55f;
		PED::SET_PED_RESET_FLAG(uParam0->f_1664, 214, true);
	}
	if (uParam0->f_1662 && func_237(uParam0, 4096))
	{
		iVar0 |= 16;
	}
	if (func_568(uParam1, 262144) && Global_1935630.f_44 == GET_HASH_KEY("WEAPON_LASSO"))
	{
		iVar0 |= 16;
	}
	func_934(&iVar1, uParam2);
	func_935(&(uParam0->f_1670), iVar0, iVar1, fParam3);
	if (!Global_1935630.f_12)
	{
		if (!func_237(uParam0, 67108864))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 36, true);
	}
	func_936();
	func_937(uParam0, 1);
}

void func_451(var uParam0)
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
	if (iVar0 >= 0 && !func_457(uParam0, 2))
	{
		bVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_782[iVar0 /*41*/].f_1, true) <= uParam0->f_782[iVar0 /*41*/].f_16;
		Var2 = { uParam0->f_1458 };
		if (bVar1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1111[iVar0 /*22*/].f_2)))
			{
				StringCopy(&(uParam0->f_1458), func_938(uParam0->f_1111[iVar0 /*22*/].f_2), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1458), func_930(), 64);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1111[iVar0 /*22*/].f_10)))
			{
				StringCopy(&(uParam0->f_1458.f_8), func_938(uParam0->f_1111[iVar0 /*22*/].f_10), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1458.f_8), func_939(), 64);
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
			if (!func_940(uParam0->f_1111[iVar0 /*22*/].f_1, 8))
			{
				if (!func_940(uParam0->f_1111[iVar0 /*22*/].f_1, 8))
				{
					func_934(&iVar19, uParam0->f_1111[iVar0 /*22*/].f_1);
					func_941(&(uParam0->f_1670), iVar19);
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
							if (func_940(uParam0->f_1111[iVar0 /*22*/].f_1, 16) && iVar24 >= 0)
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
											func_924(uParam0, 16);
										}
										return;
									}
								}
								if (uParam0->f_1111[iVar0 /*22*/].f_18 != 0f || uParam0->f_1111[iVar0 /*22*/].f_19 != 0f)
								{
									vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, func_942(Global_35, iVar23, 1), uParam0->f_1111[iVar0 /*22*/].f_18, 0f, uParam0->f_1111[iVar0 /*22*/].f_19) };
								}
							}
							else if (uParam0->f_1111[iVar0 /*22*/].f_18 != 0f || uParam0->f_1111[iVar0 /*22*/].f_19 != 0f)
							{
								vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, func_920(Global_36, uParam0->f_782[iVar0 /*41*/].f_1, 1), uParam0->f_1111[iVar0 /*22*/].f_18, 0f, uParam0->f_1111[iVar0 /*22*/].f_19) };
							}
							fVar27 = uParam0->f_782[iVar0 /*41*/].f_16;
							fVar28 = uParam0->f_782[iVar0 /*41*/].f_14;
							bVar29 = func_940(uParam0->f_1111[iVar0 /*22*/].f_1, 2);
							bVar30 = (func_940(uParam0->f_1111[iVar0 /*22*/].f_1, 1) && !bVar29);
							bVar31 = func_940(uParam0->f_1111[iVar0 /*22*/].f_1, 4);
							bVar32 = false;
							if (!CAM::_0x927B810E43E99932(&(uParam0->f_1458)))
							{
								CAM::_0xB8B207C34285E978(&(uParam0->f_1458));
								if (CAM::IS_CINEMATIC_CAM_RENDERING())
								{
									func_943(0, 0);
								}
								bVar32 = true;
								func_924(uParam0, 16);
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1458), 4))
							{
								bVar32 = (bVar32 || uParam0->f_1474.f_16 != iVar23);
								bVar32 = (bVar32 || !func_944(uParam0->f_1474.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
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
								bVar32 = (bVar32 || !func_944(uParam0->f_1497.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
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
							Jump @1466; //curOff = 1420
							if (CAM::_0x927B810E43E99932(&(uParam0->f_1458)))
							{
								CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1458));
							}
							StringCopy(&(uParam0->f_1458), "", 64);
							StringCopy(&(uParam0->f_1458.f_8), "", 64);
							func_945(uParam0, 2);
						}
					}
				}
			}
		}
	}
}

int func_452(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 || iParam1 == 2)
	{
		return 0;
	}
	if (func_946(uParam0, &iVar0))
	{
		func_947(uParam0, iVar0);
		return 1;
	}
	return 0;
}

void func_453(var uParam0, int iParam1)
{
	uParam0->f_1430 = (uParam0->f_1430 || iParam1);
}

void func_454(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	vector3 vVar6;
	int iVar9;

	if (func_441(uParam0) != 0)
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
				func_453(uParam0, 65536);
				return;
			}
			else if (uParam0->f_1668 == iVar9)
			{
				func_453(uParam0, 65536);
				return;
			}
		}
		func_242(uParam0, 65536);
	}
}

void func_455(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = 0;
	if (func_435(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1660)
		{
			if (uParam0->f_241[iVar0 /*18*/].f_7)
			{
				func_948(uParam0, iVar0, iParam1);
			}
			else if (uParam0->f_241[iVar0 /*18*/].f_6)
			{
				bVar1 = func_949(uParam0, iVar0);
				if (bVar1)
				{
					func_950(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!func_448(uParam0, uParam0->f_1450))
		{
			func_951(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_1457;
	while (iVar0 <= (uParam0->f_1660 - 1))
	{
		if (uParam0->f_241[iVar0 /*18*/].f_7)
		{
			func_948(uParam0, iVar0, iParam1);
		}
		else if (uParam0->f_241[iVar0 /*18*/].f_6)
		{
			bVar1 = func_949(uParam0, iVar0);
			if (bVar1)
			{
				func_950(uParam0, iVar0, iParam1);
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

void func_456(var uParam0)
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

bool func_457(var uParam0, int iParam1)
{
	return (uParam0->f_1431 && iParam1) != 0;
}

void func_458(var uParam0)
{
	func_952(&(uParam0->f_1670));
}

void func_459(var uParam0)
{
	uParam0->f_1431 = 0;
}

void func_460(int iParam0)
{
	int iVar0;

	if (func_264() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_139(func_953(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_953(iVar0), func_954(), 1))
			{
				func_955(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

void func_461()
{
	Global_18 = 1;
	Global_43884 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_462(var uParam0)
{
	if (uParam0->f_1450 >= 0)
	{
		if (func_379(Global_35, uParam0->f_782[uParam0->f_1450 /*41*/].f_1, 0) < uParam0->f_782[uParam0->f_1450 /*41*/].f_14)
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

bool func_463(var uParam0)
{
	if (uParam0->f_1450 >= 0)
	{
		if (func_379(Global_35, uParam0->f_782[uParam0->f_1450 /*41*/].f_1, 0) < uParam0->f_782[uParam0->f_1450 /*41*/].f_15)
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

bool func_464(var uParam0, int iParam1)
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
			else if (func_575(&(uParam0->f_1638)) >= 15f)
			{
				func_453(uParam0, 32768);
				return true;
			}
			break;
		case 9:
			if (!uParam0->f_1534)
			{
				if (func_575(&(uParam0->f_1638)) >= 15f)
				{
					func_453(uParam0, 32768);
					return true;
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(func_956(uParam0)) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(func_956(uParam0), false))
				{
					uParam0->f_1534 = 1;
				}
			}
			else
			{
				fVar0 = ANIMSCENE::GET_ANIM_SCENE_PHASE(func_956(uParam0));
				bVar1 = ANIMSCENE::IS_ANIM_SCENE_FINISHED(func_956(uParam0), false);
				bVar2 = ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(func_956(uParam0));
				return ((fVar0 >= 1f || bVar1) || bVar2);
			}
			break;
		case 11:
			return true;
		default:
			return func_575(&(uParam0->f_1638)) >= 15f;
	}
	return false;
}

bool func_465(var uParam0)
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

int func_466(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_241[iVar0 /*18*/].f_17 == 2 && func_957(&(uParam0->f_241[iVar0 /*18*/]), 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_467(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (bParam4 && PED::IS_PED_INJURED(iParam0))
	{
		return true;
	}
	if (func_958(iParam0, fParam1, iParam2, bParam3, bParam4, fParam5))
	{
		return true;
	}
	return false;
}

bool func_468(vector3 vParam0, var uParam3, float fParam4)
{
	float fVar0;

	if (!func_959(uParam3->f_7, uParam3->f_8))
	{
		return false;
	}
	if (func_960(&(uParam3->f_3), 1))
	{
		return false;
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		return false;
	}
	fVar0 = func_379(Global_35, vParam0, 1);
	if (fVar0 > fParam4)
	{
		return false;
	}
	if (!func_961(vParam0, uParam3))
	{
		return false;
	}
	if (!func_960(&(uParam3->f_3), 2))
	{
		if (!CAM::IS_SPHERE_VISIBLE(vParam0, 0.5f))
		{
			return false;
		}
		if (!func_962(vParam0, uParam3))
		{
			return false;
		}
	}
	return true;
}

void func_469(int iParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, float fParam14)
{
	if (func_960(&(uParam1->f_3), 1))
	{
		func_963(uParam1);
		if (func_467(iParam0, fParam7, iParam11, bParam12, bParam13, fParam14))
		{
			func_546();
		}
	}
	if (func_468(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), uParam1, fParam7))
	{
		CAM::SET_GAMEPLAY_PED_HINT(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		func_964(uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam6, iParam9);
	}
}

void func_470(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

bool func_471(bool bParam0, bool bParam1, float fParam2)
{
	if (bParam0)
	{
		return bParam1;
	}
	return fParam2;
}

void func_472(int iParam0, int* iParam1, var uParam2, float fParam3, float fParam4, char* sParam5)
{
	float fVar0;
	bool bVar1;
	bool bVar2;

	if (ENTITY::IS_ENTITY_DEAD(*iParam0) || !MISC::IS_BIT_SET(iParam1->f_21, 0))
	{
		return;
	}
	func_965(iParam1, *iParam0, iParam1->f_56, 0);
	fVar0 = func_471(fParam4 >= 0f, fParam4, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
	func_966(iParam1, fParam3);
	func_967(iParam0, iParam1, uParam2, fVar0);
	func_968(iParam1);
	if (MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		bVar1 = MISC::IS_STRING_NULL_OR_EMPTY(sParam5);
		func_969(iParam1, uParam2, iParam0, bVar1, sParam5, fVar0);
		if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			bVar2 = true;
			if (!MISC::IS_BIT_SET(*iParam1, 12))
			{
				bVar2 = func_489(iParam1, iParam0);
			}
			if (bVar2 && !MISC::IS_BIT_SET(*iParam1, 13))
			{
				func_490(iParam1);
			}
		}
	}
}

bool func_473(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_970(iParam0, iParam1))
		{
			if (!func_325(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_207(uParam2, 0, 0, 1, 0);
				func_123(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_325(iParam1->f_10, 1))
		{
			func_971(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_122(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_474(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		MISC::_0xE98D55C5983F2509(*iParam0);
		bVar4 = func_325(iParam4, 32);
		func_972(iParam1, uParam2, 0);
		iVar5 = func_973(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
			return true;
		}
		func_207(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_325(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_325(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_325(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_325(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_325(iParam4, 8388608) || func_325(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_325(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_325(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_476(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*iParam0, "IloGeneralEvents", 2);
		}
		if (!func_476(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_325(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::REGISTER_INTERACTION_LOCKON_PROMPT(*iParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, false, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_974(iParam0);
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
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 301, false);
			if (func_325(iParam4, 268435456))
			{
				iVar8 = func_975(uParam2, GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_976(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_476(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*iParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 493, false);
			}
			if (func_325(iParam4, 2) || func_325(iParam4, 16))
			{
				func_475(*iParam0, 1, 1);
			}
			else
			{
				func_475(*iParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_475(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_476(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_477(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_977(*iParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_478(int iParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_978(*iParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_325(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_479(int iParam0)
{
	if (func_325(iParam0, 4))
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
	if (func_325(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_RELOAD"), false);
	}
	if (func_325(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_GRAPPLE"), false);
	}
}

int func_480(int* iParam0, var uParam1)
{
	int iVar0;

	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_SATCHEL_HORSE_MENU"), false);
	iVar0 = 0;
	if (((((PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_OPEN_SATCHEL_MENU")) || PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_OPEN_SATCHEL_HORSE_MENU"))) || PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_OPEN_JOURNAL"))) || func_979()) || func_980()) || func_981())
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_68(&(iParam0->f_46));
	}
	if (func_49(&(iParam0->f_46)) && !func_982(&(iParam0->f_46), 0.25f))
	{
		func_983(uParam1);
	}
	if (iVar0 == 1)
	{
		return 0;
	}
	return 1;
}

bool func_481(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
	bool bVar13;

	iVar1 = func_984(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*iParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_985(Global_35)) || func_986(Global_35)) || func_987(Global_35));
	fVar12 = -1f;
	if (func_49(&(iParam1->f_13)))
	{
		fVar12 = func_575(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_506((uParam4[iVar0 /*17*/])->f_6);
		func_988(*iParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_989(*iParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_990(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_207(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_492(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_972(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 12) || MISC::IS_BIT_SET(*iParam1, 20))
					{
						if (!MISC::IS_BIT_SET(*iParam1, 19))
						{
							func_991(iParam1, uParam4, iParam0, fParam3, sParam9);
							bVar13 = MISC::IS_STRING_NULL_OR_EMPTY(sParam9);
							func_969(iParam1, uParam4, iParam0, bVar13, sParam9, fParam2);
						}
						if (!MISC::IS_BIT_SET(*iParam1, 7))
						{
							MISC::SET_BIT(&(iParam1->f_21), 3);
						}
						MISC::SET_BIT(&(iParam1->f_21), 20);
					}
					if (MISC::IS_BIT_SET(iParam1->f_21, 20))
					{
						if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
						{
							iParam1->f_2 = 3;
						}
						if (!MISC::IS_BIT_SET(*iParam1, 13))
						{
							if (func_367(func_992(Global_35, 0, 1, 0)) || func_367(func_992(Global_35, 1, 1, 0)))
							{
								iParam1->f_2 = 3;
							}
						}
						if (!MISC::IS_BIT_SET(*iParam1, 12))
						{
							if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
							{
								iParam1->f_2 = 3;
							}
						}
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
					if (func_993(iParam1, fParam6, iParam1->f_9))
					{
						func_68(&(iParam1->f_18));
						if (bVar6)
						{
							func_492(uParam4, 0, 0);
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
		func_994(iParam1, fParam2);
	}
	return bVar5;
}

void func_482(var uParam0)
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

void func_483(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_995(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_994(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_484(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_INTERACT_LOCKON")))
		{
			if (func_996(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_997(iParam1, 0);
				func_972(iParam1, uParam2, func_476(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

void func_485(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_988(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_486(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_487(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_998(iParam0, vVar0, fParam2);
}

bool func_488(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_489(int* iParam0, int iParam1)
{
	vector3 vVar0;

	if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
	{
		return true;
	}
	if (!PED::IS_PED_CARRYING_SOMETHING(Global_35) && !func_434(Global_35, -208384378))
	{
		if (!MISC::IS_BIT_SET(iParam0->f_21, 19) && MISC::IS_BIT_SET(iParam0->f_21, 4))
		{
			vVar0 = { iParam0->f_57 };
			iParam0->f_57 = { func_999(*iParam1, Global_35, 2.5f) };
			iParam0->f_57 = { iParam0->f_57 + Global_36 };
			iParam0->f_57.f_2 = (iParam0->f_57.f_2 + 3f);
			func_431(iParam0->f_60, iParam0->f_57);
			iParam0->f_57 = { vVar0 };
			MISC::SET_BIT(&(iParam0->f_21), 19);
		}
		return true;
	}
	else if (PED::IS_PED_CARRYING_SOMETHING(Global_35) && !func_434(Global_35, -208384378))
	{
		if (func_1000(Global_35))
		{
			iParam0->f_60 = func_1001();
		}
		else
		{
			iParam0->f_60 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_60))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iParam0->f_60, Global_36, 2f, 9);
		}
	}
	return false;
}

bool func_490(int* iParam0)
{
	bool bVar0;

	if (MISC::IS_BIT_SET(*iParam0, 13))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 7))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_AIM_IN_AIR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_TOGGLE_HOLSTER"), false);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 6))
	{
		if (func_367(func_992(Global_35, 0, 1, 0)) || func_367(func_992(Global_35, 1, 1, 0)))
		{
			MISC::CLEAR_BIT(&(iParam0->f_21), 6);
			MISC::CLEAR_BIT(&(iParam0->f_21), 7);
		}
		else
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 7))
	{
		if (!func_367(func_992(Global_35, 0, 1, 0)) && !func_367(func_992(Global_35, 1, 1, 0)))
		{
			func_253(&(iParam0->f_52));
			MISC::SET_BIT(&(iParam0->f_21), 7);
			MISC::SET_BIT(&(iParam0->f_21), 6);
			return true;
		}
		else if (((func_367(func_992(Global_35, 0, 1, 0)) || func_367(func_992(Global_35, 1, 1, 0))) && !func_434(Global_35, 716706914)) && !func_434(Global_35, 242628503))
		{
			WEAPON::_HOLSTER_PED_WEAPONS(Global_35, true, false, true, false);
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 0, 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
			func_50(&(iParam0->f_52), 0);
			MISC::SET_BIT(&(iParam0->f_21), 7);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 7))
	{
		bVar0 = func_69(&(iParam0->f_52)) >= 1.5f;
		if ((!func_367(func_992(Global_35, 0, 1, 0)) && !func_367(func_992(Global_35, 1, 1, 0))) || bVar0)
		{
			func_253(&(iParam0->f_52));
			MISC::SET_BIT(&(iParam0->f_21), 6);
			return true;
		}
	}
	return false;
}

bool func_491(int* iParam0)
{
	var uVar0;
	bool bVar1;

	if (MISC::IS_BIT_SET(iParam0->f_21, 8) || MISC::IS_BIT_SET(*iParam0, 11))
	{
		return true;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		if (func_1002(&uVar0))
		{
			func_50(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
			if (func_1003())
			{
			}
		}
		else
		{
			func_50(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		bVar1 = func_69(&(iParam0->f_37)) >= 1.5f;
		if ((!func_1002(&uVar0) || func_1003()) || bVar1)
		{
			if (bVar1)
			{
				func_1004();
			}
			MISC::SET_BIT(&(iParam0->f_21), 8);
			return true;
		}
	}
	return false;
}

void func_492(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_500(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

int func_493(int iParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_68(&(iParam1->f_18));
			return 0;
		}
		else if (func_49(&(iParam1->f_18)))
		{
			func_253(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_49(&(iParam1->f_18)))
	{
		return 1;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return 0;
		}
	}
	return func_1005(&(iParam1->f_18), fParam2);
	return 1;
}

void func_494(int* iParam0, var uParam1)
{
	int iVar0;
	struct<35> Var1;
	struct<10> Var62;

	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var1.f_26 = 1106247680;
	Var1.f_27 = 1067450368;
	Var1.f_29 = 1092616192;
	Var1.f_30 = 1112014848;
	Var1.f_31 = 1106247680;
	Var1.f_32 = 1101529088;
	Var1.f_33 = 1101004800;
	Var1.f_34 = 1084227584;
	Var62.f_2 = 570;
	Var62.f_3 = 1065353216;
	Var62.f_4 = -1082130432;
	Var62.f_9 = 3;
	func_503(iParam0, 0);
	func_972(iParam0, uParam1, 1);
	func_207(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 61);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var62, 17);
		iVar0++;
	}
}

void func_495(char[4] cParam0)
{
	if (func_139(Local_52, 0))
	{
		if (func_1006(Local_52, &uLocal_674, &uLocal_679, &uLocal_680, 2f, 20f, 0, 0, 1092616192 /* Float: 10f */, 1))
		{
			if (!func_147(*cParam0, 4))
			{
				func_373(cParam0, "OBJ_TALK_SOL2", Local_52.f_1);
				func_1007(*cParam0);
			}
			else
			{
				switch (iLocal_16)
				{
					case 0:
						if (func_752(Local_52, Global_35, 1, 1) <= 5f && ENTITY::IS_ENTITY_ON_SCREEN(Local_52))
						{
							iLocal_16 = 1;
						}
						else if (func_752(Local_52, Global_35, 1, 1) <= 20f)
						{
							if (iLocal_626 < 3)
							{
								if (!func_49(&uLocal_536) || func_69(&uLocal_536) > 21f)
								{
									func_371(cParam0, Local_629[0 /*2*/], 0);
									func_68(&uLocal_536);
									iLocal_626++;
								}
							}
						}
						break;
				}
				if (!func_290(8))
				{
					func_91("OBJ_TALK_SOL2", 7500, 0, 1, 0, 0, -1, -1, 0);
					func_292(8);
				}
			}
		}
	}
}

bool func_496(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_497(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12)
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
	if (func_866(vParam1, 0f, 0f, 0f))
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
	bVar3 = func_379(iParam0, vParam1, 1);
	if ((bVar3 <= bParam5 && bVar3 > bParam6) && bVar3 > bParam7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.75f);
		}
		if ((func_1008() && !ENTITY::IS_ENTITY_DEAD(iVar1)) && VEHICLE::IS_DRAFT_VEHICLE(iVar1))
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
			if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !func_903(iParam0, 501393341))
			{
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_903(iParam0, -828834893))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, iParam12);
			}
		}
	}
}

void func_498(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	iParam0->f_57 = { 0f, 0f, 0f };
	func_1009(iParam0, iParam3, 0);
	func_1010(uParam1, iParam2);
	func_1011(iParam0, iParam4);
	if (!MISC::IS_BIT_SET(iParam0->f_21, 0))
	{
		MISC::SET_BIT(&(iParam0->f_21), 0);
	}
	if (fParam5 > -1f)
	{
		func_1012(iParam0, fParam5);
	}
	if (iParam6 == 1)
	{
		func_997(iParam0, 17);
	}
	if (iParam7 == 1)
	{
		func_997(iParam0, 16);
	}
	if (iParam8 == 1)
	{
		func_997(iParam0, 15);
	}
	if (iParam9 == 1)
	{
		func_997(iParam0, 13);
	}
	if (iParam10 == 1)
	{
		func_997(iParam0, 12);
	}
	if (iParam11 == 1)
	{
		func_997(iParam0, 11);
	}
	if (iParam12 == 1)
	{
		func_997(iParam0, 8);
	}
	if (iParam13 == 1)
	{
		func_997(iParam0, 10);
	}
	if (iParam14 == 1)
	{
		func_997(iParam0, 9);
	}
	if (iParam15 == 1)
	{
		func_997(iParam0, 18);
	}
	if (iParam16 == 1)
	{
		func_997(iParam0, 20);
	}
	if (iParam17 == 1)
	{
		func_997(iParam0, 19);
	}
}

void func_499(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_506(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_1013(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_1014(iParam0->f_6, iParam0->f_5, 0);
			}
			func_1015(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_1016(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_500(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_1017(iParam0, 13))
	{
		func_1018(iParam0, 0);
	}
	else
	{
		func_1019(iParam0, 0);
	}
	if (func_506(iParam0->f_6))
	{
		if (bParam2)
		{
			func_507(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_501(int iParam0, int iParam1, int iParam2, bool bParam3)
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

void func_502(bool bParam0)
{
	if (PED::GET_PED_CROUCH_MOVEMENT(Global_35))
	{
		PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
	}
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_FRONTEND_PAUSE"), true);
	PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
	PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOK_LR"), true);
	PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOK_UD"), true);
	PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MOVE_LR"), true);
	PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MOVE_UD"), true);
	PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_SPRINT"), true);
	func_446(0);
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0.5f);
	if (bParam0)
	{
		if (!func_434(Global_35, -875674219))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Local_52, -1, -1f, -1f, -1f);
		}
	}
}

void func_503(int iParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(iParam0->f_21, 20))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 20);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 0))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 0);
	}
	MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
	func_1020(iParam0, &iParam1, 0);
	func_300(&iParam1);
	func_1021(iParam0, 0);
	if (MISC::IS_BIT_SET(iParam0->f_21, 3))
	{
		func_1022(iParam0, 0);
	}
	func_1023(iParam0);
	func_1024(iParam0, iParam1);
	func_1025(iParam0);
	func_1026(iParam0);
}

void func_504()
{
	int iVar0;

	iLocal_506 = func_518(7);
	iVar0 = PED::_GET_LAST_MOUNT(Global_35);
	if (iVar0 != iLocal_506)
	{
		iLocal_506 = iVar0;
	}
}

int func_505()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_379[0 /*8*/]))
	{
		func_1027(0, ENTITY::GET_ENTITY_COORDS(Local_52, false, false), iLocal_476);
		return 0;
	}
	return 1;
}

bool func_506(int iParam0)
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

void func_507(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_506(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_1028(*uParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_1029(iVar0);
	*uParam0 = 0;
}

void func_508(var uParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	uParam0->f_289 = { vParam1 };
	uParam0->f_292 = fParam4;
	if (func_153(vParam1))
	{
		func_383(uParam0, 2048, 1);
	}
	else
	{
		func_196(uParam0, 2048);
		if (bParam5)
		{
			func_196(uParam0, -2147483648);
		}
	}
}

int func_509(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

bool func_510()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_511(int iParam0, bool bParam1)
{
	switch (func_402(iParam0))
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

bool func_512(int iParam0)
{
	iParam0 = func_509(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_526(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_513(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = func_509(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_261(iParam0))
	{
		return;
	}
	iVar0 = func_518(iParam0);
	func_1030(iParam0);
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (PED::_0xAA9F048DCF69B6DC(iVar1))
	{
		if (!func_1031(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&iVar0);
	func_1032(iParam0, 0);
	func_1033(iParam0);
}

void func_514(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;

	iParam0 = func_509(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	StringCopy(&(Global_40.f_1095.f_1[iParam0 /*436*/]), "", 64);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_11 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_12 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_13 = -15;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = 0;
	func_1034(&Var0);
	func_1035(iParam0, Var0);
	func_1036(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_15));
	func_1037(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_298));
	func_1038(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
	func_1039(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1040(iVar2, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iVar2 /*4*/]));
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1041(iVar3, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iVar3 /*4*/]));
		iVar3++;
	}
	func_1042(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_420));
	func_1043(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_422));
	func_1044(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_425));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_427 = { 0f, 0f, 0f };
	Global_40.f_1095.f_1[iParam0 /*436*/].f_430 = 0f;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_431 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_432 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_433 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_434 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_435 = 0;
	Global_1900383[iParam0 /*45*/] = 0;
	Global_1900383[iParam0 /*45*/].f_1 = 0;
	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
	Global_1900383[iParam0 /*45*/].f_19 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_22 = 0f;
	Global_1900383[iParam0 /*45*/].f_23 = 0;
	Global_1900383[iParam0 /*45*/].f_24 = 0;
	Global_1900383[iParam0 /*45*/].f_25 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	}
	Global_1900383[iParam0 /*45*/].f_26 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}
	Global_1900383[iParam0 /*45*/].f_27 = 0;
	Global_1900383[iParam0 /*45*/].f_28 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_31 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_34 = 0f;
	Global_1900383[iParam0 /*45*/].f_35 = 0;
	Global_1900383[iParam0 /*45*/].f_36 = 0;
	Global_1900383[iParam0 /*45*/].f_37 = 0;
	Global_1900383[iParam0 /*45*/].f_38 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_41 = 0;
	Global_1900383[iParam0 /*45*/].f_42 = 0;
	Global_1900383[iParam0 /*45*/].f_43 = 0;
	Global_1900383[iParam0 /*45*/].f_44 = -1;
}

void func_515(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_516(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_517(vector3 vParam0)
{
	return func_1045(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_518(int iParam0)
{
	iParam0 = func_509(iParam0);
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

bool func_519(int iParam0)
{
	int iVar0;

	iParam0 = func_509(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_261(iParam0))
	{
		return false;
	}
	iVar0 = func_518(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

void func_520(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	func_1046(iParam0);
	func_1046(iParam0);
	func_1047(iParam0, iParam1);
	func_1048(iParam0, iParam1);
	func_1049(iParam0, iParam1);
	iVar1 = func_518(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1050(iVar1);
		}
		if (iParam0 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			bVar2 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, iVar1);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar1)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, false);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar1)
			{
				PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, 0);
			}
		}
	}
	iVar3 = func_518(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1050(iVar3);
		}
		if (iParam1 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar3);
		}
		else if (iParam1 == 1)
		{
			bVar4 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, iVar3);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar3)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, false);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar3)
			{
				PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, 0);
			}
		}
	}
	func_1051();
}

bool func_521()
{
	int iVar0;

	iVar0 = func_1001();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	return false;
}

void func_522()
{
	int iVar0;

	iVar0 = func_1001();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&iVar0);
	func_1052(0);
}

void func_523(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_524(int iParam0)
{
	iParam0 = func_509(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_9;
}

int func_525(int iParam0)
{
	iParam0 = func_509(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_8;
}

int func_526(int iParam0)
{
	iParam0 = func_509(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_14;
}

void func_527(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iParam0 = func_509(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1053(&iVar0, &iVar1, &iVar2);
	func_1054(iParam0, iVar0);
	func_1055(iParam0, iVar1);
	func_1056(iParam0, iVar2);
	func_1057(iParam0, 1);
	func_1058(iParam0, 1);
}

void func_528(int iParam0)
{
	iParam0 = func_509(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1059(iParam0, 1);
}

void func_529(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_509(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_19 = { vParam1 };
	Global_1900383[iParam0 /*45*/].f_22 = uParam4;
}

bool func_530(int iParam0)
{
	iParam0 = func_509(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_1060(iParam0, 1);
}

struct<2> func_531(int iParam0)
{
	struct<2> Var0;
	var uVar2;
	var uVar3;

	iParam0 = func_509(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1061(iParam0, &uVar2))
	{
	}
	if (!func_1062(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_532()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_1063(GET_HASH_KEY("SLOTID_HORSE_BEDROLL"), &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1063(GET_HASH_KEY("SLOTID_HORSE_BLANKET"), &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1063(GET_HASH_KEY("SLOTID_HORSE_HORN"), &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1063(GET_HASH_KEY("SLOTID_HORSE_SADDLEBAG"), &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1063(GET_HASH_KEY("SLOTID_HORSE_STIRRUP"), &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1063(GET_HASH_KEY("SLOTID_HORSE_SADDLE"), &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_533(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	if (!PED::IS_PED_READY_TO_RENDER(iParam0))
	{
		return;
	}
	func_1064(iParam0);
	func_1065(iParam0, uParam1);
	func_1066(iParam0);
	func_1067(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1068(iParam0, iParam3, 0);
	}
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, true);
}

bool func_534(int iParam0)
{
	iParam0 = func_509(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_1900383[iParam0 /*45*/].f_2;
}

void func_535(int iParam0)
{
	iParam0 = func_509(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_2 = 1;
	Global_1900383[iParam0 /*45*/].f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_536(int iParam0)
{
	int iVar0;

	iParam0 = func_509(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_537(iParam0);
	if (!SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		func_1033(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_1033(iParam0);
	}
}

int func_537(int iParam0)
{
	iParam0 = func_509(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/].f_3;
}

char* func_538(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return func_863(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		return func_1069(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		return func_1070(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	return "";
}

int func_539(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_540(var uParam0, char* sParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam1))
		{
			return uParam0->f_13[iVar0 /*12*/];
		}
		iVar0++;
	}
	return 0;
}

void func_541(var uParam0, int iParam1)
{
	struct<12> Var0;
	int iVar12;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 17)
	{
		if (uParam0->f_13[iVar12 /*12*/] == iParam1)
		{
			uParam0->f_13[iVar12 /*12*/] = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_542(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_543(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_544(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

bool func_545()
{
	int iVar0;

	if (func_1071())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_60[iVar0 /*43*/]) && !ENTITY::IS_ENTITY_DEAD(Local_52))
			{
				WEAPON::GIVE_WEAPON_TO_PED(Local_60[iVar0 /*43*/], iLocal_478, 200, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				WEAPON::SET_CURRENT_PED_WEAPON(Local_60[iVar0 /*43*/], iLocal_478, false, 0, false, false);
				PED::SET_PED_COMBAT_ABILITY(Local_60[iVar0 /*43*/], 1);
				PED::SET_PED_COMBAT_MOVEMENT(Local_60[iVar0 /*43*/], 1);
				PED::SET_PED_ACCURACY(Local_60[iVar0 /*43*/], 50);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_60[iVar0 /*43*/], 35, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_60[iVar0 /*43*/], 0, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_60[iVar0 /*43*/], 67, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_60[iVar0 /*43*/], 30, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_60[iVar0 /*43*/], 111, false);
				ENTITY::_SET_ENTITY_CARRYING_FLAG(Local_60[iVar0 /*43*/], 1, false);
				ENTITY::_SET_ENTITY_CARRYING_FLAG(Local_60[iVar0 /*43*/], 2, false);
				ENTITY::_SET_ENTITY_CARRYING_FLAG(Local_60[iVar0 /*43*/], 3, false);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_60[iVar0 /*43*/], true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_60[iVar0 /*43*/], iLocal_480);
				PED::SET_PED_CONFIG_FLAG(Local_60[iVar0 /*43*/], 6, true);
				PED::SET_PED_CONFIG_FLAG(Local_60[iVar0 /*43*/], 186, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_60[iVar0 /*43*/], false);
				AUDIO::STOP_PED_SPEAKING(Local_60[iVar0 /*43*/], true);
				func_1072(Local_60[iVar0 /*43*/]);
				if (iVar0 == 3 && !ENTITY::IS_ENTITY_DEAD(Local_319[2 /*6*/]))
				{
					func_559(Local_60[iVar0 /*43*/], Local_319[2 /*6*/], 0, -1, 1);
					func_1073(Local_60[iVar0 /*43*/], 1);
					func_1072(Local_319[2 /*6*/]);
				}
			}
			iVar0++;
		}
		return true;
	}
	return false;
}

void func_546()
{
	CAM::_0x88544C0E3291DCAE(1);
	func_145();
}

void func_547()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_52))
	{
		if (!AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_508))
		{
			iLocal_508 = TASK::ADD_COVER_POINT(vLocal_512, fLocal_515, 1, 2, 0, false);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_52, false, true);
		WEAPON::SET_CURRENT_PED_WEAPON(Local_52, iLocal_476, true, 0, false, false);
		TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_52, vLocal_512, -1, 1, 0f, 1, 1, iLocal_508, 0, 1, 0);
	}
}

void func_548(vector3 vParam0)
{
	float fVar0;
	vector3 vVar1;

	if (!Global_1935630.f_12)
	{
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_35, vParam0) };
		fVar0 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar0, 1f);
		CAM::_0x05BD5E4088B30A66(-180f, 180f);
	}
}

void func_549(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_550(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_551(int iParam0)
{
	if (func_304(iParam0) == 1)
	{
		return func_284(iParam0);
	}
	return -1;
}

char[] func_552(int iParam0)
{
	var uVar0;

	if (!func_723(iParam0))
	{
		return uVar0;
	}
	return Global_1835011[iParam0 /*74*/].f_8;
}

int func_553(int iParam0)
{
	if (func_304(iParam0) == 8)
	{
		return func_284(iParam0);
	}
	return -1;
}

char[] func_554(int iParam0)
{
	var uVar0;

	if (!func_285(iParam0))
	{
		return uVar0;
	}
	uVar0 = Global_1347702[iParam0 /*49*/].f_3;
	return uVar0;
}

bool func_555(int iParam0, int iParam1, int iParam2, vector3 vParam3, int iParam6, int iParam7, float fParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if (!func_139(*iParam1, 0))
	{
		if (!func_20(Global_1392626[iParam0 /*32*/].f_9, 256) || CAM::IS_SCREEN_FADED_OUT())
		{
			*iParam1 = func_872(iParam2, vParam3, iParam6, iParam7, fParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, 0, 0);
			if (func_139(*iParam1, 0))
			{
				func_29(&(Global_1392626[iParam0 /*32*/].f_9), 256);
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_556(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_1074(iParam0, iParam1))
		{
			if (func_1075(iParam0, iParam1))
			{
				if (func_1076(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_1077(iParam0);
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

bool func_557()
{
	int iVar0;

	iVar0 = 0;
	if (func_555(4, &(Local_60[4 /*43*/]), Local_60[4 /*43*/].f_41, Local_60[4 /*43*/].f_7, Local_60[4 /*43*/].f_10, 1, 1, 0, 1, 1, 1, 0))
	{
		iVar0++;
	}
	if (func_555(4, &(Local_60[5 /*43*/]), Local_60[5 /*43*/].f_41, Local_60[5 /*43*/].f_7, Local_60[5 /*43*/].f_10, 1, 1, 0, 1, 1, 1, 0))
	{
		iVar0++;
	}
	if (func_555(4, &(Local_319[3 /*6*/]), Local_319[3 /*6*/].f_5, Local_60[5 /*43*/].f_7, Local_60[5 /*43*/].f_10, 1, 1, 0, 1, 1, 1, 1))
	{
		iVar0++;
	}
	if (func_555(4, &(Local_319[4 /*6*/]), Local_319[4 /*6*/].f_5, Local_60[5 /*43*/].f_7, Local_60[5 /*43*/].f_10, 1, 1, 0, 1, 1, 1, 1))
	{
		iVar0++;
	}
	if (iVar0 == 4)
	{
		return true;
	}
	return false;
}

void func_558(int iParam0)
{
	WEAPON::GIVE_WEAPON_TO_PED(Local_60[iParam0 /*43*/], iLocal_478, 200, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Local_60[iParam0 /*43*/], iLocal_478, false, 0, false, false);
	PED::SET_PED_COMBAT_ABILITY(Local_60[iParam0 /*43*/], 1);
	PED::SET_PED_COMBAT_MOVEMENT(Local_60[iParam0 /*43*/], 1);
	PED::SET_PED_COMBAT_RANGE(Local_60[iParam0 /*43*/], 1);
	PED::SET_PED_ACCURACY(Local_60[iParam0 /*43*/], 50);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_60[iParam0 /*43*/], 42, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_60[iParam0 /*43*/], 0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_60[iParam0 /*43*/], 50, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_60[iParam0 /*43*/], 43, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_60[iParam0 /*43*/], 67, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_60[iParam0 /*43*/], 30, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_60[iParam0 /*43*/], 111, false);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(Local_60[iParam0 /*43*/], 1, false);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(Local_60[iParam0 /*43*/], 2, false);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(Local_60[iParam0 /*43*/], 3, false);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_60[iParam0 /*43*/], true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_60[iParam0 /*43*/], iLocal_480);
	PED::SET_PED_CONFIG_FLAG(Local_60[iParam0 /*43*/], 6, true);
	PED::SET_PED_CONFIG_FLAG(Local_60[iParam0 /*43*/], 186, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_60[iParam0 /*43*/], true);
	AUDIO::STOP_PED_SPEAKING(Local_60[iParam0 /*43*/], true);
}

int func_559(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (PED::GET_MOUNT(iParam0) != iParam1)
	{
		PED::SET_PED_ONTO_MOUNT(iParam0, iParam1, iParam3, bParam4);
		PED::SET_PED_CAN_BE_TARGETTED(iParam1, bParam2);
	}
	return 1;
}

void func_560(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			PED::_REMOVE_PED_FROM_MOUNT(iParam0, true, false);
		}
	}
}

void func_561(var uParam0)
{
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, true);
	func_1078(Local_18[1 /*16*/]);
	Local_18[1 /*16*/].f_14 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(Local_356))
	{
		ENTITY::SET_ENTITY_PROOFS(Local_356, 0, false);
		func_1079();
	}
	func_65("LSSLD2_END", 0);
}

void func_562(var uParam0)
{
	if (func_428(uParam0, "LSSOL_EXT"))
	{
		if (!bLocal_668)
		{
			func_217(1430.027f, 1192.439f, 182.8754f, 359.7534f);
			bLocal_668 = true;
		}
		if (!bLocal_667)
		{
			func_873(1414.669f, 1167.813f, 184.1296f, 10f, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_524))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_524, false);
			}
			bLocal_667 = true;
		}
		if (!bLocal_666)
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_356, -102255056))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_361[0 /*8*/], Local_361[0 /*8*/].f_1, false, true, true);
				ENTITY::SET_ENTITY_ROTATION(Local_361[0 /*8*/], Local_361[0 /*8*/].f_4, 2, false);
				bLocal_666 = true;
			}
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_356, -979415648) || ENTITY::HAS_ANIM_EVENT_FIRED(Local_356, 610718423))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_361[0 /*8*/], vLocal_517, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(Local_361[0 /*8*/], vLocal_520, 2, false);
			bLocal_666 = false;
		}
		if (!bLocal_661)
		{
			if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_228, "LSSOL_EXT_P2A1_T02_Shot_2", true))
			{
				if (!func_1080(&uLocal_481))
				{
					func_1081(&uLocal_481, "CXT_SOL_AB", "CXT_SOL_DMD", func_426(), 0, 10000, 1, -1, -1);
					bLocal_661 = true;
				}
			}
		}
		else if (!bLocal_662)
		{
			if (func_1082(&uLocal_481))
			{
				if (func_1083(&uLocal_481))
				{
					if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_228, "LSSOL_EXT_P2A1_T02_Shot_2", true))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_228, "LOOP", true, false);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_228, "Yes_is", true, false);
					}
					else
					{
						func_1084(&uLocal_481);
						TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"), "CXT_SOL_DMD");
						func_292(262144);
						func_1085(&(Global_1392626[4 /*32*/].f_8), 16);
						bLocal_662 = true;
						func_383(uParam0, 512, 1);
						return;
					}
				}
				else if (func_1086(&uLocal_481))
				{
					if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_228, "LSSOL_EXT_P2A1_T02_Shot_2", true))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_228, "LOOP", true, false);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_228, "Yes_is", false, false);
					}
					else
					{
						func_1084(&uLocal_481);
						TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS"), "CXT_SOL_AB");
						func_292(524288);
						bLocal_662 = true;
						func_256(4);
						func_383(uParam0, 512, 1);
						return;
					}
				}
			}
		}
		if (!func_166(16384))
		{
			func_219(Local_52.f_1, 100f, 0);
			func_173(16384);
		}
		else if (!func_166(32768))
		{
			func_220(Local_52.f_1, 100f, 0, 0, 0, 0, 0);
			func_173(32768);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_356))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_356, 610718423))
		{
			if (!func_166(33554432))
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_18[1 /*16*/]))
				{
					func_173(33554432);
				}
			}
			else if (!func_166(67108864))
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_18[1 /*16*/]))
				{
					func_173(67108864);
				}
			}
		}
	}
}

bool func_563(int iParam0)
{
	return AUDIO::_0xFE5C6177064BD390(iParam0);
}

void func_564(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

struct<8> func_565(var uParam0)
{
	return uParam0->f_238;
}

struct<8> func_566()
{
	char cVar0[64];

	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

Vector3 func_567(vector3 vParam0)
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

bool func_568(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_569(var uParam0)
{
	return *uParam0;
}

void func_570(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (((!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_228, false)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_228)) || func_374(uParam0, 512))
	{
		if (!func_1087(uParam0->f_285, 128))
		{
			func_931();
		}
		return;
	}
	if ((func_582(uParam0, Global_35, 4) || (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_228, func_863(Global_35)) && ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam0->f_228, func_863(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_228))
	{
		if (!func_1087(uParam0->f_285, 128))
		{
			func_931();
		}
		return;
	}
	bVar0 = true;
	iVar1 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(9);
	if (iVar1 != 0)
	{
		if (func_1088(iVar1))
		{
			if (func_1089(Global_43801, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (func_1087(uParam0->f_285, 512))
	{
		bVar2 = true;
	}
	if (func_922(bVar0, bVar2))
	{
		ANIMSCENE::TRIGGER_ANIM_SCENE_SKIP(uParam0->f_228);
		func_931();
	}
}

void func_571(var uParam0, char* sParam1)
{
	struct<8> Var0;
	char cVar8[32];

	if (func_569(uParam0) == 2 && (func_1090(uParam0->f_284, 16384) || func_374(uParam0, 268435456)))
	{
		Var0 = { func_238(uParam0) };
		func_239(uParam0, &Var0);
	}
	func_1091(uParam0, sParam1);
	if (func_374(uParam0, 131072))
	{
		func_1092(uParam0, 0);
	}
	if (func_1093())
	{
		PED::SET_PED_RESET_FLAG(Global_35, 265, true);
		func_1094();
	}
	if (func_688())
	{
		func_276(1);
	}
	func_387(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	func_1095(uParam0, cVar8);
	func_577(1, 0);
	func_382(uParam0);
	if (func_1096() && ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_228, func_863(Global_35)))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (func_573(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_220);
	}
	func_1097(uParam0);
	func_870(uParam0, 1);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_228);
	Global_43800 = uParam0->f_228;
	StringCopy(&Global_43802, sParam1, 24);
}

void func_572(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_68(&(uParam0->f_1));
}

bool func_573(var uParam0, int iParam1)
{
	return (uParam0->f_223 && iParam1) != 0;
}

void func_574(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_238(uParam0) };
	func_187(uParam0, &Var0);
}

float func_575(var uParam0)
{
	if (!func_49(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_159(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_223() - uParam0->f_1);
}

void func_576(bool bParam0)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), bParam0, false, 256);
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
}

void func_577(bool bParam0, int iParam1)
{
	if (func_612())
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_1098())
		{
			func_1099(1);
		}
	}
	AUDIO::_0x36559148B78853B3(0, iParam1, 0);
}

void func_578(var uParam0)
{
	vector3 vVar0;

	if (!func_374(uParam0, 4))
	{
		if (func_1090(uParam0->f_284, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { func_1100(uParam0) };
		if (!func_1090(uParam0->f_284, 524288))
		{
			func_1101(&(uParam0->f_296));
		}
		func_1102(&(uParam0->f_284), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_1103(uParam0, 0f, 0f, 0f);
		func_1104(uParam0);
		func_1105(uParam0);
		func_508(uParam0, 0f, 0f, 0f, 0, 0);
		func_1106(uParam0);
		func_196(uParam0, 4);
		func_1107(uParam0, 0);
		func_1108(&(Global_1946804.f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_297)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_297));
		}
	}
}

bool func_579(var uParam0, bool bParam1)
{
	if (func_374(uParam0, 262144))
	{
		return false;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228))
	{
		return false;
	}
	if (!ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_228, "ExportCamera"))
	{
		return false;
	}
	if ((ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam0->f_228, "ExportCamera") || (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(uParam0->f_228, "ExportCamera") && bParam1)) || ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(uParam0->f_228))
	{
		func_196(uParam0, 262144);
		func_1107(uParam0, 1);
		return true;
	}
	return false;
}

int func_580(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_228, false))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_DURATION(uParam0->f_228) * 1000f));
}

int func_581(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_228, false))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_228) * 1000f));
}

bool func_582(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 17)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1) && func_1109(&(uParam0->f_13[iVar0 /*12*/]), iParam2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_583(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228))
	{
		return true;
	}
	if (ANIMSCENE::HAS_ANIM_SCENE_EXITED(uParam0->f_228, false))
	{
		if (func_374(uParam0, 524288))
		{
			ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
		}
		return true;
	}
	if (ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(uParam0->f_228) && func_374(uParam0, 1048576))
	{
		return true;
	}
	return false;
}

void func_584(var uParam0)
{
	if (((func_374(uParam0, 1073741824 /* Float: 2f */) && !func_374(uParam0, 524288)) && func_374(uParam0, 512)) && CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
	}
}

void func_585(var uParam0)
{
	if (!func_374(uParam0, 536870912))
	{
		func_1107(uParam0, 1);
		func_586(&(uParam0->f_285), uParam0->f_296);
		func_381();
		func_196(uParam0, 536870912);
	}
	if (func_374(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_1110(uParam0);
	func_572(uParam0, 1);
	func_246(uParam0);
	func_1111(uParam0);
	func_1112(uParam0);
	func_1113(uParam0, 4);
	func_386(uParam0);
	func_1092(uParam0, 1);
	func_382(uParam0);
	func_253(&(uParam0->f_1));
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_228))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_228);
	}
	func_1114(!func_1087(uParam0->f_285, 128));
	if (!func_1087(uParam0->f_285, 128))
	{
		func_931();
	}
}

void func_586(var uParam0, int iParam1)
{
	if (Global_1935630.f_12)
	{
		return;
	}
	func_1115(2000);
	Global_16 = 0;
	func_1116();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, func_1087(*uParam0, 8));
	if (!func_1087(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (func_1087(*uParam0, 2) || func_1087(*uParam0, 4))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!func_1087(*uParam0, 16))
	{
		func_1117(1);
	}
	if (func_1087(*uParam0, 32))
	{
		func_816(Global_35, GET_HASH_KEY("CLOTHING_ITEM_NECKWEAR_NONE"), 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_1118(GET_HASH_KEY("KIT_BANDANA"), 0);
	}
	func_1108(&(Global_1946804.f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489.f_16 & 4194304 != 0)
	{
		Global_1359489.f_16 = (Global_1359489.f_16 - Global_1359489.f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_587()
{
	Global_1935630.f_52 = 1;
}

void func_588(var uParam0)
{
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_9))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);
	}
}

void func_589()
{
}

void func_590()
{
	if (iLocal_15 == 1)
	{
		if (!PED::IS_PED_IN_COVER(Local_52, false, false) && !func_434(Local_52, -1716541277))
		{
			func_611();
		}
	}
	else if (PED::IS_PED_IN_COVER(Local_52, false, false))
	{
		func_1119();
	}
	else if ((!func_434(Local_52, -1716541277) && func_69(&uLocal_551) > 1f) && func_166(32))
	{
		func_611();
	}
}

void func_591()
{
}

void func_592()
{
}

void func_593()
{
}

void func_594(int iParam0)
{
	Local_52.f_5 = iParam0;
}

void func_595(int iParam0)
{
}

void func_596(int iParam0)
{
	if (PED::IS_PED_HOGTIED(Local_60[iParam0 /*43*/]) && !func_1120(Global_35))
	{
		func_1121(iParam0);
		return;
	}
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_60[iParam0 /*43*/], 0))
	{
		if (!TASK::WAYPOINT_PLAYBACK_GET_IS_SHOOTING(Local_60[iParam0 /*43*/]))
		{
			TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(Local_60[iParam0 /*43*/], Global_35, 1, 0, -1082130432 /* Float: -1f */);
		}
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_60[iParam0 /*43*/], 2f, 0, -1082130432 /* Float: -1f */, 0);
	}
	if (!func_496(Local_60[iParam0 /*43*/]))
	{
		TASK::CLEAR_PED_TASKS(Local_60[iParam0 /*43*/], true, false);
		func_602(iParam0);
	}
}

void func_597(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = PED::GET_CURRENT_TARGET_FOR_PED(Local_60[iParam1 /*43*/]);
	if (PED::IS_PED_HOGTIED(Local_60[iParam1 /*43*/]) && !func_1120(Global_35))
	{
		func_1121(iParam1);
		return;
	}
	if (iVar0 != 0)
	{
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == Local_52)
		{
			if (PED::GET_PED_ACCURACY(Local_60[iParam1 /*43*/]) != 50)
			{
				PED::SET_PED_ACCURACY(Local_60[iParam1 /*43*/], 50);
			}
		}
		else if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == Global_35)
		{
			if (PED::GET_PED_ACCURACY(Local_60[iParam1 /*43*/]) != 50)
			{
				PED::SET_PED_ACCURACY(Local_60[iParam1 /*43*/], 50);
			}
		}
	}
	if (iParam1 == 4 || iParam1 == 5)
	{
		if (!func_434(Local_60[iParam1 /*43*/], 242628503))
		{
			func_602(iParam1);
		}
	}
	else if (!func_434(Local_60[iParam1 /*43*/], 242628503))
	{
		func_602(iParam1);
	}
}

void func_598(int iParam0)
{
}

void func_599(int iParam0, int iParam1)
{
	if (Local_60[iParam0 /*43*/].f_40 != iParam1)
	{
		Local_60[iParam0 /*43*/].f_40 = iParam1;
	}
}

void func_600()
{
	func_1122(2, 3);
	func_1122(3, 4);
	func_1122(4, 5);
}

void func_601()
{
	bool bVar0;

	if (!func_166(4))
	{
		if (func_69(&uLocal_533) > 60f)
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_52, true, iLocal_480);
		func_173(4);
	}
}

void func_602(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!MAP::DOES_BLIP_EXIST(Local_60[iParam0 /*43*/].f_42))
	{
		Local_60[iParam0 /*43*/].f_42 = MAP::BLIP_ADD_FOR_ENTITY(GET_HASH_KEY("BLIP_STYLE_COP"), Local_60[iParam0 /*43*/]);
		if (MAP::DOES_BLIP_EXIST(Local_60[iParam0 /*43*/].f_42))
		{
			MAP::BLIP_ADD_MODIFIER(Local_60[iParam0 /*43*/].f_42, -1034486097);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_60[iParam0 /*43*/].f_42, "BLIP_SOLDIER");
		}
	}
	if (iParam0 < 3)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, Local_60[iParam0 /*43*/].f_4, 4f);
		TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, Local_60[iParam0 /*43*/].f_1, 200f, 0, 16);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(Local_60[iParam0 /*43*/], iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
	else if (iParam0 == 3)
	{
		PED::SET_PED_COMBAT_MOVEMENT(Local_60[3 /*43*/], 0);
		PED::SET_PED_CONFIG_FLAG(Local_60[3 /*43*/], 167, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_60[3 /*43*/], 123, true);
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_60[iParam0 /*43*/].f_4, Global_35, 1.25f, 1, 4f, 5f, 0, 0, 0, GET_HASH_KEY("FIRING_PATTERN_BURST_FIRE"), -1, 0);
		TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, Local_60[iParam0 /*43*/].f_4, 2f);
		TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, Local_60[iParam0 /*43*/].f_1, 200f, 0, 16);
		TASK::CLOSE_SEQUENCE_TASK(iVar1);
		TASK::TASK_PERFORM_SEQUENCE(Local_60[iParam0 /*43*/], iVar1);
		TASK::CLEAR_SEQUENCE_TASK(&iVar1);
	}
	else if (iParam0 == 4)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar2);
		TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, 1410.55f, 1142.516f, 183.7943f, 10f);
		TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, Local_60[iParam0 /*43*/].f_1, 200f, 0, 16);
		TASK::CLOSE_SEQUENCE_TASK(iVar2);
		TASK::TASK_PERFORM_SEQUENCE(Local_60[iParam0 /*43*/], iVar2);
		TASK::CLEAR_SEQUENCE_TASK(&iVar2);
	}
	else if (iParam0 == 5)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar3);
		TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, 1422.316f, 1149.653f, 184.7578f, 5f);
		TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, Local_60[iParam0 /*43*/].f_1, 200f, 0, 16);
		TASK::CLOSE_SEQUENCE_TASK(iVar3);
		TASK::TASK_PERFORM_SEQUENCE(Local_60[iParam0 /*43*/], iVar3);
		TASK::CLEAR_SEQUENCE_TASK(&iVar3);
	}
	func_599(iParam0, 2);
}

void func_603(char[4] cParam0)
{
	func_408(0);
	PED::SET_PED_CONFIG_FLAG(Global_35, 276, true);
	PED::SET_PED_CONFIG_FLAG(Local_52, 276, true);
	PED::SET_PED_CONFIG_FLAG(Local_52, 229, true);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_479, GET_HASH_KEY("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_480, GET_HASH_KEY("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_480, iLocal_479);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_479, iLocal_480);
	if (!ENTITY::IS_ENTITY_DEAD(Local_319[0 /*6*/]))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_319[0 /*6*/], Local_319[0 /*6*/].f_1, (Local_319[0 /*6*/].f_4 + 180f), true, false, true);
		ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(Local_319[0 /*6*/], false);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_319[0 /*6*/], 48, false);
		TASK::_TASK_FLEE_FROM_COORD(Local_319[0 /*6*/], 1416.469f, 1166.036f, 183.8655f, 1510.422f, 1396.894f, 156.7776f, 1000f, -1, 1024, 2.5f, 0);
		func_115(&(Local_319[0 /*6*/]), 1, 0, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_319[1 /*6*/]))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_319[1 /*6*/], Local_319[1 /*6*/].f_1, (Local_319[1 /*6*/].f_4 + 180f), true, false, true);
		ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(Local_319[1 /*6*/], false);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_319[1 /*6*/], 48, false);
		TASK::_TASK_FLEE_FROM_COORD(Local_319[1 /*6*/], 1416.469f, 1166.036f, 183.8655f, 1510.422f, 1396.894f, 156.7776f, 1000f, -1, 1024, 2.5f, 0);
		func_115(&(Local_319[1 /*6*/]), 1, 0, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_319[2 /*6*/]))
	{
		PED::_0x2EB75FB86C41F026(Local_319[2 /*6*/], 3, 0);
	}
	func_547();
	func_68(&uLocal_551);
	func_594(1);
	func_68(&uLocal_533);
	func_68(&uLocal_545);
	ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_52, false, iLocal_480);
	func_1123(Local_52, 150);
	func_373(cParam0, "SOL2_OBJ_1", 0f, 0f, 0f);
	if (func_166(262144))
	{
		func_91("SOL2_OBJ_1", 7500, 0, 1, 0, 0, -1, -1, 0);
	}
}

void func_604()
{
	int iVar0;

	iVar0 = iLocal_14;
	iVar0++;
	iLocal_14 = iVar0;
	if (iLocal_14 == 3)
	{
		iLocal_14 = (iVar0 - 1);
	}
}

void func_605(char[4] cParam0)
{
	if (!func_166(268435456))
	{
		if (func_166(131072))
		{
			if (!func_49(&uLocal_557))
			{
				func_68(&uLocal_557);
			}
			else if (func_69(&uLocal_557) > 2f)
			{
				if (func_1124())
				{
					func_173(268435456);
				}
			}
		}
	}
	else if (!func_166(64))
	{
		if (func_171(1, 4, "PL_MAIN"))
		{
			func_173(64);
			func_68(&uLocal_536);
			func_68(&uLocal_539);
		}
	}
	else if (!func_290(2048))
	{
		if (func_69(&uLocal_536) > 3f && !func_235())
		{
			if (func_371(cParam0, Local_629[6 /*2*/], 1))
			{
				func_68(&uLocal_536);
			}
		}
	}
	else if (!func_290(4096))
	{
		if (func_69(&uLocal_536) > 6f && !func_235())
		{
			if (func_371(cParam0, Local_629[7 /*2*/], 1))
			{
				func_68(&uLocal_536);
			}
		}
	}
	else if (!func_290(8192))
	{
		if (func_69(&uLocal_536) > 2f && !func_235())
		{
			if (func_371(cParam0, Local_629[8 /*2*/], 1))
			{
				func_68(&uLocal_536);
			}
		}
	}
	else if (!func_290(16384))
	{
		if (func_69(&uLocal_536) > 10f && !func_235())
		{
			if (func_371(cParam0, Local_629[9 /*2*/], 1))
			{
				func_68(&uLocal_536);
			}
		}
	}
	if (!func_166(1048576))
	{
		if (func_69(&uLocal_539) > 20f)
		{
			func_228();
			func_173(1048576);
			func_253(&uLocal_539);
		}
	}
}

bool func_606()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Local_60[iVar0 /*43*/].f_40 == 4 || Local_60[iVar0 /*43*/].f_40 == 3)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (!func_166(131072))
	{
		if (iVar1 > 3)
		{
			if ((ENTITY::WOULD_ENTITY_BE_OCCLUDED(GET_HASH_KEY("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), Local_60[4 /*43*/].f_7, true) && ENTITY::WOULD_ENTITY_BE_OCCLUDED(GET_HASH_KEY("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), Local_60[5 /*43*/].f_7, true)) || func_148(Global_35, Local_356.f_1, 40f, 1, 1))
			{
				if (func_1125())
				{
					func_173(131072);
					func_68(&uLocal_548);
					return false;
				}
			}
		}
	}
	if (iVar1 == 6 && func_166(131072))
	{
		return true;
	}
	else if (iVar1 == (6 - 1))
	{
		if (!func_166(128))
		{
			func_1126();
			func_173(128);
		}
	}
	return false;
}

void func_607()
{
	func_594(0);
}

void func_608(int iParam0)
{
	int iVar0;

	if (iParam0 == 3)
	{
		iVar0 = iLocal_15;
		iVar0++;
		iLocal_15 = iVar0;
		if (iLocal_15 == 3)
		{
			iLocal_15 = (iVar0 - 1);
		}
	}
	else
	{
		iLocal_15 = iParam0;
	}
	iLocal_14 = 0;
}

bool func_609(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_610(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		ENTITY::SET_ENTITY_HEALTH(iParam0, iParam1, 0);
	}
}

void func_611()
{
	func_68(&uLocal_551);
	if (iLocal_15 == 1)
	{
		func_1127(Local_52, 1413.414f, 1169.4f, 183.958f, 2f, 0, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_52, 11, true);
		TASK::TASK_SEEK_COVER_TO_COVER_POINT(Local_52, iLocal_508, 1414.915f, 1142.732f, 183.5915f, -1, 0, 0, 0);
	}
	else
	{
		TASK::TASK_SEEK_COVER_TO_COVER_POINT(Local_52, iLocal_508, 1414.915f, 1142.732f, 183.5915f, -1, 0, 0, 0);
	}
	func_594(1);
}

bool func_612()
{
	return func_690(UIFEED::UI_FEED_GET_CURRENT_MESSAGE(3));
}

int func_613(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_1128(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_614(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_615(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_616(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_617(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_618(int iParam0, int iParam1)
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

void func_619(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1129(iParam0, iParam6);
	func_1130(iParam0, iParam5);
	func_1131(iParam0, iParam4);
	func_1132(iParam0, iParam3);
	func_1133(iParam0, iParam2);
	func_1134(iParam0, iParam1);
}

void func_620(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_6 = iParam1;
}

int func_621(int iParam0)
{
	return func_1135(func_881(iParam0));
}

int func_622(bool bParam0, int iParam1)
{
	int iVar0;

	if (!bParam0 && func_880(373691918))
	{
		return 0;
	}
	iVar0 = 0;
	if (LAW::_0x76CF93D4B416B288(GET_HASH_KEY("BOUNTYHUNTERSGLOBALCOOLDOWN")) < 2)
	{
		iVar0 = (LAW::_0x76CF93D4B416B288(GET_HASH_KEY("BOUNTYHUNTERSGLOBALCOOLDOWN")) + iParam1);
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	LAW::_0xF19706B1F8FFA88F(GET_HASH_KEY("BOUNTYHUNTERSGLOBALCOOLDOWN"), iVar0);
	func_409(bParam0);
	return 1;
}

void func_623()
{
	struct<15> Var0;
	int iVar17;
	int iVar18;

	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_1136(iVar17))
		{
			iVar18 = func_953(iVar17);
			if (ENTITY::DOES_ENTITY_EXIST(iVar18))
			{
				Var0.f_14 = iVar18;
				Var0.f_3 = iVar18;
				MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
			}
		}
		iVar17++;
	}
	Global_1359489.f_58 = -15;
	func_253(&(Global_1359489.f_55));
	if (func_1137(GET_HASH_KEY("CSTAG_PLAYER_AWAY"), 1))
	{
		func_1138(GET_HASH_KEY("CSTAG_PLAYER_AWAY"), 1, 0);
	}
}

void func_624(int iParam0)
{
	if (!func_102(iParam0))
	{
		return;
	}
	func_879(iParam0, (func_878(iParam0) + BUILTIN::SHIFT_LEFT(1, 16)));
}

struct<2> func_625(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_626(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP8_ABIGAIL2X1_1"), iParam1);
			break;
		case 18:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_1"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_2"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_4"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_GT_BRAITHWAITES_1"), iParam1);
			break;
		case 20:
			func_1139(GET_HASH_KEY("JOURNAL_GT_BRAITHWAITES_2"), iParam1);
			break;
		case 2:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_1"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_2"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_4"), iParam1);
			break;
		case 23:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_1"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_2"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_3"), iParam1);
			func_1140(1);
			break;
		case 16:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_FEUD1_1"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_FEUD1_2_TXT"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_FEUD1_3_TXT"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_FEUD1_4"), iParam1);
			break;
		case 59:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_ENDLESS_SUMMER_1"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_ENDLESS_SUMMER_2"), iParam1);
			if (func_1141(146))
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_TREASURE2_JN"), iParam1);
			}
			func_1140(1);
			break;
		case 76:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_FINALE2_1"), iParam1);
			if (func_1142() == 0)
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_9A"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_10B"), iParam1);
			}
			break;
		case 44:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG1_1"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG1_2"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG1_3"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG1_4"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG1_4B"), iParam1);
			break;
		case 46:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG3_1"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG3_2"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG3_4"), iParam1);
			break;
		case 17:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_GRAYS1_1"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_GRAYS1_3"), iParam1);
			break;
		case 19:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_GRAYS2_1"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_GRAYS2_2"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_GT_GRAYS_2"), iParam1);
			break;
		case 21:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_GRAYS3_1"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_GRAYS3_2"), iParam1);
			func_1140(0);
			break;
		case 15:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_HUNTING1_1"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_HUNTING1_1B"), iParam1);
			break;
		case 33:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_INDUSTRY1_1"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_INDUSTRY1_2"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_INDUSTRY1_4"), iParam1);
			break;
		case 34:
			func_1139(GET_HASH_KEY("JOURNAL_GT_INDUSTRY_3"), iParam1);
			break;
		case 64:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP8_LARAMIE1_1"), iParam1);
			break;
		case 60:
			func_1139(GET_HASH_KEY("JOURNAL_CHAP8_PRONGHORN"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP8_MARSTON1_2"), iParam1);
			break;
		case 73:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_MARSTON6_1"), iParam1);
			break;
		case 74:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_MARSTON7_1"), iParam1);
			if (func_1142() == 0)
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_4A"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_5B"), iParam1);
			}
			break;
		case 8:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MARY1_1"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MARY1_3"), iParam1);
			break;
		case 36:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MARY3_1"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MARY3_2"), iParam1);
			if (Global_1357515 == 0)
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MARY3_2A"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MARY3_2B"), iParam1);
			}
			break;
		case 27:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB1_1"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB1_2"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB1_3"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB1_4"), iParam1);
			break;
		case 28:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB2_1"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB2_2"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB2_3"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB2_4"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_GT_MOB_2"), iParam1);
			break;
		case 29:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB3_1"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB3_2"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_GT_MOB_3"), iParam1);
			break;
		case 31:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB5_1"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB5_2"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB5_3"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB5_4"), iParam1);
			break;
		case 4:
			func_1139(GET_HASH_KEY("JOURNAL_CHAP2_HORSESHOE"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MUDTOWN1_2"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MUDTOWN1_3"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MUDTOWN1_5"), iParam1);
			func_1140(0);
			break;
		case 6:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2"), iParam1);
			if (Global_1357515 == -1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_A"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_B"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_C"), iParam1);
			}
			break;
		case 25:
			func_1139(GET_HASH_KEY("JOURNAL_GT_MUDTOWN_3B"), iParam1);
			break;
		case 24:
			if (Global_1357515 == -1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_GT_MUDTWON_5_5000"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				func_1139(GET_HASH_KEY("JOURNAL_GT_MUDTWON_5_7500"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_GT_MUDTWON_5_10000"), iParam1);
			}
			break;
		case 48:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE1_1"), iParam1);
			if (Global_1357515 == -1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE1_2"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE1_2A"), iParam1);
			}
			if (func_1143(51))
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE1_2B"), iParam1);
			}
			break;
		case 49:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE2_1"), iParam1);
			if (Global_1357515 == 0)
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE2_2A"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE2_2B"), iParam1);
			}
			else if (Global_1357515 == 2)
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE2_2C"), iParam1);
			}
			break;
		case 58:
			func_1139(GET_HASH_KEY("JOURNAL_GT_NATIVE_3"), iParam1);
			break;
		case 50:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVESON1_1"), iParam1);
			break;
		case 52:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVESON3_1"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVESON3_2"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVESON3_2B"), iParam1);
			if (bParam2 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVESON3_3A"), iParam1);
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVESON3_3A2"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVESON3_3B"), iParam1);
			}
			break;
		case 32:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_ODRISCOLL4_1"), iParam1);
			break;
		case 47:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_MARY4_1"), iParam1);
			break;
		case 69:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_SADIE2_1"), iParam1);
			if (func_511(Global_1347702[9 /*49*/].f_15, 1))
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_2B"), iParam1);
			}
			break;
		case 70:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_SADIE3"), iParam1);
			if (func_1142() == 0)
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_7A"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_8B"), iParam1);
			}
			break;
		case 71:
			if (func_1142() == 0)
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_8A"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_9B"), iParam1);
			}
			break;
		case 37:
			func_1139(GET_HASH_KEY("JOURNAL_GT_SAINT_DENIS_1"), iParam1);
			break;
		case 9:
			if (Global_1357515 == -1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_SALOON1_1"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_SALOON1_1B"), iParam1);
			}
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_SALOON1_2"), iParam1);
			break;
		case 13:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_SEAN1_1"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_SEAN1_2"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_SEAN1_3"), iParam1);
			break;
		case 53:
			func_1139(GET_HASH_KEY("JOURNAL_GT_CORNWALL_1"), iParam1);
			break;
		case 54:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_TRAINROBBERY1_1"), iParam1);
			break;
		case 56:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_TRAINROBBERY3_1"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_TRAINROBBERY3_3"), iParam1);
			break;
		case 57:
			func_1139(GET_HASH_KEY("JOURNAL_GT_TRAIN_ROBBERY_4"), iParam1);
			break;
		case 22:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_TRELAWNY1_1"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_TRELAWNY1_2"), iParam1);
			break;
		case 12:
			func_1139(GET_HASH_KEY("JOURNAL_GT_UTOPIA_2"), iParam1);
			break;
		case 0:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP1_WINTER1_1"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP1_WINTER1_3"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP1_WINTER1_5"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP1_WINTER1_6"), iParam1);
			break;
		case 1:
			func_1140(1);
			break;
		case 3:
			if (func_656())
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(GET_HASH_KEY("JOURNAL_GT_WINTER_4")))
				{
					func_1139(GET_HASH_KEY("JOURNAL_GT_WINTER_4_SE"), iParam1);
				}
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(GET_HASH_KEY("JOURNAL_GT_WINTER_4_SE")))
			{
				func_1139(GET_HASH_KEY("JOURNAL_GT_WINTER_4"), iParam1);
			}
			break;
		default:
			break;
	}
}

void func_627(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_ABIGAIL1_1"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_ABIGAIL1_3"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_ABIGAIL1_4"), iParam1);
			break;
		case 1:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_ABIGAIL2X2_1"), iParam1);
			break;
		case 2:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_ABIGAIL3_1"), iParam1);
			break;
		case 9:
			func_1139(GET_HASH_KEY("JOURNAL_CHAP9_BEECHERSHOPE"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_BEECHERS1X3_1"), iParam1);
			if (func_511(Global_1835011[69 /*74*/].f_1, 1))
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_1A"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_1B"), iParam1);
			}
			break;
		case 22:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_CALDERON1X1_1"), iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_1_AR"), iParam1);
				func_1139(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_2_AR"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_1_JN"), iParam1);
				func_1139(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_2_JN"), iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_3_1_AR"), iParam1);
				func_1139(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_3_2_AR"), iParam1);
			}
			else if (func_1141(26))
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_3_JN_B1"), iParam1);
				func_1139(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_3_JN_B2"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_3_JN_A"), iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (Global_1357515 == -1)
				{
					func_1139(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2F_AR"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					func_1139(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2A_AR"), iParam1);
				}
				else if (Global_1357515 == 1)
				{
					func_1139(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2B_AR"), iParam1);
				}
				else if (Global_1357515 == 2)
				{
					func_1139(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2C_AR"), iParam1);
				}
				else if (Global_1357515 == 3)
				{
					func_1139(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2D_AR"), iParam1);
				}
				else if (Global_1357515 == 4)
				{
					func_1139(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2E_AR"), iParam1);
				}
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2_JN"), iParam1);
				if (Global_1357515 == -1)
				{
					func_1139(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2E_JN"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					func_1139(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2A_JN"), iParam1);
				}
				else if (Global_1357515 == 1)
				{
					func_1139(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2B_JN"), iParam1);
				}
				else if (Global_1357515 == 2)
				{
					func_1139(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2C_JN"), iParam1);
				}
				else if (Global_1357515 == 3)
				{
					func_1139(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2D_JN"), iParam1);
				}
				else if (Global_1357515 == 4)
				{
					func_1139(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2F_JN"), iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_3_AR"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_3_JN"), iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_4_AR"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_4_JN"), iParam1);
			}
			break;
		case 37:
			func_1139(GET_HASH_KEY("JOURNAL_GT_COACH_ROB_RSC"), iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_CRKPT1_1_AR"), iParam1);
				func_1139(GET_HASH_KEY("JOURNAL_RC_CRKPT1_2_AR"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_CRKPT1_1_JN"), iParam1);
				func_1139(GET_HASH_KEY("JOURNAL_RC_CRKPT1_1_JN_B"), iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_CRKPT2_1_AR"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_CRKPT2_1_JN"), iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_CRKPT3_1_AR"), iParam1);
			}
			else if (func_1141(54))
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_CRKPT3_1B_JN"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_CRKPT3_1A_JN"), iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_CIG1_1_AR"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_CIG1_1_JN"), iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_DINO1_1_AR"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_DINO1_1_JN"), iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_DINO2_1_AR"), iParam1);
			}
			else if (func_1141(39))
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_DINO2_1_B_JN"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_DINO2_1_A_JN"), iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_679(Global_1835011[33 /*74*/].f_1) == 1)
				{
					func_1139(GET_HASH_KEY("JOURNAL_RC_EXOTIC1_1B_AR_A"), iParam1);
				}
				else
				{
					func_1139(GET_HASH_KEY("JOURNAL_RC_EXOTIC1_1A_AR_A"), iParam1);
				}
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_EXOTIC1_1_JN"), iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_EXOTIC3_1_AR_A"), iParam1);
			}
			else if (func_1141(43))
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_EXOTIC3_1_JN_B"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_EXOTIC3_1_JN_A"), iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_FISH1_1_AR"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_FISH1_1_JN"), iParam1);
			}
			break;
		case 42:
			if (func_1141(41))
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_FISH2_1_JN_B"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_FISH2_1_JN_A"), iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_ROCKCARV1_AR"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_ROCKCARV1_JN"), iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_ROCKCARV2_AR"), iParam1);
			}
			else if (func_1141(49))
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_ROCKCARV2_JN_B"), iParam1);
				func_1139(GET_HASH_KEY("JOURNAL_RC_ROCKCARV2_JN_B2"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_ROCKCARV2_JN_A"), iParam1);
			}
			break;
		case 51:
			func_1139(GET_HASH_KEY("JOURNAL_RC_TAX1_1_JN"), iParam1);
			break;
		case 58:
			if (func_511(Global_1347702[23 /*49*/].f_15, 1))
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_DOCTORS_1"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_DOCTORS_1B"), iParam1);
			}
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_DOCTORS_2"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_DOCTORS_3"), iParam1);
			break;
		case 59:
			func_1139(GET_HASH_KEY("JOURNAL_CHAP2_DOWNES1_1"), iParam1);
			break;
		case 62:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_DOWNES2_1"), iParam1);
			break;
		case 63:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_ODRISCOLL2_2B"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_GT_ODRISCOLL_2"), iParam1);
			break;
		case 65:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_1"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_2"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_3"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_4"), iParam1);
			break;
		case 66:
			func_1139(GET_HASH_KEY("JOURNAL_CHAP3_CLEMENS"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_DUTCH1_1"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_DUTCH1_2"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_DUTCH1_3"), iParam1);
			func_1140(1);
			break;
		case 67:
			func_1139(GET_HASH_KEY("JOURNAL_CHAP4_SHADYBELLE"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_DUTCH2_1"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_DUTCH2_2"), iParam1);
			break;
		case 68:
			func_1139(GET_HASH_KEY("JOURNAL_CHAP6_BEAVERHOLLOW"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_DUTCH3_2"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_DUTCH3_2B"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_DUTCH3_3"), iParam1);
			func_1140(0);
			break;
		case 70:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_EDITHDOWNE2_1"), iParam1);
			break;
		case 71:
			func_1139(GET_HASH_KEY("JOURNAL_RC_MILLER1_JN"), iParam1);
			break;
		case 73:
			func_1139(GET_HASH_KEY("JOURNAL_RC_MILLER3_JN"), iParam1);
			break;
		case 75:
			func_1139(GET_HASH_KEY("JOURNAL_RC_MILLER4_JN"), iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_FMA1_1_AR"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_FMA1_1_JN"), iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_FMA3_1_AR"), iParam1);
				func_1139(GET_HASH_KEY("JOURNAL_RC_FMA3_2_AR"), iParam1);
			}
			else if (func_1141(78))
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_FMA3_2_JN"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_FMA3_1_JN"), iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_FMA4_1_AR"), iParam1);
			}
			else if (func_1141(79))
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_FMA4_2_JN"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_FMA4_1_JN"), iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER1_1_AR"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER1_1_JN"), iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER2_1_AR"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER2_1_JN"), iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER3_1_AR"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER3_1_JN"), iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER5_1_AR"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER5_1_JN"), iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_HKK1_AR"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_HKK1_JN"), iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_HKK4_AR"), iParam1);
				func_1139(GET_HASH_KEY("JOURNAL_RC_HKK4B_AR"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_HKK4_A_JN"), iParam1);
				func_1139(GET_HASH_KEY("JOURNAL_RC_HKK4_A2_JN"), iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_HKK5_AR"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_HKK5_JN"), iParam1);
			}
			break;
		case 94:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_1"), iParam1);
			if (Global_1357515 == -1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_2A"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_2B"), iParam1);
			}
			func_1139(GET_HASH_KEY("JOURNAL_GT_HOME_ROB"), iParam1);
			break;
		case 99:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MARY3X1_1"), iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_MASON1_1_AR"), iParam1);
				if (Global_1357515 == -1)
				{
					func_1139(GET_HASH_KEY("JOURNAL_RC_MASON1_2_AR_B"), iParam1);
				}
				else
				{
					func_1139(GET_HASH_KEY("JOURNAL_RC_MASON1_2_AR_A"), iParam1);
				}
			}
			else if (Global_1357515 == -1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_MASON1_1B_JN"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_MASON1_1A_JN"), iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_MASON2_1_AR"), iParam1);
			}
			else if (func_1141(101))
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_MASON2_1B_JN"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_MASON2_1A_JN"), iParam1);
			}
			break;
		case 103:
			func_1139(GET_HASH_KEY("JOURNAL_RC_MASON3_1_AR"), iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_MASON4_1_AR"), iParam1);
				func_1139(GET_HASH_KEY("JOURNAL_RC_MASON4_2_AR"), iParam1);
			}
			else if (func_1141(103))
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_MASON4_1B_JN"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_MASON4_1A_JN"), iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_MASON5_1_AR"), iParam1);
			}
			else if (func_1141(104))
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_MASON5_1B_JN"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_MASON5_1A_JN"), iParam1);
			}
			break;
		case 108:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_MONROE_1"), iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_MAYOR1_AR"), iParam1);
				func_1139(GET_HASH_KEY("JOURNAL_RC_MAYOR1_AR_B"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_MAYOR1_JN"), iParam1);
				func_1139(GET_HASH_KEY("JOURNAL_RC_MAYOR1B_JN"), iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_MAYOR2_AR"), iParam1);
			}
			else if (func_1141(109))
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_MAYOR2B_JN"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_MAYOR2A_JN"), iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (Global_1357515 == 0)
				{
					func_1139(GET_HASH_KEY("JOURNAL_RC_MAYOR3A_AR"), iParam1);
				}
				else
				{
					func_1139(GET_HASH_KEY("JOURNAL_RC_MAYOR3B_AR"), iParam1);
				}
			}
			else if (func_1141(110))
			{
				if (Global_1357515 == 0)
				{
					func_1139(GET_HASH_KEY("JOURNAL_RC_MAYOR3C_JN"), iParam1);
				}
				else
				{
					func_1139(GET_HASH_KEY("JOURNAL_RC_MAYOR3D_JN"), iParam1);
					func_1139(GET_HASH_KEY("JOURNAL_RC_MAYOR3D_2_JN"), iParam1);
				}
			}
			else if (Global_1357515 == 0)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_MAYOR3A_JN"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_MAYOR3B_JN"), iParam1);
				func_1139(GET_HASH_KEY("JOURNAL_RC_MAYOR3B_2_JN"), iParam1);
			}
			break;
		case 115:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_NATIVERSC1_1"), iParam1);
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_NATIVERSC1_2"), iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_ODDF1_AR"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_ODDF1_JN"), iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_ODDF2_AR"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_ODDF2_JN"), iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_OHBRO1_1_AR"), iParam1);
				func_1139(GET_HASH_KEY("JOURNAL_RC_OHBRO1_2_AR"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_OHBRO1_1_JN"), iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_OHBRO2_1_AR"), iParam1);
			}
			else if (func_1141(117))
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_OHBRO2_1B_JN"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_OHBRO2_1A_JN"), iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_OHBRO3_1_AR"), iParam1);
			}
			else if (func_1141(118))
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_OHBRO3_2B_JN"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_OHBRO3_2A_JN"), iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_PW1_AR"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_PW1_JN"), iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_PW3_AR"), iParam1);
			}
			else if (func_1141(121))
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_PW3B_JN"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_PW3A_JN"), iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_PW4_AR"), iParam1);
			}
			else if (func_1141(122))
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_PW4B_JN"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_PW4A_JN"), iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_PW5_AR"), iParam1);
				func_1139(GET_HASH_KEY("JOURNAL_RC_PW5B_AR"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_PW5_JN"), iParam1);
				func_1139(GET_HASH_KEY("JOURNAL_RC_PW5B_JN"), iParam1);
			}
			break;
		case 127:
			func_1139(GET_HASH_KEY("JOURNAL_RC_RTL1_AR"), iParam1);
			break;
		case 129:
			func_1139(GET_HASH_KEY("JOURNAL_RC_RTL3_AR"), iParam1);
			break;
		case 131:
			func_1139(GET_HASH_KEY("JOURNAL_RC_RTL5_AR"), iParam1);
			break;
		case 133:
			func_1139(GET_HASH_KEY("JOURNAL_RC_RTL7_AR"), iParam1);
			break;
		case 134:
			func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_SADIE1_1"), iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (Global_1357515 == -1)
				{
					func_1139(GET_HASH_KEY("JOURNAL_RC_KILLER4A_AR"), iParam1);
				}
				else
				{
					func_1139(GET_HASH_KEY("JOURNAL_RC_KILLER4B_AR"), iParam1);
				}
			}
			else if ((HUD::_JOURNAL_CAN_WRITE_ENTRY(GET_HASH_KEY("JOURNAL_RC_KILLER1_AR")) && HUD::_JOURNAL_CAN_WRITE_ENTRY(GET_HASH_KEY("JOURNAL_RC_KILLER2_AR"))) && HUD::_JOURNAL_CAN_WRITE_ENTRY(GET_HASH_KEY("JOURNAL_RC_KILLER3_AR")))
			{
				if (Global_1357515 == -1)
				{
					func_1139(GET_HASH_KEY("JOURNAL_RC_KILLER4A_JN"), iParam1);
				}
				else
				{
					func_1139(GET_HASH_KEY("JOURNAL_RC_KILLER4B_JN"), iParam1);
				}
			}
			else if (Global_1357515 == -1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_KILLER4C_JN"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_KILLER4D_JN"), iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_SLVC1_AR"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_SLVC1_JN"), iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_SLVC2_AR"), iParam1);
				func_1139(GET_HASH_KEY("JOURNAL_RC_SLVC3A_AR"), iParam1);
			}
			else if (func_1141(136))
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_SLVC2B_JN"), iParam1);
				func_1139(GET_HASH_KEY("JOURNAL_RC_SLVC3C_JN"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_SLVC2A_JN"), iParam1);
				func_1139(GET_HASH_KEY("JOURNAL_RC_SLVC3A_JN"), iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_STRAUSS3_3A"), iParam1);
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_STRAUSS3_3B"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_STRAUSS3_3C"), iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (Global_1357515 == 1)
				{
					func_1139(GET_HASH_KEY("JOURNAL_RC_TREASURE1A_AR"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					func_1139(GET_HASH_KEY("JOURNAL_RC_TREASURE1B_AR"), iParam1);
				}
			}
			else if (Global_1357515 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_TREASURE1A_JN"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_TREASURE1B_JN"), iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_WARVET1_AR"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_WARVET1_JN"), iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_WARVET2_AR"), iParam1);
			}
			else if (func_1141(147))
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_WARVET2B_JN"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_WARVET2A_JN"), iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_WARVET3_AR"), iParam1);
			}
			else if (func_1141(148))
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_WARVET3B_JN"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_WARVET3A_JN"), iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_WARVET4_AR"), iParam1);
			}
			else if (func_1141(149))
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_WARVET4B_JN"), iParam1);
			}
			else
			{
				func_1139(GET_HASH_KEY("JOURNAL_RC_WARVET4A_JN"), iParam1);
			}
			break;
		default:
			break;
	}
}

int func_628(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	*uParam1 = GET_HASH_KEY("CSTP_PERSIST_ACROSS_STATES");
	*iParam2 = -1;
	iVar0 = func_304(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_551(iParam0);
			switch (iVar1)
			{
				case 0:
					return GET_HASH_KEY("CSTAG_FLOW_WNT1_POST");
				case 1:
					return GET_HASH_KEY("CSTAG_FLOW_WNT2_POST");
				case 2:
					return GET_HASH_KEY("CSTAG_FLOW_DST1_POST");
				case 3:
					return GET_HASH_KEY("CSTAG_FLOW_WNT4_POST");
				case 4:
					*uParam1 = -2060316038;
					return GET_HASH_KEY("CSTAG_FLOW_MUD1_POST");
				case 5:
					return GET_HASH_KEY("CSTAG_FLOW_MUD2_POST");
				case 6:
					return GET_HASH_KEY("CSTAG_FLOW_MUD3_POST");
				case 10:
					return GET_HASH_KEY("CSTAG_FLOW_REV1_POST");
				case 13:
					return GET_HASH_KEY("CSTAG_FLOW_SEN1_POST");
				case 15:
					return GET_HASH_KEY("CSTAG_FLOW_HNT1_POST");
				case 8:
					return GET_HASH_KEY("CSTAG_FLOW_MRY1_POST");
				case 25:
					return GET_HASH_KEY("CSTAG_FLOW_MUD6_POST");
				case 14:
					return GET_HASH_KEY("CSTAG_FLOW_MUD4_POST");
				case 7:
					return GET_HASH_KEY("CSTAG_FLOW_BOU1_POST");
				case 9:
					if (func_679(Global_1835011[9 /*74*/].f_1) == 0)
					{
						return GET_HASH_KEY("CSTAG_FLOW_SAL1_SPLITUP_POST");
					}
					else
					{
						return GET_HASH_KEY("CSTAG_FLOW_SAL1_POST");
					}
					break;
				case 11:
					return GET_HASH_KEY("CSTAG_FLOW_UTP1_POST");
				case 12:
					return GET_HASH_KEY("CSTAG_FLOW_UTP2_POST");
				case 16:
					return GET_HASH_KEY("CSTAG_FLOW_FUD1_POST");
				case 17:
					return GET_HASH_KEY("CSTAG_FLOW_GRY1_POST");
				case 53:
					return GET_HASH_KEY("CSTAG_FLOW_CRN1_POST");
				case 18:
					return GET_HASH_KEY("CSTAG_FLOW_BRT1_POST");
				case 19:
					return GET_HASH_KEY("CSTAG_FLOW_GRY2_POST");
				case 20:
					return GET_HASH_KEY("CSTAG_FLOW_BRT2_POST");
				case 22:
					return GET_HASH_KEY("CSTAG_FLOW_TRE1_POST");
				case 23:
					return GET_HASH_KEY("CSTAG_FLOW_DST3_POST");
				case 24:
					return GET_HASH_KEY("CSTAG_FLOW_MUD5_POST");
				case 21:
					return GET_HASH_KEY("CSTAG_FLOW_GRY3_POST");
				case 26:
					return GET_HASH_KEY("CSTAG_FLOW_BRT3_POST");
				case 27:
					return GET_HASH_KEY("CSTAG_FLOW_MOB1_POST");
				case 28:
					return GET_HASH_KEY("CSTAG_FLOW_MOB2_POST");
				case 29:
					return GET_HASH_KEY("CSTAG_FLOW_MOB3_POST");
				case 30:
					return GET_HASH_KEY("CSTAG_FLOW_MOB4_POST");
				case 31:
					return GET_HASH_KEY("CSTAG_FLOW_MOB5_POST");
				case 32:
					return GET_HASH_KEY("CSTAG_FLOW_ODR4_POST");
				case 33:
					return GET_HASH_KEY("CSTAG_FLOW_IND1_POST");
				case 34:
					return GET_HASH_KEY("CSTAG_FLOW_IND3_POST");
				case 35:
					return GET_HASH_KEY("CSTAG_FLOW_SUS1_POST");
				case 36:
					return GET_HASH_KEY("CSTAG_FLOW_MRY3_POST");
				case 37:
					return GET_HASH_KEY("CSTAG_FLOW_SDN1_POST");
				case 38:
					return GET_HASH_KEY("CSTAG_FLOW_GUA1_POST");
				case 39:
					return GET_HASH_KEY("CSTAG_FLOW_GUA2_POST");
				case 40:
					return GET_HASH_KEY("CSTAG_FLOW_FUS1_POST");
				case 41:
					return GET_HASH_KEY("CSTAG_FLOW_FUS2_POST");
				case 42:
					return GET_HASH_KEY("CSTAG_FLOW_SMG2_POST");
				case 43:
					return GET_HASH_KEY("CSTAG_FLOW_GUA3_POST");
				case 44:
					return GET_HASH_KEY("CSTAG_FLOW_GNG1_POST");
				case 45:
					ret