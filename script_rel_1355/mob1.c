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
	struct<132> Local_14 = { 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 3, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 4 } ;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	int iLocal_150 = 0;
	vector3 vLocal_151 = { 0f, 0f, 0f };
	var uLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_173[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_182[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_191[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_199[4] = { 0, 0, 0, 0 };
	int iLocal_204[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_215[4] = { 0, 0, 0, 0 };
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_252[5] = { 0, 0, 0, 0, 0 };
	int iLocal_258 = 0;
	int iLocal_259[4] = { 0, 0, 0, 0 };
	int iLocal_264[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_283[2] = { 0, 0 };
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290[1] = { 0 };
	int iLocal_292[2] = { 0, 0 };
	var uLocal_295[2] = { 0, 0 };
	var uLocal_298[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	var uLocal_312[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_320[3] = { 0, 0, 0 };
	var uLocal_324 = 7;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	var uLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	int iLocal_423 = 0;
	int iLocal_424 = 0;
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429 = 0;
	int iLocal_430 = 0;
	int iLocal_431 = 0;
	int iLocal_432 = 0;
	int iLocal_433 = 0;
	int iLocal_434 = 0;
	int iLocal_435 = 0;
	int iLocal_436 = 0;
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	int iLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	int iLocal_449 = 0;
	int iLocal_450 = 0;
	int iLocal_451 = 0;
	int iLocal_452 = 0;
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	int iLocal_460 = 0;
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	int iLocal_463[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_470[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	int iLocal_484 = 0;
	int iLocal_485[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_492[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_505 = 0;
	int iLocal_506 = 0;
	int iLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 3;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 3;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	int iLocal_517 = 0;
	int iLocal_518 = 0;
	int iLocal_519 = 0;
	int iLocal_520 = 0;
	var uLocal_521[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_528[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_535[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_544 = 3;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 3;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	int iLocal_553 = 0;
	int iLocal_554 = 0;
	int iLocal_555 = 0;
	int iLocal_556 = 0;
	int iLocal_557 = 0;
	int iLocal_558 = 0;
	int iLocal_559 = 0;
	int iLocal_560 = 0;
	int iLocal_561 = 0;
	int iLocal_562 = 0;
	int iLocal_563 = 0;
	int iLocal_564 = 0;
	float fLocal_565 = 0f;
	bool bLocal_566 = false;
	bool bLocal_567 = false;
	bool bLocal_568 = false;
	bool bLocal_569 = false;
	bool bLocal_570 = false;
	bool bLocal_571 = false;
	bool bLocal_572 = false;
	bool bLocal_573 = false;
	bool bLocal_574 = false;
	bool bLocal_575 = false;
	bool bLocal_576 = false;
	bool bLocal_577 = false;
	bool bLocal_578 = false;
	bool bLocal_579 = false;
	bool bLocal_580 = false;
	bool bLocal_581 = false;
	bool bLocal_582 = false;
	bool bLocal_583 = false;
	bool bLocal_584 = false;
	bool bLocal_585 = false;
	bool bLocal_586 = false;
	bool bLocal_587 = false;
	var uLocal_588[3] = { 0, 0, 0 };
	bool bLocal_592 = false;
	bool bLocal_593 = false;
	bool bLocal_594 = false;
	var uLocal_595[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_601 = false;
	bool bLocal_602 = false;
	bool bLocal_603 = false;
	bool bLocal_604 = false;
	bool bLocal_605 = false;
	bool bLocal_606 = false;
	bool bLocal_607 = false;
	bool bLocal_608 = false;
	bool bLocal_609 = false;
	bool bLocal_610 = false;
	bool bLocal_611 = false;
	bool bLocal_612 = false;
	bool bLocal_613 = false;
	bool bLocal_614 = false;
	bool bLocal_615 = false;
	bool bLocal_616 = false;
	bool bLocal_617 = false;
	bool bLocal_618 = false;
	bool bLocal_619 = false;
	bool bLocal_620 = false;
	bool bLocal_621 = false;
	bool bLocal_622 = false;
	bool bLocal_623 = false;
	bool bLocal_624 = false;
	bool bLocal_625 = false;
	bool bLocal_626 = false;
	bool bLocal_627 = false;
	bool bLocal_628 = false;
	bool bLocal_629 = false;
	bool bLocal_630 = false;
	bool bLocal_631 = false;
	vector3 vLocal_632 = { 0f, 0f, 0f };
	vector3 vLocal_635 = { 0f, 0f, 0f };
	vector3 vLocal_638 = { 0f, 0f, 0f };
	vector3 vLocal_641 = { 0f, 0f, 0f };
	vector3 vLocal_644 = { 0f, 0f, 0f };
	vector3 vLocal_647 = { 0f, 0f, 0f };
	vector3 vLocal_650 = { 0f, 0f, 0f };
	vector3 vLocal_653 = { 0f, 0f, 0f };
	vector3 vLocal_656 = { 0f, 0f, 0f };
	vector3 vLocal_659 = { 0f, 0f, 0f };
	vector3 vLocal_662 = { 0f, 0f, 0f };
	vector3 vLocal_665 = { 0f, 0f, 0f };
	var uLocal_668 = 0;
	vector3 vLocal_669 = { 0f, 0f, 0f };
	vector3 vLocal_672 = { 0f, 0f, 0f };
	vector3 vLocal_675 = { 0f, 0f, 0f };
	vector3 vLocal_678 = { 0f, 0f, 0f };
	vector3 vLocal_681 = { 0f, 0f, 0f };
	vector3 vLocal_684 = { 0f, 0f, 0f };
	char cLocal_687[32] = "";
	var uLocal_691[23] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_715[19] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_735[2] = { 0, 0 };
	int iLocal_738 = 0;
	int iLocal_739 = 0;
	int iLocal_740 = 0;
	int iLocal_741 = 0;
	int iLocal_742 = 0;
	int iLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	vector3 vLocal_750[1] = {{ 0f, 0f, 0f } };
	var uLocal_754 = 2;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	vector3 vLocal_761[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	vector3 vLocal_786[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	vector3 vLocal_826[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_839[7] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885[1] = { 0 };
	var uLocal_887[2] = { 0, 0 };
	int iLocal_890 = 0;
	int iLocal_891 = 0;
	int iLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = -1;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 1097859072;
	var uLocal_911 = 1000;
	var uLocal_912 = 1067450368;
	var uLocal_913 = 5000;
	var uLocal_914 = 42;
	var uLocal_915 = 1103626240;
	var uLocal_916 = 1077936128;
	var uLocal_917 = 1106247680;
	var uLocal_918 = 1103101952;
	var uLocal_919 = 1097859072;
	var uLocal_920 = 1103626240;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = -1;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 1097859072;
	var uLocal_939 = 1000;
	var uLocal_940 = 1067450368;
	var uLocal_941 = 5000;
	var uLocal_942 = 42;
	var uLocal_943 = 1103626240;
	var uLocal_944 = 1077936128;
	var uLocal_945 = 1106247680;
	var uLocal_946 = 1103101952;
	var uLocal_947 = 1097859072;
	var uLocal_948 = 1103626240;
	int iLocal_949 = 0;
	struct<16> Local_950 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 1065353216;
	var uLocal_971 = 1065353216;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 1065353216;
	var uLocal_976 = 1065353216;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 1065353216;
	var uLocal_981 = 1065353216;
	var uLocal_982 = 0;
	var uLocal_983 = 1040187392;
	var uLocal_984 = 1040187392;
	var uLocal_985 = -1;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = -1082130432;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	struct<38> Local_1004 = { 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 1065353216;
	var uLocal_1047 = 1065353216;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 1065353216;
	var uLocal_1052 = 1065353216;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 1065353216;
	var uLocal_1057 = 1065353216;
	var uLocal_1058 = 0;
	var uLocal_1059 = 1040187392;
	var uLocal_1060 = 1040187392;
	var uLocal_1061 = -1;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = -1082130432;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	struct<14> Local_1080 = { 0, 0, -1, 0, 0, 0, 0, -1, -1082130432, 0, 0, 0, -1082130432, 1 } ;
	var uLocal_1094 = -1082130432;
	vector3 vLocal_1095 = { 0f, 0f, 0f };
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	struct<22> Local_1107 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_1129 = 3;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	struct<22> Local_1132 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_1154 = 3;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	int iLocal_1157 = 0;
	var uLocal_1158 = 0;
	struct<10> Local_1159 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1169 = 7;
	var uLocal_1170[1] = { 0 };
	int iLocal_1172 = 0;
	int iLocal_1173 = 0;
	int iLocal_1174 = 0;
	int iLocal_1175 = 0;
	int iLocal_1176 = 0;
	var uLocal_1177 = -1;
	var uLocal_1178 = 0;
	var uLocal_1179 = -1;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = -1;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 1073741824;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 1;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	struct<17> Local_1197[1];
	int iLocal_1215 = 0;
	var uLocal_1216 = -1;
	var uLocal_1217 = 0;
	var uLocal_1218 = -1;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = -1;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 1073741824;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 1;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	struct<17> Local_1236[1];
	int iLocal_1254 = 0;
	var uLocal_1255 = -1;
	var uLocal_1256 = 0;
	var uLocal_1257 = -1;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = -1;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 1073741824;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 1;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	struct<17> Local_1275[2];
	int iLocal_1310 = 0;
	var uLocal_1311 = -1;
	var uLocal_1312 = 0;
	var uLocal_1313 = -1;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = -1;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 1073741824;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 1;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	struct<17> Local_1331[2];
	int iLocal_1366 = 0;
	var uLocal_1367 = -1;
	var uLocal_1368 = 0;
	var uLocal_1369 = -1;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = -1;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 1073741824;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 1;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	struct<17> Local_1387[2];
	int iLocal_1422 = 0;
	var uLocal_1423 = -1;
	var uLocal_1424 = 0;
	var uLocal_1425 = -1;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = -1;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 1073741824;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 1;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	struct<17> Local_1443[2];
	int iLocal_1478 = 0;
	var uLocal_1479 = -1;
	var uLocal_1480 = 0;
	var uLocal_1481 = -1;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = -1;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 1073741824;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 1;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	struct<17> Local_1499[2];
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1546[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1555[3] = { 0, 0, 0 };
	int iLocal_1559 = 0;
	bool bLocal_1560 = false;
	bool bLocal_1561 = false;
	bool bLocal_1562 = false;
	bool bLocal_1563 = false;
	bool bLocal_1564 = false;
	bool bLocal_1565 = false;
	bool bLocal_1566 = false;
	bool bLocal_1567 = false;
	int iLocal_1568 = 0;
	int iLocal_1569 = 0;
	var uLocal_1570[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	int iLocal_1591 = 0;
	int iLocal_1592[4] = { 0, 0, 0, 0 };
	int iLocal_1597 = 0;
	int iLocal_1598[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_1609 = false;
	int iLocal_1610 = 0;
	vector3 vLocal_1611 = { 0f, 0f, 0f };
	bool bLocal_1614 = false;
	bool bLocal_1615 = false;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 27;
	var uLocal_1621 = 8;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = -1;
	var uLocal_1643 = 8;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = -1;
	var uLocal_1665 = 8;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = -1;
	var uLocal_1687 = 8;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = -1;
	var uLocal_1709 = 8;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = -1;
	var uLocal_1731 = 8;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = -1;
	var uLocal_1753 = 8;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = -1;
	var uLocal_1775 = 8;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = -1;
	var uLocal_1797 = 8;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = -1;
	var uLocal_1819 = 8;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = -1;
	var uLocal_1841 = 8;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = -1;
	var uLocal_1863 = 8;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = -1;
	var uLocal_1885 = 8;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = -1;
	var uLocal_1907 = 8;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = -1;
	var uLocal_1929 = 8;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = -1;
	var uLocal_1951 = 8;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = -1;
	var uLocal_1973 = 8;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = -1;
	var uLocal_1995 = 8;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = -1;
	var uLocal_2017 = 8;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = -1;
	var uLocal_2039 = 8;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = -1;
	var uLocal_2061 = 8;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = -1;
	var uLocal_2083 = 8;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = -1;
	var uLocal_2105 = 8;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = -1;
	var uLocal_2127 = 8;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = -1;
	var uLocal_2149 = 8;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = -1;
	var uLocal_2171 = 8;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = -1;
	var uLocal_2193 = 8;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = -1;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 2;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 60;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 40;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 20;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 14;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 60;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 20;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 20;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 20;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 0;
	var uLocal_2943 = 0;
	var uLocal_2944 = 0;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 20;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = 0;
	var uLocal_2967 = 0;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 0;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 20;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 20;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 20;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 20;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = 0;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
	var uLocal_3240 = 0;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = 0;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = 0;
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 0;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 20;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 0;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 20;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 0;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 0;
	var uLocal_3373 = 0;
	var uLocal_3374 = 0;
	var uLocal_3375 = 0;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 0;
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = 0;
	var uLocal_3390 = 0;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = 0;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = 0;
	var uLocal_3401 = 0;
	var uLocal_3402 = 0;
	var uLocal_3403 = 0;
	var uLocal_3404 = 0;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 0;
	var uLocal_3411 = 0;
	var uLocal_3412 = 0;
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
	var uLocal_3415 = 0;
	var uLocal_3416 = 0;
	var uLocal_3417 = 0;
	var uLocal_3418 = 0;
	var uLocal_3419 = 0;
	var uLocal_3420 = 20;
	var uLocal_3421 = 0;
	var uLocal_3422 = 0;
	var uLocal_3423 = 0;
	var uLocal_3424 = 0;
	var uLocal_3425 = 0;
	var uLocal_3426 = 0;
	var uLocal_3427 = 0;
	var uLocal_3428 = 0;
	var uLocal_3429 = 0;
	var uLocal_3430 = 0;
	var uLocal_3431 = 0;
	var uLocal_3432 = 0;
	var uLocal_3433 = 0;
	var uLocal_3434 = 0;
	var uLocal_3435 = 0;
	var uLocal_3436 = 0;
	var uLocal_3437 = 0;
	var uLocal_3438 = 0;
	var uLocal_3439 = 0;
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = 0;
	var uLocal_3443 = 0;
	var uLocal_3444 = 0;
	var uLocal_3445 = 0;
	var uLocal_3446 = 0;
	var uLocal_3447 = 0;
	var uLocal_3448 = 0;
	var uLocal_3449 = 0;
	var uLocal_3450 = 0;
	var uLocal_3451 = 0;
	var uLocal_3452 = 0;
	var uLocal_3453 = 0;
	var uLocal_3454 = 0;
	var uLocal_3455 = 0;
	var uLocal_3456 = 0;
	var uLocal_3457 = 0;
	var uLocal_3458 = 0;
	var uLocal_3459 = 0;
	var uLocal_3460 = 0;
	var uLocal_3461 = 0;
	var uLocal_3462 = 0;
	var uLocal_3463 = 0;
	var uLocal_3464 = 0;
	var uLocal_3465 = 0;
	var uLocal_3466 = 0;
	var uLocal_3467 = 0;
	var uLocal_3468 = 0;
	var uLocal_3469 = 0;
	var uLocal_3470 = 0;
	var uLocal_3471 = 0;
	var uLocal_3472 = 0;
	var uLocal_3473 = 0;
	var uLocal_3474 = 0;
	var uLocal_3475 = 0;
	var uLocal_3476 = 0;
	var uLocal_3477 = 0;
	var uLocal_3478 = 0;
	var uLocal_3479 = 0;
	var uLocal_3480 = 0;
	var uLocal_3481 = 0;
	var uLocal_3482 = 0;
	var uLocal_3483 = 0;
	var uLocal_3484 = 0;
	var uLocal_3485 = 0;
	var uLocal_3486 = 0;
	var uLocal_3487 = 20;
	var uLocal_3488 = 0;
	var uLocal_3489 = 0;
	var uLocal_3490 = 0;
	var uLocal_3491 = 0;
	var uLocal_3492 = 0;
	var uLocal_3493 = 0;
	var uLocal_3494 = 0;
	var uLocal_3495 = 0;
	var uLocal_3496 = 0;
	var uLocal_3497 = 0;
	var uLocal_3498 = 0;
	var uLocal_3499 = 0;
	var uLocal_3500 = 0;
	var uLocal_3501 = 0;
	var uLocal_3502 = 0;
	var uLocal_3503 = 0;
	var uLocal_3504 = 0;
	var uLocal_3505 = 0;
	var uLocal_3506 = 0;
	var uLocal_3507 = 0;
	var uLocal_3508 = 0;
	var uLocal_3509 = 0;
	var uLocal_3510 = 0;
	var uLocal_3511 = 0;
	var uLocal_3512 = 0;
	var uLocal_3513 = 0;
	var uLocal_3514 = 0;
	var uLocal_3515 = 0;
	var uLocal_3516 = 0;
	var uLocal_3517 = 0;
	var uLocal_3518 = 0;
	var uLocal_3519 = 0;
	var uLocal_3520 = 0;
	var uLocal_3521 = 0;
	var uLocal_3522 = 0;
	var uLocal_3523 = 0;
	var uLocal_3524 = 0;
	var uLocal_3525 = 0;
	var uLocal_3526 = 0;
	var uLocal_3527 = 0;
	var uLocal_3528 = 0;
	var uLocal_3529 = 0;
	var uLocal_3530 = 0;
	var uLocal_3531 = 0;
	var uLocal_3532 = 0;
	var uLocal_3533 = 0;
	var uLocal_3534 = 0;
	var uLocal_3535 = 0;
	var uLocal_3536 = 0;
	var uLocal_3537 = 0;
	var uLocal_3538 = 0;
	var uLocal_3539 = 0;
	var uLocal_3540 = 0;
	var uLocal_3541 = 0;
	var uLocal_3542 = 0;
	var uLocal_3543 = 0;
	var uLocal_3544 = 0;
	var uLocal_3545 = 0;
	var uLocal_3546 = 0;
	var uLocal_3547 = 0;
	var uLocal_3548 = 0;
	var uLocal_3549 = 0;
	var uLocal_3550 = 0;
	var uLocal_3551 = 0;
	var uLocal_3552 = 0;
	var uLocal_3553 = 0;
	var uLocal_3554 = 20;
	var uLocal_3555 = 0;
	var uLocal_3556 = 0;
	var uLocal_3557 = 0;
	var uLocal_3558 = 0;
	var uLocal_3559 = 0;
	var uLocal_3560 = 0;
	var uLocal_3561 = 0;
	var uLocal_3562 = 0;
	var uLocal_3563 = 0;
	var uLocal_3564 = 0;
	var uLocal_3565 = 0;
	var uLocal_3566 = 0;
	var uLocal_3567 = 0;
	var uLocal_3568 = 0;
	var uLocal_3569 = 0;
	var uLocal_3570 = 0;
	var uLocal_3571 = 0;
	var uLocal_3572 = 0;
	var uLocal_3573 = 0;
	var uLocal_3574 = 0;
	var uLocal_3575 = 0;
	var uLocal_3576 = 0;
	var uLocal_3577 = 0;
	var uLocal_3578 = 0;
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	var uLocal_3581 = 0;
	var uLocal_3582 = 0;
	var uLocal_3583 = 0;
	var uLocal_3584 = 0;
	var uLocal_3585 = 0;
	var uLocal_3586 = 0;
	var uLocal_3587 = 0;
	var uLocal_3588 = 0;
	var uLocal_3589 = 0;
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	var uLocal_3595 = 0;
	var uLocal_3596 = 0;
	var uLocal_3597 = 0;
	var uLocal_3598 = 0;
	var uLocal_3599 = 0;
	var uLocal_3600 = 0;
	var uLocal_3601 = 0;
	var uLocal_3602 = 0;
	var uLocal_3603 = 0;
	var uLocal_3604 = 0;
	var uLocal_3605 = 0;
	var uLocal_3606 = 0;
	var uLocal_3607 = 0;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
	var uLocal_3614 = 0;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	var uLocal_3620 = 0;
	var uLocal_3621 = 20;
	var uLocal_3622 = 0;
	var uLocal_3623 = 0;
	var uLocal_3624 = 0;
	var uLocal_3625 = 0;
	var uLocal_3626 = 0;
	var uLocal_3627 = 0;
	var uLocal_3628 = 0;
	var uLocal_3629 = 0;
	var uLocal_3630 = 0;
	var uLocal_3631 = 0;
	var uLocal_3632 = 0;
	var uLocal_3633 = 0;
	var uLocal_3634 = 0;
	var uLocal_3635 = 0;
	var uLocal_3636 = 0;
	var uLocal_3637 = 0;
	var uLocal_3638 = 0;
	var uLocal_3639 = 0;
	var uLocal_3640 = 0;
	var uLocal_3641 = 0;
	var uLocal_3642 = 0;
	var uLocal_3643 = 0;
	var uLocal_3644 = 0;
	var uLocal_3645 = 0;
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	var uLocal_3649 = 0;
	var uLocal_3650 = 0;
	var uLocal_3651 = 0;
	var uLocal_3652 = 0;
	var uLocal_3653 = 0;
	var uLocal_3654 = 0;
	var uLocal_3655 = 0;
	var uLocal_3656 = 0;
	var uLocal_3657 = 0;
	var uLocal_3658 = 0;
	var uLocal_3659 = 0;
	var uLocal_3660 = 0;
	var uLocal_3661 = 0;
	var uLocal_3662 = 0;
	var uLocal_3663 = 0;
	var uLocal_3664 = 0;
	var uLocal_3665 = 0;
	var uLocal_3666 = 0;
	var uLocal_3667 = 0;
	var uLocal_3668 = 0;
	var uLocal_3669 = 0;
	var uLocal_3670 = 0;
	var uLocal_3671 = 0;
	var uLocal_3672 = 0;
	var uLocal_3673 = 0;
	var uLocal_3674 = 0;
	var uLocal_3675 = 0;
	var uLocal_3676 = 0;
	var uLocal_3677 = 0;
	var uLocal_3678 = 0;
	var uLocal_3679 = 0;
	var uLocal_3680 = 0;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	var uLocal_3683 = 0;
	var uLocal_3684 = 0;
	var uLocal_3685 = 0;
	var uLocal_3686 = 0;
	var uLocal_3687 = 0;
	var uLocal_3688 = 20;
	var uLocal_3689 = 0;
	var uLocal_3690 = 0;
	var uLocal_3691 = 0;
	var uLocal_3692 = 0;
	var uLocal_3693 = 0;
	var uLocal_3694 = 0;
	var uLocal_3695 = 0;
	var uLocal_3696 = 0;
	var uLocal_3697 = 0;
	var uLocal_3698 = 0;
	var uLocal_3699 = 0;
	var uLocal_3700 = 0;
	var uLocal_3701 = 0;
	var uLocal_3702 = 0;
	var uLocal_3703 = 0;
	var uLocal_3704 = 0;
	var uLocal_3705 = 0;
	var uLocal_3706 = 0;
	var uLocal_3707 = 0;
	var uLocal_3708 = 0;
	var uLocal_3709 = 0;
	var uLocal_3710 = 0;
	var uLocal_3711 = 0;
	var uLocal_3712 = 0;
	var uLocal_3713 = 0;
	var uLocal_3714 = 0;
	var uLocal_3715 = 0;
	var uLocal_3716 = 0;
	var uLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = 0;
	var uLocal_3721 = 0;
	var uLocal_3722 = 0;
	var uLocal_3723 = 0;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	var uLocal_3729 = 0;
	var uLocal_3730 = 0;
	var uLocal_3731 = 0;
	var uLocal_3732 = 0;
	var uLocal_3733 = 0;
	var uLocal_3734 = 0;
	var uLocal_3735 = 0;
	var uLocal_3736 = 0;
	var uLocal_3737 = 0;
	var uLocal_3738 = 0;
	var uLocal_3739 = 0;
	var uLocal_3740 = 0;
	var uLocal_3741 = 0;
	var uLocal_3742 = 0;
	var uLocal_3743 = 0;
	var uLocal_3744 = 0;
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	var uLocal_3747 = 0;
	var uLocal_3748 = 0;
	var uLocal_3749 = 0;
	var uLocal_3750 = 0;
	var uLocal_3751 = 0;
	var uLocal_3752 = 0;
	var uLocal_3753 = 0;
	var uLocal_3754 = 0;
	var uLocal_3755 = 20;
	var uLocal_3756 = 0;
	var uLocal_3757 = 0;
	var uLocal_3758 = 0;
	var uLocal_3759 = 0;
	var uLocal_3760 = 0;
	var uLocal_3761 = 0;
	var uLocal_3762 = 0;
	var uLocal_3763 = 0;
	var uLocal_3764 = 0;
	var uLocal_3765 = 0;
	var uLocal_3766 = 0;
	var uLocal_3767 = 0;
	var uLocal_3768 = 0;
	var uLocal_3769 = 0;
	var uLocal_3770 = 0;
	var uLocal_3771 = 0;
	var uLocal_3772 = 0;
	var uLocal_3773 = 0;
	var uLocal_3774 = 0;
	var uLocal_3775 = 0;
	var uLocal_3776 = 0;
	var uLocal_3777 = 0;
	var uLocal_3778 = 0;
	var uLocal_3779 = 0;
	var uLocal_3780 = 0;
	var uLocal_3781 = 0;
	var uLocal_3782 = 0;
	var uLocal_3783 = 0;
	var uLocal_3784 = 0;
	var uLocal_3785 = 0;
	var uLocal_3786 = 0;
	var uLocal_3787 = 0;
	var uLocal_3788 = 0;
	var uLocal_3789 = 0;
	var uLocal_3790 = 0;
	var uLocal_3791 = 0;
	var uLocal_3792 = 0;
	var uLocal_3793 = 0;
	var uLocal_3794 = 0;
	var uLocal_3795 = 0;
	var uLocal_3796 = 0;
	var uLocal_3797 = 0;
	var uLocal_3798 = 0;
	var uLocal_3799 = 0;
	var uLocal_3800 = 0;
	var uLocal_3801 = 0;
	var uLocal_3802 = 0;
	var uLocal_3803 = 0;
	var uLocal_3804 = 0;
	var uLocal_3805 = 0;
	var uLocal_3806 = 0;
	var uLocal_3807 = 0;
	var uLocal_3808 = 0;
	var uLocal_3809 = 0;
	var uLocal_3810 = 0;
	var uLocal_3811 = 0;
	var uLocal_3812 = 0;
	var uLocal_3813 = 0;
	var uLocal_3814 = 0;
	var uLocal_3815 = 0;
	var uLocal_3816 = 0;
	var uLocal_3817 = 0;
	var uLocal_3818 = 0;
	var uLocal_3819 = 0;
	var uLocal_3820 = 0;
	var uLocal_3821 = 0;
	var uLocal_3822 = 20;
	var uLocal_3823 = 0;
	var uLocal_3824 = 0;
	var uLocal_3825 = 0;
	var uLocal_3826 = 0;
	var uLocal_3827 = 0;
	var uLocal_3828 = 0;
	var uLocal_3829 = 0;
	var uLocal_3830 = 0;
	var uLocal_3831 = 0;
	var uLocal_3832 = 0;
	var uLocal_3833 = 0;
	var uLocal_3834 = 0;
	var uLocal_3835 = 0;
	var uLocal_3836 = 0;
	var uLocal_3837 = 0;
	var uLocal_3838 = 0;
	var uLocal_3839 = 0;
	var uLocal_3840 = 0;
	var uLocal_3841 = 0;
	var uLocal_3842 = 0;
	var uLocal_3843 = 0;
	var uLocal_3844 = 0;
	var uLocal_3845 = 0;
	var uLocal_3846 = 0;
	var uLocal_3847 = 0;
	var uLocal_3848 = 0;
	var uLocal_3849 = 0;
	var uLocal_3850 = 0;
	var uLocal_3851 = 0;
	var uLocal_3852 = 0;
	var uLocal_3853 = 0;
	var uLocal_3854 = 0;
	var uLocal_3855 = 0;
	var uLocal_3856 = 0;
	var uLocal_3857 = 0;
	var uLocal_3858 = 0;
	var uLocal_3859 = 0;
	var uLocal_3860 = 0;
	var uLocal_3861 = 0;
	var uLocal_3862 = 0;
	var uLocal_3863 = 0;
	var uLocal_3864 = 0;
	var uLocal_3865 = 0;
	var uLocal_3866 = 0;
	var uLocal_3867 = 0;
	var uLocal_3868 = 0;
	var uLocal_3869 = 0;
	var uLocal_3870 = 0;
	var uLocal_3871 = 0;
	var uLocal_3872 = 0;
	var uLocal_3873 = 0;
	var uLocal_3874 = 0;
	var uLocal_3875 = 0;
	var uLocal_3876 = 0;
	var uLocal_3877 = 0;
	var uLocal_3878 = 0;
	var uLocal_3879 = 0;
	var uLocal_3880 = 0;
	var uLocal_3881 = 0;
	var uLocal_3882 = 0;
	var uLocal_3883 = 0;
	var uLocal_3884 = 0;
	var uLocal_3885 = 0;
	var uLocal_3886 = 0;
	var uLocal_3887 = 0;
	var uLocal_3888 = 0;
	var uLocal_3889 = 20;
	var uLocal_3890 = 0;
	var uLocal_3891 = 0;
	var uLocal_3892 = 0;
	var uLocal_3893 = 0;
	var uLocal_3894 = 0;
	var uLocal_3895 = 0;
	var uLocal_3896 = 0;
	var uLocal_3897 = 0;
	var uLocal_3898 = 0;
	var uLocal_3899 = 0;
	var uLocal_3900 = 0;
	var uLocal_3901 = 0;
	var uLocal_3902 = 0;
	var uLocal_3903 = 0;
	var uLocal_3904 = 0;
	var uLocal_3905 = 0;
	var uLocal_3906 = 0;
	var uLocal_3907 = 0;
	var uLocal_3908 = 0;
	var uLocal_3909 = 0;
	var uLocal_3910 = 0;
	var uLocal_3911 = 0;
	var uLocal_3912 = 0;
	var uLocal_3913 = 0;
	var uLocal_3914 = 0;
	var uLocal_3915 = 0;
	var uLocal_3916 = 0;
	var uLocal_3917 = 0;
	var uLocal_3918 = 0;
	var uLocal_3919 = 0;
	var uLocal_3920 = 0;
	var uLocal_3921 = 0;
	var uLocal_3922 = 0;
	var uLocal_3923 = 0;
	var uLocal_3924 = 0;
	var uLocal_3925 = 0;
	var uLocal_3926 = 0;
	var uLocal_3927 = 0;
	var uLocal_3928 = 0;
	var uLocal_3929 = 0;
	var uLocal_3930 = 0;
	var uLocal_3931 = 0;
	var uLocal_3932 = 0;
	var uLocal_3933 = 0;
	var uLocal_3934 = 0;
	var uLocal_3935 = 0;
	var uLocal_3936 = 0;
	var uLocal_3937 = 0;
	var uLocal_3938 = 0;
	var uLocal_3939 = 0;
	var uLocal_3940 = 0;
	var uLocal_3941 = 0;
	var uLocal_3942 = 0;
	var uLocal_3943 = 0;
	var uLocal_3944 = 0;
	var uLocal_3945 = 0;
	var uLocal_3946 = 0;
	var uLocal_3947 = 0;
	var uLocal_3948 = 0;
	var uLocal_3949 = 0;
	var uLocal_3950 = 0;
	var uLocal_3951 = 0;
	var uLocal_3952 = 0;
	var uLocal_3953 = 0;
	var uLocal_3954 = 0;
	var uLocal_3955 = 0;
	var uLocal_3956 = 20;
	var uLocal_3957 = 0;
	var uLocal_3958 = 0;
	var uLocal_3959 = 0;
	var uLocal_3960 = 0;
	var uLocal_3961 = 0;
	var uLocal_3962 = 0;
	var uLocal_3963 = 0;
	var uLocal_3964 = 0;
	var uLocal_3965 = 0;
	var uLocal_3966 = 0;
	var uLocal_3967 = 0;
	var uLocal_3968 = 0;
	var uLocal_3969 = 0;
	var uLocal_3970 = 0;
	var uLocal_3971 = 0;
	var uLocal_3972 = 0;
	var uLocal_3973 = 0;
	var uLocal_3974 = 0;
	var uLocal_3975 = 0;
	var uLocal_3976 = 0;
	var uLocal_3977 = 0;
	var uLocal_3978 = 0;
	var uLocal_3979 = 0;
	var uLocal_3980 = 0;
	var uLocal_3981 = 0;
	var uLocal_3982 = 0;
	var uLocal_3983 = 0;
	var uLocal_3984 = 0;
	var uLocal_3985 = 0;
	var uLocal_3986 = 0;
	var uLocal_3987 = 0;
	var uLocal_3988 = 0;
	var uLocal_3989 = 0;
	var uLocal_3990 = 0;
	var uLocal_3991 = 0;
	var uLocal_3992 = 0;
	var uLocal_3993 = 0;
	var uLocal_3994 = 0;
	var uLocal_3995 = 0;
	var uLocal_3996 = 0;
	var uLocal_3997 = 0;
	var uLocal_3998 = 0;
	var uLocal_3999 = 0;
	var uLocal_4000 = 0;
	var uLocal_4001 = 0;
	var uLocal_4002 = 0;
	var uLocal_4003 = 0;
	var uLocal_4004 = 0;
	var uLocal_4005 = 0;
	var uLocal_4006 = 0;
	var uLocal_4007 = 0;
	var uLocal_4008 = 0;
	var uLocal_4009 = 0;
	var uLocal_4010 = 0;
	var uLocal_4011 = 0;
	var uLocal_4012 = 0;
	var uLocal_4013 = 0;
	var uLocal_4014 = 0;
	var uLocal_4015 = 0;
	var uLocal_4016 = 0;
	var uLocal_4017 = 0;
	var uLocal_4018 = 0;
	var uLocal_4019 = 0;
	var uLocal_4020 = 0;
	var uLocal_4021 = 0;
	var uLocal_4022 = 0;
	var uLocal_4023 = 20;
	var uLocal_4024 = 0;
	var uLocal_4025 = 0;
	var uLocal_4026 = 0;
	var uLocal_4027 = 0;
	var uLocal_4028 = 0;
	var uLocal_4029 = 0;
	var uLocal_4030 = 0;
	var uLocal_4031 = 0;
	var uLocal_4032 = 0;
	var uLocal_4033 = 0;
	var uLocal_4034 = 0;
	var uLocal_4035 = 0;
	var uLocal_4036 = 0;
	var uLocal_4037 = 0;
	var uLocal_4038 = 0;
	var uLocal_4039 = 0;
	var uLocal_4040 = 0;
	var uLocal_4041 = 0;
	var uLocal_4042 = 0;
	var uLocal_4043 = 0;
	var uLocal_4044 = 0;
	var uLocal_4045 = 0;
	var uLocal_4046 = 0;
	var uLocal_4047 = 0;
	var uLocal_4048 = 0;
	var uLocal_4049 = 0;
	var uLocal_4050 = 0;
	var uLocal_4051 = 0;
	var uLocal_4052 = 0;
	var uLocal_4053 = 0;
	var uLocal_4054 = 0;
	var uLocal_4055 = 0;
	var uLocal_4056 = 0;
	var uLocal_4057 = 0;
	var uLocal_4058 = 0;
	var uLocal_4059 = 0;
	var uLocal_4060 = 0;
	var uLocal_4061 = 0;
	var uLocal_4062 = 0;
	var uLocal_4063 = 0;
	var uLocal_4064 = 0;
	var uLocal_4065 = 0;
	var uLocal_4066 = 0;
	var uLocal_4067 = 0;
	var uLocal_4068 = 0;
	var uLocal_4069 = 0;
	var uLocal_4070 = 0;
	var uLocal_4071 = 0;
	var uLocal_4072 = 0;
	var uLocal_4073 = 0;
	var uLocal_4074 = 0;
	var uLocal_4075 = 0;
	var uLocal_4076 = 0;
	var uLocal_4077 = 0;
	var uLocal_4078 = 0;
	var uLocal_4079 = 0;
	var uLocal_4080 = 0;
	var uLocal_4081 = 0;
	var uLocal_4082 = 0;
	var uLocal_4083 = 0;
	var uLocal_4084 = 0;
	var uLocal_4085 = 0;
	var uLocal_4086 = 0;
	var uLocal_4087 = 0;
	var uLocal_4088 = 0;
	var uLocal_4089 = 0;
	var uLocal_4090 = 20;
	var uLocal_4091 = 0;
	var uLocal_4092 = 0;
	var uLocal_4093 = 0;
	var uLocal_4094 = 0;
	var uLocal_4095 = 0;
	var uLocal_4096 = 0;
	var uLocal_4097 = 0;
	var uLocal_4098 = 0;
	var uLocal_4099 = 0;
	var uLocal_4100 = 0;
	var uLocal_4101 = 0;
	var uLocal_4102 = 0;
	var uLocal_4103 = 0;
	var uLocal_4104 = 0;
	var uLocal_4105 = 0;
	var uLocal_4106 = 0;
	var uLocal_4107 = 0;
	var uLocal_4108 = 0;
	var uLocal_4109 = 0;
	var uLocal_4110 = 0;
	var uLocal_4111 = 0;
	var uLocal_4112 = 0;
	var uLocal_4113 = 0;
	var uLocal_4114 = 0;
	var uLocal_4115 = 0;
	var uLocal_4116 = 0;
	var uLocal_4117 = 0;
	var uLocal_4118 = 0;
	var uLocal_4119 = 0;
	var uLocal_4120 = 0;
	var uLocal_4121 = 0;
	var uLocal_4122 = 0;
	var uLocal_4123 = 0;
	var uLocal_4124 = 0;
	var uLocal_4125 = 0;
	var uLocal_4126 = 0;
	var uLocal_4127 = 0;
	var uLocal_4128 = 0;
	var uLocal_4129 = 0;
	var uLocal_4130 = 0;
	var uLocal_4131 = 0;
	var uLocal_4132 = 0;
	var uLocal_4133 = 0;
	var uLocal_4134 = 0;
	var uLocal_4135 = 0;
	var uLocal_4136 = 0;
	var uLocal_4137 = 0;
	var uLocal_4138 = 0;
	var uLocal_4139 = 0;
	var uLocal_4140 = 0;
	var uLocal_4141 = 0;
	var uLocal_4142 = 0;
	var uLocal_4143 = 0;
	var uLocal_4144 = 0;
	var uLocal_4145 = 0;
	var uLocal_4146 = 0;
	var uLocal_4147 = 0;
	var uLocal_4148 = 0;
	var uLocal_4149 = 0;
	var uLocal_4150 = 0;
	var uLocal_4151 = 0;
	var uLocal_4152 = 0;
	var uLocal_4153 = 0;
	var uLocal_4154 = 0;
	var uLocal_4155 = 0;
	var uLocal_4156 = 0;
	var uLocal_4157 = 20;
	var uLocal_4158 = 0;
	var uLocal_4159 = 0;
	var uLocal_4160 = 0;
	var uLocal_4161 = 0;
	var uLocal_4162 = 0;
	var uLocal_4163 = 0;
	var uLocal_4164 = 0;
	var uLocal_4165 = 0;
	var uLocal_4166 = 0;
	var uLocal_4167 = 0;
	var uLocal_4168 = 0;
	var uLocal_4169 = 0;
	var uLocal_4170 = 0;
	var uLocal_4171 = 0;
	var uLocal_4172 = 0;
	var uLocal_4173 = 0;
	var uLocal_4174 = 0;
	var uLocal_4175 = 0;
	var uLocal_4176 = 0;
	var uLocal_4177 = 0;
	var uLocal_4178 = 0;
	var uLocal_4179 = 0;
	var uLocal_4180 = 0;
	var uLocal_4181 = 0;
	var uLocal_4182 = 0;
	var uLocal_4183 = 0;
	var uLocal_4184 = 0;
	var uLocal_4185 = 0;
	var uLocal_4186 = 0;
	var uLocal_4187 = 0;
	var uLocal_4188 = 0;
	var uLocal_4189 = 0;
	var uLocal_4190 = 0;
	var uLocal_4191 = 0;
	var uLocal_4192 = 0;
	var uLocal_4193 = 0;
	var uLocal_4194 = 0;
	var uLocal_4195 = 0;
	var uLocal_4196 = 0;
	var uLocal_4197 = 0;
	var uLocal_4198 = 0;
	var uLocal_4199 = 0;
	var uLocal_4200 = 0;
	var uLocal_4201 = 0;
	var uLocal_4202 = 0;
	var uLocal_4203 = 0;
	var uLocal_4204 = 0;
	var uLocal_4205 = 0;
	var uLocal_4206 = 0;
	var uLocal_4207 = 0;
	var uLocal_4208 = 0;
	var uLocal_4209 = 0;
	var uLocal_4210 = 0;
	var uLocal_4211 = 0;
	var uLocal_4212 = 0;
	var uLocal_4213 = 0;
	var uLocal_4214 = 0;
	var uLocal_4215 = 0;
	var uLocal_4216 = 0;
	var uLocal_4217 = 0;
	var uLocal_4218 = 0;
	var uLocal_4219 = 0;
	var uLocal_4220 = 0;
	var uLocal_4221 = 0;
	var uLocal_4222 = 0;
	var uLocal_4223 = 0;
	var uLocal_4224 = 20;
	var uLocal_4225 = 0;
	var uLocal_4226 = 0;
	var uLocal_4227 = 0;
	var uLocal_4228 = 0;
	var uLocal_4229 = 0;
	var uLocal_4230 = 0;
	var uLocal_4231 = 0;
	var uLocal_4232 = 0;
	var uLocal_4233 = 0;
	var uLocal_4234 = 0;
	var uLocal_4235 = 0;
	var uLocal_4236 = 0;
	var uLocal_4237 = 0;
	var uLocal_4238 = 0;
	var uLocal_4239 = 0;
	var uLocal_4240 = 0;
	var uLocal_4241 = 0;
	var uLocal_4242 = 0;
	var uLocal_4243 = 0;
	var uLocal_4244 = 0;
	var uLocal_4245 = 0;
	var uLocal_4246 = 0;
	var uLocal_4247 = 0;
	var uLocal_4248 = 0;
	var uLocal_4249 = 0;
	var uLocal_4250 = 0;
	var uLocal_4251 = 0;
	var uLocal_4252 = 0;
	var uLocal_4253 = 0;
	var uLocal_4254 = 0;
	var uLocal_4255 = 0;
	var uLocal_4256 = 0;
	var uLocal_4257 = 0;
	var uLocal_4258 = 0;
	var uLocal_4259 = 0;
	var uLocal_4260 = 0;
	var uLocal_4261 = 0;
	var uLocal_4262 = 0;
	var uLocal_4263 = 0;
	var uLocal_4264 = 0;
	var uLocal_4265 = 0;
	var uLocal_4266 = 0;
	var uLocal_4267 = 0;
	var uLocal_4268 = 0;
	var uLocal_4269 = 0;
	var uLocal_4270 = 0;
	var uLocal_4271 = 0;
	var uLocal_4272 = 0;
	var uLocal_4273 = 0;
	var uLocal_4274 = 0;
	var uLocal_4275 = 0;
	var uLocal_4276 = 0;
	var uLocal_4277 = 0;
	var uLocal_4278 = 0;
	var uLocal_4279 = 0;
	var uLocal_4280 = 0;
	var uLocal_4281 = 0;
	var uLocal_4282 = 0;
	var uLocal_4283 = 0;
	var uLocal_4284 = 0;
	var uLocal_4285 = 0;
	var uLocal_4286 = 0;
	var uLocal_4287 = 0;
	var uLocal_4288 = 0;
	var uLocal_4289 = 0;
	var uLocal_4290 = 0;
	var uLocal_4291 = 20;
	var uLocal_4292 = 0;
	var uLocal_4293 = 0;
	var uLocal_4294 = 0;
	var uLocal_4295 = 0;
	var uLocal_4296 = 0;
	var uLocal_4297 = 0;
	var uLocal_4298 = 0;
	var uLocal_4299 = 0;
	var uLocal_4300 = 0;
	var uLocal_4301 = 0;
	var uLocal_4302 = 0;
	var uLocal_4303 = 0;
	var uLocal_4304 = 0;
	var uLocal_4305 = 0;
	var uLocal_4306 = 0;
	var uLocal_4307 = 0;
	var uLocal_4308 = 0;
	var uLocal_4309 = 0;
	var uLocal_4310 = 0;
	var uLocal_4311 = 0;
	var uLocal_4312 = 0;
	var uLocal_4313 = 0;
	var uLocal_4314 = 0;
	var uLocal_4315 = 0;
	var uLocal_4316 = 0;
	var uLocal_4317 = 0;
	var uLocal_4318 = 0;
	var uLocal_4319 = 0;
	var uLocal_4320 = 0;
	var uLocal_4321 = 0;
	var uLocal_4322 = 0;
	var uLocal_4323 = 0;
	var uLocal_4324 = 0;
	var uLocal_4325 = 0;
	var uLocal_4326 = 0;
	var uLocal_4327 = 0;
	var uLocal_4328 = 0;
	var uLocal_4329 = 0;
	var uLocal_4330 = 0;
	var uLocal_4331 = 0;
	var uLocal_4332 = 0;
	var uLocal_4333 = 0;
	var uLocal_4334 = 0;
	var uLocal_4335 = 0;
	var uLocal_4336 = 0;
	var uLocal_4337 = 0;
	var uLocal_4338 = 0;
	var uLocal_4339 = 0;
	var uLocal_4340 = 0;
	var uLocal_4341 = 0;
	var uLocal_4342 = 0;
	var uLocal_4343 = 0;
	var uLocal_4344 = 0;
	var uLocal_4345 = 0;
	var uLocal_4346 = 0;
	var uLocal_4347 = 0;
	var uLocal_4348 = 0;
	var uLocal_4349 = 0;
	var uLocal_4350 = 0;
	var uLocal_4351 = 0;
	var uLocal_4352 = 0;
	var uLocal_4353 = 0;
	var uLocal_4354 = 0;
	var uLocal_4355 = 0;
	var uLocal_4356 = 0;
	var uLocal_4357 = 0;
	var uLocal_4358 = 20;
	var uLocal_4359 = 0;
	var uLocal_4360 = 0;
	var uLocal_4361 = 0;
	var uLocal_4362 = 0;
	var uLocal_4363 = 0;
	var uLocal_4364 = 0;
	var uLocal_4365 = 0;
	var uLocal_4366 = 0;
	var uLocal_4367 = 0;
	var uLocal_4368 = 0;
	var uLocal_4369 = 0;
	var uLocal_4370 = 0;
	var uLocal_4371 = 0;
	var uLocal_4372 = 0;
	var uLocal_4373 = 0;
	var uLocal_4374 = 0;
	var uLocal_4375 = 0;
	var uLocal_4376 = 0;
	var uLocal_4377 = 0;
	var uLocal_4378 = 0;
	var uLocal_4379 = 0;
	var uLocal_4380 = 0;
	var uLocal_4381 = 0;
	var uLocal_4382 = 0;
	var uLocal_4383 = 0;
	var uLocal_4384 = 0;
	var uLocal_4385 = 0;
	var uLocal_4386 = 0;
	var uLocal_4387 = 0;
	var uLocal_4388 = 0;
	var uLocal_4389 = 0;
	var uLocal_4390 = 0;
	var uLocal_4391 = 0;
	var uLocal_4392 = 0;
	var uLocal_4393 = 0;
	var uLocal_4394 = 0;
	var uLocal_4395 = 0;
	var uLocal_4396 = 0;
	var uLocal_4397 = 0;
	var uLocal_4398 = 0;
	var uLocal_4399 = 0;
	var uLocal_4400 = 0;
	var uLocal_4401 = 0;
	var uLocal_4402 = 0;
	var uLocal_4403 = 0;
	var uLocal_4404 = 0;
	var uLocal_4405 = 0;
	var uLocal_4406 = 0;
	var uLocal_4407 = 0;
	var uLocal_4408 = 0;
	var uLocal_4409 = 0;
	var uLocal_4410 = 0;
	var uLocal_4411 = 0;
	var uLocal_4412 = 0;
	var uLocal_4413 = 0;
	var uLocal_4414 = 0;
	var uLocal_4415 = 0;
	var uLocal_4416 = 0;
	var uLocal_4417 = 0;
	var uLocal_4418 = 0;
	var uLocal_4419 = 0;
	var uLocal_4420 = 0;
	var uLocal_4421 = 0;
	var uLocal_4422 = 0;
	var uLocal_4423 = 0;
	var uLocal_4424 = 0;
	var uLocal_4425 = 20;
	var uLocal_4426 = 0;
	var uLocal_4427 = 0;
	var uLocal_4428 = 0;
	var uLocal_4429 = 0;
	var uLocal_4430 = 0;
	var uLocal_4431 = 0;
	var uLocal_4432 = 0;
	var uLocal_4433 = 0;
	var uLocal_4434 = 0;
	var uLocal_4435 = 0;
	var uLocal_4436 = 0;
	var uLocal_4437 = 0;
	var uLocal_4438 = 0;
	var uLocal_4439 = 0;
	var uLocal_4440 = 0;
	var uLocal_4441 = 0;
	var uLocal_4442 = 0;
	var uLocal_4443 = 0;
	var uLocal_4444 = 0;
	var uLocal_4445 = 0;
	var uLocal_4446 = 0;
	var uLocal_4447 = 0;
	var uLocal_4448 = 0;
	var uLocal_4449 = 0;
	var uLocal_4450 = 0;
	var uLocal_4451 = 0;
	var uLocal_4452 = 0;
	var uLocal_4453 = 0;
	var uLocal_4454 = 0;
	var uLocal_4455 = 0;
	var uLocal_4456 = 0;
	var uLocal_4457 = 0;
	var uLocal_4458 = 0;
	var uLocal_4459 = 0;
	var uLocal_4460 = 0;
	var uLocal_4461 = 0;
	var uLocal_4462 = 0;
	var uLocal_4463 = 0;
	var uLocal_4464 = 0;
	var uLocal_4465 = 0;
	var uLocal_4466 = 0;
	var uLocal_4467 = 0;
	var uLocal_4468 = 0;
	var uLocal_4469 = 0;
	var uLocal_4470 = 0;
	var uLocal_4471 = 0;
	var uLocal_4472 = 0;
	var uLocal_4473 = 0;
	var uLocal_4474 = 0;
	var uLocal_4475 = 0;
	var uLocal_4476 = 0;
	var uLocal_4477 = 0;
	var uLocal_4478 = 0;
	var uLocal_4479 = 0;
	var uLocal_4480 = 0;
	var uLocal_4481 = 0;
	var uLocal_4482 = 0;
	var uLocal_4483 = 0;
	var uLocal_4484 = 0;
	var uLocal_4485 = 0;
	var uLocal_4486 = 0;
	var uLocal_4487 = 0;
	var uLocal_4488 = 0;
	var uLocal_4489 = 0;
	var uLocal_4490 = 0;
	var uLocal_4491 = 0;
	var uLocal_4492 = 20;
	var uLocal_4493 = 0;
	var uLocal_4494 = 0;
	var uLocal_4495 = 0;
	var uLocal_4496 = 0;
	var uLocal_4497 = 0;
	var uLocal_4498 = 0;
	var uLocal_4499 = 0;
	var uLocal_4500 = 0;
	var uLocal_4501 = 0;
	var uLocal_4502 = 0;
	var uLocal_4503 = 0;
	var uLocal_4504 = 0;
	var uLocal_4505 = 0;
	var uLocal_4506 = 0;
	var uLocal_4507 = 0;
	var uLocal_4508 = 0;
	var uLocal_4509 = 0;
	var uLocal_4510 = 0;
	var uLocal_4511 = 0;
	var uLocal_4512 = 0;
	var uLocal_4513 = 0;
	var uLocal_4514 = 0;
	var uLocal_4515 = 0;
	var uLocal_4516 = 0;
	var uLocal_4517 = 0;
	var uLocal_4518 = 0;
	var uLocal_4519 = 0;
	var uLocal_4520 = 0;
	var uLocal_4521 = 0;
	var uLocal_4522 = 0;
	var uLocal_4523 = 0;
	var uLocal_4524 = 0;
	var uLocal_4525 = 0;
	var uLocal_4526 = 0;
	var uLocal_4527 = 0;
	var uLocal_4528 = 0;
	var uLocal_4529 = 0;
	var uLocal_4530 = 0;
	var uLocal_4531 = 0;
	var uLocal_4532 = 0;
	var uLocal_4533 = 0;
	var uLocal_4534 = 0;
	var uLocal_4535 = 0;
	var uLocal_4536 = 0;
	var uLocal_4537 = 0;
	var uLocal_4538 = 0;
	var uLocal_4539 = 0;
	var uLocal_4540 = 0;
	var uLocal_4541 = 0;
	var uLocal_4542 = 0;
	var uLocal_4543 = 0;
	var uLocal_4544 = 0;
	var uLocal_4545 = 0;
	var uLocal_4546 = 0;
	var uLocal_4547 = 0;
	var uLocal_4548 = 0;
	var uLocal_4549 = 0;
	var uLocal_4550 = 0;
	var uLocal_4551 = 0;
	var uLocal_4552 = 0;
	var uLocal_4553 = 0;
	var uLocal_4554 = 0;
	var uLocal_4555 = 0;
	var uLocal_4556 = 0;
	var uLocal_4557 = 0;
	var uLocal_4558 = 0;
	var uLocal_4559 = 20;
	var uLocal_4560 = 0;
	var uLocal_4561 = 0;
	var uLocal_4562 = 0;
	var uLocal_4563 = 0;
	var uLocal_4564 = 0;
	var uLocal_4565 = 0;
	var uLocal_4566 = 0;
	var uLocal_4567 = 0;
	var uLocal_4568 = 0;
	var uLocal_4569 = 0;
	var uLocal_4570 = 0;
	var uLocal_4571 = 0;
	var uLocal_4572 = 0;
	var uLocal_4573 = 0;
	var uLocal_4574 = 0;
	var uLocal_4575 = 0;
	var uLocal_4576 = 0;
	var uLocal_4577 = 0;
	var uLocal_4578 = 0;
	var uLocal_4579 = 0;
	var uLocal_4580 = 0;
	var uLocal_4581 = 0;
	var uLocal_4582 = 0;
	var uLocal_4583 = 0;
	var uLocal_4584 = 0;
	var uLocal_4585 = 0;
	var uLocal_4586 = 0;
	var uLocal_4587 = 0;
	var uLocal_4588 = 0;
	var uLocal_4589 = 0;
	var uLocal_4590 = 0;
	var uLocal_4591 = 0;
	var uLocal_4592 = 0;
	var uLocal_4593 = 0;
	var uLocal_4594 = 0;
	var uLocal_4595 = 0;
	var uLocal_4596 = 0;
	var uLocal_4597 = 0;
	var uLocal_4598 = 0;
	var uLocal_4599 = 0;
	var uLocal_4600 = 0;
	var uLocal_4601 = 0;
	var uLocal_4602 = 0;
	var uLocal_4603 = 0;
	var uLocal_4604 = 0;
	var uLocal_4605 = 0;
	var uLocal_4606 = 0;
	var uLocal_4607 = 0;
	var uLocal_4608 = 0;
	var uLocal_4609 = 0;
	var uLocal_4610 = 0;
	var uLocal_4611 = 0;
	var uLocal_4612 = 0;
	var uLocal_4613 = 0;
	var uLocal_4614 = 0;
	var uLocal_4615 = 0;
	var uLocal_4616 = 0;
	var uLocal_4617 = 0;
	var uLocal_4618 = 0;
	var uLocal_4619 = 0;
	var uLocal_4620 = 0;
	var uLocal_4621 = 0;
	var uLocal_4622 = 0;
	var uLocal_4623 = 0;
	var uLocal_4624 = 0;
	var uLocal_4625 = 0;
	var uLocal_4626 = 20;
	var uLocal_4627 = 0;
	var uLocal_4628 = 0;
	var uLocal_4629 = 0;
	var uLocal_4630 = 0;
	var uLocal_4631 = 0;
	var uLocal_4632 = 0;
	var uLocal_4633 = 0;
	var uLocal_4634 = 0;
	var uLocal_4635 = 0;
	var uLocal_4636 = 0;
	var uLocal_4637 = 0;
	var uLocal_4638 = 0;
	var uLocal_4639 = 0;
	var uLocal_4640 = 0;
	var uLocal_4641 = 0;
	var uLocal_4642 = 0;
	var uLocal_4643 = 0;
	var uLocal_4644 = 0;
	var uLocal_4645 = 0;
	var uLocal_4646 = 0;
	var uLocal_4647 = 0;
	var uLocal_4648 = 0;
	var uLocal_4649 = 0;
	var uLocal_4650 = 0;
	var uLocal_4651 = 0;
	var uLocal_4652 = 0;
	var uLocal_4653 = 0;
	var uLocal_4654 = 0;
	var uLocal_4655 = 0;
	var uLocal_4656 = 0;
	var uLocal_4657 = 0;
	var uLocal_4658 = 0;
	var uLocal_4659 = 0;
	var uLocal_4660 = 0;
	var uLocal_4661 = 0;
	var uLocal_4662 = 0;
	var uLocal_4663 = 0;
	var uLocal_4664 = 0;
	var uLocal_4665 = 0;
	var uLocal_4666 = 0;
	var uLocal_4667 = 0;
	var uLocal_4668 = 0;
	var uLocal_4669 = 0;
	var uLocal_4670 = 0;
	var uLocal_4671 = 0;
	var uLocal_4672 = 0;
	var uLocal_4673 = 0;
	var uLocal_4674 = 0;
	var uLocal_4675 = 0;
	var uLocal_4676 = 0;
	var uLocal_4677 = 0;
	var uLocal_4678 = 0;
	var uLocal_4679 = 0;
	var uLocal_4680 = 0;
	var uLocal_4681 = 0;
	var uLocal_4682 = 0;
	var uLocal_4683 = 0;
	var uLocal_4684 = 0;
	var uLocal_4685 = 0;
	var uLocal_4686 = 0;
	var uLocal_4687 = 0;
	var uLocal_4688 = 0;
	var uLocal_4689 = 0;
	var uLocal_4690 = 0;
	var uLocal_4691 = 0;
	var uLocal_4692 = 0;
	var uLocal_4693 = 20;
	var uLocal_4694 = 0;
	var uLocal_4695 = 0;
	var uLocal_4696 = 0;
	var uLocal_4697 = 0;
	var uLocal_4698 = 0;
	var uLocal_4699 = 0;
	var uLocal_4700 = 0;
	var uLocal_4701 = 0;
	var uLocal_4702 = 0;
	var uLocal_4703 = 0;
	var uLocal_4704 = 0;
	var uLocal_4705 = 0;
	var uLocal_4706 = 0;
	var uLocal_4707 = 0;
	var uLocal_4708 = 0;
	var uLocal_4709 = 0;
	var uLocal_4710 = 0;
	var uLocal_4711 = 0;
	var uLocal_4712 = 0;
	var uLocal_4713 = 0;
	var uLocal_4714 = 0;
	var uLocal_4715 = 0;
	var uLocal_4716 = 0;
	var uLocal_4717 = 0;
	var uLocal_4718 = 0;
	var uLocal_4719 = 0;
	var uLocal_4720 = 0;
	var uLocal_4721 = 0;
	var uLocal_4722 = 0;
	var uLocal_4723 = 0;
	var uLocal_4724 = 0;
	var uLocal_4725 = 0;
	var uLocal_4726 = 0;
	var uLocal_4727 = 0;
	var uLocal_4728 = 0;
	var uLocal_4729 = 0;
	var uLocal_4730 = 0;
	var uLocal_4731 = 0;
	var uLocal_4732 = 0;
	var uLocal_4733 = 0;
	var uLocal_4734 = 0;
	var uLocal_4735 = 0;
	var uLocal_4736 = 0;
	var uLocal_4737 = 0;
	var uLocal_4738 = 0;
	var uLocal_4739 = 0;
	var uLocal_4740 = 0;
	var uLocal_4741 = 0;
	var uLocal_4742 = 0;
	var uLocal_4743 = 0;
	var uLocal_4744 = 0;
	var uLocal_4745 = 0;
	var uLocal_4746 = 0;
	var uLocal_4747 = 0;
	var uLocal_4748 = 0;
	var uLocal_4749 = 0;
	var uLocal_4750 = 0;
	var uLocal_4751 = 0;
	var uLocal_4752 = 0;
	var uLocal_4753 = 0;
	var uLocal_4754 = 0;
	var uLocal_4755 = 0;
	var uLocal_4756 = 0;
	var uLocal_4757 = 0;
	var uLocal_4758 = 0;
	var uLocal_4759 = 0;
	var uLocal_4760 = 20;
	var uLocal_4761 = 0;
	var uLocal_4762 = 0;
	var uLocal_4763 = 0;
	var uLocal_4764 = 0;
	var uLocal_4765 = 0;
	var uLocal_4766 = 0;
	var uLocal_4767 = 0;
	var uLocal_4768 = 0;
	var uLocal_4769 = 0;
	var uLocal_4770 = 0;
	var uLocal_4771 = 0;
	var uLocal_4772 = 0;
	var uLocal_4773 = 0;
	var uLocal_4774 = 0;
	var uLocal_4775 = 0;
	var uLocal_4776 = 0;
	var uLocal_4777 = 0;
	var uLocal_4778 = 0;
	var uLocal_4779 = 0;
	var uLocal_4780 = 0;
	var uLocal_4781 = 0;
	var uLocal_4782 = 0;
	var uLocal_4783 = 0;
	var uLocal_4784 = 0;
	var uLocal_4785 = 0;
	var uLocal_4786 = 0;
	var uLocal_4787 = 0;
	var uLocal_4788 = 0;
	var uLocal_4789 = 0;
	var uLocal_4790 = 0;
	var uLocal_4791 = 0;
	var uLocal_4792 = 0;
	var uLocal_4793 = 0;
	var uLocal_4794 = 0;
	var uLocal_4795 = 0;
	var uLocal_4796 = 0;
	var uLocal_4797 = 0;
	var uLocal_4798 = 0;
	var uLocal_4799 = 0;
	var uLocal_4800 = 0;
	var uLocal_4801 = 0;
	var uLocal_4802 = 0;
	var uLocal_4803 = 0;
	var uLocal_4804 = 0;
	var uLocal_4805 = 0;
	var uLocal_4806 = 0;
	var uLocal_4807 = 0;
	var uLocal_4808 = 0;
	var uLocal_4809 = 0;
	var uLocal_4810 = 0;
	var uLocal_4811 = 0;
	var uLocal_4812 = 0;
	var uLocal_4813 = 0;
	var uLocal_4814 = 0;
	var uLocal_4815 = 0;
	var uLocal_4816 = 0;
	var uLocal_4817 = 0;
	var uLocal_4818 = 0;
	var uLocal_4819 = 0;
	var uLocal_4820 = 0;
	var uLocal_4821 = 0;
	var uLocal_4822 = 0;
	var uLocal_4823 = 0;
	var uLocal_4824 = 0;
	var uLocal_4825 = 0;
	var uLocal_4826 = 0;
	var uLocal_4827 = 20;
	var uLocal_4828 = 0;
	var uLocal_4829 = 0;
	var uLocal_4830 = 0;
	var uLocal_4831 = 0;
	var uLocal_4832 = 0;
	var uLocal_4833 = 0;
	var uLocal_4834 = 0;
	var uLocal_4835 = 0;
	var uLocal_4836 = 0;
	var uLocal_4837 = 0;
	var uLocal_4838 = 0;
	var uLocal_4839 = 0;
	var uLocal_4840 = 0;
	var uLocal_4841 = 0;
	var uLocal_4842 = 0;
	var uLocal_4843 = 0;
	var uLocal_4844 = 0;
	var uLocal_4845 = 0;
	var uLocal_4846 = 0;
	var uLocal_4847 = 0;
	var uLocal_4848 = 0;
	var uLocal_4849 = 0;
	var uLocal_4850 = 0;
	var uLocal_4851 = 0;
	var uLocal_4852 = 0;
	var uLocal_4853 = 0;
	var uLocal_4854 = 0;
	var uLocal_4855 = 0;
	var uLocal_4856 = 0;
	var uLocal_4857 = 0;
	var uLocal_4858 = 0;
	var uLocal_4859 = 0;
	var uLocal_4860 = 0;
	var uLocal_4861 = 0;
	var uLocal_4862 = 0;
	var uLocal_4863 = 0;
	var uLocal_4864 = 0;
	var uLocal_4865 = 0;
	var uLocal_4866 = 0;
	var uLocal_4867 = 0;
	var uLocal_4868 = 0;
	var uLocal_4869 = 0;
	var uLocal_4870 = 0;
	var uLocal_4871 = 0;
	var uLocal_4872 = 0;
	var uLocal_4873 = 0;
	var uLocal_4874 = 0;
	var uLocal_4875 = 0;
	var uLocal_4876 = 0;
	var uLocal_4877 = 0;
	var uLocal_4878 = 0;
	var uLocal_4879 = 0;
	var uLocal_4880 = 0;
	var uLocal_4881 = 0;
	var uLocal_4882 = 0;
	var uLocal_4883 = 0;
	var uLocal_4884 = 0;
	var uLocal_4885 = 0;
	var uLocal_4886 = 0;
	var uLocal_4887 = 0;
	var uLocal_4888 = 0;
	var uLocal_4889 = 0;
	var uLocal_4890 = 0;
	var uLocal_4891 = 0;
	var uLocal_4892 = 0;
	var uLocal_4893 = 0;
	var uLocal_4894 = 20;
	var uLocal_4895 = 0;
	var uLocal_4896 = 0;
	var uLocal_4897 = 0;
	var uLocal_4898 = 0;
	var uLocal_4899 = 0;
	var uLocal_4900 = 0;
	var uLocal_4901 = 0;
	var uLocal_4902 = 0;
	var uLocal_4903 = 0;
	var uLocal_4904 = 0;
	var uLocal_4905 = 0;
	var uLocal_4906 = 0;
	var uLocal_4907 = 0;
	var uLocal_4908 = 0;
	var uLocal_4909 = 0;
	var uLocal_4910 = 0;
	var uLocal_4911 = 0;
	var uLocal_4912 = 0;
	var uLocal_4913 = 0;
	var uLocal_4914 = 0;
	var uLocal_4915 = 0;
	var uLocal_4916 = 0;
	var uLocal_4917 = 0;
	var uLocal_4918 = 0;
	var uLocal_4919 = 0;
	var uLocal_4920 = 0;
	var uLocal_4921 = 0;
	var uLocal_4922 = 0;
	var uLocal_4923 = 0;
	var uLocal_4924 = 0;
	var uLocal_4925 = 0;
	var uLocal_4926 = 0;
	var uLocal_4927 = 0;
	var uLocal_4928 = 0;
	var uLocal_4929 = 0;
	var uLocal_4930 = 0;
	var uLocal_4931 = 0;
	var uLocal_4932 = 0;
	var uLocal_4933 = 0;
	var uLocal_4934 = 0;
	var uLocal_4935 = 0;
	var uLocal_4936 = 0;
	var uLocal_4937 = 0;
	var uLocal_4938 = 0;
	var uLocal_4939 = 0;
	var uLocal_4940 = 0;
	var uLocal_4941 = 0;
	var uLocal_4942 = 0;
	var uLocal_4943 = 0;
	var uLocal_4944 = 0;
	var uLocal_4945 = 0;
	var uLocal_4946 = 0;
	var uLocal_4947 = 0;
	var uLocal_4948 = 0;
	var uLocal_4949 = 0;
	var uLocal_4950 = 0;
	var uLocal_4951 = 0;
	var uLocal_4952 = 0;
	var uLocal_4953 = 0;
	var uLocal_4954 = 0;
	var uLocal_4955 = 0;
	var uLocal_4956 = 0;
	var uLocal_4957 = 0;
	var uLocal_4958 = 0;
	var uLocal_4959 = 0;
	var uLocal_4960 = 0;
	var uLocal_4961 = 20;
	var uLocal_4962 = 0;
	var uLocal_4963 = 0;
	var uLocal_4964 = 0;
	var uLocal_4965 = 0;
	var uLocal_4966 = 0;
	var uLocal_4967 = 0;
	var uLocal_4968 = 0;
	var uLocal_4969 = 0;
	var uLocal_4970 = 0;
	var uLocal_4971 = 0;
	var uLocal_4972 = 0;
	var uLocal_4973 = 0;
	var uLocal_4974 = 0;
	var uLocal_4975 = 0;
	var uLocal_4976 = 0;
	var uLocal_4977 = 0;
	var uLocal_4978 = 0;
	var uLocal_4979 = 0;
	var uLocal_4980 = 0;
	var uLocal_4981 = 0;
	var uLocal_4982 = 0;
	var uLocal_4983 = 0;
	var uLocal_4984 = 0;
	var uLocal_4985 = 0;
	var uLocal_4986 = 0;
	var uLocal_4987 = 0;
	var uLocal_4988 = 0;
	var uLocal_4989 = 0;
	var uLocal_4990 = 0;
	var uLocal_4991 = 0;
	var uLocal_4992 = 0;
	var uLocal_4993 = 0;
	var uLocal_4994 = 0;
	var uLocal_4995 = 0;
	var uLocal_4996 = 0;
	var uLocal_4997 = 0;
	var uLocal_4998 = 0;
	var uLocal_4999 = 0;
	var uLocal_5000 = 0;
	var uLocal_5001 = 0;
	var uLocal_5002 = 0;
	var uLocal_5003 = 0;
	var uLocal_5004 = 0;
	var uLocal_5005 = 0;
	var uLocal_5006 = 0;
	var uLocal_5007 = 0;
	var uLocal_5008 = 0;
	var uLocal_5009 = 0;
	var uLocal_5010 = 0;
	var uLocal_5011 = 0;
	var uLocal_5012 = 0;
	var uLocal_5013 = 0;
	var uLocal_5014 = 0;
	var uLocal_5015 = 0;
	var uLocal_5016 = 0;
	var uLocal_5017 = 0;
	var uLocal_5018 = 0;
	var uLocal_5019 = 0;
	var uLocal_5020 = 0;
	var uLocal_5021 = 0;
	var uLocal_5022 = 0;
	var uLocal_5023 = 0;
	var uLocal_5024 = 0;
	var uLocal_5025 = 0;
	var uLocal_5026 = 0;
	var uLocal_5027 = 0;
	var uLocal_5028 = 20;
	var uLocal_5029 = 0;
	var uLocal_5030 = 0;
	var uLocal_5031 = 0;
	var uLocal_5032 = 0;
	var uLocal_5033 = 0;
	var uLocal_5034 = 0;
	var uLocal_5035 = 0;
	var uLocal_5036 = 0;
	var uLocal_5037 = 0;
	var uLocal_5038 = 0;
	var uLocal_5039 = 0;
	var uLocal_5040 = 0;
	var uLocal_5041 = 0;
	var uLocal_5042 = 0;
	var uLocal_5043 = 0;
	var uLocal_5044 = 0;
	var uLocal_5045 = 0;
	var uLocal_5046 = 0;
	var uLocal_5047 = 0;
	var uLocal_5048 = 0;
	var uLocal_5049 = 0;
	var uLocal_5050 = 0;
	var uLocal_5051 = 0;
	var uLocal_5052 = 0;
	var uLocal_5053 = 0;
	var uLocal_5054 = 0;
	var uLocal_5055 = 0;
	var uLocal_5056 = 0;
	var uLocal_5057 = 0;
	var uLocal_5058 = 0;
	var uLocal_5059 = 0;
	var uLocal_5060 = 0;
	var uLocal_5061 = 0;
	var uLocal_5062 = 0;
	var uLocal_5063 = 0;
	var uLocal_5064 = 0;
	var uLocal_5065 = 0;
	var uLocal_5066 = 0;
	var uLocal_5067 = 0;
	var uLocal_5068 = 0;
	var uLocal_5069 = 0;
	var uLocal_5070 = 0;
	var uLocal_5071 = 0;
	var uLocal_5072 = 0;
	var uLocal_5073 = 0;
	var uLocal_5074 = 0;
	var uLocal_5075 = 0;
	var uLocal_5076 = 0;
	var uLocal_5077 = 0;
	var uLocal_5078 = 0;
	var uLocal_5079 = 0;
	var uLocal_5080 = 0;
	var uLocal_5081 = 0;
	var uLocal_5082 = 0;
	var uLocal_5083 = 0;
	var uLocal_5084 = 0;
	var uLocal_5085 = 0;
	var uLocal_5086 = 0;
	var uLocal_5087 = 0;
	var uLocal_5088 = 0;
	var uLocal_5089 = 0;
	var uLocal_5090 = 0;
	var uLocal_5091 = 0;
	var uLocal_5092 = 0;
	var uLocal_5093 = 0;
	var uLocal_5094 = 0;
	var uLocal_5095 = 20;
	var uLocal_5096 = 0;
	var uLocal_5097 = 0;
	var uLocal_5098 = 0;
	var uLocal_5099 = 0;
	var uLocal_5100 = 0;
	var uLocal_5101 = 0;
	var uLocal_5102 = 0;
	var uLocal_5103 = 0;
	var uLocal_5104 = 0;
	var uLocal_5105 = 0;
	var uLocal_5106 = 0;
	var uLocal_5107 = 0;
	var uLocal_5108 = 0;
	var uLocal_5109 = 0;
	var uLocal_5110 = 0;
	var uLocal_5111 = 0;
	var uLocal_5112 = 0;
	var uLocal_5113 = 0;
	var uLocal_5114 = 0;
	var uLocal_5115 = 0;
	var uLocal_5116 = 0;
	var uLocal_5117 = 0;
	var uLocal_5118 = 0;
	var uLocal_5119 = 0;
	var uLocal_5120 = 0;
	var uLocal_5121 = 0;
	var uLocal_5122 = 0;
	var uLocal_5123 = 0;
	var uLocal_5124 = 0;
	var uLocal_5125 = 0;
	var uLocal_5126 = 0;
	var uLocal_5127 = 0;
	var uLocal_5128 = 0;
	var uLocal_5129 = 0;
	var uLocal_5130 = 0;
	var uLocal_5131 = 0;
	var uLocal_5132 = 0;
	var uLocal_5133 = 0;
	var uLocal_5134 = 0;
	var uLocal_5135 = 0;
	var uLocal_5136 = 0;
	var uLocal_5137 = 0;
	var uLocal_5138 = 0;
	var uLocal_5139 = 0;
	var uLocal_5140 = 0;
	var uLocal_5141 = 0;
	var uLocal_5142 = 0;
	var uLocal_5143 = 0;
	var uLocal_5144 = 0;
	var uLocal_5145 = 0;
	var uLocal_5146 = 0;
	var uLocal_5147 = 0;
	var uLocal_5148 = 0;
	var uLocal_5149 = 0;
	var uLocal_5150 = 0;
	var uLocal_5151 = 0;
	var uLocal_5152 = 0;
	var uLocal_5153 = 0;
	var uLocal_5154 = 0;
	var uLocal_5155 = 0;
	var uLocal_5156 = 0;
	var uLocal_5157 = 0;
	var uLocal_5158 = 0;
	var uLocal_5159 = 0;
	var uLocal_5160 = 0;
	var uLocal_5161 = 0;
	var uLocal_5162 = 20;
	var uLocal_5163 = 0;
	var uLocal_5164 = 0;
	var uLocal_5165 = 0;
	var uLocal_5166 = 0;
	var uLocal_5167 = 0;
	var uLocal_5168 = 0;
	var uLocal_5169 = 0;
	var uLocal_5170 = 0;
	var uLocal_5171 = 0;
	var uLocal_5172 = 0;
	var uLocal_5173 = 0;
	var uLocal_5174 = 0;
	var uLocal_5175 = 0;
	var uLocal_5176 = 0;
	var uLocal_5177 = 0;
	var uLocal_5178 = 0;
	var uLocal_5179 = 0;
	var uLocal_5180 = 0;
	var uLocal_5181 = 0;
	var uLocal_5182 = 0;
	var uLocal_5183 = 0;
	var uLocal_5184 = 0;
	var uLocal_5185 = 0;
	var uLocal_5186 = 0;
	var uLocal_5187 = 0;
	var uLocal_5188 = 0;
	var uLocal_5189 = 0;
	var uLocal_5190 = 0;
	var uLocal_5191 = 0;
	var uLocal_5192 = 0;
	var uLocal_5193 = 0;
	var uLocal_5194 = 0;
	var uLocal_5195 = 0;
	var uLocal_5196 = 0;
	var uLocal_5197 = 0;
	var uLocal_5198 = 0;
	var uLocal_5199 = 0;
	var uLocal_5200 = 0;
	var uLocal_5201 = 0;
	var uLocal_5202 = 0;
	var uLocal_5203 = 0;
	var uLocal_5204 = 0;
	var uLocal_5205 = 0;
	var uLocal_5206 = 0;
	var uLocal_5207 = 0;
	var uLocal_5208 = 0;
	var uLocal_5209 = 0;
	var uLocal_5210 = 0;
	var uLocal_5211 = 0;
	var uLocal_5212 = 0;
	var uLocal_5213 = 0;
	var uLocal_5214 = 0;
	var uLocal_5215 = 0;
	var uLocal_5216 = 0;
	var uLocal_5217 = 0;
	var uLocal_5218 = 0;
	var uLocal_5219 = 0;
	var uLocal_5220 = 0;
	var uLocal_5221 = 0;
	var uLocal_5222 = 0;
	var uLocal_5223 = 0;
	var uLocal_5224 = 0;
	var uLocal_5225 = 0;
	var uLocal_5226 = 0;
	var uLocal_5227 = 0;
	var uLocal_5228 = 0;
	var uLocal_5229 = 20;
	var uLocal_5230 = 0;
	var uLocal_5231 = 0;
	var uLocal_5232 = 0;
	var uLocal_5233 = 0;
	var uLocal_5234 = 0;
	var uLocal_5235 = 0;
	var uLocal_5236 = 0;
	var uLocal_5237 = 0;
	var uLocal_5238 = 0;
	var uLocal_5239 = 0;
	var uLocal_5240 = 0;
	var uLocal_5241 = 0;
	var uLocal_5242 = 0;
	var uLocal_5243 = 0;
	var uLocal_5244 = 0;
	var uLocal_5245 = 0;
	var uLocal_5246 = 0;
	var uLocal_5247 = 0;
	var uLocal_5248 = 0;
	var uLocal_5249 = 0;
	var uLocal_5250 = 0;
	var uLocal_5251 = 0;
	var uLocal_5252 = 0;
	var uLocal_5253 = 0;
	var uLocal_5254 = 0;
	var uLocal_5255 = 0;
	var uLocal_5256 = 0;
	var uLocal_5257 = 0;
	var uLocal_5258 = 0;
	var uLocal_5259 = 0;
	var uLocal_5260 = 0;
	var uLocal_5261 = 0;
	var uLocal_5262 = 0;
	var uLocal_5263 = 0;
	var uLocal_5264 = 0;
	var uLocal_5265 = 0;
	var uLocal_5266 = 0;
	var uLocal_5267 = 0;
	var uLocal_5268 = 0;
	var uLocal_5269 = 0;
	var uLocal_5270 = 0;
	var uLocal_5271 = 0;
	var uLocal_5272 = 0;
	var uLocal_5273 = 0;
	var uLocal_5274 = 0;
	var uLocal_5275 = 0;
	var uLocal_5276 = 0;
	var uLocal_5277 = 0;
	var uLocal_5278 = 0;
	var uLocal_5279 = 0;
	var uLocal_5280 = 0;
	var uLocal_5281 = 0;
	var uLocal_5282 = 0;
	var uLocal_5283 = 0;
	var uLocal_5284 = 0;
	var uLocal_5285 = 0;
	var uLocal_5286 = 0;
	var uLocal_5287 = 0;
	var uLocal_5288 = 0;
	var uLocal_5289 = 0;
	var uLocal_5290 = 0;
	var uLocal_5291 = 0;
	var uLocal_5292 = 0;
	var uLocal_5293 = 0;
	var uLocal_5294 = 0;
	var uLocal_5295 = 0;
	var uLocal_5296 = 20;
	var uLocal_5297 = 0;
	var uLocal_5298 = 0;
	var uLocal_5299 = 0;
	var uLocal_5300 = 0;
	var uLocal_5301 = 0;
	var uLocal_5302 = 0;
	var uLocal_5303 = 0;
	var uLocal_5304 = 0;
	var uLocal_5305 = 0;
	var uLocal_5306 = 0;
	var uLocal_5307 = 0;
	var uLocal_5308 = 0;
	var uLocal_5309 = 0;
	var uLocal_5310 = 0;
	var uLocal_5311 = 0;
	var uLocal_5312 = 0;
	var uLocal_5313 = 0;
	var uLocal_5314 = 0;
	var uLocal_5315 = 0;
	var uLocal_5316 = 0;
	var uLocal_5317 = 0;
	var uLocal_5318 = 0;
	var uLocal_5319 = 0;
	var uLocal_5320 = 0;
	var uLocal_5321 = 0;
	var uLocal_5322 = 0;
	var uLocal_5323 = 0;
	var uLocal_5324 = 0;
	var uLocal_5325 = 0;
	var uLocal_5326 = 0;
	var uLocal_5327 = 0;
	var uLocal_5328 = 0;
	var uLocal_5329 = 0;
	var uLocal_5330 = 0;
	var uLocal_5331 = 0;
	var uLocal_5332 = 0;
	var uLocal_5333 = 0;
	var uLocal_5334 = 0;
	var uLocal_5335 = 0;
	var uLocal_5336 = 0;
	var uLocal_5337 = 0;
	var uLocal_5338 = 0;
	var uLocal_5339 = 0;
	var uLocal_5340 = 0;
	var uLocal_5341 = 0;
	var uLocal_5342 = 0;
	var uLocal_5343 = 0;
	var uLocal_5344 = 0;
	var uLocal_5345 = 0;
	var uLocal_5346 = 0;
	var uLocal_5347 = 0;
	var uLocal_5348 = 0;
	var uLocal_5349 = 0;
	var uLocal_5350 = 0;
	var uLocal_5351 = 0;
	var uLocal_5352 = 0;
	var uLocal_5353 = 0;
	var uLocal_5354 = 0;
	var uLocal_5355 = 0;
	var uLocal_5356 = 0;
	var uLocal_5357 = 0;
	var uLocal_5358 = 0;
	var uLocal_5359 = 0;
	var uLocal_5360 = 0;
	var uLocal_5361 = 0;
	var uLocal_5362 = 0;
	var uLocal_5363 = 20;
	var uLocal_5364 = 0;
	var uLocal_5365 = 0;
	var uLocal_5366 = 0;
	var uLocal_5367 = 0;
	var uLocal_5368 = 0;
	var uLocal_5369 = 0;
	var uLocal_5370 = 0;
	var uLocal_5371 = 0;
	var uLocal_5372 = 0;
	var uLocal_5373 = 0;
	var uLocal_5374 = 0;
	var uLocal_5375 = 0;
	var uLocal_5376 = 0;
	var uLocal_5377 = 0;
	var uLocal_5378 = 0;
	var uLocal_5379 = 0;
	var uLocal_5380 = 0;
	var uLocal_5381 = 0;
	var uLocal_5382 = 0;
	var uLocal_5383 = 0;
	var uLocal_5384 = 0;
	var uLocal_5385 = 0;
	var uLocal_5386 = 0;
	var uLocal_5387 = 0;
	var uLocal_5388 = 0;
	var uLocal_5389 = 0;
	var uLocal_5390 = 0;
	var uLocal_5391 = 0;
	var uLocal_5392 = 0;
	var uLocal_5393 = 0;
	var uLocal_5394 = 0;
	var uLocal_5395 = 0;
	var uLocal_5396 = 0;
	var uLocal_5397 = 0;
	var uLocal_5398 = 0;
	var uLocal_5399 = 0;
	var uLocal_5400 = 0;
	var uLocal_5401 = 0;
	var uLocal_5402 = 0;
	var uLocal_5403 = 0;
	var uLocal_5404 = 0;
	var uLocal_5405 = 0;
	var uLocal_5406 = 0;
	var uLocal_5407 = 0;
	var uLocal_5408 = 0;
	var uLocal_5409 = 0;
	var uLocal_5410 = 0;
	var uLocal_5411 = 0;
	var uLocal_5412 = 0;
	var uLocal_5413 = 0;
	var uLocal_5414 = 0;
	var uLocal_5415 = 0;
	var uLocal_5416 = 0;
	var uLocal_5417 = 0;
	var uLocal_5418 = 0;
	var uLocal_5419 = 0;
	var uLocal_5420 = 0;
	var uLocal_5421 = 0;
	var uLocal_5422 = 0;
	var uLocal_5423 = 0;
	var uLocal_5424 = 0;
	var uLocal_5425 = 0;
	var uLocal_5426 = 0;
	var uLocal_5427 = 0;
	var uLocal_5428 = 0;
	var uLocal_5429 = 0;
	var uLocal_5430 = 20;
	var uLocal_5431 = 0;
	var uLocal_5432 = 0;
	var uLocal_5433 = 0;
	var uLocal_5434 = 0;
	var uLocal_5435 = 0;
	var uLocal_5436 = 0;
	var uLocal_5437 = 0;
	var uLocal_5438 = 0;
	var uLocal_5439 = 0;
	var uLocal_5440 = 0;
	var uLocal_5441 = 0;
	var uLocal_5442 = 0;
	var uLocal_5443 = 0;
	var uLocal_5444 = 0;
	var uLocal_5445 = 0;
	var uLocal_5446 = 0;
	var uLocal_5447 = 0;
	var uLocal_5448 = 0;
	var uLocal_5449 = 0;
	var uLocal_5450 = 0;
	var uLocal_5451 = 0;
	var uLocal_5452 = 0;
	var uLocal_5453 = 0;
	var uLocal_5454 = 0;
	var uLocal_5455 = 0;
	var uLocal_5456 = 0;
	var uLocal_5457 = 0;
	var uLocal_5458 = 0;
	var uLocal_5459 = 0;
	var uLocal_5460 = 0;
	var uLocal_5461 = 0;
	var uLocal_5462 = 0;
	var uLocal_5463 = 0;
	var uLocal_5464 = 0;
	var uLocal_5465 = 0;
	var uLocal_5466 = 0;
	var uLocal_5467 = 0;
	var uLocal_5468 = 0;
	var uLocal_5469 = 0;
	var uLocal_5470 = 0;
	var uLocal_5471 = 0;
	var uLocal_5472 = 0;
	var uLocal_5473 = 0;
	var uLocal_5474 = 0;
	var uLocal_5475 = 0;
	var uLocal_5476 = 0;
	var uLocal_5477 = 0;
	var uLocal_5478 = 0;
	var uLocal_5479 = 0;
	var uLocal_5480 = 0;
	var uLocal_5481 = 0;
	var uLocal_5482 = 0;
	var uLocal_5483 = 0;
	var uLocal_5484 = 0;
	var uLocal_5485 = 0;
	var uLocal_5486 = 0;
	var uLocal_5487 = 0;
	var uLocal_5488 = 0;
	var uLocal_5489 = 0;
	var uLocal_5490 = 0;
	var uLocal_5491 = 0;
	var uLocal_5492 = 0;
	var uLocal_5493 = 0;
	var uLocal_5494 = 0;
	var uLocal_5495 = 0;
	var uLocal_5496 = 0;
	var uLocal_5497 = 20;
	var uLocal_5498 = 0;
	var uLocal_5499 = 0;
	var uLocal_5500 = 0;
	var uLocal_5501 = 0;
	var uLocal_5502 = 0;
	var uLocal_5503 = 0;
	var uLocal_5504 = 0;
	var uLocal_5505 = 0;
	var uLocal_5506 = 0;
	var uLocal_5507 = 0;
	var uLocal_5508 = 0;
	var uLocal_5509 = 0;
	var uLocal_5510 = 0;
	var uLocal_5511 = 0;
	var uLocal_5512 = 0;
	var uLocal_5513 = 0;
	var uLocal_5514 = 0;
	var uLocal_5515 = 0;
	var uLocal_5516 = 0;
	var uLocal_5517 = 0;
	var uLocal_5518 = 0;
	var uLocal_5519 = 0;
	var uLocal_5520 = 0;
	var uLocal_5521 = 0;
	var uLocal_5522 = 0;
	var uLocal_5523 = 0;
	var uLocal_5524 = 0;
	var uLocal_5525 = 0;
	var uLocal_5526 = 0;
	var uLocal_5527 = 0;
	var uLocal_5528 = 0;
	var uLocal_5529 = 0;
	var uLocal_5530 = 0;
	var uLocal_5531 = 0;
	var uLocal_5532 = 0;
	var uLocal_5533 = 0;
	var uLocal_5534 = 0;
	var uLocal_5535 = 0;
	var uLocal_5536 = 0;
	var uLocal_5537 = 0;
	var uLocal_5538 = 0;
	var uLocal_5539 = 0;
	var uLocal_5540 = 0;
	var uLocal_5541 = 0;
	var uLocal_5542 = 0;
	var uLocal_5543 = 0;
	var uLocal_5544 = 0;
	var uLocal_5545 = 0;
	var uLocal_5546 = 0;
	var uLocal_5547 = 0;
	var uLocal_5548 = 0;
	var uLocal_5549 = 0;
	var uLocal_5550 = 0;
	var uLocal_5551 = 0;
	var uLocal_5552 = 0;
	var uLocal_5553 = 0;
	var uLocal_5554 = 0;
	var uLocal_5555 = 0;
	var uLocal_5556 = 0;
	var uLocal_5557 = 0;
	var uLocal_5558 = 0;
	var uLocal_5559 = 0;
	var uLocal_5560 = 0;
	var uLocal_5561 = 0;
	var uLocal_5562 = 0;
	var uLocal_5563 = 0;
	var uLocal_5564 = 20;
	var uLocal_5565 = 0;
	var uLocal_5566 = 0;
	var uLocal_5567 = 0;
	var uLocal_5568 = 0;
	var uLocal_5569 = 0;
	var uLocal_5570 = 0;
	var uLocal_5571 = 0;
	var uLocal_5572 = 0;
	var uLocal_5573 = 0;
	var uLocal_5574 = 0;
	var uLocal_5575 = 0;
	var uLocal_5576 = 0;
	var uLocal_5577 = 0;
	var uLocal_5578 = 0;
	var uLocal_5579 = 0;
	var uLocal_5580 = 0;
	var uLocal_5581 = 0;
	var uLocal_5582 = 0;
	var uLocal_5583 = 0;
	var uLocal_5584 = 0;
	var uLocal_5585 = 0;
	var uLocal_5586 = 0;
	var uLocal_5587 = 0;
	var uLocal_5588 = 0;
	var uLocal_5589 = 0;
	var uLocal_5590 = 0;
	var uLocal_5591 = 0;
	var uLocal_5592 = 0;
	var uLocal_5593 = 0;
	var uLocal_5594 = 0;
	var uLocal_5595 = 0;
	var uLocal_5596 = 0;
	var uLocal_5597 = 0;
	var uLocal_5598 = 0;
	var uLocal_5599 = 0;
	var uLocal_5600 = 0;
	var uLocal_5601 = 0;
	var uLocal_5602 = 0;
	var uLocal_5603 = 0;
	var uLocal_5604 = 0;
	var uLocal_5605 = 0;
	var uLocal_5606 = 0;
	var uLocal_5607 = 0;
	var uLocal_5608 = 0;
	var uLocal_5609 = 0;
	var uLocal_5610 = 0;
	var uLocal_5611 = 0;
	var uLocal_5612 = 0;
	var uLocal_5613 = 0;
	var uLocal_5614 = 0;
	var uLocal_5615 = 0;
	var uLocal_5616 = 0;
	var uLocal_5617 = 0;
	var uLocal_5618 = 0;
	var uLocal_5619 = 0;
	var uLocal_5620 = 0;
	var uLocal_5621 = 0;
	var uLocal_5622 = 0;
	var uLocal_5623 = 0;
	var uLocal_5624 = 0;
	var uLocal_5625 = 0;
	var uLocal_5626 = 0;
	var uLocal_5627 = 0;
	var uLocal_5628 = 0;
	var uLocal_5629 = 0;
	var uLocal_5630 = 0;
	var uLocal_5631 = 20;
	var uLocal_5632 = 0;
	var uLocal_5633 = 0;
	var uLocal_5634 = 0;
	var uLocal_5635 = 0;
	var uLocal_5636 = 0;
	var uLocal_5637 = 0;
	var uLocal_5638 = 0;
	var uLocal_5639 = 0;
	var uLocal_5640 = 0;
	var uLocal_5641 = 0;
	var uLocal_5642 = 0;
	var uLocal_5643 = 0;
	var uLocal_5644 = 0;
	var uLocal_5645 = 0;
	var uLocal_5646 = 0;
	var uLocal_5647 = 0;
	var uLocal_5648 = 0;
	var uLocal_5649 = 0;
	var uLocal_5650 = 0;
	var uLocal_5651 = 0;
	var uLocal_5652 = 0;
	var uLocal_5653 = 0;
	var uLocal_5654 = 0;
	var uLocal_5655 = 0;
	var uLocal_5656 = 0;
	var uLocal_5657 = 0;
	var uLocal_5658 = 0;
	var uLocal_5659 = 0;
	var uLocal_5660 = 0;
	var uLocal_5661 = 0;
	var uLocal_5662 = 0;
	var uLocal_5663 = 0;
	var uLocal_5664 = 0;
	var uLocal_5665 = 0;
	var uLocal_5666 = 0;
	var uLocal_5667 = 0;
	var uLocal_5668 = 0;
	var uLocal_5669 = 0;
	var uLocal_5670 = 0;
	var uLocal_5671 = 0;
	var uLocal_5672 = 0;
	var uLocal_5673 = 0;
	var uLocal_5674 = 0;
	var uLocal_5675 = 0;
	var uLocal_5676 = 0;
	var uLocal_5677 = 0;
	var uLocal_5678 = 0;
	var uLocal_5679 = 0;
	var uLocal_5680 = 0;
	var uLocal_5681 = 0;
	var uLocal_5682 = 0;
	var uLocal_5683 = 0;
	var uLocal_5684 = 0;
	var uLocal_5685 = 0;
	var uLocal_5686 = 0;
	var uLocal_5687 = 0;
	var uLocal_5688 = 0;
	var uLocal_5689 = 0;
	var uLocal_5690 = 0;
	var uLocal_5691 = 0;
	var uLocal_5692 = 0;
	var uLocal_5693 = 0;
	var uLocal_5694 = 0;
	var uLocal_5695 = 0;
	var uLocal_5696 = 0;
	var uLocal_5697 = 0;
	var uLocal_5698 = 20;
	var uLocal_5699 = 0;
	var uLocal_5700 = 0;
	var uLocal_5701 = 0;
	var uLocal_5702 = 0;
	var uLocal_5703 = 0;
	var uLocal_5704 = 0;
	var uLocal_5705 = 0;
	var uLocal_5706 = 0;
	var uLocal_5707 = 0;
	var uLocal_5708 = 0;
	var uLocal_5709 = 0;
	var uLocal_5710 = 0;
	var uLocal_5711 = 0;
	var uLocal_5712 = 0;
	var uLocal_5713 = 0;
	var uLocal_5714 = 0;
	var uLocal_5715 = 0;
	var uLocal_5716 = 0;
	var uLocal_5717 = 0;
	var uLocal_5718 = 0;
	var uLocal_5719 = 0;
	var uLocal_5720 = 0;
	var uLocal_5721 = 0;
	var uLocal_5722 = 0;
	var uLocal_5723 = 0;
	var uLocal_5724 = 0;
	var uLocal_5725 = 0;
	var uLocal_5726 = 0;
	var uLocal_5727 = 0;
	var uLocal_5728 = 0;
	var uLocal_5729 = 0;
	var uLocal_5730 = 0;
	var uLocal_5731 = 0;
	var uLocal_5732 = 0;
	var uLocal_5733 = 0;
	var uLocal_5734 = 0;
	var uLocal_5735 = 0;
	var uLocal_5736 = 0;
	var uLocal_5737 = 0;
	var uLocal_5738 = 0;
	var uLocal_5739 = 0;
	var uLocal_5740 = 0;
	var uLocal_5741 = 0;
	var uLocal_5742 = 0;
	var uLocal_5743 = 0;
	var uLocal_5744 = 0;
	var uLocal_5745 = 0;
	var uLocal_5746 = 0;
	var uLocal_5747 = 0;
	var uLocal_5748 = 0;
	var uLocal_5749 = 0;
	var uLocal_5750 = 0;
	var uLocal_5751 = 0;
	var uLocal_5752 = 0;
	var uLocal_5753 = 0;
	var uLocal_5754 = 0;
	var uLocal_5755 = 0;
	var uLocal_5756 = 0;
	var uLocal_5757 = 0;
	var uLocal_5758 = 0;
	var uLocal_5759 = 0;
	var uLocal_5760 = 0;
	var uLocal_5761 = 0;
	var uLocal_5762 = 0;
	var uLocal_5763 = 0;
	var uLocal_5764 = 0;
	var uLocal_5765 = 20;
	var uLocal_5766 = 0;
	var uLocal_5767 = 0;
	var uLocal_5768 = 0;
	var uLocal_5769 = 0;
	var uLocal_5770 = 0;
	var uLocal_5771 = 0;
	var uLocal_5772 = 0;
	var uLocal_5773 = 0;
	var uLocal_5774 = 0;
	var uLocal_5775 = 0;
	var uLocal_5776 = 0;
	var uLocal_5777 = 0;
	var uLocal_5778 = 0;
	var uLocal_5779 = 0;
	var uLocal_5780 = 0;
	var uLocal_5781 = 0;
	var uLocal_5782 = 0;
	var uLocal_5783 = 0;
	var uLocal_5784 = 0;
	var uLocal_5785 = 0;
	var uLocal_5786 = 0;
	var uLocal_5787 = 0;
	var uLocal_5788 = 0;
	var uLocal_5789 = 0;
	var uLocal_5790 = 0;
	var uLocal_5791 = 0;
	var uLocal_5792 = 0;
	var uLocal_5793 = 0;
	var uLocal_5794 = 0;
	var uLocal_5795 = 0;
	var uLocal_5796 = 0;
	var uLocal_5797 = 0;
	var uLocal_5798 = 0;
	var uLocal_5799 = 0;
	var uLocal_5800 = 0;
	var uLocal_5801 = 0;
	var uLocal_5802 = 0;
	var uLocal_5803 = 0;
	var uLocal_5804 = 0;
	var uLocal_5805 = 0;
	var uLocal_5806 = 0;
	var uLocal_5807 = 0;
	var uLocal_5808 = 0;
	var uLocal_5809 = 0;
	var uLocal_5810 = 0;
	var uLocal_5811 = 0;
	var uLocal_5812 = 0;
	var uLocal_5813 = 0;
	var uLocal_5814 = 0;
	var uLocal_5815 = 0;
	var uLocal_5816 = 0;
	var uLocal_5817 = 0;
	var uLocal_5818 = 0;
	var uLocal_5819 = 0;
	var uLocal_5820 = 0;
	var uLocal_5821 = 0;
	var uLocal_5822 = 0;
	var uLocal_5823 = 0;
	var uLocal_5824 = 0;
	var uLocal_5825 = 0;
	var uLocal_5826 = 0;
	var uLocal_5827 = 0;
	var uLocal_5828 = 0;
	var uLocal_5829 = 0;
	var uLocal_5830 = 0;
	var uLocal_5831 = 0;
	var uLocal_5832 = 20;
	var uLocal_5833 = 0;
	var uLocal_5834 = 0;
	var uLocal_5835 = 0;
	var uLocal_5836 = 0;
	var uLocal_5837 = 0;
	var uLocal_5838 = 0;
	var uLocal_5839 = 0;
	var uLocal_5840 = 0;
	var uLocal_5841 = 0;
	var uLocal_5842 = 0;
	var uLocal_5843 = 0;
	var uLocal_5844 = 0;
	var uLocal_5845 = 0;
	var uLocal_5846 = 0;
	var uLocal_5847 = 0;
	var uLocal_5848 = 0;
	var uLocal_5849 = 0;
	var uLocal_5850 = 0;
	var uLocal_5851 = 0;
	var uLocal_5852 = 0;
	var uLocal_5853 = 0;
	var uLocal_5854 = 0;
	var uLocal_5855 = 0;
	var uLocal_5856 = 0;
	var uLocal_5857 = 0;
	var uLocal_5858 = 0;
	var uLocal_5859 = 0;
	var uLocal_5860 = 0;
	var uLocal_5861 = 0;
	var uLocal_5862 = 0;
	var uLocal_5863 = 0;
	var uLocal_5864 = 0;
	var uLocal_5865 = 0;
	var uLocal_5866 = 0;
	var uLocal_5867 = 0;
	var uLocal_5868 = 0;
	var uLocal_5869 = 0;
	var uLocal_5870 = 0;
	var uLocal_5871 = 0;
	var uLocal_5872 = 0;
	var uLocal_5873 = 0;
	var uLocal_5874 = 0;
	var uLocal_5875 = 0;
	var uLocal_5876 = 0;
	var uLocal_5877 = 0;
	var uLocal_5878 = 0;
	var uLocal_5879 = 0;
	var uLocal_5880 = 0;
	var uLocal_5881 = 0;
	var uLocal_5882 = 0;
	var uLocal_5883 = 0;
	var uLocal_5884 = 0;
	var uLocal_5885 = 0;
	var uLocal_5886 = 0;
	var uLocal_5887 = 0;
	var uLocal_5888 = 0;
	var uLocal_5889 = 0;
	var uLocal_5890 = 0;
	var uLocal_5891 = 0;
	var uLocal_5892 = 0;
	var uLocal_5893 = 0;
	var uLocal_5894 = 0;
	var uLocal_5895 = 0;
	var uLocal_5896 = 0;
	var uLocal_5897 = 0;
	var uLocal_5898 = 0;
	var uLocal_5899 = 20;
	var uLocal_5900 = 0;
	var uLocal_5901 = 0;
	var uLocal_5902 = 0;
	var uLocal_5903 = 0;
	var uLocal_5904 = 0;
	var uLocal_5905 = 0;
	var uLocal_5906 = 0;
	var uLocal_5907 = 0;
	var uLocal_5908 = 0;
	var uLocal_5909 = 0;
	var uLocal_5910 = 0;
	var uLocal_5911 = 0;
	var uLocal_5912 = 0;
	var uLocal_5913 = 0;
	var uLocal_5914 = 0;
	var uLocal_5915 = 0;
	var uLocal_5916 = 0;
	var uLocal_5917 = 0;
	var uLocal_5918 = 0;
	var uLocal_5919 = 0;
	var uLocal_5920 = 0;
	var uLocal_5921 = 0;
	var uLocal_5922 = 0;
	var uLocal_5923 = 0;
	var uLocal_5924 = 0;
	var uLocal_5925 = 0;
	var uLocal_5926 = 0;
	var uLocal_5927 = 0;
	var uLocal_5928 = 0;
	var uLocal_5929 = 0;
	var uLocal_5930 = 0;
	var uLocal_5931 = 0;
	var uLocal_5932 = 0;
	var uLocal_5933 = 0;
	var uLocal_5934 = 0;
	var uLocal_5935 = 0;
	var uLocal_5936 = 0;
	var uLocal_5937 = 0;
	var uLocal_5938 = 0;
	var uLocal_5939 = 0;
	var uLocal_5940 = 0;
	var uLocal_5941 = 0;
	var uLocal_5942 = 0;
	var uLocal_5943 = 0;
	var uLocal_5944 = 0;
	var uLocal_5945 = 0;
	var uLocal_5946 = 0;
	var uLocal_5947 = 0;
	var uLocal_5948 = 0;
	var uLocal_5949 = 0;
	var uLocal_5950 = 0;
	var uLocal_5951 = 0;
	var uLocal_5952 = 0;
	var uLocal_5953 = 0;
	var uLocal_5954 = 0;
	var uLocal_5955 = 0;
	var uLocal_5956 = 0;
	var uLocal_5957 = 0;
	var uLocal_5958 = 0;
	var uLocal_5959 = 0;
	var uLocal_5960 = 0;
	var uLocal_5961 = 0;
	var uLocal_5962 = 0;
	var uLocal_5963 = 0;
	var uLocal_5964 = 0;
	var uLocal_5965 = 0;
	var uLocal_5966 = 20;
	var uLocal_5967 = 0;
	var uLocal_5968 = 0;
	var uLocal_5969 = 0;
	var uLocal_5970 = 0;
	var uLocal_5971 = 0;
	var uLocal_5972 = 0;
	var uLocal_5973 = 0;
	var uLocal_5974 = 0;
	var uLocal_5975 = 0;
	var uLocal_5976 = 0;
	var uLocal_5977 = 0;
	var uLocal_5978 = 0;
	var uLocal_5979 = 0;
	var uLocal_5980 = 0;
	var uLocal_5981 = 0;
	var uLocal_5982 = 0;
	var uLocal_5983 = 0;
	var uLocal_5984 = 0;
	var uLocal_5985 = 0;
	var uLocal_5986 = 0;
	var uLocal_5987 = 0;
	var uLocal_5988 = 0;
	var uLocal_5989 = 0;
	var uLocal_5990 = 0;
	var uLocal_5991 = 0;
	var uLocal_5992 = 0;
	var uLocal_5993 = 0;
	var uLocal_5994 = 0;
	var uLocal_5995 = 0;
	var uLocal_5996 = 0;
	var uLocal_5997 = 0;
	var uLocal_5998 = 0;
	var uLocal_5999 = 0;
	var uLocal_6000 = 0;
	var uLocal_6001 = 0;
	var uLocal_6002 = 0;
	var uLocal_6003 = 0;
	var uLocal_6004 = 0;
	var uLocal_6005 = 0;
	var uLocal_6006 = 0;
	var uLocal_6007 = 0;
	var uLocal_6008 = 0;
	var uLocal_6009 = 0;
	var uLocal_6010 = 0;
	var uLocal_6011 = 0;
	var uLocal_6012 = 0;
	var uLocal_6013 = 0;
	var uLocal_6014 = 0;
	var uLocal_6015 = 0;
	var uLocal_6016 = 0;
	var uLocal_6017 = 0;
	var uLocal_6018 = 0;
	var uLocal_6019 = 0;
	var uLocal_6020 = 0;
	var uLocal_6021 = 0;
	var uLocal_6022 = 0;
	var uLocal_6023 = 0;
	var uLocal_6024 = 0;
	var uLocal_6025 = 0;
	var uLocal_6026 = 0;
	var uLocal_6027 = 0;
	var uLocal_6028 = 0;
	var uLocal_6029 = 0;
	var uLocal_6030 = 0;
	var uLocal_6031 = 0;
	var uLocal_6032 = 0;
	var uLocal_6033 = 20;
	var uLocal_6034 = 0;
	var uLocal_6035 = 0;
	var uLocal_6036 = 0;
	var uLocal_6037 = 0;
	var uLocal_6038 = 0;
	var uLocal_6039 = 0;
	var uLocal_6040 = 0;
	var uLocal_6041 = 0;
	var uLocal_6042 = 0;
	var uLocal_6043 = 0;
	var uLocal_6044 = 0;
	var uLocal_6045 = 0;
	var uLocal_6046 = 0;
	var uLocal_6047 = 0;
	var uLocal_6048 = 0;
	var uLocal_6049 = 0;
	var uLocal_6050 = 0;
	var uLocal_6051 = 0;
	var uLocal_6052 = 0;
	var uLocal_6053 = 0;
	var uLocal_6054 = 0;
	var uLocal_6055 = 0;
	var uLocal_6056 = 0;
	var uLocal_6057 = 0;
	var uLocal_6058 = 0;
	var uLocal_6059 = 0;
	var uLocal_6060 = 0;
	var uLocal_6061 = 0;
	var uLocal_6062 = 0;
	var uLocal_6063 = 0;
	var uLocal_6064 = 0;
	var uLocal_6065 = 0;
	var uLocal_6066 = 0;
	var uLocal_6067 = 0;
	var uLocal_6068 = 0;
	var uLocal_6069 = 0;
	var uLocal_6070 = 0;
	var uLocal_6071 = 0;
	var uLocal_6072 = 0;
	var uLocal_6073 = 0;
	var uLocal_6074 = 0;
	var uLocal_6075 = 0;
	var uLocal_6076 = 0;
	var uLocal_6077 = 0;
	var uLocal_6078 = 0;
	var uLocal_6079 = 0;
	var uLocal_6080 = 0;
	var uLocal_6081 = 0;
	var uLocal_6082 = 0;
	var uLocal_6083 = 0;
	var uLocal_6084 = 0;
	var uLocal_6085 = 0;
	var uLocal_6086 = 0;
	var uLocal_6087 = 0;
	var uLocal_6088 = 0;
	var uLocal_6089 = 0;
	var uLocal_6090 = 0;
	var uLocal_6091 = 0;
	var uLocal_6092 = 0;
	var uLocal_6093 = 0;
	var uLocal_6094 = 0;
	var uLocal_6095 = 0;
	var uLocal_6096 = 0;
	var uLocal_6097 = 0;
	var uLocal_6098 = 0;
	var uLocal_6099 = 0;
	var uLocal_6100 = 20;
	var uLocal_6101 = 0;
	var uLocal_6102 = 0;
	var uLocal_6103 = 0;
	var uLocal_6104 = 0;
	var uLocal_6105 = 0;
	var uLocal_6106 = 0;
	var uLocal_6107 = 0;
	var uLocal_6108 = 0;
	var uLocal_6109 = 0;
	var uLocal_6110 = 0;
	var uLocal_6111 = 0;
	var uLocal_6112 = 0;
	var uLocal_6113 = 0;
	var uLocal_6114 = 0;
	var uLocal_6115 = 0;
	var uLocal_6116 = 0;
	var uLocal_6117 = 0;
	var uLocal_6118 = 0;
	var uLocal_6119 = 0;
	var uLocal_6120 = 0;
	var uLocal_6121 = 0;
	var uLocal_6122 = 0;
	var uLocal_6123 = 0;
	var uLocal_6124 = 0;
	var uLocal_6125 = 0;
	var uLocal_6126 = 0;
	var uLocal_6127 = 0;
	var uLocal_6128 = 0;
	var uLocal_6129 = 0;
	var uLocal_6130 = 0;
	var uLocal_6131 = 0;
	var uLocal_6132 = 0;
	var uLocal_6133 = 0;
	var uLocal_6134 = 0;
	var uLocal_6135 = 0;
	var uLocal_6136 = 0;
	var uLocal_6137 = 0;
	var uLocal_6138 = 0;
	var uLocal_6139 = 0;
	var uLocal_6140 = 0;
	var uLocal_6141 = 0;
	var uLocal_6142 = 0;
	var uLocal_6143 = 0;
	var uLocal_6144 = 0;
	var uLocal_6145 = 0;
	var uLocal_6146 = 0;
	var uLocal_6147 = 0;
	var uLocal_6148 = 0;
	var uLocal_6149 = 0;
	var uLocal_6150 = 0;
	var uLocal_6151 = 0;
	var uLocal_6152 = 0;
	var uLocal_6153 = 0;
	var uLocal_6154 = 0;
	var uLocal_6155 = 0;
	var uLocal_6156 = 0;
	var uLocal_6157 = 0;
	var uLocal_6158 = 0;
	var uLocal_6159 = 0;
	var uLocal_6160 = 0;
	var uLocal_6161 = 0;
	var uLocal_6162 = 0;
	var uLocal_6163 = 0;
	var uLocal_6164 = 0;
	var uLocal_6165 = 0;
	var uLocal_6166 = 0;
	var uLocal_6167 = 20;
	var uLocal_6168 = 0;
	var uLocal_6169 = 0;
	var uLocal_6170 = 0;
	var uLocal_6171 = 0;
	var uLocal_6172 = 0;
	var uLocal_6173 = 0;
	var uLocal_6174 = 0;
	var uLocal_6175 = 0;
	var uLocal_6176 = 0;
	var uLocal_6177 = 0;
	var uLocal_6178 = 0;
	var uLocal_6179 = 0;
	var uLocal_6180 = 0;
	var uLocal_6181 = 0;
	var uLocal_6182 = 0;
	var uLocal_6183 = 0;
	var uLocal_6184 = 0;
	var uLocal_6185 = 0;
	var uLocal_6186 = 0;
	var uLocal_6187 = 0;
	var uLocal_6188 = 0;
	var uLocal_6189 = 0;
	var uLocal_6190 = 0;
	var uLocal_6191 = 0;
	var uLocal_6192 = 0;
	var uLocal_6193 = 0;
	var uLocal_6194 = 0;
	var uLocal_6195 = 0;
	var uLocal_6196 = 0;
	var uLocal_6197 = 0;
	var uLocal_6198 = 0;
	var uLocal_6199 = 0;
	var uLocal_6200 = 0;
	var uLocal_6201 = 0;
	var uLocal_6202 = 0;
	var uLocal_6203 = 0;
	var uLocal_6204 = 0;
	var uLocal_6205 = 0;
	var uLocal_6206 = 0;
	var uLocal_6207 = 0;
	var uLocal_6208 = 0;
	var uLocal_6209 = 0;
	var uLocal_6210 = 0;
	var uLocal_6211 = 0;
	var uLocal_6212 = 0;
	var uLocal_6213 = 0;
	var uLocal_6214 = 0;
	var uLocal_6215 = 0;
	var uLocal_6216 = 0;
	var uLocal_6217 = 0;
	var uLocal_6218 = 0;
	var uLocal_6219 = 0;
	var uLocal_6220 = 0;
	var uLocal_6221 = 0;
	var uLocal_6222 = 0;
	var uLocal_6223 = 0;
	var uLocal_6224 = 0;
	var uLocal_6225 = 0;
	var uLocal_6226 = 0;
	var uLocal_6227 = 0;
	var uLocal_6228 = 0;
	var uLocal_6229 = 0;
	var uLocal_6230 = 0;
	var uLocal_6231 = 0;
	var uLocal_6232 = 0;
	var uLocal_6233 = 0;
	var uLocal_6234 = 20;
	var uLocal_6235 = 0;
	var uLocal_6236 = 0;
	var uLocal_6237 = 0;
	var uLocal_6238 = 0;
	var uLocal_6239 = 0;
	var uLocal_6240 = 0;
	var uLocal_6241 = 0;
	var uLocal_6242 = 0;
	var uLocal_6243 = 0;
	var uLocal_6244 = 0;
	var uLocal_6245 = 0;
	var uLocal_6246 = 0;
	var uLocal_6247 = 0;
	var uLocal_6248 = 0;
	var uLocal_6249 = 0;
	var uLocal_6250 = 0;
	var uLocal_6251 = 0;
	var uLocal_6252 = 0;
	var uLocal_6253 = 0;
	var uLocal_6254 = 0;
	var uLocal_6255 = 0;
	var uLocal_6256 = 0;
	var uLocal_6257 = 0;
	var uLocal_6258 = 0;
	var uLocal_6259 = 0;
	var uLocal_6260 = 0;
	var uLocal_6261 = 0;
	var uLocal_6262 = 0;
	var uLocal_6263 = 0;
	var uLocal_6264 = 0;
	var uLocal_6265 = 0;
	var uLocal_6266 = 0;
	var uLocal_6267 = 0;
	var uLocal_6268 = 0;
	var uLocal_6269 = 0;
	var uLocal_6270 = 0;
	var uLocal_6271 = 0;
	var uLocal_6272 = 0;
	var uLocal_6273 = 0;
	var uLocal_6274 = 0;
	var uLocal_6275 = 0;
	var uLocal_6276 = 0;
	var uLocal_6277 = 0;
	var uLocal_6278 = 0;
	var uLocal_6279 = 0;
	var uLocal_6280 = 0;
	var uLocal_6281 = 0;
	var uLocal_6282 = 0;
	var uLocal_6283 = 0;
	var uLocal_6284 = 0;
	var uLocal_6285 = 0;
	var uLocal_6286 = 0;
	var uLocal_6287 = 0;
	var uLocal_6288 = 0;
	var uLocal_6289 = 0;
	var uLocal_6290 = 0;
	var uLocal_6291 = 0;
	var uLocal_6292 = 0;
	var uLocal_6293 = 0;
	var uLocal_6294 = 0;
	var uLocal_6295 = 0;
	var uLocal_6296 = 0;
	var uLocal_6297 = 0;
	var uLocal_6298 = 0;
	var uLocal_6299 = 0;
	var uLocal_6300 = 0;
	var uLocal_6301 = 20;
	var uLocal_6302 = 0;
	var uLocal_6303 = 0;
	var uLocal_6304 = 0;
	var uLocal_6305 = 0;
	var uLocal_6306 = 0;
	var uLocal_6307 = 0;
	var uLocal_6308 = 0;
	var uLocal_6309 = 0;
	var uLocal_6310 = 0;
	var uLocal_6311 = 0;
	var uLocal_6312 = 0;
	var uLocal_6313 = 0;
	var uLocal_6314 = 0;
	var uLocal_6315 = 0;
	var uLocal_6316 = 0;
	var uLocal_6317 = 0;
	var uLocal_6318 = 0;
	var uLocal_6319 = 0;
	var uLocal_6320 = 0;
	var uLocal_6321 = 0;
	var uLocal_6322 = 0;
	var uLocal_6323 = 0;
	var uLocal_6324 = 0;
	var uLocal_6325 = 0;
	var uLocal_6326 = 0;
	var uLocal_6327 = 0;
	var uLocal_6328 = 0;
	var uLocal_6329 = 0;
	var uLocal_6330 = 0;
	var uLocal_6331 = 0;
	var uLocal_6332 = 0;
	var uLocal_6333 = 0;
	var uLocal_6334 = 0;
	var uLocal_6335 = 0;
	var uLocal_6336 = 0;
	var uLocal_6337 = 0;
	var uLocal_6338 = 0;
	var uLocal_6339 = 0;
	var uLocal_6340 = 0;
	var uLocal_6341 = 0;
	var uLocal_6342 = 0;
	var uLocal_6343 = 0;
	var uLocal_6344 = 0;
	var uLocal_6345 = 0;
	var uLocal_6346 = 0;
	var uLocal_6347 = 0;
	var uLocal_6348 = 0;
	var uLocal_6349 = 0;
	var uLocal_6350 = 0;
	var uLocal_6351 = 0;
	var uLocal_6352 = 0;
	var uLocal_6353 = 0;
	var uLocal_6354 = 0;
	var uLocal_6355 = 0;
	var uLocal_6356 = 0;
	var uLocal_6357 = 0;
	var uLocal_6358 = 0;
	var uLocal_6359 = 0;
	var uLocal_6360 = 0;
	var uLocal_6361 = 0;
	var uLocal_6362 = 0;
	var uLocal_6363 = 0;
	var uLocal_6364 = 0;
	var uLocal_6365 = 0;
	var uLocal_6366 = 0;
	var uLocal_6367 = 0;
	var uLocal_6368 = 20;
	var uLocal_6369 = 0;
	var uLocal_6370 = 0;
	var uLocal_6371 = 0;
	var uLocal_6372 = 0;
	var uLocal_6373 = 0;
	var uLocal_6374 = 0;
	var uLocal_6375 = 0;
	var uLocal_6376 = 0;
	var uLocal_6377 = 0;
	var uLocal_6378 = 0;
	var uLocal_6379 = 0;
	var uLocal_6380 = 0;
	var uLocal_6381 = 0;
	var uLocal_6382 = 0;
	var uLocal_6383 = 0;
	var uLocal_6384 = 0;
	var uLocal_6385 = 0;
	var uLocal_6386 = 0;
	var uLocal_6387 = 0;
	var uLocal_6388 = 0;
	var uLocal_6389 = 0;
	var uLocal_6390 = 0;
	var uLocal_6391 = 0;
	var uLocal_6392 = 0;
	var uLocal_6393 = 0;
	var uLocal_6394 = 0;
	var uLocal_6395 = 0;
	var uLocal_6396 = 0;
	var uLocal_6397 = 0;
	var uLocal_6398 = 0;
	var uLocal_6399 = 0;
	var uLocal_6400 = 0;
	var uLocal_6401 = 0;
	var uLocal_6402 = 0;
	var uLocal_6403 = 0;
	var uLocal_6404 = 0;
	var uLocal_6405 = 0;
	var uLocal_6406 = 0;
	var uLocal_6407 = 0;
	var uLocal_6408 = 0;
	var uLocal_6409 = 0;
	var uLocal_6410 = 0;
	var uLocal_6411 = 0;
	var uLocal_6412 = 0;
	var uLocal_6413 = 0;
	var uLocal_6414 = 0;
	var uLocal_6415 = 0;
	var uLocal_6416 = 0;
	var uLocal_6417 = 0;
	var uLocal_6418 = 0;
	var uLocal_6419 = 0;
	var uLocal_6420 = 0;
	var uLocal_6421 = 0;
	var uLocal_6422 = 0;
	var uLocal_6423 = 0;
	var uLocal_6424 = 0;
	var uLocal_6425 = 0;
	var uLocal_6426 = 0;
	var uLocal_6427 = 0;
	var uLocal_6428 = 0;
	var uLocal_6429 = 0;
	var uLocal_6430 = 0;
	var uLocal_6431 = 0;
	var uLocal_6432 = 0;
	var uLocal_6433 = 0;
	var uLocal_6434 = 0;
	var uLocal_6435 = 20;
	var uLocal_6436 = 0;
	var uLocal_6437 = 0;
	var uLocal_6438 = 0;
	var uLocal_6439 = 0;
	var uLocal_6440 = 0;
	var uLocal_6441 = 0;
	var uLocal_6442 = 0;
	var uLocal_6443 = 0;
	var uLocal_6444 = 0;
	var uLocal_6445 = 0;
	var uLocal_6446 = 0;
	var uLocal_6447 = 0;
	var uLocal_6448 = 0;
	var uLocal_6449 = 0;
	var uLocal_6450 = 0;
	var uLocal_6451 = 0;
	var uLocal_6452 = 0;
	var uLocal_6453 = 0;
	var uLocal_6454 = 0;
	var uLocal_6455 = 0;
	var uLocal_6456 = 0;
	var uLocal_6457 = 0;
	var uLocal_6458 = 0;
	var uLocal_6459 = 0;
	var uLocal_6460 = 0;
	var uLocal_6461 = 0;
	var uLocal_6462 = 0;
	var uLocal_6463 = 0;
	var uLocal_6464 = 0;
	var uLocal_6465 = 0;
	var uLocal_6466 = 0;
	var uLocal_6467 = 0;
	var uLocal_6468 = 0;
	var uLocal_6469 = 0;
	var uLocal_6470 = 0;
	var uLocal_6471 = 0;
	var uLocal_6472 = 0;
	var uLocal_6473 = 0;
	var uLocal_6474 = 0;
	var uLocal_6475 = 0;
	var uLocal_6476 = 0;
	var uLocal_6477 = 0;
	var uLocal_6478 = 0;
	var uLocal_6479 = 0;
	var uLocal_6480 = 0;
	var uLocal_6481 = 0;
	var uLocal_6482 = 0;
	var uLocal_6483 = 0;
	var uLocal_6484 = 0;
	var uLocal_6485 = 0;
	var uLocal_6486 = 0;
	var uLocal_6487 = 0;
	var uLocal_6488 = 0;
	var uLocal_6489 = 0;
	var uLocal_6490 = 0;
	var uLocal_6491 = 0;
	var uLocal_6492 = 0;
	var uLocal_6493 = 0;
	var uLocal_6494 = 0;
	var uLocal_6495 = 0;
	var uLocal_6496 = 0;
	var uLocal_6497 = 0;
	var uLocal_6498 = 0;
	var uLocal_6499 = 0;
	var uLocal_6500 = 0;
	var uLocal_6501 = 0;
	var uLocal_6502 = 20;
	var uLocal_6503 = 0;
	var uLocal_6504 = 0;
	var uLocal_6505 = 0;
	var uLocal_6506 = 0;
	var uLocal_6507 = 0;
	var uLocal_6508 = 0;
	var uLocal_6509 = 0;
	var uLocal_6510 = 0;
	var uLocal_6511 = 0;
	var uLocal_6512 = 0;
	var uLocal_6513 = 0;
	var uLocal_6514 = 0;
	var uLocal_6515 = 0;
	var uLocal_6516 = 0;
	var uLocal_6517 = 0;
	var uLocal_6518 = 0;
	var uLocal_6519 = 0;
	var uLocal_6520 = 0;
	var uLocal_6521 = 0;
	var uLocal_6522 = 0;
	var uLocal_6523 = 0;
	var uLocal_6524 = 0;
	var uLocal_6525 = 0;
	var uLocal_6526 = 0;
	var uLocal_6527 = 0;
	var uLocal_6528 = 0;
	var uLocal_6529 = 0;
	var uLocal_6530 = 0;
	var uLocal_6531 = 0;
	var uLocal_6532 = 0;
	var uLocal_6533 = 0;
	var uLocal_6534 = 0;
	var uLocal_6535 = 0;
	var uLocal_6536 = 0;
	var uLocal_6537 = 0;
	var uLocal_6538 = 0;
	var uLocal_6539 = 0;
	var uLocal_6540 = 0;
	var uLocal_6541 = 0;
	var uLocal_6542 = 0;
	var uLocal_6543 = 0;
	var uLocal_6544 = 0;
	var uLocal_6545 = 0;
	var uLocal_6546 = 0;
	var uLocal_6547 = 0;
	var uLocal_6548 = 0;
	var uLocal_6549 = 0;
	var uLocal_6550 = 0;
	var uLocal_6551 = 0;
	var uLocal_6552 = 0;
	var uLocal_6553 = 0;
	var uLocal_6554 = 0;
	var uLocal_6555 = 0;
	var uLocal_6556 = 0;
	var uLocal_6557 = 0;
	var uLocal_6558 = 0;
	var uLocal_6559 = 0;
	var uLocal_6560 = 0;
	var uLocal_6561 = 0;
	var uLocal_6562 = 0;
	var uLocal_6563 = 0;
	var uLocal_6564 = 0;
	var uLocal_6565 = 0;
	var uLocal_6566 = 0;
	var uLocal_6567 = 0;
	var uLocal_6568 = 0;
	var uLocal_6569 = 20;
	var uLocal_6570 = 0;
	var uLocal_6571 = 0;
	var uLocal_6572 = 0;
	var uLocal_6573 = 0;
	var uLocal_6574 = 0;
	var uLocal_6575 = 0;
	var uLocal_6576 = 0;
	var uLocal_6577 = 0;
	var uLocal_6578 = 0;
	var uLocal_6579 = 0;
	var uLocal_6580 = 0;
	var uLocal_6581 = 0;
	var uLocal_6582 = 0;
	var uLocal_6583 = 0;
	var uLocal_6584 = 0;
	var uLocal_6585 = 0;
	var uLocal_6586 = 0;
	var uLocal_6587 = 0;
	var uLocal_6588 = 0;
	var uLocal_6589 = 0;
	var uLocal_6590 = 0;
	var uLocal_6591 = 0;
	var uLocal_6592 = 0;
	var uLocal_6593 = 0;
	var uLocal_6594 = 0;
	var uLocal_6595 = 0;
	var uLocal_6596 = 0;
	var uLocal_6597 = 0;
	var uLocal_6598 = 0;
	var uLocal_6599 = 0;
	var uLocal_6600 = 0;
	var uLocal_6601 = 0;
	var uLocal_6602 = 0;
	var uLocal_6603 = 0;
	var uLocal_6604 = 0;
	var uLocal_6605 = 0;
	var uLocal_6606 = 0;
	var uLocal_6607 = 0;
	var uLocal_6608 = 0;
	var uLocal_6609 = 0;
	var uLocal_6610 = 0;
	var uLocal_6611 = 0;
	var uLocal_6612 = 0;
	var uLocal_6613 = 0;
	var uLocal_6614 = 0;
	var uLocal_6615 = 0;
	var uLocal_6616 = 0;
	var uLocal_6617 = 0;
	var uLocal_6618 = 0;
	var uLocal_6619 = 0;
	var uLocal_6620 = 0;
	var uLocal_6621 = 0;
	var uLocal_6622 = 0;
	var uLocal_6623 = 0;
	var uLocal_6624 = 0;
	var uLocal_6625 = 0;
	var uLocal_6626 = 0;
	var uLocal_6627 = 0;
	var uLocal_6628 = 0;
	var uLocal_6629 = 0;
	var uLocal_6630 = 0;
	var uLocal_6631 = 0;
	var uLocal_6632 = 0;
	var uLocal_6633 = 0;
	var uLocal_6634 = 0;
	var uLocal_6635 = 0;
	var uLocal_6636 = 20;
	var uLocal_6637 = 0;
	var uLocal_6638 = 0;
	var uLocal_6639 = 0;
	var uLocal_6640 = 0;
	var uLocal_6641 = 0;
	var uLocal_6642 = 0;
	var uLocal_6643 = 0;
	var uLocal_6644 = 0;
	var uLocal_6645 = 0;
	var uLocal_6646 = 0;
	var uLocal_6647 = 0;
	var uLocal_6648 = 0;
	var uLocal_6649 = 0;
	var uLocal_6650 = 0;
	var uLocal_6651 = 0;
	var uLocal_6652 = 0;
	var uLocal_6653 = 0;
	var uLocal_6654 = 0;
	var uLocal_6655 = 0;
	var uLocal_6656 = 0;
	var uLocal_6657 = 0;
	var uLocal_6658 = 0;
	var uLocal_6659 = 0;
	var uLocal_6660 = 0;
	var uLocal_6661 = 0;
	var uLocal_6662 = 0;
	var uLocal_6663 = 0;
	var uLocal_6664 = 0;
	var uLocal_6665 = 0;
	var uLocal_6666 = 0;
	var uLocal_6667 = 0;
	var uLocal_6668 = 0;
	var uLocal_6669 = 0;
	var uLocal_6670 = 0;
	var uLocal_6671 = 0;
	var uLocal_6672 = 0;
	var uLocal_6673 = 0;
	var uLocal_6674 = 0;
	var uLocal_6675 = 0;
	var uLocal_6676 = 0;
	var uLocal_6677 = 0;
	var uLocal_6678 = 0;
	var uLocal_6679 = 0;
	var uLocal_6680 = 0;
	var uLocal_6681 = 0;
	var uLocal_6682 = 0;
	var uLocal_6683 = 0;
	var uLocal_6684 = 0;
	var uLocal_6685 = 0;
	var uLocal_6686 = 0;
	var uLocal_6687 = 0;
	var uLocal_6688 = 0;
	var uLocal_6689 = 0;
	var uLocal_6690 = 0;
	var uLocal_6691 = 0;
	var uLocal_6692 = 0;
	var uLocal_6693 = 0;
	var uLocal_6694 = 0;
	var uLocal_6695 = 0;
	var uLocal_6696 = 0;
	var uLocal_6697 = 0;
	var uLocal_6698 = 0;
	var uLocal_6699 = 0;
	var uLocal_6700 = 0;
	var uLocal_6701 = 0;
	var uLocal_6702 = 0;
	var uLocal_6703 = 20;
	var uLocal_6704 = 0;
	var uLocal_6705 = 0;
	var uLocal_6706 = 0;
	var uLocal_6707 = 0;
	var uLocal_6708 = 0;
	var uLocal_6709 = 0;
	var uLocal_6710 = 0;
	var uLocal_6711 = 0;
	var uLocal_6712 = 0;
	var uLocal_6713 = 0;
	var uLocal_6714 = 0;
	var uLocal_6715 = 0;
	var uLocal_6716 = 0;
	var uLocal_6717 = 0;
	var uLocal_6718 = 0;
	var uLocal_6719 = 0;
	var uLocal_6720 = 0;
	var uLocal_6721 = 0;
	var uLocal_6722 = 0;
	var uLocal_6723 = 0;
	var uLocal_6724 = 0;
	var uLocal_6725 = 0;
	var uLocal_6726 = 0;
	var uLocal_6727 = 0;
	var uLocal_6728 = 0;
	var uLocal_6729 = 0;
	var uLocal_6730 = 0;
	var uLocal_6731 = 0;
	var uLocal_6732 = 0;
	var uLocal_6733 = 0;
	var uLocal_6734 = 0;
	var uLocal_6735 = 0;
	var uLocal_6736 = 0;
	var uLocal_6737 = 0;
	var uLocal_6738 = 0;
	var uLocal_6739 = 0;
	var uLocal_6740 = 0;
	var uLocal_6741 = 0;
	var uLocal_6742 = 0;
	var uLocal_6743 = 0;
	var uLocal_6744 = 0;
	var uLocal_6745 = 0;
	var uLocal_6746 = 0;
	var uLocal_6747 = 0;
	var uLocal_6748 = 0;
	var uLocal_6749 = 0;
	var uLocal_6750 = 0;
	var uLocal_6751 = 0;
	var uLocal_6752 = 0;
	var uLocal_6753 = 0;
	var uLocal_6754 = 0;
	var uLocal_6755 = 0;
	var uLocal_6756 = 0;
	var uLocal_6757 = 0;
	var uLocal_6758 = 0;
	var uLocal_6759 = 0;
	var uLocal_6760 = 0;
	var uLocal_6761 = 0;
	var uLocal_6762 = 0;
	var uLocal_6763 = 0;
	var uLocal_6764 = 0;
	var uLocal_6765 = 0;
	var uLocal_6766 = 10;
	var uLocal_6767 = 0;
	var uLocal_6768 = 0;
	var uLocal_6769 = 0;
	var uLocal_6770 = 0;
	var uLocal_6771 = 0;
	var uLocal_6772 = 0;
	var uLocal_6773 = 0;
	var uLocal_6774 = 0;
	var uLocal_6775 = 0;
	var uLocal_6776 = 0;
	var uLocal_6777 = 0;
	var uLocal_6778 = 0;
	var uLocal_6779 = 0;
	var uLocal_6780 = 0;
	var uLocal_6781 = 0;
	var uLocal_6782 = 0;
	var uLocal_6783 = 0;
	var uLocal_6784 = 0;
	var uLocal_6785 = 0;
	var uLocal_6786 = 0;
	var uLocal_6787 = 0;
	var uLocal_6788 = 0;
	var uLocal_6789 = 0;
	var uLocal_6790 = 0;
	var uLocal_6791 = 0;
	var uLocal_6792 = 0;
	var uLocal_6793 = 0;
	var uLocal_6794 = 0;
	var uLocal_6795 = 0;
	var uLocal_6796 = 0;
	var uLocal_6797 = 0;
	var uLocal_6798 = 0;
	var uLocal_6799 = 0;
	var uLocal_6800 = 0;
	var uLocal_6801 = 0;
	var uLocal_6802 = 0;
	var uLocal_6803 = 0;
	var uLocal_6804 = 0;
	var uLocal_6805 = 0;
	var uLocal_6806 = 0;
	var uLocal_6807 = 10;
	var uLocal_6808 = 0;
	var uLocal_6809 = 0;
	var uLocal_6810 = 0;
	var uLocal_6811 = 0;
	var uLocal_6812 = 0;
	var uLocal_6813 = 0;
	var uLocal_6814 = 0;
	var uLocal_6815 = 0;
	var uLocal_6816 = 0;
	var uLocal_6817 = 0;
	var uLocal_6818 = 0;
	var uLocal_6819 = 0;
	var uLocal_6820 = 0;
	var uLocal_6821 = 0;
	var uLocal_6822 = 0;
	var uLocal_6823 = 0;
	var uLocal_6824 = 0;
	var uLocal_6825 = 0;
	var uLocal_6826 = 0;
	var uLocal_6827 = 0;
	var uLocal_6828 = 0;
	var uLocal_6829 = 0;
	var uLocal_6830 = 0;
	var uLocal_6831 = 0;
	var uLocal_6832 = 0;
	var uLocal_6833 = 0;
	var uLocal_6834 = 0;
	var uLocal_6835 = 0;
	var uLocal_6836 = 0;
	var uLocal_6837 = 0;
	var uLocal_6838 = 0;
	var uLocal_6839 = 0;
	var uLocal_6840 = 0;
	var uLocal_6841 = 0;
	var uLocal_6842 = 0;
	var uLocal_6843 = 0;
	var uLocal_6844 = 0;
	var uLocal_6845 = 0;
	var uLocal_6846 = 0;
	var uLocal_6847 = 0;
	var uLocal_6848 = 0;
	var uLocal_6849 = 0;
	var uLocal_6850 = 0;
	var uLocal_6851 = 0;
	var uLocal_6852 = 0;
	var uLocal_6853 = 0;
	var uLocal_6854 = 0;
	var uLocal_6855 = 0;
	var uLocal_6856 = 0;
	var uLocal_6857 = 0;
	var uLocal_6858 = 3;
	var uLocal_6859 = 0;
	var uLocal_6860 = 0;
	var uLocal_6861 = 0;
	var uLocal_6862 = 0;
	var uLocal_6863 = 0;
	var uLocal_6864 = 0;
	var uLocal_6865 = 0;
	var uLocal_6866 = 0;
	var uLocal_6867 = 0;
	var uLocal_6868 = 5;
	var uLocal_6869 = 0;
	var uLocal_6870 = 0;
	var uLocal_6871 = 0;
	var uLocal_6872 = 0;
	var uLocal_6873 = 0;
	var uLocal_6874 = 0;
	var uLocal_6875 = 0;
	var uLocal_6876 = 0;
	var uLocal_6877 = 0;
	var uLocal_6878 = 0;
	var uLocal_6879 = 0;
	var uLocal_6880 = 0;
	var uLocal_6881 = 0;
	var uLocal_6882 = 0;
	var uLocal_6883 = 0;
	var uLocal_6884 = 5;
	var uLocal_6885 = 0;
	var uLocal_6886 = 0;
	var uLocal_6887 = 0;
	var uLocal_6888 = 0;
	var uLocal_6889 = 0;
	var uLocal_6890 = 0;
	var uLocal_6891 = 0;
	var uLocal_6892 = 0;
	var uLocal_6893 = 0;
	var uLocal_6894 = 0;
	var uLocal_6895 = 0;
	var uLocal_6896 = 0;
	var uLocal_6897 = 0;
	var uLocal_6898 = 0;
	var uLocal_6899 = 0;
	var uLocal_6900 = 0;
	var uLocal_6901 = 0;
	var uLocal_6902 = 0;
	var uLocal_6903 = 0;
	var uLocal_6904 = 0;
	var uLocal_6905 = 5;
	var uLocal_6906 = 0;
	var uLocal_6907 = 0;
	var uLocal_6908 = 0;
	var uLocal_6909 = 0;
	var uLocal_6910 = 0;
	var uLocal_6911 = 0;
	var uLocal_6912 = 0;
	var uLocal_6913 = 0;
	var uLocal_6914 = 0;
	var uLocal_6915 = 0;
	var uLocal_6916 = 0;
	var uLocal_6917 = 0;
	var uLocal_6918 = 0;
	var uLocal_6919 = 0;
	var uLocal_6920 = 0;
	var uLocal_6921 = 0;
	var uLocal_6922 = 0;
	var uLocal_6923 = 0;
	var uLocal_6924 = 0;
	var uLocal_6925 = 0;
	var uLocal_6926 = 0;
	var uLocal_6927 = 0;
	var uLocal_6928 = 0;
	var uLocal_6929 = 24;
	var uLocal_6930 = 0;
	var uLocal_6931 = 0;
	var uLocal_6932 = 0;
	var uLocal_6933 = 0;
	var uLocal_6934 = 0;
	var uLocal_6935 = 0;
	var uLocal_6936 = 0;
	var uLocal_6937 = 0;
	var uLocal_6938 = 0;
	var uLocal_6939 = 0;
	var uLocal_6940 = 0;
	var uLocal_6941 = 0;
	var uLocal_6942 = 0;
	var uLocal_6943 = 0;
	var uLocal_6944 = 0;
	var uLocal_6945 = 0;
	var uLocal_6946 = 0;
	var uLocal_6947 = 0;
	var uLocal_6948 = 0;
	var uLocal_6949 = 0;
	var uLocal_6950 = 0;
	var uLocal_6951 = 0;
	var uLocal_6952 = 0;
	var uLocal_6953 = 0;
	var uLocal_6954 = 0;
	var uLocal_6955 = 0;
	var uLocal_6956 = 0;
	var uLocal_6957 = 0;
	var uLocal_6958 = 0;
	var uLocal_6959 = 0;
	var uLocal_6960 = 0;
	var uLocal_6961 = 0;
	var uLocal_6962 = 0;
	var uLocal_6963 = 0;
	var uLocal_6964 = 0;
	var uLocal_6965 = 0;
	var uLocal_6966 = 0;
	var uLocal_6967 = 0;
	var uLocal_6968 = 0;
	var uLocal_6969 = 0;
	var uLocal_6970 = 0;
	var uLocal_6971 = 0;
	var uLocal_6972 = 0;
	var uLocal_6973 = 0;
	var uLocal_6974 = 0;
	var uLocal_6975 = 0;
	var uLocal_6976 = 0;
	var uLocal_6977 = 0;
	var uLocal_6978 = 0;
	var uLocal_6979 = 0;
	var uLocal_6980 = 0;
	var uLocal_6981 = 0;
	var uLocal_6982 = 0;
	var uLocal_6983 = 0;
	var uLocal_6984 = 0;
	var uLocal_6985 = 0;
	var uLocal_6986 = 0;
	var uLocal_6987 = 0;
	var uLocal_6988 = 0;
	var uLocal_6989 = 0;
	var uLocal_6990 = 0;
	var uLocal_6991 = 0;
	var uLocal_6992 = 0;
	var uLocal_6993 = 0;
	var uLocal_6994 = 0;
	var uLocal_6995 = 0;
	var uLocal_6996 = 0;
	var uLocal_6997 = 0;
	var uLocal_6998 = 0;
	var uLocal_6999 = 0;
	var uLocal_7000 = 0;
	var uLocal_7001 = 0;
	var uLocal_7002 = 0;
	var uLocal_7003 = 0;
	var uLocal_7004 = 0;
	var uLocal_7005 = 0;
	var uLocal_7006 = 0;
	var uLocal_7007 = 0;
	var uLocal_7008 = 0;
	var uLocal_7009 = 0;
	var uLocal_7010 = 0;
	var uLocal_7011 = 0;
	var uLocal_7012 = 0;
	var uLocal_7013 = 0;
	var uLocal_7014 = 0;
	var uLocal_7015 = 0;
	var uLocal_7016 = 0;
	var uLocal_7017 = 0;
	var uLocal_7018 = 0;
	var uLocal_7019 = 0;
	var uLocal_7020 = 0;
	var uLocal_7021 = 0;
	var uLocal_7022 = 0;
	var uLocal_7023 = 0;
	var uLocal_7024 = 0;
	var uLocal_7025 = 0;
	var uLocal_7026 = 0;
	var uLocal_7027 = 0;
	var uLocal_7028 = 0;
	var uLocal_7029 = 0;
	var uLocal_7030 = 0;
	var uLocal_7031 = 0;
	var uLocal_7032 = 0;
	var uLocal_7033 = 0;
	var uLocal_7034 = 0;
	var uLocal_7035 = 0;
	var uLocal_7036 = 0;
	var uLocal_7037 = 0;
	var uLocal_7038 = 0;
	var uLocal_7039 = 0;
	var uLocal_7040 = 0;
	var uLocal_7041 = 0;
	var uLocal_7042 = 30;
	var uLocal_7043 = 0;
	var uLocal_7044 = 0;
	var uLocal_7045 = 0;
	var uLocal_7046 = 0;
	var uLocal_7047 = 0;
	var uLocal_7048 = 3;
	var uLocal_7049 = 0;
	var uLocal_7050 = 0;
	var uLocal_7051 = 0;
	var uLocal_7052 = 0;
	var uLocal_7053 = -1;
	var uLocal_7054 = 0;
	var uLocal_7055 = 5;
	var uLocal_7056 = 0;
	var uLocal_7057 = 0;
	var uLocal_7058 = 0;
	var uLocal_7059 = 0;
	var uLocal_7060 = 0;
	var uLocal_7061 = 0;
	var uLocal_7062 = 0;
	var uLocal_7063 = 0;
	var uLocal_7064 = 0;
	var uLocal_7065 = 0;
	var uLocal_7066 = 10;
	var uLocal_7067 = 3;
	var uLocal_7068 = 500;
	var uLocal_7069 = 10000;
	var uLocal_7070 = 0;
	var uLocal_7071 = 3;
	var uLocal_7072 = 500;
	var uLocal_7073 = 10000;
	var uLocal_7074 = 0;
	var uLocal_7075 = 3;
	var uLocal_7076 = 500;
	var uLocal_7077 = 10000;
	var uLocal_7078 = 0;
	var uLocal_7079 = 3;
	var uLocal_7080 = 500;
	var uLocal_7081 = 10000;
	var uLocal_7082 = 0;
	var uLocal_7083 = 3;
	var uLocal_7084 = 500;
	var uLocal_7085 = 10000;
	var uLocal_7086 = 0;
	var uLocal_7087 = 3;
	var uLocal_7088 = 500;
	var uLocal_7089 = 10000;
	var uLocal_7090 = 0;
	var uLocal_7091 = 3;
	var uLocal_7092 = 500;
	var uLocal_7093 = 10000;
	var uLocal_7094 = 0;
	var uLocal_7095 = 3;
	var uLocal_7096 = 500;
	var uLocal_7097 = 10000;
	var uLocal_7098 = 0;
	var uLocal_7099 = 3;
	var uLocal_7100 = 500;
	var uLocal_7101 = 10000;
	var uLocal_7102 = 0;
	var uLocal_7103 = 3;
	var uLocal_7104 = 500;
	var uLocal_7105 = 10000;
	var uLocal_7106 = 0;
	var uLocal_7107 = 0;
	var uLocal_7108 = 0;
	var uLocal_7109 = 0;
	var uLocal_7110 = 0;
	var uLocal_7111 = 0;
	var uLocal_7112 = 0;
	var uLocal_7113 = 3;
	var uLocal_7114 = 0;
	var uLocal_7115 = 0;
	var uLocal_7116 = 0;
	var uLocal_7117 = 0;
	var uLocal_7118 = -1;
	var uLocal_7119 = 0;
	var uLocal_7120 = 5;
	var uLocal_7121 = 0;
	var uLocal_7122 = 0;
	var uLocal_7123 = 0;
	var uLocal_7124 = 0;
	var uLocal_7125 = 0;
	var uLocal_7126 = 0;
	var uLocal_7127 = 0;
	var uLocal_7128 = 0;
	var uLocal_7129 = 0;
	var uLocal_7130 = 0;
	var uLocal_7131 = 10;
	var uLocal_7132 = 3;
	var uLocal_7133 = 500;
	var uLocal_7134 = 10000;
	var uLocal_7135 = 0;
	var uLocal_7136 = 3;
	var uLocal_7137 = 500;
	var uLocal_7138 = 10000;
	var uLocal_7139 = 0;
	var uLocal_7140 = 3;
	var uLocal_7141 = 500;
	var uLocal_7142 = 10000;
	var uLocal_7143 = 0;
	var uLocal_7144 = 3;
	var uLocal_7145 = 500;
	var uLocal_7146 = 10000;
	var uLocal_7147 = 0;
	var uLocal_7148 = 3;
	var uLocal_7149 = 500;
	var uLocal_7150 = 10000;
	var uLocal_7151 = 0;
	var uLocal_7152 = 3;
	var uLocal_7153 = 500;
	var uLocal_7154 = 10000;
	var uLocal_7155 = 0;
	var uLocal_7156 = 3;
	var uLocal_7157 = 500;
	var uLocal_7158 = 10000;
	var uLocal_7159 = 0;
	var uLocal_7160 = 3;
	var uLocal_7161 = 500;
	var uLocal_7162 = 10000;
	var uLocal_7163 = 0;
	var uLocal_7164 = 3;
	var uLocal_7165 = 500;
	var uLocal_7166 = 10000;
	var uLocal_7167 = 0;
	var uLocal_7168 = 3;
	var uLocal_7169 = 500;
	var uLocal_7170 = 10000;
	var uLocal_7171 = 0;
	var uLocal_7172 = 0;
	var uLocal_7173 = 0;
	var uLocal_7174 = 0;
	var uLocal_7175 = 0;
	var uLocal_7176 = 0;
	var uLocal_7177 = 0;
	var uLocal_7178 = 3;
	var uLocal_7179 = 0;
	var uLocal_7180 = 0;
	var uLocal_7181 = 0;
	var uLocal_7182 = 0;
	var uLocal_7183 = -1;
	var uLocal_7184 = 0;
	var uLocal_7185 = 5;
	var uLocal_7186 = 0;
	var uLocal_7187 = 0;
	var uLocal_7188 = 0;
	var uLocal_7189 = 0;
	var uLocal_7190 = 0;
	var uLocal_7191 = 0;
	var uLocal_7192 = 0;
	var uLocal_7193 = 0;
	var uLocal_7194 = 0;
	var uLocal_7195 = 0;
	var uLocal_7196 = 10;
	var uLocal_7197 = 3;
	var uLocal_7198 = 500;
	var uLocal_7199 = 10000;
	var uLocal_7200 = 0;
	var uLocal_7201 = 3;
	var uLocal_7202 = 500;
	var uLocal_7203 = 10000;
	var uLocal_7204 = 0;
	var uLocal_7205 = 3;
	var uLocal_7206 = 500;
	var uLocal_7207 = 10000;
	var uLocal_7208 = 0;
	var uLocal_7209 = 3;
	var uLocal_7210 = 500;
	var uLocal_7211 = 10000;
	var uLocal_7212 = 0;
	var uLocal_7213 = 3;
	var uLocal_7214 = 500;
	var uLocal_7215 = 10000;
	var uLocal_7216 = 0;
	var uLocal_7217 = 3;
	var uLocal_7218 = 500;
	var uLocal_7219 = 10000;
	var uLocal_7220 = 0;
	var uLocal_7221 = 3;
	var uLocal_7222 = 500;
	var uLocal_7223 = 10000;
	var uLocal_7224 = 0;
	var uLocal_7225 = 3;
	var uLocal_7226 = 500;
	var uLocal_7227 = 10000;
	var uLocal_7228 = 0;
	var uLocal_7229 = 3;
	var uLocal_7230 = 500;
	var uLocal_7231 = 10000;
	var uLocal_7232 = 0;
	var uLocal_7233 = 3;
	var uLocal_7234 = 500;
	var uLocal_7235 = 10000;
	var uLocal_7236 = 0;
	var uLocal_7237 = 0;
	var uLocal_7238 = 0;
	var uLocal_7239 = 0;
	var uLocal_7240 = 0;
	var uLocal_7241 = 0;
	var uLocal_7242 = 0;
	var uLocal_7243 = 3;
	var uLocal_7244 = 0;
	var uLocal_7245 = 0;
	var uLocal_7246 = 0;
	var uLocal_7247 = 0;
	var uLocal_7248 = -1;
	var uLocal_7249 = 0;
	var uLocal_7250 = 5;
	var uLocal_7251 = 0;
	var uLocal_7252 = 0;
	var uLocal_7253 = 0;
	var uLocal_7254 = 0;
	var uLocal_7255 = 0;
	var uLocal_7256 = 0;
	var uLocal_7257 = 0;
	var uLocal_7258 = 0;
	var uLocal_7259 = 0;
	var uLocal_7260 = 0;
	var uLocal_7261 = 10;
	var uLocal_7262 = 3;
	var uLocal_7263 = 500;
	var uLocal_7264 = 10000;
	var uLocal_7265 = 0;
	var uLocal_7266 = 3;
	var uLocal_7267 = 500;
	var uLocal_7268 = 10000;
	var uLocal_7269 = 0;
	var uLocal_7270 = 3;
	var uLocal_7271 = 500;
	var uLocal_7272 = 10000;
	var uLocal_7273 = 0;
	var uLocal_7274 = 3;
	var uLocal_7275 = 500;
	var uLocal_7276 = 10000;
	var uLocal_7277 = 0;
	var uLocal_7278 = 3;
	var uLocal_7279 = 500;
	var uLocal_7280 = 10000;
	var uLocal_7281 = 0;
	var uLocal_7282 = 3;
	var uLocal_7283 = 500;
	var uLocal_7284 = 10000;
	var uLocal_7285 = 0;
	var uLocal_7286 = 3;
	var uLocal_7287 = 500;
	var uLocal_7288 = 10000;
	var uLocal_7289 = 0;
	var uLocal_7290 = 3;
	var uLocal_7291 = 500;
	var uLocal_7292 = 10000;
	var uLocal_7293 = 0;
	var uLocal_7294 = 3;
	var uLocal_7295 = 500;
	var uLocal_7296 = 10000;
	var uLocal_7297 = 0;
	var uLocal_7298 = 3;
	var uLocal_7299 = 500;
	var uLocal_7300 = 10000;
	var uLocal_7301 = 0;
	var uLocal_7302 = 0;
	var uLocal_7303 = 0;
	var uLocal_7304 = 0;
	var uLocal_7305 = 0;
	var uLocal_7306 = 0;
	var uLocal_7307 = 0;
	var uLocal_7308 = 3;
	var uLocal_7309 = 0;
	var uLocal_7310 = 0;
	var uLocal_7311 = 0;
	var uLocal_7312 = 0;
	var uLocal_7313 = -1;
	var uLocal_7314 = 0;
	var uLocal_7315 = 5;
	var uLocal_7316 = 0;
	var uLocal_7317 = 0;
	var uLocal_7318 = 0;
	var uLocal_7319 = 0;
	var uLocal_7320 = 0;
	var uLocal_7321 = 0;
	var uLocal_7322 = 0;
	var uLocal_7323 = 0;
	var uLocal_7324 = 0;
	var uLocal_7325 = 0;
	var uLocal_7326 = 10;
	var uLocal_7327 = 3;
	var uLocal_7328 = 500;
	var uLocal_7329 = 10000;
	var uLocal_7330 = 0;
	var uLocal_7331 = 3;
	var uLocal_7332 = 500;
	var uLocal_7333 = 10000;
	var uLocal_7334 = 0;
	var uLocal_7335 = 3;
	var uLocal_7336 = 500;
	var uLocal_7337 = 10000;
	var uLocal_7338 = 0;
	var uLocal_7339 = 3;
	var uLocal_7340 = 500;
	var uLocal_7341 = 10000;
	var uLocal_7342 = 0;
	var uLocal_7343 = 3;
	var uLocal_7344 = 500;
	var uLocal_7345 = 10000;
	var uLocal_7346 = 0;
	var uLocal_7347 = 3;
	var uLocal_7348 = 500;
	var uLocal_7349 = 10000;
	var uLocal_7350 = 0;
	var uLocal_7351 = 3;
	var uLocal_7352 = 500;
	var uLocal_7353 = 10000;
	var uLocal_7354 = 0;
	var uLocal_7355 = 3;
	var uLocal_7356 = 500;
	var uLocal_7357 = 10000;
	var uLocal_7358 = 0;
	var uLocal_7359 = 3;
	var uLocal_7360 = 500;
	var uLocal_7361 = 10000;
	var uLocal_7362 = 0;
	var uLocal_7363 = 3;
	var uLocal_7364 = 500;
	var uLocal_7365 = 10000;
	var uLocal_7366 = 0;
	var uLocal_7367 = 0;
	var uLocal_7368 = 0;
	var uLocal_7369 = 0;
	var uLocal_7370 = 0;
	var uLocal_7371 = 0;
	var uLocal_7372 = 0;
	var uLocal_7373 = 3;
	var uLocal_7374 = 0;
	var uLocal_7375 = 0;
	var uLocal_7376 = 0;
	var uLocal_7377 = 0;
	var uLocal_7378 = -1;
	var uLocal_7379 = 0;
	var uLocal_7380 = 5;
	var uLocal_7381 = 0;
	var uLocal_7382 = 0;
	var uLocal_7383 = 0;
	var uLocal_7384 = 0;
	var uLocal_7385 = 0;
	var uLocal_7386 = 0;
	var uLocal_7387 = 0;
	var uLocal_7388 = 0;
	var uLocal_7389 = 0;
	var uLocal_7390 = 0;
	var uLocal_7391 = 10;
	var uLocal_7392 = 3;
	var uLocal_7393 = 500;
	var uLocal_7394 = 10000;
	var uLocal_7395 = 0;
	var uLocal_7396 = 3;
	var uLocal_7397 = 500;
	var uLocal_7398 = 10000;
	var uLocal_7399 = 0;
	var uLocal_7400 = 3;
	var uLocal_7401 = 500;
	var uLocal_7402 = 10000;
	var uLocal_7403 = 0;
	var uLocal_7404 = 3;
	var uLocal_7405 = 500;
	var uLocal_7406 = 10000;
	var uLocal_7407 = 0;
	var uLocal_7408 = 3;
	var uLocal_7409 = 500;
	var uLocal_7410 = 10000;
	var uLocal_7411 = 0;
	var uLocal_7412 = 3;
	var uLocal_7413 = 500;
	var uLocal_7414 = 10000;
	var uLocal_7415 = 0;
	var uLocal_7416 = 3;
	var uLocal_7417 = 500;
	var uLocal_7418 = 10000;
	var uLocal_7419 = 0;
	var uLocal_7420 = 3;
	var uLocal_7421 = 500;
	var uLocal_7422 = 10000;
	var uLocal_7423 = 0;
	var uLocal_7424 = 3;
	var uLocal_7425 = 500;
	var uLocal_7426 = 10000;
	var uLocal_7427 = 0;
	var uLocal_7428 = 3;
	var uLocal_7429 = 500;
	var uLocal_7430 = 10000;
	var uLocal_7431 = 0;
	var uLocal_7432 = 0;
	var uLocal_7433 = 0;
	var uLocal_7434 = 0;
	var uLocal_7435 = 0;
	var uLocal_7436 = 0;
	var uLocal_7437 = 0;
	var uLocal_7438 = 3;
	var uLocal_7439 = 0;
	var uLocal_7440 = 0;
	var uLocal_7441 = 0;
	var uLocal_7442 = 0;
	var uLocal_7443 = -1;
	var uLocal_7444 = 0;
	var uLocal_7445 = 5;
	var uLocal_7446 = 0;
	var uLocal_7447 = 0;
	var uLocal_7448 = 0;
	var uLocal_7449 = 0;
	var uLocal_7450 = 0;
	var uLocal_7451 = 0;
	var uLocal_7452 = 0;
	var uLocal_7453 = 0;
	var uLocal_7454 = 0;
	var uLocal_7455 = 0;
	var uLocal_7456 = 10;
	var uLocal_7457 = 3;
	var uLocal_7458 = 500;
	var uLocal_7459 = 10000;
	var uLocal_7460 = 0;
	var uLocal_7461 = 3;
	var uLocal_7462 = 500;
	var uLocal_7463 = 10000;
	var uLocal_7464 = 0;
	var uLocal_7465 = 3;
	var uLocal_7466 = 500;
	var uLocal_7467 = 10000;
	var uLocal_7468 = 0;
	var uLocal_7469 = 3;
	var uLocal_7470 = 500;
	var uLocal_7471 = 10000;
	var uLocal_7472 = 0;
	var uLocal_7473 = 3;
	var uLocal_7474 = 500;
	var uLocal_7475 = 10000;
	var uLocal_7476 = 0;
	var uLocal_7477 = 3;
	var uLocal_7478 = 500;
	var uLocal_7479 = 10000;
	var uLocal_7480 = 0;
	var uLocal_7481 = 3;
	var uLocal_7482 = 500;
	var uLocal_7483 = 10000;
	var uLocal_7484 = 0;
	var uLocal_7485 = 3;
	var uLocal_7486 = 500;
	var uLocal_7487 = 10000;
	var uLocal_7488 = 0;
	var uLocal_7489 = 3;
	var uLocal_7490 = 500;
	var uLocal_7491 = 10000;
	var uLocal_7492 = 0;
	var uLocal_7493 = 3;
	var uLocal_7494 = 500;
	var uLocal_7495 = 10000;
	var uLocal_7496 = 0;
	var uLocal_7497 = 0;
	var uLocal_7498 = 0;
	var uLocal_7499 = 0;
	var uLocal_7500 = 0;
	var uLocal_7501 = 0;
	var uLocal_7502 = 0;
	var uLocal_7503 = 3;
	var uLocal_7504 = 0;
	var uLocal_7505 = 0;
	var uLocal_7506 = 0;
	var uLocal_7507 = 0;
	var uLocal_7508 = -1;
	var uLocal_7509 = 0;
	var uLocal_7510 = 5;
	var uLocal_7511 = 0;
	var uLocal_7512 = 0;
	var uLocal_7513 = 0;
	var uLocal_7514 = 0;
	var uLocal_7515 = 0;
	var uLocal_7516 = 0;
	var uLocal_7517 = 0;
	var uLocal_7518 = 0;
	var uLocal_7519 = 0;
	var uLocal_7520 = 0;
	var uLocal_7521 = 10;
	var uLocal_7522 = 3;
	var uLocal_7523 = 500;
	var uLocal_7524 = 10000;
	var uLocal_7525 = 0;
	var uLocal_7526 = 3;
	var uLocal_7527 = 500;
	var uLocal_7528 = 10000;
	var uLocal_7529 = 0;
	var uLocal_7530 = 3;
	var uLocal_7531 = 500;
	var uLocal_7532 = 10000;
	var uLocal_7533 = 0;
	var uLocal_7534 = 3;
	var uLocal_7535 = 500;
	var uLocal_7536 = 10000;
	var uLocal_7537 = 0;
	var uLocal_7538 = 3;
	var uLocal_7539 = 500;
	var uLocal_7540 = 10000;
	var uLocal_7541 = 0;
	var uLocal_7542 = 3;
	var uLocal_7543 = 500;
	var uLocal_7544 = 10000;
	var uLocal_7545 = 0;
	var uLocal_7546 = 3;
	var uLocal_7547 = 500;
	var uLocal_7548 = 10000;
	var uLocal_7549 = 0;
	var uLocal_7550 = 3;
	var uLocal_7551 = 500;
	var uLocal_7552 = 10000;
	var uLocal_7553 = 0;
	var uLocal_7554 = 3;
	var uLocal_7555 = 500;
	var uLocal_7556 = 10000;
	var uLocal_7557 = 0;
	var uLocal_7558 = 3;
	var uLocal_7559 = 500;
	var uLocal_7560 = 10000;
	var uLocal_7561 = 0;
	var uLocal_7562 = 0;
	var uLocal_7563 = 0;
	var uLocal_7564 = 0;
	var uLocal_7565 = 0;
	var uLocal_7566 = 0;
	var uLocal_7567 = 0;
	var uLocal_7568 = 3;
	var uLocal_7569 = 0;
	var uLocal_7570 = 0;
	var uLocal_7571 = 0;
	var uLocal_7572 = 0;
	var uLocal_7573 = -1;
	var uLocal_7574 = 0;
	var uLocal_7575 = 5;
	var uLocal_7576 = 0;
	var uLocal_7577 = 0;
	var uLocal_7578 = 0;
	var uLocal_7579 = 0;
	var uLocal_7580 = 0;
	var uLocal_7581 = 0;
	var uLocal_7582 = 0;
	var uLocal_7583 = 0;
	var uLocal_7584 = 0;
	var uLocal_7585 = 0;
	var uLocal_7586 = 10;
	var uLocal_7587 = 3;
	var uLocal_7588 = 500;
	var uLocal_7589 = 10000;
	var uLocal_7590 = 0;
	var uLocal_7591 = 3;
	var uLocal_7592 = 500;
	var uLocal_7593 = 10000;
	var uLocal_7594 = 0;
	var uLocal_7595 = 3;
	var uLocal_7596 = 500;
	var uLocal_7597 = 10000;
	var uLocal_7598 = 0;
	var uLocal_7599 = 3;
	var uLocal_7600 = 500;
	var uLocal_7601 = 10000;
	var uLocal_7602 = 0;
	var uLocal_7603 = 3;
	var uLocal_7604 = 500;
	var uLocal_7605 = 10000;
	var uLocal_7606 = 0;
	var uLocal_7607 = 3;
	var uLocal_7608 = 500;
	var uLocal_7609 = 10000;
	var uLocal_7610 = 0;
	var uLocal_7611 = 3;
	var uLocal_7612 = 500;
	var uLocal_7613 = 10000;
	var uLocal_7614 = 0;
	var uLocal_7615 = 3;
	var uLocal_7616 = 500;
	var uLocal_7617 = 10000;
	var uLocal_7618 = 0;
	var uLocal_7619 = 3;
	var uLocal_7620 = 500;
	var uLocal_7621 = 10000;
	var uLocal_7622 = 0;
	var uLocal_7623 = 3;
	var uLocal_7624 = 500;
	var uLocal_7625 = 10000;
	var uLocal_7626 = 0;
	var uLocal_7627 = 0;
	var uLocal_7628 = 0;
	var uLocal_7629 = 0;
	var uLocal_7630 = 0;
	var uLocal_7631 = 0;
	var uLocal_7632 = 0;
	var uLocal_7633 = 3;
	var uLocal_7634 = 0;
	var uLocal_7635 = 0;
	var uLocal_7636 = 0;
	var uLocal_7637 = 0;
	var uLocal_7638 = -1;
	var uLocal_7639 = 0;
	var uLocal_7640 = 5;
	var uLocal_7641 = 0;
	var uLocal_7642 = 0;
	var uLocal_7643 = 0;
	var uLocal_7644 = 0;
	var uLocal_7645 = 0;
	var uLocal_7646 = 0;
	var uLocal_7647 = 0;
	var uLocal_7648 = 0;
	var uLocal_7649 = 0;
	var uLocal_7650 = 0;
	var uLocal_7651 = 10;
	var uLocal_7652 = 3;
	var uLocal_7653 = 500;
	var uLocal_7654 = 10000;
	var uLocal_7655 = 0;
	var uLocal_7656 = 3;
	var uLocal_7657 = 500;
	var uLocal_7658 = 10000;
	var uLocal_7659 = 0;
	var uLocal_7660 = 3;
	var uLocal_7661 = 500;
	var uLocal_7662 = 10000;
	var uLocal_7663 = 0;
	var uLocal_7664 = 3;
	var uLocal_7665 = 500;
	var uLocal_7666 = 10000;
	var uLocal_7667 = 0;
	var uLocal_7668 = 3;
	var uLocal_7669 = 500;
	var uLocal_7670 = 10000;
	var uLocal_7671 = 0;
	var uLocal_7672 = 3;
	var uLocal_7673 = 500;
	var uLocal_7674 = 10000;
	var uLocal_7675 = 0;
	var uLocal_7676 = 3;
	var uLocal_7677 = 500;
	var uLocal_7678 = 10000;
	var uLocal_7679 = 0;
	var uLocal_7680 = 3;
	var uLocal_7681 = 500;
	var uLocal_7682 = 10000;
	var uLocal_7683 = 0;
	var uLocal_7684 = 3;
	var uLocal_7685 = 500;
	var uLocal_7686 = 10000;
	var uLocal_7687 = 0;
	var uLocal_7688 = 3;
	var uLocal_7689 = 500;
	var uLocal_7690 = 10000;
	var uLocal_7691 = 0;
	var uLocal_7692 = 0;
	var uLocal_7693 = 0;
	var uLocal_7694 = 0;
	var uLocal_7695 = 0;
	var uLocal_7696 = 0;
	var uLocal_7697 = 0;
	var uLocal_7698 = 3;
	var uLocal_7699 = 0;
	var uLocal_7700 = 0;
	var uLocal_7701 = 0;
	var uLocal_7702 = 0;
	var uLocal_7703 = -1;
	var uLocal_7704 = 0;
	var uLocal_7705 = 5;
	var uLocal_7706 = 0;
	var uLocal_7707 = 0;
	var uLocal_7708 = 0;
	var uLocal_7709 = 0;
	var uLocal_7710 = 0;
	var uLocal_7711 = 0;
	var uLocal_7712 = 0;
	var uLocal_7713 = 0;
	var uLocal_7714 = 0;
	var uLocal_7715 = 0;
	var uLocal_7716 = 10;
	var uLocal_7717 = 3;
	var uLocal_7718 = 500;
	var uLocal_7719 = 10000;
	var uLocal_7720 = 0;
	var uLocal_7721 = 3;
	var uLocal_7722 = 500;
	var uLocal_7723 = 10000;
	var uLocal_7724 = 0;
	var uLocal_7725 = 3;
	var uLocal_7726 = 500;
	var uLocal_7727 = 10000;
	var uLocal_7728 = 0;
	var uLocal_7729 = 3;
	var uLocal_7730 = 500;
	var uLocal_7731 = 10000;
	var uLocal_7732 = 0;
	var uLocal_7733 = 3;
	var uLocal_7734 = 500;
	var uLocal_7735 = 10000;
	var uLocal_7736 = 0;
	var uLocal_7737 = 3;
	var uLocal_7738 = 500;
	var uLocal_7739 = 10000;
	var uLocal_7740 = 0;
	var uLocal_7741 = 3;
	var uLocal_7742 = 500;
	var uLocal_7743 = 10000;
	var uLocal_7744 = 0;
	var uLocal_7745 = 3;
	var uLocal_7746 = 500;
	var uLocal_7747 = 10000;
	var uLocal_7748 = 0;
	var uLocal_7749 = 3;
	var uLocal_7750 = 500;
	var uLocal_7751 = 10000;
	var uLocal_7752 = 0;
	var uLocal_7753 = 3;
	var uLocal_7754 = 500;
	var uLocal_7755 = 10000;
	var uLocal_7756 = 0;
	var uLocal_7757 = 0;
	var uLocal_7758 = 0;
	var uLocal_7759 = 0;
	var uLocal_7760 = 0;
	var uLocal_7761 = 0;
	var uLocal_7762 = 0;
	var uLocal_7763 = 3;
	var uLocal_7764 = 0;
	var uLocal_7765 = 0;
	var uLocal_7766 = 0;
	var uLocal_7767 = 0;
	var uLocal_7768 = -1;
	var uLocal_7769 = 0;
	var uLocal_7770 = 5;
	var uLocal_7771 = 0;
	var uLocal_7772 = 0;
	var uLocal_7773 = 0;
	var uLocal_7774 = 0;
	var uLocal_7775 = 0;
	var uLocal_7776 = 0;
	var uLocal_7777 = 0;
	var uLocal_7778 = 0;
	var uLocal_7779 = 0;
	var uLocal_7780 = 0;
	var uLocal_7781 = 10;
	var uLocal_7782 = 3;
	var uLocal_7783 = 500;
	var uLocal_7784 = 10000;
	var uLocal_7785 = 0;
	var uLocal_7786 = 3;
	var uLocal_7787 = 500;
	var uLocal_7788 = 10000;
	var uLocal_7789 = 0;
	var uLocal_7790 = 3;
	var uLocal_7791 = 500;
	var uLocal_7792 = 10000;
	var uLocal_7793 = 0;
	var uLocal_7794 = 3;
	var uLocal_7795 = 500;
	var uLocal_7796 = 10000;
	var uLocal_7797 = 0;
	var uLocal_7798 = 3;
	var uLocal_7799 = 500;
	var uLocal_7800 = 10000;
	var uLocal_7801 = 0;
	var uLocal_7802 = 3;
	var uLocal_7803 = 500;
	var uLocal_7804 = 10000;
	var uLocal_7805 = 0;
	var uLocal_7806 = 3;
	var uLocal_7807 = 500;
	var uLocal_7808 = 10000;
	var uLocal_7809 = 0;
	var uLocal_7810 = 3;
	var uLocal_7811 = 500;
	var uLocal_7812 = 10000;
	var uLocal_7813 = 0;
	var uLocal_7814 = 3;
	var uLocal_7815 = 500;
	var uLocal_7816 = 10000;
	var uLocal_7817 = 0;
	var uLocal_7818 = 3;
	var uLocal_7819 = 500;
	var uLocal_7820 = 10000;
	var uLocal_7821 = 0;
	var uLocal_7822 = 0;
	var uLocal_7823 = 0;
	var uLocal_7824 = 0;
	var uLocal_7825 = 0;
	var uLocal_7826 = 0;
	var uLocal_7827 = 0;
	var uLocal_7828 = 3;
	var uLocal_7829 = 0;
	var uLocal_7830 = 0;
	var uLocal_7831 = 0;
	var uLocal_7832 = 0;
	var uLocal_7833 = -1;
	var uLocal_7834 = 0;
	var uLocal_7835 = 5;
	var uLocal_7836 = 0;
	var uLocal_7837 = 0;
	var uLocal_7838 = 0;
	var uLocal_7839 = 0;
	var uLocal_7840 = 0;
	var uLocal_7841 = 0;
	var uLocal_7842 = 0;
	var uLocal_7843 = 0;
	var uLocal_7844 = 0;
	var uLocal_7845 = 0;
	var uLocal_7846 = 10;
	var uLocal_7847 = 3;
	var uLocal_7848 = 500;
	var uLocal_7849 = 10000;
	var uLocal_7850 = 0;
	var uLocal_7851 = 3;
	var uLocal_7852 = 500;
	var uLocal_7853 = 10000;
	var uLocal_7854 = 0;
	var uLocal_7855 = 3;
	var uLocal_7856 = 500;
	var uLocal_7857 = 10000;
	var uLocal_7858 = 0;
	var uLocal_7859 = 3;
	var uLocal_7860 = 500;
	var uLocal_7861 = 10000;
	var uLocal_7862 = 0;
	var uLocal_7863 = 3;
	var uLocal_7864 = 500;
	var uLocal_7865 = 10000;
	var uLocal_7866 = 0;
	var uLocal_7867 = 3;
	var uLocal_7868 = 500;
	var uLocal_7869 = 10000;
	var uLocal_7870 = 0;
	var uLocal_7871 = 3;
	var uLocal_7872 = 500;
	var uLocal_7873 = 10000;
	var uLocal_7874 = 0;
	var uLocal_7875 = 3;
	var uLocal_7876 = 500;
	var uLocal_7877 = 10000;
	var uLocal_7878 = 0;
	var uLocal_7879 = 3;
	var uLocal_7880 = 500;
	var uLocal_7881 = 10000;
	var uLocal_7882 = 0;
	var uLocal_7883 = 3;
	var uLocal_7884 = 500;
	var uLocal_7885 = 10000;
	var uLocal_7886 = 0;
	var uLocal_7887 = 0;
	var uLocal_7888 = 0;
	var uLocal_7889 = 0;
	var uLocal_7890 = 0;
	var uLocal_7891 = 0;
	var uLocal_7892 = 0;
	var uLocal_7893 = 3;
	var uLocal_7894 = 0;
	var uLocal_7895 = 0;
	var uLocal_7896 = 0;
	var uLocal_7897 = 0;
	var uLocal_7898 = -1;
	var uLocal_7899 = 0;
	var uLocal_7900 = 5;
	var uLocal_7901 = 0;
	var uLocal_7902 = 0;
	var uLocal_7903 = 0;
	var uLocal_7904 = 0;
	var uLocal_7905 = 0;
	var uLocal_7906 = 0;
	var uLocal_7907 = 0;
	var uLocal_7908 = 0;
	var uLocal_7909 = 0;
	var uLocal_7910 = 0;
	var uLocal_7911 = 10;
	var uLocal_7912 = 3;
	var uLocal_7913 = 500;
	var uLocal_7914 = 10000;
	var uLocal_7915 = 0;
	var uLocal_7916 = 3;
	var uLocal_7917 = 500;
	var uLocal_7918 = 10000;
	var uLocal_7919 = 0;
	var uLocal_7920 = 3;
	var uLocal_7921 = 500;
	var uLocal_7922 = 10000;
	var uLocal_7923 = 0;
	var uLocal_7924 = 3;
	var uLocal_7925 = 500;
	var uLocal_7926 = 10000;
	var uLocal_7927 = 0;
	var uLocal_7928 = 3;
	var uLocal_7929 = 500;
	var uLocal_7930 = 10000;
	var uLocal_7931 = 0;
	var uLocal_7932 = 3;
	var uLocal_7933 = 500;
	var uLocal_7934 = 10000;
	var uLocal_7935 = 0;
	var uLocal_7936 = 3;
	var uLocal_7937 = 500;
	var uLocal_7938 = 10000;
	var uLocal_7939 = 0;
	var uLocal_7940 = 3;
	var uLocal_7941 = 500;
	var uLocal_7942 = 10000;
	var uLocal_7943 = 0;
	var uLocal_7944 = 3;
	var uLocal_7945 = 500;
	var uLocal_7946 = 10000;
	var uLocal_7947 = 0;
	var uLocal_7948 = 3;
	var uLocal_7949 = 500;
	var uLocal_7950 = 10000;
	var uLocal_7951 = 0;
	var uLocal_7952 = 0;
	var uLocal_7953 = 0;
	var uLocal_7954 = 0;
	var uLocal_7955 = 0;
	var uLocal_7956 = 0;
	var uLocal_7957 = 0;
	var uLocal_7958 = 3;
	var uLocal_7959 = 0;
	var uLocal_7960 = 0;
	var uLocal_7961 = 0;
	var uLocal_7962 = 0;
	var uLocal_7963 = -1;
	var uLocal_7964 = 0;
	var uLocal_7965 = 5;
	var uLocal_7966 = 0;
	var uLocal_7967 = 0;
	var uLocal_7968 = 0;
	var uLocal_7969 = 0;
	var uLocal_7970 = 0;
	var uLocal_7971 = 0;
	var uLocal_7972 = 0;
	var uLocal_7973 = 0;
	var uLocal_7974 = 0;
	var uLocal_7975 = 0;
	var uLocal_7976 = 10;
	var uLocal_7977 = 3;
	var uLocal_7978 = 500;
	var uLocal_7979 = 10000;
	var uLocal_7980 = 0;
	var uLocal_7981 = 3;
	var uLocal_7982 = 500;
	var uLocal_7983 = 10000;
	var uLocal_7984 = 0;
	var uLocal_7985 = 3;
	var uLocal_7986 = 500;
	var uLocal_7987 = 10000;
	var uLocal_7988 = 0;
	var uLocal_7989 = 3;
	var uLocal_7990 = 500;
	var uLocal_7991 = 10000;
	var uLocal_7992 = 0;
	var uLocal_7993 = 3;
	var uLocal_7994 = 500;
	var uLocal_7995 = 10000;
	var uLocal_7996 = 0;
	var uLocal_7997 = 3;
	var uLocal_7998 = 500;
	var uLocal_7999 = 10000;
	var uLocal_8000 = 0;
	var uLocal_8001 = 3;
	var uLocal_8002 = 500;
	var uLocal_8003 = 10000;
	var uLocal_8004 = 0;
	var uLocal_8005 = 3;
	var uLocal_8006 = 500;
	var uLocal_8007 = 10000;
	var uLocal_8008 = 0;
	var uLocal_8009 = 3;
	var uLocal_8010 = 500;
	var uLocal_8011 = 10000;
	var uLocal_8012 = 0;
	var uLocal_8013 = 3;
	var uLocal_8014 = 500;
	var uLocal_8015 = 10000;
	var uLocal_8016 = 0;
	var uLocal_8017 = 0;
	var uLocal_8018 = 0;
	var uLocal_8019 = 0;
	var uLocal_8020 = 0;
	var uLocal_8021 = 0;
	var uLocal_8022 = 0;
	var uLocal_8023 = 3;
	var uLocal_8024 = 0;
	var uLocal_8025 = 0;
	var uLocal_8026 = 0;
	var uLocal_8027 = 0;
	var uLocal_8028 = -1;
	var uLocal_8029 = 0;
	var uLocal_8030 = 5;
	var uLocal_8031 = 0;
	var uLocal_8032 = 0;
	var uLocal_8033 = 0;
	var uLocal_8034 = 0;
	var uLocal_8035 = 0;
	var uLocal_8036 = 0;
	var uLocal_8037 = 0;
	var uLocal_8038 = 0;
	var uLocal_8039 = 0;
	var uLocal_8040 = 0;
	var uLocal_8041 = 10;
	var uLocal_8042 = 3;
	var uLocal_8043 = 500;
	var uLocal_8044 = 10000;
	var uLocal_8045 = 0;
	var uLocal_8046 = 3;
	var uLocal_8047 = 500;
	var uLocal_8048 = 10000;
	var uLocal_8049 = 0;
	var uLocal_8050 = 3;
	var uLocal_8051 = 500;
	var uLocal_8052 = 10000;
	var uLocal_8053 = 0;
	var uLocal_8054 = 3;
	var uLocal_8055 = 500;
	var uLocal_8056 = 10000;
	var uLocal_8057 = 0;
	var uLocal_8058 = 3;
	var uLocal_8059 = 500;
	var uLocal_8060 = 10000;
	var uLocal_8061 = 0;
	var uLocal_8062 = 3;
	var uLocal_8063 = 500;
	var uLocal_8064 = 10000;
	var uLocal_8065 = 0;
	var uLocal_8066 = 3;
	var uLocal_8067 = 500;
	var uLocal_8068 = 10000;
	var uLocal_8069 = 0;
	var uLocal_8070 = 3;
	var uLocal_8071 = 500;
	var uLocal_8072 = 10000;
	var uLocal_8073 = 0;
	var uLocal_8074 = 3;
	var uLocal_8075 = 500;
	var uLocal_8076 = 10000;
	var uLocal_8077 = 0;
	var uLocal_8078 = 3;
	var uLocal_8079 = 500;
	var uLocal_8080 = 10000;
	var uLocal_8081 = 0;
	var uLocal_8082 = 0;
	var uLocal_8083 = 0;
	var uLocal_8084 = 0;
	var uLocal_8085 = 0;
	var uLocal_8086 = 0;
	var uLocal_8087 = 0;
	var uLocal_8088 = 3;
	var uLocal_8089 = 0;
	var uLocal_8090 = 0;
	var uLocal_8091 = 0;
	var uLocal_8092 = 0;
	var uLocal_8093 = -1;
	var uLocal_8094 = 0;
	var uLocal_8095 = 5;
	var uLocal_8096 = 0;
	var uLocal_8097 = 0;
	var uLocal_8098 = 0;
	var uLocal_8099 = 0;
	var uLocal_8100 = 0;
	var uLocal_8101 = 0;
	var uLocal_8102 = 0;
	var uLocal_8103 = 0;
	var uLocal_8104 = 0;
	var uLocal_8105 = 0;
	var uLocal_8106 = 10;
	var uLocal_8107 = 3;
	var uLocal_8108 = 500;
	var uLocal_8109 = 10000;
	var uLocal_8110 = 0;
	var uLocal_8111 = 3;
	var uLocal_8112 = 500;
	var uLocal_8113 = 10000;
	var uLocal_8114 = 0;
	var uLocal_8115 = 3;
	var uLocal_8116 = 500;
	var uLocal_8117 = 10000;
	var uLocal_8118 = 0;
	var uLocal_8119 = 3;
	var uLocal_8120 = 500;
	var uLocal_8121 = 10000;
	var uLocal_8122 = 0;
	var uLocal_8123 = 3;
	var uLocal_8124 = 500;
	var uLocal_8125 = 10000;
	var uLocal_8126 = 0;
	var uLocal_8127 = 3;
	var uLocal_8128 = 500;
	var uLocal_8129 = 10000;
	var uLocal_8130 = 0;
	var uLocal_8131 = 3;
	var uLocal_8132 = 500;
	var uLocal_8133 = 10000;
	var uLocal_8134 = 0;
	var uLocal_8135 = 3;
	var uLocal_8136 = 500;
	var uLocal_8137 = 10000;
	var uLocal_8138 = 0;
	var uLocal_8139 = 3;
	var uLocal_8140 = 500;
	var uLocal_8141 = 10000;
	var uLocal_8142 = 0;
	var uLocal_8143 = 3;
	var uLocal_8144 = 500;
	var uLocal_8145 = 10000;
	var uLocal_8146 = 0;
	var uLocal_8147 = 0;
	var uLocal_8148 = 0;
	var uLocal_8149 = 0;
	var uLocal_8150 = 0;
	var uLocal_8151 = 0;
	var uLocal_8152 = 0;
	var uLocal_8153 = 3;
	var uLocal_8154 = 0;
	var uLocal_8155 = 0;
	var uLocal_8156 = 0;
	var uLocal_8157 = 0;
	var uLocal_8158 = -1;
	var uLocal_8159 = 0;
	var uLocal_8160 = 5;
	var uLocal_8161 = 0;
	var uLocal_8162 = 0;
	var uLocal_8163 = 0;
	var uLocal_8164 = 0;
	var uLocal_8165 = 0;
	var uLocal_8166 = 0;
	var uLocal_8167 = 0;
	var uLocal_8168 = 0;
	var uLocal_8169 = 0;
	var uLocal_8170 = 0;
	var uLocal_8171 = 10;
	var uLocal_8172 = 3;
	var uLocal_8173 = 500;
	var uLocal_8174 = 10000;
	var uLocal_8175 = 0;
	var uLocal_8176 = 3;
	var uLocal_8177 = 500;
	var uLocal_8178 = 10000;
	var uLocal_8179 = 0;
	var uLocal_8180 = 3;
	var uLocal_8181 = 500;
	var uLocal_8182 = 10000;
	var uLocal_8183 = 0;
	var uLocal_8184 = 3;
	var uLocal_8185 = 500;
	var uLocal_8186 = 10000;
	var uLocal_8187 = 0;
	var uLocal_8188 = 3;
	var uLocal_8189 = 500;
	var uLocal_8190 = 10000;
	var uLocal_8191 = 0;
	var uLocal_8192 = 3;
	var uLocal_8193 = 500;
	var uLocal_8194 = 10000;
	var uLocal_8195 = 0;
	var uLocal_8196 = 3;
	var uLocal_8197 = 500;
	var uLocal_8198 = 10000;
	var uLocal_8199 = 0;
	var uLocal_8200 = 3;
	var uLocal_8201 = 500;
	var uLocal_8202 = 10000;
	var uLocal_8203 = 0;
	var uLocal_8204 = 3;
	var uLocal_8205 = 500;
	var uLocal_8206 = 10000;
	var uLocal_8207 = 0;
	var uLocal_8208 = 3;
	var uLocal_8209 = 500;
	var uLocal_8210 = 10000;
	var uLocal_8211 = 0;
	var uLocal_8212 = 0;
	var uLocal_8213 = 0;
	var uLocal_8214 = 0;
	var uLocal_8215 = 0;
	var uLocal_8216 = 0;
	var uLocal_8217 = 0;
	var uLocal_8218 = 3;
	var uLocal_8219 = 0;
	var uLocal_8220 = 0;
	var uLocal_8221 = 0;
	var uLocal_8222 = 0;
	var uLocal_8223 = -1;
	var uLocal_8224 = 0;
	var uLocal_8225 = 5;
	var uLocal_8226 = 0;
	var uLocal_8227 = 0;
	var uLocal_8228 = 0;
	var uLocal_8229 = 0;
	var uLocal_8230 = 0;
	var uLocal_8231 = 0;
	var uLocal_8232 = 0;
	var uLocal_8233 = 0;
	var uLocal_8234 = 0;
	var uLocal_8235 = 0;
	var uLocal_8236 = 10;
	var uLocal_8237 = 3;
	var uLocal_8238 = 500;
	var uLocal_8239 = 10000;
	var uLocal_8240 = 0;
	var uLocal_8241 = 3;
	var uLocal_8242 = 500;
	var uLocal_8243 = 10000;
	var uLocal_8244 = 0;
	var uLocal_8245 = 3;
	var uLocal_8246 = 500;
	var uLocal_8247 = 10000;
	var uLocal_8248 = 0;
	var uLocal_8249 = 3;
	var uLocal_8250 = 500;
	var uLocal_8251 = 10000;
	var uLocal_8252 = 0;
	var uLocal_8253 = 3;
	var uLocal_8254 = 500;
	var uLocal_8255 = 10000;
	var uLocal_8256 = 0;
	var uLocal_8257 = 3;
	var uLocal_8258 = 500;
	var uLocal_8259 = 10000;
	var uLocal_8260 = 0;
	var uLocal_8261 = 3;
	var uLocal_8262 = 500;
	var uLocal_8263 = 10000;
	var uLocal_8264 = 0;
	var uLocal_8265 = 3;
	var uLocal_8266 = 500;
	var uLocal_8267 = 10000;
	var uLocal_8268 = 0;
	var uLocal_8269 = 3;
	var uLocal_8270 = 500;
	var uLocal_8271 = 10000;
	var uLocal_8272 = 0;
	var uLocal_8273 = 3;
	var uLocal_8274 = 500;
	var uLocal_8275 = 10000;
	var uLocal_8276 = 0;
	var uLocal_8277 = 0;
	var uLocal_8278 = 0;
	var uLocal_8279 = 0;
	var uLocal_8280 = 0;
	var uLocal_8281 = 0;
	var uLocal_8282 = 0;
	var uLocal_8283 = 3;
	var uLocal_8284 = 0;
	var uLocal_8285 = 0;
	var uLocal_8286 = 0;
	var uLocal_8287 = 0;
	var uLocal_8288 = -1;
	var uLocal_8289 = 0;
	var uLocal_8290 = 5;
	var uLocal_8291 = 0;
	var uLocal_8292 = 0;
	var uLocal_8293 = 0;
	var uLocal_8294 = 0;
	var uLocal_8295 = 0;
	var uLocal_8296 = 0;
	var uLocal_8297 = 0;
	var uLocal_8298 = 0;
	var uLocal_8299 = 0;
	var uLocal_8300 = 0;
	var uLocal_8301 = 10;
	var uLocal_8302 = 3;
	var uLocal_8303 = 500;
	var uLocal_8304 = 10000;
	var uLocal_8305 = 0;
	var uLocal_8306 = 3;
	var uLocal_8307 = 500;
	var uLocal_8308 = 10000;
	var uLocal_8309 = 0;
	var uLocal_8310 = 3;
	var uLocal_8311 = 500;
	var uLocal_8312 = 10000;
	var uLocal_8313 = 0;
	var uLocal_8314 = 3;
	var uLocal_8315 = 500;
	var uLocal_8316 = 10000;
	var uLocal_8317 = 0;
	var uLocal_8318 = 3;
	var uLocal_8319 = 500;
	var uLocal_8320 = 10000;
	var uLocal_8321 = 0;
	var uLocal_8322 = 3;
	var uLocal_8323 = 500;
	var uLocal_8324 = 10000;
	var uLocal_8325 = 0;
	var uLocal_8326 = 3;
	var uLocal_8327 = 500;
	var uLocal_8328 = 10000;
	var uLocal_8329 = 0;
	var uLocal_8330 = 3;
	var uLocal_8331 = 500;
	var uLocal_8332 = 10000;
	var uLocal_8333 = 0;
	var uLocal_8334 = 3;
	var uLocal_8335 = 500;
	var uLocal_8336 = 10000;
	var uLocal_8337 = 0;
	var uLocal_8338 = 3;
	var uLocal_8339 = 500;
	var uLocal_8340 = 10000;
	var uLocal_8341 = 0;
	var uLocal_8342 = 0;
	var uLocal_8343 = 0;
	var uLocal_8344 = 0;
	var uLocal_8345 = 0;
	var uLocal_8346 = 0;
	var uLocal_8347 = 0;
	var uLocal_8348 = 3;
	var uLocal_8349 = 0;
	var uLocal_8350 = 0;
	var uLocal_8351 = 0;
	var uLocal_8352 = 0;
	var uLocal_8353 = -1;
	var uLocal_8354 = 0;
	var uLocal_8355 = 5;
	var uLocal_8356 = 0;
	var uLocal_8357 = 0;
	var uLocal_8358 = 0;
	var uLocal_8359 = 0;
	var uLocal_8360 = 0;
	var uLocal_8361 = 0;
	var uLocal_8362 = 0;
	var uLocal_8363 = 0;
	var uLocal_8364 = 0;
	var uLocal_8365 = 0;
	var uLocal_8366 = 10;
	var uLocal_8367 = 3;
	var uLocal_8368 = 500;
	var uLocal_8369 = 10000;
	var uLocal_8370 = 0;
	var uLocal_8371 = 3;
	var uLocal_8372 = 500;
	var uLocal_8373 = 10000;
	var uLocal_8374 = 0;
	var uLocal_8375 = 3;
	var uLocal_8376 = 500;
	var uLocal_8377 = 10000;
	var uLocal_8378 = 0;
	var uLocal_8379 = 3;
	var uLocal_8380 = 500;
	var uLocal_8381 = 10000;
	var uLocal_8382 = 0;
	var uLocal_8383 = 3;
	var uLocal_8384 = 500;
	var uLocal_8385 = 10000;
	var uLocal_8386 = 0;
	var uLocal_8387 = 3;
	var uLocal_8388 = 500;
	var uLocal_8389 = 10000;
	var uLocal_8390 = 0;
	var uLocal_8391 = 3;
	var uLocal_8392 = 500;
	var uLocal_8393 = 10000;
	var uLocal_8394 = 0;
	var uLocal_8395 = 3;
	var uLocal_8396 = 500;
	var uLocal_8397 = 10000;
	var uLocal_8398 = 0;
	var uLocal_8399 = 3;
	var uLocal_8400 = 500;
	var uLocal_8401 = 10000;
	var uLocal_8402 = 0;
	var uLocal_8403 = 3;
	var uLocal_8404 = 500;
	var uLocal_8405 = 10000;
	var uLocal_8406 = 0;
	var uLocal_8407 = 0;
	var uLocal_8408 = 0;
	var uLocal_8409 = 0;
	var uLocal_8410 = 0;
	var uLocal_8411 = 0;
	var uLocal_8412 = 0;
	var uLocal_8413 = 3;
	var uLocal_8414 = 0;
	var uLocal_8415 = 0;
	var uLocal_8416 = 0;
	var uLocal_8417 = 0;
	var uLocal_8418 = -1;
	var uLocal_8419 = 0;
	var uLocal_8420 = 5;
	var uLocal_8421 = 0;
	var uLocal_8422 = 0;
	var uLocal_8423 = 0;
	var uLocal_8424 = 0;
	var uLocal_8425 = 0;
	var uLocal_8426 = 0;
	var uLocal_8427 = 0;
	var uLocal_8428 = 0;
	var uLocal_8429 = 0;
	var uLocal_8430 = 0;
	var uLocal_8431 = 10;
	var uLocal_8432 = 3;
	var uLocal_8433 = 500;
	var uLocal_8434 = 10000;
	var uLocal_8435 = 0;
	var uLocal_8436 = 3;
	var uLocal_8437 = 500;
	var uLocal_8438 = 10000;
	var uLocal_8439 = 0;
	var uLocal_8440 = 3;
	var uLocal_8441 = 500;
	var uLocal_8442 = 10000;
	var uLocal_8443 = 0;
	var uLocal_8444 = 3;
	var uLocal_8445 = 500;
	var uLocal_8446 = 10000;
	var uLocal_8447 = 0;
	var uLocal_8448 = 3;
	var uLocal_8449 = 500;
	var uLocal_8450 = 10000;
	var uLocal_8451 = 0;
	var uLocal_8452 = 3;
	var uLocal_8453 = 500;
	var uLocal_8454 = 10000;
	var uLocal_8455 = 0;
	var uLocal_8456 = 3;
	var uLocal_8457 = 500;
	var uLocal_8458 = 10000;
	var uLocal_8459 = 0;
	var uLocal_8460 = 3;
	var uLocal_8461 = 500;
	var uLocal_8462 = 10000;
	var uLocal_8463 = 0;
	var uLocal_8464 = 3;
	var uLocal_8465 = 500;
	var uLocal_8466 = 10000;
	var uLocal_8467 = 0;
	var uLocal_8468 = 3;
	var uLocal_8469 = 500;
	var uLocal_8470 = 10000;
	var uLocal_8471 = 0;
	var uLocal_8472 = 0;
	var uLocal_8473 = 0;
	var uLocal_8474 = 0;
	var uLocal_8475 = 0;
	var uLocal_8476 = 0;
	var uLocal_8477 = 0;
	var uLocal_8478 = 3;
	var uLocal_8479 = 0;
	var uLocal_8480 = 0;
	var uLocal_8481 = 0;
	var uLocal_8482 = 0;
	var uLocal_8483 = -1;
	var uLocal_8484 = 0;
	var uLocal_8485 = 5;
	var uLocal_8486 = 0;
	var uLocal_8487 = 0;
	var uLocal_8488 = 0;
	var uLocal_8489 = 0;
	var uLocal_8490 = 0;
	var uLocal_8491 = 0;
	var uLocal_8492 = 0;
	var uLocal_8493 = 0;
	var uLocal_8494 = 0;
	var uLocal_8495 = 0;
	var uLocal_8496 = 10;
	var uLocal_8497 = 3;
	var uLocal_8498 = 500;
	var uLocal_8499 = 10000;
	var uLocal_8500 = 0;
	var uLocal_8501 = 3;
	var uLocal_8502 = 500;
	var uLocal_8503 = 10000;
	var uLocal_8504 = 0;
	var uLocal_8505 = 3;
	var uLocal_8506 = 500;
	var uLocal_8507 = 10000;
	var uLocal_8508 = 0;
	var uLocal_8509 = 3;
	var uLocal_8510 = 500;
	var uLocal_8511 = 10000;
	var uLocal_8512 = 0;
	var uLocal_8513 = 3;
	var uLocal_8514 = 500;
	var uLocal_8515 = 10000;
	var uLocal_8516 = 0;
	var uLocal_8517 = 3;
	var uLocal_8518 = 500;
	var uLocal_8519 = 10000;
	var uLocal_8520 = 0;
	var uLocal_8521 = 3;
	var uLocal_8522 = 500;
	var uLocal_8523 = 10000;
	var uLocal_8524 = 0;
	var uLocal_8525 = 3;
	var uLocal_8526 = 500;
	var uLocal_8527 = 10000;
	var uLocal_8528 = 0;
	var uLocal_8529 = 3;
	var uLocal_8530 = 500;
	var uLocal_8531 = 10000;
	var uLocal_8532 = 0;
	var uLocal_8533 = 3;
	var uLocal_8534 = 500;
	var uLocal_8535 = 10000;
	var uLocal_8536 = 0;
	var uLocal_8537 = 0;
	var uLocal_8538 = 0;
	var uLocal_8539 = 0;
	var uLocal_8540 = 0;
	var uLocal_8541 = 0;
	var uLocal_8542 = 0;
	var uLocal_8543 = 3;
	var uLocal_8544 = 0;
	var uLocal_8545 = 0;
	var uLocal_8546 = 0;
	var uLocal_8547 = 0;
	var uLocal_8548 = -1;
	var uLocal_8549 = 0;
	var uLocal_8550 = 5;
	var uLocal_8551 = 0;
	var uLocal_8552 = 0;
	var uLocal_8553 = 0;
	var uLocal_8554 = 0;
	var uLocal_8555 = 0;
	var uLocal_8556 = 0;
	var uLocal_8557 = 0;
	var uLocal_8558 = 0;
	var uLocal_8559 = 0;
	var uLocal_8560 = 0;
	var uLocal_8561 = 10;
	var uLocal_8562 = 3;
	var uLocal_8563 = 500;
	var uLocal_8564 = 10000;
	var uLocal_8565 = 0;
	var uLocal_8566 = 3;
	var uLocal_8567 = 500;
	var uLocal_8568 = 10000;
	var uLocal_8569 = 0;
	var uLocal_8570 = 3;
	var uLocal_8571 = 500;
	var uLocal_8572 = 10000;
	var uLocal_8573 = 0;
	var uLocal_8574 = 3;
	var uLocal_8575 = 500;
	var uLocal_8576 = 10000;
	var uLocal_8577 = 0;
	var uLocal_8578 = 3;
	var uLocal_8579 = 500;
	var uLocal_8580 = 10000;
	var uLocal_8581 = 0;
	var uLocal_8582 = 3;
	var uLocal_8583 = 500;
	var uLocal_8584 = 10000;
	var uLocal_8585 = 0;
	var uLocal_8586 = 3;
	var uLocal_8587 = 500;
	var uLocal_8588 = 10000;
	var uLocal_8589 = 0;
	var uLocal_8590 = 3;
	var uLocal_8591 = 500;
	var uLocal_8592 = 10000;
	var uLocal_8593 = 0;
	var uLocal_8594 = 3;
	var uLocal_8595 = 500;
	var uLocal_8596 = 10000;
	var uLocal_8597 = 0;
	var uLocal_8598 = 3;
	var uLocal_8599 = 500;
	var uLocal_8600 = 10000;
	var uLocal_8601 = 0;
	var uLocal_8602 = 0;
	var uLocal_8603 = 0;
	var uLocal_8604 = 0;
	var uLocal_8605 = 0;
	var uLocal_8606 = 0;
	var uLocal_8607 = 0;
	var uLocal_8608 = 3;
	var uLocal_8609 = 0;
	var uLocal_8610 = 0;
	var uLocal_8611 = 0;
	var uLocal_8612 = 0;
	var uLocal_8613 = -1;
	var uLocal_8614 = 0;
	var uLocal_8615 = 5;
	var uLocal_8616 = 0;
	var uLocal_8617 = 0;
	var uLocal_8618 = 0;
	var uLocal_8619 = 0;
	var uLocal_8620 = 0;
	var uLocal_8621 = 0;
	var uLocal_8622 = 0;
	var uLocal_8623 = 0;
	var uLocal_8624 = 0;
	var uLocal_8625 = 0;
	var uLocal_8626 = 10;
	var uLocal_8627 = 3;
	var uLocal_8628 = 500;
	var uLocal_8629 = 10000;
	var uLocal_8630 = 0;
	var uLocal_8631 = 3;
	var uLocal_8632 = 500;
	var uLocal_8633 = 10000;
	var uLocal_8634 = 0;
	var uLocal_8635 = 3;
	var uLocal_8636 = 500;
	var uLocal_8637 = 10000;
	var uLocal_8638 = 0;
	var uLocal_8639 = 3;
	var uLocal_8640 = 500;
	var uLocal_8641 = 10000;
	var uLocal_8642 = 0;
	var uLocal_8643 = 3;
	var uLocal_8644 = 500;
	var uLocal_8645 = 10000;
	var uLocal_8646 = 0;
	var uLocal_8647 = 3;
	var uLocal_8648 = 500;
	var uLocal_8649 = 10000;
	var uLocal_8650 = 0;
	var uLocal_8651 = 3;
	var uLocal_8652 = 500;
	var uLocal_8653 = 10000;
	var uLocal_8654 = 0;
	var uLocal_8655 = 3;
	var uLocal_8656 = 500;
	var uLocal_8657 = 10000;
	var uLocal_8658 = 0;
	var uLocal_8659 = 3;
	var uLocal_8660 = 500;
	var uLocal_8661 = 10000;
	var uLocal_8662 = 0;
	var uLocal_8663 = 3;
	var uLocal_8664 = 500;
	var uLocal_8665 = 10000;
	var uLocal_8666 = 0;
	var uLocal_8667 = 0;
	var uLocal_8668 = 0;
	var uLocal_8669 = 0;
	var uLocal_8670 = 0;
	var uLocal_8671 = 0;
	var uLocal_8672 = 0;
	var uLocal_8673 = 3;
	var uLocal_8674 = 0;
	var uLocal_8675 = 0;
	var uLocal_8676 = 0;
	var uLocal_8677 = 0;
	var uLocal_8678 = -1;
	var uLocal_8679 = 0;
	var uLocal_8680 = 5;
	var uLocal_8681 = 0;
	var uLocal_8682 = 0;
	var uLocal_8683 = 0;
	var uLocal_8684 = 0;
	var uLocal_8685 = 0;
	var uLocal_8686 = 0;
	var uLocal_8687 = 0;
	var uLocal_8688 = 0;
	var uLocal_8689 = 0;
	var uLocal_8690 = 0;
	var uLocal_8691 = 10;
	var uLocal_8692 = 3;
	var uLocal_8693 = 500;
	var uLocal_8694 = 10000;
	var uLocal_8695 = 0;
	var uLocal_8696 = 3;
	var uLocal_8697 = 500;
	var uLocal_8698 = 10000;
	var uLocal_8699 = 0;
	var uLocal_8700 = 3;
	var uLocal_8701 = 500;
	var uLocal_8702 = 10000;
	var uLocal_8703 = 0;
	var uLocal_8704 = 3;
	var uLocal_8705 = 500;
	var uLocal_8706 = 10000;
	var uLocal_8707 = 0;
	var uLocal_8708 = 3;
	var uLocal_8709 = 500;
	var uLocal_8710 = 10000;
	var uLocal_8711 = 0;
	var uLocal_8712 = 3;
	var uLocal_8713 = 500;
	var uLocal_8714 = 10000;
	var uLocal_8715 = 0;
	var uLocal_8716 = 3;
	var uLocal_8717 = 500;
	var uLocal_8718 = 10000;
	var uLocal_8719 = 0;
	var uLocal_8720 = 3;
	var uLocal_8721 = 500;
	var uLocal_8722 = 10000;
	var uLocal_8723 = 0;
	var uLocal_8724 = 3;
	var uLocal_8725 = 500;
	var uLocal_8726 = 10000;
	var uLocal_8727 = 0;
	var uLocal_8728 = 3;
	var uLocal_8729 = 500;
	var uLocal_8730 = 10000;
	var uLocal_8731 = 0;
	var uLocal_8732 = 0;
	var uLocal_8733 = 0;
	var uLocal_8734 = 0;
	var uLocal_8735 = 0;
	var uLocal_8736 = 0;
	var uLocal_8737 = 0;
	var uLocal_8738 = 3;
	var uLocal_8739 = 0;
	var uLocal_8740 = 0;
	var uLocal_8741 = 0;
	var uLocal_8742 = 0;
	var uLocal_8743 = -1;
	var uLocal_8744 = 0;
	var uLocal_8745 = 5;
	var uLocal_8746 = 0;
	var uLocal_8747 = 0;
	var uLocal_8748 = 0;
	var uLocal_8749 = 0;
	var uLocal_8750 = 0;
	var uLocal_8751 = 0;
	var uLocal_8752 = 0;
	var uLocal_8753 = 0;
	var uLocal_8754 = 0;
	var uLocal_8755 = 0;
	var uLocal_8756 = 10;
	var uLocal_8757 = 3;
	var uLocal_8758 = 500;
	var uLocal_8759 = 10000;
	var uLocal_8760 = 0;
	var uLocal_8761 = 3;
	var uLocal_8762 = 500;
	var uLocal_8763 = 10000;
	var uLocal_8764 = 0;
	var uLocal_8765 = 3;
	var uLocal_8766 = 500;
	var uLocal_8767 = 10000;
	var uLocal_8768 = 0;
	var uLocal_8769 = 3;
	var uLocal_8770 = 500;
	var uLocal_8771 = 10000;
	var uLocal_8772 = 0;
	var uLocal_8773 = 3;
	var uLocal_8774 = 500;
	var uLocal_8775 = 10000;
	var uLocal_8776 = 0;
	var uLocal_8777 = 3;
	var uLocal_8778 = 500;
	var uLocal_8779 = 10000;
	var uLocal_8780 = 0;
	var uLocal_8781 = 3;
	var uLocal_8782 = 500;
	var uLocal_8783 = 10000;
	var uLocal_8784 = 0;
	var uLocal_8785 = 3;
	var uLocal_8786 = 500;
	var uLocal_8787 = 10000;
	var uLocal_8788 = 0;
	var uLocal_8789 = 3;
	var uLocal_8790 = 500;
	var uLocal_8791 = 10000;
	var uLocal_8792 = 0;
	var uLocal_8793 = 3;
	var uLocal_8794 = 500;
	var uLocal_8795 = 10000;
	var uLocal_8796 = 0;
	var uLocal_8797 = 0;
	var uLocal_8798 = 0;
	var uLocal_8799 = 0;
	var uLocal_8800 = 0;
	var uLocal_8801 = 0;
	var uLocal_8802 = 0;
	var uLocal_8803 = 3;
	var uLocal_8804 = 0;
	var uLocal_8805 = 0;
	var uLocal_8806 = 0;
	var uLocal_8807 = 0;
	var uLocal_8808 = -1;
	var uLocal_8809 = 0;
	var uLocal_8810 = 5;
	var uLocal_8811 = 0;
	var uLocal_8812 = 0;
	var uLocal_8813 = 0;
	var uLocal_8814 = 0;
	var uLocal_8815 = 0;
	var uLocal_8816 = 0;
	var uLocal_8817 = 0;
	var uLocal_8818 = 0;
	var uLocal_8819 = 0;
	var uLocal_8820 = 0;
	var uLocal_8821 = 10;
	var uLocal_8822 = 3;
	var uLocal_8823 = 500;
	var uLocal_8824 = 10000;
	var uLocal_8825 = 0;
	var uLocal_8826 = 3;
	var uLocal_8827 = 500;
	var uLocal_8828 = 10000;
	var uLocal_8829 = 0;
	var uLocal_8830 = 3;
	var uLocal_8831 = 500;
	var uLocal_8832 = 10000;
	var uLocal_8833 = 0;
	var uLocal_8834 = 3;
	var uLocal_8835 = 500;
	var uLocal_8836 = 10000;
	var uLocal_8837 = 0;
	var uLocal_8838 = 3;
	var uLocal_8839 = 500;
	var uLocal_8840 = 10000;
	var uLocal_8841 = 0;
	var uLocal_8842 = 3;
	var uLocal_8843 = 500;
	var uLocal_8844 = 10000;
	var uLocal_8845 = 0;
	var uLocal_8846 = 3;
	var uLocal_8847 = 500;
	var uLocal_8848 = 10000;
	var uLocal_8849 = 0;
	var uLocal_8850 = 3;
	var uLocal_8851 = 500;
	var uLocal_8852 = 10000;
	var uLocal_8853 = 0;
	var uLocal_8854 = 3;
	var uLocal_8855 = 500;
	var uLocal_8856 = 10000;
	var uLocal_8857 = 0;
	var uLocal_8858 = 3;
	var uLocal_8859 = 500;
	var uLocal_8860 = 10000;
	var uLocal_8861 = 0;
	var uLocal_8862 = 0;
	var uLocal_8863 = 0;
	var uLocal_8864 = 0;
	var uLocal_8865 = 0;
	var uLocal_8866 = 0;
	var uLocal_8867 = 0;
	var uLocal_8868 = 3;
	var uLocal_8869 = 0;
	var uLocal_8870 = 0;
	var uLocal_8871 = 0;
	var uLocal_8872 = 0;
	var uLocal_8873 = -1;
	var uLocal_8874 = 0;
	var uLocal_8875 = 5;
	var uLocal_8876 = 0;
	var uLocal_8877 = 0;
	var uLocal_8878 = 0;
	var uLocal_8879 = 0;
	var uLocal_8880 = 0;
	var uLocal_8881 = 0;
	var uLocal_8882 = 0;
	var uLocal_8883 = 0;
	var uLocal_8884 = 0;
	var uLocal_8885 = 0;
	var uLocal_8886 = 10;
	var uLocal_8887 = 3;
	var uLocal_8888 = 500;
	var uLocal_8889 = 10000;
	var uLocal_8890 = 0;
	var uLocal_8891 = 3;
	var uLocal_8892 = 500;
	var uLocal_8893 = 10000;
	var uLocal_8894 = 0;
	var uLocal_8895 = 3;
	var uLocal_8896 = 500;
	var uLocal_8897 = 10000;
	var uLocal_8898 = 0;
	var uLocal_8899 = 3;
	var uLocal_8900 = 500;
	var uLocal_8901 = 10000;
	var uLocal_8902 = 0;
	var uLocal_8903 = 3;
	var uLocal_8904 = 500;
	var uLocal_8905 = 10000;
	var uLocal_8906 = 0;
	var uLocal_8907 = 3;
	var uLocal_8908 = 500;
	var uLocal_8909 = 10000;
	var uLocal_8910 = 0;
	var uLocal_8911 = 3;
	var uLocal_8912 = 500;
	var uLocal_8913 = 10000;
	var uLocal_8914 = 0;
	var uLocal_8915 = 3;
	var uLocal_8916 = 500;
	var uLocal_8917 = 10000;
	var uLocal_8918 = 0;
	var uLocal_8919 = 3;
	var uLocal_8920 = 500;
	var uLocal_8921 = 10000;
	var uLocal_8922 = 0;
	var uLocal_8923 = 3;
	var uLocal_8924 = 500;
	var uLocal_8925 = 10000;
	var uLocal_8926 = 0;
	var uLocal_8927 = 0;
	var uLocal_8928 = 0;
	var uLocal_8929 = 0;
	var uLocal_8930 = 0;
	var uLocal_8931 = 0;
	var uLocal_8932 = 0;
	var uLocal_8933 = 3;
	var uLocal_8934 = 0;
	var uLocal_8935 = 0;
	var uLocal_8936 = 0;
	var uLocal_8937 = 0;
	var uLocal_8938 = -1;
	var uLocal_8939 = 0;
	var uLocal_8940 = 5;
	var uLocal_8941 = 0;
	var uLocal_8942 = 0;
	var uLocal_8943 = 0;
	var uLocal_8944 = 0;
	var uLocal_8945 = 0;
	var uLocal_8946 = 0;
	var uLocal_8947 = 0;
	var uLocal_8948 = 0;
	var uLocal_8949 = 0;
	var uLocal_8950 = 0;
	var uLocal_8951 = 10;
	var uLocal_8952 = 3;
	var uLocal_8953 = 500;
	var uLocal_8954 = 10000;
	var uLocal_8955 = 0;
	var uLocal_8956 = 3;
	var uLocal_8957 = 500;
	var uLocal_8958 = 10000;
	var uLocal_8959 = 0;
	var uLocal_8960 = 3;
	var uLocal_8961 = 500;
	var uLocal_8962 = 10000;
	var uLocal_8963 = 0;
	var uLocal_8964 = 3;
	var uLocal_8965 = 500;
	var uLocal_8966 = 10000;
	var uLocal_8967 = 0;
	var uLocal_8968 = 3;
	var uLocal_8969 = 500;
	var uLocal_8970 = 10000;
	var uLocal_8971 = 0;
	var uLocal_8972 = 3;
	var uLocal_8973 = 500;
	var uLocal_8974 = 10000;
	var uLocal_8975 = 0;
	var uLocal_8976 = 3;
	var uLocal_8977 = 500;
	var uLocal_8978 = 10000;
	var uLocal_8979 = 0;
	var uLocal_8980 = 3;
	var uLocal_8981 = 500;
	var uLocal_8982 = 10000;
	var uLocal_8983 = 0;
	var uLocal_8984 = 3;
	var uLocal_8985 = 500;
	var uLocal_8986 = 10000;
	var uLocal_8987 = 0;
	var uLocal_8988 = 3;
	var uLocal_8989 = 500;
	var uLocal_8990 = 10000;
	var uLocal_8991 = 0;
	var uLocal_8992 = 0;
	var uLocal_8993 = 0;
	var uLocal_8994 = 1;
	var uLocal_8995 = 0;
	var uLocal_8996 = 0;
	var uLocal_8997 = 0;
	var uLocal_8998 = 0;
	var uLocal_8999 = 0;
	var uLocal_9000 = 0;
	var uLocal_9001 = 0;
	var uLocal_9002 = 0;
	var uLocal_9003 = 0;
	var uLocal_9004 = 0;
	var uLocal_9005 = 0;
	var uLocal_9006 = 0;
	var uLocal_9007 = 65;
	var uLocal_9008 = 0;
	var uLocal_9009 = 0;
	var uLocal_9010 = 0;
	var uLocal_9011 = 0;
	var uLocal_9012 = 0;
	var uLocal_9013 = 0;
	var uLocal_9014 = 0;
	var uLocal_9015 = 0;
	var uLocal_9016 = 0;
	var uLocal_9017 = 0;
	var uLocal_9018 = 0;
	var uLocal_9019 = 0;
	var uLocal_9020 = 0;
	var uLocal_9021 = 0;
	var uLocal_9022 = 0;
	var uLocal_9023 = 0;
	var uLocal_9024 = 0;
	var uLocal_9025 = 0;
	var uLocal_9026 = 0;
	var uLocal_9027 = 0;
	var uLocal_9028 = 0;
	var uLocal_9029 = 0;
	var uLocal_9030 = 0;
	var uLocal_9031 = 0;
	var uLocal_9032 = 0;
	var uLocal_9033 = 0;
	var uLocal_9034 = 0;
	var uLocal_9035 = 0;
	var uLocal_9036 = 0;
	var uLocal_9037 = 0;
	var uLocal_9038 = 0;
	var uLocal_9039 = 0;
	var uLocal_9040 = 0;
	var uLocal_9041 = 0;
	var uLocal_9042 = 0;
	var uLocal_9043 = 0;
	var uLocal_9044 = 0;
	var uLocal_9045 = 0;
	var uLocal_9046 = 0;
	var uLocal_9047 = 0;
	var uLocal_9048 = 0;
	var uLocal_9049 = 0;
	var uLocal_9050 = 0;
	var uLocal_9051 = 0;
	var uLocal_9052 = 0;
	var uLocal_9053 = 0;
	var uLocal_9054 = 0;
	var uLocal_9055 = 0;
	var uLocal_9056 = 0;
	var uLocal_9057 = 0;
	var uLocal_9058 = 0;
	var uLocal_9059 = 0;
	var uLocal_9060 = 0;
	var uLocal_9061 = 0;
	var uLocal_9062 = 0;
	var uLocal_9063 = 0;
	var uLocal_9064 = 0;
	var uLocal_9065 = 0;
	var uLocal_9066 = 0;
	var uLocal_9067 = 0;
	var uLocal_9068 = 0;
	var uLocal_9069 = 0;
	var uLocal_9070 = 0;
	var uLocal_9071 = 0;
	var uLocal_9072 = 0;
	var uLocal_9073 = 0;
	var uLocal_9074 = 0;
	var uLocal_9075 = 0;
	var uLocal_9076 = 0;
	var uLocal_9077 = 0;
	var uLocal_9078 = 0;
	var uLocal_9079 = 0;
	var uLocal_9080 = 0;
	var uLocal_9081 = 0;
	var uLocal_9082 = 0;
	var uLocal_9083 = 0;
	var uLocal_9084 = 0;
	var uLocal_9085 = 0;
	var uLocal_9086 = 0;
	var uLocal_9087 = 0;
	var uLocal_9088 = 0;
	var uLocal_9089 = 0;
	var uLocal_9090 = 0;
	var uLocal_9091 = 0;
	var uLocal_9092 = 0;
	var uLocal_9093 = 0;
	var uLocal_9094 = 0;
	var uLocal_9095 = 0;
	var uLocal_9096 = 0;
	var uLocal_9097 = 0;
	var uLocal_9098 = 0;
	var uLocal_9099 = 0;
	var uLocal_9100 = 0;
	var uLocal_9101 = 0;
	var uLocal_9102 = 0;
	var uLocal_9103 = 0;
	var uLocal_9104 = 0;
	var uLocal_9105 = 0;
	var uLocal_9106 = 0;
	var uLocal_9107 = 0;
	var uLocal_9108 = 0;
	var uLocal_9109 = 0;
	var uLocal_9110 = 0;
	var uLocal_9111 = 0;
	var uLocal_9112 = 0;
	var uLocal_9113 = 0;
	var uLocal_9114 = 0;
	var uLocal_9115 = 0;
	var uLocal_9116 = 0;
	var uLocal_9117 = 0;
	var uLocal_9118 = 0;
	var uLocal_9119 = 0;
	var uLocal_9120 = 0;
	var uLocal_9121 = 0;
	var uLocal_9122 = 0;
	var uLocal_9123 = 0;
	var uLocal_9124 = 0;
	var uLocal_9125 = 0;
	var uLocal_9126 = 0;
	var uLocal_9127 = 0;
	var uLocal_9128 = 0;
	var uLocal_9129 = 0;
	var uLocal_9130 = 0;
	var uLocal_9131 = 0;
	var uLocal_9132 = 0;
	var uLocal_9133 = 0;
	var uLocal_9134 = 0;
	var uLocal_9135 = 0;
	var uLocal_9136 = 0;
	var uLocal_9137 = 0;
	var uLocal_9138 = 0;
	var uLocal_9139 = 0;
	var uLocal_9140 = 0;
	var uLocal_9141 = 0;
	var uLocal_9142 = 0;
	var uLocal_9143 = 0;
	var uLocal_9144 = 0;
	var uLocal_9145 = 0;
	var uLocal_9146 = 0;
	var uLocal_9147 = 0;
	var uLocal_9148 = 0;
	var uLocal_9149 = 0;
	var uLocal_9150 = 0;
	var uLocal_9151 = 0;
	var uLocal_9152 = 0;
	var uLocal_9153 = 0;
	var uLocal_9154 = 0;
	var uLocal_9155 = 0;
	var uLocal_9156 = 0;
	var uLocal_9157 = 0;
	var uLocal_9158 = 0;
	var uLocal_9159 = 0;
	var uLocal_9160 = 0;
	var uLocal_9161 = 0;
	var uLocal_9162 = 0;
	var uLocal_9163 = 0;
	var uLocal_9164 = 0;
	var uLocal_9165 = 0;
	var uLocal_9166 = 0;
	var uLocal_9167 = 0;
	var uLocal_9168 = 0;
	var uLocal_9169 = 0;
	var uLocal_9170 = 0;
	var uLocal_9171 = 0;
	var uLocal_9172 = 0;
	var uLocal_9173 = 0;
	var uLocal_9174 = 0;
	var uLocal_9175 = 0;
	var uLocal_9176 = 0;
	var uLocal_9177 = 0;
	var uLocal_9178 = 0;
	var uLocal_9179 = 0;
	var uLocal_9180 = 0;
	var uLocal_9181 = 0;
	var uLocal_9182 = 0;
	var uLocal_9183 = 0;
	var uLocal_9184 = 0;
	var uLocal_9185 = 0;
	var uLocal_9186 = 0;
	var uLocal_9187 = 0;
	var uLocal_9188 = 0;
	var uLocal_9189 = 0;
	var uLocal_9190 = 0;
	var uLocal_9191 = 0;
	var uLocal_9192 = 0;
	var uLocal_9193 = 0;
	var uLocal_9194 = 0;
	var uLocal_9195 = 0;
	var uLocal_9196 = 0;
	var uLocal_9197 = 0;
	var uLocal_9198 = 0;
	var uLocal_9199 = 0;
	var uLocal_9200 = 0;
	var uLocal_9201 = 0;
	var uLocal_9202 = 0;
	var uLocal_9203 = 0;
	var uLocal_9204 = 0;
	var uLocal_9205 = 0;
	var uLocal_9206 = 0;
	var uLocal_9207 = 0;
	var uLocal_9208 = 0;
	var uLocal_9209 = 0;
	var uLocal_9210 = 0;
	var uLocal_9211 = 0;
	var uLocal_9212 = 0;
	var uLocal_9213 = 0;
	var uLocal_9214 = 0;
	var uLocal_9215 = 0;
	var uLocal_9216 = 0;
	var uLocal_9217 = 0;
	var uLocal_9218 = 0;
	var uLocal_9219 = 0;
	var uLocal_9220 = 0;
	var uLocal_9221 = 0;
	var uLocal_9222 = 0;
	var uLocal_9223 = 0;
	var uLocal_9224 = 0;
	var uLocal_9225 = 0;
	var uLocal_9226 = 0;
	var uLocal_9227 = 0;
	var uLocal_9228 = 0;
	var uLocal_9229 = 0;
	var uLocal_9230 = 0;
	var uLocal_9231 = 0;
	var uLocal_9232 = 0;
	var uLocal_9233 = 0;
	var uLocal_9234 = 0;
	var uLocal_9235 = 0;
	var uLocal_9236 = 0;
	var uLocal_9237 = 0;
	var uLocal_9238 = 0;
	var uLocal_9239 = 0;
	var uLocal_9240 = 0;
	var uLocal_9241 = 0;
	var uLocal_9242 = 0;
	var uLocal_9243 = 0;
	var uLocal_9244 = 0;
	var uLocal_9245 = 0;
	var uLocal_9246 = 0;
	var uLocal_9247 = 0;
	var uLocal_9248 = 0;
	var uLocal_9249 = 0;
	var uLocal_9250 = 0;
	var uLocal_9251 = 0;
	var uLocal_9252 = 0;
	var uLocal_9253 = 0;
	var uLocal_9254 = 0;
	var uLocal_9255 = 0;
	var uLocal_9256 = 0;
	var uLocal_9257 = 0;
	var uLocal_9258 = 0;
	var uLocal_9259 = 0;
	var uLocal_9260 = 0;
	var uLocal_9261 = 0;
	var uLocal_9262 = 0;
	var uLocal_9263 = 0;
	var uLocal_9264 = 0;
	var uLocal_9265 = 0;
	var uLocal_9266 = 0;
	var uLocal_9267 = 0;
	var uLocal_9268 = 0;
	var uLocal_9269 = 0;
	var uLocal_9270 = 0;
	var uLocal_9271 = 0;
	var uLocal_9272 = 0;
	var uLocal_9273 = 0;
	var uLocal_9274 = 0;
	var uLocal_9275 = 0;
	var uLocal_9276 = 0;
	var uLocal_9277 = 0;
	var uLocal_9278 = 0;
	var uLocal_9279 = 0;
	var uLocal_9280 = 0;
	var uLocal_9281 = 0;
	var uLocal_9282 = 0;
	var uLocal_9283 = 0;
	var uLocal_9284 = 0;
	var uLocal_9285 = 0;
	var uLocal_9286 = 0;
	var uLocal_9287 = 0;
	var uLocal_9288 = 0;
	var uLocal_9289 = 0;
	var uLocal_9290 = 0;
	var uLocal_9291 = 0;
	var uLocal_9292 = 0;
	var uLocal_9293 = 0;
	var uLocal_9294 = 0;
	var uLocal_9295 = 0;
	var uLocal_9296 = 0;
	var uLocal_9297 = 0;
	var uLocal_9298 = 0;
	var uLocal_9299 = 0;
	var uLocal_9300 = 0;
	var uLocal_9301 = 0;
	var uLocal_9302 = 0;
	var uLocal_9303 = 0;
	var uLocal_9304 = 0;
	var uLocal_9305 = 0;
	var uLocal_9306 = 0;
	var uLocal_9307 = 0;
	var uLocal_9308 = 0;
	var uLocal_9309 = 0;
	var uLocal_9310 = 0;
	var uLocal_9311 = 0;
	var uLocal_9312 = 0;
	var uLocal_9313 = 0;
	var uLocal_9314 = 0;
	var uLocal_9315 = 0;
	var uLocal_9316 = 0;
	var uLocal_9317 = 0;
	var uLocal_9318 = 0;
	var uLocal_9319 = 0;
	var uLocal_9320 = 0;
	var uLocal_9321 = 0;
	var uLocal_9322 = 0;
	var uLocal_9323 = 0;
	var uLocal_9324 = 0;
	var uLocal_9325 = 0;
	var uLocal_9326 = 0;
	var uLocal_9327 = 0;
	var uLocal_9328 = 0;
	var uLocal_9329 = 0;
	var uLocal_9330 = 0;
	var uLocal_9331 = 0;
	var uLocal_9332 = 0;
	var uLocal_9333 = 0;
	var uLocal_9334 = 0;
	var uLocal_9335 = 0;
	var uLocal_9336 = 0;
	var uLocal_9337 = 0;
	var uLocal_9338 = 0;
	var uLocal_9339 = 0;
	var uLocal_9340 = 0;
	var uLocal_9341 = 0;
	var uLocal_9342 = 0;
	var uLocal_9343 = 0;
	var uLocal_9344 = 0;
	var uLocal_9345 = 0;
	var uLocal_9346 = 0;
	var uLocal_9347 = 0;
	var uLocal_9348 = 0;
	var uLocal_9349 = 0;
	var uLocal_9350 = 0;
	var uLocal_9351 = 0;
	var uLocal_9352 = 0;
	var uLocal_9353 = 0;
	var uLocal_9354 = 0;
	var uLocal_9355 = 0;
	var uLocal_9356 = 0;
	var uLocal_9357 = 0;
	var uLocal_9358 = 0;
	var uLocal_9359 = 0;
	var uLocal_9360 = 0;
	var uLocal_9361 = 0;
	var uLocal_9362 = 0;
	var uLocal_9363 = 0;
	var uLocal_9364 = 0;
	var uLocal_9365 = 0;
	var uLocal_9366 = 0;
	var uLocal_9367 = 0;
	var uLocal_9368 = 0;
	var uLocal_9369 = 0;
	var uLocal_9370 = 0;
	var uLocal_9371 = 0;
	var uLocal_9372 = 0;
	var uLocal_9373 = 0;
	var uLocal_9374 = 0;
	var uLocal_9375 = 0;
	var uLocal_9376 = 0;
	var uLocal_9377 = 0;
	var uLocal_9378 = 0;
	var uLocal_9379 = 0;
	var uLocal_9380 = 0;
	var uLocal_9381 = 0;
	var uLocal_9382 = 0;
	var uLocal_9383 = 0;
	var uLocal_9384 = 0;
	var uLocal_9385 = 0;
	var uLocal_9386 = 0;
	var uLocal_9387 = 0;
	var uLocal_9388 = 0;
	var uLocal_9389 = 0;
	var uLocal_9390 = 0;
	var uLocal_9391 = 0;
	var uLocal_9392 = 0;
	var uLocal_9393 = 0;
	var uLocal_9394 = 0;
	var uLocal_9395 = 0;
	var uLocal_9396 = 0;
	var uLocal_9397 = 0;
	var uLocal_9398 = 0;
	var uLocal_9399 = 0;
	var uLocal_9400 = 0;
	var uLocal_9401 = 0;
	var uLocal_9402 = 0;
	var uLocal_9403 = 0;
	var uLocal_9404 = 0;
	var uLocal_9405 = 0;
	var uLocal_9406 = 0;
	var uLocal_9407 = 0;
	var uLocal_9408 = 0;
	var uLocal_9409 = 0;
	var uLocal_9410 = 0;
	var uLocal_9411 = 0;
	var uLocal_9412 = 0;
	var uLocal_9413 = 0;
	var uLocal_9414 = 0;
	var uLocal_9415 = 0;
	var uLocal_9416 = 0;
	var uLocal_9417 = 0;
	var uLocal_9418 = 0;
	var uLocal_9419 = 0;
	var uLocal_9420 = 0;
	var uLocal_9421 = 0;
	var uLocal_9422 = 0;
	var uLocal_9423 = 0;
	var uLocal_9424 = 0;
	var uLocal_9425 = 0;
	var uLocal_9426 = 0;
	var uLocal_9427 = 0;
	var uLocal_9428 = 0;
	var uLocal_9429 = 0;
	var uLocal_9430 = 0;
	var uLocal_9431 = 0;
	var uLocal_9432 = 0;
	var uLocal_9433 = 0;
	var uLocal_9434 = 0;
	var uLocal_9435 = 0;
	var uLocal_9436 = 0;
	var uLocal_9437 = 0;
	var uLocal_9438 = 0;
	var uLocal_9439 = 0;
	var uLocal_9440 = 0;
	var uLocal_9441 = 0;
	var uLocal_9442 = 0;
	var uLocal_9443 = 0;
	var uLocal_9444 = 0;
	var uLocal_9445 = 0;
	var uLocal_9446 = 0;
	var uLocal_9447 = 0;
	var uLocal_9448 = 0;
	var uLocal_9449 = 0;
	var uLocal_9450 = 0;
	var uLocal_9451 = 0;
	var uLocal_9452 = 0;
	var uLocal_9453 = 0;
	var uLocal_9454 = 0;
	var uLocal_9455 = 0;
	var uLocal_9456 = 0;
	var uLocal_9457 = 0;
	var uLocal_9458 = 0;
	var uLocal_9459 = 0;
	var uLocal_9460 = 0;
	var uLocal_9461 = 0;
	var uLocal_9462 = 0;
	var uLocal_9463 = 0;
	var uLocal_9464 = 0;
	var uLocal_9465 = 0;
	var uLocal_9466 = 0;
	var uLocal_9467 = 0;
	var uLocal_9468 = 0;
	var uLocal_9469 = 0;
	var uLocal_9470 = 0;
	var uLocal_9471 = 0;
	var uLocal_9472 = 0;
	var uLocal_9473 = 0;
	var uLocal_9474 = 0;
	var uLocal_9475 = 0;
	var uLocal_9476 = 0;
	var uLocal_9477 = 0;
	var uLocal_9478 = 0;
	var uLocal_9479 = 0;
	var uLocal_9480 = 0;
	var uLocal_9481 = 0;
	var uLocal_9482 = 0;
	var uLocal_9483 = 0;
	var uLocal_9484 = 0;
	var uLocal_9485 = 0;
	var uLocal_9486 = 0;
	var uLocal_9487 = 0;
	var uLocal_9488 = 0;
	var uLocal_9489 = 0;
	var uLocal_9490 = 0;
	var uLocal_9491 = 0;
	var uLocal_9492 = 0;
	var uLocal_9493 = 0;
	var uLocal_9494 = 0;
	var uLocal_9495 = 0;
	var uLocal_9496 = 0;
	var uLocal_9497 = 0;
	var uLocal_9498 = 0;
	var uLocal_9499 = 0;
	var uLocal_9500 = 0;
	var uLocal_9501 = 0;
	var uLocal_9502 = 0;
	var uLocal_9503 = 0;
	var uLocal_9504 = 0;
	var uLocal_9505 = 0;
	var uLocal_9506 = 0;
	var uLocal_9507 = 0;
	var uLocal_9508 = 0;
	var uLocal_9509 = 0;
	var uLocal_9510 = 0;
	var uLocal_9511 = 0;
	var uLocal_9512 = 0;
	var uLocal_9513 = 0;
	var uLocal_9514 = 0;
	var uLocal_9515 = 0;
	var uLocal_9516 = 0;
	var uLocal_9517 = 0;
	var uLocal_9518 = 0;
	var uLocal_9519 = 0;
	var uLocal_9520 = 0;
	var uLocal_9521 = 0;
	var uLocal_9522 = 0;
	var uLocal_9523 = 0;
	var uLocal_9524 = 0;
	var uLocal_9525 = 0;
	var uLocal_9526 = 0;
	var uLocal_9527 = 0;
	var uLocal_9528 = 0;
	var uLocal_9529 = 0;
	var uLocal_9530 = 0;
	var uLocal_9531 = 0;
	var uLocal_9532 = 0;
	var uLocal_9533 = 0;
	var uLocal_9534 = 0;
	var uLocal_9535 = 0;
	var uLocal_9536 = 0;
	var uLocal_9537 = 0;
	var uLocal_9538 = 0;
	var uLocal_9539 = 0;
	var uLocal_9540 = 0;
	var uLocal_9541 = 0;
	var uLocal_9542 = 0;
	var uLocal_9543 = 0;
	var uLocal_9544 = 0;
	var uLocal_9545 = 0;
	var uLocal_9546 = 0;
	var uLocal_9547 = 0;
	var uLocal_9548 = 0;
	var uLocal_9549 = 0;
	var uLocal_9550 = 0;
	var uLocal_9551 = 0;
	var uLocal_9552 = 0;
	var uLocal_9553 = 0;
	var uLocal_9554 = 0;
	var uLocal_9555 = 0;
	var uLocal_9556 = 0;
	var uLocal_9557 = 0;
	var uLocal_9558 = 0;
	var uLocal_9559 = 0;
	var uLocal_9560 = 0;
	var uLocal_9561 = 0;
	var uLocal_9562 = 0;
	var uLocal_9563 = 0;
	var uLocal_9564 = 0;
	var uLocal_9565 = 0;
	var uLocal_9566 = 0;
	var uLocal_9567 = 0;
	var uLocal_9568 = 0;
	var uLocal_9569 = 0;
	var uLocal_9570 = 0;
	var uLocal_9571 = 0;
	var uLocal_9572 = 0;
	var uLocal_9573 = 0;
	var uLocal_9574 = 0;
	var uLocal_9575 = 0;
	var uLocal_9576 = 0;
	var uLocal_9577 = 0;
	var uLocal_9578 = 0;
	var uLocal_9579 = 0;
	var uLocal_9580 = 0;
	var uLocal_9581 = 0;
	var uLocal_9582 = 0;
	var uLocal_9583 = 0;
	var uLocal_9584 = 0;
	var uLocal_9585 = 0;
	var uLocal_9586 = 0;
	var uLocal_9587 = 0;
	var uLocal_9588 = 0;
	var uLocal_9589 = 0;
	var uLocal_9590 = 0;
	var uLocal_9591 = 0;
	var uLocal_9592 = 0;
	var uLocal_9593 = 0;
	var uLocal_9594 = 0;
	var uLocal_9595 = 0;
	var uLocal_9596 = 0;
	var uLocal_9597 = 0;
	var uLocal_9598 = 0;
	var uLocal_9599 = 0;
	var uLocal_9600 = 0;
	var uLocal_9601 = 0;
	var uLocal_9602 = 0;
	var uLocal_9603 = 0;
	var uLocal_9604 = 0;
	var uLocal_9605 = 0;
	var uLocal_9606 = 0;
	var uLocal_9607 = 0;
	var uLocal_9608 = 0;
	var uLocal_9609 = 0;
	var uLocal_9610 = 0;
	var uLocal_9611 = 0;
	var uLocal_9612 = 0;
	var uLocal_9613 = 0;
	var uLocal_9614 = 0;
	var uLocal_9615 = 0;
	var uLocal_9616 = 0;
	var uLocal_9617 = 0;
	var uLocal_9618 = 0;
	var uLocal_9619 = 0;
	var uLocal_9620 = 0;
	var uLocal_9621 = 0;
	var uLocal_9622 = 0;
	var uLocal_9623 = 0;
	var uLocal_9624 = 0;
	var uLocal_9625 = 0;
	var uLocal_9626 = 0;
	var uLocal_9627 = 0;
	var uLocal_9628 = 0;
	var uLocal_9629 = 0;
	var uLocal_9630 = 0;
	var uLocal_9631 = 0;
	var uLocal_9632 = 0;
	var uLocal_9633 = 0;
	var uLocal_9634 = 0;
	var uLocal_9635 = 0;
	var uLocal_9636 = 0;
	var uLocal_9637 = 0;
	var uLocal_9638 = 0;
	var uLocal_9639 = 0;
	var uLocal_9640 = 0;
	var uLocal_9641 = 0;
	var uLocal_9642 = 0;
	var uLocal_9643 = 0;
	var uLocal_9644 = 0;
	var uLocal_9645 = 0;
	var uLocal_9646 = 0;
	var uLocal_9647 = 0;
	var uLocal_9648 = 0;
	var uLocal_9649 = 0;
	var uLocal_9650 = 0;
	var uLocal_9651 = 0;
	var uLocal_9652 = 0;
	var uLocal_9653 = 0;
	var uLocal_9654 = 0;
	var uLocal_9655 = 0;
	var uLocal_9656 = 0;
	var uLocal_9657 = 0;
	var uLocal_9658 = 0;
	var uLocal_9659 = 0;
	var uLocal_9660 = 0;
	var uLocal_9661 = 0;
	var uLocal_9662 = 0;
	var uLocal_9663 = 0;
	var uLocal_9664 = 0;
	var uLocal_9665 = 0;
	var uLocal_9666 = 0;
	var uLocal_9667 = 0;
	var uLocal_9668 = 0;
	var uLocal_9669 = 0;
	var uLocal_9670 = 0;
	var uLocal_9671 = 0;
	var uLocal_9672 = 0;
	var uLocal_9673 = 0;
	var uLocal_9674 = 0;
	var uLocal_9675 = 0;
	var uLocal_9676 = 0;
	var uLocal_9677 = 0;
	var uLocal_9678 = 0;
	var uLocal_9679 = 0;
	var uLocal_9680 = 0;
	var uLocal_9681 = 0;
	var uLocal_9682 = 0;
	var uLocal_9683 = 0;
	var uLocal_9684 = 0;
	var uLocal_9685 = 0;
	var uLocal_9686 = 0;
	var uLocal_9687 = 0;
	var uLocal_9688 = 0;
	var uLocal_9689 = 0;
	var uLocal_9690 = 0;
	var uLocal_9691 = 0;
	var uLocal_9692 = 0;
	var uLocal_9693 = 0;
	var uLocal_9694 = 0;
	var uLocal_9695 = 0;
	var uLocal_9696 = 0;
	var uLocal_9697 = 0;
	var uLocal_9698 = 0;
	var uLocal_9699 = 0;
	var uLocal_9700 = 0;
	var uLocal_9701 = 0;
	var uLocal_9702 = 0;
	var uLocal_9703 = 0;
	var uLocal_9704 = 0;
	var uLocal_9705 = 0;
	var uLocal_9706 = 0;
	var uLocal_9707 = 0;
	var uLocal_9708 = 0;
	var uLocal_9709 = 0;
	var uLocal_9710 = 0;
	var uLocal_9711 = 0;
	var uLocal_9712 = 0;
	var uLocal_9713 = 0;
	var uLocal_9714 = 0;
	var uLocal_9715 = 0;
	var uLocal_9716 = 0;
	var uLocal_9717 = 0;
	var uLocal_9718 = 0;
	var uLocal_9719 = 0;
	var uLocal_9720 = 0;
	var uLocal_9721 = 0;
	var uLocal_9722 = 0;
	var uLocal_9723 = 0;
	var uLocal_9724 = 0;
	var uLocal_9725 = 0;
	var uLocal_9726 = 0;
	var uLocal_9727 = 0;
	var uLocal_9728 = 0;
	var uLocal_9729 = 0;
	var uLocal_9730 = 0;
	var uLocal_9731 = 0;
	var uLocal_9732 = 0;
	var uLocal_9733 = 0;
	var uLocal_9734 = 0;
	var uLocal_9735 = 0;
	var uLocal_9736 = 0;
	var uLocal_9737 = 0;
	var uLocal_9738 = 0;
	var uLocal_9739 = 0;
	var uLocal_9740 = 0;
	var uLocal_9741 = 0;
	var uLocal_9742 = 0;
	var uLocal_9743 = 0;
	var uLocal_9744 = 0;
	var uLocal_9745 = 0;
	var uLocal_9746 = 0;
	var uLocal_9747 = 0;
	var uLocal_9748 = 0;
	var uLocal_9749 = 0;
	var uLocal_9750 = 0;
	var uLocal_9751 = 0;
	var uLocal_9752 = 0;
	var uLocal_9753 = 0;
	var uLocal_9754 = 0;
	var uLocal_9755 = 0;
	var uLocal_9756 = 0;
	var uLocal_9757 = 0;
	var uLocal_9758 = 0;
	var uLocal_9759 = 0;
	var uLocal_9760 = 0;
	var uLocal_9761 = 0;
	var uLocal_9762 = 0;
	var uLocal_9763 = 0;
	var uLocal_9764 = 0;
	var uLocal_9765 = 0;
	var uLocal_9766 = 0;
	var uLocal_9767 = 0;
	var uLocal_9768 = 0;
	var uLocal_9769 = 0;
	var uLocal_9770 = 0;
	var uLocal_9771 = 0;
	var uLocal_9772 = 0;
	var uLocal_9773 = 0;
	var uLocal_9774 = 0;
	var uLocal_9775 = 0;
	var uLocal_9776 = 0;
	var uLocal_9777 = 0;
	var uLocal_9778 = 0;
	var uLocal_9779 = 0;
	var uLocal_9780 = 0;
	var uLocal_9781 = 0;
	var uLocal_9782 = 0;
	var uLocal_9783 = 0;
	var uLocal_9784 = 0;
	var uLocal_9785 = 0;
	var uLocal_9786 = 0;
	var uLocal_9787 = 0;
	var uLocal_9788 = 1097859072;
	var uLocal_9789 = 1101004800;
	var uLocal_9790 = 0;
	var uLocal_9791 = 0;
	var uLocal_9792 = 0;
	var uLocal_9793 = 0;
	var uLocal_9794 = 0;
	var uLocal_9795 = 0;
	var uLocal_9796 = 0;
	var uLocal_9797 = 0;
	var uLocal_9798 = 0;
	var uLocal_9799 = 0;
	var uLocal_9800 = 0;
	var uLocal_9801 = 0;
	var uLocal_9802 = 0;
	var uLocal_9803 = 0;
	var uLocal_9804 = 0;
	var uLocal_9805 = 0;
	var uLocal_9806 = 0;
	var uLocal_9807 = 0;
	var uLocal_9808 = 0;
	var uLocal_9809 = 0;
	var uLocal_9810 = 0;
	var uLocal_9811 = 0;
	var uLocal_9812 = 0;
	var uLocal_9813 = 0;
	var uLocal_9814 = 0;
	var uLocal_9815 = 0;
	var uLocal_9816 = 4;
	var uLocal_9817 = 0;
	var uLocal_9818 = 0;
	var uLocal_9819 = 0;
	var uLocal_9820 = 0;
	var uLocal_9821 = 0;
	var uLocal_9822 = 0;
	var uLocal_9823 = 0;
	var uLocal_9824 = 0;
	var uLocal_9825 = 0;
	var uLocal_9826 = 0;
	var uLocal_9827 = 0;
	var uLocal_9828 = 0;
	var uLocal_9829 = 0;
	var uLocal_9830 = 0;
	var uLocal_9831 = 0;
	var uLocal_9832 = 0;
	var uLocal_9833 = 0;
	var uLocal_9834 = 0;
	var uLocal_9835 = 0;
	var uLocal_9836 = 0;
	var uLocal_9837 = 0;
	var uLocal_9838 = 0;
	var uLocal_9839 = 0;
	var uLocal_9840 = 0;
	var uLocal_9841 = 0;
	var uLocal_9842 = 0;
	var uLocal_9843 = 0;
	var uLocal_9844 = 0;
	var uLocal_9845 = 0;
	var uLocal_9846 = 0;
	var uLocal_9847 = 0;
	var uLocal_9848 = 0;
	var uLocal_9849 = 0;
	var uLocal_9850 = 0;
	var uLocal_9851 = 0;
	var uLocal_9852 = 0;
	var uLocal_9853 = 0;
	var uLocal_9854 = 0;
	var uLocal_9855 = 0;
	var uLocal_9856 = 0;
	var uLocal_9857 = 0;
	var uLocal_9858 = 0;
	var uLocal_9859 = 0;
	var uLocal_9860 = 0;
	var uLocal_9861 = 0;
	var uLocal_9862 = 0;
	var uLocal_9863 = 0;
	var uLocal_9864 = 0;
	var uLocal_9865 = 0;
	var uLocal_9866 = 0;
	var uLocal_9867 = 0;
	var uLocal_9868 = 0;
	var uLocal_9869 = 0;
	var uLocal_9870 = 0;
	var uLocal_9871 = 0;
	var uLocal_9872 = 0;
	var uLocal_9873 = 0;
	var uLocal_9874 = 0;
	var uLocal_9875 = 0;
	var uLocal_9876 = 0;
	var uLocal_9877 = 0;
	var uLocal_9878 = 0;
	var uLocal_9879 = 0;
	var uLocal_9880 = 0;
	var uLocal_9881 = 0;
	var uLocal_9882 = 0;
	var uLocal_9883 = 0;
	var uLocal_9884 = 0;
	var uLocal_9885 = 0;
	var uLocal_9886 = 0;
	var uLocal_9887 = 0;
	var uLocal_9888 = 40;
	var uLocal_9889 = 0;
	var uLocal_9890 = 0;
	var uLocal_9891 = 0;
	var uLocal_9892 = 0;
	var uLocal_9893 = 0;
	var uLocal_9894 = 0;
	var uLocal_9895 = 0;
	var uLocal_9896 = 0;
	var uLocal_9897 = 0;
	var uLocal_9898 = 0;
	var uLocal_9899 = 0;
	var uLocal_9900 = 0;
	var uLocal_9901 = 0;
	var uLocal_9902 = 0;
	var uLocal_9903 = 0;
	var uLocal_9904 = 0;
	var uLocal_9905 = 0;
	var uLocal_9906 = 0;
	var uLocal_9907 = 0;
	var uLocal_9908 = 0;
	var uLocal_9909 = 0;
	var uLocal_9910 = 0;
	var uLocal_9911 = 0;
	var uLocal_9912 = 0;
	var uLocal_9913 = 0;
	var uLocal_9914 = 0;
	var uLocal_9915 = 0;
	var uLocal_9916 = 0;
	var uLocal_9917 = 0;
	var uLocal_9918 = 0;
	var uLocal_9919 = 0;
	var uLocal_9920 = 0;
	var uLocal_9921 = 0;
	var uLocal_9922 = 0;
	var uLocal_9923 = 0;
	var uLocal_9924 = 0;
	var uLocal_9925 = 0;
	var uLocal_9926 = 0;
	var uLocal_9927 = 0;
	var uLocal_9928 = 0;
	var uLocal_9929 = 0;
	var uLocal_9930 = 0;
	var uLocal_9931 = 0;
	var uLocal_9932 = 0;
	var uLocal_9933 = 0;
	var uLocal_9934 = 0;
	var uLocal_9935 = 0;
	var uLocal_9936 = 0;
	var uLocal_9937 = 0;
	var uLocal_9938 = 0;
	var uLocal_9939 = 0;
	var uLocal_9940 = 0;
	var uLocal_9941 = 0;
	var uLocal_9942 = 0;
	var uLocal_9943 = 0;
	var uLocal_9944 = 0;
	var uLocal_9945 = 0;
	var uLocal_9946 = 0;
	var uLocal_9947 = 0;
	var uLocal_9948 = 0;
	var uLocal_9949 = 0;
	var uLocal_9950 = 0;
	var uLocal_9951 = 0;
	var uLocal_9952 = 0;
	var uLocal_9953 = 0;
	var uLocal_9954 = 0;
	var uLocal_9955 = 0;
	var uLocal_9956 = 0;
	var uLocal_9957 = 0;
	var uLocal_9958 = 0;
	var uLocal_9959 = 0;
	var uLocal_9960 = 0;
	var uLocal_9961 = 0;
	var uLocal_9962 = 0;
	var uLocal_9963 = 0;
	var uLocal_9964 = 0;
	var uLocal_9965 = 0;
	var uLocal_9966 = 0;
	var uLocal_9967 = 0;
	var uLocal_9968 = 0;
	var uLocal_9969 = 0;
	var uLocal_9970 = 0;
	var uLocal_9971 = 0;
	var uLocal_9972 = 0;
	var uLocal_9973 = 0;
	var uLocal_9974 = 0;
	var uLocal_9975 = 0;
	var uLocal_9976 = 0;
	var uLocal_9977 = 0;
	var uLocal_9978 = 0;
	var uLocal_9979 = 0;
	var uLocal_9980 = 0;
	var uLocal_9981 = 0;
	var uLocal_9982 = 0;
	var uLocal_9983 = 0;
	var uLocal_9984 = 0;
	var uLocal_9985 = 0;
	var uLocal_9986 = 0;
	var uLocal_9987 = 0;
	var uLocal_9988 = 0;
	var uLocal_9989 = 0;
	var uLocal_9990 = 0;
	var uLocal_9991 = 0;
	var uLocal_9992 = 0;
	var uLocal_9993 = 0;
	var uLocal_9994 = 0;
	var uLocal_9995 = 0;
	var uLocal_9996 = 0;
	var uLocal_9997 = 0;
	var uLocal_9998 = 0;
	var uLocal_9999 = 0;
	var uLocal_10000 = 0;
	var uLocal_10001 = 0;
	var uLocal_10002 = 0;
	var uLocal_10003 = 0;
	var uLocal_10004 = 0;
	var uLocal_10005 = 0;
	var uLocal_10006 = 0;
	var uLocal_10007 = 0;
	var uLocal_10008 = 0;
	var uLocal_10009 = 0;
	var uLocal_10010 = 0;
	var uLocal_10011 = 0;
	var uLocal_10012 = 0;
	var uLocal_10013 = 0;
	var uLocal_10014 = 0;
	var uLocal_10015 = 0;
	var uLocal_10016 = 0;
	var uLocal_10017 = 0;
	var uLocal_10018 = 0;
	var uLocal_10019 = 0;
	var uLocal_10020 = 0;
	var uLocal_10021 = 0;
	var uLocal_10022 = 0;
	var uLocal_10023 = 0;
	var uLocal_10024 = 0;
	var uLocal_10025 = 0;
	var uLocal_10026 = 0;
	var uLocal_10027 = 0;
	var uLocal_10028 = 0;
	var uLocal_10029 = 0;
	var uLocal_10030 = 0;
	var uLocal_10031 = 0;
	var uLocal_10032 = 0;
	var uLocal_10033 = 0;
	var uLocal_10034 = 0;
	var uLocal_10035 = 0;
	var uLocal_10036 = 0;
	var uLocal_10037 = 0;
	var uLocal_10038 = 0;
	var uLocal_10039 = 0;
	var uLocal_10040 = 0;
	var uLocal_10041 = 0;
	var uLocal_10042 = 0;
	var uLocal_10043 = 0;
	var uLocal_10044 = 0;
	var uLocal_10045 = 0;
	var uLocal_10046 = 0;
	var uLocal_10047 = 0;
	var uLocal_10048 = 0;
	var uLocal_10049 = 0;
	var uLocal_10050 = 0;
	var uLocal_10051 = 0;
	var uLocal_10052 = 0;
	var uLocal_10053 = 0;
	var uLocal_10054 = 0;
	var uLocal_10055 = 0;
	var uLocal_10056 = 0;
	var uLocal_10057 = 0;
	var uLocal_10058 = 0;
	var uLocal_10059 = 0;
	var uLocal_10060 = 0;
	var uLocal_10061 = 0;
	var uLocal_10062 = 0;
	var uLocal_10063 = 0;
	var uLocal_10064 = 0;
	var uLocal_10065 = 0;
	var uLocal_10066 = 0;
	var uLocal_10067 = 0;
	var uLocal_10068 = 0;
	var uLocal_10069 = 0;
	var uLocal_10070 = 0;
	var uLocal_10071 = 0;
	var uLocal_10072 = 0;
	var uLocal_10073 = 0;
	var uLocal_10074 = 0;
	var uLocal_10075 = 0;
	var uLocal_10076 = 0;
	var uLocal_10077 = 0;
	var uLocal_10078 = 0;
	var uLocal_10079 = 0;
	var uLocal_10080 = 0;
	var uLocal_10081 = 0;
	var uLocal_10082 = 0;
	var uLocal_10083 = 0;
	var uLocal_10084 = 0;
	var uLocal_10085 = 0;
	var uLocal_10086 = 0;
	var uLocal_10087 = 0;
	var uLocal_10088 = 0;
	var uLocal_10089 = 0;
	var uLocal_10090 = 0;
	var uLocal_10091 = 0;
	var uLocal_10092 = 0;
	var uLocal_10093 = 0;
	var uLocal_10094 = 0;
	var uLocal_10095 = 0;
	var uLocal_10096 = 0;
	var uLocal_10097 = 0;
	var uLocal_10098 = 0;
	var uLocal_10099 = 0;
	var uLocal_10100 = 0;
	var uLocal_10101 = 0;
	var uLocal_10102 = 0;
	var uLocal_10103 = 0;
	var uLocal_10104 = 0;
	var uLocal_10105 = 0;
	var uLocal_10106 = 0;
	var uLocal_10107 = 0;
	var uLocal_10108 = 0;
	var uLocal_10109 = 0;
	var uLocal_10110 = 0;
	var uLocal_10111 = 0;
	var uLocal_10112 = 0;
	var uLocal_10113 = 0;
	var uLocal_10114 = 0;
	var uLocal_10115 = 0;
	var uLocal_10116 = 0;
	var uLocal_10117 = 0;
	var uLocal_10118 = 0;
	var uLocal_10119 = 0;
	var uLocal_10120 = 0;
	var uLocal_10121 = 0;
	var uLocal_10122 = 0;
	var uLocal_10123 = 0;
	var uLocal_10124 = 0;
	var uLocal_10125 = 0;
	var uLocal_10126 = 0;
	var uLocal_10127 = 0;
	var uLocal_10128 = 0;
	var uLocal_10129 = 0;
	var uLocal_10130 = 0;
	var uLocal_10131 = 0;
	var uLocal_10132 = 0;
	var uLocal_10133 = 0;
	var uLocal_10134 = 0;
	var uLocal_10135 = 0;
	var uLocal_10136 = 0;
	var uLocal_10137 = 0;
	var uLocal_10138 = 0;
	var uLocal_10139 = 0;
	var uLocal_10140 = 0;
	var uLocal_10141 = 0;
	var uLocal_10142 = 0;
	var uLocal_10143 = 0;
	var uLocal_10144 = 0;
	var uLocal_10145 = 0;
	var uLocal_10146 = 0;
	var uLocal_10147 = 0;
	var uLocal_10148 = 0;
	var uLocal_10149 = 0;
	var uLocal_10150 = 0;
	var uLocal_10151 = 0;
	var uLocal_10152 = 0;
	var uLocal_10153 = 0;
	var uLocal_10154 = 0;
	var uLocal_10155 = 0;
	var uLocal_10156 = 0;
	var uLocal_10157 = 0;
	var uLocal_10158 = 0;
	var uLocal_10159 = 0;
	var uLocal_10160 = 0;
	var uLocal_10161 = 0;
	var uLocal_10162 = 0;
	var uLocal_10163 = 0;
	var uLocal_10164 = 0;
	var uLocal_10165 = 0;
	var uLocal_10166 = 0;
	var uLocal_10167 = 0;
	var uLocal_10168 = 0;
	var uLocal_10169 = 0;
	var uLocal_10170 = 0;
	var uLocal_10171 = 0;
	var uLocal_10172 = 0;
	var uLocal_10173 = 0;
	var uLocal_10174 = 0;
	var uLocal_10175 = 0;
	var uLocal_10176 = 0;
	var uLocal_10177 = 0;
	var uLocal_10178 = 0;
	var uLocal_10179 = 0;
	var uLocal_10180 = 0;
	var uLocal_10181 = 0;
	var uLocal_10182 = 0;
	var uLocal_10183 = 0;
	var uLocal_10184 = 0;
	var uLocal_10185 = 0;
	var uLocal_10186 = 0;
	var uLocal_10187 = 0;
	var uLocal_10188 = 0;
	var uLocal_10189 = 0;
	var uLocal_10190 = 0;
	var uLocal_10191 = 0;
	var uLocal_10192 = 0;
	var uLocal_10193 = 0;
	var uLocal_10194 = 0;
	var uLocal_10195 = 0;
	var uLocal_10196 = 0;
	var uLocal_10197 = 0;
	var uLocal_10198 = 0;
	var uLocal_10199 = 0;
	var uLocal_10200 = 0;
	var uLocal_10201 = 0;
	var uLocal_10202 = 0;
	var uLocal_10203 = 0;
	var uLocal_10204 = 0;
	var uLocal_10205 = 0;
	var uLocal_10206 = 0;
	var uLocal_10207 = 0;
	var uLocal_10208 = 0;
	var uLocal_10209 = 0;
	var uLocal_10210 = 0;
	var uLocal_10211 = 0;
	var uLocal_10212 = 0;
	var uLocal_10213 = 0;
	var uLocal_10214 = 0;
	var uLocal_10215 = 0;
	var uLocal_10216 = 0;
	var uLocal_10217 = 0;
	var uLocal_10218 = 0;
	var uLocal_10219 = 0;
	var uLocal_10220 = 0;
	var uLocal_10221 = 0;
	var uLocal_10222 = 0;
	var uLocal_10223 = 0;
	var uLocal_10224 = 0;
	var uLocal_10225 = 0;
	var uLocal_10226 = 0;
	var uLocal_10227 = 0;
	var uLocal_10228 = 0;
	var uLocal_10229 = 0;
	var uLocal_10230 = 0;
	var uLocal_10231 = 0;
	var uLocal_10232 = 0;
	var uLocal_10233 = 0;
	var uLocal_10234 = 0;
	var uLocal_10235 = 0;
	var uLocal_10236 = 0;
	var uLocal_10237 = 0;
	var uLocal_10238 = 0;
	var uLocal_10239 = 0;
	var uLocal_10240 = 0;
	var uLocal_10241 = 0;
	var uLocal_10242 = 0;
	var uLocal_10243 = 0;
	var uLocal_10244 = 0;
	var uLocal_10245 = 0;
	var uLocal_10246 = 0;
	var uLocal_10247 = 0;
	var uLocal_10248 = 0;
	var uLocal_10249 = 0;
	var uLocal_10250 = 0;
	var uLocal_10251 = 0;
	var uLocal_10252 = 0;
	var uLocal_10253 = 0;
	var uLocal_10254 = 0;
	var uLocal_10255 = 0;
	var uLocal_10256 = 0;
	var uLocal_10257 = 0;
	var uLocal_10258 = 0;
	var uLocal_10259 = 0;
	var uLocal_10260 = 0;
	var uLocal_10261 = 0;
	var uLocal_10262 = 0;
	var uLocal_10263 = 0;
	var uLocal_10264 = 0;
	var uLocal_10265 = 0;
	var uLocal_10266 = 0;
	var uLocal_10267 = 0;
	var uLocal_10268 = 0;
	var uLocal_10269 = 0;
	var uLocal_10270 = 0;
	var uLocal_10271 = 0;
	var uLocal_10272 = 0;
	var uLocal_10273 = 0;
	var uLocal_10274 = 0;
	var uLocal_10275 = 0;
	var uLocal_10276 = 0;
	var uLocal_10277 = 0;
	var uLocal_10278 = 0;
	var uLocal_10279 = 0;
	var uLocal_10280 = 0;
	var uLocal_10281 = 0;
	var uLocal_10282 = 0;
	var uLocal_10283 = 0;
	var uLocal_10284 = 0;
	var uLocal_10285 = 0;
	var uLocal_10286 = 0;
	var uLocal_10287 = 0;
	var uLocal_10288 = 0;
	var uLocal_10289 = 0;
	var uLocal_10290 = 0;
	var uLocal_10291 = 0;
	var uLocal_10292 = 0;
	var uLocal_10293 = 0;
	var uLocal_10294 = 0;
	var uLocal_10295 = 0;
	var uLocal_10296 = 0;
	var uLocal_10297 = 0;
	var uLocal_10298 = 0;
	var uLocal_10299 = 0;
	var uLocal_10300 = 0;
	var uLocal_10301 = 0;
	var uLocal_10302 = 0;
	var uLocal_10303 = 0;
	var uLocal_10304 = 0;
	var uLocal_10305 = 0;
	var uLocal_10306 = 0;
	var uLocal_10307 = 0;
	var uLocal_10308 = 0;
	var uLocal_10309 = 0;
	var uLocal_10310 = 0;
	var uLocal_10311 = 0;
	var uLocal_10312 = 0;
	var uLocal_10313 = 0;
	var uLocal_10314 = 0;
	var uLocal_10315 = 0;
	var uLocal_10316 = 0;
	var uLocal_10317 = 0;
	var uLocal_10318 = 0;
	var uLocal_10319 = 0;
	var uLocal_10320 = 0;
	var uLocal_10321 = 0;
	var uLocal_10322 = 0;
	var uLocal_10323 = 0;
	var uLocal_10324 = 0;
	var uLocal_10325 = 0;
	var uLocal_10326 = 0;
	var uLocal_10327 = 0;
	var uLocal_10328 = 0;
	var uLocal_10329 = 0;
	var uLocal_10330 = 0;
	var uLocal_10331 = 0;
	var uLocal_10332 = 0;
	var uLocal_10333 = 0;
	var uLocal_10334 = 0;
	var uLocal_10335 = 0;
	var uLocal_10336 = 0;
	var uLocal_10337 = 0;
	var uLocal_10338 = 0;
	var uLocal_10339 = 0;
	var uLocal_10340 = 0;
	var uLocal_10341 = 0;
	var uLocal_10342 = 0;
	var uLocal_10343 = 0;
	var uLocal_10344 = 0;
	var uLocal_10345 = 0;
	var uLocal_10346 = 0;
	var uLocal_10347 = 0;
	var uLocal_10348 = 0;
	var uLocal_10349 = 0;
	var uLocal_10350 = 0;
	var uLocal_10351 = 0;
	var uLocal_10352 = 0;
	var uLocal_10353 = 0;
	var uLocal_10354 = 0;
	var uLocal_10355 = 0;
	var uLocal_10356 = 0;
	var uLocal_10357 = 0;
	var uLocal_10358 = 0;
	var uLocal_10359 = 0;
	var uLocal_10360 = 0;
	var uLocal_10361 = 0;
	var uLocal_10362 = 0;
	var uLocal_10363 = 0;
	var uLocal_10364 = 0;
	var uLocal_10365 = 0;
	var uLocal_10366 = 0;
	var uLocal_10367 = 0;
	var uLocal_10368 = 0;
	var uLocal_10369 = 0;
	var uLocal_10370 = 0;
	var uLocal_10371 = 0;
	var uLocal_10372 = 0;
	var uLocal_10373 = 0;
	var uLocal_10374 = 0;
	var uLocal_10375 = 0;
	var uLocal_10376 = 0;
	var uLocal_10377 = 0;
	var uLocal_10378 = 0;
	var uLocal_10379 = 0;
	var uLocal_10380 = 0;
	var uLocal_10381 = 0;
	var uLocal_10382 = 0;
	var uLocal_10383 = 0;
	var uLocal_10384 = 0;
	var uLocal_10385 = 0;
	var uLocal_10386 = 0;
	var uLocal_10387 = 0;
	var uLocal_10388 = 0;
	var uLocal_10389 = 0;
	var uLocal_10390 = 0;
	var uLocal_10391 = 0;
	var uLocal_10392 = 0;
	var uLocal_10393 = 0;
	var uLocal_10394 = 0;
	var uLocal_10395 = 0;
	var uLocal_10396 = 0;
	var uLocal_10397 = 0;
	var uLocal_10398 = 0;
	var uLocal_10399 = 0;
	var uLocal_10400 = 0;
	var uLocal_10401 = 0;
	var uLocal_10402 = 0;
	var uLocal_10403 = 0;
	var uLocal_10404 = 0;
	var uLocal_10405 = 0;
	var uLocal_10406 = 0;
	var uLocal_10407 = 0;
	var uLocal_10408 = 0;
	var uLocal_10409 = 0;
	var uLocal_10410 = 0;
	var uLocal_10411 = 0;
	var uLocal_10412 = 0;
	var uLocal_10413 = 0;
	var uLocal_10414 = 0;
	var uLocal_10415 = 0;
	var uLocal_10416 = 0;
	var uLocal_10417 = 0;
	var uLocal_10418 = 0;
	var uLocal_10419 = 0;
	var uLocal_10420 = 0;
	var uLocal_10421 = 0;
	var uLocal_10422 = 0;
	var uLocal_10423 = 0;
	var uLocal_10424 = 0;
	var uLocal_10425 = 0;
	var uLocal_10426 = 0;
	var uLocal_10427 = 0;
	var uLocal_10428 = 0;
	var uLocal_10429 = 0;
	var uLocal_10430 = 0;
	var uLocal_10431 = 0;
	var uLocal_10432 = 0;
	var uLocal_10433 = 0;
	var uLocal_10434 = 0;
	var uLocal_10435 = 0;
	var uLocal_10436 = 0;
	var uLocal_10437 = 0;
	var uLocal_10438 = 0;
	var uLocal_10439 = 0;
	var uLocal_10440 = 0;
	var uLocal_10441 = 0;
	var uLocal_10442 = 0;
	var uLocal_10443 = 0;
	var uLocal_10444 = 0;
	var uLocal_10445 = 0;
	var uLocal_10446 = 0;
	var uLocal_10447 = 0;
	var uLocal_10448 = 0;
	var uLocal_10449 = 0;
	var uLocal_10450 = 0;
	var uLocal_10451 = 0;
	var uLocal_10452 = 0;
	var uLocal_10453 = 0;
	var uLocal_10454 = 0;
	var uLocal_10455 = 0;
	var uLocal_10456 = 0;
	var uLocal_10457 = 0;
	var uLocal_10458 = 0;
	var uLocal_10459 = 0;
	var uLocal_10460 = 0;
	var uLocal_10461 = 0;
	var uLocal_10462 = 0;
	var uLocal_10463 = 0;
	var uLocal_10464 = 0;
	var uLocal_10465 = 0;
	var uLocal_10466 = 0;
	var uLocal_10467 = 0;
	var uLocal_10468 = 0;
	var uLocal_10469 = 0;
	var uLocal_10470 = 0;
	var uLocal_10471 = 0;
	var uLocal_10472 = 0;
	var uLocal_10473 = 0;
	var uLocal_10474 = 0;
	var uLocal_10475 = 0;
	var uLocal_10476 = 0;
	var uLocal_10477 = 0;
	var uLocal_10478 = 0;
	var uLocal_10479 = 0;
	var uLocal_10480 = 0;
	var uLocal_10481 = 0;
	var uLocal_10482 = 0;
	var uLocal_10483 = 0;
	var uLocal_10484 = 0;
	var uLocal_10485 = 0;
	var uLocal_10486 = 0;
	var uLocal_10487 = 0;
	var uLocal_10488 = 0;
	var uLocal_10489 = 0;
	var uLocal_10490 = 0;
	var uLocal_10491 = 0;
	var uLocal_10492 = 0;
	var uLocal_10493 = 0;
	var uLocal_10494 = 0;
	var uLocal_10495 = 0;
	var uLocal_10496 = 0;
	var uLocal_10497 = 0;
	var uLocal_10498 = 0;
	var uLocal_10499 = 0;
	var uLocal_10500 = 0;
	var uLocal_10501 = 0;
	var uLocal_10502 = 0;
	var uLocal_10503 = 0;
	var uLocal_10504 = 0;
	var uLocal_10505 = 0;
	var uLocal_10506 = 0;
	var uLocal_10507 = 0;
	var uLocal_10508 = 0;
	var uLocal_10509 = 0;
	var uLocal_10510 = 0;
	var uLocal_10511 = 0;
	var uLocal_10512 = 0;
	var uLocal_10513 = 0;
	var uLocal_10514 = 0;
	var uLocal_10515 = 0;
	var uLocal_10516 = 0;
	var uLocal_10517 = 0;
	var uLocal_10518 = 0;
	var uLocal_10519 = 0;
	var uLocal_10520 = 0;
	var uLocal_10521 = 0;
	var uLocal_10522 = 0;
	var uLocal_10523 = 0;
	var uLocal_10524 = 0;
	var uLocal_10525 = 0;
	var uLocal_10526 = 0;
	var uLocal_10527 = 0;
	var uLocal_10528 = 0;
	var uLocal_10529 = 40;
	var uLocal_10530 = 0;
	var uLocal_10531 = 0;
	var uLocal_10532 = 0;
	var uLocal_10533 = 0;
	var uLocal_10534 = 0;
	var uLocal_10535 = 0;
	var uLocal_10536 = 0;
	var uLocal_10537 = 0;
	var uLocal_10538 = 0;
	var uLocal_10539 = 0;
	var uLocal_10540 = 0;
	var uLocal_10541 = 0;
	var uLocal_10542 = 0;
	var uLocal_10543 = 0;
	var uLocal_10544 = 0;
	var uLocal_10545 = 0;
	var uLocal_10546 = 0;
	var uLocal_10547 = 0;
	var uLocal_10548 = 0;
	var uLocal_10549 = 0;
	var uLocal_10550 = 0;
	var uLocal_10551 = 0;
	var uLocal_10552 = 0;
	var uLocal_10553 = 0;
	var uLocal_10554 = 0;
	var uLocal_10555 = 0;
	var uLocal_10556 = 0;
	var uLocal_10557 = 0;
	var uLocal_10558 = 0;
	var uLocal_10559 = 0;
	var uLocal_10560 = 0;
	var uLocal_10561 = 0;
	var uLocal_10562 = 0;
	var uLocal_10563 = 0;
	var uLocal_10564 = 0;
	var uLocal_10565 = 0;
	var uLocal_10566 = 0;
	var uLocal_10567 = 0;
	var uLocal_10568 = 0;
	var uLocal_10569 = 0;
	var uLocal_10570 = 0;
	var uLocal_10571 = 0;
	var uLocal_10572 = 0;
	var uLocal_10573 = 0;
	var uLocal_10574 = 0;
	var uLocal_10575 = 0;
	var uLocal_10576 = 0;
	var uLocal_10577 = 0;
	var uLocal_10578 = 0;
	var uLocal_10579 = 0;
	var uLocal_10580 = 0;
	var uLocal_10581 = 0;
	var uLocal_10582 = 0;
	var uLocal_10583 = 0;
	var uLocal_10584 = 0;
	var uLocal_10585 = 0;
	var uLocal_10586 = 0;
	var uLocal_10587 = 0;
	var uLocal_10588 = 0;
	var uLocal_10589 = 0;
	var uLocal_10590 = 0;
	var uLocal_10591 = 0;
	var uLocal_10592 = 0;
	var uLocal_10593 = 0;
	var uLocal_10594 = 0;
	var uLocal_10595 = 0;
	var uLocal_10596 = 0;
	var uLocal_10597 = 0;
	var uLocal_10598 = 0;
	var uLocal_10599 = 0;
	var uLocal_10600 = 0;
	var uLocal_10601 = 0;
	var uLocal_10602 = 0;
	var uLocal_10603 = 0;
	var uLocal_10604 = 0;
	var uLocal_10605 = 0;
	var uLocal_10606 = 0;
	var uLocal_10607 = 0;
	var uLocal_10608 = 0;
	var uLocal_10609 = 0;
	var uLocal_10610 = 0;
	var uLocal_10611 = 0;
	var uLocal_10612 = 0;
	var uLocal_10613 = 0;
	var uLocal_10614 = 0;
	var uLocal_10615 = 0;
	var uLocal_10616 = 0;
	var uLocal_10617 = 0;
	var uLocal_10618 = 0;
	var uLocal_10619 = 0;
	var uLocal_10620 = 0;
	var uLocal_10621 = 0;
	var uLocal_10622 = 0;
	var uLocal_10623 = 0;
	var uLocal_10624 = 0;
	var uLocal_10625 = 0;
	var uLocal_10626 = 0;
	var uLocal_10627 = 0;
	var uLocal_10628 = 0;
	var uLocal_10629 = 0;
	var uLocal_10630 = 0;
	var uLocal_10631 = 0;
	var uLocal_10632 = 0;
	var uLocal_10633 = 0;
	var uLocal_10634 = 0;
	var uLocal_10635 = 0;
	var uLocal_10636 = 0;
	var uLocal_10637 = 0;
	var uLocal_10638 = 0;
	var uLocal_10639 = 0;
	var uLocal_10640 = 0;
	var uLocal_10641 = 0;
	var uLocal_10642 = 0;
	var uLocal_10643 = 0;
	var uLocal_10644 = 0;
	var uLocal_10645 = 0;
	var uLocal_10646 = 0;
	var uLocal_10647 = 0;
	var uLocal_10648 = 0;
	var uLocal_10649 = 0;
	var uLocal_10650 = 0;
	var uLocal_10651 = 0;
	var uLocal_10652 = 0;
	var uLocal_10653 = 0;
	var uLocal_10654 = 0;
	var uLocal_10655 = 0;
	var uLocal_10656 = 0;
	var uLocal_10657 = 0;
	var uLocal_10658 = 0;
	var uLocal_10659 = 0;
	var uLocal_10660 = 0;
	var uLocal_10661 = 0;
	var uLocal_10662 = 0;
	var uLocal_10663 = 0;
	var uLocal_10664 = 0;
	var uLocal_10665 = 0;
	var uLocal_10666 = 0;
	var uLocal_10667 = 0;
	var uLocal_10668 = 0;
	var uLocal_10669 = 0;
	var uLocal_10670 = 0;
	var uLocal_10671 = 0;
	var uLocal_10672 = 0;
	var uLocal_10673 = 0;
	var uLocal_10674 = 0;
	var uLocal_10675 = 0;
	var uLocal_10676 = 0;
	var uLocal_10677 = 0;
	var uLocal_10678 = 0;
	var uLocal_10679 = 0;
	var uLocal_10680 = 0;
	var uLocal_10681 = 0;
	var uLocal_10682 = 0;
	var uLocal_10683 = 0;
	var uLocal_10684 = 0;
	var uLocal_10685 = 0;
	var uLocal_10686 = 0;
	var uLocal_10687 = 0;
	var uLocal_10688 = 0;
	var uLocal_10689 = 0;
	var uLocal_10690 = 0;
	var uLocal_10691 = 0;
	var uLocal_10692 = 0;
	var uLocal_10693 = 0;
	var uLocal_10694 = 0;
	var uLocal_10695 = 0;
	var uLocal_10696 = 0;
	var uLocal_10697 = 0;
	var uLocal_10698 = 0;
	var uLocal_10699 = 0;
	var uLocal_10700 = 0;
	var uLocal_10701 = 0;
	var uLocal_10702 = 0;
	var uLocal_10703 = 0;
	var uLocal_10704 = 0;
	var uLocal_10705 = 0;
	var uLocal_10706 = 0;
	var uLocal_10707 = 0;
	var uLocal_10708 = 0;
	var uLocal_10709 = 0;
	var uLocal_10710 = 0;
	var uLocal_10711 = 0;
	var uLocal_10712 = 0;
	var uLocal_10713 = 0;
	var uLocal_10714 = 0;
	var uLocal_10715 = 0;
	var uLocal_10716 = 0;
	var uLocal_10717 = 0;
	var uLocal_10718 = 0;
	var uLocal_10719 = 0;
	var uLocal_10720 = 0;
	var uLocal_10721 = 0;
	var uLocal_10722 = 0;
	var uLocal_10723 = 0;
	var uLocal_10724 = 0;
	var uLocal_10725 = 0;
	var uLocal_10726 = 0;
	var uLocal_10727 = 0;
	var uLocal_10728 = 0;
	var uLocal_10729 = 0;
	var uLocal_10730 = 0;
	var uLocal_10731 = 0;
	var uLocal_10732 = 0;
	var uLocal_10733 = 0;
	var uLocal_10734 = 0;
	var uLocal_10735 = 0;
	var uLocal_10736 = 0;
	var uLocal_10737 = 0;
	var uLocal_10738 = 0;
	var uLocal_10739 = 0;
	var uLocal_10740 = 0;
	var uLocal_10741 = 0;
	var uLocal_10742 = 0;
	var uLocal_10743 = 0;
	var uLocal_10744 = 0;
	var uLocal_10745 = 0;
	var uLocal_10746 = 0;
	var uLocal_10747 = 0;
	var uLocal_10748 = 0;
	var uLocal_10749 = 0;
	var uLocal_10750 = 0;
	var uLocal_10751 = 0;
	var uLocal_10752 = 0;
	var uLocal_10753 = 0;
	var uLocal_10754 = 0;
	var uLocal_10755 = 0;
	var uLocal_10756 = 0;
	var uLocal_10757 = 0;
	var uLocal_10758 = 0;
	var uLocal_10759 = 0;
	var uLocal_10760 = 0;
	var uLocal_10761 = 0;
	var uLocal_10762 = 0;
	var uLocal_10763 = 0;
	var uLocal_10764 = 0;
	var uLocal_10765 = 0;
	var uLocal_10766 = 0;
	var uLocal_10767 = 0;
	var uLocal_10768 = 0;
	var uLocal_10769 = 0;
	var uLocal_10770 = 0;
	var uLocal_10771 = 0;
	var uLocal_10772 = 0;
	var uLocal_10773 = 0;
	var uLocal_10774 = 0;
	var uLocal_10775 = 0;
	var uLocal_10776 = 0;
	var uLocal_10777 = 0;
	var uLocal_10778 = 0;
	var uLocal_10779 = 0;
	var uLocal_10780 = 0;
	var uLocal_10781 = 0;
	var uLocal_10782 = 0;
	var uLocal_10783 = 0;
	var uLocal_10784 = 0;
	var uLocal_10785 = 0;
	var uLocal_10786 = 0;
	var uLocal_10787 = 0;
	var uLocal_10788 = 0;
	var uLocal_10789 = 0;
	var uLocal_10790 = 0;
	var uLocal_10791 = 0;
	var uLocal_10792 = 0;
	var uLocal_10793 = 0;
	var uLocal_10794 = 0;
	var uLocal_10795 = 0;
	var uLocal_10796 = 0;
	var uLocal_10797 = 0;
	var uLocal_10798 = 0;
	var uLocal_10799 = 0;
	var uLocal_10800 = 0;
	var uLocal_10801 = 0;
	var uLocal_10802 = 0;
	var uLocal_10803 = 0;
	var uLocal_10804 = 0;
	var uLocal_10805 = 0;
	var uLocal_10806 = 0;
	var uLocal_10807 = 0;
	var uLocal_10808 = 0;
	var uLocal_10809 = 0;
	var uLocal_10810 = 0;
	var uLocal_10811 = 0;
	var uLocal_10812 = 0;
	var uLocal_10813 = 0;
	var uLocal_10814 = 0;
	var uLocal_10815 = 0;
	var uLocal_10816 = 0;
	var uLocal_10817 = 0;
	var uLocal_10818 = 0;
	var uLocal_10819 = 0;
	var uLocal_10820 = 0;
	var uLocal_10821 = 0;
	var uLocal_10822 = 0;
	var uLocal_10823 = 0;
	var uLocal_10824 = 0;
	var uLocal_10825 = 0;
	var uLocal_10826 = 0;
	var uLocal_10827 = 0;
	var uLocal_10828 = 0;
	var uLocal_10829 = 0;
	var uLocal_10830 = 0;
	var uLocal_10831 = 0;
	var uLocal_10832 = 0;
	var uLocal_10833 = 0;
	var uLocal_10834 = 0;
	var uLocal_10835 = 0;
	var uLocal_10836 = 0;
	var uLocal_10837 = 0;
	var uLocal_10838 = 0;
	var uLocal_10839 = 0;
	var uLocal_10840 = 0;
	var uLocal_10841 = 0;
	var uLocal_10842 = 0;
	var uLocal_10843 = 0;
	var uLocal_10844 = 0;
	var uLocal_10845 = 0;
	var uLocal_10846 = 0;
	var uLocal_10847 = 0;
	var uLocal_10848 = 0;
	var uLocal_10849 = 0;
	var uLocal_10850 = 0;
	var uLocal_10851 = 0;
	var uLocal_10852 = 0;
	var uLocal_10853 = 0;
	var uLocal_10854 = 0;
	var uLocal_10855 = 0;
	var uLocal_10856 = 0;
	var uLocal_10857 = 0;
	var uLocal_10858 = 0;
	var uLocal_10859 = 0;
	var uLocal_10860 = 0;
	var uLocal_10861 = 0;
	var uLocal_10862 = 0;
	var uLocal_10863 = 0;
	var uLocal_10864 = 0;
	var uLocal_10865 = 0;
	var uLocal_10866 = 0;
	var uLocal_10867 = 0;
	var uLocal_10868 = 0;
	var uLocal_10869 = 0;
	var uLocal_10870 = 0;
	var uLocal_10871 = 0;
	var uLocal_10872 = 0;
	var uLocal_10873 = 0;
	var uLocal_10874 = 0;
	var uLocal_10875 = 0;
	var uLocal_10876 = 0;
	var uLocal_10877 = 0;
	var uLocal_10878 = 0;
	var uLocal_10879 = 0;
	var uLocal_10880 = 0;
	var uLocal_10881 = 0;
	var uLocal_10882 = 0;
	var uLocal_10883 = 0;
	var uLocal_10884 = 0;
	var uLocal_10885 = 0;
	var uLocal_10886 = 0;
	var uLocal_10887 = 0;
	var uLocal_10888 = 0;
	var uLocal_10889 = 0;
	var uLocal_10890 = 0;
	var uLocal_10891 = 0;
	var uLocal_10892 = 0;
	var uLocal_10893 = 0;
	var uLocal_10894 = 0;
	var uLocal_10895 = 0;
	var uLocal_10896 = 0;
	var uLocal_10897 = 0;
	var uLocal_10898 = 0;
	var uLocal_10899 = 0;
	var uLocal_10900 = 0;
	var uLocal_10901 = 0;
	var uLocal_10902 = 0;
	var uLocal_10903 = 0;
	var uLocal_10904 = 0;
	var uLocal_10905 = 0;
	var uLocal_10906 = 0;
	var uLocal_10907 = 0;
	var uLocal_10908 = 0;
	var uLocal_10909 = 0;
	var uLocal_10910 = 0;
	var uLocal_10911 = 0;
	var uLocal_10912 = 0;
	var uLocal_10913 = 0;
	var uLocal_10914 = 0;
	var uLocal_10915 = 0;
	var uLocal_10916 = 0;
	var uLocal_10917 = 0;
	var uLocal_10918 = 0;
	var uLocal_10919 = 0;
	var uLocal_10920 = 0;
	var uLocal_10921 = 0;
	var uLocal_10922 = 0;
	var uLocal_10923 = 0;
	var uLocal_10924 = 0;
	var uLocal_10925 = 0;
	var uLocal_10926 = 0;
	var uLocal_10927 = 0;
	var uLocal_10928 = 0;
	var uLocal_10929 = 0;
	var uLocal_10930 = 0;
	var uLocal_10931 = 0;
	var uLocal_10932 = 0;
	var uLocal_10933 = 0;
	var uLocal_10934 = 0;
	var uLocal_10935 = 0;
	var uLocal_10936 = 0;
	var uLocal_10937 = 0;
	var uLocal_10938 = 0;
	var uLocal_10939 = 0;
	var uLocal_10940 = 0;
	var uLocal_10941 = 0;
	var uLocal_10942 = 0;
	var uLocal_10943 = 0;
	var uLocal_10944 = 0;
	var uLocal_10945 = 0;
	var uLocal_10946 = 0;
	var uLocal_10947 = 0;
	var uLocal_10948 = 0;
	var uLocal_10949 = 0;
	var uLocal_10950 = 0;
	var uLocal_10951 = 0;
	var uLocal_10952 = 0;
	var uLocal_10953 = 0;
	var uLocal_10954 = 0;
	var uLocal_10955 = 0;
	var uLocal_10956 = 0;
	var uLocal_10957 = 0;
	var uLocal_10958 = 0;
	var uLocal_10959 = 0;
	var uLocal_10960 = 0;
	var uLocal_10961 = 0;
	var uLocal_10962 = 0;
	var uLocal_10963 = 0;
	var uLocal_10964 = 0;
	var uLocal_10965 = 0;
	var uLocal_10966 = 0;
	var uLocal_10967 = 0;
	var uLocal_10968 = 0;
	var uLocal_10969 = 0;
	var uLocal_10970 = 0;
	var uLocal_10971 = 0;
	var uLocal_10972 = 0;
	var uLocal_10973 = 0;
	var uLocal_10974 = 0;
	var uLocal_10975 = 0;
	var uLocal_10976 = 0;
	var uLocal_10977 = 0;
	var uLocal_10978 = 0;
	var uLocal_10979 = 0;
	var uLocal_10980 = 0;
	var uLocal_10981 = 0;
	var uLocal_10982 = 0;
	var uLocal_10983 = 0;
	var uLocal_10984 = 0;
	var uLocal_10985 = 0;
	var uLocal_10986 = 0;
	var uLocal_10987 = 0;
	var uLocal_10988 = 0;
	var uLocal_10989 = 0;
	var uLocal_10990 = 0;
	var uLocal_10991 = 0;
	var uLocal_10992 = 0;
	var uLocal_10993 = 0;
	var uLocal_10994 = 0;
	var uLocal_10995 = 0;
	var uLocal_10996 = 0;
	var uLocal_10997 = 0;
	var uLocal_10998 = 0;
	var uLocal_10999 = 0;
	var uLocal_11000 = 0;
	var uLocal_11001 = 0;
	var uLocal_11002 = 0;
	var uLocal_11003 = 0;
	var uLocal_11004 = 0;
	var uLocal_11005 = 0;
	var uLocal_11006 = 0;
	var uLocal_11007 = 0;
	var uLocal_11008 = 0;
	var uLocal_11009 = 0;
	var uLocal_11010 = 0;
	var uLocal_11011 = 0;
	var uLocal_11012 = 0;
	var uLocal_11013 = 0;
	var uLocal_11014 = 0;
	var uLocal_11015 = 0;
	var uLocal_11016 = 0;
	var uLocal_11017 = 0;
	var uLocal_11018 = 0;
	var uLocal_11019 = 0;
	var uLocal_11020 = 0;
	var uLocal_11021 = 0;
	var uLocal_11022 = 0;
	var uLocal_11023 = 0;
	var uLocal_11024 = 0;
	var uLocal_11025 = 0;
	var uLocal_11026 = 0;
	var uLocal_11027 = 0;
	var uLocal_11028 = 0;
	var uLocal_11029 = 0;
	var uLocal_11030 = 0;
	var uLocal_11031 = 0;
	var uLocal_11032 = 0;
	var uLocal_11033 = 0;
	var uLocal_11034 = 0;
	var uLocal_11035 = 0;
	var uLocal_11036 = 0;
	var uLocal_11037 = 0;
	var uLocal_11038 = 0;
	var uLocal_11039 = 0;
	var uLocal_11040 = 0;
	var uLocal_11041 = 0;
	var uLocal_11042 = 0;
	var uLocal_11043 = 0;
	var uLocal_11044 = 0;
	var uLocal_11045 = 0;
	var uLocal_11046 = 0;
	var uLocal_11047 = 0;
	var uLocal_11048 = 0;
	var uLocal_11049 = 0;
	var uLocal_11050 = 0;
	var uLocal_11051 = 0;
	var uLocal_11052 = 0;
	var uLocal_11053 = 0;
	var uLocal_11054 = 0;
	var uLocal_11055 = 0;
	var uLocal_11056 = 0;
	var uLocal_11057 = 0;
	var uLocal_11058 = 0;
	var uLocal_11059 = 0;
	var uLocal_11060 = 0;
	var uLocal_11061 = 0;
	var uLocal_11062 = 0;
	var uLocal_11063 = 0;
	var uLocal_11064 = 0;
	var uLocal_11065 = 0;
	var uLocal_11066 = 0;
	var uLocal_11067 = 0;
	var uLocal_11068 = 0;
	var uLocal_11069 = 0;
	var uLocal_11070 = 0;
	var uLocal_11071 = 0;
	var uLocal_11072 = 0;
	var uLocal_11073 = 0;
	var uLocal_11074 = 0;
	var uLocal_11075 = 0;
	var uLocal_11076 = 0;
	var uLocal_11077 = 0;
	var uLocal_11078 = 0;
	var uLocal_11079 = 0;
	var uLocal_11080 = 0;
	var uLocal_11081 = 0;
	var uLocal_11082 = 0;
	var uLocal_11083 = 0;
	var uLocal_11084 = 0;
	var uLocal_11085 = 0;
	var uLocal_11086 = 0;
	var uLocal_11087 = 0;
	var uLocal_11088 = 0;
	var uLocal_11089 = 0;
	var uLocal_11090 = 0;
	var uLocal_11091 = 0;
	var uLocal_11092 = 0;
	var uLocal_11093 = 0;
	var uLocal_11094 = 0;
	var uLocal_11095 = 0;
	var uLocal_11096 = 0;
	var uLocal_11097 = 0;
	var uLocal_11098 = 0;
	var uLocal_11099 = 0;
	var uLocal_11100 = 0;
	var uLocal_11101 = 0;
	var uLocal_11102 = 0;
	var uLocal_11103 = 0;
	var uLocal_11104 = 0;
	var uLocal_11105 = 0;
	var uLocal_11106 = 0;
	var uLocal_11107 = 0;
	var uLocal_11108 = 0;
	var uLocal_11109 = 0;
	var uLocal_11110 = 0;
	var uLocal_11111 = 0;
	var uLocal_11112 = 0;
	var uLocal_11113 = 0;
	var uLocal_11114 = 0;
	var uLocal_11115 = 0;
	var uLocal_11116 = 0;
	var uLocal_11117 = 0;
	var uLocal_11118 = 0;
	var uLocal_11119 = 0;
	var uLocal_11120 = 0;
	var uLocal_11121 = 0;
	var uLocal_11122 = 0;
	var uLocal_11123 = 0;
	var uLocal_11124 = 0;
	var uLocal_11125 = 0;
	var uLocal_11126 = 0;
	var uLocal_11127 = 0;
	var uLocal_11128 = 0;
	var uLocal_11129 = 0;
	var uLocal_11130 = 0;
	var uLocal_11131 = 0;
	var uLocal_11132 = 0;
	var uLocal_11133 = 0;
	var uLocal_11134 = 0;
	var uLocal_11135 = 0;
	var uLocal_11136 = 0;
	var uLocal_11137 = 0;
	var uLocal_11138 = 0;
	var uLocal_11139 = 0;
	var uLocal_11140 = 0;
	var uLocal_11141 = 0;
	var uLocal_11142 = 0;
	var uLocal_11143 = 0;
	var uLocal_11144 = 0;
	var uLocal_11145 = 0;
	var uLocal_11146 = 0;
	var uLocal_11147 = 0;
	var uLocal_11148 = 0;
	var uLocal_11149 = 0;
	var uLocal_11150 = 0;
	var uLocal_11151 = 0;
	var uLocal_11152 = 0;
	var uLocal_11153 = 0;
	var uLocal_11154 = 0;
	var uLocal_11155 = 0;
	var uLocal_11156 = 0;
	var uLocal_11157 = 0;
	var uLocal_11158 = 0;
	var uLocal_11159 = 0;
	var uLocal_11160 = 0;
	var uLocal_11161 = 0;
	var uLocal_11162 = 0;
	var uLocal_11163 = 0;
	var uLocal_11164 = 0;
	var uLocal_11165 = 0;
	var uLocal_11166 = 0;
	var uLocal_11167 = 0;
	var uLocal_11168 = 0;
	var uLocal_11169 = 0;
	var uLocal_11170 = 60;
	var uLocal_11171 = 0;
	var uLocal_11172 = 0;
	var uLocal_11173 = 0;
	var uLocal_11174 = 0;
	var uLocal_11175 = 0;
	var uLocal_11176 = 0;
	var uLocal_11177 = 0;
	var uLocal_11178 = 0;
	var uLocal_11179 = 0;
	var uLocal_11180 = 0;
	var uLocal_11181 = 0;
	var uLocal_11182 = 0;
	var uLocal_11183 = 0;
	var uLocal_11184 = 0;
	var uLocal_11185 = 0;
	var uLocal_11186 = 0;
	var uLocal_11187 = 0;
	var uLocal_11188 = 0;
	var uLocal_11189 = 0;
	var uLocal_11190 = 0;
	var uLocal_11191 = 0;
	var uLocal_11192 = 0;
	var uLocal_11193 = 0;
	var uLocal_11194 = 0;
	var uLocal_11195 = 0;
	var uLocal_11196 = 0;
	var uLocal_11197 = 0;
	var uLocal_11198 = 0;
	var uLocal_11199 = 0;
	var uLocal_11200 = 0;
	var uLocal_11201 = 0;
	var uLocal_11202 = 0;
	var uLocal_11203 = 0;
	var uLocal_11204 = 0;
	var uLocal_11205 = 0;
	var uLocal_11206 = 0;
	var uLocal_11207 = 0;
	var uLocal_11208 = 0;
	var uLocal_11209 = 0;
	var uLocal_11210 = 0;
	var uLocal_11211 = 0;
	var uLocal_11212 = 0;
	var uLocal_11213 = 0;
	var uLocal_11214 = 0;
	var uLocal_11215 = 0;
	var uLocal_11216 = 0;
	var uLocal_11217 = 0;
	var uLocal_11218 = 0;
	var uLocal_11219 = 0;
	var uLocal_11220 = 0;
	var uLocal_11221 = 0;
	var uLocal_11222 = 0;
	var uLocal_11223 = 0;
	var uLocal_11224 = 0;
	var uLocal_11225 = 0;
	var uLocal_11226 = 0;
	var uLocal_11227 = 0;
	var uLocal_11228 = 0;
	var uLocal_11229 = 0;
	var uLocal_11230 = 0;
	var uLocal_11231 = 0;
	var uLocal_11232 = 0;
	var uLocal_11233 = 0;
	var uLocal_11234 = 0;
	var uLocal_11235 = 0;
	var uLocal_11236 = 0;
	var uLocal_11237 = 0;
	var uLocal_11238 = 0;
	var uLocal_11239 = 0;
	var uLocal_11240 = 0;
	var uLocal_11241 = 0;
	var uLocal_11242 = 0;
	var uLocal_11243 = 0;
	var uLocal_11244 = 0;
	var uLocal_11245 = 0;
	var uLocal_11246 = 0;
	var uLocal_11247 = 0;
	var uLocal_11248 = 0;
	var uLocal_11249 = 0;
	var uLocal_11250 = 0;
	var uLocal_11251 = 0;
	var uLocal_11252 = 0;
	var uLocal_11253 = 0;
	var uLocal_11254 = 0;
	var uLocal_11255 = 0;
	var uLocal_11256 = 0;
	var uLocal_11257 = 0;
	var uLocal_11258 = 0;
	var uLocal_11259 = 0;
	var uLocal_11260 = 0;
	var uLocal_11261 = 0;
	var uLocal_11262 = 0;
	var uLocal_11263 = 0;
	var uLocal_11264 = 0;
	var uLocal_11265 = 0;
	var uLocal_11266 = 0;
	var uLocal_11267 = 0;
	var uLocal_11268 = 0;
	var uLocal_11269 = 0;
	var uLocal_11270 = 0;
	var uLocal_11271 = 0;
	var uLocal_11272 = 0;
	var uLocal_11273 = 0;
	var uLocal_11274 = 0;
	var uLocal_11275 = 0;
	var uLocal_11276 = 0;
	var uLocal_11277 = 0;
	var uLocal_11278 = 0;
	var uLocal_11279 = 0;
	var uLocal_11280 = 0;
	var uLocal_11281 = 0;
	var uLocal_11282 = 0;
	var uLocal_11283 = 0;
	var uLocal_11284 = 0;
	var uLocal_11285 = 0;
	var uLocal_11286 = 0;
	var uLocal_11287 = 0;
	var uLocal_11288 = 0;
	var uLocal_11289 = 0;
	var uLocal_11290 = 0;
	var uLocal_11291 = 0;
	var uLocal_11292 = 0;
	var uLocal_11293 = 0;
	var uLocal_11294 = 0;
	var uLocal_11295 = 0;
	var uLocal_11296 = 0;
	var uLocal_11297 = 0;
	var uLocal_11298 = 0;
	var uLocal_11299 = 0;
	var uLocal_11300 = 0;
	var uLocal_11301 = 0;
	var uLocal_11302 = 0;
	var uLocal_11303 = 0;
	var uLocal_11304 = 0;
	var uLocal_11305 = 0;
	var uLocal_11306 = 0;
	var uLocal_11307 = 0;
	var uLocal_11308 = 0;
	var uLocal_11309 = 0;
	var uLocal_11310 = 0;
	var uLocal_11311 = 0;
	var uLocal_11312 = 0;
	var uLocal_11313 = 0;
	var uLocal_11314 = 0;
	var uLocal_11315 = 0;
	var uLocal_11316 = 0;
	var uLocal_11317 = 0;
	var uLocal_11318 = 0;
	var uLocal_11319 = 0;
	var uLocal_11320 = 0;
	var uLocal_11321 = 0;
	var uLocal_11322 = 0;
	var uLocal_11323 = 0;
	var uLocal_11324 = 0;
	var uLocal_11325 = 0;
	var uLocal_11326 = 0;
	var uLocal_11327 = 0;
	var uLocal_11328 = 0;
	var uLocal_11329 = 0;
	var uLocal_11330 = 0;
	var uLocal_11331 = 0;
	var uLocal_11332 = 0;
	var uLocal_11333 = 0;
	var uLocal_11334 = 0;
	var uLocal_11335 = 0;
	var uLocal_11336 = 0;
	var uLocal_11337 = 0;
	var uLocal_11338 = 0;
	var uLocal_11339 = 0;
	var uLocal_11340 = 0;
	var uLocal_11341 = 0;
	var uLocal_11342 = 0;
	var uLocal_11343 = 0;
	var uLocal_11344 = 0;
	var uLocal_11345 = 0;
	var uLocal_11346 = 0;
	var uLocal_11347 = 0;
	var uLocal_11348 = 0;
	var uLocal_11349 = 0;
	var uLocal_11350 = 0;
	var uLocal_11351 = 0;
	var uLocal_11352 = 0;
	var uLocal_11353 = 0;
	var uLocal_11354 = 0;
	var uLocal_11355 = 0;
	var uLocal_11356 = 0;
	var uLocal_11357 = 0;
	var uLocal_11358 = 0;
	var uLocal_11359 = 0;
	var uLocal_11360 = 0;
	var uLocal_11361 = 0;
	var uLocal_11362 = 0;
	var uLocal_11363 = 0;
	var uLocal_11364 = 0;
	var uLocal_11365 = 0;
	var uLocal_11366 = 0;
	var uLocal_11367 = 0;
	var uLocal_11368 = 0;
	var uLocal_11369 = 0;
	var uLocal_11370 = 0;
	var uLocal_11371 = 0;
	var uLocal_11372 = 0;
	var uLocal_11373 = 0;
	var uLocal_11374 = 0;
	var uLocal_11375 = 0;
	var uLocal_11376 = 0;
	var uLocal_11377 = 0;
	var uLocal_11378 = 0;
	var uLocal_11379 = 0;
	var uLocal_11380 = 0;
	var uLocal_11381 = 0;
	var uLocal_11382 = 0;
	var uLocal_11383 = 0;
	var uLocal_11384 = 0;
	var uLocal_11385 = 0;
	var uLocal_11386 = 0;
	var uLocal_11387 = 0;
	var uLocal_11388 = 0;
	var uLocal_11389 = 0;
	var uLocal_11390 = 0;
	var uLocal_11391 = 0;
	var uLocal_11392 = 0;
	var uLocal_11393 = 0;
	var uLocal_11394 = 0;
	var uLocal_11395 = 0;
	var uLocal_11396 = 0;
	var uLocal_11397 = 0;
	var uLocal_11398 = 0;
	var uLocal_11399 = 0;
	var uLocal_11400 = 0;
	var uLocal_11401 = 0;
	var uLocal_11402 = 0;
	var uLocal_11403 = 0;
	var uLocal_11404 = 0;
	var uLocal_11405 = 0;
	var uLocal_11406 = 0;
	var uLocal_11407 = 0;
	var uLocal_11408 = 0;
	var uLocal_11409 = 0;
	var uLocal_11410 = 0;
	var uLocal_11411 = 0;
	var uLocal_11412 = 0;
	var uLocal_11413 = 0;
	var uLocal_11414 = 0;
	var uLocal_11415 = 0;
	var uLocal_11416 = 0;
	var uLocal_11417 = 0;
	var uLocal_11418 = 0;
	var uLocal_11419 = 0;
	var uLocal_11420 = 0;
	var uLocal_11421 = 0;
	var uLocal_11422 = 0;
	var uLocal_11423 = 0;
	var uLocal_11424 = 0;
	var uLocal_11425 = 0;
	var uLocal_11426 = 0;
	var uLocal_11427 = 0;
	var uLocal_11428 = 0;
	var uLocal_11429 = 0;
	var uLocal_11430 = 0;
	var uLocal_11431 = 0;
	var uLocal_11432 = 0;
	var uLocal_11433 = 0;
	var uLocal_11434 = 0;
	var uLocal_11435 = 0;
	var uLocal_11436 = 0;
	var uLocal_11437 = 0;
	var uLocal_11438 = 0;
	var uLocal_11439 = 0;
	var uLocal_11440 = 0;
	var uLocal_11441 = 0;
	var uLocal_11442 = 0;
	var uLocal_11443 = 0;
	var uLocal_11444 = 0;
	var uLocal_11445 = 0;
	var uLocal_11446 = 0;
	var uLocal_11447 = 0;
	var uLocal_11448 = 0;
	var uLocal_11449 = 0;
	var uLocal_11450 = 0;
	var uLocal_11451 = 0;
	var uLocal_11452 = 0;
	var uLocal_11453 = 0;
	var uLocal_11454 = 0;
	var uLocal_11455 = 0;
	var uLocal_11456 = 0;
	var uLocal_11457 = 0;
	var uLocal_11458 = 0;
	var uLocal_11459 = 0;
	var uLocal_11460 = 0;
	var uLocal_11461 = 0;
	var uLocal_11462 = 0;
	var uLocal_11463 = 0;
	var uLocal_11464 = 0;
	var uLocal_11465 = 0;
	var uLocal_11466 = 0;
	var uLocal_11467 = 0;
	var uLocal_11468 = 0;
	var uLocal_11469 = 0;
	var uLocal_11470 = 0;
	var uLocal_11471 = 0;
	var uLocal_11472 = 0;
	var uLocal_11473 = 0;
	var uLocal_11474 = 0;
	var uLocal_11475 = 0;
	var uLocal_11476 = 0;
	var uLocal_11477 = 0;
	var uLocal_11478 = 0;
	var uLocal_11479 = 0;
	var uLocal_11480 = 0;
	var uLocal_11481 = 0;
	var uLocal_11482 = 0;
	var uLocal_11483 = 0;
	var uLocal_11484 = 0;
	var uLocal_11485 = 0;
	var uLocal_11486 = 0;
	var uLocal_11487 = 0;
	var uLocal_11488 = 0;
	var uLocal_11489 = 0;
	var uLocal_11490 = 0;
	var uLocal_11491 = 0;
	var uLocal_11492 = 0;
	var uLocal_11493 = 0;
	var uLocal_11494 = 0;
	var uLocal_11495 = 0;
	var uLocal_11496 = 0;
	var uLocal_11497 = 0;
	var uLocal_11498 = 0;
	var uLocal_11499 = 0;
	var uLocal_11500 = 0;
	var uLocal_11501 = 0;
	var uLocal_11502 = 0;
	var uLocal_11503 = 0;
	var uLocal_11504 = 0;
	var uLocal_11505 = 0;
	var uLocal_11506 = 0;
	var uLocal_11507 = 0;
	var uLocal_11508 = 0;
	var uLocal_11509 = 0;
	var uLocal_11510 = 0;
	var uLocal_11511 = 0;
	var uLocal_11512 = 0;
	var uLocal_11513 = 0;
	var uLocal_11514 = 0;
	var uLocal_11515 = 0;
	var uLocal_11516 = 0;
	var uLocal_11517 = 0;
	var uLocal_11518 = 0;
	var uLocal_11519 = 0;
	var uLocal_11520 = 0;
	var uLocal_11521 = 0;
	var uLocal_11522 = 0;
	var uLocal_11523 = 0;
	var uLocal_11524 = 0;
	var uLocal_11525 = 0;
	var uLocal_11526 = 0;
	var uLocal_11527 = 0;
	var uLocal_11528 = 0;
	var uLocal_11529 = 0;
	var uLocal_11530 = 0;
	var uLocal_11531 = 0;
	var uLocal_11532 = 0;
	var uLocal_11533 = 0;
	var uLocal_11534 = 0;
	var uLocal_11535 = 0;
	var uLocal_11536 = 0;
	var uLocal_11537 = 0;
	var uLocal_11538 = 0;
	var uLocal_11539 = 0;
	var uLocal_11540 = 0;
	var uLocal_11541 = 0;
	var uLocal_11542 = 0;
	var uLocal_11543 = 0;
	var uLocal_11544 = 0;
	var uLocal_11545 = 0;
	var uLocal_11546 = 0;
	var uLocal_11547 = 0;
	var uLocal_11548 = 0;
	var uLocal_11549 = 0;
	var uLocal_11550 = 0;
	var uLocal_11551 = 0;
	var uLocal_11552 = 0;
	var uLocal_11553 = 0;
	var uLocal_11554 = 0;
	var uLocal_11555 = 0;
	var uLocal_11556 = 0;
	var uLocal_11557 = 0;
	var uLocal_11558 = 0;
	var uLocal_11559 = 0;
	var uLocal_11560 = 0;
	var uLocal_11561 = 0;
	var uLocal_11562 = 0;
	var uLocal_11563 = 0;
	var uLocal_11564 = 0;
	var uLocal_11565 = 0;
	var uLocal_11566 = 0;
	var uLocal_11567 = 0;
	var uLocal_11568 = 0;
	var uLocal_11569 = 0;
	var uLocal_11570 = 0;
	var uLocal_11571 = 0;
	var uLocal_11572 = 0;
	var uLocal_11573 = 0;
	var uLocal_11574 = 0;
	var uLocal_11575 = 0;
	var uLocal_11576 = 0;
	var uLocal_11577 = 0;
	var uLocal_11578 = 0;
	var uLocal_11579 = 0;
	var uLocal_11580 = 0;
	var uLocal_11581 = 0;
	var uLocal_11582 = 0;
	var uLocal_11583 = 0;
	var uLocal_11584 = 0;
	var uLocal_11585 = 0;
	var uLocal_11586 = 0;
	var uLocal_11587 = 0;
	var uLocal_11588 = 0;
	var uLocal_11589 = 0;
	var uLocal_11590 = 0;
	var uLocal_11591 = 0;
	var uLocal_11592 = 0;
	var uLocal_11593 = 0;
	var uLocal_11594 = 0;
	var uLocal_11595 = 0;
	var uLocal_11596 = 0;
	var uLocal_11597 = 0;
	var uLocal_11598 = 0;
	var uLocal_11599 = 0;
	var uLocal_11600 = 0;
	var uLocal_11601 = 0;
	var uLocal_11602 = 0;
	var uLocal_11603 = 0;
	var uLocal_11604 = 0;
	var uLocal_11605 = 0;
	var uLocal_11606 = 0;
	var uLocal_11607 = 0;
	var uLocal_11608 = 0;
	var uLocal_11609 = 0;
	var uLocal_11610 = 0;
	var uLocal_11611 = 0;
	var uLocal_11612 = 0;
	var uLocal_11613 = 0;
	var uLocal_11614 = 0;
	var uLocal_11615 = 0;
	var uLocal_11616 = 0;
	var uLocal_11617 = 0;
	var uLocal_11618 = 0;
	var uLocal_11619 = 0;
	var uLocal_11620 = 0;
	var uLocal_11621 = 0;
	var uLocal_11622 = 0;
	var uLocal_11623 = 0;
	var uLocal_11624 = 0;
	var uLocal_11625 = 0;
	var uLocal_11626 = 0;
	var uLocal_11627 = 0;
	var uLocal_11628 = 0;
	var uLocal_11629 = 0;
	var uLocal_11630 = 0;
	var uLocal_11631 = 0;
	var uLocal_11632 = 0;
	var uLocal_11633 = 0;
	var uLocal_11634 = 0;
	var uLocal_11635 = 0;
	var uLocal_11636 = 0;
	var uLocal_11637 = 0;
	var uLocal_11638 = 0;
	var uLocal_11639 = 0;
	var uLocal_11640 = 0;
	var uLocal_11641 = 0;
	var uLocal_11642 = 0;
	var uLocal_11643 = 0;
	var uLocal_11644 = 0;
	var uLocal_11645 = 0;
	var uLocal_11646 = 0;
	var uLocal_11647 = 0;
	var uLocal_11648 = 0;
	var uLocal_11649 = 0;
	var uLocal_11650 = 0;
	var uLocal_11651 = 0;
	var uLocal_11652 = 0;
	var uLocal_11653 = 0;
	var uLocal_11654 = 0;
	var uLocal_11655 = 0;
	var uLocal_11656 = 0;
	var uLocal_11657 = 0;
	var uLocal_11658 = 0;
	var uLocal_11659 = 0;
	var uLocal_11660 = 0;
	var uLocal_11661 = 0;
	var uLocal_11662 = 0;
	var uLocal_11663 = 0;
	var uLocal_11664 = 0;
	var uLocal_11665 = 0;
	var uLocal_11666 = 0;
	var uLocal_11667 = 0;
	var uLocal_11668 = 0;
	var uLocal_11669 = 0;
	var uLocal_11670 = 0;
	var uLocal_11671 = 0;
	var uLocal_11672 = 0;
	var uLocal_11673 = 0;
	var uLocal_11674 = 0;
	var uLocal_11675 = 0;
	var uLocal_11676 = 0;
	var uLocal_11677 = 0;
	var uLocal_11678 = 0;
	var uLocal_11679 = 0;
	var uLocal_11680 = 0;
	var uLocal_11681 = 0;
	var uLocal_11682 = 0;
	var uLocal_11683 = 0;
	var uLocal_11684 = 0;
	var uLocal_11685 = 0;
	var uLocal_11686 = 0;
	var uLocal_11687 = 0;
	var uLocal_11688 = 0;
	var uLocal_11689 = 0;
	var uLocal_11690 = 0;
	var uLocal_11691 = 0;
	var uLocal_11692 = 0;
	var uLocal_11693 = 0;
	var uLocal_11694 = 0;
	var uLocal_11695 = 0;
	var uLocal_11696 = 0;
	var uLocal_11697 = 0;
	var uLocal_11698 = 0;
	var uLocal_11699 = 0;
	var uLocal_11700 = 0;
	var uLocal_11701 = 0;
	var uLocal_11702 = 0;
	var uLocal_11703 = 0;
	var uLocal_11704 = 0;
	var uLocal_11705 = 0;
	var uLocal_11706 = 0;
	var uLocal_11707 = 0;
	var uLocal_11708 = 0;
	var uLocal_11709 = 0;
	var uLocal_11710 = 0;
	var uLocal_11711 = 0;
	var uLocal_11712 = 0;
	var uLocal_11713 = 0;
	var uLocal_11714 = 0;
	var uLocal_11715 = 0;
	var uLocal_11716 = 0;
	var uLocal_11717 = 0;
	var uLocal_11718 = 0;
	var uLocal_11719 = 0;
	var uLocal_11720 = 0;
	var uLocal_11721 = 0;
	var uLocal_11722 = 0;
	var uLocal_11723 = 0;
	var uLocal_11724 = 0;
	var uLocal_11725 = 0;
	var uLocal_11726 = 0;
	var uLocal_11727 = 0;
	var uLocal_11728 = 0;
	var uLocal_11729 = 0;
	var uLocal_11730 = 0;
	var uLocal_11731 = 0;
	var uLocal_11732 = 0;
	var uLocal_11733 = 0;
	var uLocal_11734 = 0;
	var uLocal_11735 = 0;
	var uLocal_11736 = 0;
	var uLocal_11737 = 0;
	var uLocal_11738 = 0;
	var uLocal_11739 = 0;
	var uLocal_11740 = 0;
	var uLocal_11741 = 0;
	var uLocal_11742 = 0;
	var uLocal_11743 = 0;
	var uLocal_11744 = 0;
	var uLocal_11745 = 0;
	var uLocal_11746 = 0;
	var uLocal_11747 = 0;
	var uLocal_11748 = 0;
	var uLocal_11749 = 0;
	var uLocal_11750 = 0;
	var uLocal_11751 = 0;
	var uLocal_11752 = 0;
	var uLocal_11753 = 0;
	var uLocal_11754 = 0;
	var uLocal_11755 = 0;
	var uLocal_11756 = 0;
	var uLocal_11757 = 0;
	var uLocal_11758 = 0;
	var uLocal_11759 = 0;
	var uLocal_11760 = 0;
	var uLocal_11761 = 0;
	var uLocal_11762 = 0;
	var uLocal_11763 = 0;
	var uLocal_11764 = 0;
	var uLocal_11765 = 0;
	var uLocal_11766 = 0;
	var uLocal_11767 = 0;
	var uLocal_11768 = 0;
	var uLocal_11769 = 0;
	var uLocal_11770 = 0;
	var uLocal_11771 = 0;
	var uLocal_11772 = 0;
	var uLocal_11773 = 0;
	var uLocal_11774 = 0;
	var uLocal_11775 = 0;
	var uLocal_11776 = 0;
	var uLocal_11777 = 0;
	var uLocal_11778 = 0;
	var uLocal_11779 = 0;
	var uLocal_11780 = 0;
	var uLocal_11781 = 0;
	var uLocal_11782 = 0;
	var uLocal_11783 = 0;
	var uLocal_11784 = 0;
	var uLocal_11785 = 0;
	var uLocal_11786 = 0;
	var uLocal_11787 = 0;
	var uLocal_11788 = 0;
	var uLocal_11789 = 0;
	var uLocal_11790 = 0;
	var uLocal_11791 = 0;
	var uLocal_11792 = 0;
	var uLocal_11793 = 0;
	var uLocal_11794 = 0;
	var uLocal_11795 = 0;
	var uLocal_11796 = 0;
	var uLocal_11797 = 0;
	var uLocal_11798 = 0;
	var uLocal_11799 = 0;
	var uLocal_11800 = 0;
	var uLocal_11801 = 0;
	var uLocal_11802 = 0;
	var uLocal_11803 = 0;
	var uLocal_11804 = 0;
	var uLocal_11805 = 0;
	var uLocal_11806 = 0;
	var uLocal_11807 = 0;
	var uLocal_11808 = 0;
	var uLocal_11809 = 0;
	var uLocal_11810 = 0;
	var uLocal_11811 = 0;
	var uLocal_11812 = 0;
	var uLocal_11813 = 0;
	var uLocal_11814 = 0;
	var uLocal_11815 = 0;
	var uLocal_11816 = 0;
	var uLocal_11817 = 0;
	var uLocal_11818 = 0;
	var uLocal_11819 = 0;
	var uLocal_11820 = 0;
	var uLocal_11821 = 0;
	var uLocal_11822 = 0;
	var uLocal_11823 = 0;
	var uLocal_11824 = 0;
	var uLocal_11825 = 0;
	var uLocal_11826 = 0;
	var uLocal_11827 = 0;
	var uLocal_11828 = 0;
	var uLocal_11829 = 0;
	var uLocal_11830 = 0;
	var uLocal_11831 = 0;
	var uLocal_11832 = 0;
	var uLocal_11833 = 0;
	var uLocal_11834 = 0;
	var uLocal_11835 = 0;
	var uLocal_11836 = 0;
	var uLocal_11837 = 0;
	var uLocal_11838 = 0;
	var uLocal_11839 = 0;
	var uLocal_11840 = 0;
	var uLocal_11841 = 0;
	var uLocal_11842 = 0;
	var uLocal_11843 = 0;
	var uLocal_11844 = 0;
	var uLocal_11845 = 0;
	var uLocal_11846 = 0;
	var uLocal_11847 = 0;
	var uLocal_11848 = 0;
	var uLocal_11849 = 0;
	var uLocal_11850 = 0;
	var uLocal_11851 = 0;
	var uLocal_11852 = 0;
	var uLocal_11853 = 0;
	var uLocal_11854 = 0;
	var uLocal_11855 = 0;
	var uLocal_11856 = 0;
	var uLocal_11857 = 0;
	var uLocal_11858 = 0;
	var uLocal_11859 = 0;
	var uLocal_11860 = 0;
	var uLocal_11861 = 0;
	var uLocal_11862 = 0;
	var uLocal_11863 = 0;
	var uLocal_11864 = 0;
	var uLocal_11865 = 0;
	var uLocal_11866 = 0;
	var uLocal_11867 = 0;
	var uLocal_11868 = 0;
	var uLocal_11869 = 0;
	var uLocal_11870 = 0;
	var uLocal_11871 = 0;
	var uLocal_11872 = 0;
	var uLocal_11873 = 0;
	var uLocal_11874 = 0;
	var uLocal_11875 = 0;
	var uLocal_11876 = 0;
	var uLocal_11877 = 0;
	var uLocal_11878 = 0;
	var uLocal_11879 = 0;
	var uLocal_11880 = 0;
	var uLocal_11881 = 0;
	var uLocal_11882 = 0;
	var uLocal_11883 = 0;
	var uLocal_11884 = 0;
	var uLocal_11885 = 0;
	var uLocal_11886 = 0;
	var uLocal_11887 = 0;
	var uLocal_11888 = 0;
	var uLocal_11889 = 0;
	var uLocal_11890 = 0;
	var uLocal_11891 = 0;
	var uLocal_11892 = 0;
	var uLocal_11893 = 0;
	var uLocal_11894 = 0;
	var uLocal_11895 = 0;
	var uLocal_11896 = 0;
	var uLocal_11897 = 0;
	var uLocal_11898 = 0;
	var uLocal_11899 = 0;
	var uLocal_11900 = 0;
	var uLocal_11901 = 0;
	var uLocal_11902 = 0;
	var uLocal_11903 = 0;
	var uLocal_11904 = 0;
	var uLocal_11905 = 0;
	var uLocal_11906 = 0;
	var uLocal_11907 = 0;
	var uLocal_11908 = 0;
	var uLocal_11909 = 0;
	var uLocal_11910 = 0;
	var uLocal_11911 = 0;
	var uLocal_11912 = 0;
	var uLocal_11913 = 0;
	var uLocal_11914 = 0;
	var uLocal_11915 = 0;
	var uLocal_11916 = 0;
	var uLocal_11917 = 0;
	var uLocal_11918 = 0;
	var uLocal_11919 = 0;
	var uLocal_11920 = 0;
	var uLocal_11921 = 0;
	var uLocal_11922 = 0;
	var uLocal_11923 = 0;
	var uLocal_11924 = 0;
	var uLocal_11925 = 0;
	var uLocal_11926 = 0;
	var uLocal_11927 = 0;
	var uLocal_11928 = 0;
	var uLocal_11929 = 0;
	var uLocal_11930 = 0;
	var uLocal_11931 = 0;
	var uLocal_11932 = 0;
	var uLocal_11933 = 0;
	var uLocal_11934 = 0;
	var uLocal_11935 = 0;
	var uLocal_11936 = 0;
	var uLocal_11937 = 0;
	var uLocal_11938 = 0;
	var uLocal_11939 = 0;
	var uLocal_11940 = 0;
	var uLocal_11941 = 0;
	var uLocal_11942 = 0;
	var uLocal_11943 = 0;
	var uLocal_11944 = 0;
	var uLocal_11945 = 0;
	var uLocal_11946 = 0;
	var uLocal_11947 = 0;
	var uLocal_11948 = 0;
	var uLocal_11949 = 0;
	var uLocal_11950 = 0;
	var uLocal_11951 = 0;
	var uLocal_11952 = 0;
	var uLocal_11953 = 0;
	var uLocal_11954 = 0;
	var uLocal_11955 = 0;
	var uLocal_11956 = 0;
	var uLocal_11957 = 0;
	var uLocal_11958 = 0;
	var uLocal_11959 = 0;
	var uLocal_11960 = 0;
	var uLocal_11961 = 0;
	var uLocal_11962 = 0;
	var uLocal_11963 = 0;
	var uLocal_11964 = 0;
	var uLocal_11965 = 0;
	var uLocal_11966 = 0;
	var uLocal_11967 = 0;
	var uLocal_11968 = 0;
	var uLocal_11969 = 0;
	var uLocal_11970 = 0;
	var uLocal_11971 = 0;
	var uLocal_11972 = 0;
	var uLocal_11973 = 0;
	var uLocal_11974 = 0;
	var uLocal_11975 = 0;
	var uLocal_11976 = 0;
	var uLocal_11977 = 0;
	var uLocal_11978 = 0;
	var uLocal_11979 = 0;
	var uLocal_11980 = 0;
	var uLocal_11981 = 0;
	var uLocal_11982 = 0;
	var uLocal_11983 = 0;
	var uLocal_11984 = 0;
	var uLocal_11985 = 0;
	var uLocal_11986 = 0;
	var uLocal_11987 = 0;
	var uLocal_11988 = 0;
	var uLocal_11989 = 0;
	var uLocal_11990 = 0;
	var uLocal_11991 = 0;
	var uLocal_11992 = 0;
	var uLocal_11993 = 0;
	var uLocal_11994 = 0;
	var uLocal_11995 = 0;
	var uLocal_11996 = 0;
	var uLocal_11997 = 0;
	var uLocal_11998 = 0;
	var uLocal_11999 = 0;
	var uLocal_12000 = 0;
	var uLocal_12001 = 0;
	var uLocal_12002 = 0;
	var uLocal_12003 = 0;
	var uLocal_12004 = 0;
	var uLocal_12005 = 0;
	var uLocal_12006 = 0;
	var uLocal_12007 = 0;
	var uLocal_12008 = 0;
	var uLocal_12009 = 0;
	var uLocal_12010 = 0;
	var uLocal_12011 = 0;
	var uLocal_12012 = 0;
	var uLocal_12013 = 0;
	var uLocal_12014 = 0;
	var uLocal_12015 = 0;
	var uLocal_12016 = 0;
	var uLocal_12017 = 0;
	var uLocal_12018 = 0;
	var uLocal_12019 = 0;
	var uLocal_12020 = 0;
	var uLocal_12021 = 0;
	var uLocal_12022 = 0;
	var uLocal_12023 = 0;
	var uLocal_12024 = 0;
	var uLocal_12025 = 0;
	var uLocal_12026 = 0;
	var uLocal_12027 = 0;
	var uLocal_12028 = 0;
	var uLocal_12029 = 0;
	var uLocal_12030 = 0;
	var uLocal_12031 = 0;
	var uLocal_12032 = 0;
	var uLocal_12033 = 0;
	var uLocal_12034 = 0;
	var uLocal_12035 = 0;
	var uLocal_12036 = 0;
	var uLocal_12037 = 0;
	var uLocal_12038 = 0;
	var uLocal_12039 = 0;
	var uLocal_12040 = 0;
	var uLocal_12041 = 0;
	var uLocal_12042 = 0;
	var uLocal_12043 = 0;
	var uLocal_12044 = 0;
	var uLocal_12045 = 0;
	var uLocal_12046 = 0;
	var uLocal_12047 = 0;
	var uLocal_12048 = 0;
	var uLocal_12049 = 0;
	var uLocal_12050 = 0;
	var uLocal_12051 = 0;
	var uLocal_12052 = 0;
	var uLocal_12053 = 0;
	var uLocal_12054 = 0;
	var uLocal_12055 = 0;
	var uLocal_12056 = 0;
	var uLocal_12057 = 0;
	var uLocal_12058 = 0;
	var uLocal_12059 = 0;
	var uLocal_12060 = 0;
	var uLocal_12061 = 0;
	var uLocal_12062 = 0;
	var uLocal_12063 = 0;
	var uLocal_12064 = 0;
	var uLocal_12065 = 0;
	var uLocal_12066 = 0;
	var uLocal_12067 = 0;
	var uLocal_12068 = 0;
	var uLocal_12069 = 0;
	var uLocal_12070 = 0;
	var uLocal_12071 = 0;
	var uLocal_12072 = 0;
	var uLocal_12073 = 0;
	var uLocal_12074 = 0;
	var uLocal_12075 = 0;
	var uLocal_12076 = 0;
	var uLocal_12077 = 0;
	var uLocal_12078 = 0;
	var uLocal_12079 = 0;
	var uLocal_12080 = 0;
	var uLocal_12081 = 0;
	var uLocal_12082 = 0;
	var uLocal_12083 = 0;
	var uLocal_12084 = 0;
	var uLocal_12085 = 0;
	var uLocal_12086 = 0;
	var uLocal_12087 = 0;
	var uLocal_12088 = 0;
	var uLocal_12089 = 0;
	var uLocal_12090 = 0;
	var uLocal_12091 = 0;
	var uLocal_12092 = 0;
	var uLocal_12093 = 0;
	var uLocal_12094 = 0;
	var uLocal_12095 = 0;
	var uLocal_12096 = 0;
	var uLocal_12097 = 0;
	var uLocal_12098 = 0;
	var uLocal_12099 = 0;
	var uLocal_12100 = 0;
	var uLocal_12101 = 0;
	var uLocal_12102 = 0;
	var uLocal_12103 = 0;
	var uLocal_12104 = 0;
	var uLocal_12105 = 0;
	var uLocal_12106 = 0;
	var uLocal_12107 = 0;
	var uLocal_12108 = 0;
	var uLocal_12109 = 0;
	var uLocal_12110 = 0;
	var uLocal_12111 = 0;
	var uLocal_12112 = 0;
	var uLocal_12113 = 0;
	var uLocal_12114 = 0;
	var uLocal_12115 = 0;
	var uLocal_12116 = 0;
	var uLocal_12117 = 0;
	var uLocal_12118 = 0;
	var uLocal_12119 = 0;
	var uLocal_12120 = 0;
	var uLocal_12121 = 0;
	var uLocal_12122 = 0;
	var uLocal_12123 = 0;
	var uLocal_12124 = 0;
	var uLocal_12125 = 0;
	var uLocal_12126 = 0;
	var uLocal_12127 = 0;
	var uLocal_12128 = 0;
	var uLocal_12129 = 0;
	var uLocal_12130 = 0;
	var uLocal_12131 = 15;
	var uLocal_12132 = 0;
	var uLocal_12133 = 0;
	var uLocal_12134 = 0;
	var uLocal_12135 = 0;
	var uLocal_12136 = 0;
	var uLocal_12137 = 0;
	var uLocal_12138 = 0;
	var uLocal_12139 = 0;
	var uLocal_12140 = 0;
	var uLocal_12141 = 0;
	var uLocal_12142 = 0;
	var uLocal_12143 = 0;
	var uLocal_12144 = 0;
	var uLocal_12145 = 0;
	var uLocal_12146 = 0;
	var uLocal_12147 = 0;
	var uLocal_12148 = 0;
	var uLocal_12149 = 0;
	var uLocal_12150 = 0;
	var uLocal_12151 = 0;
	var uLocal_12152 = 0;
	var uLocal_12153 = 0;
	var uLocal_12154 = 0;
	var uLocal_12155 = 0;
	var uLocal_12156 = 0;
	var uLocal_12157 = 0;
	var uLocal_12158 = 0;
	var uLocal_12159 = 0;
	var uLocal_12160 = 0;
	var uLocal_12161 = 0;
	var uLocal_12162 = 0;
	var uLocal_12163 = 0;
	var uLocal_12164 = 0;
	var uLocal_12165 = 0;
	var uLocal_12166 = 0;
	var uLocal_12167 = 0;
	var uLocal_12168 = 0;
	var uLocal_12169 = 0;
	var uLocal_12170 = 0;
	var uLocal_12171 = 0;
	var uLocal_12172 = 0;
	var uLocal_12173 = 0;
	var uLocal_12174 = 0;
	var uLocal_12175 = 0;
	var uLocal_12176 = 0;
	var uLocal_12177 = 0;
	var uLocal_12178 = 0;
	var uLocal_12179 = 0;
	var uLocal_12180 = 0;
	var uLocal_12181 = 0;
	var uLocal_12182 = 0;
	var uLocal_12183 = 0;
	var uLocal_12184 = 0;
	var uLocal_12185 = 0;
	var uLocal_12186 = 0;
	var uLocal_12187 = 0;
	var uLocal_12188 = 0;
	var uLocal_12189 = 0;
	var uLocal_12190 = 0;
	var uLocal_12191 = 0;
	var uLocal_12192 = 0;
	var uLocal_12193 = 0;
	var uLocal_12194 = 0;
	var uLocal_12195 = 0;
	var uLocal_12196 = 0;
	var uLocal_12197 = 0;
	var uLocal_12198 = 0;
	var uLocal_12199 = 0;
	var uLocal_12200 = 0;
	var uLocal_12201 = 0;
	var uLocal_12202 = 0;
	var uLocal_12203 = 0;
	var uLocal_12204 = 0;
	var uLocal_12205 = 0;
	var uLocal_12206 = 0;
	var uLocal_12207 = 0;
	var uLocal_12208 = 0;
	var uLocal_12209 = 0;
	var uLocal_12210 = 0;
	var uLocal_12211 = 0;
	var uLocal_12212 = 0;
	var uLocal_12213 = 0;
	var uLocal_12214 = 0;
	var uLocal_12215 = 0;
	var uLocal_12216 = 0;
	var uLocal_12217 = 0;
	var uLocal_12218 = 0;
	var uLocal_12219 = 0;
	var uLocal_12220 = 0;
	var uLocal_12221 = 0;
	var uLocal_12222 = 0;
	var uLocal_12223 = 0;
	var uLocal_12224 = 0;
	var uLocal_12225 = 0;
	var uLocal_12226 = 0;
	var uLocal_12227 = 0;
	var uLocal_12228 = 0;
	var uLocal_12229 = 0;
	var uLocal_12230 = 0;
	var uLocal_12231 = 0;
	var uLocal_12232 = 0;
	var uLocal_12233 = 0;
	var uLocal_12234 = 0;
	var uLocal_12235 = 0;
	var uLocal_12236 = 0;
	var uLocal_12237 = 0;
	var uLocal_12238 = 0;
	var uLocal_12239 = 0;
	var uLocal_12240 = 0;
	var uLocal_12241 = 0;
	var uLocal_12242 = 0;
	var uLocal_12243 = 0;
	var uLocal_12244 = 0;
	var uLocal_12245 = 0;
	var uLocal_12246 = 0;
	var uLocal_12247 = 0;
	var uLocal_12248 = 0;
	var uLocal_12249 = 0;
	var uLocal_12250 = 0;
	var uLocal_12251 = 0;
	var uLocal_12252 = 0;
	var uLocal_12253 = 0;
	var uLocal_12254 = 0;
	var uLocal_12255 = 0;
	var uLocal_12256 = 0;
	var uLocal_12257 = 0;
	var uLocal_12258 = 0;
	var uLocal_12259 = 0;
	var uLocal_12260 = 0;
	var uLocal_12261 = 0;
	var uLocal_12262 = 0;
	var uLocal_12263 = 0;
	var uLocal_12264 = 0;
	var uLocal_12265 = 0;
	var uLocal_12266 = 0;
	var uLocal_12267 = 0;
	var uLocal_12268 = 0;
	var uLocal_12269 = 0;
	var uLocal_12270 = 0;
	var uLocal_12271 = 0;
	var uLocal_12272 = 0;
	var uLocal_12273 = 0;
	var uLocal_12274 = 0;
	var uLocal_12275 = 0;
	var uLocal_12276 = 0;
	var uLocal_12277 = 0;
	var uLocal_12278 = 0;
	var uLocal_12279 = 0;
	var uLocal_12280 = 0;
	var uLocal_12281 = 0;
	var uLocal_12282 = 0;
	var uLocal_12283 = 0;
	var uLocal_12284 = 0;
	var uLocal_12285 = 0;
	var uLocal_12286 = 0;
	var uLocal_12287 = 0;
	var uLocal_12288 = 0;
	var uLocal_12289 = 0;
	var uLocal_12290 = 0;
	var uLocal_12291 = 0;
	var uLocal_12292 = 0;
	var uLocal_12293 = 0;
	var uLocal_12294 = 0;
	var uLocal_12295 = 0;
	var uLocal_12296 = 0;
	var uLocal_12297 = 0;
	var uLocal_12298 = 0;
	var uLocal_12299 = 0;
	var uLocal_12300 = 0;
	var uLocal_12301 = 0;
	var uLocal_12302 = 0;
	var uLocal_12303 = 0;
	var uLocal_12304 = 0;
	var uLocal_12305 = 0;
	var uLocal_12306 = 0;
	var uLocal_12307 = 0;
	var uLocal_12308 = 0;
	var uLocal_12309 = 0;
	var uLocal_12310 = 0;
	var uLocal_12311 = 0;
	var uLocal_12312 = 0;
	var uLocal_12313 = 0;
	var uLocal_12314 = 0;
	var uLocal_12315 = 0;
	var uLocal_12316 = 0;
	var uLocal_12317 = 0;
	var uLocal_12318 = 0;
	var uLocal_12319 = 0;
	var uLocal_12320 = 0;
	var uLocal_12321 = 0;
	var uLocal_12322 = 0;
	var uLocal_12323 = 0;
	var uLocal_12324 = 0;
	var uLocal_12325 = 0;
	var uLocal_12326 = 0;
	var uLocal_12327 = 0;
	var uLocal_12328 = 0;
	var uLocal_12329 = 0;
	var uLocal_12330 = 0;
	var uLocal_12331 = 0;
	var uLocal_12332 = 0;
	var uLocal_12333 = 0;
	var uLocal_12334 = 0;
	var uLocal_12335 = 0;
	var uLocal_12336 = 0;
	var uLocal_12337 = 0;
	var uLocal_12338 = 0;
	var uLocal_12339 = 0;
	var uLocal_12340 = 0;
	var uLocal_12341 = 0;
	var uLocal_12342 = 0;
	var uLocal_12343 = 0;
	var uLocal_12344 = 0;
	var uLocal_12345 = 0;
	var uLocal_12346 = 0;
	var uLocal_12347 = 0;
	var uLocal_12348 = 0;
	var uLocal_12349 = 0;
	var uLocal_12350 = 0;
	var uLocal_12351 = 0;
	var uLocal_12352 = 0;
	var uLocal_12353 = 0;
	var uLocal_12354 = 0;
	var uLocal_12355 = 0;
	var uLocal_12356 = 0;
	var uLocal_12357 = 0;
	var uLocal_12358 = 0;
	var uLocal_12359 = 0;
	var uLocal_12360 = 0;
	var uLocal_12361 = 0;
	var uLocal_12362 = 0;
	var uLocal_12363 = 0;
	var uLocal_12364 = 0;
	var uLocal_12365 = 0;
	var uLocal_12366 = 0;
	var uLocal_12367 = 0;
	var uLocal_12368 = 0;
	var uLocal_12369 = 0;
	var uLocal_12370 = 0;
	var uLocal_12371 = 0;
	var uLocal_12372 = 10;
	var uLocal_12373 = 0;
	var uLocal_12374 = 0;
	var uLocal_12375 = 0;
	var uLocal_12376 = 0;
	var uLocal_12377 = 0;
	var uLocal_12378 = 0;
	var uLocal_12379 = 0;
	var uLocal_12380 = 0;
	var uLocal_12381 = 0;
	var uLocal_12382 = 0;
	var uLocal_12383 = 0;
	var uLocal_12384 = 0;
	var uLocal_12385 = 0;
	var uLocal_12386 = 0;
	var uLocal_12387 = 0;
	var uLocal_12388 = 0;
	var uLocal_12389 = 0;
	var uLocal_12390 = 0;
	var uLocal_12391 = 0;
	var uLocal_12392 = 0;
	var uLocal_12393 = 0;
	var uLocal_12394 = 0;
	var uLocal_12395 = 0;
	var uLocal_12396 = 0;
	var uLocal_12397 = 0;
	var uLocal_12398 = 0;
	var uLocal_12399 = 0;
	var uLocal_12400 = 0;
	var uLocal_12401 = 0;
	var uLocal_12402 = -1;
	var uLocal_12403 = 0;
	var uLocal_12404 = 0;
	var uLocal_12405 = 0;
	var uLocal_12406 = 0;
	var uLocal_12407 = 0;
	var uLocal_12408 = 0;
	var uLocal_12409 = 0;
	var uLocal_12410 = 0;
	var uLocal_12411 = 0;
	var uLocal_12412 = 0;
	var uLocal_12413 = 0;
	var uLocal_12414 = 65;
	var uLocal_12415 = 0;
	var uLocal_12416 = 0;
	var uLocal_12417 = 0;
	var uLocal_12418 = 0;
	var uLocal_12419 = 0;
	var uLocal_12420 = 0;
	var uLocal_12421 = 0;
	var uLocal_12422 = 0;
	var uLocal_12423 = 0;
	var uLocal_12424 = 0;
	var uLocal_12425 = -1569615261;
	var uLocal_12426 = 0;
	var uLocal_12427 = 0;
	var uLocal_12428 = 0;
	var uLocal_12429 = 0;
	var uLocal_12430 = 0;
	var uLocal_12431 = 0;
	var uLocal_12432 = 0;
	var uLocal_12433 = 0;
	var uLocal_12434 = 0;
	var uLocal_12435 = 0;
	var uLocal_12436 = 0;
	var uLocal_12437 = 0;
	var uLocal_12438 = -1569615261;
	var uLocal_12439 = 0;
	var uLocal_12440 = 0;
	var uLocal_12441 = 0;
	var uLocal_12442 = 0;
	var uLocal_12443 = 0;
	var uLocal_12444 = 0;
	var uLocal_12445 = 0;
	var uLocal_12446 = 0;
	var uLocal_12447 = 0;
	var uLocal_12448 = 0;
	var uLocal_12449 = 0;
	var uLocal_12450 = 0;
	var uLocal_12451 = -1569615261;
	var uLocal_12452 = 0;
	var uLocal_12453 = 0;
	var uLocal_12454 = 0;
	var uLocal_12455 = 0;
	var uLocal_12456 = 0;
	var uLocal_12457 = 0;
	var uLocal_12458 = 0;
	var uLocal_12459 = 0;
	var uLocal_12460 = 0;
	var uLocal_12461 = 0;
	var uLocal_12462 = 0;
	var uLocal_12463 = 0;
	var uLocal_12464 = -1569615261;
	var uLocal_12465 = 0;
	var uLocal_12466 = 0;
	var uLocal_12467 = 0;
	var uLocal_12468 = 0;
	var uLocal_12469 = 0;
	var uLocal_12470 = 0;
	var uLocal_12471 = 0;
	var uLocal_12472 = 0;
	var uLocal_12473 = 0;
	var uLocal_12474 = 0;
	var uLocal_12475 = 0;
	var uLocal_12476 = 0;
	var uLocal_12477 = -1569615261;
	var uLocal_12478 = 0;
	var uLocal_12479 = 0;
	var uLocal_12480 = 0;
	var uLocal_12481 = 0;
	var uLocal_12482 = 0;
	var uLocal_12483 = 0;
	var uLocal_12484 = 0;
	var uLocal_12485 = 0;
	var uLocal_12486 = 0;
	var uLocal_12487 = 0;
	var uLocal_12488 = 0;
	var uLocal_12489 = 0;
	var uLocal_12490 = -1569615261;
	var uLocal_12491 = 0;
	var uLocal_12492 = 0;
	var uLocal_12493 = 0;
	var uLocal_12494 = 0;
	var uLocal_12495 = 0;
	var uLocal_12496 = 0;
	var uLocal_12497 = 0;
	var uLocal_12498 = 0;
	var uLocal_12499 = 0;
	var uLocal_12500 = 0;
	var uLocal_12501 = 0;
	var uLocal_12502 = 0;
	var uLocal_12503 = -1569615261;
	var uLocal_12504 = 0;
	var uLocal_12505 = 0;
	var uLocal_12506 = 0;
	var uLocal_12507 = 0;
	var uLocal_12508 = 0;
	var uLocal_12509 = 0;
	var uLocal_12510 = 0;
	var uLocal_12511 = 0;
	var uLocal_12512 = 0;
	var uLocal_12513 = 0;
	var uLocal_12514 = 0;
	var uLocal_12515 = 0;
	var uLocal_12516 = -1569615261;
	var uLocal_12517 = 0;
	var uLocal_12518 = 0;
	var uLocal_12519 = 0;
	var uLocal_12520 = 0;
	var uLocal_12521 = 0;
	var uLocal_12522 = 0;
	var uLocal_12523 = 0;
	var uLocal_12524 = 0;
	var uLocal_12525 = 0;
	var uLocal_12526 = 0;
	var uLocal_12527 = 0;
	var uLocal_12528 = 0;
	var uLocal_12529 = -1569615261;
	var uLocal_12530 = 0;
	var uLocal_12531 = 0;
	var uLocal_12532 = 0;
	var uLocal_12533 = 0;
	var uLocal_12534 = 0;
	var uLocal_12535 = 0;
	var uLocal_12536 = 0;
	var uLocal_12537 = 0;
	var uLocal_12538 = 0;
	var uLocal_12539 = 0;
	var uLocal_12540 = 0;
	var uLocal_12541 = 0;
	var uLocal_12542 = -1569615261;
	var uLocal_12543 = 0;
	var uLocal_12544 = 0;
	var uLocal_12545 = 0;
	var uLocal_12546 = 0;
	var uLocal_12547 = 0;
	var uLocal_12548 = 0;
	var uLocal_12549 = 0;
	var uLocal_12550 = 0;
	var uLocal_12551 = 0;
	var uLocal_12552 = 0;
	var uLocal_12553 = 0;
	var uLocal_12554 = 0;
	var uLocal_12555 = -1569615261;
	var uLocal_12556 = 0;
	var uLocal_12557 = 0;
	var uLocal_12558 = 0;
	var uLocal_12559 = 0;
	var uLocal_12560 = 0;
	var uLocal_12561 = 0;
	var uLocal_12562 = 0;
	var uLocal_12563 = 0;
	var uLocal_12564 = 0;
	var uLocal_12565 = 0;
	var uLocal_12566 = 0;
	var uLocal_12567 = 0;
	var uLocal_12568 = -1569615261;
	var uLocal_12569 = 0;
	var uLocal_12570 = 0;
	var uLocal_12571 = 0;
	var uLocal_12572 = 0;
	var uLocal_12573 = 0;
	var uLocal_12574 = 0;
	var uLocal_12575 = 0;
	var uLocal_12576 = 0;
	var uLocal_12577 = 0;
	var uLocal_12578 = 0;
	var uLocal_12579 = 0;
	var uLocal_12580 = 0;
	var uLocal_12581 = -1569615261;
	var uLocal_12582 = 0;
	var uLocal_12583 = 0;
	var uLocal_12584 = 0;
	var uLocal_12585 = 0;
	var uLocal_12586 = 0;
	var uLocal_12587 = 0;
	var uLocal_12588 = 0;
	var uLocal_12589 = 0;
	var uLocal_12590 = 0;
	var uLocal_12591 = 0;
	var uLocal_12592 = 0;
	var uLocal_12593 = 0;
	var uLocal_12594 = -1569615261;
	var uLocal_12595 = 0;
	var uLocal_12596 = 0;
	var uLocal_12597 = 0;
	var uLocal_12598 = 0;
	var uLocal_12599 = 0;
	var uLocal_12600 = 0;
	var uLocal_12601 = 0;
	var uLocal_12602 = 0;
	var uLocal_12603 = 0;
	var uLocal_12604 = 0;
	var uLocal_12605 = 0;
	var uLocal_12606 = 0;
	var uLocal_12607 = -1569615261;
	var uLocal_12608 = 0;
	var uLocal_12609 = 0;
	var uLocal_12610 = 0;
	var uLocal_12611 = 0;
	var uLocal_12612 = 0;
	var uLocal_12613 = 0;
	var uLocal_12614 = 0;
	var uLocal_12615 = 0;
	var uLocal_12616 = 0;
	var uLocal_12617 = 0;
	var uLocal_12618 = 0;
	var uLocal_12619 = 0;
	var uLocal_12620 = -1569615261;
	var uLocal_12621 = 0;
	var uLocal_12622 = 0;
	var uLocal_12623 = 0;
	var uLocal_12624 = 0;
	var uLocal_12625 = 0;
	var uLocal_12626 = 0;
	var uLocal_12627 = 0;
	var uLocal_12628 = 0;
	var uLocal_12629 = 0;
	var uLocal_12630 = 0;
	var uLocal_12631 = 0;
	var uLocal_12632 = 0;
	var uLocal_12633 = -1569615261;
	var uLocal_12634 = 0;
	var uLocal_12635 = 0;
	var uLocal_12636 = 0;
	var uLocal_12637 = 0;
	var uLocal_12638 = 0;
	var uLocal_12639 = 0;
	var uLocal_12640 = 0;
	var uLocal_12641 = 0;
	var uLocal_12642 = 0;
	var uLocal_12643 = 0;
	var uLocal_12644 = 0;
	var uLocal_12645 = 0;
	var uLocal_12646 = -1569615261;
	var uLocal_12647 = 0;
	var uLocal_12648 = 0;
	var uLocal_12649 = 0;
	var uLocal_12650 = 0;
	var uLocal_12651 = 0;
	var uLocal_12652 = 0;
	var uLocal_12653 = 0;
	var uLocal_12654 = 0;
	var uLocal_12655 = 0;
	var uLocal_12656 = 0;
	var uLocal_12657 = 0;
	var uLocal_12658 = 0;
	var uLocal_12659 = -1569615261;
	var uLocal_12660 = 0;
	var uLocal_12661 = 0;
	var uLocal_12662 = 0;
	var uLocal_12663 = 0;
	var uLocal_12664 = 0;
	var uLocal_12665 = 0;
	var uLocal_12666 = 0;
	var uLocal_12667 = 0;
	var uLocal_12668 = 0;
	var uLocal_12669 = 0;
	var uLocal_12670 = 0;
	var uLocal_12671 = 0;
	var uLocal_12672 = -1569615261;
	var uLocal_12673 = 0;
	var uLocal_12674 = 0;
	var uLocal_12675 = 0;
	var uLocal_12676 = 0;
	var uLocal_12677 = 0;
	var uLocal_12678 = 0;
	var uLocal_12679 = 0;
	var uLocal_12680 = 0;
	var uLocal_12681 = 0;
	var uLocal_12682 = 0;
	var uLocal_12683 = 0;
	var uLocal_12684 = 0;
	var uLocal_12685 = -1569615261;
	var uLocal_12686 = 0;
	var uLocal_12687 = 0;
	var uLocal_12688 = 0;
	var uLocal_12689 = 0;
	var uLocal_12690 = 0;
	var uLocal_12691 = 0;
	var uLocal_12692 = 0;
	var uLocal_12693 = 0;
	var uLocal_12694 = 0;
	var uLocal_12695 = 0;
	var uLocal_12696 = 0;
	var uLocal_12697 = 0;
	var uLocal_12698 = -1569615261;
	var uLocal_12699 = 0;
	var uLocal_12700 = 0;
	var uLocal_12701 = 0;
	var uLocal_12702 = 0;
	var uLocal_12703 = 0;
	var uLocal_12704 = 0;
	var uLocal_12705 = 0;
	var uLocal_12706 = 0;
	var uLocal_12707 = 0;
	var uLocal_12708 = 0;
	var uLocal_12709 = 0;
	var uLocal_12710 = 0;
	var uLocal_12711 = -1569615261;
	var uLocal_12712 = 0;
	var uLocal_12713 = 0;
	var uLocal_12714 = 0;
	var uLocal_12715 = 0;
	var uLocal_12716 = 0;
	var uLocal_12717 = 0;
	var uLocal_12718 = 0;
	var uLocal_12719 = 0;
	var uLocal_12720 = 0;
	var uLocal_12721 = 0;
	var uLocal_12722 = 0;
	var uLocal_12723 = 0;
	var uLocal_12724 = -1569615261;
	var uLocal_12725 = 0;
	var uLocal_12726 = 0;
	var uLocal_12727 = 0;
	var uLocal_12728 = 0;
	var uLocal_12729 = 0;
	var uLocal_12730 = 0;
	var uLocal_12731 = 0;
	var uLocal_12732 = 0;
	var uLocal_12733 = 0;
	var uLocal_12734 = 0;
	var uLocal_12735 = 0;
	var uLocal_12736 = 0;
	var uLocal_12737 = -1569615261;
	var uLocal_12738 = 0;
	var uLocal_12739 = 0;
	var uLocal_12740 = 0;
	var uLocal_12741 = 0;
	var uLocal_12742 = 0;
	var uLocal_12743 = 0;
	var uLocal_12744 = 0;
	var uLocal_12745 = 0;
	var uLocal_12746 = 0;
	var uLocal_12747 = 0;
	var uLocal_12748 = 0;
	var uLocal_12749 = 0;
	var uLocal_12750 = -1569615261;
	var uLocal_12751 = 0;
	var uLocal_12752 = 0;
	var uLocal_12753 = 0;
	var uLocal_12754 = 0;
	var uLocal_12755 = 0;
	var uLocal_12756 = 0;
	var uLocal_12757 = 0;
	var uLocal_12758 = 0;
	var uLocal_12759 = 0;
	var uLocal_12760 = 0;
	var uLocal_12761 = 0;
	var uLocal_12762 = 0;
	var uLocal_12763 = -1569615261;
	var uLocal_12764 = 0;
	var uLocal_12765 = 0;
	var uLocal_12766 = 0;
	var uLocal_12767 = 0;
	var uLocal_12768 = 0;
	var uLocal_12769 = 0;
	var uLocal_12770 = 0;
	var uLocal_12771 = 0;
	var uLocal_12772 = 0;
	var uLocal_12773 = 0;
	var uLocal_12774 = 0;
	var uLocal_12775 = 0;
	var uLocal_12776 = -1569615261;
	var uLocal_12777 = 0;
	var uLocal_12778 = 0;
	var uLocal_12779 = 0;
	var uLocal_12780 = 0;
	var uLocal_12781 = 0;
	var uLocal_12782 = 0;
	var uLocal_12783 = 0;
	var uLocal_12784 = 0;
	var uLocal_12785 = 0;
	var uLocal_12786 = 0;
	var uLocal_12787 = 0;
	var uLocal_12788 = 0;
	var uLocal_12789 = -1569615261;
	var uLocal_12790 = 0;
	var uLocal_12791 = 0;
	var uLocal_12792 = 0;
	var uLocal_12793 = 0;
	var uLocal_12794 = 0;
	var uLocal_12795 = 0;
	var uLocal_12796 = 0;
	var uLocal_12797 = 0;
	var uLocal_12798 = 0;
	var uLocal_12799 = 0;
	var uLocal_12800 = 0;
	var uLocal_12801 = 0;
	var uLocal_12802 = -1569615261;
	var uLocal_12803 = 0;
	var uLocal_12804 = 0;
	var uLocal_12805 = 0;
	var uLocal_12806 = 0;
	var uLocal_12807 = 0;
	var uLocal_12808 = 0;
	var uLocal_12809 = 0;
	var uLocal_12810 = 0;
	var uLocal_12811 = 0;
	var uLocal_12812 = 0;
	var uLocal_12813 = 0;
	var uLocal_12814 = 0;
	var uLocal_12815 = -1569615261;
	var uLocal_12816 = 0;
	var uLocal_12817 = 0;
	var uLocal_12818 = 0;
	var uLocal_12819 = 0;
	var uLocal_12820 = 0;
	var uLocal_12821 = 0;
	var uLocal_12822 = 0;
	var uLocal_12823 = 0;
	var uLocal_12824 = 0;
	var uLocal_12825 = 0;
	var uLocal_12826 = 0;
	var uLocal_12827 = 0;
	var uLocal_12828 = -1569615261;
	var uLocal_12829 = 0;
	var uLocal_12830 = 0;
	var uLocal_12831 = 0;
	var uLocal_12832 = 0;
	var uLocal_12833 = 0;
	var uLocal_12834 = 0;
	var uLocal_12835 = 0;
	var uLocal_12836 = 0;
	var uLocal_12837 = 0;
	var uLocal_12838 = 0;
	var uLocal_12839 = 0;
	var uLocal_12840 = 0;
	var uLocal_12841 = -1569615261;
	var uLocal_12842 = 0;
	var uLocal_12843 = 0;
	var uLocal_12844 = 0;
	var uLocal_12845 = 0;
	var uLocal_12846 = 0;
	var uLocal_12847 = 0;
	var uLocal_12848 = 0;
	var uLocal_12849 = 0;
	var uLocal_12850 = 0;
	var uLocal_12851 = 0;
	var uLocal_12852 = 0;
	var uLocal_12853 = 0;
	var uLocal_12854 = -1569615261;
	var uLocal_12855 = 0;
	var uLocal_12856 = 0;
	var uLocal_12857 = 0;
	var uLocal_12858 = 0;
	var uLocal_12859 = 0;
	var uLocal_12860 = 0;
	var uLocal_12861 = 0;
	var uLocal_12862 = 0;
	var uLocal_12863 = 0;
	var uLocal_12864 = 0;
	var uLocal_12865 = 0;
	var uLocal_12866 = 0;
	var uLocal_12867 = -1569615261;
	var uLocal_12868 = 0;
	var uLocal_12869 = 0;
	var uLocal_12870 = 0;
	var uLocal_12871 = 0;
	var uLocal_12872 = 0;
	var uLocal_12873 = 0;
	var uLocal_12874 = 0;
	var uLocal_12875 = 0;
	var uLocal_12876 = 0;
	var uLocal_12877 = 0;
	var uLocal_12878 = 0;
	var uLocal_12879 = 0;
	var uLocal_12880 = -1569615261;
	var uLocal_12881 = 0;
	var uLocal_12882 = 0;
	var uLocal_12883 = 0;
	var uLocal_12884 = 0;
	var uLocal_12885 = 0;
	var uLocal_12886 = 0;
	var uLocal_12887 = 0;
	var uLocal_12888 = 0;
	var uLocal_12889 = 0;
	var uLocal_12890 = 0;
	var uLocal_12891 = 0;
	var uLocal_12892 = 0;
	var uLocal_12893 = -1569615261;
	var uLocal_12894 = 0;
	var uLocal_12895 = 0;
	var uLocal_12896 = 0;
	var uLocal_12897 = 0;
	var uLocal_12898 = 0;
	var uLocal_12899 = 0;
	var uLocal_12900 = 0;
	var uLocal_12901 = 0;
	var uLocal_12902 = 0;
	var uLocal_12903 = 0;
	var uLocal_12904 = 0;
	var uLocal_12905 = 0;
	var uLocal_12906 = -1569615261;
	var uLocal_12907 = 0;
	var uLocal_12908 = 0;
	var uLocal_12909 = 0;
	var uLocal_12910 = 0;
	var uLocal_12911 = 0;
	var uLocal_12912 = 0;
	var uLocal_12913 = 0;
	var uLocal_12914 = 0;
	var uLocal_12915 = 0;
	var uLocal_12916 = 0;
	var uLocal_12917 = 0;
	var uLocal_12918 = 0;
	var uLocal_12919 = -1569615261;
	var uLocal_12920 = 0;
	var uLocal_12921 = 0;
	var uLocal_12922 = 0;
	var uLocal_12923 = 0;
	var uLocal_12924 = 0;
	var uLocal_12925 = 0;
	var uLocal_12926 = 0;
	var uLocal_12927 = 0;
	var uLocal_12928 = 0;
	var uLocal_12929 = 0;
	var uLocal_12930 = 0;
	var uLocal_12931 = 0;
	var uLocal_12932 = -1569615261;
	var uLocal_12933 = 0;
	var uLocal_12934 = 0;
	var uLocal_12935 = 0;
	var uLocal_12936 = 0;
	var uLocal_12937 = 0;
	var uLocal_12938 = 0;
	var uLocal_12939 = 0;
	var uLocal_12940 = 0;
	var uLocal_12941 = 0;
	var uLocal_12942 = 0;
	var uLocal_12943 = 0;
	var uLocal_12944 = 0;
	var uLocal_12945 = -1569615261;
	var uLocal_12946 = 0;
	var uLocal_12947 = 0;
	var uLocal_12948 = 0;
	var uLocal_12949 = 0;
	var uLocal_12950 = 0;
	var uLocal_12951 = 0;
	var uLocal_12952 = 0;
	var uLocal_12953 = 0;
	var uLocal_12954 = 0;
	var uLocal_12955 = 0;
	var uLocal_12956 = 0;
	var uLocal_12957 = 0;
	var uLocal_12958 = -1569615261;
	var uLocal_12959 = 0;
	var uLocal_12960 = 0;
	var uLocal_12961 = 0;
	var uLocal_12962 = 0;
	var uLocal_12963 = 0;
	var uLocal_12964 = 0;
	var uLocal_12965 = 0;
	var uLocal_12966 = 0;
	var uLocal_12967 = 0;
	var uLocal_12968 = 0;
	var uLocal_12969 = 0;
	var uLocal_12970 = 0;
	var uLocal_12971 = -1569615261;
	var uLocal_12972 = 0;
	var uLocal_12973 = 0;
	var uLocal_12974 = 0;
	var uLocal_12975 = 0;
	var uLocal_12976 = 0;
	var uLocal_12977 = 0;
	var uLocal_12978 = 0;
	var uLocal_12979 = 0;
	var uLocal_12980 = 0;
	var uLocal_12981 = 0;
	var uLocal_12982 = 0;
	var uLocal_12983 = 0;
	var uLocal_12984 = -1569615261;
	var uLocal_12985 = 0;
	var uLocal_12986 = 0;
	var uLocal_12987 = 0;
	var uLocal_12988 = 0;
	var uLocal_12989 = 0;
	var uLocal_12990 = 0;
	var uLocal_12991 = 0;
	var uLocal_12992 = 0;
	var uLocal_12993 = 0;
	var uLocal_12994 = 0;
	var uLocal_12995 = 0;
	var uLocal_12996 = 0;
	var uLocal_12997 = -1569615261;
	var uLocal_12998 = 0;
	var uLocal_12999 = 0;
	var uLocal_13000 = 0;
	var uLocal_13001 = 0;
	var uLocal_13002 = 0;
	var uLocal_13003 = 0;
	var uLocal_13004 = 0;
	var uLocal_13005 = 0;
	var uLocal_13006 = 0;
	var uLocal_13007 = 0;
	var uLocal_13008 = 0;
	var uLocal_13009 = 0;
	var uLocal_13010 = -1569615261;
	var uLocal_13011 = 0;
	var uLocal_13012 = 0;
	var uLocal_13013 = 0;
	var uLocal_13014 = 0;
	var uLocal_13015 = 0;
	var uLocal_13016 = 0;
	var uLocal_13017 = 0;
	var uLocal_13018 = 0;
	var uLocal_13019 = 0;
	var uLocal_13020 = 0;
	var uLocal_13021 = 0;
	var uLocal_13022 = 0;
	var uLocal_13023 = -1569615261;
	var uLocal_13024 = 0;
	var uLocal_13025 = 0;
	var uLocal_13026 = 0;
	var uLocal_13027 = 0;
	var uLocal_13028 = 0;
	var uLocal_13029 = 0;
	var uLocal_13030 = 0;
	var uLocal_13031 = 0;
	var uLocal_13032 = 0;
	var uLocal_13033 = 0;
	var uLocal_13034 = 0;
	var uLocal_13035 = 0;
	var uLocal_13036 = -1569615261;
	var uLocal_13037 = 0;
	var uLocal_13038 = 0;
	var uLocal_13039 = 0;
	var uLocal_13040 = 0;
	var uLocal_13041 = 0;
	var uLocal_13042 = 0;
	var uLocal_13043 = 0;
	var uLocal_13044 = 0;
	var uLocal_13045 = 0;
	var uLocal_13046 = 0;
	var uLocal_13047 = 0;
	var uLocal_13048 = 0;
	var uLocal_13049 = -1569615261;
	var uLocal_13050 = 0;
	var uLocal_13051 = 0;
	var uLocal_13052 = 0;
	var uLocal_13053 = 0;
	var uLocal_13054 = 0;
	var uLocal_13055 = 0;
	var uLocal_13056 = 0;
	var uLocal_13057 = 0;
	var uLocal_13058 = 0;
	var uLocal_13059 = 0;
	var uLocal_13060 = 0;
	var uLocal_13061 = 0;
	var uLocal_13062 = -1569615261;
	var uLocal_13063 = 0;
	var uLocal_13064 = 0;
	var uLocal_13065 = 0;
	var uLocal_13066 = 0;
	var uLocal_13067 = 0;
	var uLocal_13068 = 0;
	var uLocal_13069 = 0;
	var uLocal_13070 = 0;
	var uLocal_13071 = 0;
	var uLocal_13072 = 0;
	var uLocal_13073 = 0;
	var uLocal_13074 = 0;
	var uLocal_13075 = -1569615261;
	var uLocal_13076 = 0;
	var uLocal_13077 = 0;
	var uLocal_13078 = 0;
	var uLocal_13079 = 0;
	var uLocal_13080 = 0;
	var uLocal_13081 = 0;
	var uLocal_13082 = 0;
	var uLocal_13083 = 0;
	var uLocal_13084 = 0;
	var uLocal_13085 = 0;
	var uLocal_13086 = 0;
	var uLocal_13087 = 0;
	var uLocal_13088 = -1569615261;
	var uLocal_13089 = 0;
	var uLocal_13090 = 0;
	var uLocal_13091 = 0;
	var uLocal_13092 = 0;
	var uLocal_13093 = 0;
	var uLocal_13094 = 0;
	var uLocal_13095 = 0;
	var uLocal_13096 = 0;
	var uLocal_13097 = 0;
	var uLocal_13098 = 0;
	var uLocal_13099 = 0;
	var uLocal_13100 = 0;
	var uLocal_13101 = -1569615261;
	var uLocal_13102 = 0;
	var uLocal_13103 = 0;
	var uLocal_13104 = 0;
	var uLocal_13105 = 0;
	var uLocal_13106 = 0;
	var uLocal_13107 = 0;
	var uLocal_13108 = 0;
	var uLocal_13109 = 0;
	var uLocal_13110 = 0;
	var uLocal_13111 = 0;
	var uLocal_13112 = 0;
	var uLocal_13113 = 0;
	var uLocal_13114 = -1569615261;
	var uLocal_13115 = 0;
	var uLocal_13116 = 0;
	var uLocal_13117 = 0;
	var uLocal_13118 = 0;
	var uLocal_13119 = 0;
	var uLocal_13120 = 0;
	var uLocal_13121 = 0;
	var uLocal_13122 = 0;
	var uLocal_13123 = 0;
	var uLocal_13124 = 0;
	var uLocal_13125 = 0;
	var uLocal_13126 = 0;
	var uLocal_13127 = -1569615261;
	var uLocal_13128 = 0;
	var uLocal_13129 = 0;
	var uLocal_13130 = 0;
	var uLocal_13131 = 0;
	var uLocal_13132 = 0;
	var uLocal_13133 = 0;
	var uLocal_13134 = 0;
	var uLocal_13135 = 0;
	var uLocal_13136 = 0;
	var uLocal_13137 = 0;
	var uLocal_13138 = 0;
	var uLocal_13139 = 0;
	var uLocal_13140 = -1569615261;
	var uLocal_13141 = 0;
	var uLocal_13142 = 0;
	var uLocal_13143 = 0;
	var uLocal_13144 = 0;
	var uLocal_13145 = 0;
	var uLocal_13146 = 0;
	var uLocal_13147 = 0;
	var uLocal_13148 = 0;
	var uLocal_13149 = 0;
	var uLocal_13150 = 0;
	var uLocal_13151 = 0;
	var uLocal_13152 = 0;
	var uLocal_13153 = -1569615261;
	var uLocal_13154 = 0;
	var uLocal_13155 = 0;
	var uLocal_13156 = 0;
	var uLocal_13157 = 0;
	var uLocal_13158 = 0;
	var uLocal_13159 = 0;
	var uLocal_13160 = 0;
	var uLocal_13161 = 0;
	var uLocal_13162 = 0;
	var uLocal_13163 = 0;
	var uLocal_13164 = 0;
	var uLocal_13165 = 0;
	var uLocal_13166 = -1569615261;
	var uLocal_13167 = 0;
	var uLocal_13168 = 0;
	var uLocal_13169 = 0;
	var uLocal_13170 = 0;
	var uLocal_13171 = 0;
	var uLocal_13172 = 0;
	var uLocal_13173 = 0;
	var uLocal_13174 = 0;
	var uLocal_13175 = 0;
	var uLocal_13176 = 0;
	var uLocal_13177 = 0;
	var uLocal_13178 = 0;
	var uLocal_13179 = -1569615261;
	var uLocal_13180 = 0;
	var uLocal_13181 = 0;
	var uLocal_13182 = 0;
	var uLocal_13183 = 0;
	var uLocal_13184 = 0;
	var uLocal_13185 = 0;
	var uLocal_13186 = 0;
	var uLocal_13187 = 0;
	var uLocal_13188 = 0;
	var uLocal_13189 = 0;
	var uLocal_13190 = 0;
	var uLocal_13191 = 0;
	var uLocal_13192 = -1569615261;
	var uLocal_13193 = 0;
	var uLocal_13194 = 0;
	var uLocal_13195 = 0;
	var uLocal_13196 = 0;
	var uLocal_13197 = 0;
	var uLocal_13198 = 0;
	var uLocal_13199 = 0;
	var uLocal_13200 = 0;
	var uLocal_13201 = 0;
	var uLocal_13202 = 0;
	var uLocal_13203 = 0;
	var uLocal_13204 = 0;
	var uLocal_13205 = -1569615261;
	var uLocal_13206 = 0;
	var uLocal_13207 = 0;
	var uLocal_13208 = 0;
	var uLocal_13209 = 0;
	var uLocal_13210 = 0;
	var uLocal_13211 = 0;
	var uLocal_13212 = 0;
	var uLocal_13213 = 0;
	var uLocal_13214 = 0;
	var uLocal_13215 = 0;
	var uLocal_13216 = 0;
	var uLocal_13217 = 0;
	var uLocal_13218 = -1569615261;
	var uLocal_13219 = 0;
	var uLocal_13220 = 0;
	var uLocal_13221 = 0;
	var uLocal_13222 = 0;
	var uLocal_13223 = 0;
	var uLocal_13224 = 0;
	var uLocal_13225 = 0;
	var uLocal_13226 = 0;
	var uLocal_13227 = 0;
	var uLocal_13228 = 0;
	var uLocal_13229 = 0;
	var uLocal_13230 = 0;
	var uLocal_13231 = -1569615261;
	var uLocal_13232 = 0;
	var uLocal_13233 = 0;
	var uLocal_13234 = 0;
	var uLocal_13235 = 0;
	var uLocal_13236 = 0;
	var uLocal_13237 = 0;
	var uLocal_13238 = 0;
	var uLocal_13239 = 0;
	var uLocal_13240 = 0;
	var uLocal_13241 = 0;
	var uLocal_13242 = 0;
	var uLocal_13243 = 0;
	var uLocal_13244 = -1569615261;
	var uLocal_13245 = 0;
	var uLocal_13246 = 0;
	var uLocal_13247 = 0;
	var uLocal_13248 = 0;
	var uLocal_13249 = 0;
	var uLocal_13250 = 0;
	var uLocal_13251 = 0;
	var uLocal_13252 = 0;
	var uLocal_13253 = 0;
	var uLocal_13254 = 0;
	var uLocal_13255 = 0;
	var uLocal_13256 = 0;
	var uLocal_13257 = -1569615261;
	var uLocal_13258 = 0;
	var uLocal_13259 = 0;
	var uLocal_13260 = 0;
	var uLocal_13261 = 0;
	var uLocal_13262 = 0;
	var uLocal_13263 = 0;
	var uLocal_13264 = 0;
	var uLocal_13265 = 0;
	var uLocal_13266 = 0;
	var uLocal_13267 = 0;
	var uLocal_13268 = 0;
	var uLocal_13269 = 0;
	var uLocal_13270 = 0;
	var uLocal_13271 = 0;
	var uLocal_13272 = 0;
	var uLocal_13273 = 0;
	var uLocal_13274 = 0;
	var uLocal_13275 = 1;
	var uLocal_13276 = 30;
	var uLocal_13277 = -1;
	var uLocal_13278 = 0;
	var uLocal_13279 = 1;
	var uLocal_13280 = 0;
	var uLocal_13281 = 0;
	var uLocal_13282 = 0;
	var uLocal_13283 = 0;
	var uLocal_13284 = 0;
	var uLocal_13285 = 0;
	var uLocal_13286 = 0;
	var uLocal_13287 = 0;
	var uLocal_13288 = 0;
	var uLocal_13289 = 1065353216;
	var uLocal_13290 = 0;
	var uLocal_13291 = 0;
	var uLocal_13292 = 1065353216;
	var uLocal_13293 = 1;
	var uLocal_13294 = 0;
	var uLocal_13295 = -1;
	var uLocal_13296 = 0;
	var uLocal_13297 = 1;
	var uLocal_13298 = 0;
	var uLocal_13299 = 0;
	var uLocal_13300 = 0;
	var uLocal_13301 = 0;
	var uLocal_13302 = 0;
	var uLocal_13303 = 0;
	var uLocal_13304 = 0;
	var uLocal_13305 = 0;
	var uLocal_13306 = 0;
	var uLocal_13307 = 1065353216;
	var uLocal_13308 = 0;
	var uLocal_13309 = 0;
	var uLocal_13310 = 1065353216;
	var uLocal_13311 = 1;
	var uLocal_13312 = 0;
	var uLocal_13313 = -1;
	var uLocal_13314 = 0;
	var uLocal_13315 = 1;
	var uLocal_13316 = 0;
	var uLocal_13317 = 0;
	var uLocal_13318 = 0;
	var uLocal_13319 = 0;
	var uLocal_13320 = 0;
	var uLocal_13321 = 0;
	var uLocal_13322 = 0;
	var uLocal_13323 = 0;
	var uLocal_13324 = 0;
	var uLocal_13325 = 1065353216;
	var uLocal_13326 = 0;
	var uLocal_13327 = 0;
	var uLocal_13328 = 1065353216;
	var uLocal_13329 = 1;
	var uLocal_13330 = 0;
	var uLocal_13331 = -1;
	var uLocal_13332 = 0;
	var uLocal_13333 = 1;
	var uLocal_13334 = 0;
	var uLocal_13335 = 0;
	var uLocal_13336 = 0;
	var uLocal_13337 = 0;
	var uLocal_13338 = 0;
	var uLocal_13339 = 0;
	var uLocal_13340 = 0;
	var uLocal_13341 = 0;
	var uLocal_13342 = 0;
	var uLocal_13343 = 1065353216;
	var uLocal_13344 = 0;
	var uLocal_13345 = 0;
	var uLocal_13346 = 1065353216;
	var uLocal_13347 = 1;
	var uLocal_13348 = 0;
	var uLocal_13349 = -1;
	var uLocal_13350 = 0;
	var uLocal_13351 = 1;
	var uLocal_13352 = 0;
	var uLocal_13353 = 0;
	var uLocal_13354 = 0;
	var uLocal_13355 = 0;
	var uLocal_13356 = 0;
	var uLocal_13357 = 0;
	var uLocal_13358 = 0;
	var uLocal_13359 = 0;
	var uLocal_13360 = 0;
	var uLocal_13361 = 1065353216;
	var uLocal_13362 = 0;
	var uLocal_13363 = 0;
	var uLocal_13364 = 1065353216;
	var uLocal_13365 = 1;
	var uLocal_13366 = 0;
	var uLocal_13367 = -1;
	var uLocal_13368 = 0;
	var uLocal_13369 = 1;
	var uLocal_13370 = 0;
	var uLocal_13371 = 0;
	var uLocal_13372 = 0;
	var uLocal_13373 = 0;
	var uLocal_13374 = 0;
	var uLocal_13375 = 0;
	var uLocal_13376 = 0;
	var uLocal_13377 = 0;
	var uLocal_13378 = 0;
	var uLocal_13379 = 1065353216;
	var uLocal_13380 = 0;
	var uLocal_13381 = 0;
	var uLocal_13382 = 1065353216;
	var uLocal_13383 = 1;
	var uLocal_13384 = 0;
	var uLocal_13385 = -1;
	var uLocal_13386 = 0;
	var uLocal_13387 = 1;
	var uLocal_13388 = 0;
	var uLocal_13389 = 0;
	var uLocal_13390 = 0;
	var uLocal_13391 = 0;
	var uLocal_13392 = 0;
	var uLocal_13393 = 0;
	var uLocal_13394 = 0;
	var uLocal_13395 = 0;
	var uLocal_13396 = 0;
	var uLocal_13397 = 1065353216;
	var uLocal_13398 = 0;
	var uLocal_13399 = 0;
	var uLocal_13400 = 1065353216;
	var uLocal_13401 = 1;
	var uLocal_13402 = 0;
	var uLocal_13403 = -1;
	var uLocal_13404 = 0;
	var uLocal_13405 = 1;
	var uLocal_13406 = 0;
	var uLocal_13407 = 0;
	var uLocal_13408 = 0;
	var uLocal_13409 = 0;
	var uLocal_13410 = 0;
	var uLocal_13411 = 0;
	var uLocal_13412 = 0;
	var uLocal_13413 = 0;
	var uLocal_13414 = 0;
	var uLocal_13415 = 1065353216;
	var uLocal_13416 = 0;
	var uLocal_13417 = 0;
	var uLocal_13418 = 1065353216;
	var uLocal_13419 = 1;
	var uLocal_13420 = 0;
	var uLocal_13421 = -1;
	var uLocal_13422 = 0;
	var uLocal_13423 = 1;
	var uLocal_13424 = 0;
	var uLocal_13425 = 0;
	var uLocal_13426 = 0;
	var uLocal_13427 = 0;
	var uLocal_13428 = 0;
	var uLocal_13429 = 0;
	var uLocal_13430 = 0;
	var uLocal_13431 = 0;
	var uLocal_13432 = 0;
	var uLocal_13433 = 1065353216;
	var uLocal_13434 = 0;
	var uLocal_13435 = 0;
	var uLocal_13436 = 1065353216;
	var uLocal_13437 = 1;
	var uLocal_13438 = 0;
	var uLocal_13439 = -1;
	var uLocal_13440 = 0;
	var uLocal_13441 = 1;
	var uLocal_13442 = 0;
	var uLocal_13443 = 0;
	var uLocal_13444 = 0;
	var uLocal_13445 = 0;
	var uLocal_13446 = 0;
	var uLocal_13447 = 0;
	var uLocal_13448 = 0;
	var uLocal_13449 = 0;
	var uLocal_13450 = 0;
	var uLocal_13451 = 1065353216;
	var uLocal_13452 = 0;
	var uLocal_13453 = 0;
	var uLocal_13454 = 1065353216;
	var uLocal_13455 = 1;
	var uLocal_13456 = 0;
	var uLocal_13457 = -1;
	var uLocal_13458 = 0;
	var uLocal_13459 = 1;
	var uLocal_13460 = 0;
	var uLocal_13461 = 0;
	var uLocal_13462 = 0;
	var uLocal_13463 = 0;
	var uLocal_13464 = 0;
	var uLocal_13465 = 0;
	var uLocal_13466 = 0;
	var uLocal_13467 = 0;
	var uLocal_13468 = 0;
	var uLocal_13469 = 1065353216;
	var uLocal_13470 = 0;
	var uLocal_13471 = 0;
	var uLocal_13472 = 1065353216;
	var uLocal_13473 = 1;
	var uLocal_13474 = 0;
	var uLocal_13475 = -1;
	var uLocal_13476 = 0;
	var uLocal_13477 = 1;
	var uLocal_13478 = 0;
	var uLocal_13479 = 0;
	var uLocal_13480 = 0;
	var uLocal_13481 = 0;
	var uLocal_13482 = 0;
	var uLocal_13483 = 0;
	var uLocal_13484 = 0;
	var uLocal_13485 = 0;
	var uLocal_13486 = 0;
	var uLocal_13487 = 1065353216;
	var uLocal_13488 = 0;
	var uLocal_13489 = 0;
	var uLocal_13490 = 1065353216;
	var uLocal_13491 = 1;
	var uLocal_13492 = 0;
	var uLocal_13493 = -1;
	var uLocal_13494 = 0;
	var uLocal_13495 = 1;
	var uLocal_13496 = 0;
	var uLocal_13497 = 0;
	var uLocal_13498 = 0;
	var uLocal_13499 = 0;
	var uLocal_13500 = 0;
	var uLocal_13501 = 0;
	var uLocal_13502 = 0;
	var uLocal_13503 = 0;
	var uLocal_13504 = 0;
	var uLocal_13505 = 1065353216;
	var uLocal_13506 = 0;
	var uLocal_13507 = 0;
	var uLocal_13508 = 1065353216;
	var uLocal_13509 = 1;
	var uLocal_13510 = 0;
	var uLocal_13511 = -1;
	var uLocal_13512 = 0;
	var uLocal_13513 = 1;
	var uLocal_13514 = 0;
	var uLocal_13515 = 0;
	var uLocal_13516 = 0;
	var uLocal_13517 = 0;
	var uLocal_13518 = 0;
	var uLocal_13519 = 0;
	var uLocal_13520 = 0;
	var uLocal_13521 = 0;
	var uLocal_13522 = 0;
	var uLocal_13523 = 1065353216;
	var uLocal_13524 = 0;
	var uLocal_13525 = 0;
	var uLocal_13526 = 1065353216;
	var uLocal_13527 = 1;
	var uLocal_13528 = 0;
	var uLocal_13529 = -1;
	var uLocal_13530 = 0;
	var uLocal_13531 = 1;
	var uLocal_13532 = 0;
	var uLocal_13533 = 0;
	var uLocal_13534 = 0;
	var uLocal_13535 = 0;
	var uLocal_13536 = 0;
	var uLocal_13537 = 0;
	var uLocal_13538 = 0;
	var uLocal_13539 = 0;
	var uLocal_13540 = 0;
	var uLocal_13541 = 1065353216;
	var uLocal_13542 = 0;
	var uLocal_13543 = 0;
	var uLocal_13544 = 1065353216;
	var uLocal_13545 = 1;
	var uLocal_13546 = 0;
	var uLocal_13547 = -1;
	var uLocal_13548 = 0;
	var uLocal_13549 = 1;
	var uLocal_13550 = 0;
	var uLocal_13551 = 0;
	var uLocal_13552 = 0;
	var uLocal_13553 = 0;
	var uLocal_13554 = 0;
	var uLocal_13555 = 0;
	var uLocal_13556 = 0;
	var uLocal_13557 = 0;
	var uLocal_13558 = 0;
	var uLocal_13559 = 1065353216;
	var uLocal_13560 = 0;
	var uLocal_13561 = 0;
	var uLocal_13562 = 1065353216;
	var uLocal_13563 = 1;
	var uLocal_13564 = 0;
	var uLocal_13565 = -1;
	var uLocal_13566 = 0;
	var uLocal_13567 = 1;
	var uLocal_13568 = 0;
	var uLocal_13569 = 0;
	var uLocal_13570 = 0;
	var uLocal_13571 = 0;
	var uLocal_13572 = 0;
	var uLocal_13573 = 0;
	var uLocal_13574 = 0;
	var uLocal_13575 = 0;
	var uLocal_13576 = 0;
	var uLocal_13577 = 1065353216;
	var uLocal_13578 = 0;
	var uLocal_13579 = 0;
	var uLocal_13580 = 1065353216;
	var uLocal_13581 = 1;
	var uLocal_13582 = 0;
	var uLocal_13583 = -1;
	var uLocal_13584 = 0;
	var uLocal_13585 = 1;
	var uLocal_13586 = 0;
	var uLocal_13587 = 0;
	var uLocal_13588 = 0;
	var uLocal_13589 = 0;
	var uLocal_13590 = 0;
	var uLocal_13591 = 0;
	var uLocal_13592 = 0;
	var uLocal_13593 = 0;
	var uLocal_13594 = 0;
	var uLocal_13595 = 1065353216;
	var uLocal_13596 = 0;
	var uLocal_13597 = 0;
	var uLocal_13598 = 1065353216;
	var uLocal_13599 = 1;
	var uLocal_13600 = 0;
	var uLocal_13601 = -1;
	var uLocal_13602 = 0;
	var uLocal_13603 = 1;
	var uLocal_13604 = 0;
	var uLocal_13605 = 0;
	var uLocal_13606 = 0;
	var uLocal_13607 = 0;
	var uLocal_13608 = 0;
	var uLocal_13609 = 0;
	var uLocal_13610 = 0;
	var uLocal_13611 = 0;
	var uLocal_13612 = 0;
	var uLocal_13613 = 1065353216;
	var uLocal_13614 = 0;
	var uLocal_13615 = 0;
	var uLocal_13616 = 1065353216;
	var uLocal_13617 = 1;
	var uLocal_13618 = 0;
	var uLocal_13619 = -1;
	var uLocal_13620 = 0;
	var uLocal_13621 = 1;
	var uLocal_13622 = 0;
	var uLocal_13623 = 0;
	var uLocal_13624 = 0;
	var uLocal_13625 = 0;
	var uLocal_13626 = 0;
	var uLocal_13627 = 0;
	var uLocal_13628 = 0;
	var uLocal_13629 = 0;
	var uLocal_13630 = 0;
	var uLocal_13631 = 1065353216;
	var uLocal_13632 = 0;
	var uLocal_13633 = 0;
	var uLocal_13634 = 1065353216;
	var uLocal_13635 = 1;
	var uLocal_13636 = 0;
	var uLocal_13637 = -1;
	var uLocal_13638 = 0;
	var uLocal_13639 = 1;
	var uLocal_13640 = 0;
	var uLocal_13641 = 0;
	var uLocal_13642 = 0;
	var uLocal_13643 = 0;
	var uLocal_13644 = 0;
	var uLocal_13645 = 0;
	var uLocal_13646 = 0;
	var uLocal_13647 = 0;
	var uLocal_13648 = 0;
	var uLocal_13649 = 1065353216;
	var uLocal_13650 = 0;
	var uLocal_13651 = 0;
	var uLocal_13652 = 1065353216;
	var uLocal_13653 = 1;
	var uLocal_13654 = 0;
	var uLocal_13655 = -1;
	var uLocal_13656 = 0;
	var uLocal_13657 = 1;
	var uLocal_13658 = 0;
	var uLocal_13659 = 0;
	var uLocal_13660 = 0;
	var uLocal_13661 = 0;
	var uLocal_13662 = 0;
	var uLocal_13663 = 0;
	var uLocal_13664 = 0;
	var uLocal_13665 = 0;
	var uLocal_13666 = 0;
	var uLocal_13667 = 1065353216;
	var uLocal_13668 = 0;
	var uLocal_13669 = 0;
	var uLocal_13670 = 1065353216;
	var uLocal_13671 = 1;
	var uLocal_13672 = 0;
	var uLocal_13673 = -1;
	var uLocal_13674 = 0;
	var uLocal_13675 = 1;
	var uLocal_13676 = 0;
	var uLocal_13677 = 0;
	var uLocal_13678 = 0;
	var uLocal_13679 = 0;
	var uLocal_13680 = 0;
	var uLocal_13681 = 0;
	var uLocal_13682 = 0;
	var uLocal_13683 = 0;
	var uLocal_13684 = 0;
	var uLocal_13685 = 1065353216;
	var uLocal_13686 = 0;
	var uLocal_13687 = 0;
	var uLocal_13688 = 1065353216;
	var uLocal_13689 = 1;
	var uLocal_13690 = 0;
	var uLocal_13691 = -1;
	var uLocal_13692 = 0;
	var uLocal_13693 = 1;
	var uLocal_13694 = 0;
	var uLocal_13695 = 0;
	var uLocal_13696 = 0;
	var uLocal_13697 = 0;
	var uLocal_13698 = 0;
	var uLocal_13699 = 0;
	var uLocal_13700 = 0;
	var uLocal_13701 = 0;
	var uLocal_13702 = 0;
	var uLocal_13703 = 1065353216;
	var uLocal_13704 = 0;
	var uLocal_13705 = 0;
	var uLocal_13706 = 1065353216;
	var uLocal_13707 = 1;
	var uLocal_13708 = 0;
	var uLocal_13709 = -1;
	var uLocal_13710 = 0;
	var uLocal_13711 = 1;
	var uLocal_13712 = 0;
	var uLocal_13713 = 0;
	var uLocal_13714 = 0;
	var uLocal_13715 = 0;
	var uLocal_13716 = 0;
	var uLocal_13717 = 0;
	var uLocal_13718 = 0;
	var uLocal_13719 = 0;
	var uLocal_13720 = 0;
	var uLocal_13721 = 1065353216;
	var uLocal_13722 = 0;
	var uLocal_13723 = 0;
	var uLocal_13724 = 1065353216;
	var uLocal_13725 = 1;
	var uLocal_13726 = 0;
	var uLocal_13727 = -1;
	var uLocal_13728 = 0;
	var uLocal_13729 = 1;
	var uLocal_13730 = 0;
	var uLocal_13731 = 0;
	var uLocal_13732 = 0;
	var uLocal_13733 = 0;
	var uLocal_13734 = 0;
	var uLocal_13735 = 0;
	var uLocal_13736 = 0;
	var uLocal_13737 = 0;
	var uLocal_13738 = 0;
	var uLocal_13739 = 1065353216;
	var uLocal_13740 = 0;
	var uLocal_13741 = 0;
	var uLocal_13742 = 1065353216;
	var uLocal_13743 = 1;
	var uLocal_13744 = 0;
	var uLocal_13745 = -1;
	var uLocal_13746 = 0;
	var uLocal_13747 = 1;
	var uLocal_13748 = 0;
	var uLocal_13749 = 0;
	var uLocal_13750 = 0;
	var uLocal_13751 = 0;
	var uLocal_13752 = 0;
	var uLocal_13753 = 0;
	var uLocal_13754 = 0;
	var uLocal_13755 = 0;
	var uLocal_13756 = 0;
	var uLocal_13757 = 1065353216;
	var uLocal_13758 = 0;
	var uLocal_13759 = 0;
	var uLocal_13760 = 1065353216;
	var uLocal_13761 = 1;
	var uLocal_13762 = 0;
	var uLocal_13763 = -1;
	var uLocal_13764 = 0;
	var uLocal_13765 = 1;
	var uLocal_13766 = 0;
	var uLocal_13767 = 0;
	var uLocal_13768 = 0;
	var uLocal_13769 = 0;
	var uLocal_13770 = 0;
	var uLocal_13771 = 0;
	var uLocal_13772 = 0;
	var uLocal_13773 = 0;
	var uLocal_13774 = 0;
	var uLocal_13775 = 1065353216;
	var uLocal_13776 = 0;
	var uLocal_13777 = 0;
	var uLocal_13778 = 1065353216;
	var uLocal_13779 = 1;
	var uLocal_13780 = 0;
	var uLocal_13781 = -1;
	var uLocal_13782 = 0;
	var uLocal_13783 = 1;
	var uLocal_13784 = 0;
	var uLocal_13785 = 0;
	var uLocal_13786 = 0;
	var uLocal_13787 = 0;
	var uLocal_13788 = 0;
	var uLocal_13789 = 0;
	var uLocal_13790 = 0;
	var uLocal_13791 = 0;
	var uLocal_13792 = 0;
	var uLocal_13793 = 1065353216;
	var uLocal_13794 = 0;
	var uLocal_13795 = 0;
	var uLocal_13796 = 1065353216;
	var uLocal_13797 = 1;
	var uLocal_13798 = 0;
	var uLocal_13799 = -1;
	var uLocal_13800 = 0;
	var uLocal_13801 = 1;
	var uLocal_13802 = 0;
	var uLocal_13803 = 0;
	var uLocal_13804 = 0;
	var uLocal_13805 = 0;
	var uLocal_13806 = 0;
	var uLocal_13807 = 0;
	var uLocal_13808 = 0;
	var uLocal_13809 = 0;
	var uLocal_13810 = 0;
	var uLocal_13811 = 1065353216;
	var uLocal_13812 = 0;
	var uLocal_13813 = 0;
	var uLocal_13814 = 1065353216;
	var uLocal_13815 = 1;
	var uLocal_13816 = 0;
	var uLocal_13817 = 8;
	var uLocal_13818 = 0;
	var uLocal_13819 = 0;
	var uLocal_13820 = 0;
	var uLocal_13821 = 0;
	var uLocal_13822 = 0;
	var uLocal_13823 = 0;
	var uLocal_13824 = 0;
	var uLocal_13825 = 0;
	var uLocal_13826 = 0;
	var uLocal_13827 = 0;
	var uLocal_13828 = 0;
	var uLocal_13829 = 0;
	var uLocal_13830 = 0;
	var uLocal_13831 = 0;
	var uLocal_13832 = 0;
	var uLocal_13833 = 0;
	var uLocal_13834 = 0;
	var uLocal_13835 = 0;
	var uLocal_13836 = 0;
	var uLocal_13837 = 0;
	var uLocal_13838 = 0;
	var uLocal_13839 = 0;
	var uLocal_13840 = 0;
	var uLocal_13841 = 0;
	var uLocal_13842 = 0;
	var uLocal_13843 = 0;
	var uLocal_13844 = 0;
	var uLocal_13845 = 0;
	var uLocal_13846 = 0;
	var uLocal_13847 = 0;
	var uLocal_13848 = 0;
	var uLocal_13849 = 0;
	var uLocal_13850 = 0;
	var uLocal_13851 = 0;
	var uLocal_13852 = 0;
	var uLocal_13853 = 0;
	var uLocal_13854 = 0;
	var uLocal_13855 = 0;
	var uLocal_13856 = 0;
	var uLocal_13857 = 0;
	var uLocal_13858 = 0;
	var uLocal_13859 = 0;
	var uLocal_13860 = 0;
	var uLocal_13861 = 0;
	var uLocal_13862 = 0;
	var uLocal_13863 = 0;
	var uLocal_13864 = 0;
	var uLocal_13865 = 0;
	var uLocal_13866 = 0;
	var uLocal_13867 = 0;
	var uLocal_13868 = 0;
	var uLocal_13869 = 0;
	var uLocal_13870 = 0;
	var uLocal_13871 = 0;
	var uLocal_13872 = 0;
	var uLocal_13873 = 0;
	var uLocal_13874 = 0;
	var uLocal_13875 = 0;
	var uLocal_13876 = 0;
	var uLocal_13877 = 0;
	var uLocal_13878 = 0;
	var uLocal_13879 = 0;
	var uLocal_13880 = 0;
	var uLocal_13881 = 0;
	var uLocal_13882 = 0;
	var uLocal_13883 = 0;
	var uLocal_13884 = 0;
	var uLocal_13885 = 0;
	var uLocal_13886 = 0;
	var uLocal_13887 = 0;
	var uLocal_13888 = 0;
	var uLocal_13889 = 0;
	var uLocal_13890 = 0;
	var uLocal_13891 = 0;
	var uLocal_13892 = 0;
	var uLocal_13893 = 0;
	var uLocal_13894 = 0;
	var uLocal_13895 = 0;
	var uLocal_13896 = 0;
	var uLocal_13897 = 0;
	var uLocal_13898 = 0;
	var uLocal_13899 = 0;
	var uLocal_13900 = 0;
	var uLocal_13901 = 0;
	var uLocal_13902 = 0;
	var uLocal_13903 = 0;
	var uLocal_13904 = 0;
	var uLocal_13905 = 0;
	var uLocal_13906 = 0;
	var uLocal_13907 = 0;
	var uLocal_13908 = 0;
	var uLocal_13909 = 0;
	var uLocal_13910 = 0;
	var uLocal_13911 = 0;
	var uLocal_13912 = 0;
	var uLocal_13913 = 0;
	var uLocal_13914 = 0;
	var uLocal_13915 = 0;
	var uLocal_13916 = 0;
	var uLocal_13917 = 0;
	var uLocal_13918 = 0;
	var uLocal_13919 = 0;
	var uLocal_13920 = 0;
	var uLocal_13921 = 0;
	var uLocal_13922 = 0;
	var uLocal_13923 = 0;
	var uLocal_13924 = 0;
	var uLocal_13925 = 0;
	var uLocal_13926 = 0;
	var uLocal_13927 = 0;
	var uLocal_13928 = 0;
	var uLocal_13929 = 0;
	var uLocal_13930 = 0;
	var uLocal_13931 = 0;
	var uLocal_13932 = 0;
	var uLocal_13933 = 0;
	var uLocal_13934 = 0;
	var uLocal_13935 = 0;
	var uLocal_13936 = 0;
	var uLocal_13937 = 0;
	var uLocal_13938 = 0;
	var uLocal_13939 = 0;
	var uLocal_13940 = 0;
	var uLocal_13941 = 0;
	var uLocal_13942 = 0;
	var uLocal_13943 = 0;
	var uLocal_13944 = 0;
	var uLocal_13945 = 0;
	var uLocal_13946 = 0;
	var uLocal_13947 = 0;
	var uLocal_13948 = 0;
	var uLocal_13949 = 0;
	var uLocal_13950 = 0;
	var uLocal_13951 = 0;
	var uLocal_13952 = 0;
	var uLocal_13953 = 0;
	var uLocal_13954 = 0;
	var uLocal_13955 = 0;
	var uLocal_13956 = 0;
	var uLocal_13957 = 0;
	var uLocal_13958 = 0;
	var uLocal_13959 = 0;
	var uLocal_13960 = 0;
	var uLocal_13961 = 0;
	var uLocal_13962 = 0;
	var uLocal_13963 = 0;
	var uLocal_13964 = 0;
	var uLocal_13965 = 0;
	var uLocal_13966 = 0;
	var uLocal_13967 = 0;
	var uLocal_13968 = 0;
	var uLocal_13969 = 0;
	var uLocal_13970 = 0;
	var uLocal_13971 = 0;
	var uLocal_13972 = 0;
	var uLocal_13973 = 0;
	var uLocal_13974 = 0;
	var uLocal_13975 = 0;
	var uLocal_13976 = 0;
	var uLocal_13977 = 0;
	var uLocal_13978 = 0;
	var uLocal_13979 = 0;
	var uLocal_13980 = 0;
	var uLocal_13981 = 0;
	var uLocal_13982 = 0;
	var uLocal_13983 = 0;
	var uLocal_13984 = 0;
	var uLocal_13985 = 0;
	var uLocal_13986 = 0;
	var uLocal_13987 = 0;
	var uLocal_13988 = 0;
	var uLocal_13989 = 0;
	var uLocal_13990 = 0;
	var uLocal_13991 = 0;
	var uLocal_13992 = 0;
	var uLocal_13993 = 0;
	var uLocal_13994 = 0;
	var uLocal_13995 = 0;
	var uLocal_13996 = 0;
	var uLocal_13997 = 0;
	var uLocal_13998 = 0;
	var uLocal_13999 = 0;
	var uLocal_14000 = 0;
	var uLocal_14001 = 0;
	var uLocal_14002 = 0;
	var uLocal_14003 = 0;
	var uLocal_14004 = 0;
	var uLocal_14005 = 0;
	var uLocal_14006 = 0;
	var uLocal_14007 = 0;
	var uLocal_14008 = 0;
	var uLocal_14009 = 0;
	var uLocal_14010 = 0;
	var uLocal_14011 = 0;
	var uLocal_14012 = 0;
	var uLocal_14013 = 0;
	var uLocal_14014 = 0;
	var uLocal_14015 = 0;
	var uLocal_14016 = 0;
	var uLocal_14017 = 0;
	var uLocal_14018 = 0;
	var uLocal_14019 = 0;
	var uLocal_14020 = 0;
	var uLocal_14021 = 0;
	var uLocal_14022 = 0;
	var uLocal_14023 = 0;
	var uLocal_14024 = 0;
	var uLocal_14025 = 0;
	var uLocal_14026 = 0;
	var uLocal_14027 = 0;
	var uLocal_14028 = 0;
	var uLocal_14029 = 0;
	var uLocal_14030 = 0;
	var uLocal_14031 = 0;
	var uLocal_14032 = 0;
	var uLocal_14033 = 0;
	var uLocal_14034 = 0;
	var uLocal_14035 = 0;
	var uLocal_14036 = 0;
	var uLocal_14037 = 0;
	var uLocal_14038 = 0;
	var uLocal_14039 = 0;
	var uLocal_14040 = 0;
	var uLocal_14041 = 0;
	var uLocal_14042 = 0;
	var uLocal_14043 = 0;
	var uLocal_14044 = 0;
	var uLocal_14045 = 0;
	var uLocal_14046 = 0;
	var uLocal_14047 = 0;
	var uLocal_14048 = 0;
	var uLocal_14049 = 0;
	var uLocal_14050 = 0;
	var uLocal_14051 = 0;
	var uLocal_14052 = 0;
	var uLocal_14053 = 0;
	var uLocal_14054 = 0;
	var uLocal_14055 = 0;
	var uLocal_14056 = 0;
	var uLocal_14057 = 0;
	var uLocal_14058 = 0;
	var uLocal_14059 = 0;
	var uLocal_14060 = 0;
	var uLocal_14061 = 0;
	var uLocal_14062 = 0;
	var uLocal_14063 = 0;
	var uLocal_14064 = 0;
	var uLocal_14065 = 0;
	var uLocal_14066 = 0;
	var uLocal_14067 = 0;
	var uLocal_14068 = 0;
	var uLocal_14069 = 0;
	var uLocal_14070 = 0;
	var uLocal_14071 = 0;
	var uLocal_14072 = 0;
	var uLocal_14073 = 0;
	var uLocal_14074 = 0;
	var uLocal_14075 = 0;
	var uLocal_14076 = 0;
	var uLocal_14077 = 0;
	var uLocal_14078 = 0;
	var uLocal_14079 = 0;
	var uLocal_14080 = 0;
	var uLocal_14081 = 0;
	var uLocal_14082 = 0;
	var uLocal_14083 = 0;
	var uLocal_14084 = 0;
	var uLocal_14085 = 0;
	var uLocal_14086 = 0;
	var uLocal_14087 = 0;
	var uLocal_14088 = 0;
	var uLocal_14089 = 0;
	var uLocal_14090 = 0;
	var uLocal_14091 = 0;
	var uLocal_14092 = 0;
	var uLocal_14093 = 0;
	var uLocal_14094 = 0;
	var uLocal_14095 = 0;
	var uLocal_14096 = 0;
	var uLocal_14097 = 0;
	var uLocal_14098 = 0;
	var uLocal_14099 = 0;
	var uLocal_14100 = 0;
	var uLocal_14101 = 0;
	var uLocal_14102 = 0;
	var uLocal_14103 = 0;
	var uLocal_14104 = 0;
	var uLocal_14105 = 0;
	var uLocal_14106 = 0;
	var uLocal_14107 = 0;
	var uLocal_14108 = 0;
	var uLocal_14109 = 0;
	var uLocal_14110 = 0;
	var uLocal_14111 = 0;
	var uLocal_14112 = 0;
	var uLocal_14113 = 0;
	var uLocal_14114 = 0;
	var uLocal_14115 = 0;
	var uLocal_14116 = 0;
	var uLocal_14117 = 0;
	var uLocal_14118 = 0;
	var uLocal_14119 = 0;
	var uLocal_14120 = 0;
	var uLocal_14121 = 0;
	var uLocal_14122 = 0;
	var uLocal_14123 = 0;
	var uLocal_14124 = 0;
	var uLocal_14125 = 0;
	var uLocal_14126 = 0;
	var uLocal_14127 = 0;
	var uLocal_14128 = 0;
	var uLocal_14129 = 0;
	var uLocal_14130 = 0;
	var uLocal_14131 = 0;
	var uLocal_14132 = 0;
	var uLocal_14133 = 0;
	var uLocal_14134 = 0;
	var uLocal_14135 = 0;
	var uLocal_14136 = 0;
	var uLocal_14137 = 0;
	var uLocal_14138 = 0;
	var uLocal_14139 = 0;
	var uLocal_14140 = 0;
	var uLocal_14141 = 0;
	var uLocal_14142 = 0;
	var uLocal_14143 = 0;
	var uLocal_14144 = 0;
	var uLocal_14145 = 0;
	var uLocal_14146 = 8;
	var uLocal_14147 = 0;
	var uLocal_14148 = 0;
	var uLocal_14149 = 0;
	var uLocal_14150 = 0;
	var uLocal_14151 = 0;
	var uLocal_14152 = 0;
	var uLocal_14153 = 0;
	var uLocal_14154 = 0;
	var uLocal_14155 = 0;
	var uLocal_14156 = 0;
	var uLocal_14157 = 0;
	var uLocal_14158 = 0;
	var uLocal_14159 = 0;
	var uLocal_14160 = 0;
	var uLocal_14161 = 0;
	var uLocal_14162 = 0;
	var uLocal_14163 = 0;
	var uLocal_14164 = 0;
	var uLocal_14165 = 0;
	var uLocal_14166 = 0;
	var uLocal_14167 = -1;
	var uLocal_14168 = 0;
	var uLocal_14169 = 0;
	var uLocal_14170 = 0;
	var uLocal_14171 = 0;
	var uLocal_14172 = 0;
	var uLocal_14173 = 0;
	var uLocal_14174 = 0;
	var uLocal_14175 = 0;
	var uLocal_14176 = 0;
	var uLocal_14177 = 0;
	var uLocal_14178 = 0;
	var uLocal_14179 = 0;
	var uLocal_14180 = 0;
	var uLocal_14181 = 0;
	var uLocal_14182 = 0;
	var uLocal_14183 = 0;
	var uLocal_14184 = 0;
	var uLocal_14185 = 0;
	var uLocal_14186 = 0;
	var uLocal_14187 = 0;
	var uLocal_14188 = 0;
	var uLocal_14189 = -1;
	var uLocal_14190 = 0;
	var uLocal_14191 = 0;
	var uLocal_14192 = 0;
	var uLocal_14193 = 0;
	var uLocal_14194 = 0;
	var uLocal_14195 = 0;
	var uLocal_14196 = 0;
	var uLocal_14197 = 0;
	var uLocal_14198 = 0;
	var uLocal_14199 = 0;
	var uLocal_14200 = 0;
	var uLocal_14201 = 0;
	var uLocal_14202 = 0;
	var uLocal_14203 = 0;
	var uLocal_14204 = 0;
	var uLocal_14205 = 0;
	var uLocal_14206 = 0;
	var uLocal_14207 = 0;
	var uLocal_14208 = 0;
	var uLocal_14209 = 0;
	var uLocal_14210 = 0;
	var uLocal_14211 = -1;
	var uLocal_14212 = 0;
	var uLocal_14213 = 0;
	var uLocal_14214 = 0;
	var uLocal_14215 = 0;
	var uLocal_14216 = 0;
	var uLocal_14217 = 0;
	var uLocal_14218 = 0;
	var uLocal_14219 = 0;
	var uLocal_14220 = 0;
	var uLocal_14221 = 0;
	var uLocal_14222 = 0;
	var uLocal_14223 = 0;
	var uLocal_14224 = 0;
	var uLocal_14225 = 0;
	var uLocal_14226 = 0;
	var uLocal_14227 = 0;
	var uLocal_14228 = 0;
	var uLocal_14229 = 0;
	var uLocal_14230 = 0;
	var uLocal_14231 = 0;
	var uLocal_14232 = 0;
	var uLocal_14233 = -1;
	var uLocal_14234 = 0;
	var uLocal_14235 = 0;
	var uLocal_14236 = 0;
	var uLocal_14237 = 0;
	var uLocal_14238 = 0;
	var uLocal_14239 = 0;
	var uLocal_14240 = 0;
	var uLocal_14241 = 0;
	var uLocal_14242 = 0;
	var uLocal_14243 = 0;
	var uLocal_14244 = 0;
	var uLocal_14245 = 0;
	var uLocal_14246 = 0;
	var uLocal_14247 = 0;
	var uLocal_14248 = 0;
	var uLocal_14249 = 0;
	var uLocal_14250 = 0;
	var uLocal_14251 = 0;
	var uLocal_14252 = 0;
	var uLocal_14253 = 0;
	var uLocal_14254 = 0;
	var uLocal_14255 = -1;
	var uLocal_14256 = 0;
	var uLocal_14257 = 0;
	var uLocal_14258 = 0;
	var uLocal_14259 = 0;
	var uLocal_14260 = 0;
	var uLocal_14261 = 0;
	var uLocal_14262 = 0;
	var uLocal_14263 = 0;
	var uLocal_14264 = 0;
	var uLocal_14265 = 0;
	var uLocal_14266 = 0;
	var uLocal_14267 = 0;
	var uLocal_14268 = 0;
	var uLocal_14269 = 0;
	var uLocal_14270 = 0;
	var uLocal_14271 = 0;
	var uLocal_14272 = 0;
	var uLocal_14273 = 0;
	var uLocal_14274 = 0;
	var uLocal_14275 = 0;
	var uLocal_14276 = 0;
	var uLocal_14277 = -1;
	var uLocal_14278 = 0;
	var uLocal_14279 = 0;
	var uLocal_14280 = 0;
	var uLocal_14281 = 0;
	var uLocal_14282 = 0;
	var uLocal_14283 = 0;
	var uLocal_14284 = 0;
	var uLocal_14285 = 0;
	var uLocal_14286 = 0;
	var uLocal_14287 = 0;
	var uLocal_14288 = 0;
	var uLocal_14289 = 0;
	var uLocal_14290 = 0;
	var uLocal_14291 = 0;
	var uLocal_14292 = 0;
	var uLocal_14293 = 0;
	var uLocal_14294 = 0;
	var uLocal_14295 = 0;
	var uLocal_14296 = 0;
	var uLocal_14297 = 0;
	var uLocal_14298 = 0;
	var uLocal_14299 = -1;
	var uLocal_14300 = 0;
	var uLocal_14301 = 0;
	var uLocal_14302 = 0;
	var uLocal_14303 = 0;
	var uLocal_14304 = 0;
	var uLocal_14305 = 0;
	var uLocal_14306 = 0;
	var uLocal_14307 = 0;
	var uLocal_14308 = 0;
	var uLocal_14309 = 0;
	var uLocal_14310 = 0;
	var uLocal_14311 = 0;
	var uLocal_14312 = 0;
	var uLocal_14313 = 0;
	var uLocal_14314 = 0;
	var uLocal_14315 = 0;
	var uLocal_14316 = 0;
	var uLocal_14317 = 0;
	var uLocal_14318 = 0;
	var uLocal_14319 = 0;
	var uLocal_14320 = 0;
	var uLocal_14321 = -1;
	var uLocal_14322 = 0;
	var uLocal_14323 = 11;
	var uLocal_14324 = 0;
	var uLocal_14325 = 0;
	var uLocal_14326 = 0;
	var uLocal_14327 = 0;
	var uLocal_14328 = 0;
	var uLocal_14329 = 0;
	var uLocal_14330 = 0;
	var uLocal_14331 = 0;
	var uLocal_14332 = 0;
	var uLocal_14333 = 0;
	var uLocal_14334 = 0;
	var uLocal_14335 = 0;
	var uLocal_14336 = 0;
	var uLocal_14337 = 0;
	var uLocal_14338 = 0;
	var uLocal_14339 = 0;
	var uLocal_14340 = 0;
	var uLocal_14341 = 0;
	var uLocal_14342 = 0;
	var uLocal_14343 = 0;
	var uLocal_14344 = 0;
	var uLocal_14345 = 0;
	var uLocal_14346 = 0;
	var uLocal_14347 = 0;
	var uLocal_14348 = 0;
	var uLocal_14349 = 0;
	var uLocal_14350 = 0;
	var uLocal_14351 = 0;
	var uLocal_14352 = 0;
	var uLocal_14353 = 0;
	var uLocal_14354 = 0;
	var uLocal_14355 = 0;
	var uLocal_14356 = 0;
	var uLocal_14357 = 0;
	var uLocal_14358 = 0;
	var uLocal_14359 = 0;
	var uLocal_14360 = 0;
	var uLocal_14361 = 0;
	var uLocal_14362 = 0;
	var uLocal_14363 = 0;
	var uLocal_14364 = 0;
	var uLocal_14365 = 0;
	var uLocal_14366 = 0;
	var uLocal_14367 = 0;
	var uLocal_14368 = 0;
	var uLocal_14369 = 0;
	var uLocal_14370 = 0;
	var uLocal_14371 = 0;
	var uLocal_14372 = 0;
	var uLocal_14373 = 0;
	var uLocal_14374 = 0;
	var uLocal_14375 = 0;
	var uLocal_14376 = 0;
	var uLocal_14377 = 0;
	var uLocal_14378 = 0;
	var uLocal_14379 = 0;
	var uLocal_14380 = 0;
	var uLocal_14381 = 0;
	var uLocal_14382 = 0;
	var uLocal_14383 = 0;
	var uLocal_14384 = 0;
	var uLocal_14385 = 0;
	var uLocal_14386 = 0;
	var uLocal_14387 = 0;
	var uLocal_14388 = 0;
	var uLocal_14389 = 0;
	var uLocal_14390 = 0;
	var uLocal_14391 = 0;
	var uLocal_14392 = 0;
	var uLocal_14393 = 0;
	var uLocal_14394 = 0;
	var uLocal_14395 = 0;
	var uLocal_14396 = 0;
	var uLocal_14397 = 0;
	var uLocal_14398 = 0;
	var uLocal_14399 = 0;
	var uLocal_14400 = 0;
	var uLocal_14401 = 0;
	var uLocal_14402 = 0;
	var uLocal_14403 = 0;
	var uLocal_14404 = 0;
	var uLocal_14405 = 0;
	var uLocal_14406 = 0;
	var uLocal_14407 = 0;
	var uLocal_14408 = 0;
	var uLocal_14409 = 0;
	var uLocal_14410 = 0;
	var uLocal_14411 = 0;
	var uLocal_14412 = 0;
	var uLocal_14413 = 0;
	var uLocal_14414 = 0;
	var uLocal_14415 = 0;
	var uLocal_14416 = 0;
	var uLocal_14417 = 0;
	var uLocal_14418 = 0;
	var uLocal_14419 = 0;
	var uLocal_14420 = 0;
	var uLocal_14421 = 0;
	var uLocal_14422 = 0;
	var uLocal_14423 = 0;
	var uLocal_14424 = 0;
	var uLocal_14425 = 0;
	var uLocal_14426 = 0;
	var uLocal_14427 = 0;
	var uLocal_14428 = 0;
	var uLocal_14429 = 0;
	var uLocal_14430 = 0;
	var uLocal_14431 = 0;
	var uLocal_14432 = 0;
	var uLocal_14433 = 0;
	var uLocal_14434 = 2;
	var uLocal_14435 = 0;
	var uLocal_14436 = 0;
	var uLocal_14437 = 0;
	var uLocal_14438 = 0;
	var uLocal_14439 = 0;
	var uLocal_14440 = 0;
	var uLocal_14441 = 0;
	var uLocal_14442 = 0;
	var uLocal_14443 = 0;
	var uLocal_14444 = 0;
	var uLocal_14445 = 0;
	var uLocal_14446 = 0;
	var uLocal_14447 = 0;
	var uLocal_14448 = 0;
	var uLocal_14449 = 0;
	var uLocal_14450 = 0;
	var uLocal_14451 = 0;
	var uLocal_14452 = 0;
	var uLocal_14453 = 0;
	var uLocal_14454 = 0;
	var uLocal_14455 = 0;
	var uLocal_14456 = 0;
	var uLocal_14457 = 0;
	var uLocal_14458 = 0;
	var uLocal_14459 = 0;
	var uLocal_14460 = 0;
	var uLocal_14461 = 0;
	var uLocal_14462 = 0;
	var uLocal_14463 = 0;
	var uLocal_14464 = 0;
	var uLocal_14465 = 0;
	var uLocal_14466 = 0;
	var uLocal_14467 = 0;
	var uLocal_14468 = 0;
	var uLocal_14469 = 2;
	var uLocal_14470 = 0;
	var uLocal_14471 = 0;
	var uLocal_14472 = 0;
	var uLocal_14473 = 0;
	var uLocal_14474 = 0;
	var uLocal_14475 = 0;
	var uLocal_14476 = 0;
	var uLocal_14477 = 0;
	var uLocal_14478 = 0;
	var uLocal_14479 = 0;
	var uLocal_14480 = 0;
	var uLocal_14481 = 0;
	var uLocal_14482 = 0;
	var uLocal_14483 = 0;
	var uLocal_14484 = 0;
	var uLocal_14485 = 0;
	var uLocal_14486 = -1;
	var uLocal_14487 = 0;
	var uLocal_14488 = 0;
	var uLocal_14489 = -1;
	var uLocal_14490 = -1082130432;
	var uLocal_14491 = 0;
	var uLocal_14492 = 0;
	var uLocal_14493 = 0;
	var uLocal_14494 = 0;
	var uLocal_14495 = 0;
	var uLocal_14496 = 0;
	var uLocal_14497 = 0;
	var uLocal_14498 = 0;
	var uLocal_14499 = 0;
	var uLocal_14500 = 0;
	var uLocal_14501 = 0;
	var uLocal_14502 = 0;
	var uLocal_14503 = 0;
	var uLocal_14504 = 0;
	var uLocal_14505 = 0;
	var uLocal_14506 = 0;
	var uLocal_14507 = 0;
	var uLocal_14508 = 0;
	var uLocal_14509 = 0;
	var uLocal_14510 = 0;
	var uLocal_14511 = 0;
	var uLocal_14512 = 0;
	var uLocal_14513 = 0;
	var uLocal_14514 = 0;
	var uLocal_14515 = 0;
	var uLocal_14516 = 0;
	var uLocal_14517 = 0;
	var uLocal_14518 = 0;
	var uLocal_14519 = 0;
	var uLocal_14520 = 0;
	var uLocal_14521 = 0;
	var uLocal_14522 = 0;
	var uLocal_14523 = 0;
	var uLocal_14524 = 0;
	var uLocal_14525 = 0;
	var uLocal_14526 = 0;
	var uLocal_14527 = 0;
	var uLocal_14528 = 0;
	var uLocal_14529 = 0;
	var uLocal_14530 = 0;
	var uLocal_14531 = 0;
	var uLocal_14532 = 0;
	var uLocal_14533 = 0;
	var uLocal_14534 = 0;
	var uLocal_14535 = 0;
	var uLocal_14536 = 0;
	var uLocal_14537 = 0;
	var uLocal_14538 = 0;
	var uLocal_14539 = 0;
	var uLocal_14540 = 0;
	var uLocal_14541 = 0;
	var uLocal_14542 = 0;
	var uLocal_14543 = 0;
	var uLocal_14544 = 0;
	var uLocal_14545 = 0;
	var uLocal_14546 = 0;
	var uLocal_14547 = 0;
	var uLocal_14548 = 0;
	var uLocal_14549 = 0;
	var uLocal_14550 = 0;
	var uLocal_14551 = 0;
	var uLocal_14552 = 0;
	var uLocal_14553 = 0;
	var uLocal_14554 = 0;
	var uLocal_14555 = 0;
	var uLocal_14556 = 0;
	var uLocal_14557 = 0;
	var uLocal_14558 = 0;
	var uLocal_14559 = 0;
	var uLocal_14560 = 0;
	var uLocal_14561 = 0;
	var uLocal_14562 = 0;
	var uLocal_14563 = 0;
	var uLocal_14564 = 0;
	var uLocal_14565 = 0;
	var uLocal_14566 = 0;
	var uLocal_14567 = 0;
	var uLocal_14568 = 0;
	var uLocal_14569 = 0;
	var uLocal_14570 = 0;
	var uLocal_14571 = 0;
	var uLocal_14572 = 24;
	var uLocal_14573 = 0;
	var uLocal_14574 = 0;
	var uLocal_14575 = 0;
	var uLocal_14576 = 0;
	var uLocal_14577 = 0;
	var uLocal_14578 = 0;
	var uLocal_14579 = 0;
	var uLocal_14580 = 0;
	var uLocal_14581 = 0;
	var uLocal_14582 = 0;
	var uLocal_14583 = 0;
	var uLocal_14584 = 0;
	var uLocal_14585 = 0;
	var uLocal_14586 = 0;
	var uLocal_14587 = 0;
	var uLocal_14588 = 0;
	var uLocal_14589 = 0;
	var uLocal_14590 = 0;
	var uLocal_14591 = 0;
	var uLocal_14592 = 0;
	var uLocal_14593 = 0;
	var uLocal_14594 = 0;
	var uLocal_14595 = 0;
	var uLocal_14596 = 0;
	var uLocal_14597 = 0;
	var uLocal_14598 = 0;
	var uLocal_14599 = 0;
	var uLocal_14600 = 0;
	var uLocal_14601 = 0;
	var uLocal_14602 = 0;
	var uLocal_14603 = 0;
	var uLocal_14604 = 0;
	var uLocal_14605 = 0;
	var uLocal_14606 = 0;
	var uLocal_14607 = 0;
	var uLocal_14608 = 0;
	var uLocal_14609 = 0;
	var uLocal_14610 = 0;
	var uLocal_14611 = 0;
	var uLocal_14612 = 0;
	var uLocal_14613 = 0;
	var uLocal_14614 = 0;
	var uLocal_14615 = 0;
	var uLocal_14616 = 0;
	var uLocal_14617 = 0;
	var uLocal_14618 = 0;
	var uLocal_14619 = 0;
	var uLocal_14620 = 0;
	var uLocal_14621 = 0;
	var uLocal_14622 = 0;
	var uLocal_14623 = 0;
	var uLocal_14624 = 0;
	var uLocal_14625 = 0;
	var uLocal_14626 = 0;
	var uLocal_14627 = 0;
	var uLocal_14628 = 0;
	var uLocal_14629 = 0;
	var uLocal_14630 = 0;
	var uLocal_14631 = 0;
	var uLocal_14632 = 0;
	var uLocal_14633 = 0;
	var uLocal_14634 = 0;
	var uLocal_14635 = 0;
	var uLocal_14636 = 0;
	var uLocal_14637 = 0;
	var uLocal_14638 = 0;
	var uLocal_14639 = 0;
	var uLocal_14640 = 0;
	var uLocal_14641 = 0;
	var uLocal_14642 = 0;
	var uLocal_14643 = 0;
	var uLocal_14644 = 0;
	var uLocal_14645 = 0;
	var uLocal_14646 = 0;
	var uLocal_14647 = 0;
	var uLocal_14648 = 0;
	var uLocal_14649 = 0;
	var uLocal_14650 = 0;
	var uLocal_14651 = 0;
	var uLocal_14652 = 0;
	var uLocal_14653 = 0;
	var uLocal_14654 = 0;
	var uLocal_14655 = 0;
	var uLocal_14656 = 0;
	var uLocal_14657 = 0;
	var uLocal_14658 = 0;
	var uLocal_14659 = 0;
	var uLocal_14660 = 0;
	var uLocal_14661 = 0;
	var uLocal_14662 = 0;
	var uLocal_14663 = 0;
	var uLocal_14664 = 0;
	var uLocal_14665 = 0;
	var uLocal_14666 = 0;
	var uLocal_14667 = 0;
	var uLocal_14668 = 0;
	var uLocal_14669 = 0;
	var uLocal_14670 = 0;
	var uLocal_14671 = 0;
	var uLocal_14672 = 0;
	var uLocal_14673 = 0;
	var uLocal_14674 = 0;
	var uLocal_14675 = 0;
	var uLocal_14676 = 0;
	var uLocal_14677 = 0;
	var uLocal_14678 = 0;
	var uLocal_14679 = 0;
	var uLocal_14680 = 0;
	var uLocal_14681 = 0;
	var uLocal_14682 = 0;
	var uLocal_14683 = 0;
	var uLocal_14684 = 0;
	var uLocal_14685 = 0;
	var uLocal_14686 = 0;
	var uLocal_14687 = 0;
	var uLocal_14688 = 0;
	var uLocal_14689 = 0;
	var uLocal_14690 = 0;
	var uLocal_14691 = 0;
	var uLocal_14692 = 0;
	var uLocal_14693 = 0;
	var uLocal_14694 = 0;
	var uLocal_14695 = 0;
	var uLocal_14696 = -1;
	var uLocal_14697 = 0;
	var uLocal_14698 = 0;
	var uLocal_14699 = 0;
	var uLocal_14700 = 0;
	var uLocal_14701 = 0;
	var uLocal_14702 = 0;
	var uLocal_14703 = 0;
	var uLocal_14704 = 0;
	var uLocal_14705 = 0;
	var uLocal_14706 = 0;
	var uLocal_14707 = 0;
	var uLocal_14708 = 0;
	var uLocal_14709 = 0;
	var uLocal_14710 = 0;
	var uLocal_14711 = 0;
	var uLocal_14712 = 0;
	var uLocal_14713 = 0;
	var uLocal_14714 = 0;
	var uLocal_14715 = 0;
	var uLocal_14716 = 0;
	var uLocal_14717 = 0;
	var uLocal_14718 = 0;
	var uLocal_14719 = 0;
	var uLocal_14720 = 0;
	var uLocal_14721 = 0;
	var uLocal_14722 = 0;
	var uLocal_14723 = -1;
	var uLocal_14724 = 20;
	var uLocal_14725 = 0;
	var uLocal_14726 = 0;
	var uLocal_14727 = 0;
	var uLocal_14728 = 0;
	var uLocal_14729 = 0;
	var uLocal_14730 = 0;
	var uLocal_14731 = 0;
	var uLocal_14732 = 0;
	var uLocal_14733 = 0;
	var uLocal_14734 = 0;
	var uLocal_14735 = 0;
	var uLocal_14736 = 0;
	var uLocal_14737 = 0;
	var uLocal_14738 = 0;
	var uLocal_14739 = 0;
	var uLocal_14740 = 0;
	var uLocal_14741 = 0;
	var uLocal_14742 = 0;
	var uLocal_14743 = 0;
	var uLocal_14744 = 0;
	var uLocal_14745 = 0;
	var uLocal_14746 = 0;
	var uLocal_14747 = 0;
	var uLocal_14748 = 0;
	var uLocal_14749 = 0;
	var uLocal_14750 = 0;
	var uLocal_14751 = 0;
	var uLocal_14752 = 1028443341;
	var uLocal_14753 = 1038174126;
	var uLocal_14754 = 1065353216;
	var uLocal_14755 = 1065353216;
	var uLocal_14756 = 1086324736;
	var uLocal_14757 = 1082130432;
	var uLocal_14758 = 1073741824;
	var uLocal_14759 = 1065353216;
	var uLocal_14760 = 1108082688;
	var uLocal_14761 = 1108082688;
	var uLocal_14762 = 3000;
	var uLocal_14763 = 1092616192;
	var uLocal_14764 = 0;
	var uLocal_14765 = 0;
	var uLocal_14766 = 0;
	var uLocal_14767 = 0;
	var uLocal_14768 = 0;
	var uLocal_14769 = 0;
	var uLocal_14770 = 0;
	var uLocal_14771 = 0;
	var uLocal_14772 = 0;
	var uLocal_14773 = 0;
	var uLocal_14774 = 0;
	var uLocal_14775 = 0;
	var uLocal_14776 = 0;
	var uLocal_14777 = 0;
	var uLocal_14778 = 0;
	var uLocal_14779 = 0;
	var uLocal_14780 = 0;
	var uLocal_14781 = 0;
	var uLocal_14782 = 0;
	var uLocal_14783 = 0;
	var uLocal_14784 = 0;
	var uLocal_14785 = 0;
	var uLocal_14786 = 0;
	var uLocal_14787 = 0;
	var uLocal_14788 = 0;
	var uLocal_14789 = 0;
	var uLocal_14790 = 0;
	var uLocal_14791 = 0;
	var uLocal_14792 = 0;
	var uLocal_14793 = 0;
	var uLocal_14794 = 0;
	var uLocal_14795 = 0;
	var uLocal_14796 = 0;
	var uLocal_14797 = 0;
	var uLocal_14798 = -1;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_156 = 1;
	iLocal_157 = 2;
	iLocal_158 = 3;
	iLocal_159 = 4;
	iLocal_160 = 5;
	iLocal_161 = 6;
	iLocal_162 = 7;
	fLocal_565 = 6f;
	vLocal_632 = { 2600.83f, -1209.916f, 50.409f };
	vLocal_635 = { 2606.678f, -1203.804f, 55.29996f };
	vLocal_638 = { 2751.215f, -1200.671f, 48.33492f };
	vLocal_641 = { 2754.697f, -1219.249f, 48.56282f };
	vLocal_644 = { 2756.746f, -1220.848f, 48.5523f };
	vLocal_647 = { 2772.89f, -1235.714f, 47.40048f };
	vLocal_650 = { 2774.158f, -1240.173f, 47.27597f };
	vLocal_653 = { 2780.709f, -1237.998f, 50.48386f };
	vLocal_656 = { 2781.221f, -1230.101f, 51.2756f };
	vLocal_659 = { 2785.277f, -1228.649f, 51.27604f };
	vLocal_662 = { 2789.342f, -1229.832f, 51.5838f };
	vLocal_665 = { 2810.932f, -1192.654f, 46.20183f };
	vLocal_669 = { 2620.909f, -1238.204f, 51.17676f };
	vLocal_672 = { 2617.78f, -1235.489f, 54.19599f };
	iLocal_740 = -1;
	iLocal_741 = -1;
	iLocal_742 = -1;
	iLocal_743 = GET_HASH_KEY("EVENT_SHOCKING_BEAT_AMUSING");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4642))
	{
		func_1(&uLocal_1619, 1073741824 /* Float: 2f */);
		func_2(&uLocal_1619, 1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!func_3(64))
	{
		BUILTIN::WAIT(0);
	}
	func_4(&uScriptParam_0, &uLocal_1619);
	func_5(&uLocal_1619);
	while (!func_6(&uLocal_1619, -2147483648))
	{
		func_7(&uLocal_1619);
		BUILTIN::WAIT(0);
	}
	while (!func_2(&uLocal_1619, 0))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(char[4] cParam0, int iParam1)
{
	cParam0->f_5309 = (cParam0->f_5309 || iParam1);
}

bool func_2(char[4] cParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	struct<8> Var6;

	if (func_8(cParam0, 4096))
	{
		return true;
	}
	if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 4096)
	{
		func_9(cParam0);
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
		HUD::_DISPLAY_HUD_COMPONENT(1331687942);
		if (func_10(Global_43801))
		{
			func_11(&Global_43801, 1, 1);
		}
		UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
		MISC::_0x1096603B519C905F("");
		func_13(func_12(cParam0->f_607), 0, 2);
		func_14();
		func_15(1);
		func_16(1, 0);
		func_17(cParam0, 1);
		func_18(0);
		UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
		Global_36605 = 0;
		func_19(3);
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
		{
			TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(GET_HASH_KEY("WORLD_PLAYER_SEAT_LEDGE"), true);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (!bParam1)
	{
		if (!func_6(cParam0, 1048576))
		{
			if (func_20() == 0)
			{
				func_21(0);
			}
			else if (func_22(cParam0) != 0)
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					if (CAM::_0x1204EB53A5FBC63D())
					{
						return false;
					}
					if (func_22(cParam0) == 1 || func_22(cParam0) == 2)
					{
						if (func_23(&(cParam0->f_8269)) && func_24(&(cParam0->f_8269)))
						{
							func_25(0, &(cParam0->f_8269.f_1282));
						}
					}
					if (!func_26(&(cParam0->f_13118)))
					{
						func_27(&(cParam0->f_13118), 0);
					}
					bVar0 = CAM::IS_DEATH_FAIL_CAMERA_RUNNING();
					if (bVar0)
					{
						func_1(cParam0, 256);
					}
					bVar1 = CAM::_0x7CE9DC58E3E4755F();
					if (bVar1 && func_6(cParam0, 256))
					{
						CAM::_0x16E9ABDD34DDD931();
						CAM::DO_SCREEN_FADE_OUT(0);
					}
					else
					{
						if (((!bVar0 && !func_28(cParam0, bVar1)) && !func_29()) && !func_6(cParam0, 80))
						{
							if (!bVar1)
							{
								func_30(cParam0);
							}
							return false;
						}
						if (func_6(cParam0, 64))
						{
							CAM::_0x16E9ABDD34DDD931();
							CAM::DO_SCREEN_FADE_OUT(0);
						}
						else if (func_22(cParam0) == 2)
						{
							if (cParam0->f_13104 == -1)
							{
								if (func_31(cParam0))
								{
									cParam0->f_13104 = MISC::GET_GAME_TIMER();
								}
							}
							if ((cParam0->f_13104 != -1 && MISC::GET_GAME_TIMER() > cParam0->f_13104 + 4000) || bVar1)
							{
								CAM::_0x16E9ABDD34DDD931();
								CAM::DO_SCREEN_FADE_OUT(0);
							}
						}
						else if (func_22(cParam0) == 1)
						{
							if (func_28(cParam0, bVar1))
							{
								CAM::_0x16E9ABDD34DDD931();
								CAM::DO_SCREEN_FADE_OUT(0);
							}
						}
						else
						{
							CAM::_0x16E9ABDD34DDD931();
							CAM::DO_SCREEN_FADE_OUT(0);
						}
						CAM::IS_SCREEN_FADING_IN();
						if (!CAM::IS_SCREEN_FADED_OUT())
						{
							return false;
						}
					}
				}
			}
			else if (func_6(cParam0, 2))
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
					return false;
				}
				if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(1) == 1)
				{
					return false;
				}
			}
			if (!func_32() && func_22(cParam0) != 0)
			{
				func_36(cParam0, func_34(func_33(cParam0)), func_34(func_35(cParam0)), func_33(cParam0), func_35(cParam0));
			}
		}
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(cParam0->f_7375.f_804))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(cParam0->f_7375.f_804))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(cParam0->f_7375.f_804);
		}
	}
	func_1(cParam0, 1048576);
	if (!func_6(cParam0, 2097152))
	{
		if (!func_9(cParam0))
		{
			return false;
		}
		func_1(cParam0, 2097152);
	}
	MISC::_0x1096603B519C905F("");
	STREAMING::CLEAR_FOCUS();
	if (MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_EXISTS())
	{
		MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_DELETE();
	}
	MISC::SET_TIME_SCALE(1f);
	func_37(&(cParam0->f_8269));
	if (func_23(&(cParam0->f_8269)))
	{
		func_38(&(cParam0->f_8269));
	}
	AUDIO::SET_GPS_ACTIVE(false);
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
	if (STREAMING::IS_LOAD_SCENE_ACTIVE())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	if (STREAMING::IS_LOAD_SCENE_ACTIVE())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	VEHICLE::SET_RANDOM_TRAINS(false);
	func_39(1);
	func_40(1);
	LAW::_0xC5EB2755FA25F1E9(1);
	func_41(0);
	func_42();
	func_19(3);
	if (!func_6(cParam0, 8))
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
		HUD::_DISPLAY_HUD_COMPONENT(724769646);
	}
	func_15(1);
	func_43();
	func_44();
	HUD::SET_MISSION_NAME(false, 0);
	func_45();
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	CLOCK::PAUSE_CLOCK(false, 0);
	PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 1f);
	PLAYER::_0x19B2C7A6C34FAD54(PLAYER::PLAYER_ID(), 1f);
	func_46(cParam0);
	func_47(1, 0);
	func_48(2);
	if (!Global_1935630.f_12)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
		PED::_0xAAC0EE3B4999ABB5(Global_35, false);
		WEAPON::_0xB832F1A686B9B810(Global_35, func_49(), 0);
		PED::SET_PED_CONFIG_FLAG(Global_35, 308, false);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
		PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
		func_50(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
	}
	if (PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0x12E09E278C6C29B7(PLAYER::GET_PLAYER_INDEX());
	}
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::GET_PLAYER_INDEX(), false);
	if (CAM::DOES_CAM_EXIST(cParam0->f_609.f_2))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(cParam0->f_609.f_2, false);
	}
	func_51(&(cParam0->f_10792));
	func_52();
	CAM::STOP_GAMEPLAY_HINT(true);
	func_39(1);
	func_53();
	if (func_54())
	{
		STREAMING::SET_POPULATION_BUDGET_MULTIPLIER(0.3f);
	}
	func_55(0, 14);
	bVar2 = false;
	if (func_22(cParam0) == 0)
	{
		bVar2 = true;
	}
	else
	{
		func_56(cParam0);
	}
	func_57(cParam0, 0, !bVar2, bVar2);
	func_58(cParam0, !bVar2);
	func_59(0);
	func_59(1);
	PLAYER::_0xDF93973251FB2CA5(PLAYER::PLAYER_ID(), 1);
	func_60(0);
	func_62(func_61(cParam0));
	func_63(func_61(cParam0));
	func_64(0);
	func_65(0);
	func_66(func_22(cParam0));
	func_67(cParam0);
	if (!bVar2)
	{
		func_16(1, 0);
	}
	if (func_22(cParam0) != 1)
	{
		func_68(0, &(cParam0->f_8269.f_1282));
	}
	Global_43805 = -1;
	func_69(1);
	func_70(0);
	func_71(&Global_1935630, 2097152);
	func_18(0);
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
	if (func_22(cParam0) == 0)
	{
		func_72(Global_1835011[cParam0->f_607 /*74*/].f_1);
	}
	func_73();
	if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(GET_HASH_KEY("WORLD_PLAYER_SEAT_LEDGE"), true);
	}
	if (!bParam1)
	{
		switch (func_22(cParam0))
		{
			case 0:
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					if ((!CAM::IS_SCREEN_FADING_IN() && !func_6(cParam0, 4)) && !func_6(cParam0, 2))
					{
						CAM::DO_SCREEN_FADE_IN(1000);
					}
				}
				func_74(cParam0);
				func_75(cParam0);
				func_76();
				func_78(func_77(), 0);
				if (func_20() == 0)
				{
					func_79(0);
				}
				func_80(cParam0->f_607);
				bVar3 = func_81();
				if (!func_82(32768))
				{
					func_83(func_12(cParam0->f_607), !func_6(cParam0, 128), 1, bVar3, 1);
				}
				else
				{
					func_84(func_12(cParam0->f_607), bVar3);
				}
				func_17(cParam0, bParam1);
				if (cParam0->f_607 != 77)
				{
					UILOG::_UILOG_MARK_MISSION_COMPLETED(func_85(cParam0));
				}
				func_14();
				if (func_82(32768))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					func_86();
					func_87(0);
				}
				else if (func_6(cParam0, 2))
				{
					if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
					func_88(1);
					func_89();
					func_90(6);
					func_91(4096);
				}
				break;
			case 1:
			case 2:
			case 3:
			case 6:
				func_92(func_12(cParam0->f_607));
				func_93();
				if (func_22(cParam0) == 2)
				{
					func_95(func_94(GET_HASH_KEY("DEATHS_ON_CURRENT_DEED")), 1);
				}
				LAW::_0x55F37F5F3F2475E1();
				LAW::_0x062B4A4A3396351D(PLAYER::GET_PLAYER_INDEX());
				LAW::_0x07E8B8B20570271C(PLAYER::GET_PLAYER_INDEX());
				break;
			case 5:
				if (func_20() == 0)
				{
					func_79(0);
				}
				func_93();
				Var4 = { func_94(GET_HASH_KEY("DEATHS_ON_CURRENT_DEED")) };
				STATS::_0x0FEE2561120F3333(&Var4);
				func_13(func_12(cParam0->f_607), 0, 2);
				break;
			default:
				func_83(func_12(cParam0->f_607), 1, 1, 0, 1);
				func_14();
				break;
		}
		if (func_22(cParam0) != 0)
		{
			Var6 = { func_96(cParam0) };
			func_97(func_12(cParam0->f_607), func_22(cParam0), &Var6, 0, 0, func_6(cParam0, 64));
		}
	}
	func_98(1);
	func_19(3);
	func_99(cParam0, 4096);
	return true;
}

bool func_3(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

void func_4(var uParam0, char[4] cParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	PED::_0xED9582B3DA8F02B4(20);
	cParam1->f_608 = uParam0->f_1;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (!func_20() == 0)
	{
		if (ITEMSET::IS_ITEMSET_VALID(Global_43616) && ITEMSET::GET_ITEMSET_SIZE(Global_43616) > 0)
		{
			iVar1 = 0;
			while (iVar1 < ITEMSET::GET_ITEMSET_SIZE(Global_43616))
			{
				iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Global_43616);
				iVar3 = MISC::_GET_ENTITY_FROM_ITEM(iVar2);
				if (((!ENTITY::IS_ENTITY_DEAD(iVar3) && ENTITY::IS_ENTITY_A_PED(iVar3)) && !ITEMSET::IS_IN_ITEMSET(iVar2, iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3) != Global_35)
				{
					ITEMSET::ADD_TO_ITEMSET(iVar2, iVar0);
				}
				iVar1++;
			}
		}
	}
	func_100(cParam1);
	if (!func_20() == 0)
	{
		if (func_101(cParam1) > 0)
		{
			iVar4 = 0;
			while (iVar4 < cParam1->f_7375.f_13)
			{
				if (((!ENTITY::IS_ENTITY_DEAD(cParam1->f_7375.f_13[iVar4 /*12*/]) && ENTITY::IS_ENTITY_A_PED(cParam1->f_7375.f_13[iVar4 /*12*/])) && !ITEMSET::IS_IN_ITEMSET(cParam1->f_7375.f_13[iVar4 /*12*/], iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(cParam1->f_7375.f_13[iVar4 /*12*/]) != Global_35)
				{
					ITEMSET::ADD_TO_ITEMSET(cParam1->f_7375.f_13[iVar4 /*12*/], iVar0);
				}
				iVar4++;
			}
		}
	}
	if (ITEMSET::GET_ITEMSET_SIZE(iVar0) > 0)
	{
		PED::_0xF008E0BA1FE1D644(ITEMSET::GET_ITEMSET_SIZE(iVar0));
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	if (func_102())
	{
		func_103(cParam1, 4194304);
	}
	if (func_104())
	{
		func_103(cParam1, 8388608);
	}
	if (func_105())
	{
		if (!func_104() && !func_102())
		{
			func_103(cParam1, 4);
		}
		else
		{
			if (func_104())
			{
			}
			if (func_102())
			{
			}
		}
		func_107(cParam1, func_106());
	}
	func_108(cParam1, uParam0);
	func_109(cParam1);
	if (cParam1->f_13105 > PED::_0x62DE46F061CAA468())
	{
		PED::_0xF008E0BA1FE1D644((cParam1->f_13105 - PED::_0x62DE46F061CAA468()));
	}
}

void func_5(char[4] cParam0)
{
	char[] cVar0[8];
	int iVar1;
	struct<4> Var2;
	char[] cVar6[8];

	cVar0 = func_110(cParam0->f_607);
	HUD::SET_MISSION_NAME(true, &cVar0);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	MISC::_0x1096603B519C905F(&cVar0);
	if (cParam0->f_607 != 77)
	{
		func_111();
		func_112(&cVar0, 0);
	}
	UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
	func_113(1);
	func_114();
	MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
	SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	func_45();
	func_40(func_115(cParam0));
	LAW::_0x55F37F5F3F2475E1();
	LAW::_0x292AD61A33A7A485();
	if ((LAW::_0xF46108C50A22B029() && !Global_43891) && !func_116(func_77()))
	{
		POPULATION::_0x2161278C6322F740(16384, 0, 0, -1, -1, 0);
	}
	func_117(1, 0, 1);
	POPULATION::_0x2161278C6322F740(4096, 0, 0, -1, -1, 0);
	VEHICLE::DELETE_ALL_TRAINS();
	VEHICLE::SET_RANDOM_TRAINS(false);
	func_39(0);
	func_118(cParam0);
	AUDIO::CLEAR_CONVERSATION_HISTORY();
	if (!Global_1935630.f_12)
	{
		func_119(0, 0);
		PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
		if (!func_120(cParam0, 16384) && (func_121(cParam0, func_33(cParam0), 2) || func_105()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
		}
		PED::CLEAR_PED_WETNESS(Global_35);
		PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
		GRAPHICS::REMOVE_PARTICLE_FX_FROM_ENTITY(Global_35);
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 0, false))
		{
			if ((((WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(iVar1) || iVar1 == GET_HASH_KEY("OBJECT_1")) || iVar1 == GET_HASH_KEY("OBJECT_2")) || iVar1 == GET_HASH_KEY("OBJECT_3")) || iVar1 == GET_HASH_KEY("OBJECT_4"))
			{
				if (!func_105() && !func_121(cParam0, func_33(cParam0), 2))
				{
				}
			}
			else if (!func_122(iVar1) && !func_82(32768))
			{
				WEAPON::REMOVE_WEAPON_FROM_PED(Global_35, iVar1, true, -142743235);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_UNARMED"), true, 0, false, false);
			}
		}
		WEAPON::_0xB832F1A686B9B810(Global_35, 0, 0);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
		func_123(cParam0);
	}
	func_70(1);
	func_39(0);
	func_124(cParam0, GET_HASH_KEY("A_C_HORSE_MORGAN_FLAXENCHESTNUT"));
	iLocal_150 = func_125(cParam0);
	iLocal_150 = iLocal_150;
	if (!Global_1935630.f_12)
	{
		if (!func_105())
		{
			Var2 = { func_34(func_33(cParam0)) };
			if (func_33(cParam0) != 0)
			{
				Var2 = { func_126(cParam0->f_607) };
			}
			if (!func_127(Var2))
			{
				func_103(cParam0, 1048576);
			}
			func_107(cParam0, 0);
			if (func_128(cParam0, 3) || func_129())
			{
				func_130(cParam0, func_126(cParam0->f_607), 0);
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true);
				func_131(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 5000f, 1, 0, 0, 0, 0);
			}
			func_107(cParam0, func_106());
		}
		TELEMETRY::_TELEMETRY_MISSION_STARTED(&(Global_1835011[cParam0->f_607 /*74*/].f_8), 0, func_132(func_33(cParam0)), func_105());
	}
	func_133(cParam0);
	func_134(cParam0, 0);
	func_135(cParam0, 0);
	if (!func_136(cParam0, func_33(cParam0)))
	{
		func_107(cParam0, 0);
	}
	func_137(cParam0);
	func_138(cParam0);
	func_139(cParam0);
	func_103(cParam0, 2097152);
	func_140(cParam0, func_33(cParam0), 134217728);
	if (func_82(32768))
	{
		func_1(cParam0, 4);
	}
	func_141(cParam0);
	func_142(cParam0, func_33(cParam0));
	func_143(func_61(cParam0));
	if (!func_120(cParam0, 65536))
	{
		func_144(func_61(cParam0));
	}
	func_145(cParam0, PLAYER::PLAYER_PED_ID(), "ARTHUR", 0);
	func_146(cParam0);
	func_147(cParam0);
	func_148(cParam0);
	func_149(cParam0, 30f);
	func_150(cParam0, 40f);
	func_151(cParam0, Global_35, 0, 0, 0, 0, 0);
	func_98(0);
	AUDIO::_0xA6A3A3F96B8B030E();
	func_18(1);
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (cParam0->f_607 != 77)
	{
		cVar6 = func_110(cParam0->f_607);
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(1, MISC::GET_HASH_KEY(&cVar6), 0, "");
	}
	if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(GET_HASH_KEY("WORLD_PLAYER_SEAT_LEDGE"), false);
	}
}

bool func_6(char[4] cParam0, int iParam1)
{
	return (cParam0->f_5309 && iParam1) != 0;
}

void func_7(char[4] cParam0)
{
	var uVar0;

	if ((LAW::_0xF46108C50A22B029() && !Global_43891) && !func_116(func_77()))
	{
		POPULATION::_0xF45E46DEECF7DF6E(16384, 0, 0, -1, -1);
	}
	if (!func_121(cParam0, func_33(cParam0), 16384))
	{
		func_152();
	}
	if (!func_8(cParam0, 32768))
	{
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	}
	if (!func_8(cParam0, 2048))
	{
		func_153(1, 0);
	}
	switch (func_154(cParam0))
	{
		case -1:
			break;
		case 0:
			MemCopy(&uVar0, {func_155(func_61(cParam0))}, 4);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
			{
				func_103(cParam0, 64);
			}
			func_156(cParam0, 0);
			func_157(cParam0);
			if (func_158(cParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(func_159(cParam0)) && func_128(cParam0, 3))
				{
					ENTITY::FREEZE_ENTITY_POSITION(func_159(cParam0), false);
				}
				func_160(cParam0, 1);
			}
			if (func_6(cParam0, -2147483648))
			{
				func_160(cParam0, 2);
			}
			break;
		case 1:
			if (func_161(cParam0))
			{
				func_1(cParam0, -2147483648);
				func_160(cParam0, 2);
			}
			func_156(cParam0, func_162(cParam0, func_33(cParam0)) > 4);
			break;
		case 2:
			if (func_2(cParam0, 0))
			{
				func_1(cParam0, -2147483648);
				func_160(cParam0, 3);
			}
			break;
		case 3:
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
	if (func_154(cParam0) < 2)
	{
	}
}

bool func_8(char[4] cParam0, int iParam1)
{
	return (cParam0->f_5307 && iParam1) != 0;
}

bool func_9(char[4] cParam0)
{
	vector3 vVar0;

	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_163(52, 0);
	func_164(52);
	if (!func_165())
	{
		func_166();
		INVENTORY::_0x6A564540FAC12211(func_167(0), GET_HASH_KEY("DOCUMENT_PLAYER_JOURNAL"));
	}
	func_168(&iLocal_485, &uLocal_521);
	func_168(&iLocal_463, &uLocal_528);
	func_168(&iLocal_470, &uLocal_535);
	func_168(&uLocal_509, &uLocal_544);
	func_168(&uLocal_513, &uLocal_548);
	func_169(&iLocal_506, &(uLocal_1170[0]));
	func_169(&uLocal_508, &uLocal_552);
	if (func_170(iLocal_562, 1))
	{
		ENTITY::REMOVE_MODEL_HIDE(2660.446f, -1235.06f, 52.243f, 0.5f, GET_HASH_KEY("P_DIRTPOT01X"), 1);
	}
	if (func_170(iLocal_562, 2))
	{
		ENTITY::REMOVE_MODEL_HIDE(2739.367f, -1180.438f, 48.217f, 2.5f, GET_HASH_KEY("P_POT_FLOWERARNG20X"), 1);
		ENTITY::REMOVE_MODEL_HIDE(2738.724f, -1189.901f, 48.817f, 0.5f, GET_HASH_KEY("P_POTCLAY02X"), 1);
		ENTITY::REMOVE_MODEL_HIDE(2774.53f, -1241.342f, 47.418f, 0.5f, GET_HASH_KEY("P_CHAIR_BARREL04B"), 1);
	}
	func_171();
	func_172();
	if (func_22(cParam0) == 0)
	{
		func_173(112, 1, 0, 0, 6, 0, 0, 1);
	}
	else
	{
		if (func_174(32))
		{
			func_175(Global_35, GET_HASH_KEY("MPC_HIDE_ACTION_SATCHEL"), 0);
			func_176(0);
		}
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		}
	}
	func_177(&iLocal_1176, &Local_1197);
	func_177(&iLocal_1215, &Local_1236);
	func_177(&iLocal_1254, &Local_1275);
	func_177(&iLocal_1310, &Local_1331);
	func_177(&iLocal_1422, &Local_1443);
	func_177(&iLocal_1478, &Local_1499);
	func_177(&iLocal_1366, &Local_1387);
	func_178(0);
	func_39(1);
	POPULATION::ENABLE_AMBIENT_ROAD_POPULATION();
	func_179();
	VEHICLE::SET_RANDOM_TRAINS(true);
	if (func_180())
	{
		func_47(0, 0);
	}
	if (PLAYER::_0xD1F6B912785BFD35(PLAYER::PLAYER_ID()))
	{
		PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
	}
	VEHICLE::_0x8379E05871AD24E0();
	if (func_181(uLocal_295[1], 0))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_295[1], 0f);
		PED::SET_PED_CONFIG_FLAG(uLocal_295[1], 177, false);
		ENTITY::SET_ENTITY_INVINCIBLE(uLocal_295[1], false);
		PED::SET_PED_CONFIG_FLAG(uLocal_295[1], 461, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Searching", 0f, -1);
		PLAYER::_0xBBADFB5E5E5766FB(PLAYER::PLAYER_ID(), 1f);
		PED::SET_PED_CONFIG_FLAG(Global_35, 334, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 352, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 404, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 342, false);
		if (PED::_0xB346C85D49CC998E(Global_35, 1))
		{
			PED::_0x949B2F9ED2917F5D(Global_35, 1);
		}
		func_182();
	}
	func_183(1);
	func_184(cParam0);
	func_185();
	func_186(cParam0);
	func_187(cParam0);
	func_188();
	func_189(0);
	func_190(0);
	func_191(&uLocal_347, iLocal_387, 0);
	func_192(&uLocal_348, vLocal_632, vLocal_635, 0, 0);
	func_191(&uLocal_356, iLocal_370, 0);
	func_191(&uLocal_349, iLocal_390, 0);
	func_191(&uLocal_350, iLocal_391, 0);
	func_191(&uLocal_352, iLocal_389, 0);
	func_191(&uLocal_355, iLocal_380, 0);
	func_191(&uLocal_357, iLocal_410, 0);
	func_192(&uLocal_351, vLocal_669, vLocal_672, 0, 0);
	func_191(&uLocal_354, iLocal_408, 0);
	func_191(&uLocal_359, iLocal_424, 0);
	func_191(&uLocal_360, iLocal_432, 0);
	func_191(&uLocal_364, iLocal_458, 0);
	func_191(&uLocal_369, iLocal_423, 0);
	if (PED::_0x91A5F9CBEBB9D936(uLocal_366))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_366, false);
	}
	if (bLocal_617)
	{
		func_191(&uLocal_365, iLocal_402, 0);
	}
	if (iLocal_740 != -1)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_740);
	}
	if (iLocal_741 != -1)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_741);
	}
	if (TASK::DOES_SCENARIO_GROUP_EXIST("NBX_MOB1_STREET_KIDS"))
	{
		if (TASK::IS_SCENARIO_GROUP_ENABLED("NBX_MOB1_STREET_KIDS"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("NBX_MOB1_STREET_KIDS", false);
		}
	}
	TASK::SET_SCENARIO_TYPE_ENABLED("PROP_PLAYER_EAT_ALMONDS_COUNTER", true);
	func_193();
	func_71(&Global_1935630, 65536);
	func_194(2015589310, 1);
	func_194(-1959224856, 1);
	func_195(2015589310);
	func_195(-1959224856);
	func_194(-1003712548, 1);
	func_194(771449720, 1);
	func_195(-1003712548);
	func_195(771449720);
	func_196();
	AUDIO::_0x660A8F876DF1D4F8(14);
	AUDIO::_0x660A8F876DF1D4F8(18);
	func_197(cParam0, 0, iLocal_290[0], 0, 0, 1, 0);
	PED::_0x58F7DB5BD8FA2288(Global_35);
	MISC::_0xFC6ECB9170145ECE();
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	func_198(96746001);
	func_198(695709062);
	func_198(1726243396);
	func_198(-1583923165);
	if (PATHFIND::_0xDE0EA444735C1368(iLocal_432))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_432);
	}
	func_199(266);
	func_199(317);
	func_199(318);
	func_199(319);
	func_200(27, &vVar0, 1);
	func_201(&vVar0, 1, 1);
	func_202(12, 1);
	return true;
}

bool func_10(int iParam0)
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

void func_11(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_10(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_203(*uParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_204(iVar0);
	*uParam0 = 0;
}

int func_12(int iParam0)
{
	if (!func_205(iParam0))
	{
		return 0;
	}
	return Global_1835011[iParam0 /*74*/].f_1;
}

void func_13(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_206(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_207(iParam0) && !func_208(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_209(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_207(iParam0))
	{
		iParam2 = -1;
	}
	if (func_210(iParam0) == 3 || (func_210(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_209(iParam0))))
	{
		func_212(func_211(iParam0), func_209(iParam0), iParam2);
		if ((!func_206(Global_1572864.f_8) && !func_213(0, 1, 0)) && !func_214(Global_1935630, 32768))
		{
			iVar0 = func_215(iParam0);
			if (iVar0 != -1)
			{
				func_216(0);
			}
			else if (func_211(iParam0) == 8)
			{
				iVar0 = func_217();
				if (iVar0 != -1)
				{
					func_216(0);
				}
			}
		}
	}
	func_218(iParam0, 0);
	if (func_219(0) == iParam0)
	{
		func_40(1);
		func_220(0);
		func_221(1);
	}
	func_222(iParam0, 1);
	func_223(iParam0);
}

void func_14()
{
	Global_1572864.f_8 = -1;
	Global_1572864.f_9 = -1;
	Global_1572864.f_10 = -1;
	func_224(0);
	func_225(0);
	func_64(0);
	func_65(0);
	func_226(0);
	func_227(1f);
}

void func_15(bool bParam0)
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
		func_228();
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
}

void func_16(bool bParam0, int iParam1)
{
	if (func_229())
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_230())
		{
			func_113(1);
		}
	}
	AUDIO::_0x36559148B78853B3(0, iParam1, 0);
}

void func_17(char[4] cParam0, bool bParam1)
{
	struct<7> Var0;

	Var0 = func_209(func_12(cParam0->f_607));
	Var0.f_1 = 0;
	Var0.f_2 = func_132(func_33(cParam0));
	Var0.f_4 = (ENTITY::GET_ENTITY_HEALTH(Global_35) * 100 / ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false));
	Var0.f_5 = Global_40.f_7729;
	Var0.f_6 = func_231(0);
	if (bParam1)
	{
		Var0.f_3 = 5;
	}
	else
	{
		Var0.f_3 = func_22(cParam0);
	}
	TELEMETRY::_TELEMETRY_MISSION_OVER(&(Global_1835011[cParam0->f_607 /*74*/].f_8), &Var0);
}

void func_18(int iParam0)
{
	Global_36580 = iParam0;
}

int func_19(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_232(iVar0, iParam0);
		iVar0++;
	}
	return 1;
}

int func_20()
{
	return Global_1572887.f_12;
}

void func_21(int iParam0)
{
	Global_1109400.f_22.f_10 = iParam0;
}

int func_22(char[4] cParam0)
{
	return cParam0->f_10783;
}

bool func_23(var uParam0)
{
	return uParam0->f_2501;
}

bool func_24(var uParam0)
{
	return uParam0->f_2500;
}

void func_25(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_233(uParam1[iVar0 /*16*/], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if ((uParam1[iVar0 /*16*/])->f_9 == 7)
					{
						func_234(uParam1[iVar0 /*16*/], 1);
					}
					break;
				case 1:
				case 2:
					if ((uParam1[iVar0 /*16*/])->f_9 == 3)
					{
						func_234(uParam1[iVar0 /*16*/], 1);
					}
					break;
				case 3:
					if ((uParam1[iVar0 /*16*/])->f_9 == 2)
					{
						func_234(uParam1[iVar0 /*16*/], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_26(float fParam0)
{
	return func_235(*fParam0, 1);
}

void func_27(float fParam0, bool bParam1)
{
	if (bParam1 || !func_26(fParam0))
	{
		func_236(fParam0);
	}
}

bool func_28(char[4] cParam0, bool bParam1)
{
	if (func_8(cParam0, 128) && func_29())
	{
		return true;
	}
	if (func_237(&(cParam0->f_13118)) >= 4000)
	{
		return true;
	}
	if (!func_31(cParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		return false;
	}
	return true;
}

bool func_29()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false));
}

void func_30(char[4] cParam0)
{
	func_238(!func_6(cParam0, 32), 1);
	func_1(cParam0, 32);
}

bool func_31(char[4] cParam0)
{
	return true;
}

bool func_32()
{
	return func_206(Global_1572864.f_8);
}

int func_33(char[4] cParam0)
{
	return cParam0->f_597;
}

struct<4> func_34(int iParam0)
{
	struct<4> Var0;

	if (iParam0 == iLocal_155)
	{
		func_240(&Var0, func_239(0, 0));
	}
	else if (iParam0 == iLocal_156)
	{
		func_240(&Var0, func_239(1, 0));
	}
	else if (iParam0 == iLocal_157)
	{
		func_240(&Var0, func_239(2, 8));
	}
	else if (iParam0 == iLocal_158)
	{
		func_240(&Var0, func_239(3, 10));
	}
	else if (iParam0 == iLocal_159)
	{
		func_240(&Var0, func_239(4, 3));
	}
	else if (iParam0 == iLocal_160)
	{
		func_240(&Var0, func_239(4, 4));
	}
	else if (iParam0 == iLocal_161)
	{
		func_240(&Var0, func_239(5, 4));
	}
	else if (iParam0 == iLocal_162)
	{
		func_240(&Var0, func_239(6, 0));
	}
	else if (iParam0 == 25)
	{
		func_240(&Var0, func_239(7, 0));
	}
	return Var0;
}

int func_35(char[4] cParam0)
{
	return func_241(cParam0, func_33(cParam0));
}

void func_36(char[4] cParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<4> Var4;

	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_224(0);
	func_242(func_12(cParam0->f_607), Var0, Var4, func_132(iParam9), func_132(iParam10));
}

void func_37(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_233(uParam0[iVar0 /*16*/], 1048576) && (uParam0[iVar0 /*16*/])->f_9 == 9)
		{
			func_243(uParam0[iVar0 /*16*/]);
		}
		iVar0++;
	}
}

void func_38(var uParam0)
{
	DATAFILE::_DATAFILE_UNLOAD(uParam0->f_2495);
	uParam0->f_2495 = 0;
	uParam0->f_2501 = 0;
}

void func_39(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (bParam0)
	{
		VEHICLE::_0x2A7413168F6CD5A8();
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			func_244(iVar0, 4096);
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
	if (func_20() == -1)
	{
		Global_1430221.f_1 = !bParam0;
	}
}

void func_40(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_71(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_245(&Global_1935630, 4194304);
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

void func_41(bool bParam0)
{
	if (bParam0)
	{
	}
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(15, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(6, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(1, bParam0);
}

void func_42()
{
	func_246();
	func_247();
	func_248();
	func_249();
}

void func_43()
{
	if (func_250())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_29())
		{
			func_251(1);
		}
	}
}

void func_44()
{
	Global_1894899.f_186 = 0;
	func_252();
}

void func_45()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_46(char[4] cParam0)
{
	if (func_20() == 0)
	{
		return;
	}
	switch (cParam0->f_607)
	{
		case 0:
			break;
		case 1:
			break;
		case 31:
			MISC::SET_WEATHER_TYPE(GET_HASH_KEY("HIGHPRESSURE"), false, true, false, 0f, false);
			break;
	}
}

void func_47(int iParam0, int iParam1)
{
	func_253(1, iParam0, iParam1);
}

void func_48(int iParam0)
{
	switch (func_20())
	{
		case -1:
			Global_1357549.f_1494 = (Global_1357549.f_1494 - (Global_1357549.f_1494 && iParam0));
			break;
	}
}

bool func_49()
{
	return (func_254() || func_54());
}

void func_50(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
}

void func_51(var uParam0)
{
	func_255(uParam0);
	func_256(uParam0, 0);
	uParam0->f_1 = 0;
	func_43();
}

void func_52()
{
	struct<12> Var0;
	int iVar12;

	iVar12 = 0;
	while (iVar12 < Global_43619)
	{
		Global_43619[iVar12 /*12*/] = { Var0 };
		iVar12++;
	}
}

void func_53()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_257(iVar0);
		iVar0++;
	}
	func_258();
	func_259();
}

bool func_54()
{
	return Global_1894899 & 2 != 0;
}

void func_55(bool bParam0, int iParam1)
{
	bool bVar0;

	if (func_260())
	{
		if (func_261(255))
		{
			if (!func_262(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_263(Global_1894899.f_2) && func_264(Global_1894899.f_2))
		{
			func_265(Global_1894899.f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899.f_7 = iParam1;
				func_266(16);
			}
		}
		else if (func_263(Global_1894899.f_2) && !func_267(Global_1894899.f_2, 2))
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
		func_268(16);
		func_269();
		if (bVar0)
		{
			func_268(1);
		}
	}
}

void func_56(char[4] cParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_270(&(cParam0->f_5423[iVar0 /*65*/])))
		{
			if (!ENTITY::IS_ENTITY_DEAD(cParam0->f_5423[iVar0 /*65*/]))
			{
				if (ENTITY::IS_ENTITY_A_PED(cParam0->f_5423[iVar0 /*65*/]))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(cParam0->f_5423[iVar0 /*65*/]), false, true);
				}
			}
		}
		iVar0++;
	}
	if (func_271(cParam0->f_5421))
	{
		iVar0 = 0;
		while (iVar0 < func_272(cParam0->f_5421))
		{
			iVar1 = func_273(cParam0->f_5421, iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1), false, true);
				}
			}
			iVar0++;
		}
	}
}

void func_57(char[4] cParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (func_274(iVar1))
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			func_197(cParam0, iVar1, iVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_58(char[4] cParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 33, 2, 0);
	iVar0 = func_275(cParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	iVar1 = func_276(iVar0);
	iVar2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	bVar3 = false;
	if (SCRIPTS::IS_THREAD_ACTIVE(iVar2, false) && func_277(iVar1) == iVar2)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (bParam1)
		{
			func_278(7);
		}
		else
		{
			func_279(iVar0, 0);
		}
		func_280(cParam0, 16);
		PED::SET_PED_CONFIG_FLAG(iVar0, 219, false);
	}
}

void func_59(int iParam0)
{
	iParam0 = func_281(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_282(iParam0, 32);
	func_283();
}

void func_60(bool bParam0)
{
	Global_1956584 = bParam0;
	if (bParam0)
	{
		MAP::_SET_MINIMAP_FOW_SHOULD_UPDATE(false, 0);
	}
	else
	{
		MAP::_SET_MINIMAP_FOW_SHOULD_UPDATE(true, 0);
	}
}

int func_61(char[4] cParam0)
{
	return cParam0->f_607;
}

void func_62(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_284(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		HUD::_TEXT_BLOCK_DELETE(&Var0);
	}
}

void func_63(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_285(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		HUD::_TEXT_BLOCK_DELETE(&Var0);
	}
}

void func_64(bool bParam0)
{
	Global_1572864.f_14 = bParam0;
	if (bParam0)
	{
		func_226(1);
	}
}

void func_65(bool bParam0)
{
	Global_1572864.f_13 = bParam0;
	if (bParam0)
	{
		func_226(0);
	}
}

void func_66(int iParam0)
{
}

void func_67(char[4] cParam0)
{
	func_286(&(cParam0->f_13121));
}

void func_68(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_233(uParam1[iVar0 /*16*/], 1048576) && (uParam1[iVar0 /*16*/])->f_9 == 9)
		{
			func_234(uParam1[iVar0 /*16*/], 1);
		}
		iVar0++;
	}
}

void func_69(bool bParam0)
{
	Global_1935496.f_15 = !bParam0;
}

void func_70(int iParam0)
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, GET_HASH_KEY("WEAPON_FISHINGROD"), 0, false))
	{
		return;
	}
	Global_1900073.f_18 = iParam0;
}

void func_71(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_72(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_211(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_287(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_288(iVar1))
			{
				if (func_289(iVar1, 4))
				{
					func_290(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_291(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_287(iParam0);
		if (iVar3 == 59)
		{
			func_291(1);
		}
		else if (iVar3 == 61)
		{
			func_291(0);
		}
		else if (iVar3 == 83)
		{
			func_291(0);
		}
	}
}

void func_73()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1347702)
	{
		if (func_288(iVar0))
		{
			if (func_289(iVar0, 4))
			{
				if (func_289(iVar0, 16))
				{
					func_292(iVar0, 1);
				}
				if (func_289(iVar0, 8))
				{
					func_293(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_74(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	if (func_20() == 0)
	{
		return;
	}
	iVar0 = func_33(cParam0);
	iVar1 = func_162(cParam0, iVar0);
	bVar2 = false;
	if (iVar1 == 5 || iVar1 == 6)
	{
		bVar2 = true;
	}
	iVar3 = 0;
	if (!bVar2)
	{
		if (func_294(cParam0) == 0 && iVar0 == 0)
		{
			iVar3 = 1;
		}
	}
	iVar4 = 0;
	if (!bVar2)
	{
		if (func_22(cParam0) == 0)
		{
			iVar4 = 1;
		}
	}
	if (iVar3 || iVar4)
	{
		func_295(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_296(cParam0);
	}
}

void func_75(char[4] cParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;

	iVar0 = 0;
	if (func_297(cParam0))
	{
		fVar1 = BUILTIN::TO_FLOAT((LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::GET_PLAYER_INDEX()) - Global_2621440[0 /*12066*/].f_9.f_20));
		if (fVar1 > 0f)
		{
			fVar2 = (1f + (BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(50, 200)) / 1000f));
			iVar0 = (iVar0 + BUILTIN::ROUND((fVar1 * fVar2)));
		}
	}
	func_298(iVar0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
}

void func_76()
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

int func_77()
{
	return Global_1894899.f_2;
}

void func_78(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_263(iParam0))
	{
		return;
	}
	bVar0 = func_267(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_299(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_301(iParam0, func_300());
			func_302(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_303(iParam0, 67108864);
		func_301(iParam0, -15);
	}
	func_304(iParam0);
}

void func_79(bool bParam0)
{
	if (!bParam0)
	{
		func_305(11);
	}
	else
	{
		func_306(11);
	}
}

void func_80(int iParam0)
{
	if (func_307(iParam0, 0))
	{
		func_308(262144, 5, 0, 1);
		func_309(720f, 1, 0);
	}
	switch (iParam0)
	{
		case 18:
			func_310(101, 7, 1f, 0, 1);
			func_310(89, 7, 1f, 0, 1);
			break;
	}
}

bool func_81()
{
	return Global_1572864.f_15;
}

bool func_82(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

void func_83(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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

	if (!func_206(iParam0))
	{
		return;
	}
	if (func_311(iParam0) == 4)
	{
		func_312(iParam0, func_300());
		if (!func_210(iParam0) == 5 && !func_210(iParam0) == 6)
		{
			if (bParam3)
			{
				func_218(iParam0, 6);
			}
			else
			{
				func_218(iParam0, 5);
			}
			func_223(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_40(1);
	}
	iVar0 = func_211(iParam0);
	bVar1 = func_20() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_313(0, 2);
		if (!bVar1 && bParam1)
		{
			func_314();
		}
	}
	else
	{
		func_220(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_315(iParam0);
	}
	else
	{
		Var2 = { func_94(GET_HASH_KEY("DEATHS_ON_CURRENT_DEED")) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!func_82(32768))
		{
			Var4 = { func_94(GET_HASH_KEY("LAST_MISSION_NAME")) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && func_210(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_287(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[76 /*74*/].f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[func_287(iParam0) /*74*/].f_8), true);
						}
					}
					else if ((func_287(iParam0) != 95 && func_287(iParam0) != 82) && !func_316(Global_1347702[func_287(iParam0) /*49*/].f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1347702[func_287(iParam0) /*49*/].f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[func_287(iParam0) /*74*/].f_8), true);
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
		func_318(func_287(iParam0), iVar6, func_317());
	}
	else if (iVar0 == 8)
	{
		func_320(func_287(iParam0), iVar6, func_317(), func_319());
	}
	if (!func_210(iParam0) == 5 && !func_210(iParam0) == 6)
	{
		iVar9 = func_321(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_322(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!Global_1879534 && !Global_1879534.f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_323(func_287(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_324((iVar10 - 20), 0, iVar10);
					iVar11 = func_324((iVar11 - 10), 0, iVar11);
				}
				func_325(1);
				func_326(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528.f_217 = 1;
				break;
			case 4:
				func_326(45, 0, 1);
				break;
			case 8:
				iVar10 = func_327(func_287(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_324((iVar10 - 20), 0, iVar10);
					iVar11 = func_324((iVar11 - 10), 0, iVar11);
				}
				func_326(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_328(func_287(iParam0)))
				{
					func_329(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				Global_1899528.f_217 = 1;
				break;
			case 9:
				func_326(120, 0, 1);
				break;
			case 2:
				func_326(120, 0, 1);
				break;
			case 6:
				func_326(func_331(func_330(iParam0)), 0, 1);
				break;
			case 5:
				func_326(120, 0, 1);
				break;
		}
	}
	func_222(iParam0, 1);
	func_312(iParam0, func_300());
	func_223(iParam0);
	if ((!func_210(iParam0) == 0 && bParam1) && func_20() == -1)
	{
		iVar12 = func_215(iParam0);
		if (iVar12 != -1)
		{
			func_216(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_217();
			if (iVar12 != -1)
			{
				func_216(0);
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
				switch (func_287(iParam0))
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
				if (func_288(func_287(iParam0)) && func_316(Global_1347702[func_287(iParam0) /*49*/].f_12, 4))
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
				if (func_287(iParam0) != 77)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = func_129();
				}
				break;
			case 8:
				if (func_287(iParam0) != 58)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = func_129();
				}
				break;
		}
	}
	if (!func_210(iParam0) == 5 && !func_210(iParam0) == 6)
	{
		if (bParam3)
		{
			func_218(iParam0, 6);
		}
		else
		{
			func_218(iParam0, 5);
		}
		func_223(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_287(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					case 1:
						func_332();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_333(GET_HASH_KEY("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_333(GET_HASH_KEY("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_333(GET_HASH_KEY("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_333(GET_HASH_KEY("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_333(GET_HASH_KEY("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_333(GET_HASH_KEY("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_333(GET_HASH_KEY("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_333(GET_HASH_KEY("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_333(GET_HASH_KEY("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_333(GET_HASH_KEY("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_334(GET_HASH_KEY("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_333(GET_HASH_KEY("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_334(GET_HASH_KEY("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_333(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_334(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_333(GET_HASH_KEY("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_334(GET_HASH_KEY("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_333(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_334(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_333(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_334(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_333(GET_HASH_KEY("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_334(GET_HASH_KEY("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_333(GET_HASH_KEY("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_334(GET_HASH_KEY("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_333(GET_HASH_KEY("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_334(GET_HASH_KEY("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_333(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_334(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_333(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_334(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_333(GET_HASH_KEY("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_334(GET_HASH_KEY("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_333(GET_HASH_KEY("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_333(GET_HASH_KEY("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_333(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_333(GET_HASH_KEY("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_335();
						func_336(GET_HASH_KEY("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
						func_337();
						func_338();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(func_339(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131 /* GXTEntry: "Jamie Gillis" */);
						break;
					case 15:
						func_333(GET_HASH_KEY("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_HUNT_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_HUNT_ROOT"), true);
							func_340(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_GAMB_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_GAMB_ROOT"), true);
							func_340(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_341(304805134, 1, 1);
						if (!func_342(Global_1347702[21 /*49*/].f_15, 1))
						{
							func_83(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
						func_343();
						break;
					case 26:
						func_344();
						break;
					case 17:
						func_345(Global_35, GET_HASH_KEY("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
						if (func_346())
						{
							func_347(GET_HASH_KEY("WEAPON_REPEATER_EVANS"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_348(GET_HASH_KEY("TP_RMAY_LETTER_1"), -1))
						{
							iVar15 = func_300();
							func_349(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_350(GET_HASH_KEY("TP_RMAY_LETTER_1"), iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_346())
						{
							func_347(GET_HASH_KEY("WEAPON_REVOLVER_LEMAT"));
						}
						break;
					case 34:
						if (func_346())
						{
							func_347(GET_HASH_KEY("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_351();
						break;
					case 37:
						func_352();
						if (func_353())
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
						func_354();
						break;
					case 43:
						func_355();
						break;
					case 44:
						if (!func_342(Global_1347702[82 /*49*/].f_15, 1))
						{
							func_83(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
						if (!func_342(Global_1347702[83 /*49*/].f_15, 1))
						{
							func_83(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_356();
						break;
					case 59:
						func_357();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_358();
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
						func_359();
						if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_SURV_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_SURV_ROOT"), true);
							func_340(451, 0);
						}
						if (!func_360(GET_HASH_KEY("TAXIDERMY_ORDER_05")))
						{
							if (func_360(GET_HASH_KEY("TAXIDERMY_ORDER_04")))
							{
								iVar16 = func_300();
								func_349(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_350(GET_HASH_KEY("TP_TAXIDERMY_REWARD_04_ES"), iVar16, 1);
							}
						}
						if (func_361(4))
						{
							if (!func_362(GET_HASH_KEY("DOCUMENT_NOTE_RARE_FISH"), 1, 0))
							{
								iVar17 = func_300();
								func_349(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_350(GET_HASH_KEY("TP_RF_INVITATION_01"), iVar17, 1);
							}
						}
						func_333(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_333(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_363(89200);
						func_363(2300);
						func_363(2300);
						break;
					case 68:
						func_364();
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
						func_365();
						func_363(-139100);
						break;
					case 69:
						if (func_342(Global_1347702[9 /*49*/].f_15, 1))
						{
							func_363(-6000);
						}
						break;
					case 70:
						func_363(23400);
						func_363(1900);
						func_363(-15000);
						break;
					case 71:
						func_363(-5500);
						break;
				}
				break;
			case 8:
				switch (func_287(iParam0))
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
						func_366();
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
						func_367();
						break;
					case 66:
						func_368();
						func_369();
						break;
					case 67:
						if (!func_370(6))
						{
							func_371(6);
						}
						if (!func_370(3))
						{
							func_371(3);
						}
						if (func_346())
						{
							func_347(GET_HASH_KEY("WEAPON_PISTOL_M1899"));
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
						if (func_342(Global_1835011[69 /*74*/].f_1, 1))
						{
							func_372(0);
							func_363(40500);
						}
						else
						{
							func_372(0);
							func_363(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_287(iParam0))
				{
					case 0:
						switch (func_330(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297 /* GXTEntry: "Mrs. Londonderry" */);
								break;
						}
						break;
				}
				break;
		}
		func_373(iParam0);
		func_374();
		switch (iVar0)
		{
			case 1:
				switch (func_287(iParam0))
				{
					case 4:
						func_375(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_375(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						func_375(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_375(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_375(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_375(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_375(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_376(iParam0);
						func_375(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_375(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_375(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_362(GET_HASH_KEY("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_333(GET_HASH_KEY("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_375(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_375(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_375(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (func_376(iParam0) == 0)
						{
							func_375(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							func_375(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_316(Global_1347702[func_287(iParam0) /*49*/].f_12, 536870912))
				{
					func_377(11, 1);
				}
				switch (func_287(iParam0))
				{
					case 109:
						func_375(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						func_377(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_375(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_375(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_375(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_375(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_378(0, 10, 11, GET_HASH_KEY("CABR01")))
				{
					func_375(iParam0, func_376(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_378(0, 7, 11, GET_HASH_KEY("CACR02")))
				{
					func_375(iParam0, func_379(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_378(0, 8, 11, GET_HASH_KEY("CACR03")))
				{
					func_375(iParam0, func_379(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_378(0, 11, 11, GET_HASH_KEY("CACR01")))
				{
					func_375(iParam0, func_379(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_378(0, 12, 11, GET_HASH_KEY("CACR04")))
				{
					func_375(iParam0, func_379(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_210(iParam0) == 0)
			{
				if (func_209(iParam0) == 0)
				{
				}
				else if (STATS::STATSTRACKER_IS_INITIALIZED(func_209(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_212(func_211(iParam0), func_209(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_287(iParam0) == 58)
						{
							Global_1879514.f_1 = iParam0;
						}
						func_381(func_380(Global_1879514.f_1));
						if (iVar0 == 8 && func_287(iParam0) == 58)
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
						if (func_288(func_287(iParam0)) && func_316(Global_1347702[func_287(iParam0) /*49*/].f_12, 1))
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
			func_382(bParam2, iVar20);
		}
	}
	func_221(1);
	if ((bVar13 || func_129()) && (func_211(iParam0) == 1 || func_211(iParam0) == 8))
	{
		Global_1879534.f_6 = 1;
		Global_1879534.f_7 = 1;
	}
}

void func_84(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (STATS::STATSTRACKER_IS_INITIALIZED(func_209(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_212(func_211(iParam0), func_209(iParam0), iVar0);
		if (func_82(32768))
		{
			iVar1 = func_211(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_378(0, 10, 11, GET_HASH_KEY("CABR01"))))
			{
				Global_1898438 = MISC::GET_GAME_TIMER();
				Global_1879514.f_1 = iParam0;
				Global_1879514.f_19 = func_383();
				Global_1879514.f_18 = 1;
			}
		}
	}
	if (func_208(iParam0))
	{
		func_13(iParam0, 0, 2);
	}
	else if (func_207(iParam0))
	{
		if (!func_210(iParam0) == 5 && !func_210(iParam0) == 6)
		{
			if (bParam1)
			{
				func_218(iParam0, 6);
			}
			else
			{
				func_218(iParam0, 5);
			}
			func_223(iParam0);
		}
	}
	switch (func_211(iParam0))
	{
		case 1:
			switch (func_287(iParam0))
			{
				case 12:
				case 19:
				case 20:
				case 24:
				case 25:
				case 28:
				case 29:
				case 34:
				case 53:
				case 57:
					Global_1879514.f_12 = 1;
					break;
				case 69:
				case 70:
				case 71:
				case 74:
				case 76:
					Global_1879514.f_14 = 1;
					break;
			}
			break;
		case 8:
			switch (func_287(iParam0))
			{
				case 37:
				case 63:
				case 94:
				case 116:
					Global_1879514.f_12 = 1;
					break;
				case 9:
					Global_1879514.f_14 = 1;
					break;
			}
			break;
	}
}

int func_85(char[4] cParam0)
{
	char[] cVar0[8];

	cVar0 = func_110(cParam0->f_607);
	return MISC::GET_HASH_KEY(&cVar0);
}

void func_86()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;

	func_91(4112);
	func_90(6);
	vVar2 = { func_384(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_385(vVar2, uVar1, uVar0, 0);
	func_386(vVar2);
	Global_40.f_9.f_15 = func_387(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_87(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	func_91(32);
	if (iParam0 == 0)
	{
		func_91(16);
	}
	else if (iParam0 == 1)
	{
		func_91(8);
	}
	func_388();
	Global_43889 = 1;
}

void func_88(int iParam0)
{
	Global_1310720.f_9 = iParam0;
}

void func_89()
{
	struct<10> Var0;
	struct<16> Var10;

	Global_1310720.f_8 = 0;
	Global_1935630.f_4 = 1;
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "respawn_persistence", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_389(Var10, 0);
}

void func_90(int iParam0)
{
	Global_1572864.f_21 = iParam0;
	Global_1310720.f_4 = MISC::GET_GAME_TIMER();
}

void func_91(int iParam0)
{
	Global_1572864.f_3 = (Global_1572864.f_3 || iParam0);
}

void func_92(int iParam0)
{
	int iVar0;

	if (!func_206(iParam0))
	{
		return;
	}
	if (iParam0 != func_219(0))
	{
		return;
	}
	if (func_209(iParam0) == 0)
	{
	}
	iVar0 = func_211(iParam0);
	if (func_210(iParam0) == 3)
	{
		if (func_209(iParam0) == 0)
		{
		}
		else if (STATS::STATSTRACKER_IS_INITIALIZED(func_209(iParam0)))
		{
			if (func_211(iParam0) != 1 && func_211(iParam0) != 8)
			{
				func_212(func_211(iParam0), func_209(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_223(iParam0);
	func_40(1);
	func_220(0);
	func_218(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_325(1);
			func_326(15, 0, 1);
			break;
		case 4:
			func_326(10, 0, 1);
			break;
		case 8:
			func_326(10, 0, 1);
			break;
		case 9:
			func_326(10, 0, 1);
			break;
		case 2:
			func_326(10, 0, 1);
			break;
		case 6:
			func_326(10, 0, 1);
			break;
		case 5:
			func_326(10, 0, 1);
			break;
	}
	func_221(1);
}

void func_93()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ITEMSET::IS_ITEMSET_VALID(Local_14))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(Local_14))
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, Local_14);
		iVar2 = MISC::_GET_ENTITY_FROM_ITEM(iVar1);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && ENTITY::_0x88AD6CC10D8D35B2(iVar2)) && !ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(iVar2))
		{
			ENTITY::DELETE_ENTITY(&iVar2);
		}
		iVar0++;
	}
	ITEMSET::DESTROY_ITEMSET(Local_14);
}

struct<2> func_94(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_95(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

struct<8> func_96(char[4] cParam0)
{
	return cParam0->f_10784;
}

void func_97(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_390(Global_1347343.f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_391(&(Global_1347343.f_11), 64);
	}
	if (bParam4)
	{
		func_391(&(Global_1347343.f_11), 16384);
	}
	if (func_392() >= 2)
	{
		if (!func_390(Global_1347343.f_11, 16384))
		{
			func_391(&(Global_1347343.f_11), 8);
		}
		func_227(0.88f);
	}
	StringCopy(&(Global_1347343.f_3), sParam2, 64);
	Global_1347343.f_2 = iParam0;
	Global_1347343 = 0;
	Global_1347343.f_1 = iParam1;
	func_245(&Global_1935630, 2048);
	func_393(bParam5);
}

void func_98(bool bParam0)
{
	if (bParam0)
	{
	}
	MISC::_0x6AC4AF46A6B8DFB2(bParam0);
}

void func_99(char[4] cParam0, int iParam1)
{
	cParam0->f_5307 = (cParam0->f_5307 || iParam1);
}

void func_100(char[4] cParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_43619)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_43619[iVar0 /*12*/]))
		{
			cParam0->f_7375.f_13[iVar0 /*12*/] = { Global_43619[iVar0 /*12*/] };
			func_394(&(cParam0->f_10792), Global_43619[iVar0 /*12*/], &(Global_43619[iVar0 /*12*/].f_1), 0);
		}
		iVar0++;
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800))
	{
		cParam0->f_7375.f_804 = Global_43800;
		ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(cParam0->f_7375.f_804);
	}
	if (func_214(Global_1935630, 524288))
	{
		func_71(&Global_1935630, 524288);
		func_395(cParam0, 67108864);
	}
}

int func_101(char[4] cParam0)
{
	return func_396(&(cParam0->f_7375));
}

bool func_102()
{
	return Global_1572864.f_14;
}

void func_103(char[4] cParam0, int iParam1)
{
	cParam0->f_5308 = (cParam0->f_5308 || iParam1);
}

bool func_104()
{
	return Global_1572864.f_13;
}

bool func_105()
{
	return func_397() != -1;
}

int func_106()
{
	return Global_1572864.f_9;
}

void func_107(char[4] cParam0, int iParam1)
{
	cParam0->f_597 = iParam1;
	BUILTIN::SETTIMERA(0);
}

void func_108(char[4] cParam0, var uParam1)
{
	cParam0->f_607 = -1;
	func_398(cParam0);
	cParam0->f_634[0] = 64403;
	cParam0->f_634[1] = 64403;
	cParam0->f_637 = 0;
	func_400(cParam0, *uParam1);
	func_401(cParam0);
}

void func_109(char[4] cParam0)
{
	func_402(cParam0, 50);
	if (!func_105() && !func_128(cParam0, 2))
	{
		bLocal_617 = false;
	}
	else
	{
		bLocal_617 = true;
	}
}

char[] func_110(int iParam0)
{
	var uVar0;

	if (!func_205(iParam0))
	{
		return uVar0;
	}
	return Global_1835011[iParam0 /*74*/].f_8;
}

void func_111()
{
	struct<2> Var0;

	Var0.f_1 = -1;
	MISC::_COPY_MEMORY(&Global_1879514, &Var0, 20);
}

void func_112(char* sParam0, int iParam1)
{
	StringCopy(&(Global_1879514.f_2), sParam0, 32);
	Global_1879514.f_8 = iParam1;
}

void func_113(int iParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, iParam0, 0);
}

void func_114()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		iVar1 = 0;
		while (iVar1 < 31)
		{
			func_403(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

bool func_115(char[4] cParam0)
{
	switch (cParam0->f_607)
	{
		case 12:
		case 21:
		case 26:
		case 35:
		case 37:
		case 41:
		case 42:
		case 43:
		case 44:
		case 46:
		case 52:
		case 54:
		case 58:
			return false;
	}
	return true;
}

bool func_116(int iParam0)
{
	if (!func_263(iParam0))
	{
		return false;
	}
	return func_267(iParam0, 33554432);
}

void func_117(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (PED::_0x7BE607DAFF382FD2(Global_35, iVar0, iParam1) > 0)
	{
		iVar1 = (ITEMSET::GET_ITEMSET_SIZE(iVar0) - 1);
		while (iVar1 >= 0)
		{
			iVar2 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar0));
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && ENTITY::IS_ENTITY_A_PED(iVar2))
			{
				iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
				if (bParam0)
				{
					if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(PERSCHAR::_0x32A1E3B83D501096(iVar3)))
					{
						PERSCHAR::_0x7B204F88F6C3D287(PERSCHAR::_0x32A1E3B83D501096(iVar3));
					}
					else
					{
						PED::DELETE_PED(&iVar3);
					}
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iVar3, false, false);
					if (bParam2)
					{
						TASK::_0xDF94844D474F31E5(iVar3);
					}
				}
			}
			iVar1 = (iVar1 + -1);
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

void func_118(char[4] cParam0)
{
	if (func_20() == 0)
	{
		return;
	}
	switch (cParam0->f_607)
	{
		case 31:
			MISC::SET_WEATHER_TYPE(GET_HASH_KEY("FOG"), false, true, true, 45f, false);
			break;
	}
}

void func_119(int iParam0, bool bParam1)
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

bool func_120(char[4] cParam0, int iParam1)
{
	return (cParam0->f_5308 && iParam1) != 0;
}

bool func_121(char[4] cParam0, int iParam1, int iParam2)
{
	return func_170(cParam0->f_1[func_132(iParam1) /*22*/].f_11, iParam2);
}

bool func_122(int iParam0)
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

void func_123(char[4] cParam0)
{
	if (func_29())
	{
		func_404(&(cParam0->f_7375));
	}
}

void func_124(char[4] cParam0, int iParam1)
{
	if (!PED::_IS_THIS_MODEL_A_HORSE(iParam1))
	{
		return;
	}
	cParam0->f_8268 = iParam1;
}

int func_125(char[4] cParam0)
{
	return cParam0->f_8268;
}

Vector3 func_126(int iParam0)
{
	return func_405(iParam0);
}

bool func_127(struct<4> Param0)
{
	if (func_82(32768))
	{
		return true;
	}
	return func_406(Param0, Param0.f_3);
}

bool func_128(char[4] cParam0, int iParam1)
{
	return (cParam0->f_608 && iParam1) != 0;
}

bool func_129()
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_407())
	{
		return false;
	}
	if (!func_342(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_342(Global_1835011[2 /*74*/].f_1, 1) && func_342(Global_1347702[120 /*49*/].f_15, 1)) && !func_342(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_342(Global_1835011[37 /*74*/].f_1, 1) && !func_342(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_342(Global_1835011[57 /*74*/].f_1, 1) && !func_342(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_342(Global_1835011[26 /*74*/].f_1, 1) && !func_342(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_342(Global_1835011[62 /*74*/].f_1, 1) && func_342(Global_1835011[63 /*74*/].f_1, 1)) && !func_342(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_342(Global_1835011[75 /*74*/].f_1, 1) && !func_342(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_342(Global_1835011[76 /*74*/].f_1, 1) && !func_342(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_342(Global_1835011[40 /*74*/].f_1, 1) && func_342(Global_1835011[41 /*74*/].f_1, 1)) && !func_342(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_342(Global_1835011[62 /*74*/].f_1, 1) && func_342(Global_1835011[63 /*74*/].f_1, 1)) && !func_342(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_342(Global_1835011[65 /*74*/].f_1, 1) && func_342(Global_1835011[66 /*74*/].f_1, 1)) && !func_342(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

void func_130(char[4] cParam0, vector3 vParam1, float fParam4)
{
	if (func_120(cParam0, 33554432))
	{
		return;
	}
	if (func_120(cParam0, 4096))
	{
		return;
	}
	if (func_408(vParam1))
	{
		return;
	}
	if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1))
	{
		return;
	}
	if (CAM::IS_SCREEN_FADED_IN())
	{
		return;
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
	}
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam1)))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(INTERIOR::GET_INTERIOR_AT_COORDS(vParam1));
		func_103(cParam0, 8);
	}
	func_103(cParam0, 4096);
	PED::INSTANTLY_FILL_PED_POPULATION();
	VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
	PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), vParam1, fParam4, false, true, true, false);
	CAM::DO_SCREEN_FADE_OUT(0);
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(9999999);
	func_236(&(cParam0->f_603));
}

void func_131(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 3490746;
	if (bParam4)
	{
		iVar0 |= 1;
	}
	if (bParam5)
	{
		iVar0 |= 72;
	}
	if (bParam6)
	{
		iVar0 |= 6;
	}
	if (bParam7)
	{
		iVar0 |= 524288;
	}
	if (bParam8)
	{
		iVar0 |= 131072;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_132(int iParam0)
{
	int iVar0;

	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return func_409();
	}
	iVar0 = 0;
	while (iVar0 < 28)
	{
		if (iVar0 == iParam0)
		{
			return iVar0;
		}
		if (iVar0 == 26)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_133(char[4] cParam0)
{
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(2, func_85(cParam0)))
	{
		UILOG::_UILOG_REMOVE_ENTRY(2, func_85(cParam0));
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(1, func_85(cParam0)))
	{
		func_410(cParam0->f_607);
	}
}

void func_134(char[4] cParam0, int iParam1)
{
	cParam0->f_598 = iParam1;
}

void func_135(char[4] cParam0, int iParam1)
{
	cParam0->f_599 = iParam1;
	func_27(&(cParam0->f_600), 1);
}

bool func_136(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1) /*22*/].f_12;
}

void func_137(char[4] cParam0)
{
	func_411(&(cParam0->f_638));
	func_412(&(cParam0->f_819));
	func_413(&(cParam0->f_1020));
	func_414(&(cParam0->f_1081));
	func_415(&(cParam0->f_1126));
	func_416(&(cParam0->f_5147));
	func_417(&(cParam0->f_1124));
	func_418(&(cParam0->f_5188));
	func_419(&(cParam0->f_5239));
	func_420(&(cParam0->f_5249));
	func_421(&(cParam0->f_5265));
	func_422(&(cParam0->f_5286));
}

void func_138(char[4] cParam0)
{
	if (!ITEMSET::IS_ITEMSET_VALID(Local_14))
	{
		Local_14 = ITEMSET::CREATE_ITEMSET(true);
	}
	func_423(cParam0, GET_HASH_KEY("P_STRONGBOX01X"), 112);
	func_423(cParam0, GET_HASH_KEY("P_WHEELBARREL01X"), 112);
	func_423(cParam0, GET_HASH_KEY("P_CIGARETTE01X"), 6);
	func_423(cParam0, GET_HASH_KEY("P_BRICK01X"), 70);
	func_423(cParam0, GET_HASH_KEY("P_STICKFIREPOKER01X"), 70);
	func_423(cParam0, GET_HASH_KEY("CS_SD_STREETKID_02"), 192);
	func_423(cParam0, GET_HASH_KEY("MSP_MOB1_TEENS_01"), 67108863);
	func_423(cParam0, GET_HASH_KEY("CS_SD_STREETKID_01A"), 192);
	func_423(cParam0, GET_HASH_KEY("CS_SD_STREETKID_01B"), 192);
	func_423(cParam0, GET_HASH_KEY("A_M_M_LOWERSDTOWNFOLK_01"), 112);
	func_423(cParam0, GET_HASH_KEY("S_M_M_MARKETVENDOR_01"), 48);
	func_423(cParam0, GET_HASH_KEY("A_M_M_NBXSLUMS_01"), 112);
	func_423(cParam0, GET_HASH_KEY("A_F_M_NBXSLUMS_01"), 48);
	func_423(cParam0, GET_HASH_KEY("A_M_M_LOWERSDTOWNFOLK_02"), 112);
	func_423(cParam0, GET_HASH_KEY("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), 67108863);
	func_423(cParam0, GET_HASH_KEY("COACH3"), 24);
	func_423(cParam0, GET_HASH_KEY("A_M_M_NBXUPPERCLASS_01"), 56);
	func_423(cParam0, GET_HASH_KEY("CART04"), 12);
	func_423(cParam0, GET_HASH_KEY("S_M_M_TRAINSTATIONWORKER_01"), 24);
	func_423(cParam0, GET_HASH_KEY("A_M_M_SDDOCKWORKERS_02"), 24);
	func_423(cParam0, GET_HASH_KEY("A_F_M_LOWERSDTOWNFOLK_03"), 32);
	func_423(cParam0, GET_HASH_KEY("A_M_M_MIDDLESDTOWNFOLK_02"), 96);
	func_423(cParam0, GET_HASH_KEY("A_F_M_MIDDLESDTOWNFOLK_02"), 2);
	func_423(cParam0, GET_HASH_KEY("A_F_M_LOWERSDTOWNFOLK_02"), 2);
	func_423(cParam0, GET_HASH_KEY("MSP_MOB1_MALES_01"), 2);
	func_423(cParam0, GET_HASH_KEY("MSP_MOB1_FEMALES_01"), 2);
	func_423(cParam0, GET_HASH_KEY("A_M_M_SDLABORERS_02"), 56);
	func_423(cParam0, GET_HASH_KEY("A_C_DOGHOBO_01"), 56);
	func_423(cParam0, GET_HASH_KEY("A_M_M_SDSLUMS_02"), 56);
	func_423(cParam0, GET_HASH_KEY("CS_SD_STREETKID_01"), 67108863);
	func_423(cParam0, GET_HASH_KEY("A_M_Y_NBXSTREETKIDS_01"), 67108863);
	func_423(cParam0, GET_HASH_KEY("P_STRONGBOX01X"), 112);
	func_423(cParam0, GET_HASH_KEY("P_WHEELBARREL01X"), 112);
	func_423(cParam0, GET_HASH_KEY("P_CIGARETTE01X"), 70);
	func_423(cParam0, GET_HASH_KEY("P_BRICK01X"), 70);
	func_423(cParam0, GET_HASH_KEY("P_STICKFIREPOKER01X"), 70);
}

int func_139(char[4] cParam0)
{
	int iVar0;

	func_423(cParam0, iLocal_150, 67108863);
	func_423(cParam0, GET_HASH_KEY("P_CS_PLAYERSATCHEL"), 124);
	func_423(cParam0, GET_HASH_KEY("P_KNIFE02X"), 4);
	func_423(cParam0, GET_HASH_KEY("U_M_M_NBXBARTENDER_01"), 3);
	func_423(cParam0, GET_HASH_KEY("U_M_M_NBXMUSICIAN_01"), 3);
	func_423(cParam0, GET_HASH_KEY("A_M_M_SDFANCYTRAVELLERS_01"), 3);
	func_423(cParam0, GET_HASH_KEY("MSP_MOB1_FEMALES_01"), 3);
	func_423(cParam0, GET_HASH_KEY("MSP_MOB1_MALES_01"), 3);
	func_423(cParam0, GET_HASH_KEY("A_M_O_SDUPPERCLASS_01"), 3);
	func_423(cParam0, GET_HASH_KEY("A_F_M_SDFANCYWHORE_01"), 3);
	func_423(cParam0, GET_HASH_KEY("A_F_M_SDSERVERSFORMAL_01"), 3);
	func_423(cParam0, GET_HASH_KEY("A_M_M_NBXUPPERCLASS_01"), 67108863);
	func_423(cParam0, GET_HASH_KEY("CS_SD_STREETKID_01"), 254);
	func_423(cParam0, GET_HASH_KEY("CS_SD_STREETKID_02"), 254);
	func_423(cParam0, GET_HASH_KEY("A_M_Y_SDSTREETKIDS_SLUMS_02"), 254);
	func_423(cParam0, GET_HASH_KEY("A_M_Y_NBXSTREETKIDS_01"), 255);
	func_423(cParam0, GET_HASH_KEY("CS_SDSALOONDRUNK_01"), 3);
	func_423(cParam0, GET_HASH_KEY("P_CS_FAN01X"), 2);
	func_423(cParam0, GET_HASH_KEY("A_C_DOGHOBO_01"), 216);
	func_423(cParam0, GET_HASH_KEY("A_F_M_LOWERSDTOWNFOLK_03"), 64);
	func_423(cParam0, GET_HASH_KEY("A_F_M_LOWERSDTOWNFOLK_01"), 76);
	func_423(cParam0, GET_HASH_KEY("A_M_M_LOWERSDTOWNFOLK_01"), 12);
	func_423(cParam0, GET_HASH_KEY("A_M_M_LOWERSDTOWNFOLK_02"), 76);
	func_423(cParam0, GET_HASH_KEY("A_M_M_MIDDLESDTOWNFOLK_01"), 15);
	func_423(cParam0, GET_HASH_KEY("A_M_M_MIDDLESDTOWNFOLK_02"), 15);
	func_423(cParam0, GET_HASH_KEY("A_M_M_MIDDLESDTOWNFOLK_03"), 15);
	func_423(cParam0, GET_HASH_KEY("BUGGY01"), 12);
	func_423(cParam0, GET_HASH_KEY("COACH2"), 61);
	func_423(cParam0, GET_HASH_KEY("TROLLEY01X"), 249);
	func_423(cParam0, GET_HASH_KEY("A_M_Y_NBXSTREETKIDS_SLUMS_01"), 252);
	func_423(cParam0, GET_HASH_KEY("S_M_M_TRAINSTATIONWORKER_01"), 252);
	func_423(cParam0, GET_HASH_KEY("P_ONIONRED02X"), 64);
	func_423(cParam0, GET_HASH_KEY("P_BARRELAPPLES01X"), 64);
	func_423(cParam0, GET_HASH_KEY("P_BARREL11X"), 64);
	func_423(cParam0, GET_HASH_KEY("P_FLOURSTACK01BX"), 64);
	func_423(cParam0, GET_HASH_KEY("P_BARRELLEMONS01X"), 64);
	func_423(cParam0, GET_HASH_KEY("A_M_O_SDCHINATOWN_01"), 64);
	func_423(cParam0, GET_HASH_KEY("A_F_M_LOWERSDTOWNFOLK_02"), 64);
	func_424(cParam0, "script_story@mob1@leadin@mcs_1", 1);
	func_424(cParam0, "AI_GESTURES@ARTHUR@STANDING@SPEAKER", 2);
	func_424(cParam0, "script_re@duel_winner@taunt", 120);
	func_424(cParam0, "script_story@mob1@ig@ig17_sudden_stop_p1", 64);
	func_424(cParam0, "script_story@mob1@ig@ig4_urchintrolley", 120);
	func_424(cParam0, "script_common@wave@male@unapproved", 248);
	func_426(cParam0, func_425(9), 28, 2, -1);
	func_426(cParam0, func_425(0), 8, 2, -1);
	func_426(cParam0, func_425(1), 8, 2, -1);
	func_426(cParam0, func_425(2), 8, 2, -1);
	func_426(cParam0, func_425(3), 8, 2, -1);
	func_426(cParam0, func_425(8), 8, 2, -1);
	func_426(cParam0, func_425(5), 8, 2, -1);
	func_426(cParam0, func_425(6), 8, 2, -1);
	func_426(cParam0, func_425(4), 8, 2, -1);
	func_426(cParam0, func_425(7), 248, 2, -1);
	func_426(cParam0, func_425(10), 48, 2, -1);
	func_426(cParam0, func_425(11), 112, 2, -1);
	func_426(cParam0, func_425(12), 64, 2, -1);
	func_427(cParam0, "script@story@MOB1@leadout@int@Arthur_look_action", &(uLocal_691[0]), 1, 0, 0, 0, 1);
	func_427(cParam0, "script@story@MOB1@leadout@int@poker_TEMP_loop", &(uLocal_691[1]), 3, 1, 0, 0, 1);
	func_427(cParam0, "script@story@MOB1@leadout@int@tables_TEMP_loop", &(uLocal_691[2]), 3, 1, 0, 0, 1);
	func_427(cParam0, "script@story@MOB1@leadout@int@moving_1", &(uLocal_691[3]), 1, 0, 0, 0, 1);
	func_427(cParam0, "script@story@MOB1@leadout@int@moving_2", &(uLocal_691[4]), 1, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@leadout@int@leadout", &(uLocal_691[9]), 3, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@leadout@int@leadout_table_peds", &(uLocal_691[10]), 3, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@leadout@int@leadout_bar_peds", &(uLocal_691[11]), 3, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@leadin@mcs_1@leadin_ilo_bartender_patron_player", &(uLocal_691[5]), 1, 0, 0, 0, 0);
	func_427(cParam0, "script@story@MOB1@leadin@MCS_1@base_patrons", &(uLocal_691[6]), 3, 1, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@leadin@mcs_1@base_moving1_male", &(uLocal_691[7]), 3, 1, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@leadout@mcs_1@leadout_player_drunk", &(uLocal_691[12]), 2, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@leadout@mcs_1@leadout_player_drunk", &iLocal_738, 2, 0, 0, 0, 1);
	func_427(cParam0, "script@story@MOB1@leadout@MCS_1@base_bar_peds", &(uLocal_691[8]), 2, 1, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@ig@ig24_crowd_point@ig24_crowd_point", &(uLocal_691[13]), 2, 0, 0, 0, 0);
	func_427(cParam0, "script@story@mob1@ig@ig25_crowd_point@ig25_crowd_point", &iLocal_561, 2, 0, 0, 0, 0);
	func_427(cParam0, "script@story@mob1@ig@ig1_pick_pocket_p1@ig1_pick_pocket_p1_kid01", &(uLocal_691[16]), 4, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@ig@ig1_pick_pocket_p1@ig1_pick_pocket_p1_kid01", &(uLocal_715[0]), 4, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@ig@ig1_pick_pocket_p1@ig1_pick_pocket_p1_kid02", &(uLocal_691[17]), 4, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@ig@ig1_pick_pocket_p1@ig1_pick_pocket_p1_player", &(uLocal_691[18]), 4, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@ig@ig1_pick_pocket_p1@ig1_pick_pocket_p1_wagon", &(uLocal_715[1]), 12, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@ig@ig4_urchintrolley@ig4_urchintrolley_run_to_trolley_alt", &(uLocal_715[2]), 8, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@ig@ig4_urchintrolley@ig4_urchintrolley", &(uLocal_715[3]), 8, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@ig@ig5_urchin_trolley@ig5_urchin_trolley", &(uLocal_715[4]), 8, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@ig@ig26_crowd_point@ig26_crowd_point", &(uLocal_691[14]), 24, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@ig@ig26_crowd_point@ig26_crowd_point", &(uLocal_691[15]), 24, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@ig@ig6_urchin_hide_idle@ig6_urchin_hide_idle", &(uLocal_715[5]), 48, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@ig@ig7_sharp_turn_p1@ig7_sharp_turn_p1", &(uLocal_715[6]), 32, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@ig@ig8_group_ask_1_p1@ig8_group_ask_1_p1", &(uLocal_715[7]), 16, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@ig@ig8_group_ask_2_p1@ig8_group_ask_2_p1", &(uLocal_715[8]), 64, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@ig@ig9_corner@ig9_corner", &(uLocal_735[1]), 32, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@ig@ig9_corner@ig9_corner", &(uLocal_735[0]), 64, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@ig@ig10_angry_driver_p1@ig10_angry_driver_p1", &(uLocal_715[9]), 32, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@ig@ig27_crowd_avoid@ig27_crowd_avoid", &(uLocal_715[18]), 32, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@ig@ig11_knock_over_2@ig11_knock_over_2", &(uLocal_715[10]), 64, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@ig@IG12_GATE_LOCK_P1@IG12_GATE_LOCK_P1", &(uLocal_715[11]), 32, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@ig@ig13_higher_taunt_p1@ig13_higher_taunt_p1", &(uLocal_715[12]), 32, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@ig@ig14_rooftop_run_p1@ig14_rooftop_run_p1", &(uLocal_715[13]), 32, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@ig@ig15_transition_to_ground_p1@ig15_transition_to_ground_p1", &(uLocal_715[14]), 32, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@ig@ig16_corner_taunt_p1@ig16_corner_taunt_p1", &(uLocal_691[19]), 32, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@ig@ig17_sudden_stop_p1@ig17_sudden_stop_p1", &(uLocal_691[20]), 64, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@ig@ig19_out_of_hiding_p1@ig19_out_of_hiding_p1", &(uLocal_715[15]), 64, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@ig@ig20_arthur_fall_p1@ig20_arthur_fall_p1", &(uLocal_691[21]), 64, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@ig@ig21_kid_vault_p1@ig21_kid_vault_p1", &(uLocal_691[22]), 64, 0, 0, 0, 1);
	func_427(cParam0, "script@story@mob1@ig@ig22_arthur_charge@ig22_arthur_charge", &(uLocal_715[16]), 64, 0, 0, 0, 0);
	func_427(cParam0, "script@story@mob1@leadin@mcs3a@thief", &(uLocal_715[17]), 192, 0, 0, 0, 1);
	func_427(cParam0, "script@timelapse@mob1_timelapse", &iLocal_739, 524288, 0, 0, 0, 0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		iVar0++;
	}
	func_428(cParam0, uLocal_691[9], "pbl_Leadout", 3);
	func_428(cParam0, uLocal_691[10], "pbl_Leadout_Tables", 3);
	func_428(cParam0, uLocal_691[11], "pbl_Leadout_Bar", 3);
	func_428(cParam0, uLocal_691[12], "pl_leadout", 2);
	func_428(cParam0, uLocal_691[12], "pl_leadout_wnt_start", 2);
	func_428(cParam0, iLocal_738, "pl_leadout_wnt_end", 2);
	func_428(cParam0, uLocal_691[16], "pbl_PICK_POCKET_part1_kid01", 4);
	func_428(cParam0, uLocal_715[0], "pbl_PICK_POCKET_enter_idle", 4);
	func_428(cParam0, uLocal_715[0], "pbl_PICK_POCKET_part2_kid01", 4);
	func_428(cParam0, uLocal_691[17], "pbl_PICK_POCKET_part1_kid02", 4);
	func_428(cParam0, uLocal_691[17], "pbl_PICK_POCKET_kid02_idle_loop", 4);
	func_428(cParam0, uLocal_691[17], "pbl_PICK_POCKET_part2_kid02", 4);
	func_428(cParam0, uLocal_691[18], "pbl_PICK_POCKET_part2_player", 4);
	func_428(cParam0, uLocal_715[1], "pbl_Jump_up_wagon_alt_straight_r", 12);
	func_428(cParam0, uLocal_715[1], "pbl_Wagon_Kid02_idle_1", 12);
	func_428(cParam0, uLocal_715[1], "pbl_Exit_wagon_to_run", 12);
	func_428(cParam0, uLocal_715[2], "pbl_run_to_trolley_alt", 8);
	func_428(cParam0, uLocal_715[3], "pbl_jump_trolley_alt", 8);
	func_428(cParam0, uLocal_715[3], "pbl_Taunt_01", 8);
	func_428(cParam0, uLocal_715[3], "pbl_Taunt_02", 8);
	func_428(cParam0, uLocal_715[3], "pbl_Taunt_03", 8);
	func_428(cParam0, uLocal_715[3], "pbl_Taunt_04", 8);
	func_428(cParam0, uLocal_715[3], "pbl_Looking_back", 8);
	func_428(cParam0, uLocal_715[3], "pbl_Looking_inside", 8);
	func_428(cParam0, uLocal_715[3], "pbl_Looking_side", 8);
	func_428(cParam0, uLocal_715[4], "pbl_Jump_off_trolley_to_run", 8);
	func_428(cParam0, uLocal_691[14], "pbl_Pushed", 24);
	func_428(cParam0, uLocal_691[15], "pbl_Point_Direction_01", 24);
	func_428(cParam0, uLocal_691[15], "pbl_Point_Direction_02", 24);
	func_428(cParam0, uLocal_691[15], "pbl_Point_Direction_03", 24);
	func_428(cParam0, uLocal_715[5], "pbl_Idle_loop_01", 48);
	func_428(cParam0, uLocal_715[5], "pbl_Idle_loop_02", 48);
	func_428(cParam0, uLocal_715[5], "pbl_peak_corner_01", 48);
	func_428(cParam0, uLocal_715[5], "pbl_peak_corner_02", 48);
	func_428(cParam0, uLocal_715[5], "pbl_exit_to_run", 48);
	func_428(cParam0, uLocal_715[6], "pbl_run_turn_right_split", 32);
	func_428(cParam0, uLocal_715[7], "pbl_Behind", 16);
	func_428(cParam0, uLocal_715[7], "pbl_Front", 16);
	func_428(cParam0, uLocal_715[7], "pbl_Left", 16);
	func_428(cParam0, uLocal_715[8], "PBL_ACTION_01", 64);
	func_428(cParam0, uLocal_715[8], "pbl_Action_02", 64);
	func_428(cParam0, uLocal_715[8], "pbl_Action_03", 64);
	func_428(cParam0, uLocal_735[1], "PBL_BASE", 32);
	func_428(cParam0, uLocal_735[1], "pbl_Corner_exit_2", 32);
	func_428(cParam0, uLocal_735[0], "PBL_BASE", 64);
	func_428(cParam0, uLocal_735[0], "pbl_Corner_exit", 64);
	func_428(cParam0, uLocal_735[0], "pbl_Corner_loop", 64);
	func_428(cParam0, uLocal_735[0], "pbl_Corner_taunt", 64);
	func_428(cParam0, uLocal_715[9], "pbl_Hey_Moron", 32);
	func_428(cParam0, uLocal_715[18], "pbl_ACTION_left", 32);
	func_428(cParam0, uLocal_715[10], "pbl_couple_loop", 64);
	func_428(cParam0, uLocal_715[10], "pbl_couple_player_reaction", 64);
	func_428(cParam0, uLocal_715[10], "pbl_knock", 64);
	func_428(cParam0, uLocal_715[11], "pbl_directly_behind_v1", 32);
	func_428(cParam0, uLocal_715[11], "pbl_directly_behind_v2", 32);
	func_428(cParam0, uLocal_715[11], "pbl_enter_loop", 32);
	func_428(cParam0, uLocal_715[11], "pbl_laugh", 32);
	func_428(cParam0, uLocal_715[11], "pbl_exit_gate_lock", 32);
	func_428(cParam0, uLocal_715[11], "pbl_loop_01", 32);
	func_428(cParam0, uLocal_715[12], "pbl_Run_to_idle", 32);
	func_428(cParam0, uLocal_715[12], "pbl_Looking_around", 32);
	func_428(cParam0, uLocal_715[12], "pbl_Taunt_get_lost", 32);
	func_428(cParam0, uLocal_715[12], "pbl_Taunt_gesture_01", 32);
	func_428(cParam0, uLocal_715[12], "pbl_Taunt_gesture_02", 32);
	func_428(cParam0, uLocal_715[13], "pbl_ACTION_A", 32);
	func_428(cParam0, uLocal_715[13], "pbl_Action_A_Alt", 32);
	func_428(cParam0, uLocal_715[13], "pbl_ACTION_B", 32);
	func_428(cParam0, uLocal_715[13], "pbl_ACTION_C", 32);
	func_428(cParam0, uLocal_715[13], "pbl_ENTER_TAUNT", 32);
	func_428(cParam0, uLocal_715[13], "pbl_EXIT_TAUNT", 32);
	func_428(cParam0, uLocal_715[13], "pbl_TAUNT_ROOF", 32);
	func_428(cParam0, uLocal_715[13], "pbl_TAUNT_GROUND", 32);
	func_428(cParam0, uLocal_715[14], "pbl_Jump_roof_to_wall", 32);
	func_428(cParam0, uLocal_715[14], "pbl_Jump_wall_to_ground", 32);
	func_428(cParam0, uLocal_691[19], "pbl_corner_right_cover", 32);
	func_428(cParam0, uLocal_691[19], "pbl_Corner_right_taunt_01", 32);
	func_428(cParam0, uLocal_691[19], "pbl_Corner_right_flee", 32);
	func_428(cParam0, uLocal_691[20], "pbl_Running_enter", 64);
	func_428(cParam0, uLocal_691[20], "pbl_Walking_enter", 64);
	func_428(cParam0, uLocal_715[15], "pbl_Idle_loop", 64);
	func_428(cParam0, uLocal_715[15], "pbl_Knock_barrels_01", 64);
	func_428(cParam0, uLocal_715[15], "pbl_Knock_barrels_02", 64);
	func_428(cParam0, uLocal_691[21], "pbl_running_slipping_left", 64);
	func_428(cParam0, uLocal_691[21], "pbl_running_slipping_right", 64);
	func_428(cParam0, uLocal_691[21], "pbl_slip_standing_01", 64);
	func_428(cParam0, uLocal_691[21], "pbl_slip_standing_02", 64);
	func_428(cParam0, uLocal_691[21], "pbl_walking_slipping_left", 64);
	func_428(cParam0, uLocal_691[21], "pbl_walking_slipping_right", 64);
	func_428(cParam0, uLocal_691[22], "pbl_KID_VAULT_P1", 64);
	func_428(cParam0, uLocal_715[17], "pl_thief_enter", 192);
	func_429(cParam0);
	return 1;
}

void func_140(char[4] cParam0, int iParam1, int iParam2)
{
	func_430(&(cParam0->f_1[func_132(iParam1) /*22*/].f_11), iParam2);
}

void func_141(char[4] cParam0)
{
	func_103(cParam0, 1);
	if ((func_33(cParam0) != iLocal_155 && func_33(cParam0) != iLocal_162) && func_33(cParam0) != 25)
	{
		func_103(cParam0, 2);
	}
	if (func_33(cParam0) == iLocal_158)
	{
		func_103(cParam0, 33554432);
		func_431(Global_35, func_239(3, 6), 2, 1073741824 /* Float: 2f */);
	}
}

void func_142(char[4] cParam0, int iParam1)
{
	func_432(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1);
}

void func_143(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_284(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		HUD::TEXT_BLOCK_REQUEST(&Var0);
	}
}

void func_144(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_285(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		HUD::TEXT_BLOCK_REQUEST(&Var0);
	}
}

void func_145(char[4] cParam0, int iParam1, char* sParam2, bool bParam3)
{
	func_433(&(cParam0->f_5310), iParam1, sParam2, bParam3);
}

void func_146(char[4] cParam0)
{
	if (!func_271(cParam0->f_5421))
	{
		cParam0->f_5421 = { func_434() };
	}
}

void func_147(char[4] cParam0)
{
	if (!func_20() == 0 || NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_27(&(cParam0->f_603), 1);
	}
}

void func_148(char[4] cParam0)
{
	cParam0->f_607 = cParam0->f_607;
	func_436(cParam0, 67886);
}

void func_149(char[4] cParam0, float fParam1)
{
	func_437(&(cParam0->f_7375), fParam1);
}

void func_150(char[4] cParam0, float fParam1)
{
	func_438(&(cParam0->f_7375), fParam1);
}

void func_151(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_439(cParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
	func_394(&(cParam0->f_10792), iParam1, sParam2, bParam6);
}

void func_152()
{
	LAW::_0x15ABD5004CAD2D99(0);
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), GET_HASH_KEY("CRIME_UNARMED_ASSAULT"), 3, 3, 1);
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), GET_HASH_KEY("CRIME_TRAMPLE"), 4, 0, -1);
}

void func_153(bool bParam0, bool bParam1)
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

int func_154(char[4] cParam0)
{
	return *cParam0;
}

Vector3 func_155(int iParam0)
{
	vector3 vVar0;

	if (!func_205(iParam0))
	{
		return vVar0;
	}
	return Global_1835011[iParam0 /*74*/].f_9;
}

void func_156(char[4] cParam0, bool bParam1)
{
	bool bVar0;

	if (!func_121(cParam0, func_33(cParam0), 134217728))
	{
		func_139(cParam0);
		func_140(cParam0, func_33(cParam0), 134217728);
	}
	if (bParam1 && !func_121(cParam0, func_35(cParam0), 536870912))
	{
		if (func_440(cParam0, func_35(cParam0), 0))
		{
			func_140(cParam0, func_35(cParam0), 536870912);
		}
	}
	if (func_8(cParam0, 8192))
	{
		if (!func_8(cParam0, 536870912))
		{
			if (func_441(&(cParam0->f_1126), func_33(cParam0)))
			{
				func_99(cParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (func_440(cParam0, func_33(cParam0), 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_99(cParam0, 8192);
	}
}

int func_157(char[4] cParam0)
{
	return 1;
}

bool func_158(char[4] cParam0)
{
	if (func_442(cParam0) < 1)
	{
		func_443(cParam0, func_128(cParam0, 3), !func_8(cParam0, 2097152), cParam0->f_5410, !func_8(cParam0, 32), 0);
		func_444(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1);
	}
	if ((!func_120(cParam0, 4) && !func_105()) && !func_128(cParam0, 3))
	{
		if (!func_120(cParam0, 32))
		{
			if (func_20() == 0)
			{
				func_103(cParam0, 32);
			}
			else
			{
				func_445(cParam0);
			}
		}
		if (func_120(cParam0, 32))
		{
			func_446(cParam0);
		}
	}
	switch (func_442(cParam0))
	{
		case -1:
		case 0:
			func_447(cParam0, 1);
			break;
		case 1:
			if (func_448(cParam0))
			{
				if (func_120(cParam0, 4096))
				{
					func_447(cParam0, 2);
				}
				else
				{
					func_447(cParam0, 3);
				}
			}
			break;
		case 2:
			if (func_449(cParam0))
			{
				func_447(cParam0, 3);
			}
			break;
		case 3:
			if (func_450(cParam0))
			{
				func_447(cParam0, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

int func_159(char[4] cParam0)
{
	return cParam0->f_5408;
}

void func_160(char[4] cParam0, int iParam1)
{
	*cParam0 = iParam1;
}

bool func_161(char[4] cParam0)
{
	int iVar0;

	if (func_33(cParam0) == 26)
	{
		func_451(cParam0, 0);
		return true;
	}
	if (func_452(cParam0))
	{
		iVar0 = func_33(cParam0);
		func_107(cParam0, func_35(cParam0));
		if (func_33(cParam0) == 26)
		{
			func_451(cParam0, 0);
			return true;
		}
		else if (func_121(cParam0, iVar0, 128))
		{
			func_452(cParam0);
		}
	}
	return false;
}

int func_162(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1) /*22*/].f_10;
}

void func_163(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_453(iParam0))
		{
			func_454(iParam0, 67108864);
		}
	}
	else if (func_453(iParam0))
	{
		func_455(iParam0, 67108864);
	}
}

void func_164(int iParam0)
{
	func_455(iParam0, 134217728);
}

bool func_165()
{
	return Global_1357516;
}

void func_166()
{
	Global_1357516 = 1;
}

int func_167(bool bParam0)
{
	if (func_20() == -1)
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

void func_168(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		func_169(iParam0[iVar0], uParam1[iVar0]);
		iVar0++;
	}
}

void func_169(int iParam0, var uParam1)
{
	if (ENTITY::IS_MAP_ENTITY_PINNED(*uParam1))
	{
		ENTITY::_UNPIN_MAP_ENTITY(*uParam1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		OBJECT::_MARK_OBJECT_FOR_DELETION(*iParam0);
	}
}

bool func_170(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_171()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1934765.f_275[iVar0 /*2*/] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			Global_1934765.f_286 = (Global_1934765.f_286 + Global_1934765.f_275[iVar0 /*2*/].f_1);
			Global_1934765.f_275[iVar0 /*2*/] = 0;
			Global_1934765.f_275[iVar0 /*2*/].f_1 = 0;
			func_456();
			return;
		}
		iVar0++;
	}
}

void func_172()
{
	LAW::_0x15ABD5004CAD2D99(-1);
}

void func_173(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_457(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_20() != -1)
	{
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;
	}
	Global_17504.f_42[iParam0 /*8*/].f_4 = (Global_17504.f_42[iParam0 /*8*/].f_4 + iVar0);
}

bool func_174(int iParam0)
{
	return func_170(iLocal_555, iParam0);
}

void func_175(int iParam0, int iParam1, bool bParam2)
{
	func_458(iParam0, iParam1, bParam2, 1);
}

void func_176(bool bParam0)
{
	if (bParam0)
	{
		iLocal_554 = func_459(1);
		if (iLocal_554 != 0)
		{
			func_461(func_460(27), iLocal_554);
			func_462(iLocal_554, 0, 0, 1, 1);
		}
		else if (func_376(func_460(27)) != 0)
		{
			iLocal_554 = func_376(func_460(27));
		}
	}
	else if (iLocal_554 != 0)
	{
		func_298(iLocal_554, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	}
	else if (func_376(func_460(27)) != 0)
	{
		func_298(func_376(func_460(27)), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	}
}

void func_177(int* iParam0, var uParam1)
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
	func_463(iParam0, uParam1, 1);
	func_464(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

void func_178(bool bParam0)
{
	if (bParam0)
	{
		func_465(81);
	}
	else
	{
		func_257(81);
	}
}

void func_179()
{
	struct<4> Var0;

	func_191(&uLocal_353, iLocal_400, 0);
	if (func_466(iLocal_400, &Var0))
	{
		PED::CLEAR_PED_NON_CREATION_AREA();
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var0, Var0.f_3, 1, 1);
	}
}

bool func_180()
{
	return func_467(1);
}

bool func_181(int iParam0, int iParam1)
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
	if (func_170(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_170(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_170(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_170(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_170(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_170(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_170(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_170(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_182()
{
	if (IK::_0x6098139150DCC745(Global_35, 6))
	{
		IK::_0x0EABF182FBB63D72(Global_35, 6, 0);
	}
}

void func_183(bool bParam0)
{
	if (!bParam0)
	{
		func_468(GET_HASH_KEY("SDN_FRENCH_PROSTITUTE_1"));
		func_468(GET_HASH_KEY("SDN_FRENCH_SALOON_1"));
		func_468(GET_HASH_KEY("SDN_FRENCH_SALOON_2"));
		func_468(GET_HASH_KEY("SDN_FRENCH_SALOON_3"));
		func_468(GET_HASH_KEY("SDN_ARTIST"));
	}
	else
	{
		func_468(GET_HASH_KEY("SDN_FRENCH_PROSTITUTE_1"));
		func_468(GET_HASH_KEY("SDN_FRENCH_SALOON_1"));
		func_468(GET_HASH_KEY("SDN_FRENCH_SALOON_2"));
		func_468(GET_HASH_KEY("SDN_FRENCH_SALOON_3"));
		func_468(GET_HASH_KEY("SDN_ARTIST"));
	}
}

void func_184(char[4] cParam0)
{
	cParam0->f_607 = cParam0->f_607;
	func_469(iLocal_370);
	func_469(iLocal_371);
	func_469(iLocal_372);
	func_469(iLocal_373);
	func_469(iLocal_379);
	func_469(iLocal_388);
	func_469(iLocal_390);
	func_469(iLocal_391);
	func_469(iLocal_396);
}

void func_185()
{
	func_470(&iLocal_287);
	func_470(&iLocal_288);
}

void func_186(char[4] cParam0)
{
	if (func_22(cParam0) == 0)
	{
		func_471(&iLocal_341, 1);
	}
	else
	{
		func_471(&iLocal_341, 0);
	}
}

void func_187(char[4] cParam0)
{
	if (func_22(cParam0) == 0)
	{
		func_472();
	}
	else
	{
		func_473(cParam0, 0, 0, 0);
		func_472();
	}
	func_474(&uLocal_295, 0);
	func_475(&iLocal_308, 0);
	func_474(&uLocal_298, 0);
	func_475(&iLocal_309, 0);
}

void func_188()
{
	func_476(&uLocal_744);
	func_476(&uLocal_747);
	func_476(&uLocal_768);
	func_477(&vLocal_750);
	func_477(&vLocal_761);
	func_477(&uLocal_754);
}

void func_189(bool bParam0)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { 2710.08f, -1209.18f, 50.7f };
	fVar3 = 10f;
	if (bParam0)
	{
		func_478(vVar0, fVar3, 0, 0, 5);
	}
	else
	{
		func_479(vVar0, fVar3, 5);
	}
}

void func_190(bool bParam0)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { 2808.297f, -1197.396f, 44.93094f };
	fVar3 = 27.5f;
	if (bParam0)
	{
		func_478(vVar0, fVar3, 0, 0, 5);
	}
	else
	{
		func_479(vVar0, fVar3, 5);
	}
}

void func_191(var uParam0, int iParam1, bool bParam2)
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

void func_192(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, bool bParam8)
{
	vector3 vVar0;
	vector3 vVar3;

	PED::CLEAR_PED_NON_CREATION_AREA();
	vVar0 = { func_480(vParam1, vParam4, fParam7) };
	vVar3 = { func_481(vParam1, vParam4, fParam7) };
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(vVar0, vVar3, 0);
	if (PED::_0x91A5F9CBEBB9D936(*uParam0))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, bParam8);
	}
}

void func_193()
{
	if (func_174(128))
	{
		if (INTERIOR::IS_INTERIOR_READY(iLocal_517))
		{
			if (INTERIOR::_IS_INTERIOR_ENTITY_SET_VALID(iLocal_517, "new_saloon01_int_drinks"))
			{
				if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_517, "new_saloon01_int_drinks"))
				{
				}
				else
				{
					INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_517, "new_saloon01_int_drinks", 0);
				}
			}
			INTERIOR::UNPIN_INTERIOR(iLocal_517);
			func_482(128);
		}
	}
}

void func_194(int iParam0, int iParam1)
{
	func_483(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

void func_195(int iParam0)
{
	if (func_484(iParam0) && func_485())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

void func_196()
{
	if (func_174(16777216))
	{
		STREAMING::_0x4EDDD9E9CA5AF985(GET_HASH_KEY("PROP_HUMAN_PIANO"));
	}
}

void func_197(char[4] cParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_486(iParam1))
	{
		return;
	}
	if (!func_274(iParam1))
	{
		return;
	}
	if (bParam5 && !bParam6)
	{
		if (func_22(cParam0) != 0 && func_154(cParam0) >= 2)
		{
			bParam5 = false;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		func_487(cParam0, iParam2);
		func_488(iParam2);
	}
	func_489(iParam1);
	func_490(iParam1, 0);
	func_491(iParam1, 0, bParam4, bParam5, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

void func_198(int iParam0)
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		STREAMING::REMOVE_IPL_HASH(iParam0);
	}
}

int func_199(int iParam0)
{
	if (!func_492(iParam0))
	{
		return 0;
	}
	if (!func_494(func_493(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_495(iParam0)))
	{
		return 0;
	}
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_495(iParam0));
	return 1;
}

int func_200(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = iParam0;
	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = 0;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2971f, -1324.285f, 46.89f };
			uParam1->f_8 = 0.29f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 1:
			uParam1->f_1 = 0;
			uParam1->f_2 = 105;
			uParam1->f_3 = 0;
			uParam1->f_4 = 400f;
			uParam1->f_5 = { 1339.562f, -1372.173f, 83.2967f };
			uParam1->f_8 = 80f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 2:
			uParam1->f_1 = 0;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = 300f;
			uParam1->f_5 = { 2938.582f, 520.6577f, 44.3412f };
			uParam1->f_8 = 126.9f;
			uParam1->f_9 = 2f;
			return 1;
		case 3:
			uParam1->f_1 = 5;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			if (Global_1899848.f_3 < 0 || Global_1899848.f_3 >= 6)
			{
				Global_1899848.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			}
			if (Global_1899848.f_3 == 0 || Global_1899848.f_3 == 1)
			{
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			}
			else if (Global_1899848.f_3 == 2 || Global_1899848.f_3 == 3)
			{
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			}
			else
			{
				uParam1->f_5 = { -1603.35f, -1409f, 80.92f };
			}
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
		case 4:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 5;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -63.25864f, -404.9262f, 69.9287f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 1f;
				return 1;
			}
			return 0;
		case 5:
			uParam1->f_1 = 5;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2552.997f, 397.415f, 147.1629f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
		case 6:
			uParam1->f_1 = 1;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -936.9756f, -1390.084f, 49.5777f };
			uParam1->f_8 = -174.39f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 7:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 8:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 665.5017f, -1243.862f, 43.1442f };
				uParam1->f_8 = 134.74f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 9:
			uParam1->f_1 = 1;
			uParam1->f_2 = 69;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { 1522.005f, 431.2095f, 89.679f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 10:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -118.0872f, -27.6725f, 94.805f };
				uParam1->f_8 = -103.99f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 11:
			uParam1->f_1 = 1;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 150f;
			uParam1->f_5 = { 2515.659f, -1245.743f, 49.5757f };
			uParam1->f_8 = -45f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 12:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 1881.669f, -1874.046f, 41.7769f };
				uParam1->f_8 = 77.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 13:
			uParam1->f_1 = 6;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2594.942f, 410.063f, 148.7582f };
			uParam1->f_8 = 88.6423f;
			uParam1->f_9 = 2f;
			return 1;
		case 14:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 15:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { 665.5322f, -1243.902f, 43.94809f };
				uParam1->f_8 = 225.55f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 16:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { -118.119f, -27.6134f, 95.57291f };
				uParam1->f_8 = 166.84f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 17:
			uParam1->f_1 = 3;
			uParam1->f_2 = 26;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { -1826.215f, -433.9676f, 159.7386f };
			uParam1->f_8 = 157.4f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 18:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { 1881.669f, -1874.046f, 42.58081f };
				uParam1->f_8 = 167.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 19:
			uParam1->f_1 = 3;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { -243.7256f, 771.2707f, 117.8849f };
			uParam1->f_8 = -69.92f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 20:
			uParam1->f_1 = 3;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { 2946.444f, 500.1154f, 45.53999f };
			uParam1->f_8 = -84.13f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 21:
			uParam1->f_1 = 4;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -1603.485f, -1414.838f, 81.1f };
			uParam1->f_8 = -14.4f;
			uParam1->f_9 = 1.5f;
			return 1;
		case 22:
			uParam1->f_1 = 4;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2514.944f, 432.25f, 147f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1.5f;
			return 1;
		case 23:
			uParam1->f_1 = 2;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2148f, -1316.547f, 42.6787f };
			uParam1->f_8 = 60f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 24:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 100f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 25:
			return 0;
		case 26:
			uParam1->f_1 = 2;
			uParam1->f_2 = 71;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { -138.7686f, -27.4923f, 95.0878f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 27:
			uParam1->f_1 = 2;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { 2630.74f, -1226.25f, 52.3794f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 28:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = 8;
				uParam1->f_3 = 0;
				uParam1->f_4 = 1000f;
				uParam1->f_5 = { 3288.448f, -1318.004f, 41.7734f };
				uParam1->f_8 = 60f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 29:
			return 0;
		case 30:
			uParam1->f_1 = 2;
			uParam1->f_2 = 75;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -327.6681f, -357.796f, 87.055f };
			uParam1->f_8 = -63f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 31:
			uParam1->f_1 = 2;
			uParam1->f_2 = 115;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -5510.395f, -2913.764f, 0.6353f };
			uParam1->f_8 = 90f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 32:
			uParam1->f_1 = 2;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -304.5352f, 801.1352f, 117.9785f };
			uParam1->f_8 = 135f;
			uParam1->f_9 = 2.5f;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_201(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (func_20() != -1)
	{
		return -1;
	}
	if (Global_1899528.f_211)
	{
		return -1;
	}
	iVar2 = -1;
	if (uParam0->f_2 == -1)
	{
		return -1;
	}
	if (uParam0->f_2 != func_77())
	{
		return -1;
	}
	if (!func_496(uParam0->f_1))
	{
		return -1;
	}
	if (func_116(uParam0->f_2))
	{
		return -1;
	}
	iVar2 = func_497(*uParam0);
	if (iVar2 == -1)
	{
		if (!func_498(&iVar2))
		{
			return -1;
		}
	}
	func_499(*uParam0, iVar2);
	bVar1 = func_500(uParam0->f_1, 131072);
	func_501(uParam0->f_1);
	iVar3 = func_502(uParam0->f_1, *uParam0);
	Global_1392915[iVar2 /*12*/] = *uParam0;
	Global_1392915[iVar2 /*12*/].f_1 = uParam0->f_1;
	Global_1392915[iVar2 /*12*/].f_2 = uParam0->f_2;
	Global_1392915[iVar2 /*12*/].f_3 = uParam0->f_3;
	Global_1392915[iVar2 /*12*/].f_4 = iVar3;
	Global_1392915[iVar2 /*12*/].f_5 = uParam0->f_9;
	Global_1392915[iVar2 /*12*/].f_6 = { uParam0->f_5 };
	Global_1392915[iVar2 /*12*/].f_9 = uParam0->f_8;
	Global_1392915[iVar2 /*12*/].f_10 = BUILTIN::FLOOR(uParam0->f_4);
	Global_1392915[iVar2 /*12*/].f_11 = iVar2;
	Global_1392915.f_121[iVar2 /*20*/] = 0;
	Global_1392915.f_121[iVar2 /*20*/].f_2 = bParam1;
	Global_1392915.f_121[iVar2 /*20*/].f_17 = iParam2;
	Global_1392915.f_121[iVar2 /*20*/].f_1 = 0;
	Global_1392915.f_121[iVar2 /*20*/].f_6 = 0;
	Global_1392915.f_121[iVar2 /*20*/].f_12 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_5);
	Global_1392915.f_121[iVar2 /*20*/].f_16 = 0;
	if (Global_1392915.f_121[iVar2 /*20*/].f_12 != 0)
	{
		Global_1392915.f_121[iVar2 /*20*/].f_9 = { INTERIOR::_GET_INTERIOR_POSITION(Global_1392915.f_121[iVar2 /*20*/].f_12) };
	}
	else
	{
		Global_1392915.f_121[iVar2 /*20*/].f_9 = { 0f, 0f, 0f };
	}
	if (bParam1)
	{
		func_503(uParam0->f_1, 65536);
		if ((uParam0->f_1 == 1 || uParam0->f_1 == 2) || uParam0->f_1 == 0)
		{
			func_503(uParam0->f_1, 2097152);
		}
	}
	if (bVar1)
	{
		func_503(uParam0->f_1, 131072);
	}
	if (func_504(iVar3) || (!func_208(iVar3) && func_219(0) != iVar3))
	{
		iVar0 = func_505(iVar3);
		if (iVar0 == -1)
		{
			func_506(iVar3);
		}
	}
	return iVar2;
}

void func_202(int iParam0, bool bParam1)
{
	if (!func_507(iParam0))
	{
		return;
	}
	func_508(Global_1914319.f_3[iParam0 /*446*/].f_10, bParam1);
}

int func_203(int iParam0)
{
	return iParam0;
}

void func_204(int iParam0)
{
	if (!func_509(iParam0))
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

bool func_205(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_206(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_207(int iParam0)
{
	int iVar0;

	iVar0 = func_311(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_208(int iParam0)
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
		iVar0 = func_210(iParam0);
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

int func_209(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_498[iParam0 /*2*/].f_1;
}

int func_210(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_510(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

int func_211(int iParam0)
{
	if (!func_206(iParam0))
	{
		return 0;
	}
	return func_512(func_511(iParam0));
}

void func_212(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_20() == 0)
	{
		vVar0.x = Global_265238.f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

bool func_213(int iParam0, bool bParam1, bool bParam2)
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
		if (func_513())
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
		iVar0 = func_287(Global_1898164.f_1[0 /*5*/]);
		if (func_288(iVar0) && func_316(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_206(Global_1898164.f_1[0 /*5*/]))
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

bool func_214(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_215(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_211(iParam0))
	{
		case 1:
			iVar0 = func_287(iParam0);
			return func_514(iVar0);
		case 8:
			iVar1 = func_287(iParam0);
			if (func_316(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				return func_515(iVar1);
			}
			break;
	}
	return -1;
}

void func_216(bool bParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_20() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13) && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_516(iVar0, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = iVar0;
		Global_1898077.f_8 = func_517();
		Global_1898077.f_9 = func_518(Global_1894899.f_2);
		func_519(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	Global_1898077.f_2 = 0;
}

int func_217()
{
	if (!func_342(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_342(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_342(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_342(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_342(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_342(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_342(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_218(int iParam0, int iParam1)
{
	if (!func_206(iParam0))
	{
		return;
	}
	func_520(iParam0, iParam1);
}

int func_219(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_220(bool bParam0)
{
	if (!bParam0 && func_521(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(GET_HASH_KEY("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_221(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_222(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (func_219(0) != iParam0)
	{
		return;
	}
	if (func_522(iParam0))
	{
		if (bParam1)
		{
			func_523(-525676072);
		}
		else
		{
			func_524(-525676072);
		}
	}
}

int func_223(int iParam0)
{
	return func_526(func_525(iParam0));
}

void func_224(int iParam0)
{
	Global_1572864.f_12 = iParam0;
}

void func_225(int iParam0)
{
	Global_1572864.f_11 = iParam0;
}

void func_226(int iParam0)
{
	Global_1572864.f_15 = iParam0;
}

void func_227(float fParam0)
{
	Global_1572864.f_22 = fParam0;
}

void func_228()
{
	if (func_10(Global_43801))
	{
		func_11(&Global_43801, 0, 0);
	}
}

bool func_229()
{
	return func_527(UIFEED::UI_FEED_GET_CURRENT_MESSAGE(3));
}

bool func_230()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

int func_231(int iParam0)
{
	iParam0 = func_281(iParam0);
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

int func_232(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_528(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_3 == iParam1)
		{
			func_529(iParam0, &(Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/]));
		}
		iVar0++;
	}
	return 1;
}

bool func_233(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

bool func_234(char* sParam0, bool bParam1)
{
	if (func_233(sParam0, 1))
	{
		return false;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		AUDIO::PREPARE_MUSIC_EVENT(sParam0);
		func_530(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_530(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_530(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_530(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_530(sParam0, 1);
			return false;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
		func_530(sParam0, 1);
		return true;
	}
	func_530(sParam0, 1);
	return false;
}

bool func_235(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_236(float fParam0)
{
	func_531(fParam0, 0f);
}

int func_237(float fParam0)
{
	if (!func_26(fParam0))
	{
		return BUILTIN::ROUND((fParam0->f_1 * 1000f));
	}
	if (func_532(fParam0))
	{
		return BUILTIN::ROUND((fParam0->f_2 * 1000f));
	}
	return (func_533() - BUILTIN::ROUND((fParam0->f_1 * 1000f)));
}

void func_238(bool bParam0, bool bParam1)
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
		func_534(0);
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

struct<4> func_239(int iParam0, int iParam1)
{
	return func_535(iParam0, iParam1);
}

void func_240(var uParam0, struct<4> Param1)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = Param1.f_3;
}

int func_241(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1) /*22*/].f_9;
}

void func_242(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	char[] cVar0[8];

	Global_1572864.f_8 = iParam0;
	Global_1572864.f_9 = iParam9;
	Global_1572864.f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_211(iParam0) == 1)
	{
		cVar0 = func_110(func_536(iParam0));
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
	}
	else if (func_211(iParam0) == 8)
	{
		cVar0 = func_538(func_537(iParam0));
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
	}
	func_539(1, 1);
	func_540(1, Param1, Param1.f_3);
	Global_1347394 = { Param5 };
	func_64(0);
	func_65(0);
	func_227(1f);
}

void func_243(char* sParam0)
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam0);
	}
	func_530(sParam0, 2);
}

void func_244(int iParam0, int iParam1)
{
	if (!func_541(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0 /*5*/] = (Global_40.f_11029[iParam0 /*5*/] || iParam1);
}

void func_245(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_246()
{
	Global_1934266.f_78.f_62 = -1;
}

void func_247()
{
	StringCopy(&(Global_1934266.f_78.f_64), "", 24);
}

void func_248()
{
	StringCopy(&(Global_1934266.f_78.f_67), "", 24);
}

void func_249()
{
	Global_1934266.f_78.f_63 = 0;
}

bool func_250()
{
	return func_542(SCRIPTS::GET_ID_OF_THIS_THREAD());
}

void func_251(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938.f_865 = (Global_1945938.f_865 - Global_1945938.f_865 & 2);
	}
	else
	{
		Global_1945938.f_865 |= 2;
	}
	func_543(bParam0);
}

void func_252()
{
	if (!Global_1894899.f_186)
	{
		VEHICLE::_0xF5FFB08976911B50(Global_1894899.f_182, Global_1894899.f_183, Global_1894899.f_184, Global_1894899.f_185);
	}
}

void func_253(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

bool func_254()
{
	return (Global_1894899 & 1 != 0 && func_77() != -1);
}

void func_255(var uParam0)
{
	int iVar0;
	struct<16> Var1;
	struct<18> Var17;
	struct<41> Var35;
	struct<10> Var76;
	struct<22> Var86;

	Var1.f_15 = 1;
	Var17 = -1;
	Var17.f_2 = 1;
	Var17.f_12 = 1065353216;
	Var17.f_15 = 1065353216;
	Var17.f_16 = 1;
	Var86.f_20 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		uParam0->f_3[iVar0 /*13*/] = 0;
		iVar0++;
	}
	uParam0->f_849 = { Var1 };
	StringCopy(&(uParam0->f_849), "", 32);
	iVar0 = 0;
	while (iVar0 < uParam0->f_865)
	{
		uParam0->f_865[iVar0 /*18*/] = { Var17 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1912)
	{
		uParam0->f_1912[iVar0 /*10*/] = { Var76 };
		iVar0++;
	}
	uParam0->f_2073 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1406)
	{
		uParam0->f_1406[iVar0 /*41*/] = { Var35 };
		uParam0->f_1735[iVar0 /*22*/] = { Var86 };
		iVar0++;
	}
	uParam0->f_2074 = -1;
	uParam0->f_2155 = { Global_36 };
	uParam0->f_2158 = 0;
	uParam0->f_2159 = 0;
	uParam0->f_2078 = -1;
	uParam0->f_2079 = -1f;
	uParam0->f_2054 = 0;
	uParam0->f_2056 = 0;
	uParam0->f_2056.f_1 = 0;
	uParam0->f_2293 = 0;
	if (CAM::_0x927B810E43E99932(&(uParam0->f_2082)))
	{
		CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_2082));
	}
}

void func_256(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_257(int iParam0)
{
	if (!func_544(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_46 = 0;
}

void func_258()
{
	func_545(64);
}

void func_259()
{
	Global_1310750.f_16072 = 0;
}

bool func_260()
{
	if (Global_1572887.f_12 == -1)
	{
		return false;
	}
	return Global_1058888.f_4;
}

bool func_261(int iParam0)
{
	return func_262(23, iParam0);
}

bool func_262(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_546(&(Global_1109400.f_4), iVar0, 5);
	}
	if (iParam1 == func_547())
	{
		return func_546(&(Global_1109400.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1225639.f_21[iParam1])
	{
		return func_546(&(Global_1108178[iParam1 /*37*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_263(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_264(int iParam0)
{
	if (!func_263(iParam0))
	{
		return false;
	}
	return func_267(iParam0, 8);
}

void func_265(int iParam0, int iParam1)
{
	if (!func_263(iParam0))
	{
		return;
	}
	Global_1888801[iParam0 /*35*/].f_19 = iParam1;
}

void func_266(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

bool func_267(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888.f_40615[iParam0 /*11*/] && iParam1) != 0;
}

void func_268(int iParam0)
{
	Global_1894899 = (Global_1894899 - (Global_1894899 && iParam0));
}

bool func_269()
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_267(iVar1, 1))
		{
			if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1888801[iVar1 /*35*/].f_26)))
			{
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1888801[iVar1 /*35*/].f_26));
			}
		}
		if (Global_1888801[iVar1 /*35*/].f_9 != 0)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1888801[iVar1 /*35*/].f_9, false))
			{
				if (func_20() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1888801[iVar1 /*35*/].f_9, 523);
				}
				else if (!SCRIPTS::_0x30BED53646C86D11(Global_1888801[iVar1 /*35*/].f_9))
				{
					SCRIPTS::_0x7DE4643157AD646C(Global_1888801[iVar1 /*35*/].f_9);
				}
			}
			else if (func_267(iVar1, 2))
			{
				if (func_20() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(Global_1888801[iVar1 /*35*/].f_26), 523);
				}
				else
				{
					SCRIPTS::_0x7423F7835770F619(MISC::GET_HASH_KEY(&(Global_1888801[iVar1 /*35*/].f_26)));
				}
			}
			if (!SCRIPTS::DOES_THREAD_EXIST(Global_1888801[iVar1 /*35*/].f_9))
			{
				Global_1888801[iVar1 /*35*/].f_9 = 0;
				func_303(iVar1, 11);
			}
			else
			{
				bVar0 = true;
			}
		}
		iVar1++;
	}
	return !bVar0;
}

bool func_270(var uParam0)
{
	if (func_548(uParam0, 1) || func_548(uParam0, 2))
	{
		return true;
	}
	return false;
}

bool func_271(int iParam0, var uParam1)
{
	return ITEMSET::IS_ITEMSET_VALID(iParam0);
}

int func_272(struct<2> Param0)
{
	if (!func_271(Param0))
	{
		return 0;
	}
	return ITEMSET::GET_ITEMSET_SIZE(Param0);
}

int func_273(struct<2> Param0, int iParam2)
{
	int iVar0;
	int iVar1;

	if (!func_271(Param0))
	{
		return 0;
	}
	iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

bool func_274(int iParam0)
{
	if (!func_486(iParam0))
	{
		return false;
	}
	if (!func_549(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_275(char[4] cParam0)
{
	return cParam0->f_5411;
}

int func_276(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1900383[iVar0 /*45*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_277(int iParam0)
{
	iParam0 = func_281(iParam0);
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

void func_278(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iParam0 = func_281(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	func_550(iParam0);
	if (func_551(iParam0))
	{
		if (func_277(iParam0) != iVar0)
		{
			return;
		}
	}
	func_552(iParam0);
	func_553(iParam0);
	iVar1 = func_231(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !PED::IS_PED_INJURED(iVar1))
		{
		}
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
		}
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		if (PED::_0xAA9F048DCF69B6DC(iVar2))
		{
			if (!func_554(iVar2))
			{
				PED::SET_PED_MODEL_IS_SUPPRESSED(iVar2, false);
			}
		}
		func_555(iParam0);
	}
}

void func_279(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!func_556(iParam0))
	{
		return;
	}
	iVar0 = func_276(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_59(iVar0);
	func_550(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = func_277(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_551(iVar0))
		{
			return;
		}
	}
	func_557(iVar0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	if (bParam1 && func_20() == -1)
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
		}
	}
}

void func_280(char[4] cParam0, int iParam1)
{
	cParam0->f_5308 = (cParam0->f_5308 - (cParam0->f_5308 && iParam1));
}

int func_281(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_282(int iParam0, int iParam1)
{
	iParam0 = func_281(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_24 = (Global_1900383[iParam0 /*45*/].f_24 - (Global_1900383[iParam0 /*45*/].f_24 && iParam1));
}

void func_283()
{
	if (func_558(0))
	{
		func_559(0);
	}
	if (func_558(1))
	{
		func_559(1);
	}
	if (func_558(5))
	{
		func_559(5);
	}
	if (func_558(6))
	{
		func_552(6);
	}
}

struct<2> func_284(int iParam0)
{
	struct<2> Var0;

	MemCopy(&Var0, {func_110(iParam0)}, 2);
	return Var0;
}

struct<2> func_285(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_284(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

void func_286(var uParam0)
{
	PLAYER::_0xEBFF94328FF7A18A(-3.141593f, 3.141593f);
	if (HUD::_UIPROMPT_IS_VALID(uParam0->f_11))
	{
		HUD::_UIPROMPT_DELETE(uParam0->f_11);
	}
}

int func_287(int iParam0)
{
	if (!func_206(iParam0))
	{
		return -1;
	}
	return func_560(func_511(iParam0));
}

bool func_288(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_289(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_290(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_561(iParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_562(iParam0)))
	{
		UILOG::_UILOG_REMOVE_ENTRY(iVar0, func_562(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(2, func_562(iParam0)))
			{
				UILOG::_UILOG_REMOVE_ENTRY(2, func_562(iParam0));
			}
		}
	}
	func_563(iParam0, 4);
	func_563(iParam0, 8);
	func_563(iParam0, 16);
}

void func_291(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1347702)
	{
		if (func_288(iVar0))
		{
			if (func_289(iVar0, 4))
			{
				func_292(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_292(int iParam0, bool bParam1)
{
	if (!func_289(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_561(iParam0), func_562(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_561(iParam0), func_562(iParam0), 2, "");
		func_564(iParam0, 16);
	}
	else
	{
		if (func_289(iParam0, 8))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_561(iParam0), func_562(iParam0), 1, "");
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_561(iParam0), func_562(iParam0), 0, "");
		}
		func_563(iParam0, 16);
	}
}

void func_293(int iParam0, bool bParam1)
{
	if (Global_1347702[iParam0 /*49*/].f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_289(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_561(iParam0), func_562(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_289(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_561(iParam0), func_562(iParam0), 1, "");
		}
		func_564(iParam0, 8);
	}
	else
	{
		if (func_289(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_561(iParam0), func_562(iParam0), 0, "");
		}
		func_563(iParam0, 8);
	}
}

int func_294(char[4] cParam0)
{
	if (func_120(cParam0, 8388608))
	{
		return 2;
	}
	if (func_120(cParam0, 4194304))
	{
		return 4;
	}
	if (func_120(cParam0, 4))
	{
		return 1;
	}
	if (func_128(cParam0, 1) && func_82(32768))
	{
		return 3;
	}
	return 0;
}

void func_295(int iParam0, int iParam1)
{
	if (func_558(0))
	{
		if (func_565(0))
		{
			func_566(0);
		}
	}
	if (func_558(1))
	{
		if (func_565(1))
		{
			func_566(1);
		}
	}
}

void func_296(char[4] cParam0)
{
	if (func_120(cParam0, 1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(cParam0->f_5411))
	{
		if (func_120(cParam0, 16))
		{
			func_58(cParam0, 0);
		}
		if (func_444(cParam0, 0, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_297(char[4] cParam0)
{
	return false;
	switch (cParam0->f_607)
	{
		case 11:
		case 12:
			return true;
	}
	return false;
}

void func_298(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_567(iParam0, sParam4, iParam5);
	}
	func_568(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_299(int iParam0)
{
	if (!func_263(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_20;
}

int func_300()
{
	return Global_1899515;
}

void func_301(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/].f_2 = iParam1;
		return;
	}
	Global_1058888.f_40615[iParam0 /*11*/].f_2 = iParam1;
}

void func_302(int iParam0, int iParam1)
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

void func_303(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] = (Global_23118[iParam0 /*11*/] - (Global_23118[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888.f_40615[iParam0 /*11*/] = (Global_1058888.f_40615[iParam0 /*11*/] - (Global_1058888.f_40615[iParam0 /*11*/] && iParam1));
}

void func_304(int iParam0)
{
	if (!func_263(iParam0))
	{
		return;
	}
	if (func_569(iParam0))
	{
		func_570(iParam0);
	}
	else
	{
		func_571(iParam0);
	}
}

int func_305(int iParam0)
{
	if (func_572(&(Global_1109400.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_306(int iParam0)
{
	if (func_573(&(Global_1109400.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_307(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return iParam1;
		case 3:
			return iParam1;
		case 11:
		case 12:
		case 13:
		case 14:
			return true;
		case 53:
			return true;
		case 24:
			return iParam1;
		case 23:
			return iParam1;
		case 21:
			return iParam1;
		case 26:
			return iParam1;
		case 35:
			return true;
		case 34:
			return iParam1;
		case 32:
			return iParam1;
		case 29:
			return true;
		case 31:
			return true;
		case 37:
			return iParam1;
		case 39:
			return iParam1;
		case 42:
			return iParam1;
		case 43:
			return iParam1;
		case 44:
			return iParam1;
		case 46:
			return iParam1;
		case 54:
			return true;
		case 50:
			return true;
		case 51:
			return iParam1;
		case 52:
			return true;
		case 49:
			return true;
		case 58:
			return iParam1;
		case 57:
			return true;
		case 59:
			return iParam1;
		default:
			break;
	}
	return false;
}

void func_308(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_574(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_575(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_576(iVar0) < func_577(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_310(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_309(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_578();
	fVar1 = (Global_1393447.f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447.f_60 = (fVar0 + fParam0);
	}
}

void func_310(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	func_173(iParam0, bParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

int func_311(int iParam0)
{
	if (!func_206(iParam0))
	{
		return -1;
	}
	return func_210(iParam0);
}

void func_312(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_6 = iParam1;
}

int func_313(bool bParam0, int iParam1)
{
	int iVar0;

	if (!bParam0 && func_521(373691918))
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
	func_220(bParam0);
	return 1;
}

void func_314()
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
		if (func_486(iVar17))
		{
			iVar18 = func_579(iVar17);
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
	func_476(&(Global_1359489.f_55));
	if (func_580(GET_HASH_KEY("CSTAG_PLAYER_AWAY"), 1))
	{
		func_581(GET_HASH_KEY("CSTAG_PLAYER_AWAY"), 1, 0);
	}
}

void func_315(int iParam0)
{
	if (!func_206(iParam0))
	{
		return;
	}
	func_583(iParam0, (func_582(iParam0) + BUILTIN::SHIFT_LEFT(1, 16)));
}

bool func_316(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_317()
{
	return func_584() > 0;
}

void func_318(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP8_ABIGAIL2X1_1"), iParam1);
			break;
		case 18:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_1"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_2"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_4"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_GT_BRAITHWAITES_1"), iParam1);
			break;
		case 20:
			func_585(GET_HASH_KEY("JOURNAL_GT_BRAITHWAITES_2"), iParam1);
			break;
		case 2:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_1"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_2"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_4"), iParam1);
			break;
		case 23:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_1"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_2"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_3"), iParam1);
			func_586(1);
			break;
		case 16:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_FEUD1_1"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_FEUD1_2_TXT"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_FEUD1_3_TXT"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_FEUD1_4"), iParam1);
			break;
		case 59:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_ENDLESS_SUMMER_1"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_ENDLESS_SUMMER_2"), iParam1);
			if (func_587(146))
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_TREASURE2_JN"), iParam1);
			}
			func_586(1);
			break;
		case 76:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_FINALE2_1"), iParam1);
			if (func_588() == 0)
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_9A"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_10B"), iParam1);
			}
			break;
		case 44:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG1_1"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG1_2"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG1_3"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG1_4"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG1_4B"), iParam1);
			break;
		case 46:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG3_1"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG3_2"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG3_4"), iParam1);
			break;
		case 17:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_GRAYS1_1"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_GRAYS1_3"), iParam1);
			break;
		case 19:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_GRAYS2_1"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_GRAYS2_2"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_GT_GRAYS_2"), iParam1);
			break;
		case 21:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_GRAYS3_1"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_GRAYS3_2"), iParam1);
			func_586(0);
			break;
		case 15:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_HUNTING1_1"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_HUNTING1_1B"), iParam1);
			break;
		case 33:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_INDUSTRY1_1"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_INDUSTRY1_2"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_INDUSTRY1_4"), iParam1);
			break;
		case 34:
			func_585(GET_HASH_KEY("JOURNAL_GT_INDUSTRY_3"), iParam1);
			break;
		case 64:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP8_LARAMIE1_1"), iParam1);
			break;
		case 60:
			func_585(GET_HASH_KEY("JOURNAL_CHAP8_PRONGHORN"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP8_MARSTON1_2"), iParam1);
			break;
		case 73:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_MARSTON6_1"), iParam1);
			break;
		case 74:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_MARSTON7_1"), iParam1);
			if (func_588() == 0)
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_4A"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_5B"), iParam1);
			}
			break;
		case 8:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MARY1_1"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MARY1_3"), iParam1);
			break;
		case 36:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MARY3_1"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MARY3_2"), iParam1);
			if (Global_1357515 == 0)
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MARY3_2A"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MARY3_2B"), iParam1);
			}
			break;
		case 27:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB1_1"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB1_2"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB1_3"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB1_4"), iParam1);
			break;
		case 28:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB2_1"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB2_2"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB2_3"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB2_4"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_GT_MOB_2"), iParam1);
			break;
		case 29:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB3_1"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB3_2"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_GT_MOB_3"), iParam1);
			break;
		case 31:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB5_1"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB5_2"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB5_3"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB5_4"), iParam1);
			break;
		case 4:
			func_585(GET_HASH_KEY("JOURNAL_CHAP2_HORSESHOE"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MUDTOWN1_2"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MUDTOWN1_3"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MUDTOWN1_5"), iParam1);
			func_586(0);
			break;
		case 6:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2"), iParam1);
			if (Global_1357515 == -1)
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_A"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_B"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_C"), iParam1);
			}
			break;
		case 25:
			func_585(GET_HASH_KEY("JOURNAL_GT_MUDTOWN_3B"), iParam1);
			break;
		case 24:
			if (Global_1357515 == -1)
			{
				func_585(GET_HASH_KEY("JOURNAL_GT_MUDTWON_5_5000"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				func_585(GET_HASH_KEY("JOURNAL_GT_MUDTWON_5_7500"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_GT_MUDTWON_5_10000"), iParam1);
			}
			break;
		case 48:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE1_1"), iParam1);
			if (Global_1357515 == -1)
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE1_2"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE1_2A"), iParam1);
			}
			if (func_589(51))
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE1_2B"), iParam1);
			}
			break;
		case 49:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE2_1"), iParam1);
			if (Global_1357515 == 0)
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE2_2A"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE2_2B"), iParam1);
			}
			else if (Global_1357515 == 2)
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE2_2C"), iParam1);
			}
			break;
		case 58:
			func_585(GET_HASH_KEY("JOURNAL_GT_NATIVE_3"), iParam1);
			break;
		case 50:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVESON1_1"), iParam1);
			break;
		case 52:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVESON3_1"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVESON3_2"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVESON3_2B"), iParam1);
			if (bParam2 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVESON3_3A"), iParam1);
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVESON3_3A2"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVESON3_3B"), iParam1);
			}
			break;
		case 32:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_ODRISCOLL4_1"), iParam1);
			break;
		case 47:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_MARY4_1"), iParam1);
			break;
		case 69:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_SADIE2_1"), iParam1);
			if (func_342(Global_1347702[9 /*49*/].f_15, 1))
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_2B"), iParam1);
			}
			break;
		case 70:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_SADIE3"), iParam1);
			if (func_588() == 0)
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_7A"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_8B"), iParam1);
			}
			break;
		case 71:
			if (func_588() == 0)
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_8A"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_9B"), iParam1);
			}
			break;
		case 37:
			func_585(GET_HASH_KEY("JOURNAL_GT_SAINT_DENIS_1"), iParam1);
			break;
		case 9:
			if (Global_1357515 == -1)
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_SALOON1_1"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_SALOON1_1B"), iParam1);
			}
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_SALOON1_2"), iParam1);
			break;
		case 13:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_SEAN1_1"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_SEAN1_2"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_SEAN1_3"), iParam1);
			break;
		case 53:
			func_585(GET_HASH_KEY("JOURNAL_GT_CORNWALL_1"), iParam1);
			break;
		case 54:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_TRAINROBBERY1_1"), iParam1);
			break;
		case 56:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_TRAINROBBERY3_1"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_TRAINROBBERY3_3"), iParam1);
			break;
		case 57:
			func_585(GET_HASH_KEY("JOURNAL_GT_TRAIN_ROBBERY_4"), iParam1);
			break;
		case 22:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_TRELAWNY1_1"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_TRELAWNY1_2"), iParam1);
			break;
		case 12:
			func_585(GET_HASH_KEY("JOURNAL_GT_UTOPIA_2"), iParam1);
			break;
		case 0:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP1_WINTER1_1"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP1_WINTER1_3"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP1_WINTER1_5"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP1_WINTER1_6"), iParam1);
			break;
		case 1:
			func_586(1);
			break;
		case 3:
			if (func_353())
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(GET_HASH_KEY("JOURNAL_GT_WINTER_4")))
				{
					func_585(GET_HASH_KEY("JOURNAL_GT_WINTER_4_SE"), iParam1);
				}
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(GET_HASH_KEY("JOURNAL_GT_WINTER_4_SE")))
			{
				func_585(GET_HASH_KEY("JOURNAL_GT_WINTER_4"), iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_319()
{
	if (func_20() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

void func_320(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_ABIGAIL1_1"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_ABIGAIL1_3"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_ABIGAIL1_4"), iParam1);
			break;
		case 1:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_ABIGAIL2X2_1"), iParam1);
			break;
		case 2:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_ABIGAIL3_1"), iParam1);
			break;
		case 9:
			func_585(GET_HASH_KEY("JOURNAL_CHAP9_BEECHERSHOPE"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_BEECHERS1X3_1"), iParam1);
			if (func_342(Global_1835011[69 /*74*/].f_1, 1))
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_1A"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_1B"), iParam1);
			}
			break;
		case 22:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_CALDERON1X1_1"), iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_1_AR"), iParam1);
				func_585(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_2_AR"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_1_JN"), iParam1);
				func_585(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_2_JN"), iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_3_1_AR"), iParam1);
				func_585(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_3_2_AR"), iParam1);
			}
			else if (func_587(26))
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_3_JN_B1"), iParam1);
				func_585(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_3_JN_B2"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_3_JN_A"), iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (Global_1357515 == -1)
				{
					func_585(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2F_AR"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					func_585(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2A_AR"), iParam1);
				}
				else if (Global_1357515 == 1)
				{
					func_585(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2B_AR"), iParam1);
				}
				else if (Global_1357515 == 2)
				{
					func_585(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2C_AR"), iParam1);
				}
				else if (Global_1357515 == 3)
				{
					func_585(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2D_AR"), iParam1);
				}
				else if (Global_1357515 == 4)
				{
					func_585(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2E_AR"), iParam1);
				}
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2_JN"), iParam1);
				if (Global_1357515 == -1)
				{
					func_585(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2E_JN"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					func_585(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2A_JN"), iParam1);
				}
				else if (Global_1357515 == 1)
				{
					func_585(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2B_JN"), iParam1);
				}
				else if (Global_1357515 == 2)
				{
					func_585(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2C_JN"), iParam1);
				}
				else if (Global_1357515 == 3)
				{
					func_585(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2D_JN"), iParam1);
				}
				else if (Global_1357515 == 4)
				{
					func_585(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2F_JN"), iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_3_AR"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_3_JN"), iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_4_AR"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_4_JN"), iParam1);
			}
			break;
		case 37:
			func_585(GET_HASH_KEY("JOURNAL_GT_COACH_ROB_RSC"), iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_CRKPT1_1_AR"), iParam1);
				func_585(GET_HASH_KEY("JOURNAL_RC_CRKPT1_2_AR"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_CRKPT1_1_JN"), iParam1);
				func_585(GET_HASH_KEY("JOURNAL_RC_CRKPT1_1_JN_B"), iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_CRKPT2_1_AR"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_CRKPT2_1_JN"), iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_CRKPT3_1_AR"), iParam1);
			}
			else if (func_587(54))
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_CRKPT3_1B_JN"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_CRKPT3_1A_JN"), iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_CIG1_1_AR"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_CIG1_1_JN"), iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_DINO1_1_AR"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_DINO1_1_JN"), iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_DINO2_1_AR"), iParam1);
			}
			else if (func_587(39))
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_DINO2_1_B_JN"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_DINO2_1_A_JN"), iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_376(Global_1835011[33 /*74*/].f_1) == 1)
				{
					func_585(GET_HASH_KEY("JOURNAL_RC_EXOTIC1_1B_AR_A"), iParam1);
				}
				else
				{
					func_585(GET_HASH_KEY("JOURNAL_RC_EXOTIC1_1A_AR_A"), iParam1);
				}
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_EXOTIC1_1_JN"), iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_EXOTIC3_1_AR_A"), iParam1);
			}
			else if (func_587(43))
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_EXOTIC3_1_JN_B"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_EXOTIC3_1_JN_A"), iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_FISH1_1_AR"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_FISH1_1_JN"), iParam1);
			}
			break;
		case 42:
			if (func_587(41))
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_FISH2_1_JN_B"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_FISH2_1_JN_A"), iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_ROCKCARV1_AR"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_ROCKCARV1_JN"), iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_ROCKCARV2_AR"), iParam1);
			}
			else if (func_587(49))
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_ROCKCARV2_JN_B"), iParam1);
				func_585(GET_HASH_KEY("JOURNAL_RC_ROCKCARV2_JN_B2"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_ROCKCARV2_JN_A"), iParam1);
			}
			break;
		case 51:
			func_585(GET_HASH_KEY("JOURNAL_RC_TAX1_1_JN"), iParam1);
			break;
		case 58:
			if (func_342(Global_1347702[23 /*49*/].f_15, 1))
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_DOCTORS_1"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_DOCTORS_1B"), iParam1);
			}
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_DOCTORS_2"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_DOCTORS_3"), iParam1);
			break;
		case 59:
			func_585(GET_HASH_KEY("JOURNAL_CHAP2_DOWNES1_1"), iParam1);
			break;
		case 62:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_DOWNES2_1"), iParam1);
			break;
		case 63:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_ODRISCOLL2_2B"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_GT_ODRISCOLL_2"), iParam1);
			break;
		case 65:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_1"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_2"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_3"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_4"), iParam1);
			break;
		case 66:
			func_585(GET_HASH_KEY("JOURNAL_CHAP3_CLEMENS"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_DUTCH1_1"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_DUTCH1_2"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_DUTCH1_3"), iParam1);
			func_586(1);
			break;
		case 67:
			func_585(GET_HASH_KEY("JOURNAL_CHAP4_SHADYBELLE"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_DUTCH2_1"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_DUTCH2_2"), iParam1);
			break;
		case 68:
			func_585(GET_HASH_KEY("JOURNAL_CHAP6_BEAVERHOLLOW"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_DUTCH3_2"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_DUTCH3_2B"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_DUTCH3_3"), iParam1);
			func_586(0);
			break;
		case 70:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_EDITHDOWNE2_1"), iParam1);
			break;
		case 71:
			func_585(GET_HASH_KEY("JOURNAL_RC_MILLER1_JN"), iParam1);
			break;
		case 73:
			func_585(GET_HASH_KEY("JOURNAL_RC_MILLER3_JN"), iParam1);
			break;
		case 75:
			func_585(GET_HASH_KEY("JOURNAL_RC_MILLER4_JN"), iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_FMA1_1_AR"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_FMA1_1_JN"), iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_FMA3_1_AR"), iParam1);
				func_585(GET_HASH_KEY("JOURNAL_RC_FMA3_2_AR"), iParam1);
			}
			else if (func_587(78))
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_FMA3_2_JN"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_FMA3_1_JN"), iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_FMA4_1_AR"), iParam1);
			}
			else if (func_587(79))
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_FMA4_2_JN"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_FMA4_1_JN"), iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER1_1_AR"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER1_1_JN"), iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER2_1_AR"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER2_1_JN"), iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER3_1_AR"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER3_1_JN"), iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER5_1_AR"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER5_1_JN"), iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_HKK1_AR"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_HKK1_JN"), iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_HKK4_AR"), iParam1);
				func_585(GET_HASH_KEY("JOURNAL_RC_HKK4B_AR"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_HKK4_A_JN"), iParam1);
				func_585(GET_HASH_KEY("JOURNAL_RC_HKK4_A2_JN"), iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_HKK5_AR"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_HKK5_JN"), iParam1);
			}
			break;
		case 94:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_1"), iParam1);
			if (Global_1357515 == -1)
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_2A"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_2B"), iParam1);
			}
			func_585(GET_HASH_KEY("JOURNAL_GT_HOME_ROB"), iParam1);
			break;
		case 99:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MARY3X1_1"), iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_MASON1_1_AR"), iParam1);
				if (Global_1357515 == -1)
				{
					func_585(GET_HASH_KEY("JOURNAL_RC_MASON1_2_AR_B"), iParam1);
				}
				else
				{
					func_585(GET_HASH_KEY("JOURNAL_RC_MASON1_2_AR_A"), iParam1);
				}
			}
			else if (Global_1357515 == -1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_MASON1_1B_JN"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_MASON1_1A_JN"), iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_MASON2_1_AR"), iParam1);
			}
			else if (func_587(101))
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_MASON2_1B_JN"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_MASON2_1A_JN"), iParam1);
			}
			break;
		case 103:
			func_585(GET_HASH_KEY("JOURNAL_RC_MASON3_1_AR"), iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_MASON4_1_AR"), iParam1);
				func_585(GET_HASH_KEY("JOURNAL_RC_MASON4_2_AR"), iParam1);
			}
			else if (func_587(103))
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_MASON4_1B_JN"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_MASON4_1A_JN"), iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_MASON5_1_AR"), iParam1);
			}
			else if (func_587(104))
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_MASON5_1B_JN"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_MASON5_1A_JN"), iParam1);
			}
			break;
		case 108:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_MONROE_1"), iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_MAYOR1_AR"), iParam1);
				func_585(GET_HASH_KEY("JOURNAL_RC_MAYOR1_AR_B"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_MAYOR1_JN"), iParam1);
				func_585(GET_HASH_KEY("JOURNAL_RC_MAYOR1B_JN"), iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_MAYOR2_AR"), iParam1);
			}
			else if (func_587(109))
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_MAYOR2B_JN"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_MAYOR2A_JN"), iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (Global_1357515 == 0)
				{
					func_585(GET_HASH_KEY("JOURNAL_RC_MAYOR3A_AR"), iParam1);
				}
				else
				{
					func_585(GET_HASH_KEY("JOURNAL_RC_MAYOR3B_AR"), iParam1);
				}
			}
			else if (func_587(110))
			{
				if (Global_1357515 == 0)
				{
					func_585(GET_HASH_KEY("JOURNAL_RC_MAYOR3C_JN"), iParam1);
				}
				else
				{
					func_585(GET_HASH_KEY("JOURNAL_RC_MAYOR3D_JN"), iParam1);
					func_585(GET_HASH_KEY("JOURNAL_RC_MAYOR3D_2_JN"), iParam1);
				}
			}
			else if (Global_1357515 == 0)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_MAYOR3A_JN"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_MAYOR3B_JN"), iParam1);
				func_585(GET_HASH_KEY("JOURNAL_RC_MAYOR3B_2_JN"), iParam1);
			}
			break;
		case 115:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_NATIVERSC1_1"), iParam1);
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_NATIVERSC1_2"), iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_ODDF1_AR"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_ODDF1_JN"), iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_ODDF2_AR"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_ODDF2_JN"), iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_OHBRO1_1_AR"), iParam1);
				func_585(GET_HASH_KEY("JOURNAL_RC_OHBRO1_2_AR"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_OHBRO1_1_JN"), iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_OHBRO2_1_AR"), iParam1);
			}
			else if (func_587(117))
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_OHBRO2_1B_JN"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_OHBRO2_1A_JN"), iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_OHBRO3_1_AR"), iParam1);
			}
			else if (func_587(118))
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_OHBRO3_2B_JN"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_OHBRO3_2A_JN"), iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_PW1_AR"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_PW1_JN"), iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_PW3_AR"), iParam1);
			}
			else if (func_587(121))
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_PW3B_JN"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_PW3A_JN"), iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_PW4_AR"), iParam1);
			}
			else if (func_587(122))
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_PW4B_JN"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_PW4A_JN"), iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_PW5_AR"), iParam1);
				func_585(GET_HASH_KEY("JOURNAL_RC_PW5B_AR"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_PW5_JN"), iParam1);
				func_585(GET_HASH_KEY("JOURNAL_RC_PW5B_JN"), iParam1);
			}
			break;
		case 127:
			func_585(GET_HASH_KEY("JOURNAL_RC_RTL1_AR"), iParam1);
			break;
		case 129:
			func_585(GET_HASH_KEY("JOURNAL_RC_RTL3_AR"), iParam1);
			break;
		case 131:
			func_585(GET_HASH_KEY("JOURNAL_RC_RTL5_AR"), iParam1);
			break;
		case 133:
			func_585(GET_HASH_KEY("JOURNAL_RC_RTL7_AR"), iParam1);
			break;
		case 134:
			func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_SADIE1_1"), iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (Global_1357515 == -1)
				{
					func_585(GET_HASH_KEY("JOURNAL_RC_KILLER4A_AR"), iParam1);
				}
				else
				{
					func_585(GET_HASH_KEY("JOURNAL_RC_KILLER4B_AR"), iParam1);
				}
			}
			else if ((HUD::_JOURNAL_CAN_WRITE_ENTRY(GET_HASH_KEY("JOURNAL_RC_KILLER1_AR")) && HUD::_JOURNAL_CAN_WRITE_ENTRY(GET_HASH_KEY("JOURNAL_RC_KILLER2_AR"))) && HUD::_JOURNAL_CAN_WRITE_ENTRY(GET_HASH_KEY("JOURNAL_RC_KILLER3_AR")))
			{
				if (Global_1357515 == -1)
				{
					func_585(GET_HASH_KEY("JOURNAL_RC_KILLER4A_JN"), iParam1);
				}
				else
				{
					func_585(GET_HASH_KEY("JOURNAL_RC_KILLER4B_JN"), iParam1);
				}
			}
			else if (Global_1357515 == -1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_KILLER4C_JN"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_KILLER4D_JN"), iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_SLVC1_AR"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_SLVC1_JN"), iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_SLVC2_AR"), iParam1);
				func_585(GET_HASH_KEY("JOURNAL_RC_SLVC3A_AR"), iParam1);
			}
			else if (func_587(136))
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_SLVC2B_JN"), iParam1);
				func_585(GET_HASH_KEY("JOURNAL_RC_SLVC3C_JN"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_SLVC2A_JN"), iParam1);
				func_585(GET_HASH_KEY("JOURNAL_RC_SLVC3A_JN"), iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_STRAUSS3_3A"), iParam1);
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_STRAUSS3_3B"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_STRAUSS3_3C"), iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (Global_1357515 == 1)
				{
					func_585(GET_HASH_KEY("JOURNAL_RC_TREASURE1A_AR"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					func_585(GET_HASH_KEY("JOURNAL_RC_TREASURE1B_AR"), iParam1);
				}
			}
			else if (Global_1357515 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_TREASURE1A_JN"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_TREASURE1B_JN"), iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_WARVET1_AR"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_WARVET1_JN"), iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_WARVET2_AR"), iParam1);
			}
			else if (func_587(147))
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_WARVET2B_JN"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_WARVET2A_JN"), iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_WARVET3_AR"), iParam1);
			}
			else if (func_587(148))
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_WARVET3B_JN"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_WARVET3A_JN"), iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_WARVET4_AR"), iParam1);
			}
			else if (func_587(149))
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_WARVET4B_JN"), iParam1);
			}
			else
			{
				func_585(GET_HASH_KEY("JOURNAL_RC_WARVET4A_JN"), iParam1);
			}
			break;
		default:
			break;
	}
}

int func_321(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	*uParam1 = GET_HASH_KEY("CSTP_PERSIST_ACROSS_STATES");
	*iParam2 = -1;
	iVar0 = func_211(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_536(iParam0);
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
					if (func_376(Global_1835011[9 /*74*/].f_1) == 0)
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
					return GET_HASH_KEY("CSTAG_FLOW_GNG2_POST");
				case 46:
					return GET_HASH_KEY("CSTAG_FLOW_GNG3_POST");
				case 47:
					return GET_HASH_KEY("CSTAG_FLOW_DST5_POST");
				case 48:
					return GET_HASH_KEY("CSTAG_FLOW_NTV1_POST");
				case 49:
					return GET_HASH_KEY("CSTAG_FLOW_NTV2_POST");
				case 50:
					return GET_HASH_KEY("CSTAG_FLOW_NTS1_POST");
				case 51:
					return GET_HASH_KEY("CSTAG_FLOW_NTS2_POST");
				case 52:
					return GET_HASH_KEY("CSTAG_FLOW_NTS3_POST");
				case 54:
					return GET_HASH_KEY("CSTAG_FLOW_TRN1_POST");
				case 55:
					return GET_HASH_KEY("CSTAG_FLOW_TRN2_POST");
				case 56:
					return GET_HASH_KEY("CSTAG_FLOW_TRN3_POST");
				case 57:
					return GET_HASH_KEY("CSTAG_FLOW_TRN4_POST");
				case 58:
					return GET_HASH_KEY("CSTAG_FLOW_NTV3_POST");
				case 59:
					return GET_HASH_KEY("CSTAG_FLOW_FIN1_POST");
				case 60:
					return GET_HASH_KEY("CSTAG_FLOW_MAR1_POST");
				case 61:
					return GET_HASH_KEY("CSTAG_FLOW_MAR5_POST");
				case 62:
					return GET_HASH_KEY("CSTAG_FLOW_MR52_POST");
				case 63:
					return GET_HASH_KEY("CSTAG_FLOW_MR53_POST");
				case 64:
					return GET_HASH_KEY("CSTAG_FLOW_LAR1_POST");
				case 65:
					return GET_HASH_KEY("CSTAG_FLOW_MAR2_POST");
				case 66:
					return GET_HASH_KEY("CSTAG_FLOW_MAR4_POST");
				case 67:
					return GET_HASH_KEY("CSTAG_FLOW_AB21_POST");
				case 68:
					return GET_HASH_KEY("CSTAG_FLOW_BE22_POST");
				case 69:
					return GET_HASH_KEY("CSTAG_FLOW_SAD2_POST");
				case 70:
					return GET_HASH_KEY("CSTAG_FLOW_SAD3_POST");
				case 71:
					return GET_HASH_KEY("CSTAG_FLOW_SAD4_POST");
				case 72:
					return GET_HASH_KEY("CSTAG_FLOW_SAD5_POST");
				case 73:
					return GET_HASH_KEY("CSTAG_FLOW_MAR6_POST");
				case 74:
					return GET_HASH_KEY("CSTAG_FLOW_MAR7_POST");
				case 75:
					return GET_HASH_KEY("CSTAG_FLOW_MAR8_POST");
				case 76:
					return GET_HASH_KEY("CSTAG_FLOW_FIN2_POST");
			}
			break;
		case 8:
			iVar2 = func_287(iParam0);
			switch (iVar2)
			{
				case 120:
					return GET_HASH_KEY("CSTAG_FLOW_RPRSN_POST");
				case 0:
					return GET_HASH_KEY("CSTAG_FLOW_RABI1_POST");
				case 63:
					return GET_HASH_KEY("CSTAG_FLOW_RDST2_POST");
				case 97:
					return GET_HASH_KEY("CSTAG_FLOW_RMARY1_POST");
				case 98:
					return GET_HASH_KEY("CSTAG_FLOW_RMARY2_POST");
				case 94:
					return GET_HASH_KEY("CSTAG_FLOW_RHMR0_POST");
				case 59:
					return GET_HASH_KEY("CSTAG_FLOW_RDOWN1_POST");
				case 61:
					return GET_HASH_KEY("CSTAG_FLOW_RDOWN2_POST");
				case 62:
					return GET_HASH_KEY("CSTAG_FLOW_RDOWN3_POST");
				case 112:
					return GET_HASH_KEY("CSTAG_FLOW_RMUD31_POST");
				case 113:
					return GET_HASH_KEY("CSTAG_FLOW_RMUD32_POST");
				case 114:
					return GET_HASH_KEY("CSTAG_FLOW_RMUD33_POST");
				case 66:
					*uParam1 = -2060316038;
					return GET_HASH_KEY("CSTAG_FLOW_RDTC1_POST");
				case 76:
					return GET_HASH_KEY("CSTAG_FLOW_RXCF1_POST");
				case 134:
					return GET_HASH_KEY("CSTAG_FLOW_RSAD1_POST");
				case 3:
					return GET_HASH_KEY("CSTAG_FLOW_RBNP10_POST");
				case 5:
					return GET_HASH_KEY("CSTAG_FLOW_RBNP12_POST");
				case 21:
					return GET_HASH_KEY("CSTAG_FLOW_RBRT0_POST");
				case 37:
					return GET_HASH_KEY("CSTAG_FLOW_RCHRB_POST");
				case 138:
					return GET_HASH_KEY("CSTAG_FLOW_RSTR1_POST");
				case 67:
					*uParam1 = -2060316038;
					return GET_HASH_KEY("CSTAG_FLOW_RDTC2_POST");
				case 106:
					return GET_HASH_KEY("CSTAG_FLOW_RMOB01_POST");
				case 107:
					return GET_HASH_KEY("CSTAG_FLOW_RMOB02_POST");
				case 115:
					return GET_HASH_KEY("CSTAG_FLOW_RNATV1_POST");
				case 116:
					return GET_HASH_KEY("CSTAG_FLOW_RNATV2_POST");
				case 22:
					return GET_HASH_KEY("CSTAG_FLOW_RCLDN1_POST");
				case 23:
					return GET_HASH_KEY("CSTAG_FLOW_RCLDN2_POST");
				case 82:
					return GET_HASH_KEY("CSTAG_FLOW_RGNG01_POST");
				case 68:
					*uParam1 = -2060316038;
					return GET_HASH_KEY("CSTAG_FLOW_RDCH3_POST");
				case 140:
					return GET_HASH_KEY("CSTAG_FLOW_RSTR31_POST");
				case 142:
					return GET_HASH_KEY("CSTAG_FLOW_RSTR33_POST");
				case 58:
					return GET_HASH_KEY("CSTAG_FLOW_RDOPN_POST");
				case 64:
					return GET_HASH_KEY("CSTAG_FLOW_RDST61_POST");
				case 65:
					return GET_HASH_KEY("CSTAG_FLOW_RDST62_POST");
				case 108:
					return GET_HASH_KEY("CSTAG_FLOW_RMNR1_POST");
				case 8:
					return GET_HASH_KEY("CSTAG_FLOW_RBCH11_POST");
				case 10:
					return GET_HASH_KEY("CSTAG_FLOW_RBCH21_POST");
				case 2:
					return GET_HASH_KEY("CSTAG_FLOW_RABI3_POST");
				case 96:
					return GET_HASH_KEY("CSTAG_FLOW_RJCK2_POST");
				case 52:
					return GET_HASH_KEY("CSTAG_FLOW_RCTAX2_POST");
				default:
					break;
			}
			break;
		case 11:
			iVar3 = func_287(iParam0);
			switch (iVar3)
			{
				case GET_HASH_KEY("HAI_FISHING_01"):
					return GET_HASH_KEY("CSTAG_FLOW_CA_FS01_POST");
				case GET_HASH_KEY("HAI_HOME_ROBBERY_01"):
					return GET_HASH_KEY("CSTAG_FLOW_CA_HR01_POST");
				case GET_HASH_KEY("HAI_COACH_ROBBERY_01"):
					return GET_HASH_KEY("CSTAG_FLOW_CA_CR02_POST");
				case GET_HASH_KEY("HAI_COACH_ROBBERY_02"):
					return GET_HASH_KEY("CSTAG_FLOW_CA_CR03_POST");
				case GET_HASH_KEY("HAI_FISHING_02"):
					return GET_HASH_KEY("CSTAG_FLOW_CA_FS02_POST");
				case GET_HASH_KEY("HAI_HUNTING_06"):
					return GET_HASH_KEY("CSTAG_FLOW_CA_HT06_POST");
				case GET_HASH_KEY("HAI_BANK_ROBBERY_01"):
					return GET_HASH_KEY("CSTAG_FLOW_CA_BR01_POST");
				case GET_HASH_KEY("HAI_COACH_ROBBERY_03"):
					return GET_HASH_KEY("CSTAG_FLOW_CA_CR01_POST");
				case GET_HASH_KEY("HAI_COACH_ROBBERY_04"):
					return GET_HASH_KEY("CSTAG_FLOW_CA_CR04_POST");
				default:
					break;
			}
			break;
	}
	return 176656832;
}

int func_322(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_590(iParam0);
	iVar3 = func_591(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0 /*5*/] = iParam0;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_2 = uParam1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_3 = iVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_300();
				func_349(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0 /*5*/].f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_4 = iVar2;
			func_592(iParam0, 1);
			if (func_593(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4 /*5*/].f_4 == iVar2 && Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_594(&(Global_40.f_4283.f_6[iVar4 /*5*/]), 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_595(1, iParam0);
				}
				else
				{
					func_596(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_323(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 68:
			*iParam1 = 35;
			return 70;
		case 76:
			*iParam1 = 35;
			return 70;
		case 70:
			*iParam1 = 35;
			return 70;
		case 73:
			*iParam1 = 35;
			return 70;
		case 19:
			*iParam1 = 25;
			return 50;
		case 21:
			*iParam1 = 35;
			return 70;
		case 60:
			*iParam1 = 35;
			return 70;
		case 61:
			*iParam1 = 35;
			return 70;
		case 62:
			*iParam1 = 35;
			return 70;
		case 63:
			*iParam1 = 35;
			return 70;
		case 64:
			*iParam1 = 35;
			return 70;
		case 65:
			*iParam1 = 35;
			return 70;
		case 66:
			*iParam1 = 35;
			return 70;
		case 67:
			*iParam1 = 35;
			return 70;
		case 32:
			*iParam1 = 35;
			return 70;
		case 48:
			*iParam1 = 35;
			return 70;
		case 49:
			*iParam1 = 35;
			return 70;
		case 47:
			*iParam1 = 30;
			return 60;
		case 58:
			*iParam1 = 30;
			return 60;
		case 27:
			*iParam1 = 30;
			return 60;
		case 29:
			*iParam1 = 40;
			return 100;
		case 30:
			*iParam1 = 50;
			return 100;
		case 33:
			*iParam1 = 30;
			return 60;
		case 23:
			*iParam1 = 30;
			return 60;
		case 10:
			*iParam1 = 30;
			return 60;
		case 5:
			*iParam1 = 45;
			return 60;
		case 11:
			*iParam1 = 35;
			return 70;
		case 9:
			*iParam1 = 45;
			return 70;
		case 15:
			*iParam1 = 15;
			return 35;
		case 35:
			*iParam1 = 50;
			return 70;
		case 8:
			*iParam1 = 50;
			return 100;
		case 36:
			*iParam1 = 40;
			return 80;
		case 22:
			*iParam1 = 25;
			return 45;
		case 39:
		case 41:
		case 42:
		case 43:
			*iParam1 = 20;
			return 40;
	}
	return 120;
}

int func_324(int iParam0, int iParam1, int iParam2)
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

void func_325(bool bParam0)
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

void func_326(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479.f_4)
	{
		func_597(iParam0, iParam1, bParam2);
	}
	else
	{
		iVar0 = (iVar0 / 2);
		if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479.f_5)
		{
			Global_1327479.f_5 = (MISC::GET_GAME_TIMER() + iVar0);
		}
	}
}

int func_327(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 55:
			*iParam1 = 45;
			return 75;
		case 60:
			*iParam1 = 0;
			return 0;
		case 74:
			*iParam1 = 45;
			return 75;
		case 119:
			*iParam1 = 45;
			return 75;
		case 84:
			*iParam1 = 45;
			return 75;
		case 85:
			*iParam1 = 45;
			return 75;
		case 106:
			*iParam1 = 20;
			return 35;
		case 107:
			*iParam1 = 20;
			return 35;
		case 8:
			*iParam1 = 45;
			return 75;
		case 9:
			*iParam1 = 45;
			return 75;
		case 10:
			*iParam1 = 45;
			return 75;
		case 98:
			*iParam1 = 30;
			return 50;
		case 82:
			*iParam1 = 30;
			return 50;
		case 83:
			*iParam1 = 30;
			return 50;
		case 99:
			*iParam1 = 30;
			return 50;
		case 138:
			*iParam1 = 30;
			return 50;
		case 139:
			*iParam1 = 30;
			return 50;
		case 140:
			*iParam1 = 30;
			return 50;
		case 141:
			*iParam1 = 30;
			return 50;
		case 142:
			*iParam1 = 30;
			return 50;
		case 21:
			*iParam1 = 30;
			return 50;
		case 136:
			*iParam1 = 30;
			return 50;
		case 137:
			*iParam1 = 40;
			return 80;
		case 124:
			*iParam1 = 30;
			return 50;
		case 125:
			*iParam1 = 30;
			return 50;
		case 127:
			*iParam1 = 30;
			return 50;
		case 128:
			*iParam1 = 30;
			return 50;
		case 131:
			*iParam1 = 30;
			return 50;
		case 133:
			*iParam1 = 30;
			return 50;
		case 105:
			*iParam1 = 30;
			return 50;
		case 89:
			*iParam1 = 30;
			return 50;
		case 93:
			*iParam1 = 30;
			return 50;
		case 75:
			*iParam1 = 30;
			return 50;
		case 5:
			*iParam1 = 50;
			return 100;
		case 6:
			*iParam1 = 30;
			return 50;
		case 77:
			*iParam1 = 30;
			return 50;
		case 78:
			*iParam1 = 30;
			return 50;
		case 30:
			*iParam1 = 30;
			return 50;
		case 31:
			*iParam1 = 30;
			return 50;
		case 32:
			*iParam1 = 30;
			return 50;
		case 33:
			*iParam1 = 30;
			return 50;
		case 34:
			*iParam1 = 30;
			return 50;
		case 35:
			*iParam1 = 30;
			return 50;
		case 36:
			*iParam1 = 30;
			return 50;
		case 24:
			*iParam1 = 30;
			return 50;
		case 25:
			*iParam1 = 30;
			return 50;
		case 26:
			*iParam1 = 30;
			return 50;
		case 27:
			*iParam1 = 30;
			return 50;
		case 28:
			*iParam1 = 30;
			return 50;
		case 66:
			*iParam1 = 30;
			return 50;
		case 67:
			*iParam1 = 50;
			return 100;
		case 146:
			*iParam1 = 30;
			return 50;
		case 38:
			*iParam1 = 30;
			return 45;
		case 39:
			*iParam1 = 30;
			return 45;
		case 40:
			*iParam1 = 30;
			return 45;
		case 41:
			*iParam1 = 30;
			return 45;
		case 42:
			*iParam1 = 30;
			return 45;
		case 43:
			*iParam1 = 30;
			return 45;
		case 44:
			*iParam1 = 30;
			return 45;
		case 45:
			*iParam1 = 30;
			return 45;
		case 46:
			*iParam1 = 30;
			return 45;
		case 47:
			*iParam1 = 30;
			return 45;
		case 48:
			*iParam1 = 30;
			return 45;
		case 49:
			*iParam1 = 30;
			return 45;
		case 50:
			*iParam1 = 30;
			return 45;
		case 51:
			*iParam1 = 30;
			return 45;
		case 112:
			*iParam1 = 10;
			return 20;
		case 113:
			*iParam1 = 25;
			return 45;
		case 114:
			*iParam1 = 10;
			return 20;
		case 59:
			*iParam1 = 15;
			return 35;
		case 61:
			*iParam1 = 15;
			return 35;
		case 97:
			*iParam1 = 15;
			return 35;
		case 94:
			*iParam1 = 20;
			return 30;
		case 0:
			*iParam1 = 45;
			return 75;
		case 115:
			*iParam1 = 30;
			return 60;
	}
	return 120;
}

bool func_328(int iParam0)
{
	switch (iParam0)
	{
		case 57:
		case 125:
		case 150:
			return true;
	}
	return false;
}

void func_329(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_20() != -1)
	{
		return;
	}
	if ((Global_36616 && func_598(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_599(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != GET_HASH_KEY("HONOR_EVENT_AMBIENT_KILL") && iParam1 != GET_HASH_KEY("HONOR_EVENT_AMBIENT_KO")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_KILL_VERMIN")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_KILL_HORSE")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_600(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_601(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_600(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_330(int iParam0)
{
	if (!func_206(iParam0))
	{
		return -1;
	}
	return func_602(func_511(iParam0));
}

int func_331(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_332()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 1);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_603(13);
		Global_1898441[iVar0 /*38*/] = 13;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_WIN2_COM", 24);
	}
}

bool func_333(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_604(iParam0, 0))
	{
		return false;
	}
	if (!func_605(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_606(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_607(iParam0, bParam2);
	iVar2 = 0;
	if (func_608(iParam0, 0, 0) == 0)
	{
		if (func_609(iParam0))
		{
			iVar5 = func_610(iParam0);
			iVar6 = func_611(iVar5);
			iVar7 = func_612(iVar6) + 1;
			func_613(iVar5);
			if (func_614(38))
			{
				func_340(483, 0);
			}
			else
			{
				func_340(482, 0);
			}
			if (iVar7 == func_615(iVar6))
			{
				func_333(func_616(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_407() && func_617(4))
				{
					if (func_407() && (func_618(38) || func_614(38)))
					{
						func_620(38, func_616(iVar6), 0, 0, func_619(), 0, -1, 0);
						func_621(2);
					}
					else
					{
						func_620(38, func_616(iVar6), 0, 0, func_619(), 0, -1, 0);
						func_621(1);
					}
				}
			}
			else if (func_407() && func_617(4))
			{
				if (func_407() && (func_618(38) || func_614(38)))
				{
					func_620(38, 0, 0, 0, func_619(), 0, -1, 0);
					func_621(2);
				}
				else
				{
					func_620(38, 0, 0, 0, func_619(), 0, -1, 0);
					func_621(1);
				}
			}
			if (func_407() && func_617(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (func_407() && (func_618(38) || func_614(38)))
					{
						func_622(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_622(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_623(iParam0) == GET_HASH_KEY("CLOTHING"))
	{
		if ((!func_624(iParam0, 866047851) && !func_624(iParam0, -1979000645)) && !func_624(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_625(iParam0, 8388608) && !func_626(28))
	{
		func_627(28);
	}
	if (!bVar3)
	{
		if (func_624(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_628(iParam0) == -1447088266)
			{
				iVar1 = func_630(func_629(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_20() == -1)
					{
						func_631(iVar1);
					}
					if (func_632(0) && func_633(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_634(iParam0, iVar0, iParam5);
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
					if (func_20() == -1)
					{
						func_631(iParam0);
					}
					if (func_632(0) && func_633(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_634(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_623(iParam0) == GET_HASH_KEY("WEAPON"))
		{
			if (!func_635(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_623(iParam0) == GET_HASH_KEY("AMMO") && func_636(iParam0))
		{
			if (!func_637(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_624(iParam0, 866047851))
		{
			func_638(iParam0);
		}
		else if (func_624(iParam0, 2000026003))
		{
			func_639(iParam0);
		}
		else if (func_624(iParam0, -103750053))
		{
			func_95(func_640(GET_HASH_KEY("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == GET_HASH_KEY("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_95(func_641(GET_HASH_KEY("COLLECTED"), GET_HASH_KEY("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_624(iParam0, -121341956) && !func_624(iParam0, 606799272))
		{
			if (iParam0 != GET_HASH_KEY("WEAPON_KIT_DETECTOR") && iParam0 != GET_HASH_KEY("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (func_342(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_340(498, 0);
				}
			}
			if (func_624(iParam0, -2017733358) || func_624(iParam0, -1369131378))
			{
				func_642(iParam0);
			}
		}
		else if (func_624(iParam0, -136654233))
		{
			if (func_624(iParam0, -1021472396))
			{
			}
		}
		else if (func_624(iParam0, -1466706512) && func_624(iParam0, 1147021565))
		{
			func_340(484, 0);
		}
		else if (func_624(iParam0, 1147021565) && func_624(iParam0, -524514947))
		{
		}
		else if (func_624(iParam0, 554195525))
		{
		}
		else if (func_624(iParam0, 589988438))
		{
			if (func_643())
			{
				func_644(GET_HASH_KEY("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_624(iParam0, 787083290) && func_624(iParam0, 949916894))
		{
			func_645(iParam0);
		}
		else if (func_624(iParam0, -1718133314))
		{
			func_646(iParam0);
		}
		else if (func_624(iParam0, -1738650224))
		{
			func_647(iParam0);
		}
		else if (func_624(iParam0, -1112814642) && func_624(iParam0, 949916894))
		{
			func_648(iParam0);
		}
		else if (iParam0 == GET_HASH_KEY("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_624(iParam0, 1841149704))
		{
			func_649();
		}
		else if (func_624(iParam0, 606799272))
		{
			func_650(iParam0, iParam1);
			func_651(iParam0);
		}
		else if (func_624(iParam0, -1112814642) && func_624(iParam0, -1697809989))
		{
			func_652(iParam0, 0, 0, 0);
		}
		else if (func_624(iParam0, -2017733358) || func_624(iParam0, -1369131378))
		{
			func_642(iParam0);
		}
		else if (func_624(iParam0, -1921346699))
		{
			if (func_20() != -1)
			{
				return false;
			}
			func_653(iParam0, iParam5, iParam8);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_624(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_362(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_333(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_362(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_333(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_362(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_333(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_362(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_333(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_362(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_333(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_362(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_333(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_624(iParam0, -839724752) && func_625(iParam0, 4))
		{
			if (!func_614(42))
			{
				func_654(iParam0);
			}
		}
		else if (func_624(iParam0, 1399091007))
		{
			func_655(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_624(iParam0, 1248798204))
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
				func_333(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_627(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					func_656(PLAYER::PLAYER_PED_ID(), GET_HASH_KEY("UPGRADE_OFFHAND_HOLSTER"), 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_657(&iVar9, 0))
				{
					func_633(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case GET_HASH_KEY("UPGRADE_BANDOLIER"):
				if (func_20() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					func_656(PLAYER::PLAYER_PED_ID(), GET_HASH_KEY("UPGRADE_BANDOLIER"), 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case GET_HASH_KEY("WEAPON_KIT_BINOCULARS"):
				break;
			case GET_HASH_KEY("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_340(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_658();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_659();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_660();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_661();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_662();
				break;
			case GET_HASH_KEY("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_01"):
				func_663(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_01"), 0);
				func_664(499813453, 0);
				func_665(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_02"):
				func_663(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_02"), 0);
				func_664(499813453, 0);
				func_665(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_03"):
				func_663(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_03"), 0);
				func_664(499813453, 0);
				func_665(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_04"):
				func_663(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_05"), 0);
				func_664(666607663, 0);
				func_666(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_05"):
				func_663(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_06"), 0);
				func_664(666607663, 0);
				func_666(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_06"):
				func_663(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_07"), 0);
				func_664(666607663, 0);
				func_666(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_07"):
				func_663(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_09"), 0);
				func_664(-220219788, 0);
				func_667(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_08"):
				func_663(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_10"), 0);
				func_664(-220219788, 0);
				func_667(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_09"):
				func_663(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_11"), 0);
				func_664(-220219788, 0);
				func_667(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_10"):
				func_663(218622660, GET_HASH_KEY("TREASURE_HUNT_LOOT_13"), 0);
				func_664(218622660, 0);
				func_668(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_11"):
				func_663(218622660, GET_HASH_KEY("TREASURE_HUNT_LOOT_14"), 0);
				func_664(218622660, 0);
				func_668(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_13"):
				func_663(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_16"), 0);
				func_664(390004462, 0);
				func_669(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_14"):
				func_663(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_17"), 0);
				func_664(390004462, 0);
				func_669(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_15"):
				func_663(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_18"), 0);
				func_664(390004462, 0);
				func_669(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_16"):
				func_663(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_20"), 0);
				func_664(6410548, 0);
				func_670(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_17"):
				func_663(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_21"), 0);
				func_664(6410548, 0);
				func_670(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_18"):
				func_663(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_22"), 0);
				func_664(6410548, 0);
				func_670(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_19"):
				func_663(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_23"), 0);
				func_664(6410548, 0);
				func_670(8);
				break;
			case GET_HASH_KEY("CONSUMABLE_AGED_PIRATE_RUM"):
				func_672(242, func_671(GET_HASH_KEY("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_GINSENG_ELIXIER"):
				func_672(240, func_671(GET_HASH_KEY("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_VALERIAN_ROOT"):
				func_672(241, func_671(GET_HASH_KEY("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case GET_HASH_KEY("CONSUMABLE_POTENT_MEDICINE"):
			case GET_HASH_KEY("CONSUMABLE_MEDICINE"):
			case GET_HASH_KEY("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_673(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_673(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_673(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case GET_HASH_KEY("CONSUMABLE_TONIC"):
			case GET_HASH_KEY("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_673(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_673(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case GET_HASH_KEY("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_673(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_HAIR_TONIC"):
				func_340(488, 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_HAIR_GREASE"):
				func_340(491, 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX"):
				func_340(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_333(func_674(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_333(func_675(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_626(1))
				{
					func_340(487, 0);
				}
				break;
			case GET_HASH_KEY("KIT_GUN_OIL"):
				func_340(486, 0);
				break;
			case GET_HASH_KEY("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_20() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case GET_HASH_KEY("UPGRADE_UPG_COFFEE_KIT"):
				func_340(496, 0);
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
		func_676(&iVar10);
		if (!func_677(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_632(0))
		{
			return true;
		}
		if (func_623(iParam0) == GET_HASH_KEY("CLOTHING"))
		{
			func_678(iParam0);
		}
		if (func_624(iParam0, -1979000645))
		{
			func_679(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_632(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_333(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_680(iVar2, 0);
		}
	}
	Var35 = { func_681(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	func_682(iParam0);
	if (fParam6 > 0f)
	{
		if (func_624(iParam0, -839724752))
		{
			func_683(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_684(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_334(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar13;
	int iVar14;
	int iVar15;

	if (func_624(iParam0, 1989861793))
	{
		iVar0 = func_685(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_686(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_687(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_688(iVar14, iVar1);
					if (iVar15 != iParam0 && func_604(iVar15, 0))
					{
						if (func_689(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_690(iVar1);
				if (bVar13)
				{
					func_691(iParam0);
				}
				else
				{
					func_340(306, 0);
				}
			}
		}
	}
}

void func_335()
{
	if (func_20() != -1)
	{
		return;
	}
	func_692();
	func_693();
	func_694();
	func_695();
	func_696();
	func_697();
	func_698();
}

void func_336(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;

	func_699(iParam0, 1, 1, -142743235, 1);
	if (func_700(iParam0))
	{
		func_701(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_703(func_702(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_704(GET_HASH_KEY("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = Global_1946804.f_57[iVar1 /*11*/];
		Global_1946804.f_1616.f_1[iVar1 /*3*/] = { vVar4 };
		Global_1946804.f_1616.f_1[iVar1 /*3*/].f_2 = (Global_1946804.f_1497.f_1[iVar1 /*3*/].f_2 || Global_1946804.f_1378.f_1[iVar1 /*3*/].f_2);
		iVar1++;
	}
	if (func_705() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_706(&(Global_1946804.f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_706(&(Global_1946804.f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	Global_1946804.f_1616.f_1[8 /*3*/] = { func_707(8, 0) };
	Global_1946804.f_1616.f_1[9 /*3*/] = { func_707(9, 0) };
	Global_1946804.f_1616.f_1[0 /*3*/] = { func_707(0, 0) };
	Global_1946804.f_1616.f_1[2 /*3*/] = { func_707(2, 0) };
	Global_1946804.f_1616.f_1[3 /*3*/] = { func_707(3, 0) };
	Global_1946804.f_1616.f_1[1 /*3*/] = { func_707(1, 0) };
	Global_1946804.f_1616.f_1[5 /*3*/] = { func_707(5, 0) };
	Global_1946804.f_1616.f_1[6 /*3*/] = { func_707(6, 0) };
	Global_1946804.f_1616.f_1[7 /*3*/] = { func_707(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_708(iVar8, iVar0))
				{
					func_709(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_708(iVar8, iVar0))
		{
			func_709(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == Global_1946804.f_1497.f_1[iVar8 /*3*/])
			{
				Global_1946804.f_1497.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
				bVar3 = true;
			}
			if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
			{
				Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == Global_1946804.f_1497.f_1[iVar8 /*3*/])
		{
			Global_1946804.f_1497.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
		}
		if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
		{
			Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		Global_1946804.f_1378.f_1[iVar1 /*3*/] = { Global_1946804.f_1616.f_1[iVar1 /*3*/] };
		iVar1++;
	}
}

void func_337()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;

	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_708(iVar5, iVar0);
		if (iVar1 == Global_1946804.f_57[iVar5 /*11*/] || iVar1 == 0)
		{
			if (func_705() == -2125499975 || func_705() == -449205311)
			{
				vVar2.x = GET_HASH_KEY("CLOTHING_SP_SHIRT_BOUNTY01_VARIATION_01");
				vVar2.f_1 = 1530758430;
				func_709(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = GET_HASH_KEY("BASE");
				func_709(&vVar2, iVar5, iVar0);
			}
		}
		iVar0++;
	}
	vVar2.x = GET_HASH_KEY("CLOTHING_SP_SHIRT_BOUNTY01_VARIATION_01");
	vVar2.f_1 = 1530758430;
	if (Global_1946804.f_57[iVar5 /*11*/] == Global_26796.f_627.f_1.f_1.f_1[iVar5 /*3*/] || 0 == Global_26796.f_627.f_1.f_1.f_1[iVar5 /*3*/])
	{
		Global_26796.f_627.f_1.f_1.f_1[iVar5 /*3*/] = { vVar2 };
	}
}

void func_338()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 2);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_603(14);
		Global_1898441[iVar0 /*38*/] = 14;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_MUD1_COM", 24);
	}
}

char* func_339(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "COMP_DUTCH";
		case 1:
			return "COMP_JOHN";
		case 2:
			return "COMP_JAVIER";
		case 3:
			return "COMP_BILL";
		case 4:
			return "COMP_UNCLE";
		case 5:
			return "COMP_HOSEA";
		case 6:
			return "COMP_MICAH";
		case 7:
			return "COMP_CHARLES";
		case 8:
			return "COMP_SEAN";
		case 9:
			return "COMP_LENNY";
		case 10:
			return "COMP_KIERAN";
		case 23:
			return "COMP_TRELAWNY";
		case 17:
			return "COMP_PEARSON";
		case 18:
			return "COMP_STRAUSS";
		case 13:
			return "COMP_ABIGAIL";
		case 14:
			return "COMP_JACK";
		case 16:
			return "COMP_MOLLY_OSHEA";
		case 19:
			return "COMP_SUSAN_GRIMSHAW";
		case 15:
			return "COMP_MARY_BETH";
		case 20:
			return "COMP_KAREN";
		case 22:
			return "COMP_TILLY";
		case 11:
			return "COMP_SADIE";
		case 24:
			return "COMP_CLEET";
		case 25:
			return "COMP_JOE";
		case 26:
			return "COMP_EAGLE_FLIES";
		case 12:
			if ((func_342(Global_1835011[59 /*74*/].f_1, 1) || func_342(Global_1347702[1 /*49*/].f_15, 1)) || func_207(Global_1347702[1 /*49*/].f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_580(GET_HASH_KEY("CSTAG_FLOW_DOG_IN_CAMP_POST"), 1))
			{
				return "COMP_CAIN";
			}
			return "COMP_DOG";
		case 21:
			if (bParam1)
			{
				return "COMP_SWANSON_S";
			}
			else
			{
				return "COMP_SWANSON";
			}
			break;
	}
	return "";
}

void func_340(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_710(iParam0, &iVar0, &iVar1);
	if (!func_711(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_712(iVar0, iVar1);
}

void func_341(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_703(iParam0, 1);
	func_713(&(Global_1946804.f_1497.f_1[iVar0 /*3*/]), 2, 6);
	func_713(&(Global_1946804.f_1378.f_1[iVar0 /*3*/]), 2, 6);
	if (bParam1)
	{
		Global_1946804.f_1497.f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
		Global_1946804.f_1497.f_1[iVar0 /*3*/].f_1 = 0;
		Global_1946804.f_1378.f_1[iVar0 /*3*/] = { Global_1946804.f_1497.f_1[iVar0 /*3*/] };
		if (bParam2)
		{
			func_714(17, iParam0, 0, 0, 0);
		}
	}
	if (func_20() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_713(&(Global_26796.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/]), 2, 6);
			if (bParam1)
			{
				Global_26796.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
				Global_26796.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/].f_1 = 0;
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_713(&(Global_36638.f_45.f_350.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/]), 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
				Global_36638.f_45.f_350.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/].f_1 = 0;
			}
			iVar1++;
		}
	}
}

bool func_342(int iParam0, bool bParam1)
{
	switch (func_311(iParam0))
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

void func_343()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 5);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_603(17);
		Global_1898441[iVar0 /*38*/] = 17;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_BRA2_COM", 24);
	}
}

void func_344()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 6);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_603(18);
		Global_1898441[iVar0 /*38*/] = 18;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_BRA3_COM", 24);
	}
}

int func_345(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<5> Var0;

	if (iParam3 == -358215195)
	{
		Var0 = { func_715(iParam1, 1, 0) };
		iParam3 = func_716(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_717(iParam3);
	return func_656(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_346()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

void func_347(int iParam0)
{
	int iVar0;

	if (!func_718(iParam0))
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

bool func_348(int iParam0, int iParam1)
{
	if (!func_719(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_720(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_721(&(Global_40.f_9910[iParam1 /*6*/]), 4);
}

void func_349(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_722(*iParam0);
	iVar1 = func_723(*iParam0);
	iVar2 = func_724(*iParam0);
	iVar3 = func_725(*iParam0);
	iVar4 = func_726(*iParam0);
	iVar5 = func_727(*iParam0);
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
	iVar6 = func_728(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_728(iVar1, iVar0);
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
	func_729(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_350(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_719(iParam0))
	{
		return;
	}
	if (!func_730(iParam1))
	{
		return;
	}
	if (func_731(iParam1, 1))
	{
		return;
	}
	iVar0 = func_720(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_348(iParam0, -1))
	{
		return;
	}
	else
	{
		func_732(&(Global_40.f_9910[iVar0 /*6*/]), 2);
	}
	Global_40.f_9910[iVar0 /*6*/].f_4 = iParam1;
	if (bParam2)
	{
		if (!func_213(0, 0, 1))
		{
			func_382(0, 17);
		}
	}
}

void func_351()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 7);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_603(19);
		Global_1898441[iVar0 /*38*/] = 19;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_MOB5_COM", 24);
	}
}

void func_352()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 8);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_603(20);
		Global_1898441[iVar0 /*38*/] = 20;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_SAI1_COM", 24);
	}
}

bool func_353()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

void func_354()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 9);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_603(21);
		Global_1898441[iVar0 /*38*/] = 21;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_GUA1_COM", 24);
	}
}

void func_355()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 10);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_603(22);
		Global_1898441[iVar0 /*38*/] = 22;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_GUA3_COM", 24);
	}
}

void func_356()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 12);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_603(24);
		Global_1898441[iVar0 /*38*/] = 24;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_ODR5_COM", 24);
	}
}

void func_357()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 13);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_603(25);
		Global_1898441[iVar0 /*38*/] = 25;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_FIN1_COM", 24);
	}
}

void func_358()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 14);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_603(27);
		Global_1898441[iVar0 /*38*/] = 27;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_MAR51_COM", 24);
	}
}

void func_359()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 15);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_603(28);
		Global_1898441[iVar0 /*38*/] = 28;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_360(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_361(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_362(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_604(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_623(iParam0);
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
		if (!func_733(iParam0, 1))
		{
			return false;
		}
	}
	return func_608(iParam0, 0, bParam2) >= iParam1;
}

void func_363(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_734(MISC::VAR_STRING(2, "MISSION_COMPLETE_BANK_FEED", MISC::ABSI(iParam0)), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514.f_14 = 1;
		Global_1879514.f_15 = 0;
	}
	else
	{
		func_734(MISC::VAR_STRING(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514.f_14 = 0;
		Global_1879514.f_15 = 1;
	}
}

void func_364()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 16);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_603(29);
		Global_1898441[iVar0 /*38*/] = 29;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_BEE22_COM", 24);
	}
}

void func_365()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 17);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_603(26);
		Global_1898441[iVar0 /*38*/] = 26;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_FIN2_COM", 24);
	}
}

void func_366()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 11);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_603(23);
		Global_1898441[iVar0 /*38*/] = 23;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_DOC_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_DOC_COM", 24);
	}
}

void func_367()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 3);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_603(15);
		Global_1898441[iVar0 /*38*/] = 15;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_DOW3_COM", 24);
	}
}

void func_368()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 4);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_603(16);
		Global_1898441[iVar0 /*38*/] = 16;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_DUT1_COM", 24);
	}
}

void func_369()
{
	if (func_735() > 1)
	{
		func_736();
	}
	else
	{
		if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_BAND_ROOT")))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_BAND_ROOT"), true);
			func_340(444, 1);
		}
		if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_HERB_ROOT")))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_HERB_ROOT"), true);
			func_340(447, 1);
		}
		if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_HORSE_ROOT")))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_HORSE_ROOT"), true);
			func_340(448, 1);
		}
		if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_SHOT_ROOT")))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_SHOT_ROOT"), true);
			func_340(450, 1);
		}
		if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_WEAP_ROOT")))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_WEAP_ROOT"), true);
			func_340(452, 1);
		}
	}
}

bool func_370(int iParam0)
{
	return func_737(iParam0, 4, 1);
}

void func_371(int iParam0)
{
	func_738(iParam0, 4, 1);
}

void func_372(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_94(GET_HASH_KEY("BANK_DEBT_CASH")) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

void func_373(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_82(32768))
	{
		return;
	}
	if (!func_206(iParam0))
	{
		return;
	}
	func_245(&Global_1935630, 8192);
	iVar2 = 1;
	switch (func_211(iParam0))
	{
		case 1:
			func_95(func_641(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS")), 1);
			iVar0 = func_287(iParam0);
			func_95(func_94(GET_HASH_KEY("MISSIONS_PROGRESSED")), 1);
			switch (func_514(iVar0))
			{
				case 0:
					func_95(func_641(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP1")), 1);
					break;
				case 1:
					func_95(func_641(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP2")), 1);
					break;
				case 2:
					func_95(func_641(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP3")), 1);
					break;
				case 3:
					func_95(func_641(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP4")), 1);
					break;
				case 4:
					func_95(func_641(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP5")), 1);
					break;
				case 5:
					func_95(func_641(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP6")), 1);
					break;
				case 6:
					func_95(func_641(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP7")), 1);
					break;
				case 7:
					func_95(func_641(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP8")), 1);
					break;
				case 8:
					func_95(func_641(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP9")), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_95(func_641(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("RC_STRANDS_BOUNTY")), 1);
			}
			if (iVar2 && MISSIONDATA::MISSIONDATA_IS_REQUIRED_STORY_MISSION(MISC::GET_HASH_KEY(&(Global_1835011[iVar0 /*74*/].f_8))))
			{
				func_95(func_641(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("REQUIRED_MISSIONS")), 1);
			}
			break;
		case 8:
			iVar1 = func_287(iParam0);
			if (func_316(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				func_95(func_94(GET_HASH_KEY("MISSIONS_PROGRESSED")), 1);
			}
			if (func_316(Global_1347702[iVar1 /*49*/].f_12, 4) || iVar1 == 59)
			{
				if (func_316(Global_1347702[iVar1 /*49*/].f_12, 1))
				{
					func_95(func_641(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS")), 1);
				}
				else
				{
					func_95(func_641(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("RC")), 1);
				}
			}
			if (func_316(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				switch (func_515(iVar1))
				{
					case 0:
						func_95(func_641(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP1")), 1);
						break;
					case 1:
						func_95(func_641(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP2")), 1);
						break;
					case 2:
						func_95(func_641(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP3")), 1);
						break;
					case 3:
						func_95(func_641(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP4")), 1);
						break;
					case 4:
						func_95(func_641(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP5")), 1);
						break;
					case 5:
						func_95(func_641(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP6")), 1);
						break;
					case 6:
						func_95(func_641(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP7")), 1);
						break;
					case 7:
						func_95(func_641(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP8")), 1);
						break;
					case 8:
						func_95(func_641(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP9")), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && MISSIONDATA::MISSIONDATA_IS_REQUIRED_STORY_MISSION(MISC::GET_HASH_KEY(&(Global_1347702[iVar1 /*49*/].f_3))))
				{
					func_95(func_641(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("REQUIRED_MISSIONS")), 1);
				}
			}
			else if (func_316(Global_1347702[iVar1 /*49*/].f_12, 4))
			{
				if (func_316(Global_1347702[iVar1 /*49*/].f_12, 4194304))
				{
				}
				else if (!func_316(Global_1347702[iVar1 /*49*/].f_12, 512))
				{
					func_95(func_641(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("RC_STRANDS")), 1);
				}
				else
				{
					func_95(func_641(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("RC_STRANDS_BOUNTY")), 1);
				}
			}
			break;
	}
}

void func_374()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	if (func_20() != -1)
	{
		return;
	}
	if (Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575.f_4)
	{
		return;
	}
	if (!func_3(64))
	{
		return;
	}
	else if (func_214(Global_1935630, 131072))
	{
		return;
	}
	else if ((func_213(0, 0, 1) || func_739()) || func_129())
	{
		return;
	}
	iVar0 = func_217();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_740(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_741(MISC::VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), GET_HASH_KEY("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_741(MISC::VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), GET_HASH_KEY("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_742(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_382(0, -1);
	}
	if (iVar2 > 0)
	{
		func_743("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_744(1, 0);
	Global_1956575.f_4 = 1;
}

void func_375(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_82(32768))
	{
		return;
	}
	func_298(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
	if (bParam2)
	{
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_ENDLESS_SUMMER")))
		{
			Global_1879514.f_12 = 1;
		}
		else
		{
			Global_1879514.f_12 = 0;
		}
		func_745(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_376(int iParam0)
{
	if (!func_206(iParam0))
	{
		return -1;
	}
	return func_746(iParam0);
}

int func_377(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_747(iParam0))
	{
		return 0;
	}
	if (!func_407())
	{
		return 0;
	}
	if (!func_748(iParam0, &iVar0, &iVar1))
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

int func_378(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_749())
	{
		iVar2 = func_749();
	}
	iVar5 = func_750(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_511(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_511(iVar6) == 0)
			{
				return func_751(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_511(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_511(iVar6) == 0)
			{
				return func_751(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_751(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_379(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_752(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 1:
			return func_752(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 2:
			return func_752(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, -1) * 2;
		case 4:
			return func_752(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 5:
			return func_752(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 6:
			return func_752(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_752(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, -1) * 3;
		case 9:
			return func_752(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, -1) * 3;
		case 10:
			return func_752(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, -1) * 3;
		case 11:
			return func_752(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_380(int iParam0)
{
	char[] cVar0[8];

	if (!func_206(iParam0))
	{
		return cVar0;
	}
	switch (func_211(iParam0))
	{
		case 1:
			cVar0 = Global_1835011[func_536(iParam0) /*74*/].f_8;
			break;
		case 8:
			cVar0 = Global_1347702[func_287(iParam0) /*49*/].f_3;
			break;
		case 11:
			if (iParam0 == func_378(0, 10, 11, GET_HASH_KEY("CABR01")))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_381(char[4] cParam0)
{
	int iVar0;
	int iVar1;

	if (!Global_1879514.f_11)
	{
		iVar0 = func_383();
		iVar1 = MISC::GET_HASH_KEY(&cParam0);
		if (MISSIONDATA::MISSIONDATA_GET_RATING(iVar1) != 5 && iVar0 == 5)
		{
			if (func_211(Global_1879514.f_1) == 1)
			{
				func_377(5, 1);
			}
			else if (func_211(Global_1879514.f_1) == 8 && (func_316(Global_1347702[func_287(Global_1879514.f_1) /*49*/].f_12, 1) || func_316(Global_1347702[func_287(Global_1879514.f_1) /*49*/].f_12, 33554432)))
			{
				func_377(5, 1);
			}
		}
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&cParam0), iVar0);
	}
	else
	{
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&cParam0), 3);
	}
}

void func_382(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_753(&Global_0, 8);
	}
	if (!func_407() || func_20() != -1)
	{
		return;
	}
	func_753(&Global_0, 1);
}

int func_383()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_754(Global_1879514.f_1);
	if (Global_1425247.f_53)
	{
		return 0;
	}
	if (func_755(iVar0))
	{
		if (Global_1879514.f_18)
		{
			return Global_1879514.f_19;
		}
		iVar1 = STATS::CHAL_MISSION_GET_NUM_GOALS(iVar0);
		iVar2 = STATS::CHAL_MISSION_GET_NUM_GOALS_COMPLETE(iVar0);
		if (iVar1 > 0)
		{
			iVar3 = ((100 * iVar2) / iVar1);
			if (iVar3 >= 100)
			{
				return 5;
			}
			else if (iVar3 >= 50)
			{
				return 4;
			}
			else
			{
				return 3;
			}
		}
	}
	return 3;
}

Vector3 func_384(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;

	vVar0 = { func_756(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (func_408(vVar0))
	{
		vVar0 = { func_756(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

void func_385(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	Global_1310720.f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = iParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_386(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_387(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_77();
	if (func_263(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iVar0 /*35*/].f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_757(vParam0, iParam3);
}

void func_388()
{
	func_758();
	func_759();
	func_760();
	SCRIPTS::_0x11B0A0B282FA9B10(0);
}

void func_389(struct<16> Param0, int iParam16)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603.f_161 >= 10)
	{
		return;
	}
	if (!func_761(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_762(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[iVar0 /*16*/].f_10)))
		{
			Global_1934603[iVar0 /*16*/] = { Param0 };
			Global_1934603.f_161++;
			func_763(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_390(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_391(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_392()
{
	return Global_1572864.f_12;
}

void func_393(bool bParam0)
{
	int iVar0;
	struct<16> Var1;

	if (func_527(Global_1935630.f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_764();
	Var1.f_3.f_3 = iVar0;
	if ((!func_765(Global_1347343.f_2) && !func_390(Global_1347343.f_11, 64)) || func_82(32768))
	{
		Var1.f_7 = func_766();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_390(Global_1347343.f_11, 1024) && !func_82(32768))
	{
		Var1.f_11 = func_767();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_390(Global_1347343.f_11, 8))
	{
		Var1.f_15 = func_768();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343.f_1 != 2)
	{
		Global_1935630.f_3 = func_769(&Var1, "REPLAY_T", &(Global_1347343.f_3), 0, 1);
	}
	else
	{
		Global_1935630.f_3 = func_770(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !ENTITY::IS_ENTITY_ATTACHED(Global_35))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
	}
	func_391(&(Global_1347343.f_11), 1073741824 /* Float: 2f */);
	if (bParam0)
	{
		func_391(&(Global_1347343.f_11), 1048576);
	}
	CAM::_0x16E9ABDD34DDD931();
}

void func_394(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	int iVar0;
	struct<11> Var1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	func_771(uParam0);
	iVar0 = func_772(uParam0, iParam1);
	if (bParam3)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			sParam2 = func_773(iParam1);
		}
		iVar0 = func_774(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_775(uParam0);
		}
		else
		{
			Var1.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
			MISC::_COPY_MEMORY(&(uParam0->f_3[iVar0 /*13*/]), &Var1, 13);
		}
	}
	else if (iVar0 != -1)
	{
	}
	else
	{
		iVar0 = func_775(uParam0);
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_3[iVar0 /*13*/].f_2 = iParam1;
	uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[iVar0 /*13*/].f_9))
	{
		uParam0->f_3[iVar0 /*13*/].f_9 = sParam2;
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_3[iVar0 /*13*/].f_9, sParam2))
		{
		}
		uParam0->f_3[iVar0 /*13*/].f_9 = sParam2;
	}
	func_776(uParam0, 2);
}

void func_395(char[4] cParam0, int iParam1)
{
	func_777(&(cParam0->f_7375), iParam1);
}

int func_396(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar1 /*12*/]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_397()
{
	return func_536(func_778());
}

void func_398(char[4] cParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_409())
	{
		func_779(cParam0, iVar0);
		iVar0++;
	}
}

int func_399(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
	return 1;
}

void func_400(char[4] cParam0, var uParam1)
{
	cParam0->f_607 = uParam1;
}

void func_401(char[4] cParam0)
{
	func_785(cParam0, iLocal_155, iLocal_156, 113761, 114125, 114274, 114798, 116193, "MOB1_INT", 2, -1);
	func_785(cParam0, iLocal_156, iLocal_157, 116527, 116662, 116762, 117281, 118562, "MOB1_MCS_1", 2, -1);
	func_785(cParam0, iLocal_157, iLocal_158, 118987, 119059, 119245, 120050, 120756, "MOB1_MCS2", 4098, -1);
	func_785(cParam0, iLocal_158, iLocal_159, 120929, 121197, 121675, 122067, 122448, "", 0, -1);
	func_785(cParam0, iLocal_159, iLocal_160, 122724, 122812, 122892, 123449, 123712, "", 0, -1);
	func_785(cParam0, iLocal_160, iLocal_161, 123776, 124076, 124248, 124675, 126465, "", 0, -1);
	func_785(cParam0, iLocal_161, iLocal_162, 126918, 127034, 127125, 128231, 128530, "", 0, -1);
	func_785(cParam0, iLocal_162, 25, 128915, 129030, 129123, 129734, 130733, "MOB1_MCS3A", 10, -1);
	func_785(cParam0, 25, 26, 130788, 130832, 130960, 131035, 132042, "MOB1_EXT", 3098, -1);
}

void func_402(char[4] cParam0, int iParam1)
{
	cParam0->f_13105 = iParam1;
}

void func_403(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

void func_404(var uParam0)
{
	vector3 vVar0;

	if (!func_826(uParam0, 4))
	{
		if (func_827(uParam0->f_860, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { func_828(uParam0) };
		if (!func_827(uParam0->f_860, 524288))
		{
			func_829(&(uParam0->f_872));
		}
		func_830(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_831(uParam0, 0f, 0f, 0f);
		func_832(uParam0);
		func_833(uParam0);
		func_834(uParam0, 0f, 0f, 0f, 0, 0);
		func_835(uParam0);
		func_777(uParam0, 4);
		func_836(uParam0, 0);
		func_837(&(Global_1946804.f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_873)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_873));
		}
	}
}

Vector3 func_405(int iParam0)
{
	if (func_838(iParam0))
	{
		return func_839(iParam0);
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

int func_406(vector3 vParam0, var uParam3)
{
	int iVar0;

	if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) != 1)
	{
		func_539(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_840(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_841(0, 0);
		if (func_718(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			func_842(1, 0);
		}
	}
	else
	{
		func_842(1, 0);
	}
	func_225(0);
	func_540(0, vParam0, uParam3);
	return 1;
}

bool func_407()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_408(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_409()
{
	return 26;
}

void func_410(int iParam0)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;
	struct<8> Var5;
	struct<8> Var13;
	int iVar21;

	if (!func_205(iParam0))
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

void func_411(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_843(uParam0[iVar0 /*3*/]);
		iVar0++;
	}
}

void func_412(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_844(uParam0[iVar0 /*5*/]);
		iVar0++;
	}
}

void func_413(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_845(uParam0[iVar0 /*3*/]);
		iVar0++;
	}
}

void func_414(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_846(uParam0[iVar0 /*3*/]);
		iVar0++;
	}
}

void func_415(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_847(uParam0[iVar0 /*67*/]);
		iVar0++;
	}
}

void func_416(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_848(uParam0[iVar0 /*4*/]);
		iVar0++;
	}
}

void func_417(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_418(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_849(uParam0[iVar0 /*5*/]);
		iVar0++;
	}
}

void func_419(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_850(uParam0[iVar0 /*3*/]);
		iVar0++;
	}
}

void func_420(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_851(uParam0[iVar0 /*3*/]);
		iVar0++;
	}
}

void func_421(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_852(uParam0[iVar0 /*4*/]);
		iVar0++;
	}
}

void func_422(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_853(uParam0[iVar0 /*3*/]);
		iVar0++;
	}
}

void func_423(char[4] cParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_854(&(cParam0->f_638), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_855(&(cParam0->f_638));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_638[iVar0 /*3*/] = iParam1;
	cParam0->f_638[iVar0 /*3*/].f_2 = (cParam0->f_638[iVar0 /*3*/].f_2 || iParam2);
}

void func_424(char[4] cParam0, char[4] cParam1, int iParam2)
{
	int iVar0;

	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_856(&(cParam0->f_1020), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_857(&(cParam0->f_1020));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_1020[iVar0 /*3*/] = cParam1;
	cParam0->f_1020[iVar0 /*3*/].f_2 = (cParam0->f_1020[iVar0 /*3*/].f_2 || iParam2);
}

char* func_425(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mob1_chase_crowd_horse_east";
		case 1:
			return "mob1_chase_crowd_wagon_north";
		case 2:
			return "mob1_chase_crowd_wagon_east";
		case 3:
			return "mob1_chase_crowd_wagon_west";
		case 4:
			return "mob1_chase_wagon_obstacle";
		case 5:
			return "mob1_hide_urchin";
		case 6:
			return "mob1_chase_start_assist";
		case 7:
			return "mob1_chase_urchin";
		case 8:
			return "mob1_chase_urchin_coach";
		case 9:
			return "mob1_follow_urchin";
		case 10:
			return "mob1_chase_alleyway";
		case 11:
			return "mob1_chase_alleyway2";
		case 12:
			return "mob1_arthur_charge_guide";
		default:
			break;
	}
	return "NULL";
}

void func_426(char[4] cParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_858(&(cParam0->f_819), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_859(&(cParam0->f_819));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_819[iVar0 /*5*/] = cParam1;
	cParam0->f_819[iVar0 /*5*/].f_4 = (cParam0->f_819[iVar0 /*5*/].f_4 || iParam2);
	cParam0->f_819[iVar0 /*5*/].f_1 = iParam3;
	cParam0->f_819[iVar0 /*5*/].f_2 = iParam4;
}

void func_427(char[4] cParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (!func_860(iParam3, func_33(cParam0)) && !func_860(iParam3, func_35(cParam0)))
	{
		return;
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*iParam2))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(cParam1))
	{
		return;
	}
	iVar0 = func_861(&(cParam0->f_1126), cParam1, *iParam2);
	if (iVar0 == -1)
	{
		iVar0 = func_862(&(cParam0->f_1126));
	}
	if (iVar0 == -1)
	{
		return;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*iParam2))
	{
		*iParam2 = ANIMSCENE::_CREATE_ANIM_SCENE(cParam1, iParam4, sParam5, false, true);
	}
	cParam0->f_1126[iVar0 /*67*/].f_1 = *iParam2;
	cParam0->f_1126[iVar0 /*67*/] = cParam1;
	cParam0->f_1126[iVar0 /*67*/].f_3 = (cParam0->f_1126[iVar0 /*67*/].f_3 || iParam3);
	cParam0->f_1126[iVar0 /*67*/].f_65 = iParam6;
	cParam0->f_1126[iVar0 /*67*/].f_66 = bParam7;
	if (!bParam7)
	{
		func_863(&(cParam0->f_1126[iVar0 /*67*/].f_2), 4);
	}
}

void func_428(char[4] cParam0, int iParam1, char* sParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (!func_860(iParam3, func_33(cParam0)) && !func_860(iParam3, func_35(cParam0)))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1))
	{
		return;
	}
	if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(iParam1, false))
	{
		return;
	}
	iVar0 = func_864(&(cParam0->f_1126), iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(cParam0->f_1126[iVar0 /*67*/].f_4[iVar1 /*3*/]) && MISC::ARE_STRINGS_EQUAL(cParam0->f_1126[iVar0 /*67*/].f_4[iVar1 /*3*/], sParam2))
		{
			return;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(cParam0->f_1126[iVar0 /*67*/].f_4[iVar1 /*3*/]))
		{
			cParam0->f_1126[iVar0 /*67*/].f_4[iVar1 /*3*/] = sParam2;
			cParam0->f_1126[iVar0 /*67*/].f_4[iVar1 /*3*/].f_2 = (cParam0->f_1126[iVar0 /*67*/].f_4[iVar1 /*3*/].f_2 || iParam3);
			return;
		}
		iVar1++;
	}
}

void func_429(char[4] cParam0)
{
	func_865(cParam0);
}

void func_430(int iParam0, int iParam1)
{
	func_866(iParam0, iParam1);
}

void func_431(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_867(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_432(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_868(uParam0[iVar0 /*3*/]))
		{
			if (func_860((uParam0[iVar0 /*3*/])->f_2, iParam12))
			{
				func_869(uParam0[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_870(uParam1[iVar0 /*5*/]))
		{
			if (func_860((uParam1[iVar0 /*5*/])->f_4, iParam12))
			{
				func_871(uParam1[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_872(uParam2[iVar0 /*3*/]))
		{
			if (func_860((uParam2[iVar0 /*3*/])->f_2, iParam12))
			{
				func_873(uParam2[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_874(uParam3[iVar0 /*3*/]))
		{
			if (func_860((uParam3[iVar0 /*3*/])->f_2, iParam12))
			{
				func_875(uParam3[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	if (func_860(uParam4->f_1, iParam12))
	{
		func_876(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_877(uParam5[iVar0 /*67*/]))
		{
			if (func_860((uParam5[iVar0 /*67*/])->f_3, iParam12))
			{
				func_878(uParam5[iVar0 /*67*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_877(uParam5[iVar0 /*67*/]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_879(&((uParam5[iVar0 /*67*/])->f_4[iVar1 /*3*/])))
				{
					if (func_860((uParam5[iVar0 /*67*/])->f_4[iVar1 /*3*/].f_2, iParam12))
					{
						func_880(&((uParam5[iVar0 /*67*/])->f_4[iVar1 /*3*/]), (uParam5[iVar0 /*67*/])->f_1);
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (func_881(uParam6[iVar0 /*4*/]))
		{
			if (func_860((uParam6[iVar0 /*4*/])->f_3, iParam12))
			{
				func_882(uParam6[iVar0 /*4*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_883(uParam7[iVar0 /*5*/]))
		{
			if (func_860((uParam7[iVar0 /*5*/])->f_4, iParam12))
			{
				func_884(uParam7[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_885(uParam8[iVar0 /*3*/]))
		{
			if (func_860((uParam8[iVar0 /*3*/])->f_2, iParam12))
			{
				func_886(uParam8[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_887(uParam9[iVar0 /*3*/]))
		{
			if (func_860((uParam9[iVar0 /*3*/])->f_2, iParam12))
			{
				func_888(uParam9[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_889(uParam10[iVar0 /*4*/]))
		{
			if (func_860((uParam10[iVar0 /*4*/])->f_3, iParam12))
			{
				func_890(uParam10[iVar0 /*4*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_891(uParam11[iVar0 /*3*/]))
		{
			if (func_860((uParam11[iVar0 /*3*/])->f_2, iParam12))
			{
				func_892(uParam11[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
}

void func_433(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_893(uParam0, iParam1, sParam2))
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

struct<2> func_434()
{
	struct<2> Var0;

	Var0 = ITEMSET::CREATE_ITEMSET(true);
	return Var0;
}

void func_435(char[4] cParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(func_159(cParam0)))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_159(cParam0), true);
		TASK::TASK_STAND_STILL(func_159(cParam0), -1);
	}
}

void func_436(char[4] cParam0, int iParam1)
{
	cParam0->f_10781 = iParam1;
	func_103(cParam0, 512);
}

void func_437(var uParam0, float fParam1)
{
	uParam0->f_794 = fParam1;
}

void func_438(var uParam0, float fParam1)
{
	uParam0->f_795 = fParam1;
}

void func_439(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_894(&(cParam0->f_7375), iParam1, sParam2, iParam3, iParam4, bParam5);
	func_394(&(cParam0->f_10792), iParam1, sParam2, bParam6);
}

bool func_440(char[4] cParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char[] cVar1[8];

	iVar0 = 1;
	if (bParam2 && func_23(&(cParam0->f_8269)))
	{
		if (!func_121(cParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {func_895(cParam0->f_607)}, 3);
			if (func_896(&(cParam0->f_8269), &cVar1, 0, func_132(iParam1), 1, 0))
			{
				if (func_24(&(cParam0->f_8269)))
				{
					func_897(&(cParam0->f_8269));
				}
				func_140(cParam0, iParam1, 268435456);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!func_898(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_441(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_877(uParam0[iVar0 /*67*/]))
		{
			if (func_860((uParam0[iVar0 /*67*/])->f_3, iParam1))
			{
				if ((uParam0[iVar0 /*67*/])->f_65 > 0f || func_899((uParam0[iVar0 /*67*/])->f_2, 4))
				{
					if (!func_900(uParam0[iVar0 /*67*/]))
					{
						iVar1 = 0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_442(char[4] cParam0)
{
	return cParam0->f_596;
}

bool func_443(char[4] cParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;

	if (func_120(cParam0, 2))
	{
		return true;
	}
	if (func_20() == 0)
	{
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(cParam0->f_5408))
	{
		return true;
	}
	iVar0 = func_901(func_61(cParam0));
	if (!func_29())
	{
		vVar2 = { func_126(cParam0->f_607) };
	}
	if (func_902(cParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		cParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_444(char[4] cParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	struct<11> Var0;
	int iVar11;
	int iVar12;
	int iVar13;
	vector3 vVar14;
	int iVar17;
	struct<11> Var18;
	int iVar29;

	if (ENTITY::DOES_ENTITY_EXIST(cParam0->f_5411))
	{
		if (!func_120(cParam0, 16777216))
		{
			if (!func_903(cParam0))
			{
				func_103(cParam0, 16777216);
			}
			else
			{
				Var0.f_10 = 7;
				Var0 = 0;
				Var0.f_1 = 0;
				Var0.f_6 = uParam2;
				Var0.f_6.f_1 = uParam3;
				Var0.f_6.f_2 = uParam4;
				Var0.f_9 = fParam5;
				Var0.f_10 = 1;
				iVar11 = 0;
				iVar12 = func_904(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					func_103(cParam0, 16777216);
					if (iVar11 == 2 && !ENTITY::IS_ENTITY_DEAD(iVar12))
					{
						if (iVar12 == cParam0->f_5411)
						{
							func_103(cParam0, 16777216);
						}
						else if (func_905(iVar12, cParam0->f_5411, 5f, 1))
						{
							if (func_906(iVar12))
							{
								PHYSICS::_0x0348469DAA17576C(iVar12);
							}
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar12, false, true);
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar12, cParam0->f_5417, cParam0->f_5420, true, false, true);
						}
					}
				}
			}
			return false;
		}
		if (!ENTITY::IS_ENTITY_DEAD(cParam0->f_5411))
		{
			return true;
		}
	}
	if (func_120(cParam0, 1))
	{
		return true;
	}
	vVar14 = { func_126(cParam0->f_607) };
	if (func_20() == 0)
	{
		STREAMING::REQUEST_MODEL(func_125(cParam0), false);
		if (!STREAMING::HAS_MODEL_LOADED(func_125(cParam0)))
		{
			return false;
		}
		if (func_907(&iVar17, func_125(cParam0), vVar14, 0f, 0, 0, 1, 1, 1))
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(iVar17, true);
			iVar13 = NETWORK::NET_TO_PED(iVar17);
		}
	}
	else
	{
		if (((((cParam0->f_607 == 38 || cParam0->f_607 == 39) || cParam0->f_607 == 43) || cParam0->f_607 == 40) || cParam0->f_607 == 41) || cParam0->f_607 == 42)
		{
			func_103(cParam0, 1);
			return false;
		}
		Var18.f_10 = 7;
		Var18 = bParam1;
		Var18.f_1 = iParam6;
		Var18.f_4 = iParam7;
		Var18.f_3 = iParam8;
		Var18.f_6 = uParam2;
		Var18.f_6.f_1 = uParam3;
		Var18.f_6.f_2 = uParam4;
		Var18.f_9 = fParam5;
		if (func_120(cParam0, 262144))
		{
			Var18.f_2 = 1;
		}
		else if (func_120(cParam0, 32768))
		{
			Var18.f_2 = 0;
		}
		iVar29 = 0;
		iVar13 = func_904(&iVar29, &Var18);
		if (iVar29 == 0)
		{
			return false;
		}
		else if (iVar29 == 1)
		{
			return false;
		}
		else if (iVar29 == 2)
		{
			if (!func_120(cParam0, 16))
			{
				func_103(cParam0, 16);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar13))
	{
		cParam0->f_5411 = iVar13;
		cParam0->f_5412 = iVar13;
		func_908(cParam0, bParam1);
		if (!func_120(cParam0, 256))
		{
			if (!func_120(cParam0, 32768))
			{
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!func_906(iVar13) || func_909(Global_35, iVar13, 1, 1) > 200f) && !func_408(vVar14))
				{
					if (!func_29())
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar13, false);
						func_867(iVar13, vVar14, fParam5, 2, 1073741824 /* Float: 2f */);
					}
				}
			}
		}
		else
		{
			Stack.Push(cParam0);
			Call_Loc(cParam0->f_10782);
		}
		return false;
	}
	return false;
}

void func_445(char[4] cParam0)
{
	int iVar0;
	var uVar1;

	if (!func_120(cParam0, 32) && func_128(cParam0, 3))
	{
		if (func_910(cParam0->f_607, &iVar0, &uVar1))
		{
			CLOCK::SET_CLOCK_TIME(iVar0, 0, 0);
			func_103(cParam0, 32);
		}
	}
	if (!func_120(cParam0, 32))
	{
		if (func_911(&(cParam0->f_609), cParam0->f_607))
		{
			func_103(cParam0, 32);
		}
	}
}

void func_446(char[4] cParam0)
{
	struct<4> Var0;

	if (!func_120(cParam0, 128))
	{
		if (func_120(cParam0, 16384))
		{
			func_912(cParam0);
			if (func_913(cParam0))
			{
				func_51(&(cParam0->f_10792));
				func_914(cParam0, 2097152);
				func_280(cParam0, 16384);
				func_103(cParam0, 128);
			}
			return;
		}
		if (func_128(cParam0, 1))
		{
			return;
		}
		if (func_120(cParam0, 64))
		{
			func_912(cParam0);
			MemCopy(&Var0, {func_155(func_61(cParam0))}, 4);
			if (func_915(cParam0, Var0))
			{
				if (func_442(cParam0) != 4)
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_103(cParam0, 128);
			}
		}
		else
		{
			if (func_442(cParam0) != 4)
			{
				CAM::DO_SCREEN_FADE_OUT(1);
			}
			func_103(cParam0, 128);
		}
	}
}

void func_447(char[4] cParam0, int iParam1)
{
	cParam0->f_596 = iParam1;
}

bool func_448(char[4] cParam0)
{
	int iVar0;
	char[] cVar1[8];

	iVar0 = 1;
	if (!func_916(cParam0))
	{
		iVar0 = 0;
	}
	if (!func_443(cParam0, func_128(cParam0, 3), !func_8(cParam0, 2097152), cParam0->f_5410, !func_8(cParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_444(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
	{
		iVar0 = 0;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		iVar0 = 0;
	}
	if (func_120(cParam0, 4) && !PED::_0x0EE3F0D7FECCC54F())
	{
		iVar0 = 0;
	}
	if (!func_23(&(cParam0->f_8269)))
	{
		MemCopy(&cVar1, {func_895(cParam0->f_607)}, 3);
		if (func_917(&(cParam0->f_8269), &cVar1, 0, 1, 1))
		{
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (func_128(cParam0, 1))
	{
		if (!func_26(&(cParam0->f_13115)))
		{
			func_27(&(cParam0->f_13115), 0);
		}
		if (func_918(&(cParam0->f_13115)) < 30f)
		{
			if (Global_1879534.f_1 || Global_1879534)
			{
				iVar0 = 0;
			}
			if (Global_1935630.f_2 != Global_40.f_39 || (!Global_1935630.f_12 && ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) != Global_40.f_39))
			{
				iVar0 = 0;
			}
			if (Global_40.f_7729 != Global_1905941)
			{
				iVar0 = 0;
			}
			if (!Global_1935630.f_12 && !PED::IS_PED_READY_TO_RENDER(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_449(char[4] cParam0)
{
	bool bVar0;

	bVar0 = (PLAYER::UPDATE_PLAYER_TELEPORT(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_TELEPORT_ACTIVE());
	if (func_918(&(cParam0->f_603)) >= cParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			PLAYER::STOP_PLAYER_TELEPORT();
		}
		if ((func_82(32768) && func_919()) && func_918(&(cParam0->f_603)) < (cParam0->f_13144 + 10f))
		{
			return false;
		}
		if (func_120(cParam0, 8) && INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(func_126(cParam0->f_607))))
		{
			INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(func_126(cParam0->f_607)));
			func_280(cParam0, 8);
		}
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
		func_920(0, 0);
		func_280(cParam0, 4096);
		return true;
	}
	return false;
}

bool func_450(char[4] cParam0)
{
	func_257(81);
	func_163(52, 1);
	func_921(52);
	if ((func_33(cParam0) == iLocal_155 || func_33(cParam0) == iLocal_162) || func_33(cParam0) == 25)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_290[0]))
		{
			iLocal_290[0] = func_159(cParam0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_290[0]))
			{
				func_922(cParam0, &(iLocal_290[0]), 0);
				func_145(cParam0, iLocal_290[0], "DUTCH", 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_290[0], true);
			}
			else
			{
				return false;
			}
		}
	}
	func_923(&uLocal_885, 0);
	func_924(&uLocal_887, 0);
	bLocal_566 = false;
	bLocal_567 = false;
	iLocal_553 = 0;
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_387))
	{
		func_925(&iLocal_387, 2634.106f, -1227.129f, 57.60427f, 0f, 0f, 0f, 12.90022f, 13.7771f, 14.5787f, "SALOON BLOCKING");
	}
	uLocal_347 = func_926(iLocal_387, 0, 0, 0);
	func_928(cParam0, 145633);
	func_930(cParam0, 145977);
	func_932(cParam0, 147152);
	func_933(2015589310, 1);
	func_933(-1959224856, 1);
	func_933(-1003712548, 1);
	func_933(771449720, 1);
	if (func_33(cParam0) > iLocal_157 && func_33(cParam0) < iLocal_162)
	{
		func_39(0);
		VEHICLE::SET_RANDOM_TRAINS(false);
		POPULATION::DISABLE_AMBIENT_ROAD_POPULATION(true);
	}
	if (func_33(cParam0) >= iLocal_158 && func_33(cParam0) < 25)
	{
		if (!func_174(32))
		{
			func_176(1);
			func_934(GET_HASH_KEY("MPC_HIDE_ACTION_SATCHEL"), Global_35, 0, 1);
			func_935(32);
		}
		VEHICLE::DELETE_ALL_TRAINS();
	}
	if (func_33(cParam0) >= iLocal_156)
	{
		CLOCK::SET_CLOCK_TIME(9, 0, 0);
		MISC::SET_WEATHER_TYPE(GET_HASH_KEY("SUNNY"), true, true, false, 0f, false);
	}
	if (func_33(cParam0) >= iLocal_158 && func_33(cParam0) <= iLocal_160)
	{
		PLAYER::_0xBBADFB5E5E5766FB(PLAYER::PLAYER_ID(), 0.75f);
	}
	func_245(&Global_1935630, 65536);
	func_936(cParam0);
	func_937(695709062);
	func_938(266);
	func_938(317);
	func_938(318);
	func_938(319);
	iLocal_1172 = func_939(0);
	iLocal_1173 = func_939(1);
	iLocal_1174 = func_939(2);
	iLocal_1175 = func_940();
	func_202(12, 0);
	return true;
}

void func_451(char[4] cParam0, int iParam1)
{
	func_66(iParam1);
	cParam0->f_10783 = iParam1;
}

bool func_452(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_941(cParam0);
	func_942(cParam0);
	iVar0 = func_33(cParam0);
	iVar1 = func_35(cParam0);
	iVar2 = func_162(cParam0, iVar0);
	if (func_8(cParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_913(cParam0);
		}
	}
	func_943(cParam0);
	func_944(cParam0);
	func_945(cParam0);
	func_946(cParam0);
	func_947(cParam0);
	func_948(cParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		func_949(cParam0);
	}
	if ((func_33(cParam0) == 0 && iVar2 < 3) && func_294(cParam0) == 0)
	{
		func_446(cParam0);
	}
	if (func_121(cParam0, iVar0, 512))
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	func_74(cParam0);
	switch (iVar2)
	{
		case 0:
			if (func_950(cParam0, iVar0, 0))
			{
				if (func_951(cParam0, func_33(cParam0)) != -1 && PED::_0x62DE46F061CAA468() < func_951(cParam0, func_33(cParam0)))
				{
					PED::_0xF008E0BA1FE1D644((func_951(cParam0, func_33(cParam0)) - PED::_0x62DE46F061CAA468()));
				}
				if ((func_33(cParam0) == 25 || func_33(cParam0) == 26) && func_82(32768))
				{
					func_395(cParam0, 524288);
				}
				if (func_120(cParam0, 4))
				{
					if (!func_8(cParam0, 4))
					{
						func_952(cParam0, iVar0);
						func_99(cParam0, 4);
					}
					func_953(cParam0);
					func_954(cParam0, iVar0, 1);
				}
				else
				{
					func_954(cParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (func_916(cParam0))
			{
				if (func_955(cParam0))
				{
					if (func_8(cParam0, 4))
					{
						func_914(cParam0, 4);
					}
					func_954(cParam0, iVar0, 2);
				}
			}
			else if (func_956(cParam0) >= cParam0->f_13144)
			{
				if (func_8(cParam0, 4))
				{
					func_914(cParam0, 4);
				}
				func_954(cParam0, iVar0, 2);
			}
			break;
		case 2:
			if (func_950(cParam0, iVar0, 2))
			{
				if (!func_957(cParam0))
				{
					func_954(cParam0, iVar0, 4);
					if (func_958(cParam0, iVar0, iVar1))
					{
						func_954(cParam0, iVar0, 5);
					}
				}
				else
				{
					func_959(cParam0);
					func_954(cParam0, iVar0, 3);
					if (func_960(cParam0, iVar0))
					{
						func_954(cParam0, iVar0, 4);
						if (func_958(cParam0, iVar0, iVar1))
						{
							func_954(cParam0, iVar0, 5);
						}
					}
				}
			}
			else if (func_961(cParam0))
			{
				func_960(cParam0, iVar0);
			}
			break;
		case 3:
			if (func_960(cParam0, iVar0))
			{
				func_954(cParam0, iVar0, 4);
				if (func_958(cParam0, iVar0, iVar1))
				{
					func_954(cParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_958(cParam0, iVar0, iVar1))
			{
				func_954(cParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!func_20() == 0)
			{
				func_962(cParam0);
				func_963(cParam0, iVar0);
				func_964(cParam0);
				func_965(cParam0);
				if (func_121(cParam0, iVar1, 2))
				{
					if (func_966(cParam0, iVar1))
					{
						func_967(cParam0, iVar1);
					}
				}
			}
			if (func_950(cParam0, iVar0, 5))
			{
				if (func_950(cParam0, iVar0, 7))
				{
					if (!func_121(cParam0, func_33(cParam0), 67108864))
					{
						func_968(cParam0, func_33(cParam0));
					}
					func_969(cParam0, iVar1);
					func_942(cParam0);
					return true;
				}
				else
				{
					func_954(cParam0, iVar0, 7);
				}
			}
			else
			{
				if (!func_121(cParam0, func_33(cParam0), 4194304))
				{
					if ((!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !func_121(cParam0, func_33(cParam0), 16))
					{
						CAM::DO_SCREEN_FADE_IN(0);
						func_970(0);
					}
					func_140(cParam0, func_33(cParam0), 4194304);
				}
				if ((func_971(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) && !func_120(cParam0, 8192)) && !func_121(cParam0, func_33(cParam0), 8))
				{
					func_47(1, 0);
					func_972("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (func_973(cParam0))
					{
						func_954(cParam0, iVar0, 6);
					}
				}
				if (func_8(cParam0, 268435456))
				{
					if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(1) != 1)
					{
						func_36(cParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						func_914(cParam0, 268435456);
					}
				}
				if (func_120(cParam0, 1048576))
				{
					if (func_127(func_34(0)))
					{
						func_280(cParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!func_20() == 0)
			{
				func_962(cParam0);
				func_963(cParam0, iVar0);
				func_964(cParam0);
				func_965(cParam0);
				if (func_121(cParam0, func_35(cParam0), 2))
				{
					if (func_966(cParam0, func_35(cParam0)))
					{
						func_967(cParam0, func_35(cParam0));
					}
				}
			}
			if ((!func_971(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) || func_120(cParam0, 8192)) || func_121(cParam0, func_33(cParam0), 8))
			{
				if (func_950(cParam0, iVar0, 5))
				{
					if (func_974(cParam0))
					{
						func_954(cParam0, iVar0, 7);
					}
				}
				else
				{
					func_974(cParam0);
					func_954(cParam0, iVar0, 5);
				}
			}
			else
			{
				func_950(cParam0, iVar0, 5);
				func_975(cParam0);
			}
			break;
		case 7:
			if (func_950(cParam0, iVar0, 7))
			{
				if (!func_121(cParam0, func_33(cParam0), 67108864))
				{
					func_968(cParam0, func_33(cParam0));
				}
				func_969(cParam0, iVar1);
				func_942(cParam0);
				return true;
			}
			break;
		default:
			func_954(cParam0, iVar0, 7);
			break;
	}
	return false;
}

bool func_453(int iParam0)
{
	return func_976(iParam0, 67108864);
}

void func_454(int iParam0, int iParam1)
{
	if (!func_977(iParam0))
	{
		return;
	}
	Global_1914319.f_15614[iParam0] = (Global_1914319.f_15614[iParam0] || iParam1);
}

void func_455(int iParam0, int iParam1)
{
	if (!func_977(iParam0))
	{
		return;
	}
	Global_1914319.f_15614[iParam0] = (Global_1914319.f_15614[iParam0] - (Global_1914319.f_15614[iParam0] && iParam1));
}

void func_456()
{
	if (Global_1934765.f_286 > 300)
	{
		Global_1934765.f_286 = 300;
	}
	STREAMING::SET_POPULATION_BUDGET_MULTIPLIER(func_978());
}

int func_457(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_5;
}

int func_458(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (!func_979(iParam1))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_980(iParam1);
	return func_981(iParam0, iVar0, bParam2, bParam2);
}

int func_459(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_460(int iParam0)
{
	return Global_1835011[iParam0 /*74*/].f_1;
}

void func_461(int iParam0, int iParam1)
{
	if (!func_206(iParam0))
	{
		return;
	}
	func_982(iParam0, iParam1);
}

void func_462(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_983(iParam0);
	if (bParam3)
	{
		func_742(iParam0, sParam1, iParam2);
	}
}

void func_463(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_11(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_984(iParam0, 0);
		}
	}
}

void func_464(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_10((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_11(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

void func_465(int iParam0)
{
	if (!func_544(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_46 = 1;
}

bool func_466(int iParam0, var uParam1)
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

bool func_467(int iParam0)
{
	return AUDIO::_0xFE5C6177064BD390(iParam0);
}

void func_468(int iParam0)
{
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(PERSCHAR::_0x112DDF56300BC6E5(iParam0)))
	{
		PERSCHAR::_0x7B204F88F6C3D287(PERSCHAR::_0x112DDF56300BC6E5(iParam0));
		PERSCHAR::_0xFCC6DB8DBE709BC8(PERSCHAR::_0x112DDF56300BC6E5(iParam0));
		PERSCHAR::_0xFC77C5B44D5FF7C0(PERSCHAR::_0x112DDF56300BC6E5(iParam0));
	}
}

void func_469(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

void func_470(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_471(int* iParam0, bool bParam1)
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
	if (bParam1)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
	}
	else
	{
		func_985(iParam0);
		VEHICLE::DELETE_VEHICLE(iParam0);
	}
}

void func_472()
{
	if (func_181(iLocal_292[0], 0))
	{
		AUDIO::STOP_PED_SPEAKING(iLocal_292[0], false);
	}
	if (func_181(iLocal_292[1], 0))
	{
		AUDIO::STOP_PED_SPEAKING(iLocal_292[1], false);
	}
	func_475(&(iLocal_292[0]), 1);
	func_475(&(iLocal_292[1]), 1);
	if (func_986(137, 1))
	{
		func_987(137, 0, 1, 0, 0);
	}
	if (func_986(250, 1))
	{
		func_987(250, 0, 1, 0, 0);
	}
}

void func_473(char[4] cParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_901(func_61(cParam0));
	if (!func_274(iVar0))
	{
		return;
	}
	func_197(cParam0, iVar0, func_159(cParam0), iParam1, bParam2, bParam3, 0);
	cParam0->f_5408 = 0;
}

void func_474(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		func_475(iParam0[iVar0], bParam1);
		iVar0++;
	}
}

void func_475(int* iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*iParam0))
		{
			return;
		}
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
		{
			return;
		}
		if (bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0) && PED::IS_PED_IN_ANY_VEHICLE(*iParam0, true))
			{
			}
			PED::DELETE_PED(iParam0);
		}
	}
}

void func_476(float fParam0)
{
	fParam0->f_1 = 0f;
	fParam0->f_2 = 0f;
	*fParam0 = 0;
}

void func_477(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(uParam0[iVar0 /*3*/])->f_1 = 0f;
		(uParam0[iVar0 /*3*/])->f_2 = 0f;
		(*uParam0)[iVar0 /*3*/] = 0;
		iVar0++;
	}
}

void func_478(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_480(vVar0, vVar3, 0f) };
	vVar9 = { func_481(vVar0, vVar3, 0f) };
	if (iParam4 == 1)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, iParam5, 1);
	}
	else if (iParam6 == 5)
	{
		PATHFIND::SET_ROADS_IN_AREA(vVar6, vVar9, iParam4, 1, iParam5);
	}
	else
	{
		PATHFIND::_0xAFE2AE66F6251C66(vVar6, vVar9, iParam6, 1);
	}
}

void func_479(vector3 vParam0, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_480(vVar0, vVar3, 0f) };
	vVar9 = { func_481(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, 0, 1);
	}
	else
	{
		PATHFIND::_0x6C3F12ECEB6D2E2A(vVar6, vVar9, iParam4, 1);
	}
}

Vector3 func_480(vector3 vParam0, vector3 vParam3, float fParam6)
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

Vector3 func_481(vector3 vParam0, vector3 vParam3, float fParam6)
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

void func_482(int iParam0)
{
	if (func_174(iParam0))
	{
		func_988(&iLocal_555, iParam0);
	}
}

void func_483(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_989(iParam0, 0, 0);
	if (func_484(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_990(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_991(iParam0, 1);
			}
			else
			{
				func_992(iParam0, 1);
			}
		}
		else
		{
			func_993(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_994())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

bool func_484(int iParam0)
{
	if (func_995(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

bool func_485()
{
	return true;
}

bool func_486(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

void func_487(char[4] cParam0, int iParam1)
{
	int iVar0;
	struct<24> Var1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!func_996(cParam0, iParam1, &iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1) && func_997(cParam0, ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
	{
		EVENT::_0x4465C3D1475BD3FD(ENTITY::GET_ENTITY_MODEL(iParam1));
	}
	if (MAP::DOES_BLIP_EXIST(cParam0->f_5423[iVar0 /*65*/].f_8))
	{
		MAP::REMOVE_BLIP(&(cParam0->f_5423[iVar0 /*65*/].f_8));
	}
	Var1.f_5 = 3;
	Var1.f_10 = -1;
	Var1.f_12 = 5;
	Var1.f_23 = 10;
	Var1.f_23.f_1 = 3;
	Var1.f_23.f_1.f_1 = 500;
	Var1.f_23.f_1.f_2 = 10000;
	Var1.f_23.f_1.f_4 = 3;
	Var1.f_23.f_1.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	MISC::_COPY_MEMORY(&(cParam0->f_5423[iVar0 /*65*/]), &(cParam0->f_5423[(cParam0->f_13145 - 1) /*65*/]), 65);
	MISC::_COPY_MEMORY(&(cParam0->f_5423[(cParam0->f_13145 - 1) /*65*/]), &Var1, 65);
	cParam0->f_13145 = (cParam0->f_13145 - 1);
}

void func_488(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_GROUP(iParam0))
		{
			PED::REMOVE_PED_FROM_GROUP(iParam0);
		}
		PED::SET_PED_CAN_RAGDOLL(iParam0, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, true);
	}
}

void func_489(int iParam0)
{
	func_998(iParam0, 8, 0);
}

void func_490(int iParam0, bool bParam1)
{
	if (!func_999(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1000(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
		{
			func_998(iParam0, 1, 0);
		}
	}
	func_998(iParam0, 16, bParam1);
}

void func_491(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_486(iParam0))
	{
		return;
	}
	if (func_549(iParam0))
	{
		if (Global_1360165[iParam0 /*1157*/].f_129 != 0 && Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_1001(iParam0, 56, 1);
		func_27(&(Global_1359489.f_40), 1);
	}
	func_490(iParam0, 0);
	func_998(iParam0, 4, 0);
	func_489(iParam0);
	func_1002(iParam0);
	func_1003(iParam0, 37, 1);
	bVar0 = func_181(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_1004(iParam0, 0);
	bVar2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_1005(iParam0, 64, 1))
	{
		func_1003(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_1003(iParam0, 33, 1);
		func_1003(iParam0, 34, 1);
		func_1006(iParam0, 1056964608 /* Float: 0.5f */, -1, 1061158912 /* Float: 0.75f */);
		func_1007(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_1001(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_1001(iParam0, 35, 1);
			if (bParam8)
			{
				func_1001(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_1008(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], GET_HASH_KEY("REL_GANG_DUTCHS"));
		}
		if (bVar2)
		{
			PERSCHAR::_0xBB68908CD11AEBDC(iVar1);
		}
		func_1003(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_1001(iParam0, 33, 1);
		func_1007(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = fParam4;
			func_27(&(Global_1360165[iParam0 /*1157*/].f_130), 1);
		}
		else
		{
			func_476(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
		if (bParam9)
		{
			func_1001(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_1009(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_1005(iParam0, 45, 1))
	{
		func_1003(iParam0, 45, 1);
	}
	func_1010(iParam0, 16, 1);
	func_1003(iParam0, 44, 1);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;
	if (bParam5)
	{
		if (func_181(func_1011(iParam0), 0))
		{
			func_1012(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_492(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_493(int iParam0)
{
	if (!func_492(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_494(int iParam0)
{
	return iParam0 != 0;
}

int func_495(int iParam0)
{
	if (!func_492(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

bool func_496(int iParam0)
{
	if (!func_1013(iParam0))
	{
		return false;
	}
	return (!func_407() || MISC::IS_BIT_SET(Global_40.f_7854, iParam0));
}

int func_497(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return Global_1899528.f_11[iParam0];
}

bool func_498(int iParam0)
{
	int iVar0;

	*iParam0 = -1;
	iVar0 = 0;
	while (iVar0 < Global_1392915)
	{
		if (func_1014(iVar0))
		{
			*iParam0 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_499(int iParam0, int iParam1)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return;
	}
	Global_1899528.f_11[iParam0] = iParam1;
}

bool func_500(int iParam0, int iParam1)
{
	return (Global_1899528.f_3[iParam0] && iParam1) != 0;
}

void func_501(int iParam0)
{
	Global_1899528.f_3[iParam0] = 0;
}

int func_502(int iParam0, int iParam1)
{
	return func_378(iParam0, iParam1, 4, MISC::GET_HASH_KEY(func_1015(iParam1)));
}

void func_503(int iParam0, int iParam1)
{
	if (!func_500(iParam0, iParam1))
	{
	}
	Global_1899528.f_3[iParam0] = (Global_1899528.f_3[iParam0] || iParam1);
}

bool func_504(int iParam0)
{
	return func_311(iParam0) == 0;
}

int func_505(int iParam0)
{
	int iVar0;

	if (Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_506(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3;

	if (Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_504(iParam0))
	{
		return -1;
	}
	if (func_20() != -1)
	{
		iVar2 = func_505(iParam0);
		if (iVar2 >= 0)
		{
			func_1016(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = Global_1898329;
			Global_1898330[iVar1] = iParam0;
			Global_1898346[iVar1 /*6*/] = { Var3 };
			func_1017(iVar1, 1);
			func_1016(iParam0, 1);
			Global_1898329++;
			if (Global_1898329 > 15)
			{
				Global_1898329 = 15;
			}
			return iVar1;
		}
	}
	else
	{
		iVar2 = func_505(iParam0);
		if (iVar2 >= 0)
		{
			func_1016(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Global_1898330)
			{
				if (!func_206(Global_1898330[iVar0]))
				{
					Global_1898330[iVar0] = iParam0;
					Global_1898346[iVar0 /*6*/] = { Var3 };
					func_1017(iVar0, 1);
					func_1016(iParam0, 1);
					Global_1898329++;
					if (Global_1898329 > 15)
					{
						Global_1898329 = 15;
					}
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

bool func_507(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

void func_508(int iParam0, bool bParam1)
{
	if (!func_977(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_455(iParam0, 1);
	}
	else
	{
		func_454(iParam0, 1);
	}
	func_1019(func_1018(iParam0), bParam1);
}

bool func_509(int iParam0)
{
	return func_1020(iParam0, 2);
}

int func_510(int iParam0)
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

int func_511(int iParam0)
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

int func_512(int iParam0)
{
	return iParam0 & 31;
}

bool func_513()
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

int func_514(int iParam0)
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

int func_515(int iParam0)
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

void func_516(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_517()
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

int func_518(int iParam0)
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

void func_519(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_520(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1021(iParam0);
	}
	else
	{
		func_1022(iParam0, iParam1);
	}
	func_1023();
}

bool func_521(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1024(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40567[iVar1], iVar2);
}

bool func_522(int iParam0)
{
	if (!func_206(iParam0))
	{
		return false;
	}
	switch (func_211(iParam0))
	{
		case 1:
			switch (func_287(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return true;
			}
			break;
		case 8:
			switch (func_287(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return true;
			}
			break;
	}
	return false;
}

void func_523(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_167(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_628(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1026(func_1025(iParam0), 6);
}

void func_524(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_167(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_628(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1027(func_1025(iParam0), 6);
}

int func_525(int iParam0)
{
	int iVar0;

	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Global_1898164.f_1[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_526(int iParam0)
{
	struct<5> Var0;

	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164.f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164.f_162 == 1)
	{
		Global_1898164.f_162 = 0;
		Global_1898164.f_1[0 /*5*/] = { Var0 };
		return 1;
	}
	Global_1898164.f_1[iParam0 /*5*/] = { Var0 };
	Global_1898164.f_162 = (Global_1898164.f_162 - 1);
	func_1028(iParam0, Global_1898164.f_162);
	return 1;
}

bool func_527(int iParam0)
{
	return iParam0 != 0;
}

bool func_528(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_529(int iParam0, var uParam1)
{
	if (!func_528(iParam0))
	{
		return;
	}
	if (*uParam1 == GET_HASH_KEY("TSTAG_NO_TAGS"))
	{
		return;
	}
	func_1029(iParam0, *uParam1, 0);
	func_1030(uParam1);
	Global_1935183.f_24 = 1;
}

void func_530(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_531(float fParam0, float fParam1)
{
	fParam0->f_1 = (func_578() - fParam1);
	func_1031(fParam0, 1);
	func_1032(fParam0, 2);
	fParam0->f_2 = 0f;
}

bool func_532(float fParam0)
{
	return func_235(*fParam0, 2);
}

int func_533()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_534(bool bParam0)
{
	if (func_1033())
	{
		Global_1357509 = 1;
	}
	if (func_1034(GET_HASH_KEY("CAMERA_ITEM")))
	{
	}
	if (bParam0 && Global_1935630.f_44 == GET_HASH_KEY("WEAPON_KIT_CAMERA"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_UNARMED"), true, 0, false, false);
		Global_1935630.f_44 = GET_HASH_KEY("WEAPON_UNARMED");
	}
}

struct<4> func_535(int iParam0, int iParam1)
{
	struct<4> Var0;

	Var0 = { func_1035(iParam0, iParam1) };
	Var0.f_3 = func_1036(iParam0, iParam1);
	return Var0;
}

int func_536(int iParam0)
{
	if (func_211(iParam0) == 1)
	{
		return func_287(iParam0);
	}
	return -1;
}

int func_537(int iParam0)
{
	if (func_211(iParam0) == 8)
	{
		return func_287(iParam0);
	}
	return -1;
}

char[] func_538(int iParam0)
{
	var uVar0;

	if (!func_288(iParam0))
	{
		return uVar0;
	}
	uVar0 = Global_1347702[iParam0 /*49*/].f_3;
	return uVar0;
}

void func_539(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_82(32768))
	{
		return;
	}
	if (!func_82(32768))
	{
		func_1037(1, bParam1);
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
	if (func_82(32768))
	{
		Global_2621440[iParam0 /*12066*/].f_9.f_14 = func_300();
	}
}

void func_540(int iParam0, vector3 vParam1, var uParam4)
{
	Global_2621440[iParam0 /*12066*/].f_9.f_7 = { vParam1 };
	Global_2621440[iParam0 /*12066*/].f_9.f_13 = uParam4;
	Global_2621440[iParam0 /*12066*/].f_9 = 5;
	Global_2621440[iParam0 /*12066*/].f_9.f_15 = func_387(vParam1, 1);
}

bool func_541(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_542(int iParam0)
{
	return Global_43884 == iParam0;
}

void func_543(bool bParam0)
{
	Global_1935496.f_18 = !bParam0;
}

bool func_544(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_545(int iParam0)
{
	Global_1310750.f_16035 = (Global_1310750.f_16035 - (Global_1310750.f_16035 && iParam0));
}

bool func_546(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_547()
{
	return Global_1109400.f_245;
}

bool func_548(var uParam0, int iParam1)
{
	return func_170(uParam0->f_64, iParam1);
}

bool func_549(int iParam0)
{
	return func_737(iParam0, 16, 1);
}

void func_550(int iParam0)
{
	int iVar0;

	iParam0 = func_281(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_277(iParam0);
	if (!SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		func_557(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_557(iParam0);
	}
}

bool func_551(int iParam0)
{
	iParam0 = func_281(iParam0);
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

void func_552(int iParam0)
{
	iParam0 = func_281(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	}
	Global_1900383[iParam0 /*45*/].f_25 = 0;
}

void func_553(int iParam0)
{
	iParam0 = func_281(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}
}

bool func_554(int iParam0)
{
	if (!func_1038(iParam0))
	{
		return false;
	}
	if (!func_346())
	{
		return true;
	}
	return false;
}

void func_555(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = func_281(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_558(iParam0))
	{
		return;
	}
	iVar0 = func_231(iParam0);
	func_1039(iParam0);
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (PED::_0xAA9F048DCF69B6DC(iVar1))
	{
		if (!func_554(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&iVar0);
	func_1040(iParam0, 0);
	func_557(iParam0);
}

bool func_556(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_276(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

void func_557(int iParam0)
{
	iParam0 = func_281(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
}

bool func_558(int iParam0)
{
	iParam0 = func_281(iParam0);
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

void func_559(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	vector3 vVar12;
	float fVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = func_231(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		bVar1 = true;
	}
	if (!PED::IS_PED_READY_TO_RENDER(iVar0))
	{
		return;
	}
	if (func_1041(iParam0, 64))
	{
		func_552(iParam0);
		return;
	}
	bVar2 = false;
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && !MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		if (!MAP::GET_BLIP_FROM_ENTITY(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_626(42);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
		}
		if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) && bVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
			{
				Global_1900383[iParam0 /*45*/].f_27 = MAP::BLIP_ADD_FOR_ENTITY(-515518185, iVar0);
				MAP::SET_BLIP_SPRITE(Global_1900383[iParam0 /*45*/].f_27, GET_HASH_KEY("BLIP_SADDLE"), true);
				func_1042(&(Global_1900383[iParam0 /*45*/].f_27));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
		}
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}
	bVar4 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (Global_1935630.f_40 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && bVar4)
	{
		func_552(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if (Global_40.f_1095.f_1[iParam0 /*436*/].f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = GET_HASH_KEY("BLIP_STYLE_PLAYER_HORSE");
	}
	else if (iParam0 == 1)
	{
		iVar5 = -1230993421;
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (func_1043(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
			{
				MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
			}
			return;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		Global_1900383[iParam0 /*45*/].f_26 = MAP::BLIP_ADD_FOR_ENTITY(iVar5, iVar0);
		Global_1900383[iParam0 /*45*/].f_25 = 0;
		func_1044(&(Global_1900383[iParam0 /*45*/].f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1041(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_1045(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar11))
		{
			if (PED::GET_MOUNT(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar15 = func_1046(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1047(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 3)
		{
			iVar17 = -401963276;
			Global_1900383[iParam0 /*45*/].f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = PED::_GET_PED_REMAINING_REVIVAL_TIME(iVar0, true);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 9)
				{
					iVar17 = 430539302;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 10)
				{
					iVar17 = -995247980;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 11)
				{
					iVar17 = -25056193;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 11;
				}
			}
			else if (fVar19 <= 1f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 12)
				{
					iVar17 = -264630352;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 5)
			{
				iVar17 = 430539302;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 6)
			{
				iVar17 = -995247980;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 7)
			{
				iVar17 = -25056193;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 7;
			}
		}
		else if (fVar19 <= 1f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 8)
			{
				iVar17 = -264630352;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 4)
		{
			iVar17 = -1380599892;
			Global_1900383[iParam0 /*45*/].f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 2)
		{
			iVar17 = 1313031610;
			Global_1900383[iParam0 /*45*/].f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 1)
		{
			iVar17 = -1012863186;
			Global_1900383[iParam0 /*45*/].f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_1048(Global_1900383[iParam0 /*45*/].f_26);
		func_1049(Global_1900383[iParam0 /*45*/].f_26);
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar17);
		if (iVar17 == -401963276)
		{
			MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 231194138);
		}
	}
	if (iVar18 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar18);
	}
	if ((PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) == iVar0 && bVar3) && !bVar9)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 673950256);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 673950256);
	}
	if (func_906(iVar0) && !bVar9)
	{
		if (iVar5 == GET_HASH_KEY("BLIP_STYLE_PLAYER_HORSE"))
		{
			iVar20 = 561559387;
		}
		else if (iVar5 == -1230993421)
		{
			iVar20 = -201249929;
		}
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar20);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 561559387);
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, -201249929);
	}
	iVar21 = func_1043(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = GET_HASH_KEY("BLIP_HORSE_OWNED_BONDING_0");
				break;
			case 1:
				iVar22 = GET_HASH_KEY("BLIP_HORSE_OWNED_BONDING_1");
				break;
			case 2:
				iVar22 = GET_HASH_KEY("BLIP_HORSE_OWNED_BONDING_2");
				break;
			case 3:
				iVar22 = GET_HASH_KEY("BLIP_HORSE_OWNED_BONDING_3");
				break;
			case 4:
				iVar22 = GET_HASH_KEY("BLIP_HORSE_OWNED_BONDING_4");
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = GET_HASH_KEY("BLIP_HORSE_TEMP_BONDING_0");
				break;
			case 1:
				iVar22 = GET_HASH_KEY("BLIP_HORSE_TEMP_BONDING_1");
				break;
			case 2:
				iVar22 = GET_HASH_KEY("BLIP_HORSE_TEMP_BONDING_2");
				break;
			case 3:
				iVar22 = GET_HASH_KEY("BLIP_HORSE_TEMP_BONDING_3");
				break;
			case 4:
				iVar22 = GET_HASH_KEY("BLIP_HORSE_TEMP_BONDING_4");
				break;
		}
	}
	if (iVar22 == 0)
	{
		MAP::_0x44813684F72B563C(iVar0, Global_1900383[iParam0 /*45*/].f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(iVar0, Global_1900383[iParam0 /*45*/].f_26);
		MAP::_0x7563CBCA99253D1A(iVar0, iVar22);
	}
}

int func_560(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_561(int iParam0)
{
	if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0 || Global_1347702[iParam0 /*49*/].f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_562(int iParam0)
{
	var uVar0;

	uVar0 = Global_1347702[iParam0 /*49*/].f_3;
	return MISC::GET_HASH_KEY(&uVar0);
}

void func_563(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_564(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_565(int iParam0)
{
	int iVar0;

	iParam0 = func_281(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_558(iParam0))
	{
		return false;
	}
	iVar0 = func_231(iParam0);
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

void func_566(int iParam0)
{
	int iVar0;

	iParam0 = func_281(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_558(iParam0))
	{
		return;
	}
	iVar0 = func_231(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_567(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_734(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", GET_HASH_KEY("ITEMTYPE_CASH"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_568(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_1050())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_734(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", GET_HASH_KEY("ITEMTYPE_TOTAL_TAKE"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1051(iVar0);
			func_1052(iVar0, 0, 0);
		}
		func_734(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", GET_HASH_KEY("ITEMTYPE_CASH"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_95(func_94(GET_HASH_KEY("CAREER_CASH")), iVar1);
	}
}

bool func_569(int iParam0)
{
	if (!func_263(iParam0))
	{
		return false;
	}
	return func_267(iParam0, 67108864);
}

void func_570(int iParam0)
{
	char cVar0[64];
	char* sVar8;

	StringCopy(&cVar0, func_1053(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1054(cVar0);
	MAP::_0x563FCB6620523917(MISC::GET_HASH_KEY(sVar8), -1482012664);
}

void func_571(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	int iVar9;

	StringCopy(&cVar0, func_1053(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1054(cVar0);
	iVar9 = MISC::GET_HASH_KEY(sVar8);
	if (MAP::_0xE38450DBCBC70E3D(iVar9, -1305340593) || MAP::_0xE38450DBCBC70E3D(iVar9, -1482012664))
	{
		MAP::_0x6786D7AFAC3162B3(iVar9);
	}
}

bool func_572(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::CLEAR_BIT(uParam0[iVar0], iVar1);
	return bVar2;
}

bool func_573(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::SET_BIT(uParam0[iVar0], iVar1);
	return !bVar2;
}

bool func_574(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_575(int iParam0)
{
	if (!func_544(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0 /*8*/].f_4 > 0;
}

int func_576(int iParam0)
{
	if (func_544(iParam0))
	{
		return Global_17504.f_42[iParam0 /*8*/].f_4;
	}
	return 0;
}

int func_577(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;

	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	iVar4 = BUILTIN::ROUND((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
	return iVar4;
}

float func_578()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_579(int iParam0)
{
	if (!func_999(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

bool func_580(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_1055(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_581(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			func_594(&(Global_40.f_4283.f_6[iVar0 /*5*/]), bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_582(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_2;
	}
	return -1;
}

void func_583(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

int func_584()
{
	return Global_40.f_11095.f_35;
}

void func_585(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_1056(iParam0, 0);
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
		func_586(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_586(int iParam0)
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
			func_1056(Global_40.f_11922[iVar0], 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1057(1);
	}
}

bool func_587(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_588()
{
	int iVar0;
	int iVar1;

	iVar0 = func_1058(Global_1347702[9 /*49*/].f_15);
	iVar1 = func_1058(Global_1835011[69 /*74*/].f_1);
	if (func_1059(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_589(int iParam0)
{
	if (!func_205(iParam0))
	{
		return false;
	}
	return func_342(Global_1835011[iParam0 /*74*/].f_1, 1);
}

int func_590(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	Var0 = Global_1357549.f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1060(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1061(iVar6);
	}
	return iVar5;
}

int func_591(int iParam0)
{
	struct<5> Var0;
	int iVar5;

	Var0 = Global_1357549.f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1062(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_592(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_1063(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_1357549.f_1848[iVar0]), iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1357549.f_1848[iVar0]), iVar1);
	}
}

bool func_593(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return true;
		case 4:
			return true;
		case 5:
			return false;
		case 7:
			return false;
		case 9:
			return true;
		case 10:
			return false;
		case 11:
			return true;
		case 8:
			return true;
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
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return false;
		default:
			break;
	}
	return false;
}

void func_594(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_592(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_595(2, *uParam0);
		}
		else
		{
			func_596(2, *uParam0);
		}
	}
	func_1064(uParam0);
}

void func_595(int iParam0, int iParam1)
{
	if (Global_1357549.f_1483 >= 25)
	{
		Global_1357549.f_1483 = 0;
	}
	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/] = iParam0;
	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/].f_1 = iParam1;
	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/].f_2 = 0;
	Global_1357549.f_1483++;
}

void func_596(int iParam0, int iParam1)
{
	if (Global_1357549.f_1406 >= 50)
	{
		return;
	}
	if (Global_1357549.f_1252[Global_1357549.f_1406 /*3*/] != 0)
	{
		return;
	}
	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/] = iParam0;
	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/].f_1 = iParam1;
	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/].f_2 = 0;
	Global_1357549.f_1403++;
	Global_1357549.f_1406++;
}

void func_597(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_1065(iParam0, iParam1, bParam2);
}

int func_598(int iParam0)
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

int func_599(int iParam0)
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

void func_600(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
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

	iVar0 = func_1066();
	if (iParam3 == GET_HASH_KEY("HONOR_EVENT_AMBIENT_KILL") || iParam3 == GET_HASH_KEY("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_1067(iParam0);
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
	if (func_626(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1068())
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
	Global_40.f_11095.f_35 = func_324(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1066();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == GET_HASH_KEY("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_1069(iVar1);
		func_1071(func_1070(), 0, 4000);
		func_1072(Global_40.f_11095.f_35);
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
		func_1073(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_95(func_94(GET_HASH_KEY("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_599(14))
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
					sParam4 = func_1074(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_734(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_734(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_95(func_94(GET_HASH_KEY("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_599(4))
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
					sParam4 = func_1074(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_734(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, GET_HASH_KEY("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_734(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, GET_HASH_KEY("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_94(GET_HASH_KEY("HONOR_CURRENT")) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_377(10, 1);
	}
}

void func_601(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = iParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
}

int func_602(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

int func_603(int iParam0)
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

bool func_604(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_605(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_20() == -1)
	{
		if (func_1075(iParam0) && func_1076(iParam0))
		{
			func_1077(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_606(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_1078(iParam0, iParam1);
	Var0 = { func_715(iParam0, 0, 1) };
	iVar5 = func_1079(iParam0, &Var0, 0, 0);
	iVar6 = func_1080(iParam0, 0);
	if ((iVar5 > 1 && !func_129()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_624(iParam0, -2051813666))
		{
			func_340(583, 1);
		}
		else
		{
			func_340(582, 0);
		}
	}
	if (func_1081(iParam0, &Var0, *iParam1, 0, 0))
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

void func_607(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_685(iParam0, -949239683))
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

int func_608(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_604(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_623(iParam0);
	if (iVar0 == GET_HASH_KEY("AMMO") || (bParam1 && iVar0 == GET_HASH_KEY("WEAPON")))
	{
		iVar1 = func_1082(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == GET_HASH_KEY("WEAPON"))
	{
		return func_1083(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_167(bParam2), iParam0, 0);
	return iVar2;
}

bool func_609(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_610(iParam0) != 0;
}

int func_610(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_1084())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_1085(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_611(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_612(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_1084())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_611(iVar0))
		{
			if (func_362(func_1085(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_613(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_1086(48);
	func_382(0, -1);
}

bool func_614(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_342(Global_1347702[iParam0 /*49*/].f_15, 1);
}

int func_615(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_616(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

bool func_617(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_342(Global_1835011[iParam0 /*74*/].f_1, 1);
}

bool func_618(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_288(iParam0))
	{
		return false;
	}
	return func_207(Global_1347702[iParam0 /*49*/].f_15);
}

int func_619()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_362(func_1087(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_620(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_407() && (func_618(38) || func_614(38)))
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
			if (func_407() && (func_618(39) || func_614(39)))
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
			iVar9 = func_1088(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = GET_HASH_KEY("COL_EX_INTRO");
			break;
		case 41:
			if (func_407() && (func_618(41) || func_614(41)))
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
			if (func_407() && (func_618(49) || func_614(49)))
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
			iVar9 = func_1088(iParam3, 20);
			iVar14 = GET_HASH_KEY("TAXIDERMY");
			iVar11 = GET_HASH_KEY("BLIP_RC_HOBBS");
			iVar13 = GET_HASH_KEY("COL_TX_INTRO");
			break;
	}
	sVar2 = func_1089(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_1090(iParam0, iVar13, iVar14))
	{
	}
	if (func_1091(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1092(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1093(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1094(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1095(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_621(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_622(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_407() && (func_618(38) || func_614(38)))
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
			if (func_407() && (func_618(39) || func_614(39)))
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
			if (func_407() && (func_618(49) || func_614(49)))
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
		if (func_407() && (func_618(38) || func_614(38)))
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
			func_1096(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1096(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_741(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, func_1097(func_616(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1096(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1096(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == GET_HASH_KEY("DINO_BONES"))
	{
		if (func_407() && (func_618(39) || func_614(39)))
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
			func_1096(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1096(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == GET_HASH_KEY("ROCK_CARVINGS"))
	{
		if (func_407() && (func_618(49) || func_614(49)))
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
			func_1096(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1096(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_1096(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1096(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_623(int iParam0)
{
	vector3 vVar0;

	if (!func_604(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_624(int iParam0, int iParam1)
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

bool func_625(int iParam0, int iParam1)
{
	if (!func_604(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

bool func_626(int iParam0)
{
	if (!func_1098(iParam0))
	{
		return false;
	}
	return func_1099(iParam0);
}

void func_627(int iParam0)
{
	if (!func_1098(iParam0))
	{
		return;
	}
	func_1100(iParam0);
	func_1101(iParam0);
}

int func_628(int iParam0)
{
	struct<2> Var0;

	if (!func_604(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_629(int iParam0, bool bParam1)
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
	if (func_604(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1102(iVar0) || func_122(iVar0))
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

int func_630(int iParam0, bool bParam1)
{
	if (!func_604(iParam0, 0))
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

void func_631(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (!func_718(iParam0))
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

bool func_632(bool bParam0)
{
	if (func_20() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_167(bParam0));
}

bool func_633(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_715(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1103((398 + iVar28), 1);
			if (func_1104(iParam0, &Var0, iVar5, 0))
			{
				if (func_1105(iParam0, &Var6, iVar5))
				{
					Var29 = { func_1106(iParam0, Var0, iVar5, 0) };
					func_1107(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_632(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_634(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_1108(iParam0, iParam1);
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

bool func_634(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_636(iParam0))
	{
		return false;
	}
	if (!func_632(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_635(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;

	iVar0 = func_630(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_20() == -1)
		{
			func_631(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1109(iVar0);
			}
		}
		if (!func_1081(iParam0, &uVar1, 1, 0, 0))
		{
			func_1077(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1110(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_633(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == GET_HASH_KEY("WEAPON_FISHINGROD") || iVar0 == GET_HASH_KEY("WEAPON_KIT_BINOCULARS"))
			{
				func_633(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == GET_HASH_KEY("WEAPON_LASSO"))
			{
				func_633(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0))
			{
				if (iVar0 == GET_HASH_KEY("WEAPON_MELEE_KNIFE_JOHN") && !func_1068())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(iParam0))
				{
				}
				else if (!func_1111(iVar0))
				{
					func_633(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_633(iVar0, WEAPON::GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_1112(Global_35, 2, 0, 1);
				if ((((func_718(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_626(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_718(iVar7) && func_626(24))
				{
					if (!func_633(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_633(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_633(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_340(480, 1);
	}
	return true;
}

bool func_636(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_637(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_636(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_718(iVar4))
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
	if (func_362(GET_HASH_KEY("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == -897553835)
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
		func_672(func_1113(iParam0), func_671(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_20() == -1)
		{
			if (func_342(Global_1835011[14 /*74*/].f_1, 1))
			{
				func_340(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_632(0))
	{
		if (func_634(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_677(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_638(int iParam0)
{
	var uVar0;

	if ((iParam0 == GET_HASH_KEY("PROVISION_TALISMAN_EAGLE_TALON") && !func_353()) || iParam0 != GET_HASH_KEY("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_1114(Global_35, iParam0, &uVar0))
		{
			func_656(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_662();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_662();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_662();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_660();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_658();
			break;
	}
}

void func_639(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_658();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_659();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_660();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_661();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_LION_PAW"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case GET_HASH_KEY("PROVISION