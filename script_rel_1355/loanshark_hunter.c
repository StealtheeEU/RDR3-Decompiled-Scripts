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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20[1] = { 0 };
	int iLocal_22 = 0;
	int iLocal_23[2] = { 0, 0 };
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	struct<2> Local_29[1];
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	struct<2> Local_35[3];
	struct<8> Local_42[3];
	struct<4> Local_67[4];
	struct<8> Local_84[4];
	struct<18> Local_117[1];
	struct<4> Local_136 = { 0, 0, 0, 0 } ;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144[2] = { 0, 0 };
	var uLocal_147[1] = { 0 };
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	var uLocal_153[1] = { 0 };
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	bool bLocal_160 = false;
	bool bLocal_161 = false;
	bool bLocal_162 = false;
	bool bLocal_163 = false;
	bool bLocal_164 = false;
	bool bLocal_165 = false;
	bool bLocal_166 = false;
	bool bLocal_167 = false;
	bool bLocal_168 = false;
	bool bLocal_169 = false;
	bool bLocal_170 = false;
	bool bLocal_171 = false;
	bool bLocal_172 = false;
	bool bLocal_173 = false;
	bool bLocal_174 = false;
	bool bLocal_175 = false;
	bool bLocal_176 = false;
	bool bLocal_177 = false;
	bool bLocal_178 = false;
	bool bLocal_179 = false;
	bool bLocal_180 = false;
	bool bLocal_181 = false;
	bool bLocal_182 = false;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	struct<17> Local_186[1];
	struct<22> Local_204 = { 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0 } ;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 1106247680;
	var uLocal_231 = 1067450368;
	var uLocal_232 = 0;
	var uLocal_233 = 1092616192;
	var uLocal_234 = 1112014848;
	var uLocal_235 = 1106247680;
	var uLocal_236 = 1101529088;
	var uLocal_237 = 1101004800;
	var uLocal_238 = 1084227584;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	float fLocal_269 = 0f;
	int iLocal_270 = 0;
	var uLocal_271[4] = { 0, 0, 0, 0 };
	var uLocal_276[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300[4] = { 0, 0, 0, 0 };
	vector3 vLocal_305 = { 0f, 0f, 0f };
	vector3 vLocal_308 = { 0f, 0f, 0f };
	vector3 vLocal_311 = { 0f, 0f, 0f };
	vector3 vLocal_314 = { 0f, 0f, 0f };
	vector3 vLocal_317[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_327[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_343[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_353[9] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	char* sLocal_387 = NULL;
	char* sLocal_388[5] = { NULL, NULL, NULL, NULL, NULL };
	char* sLocal_394 = NULL;
	int iLocal_395 = 0;
	bool bLocal_396 = false;
	bool bLocal_397 = false;
	bool bLocal_398 = false;
	bool bLocal_399 = false;
	bool bLocal_400 = false;
	bool bLocal_401 = false;
	bool bLocal_402 = false;
	bool bLocal_403 = false;
	bool bLocal_404 = false;
	bool bLocal_405 = false;
	bool bLocal_406 = false;
	bool bLocal_407 = false;
	bool bLocal_408 = false;
	bool bLocal_409 = false;
	bool bLocal_410 = false;
	bool bLocal_411 = false;
	bool bLocal_412 = false;
	bool bLocal_413 = false;
	bool bLocal_414 = false;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	bool bLocal_422 = false;
	bool bLocal_423 = false;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	struct<2278> Var0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_27 = GET_HASH_KEY("A_M_M_UNICORPSE_01");
	iLocal_28 = GET_HASH_KEY("CS_WINTONHOLMES");
	iLocal_34 = 29;
	iLocal_265 = -1;
	iLocal_266 = -1;
	fLocal_269 = 0f;
	vLocal_305 = { -2121.416f, 28.5524f, 265.7486f };
	vLocal_308 = { -1778.91f, -180.181f, 193.8974f };
	vLocal_314 = { -2121.112f, 68.96816f, 255.4082f };
	sLocal_387 = "loanshark_winston";
	sLocal_394 = "LSHNT_sounds";
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
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	iVar0 = iParam1;
	func_62(-2135.703f, 94.53937f, 245.6003f, 20f, 1, 0, 0, 0, 0);
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_159))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_159);
	}
	func_63(GET_HASH_KEY("PROVISION_LOANSHARK_SKINS"), 1, 1, -142743235, 0);
	if (!bLocal_412)
	{
		GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(iLocal_268, 1f);
		bLocal_412 = true;
	}
	if (iVar0 == 0)
	{
		if (PED::IS_PED_READY_TO_RENDER(iLocal_143))
		{
			iLocal_26 = 1;
			func_59(cParam0);
			func_64(1, 0);
			return 6;
		}
	}
	else if (iVar0 == 1)
	{
		if (func_65(-1769.84f, -177.44f, 194.48f, -68.71f, -1769.773f, -180.0528f, 193.6738f, -46.99f, 1))
		{
			if (func_66(1, 1, 1, 0))
			{
				if (!func_49(&(vLocal_353[8 /*3*/])))
				{
					func_67(8);
					func_67(131072);
					func_67(262144);
					func_68(*cParam0, func_41(1), func_41(2), 1, 2);
					func_69(&(vLocal_353[8 /*3*/]));
				}
				else if (func_70(&(vLocal_353[8 /*3*/])) > 2f)
				{
					func_71(0);
					func_72();
					func_73(&(vLocal_353[8 /*3*/]));
					func_64(1, 1);
					return 8;
				}
			}
		}
	}
	else if (iVar0 == 2)
	{
		if (func_74())
		{
			bVar1 = func_75();
			bVar2 = func_76();
			if ((func_65(Local_67[3 /*4*/].f_1, 354.6172f, -2121.031f, 15.67427f, 262.1575f, 354.6172f, 0) && bVar1) && bVar2)
			{
				if (func_66(1, 1, 1, 0))
				{
					if (!func_49(&(vLocal_353[8 /*3*/])))
					{
						func_77();
						iLocal_19 = 3;
						func_78(&iLocal_152, iLocal_143, -89429847, "BLIP_WINPED");
						MAP::BLIP_ADD_MODIFIER(iLocal_152, -546708623);
						func_79(cParam0, "OBJ_FOLLOW", ENTITY::GET_ENTITY_COORDS(iLocal_143, true, false));
						func_68(*cParam0, func_41(2), func_41(3), 2, 3);
						func_69(&(vLocal_353[8 /*3*/]));
					}
					else if (func_70(&(vLocal_353[8 /*3*/])) > 2f)
					{
						TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
						func_80(4);
						func_67(524288);
						func_71(3);
						iLocal_18 = 4;
						func_73(&(vLocal_353[8 /*3*/]));
						func_64(1, 1);
						return 8;
					}
				}
			}
		}
	}
	else if (iVar0 == 3)
	{
		if (func_74())
		{
			if (!func_81(iLocal_144[1], 0))
			{
				func_82(&(iLocal_144[1]), -2117.592f, 17.45552f, 263.7554f, 150.5622f, 1, 1, 1, 1);
				return 2;
			}
			bVar3 = func_75();
			bVar4 = func_76();
			if (bVar3 && bVar4)
			{
				if (func_66(1, 1, 1, 0))
				{
					if (!func_49(&(vLocal_353[8 /*3*/])))
					{
						if (!func_83(8192))
						{
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_143, GET_HASH_KEY("WEAPON_MELEE_DAVY_LANTERN"), 100, false, true, 1, false, 0.5f, 1f, 752097756, false, 0f, false);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_143, GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN"), 26, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
							func_80(8192);
						}
						func_84();
						func_71(4);
						iLocal_15 = 1;
						func_67(16384);
						func_67(32768);
						func_85();
						func_77();
						func_86();
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_MELEE_DAVY_LANTERN"), true, 1, false, false);
						PED::_0x923583741DC87BCE(iLocal_143, sLocal_387);
						func_80(16);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_144[1], -2117.592f, 17.45552f, 263.7554f, 150.5622f, true, false, true);
						TASK::TASK_STAND_STILL(iLocal_144[1], -1);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_144[0], -2115.011f, 16.38608f, 264.1115f, 308.4892f, true, false, true);
						TASK::TASK_STAND_STILL(iLocal_144[0], -1);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_143, -2124.458f, 73.1898f, 254.5324f, 49.0245f, true, false, true);
						iLocal_19 = 3;
						iLocal_294 = 22;
						func_78(&iLocal_152, iLocal_143, -89429847, "BLIP_WINPED");
						func_79(cParam0, "OBJ_SEARCH_CAVE", vLocal_317[0 /*3*/]);
						func_68(*cParam0, func_41(3), func_41(4), 3, 4);
						iLocal_300[0] = 1;
						iLocal_300[1] = 1;
						func_69(&(vLocal_353[8 /*3*/]));
					}
					else if (func_70(&(vLocal_353[8 /*3*/])) > 2f)
					{
						func_87();
						func_88();
						func_73(&(vLocal_353[8 /*3*/]));
						func_64(1, 1);
						return 8;
					}
				}
			}
		}
	}
	else if (iVar0 == 4)
	{
		if (func_74())
		{
			if (!func_81(iLocal_144[1], 0))
			{
				func_82(&(iLocal_144[1]), -2117.592f, 17.45552f, 263.7554f, 150.5622f, 1, 1, 1, 1);
				return 2;
			}
			if (!bLocal_400)
			{
				bVar5 = func_89(0, -2120.824f, 120.6065f, 236.8341f, 155.131f);
				bVar6 = func_76();
				if (bVar5 && bVar6)
				{
					bLocal_400 = true;
				}
			}
			else
			{
				if (!bLocal_399)
				{
					bLocal_401 = true;
					vLocal_311 = { -2136.02f, 95.62f, 246.11f };
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_143, -2136.02f, 95.62f, 246.11f, -32.01f, true, false, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_147[0], -2115.007f, 120.2122f, 236.98f, 155.131f, true, false, true);
					ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(uLocal_147[0], false);
					func_90(iLocal_143, 1);
					func_92(iLocal_143, func_91(GET_HASH_KEY("REWARD_PED_SMALL"), 0, -1));
					func_93();
					func_94(iLocal_143, 1, 0);
					func_84();
					func_94(uLocal_147[0], 1, 0);
					bLocal_399 = true;
					return 2;
				}
				if (func_66(1, 1, 1, 1) && !PED::IS_PED_RAGDOLL(uLocal_147[0]))
				{
					if (!func_49(&(vLocal_353[8 /*3*/])))
					{
						func_71(8);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_144[1], -2117.592f, 17.45552f, 263.7554f, 150.5622f, true, false, true);
						TASK::TASK_STAND_STILL(iLocal_144[1], -1);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_144[0], -2115.011f, 16.38608f, 264.1115f, 308.4892f, true, false, true);
						TASK::TASK_STAND_STILL(iLocal_144[0], -1);
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_MELEE_DAVY_LANTERN"), true, 1, false, false);
						func_67(268435456);
						func_68(*cParam0, func_41(4), func_41(6), 4, 6);
						iLocal_300[0] = 1;
						iLocal_300[1] = 1;
						iLocal_300[3] = 1;
						iLocal_300[2] = 1;
						func_69(&(vLocal_353[8 /*3*/]));
					}
					else if (func_70(&(vLocal_353[8 /*3*/])) > 4f)
					{
						GRAPHICS::_ADD_BLOOD_POOL(ENTITY::GET_ENTITY_COORDS(uLocal_147[0], false, false), true);
						GRAPHICS::_ADD_BLOOD_POOL(ENTITY::GET_ENTITY_COORDS(iLocal_143, false, false), true);
						func_73(&(vLocal_353[8 /*3*/]));
						func_64(1, 1);
						return 8;
					}
				}
			}
		}
	}
	else if (iVar0 == 5)
	{
		if ((func_95() && func_96(GET_HASH_KEY("PROVISION_LOANSHARK_SKINS"), 1, 0)) && func_66(1, 0, 0, 0))
		{
			func_71(9);
			func_68(*cParam0, func_41(5), func_41(6), 5, 6);
			func_67(134217728);
			func_64(1, 1);
			return 8;
		}
	}
	else if (iVar0 == 6)
	{
		if (!func_81(iLocal_144[1], 0))
		{
			func_82(&(iLocal_144[1]), -1745.52f, -402.4335f, 154.6316f, 248.3821f, 1, 1, 1, 1);
			return 2;
		}
		if (func_66(1, 0, 0, 0))
		{
			func_97(GET_HASH_KEY("MONEY_LOANSHARK_WINTON_DEBT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			CLOCK::ADVANCE_CLOCK_TIME_TO(11, 0, 0);
			iLocal_300[0] = 1;
			iLocal_300[1] = 1;
			iLocal_300[3] = 1;
			iLocal_300[2] = 1;
			func_64(1, 1);
			return 9;
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
	if (func_98(cParam0))
	{
		if (func_99(cParam0->f_346))
		{
			func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
			func_100(&(cParam0->f_32), &(cParam0->f_352));
			func_101(cParam0);
		}
		else
		{
			func_102(cParam0);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			func_103(0, 1, 1);
		}
		func_11(cParam0, 7);
	}
}

void func_13(char[4] cParam0)
{
	int iVar0;

	if (func_99(cParam0->f_346))
	{
		if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 32))
		{
			func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
			if (func_101(cParam0))
			{
				func_104(cParam0, 1);
				iVar0 = func_105(cParam0);
				func_11(cParam0, iVar0);
			}
		}
	}
	else
	{
		func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
		if (func_106(cParam0))
		{
			func_107(cParam0);
			func_104(cParam0, 0);
			iVar0 = func_105(cParam0);
			func_11(cParam0, iVar0);
		}
		else
		{
			func_103(0, 1, 1);
			PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_SKIP_CUTSCENE"), true);
			func_108(cParam0);
		}
	}
}

void func_14(char[4] cParam0)
{
	int iVar0;

	iVar0 = func_109(cParam0);
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
	func_110(*cParam0, 1, 1);
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		func_111(cParam0, 0, 1);
		MISC::_0x1096603B519C905F("");
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		func_112();
		func_113(0);
		func_114(&Global_1935630, 4);
	}
	if (func_115(*cParam0))
	{
		if (func_116(Global_1392626[*cParam0 /*32*/].f_8, 8))
		{
			func_117("OBJ_COMPLETE_NOT", 7500, 0, 1, 0, 0, -1, -1, 0);
		}
		else if (func_116(Global_1392626[*cParam0 /*32*/].f_8, 16))
		{
			func_117("OBJ_COMPLETE_AB", 7500, 0, 1, 0, 0, -1, -1, 0);
		}
		else
		{
			func_117("OBJ_COMPLETE_REC", 7500, 0, 1, 0, 0, -1, -1, 0);
		}
	}
	func_39(cParam0);
	func_43(&(cParam0->f_16), 1);
	bVar0 = false;
	bVar0 = true;
	if (bVar0)
	{
		func_118();
		func_119();
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
		func_118();
		func_119();
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
					func_120(1, 1);
					func_121(&(Global_1347343.f_11), 131072);
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
		func_123(Global_1392626[*cParam0 /*32*/].f_3, iVar2, &(cParam0->f_2208), func_122(), 0, 0);
	}
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		MISC::_0x1096603B519C905F("");
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		func_113(0);
		func_112();
		func_114(&Global_1935630, 4);
	}
	func_124(*cParam0);
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
		func_125(*cParam0);
	}
	if (func_126(64, 1, 1))
	{
		iVar0 = func_127(0);
		if (func_128(iVar0))
		{
			func_22(cParam0);
			func_23(cParam0);
			return;
		}
	}
	if (func_129())
	{
		func_22(cParam0);
		func_23(cParam0);
		return;
	}
	else if (!func_49(&(cParam0->f_2064)) || IntToFloat(func_52(&(cParam0->f_2064))) > func_130(cParam0))
	{
		func_50(&(cParam0->f_2064), 1);
		if (func_131(cParam0))
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
		func_118();
		func_119();
	}
}

void func_19(var uParam0, int iParam1)
{
	func_132(*uParam0, iParam1);
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
	func_133(cParam0);
	func_134(cParam0);
	func_135(cParam0);
	if ((cParam0->f_1 != 12 && func_136(cParam0) != 2) && !func_137(Global_1392626[*cParam0 /*32*/].f_10, 2))
	{
		func_138(*cParam0);
	}
	func_135(cParam0);
	func_139(&(cParam0->f_2210[0]), &(cParam0->f_2213[0]));
	func_139(&(cParam0->f_2210[1]), &(cParam0->f_2213[1]));
	if (func_136(cParam0) == 0)
	{
		func_140(*cParam0);
	}
	func_141(&(Global_1392626[*cParam0 /*32*/].f_11), 1, 0, 1);
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
		func_112();
	}
	func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 4);
	func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 512);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_24(var uParam0)
{
	func_142(uParam0, 0);
	func_27(uParam0, 0);
	func_143(uParam0, 1);
	func_144(uParam0, 1);
	func_145(uParam0, 0);
	func_146(uParam0, 1);
	func_147(uParam0, 1, 1, 1);
}

void func_25(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_148(&(uParam0->f_1), 8);
	}
	else
	{
		func_149(&(uParam0->f_1), 8);
	}
}

void func_26(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_148(&(uParam0->f_1), 2);
	}
	else
	{
		func_149(&(uParam0->f_1), 2);
	}
}

void func_27(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_148(&(uParam0->f_1), 2048);
	}
	else
	{
		func_149(&(uParam0->f_1), 2048);
	}
}

int func_28()
{
	return func_151(func_150());
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
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	func_152(uParam0, "LSHUNAU");
	func_153();
	func_154(vLocal_308, 10f, -1);
	func_155(uParam0, 4);
	func_156(&iLocal_285, -1781.672f, -182.878f, 196.2472f, 0f, 0f, 0f, 19.05989f, 19.8101f, 12.77014f, "volCutsceneTrigger");
	func_157(&iLocal_287, -1765.586f, -186.8562f, 184.2072f, 0f, 0f, 82.49999f, 17f, 20.75f, 30f, "volCutsceneRestric");
	func_157(&iLocal_288, -1778.582f, -182.069f, 192.0962f, 0f, 0f, 78.49999f, 3.5f, 2.7f, 5f, "volILOKick");
	func_157(&iLocal_289, -1776.927f, -183.5623f, 193.8343f, 0f, 0f, 78.49998f, 5f, 5f, 5f, "volAltILOStart");
	func_156(&iLocal_290, -1781.171f, -181.4855f, 197.8257f, 0f, 0f, -17.75f, 5.5f, 5f, 1f, "volFallILOTrigger");
	func_158(uParam0, -1777.824f, -184.9108f, 196.2472f, 0f, 0f, 0f, 4.75f, 5.25f, 5f);
	func_159(uParam0, &iLocal_285, 0);
	func_160();
	func_161(uParam0, 8);
	func_162(uParam0);
	func_163(uParam0);
	if (func_96(GET_HASH_KEY("MONEY_LOANSHARK_WINTON_DEBT"), 1, 0))
	{
		func_164(GET_HASH_KEY("MONEY_LOANSHARK_WINTON_DEBT"), 1, 1, -142743235, 0);
	}
	if (func_96(GET_HASH_KEY("PROVISION_LOANSHARK_SKINS"), 1, 0))
	{
		func_164(GET_HASH_KEY("PROVISION_LOANSHARK_SKINS"), 1, 1, -142743235, 0);
	}
	if (func_165(10) == GET_HASH_KEY("PROVISION_LOANSHARK_SKINS"))
	{
		func_166(10);
	}
	func_25(&(uParam0->f_2077), 0);
	func_167(&(Global_1392626[*uParam0 /*32*/].f_8), 512);
	func_167(&(Global_1392626[*uParam0 /*32*/].f_8), 128);
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
		if (func_168(cParam0))
		{
			func_169(*cParam0, 1024);
			func_35(cParam0, 5);
			return true;
		}
	}
	if (func_126(0, 1, 0))
	{
		iVar0 = func_127(0);
		if (func_128(iVar0) && Global_1392626[*cParam0 /*32*/].f_3 != func_127(0))
		{
			func_167(&(Global_1392626[*cParam0 /*32*/].f_8), 1);
			func_35(cParam0, 6);
			return true;
		}
	}
	if (Global_1392626[*cParam0 /*32*/].f_12 != -1)
	{
		if (func_170(Global_1392626[*cParam0 /*32*/].f_12))
		{
			func_169(*cParam0, 2048);
			return true;
		}
	}
	if (Global_1392626[*cParam0 /*32*/].f_22 != -1)
	{
		if (!func_171(Global_1392626[*cParam0 /*32*/].f_22))
		{
			func_167(&(Global_1392626[*cParam0 /*32*/].f_8), 1);
			func_35(cParam0, 3);
			return true;
		}
	}
	if (func_172(*cParam0))
	{
		func_167(&(Global_1392626[*cParam0 /*32*/].f_8), 1);
		func_35(cParam0, 7);
		return true;
	}
	if (func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		func_169(*cParam0, 16384);
		func_35(cParam0, 4);
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1392626[*cParam0 /*32*/].f_11))
	{
		if (!func_174(*cParam0, (Global_1392626[*cParam0 /*32*/].f_5 + 10f)))
		{
			func_35(cParam0, 2);
			return true;
		}
	}
	else if (func_81(Global_1392626[*cParam0 /*32*/].f_11, 1))
	{
		if (!func_116(Global_1392626[*cParam0 /*32*/].f_8, 256))
		{
			if (!func_174(*cParam0, (Global_1392626[*cParam0 /*32*/].f_5 + 10f)) && !func_175(Global_1392626[*cParam0 /*32*/].f_11, 0, &(cParam0->f_2077), &(cParam0->f_2105), 0, 0))
			{
				func_35(cParam0, 2);
				return true;
			}
		}
	}
	fVar1 = BUILTIN::VDIST2(Global_1392626[*cParam0 /*32*/].f_24, Global_36);
	if (func_176(fVar1))
	{
		func_169(*cParam0, 8192);
		func_35(cParam0, 5);
		return true;
	}
	return false;
}

void func_39(char[4] cParam0)
{
	func_177(cParam0);
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		func_112();
		func_178(0);
		if (!Global_1935630.f_12)
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
		}
		UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
		func_179();
	}
	func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 4);
	if (func_136(cParam0) != 2 && !func_137(Global_1392626[*cParam0 /*32*/].f_10, 2))
	{
		func_138(*cParam0);
	}
	func_135(cParam0);
	if (func_136(cParam0) == 0)
	{
		func_140(*cParam0);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	func_180();
	func_139(&(cParam0->f_2210[0]), &(cParam0->f_2213[0]));
	func_139(&(cParam0->f_2210[1]), &(cParam0->f_2213[1]));
	func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 8);
	func_181(cParam0);
}

void func_40(char[4] cParam0)
{
	if (!func_182(*cParam0, 4))
	{
		if (func_183(Global_35, Global_1392626[*cParam0 /*32*/].f_27, Global_1392626[*cParam0 /*32*/].f_4, 1, 1))
		{
			if (cParam0->f_2204 == -1)
			{
				cParam0->f_2204 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - cParam0->f_2204) > 120000)
			{
				func_184(*cParam0);
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
		Var1 = { -1769.773f, -180.0528f, 193.6738f };
		Var1.f_3 = -47.04f;
	}
	else if (iVar0 == 2)
	{
		Var1 = { -2121.031f, 15.67427f, 262.1575f };
		Var1.f_3 = 317.878f;
	}
	else if (iVar0 == 3)
	{
		Var1 = { -2119.91f, 71.521f, 255.0462f };
		Var1.f_3 = 310.2596f;
	}
	else if (iVar0 == 4)
	{
		Var1 = { -2122.93f, 122.9368f, 236.4132f };
		Var1.f_3 = 256.3853f;
	}
	else if (iVar0 == 5)
	{
		Var1 = { -1753.249f, -397.5574f, 154.9612f };
		Var1.f_3 = 355.5246f;
	}
	else if (iVar0 == 6)
	{
		Var1 = { -1750.001f, -397.1193f, 155.117f };
		Var1.f_3 = 45.0597f;
	}
	return Var1;
}

bool func_42(var uParam0)
{
	return func_185(*uParam0, uParam0->f_3);
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
		if (func_186(cParam0))
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
	if (func_187(cParam0->f_32.f_5))
	{
		cParam0->f_32.f_5 = { func_188(*cParam0) };
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
	if (func_99(cParam0->f_346))
	{
		if (func_189(&(cParam0->f_32), cParam0->f_346, 0, 1))
		{
			if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 32))
			{
				func_190(cParam0);
				func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 32);
			}
		}
		else
		{
			if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 64))
			{
				func_191(cParam0);
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
			func_191(cParam0);
		}
		func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 32);
	}
}

bool func_49(float fParam0)
{
	return func_192(*fParam0, 1);
}

void func_50(float fParam0, bool bParam1)
{
	if (bParam1 || !func_49(fParam0))
	{
		func_69(fParam0);
	}
}

void func_51(char[4] cParam0)
{
}

int func_52(float fParam0)
{
	if (!func_49(fParam0))
	{
		return BUILTIN::ROUND((fParam0->f_1 * 1000f));
	}
	if (func_193(fParam0))
	{
		return BUILTIN::ROUND((fParam0->f_2 * 1000f));
	}
	return (func_194() - BUILTIN::ROUND((fParam0->f_1 * 1000f)));
}

bool func_53(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

bool func_54()
{
	return func_195(Global_1935630, 4096);
}

int func_55(var uParam0)
{
	func_196(&(uParam0->f_2041));
	func_197(&(uParam0->f_2052));
	HUD::TEXT_BLOCK_REQUEST("LOAN");
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2205)))
	{
	}
	else
	{
		HUD::TEXT_BLOCK_REQUEST(&(uParam0->f_2205));
	}
	if (((func_198(&(uParam0->f_2041)) && func_199(&(uParam0->f_2052))) && HUD::TEXT_BLOCK_IS_LOADED("LOAN")) && (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2205)) || HUD::TEXT_BLOCK_IS_LOADED(&(uParam0->f_2205))))
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
	if (bLocal_422)
	{
		return true;
	}
	if (func_200(uParam0))
	{
		if (func_201())
		{
			func_202(&(uParam0->f_2210[0]), &(uParam0->f_2213[0]), Global_1392626[*uParam0 /*32*/].f_27, 0f, 0f, 0f, Global_1392626[*uParam0 /*32*/].f_4, Global_1392626[*uParam0 /*32*/].f_4, Global_1392626[*uParam0 /*32*/].f_4, 0, 0, 1, 0, 0);
			func_202(&(uParam0->f_2210[1]), &(uParam0->f_2213[1]), -2009.089f, -235.1312f, 191.8717f, 0f, 0f, 0f, 200f, 200f, 200f, 0, 0, 1, 0, 0);
			func_203(&(uParam0->f_2106), Global_35, "ARTHUR", 0);
			func_203(&(uParam0->f_2106), iLocal_143, "LOAN_HUNTER2", 0);
			bLocal_422 = true;
			return true;
		}
	}
	return false;
}

void func_58(char[4] cParam0)
{
	struct<4> Var0;

	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (!func_204(Global_1392626[*cParam0 /*32*/].f_3))
	{
		if (!func_205(Global_1392626[*cParam0 /*32*/].f_3))
		{
			func_206(Global_1392626[*cParam0 /*32*/].f_3, 1);
		}
		func_207(Global_1392626[*cParam0 /*32*/].f_3, 1, 1);
		func_208(&Global_1935630, 4);
		func_209(4);
	}
	func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 4);
	func_138(*cParam0);
	MISC::_0x1096603B519C905F(func_210(*cParam0));
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	func_111(cParam0, 1, 0);
	AUDIO::CLEAR_CONVERSATION_HISTORY();
	func_178(1);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	func_211(1);
	func_212(cParam0);
	if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 512))
	{
		Var0 = { func_41(0) };
		if (!func_42(&Var0))
		{
			func_34(&(cParam0->f_16), 128);
		}
		func_68(*cParam0, func_41(0), func_41(1), 0, 1);
	}
}

void func_59(char[4] cParam0)
{
	cParam0->f_346 = func_213();
	if (iLocal_26 == 0)
	{
		func_215(cParam0, 34912);
		func_217(cParam0, 34948);
		func_219(&(cParam0->f_32), 35211);
		func_220(cParam0, func_188(*cParam0));
		func_221(&(cParam0->f_32), iLocal_287, 0, 0, 0, 0);
		func_222(&(cParam0->f_32));
		func_223(cParam0, Global_35, 0, 0, 0, 0);
		func_223(cParam0, iLocal_143, "WintonHolmes", 0, 0, 0);
		func_223(cParam0, Local_84[2 /*8*/], "p_ladle02x", 0, 0, 0);
		func_223(cParam0, Local_84[3 /*8*/], "p_mugCoffee01x", 0, 0, 0);
		func_223(cParam0, Local_84[0 /*8*/], "p_boiler01x", 0, 0, 0);
		func_223(cParam0, Local_84[1 /*8*/], "p_copperpot02bx", 0, 0, 0);
	}
	else if (iLocal_26 == 1)
	{
		func_215(cParam0, 34912);
		func_217(cParam0, 34948);
		func_219(&(cParam0->f_32), 35211);
		func_220(cParam0, func_188(*cParam0));
		func_221(&(cParam0->f_32), iLocal_287, 0, 0, 0, 0);
		func_224(&(cParam0->f_32));
		func_223(cParam0, Global_35, 0, 0, 0, 0);
		func_223(cParam0, iLocal_143, "WintonHolmes", 0, 0, 0);
		func_223(cParam0, Local_84[2 /*8*/], "p_ladle02x", 0, 0, 0);
		func_223(cParam0, Local_84[3 /*8*/], "p_mugCoffee01x", 0, 0, 0);
		func_223(cParam0, Local_84[0 /*8*/], "p_boiler01x", 0, 0, 0);
		func_223(cParam0, Local_84[1 /*8*/], "p_copperpot02bx", 0, 0, 0);
	}
	func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
}

bool func_60(char[4] cParam0)
{
	if (!func_225(cParam0))
	{
		return false;
	}
	func_226(cParam0);
	if (!func_116(Global_1392626[*cParam0 /*32*/].f_8, 512))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_348)) && func_20(Global_1392626[*cParam0 /*32*/].f_9, 16))
		{
			if (func_116(Global_1392626[*cParam0 /*32*/].f_8, 2))
			{
				func_227(&(cParam0->f_352), cParam0->f_348, 0);
			}
			else
			{
				func_228(&(cParam0->f_352), cParam0->f_348, 0, 0);
				if (func_229(&(cParam0->f_352)))
				{
					return true;
				}
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(cParam0->f_346))
		{
			if (func_99(cParam0->f_346))
			{
				if (!func_187(cParam0->f_32.f_5))
				{
					if (VOLUME::DOES_VOLUME_EXIST(cParam0->f_2040))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, cParam0->f_2040, true, 0))
						{
							if (cParam0->f_17 == 2)
							{
								func_134(cParam0);
								return true;
							}
						}
					}
					else if (BUILTIN::VDIST2(Global_36, cParam0->f_32.f_5) < 6f)
					{
						if (cParam0->f_17 == 2)
						{
							func_134(cParam0);
							return true;
						}
					}
				}
				else if (BUILTIN::VDIST2(Global_36, cParam0->f_32.f_5) < 6f)
				{
					func_134(cParam0);
					return true;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1392626[*cParam0 /*32*/].f_11))
		{
			func_230(cParam0);
			if ((!PED::IS_PED_RAGDOLL(Global_35) && !PED::IS_PED_JUMPING(Global_35)) && !PED::IS_PED_INJURED(Global_1392626[*cParam0 /*32*/].f_11))
			{
				if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 1024))
				{
					func_231(&(Global_1392626[*cParam0 /*32*/].f_11), &(cParam0->f_2216), cParam0->f_2295, &(cParam0->f_2277), 0.1f, 3, 0, cParam0->f_2296, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
					if (func_232(&(cParam0->f_2216)))
					{
						func_135(cParam0);
						func_233(cParam0);
						func_134(cParam0);
						return true;
					}
				}
			}
		}
	}
	if (func_234(cParam0))
	{
		if (cParam0->f_17 == 2)
		{
			func_134(cParam0);
			return true;
		}
	}
	return false;
}

void func_61(char[4] cParam0)
{
	int iVar0;

	func_58(cParam0);
	func_235(&(cParam0->f_2277), 0, 0, 1, 0);
	func_135(cParam0);
	func_34(&(cParam0->f_16), 1);
	func_236(cParam0);
	func_11(cParam0, func_237(cParam0));
	iVar0 = func_237(cParam0);
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

void func_62(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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

int func_63(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!bParam4)
	{
		iParam1 = func_238(iParam0, iParam1, 1, 1, -142743235);
	}
	else
	{
		iVar0 = func_239(0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			func_240(&iVar0, iParam0, &iParam1, bParam2, iParam3);
		}
	}
	if (iParam1 <= 0)
	{
		return 1;
	}
	return func_241(iParam0, iParam1, bParam2, iParam3);
}

void func_64(int iParam0, int iParam1)
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

bool func_65(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7, int iParam8)
{
	if (!func_83(8192))
	{
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_143, GET_HASH_KEY("WEAPON_MELEE_DAVY_LANTERN"), 100, false, true, 1, false, 0.5f, 1f, 752097756, false, 0f, false);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_143, GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN"), 26, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		func_80(8192);
	}
	if (((func_81(iLocal_143, 0) && func_183(iLocal_143, vParam0, 10f, 0, 1)) && PED::IS_PED_ON_MOUNT(iLocal_143)) && (func_183(Global_35, vParam4, 10f, 1, 1) && PED::IS_PED_ON_MOUNT(Global_35)))
	{
		iLocal_15 = 2;
		return true;
	}
	else
	{
		func_242(iLocal_143, vParam0, fParam3, iParam8);
		func_242(Global_35, vParam4, fParam7, iParam8);
	}
	return false;
}

bool func_66(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	return true;
	if (bParam0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_144[1]) || !PED::IS_PED_READY_TO_RENDER(iLocal_144[1]))
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_143) || !PED::IS_PED_READY_TO_RENDER(iLocal_143))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_144[1]) || !PED::IS_PED_READY_TO_RENDER(iLocal_144[1]))
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_147[0]) || !PED::IS_PED_READY_TO_RENDER(uLocal_147[0]))
		{
			return false;
		}
	}
	return true;
}

void func_67(int iParam0)
{
	func_243(&iLocal_296, iParam0);
}

void func_68(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<4> Var4;

	if (func_9() != iParam9)
	{
		func_244(0);
	}
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_245(Global_1392626[iParam0 /*32*/].f_3, Var0, Var4, iParam9, iParam10);
}

void func_69(float fParam0)
{
	func_246(fParam0, 0f);
}

float func_70(var uParam0)
{
	if (!func_49(uParam0))
	{
		return 0f;
	}
	if (func_193(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_247() - uParam0->f_1);
}

void func_71(int iParam0)
{
	int iVar0;

	if (iParam0 == 11)
	{
		iVar0 = iLocal_16;
		iVar0++;
		iLocal_16 = iVar0;
		if (iLocal_16 == 11)
		{
			iLocal_16 = (iVar0 - 1);
		}
	}
	else
	{
		iLocal_16 = iParam0;
	}
	iLocal_15 = 0;
}

void func_72()
{
	TASK::TASK_CLEAR_LOOK_AT(iLocal_143);
	TASK::CLEAR_PED_TASKS(iLocal_143, true, false);
	TASK::SET_PED_PATH_MAY_ENTER_WATER(iLocal_143, true);
	TASK::_SET_PED_PATH_MAY_ENTER_DEEP_WATER(iLocal_143, true);
	TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(iLocal_143, false, 1f);
	if (!PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::PLAYER_ID()))
	{
		PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), iLocal_143, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 4, 2, 0);
		PED::_0x86FAFC18E3D4380C(iLocal_267, 0);
		PLAYER::_0xDD33A82352C4652F(PLAYER::GET_PLAYER_INDEX(), iLocal_143, 3);
	}
	func_248(1);
	if (iLocal_19 == 1)
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_143, Local_67[iLocal_19 /*4*/], iLocal_294, 2060, -1, 0, 0, -1);
	}
	else
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_143, Local_67[iLocal_19 /*4*/], iLocal_294, 2062, -1, 0, 0, -1);
	}
	func_249(4);
}

void func_73(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_74()
{
	if (!INTERIOR::IS_VALID_INTERIOR(iLocal_270))
	{
		iLocal_270 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-2127.173f, 113.6928f, 231.7336f, "m05_bearcave_main");
	}
	else if (!INTERIOR::IS_INTERIOR_READY(iLocal_270))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_270);
	}
	else
	{
		return true;
	}
	return false;
}

bool func_75()
{
	if (func_89(0, -2131.792f, 102.5571f, 244.4036f, 148.6094f))
	{
		func_250(0);
		return true;
	}
	return false;
}

bool func_76()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (!Local_42[iVar0 /*8*/].f_7)
		{
			if (func_251(1, &(Local_42[iVar0 /*8*/]), Local_42[iVar0 /*8*/].f_5, Local_42[iVar0 /*8*/].f_1, Local_42[iVar0 /*8*/].f_4, 1, 1, 0, 1, 1, 0, 0))
			{
				if (PED::IS_PED_READY_TO_RENDER(Local_42[iVar0 /*8*/]))
				{
					func_90(Local_42[iVar0 /*8*/], 0);
					func_252(Local_42[iVar0 /*8*/], Local_42[iVar0 /*8*/].f_6, 1, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_42[iVar0 /*8*/], true);
					AUDIO::DISABLE_PED_PAIN_AUDIO(Local_42[iVar0 /*8*/], true);
					AUDIO::STOP_PED_SPEAKING(Local_42[iVar0 /*8*/], true);
					ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(Local_42[iVar0 /*8*/], false);
					if (iVar0 == 0)
					{
						func_253(Local_42[iVar0 /*8*/], -1514638394);
						PED::APPLY_PED_DAMAGE_PACK(Local_42[iVar0 /*8*/], "PD_Animal_attack_blood_body_upper_left", 0f, 1f);
						PED::APPLY_PED_DAMAGE_PACK(Local_42[iVar0 /*8*/], "PD_Animal_attack_right_body_Enemy", 0f, 1f);
						PED::APPLY_PED_DAMAGE_PACK(Local_42[iVar0 /*8*/], "PD_Animal_attack_left_arm_Enemy", 0f, 1f);
						PED::APPLY_PED_DAMAGE_PACK(Local_42[iVar0 /*8*/], "PD_Animal_attack_body_abdomen_Enemy", 0f, 1f);
					}
					else if (iVar0 == 1)
					{
						func_253(Local_42[iVar0 /*8*/], -1762535879);
						PED::APPLY_PED_DAMAGE_PACK(Local_42[iVar0 /*8*/], "PD_Animal_attack_blood_body_upper_left", 0f, 1f);
						PED::APPLY_PED_DAMAGE_PACK(Local_42[iVar0 /*8*/], "PD_Animal_attack_right_body_Enemy", 0f, 1f);
						PED::APPLY_PED_DAMAGE_PACK(Local_42[iVar0 /*8*/], "PD_Animal_attack_left_face1_Enemy", 0f, 1f);
						PED::APPLY_PED_DAMAGE_PACK(Local_42[iVar0 /*8*/], "PD_Animal_attack_right_face2_Enemy", 0f, 1f);
						PED::APPLY_PED_DAMAGE_PACK(Local_42[iVar0 /*8*/], "PD_Animal_attack_body_abdomen_Enemy", 0f, 1f);
					}
					else
					{
						func_253(Local_42[iVar0 /*8*/], 1232157485);
						PED::APPLY_PED_DAMAGE_PACK(Local_42[iVar0 /*8*/], "PD_Animal_attack_blood_body_upper_left", 0f, 1f);
						PED::APPLY_PED_DAMAGE_PACK(Local_42[iVar0 /*8*/], "PD_Animal_attack_right_body_Enemy", 0f, 1f);
						PED::APPLY_PED_DAMAGE_PACK(Local_42[iVar0 /*8*/], "PD_Animal_attack_left_arm_Enemy", 0f, 1f);
						PED::APPLY_PED_DAMAGE_PACK(Local_42[iVar0 /*8*/], "PD_Animal_attack_left_face1_Enemy", 0f, 1f);
						PED::APPLY_PED_DAMAGE_PACK(Local_42[iVar0 /*8*/], "PD_Animal_attack_body_abdomen_Enemy", 0f, 1f);
					}
					if (!Local_42[iVar0 /*8*/].f_7)
					{
						Local_42[iVar0 /*8*/].f_7 = 1;
						iVar1++;
					}
				}
			}
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 3)
	{
		return true;
	}
	return false;
}

void func_77()
{
	func_156(&(uLocal_276[0]), -2119.784f, 24.55419f, 265.265f, 0f, 0f, -3.057443f, 24.84983f, 18.72117f, 12.99595f, "LS_CV_CAVE_ENTR");
	func_156(&(uLocal_276[1]), -2119.569f, 27.75162f, 266.1345f, 0f, 0f, 8.815397f, 14.50672f, 7.423642f, 6.220411f, "LS_CV_CAVE_MOUTH");
	POPULATION::_0xB56D41A694E42E86(uLocal_276[1], 0, 0, 0, -1, -1, 0);
	PATHFIND::_0x19C7567D2F2287D6(uLocal_276[1], 1);
	func_254(&(uLocal_276[2]), -2120.898f, 70.364f, 257.225f, 0f, 0f, 12.05922f, 6f, 4.564754f, 5f, "LS_CV_CAVE_BRANCH");
	func_156(&(uLocal_276[4]), -2114.812f, 75.72562f, 254.238f, 0f, 0f, -50.02331f, 3.634923f, 5.208362f, 5.065354f, "LS_CV_CAVE_TUN_RGHT");
	func_156(&(uLocal_276[3]), -2126.36f, 74.42384f, 254.4863f, 0f, 0f, 47.99086f, 3.423497f, 10.16938f, 6.04715f, "LS_CV_CAVE_TUN_LFT");
	func_156(&(uLocal_276[5]), -2118.432f, 100.364f, 246.3393f, 0f, 0f, 0f, 65.13773f, 42.67842f, 17.04913f, "LS_CV_CAVE_MAIN_ROOM");
	func_157(&(uLocal_276[6]), -2093.959f, 99.28654f, 246.0553f, 0f, 0f, 100.5f, 34.5f, 18.5f, 13.75f, "CV_CAVE_RIGHT_SIDE");
}

void func_78(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	if (!MAP::DOES_BLIP_EXIST(*iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		*iParam0 = MAP::BLIP_ADD_FOR_ENTITY(iParam2, iParam1);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, sParam3);
		}
	}
}

void func_79(char[4] cParam0, char* sParam1, char[12] cParam2)
{
	if (!func_255(sParam1, 0, 0, -1, -1, 0))
	{
		func_256(sParam1);
		if (!func_49(&(cParam0->f_2067)))
		{
			func_50(&(cParam0->f_2067), 0);
		}
		else
		{
			func_69(&(cParam0->f_2067));
		}
		cParam0->f_2073 = { cParam2 };
		cParam0->f_2076 = MISC::GET_DISTANCE_BETWEEN_COORDS(cParam0->f_2073, Global_36, true);
	}
}

void func_80(int iParam0)
{
	func_243(&iLocal_295, iParam0);
}

bool func_81(int iParam0, int iParam1)
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
	if (func_257(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_257(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_257(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_257(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_257(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_257(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_257(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_257(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_82(var uParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
	*uParam0 = func_258(&iVar11, &Var0);
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
		if (!func_81(*uParam0, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_83(int iParam0)
{
	return func_257(iLocal_295, iParam0);
}

void func_84()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (!PED::IS_PED_DEAD_OR_DYING(Local_42[iVar0 /*8*/], true))
		{
			PED::EXPLODE_PED_HEAD(Local_42[iVar0 /*8*/], GET_HASH_KEY("WEAPON_COUGAR"));
		}
		iVar0++;
	}
}

void func_85()
{
	PED::ADD_RELATIONSHIP_GROUP("Cougars", &iLocal_395);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_147[0], iLocal_395);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_395, GET_HASH_KEY("PLAYER"));
}

void func_86()
{
	if (!VOLUME::DOES_VOLUME_EXIST(uLocal_271[0]))
	{
		func_254(&(uLocal_271[0]), -2121.525f, 51.92086f, 260.778f, 0f, 0f, 0f, 6.345665f, 3.003633f, 4.015388f, "CNV_INITIAL_ROAR");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uLocal_271[1]))
	{
		func_254(&(uLocal_271[1]), -2120.874f, 54.53851f, 260.778f, 0f, 0f, 0f, 6.345665f, 3.003633f, 4.015388f, "CNV_SECONDARY_ROAR");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uLocal_271[2]))
	{
		func_254(&(uLocal_271[2]), -2109.688f, 78.98119f, 252.0246f, 0f, 0f, -49f, 2.239681f, 2.325752f, 3.473848f, "CNV_WRONG_PATH_ROAR");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uLocal_271[3]))
	{
		func_254(&(uLocal_271[3]), -2126.971f, 75.01608f, 254.243f, 0f, 0f, 134.1165f, 2.18944f, 1.447863f, 1.917972f, "CNV_MOAN");
	}
}

void func_87()
{
	WEAPON::SET_CURRENT_PED_WEAPON(iLocal_143, GET_HASH_KEY("WEAPON_MELEE_DAVY_LANTERN"), false, 1, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(iLocal_143, GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
	TASK::TASK_SWAP_WEAPON(iLocal_143, 1, 1, 0, 0);
	func_80(16384);
}

void func_88()
{
	if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_143, 0))
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_143, Local_67[iLocal_19 /*4*/], iLocal_294, 2062, -1, 0, 0, -1);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_143, false, false);
	}
	func_259();
	func_249(11);
}

bool func_89(int iParam0, vector3 vParam1, float fParam4)
{
	if (!func_81(uLocal_147[iParam0], 0))
	{
		if (func_251(1, &(uLocal_147[iParam0]), GET_HASH_KEY("A_C_COUGAR_01"), vParam1, fParam4, 1, 1, 0, 1, 1, 1, 1))
		{
			TASK::TASK_STAND_STILL(uLocal_147[iParam0], -1);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_147[iParam0], false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_147[iParam0], true);
			AUDIO::_0x3A00D87B20A2A5E4(uLocal_147[iParam0], 1);
			func_90(uLocal_147[iParam0], 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_147[iParam0], 6, true);
			if (iParam0 == 0)
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(uLocal_147[0]);
				func_260(uLocal_147[0]);
				PED::SET_PED_CONFIG_FLAG(uLocal_147[0], 542, true);
				PED::_SET_PED_BODY_COMPONENT(uLocal_147[0], 263759244);
				PED::_UPDATE_PED_VARIATION(uLocal_147[0], true, true, true, true, false);
				FLOCK::_SET_ANIMAL_RARITY(uLocal_147[0], 1);
				ENTITY::_SET_ENTITY_CARRYING_FLAG(uLocal_147[0], 7, false);
				func_261(uLocal_147[0], "BLIP_COUGAR", 1);
			}
			func_262(uLocal_147[iParam0], vParam1);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_90(int iParam0, bool bParam1)
{
	func_263(iParam0, bParam1);
}

int func_91(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;

	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_96(GET_HASH_KEY("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (Var1.f_1[iVar24] == GET_HASH_KEY("CURRENCY_CASH"))
		{
			return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = Var1.f_1[iVar24];
			if (func_264(iVar25, 0) && func_265(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

bool func_92(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_266(iParam0);
		return func_267(iParam0, GET_HASH_KEY("CURRENCY_CASH"), iParam1, iVar0);
	}
	return DECORATOR::DECOR_SET_INT(iParam0, "loot_money", iParam1);
}

void func_93()
{
	PED::APPLY_PED_DAMAGE_PACK(iLocal_143, "PD_Animal_attack_blood_body_upper_left", 0f, 1f);
	PED::APPLY_PED_DAMAGE_PACK(iLocal_143, "PD_Animal_attack_right_body_Enemy", 0f, 1f);
	PED::APPLY_PED_DAMAGE_PACK(iLocal_143, "PD_Animal_attack_left_arm_Enemy", 0f, 1f);
	PED::APPLY_PED_DAMAGE_PACK(iLocal_143, "PD_Animal_attack_left_face1_Enemy", 0f, 1f);
	PED::APPLY_PED_DAMAGE_PACK(iLocal_143, "PD_Animal_attack_right_face2_Enemy", 0f, 1f);
	PED::APPLY_PED_DAMAGE_PACK(iLocal_143, "PD_Animal_attack_body_abdomen_Enemy", 0f, 1f);
}

void func_94(int iParam0, bool bParam1, bool bParam2)
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

bool func_95()
{
	if (func_268())
	{
		func_269(uLocal_147[0], 1, 0);
		return true;
	}
	return false;
}

bool func_96(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_264(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_270(iParam0);
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
		if (!func_271(iParam0, 1))
		{
			return false;
		}
	}
	return func_272(iParam0, 0, bParam2) >= iParam1;
}

bool func_97(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_264(iParam0, 0))
	{
		return false;
	}
	if (!func_273(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_274(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_275(iParam0, bParam2);
	iVar2 = 0;
	if (func_272(iParam0, 0, 0) == 0)
	{
		if (func_276(iParam0))
		{
			iVar5 = func_277(iParam0);
			iVar6 = func_278(iVar5);
			iVar7 = func_279(iVar6) + 1;
			func_280(iVar5);
			if (func_281(38))
			{
				func_282(483, 0);
			}
			else
			{
				func_282(482, 0);
			}
			if (iVar7 == func_283(iVar6))
			{
				func_97(func_284(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_285() && func_286(4))
				{
					if (func_285() && (func_287(38) || func_281(38)))
					{
						func_289(38, func_284(iVar6), 0, 0, func_288(), 0, -1, 0);
						func_290(2);
					}
					else
					{
						func_289(38, func_284(iVar6), 0, 0, func_288(), 0, -1, 0);
						func_290(1);
					}
				}
			}
			else if (func_285() && func_286(4))
			{
				if (func_285() && (func_287(38) || func_281(38)))
				{
					func_289(38, 0, 0, 0, func_288(), 0, -1, 0);
					func_290(2);
				}
				else
				{
					func_289(38, 0, 0, 0, func_288(), 0, -1, 0);
					func_290(1);
				}
			}
			if (func_285() && func_286(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (func_285() && (func_287(38) || func_281(38)))
					{
						func_291(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_291(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_270(iParam0) == GET_HASH_KEY("CLOTHING"))
	{
		if ((!func_265(iParam0, 866047851) && !func_265(iParam0, -1979000645)) && !func_265(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_292(iParam0, 8388608) && !func_293(28))
	{
		func_294(28);
	}
	if (!bVar3)
	{
		if (func_265(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_295(iParam0) == -1447088266)
			{
				iVar1 = func_297(func_296(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_298() == -1)
					{
						func_299(iVar1);
					}
					if (func_300(0) && func_301(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_302(iParam0, iVar0, iParam5);
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
					if (func_298() == -1)
					{
						func_299(iParam0);
					}
					if (func_300(0) && func_301(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_302(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_270(iParam0) == GET_HASH_KEY("WEAPON"))
		{
			if (!func_303(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_270(iParam0) == GET_HASH_KEY("AMMO") && func_304(iParam0))
		{
			if (!func_305(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_265(iParam0, 866047851))
		{
			func_306(iParam0);
		}
		else if (func_265(iParam0, 2000026003))
		{
			func_307(iParam0);
		}
		else if (func_265(iParam0, -103750053))
		{
			func_309(func_308(GET_HASH_KEY("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == GET_HASH_KEY("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_309(func_310(GET_HASH_KEY("COLLECTED"), GET_HASH_KEY("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_265(iParam0, -121341956) && !func_265(iParam0, 606799272))
		{
			if (iParam0 != GET_HASH_KEY("WEAPON_KIT_DETECTOR") && iParam0 != GET_HASH_KEY("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (func_311(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_282(498, 0);
				}
			}
			if (func_265(iParam0, -2017733358) || func_265(iParam0, -1369131378))
			{
				func_312(iParam0);
			}
		}
		else if (func_265(iParam0, -136654233))
		{
			if (func_265(iParam0, -1021472396))
			{
			}
		}
		else if (func_265(iParam0, -1466706512) && func_265(iParam0, 1147021565))
		{
			func_282(484, 0);
		}
		else if (func_265(iParam0, 1147021565) && func_265(iParam0, -524514947))
		{
		}
		else if (func_265(iParam0, 554195525))
		{
		}
		else if (func_265(iParam0, 589988438))
		{
			if (func_313())
			{
				func_314(GET_HASH_KEY("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_265(iParam0, 787083290) && func_265(iParam0, 949916894))
		{
			func_315(iParam0);
		}
		else if (func_265(iParam0, -1718133314))
		{
			func_316(iParam0);
		}
		else if (func_265(iParam0, -1738650224))
		{
			func_317(iParam0);
		}
		else if (func_265(iParam0, -1112814642) && func_265(iParam0, 949916894))
		{
			func_318(iParam0);
		}
		else if (iParam0 == GET_HASH_KEY("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_265(iParam0, 1841149704))
		{
			func_319();
		}
		else if (func_265(iParam0, 606799272))
		{
			func_320(iParam0, iParam1);
			func_321(iParam0);
		}
		else if (func_265(iParam0, -1112814642) && func_265(iParam0, -1697809989))
		{
			func_322(iParam0, 0, 0, 0);
		}
		else if (func_265(iParam0, -2017733358) || func_265(iParam0, -1369131378))
		{
			func_312(iParam0);
		}
		else if (func_265(iParam0, -1921346699))
		{
			if (func_298() != -1)
			{
				return false;
			}
			func_323(iParam0, iParam5, iParam8);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_265(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_96(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_97(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_96(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_97(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_96(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_97(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_96(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_97(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_96(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_97(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_96(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_97(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_265(iParam0, -839724752) && func_292(iParam0, 4))
		{
			if (!func_281(42))
			{
				func_324(iParam0);
			}
		}
		else if (func_265(iParam0, 1399091007))
		{
			func_325(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_265(iParam0, 1248798204))
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
				func_97(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_294(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					func_326(PLAYER::PLAYER_PED_ID(), GET_HASH_KEY("UPGRADE_OFFHAND_HOLSTER"), 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_327(&iVar9, 0))
				{
					func_301(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case GET_HASH_KEY("UPGRADE_BANDOLIER"):
				if (func_298() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					func_326(PLAYER::PLAYER_PED_ID(), GET_HASH_KEY("UPGRADE_BANDOLIER"), 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case GET_HASH_KEY("WEAPON_KIT_BINOCULARS"):
				break;
			case GET_HASH_KEY("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_282(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_328();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_329();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_330();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_331();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_332();
				break;
			case GET_HASH_KEY("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_01"):
				func_333(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_01"), 0);
				func_334(499813453, 0);
				func_335(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_02"):
				func_333(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_02"), 0);
				func_334(499813453, 0);
				func_335(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_03"):
				func_333(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_03"), 0);
				func_334(499813453, 0);
				func_335(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_04"):
				func_333(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_05"), 0);
				func_334(666607663, 0);
				func_336(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_05"):
				func_333(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_06"), 0);
				func_334(666607663, 0);
				func_336(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_06"):
				func_333(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_07"), 0);
				func_334(666607663, 0);
				func_336(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_07"):
				func_333(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_09"), 0);
				func_334(-220219788, 0);
				func_337(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_08"):
				func_333(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_10"), 0);
				func_334(-220219788, 0);
				func_337(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_09"):
				func_333(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_11"), 0);
				func_334(-220219788, 0);
				func_337(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_10"):
				func_333(218622660, GET_HASH_KEY("TREASURE_HUNT_LOOT_13"), 0);
				func_334(218622660, 0);
				func_338(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_11"):
				func_333(218622660, GET_HASH_KEY("TREASURE_HUNT_LOOT_14"), 0);
				func_334(218622660, 0);
				func_338(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_13"):
				func_333(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_16"), 0);
				func_334(390004462, 0);
				func_339(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_14"):
				func_333(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_17"), 0);
				func_334(390004462, 0);
				func_339(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_15"):
				func_333(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_18"), 0);
				func_334(390004462, 0);
				func_339(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_16"):
				func_333(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_20"), 0);
				func_334(6410548, 0);
				func_340(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_17"):
				func_333(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_21"), 0);
				func_334(6410548, 0);
				func_340(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_18"):
				func_333(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_22"), 0);
				func_334(6410548, 0);
				func_340(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_19"):
				func_333(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_23"), 0);
				func_334(6410548, 0);
				func_340(8);
				break;
			case GET_HASH_KEY("CONSUMABLE_AGED_PIRATE_RUM"):
				func_342(242, func_341(GET_HASH_KEY("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_GINSENG_ELIXIER"):
				func_342(240, func_341(GET_HASH_KEY("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_VALERIAN_ROOT"):
				func_342(241, func_341(GET_HASH_KEY("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case GET_HASH_KEY("CONSUMABLE_POTENT_MEDICINE"):
			case GET_HASH_KEY("CONSUMABLE_MEDICINE"):
			case GET_HASH_KEY("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_343(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_343(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_343(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case GET_HASH_KEY("CONSUMABLE_TONIC"):
			case GET_HASH_KEY("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_343(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_343(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case GET_HASH_KEY("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_343(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_HAIR_TONIC"):
				func_282(488, 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_HAIR_GREASE"):
				func_282(491, 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX"):
				func_282(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_97(func_344(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_97(func_345(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_293(1))
				{
					func_282(487, 0);
				}
				break;
			case GET_HASH_KEY("KIT_GUN_OIL"):
				func_282(486, 0);
				break;
			case GET_HASH_KEY("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_298() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case GET_HASH_KEY("UPGRADE_UPG_COFFEE_KIT"):
				func_282(496, 0);
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
		func_346(&iVar10);
		if (!func_347(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_300(0))
		{
			return true;
		}
		if (func_270(iParam0) == GET_HASH_KEY("CLOTHING"))
		{
			func_348(iParam0);
		}
		if (func_265(iParam0, -1979000645))
		{
			func_349(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_300(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_97(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_350(iVar2, 0);
		}
	}
	Var35 = { func_351(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	func_352(iParam0);
	if (fParam6 > 0f)
	{
		if (func_265(iParam0, -839724752))
		{
			func_353(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_354(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

bool func_98(char[4] cParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_348)))
	{
		if (!func_228(&(cParam0->f_352), cParam0->f_348, 0, 0))
		{
			return false;
		}
	}
	else
	{
		func_103(1, 1, 1);
		func_355(cParam0);
		if (!func_356(cParam0))
		{
			return false;
		}
		if (func_357())
		{
			func_358(1);
			return false;
		}
	}
	if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 32))
	{
		return false;
	}
	return true;
}

bool func_99(char* sParam0)
{
	return (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && ANIMSCENE::_0x5D7BFDA2290B4E39(sParam0));
}

void func_100(var uParam0, var uParam1)
{
	struct<8> Var0;

	if (func_359(uParam1, 32768))
	{
		Var0 = { func_360(uParam0) };
		func_361(uParam0, &Var0);
		if (func_359(uParam1, 131072))
		{
			func_362(uParam0, 268435456);
			if (func_187(uParam0->f_289))
			{
				uParam0->f_289 = { func_363(uParam1, uParam1->f_1450) };
			}
			if (func_187(uParam0->f_286))
			{
				uParam0->f_286 = { func_363(uParam1, uParam1->f_1450) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_286, &(uParam0->f_286.f_2), false);
				uParam0->f_286.f_2 = (uParam0->f_286.f_2 + 0.5f);
			}
		}
		if (func_359(uParam1, 268435456))
		{
			func_364(&(uParam0->f_284), 16384);
		}
	}
	else if (func_359(uParam1, 524288))
	{
		func_362(uParam0, 67108864);
		func_365(uParam1, 524288);
	}
	if (func_366(uParam1, 128))
	{
		func_362(uParam0, 32);
	}
	if (uParam1->f_1669 != 0)
	{
		uParam0->f_296 = uParam1->f_1669;
		if (uParam1->f_1450 >= 0 && func_367(&(uParam1->f_782[uParam1->f_1450 /*41*/]), 256))
		{
			func_364(&(uParam0->f_284), 524288);
		}
	}
	if (*uParam1 == 0 && CAM::_0x927B810E43E99932(&(uParam1->f_1458)))
	{
		MISC::_COPY_MEMORY(&(uParam0->f_297), &(uParam1->f_1458), 16);
	}
}

int func_101(char[4] cParam0)
{
	char cVar0[32];

	StringCopy(&cVar0, cParam0->f_346, 32);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 1;
	}
	return func_368(cVar0, &(cParam0->f_32), cParam0);
}

void func_102(char[4] cParam0)
{
	TASK::CLEAR_PED_TASKS(Global_35, true, false);
	if (ENTITY::DOES_ENTITY_EXIST(Global_1392626[*cParam0 /*32*/].f_11))
	{
		TASK::TASK_LOOK_AT_ENTITY(Global_35, Global_1392626[*cParam0 /*32*/].f_11, -1, 0, 51, 0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Global_1392626[*cParam0 /*32*/].f_11, -1, -1f, -1f, -1f);
	}
}

void func_103(int iParam0, int iParam1, int iParam2)
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

void func_104(char[4] cParam0, bool bParam1)
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
	if (func_99(cParam0->f_346))
	{
		func_369(&(cParam0->f_32));
	}
	else
	{
		func_370(cParam0);
	}
	func_371(&(cParam0->f_32));
	StringCopy(&(cParam0->f_348), "", 32);
}

int func_105(char[4] cParam0)
{
	if (iLocal_26 != 0 && iLocal_26 != 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		func_97(GET_HASH_KEY("MONEY_LOANSHARK_WINTON_DEBT"), 1, 0, 0, 0, 1248274121, 0, 0, 0, 0);
		func_164(GET_HASH_KEY("PROVISION_LOANSHARK_SKINS"), 1, 0, -142743235, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_84[2 /*8*/]))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_84[2 /*8*/], Local_84[2 /*8*/].f_1, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(Local_84[2 /*8*/], Local_84[2 /*8*/].f_4, 1, true);
	}
	func_68(*cParam0, func_41(1), func_41(2), 1, 2);
	return 8;
}

bool func_106(char[4] cParam0)
{
	return false;
}

void func_107(char[4] cParam0)
{
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
}

void func_108(char[4] cParam0)
{
}

int func_109(char[4] cParam0)
{
	MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	func_372();
	func_373(cParam0);
	func_374();
	func_375();
	func_376(iLocal_143);
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_286))
	{
		func_157(&iLocal_286, -2009.607f, -228.6459f, 115.8722f, 0f, 0f, 0f, 700f, 700f, 500f, "MissionArea");
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_144[0]))
	{
		ENTITY::_0xC3ABCFBC7D74AFA5(iLocal_144[0], 6, 1);
	}
	if (iLocal_16 >= 9)
	{
		ENTITY::_0xC3ABCFBC7D74AFA5(Global_35, 15, 1);
		func_377(1);
	}
	if (!bLocal_182)
	{
		func_378(63, 0);
		func_379(63, 9, 1, 0);
		bLocal_182 = true;
	}
	if (MAP::DOES_BLIP_EXIST(Local_136.f_3))
	{
		if (!func_380(60))
		{
			func_379(60, 10, 1, 1);
		}
	}
	if (iLocal_16 >= 4)
	{
		if (!func_381(67108864))
		{
			if (func_382(iLocal_143) && !func_357())
			{
				if (func_383(&(cParam0->f_2106), "LS_HNT2_WLOOT", 0))
				{
					func_67(67108864);
				}
			}
		}
	}
	if (iLocal_16 >= 9)
	{
		if (CLOCK::GET_CLOCK_HOURS() < 9 || CLOCK::GET_CLOCK_HOURS() > 15)
		{
			CLOCK::ADVANCE_CLOCK_TIME_TO(11, 0, 0);
		}
		else
		{
			func_384(16, 0, 0, 0);
		}
	}
	switch (iLocal_16)
	{
		case 0:
			func_385(cParam0);
			break;
		case 1:
			func_385(cParam0);
			break;
		case 2:
			func_386();
			func_385(cParam0);
			break;
		case 3:
			func_386();
			if (func_387(cParam0))
			{
				if (!func_81(iLocal_143, 0))
				{
					iLocal_16 = 7;
				}
			}
			break;
		case 4:
			func_388(cParam0);
			break;
		case 5:
			if (func_389(cParam0))
			{
				if (iLocal_20[0] == 5)
				{
					iLocal_16 = 7;
				}
			}
			break;
		case 6:
			func_390(cParam0);
			break;
		case 7:
			func_391(cParam0);
			break;
		case 8:
			func_392(cParam0);
			break;
		case 9:
			func_393(cParam0);
			break;
		case 10:
			if (func_394(cParam0))
			{
				return 9;
			}
			break;
	}
	return 8;
}

void func_110(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_395(iParam0))
	{
		return;
	}
	else if (!func_128(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (!func_396(1))
	{
		func_397(1);
	}
	func_138(iParam0);
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
		Global_40.f_9422[2 /*7*/] = func_398();
		func_399(&(Global_40.f_9422[2 /*7*/]), 0, 0, 0, 3, 0, 0, 0);
	}
	func_400(Global_1392626[iParam0 /*32*/].f_3, bParam2, bParam1, 0, 1);
	if (Global_1392626[iParam0 /*32*/].f_7 != -1)
	{
		func_401(Global_1392626[iParam0 /*32*/].f_7);
	}
}

void func_111(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_402(0))
	{
		if (func_403(0))
		{
			func_404(0);
		}
	}
	if (func_402(1))
	{
		if (func_403(1))
		{
			func_404(1);
		}
	}
}

void func_112()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_113(bool bParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_298() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13) && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_405(iVar0, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = iVar0;
		Global_1898077.f_8 = func_406();
		Global_1898077.f_9 = func_407(Global_1894899.f_2);
		func_408(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	Global_1898077.f_2 = 0;
}

void func_114(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_115(int iParam0)
{
	return func_116(Global_1392626[iParam0 /*32*/].f_8, 64);
}

bool func_116(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

var func_117(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 1);
	}
	if (Global_1572887.f_12 != -1)
	{
		return func_409(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_410(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_409(sVar0, iParam1, 0, 0, 1, 1);
}

void func_118()
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

void func_119()
{
	Global_1572864.f_8 = -1;
	Global_1572864.f_9 = -1;
	Global_1572864.f_10 = -1;
	func_244(0);
	func_411(0);
	func_412(0);
	func_413(0);
	func_414(0);
	func_415(1f);
}

void func_120(bool bParam0, bool bParam1)
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
		func_416(0);
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

void func_121(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_122()
{
	return false;
}

void func_123(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_417(Global_1347343.f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_121(&(Global_1347343.f_11), 64);
	}
	if (bParam4)
	{
		func_121(&(Global_1347343.f_11), 16384);
	}
	if (func_418() >= 2)
	{
		if (!func_417(Global_1347343.f_11, 16384))
		{
			func_121(&(Global_1347343.f_11), 8);
		}
		func_415(0.88f);
	}
	StringCopy(&(Global_1347343.f_3), sParam2, 64);
	Global_1347343.f_2 = uParam0;
	Global_1347343 = 0;
	Global_1347343.f_1 = iParam1;
	func_208(&Global_1935630, 2048);
	func_419(bParam5);
}

void func_124(int iParam0)
{
	if (!func_395(iParam0))
	{
		return;
	}
	else if (!func_128(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	func_138(iParam0);
	func_167(&(Global_1392626[iParam0 /*32*/].f_8), 1);
	if (iParam0 == 2)
	{
		Global_40.f_9422[2 /*7*/] = func_398();
		func_399(&(Global_40.f_9422[2 /*7*/]), 0, 0, 0, 3, 0, 0, 0);
	}
	Global_40.f_9052.f_1[iParam0] = func_398();
	func_399(&(Global_40.f_9052.f_1[iParam0]), 0, 0, 2, 0, 0, 0, 0);
	func_420(Global_1392626[iParam0 /*32*/].f_3);
	func_421(Global_1392626[iParam0 /*32*/].f_3, 0);
}

void func_125(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	char* sVar3;

	if (func_182(iParam0, 4))
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
	if (func_182(iParam0, 4))
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
			Global_1392626[iParam0 /*32*/].f_23 = func_422(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 4096 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_MEMORY", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_422(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 2048 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_WANTED_REGION", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_422(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 16384 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_PREV_WANTED", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_422(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 8192 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_COMBAT", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_422(sVar3, 10000, 0, 0, 0, 1);
		}
		func_29(&(Global_1392626[iParam0 /*32*/].f_9), 8192);
	}
}

bool func_126(int iParam0, bool bParam1, bool bParam2)
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
		if (func_423())
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
		iVar0 = func_424(Global_1898164.f_1[0 /*5*/]);
		if (func_425(iVar0) && func_426(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_128(Global_1898164.f_1[0 /*5*/]))
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

int func_127(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

bool func_128(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_129()
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

float func_130(var uParam0)
{
	return 1000f;
}

bool func_131(var uParam0)
{
	if (func_427(iLocal_270, Global_36))
	{
		func_428();
		return false;
	}
	if ((func_136(uParam0) == 4 || func_136(uParam0) == 5) || func_136(uParam0) == 1)
	{
		if (func_81(iLocal_143, 0))
		{
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_159) && ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_143, iLocal_159))
			{
				if (!bLocal_169)
				{
					if (func_429("pl_breakout"))
					{
						bLocal_169 = true;
					}
				}
				else if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(iLocal_159, "U_M_M_GriSurvivalist_01"))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_144[0]))
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_143, Global_35, 100f, -1, 0, 3f, iLocal_144[0]);
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_143, Global_35, 100f, -1, 0, 3f, 0);
					}
				}
			}
			else if (!func_430(iLocal_143, 518218985))
			{
				TASK::CLEAR_PED_TASKS(iLocal_143, true, false);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_144[0]))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_143, Global_35, 100f, -1, 0, 3f, iLocal_144[0]);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_143, Global_35, 100f, -1, 0, 3f, 0);
				}
			}
		}
		if (func_183(Global_35, vLocal_308, 100f, 1, 1))
		{
			return false;
		}
	}
	return true;
}

void func_132(int iParam0, int iParam1)
{
	if (!func_395(iParam0))
	{
		return;
	}
	else if (!func_128(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (func_204(Global_1392626[iParam0 /*32*/].f_3) || func_205(Global_1392626[iParam0 /*32*/].f_3))
	{
		func_431(Global_1392626[iParam0 /*32*/].f_3, 0, 2);
	}
	if (iParam1 == 0)
	{
		MISC::CLEAR_BIT(&(Global_40.f_9052), iParam0);
		func_138(iParam0);
	}
}

void func_133(char[4] cParam0)
{
	int iVar0;

	iVar0 = func_136(cParam0);
	if (iVar0 == 0)
	{
		func_432(5);
	}
	else if (iVar0 == 1)
	{
		func_432(6);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_151))
	{
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iLocal_151);
	}
	if (bLocal_182)
	{
		func_378(63, 1);
		func_379(63, 9, 0, 0);
		bLocal_182 = false;
	}
	func_433(cParam0, 1);
}

void func_134(char[4] cParam0)
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
	func_73(&(cParam0->f_17.f_12));
}

void func_135(char[4] cParam0)
{
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 1024))
	{
		func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 1024);
		if (func_81(Global_1392626[*cParam0 /*32*/].f_11, 0))
		{
			func_235(&(cParam0->f_2277), 0, 0, 1, 0);
			func_434(&(Global_1392626[*cParam0 /*32*/].f_11));
		}
	}
}

int func_136(char[4] cParam0)
{
	return cParam0->f_15;
}

bool func_137(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_138(int iParam0)
{
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	if (MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/]))
	{
		func_435(&(Global_1392626[iParam0 /*32*/].f_10));
		MAP::REMOVE_BLIP(&(Global_1392626[iParam0 /*32*/]));
	}
	if (MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/].f_1))
	{
		func_435(&(Global_1392626[iParam0 /*32*/].f_10));
		MAP::REMOVE_BLIP(&(Global_1392626[iParam0 /*32*/].f_1));
	}
}

void func_139(var uParam0, var uParam1)
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

void func_140(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392626[iParam0 /*32*/].f_30))
	{
		func_436(Global_1392626[iParam0 /*32*/].f_30);
		VOLUME::_DELETE_VOLUME(Global_1392626[iParam0 /*32*/].f_30);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392626[iParam0 /*32*/].f_31))
	{
		func_436(Global_1392626[iParam0 /*32*/].f_31);
		VOLUME::_DELETE_VOLUME(Global_1392626[iParam0 /*32*/].f_31);
	}
	if (iParam0 == 4)
	{
		func_437(1411.856f, 1166.743f, 184.1507f, 200f, 5);
	}
}

void func_141(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_142(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_148(&(uParam0->f_1), 16384);
	}
	else
	{
		func_149(&(uParam0->f_1), 16384);
	}
}

void func_143(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_148(&(uParam0->f_1), 256);
	}
	else
	{
		func_149(&(uParam0->f_1), 256);
	}
}

void func_144(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_149(iParam0, 16);
	}
	else
	{
		func_148(iParam0, 67108864);
		func_148(iParam0, 16);
	}
}

void func_145(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_148(&(uParam0->f_1), 128);
	}
	else
	{
		func_149(&(uParam0->f_1), 128);
	}
}

void func_146(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_149(iParam0, 256);
	}
	else
	{
		func_148(iParam0, 256);
	}
}

void func_147(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_149(iParam0, 268435456);
	}
	else
	{
		func_148(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_149(iParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_148(iParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_149(iParam0, 536870912);
	}
	else
	{
		func_148(iParam0, 536870912);
	}
}

void func_148(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_149(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_150()
{
	return Global_1572864.f_8;
}

int func_151(int iParam0)
{
	if (func_438(iParam0) == 6)
	{
		if (func_424(iParam0) == 0)
		{
			return func_439(iParam0);
		}
	}
	return -1;
}

void func_152(var uParam0, char* sParam1)
{
	StringCopy(&(uParam0->f_2205), sParam1, 24);
}

void func_153()
{
	Global_1393237.f_199 = 1;
}

void func_154(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam4)
	{
		case 1:
			iVar1 = 0;
			iVar2 = 2;
			break;
		case 0:
			iVar1 = 3;
			iVar2 = 5;
			break;
		default:
			iVar1 = 0;
			iVar2 = 5;
			break;
	}
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		if (BUILTIN::VDIST(Global_1393237.f_11[iVar0 /*30*/].f_3, vParam0) < fParam3)
		{
			func_440(iVar0);
		}
		iVar0++;
	}
}

void func_155(var uParam0, int iParam1)
{
	uParam0->f_12 = iParam1;
}

void func_156(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*iParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_157(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*iParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_158(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	uParam0->f_17.f_9 = { vParam7 };
	uParam0->f_17.f_5 = (vParam7.x + 2f);
	func_157(&(uParam0->f_17.f_8), vParam1, vParam4, uParam0->f_17.f_9, "LS CORE Dismount area");
}

void func_159(var uParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	uParam0->f_2040 = *iParam1;
	vVar0 = { VOLUME::_GET_VOLUME_SCALE(uParam0->f_2040) };
	vVar3 = { VOLUME::_GET_VOLUME_ROTATION(uParam0->f_2040) };
	vVar6 = { VOLUME::_GET_VOLUME_COORDS(uParam0->f_2040) };
	if (bParam2)
	{
		func_158(uParam0, vVar6, vVar3, vVar0);
	}
}

void func_160()
{
	STREAMING::REQUEST_MODEL(GET_HASH_KEY("SCRIPTEDBALL"), false);
}

void func_161(var uParam0, int iParam1)
{
	uParam0->f_13 = iParam1;
}

void func_162(var uParam0)
{
	func_441(uParam0);
	func_442(uParam0);
	func_443();
	func_444();
	func_445();
	func_446();
	func_447();
	func_448();
	func_449();
	func_450();
}

void func_163(var uParam0)
{
	int iVar0;

	func_451(&(uParam0->f_2041), iLocal_28);
	func_451(&(uParam0->f_2041), iLocal_27);
	func_451(&(uParam0->f_2041), GET_HASH_KEY("P_BOILER01X"));
	func_451(&(uParam0->f_2041), GET_HASH_KEY("P_COPPERPOT02BX"));
	func_451(&(uParam0->f_2041), GET_HASH_KEY("P_LADLE02X"));
	func_451(&(uParam0->f_2041), GET_HASH_KEY("P_MUGCOFFEE01X"));
	func_451(&(uParam0->f_2041), GET_HASH_KEY("A_C_HORSE_MORGAN_BAY"));
	func_451(&(uParam0->f_2041), GET_HASH_KEY("A_C_COUGAR_01"));
	STREAMING::REQUEST_PTFX_ASSET();
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_452(&(uParam0->f_2052), Local_29[iVar0 /*2*/]);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		TASK::REQUEST_WAYPOINT_RECORDING(Local_67[iVar0 /*4*/]);
		iVar0++;
	}
}

bool func_164(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	if (!func_264(iParam0, 0))
	{
		return false;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_453(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return false;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_354(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return false;
	}
	if (!func_96(iParam0, 1, bParam4))
	{
		return false;
	}
	Var5 = { func_351(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var5))
	{
		if ((func_272(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_272(iParam0, 0, 0) - iParam1) < 0)
		{
			func_164(iParam0, func_272(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return false;
		}
	}
	if (func_270(iParam0) == GET_HASH_KEY("WEAPON"))
	{
		if (!func_454(iParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!func_455(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return false;
	}
	if (iParam0 == GET_HASH_KEY("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!func_300(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != GET_HASH_KEY("UPGRADE_FSH_BAIT_NONE"))
	{
		func_354(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_456(iParam0, iParam1);
	return true;
}

int func_165(int iParam0)
{
	if (iParam0 >= 25 || iParam0 <= -1)
	{
		return 0;
	}
	return Global_20710[iParam0 /*45*/].f_1;
}

void func_166(int iParam0)
{
	if (iParam0 >= 25 || iParam0 <= -1)
	{
		return;
	}
	Global_20710[iParam0 /*45*/].f_1 = 0;
}

void func_167(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_168(var uParam0)
{
	if (!func_81(iLocal_143, 0))
	{
		return true;
	}
	else if ((func_175(iLocal_143, 0, &(uParam0->f_2077), &(uParam0->f_2105), 0, 0) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_143, true, false), 20f, true)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_143))
	{
		if (!bLocal_162)
		{
			if (func_457(Global_35, iLocal_289, 0, 1) && !FIRE::IS_ENTITY_ON_FIRE(iLocal_143))
			{
				if (!func_49(&(vLocal_353[6 /*3*/])))
				{
					if (!func_49(&(vLocal_353[7 /*3*/])))
					{
						func_69(&(vLocal_353[7 /*3*/]));
					}
					else if (func_70(&(vLocal_353[7 /*3*/])) > 1.5f)
					{
						return true;
					}
				}
				else if (func_49(&(vLocal_353[7 /*3*/])))
				{
					func_73(&(vLocal_353[7 /*3*/]));
				}
			}
			else
			{
				return true;
			}
		}
		else if (func_49(&(vLocal_353[7 /*3*/])))
		{
			func_73(&(vLocal_353[7 /*3*/]));
		}
	}
	return false;
}

void func_169(int iParam0, int iParam1)
{
	if (!func_395(iParam0))
	{
		return;
	}
	func_458(&(Global_1392626[iParam0 /*32*/].f_10), iParam1);
	func_458(&(Global_1392626[iParam0 /*32*/].f_10), 2);
	func_167(&(Global_1392626[iParam0 /*32*/].f_8), 1);
}

bool func_170(int iParam0)
{
	if (!func_459(iParam0))
	{
		return false;
	}
	return func_460(iParam0, 33554432);
}

bool func_171(int iParam0)
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
	iVar0 = func_461(func_398());
	if (func_462(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_462(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_462(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_462(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_462(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_462(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_462(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_462(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_462(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_462(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_462(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_462(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_462(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_462(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_462(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_462(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_462(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_172(int iParam0)
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
		if (func_463(21))
		{
			return true;
		}
	}
	return false;
}

bool func_173(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_464(iParam0, bParam1, bParam2, bParam3))
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

bool func_174(int iParam0, float fParam1)
{
	if (BUILTIN::VDIST2(Global_1392626[iParam0 /*32*/].f_24, Global_36) > (fParam1 * fParam1) && iParam0 != func_151(Global_1572864.f_8))
	{
		return false;
	}
	return true;
}

bool func_175(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_465(uParam2, 1, iVar0);
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
			if (func_466(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_467(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_468(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_467(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_469(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_467(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_470(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_467(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_464(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_467(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_471(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_472(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_467(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_473(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_467(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_474(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_467(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_474(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_467(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_475(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_467(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_476(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_467(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_477(uParam2, 4000))
				{
					if ((func_478(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_479(uParam2, iParam0)) && func_480(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_467(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_478(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_479(uParam2, iParam0)) && func_480(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_467(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_481(iParam0, Global_1935630.f_41))
							{
								func_482();
								*uParam3 = 2;
								func_467(iParam0, uParam2, *uParam3);
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
						if (func_481(iParam0, Global_1935630.f_41))
						{
							func_482();
							*uParam3 = 2;
							func_467(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_483(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_194() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_482();
						*uParam3 = 2;
						func_467(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_484())
					{
						if (func_481(iParam0, Global_1935630.f_42))
						{
							func_482();
							*uParam3 = 2;
							func_467(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_485(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_467(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_486(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_467(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_487(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_467(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_488(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_467(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_489(uParam2, 4000))
				{
					if (func_490(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_467(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_491(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_467(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_492(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_467(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_176(float fParam0)
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

void func_177(char[4] cParam0)
{
	int iVar0;

	func_493(&Local_204, iLocal_143);
	if (bLocal_182)
	{
		func_378(63, 1);
		func_379(63, 9, 0, 0);
		bLocal_182 = false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_143))
	{
		AUDIO::STOP_PED_SPEAKING(iLocal_143, false);
	}
	iVar0 = func_136(cParam0);
	if (iVar0 == 0)
	{
		func_432(5);
	}
	else
	{
		if (iVar0 != 2)
		{
			if (func_255("OBJ_SEARCH", 0, 0, -1, -1, 0) || func_255("OBJ_CONFRONT_HUN", 0, 0, -1, -1, 0))
			{
				UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
				func_112();
			}
			func_494("LS_HNT2_MCS1_SN", 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_144[0]))
		{
			func_495(iLocal_144[0], 0);
		}
		func_432(6);
	}
	func_496(cParam0, 8);
}

void func_178(int iParam0)
{
	Global_36580 = iParam0;
}

void func_179()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1347702)
	{
		if (func_425(iVar0))
		{
			if (func_497(iVar0, 4))
			{
				if (func_497(iVar0, 16))
				{
					func_498(iVar0, 1);
				}
				if (func_497(iVar0, 8))
				{
					func_499(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_180()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

void func_181(char[4] cParam0)
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
		iVar1 = func_136(cParam0);
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

bool func_182(int iParam0, int iParam1)
{
	if (func_395(iParam0))
	{
		return (Global_40.f_9052.f_11[iParam0] && iParam1) != 0;
	}
	return false;
}

bool func_183(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_500(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_184(int iParam0)
{
	if (!func_182(iParam0, 8))
	{
		func_138(iParam0);
		func_501(iParam0);
		func_502(iParam0, 8);
	}
}

int func_185(vector3 vParam0, var uParam3)
{
	int iVar0;

	if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) != 1)
	{
		func_503(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_504(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_505(0, 0);
		if (func_506(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			func_507(1, 0);
		}
	}
	else
	{
		func_507(1, 0);
	}
	func_411(0);
	func_508(0, vParam0, uParam3);
	return 1;
}

bool func_186(char[4] cParam0)
{
	float fVar0;
	var uVar1;

	fVar0 = 200f;
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_147[0]))
	{
		if (FIRE::IS_ENTITY_ON_FIRE(uLocal_147[0]))
		{
			StringCopy(&(cParam0->f_2208), "HUN2_FL_SPL", 16);
			return true;
		}
		if (iLocal_16 == 8)
		{
			if (ENTITY::_0x0CCEFC6C2C95DA2A(&uVar1, uLocal_147[0], 0, Global_35) == 0 && !ENTITY::_IS_ENTITY_FULLY_LOOTED(uLocal_147[0]))
			{
				if (!func_49(&uLocal_384))
				{
					func_69(&uLocal_384);
				}
				else if (func_70(&uLocal_384) > 1.5f)
				{
					StringCopy(&(cParam0->f_2208), "HUN2_FL_SPL", 16);
					return true;
				}
			}
			else if (func_49(&uLocal_384))
			{
				func_73(&uLocal_384);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_151))
	{
		if (!bLocal_180 && !bLocal_181)
		{
			if ((ENTITY::IS_ENTITY_IN_WATER(iLocal_151) && ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iLocal_151) > 0.8f) || FIRE::IS_ENTITY_ON_FIRE(iLocal_151))
			{
				StringCopy(&(cParam0->f_2208), "HUN2_FL_SPL", 16);
				return true;
			}
		}
	}
	if (func_464(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
	{
		StringCopy(&(cParam0->f_2208), "HUN2_FL_LAW", 16);
		return true;
	}
	if (iLocal_16 == 9 || iLocal_16 == 10)
	{
		if (bLocal_180 && (PED::IS_PED_DEAD_OR_DYING(func_509(0), true) || TASK::IS_PED_IN_WRITHE(func_509(0))))
		{
			StringCopy(&(cParam0->f_2208), "HUN2_FL_HRSDED", 16);
			return true;
		}
		if (bLocal_181 && (PED::IS_PED_DEAD_OR_DYING(func_509(1), true) || TASK::IS_PED_IN_WRITHE(func_509(1))))
		{
			StringCopy(&(cParam0->f_2208), "HUN2_FL_HRSDED", 16);
			return true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_144[1]))
	{
		if (func_510(iLocal_144[1], 1) || TASK::IS_PED_IN_WRITHE(iLocal_144[1]))
		{
			StringCopy(&(cParam0->f_2208), "HUN2_FL_HRSDED", 16);
			return true;
		}
	}
	if (cParam0->f_1 == 8)
	{
		if (iLocal_16 <= 4)
		{
			if ((!func_81(iLocal_143, 0) && iLocal_18 != 13) && iLocal_18 != 12)
			{
				StringCopy(&(cParam0->f_2208), "HUN2_FL_DEAD", 16);
				return true;
			}
			else if (func_511(iLocal_143, fVar0))
			{
				if (!PED::IS_PED_DEAD_OR_DYING(iLocal_143, true))
				{
					StringCopy(&(cParam0->f_2208), "HUN2_FL_WINLT", 16);
					return true;
				}
			}
		}
		else if (func_512())
		{
			StringCopy(&(cParam0->f_2208), "HUN2_FL_CAVELT", 16);
			return true;
		}
		if (iLocal_16 < 5)
		{
			if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_143, false, false), GET_HASH_KEY("WEAPON_THROWN_MOLOTOV"), 8f, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_143, false, false), GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), 8f, true))
			{
				StringCopy(&(cParam0->f_2208), "HUN2_FL_WINAT", 16);
				return true;
			}
			if (ENTITY::IS_ENTITY_DEAD(iLocal_144[0]))
			{
				StringCopy(&(cParam0->f_2208), "HUN2_FL_WIHK", 16);
				return true;
			}
			else if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_144[0], false, false), GET_HASH_KEY("WEAPON_THROWN_MOLOTOV"), 8f, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_144[0], false, false), GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), 8f, true))
			{
				StringCopy(&(cParam0->f_2208), "HUN2_FL_WIHA", 16);
				return true;
			}
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_286))
	{
		if (!func_513(Global_35, iLocal_286, 1, 0))
		{
			StringCopy(&(cParam0->f_2208), "HUN2_FL_FAR", 16);
			return true;
		}
	}
	return false;
}

bool func_187(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

Vector3 func_188(int iParam0)
{
	if (!func_395(iParam0))
	{
		return Global_36;
	}
	return Global_1392626[iParam0 /*32*/].f_24;
}

bool func_189(var uParam0, char* sParam1, bool bParam2, bool bParam3)
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
			return (func_514(uParam0, 256) && !func_514(uParam0, 4194304));
		}
		uParam0->f_295 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	func_515(uParam0, sParam1);
	if (!func_514(uParam0, 64))
	{
		if (!func_187(func_516(uParam0)))
		{
			func_362(uParam0, 64);
		}
		else
		{
			vVar0 = { func_517(uParam0) };
			if (!func_187(vVar0))
			{
				func_518(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = func_519(Global_35, func_516(uParam0), 1);
	if (func_514(uParam0, 128) || func_514(uParam0, 256))
	{
		if ((fVar3 >= func_520(uParam0) && !bParam2) || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228))
		{
			if (uParam0->f_313)
			{
				func_521();
				uParam0->f_313 = 0;
			}
			func_522(uParam0);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_228);
			}
			func_369(uParam0);
			func_523(uParam0, 128, 1);
			func_523(uParam0, 256, 1);
			func_523(uParam0, 4096, 1);
			func_523(uParam0, 32768, 1);
			func_523(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_524(uParam0) || bParam2)
	{
		if (!func_514(uParam0, 128))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228))
			{
				if (func_524(uParam0) >= func_520(uParam0))
				{
				}
				Var4 = { func_525(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					func_222(uParam0);
				}
				Var4 = { func_525(uParam0) };
				iVar12 = 256;
				if (!func_514(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_228 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_224), iVar12, &Var4, false, true);
				func_526(uParam0, 0, 0, 0, 0);
				func_362(uParam0, 128);
			}
		}
	}
	if (func_514(uParam0, 128))
	{
		if (func_514(uParam0, 256) && !func_514(uParam0, 4194304))
		{
			return true;
		}
		func_527(uParam0);
		if (!uParam0->f_313)
		{
			if (func_528())
			{
				func_529(4096);
				uParam0->f_313 = 1;
			}
		}
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_228, true, false))
		{
			bVar13 = true;
			Var15 = { func_360(uParam0) };
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
			if (!func_514(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_228, &Var15))
				{
					if (!func_514(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_228, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_228, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_228, &Var15))
						{
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_228, &Var15);
						}
						func_362(uParam0, 16777216);
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
			func_362(uParam0, 256);
			func_523(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

void func_190(char[4] cParam0)
{
}

void func_191(char[4] cParam0)
{
	char cVar0[64];
	struct<4> Var8;

	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 64))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(cParam0->f_32.f_4) && !func_187(cParam0->f_32.f_5))
	{
		StringCopy(&cVar0, func_530(*cParam0), 64);
		StringConCat(&cVar0, ".VolRestrictCutscene", 64);
		cParam0->f_32.f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(cParam0->f_32.f_5, 0f, 0f, 0f, 5f, 5f, 5f, &cVar0);
		func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 128);
	}
	if (VOLUME::DOES_VOLUME_EXIST(cParam0->f_32.f_4))
	{
		POPULATION::_0xB56D41A694E42E86(cParam0->f_32.f_4, 0, 0, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(cParam0->f_32.f_4, 0, 0, 0, -1, -1, 0);
		cParam0->f_2213[1] = PED::_0x4C39C95AE5DB1329(cParam0->f_32.f_4, false, 15);
		if (func_531(cParam0->f_32.f_4, &Var8))
		{
			PATHFIND::SET_ROADS_IN_AREA(Var8, Var8.f_3, 0, 1, 0);
		}
	}
	func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 64);
}

bool func_192(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_193(float fParam0)
{
	return func_192(*fParam0, 2);
}

int func_194()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_195(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_196(var uParam0)
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

void func_197(var uParam0)
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

int func_198(var uParam0)
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

int func_199(var uParam0)
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

bool func_200(var uParam0)
{
	if (bLocal_413)
	{
		return true;
	}
	if (!func_532(uParam0))
	{
		return false;
	}
	else if (!func_533())
	{
		return false;
	}
	else if (!func_534())
	{
		return false;
	}
	else if (!func_535(uParam0))
	{
		return false;
	}
	else if (!func_536())
	{
		return false;
	}
	bLocal_413 = true;
	return true;
}

bool func_201()
{
	if (!bLocal_160)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_159))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(iLocal_159, true, false))
			{
				bLocal_160 = true;
				return bLocal_160;
			}
		}
		else
		{
			iLocal_159 = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@loansharking@hunter@lshnt2@leadin@mcs1@leadin_ilo", 4, "pl_leadin", false, true);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_159))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(iLocal_159);
				func_537();
			}
		}
	}
	return bLocal_160;
}

void func_202(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, bool bParam11, int iParam12, bool bParam13, int iParam14, char* sParam15)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*iParam0))
	{
		if (bParam11)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
			{
				func_538(iParam0, vParam2, vParam5, vParam8);
			}
			else
			{
				func_156(iParam0, vParam2, vParam5, vParam8, sParam15);
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
		{
			func_539(iParam0, vParam2, vParam5, vParam8);
		}
		else
		{
			func_254(iParam0, vParam2, vParam5, vParam8, sParam15);
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(*iParam0))
	{
		POPULATION::_0x18262CAFEBB5FBE1(*iParam0, iParam12, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(*iParam0, iParam12, 0, 0, -1, -1, iParam14);
		if (bParam13)
		{
			*uParam1 = PED::_0x4C39C95AE5DB1329(*iParam0, false, 15);
		}
	}
}

void func_203(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_540(uParam0, iParam1, sParam2))
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

bool func_204(int iParam0)
{
	int iVar0;

	iVar0 = func_541(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_205(int iParam0)
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
		iVar0 = func_542(iParam0);
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

void func_206(int iParam0, bool bParam1)
{
	if (!func_128(iParam0))
	{
		return;
	}
	if (!func_543(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_544(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_544(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_438(iParam0), func_424(iParam0), func_439(iParam0), func_544(iParam0), Global_36);
		}
	}
	func_421(iParam0, 1);
	bParam1 = bParam1;
}

void func_207(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_128(iParam0))
	{
		return;
	}
	if (!func_205(iParam0))
	{
		return;
	}
	iVar0 = func_438(iParam0);
	if (bParam1)
	{
		if (func_544(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_544(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != Global_1835011[77 /*74*/].f_1)
			{
				func_545(func_424(iParam0));
			}
			if (func_298() != 0)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_544(iParam0), 0);
			}
			else
			{
				STATS::STATSTRACKER_DEED_STARTED(func_544(iParam0), Global_265238.f_79565.f_208.f_17);
			}
		}
	}
	func_546(iParam0);
	if (!func_128(func_127(0)))
	{
		func_421(iParam0, 3);
		func_547(bParam2);
		if (func_298() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_0x55F37F5F3F2475E1();
			}
			func_548(1);
		}
		func_549(iParam0, -1);
		if (bParam1 && !func_550(2))
		{
			func_551(&Global_0, 1024);
		}
		if (func_298() == -1)
		{
			func_552(&(Global_1347343.f_11), 536870912);
			func_553(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_554(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_555(0);
			}
		}
		if (func_298() == -1)
		{
			iVar1 = func_556(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_557();
				switch (iVar1)
				{
					case 0:
						func_558(0);
						break;
					case 1:
						func_558(1);
						break;
					case 2:
						func_558(2);
						break;
					case 3:
						func_558(3);
						break;
					case 4:
						func_558(4);
						break;
					case 5:
						func_558(5);
						break;
					case 6:
						func_558(5);
						break;
					case 7:
						func_558(7);
						break;
					case 8:
						func_558(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (func_424(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_558(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (func_424(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_558(11);
						break;
					default:
						iVar1 = func_557();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_559(0);
									break;
								case 1:
									func_559(1);
									break;
								case 2:
									func_559(2);
									break;
								case 3:
									func_559(3);
									break;
								case 4:
									func_559(4);
									break;
								case 5:
									func_559(5);
									break;
								case 6:
									func_559(5);
									break;
								case 7:
									func_559(7);
									break;
								case 8:
									func_559(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_560(1);
	}
	else
	{
		func_549(iParam0, -1);
		func_421(iParam0, 4);
	}
	func_561(iParam0, 0);
}

void func_208(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_209(int iParam0)
{
	int iVar0;
	int iVar1;

	if ((Global_1898077.f_1 == 2 || Global_1898077.f_1 == 5) || Global_1898077.f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_298() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_407(Global_1894899.f_2);
	Global_1898077.f_1 = 3;
	Global_1898077.f_2 = 0;
	Global_1898077.f_7 = iVar0;
	Global_1898077.f_8 = iParam0;
	Global_1898077.f_9 = iVar1;
	func_408(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
}

char* func_210(int iParam0)
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

void func_211(bool bParam0)
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
	func_562(0f);
	Global_1935436.f_11 = 1;
	if (func_563())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_564();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_212(char[4] cParam0)
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

char* func_213()
{
	if (iLocal_26 == 0 || iLocal_26 == 1)
	{
		return "LSHNT2_MCS1";
	}
	return "LSHNT2_TEMP_SHOP";
}

void func_214(var uParam0)
{
	func_565(0);
	func_565(1);
}

void func_215(char[4] cParam0, int iParam1)
{
	func_566(&(cParam0->f_32), iParam1);
}

void func_216(var uParam0)
{
	if (!func_83(32768))
	{
		if (func_81(iLocal_144[0], 0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_144[0], -1769.84f, -177.44f, 194.48f, -69.6f, false, true);
			func_80(32768);
		}
	}
	if (!func_83(524288))
	{
		if (func_81(iLocal_144[1], 0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_144[1], -1769.78f, -180.05f, 194.61f, -47.06f, false, true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iLocal_144[1], false);
			TASK::TASK_STAND_STILL(iLocal_144[1], -1);
			func_80(524288);
		}
		else
		{
			func_82(&(iLocal_144[1]), -1769.78f, -180.05f, 194.61f, -47.06f, 1, 1, 1, 1);
		}
	}
	else if (func_81(iLocal_144[1], 0))
	{
		if (!func_430(iLocal_144[1], -982327190))
		{
			TASK::TASK_STAND_STILL(iLocal_144[1], -1);
		}
	}
	func_567(uParam0, 0);
}

void func_217(char[4] cParam0, int iParam1)
{
	func_568(&(cParam0->f_32), iParam1);
}

int func_218(var uParam0)
{
	if (!func_83(32768))
	{
		if (func_81(iLocal_144[0], 0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_144[0], -1769.84f, -177.44f, 194.48f, -69.6f, false, true);
			func_80(32768);
		}
		return 0;
	}
	if (!func_83(524288))
	{
		if (func_81(iLocal_144[1], 0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_144[1], -1769.773f, -180.0528f, 193.6738f, -47.04f, false, true);
			TASK::TASK_STAND_STILL(iLocal_144[1], -1);
			func_80(524288);
		}
		else
		{
			func_82(&(iLocal_144[1]), -1769.773f, -180.0528f, 193.6738f, -47.04f, 1, 1, 1, 1);
		}
		return 0;
	}
	else if (func_81(iLocal_144[1], 0))
	{
		if (!func_430(iLocal_144[1], -982327190))
		{
			TASK::TASK_STAND_STILL(iLocal_144[1], -1);
		}
	}
	bLocal_423 = true;
	return 1;
}

void func_219(var uParam0, int iParam1)
{
	uParam0->f_222 = iParam1;
	func_569(uParam0, 4);
}

void func_220(char[4] cParam0, vector3 vParam1)
{
	if (!func_187(vParam1))
	{
		cParam0->f_32.f_5 = { vParam1 };
	}
	else
	{
		cParam0->f_32.f_5 = { func_188(*cParam0) };
	}
}

void func_221(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	func_369(uParam0);
	uParam0->f_4 = iParam1;
	func_526(uParam0, iParam2, bParam3, iParam4, iParam5);
}

void func_222(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_570() };
	func_571(uParam0, &Var0);
}

void func_223(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_572(&(cParam0->f_32), iParam1, sParam2, iParam3, iParam4, bParam5);
}

void func_224(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_360(uParam0) };
	func_571(uParam0, &Var0);
}

bool func_225(char[4] cParam0)
{
	if (!func_53(64))
	{
		return false;
	}
	if (func_54())
	{
		return false;
	}
	else if (func_195(Global_1935630, 131072))
	{
		return false;
	}
	return true;
}

void func_226(char[4] cParam0)
{
	switch (cParam0->f_17)
	{
		case 0:
			if (func_116(Global_1392626[*cParam0 /*32*/].f_8, 128))
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
						func_73(&(cParam0->f_17.f_12));
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
			if (func_116(Global_1392626[*cParam0 /*32*/].f_8, 128))
			{
				cParam0->f_17 = 2;
				return;
			}
			if (func_573(Global_35, Global_1392626[*cParam0 /*32*/].f_24, &(cParam0->f_17.f_12), cParam0->f_17.f_2, cParam0->f_17.f_3, cParam0->f_17.f_4, cParam0->f_17.f_5, cParam0->f_17.f_6, cParam0->f_17.f_7, 0, 1, 1, 1))
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
			if (!func_116(Global_1392626[*cParam0 /*32*/].f_8, 128))
			{
				if ((PED::IS_PED_FULLY_ON_MOUNT(Global_35, true) && !func_430(Global_35, 501393341)) || (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true) && !func_430(Global_35, -828834893)))
				{
					cParam0->f_17 = 0;
				}
			}
			break;
	}
}

void func_227(var uParam0, struct<4> Param1, int iParam5)
{
	switch (func_574(uParam0))
	{
		case 0:
			func_575(uParam0, Param1, iParam5);
			break;
		case 1:
			func_576(uParam0);
			break;
		case 2:
			func_577(uParam0);
			break;
	}
}

bool func_228(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (func_359(uParam0, 32768))
	{
		return true;
	}
	if (func_574(uParam0) >= 3)
	{
		uParam0->f_1662 = func_464(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
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
		func_578(uParam0);
	}
	if (func_574(uParam0) < 10)
	{
		if (func_574(uParam0) == 3)
		{
			func_579(uParam0, iParam5, bParam6);
		}
		else if (func_574(uParam0) > 3)
		{
			if (func_580(uParam0) == 0)
			{
				if (!func_359(uParam0, 524288))
				{
					func_581(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_582(uParam0, 4);
					func_583(uParam0, 10);
					func_584(uParam0, iParam5);
					return true;
				}
			}
			if (!func_359(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!func_367(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			func_585(0);
			func_586();
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_1450 >= 0)
			{
				if (!func_367(&(uParam0->f_782[uParam0->f_1454 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (func_587(uParam0, uParam0->f_1450))
				{
					if (func_588(uParam0) < 7 && uParam0->f_1454 >= 0)
					{
						func_589(uParam0, uParam0->f_782[uParam0->f_1454 /*41*/].f_27, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_1454 >= 0)
				{
					func_589(uParam0, uParam0->f_782[uParam0->f_1454 /*41*/].f_27, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				func_590(uParam0);
			}
		}
	}
	bVar0 = func_591(uParam0, iParam5, bParam6);
	bVar1 = CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0);
	if (bVar0)
	{
		if ((!func_359(uParam0, 268435456) && bVar1) && !func_359(uParam0, 262144))
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
				func_592(uParam0, 131072);
				func_592(uParam0, 268435456);
			}
		}
		if (func_366(uParam0, 64) || (uParam0->f_1450 >= 0 && !func_367(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || func_580(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_574(uParam0) == 3 || func_359(uParam0, 131072))
	{
		func_593(uParam0);
		if (!func_359(uParam0, 262144))
		{
			if ((bVar0 && func_359(uParam0, 65536)) || func_359(uParam0, 131072))
			{
				func_592(uParam0, 32768);
				func_582(uParam0, 4);
				func_583(uParam0, 10);
				uParam0->f_1535 = 1;
				func_584(uParam0, iParam5);
				return true;
			}
		}
	}
	if (func_574(uParam0) >= 3)
	{
		func_594(uParam0, iParam5);
		func_595(uParam0);
		if (!func_596(uParam0, 1))
		{
			func_597(uParam0);
		}
		func_598(uParam0);
	}
	switch (func_574(uParam0))
	{
		case 0:
			func_575(uParam0, Param1, iParam5);
			break;
		case 1:
			func_576(uParam0);
			break;
		case 2:
			func_577(uParam0);
			break;
		case 3:
			if (func_229(uParam0))
			{
				func_599(2);
				func_589(uParam0, uParam0->f_782[uParam0->f_1450 /*41*/].f_27, uParam0->f_1111[uParam0->f_1450 /*22*/].f_1, 1065353216 /* Float: 1f */);
				func_69(&(uParam0->f_1638));
				func_582(uParam0, 1);
				func_600();
				func_583(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!func_359(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (func_574(uParam0) == 5)
			{
				if (func_601(uParam0))
				{
					func_582(uParam0, 2);
					func_583(uParam0, 6);
				}
			}
			if (func_574(uParam0) == 6)
			{
				if (func_602(uParam0))
				{
					func_582(uParam0, 3);
					func_583(uParam0, 8);
				}
			}
			if (uParam0->f_1451 >= 0 || func_70(&(uParam0->f_1638)) >= 15f)
			{
				if (func_603(uParam0, iParam5))
				{
					if (func_604(uParam0))
					{
						uParam0->f_1451 = func_605(uParam0);
						func_69(&(uParam0->f_1638));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						func_582(uParam0, 6);
						func_583(uParam0, 9);
					}
					else
					{
						func_582(uParam0, 4);
						func_583(uParam0, 10);
						func_584(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (func_603(uParam0, iParam5))
			{
				func_584(uParam0, iParam5);
				func_583(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_229(var uParam0)
{
	if (uParam0->f_1536)
	{
		return false;
	}
	return uParam0->f_1535;
}

void func_230(char[4] cParam0)
{
}

int func_231(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_606(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam0));
		fVar8 = func_607(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
		func_608(iParam0, iParam1, uParam3, fParam2, fVar8, sParam7);
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
			func_69(&(iParam1->f_13));
		}
		if (func_609(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_610(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_231(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_434(iParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*iParam0, 317, true))
						{
							func_611(*iParam0, 1, 1);
						}
					}
					else if (func_612(iParam1, 22))
					{
						func_611(*iParam0, 0, 1);
					}
				}
				if (func_613(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_614(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_615(iParam8);
					func_616(iParam1, uParam3);
					if (func_617(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_618(uParam3);
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
					func_619(iParam1, uParam3, fVar8);
					if (func_620(*iParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_235(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				if (func_613(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_621(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_617(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_614(iParam0, func_613(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_615(iParam8);
					func_616(iParam1, uParam3);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					func_235(uParam3, 0, 0, 1, 1);
					func_622(iParam1, 1);
				}
				if (MISC::IS_BIT_SET(iParam1->f_21, 20))
				{
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						if (!func_430(Global_35, 501393341) && !func_430(Global_35, 242628503))
						{
							iVar9 = 0;
							if (func_623(Global_35, *iParam0, 1f) == 3)
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
					else if ((((!PED::IS_PED_ON_MOUNT(Global_35) && func_81(iParam1->f_28, 0)) && func_624(Global_35, iParam1->f_28, iParam1->f_29, 1)) && !func_430(iParam1->f_28, 518218985)) && !func_430(iParam1->f_28, 242628503))
					{
						TASK::TASK_SMART_FLEE_PED(iParam1->f_28, Global_35, (iParam1->f_29 + 3f), -1, 2304, 1f, 0);
						iParam1->f_28 = 0;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
					{
						if (!func_430(Global_35, -828834893) && !func_430(Global_35, 242628503))
						{
							iVar10 = 0;
							if (func_623(Global_35, *iParam0, 1f) == 3)
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
					else if (!(MISC::IS_BIT_SET(*iParam1, 12) || func_625(iParam1, iParam0)))
					{
					}
					else if (!(MISC::IS_BIT_SET(*iParam1, 13) || func_626(iParam1)))
					{
					}
					else if (!func_627(iParam1))
					{
					}
					else
					{
						if (fParam4 > 0f)
						{
							func_69(&(iParam1->f_18));
							bVar11 = iParam8 & 128 != false;
							if (bVar11)
							{
								func_628(uParam3, 0, 0);
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
				if (func_629(iParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_613(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_621(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_617(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_614(iParam0, func_613(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_615(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_235(uParam3, 0, 0, 1, 1);
					}
					func_622(iParam1, 1);
				}
				func_619(iParam1, uParam3, fVar8);
				if (func_629(iParam0, iParam1, fParam4, bVar6))
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
			func_630(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

bool func_232(var uParam0)
{
	if (uParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

void func_233(char[4] cParam0)
{
	if (!func_116(Global_1392626[*cParam0 /*32*/].f_8, 32))
	{
		if (func_81(Global_1392626[*cParam0 /*32*/].f_11, 0))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Global_1392626[*cParam0 /*32*/].f_11, 0, -1f, -1f, -1f);
		}
	}
}

bool func_234(char[4] cParam0)
{
	if (!bLocal_162)
	{
		func_631(cParam0);
	}
	if (!bLocal_170)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_143))
		{
			AUDIO::STOP_PED_SPEAKING(iLocal_143, true);
			bLocal_170 = true;
		}
	}
	func_632(cParam0);
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_268))
	{
		if (!bLocal_412)
		{
			if (fLocal_269 > 1f)
			{
				fLocal_269 = 1f;
			}
			else
			{
				fLocal_269 = (fLocal_269 + 0.005f);
			}
			GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(iLocal_268, fLocal_269);
			if (fLocal_269 == 1f)
			{
				bLocal_412 = true;
			}
		}
	}
	if (func_633(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		func_634(Global_35, vLocal_308, 0, 30f, 20f, 15f, 9f, 1, 1, 1, 0);
	}
	if (func_624(Global_35, iLocal_143, 15f, 1))
	{
		TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_143, 500, 0, 51, 0);
	}
	if (!func_381(1073741824 /* Float: 2f */))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_143) && func_183(Global_35, vLocal_308, 25f, 1, 1))
		{
			if (func_383(&(cParam0->f_2106), "LS_HNT2_MCS1_SN", 0))
			{
				func_67(1073741824 /* Float: 2f */);
			}
		}
	}
	else if (!func_635("LS_HNT2_MCS1_SN") && !func_381(-2147483648))
	{
		func_636(1073741824 /* Float: 2f */);
	}
	if (!bLocal_161)
	{
		if (func_183(Global_35, vLocal_308, 18f, 1, 1) && MAP::DOES_BLIP_EXIST(Global_1392626[1 /*32*/]))
		{
			func_637(&Local_204, &Local_186, 0, Global_1392626[1 /*32*/], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			func_638(&(Local_186[0 /*17*/]), "OBJ_INTERACT", " ", GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			func_639(&(Local_186[0 /*17*/]), 0, 0);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iLocal_143, 8, 0, 1);
			bLocal_161 = true;
		}
	}
	else if (!bLocal_162)
	{
		if (!func_49(&(vLocal_353[6 /*3*/])))
		{
			if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_143, true, false), 20f, true) || ((ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, iLocal_143) && !func_640(iLocal_143, Global_35)) && func_457(Global_35, iLocal_289, 0, 1)))
			{
				func_69(&(vLocal_353[6 /*3*/]));
			}
			if (func_457(Global_35, iLocal_290, 0, 1))
			{
				func_361(&(cParam0->f_32), "MultiStart");
				func_358(0);
				func_235(&Local_186, 1, 1, 1, 0);
				Local_204.f_2 = 0;
				func_434(&iLocal_143);
				func_493(&Local_204, iLocal_143);
				return true;
			}
		}
		else if (func_70(&(vLocal_353[6 /*3*/])) > 0.8f)
		{
			if (!func_640(iLocal_143, Global_35))
			{
				func_73(&(vLocal_353[6 /*3*/]));
			}
			else
			{
				func_73(&(vLocal_353[6 /*3*/]));
				return false;
			}
			if (func_635("LS_HNT2_MCS1_SN"))
			{
				func_494("LS_HNT2_MCS1_SN", 0);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_143))
				{
					AUDIO::STOP_PED_SPEAKING(iLocal_143, false);
				}
			}
			func_67(-2147483648);
			func_235(&Local_186, 1, 1, 1, 0);
			Local_204.f_2 = 0;
			func_434(&iLocal_143);
			TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_143, 5000, 0, 51, 0);
			WEAPON::_HOLSTER_PED_WEAPONS(Global_35, false, false, true, false);
			if (func_633(Global_35))
			{
				TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, 0);
			}
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
			bLocal_162 = true;
			bLocal_166 = true;
			MISC::SET_BIT(&(Local_204.f_21), 3);
			MISC::SET_BIT(&(Local_204.f_21), 20);
			return false;
		}
		iLocal_265 = func_231(&iLocal_143, &Local_204, 10f, &Local_186, 0f, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
		if (func_624(Global_35, iLocal_143, 5f, 1) && func_457(Global_35, iLocal_288, 0, 1))
		{
			if (!bLocal_164)
			{
				func_639(&(Local_186[0 /*17*/]), 1, 0);
				bLocal_164 = true;
			}
		}
		else if (bLocal_164)
		{
			func_639(&(Local_186[0 /*17*/]), 0, 0);
			bLocal_164 = false;
		}
		if (iLocal_265 == 0)
		{
			func_235(&Local_186, 1, 1, 1, 0);
			Local_204.f_2 = 0;
			func_434(&iLocal_143);
			TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_143, 5000, 0, 51, 0);
			WEAPON::_HOLSTER_PED_WEAPONS(Global_35, false, false, true, false);
			if (func_633(Global_35))
			{
				if (func_623(Global_35, iLocal_143, 1f) == 2)
				{
					TASK::TASK_DISMOUNT_ANIMAL(Global_35, 262144, 0, 0, 0, 0);
				}
				else
				{
					TASK::TASK_DISMOUNT_ANIMAL(Global_35, 131072, 0, 0, 0, 0);
				}
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, 0);
			}
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
			bLocal_162 = true;
		}
	}
	else if (!bLocal_163)
	{
		func_608(&iLocal_143, &Local_204, &Local_186, 10f, -1082130432 /* Float: -1f */, 0);
		if (bLocal_166)
		{
			if (func_429("pl_leadin_triggered_by_other"))
			{
				bLocal_163 = true;
			}
			return false;
		}
		if (!PED::IS_PED_ON_FOOT(Global_35))
		{
			func_641();
			return false;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_144[1]))
		{
			if (!func_430(iLocal_144[1], 713668775) && !func_624(iLocal_144[1], Global_35, 1.5f, 1))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_144[1], -1769.918f, -177.0914f, 193.5797f, 1f, -1, 0.25f, 0, 40000f);
			}
		}
		if (!bLocal_165)
		{
			func_641();
			if (!func_624(Global_35, iLocal_143, 1.5f, 1))
			{
				if (!func_430(Global_35, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, -1780.186f, -181.4939f, 193.874f, 1f, 20000, 0.25f, 0, 40000f);
				}
			}
			else
			{
				bLocal_165 = true;
				return false;
			}
		}
		else if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_159))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_159, "b_breakout", true, false);
			func_641();
			bLocal_163 = true;
		}
	}
	else if (ANIMSCENE::GET_ANIM_SCENE_PHASE(iLocal_159) > 0.99f)
	{
		func_608(&iLocal_143, &Local_204, &Local_186, 10f, -1082130432 /* Float: -1f */, 0);
		func_358(0);
		func_641();
		func_493(&Local_204, iLocal_143);
		if (func_635("LS_HNT2_MCS1_SN"))
		{
			func_494("LS_HNT2_MCS1_SN", 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_143))
		{
			AUDIO::STOP_PED_SPEAKING(iLocal_143, false);
		}
		return true;
	}
	else
	{
		if (!func_381(-2147483648))
		{
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_159) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_159, false))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_159) > 5.33f)
				{
					if (func_635("LS_HNT2_MCS1_SN"))
					{
						func_494("LS_HNT2_MCS1_SN", 0);
					}
					func_67(-2147483648);
				}
			}
		}
		func_608(&iLocal_143, &Local_204, &Local_186, 10f, -1082130432 /* Float: -1f */, 0);
		if (bLocal_166)
		{
			if (!bLocal_167)
			{
				if (PED::IS_PED_ON_FOOT(Global_35))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, -1780.081f, -181.8477f, 193.8628f, 1f, 20000, 0.25f, 0, 46.4253f);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_144[1]))
					{
						if (!func_430(iLocal_144[1], 713668775))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_144[1], -1769.918f, -177.0914f, 193.5797f, 1f, -1, 0.25f, 0, 40000f);
						}
					}
					bLocal_167 = true;
				}
			}
		}
		func_641();
	}
	return false;
}

void func_235(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_642((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_643(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

void func_236(char[4] cParam0)
{
}

int func_237(char[4] cParam0)
{
	int iVar0;

	func_644(Global_35);
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0) && func_183(iVar0, vLocal_308, 100f, 1, 1))
	{
		func_645(&(cParam0->f_32), -1746.14f, -199.36f, 185.57f, 234.55f, 1);
	}
	return 7;
}

int func_238(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	iParam1 = func_646(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, bParam2);
	if (iParam1 <= 0)
	{
		return iParam1;
	}
	iVar0 = func_239(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_240(&iVar0, iParam0, &iParam1, bParam3, iParam4);
	}
	return iParam1;
}

int func_239(int iParam0)
{
	int iVar0;

	if (func_647(iParam0))
	{
		if (func_298() == -1)
		{
			iVar0 = PED::_GET_LAST_MOUNT(Global_35);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar0 = func_509(func_648(0));
			}
		}
		else
		{
			iVar0 = PED::_GET_LAST_MOUNT(func_649());
		}
	}
	else if (func_298() == -1)
	{
		iVar0 = func_509(0);
	}
	else
	{
		iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
	}
	return iVar0;
}

int func_240(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(*iParam0);
	iVar1 = func_650(iVar0, iParam1);
	if (func_651(*iParam0, iParam1, *iParam2, bParam3, iParam4))
	{
		Var2 = { func_351(iParam1) };
		if (STATS::STAT_ID_IS_VALID(&Var2))
		{
			STATS::_0xBD861AE8A5181ED7(&Var2, *iParam2);
		}
		if (func_652(iParam1))
		{
			func_653(*iParam0, iParam1, *iParam2);
		}
		else
		{
			func_653(*iParam0, iParam1, *iParam2);
			func_646(*iParam0, iParam1, *iParam2, 1);
		}
		iVar4 = (iVar1 - func_650(iVar0, iParam1));
		*iParam2 = (*iParam2 - iVar4);
		return 1;
	}
	return 0;
}

int func_241(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_272(iParam0, 0, 0);
	if (iVar0 >= iParam1)
	{
		iVar1 = iParam1;
	}
	else
	{
		iVar1 = iVar0;
		iVar2 = (iParam1 - iVar1);
	}
	if (iVar1 > 0)
	{
		if (!func_164(iParam0, iVar1, bParam2, iParam3, 0))
		{
			return 0;
		}
	}
	if (iVar2 > 0)
	{
		if (!func_654(iParam0, iVar2, bParam2, iParam3))
		{
			return 0;
		}
		if (!bParam2)
		{
			func_422("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, 1);
		}
	}
	return 1;
}

void func_242(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	if (func_81(iParam0, 0))
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			if (func_81(PED::GET_MOUNT(iParam0), 0))
			{
				if (bParam5)
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(PED::GET_MOUNT(iParam0), vParam1, fParam4, false, true);
				}
				else
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(PED::GET_MOUNT(iParam0), vParam1, fParam4, true, false, true);
				}
			}
		}
		else if (iParam0 == iLocal_143)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_144[0]))
			{
				iLocal_144[0] = func_655(iParam0);
			}
			else
			{
				func_656(iLocal_143, iLocal_144[0], 0, -1, 1);
			}
		}
		else if (iParam0 == Global_35)
		{
			if (!func_81(iLocal_144[1], 0))
			{
				if (func_82(&(iLocal_144[1]), vParam1.x, vParam1.y, vParam1.z, fParam4, 1, 1, 1, 1))
				{
				}
			}
			else
			{
				if (bParam5)
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_144[1], vParam1, fParam4, false, true);
				}
				else
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_144[1], vParam1, fParam4, true, false, true);
				}
				func_656(Global_35, iLocal_144[1], 0, -1, 1);
			}
		}
	}
}

void func_243(int iParam0, int iParam1)
{
	func_657(iParam0, iParam1);
}

void func_244(int iParam0)
{
	Global_1572864.f_12 = iParam0;
}

void func_245(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	char[] cVar0[8];

	Global_1572864.f_8 = iParam0;
	Global_1572864.f_9 = iParam9;
	Global_1572864.f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_438(iParam0) == 1)
	{
		cVar0 = func_659(func_658(iParam0));
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
	}
	else if (func_438(iParam0) == 8)
	{
		cVar0 = func_661(func_660(iParam0));
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
	}
	func_503(1, 1);
	func_508(1, Param1, Param1.f_3);
	Global_1347394 = { Param5 };
	func_412(0);
	func_413(0);
	func_415(1f);
}

void func_246(float fParam0, float fParam1)
{
	fParam0->f_1 = (func_247() - fParam1);
	func_662(fParam0, 1);
	func_663(fParam0, 2);
	fParam0->f_2 = 0f;
}

float func_247()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_248(bool bParam0)
{
	AUDIO::_0x0D7FD6A55FD63AEF(7, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(25, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(21, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(19, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(23, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(22, 3, bParam0);
	if (bParam0)
	{
		PED::_0x1E017404784AA6A3(iLocal_143, GET_HASH_KEY("LSHUN_RIDE1"));
	}
	else
	{
		PED::_0x2B4CE170DE09F346(iLocal_143, GET_HASH_KEY("LSHUN_RIDE1"));
	}
}

void func_249(int iParam0)
{
	iLocal_18 = iParam0;
}

void func_250(int iParam0)
{
	if (iParam0 == 0)
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_147[iParam0], -2144.684f, 99.603f, 250.7095f, 10.1885f, true, false, true);
		ENTITY::SET_ENTITY_INVINCIBLE(uLocal_147[iParam0], true);
		ENTITY::SET_ENTITY_VISIBLE(uLocal_147[iParam0], false);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(uLocal_147[iParam0], 1);
		PED::SET_PED_CAN_TORSO_REACT_IK(uLocal_147[iParam0], false);
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_147[iParam0], false);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(uLocal_147[iParam0], 10, false);
		PED::SET_LOOTING_FLAG(uLocal_147[iParam0], 4, false);
		bLocal_402 = true;
		func_664(0, iParam0);
	}
}

bool func_251(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, int iParam7, float fParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if (!func_81(*iParam1, 0))
	{
		if (!func_20(Global_1392626[iParam0 /*32*/].f_9, 256) || CAM::IS_SCREEN_FADED_OUT())
		{
			*iParam1 = func_665(iParam2, vParam3, fParam6, iParam7, fParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, 0, 0);
			if (func_81(*iParam1, 0))
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

void func_252(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_266(iParam0);
		func_267(iParam0, iParam1, iParam2, iVar0);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type1", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt1", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model1", iParam3);
		return;
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type2", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt2", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model2", iParam3);
		return;
	}
}

void func_253(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_666(iParam0, iParam1))
		{
			if (func_667(iParam0, iParam1))
			{
				if (func_668(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_669(iParam0);
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

void func_254(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*iParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

bool func_255(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5)
{
	sParam0 = func_410(iParam5, sParam0, sParam1, sParam2, sParam3, sParam4);
	return MISC::ARE_STRINGS_EQUAL(sParam0, func_670());
}

void func_256(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	UILOG::_UILOG_SET_CACHED_OBJECTIVE(MISC::VAR_STRING(2, sParam0));
}

bool func_257(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_258(int iParam0, var uParam1)
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

	uParam1->f_10 = func_648(uParam1->f_10);
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
		if (func_187(uParam1->f_6))
		{
		}
	}
	bVar0 = func_285();
	if (*uParam1)
	{
		if (bVar0 && !func_311(Global_1835011[4 /*74*/].f_1, 1))
		{
			if (func_671(5))
			{
				func_672(5);
				func_673(5);
				func_674(0);
				func_675(0);
			}
		}
	}
	if (func_676(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_311(Global_1835011[37 /*74*/].f_1, 1)) && !func_311(Global_1835011[43 /*74*/].f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_311(Global_1835011[43 /*74*/].f_1, 1)) && !func_311(Global_1835011[44 /*74*/].f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_509(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_402(iVar1))
	{
		bVar3 = true;
		if (func_677(iVar1))
		{
			bVar4 = true;
		}
		if (func_403(iVar1))
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
				func_404(uParam1->f_10);
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
			if (!func_671(0) && func_671(1))
			{
				func_678(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_679())
			{
				func_680();
			}
			func_674(0);
			func_675(0);
			func_681(uParam1->f_6);
		}
	}
	if (!func_402(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_682(uParam1->f_10) == 0 || func_683(uParam1->f_10) == 0) || func_684(uParam1->f_10) == 0)
			{
				func_685(uParam1->f_10);
			}
			func_686(uParam1->f_10);
			func_687(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_509(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_402(iVar1))
	{
		bVar3 = true;
		if (func_677(iVar1))
		{
			bVar4 = true;
		}
		if (func_403(iVar1))
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
			if (!func_187(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar2, false);
			}
		}
	}
	if (func_688(uParam1->f_10))
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
			Var8 = { func_689(uParam1->f_10) };
			Var10 = { func_690() };
			func_691(iVar2, &Var8, &Var10, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_692(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		func_693(uParam1->f_10);
		if (uParam1->f_2 && !func_187(uParam1->f_6))
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
	func_694(uParam1->f_10);
	if (func_692(uParam1->f_10))
	{
		iVar16 = func_695(uParam1->f_10);
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

void func_259()
{
	if (!func_83(268435456))
	{
		func_696();
		func_80(268435456);
	}
}

void func_260(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	PED::SET_LOOTING_FLAG(iVar0, 7, true);
}

void func_261(int iParam0, char* sParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (bParam2)
			{
				PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), MISC::GET_HASH_KEY(sParam1));
			}
			else
			{
				PED::_SET_PED_PROMPT_NAME(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), sParam1);
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			if (bParam2)
			{
				OBJECT::_0xD503D6F0986D58BC(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), MISC::GET_HASH_KEY(sParam1));
			}
		}
	}
}

void func_262(int iParam0, vector3 vParam1)
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

void func_263(int iParam0, bool bParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	PED::SET_LOOTING_FLAG(iVar0, 0, bParam1);
	PED::SET_LOOTING_FLAG(iVar0, 1, bParam1);
}

bool func_264(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_265(int iParam0, int iParam1)
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

int func_266(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			if (PED::IS_PED_HUMAN(iVar0))
			{
				if (PED::IS_PED_MALE(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_267(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<13> Var0;
	int iVar23;

	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

bool func_268()
{
	return func_97(GET_HASH_KEY("PROVISION_LOANSHARK_SKINS"), 1, 0, 0, 0, -897553835, 0, 0, 0, 0);
}

void func_269(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		return;
	}
	else if (ENTITY::GET_IS_ANIMAL(iParam0))
	{
		iVar0 = func_697(iParam0);
		func_698(iVar0, ENTITY::_GET_IS_BIRD(iParam0));
	}
	if (bParam1)
	{
		func_263(iParam0, 0);
	}
}

int func_270(int iParam0)
{
	vector3 vVar0;

	if (!func_264(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_271(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_264(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_453(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_699("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_700(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_506(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_701(iVar1);
				return true;
			}
			iVar3++;
		}
		func_701(iVar1);
	}
	return false;
}

int func_272(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_264(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_270(iParam0);
	if (iVar0 == GET_HASH_KEY("AMMO") || (bParam1 && iVar0 == GET_HASH_KEY("WEAPON")))
	{
		iVar1 = func_453(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == GET_HASH_KEY("WEAPON"))
	{
		return func_702(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_703(bParam2), iParam0, 0);
	return iVar2;
}

bool func_273(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_298() == -1)
	{
		if (func_704(iParam0) && func_705(iParam0))
		{
			func_706(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_274(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_707(iParam0, iParam1);
	Var0 = { func_708(iParam0, 0, 1) };
	iVar5 = func_709(iParam0, &Var0, 0, 0);
	iVar6 = func_710(iParam0, 0);
	if ((iVar5 > 1 && !func_711()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_265(iParam0, -2051813666))
		{
			func_282(583, 1);
		}
		else
		{
			func_282(582, 0);
		}
	}
	if (func_712(iParam0, &Var0, *iParam1, 0, 0))
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

void func_275(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_713(iParam0, -949239683))
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

bool func_276(int iParam0)
{
	if (func_298() != -1)
	{
		return false;
	}
	return func_277(iParam0) != 0;
}

int func_277(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_714())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_715(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_278(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_279(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_714())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_278(iVar0))
		{
			if (func_96(func_715(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_280(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_716(48);
	func_717(0, -1);
}

bool func_281(int iParam0)
{
	if (func_298() != -1)
	{
		return false;
	}
	return func_311(Global_1347702[iParam0 /*49*/].f_15, 1);
}

void func_282(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_718(iParam0, &iVar0, &iVar1);
	if (!func_719(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_720(iVar0, iVar1);
}

int func_283(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_284(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

bool func_285()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_286(int iParam0)
{
	if (func_298() != -1)
	{
		return false;
	}
	return func_311(Global_1835011[iParam0 /*74*/].f_1, 1);
}

bool func_287(int iParam0)
{
	if (func_298() != -1)
	{
		return false;
	}
	if (!func_425(iParam0))
	{
		return false;
	}
	return func_204(Global_1347702[iParam0 /*49*/].f_15);
}

char* func_288()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_96(func_721(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_289(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_285() && (func_287(38) || func_281(38)))
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
			if (func_285() && (func_287(39) || func_281(39)))
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
			iVar9 = func_722(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = GET_HASH_KEY("COL_EX_INTRO");
			break;
		case 41:
			if (func_285() && (func_287(41) || func_281(41)))
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
			if (func_285() && (func_287(49) || func_281(49)))
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
			iVar9 = func_722(iParam3, 20);
			iVar14 = GET_HASH_KEY("TAXIDERMY");
			iVar11 = GET_HASH_KEY("BLIP_RC_HOBBS");
			iVar13 = GET_HASH_KEY("COL_TX_INTRO");
			break;
	}
	sVar2 = func_723(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_724(iParam0, iVar13, iVar14))
	{
	}
	if (func_725(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_726(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_727(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_728(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_729(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_290(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_291(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_285() && (func_287(38) || func_281(38)))
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
			if (func_285() && (func_287(39) || func_281(39)))
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
			if (func_285() && (func_287(49) || func_281(49)))
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
		if (func_285() && (func_287(38) || func_281(38)))
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
			func_730(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_730(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_732(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, func_731(func_284(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_730(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_730(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == GET_HASH_KEY("DINO_BONES"))
	{
		if (func_285() && (func_287(39) || func_281(39)))
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
			func_730(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_730(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == GET_HASH_KEY("ROCK_CARVINGS"))
	{
		if (func_285() && (func_287(49) || func_281(49)))
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
			func_730(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_730(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_730(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_730(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_292(int iParam0, int iParam1)
{
	if (!func_264(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

bool func_293(int iParam0)
{
	if (!func_733(iParam0))
	{
		return false;
	}
	return func_734(iParam0);
}

void func_294(int iParam0)
{
	if (!func_733(iParam0))
	{
		return;
	}
	func_735(iParam0);
	func_736(iParam0);
}

int func_295(int iParam0)
{
	struct<2> Var0;

	if (!func_264(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_296(int iParam0, bool bParam1)
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
	if (func_264(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_737(iVar0) || func_738(iVar0))
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

int func_297(int iParam0, bool bParam1)
{
	if (!func_264(iParam0, 0))
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

int func_298()
{
	return Global_1572887.f_12;
}

void func_299(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (!func_506(iParam0))
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

bool func_300(bool bParam0)
{
	if (func_298() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_703(bParam0));
}

bool func_301(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_708(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_739((398 + iVar28), 1);
			if (func_740(iParam0, &Var0, iVar5, 0))
			{
				if (func_741(iParam0, &Var6, iVar5))
				{
					Var29 = { func_742(iParam0, Var0, iVar5, 0) };
					func_743(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_300(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_302(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_744(iParam0, iParam1);
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

bool func_302(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_304(iParam0))
	{
		return false;
	}
	if (!func_300(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_303(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;

	iVar0 = func_297(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_298() == -1)
		{
			func_299(iVar0);
			if (iParam1 == 1248274121)
			{
				func_745(iVar0);
			}
		}
		if (!func_712(iParam0, &uVar1, 1, 0, 0))
		{
			func_706(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_746(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_301(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == GET_HASH_KEY("WEAPON_FISHINGROD") || iVar0 == GET_HASH_KEY("WEAPON_KIT_BINOCULARS"))
			{
				func_301(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == GET_HASH_KEY("WEAPON_LASSO"))
			{
				func_301(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0))
			{
				if (iVar0 == GET_HASH_KEY("WEAPON_MELEE_KNIFE_JOHN") && !func_747())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(iParam0))
				{
				}
				else if (!func_748(iVar0))
				{
					func_301(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_301(iVar0, WEAPON::GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_749(Global_35, 2, 0, 1);
				if ((((func_506(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_293(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_506(iVar7) && func_293(24))
				{
					if (!func_301(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_301(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_301(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_282(480, 1);
	}
	return true;
}

bool func_304(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_305(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_304(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_506(iVar4))
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
	if (func_96(GET_HASH_KEY("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == -897553835)
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
		func_342(func_750(iParam0), func_341(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_298() == -1)
		{
			if (func_311(Global_1835011[14 /*74*/].f_1, 1))
			{
				func_282(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_300(0))
	{
		if (func_302(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_347(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_306(int iParam0)
{
	var uVar0;

	if ((iParam0 == GET_HASH_KEY("PROVISION_TALISMAN_EAGLE_TALON") && !func_751()) || iParam0 != GET_HASH_KEY("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_752(Global_35, iParam0, &uVar0))
		{
			func_326(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_332();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_332();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_332();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_330();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_328();
			break;
	}
}

void func_307(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_328();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_329();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_330();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_331();
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
			func_332();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_HAWK_TALON"):
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_753();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_SHARK_TOOTH"):
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_TURTLE_SHELL"):
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_754();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_CAT_EYE"):
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_308(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_309(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

struct<2> func_310(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

bool func_311(int iParam0, bool bParam1)
{
	switch (func_541(iParam0))
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

void func_312(int iParam0)
{
	bool bVar0;

	bVar0 = func_265(iParam0, -2017733358);
	if (func_755() < 3)
	{
		if (bVar0)
		{
			if (func_757(func_756(iParam0), iParam0))
			{
				func_342(79, func_341(func_756(iParam0)), 1);
			}
			else
			{
				func_342(78, func_341(func_756(iParam0)), 1);
			}
		}
		else
		{
			func_342(80, func_341(func_758(iParam0)), 1);
		}
	}
}

bool func_313()
{
	if (((((func_759(GET_HASH_KEY("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_759(GET_HASH_KEY("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400)) || func_759(GET_HASH_KEY("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_759(GET_HASH_KEY("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_759(GET_HASH_KEY("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_759(GET_HASH_KEY("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return true;
	}
	return false;
}

int func_314(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_91(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_760(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_761(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_315(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("DOCUMENT_LETTER_TAXIDERMY"):
			func_289(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			func_291(51, 0, 0, 0, 0, -1, 0);
			func_762(8192);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_TAXIDERMY"):
			func_289(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			func_291(51, 0, 0, 0, 0, -1, 0);
			func_762(524288);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_DINO_BONES"):
			func_289(39, 0, 0, 0, 0, 0, 1, 0);
			func_291(39, 0, 0, 0, 0, -1, 0);
			func_763(16);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_RARE_FISH"):
			func_289(41, 0, 0, 0, 0, 0, 1, 0);
			func_291(41, 0, 0, 0, 0, -1, 0);
			func_764(8);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_289(49, 0, 0, 0, 0, 0, 1, 0);
			func_291(49, 0, 0, 0, 0, -1, 0);
			func_765(16);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_289(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_01"), func_766(1), 0, -1, 0);
			func_767(1);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_289(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_02"), func_766(2), 0, -1, 0);
			func_767(2);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_289(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_03"), func_766(4), 0, -1, 0);
			func_767(4);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_289(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_04"), func_766(8), 0, -1, 0);
			func_767(8);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_289(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_05"), func_766(16), 0, -1, 0);
			func_767(16);
			break;
	}
}

void func_316(int iParam0)
{
	if (func_768() == 1)
	{
		if (func_281(39))
		{
			func_282(342, 0);
		}
		else
		{
			func_282(343, 0);
			func_763(1);
		}
	}
	if (func_768() >= 30)
	{
		func_282(344, 0);
	}
	func_289(39, 0, 0, 0, 0, 0, -1, 0);
	func_291(39, 0, 0, func_768(), 30, 1, 0);
}

void func_317(int iParam0)
{
	if (func_769() == 1)
	{
		if (func_281(49))
		{
			func_282(409, 0);
		}
		else
		{
			func_282(410, 0);
			func_765(1);
		}
	}
	if (func_769() >= 10)
	{
		func_282(411, 0);
	}
	func_289(49, 0, 0, 0, 0, 0, -1, 0);
	func_291(49, 0, 0, func_769(), 10, 1, 0);
}

void func_318(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_01"), 1);
			func_282(437, 0);
			func_282(440, 0);
			func_770(GET_HASH_KEY("TAXIDERMY_ORDER_01"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			func_289(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			func_291(51, 0, 0, sVar0, func_722(GET_HASH_KEY("TAXIDERMY_ORDER_01"), 20), 1, 0);
			func_762(1);
			func_771(-748969569, 0, 0);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_02"), 1);
			func_770(GET_HASH_KEY("TAXIDERMY_ORDER_02"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			func_289(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			func_291(51, 0, 0, sVar0, func_722(GET_HASH_KEY("TAXIDERMY_ORDER_02"), 20), 1, 0);
			func_762(8);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_03"), 1);
			func_770(GET_HASH_KEY("TAXIDERMY_ORDER_03"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			func_289(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			func_291(51, 0, 0, sVar0, func_722(GET_HASH_KEY("TAXIDERMY_ORDER_03"), 20), 1, 0);
			func_762(64);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_04"), 1);
			func_770(GET_HASH_KEY("TAXIDERMY_ORDER_04"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			func_289(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			func_291(51, 0, 0, sVar0, func_722(GET_HASH_KEY("TAXIDERMY_ORDER_04"), 20), 1, 0);
			func_762(512);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_05"), 1);
			func_282(438, 0);
			func_770(GET_HASH_KEY("TAXIDERMY_ORDER_05"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			func_289(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			func_291(51, 0, 0, sVar0, func_722(GET_HASH_KEY("TAXIDERMY_ORDER_05"), 20), 1, 0);
			func_762(32768);
			break;
		default:
			func_282(439, 0);
			break;
	}
}

void func_319()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(GET_HASH_KEY("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(GET_HASH_KEY("SP_CHAL_EXPL_ROOT"), GET_HASH_KEY("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_320(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_298() == -1)
	{
		if (!func_281(43))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_LITTLE"))
			{
				func_282(348, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_REDDISH"))
			{
				func_282(350, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_SNOWY"))
			{
				func_282(352, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_282(400, 0);
			}
		}
		else if (func_265(iParam0, 412399755))
		{
			func_772(GET_HASH_KEY("EXOTIC_STAGE_01"));
			if (func_773() == 0)
			{
				func_717(0, 10);
				iVar1 = func_774(iParam0, iParam1, 1);
				if (((iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_775(iParam0) < func_776(iParam0))
					{
						func_289(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						func_291(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_281(44))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_HERON_FEATHER"))
			{
				func_282(354, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_282(399, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_282(401, 0);
			}
		}
		else if (func_265(iParam0, 709057512))
		{
			func_772(GET_HASH_KEY("EXOTIC_STAGE_02"));
			if (func_773() == 1)
			{
				func_717(0, 10);
				iVar1 = func_774(iParam0, iParam1, 2);
				if ((iParam0 == GET_HASH_KEY("PROVISION_HERON_FEATHER") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_775(iParam0) < func_776(iParam0))
					{
						func_289(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						func_291(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_281(45))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_GATOR_EGG"))
			{
				func_282(359, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_282(394, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_282(395, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_GHOST"))
			{
				func_282(398, 0);
			}
		}
		else if (func_265(iParam0, -1478961327))
		{
			func_772(GET_HASH_KEY("EXOTIC_STAGE_03"));
			if (func_773() == 2)
			{
				func_717(0, 10);
				iVar1 = func_774(iParam0, iParam1, 4);
				if (iParam0 == GET_HASH_KEY("PROVISION_GATOR_EGG"))
				{
					if (!func_777(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0)) >= 25)
					{
						func_778(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0), 1);
						func_716(48);
					}
					if (func_775(iParam0) < func_776(iParam0))
					{
						func_289(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_291(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_775(iParam0) < func_776(iParam0))
					{
						func_289(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_291(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_281(46))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_SPOONBILL_FEATHER"))
			{
				func_282(356, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_282(402, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_282(404, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_282(406, 0);
			}
		}
		else if (func_265(iParam0, -1238404098))
		{
			func_772(GET_HASH_KEY("EXOTIC_STAGE_04"));
			if (func_773() == 3)
			{
				func_717(0, 10);
				iVar1 = func_774(iParam0, iParam1, 8);
				if (((iParam0 == GET_HASH_KEY("PROVISION_SPOONBILL_FEATHER") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_775(iParam0) < func_776(iParam0))
					{
						func_289(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						func_291(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_281(47))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_282(396, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_282(397, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_282(405, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_282(403, 0);
			}
		}
		else if (func_265(iParam0, 1160548794))
		{
			func_772(GET_HASH_KEY("EXOTIC_STAGE_05"));
			if (func_773() == 4)
			{
				func_717(0, 10);
				iVar1 = func_774(iParam0, iParam1, 16);
				if (((iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_775(iParam0) < func_776(iParam0))
					{
						func_289(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						func_291(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_321(int iParam0)
{
	int iVar0;

	if (iParam0 == GET_HASH_KEY("PROVISION_GATOR_EGG"))
	{
		if (!func_777(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0)) >= 25)
		{
			func_778(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0), 1);
			func_716(48);
		}
	}
}

void func_322(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, GET_HASH_KEY("TAXIDERMY"), GET_HASH_KEY("TAXIDERMY_ORDER"));
		if (func_96(func_779(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_780(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_781(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_323(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_298() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_314(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case GET_HASH_KEY("MONEY_ONE_DOLLAR"):
			func_314(GET_HASH_KEY("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_FIVE_DOLLARS"):
			func_314(GET_HASH_KEY("REWARD_FIVE_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_TEN_DOLLARS"):
			func_314(GET_HASH_KEY("REWARD_TEN_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_BILLFOLD"):
			func_314(GET_HASH_KEY("REWARD_BILLFOLD"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_BILLFOLD_SML"):
			func_314(GET_HASH_KEY("REWARD_BILLFOLD_SML"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_BILLSTACK"):
			func_314(GET_HASH_KEY("REWARD_BILLSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COIN"):
			func_314(GET_HASH_KEY("REWARD_COIN"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINPURSE"):
			func_314(GET_HASH_KEY("REWARD_COINPURSE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINSACK"):
			func_314(GET_HASH_KEY("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINSTACK"):
			func_314(GET_HASH_KEY("REWARD_COINS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_MONEYCLIP"):
			func_314(GET_HASH_KEY("REWARD_MONEYCLIP"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_MONEYSTACK"):
			func_314(GET_HASH_KEY("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_MONEYSTACK_LARGE"):
			if (!func_782())
			{
				func_314(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case GET_HASH_KEY("MONEY_COINCUP_SM"):
			func_314(GET_HASH_KEY("REWARD_COINCUP_SM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINCUP_LG"):
			func_314(GET_HASH_KEY("REWARD_COINCUP_LG"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("CURRENCY_CASH"):
			func_314(GET_HASH_KEY("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_CARD_SET_COMMON"):
			func_314(GET_HASH_KEY("REWARD_CARD_SET_COMMON"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_CARD_SET_RARE"):
			func_314(GET_HASH_KEY("REWARD_CARD_SET_RARE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_CARD_SET_ALL"):
			func_314(GET_HASH_KEY("REWARD_CARD_SET_ALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_RARE_FISH"):
			func_314(GET_HASH_KEY("REWARD_RARE_FISH"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_1"):
			func_314(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_2"):
			func_314(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_3"):
			func_314(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_4"):
			func_314(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_5"):
			func_314(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_CALLOWAY_LETTER"):
			func_314(GET_HASH_KEY("REWARD_CALLOWAY_LETTER"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

void func_324(int iParam0)
{
	if (func_281(41))
	{
		func_282(363, 0);
	}
	else
	{
		func_282(362, 0);
	}
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			func_783(GET_HASH_KEY("LEGENDARY_FISH_01"));
			func_784(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_01"));
			func_785(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_01"));
			func_717(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			func_783(GET_HASH_KEY("LEGENDARY_FISH_02"));
			func_784(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_02"));
			func_785(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_02"));
			func_717(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			func_783(GET_HASH_KEY("LEGENDARY_FISH_03"));
			func_784(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_03"));
			func_785(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_03"));
			func_717(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			func_783(GET_HASH_KEY("LEGENDARY_FISH_04"));
			func_784(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_04"));
			func_785(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_04"));
			func_717(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			func_783(GET_HASH_KEY("LEGENDARY_FISH_05"));
			func_784(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_05"));
			func_785(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_05"));
			func_717(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_MUSKIE_LEGENDARY"):
			func_783(GET_HASH_KEY("LEGENDARY_FISH_06"));
			func_784(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_06"));
			func_785(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_06"));
			func_717(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_PERCH_LEGENDARY"):
			func_783(GET_HASH_KEY("LEGENDARY_FISH_07"));
			func_784(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_07"));
			func_785(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_07"));
			func_717(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			func_783(GET_HASH_KEY("LEGENDARY_FISH_08"));
			func_784(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_08"));
			func_785(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_08"));
			func_717(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			func_783(GET_HASH_KEY("LEGENDARY_FISH_09"));
			func_784(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_09"));
			func_785(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_09"));
			func_717(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			func_783(GET_HASH_KEY("LEGENDARY_FISH_10"));
			func_784(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_10"));
			func_785(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_10"));
			func_717(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			func_783(GET_HASH_KEY("LEGENDARY_FISH_11"));
			func_784(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_11"));
			func_785(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_11"));
			func_717(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			func_783(GET_HASH_KEY("LEGENDARY_FISH_12"));
			func_784(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_12"));
			func_785(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_12"));
			func_717(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			func_783(GET_HASH_KEY("LEGENDARY_FISH_13"));
			func_784(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_13"));
			func_785(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_13"));
			func_717(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			func_783(GET_HASH_KEY("LEGENDARY_FISH_14"));
			func_784(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_14"));
			func_785(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

void func_325(int iParam0, int iParam1)
{
	var uVar0;

	func_786(iParam0, iParam1, &uVar0);
}

int func_326(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_708(iParam1, 1, 0) };
		iParam3 = func_787(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_789(iParam1, iParam2, func_788(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_790(1, (func_298() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946804.f_57[func_788(iParam3, 1) /*11*/])
			{
				func_791(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_792(32768) && iParam1 != Global_1946804.f_57[func_788(iParam3, 1) /*11*/])
			{
				func_793();
				func_791(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_791(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_794(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_791(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_529(0);
			func_795(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_791(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_327(int iParam0, bool bParam1)
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
	iVar18 = func_749(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_749(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_699("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_700(&Var3, iVar2, iVar0, iVar1))
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
						func_701(iVar0);
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

void func_328()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_329()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_330()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_331()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_332()
{
	func_796();
	func_797();
	func_798();
}

void func_333(int iParam0, int iParam1, bool bParam2)
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

void func_334(int iParam0, bool bParam1)
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
	func_730(MISC::VAR_STRING(2, sVar1), MISC::VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar3), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_335(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_336(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_337(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_338(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_339(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_340(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_341(int iParam0)
{
	if (!func_264(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_342(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_718(iParam0, &iVar0, &iVar1);
	if (!func_719(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_799(iParam0, 1024))
	{
		return;
	}
	func_720(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_343(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_718(iParam0, &iVar0, &iVar1);
	if (!func_719(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_799(iParam0, 1024))
	{
		return;
	}
	func_720(iVar0, iVar1);
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

int func_344()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_714())
	{
		return func_345();
	}
	iVar4 = (func_714() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_714())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_800(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_715(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_345()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_714());
	return func_715(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_346(int iParam0)
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

bool func_347(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_264(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_708(iParam0, 0, 1) };
	Var5 = { func_742(iParam0, Var0, Var0.f_4, 0) };
	return func_801(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_348(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_298() != -1)
	{
		return;
	}
	switch (func_295(iParam0))
	{
		case 81053684:
			if (iParam0 == GET_HASH_KEY("KIT_BANDANA") && func_802(81053684, 0) <= 0)
			{
				func_791(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == GET_HASH_KEY("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == GET_HASH_KEY("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				func_791(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_803(iParam0);
			if (func_804(iVar0))
			{
				func_805(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_791(30, iParam0, 0, 0, 0);
			}
			if (func_806() == -2125499975 || func_806() == -449205311)
			{
				switch (iParam0)
				{
					case GET_HASH_KEY("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case GET_HASH_KEY("CLOTHING_GUNSLINGER_OUTFIT"):
						func_791(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_806() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						func_791(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_807(-525676072, 0))
			{
				if (func_808(-525676072, &iVar1))
				{
					func_791(33, iVar1, 0, 0, 0);
				}
			}
			func_791(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == GET_HASH_KEY("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == GET_HASH_KEY("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!func_809(GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_326(Global_35, iParam0, 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_294(24);
		if (func_327(&iVar2, 0))
		{
			func_301(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_349(int iParam0)
{
	if (func_265(iParam0, 943695443))
	{
		func_810(0, iParam0);
	}
	else if (func_265(iParam0, -2096528786))
	{
		func_810(1, iParam0);
	}
	else if (func_265(iParam0, -1094167013))
	{
		func_810(2, iParam0);
	}
	else if (func_265(iParam0, 1936654645))
	{
		func_810(3, iParam0);
	}
	else if (func_265(iParam0, 1306489306))
	{
		func_810(4, iParam0);
	}
	else if (func_265(iParam0, 435762317))
	{
		func_810(5, iParam0);
	}
	else if (func_265(iParam0, 1259363210))
	{
		func_810(6, iParam0);
	}
	else if (func_265(iParam0, 881398259))
	{
		func_810(7, iParam0);
	}
	else if (func_265(iParam0, -541549214))
	{
		func_810(8, iParam0);
	}
	else if (func_265(iParam0, 130796156))
	{
		func_810(-1, iParam0);
	}
}

int func_350(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	func_811(&Var4, GET_HASH_KEY("LOOT_TYPE_NORMAL"));
	return func_812(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_351(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_264(iParam0, 0))
	{
		return Var0;
	}
	if (func_265(iParam0, -305066475))
	{
		if (func_298() == -1)
		{
			if (func_265(iParam0, -537818634))
			{
				return func_813(GET_HASH_KEY("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_813(GET_HASH_KEY("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_265(iParam0, -537818634))
	{
		return func_813(GET_HASH_KEY("MEDICINE_ITEMS"));
	}
	if (func_265(iParam0, 2084895747))
	{
		return func_813(GET_HASH_KEY("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

void func_352(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_BIRD_FEATHER_FLIGHT"):
			if (func_298() == -1)
			{
				if (func_311(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_282(109, 1);
				}
			}
			break;
	}
}

void func_353(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_815(func_814(0));
	func_817(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_816(iParam0), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_354(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (!func_264(iParam0, 0))
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
	if (!func_818())
	{
		func_819(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_820(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_820(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_292(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_270(iParam0);
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
	else if (!func_821(iParam0, &Var7, iVar11, iVar10, 0, GET_HASH_KEY("UI_ITEMVIEWER")))
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
	sVar15 = func_822(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_341(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_265(iParam0, 1443104131)) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_341(iParam0));
	}
	func_817(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

void func_355(char[4] cParam0)
{
}

bool func_356(char[4] cParam0)
{
	return true;
}

bool func_357()
{
	return func_823(1);
}

void func_358(int iParam0)
{
	func_824(1, iParam0, 0);
}

bool func_359(var uParam0, int iParam1)
{
	return (uParam0->f_1430 && iParam1) != 0;
}

struct<8> func_360(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_825(uParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { func_826() };
	}
	return Var0;
}

void func_361(var uParam0, char* sParam1)
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
	func_571(uParam0, sParam1);
	func_523(uParam0, 2097152, 1);
	func_362(uParam0, 33554432);
	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_228, sParam1, true);
}

void func_362(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

Vector3 func_363(var uParam0, int iParam1)
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
			vVar10 = { func_827(vVar10) * Vector(2f, 2f, 2f) };
			vVar0[0 /*3*/] = { uParam0->f_782[iParam1 /*41*/].f_1 + uParam0->f_782[iParam1 /*41*/].f_4 / Vector(2f, 2f, 2f) + vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[0 /*3*/], &(vVar0[0 /*3*/].f_2), false);
			vVar0[1 /*3*/] = { uParam0->f_782[iParam1 /*41*/].f_1 + uParam0->f_782[iParam1 /*41*/].f_4 / Vector(2f, 2f, 2f) - vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[1 /*3*/], &(vVar0[1 /*3*/].f_2), false);
			if (!func_187(vVar0[0 /*3*/]))
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
			if (!func_187(vVar0[0 /*3*/]))
			{
				return vVar0[0 /*3*/];
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_364(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_365(var uParam0, int iParam1)
{
	uParam0->f_1430 = (uParam0->f_1430 - (uParam0->f_1430 && iParam1));
}

bool func_366(var uParam0, int iParam1)
{
	return (uParam0->f_1432.f_1 && iParam1) != 0;
}

bool func_367(var uParam0, int iParam1)
{
	return func_828(uParam0->f_27, iParam1);
}

int func_368(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
{
	int iVar0;

	func_515(uParam4, &cParam0);
	if (func_514(uParam4, 2) && !func_514(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_SKIP_CUTSCENE"), false);
	}
	if (func_829(uParam4) != 1)
	{
		func_830(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (func_829(uParam4))
	{
		case 1:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_228, false))
				{
					func_831(uParam4, &cParam0);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228))
				{
					func_832(uParam4, 4);
					return 0;
				}
				else if (func_833(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_221);
				}
				func_832(uParam4, 3);
			}
			else if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_230)) && func_514(uParam4, 134217728))
				{
				}
				else
				{
					func_224(uParam4);
				}
				func_69(&(uParam4->f_1));
				func_832(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_527(uParam4);
				if (!func_49(&(uParam4->f_1)))
				{
					func_50(&(uParam4->f_1), 0);
				}
				else if (func_834(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
					}
					func_832(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228) || !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
			{
				if (func_189(uParam4, &cParam0, 1, 1))
				{
					if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
					{
						func_832(uParam4, 4);
					}
					else if (!func_187(func_516(uParam4)) && !func_183(Global_35, func_516(uParam4), 100f, 1, 1))
					{
						func_835(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_516(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_834(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
					}
					func_832(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::UPDATE_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
					func_836(1, 0);
					func_831(uParam4, &cParam0);
					func_832(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (func_834(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
				}
				func_832(uParam4, 4);
			}
			break;
		case 3:
			func_837(uParam4);
			if (func_833(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_221);
			}
			if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_228, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228) || func_514(uParam4, 512)))
			{
				if (!func_514(uParam4, 1024) && func_838(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!func_514(uParam4, 512))
				{
					func_69(&(uParam4->f_1));
					func_362(uParam4, 512);
					func_832(uParam4, 4);
				}
				else if (func_514(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				func_830(uParam4);
			}
			if (func_514(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((func_839(uParam4) - func_840(uParam4)))) <= 2f)
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
				if (func_841(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && func_840(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (func_842(uParam4))
			{
				if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
				}
				func_843(uParam4);
				func_844(uParam4);
				return 1;
			}
			else
			{
				if (func_514(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228))
						{
							ANIMSCENE::TRIGGER_ANIM_SCENE_SKIP(uParam4->f_228);
						}
						func_69(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						func_362(uParam4, 512);
						func_523(uParam4, 67108864, 1);
						func_832(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!func_514(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228)) && CAM::IS_SCREEN_FADED_OUT()) && func_840(uParam4) <= 5000) && func_840(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!func_514(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_845(&(uParam4->f_285), 0);
					func_362(uParam4, 536870912);
				}
				if (func_840(uParam4) >= 5000 && func_840(uParam4) <= (func_839(uParam4) - 5000))
				{
					func_846();
				}
			}
			break;
		case 6:
			if (func_842(uParam4))
			{
				func_843(uParam4);
				func_844(uParam4);
				return 1;
			}
			break;
		case 4:
			if (func_514(uParam4, 524288))
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
						func_362(uParam4, 1073741824 /* Float: 2f */);
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
					Stack.Push(!func_833(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_222);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_228, false);
						}
						func_832(uParam4, 3);
					}
					else if (func_834(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_228, false);
						}
						func_832(uParam4, 3);
					}
				}
				if (func_829(uParam4) == 3)
				{
					if (func_514(uParam4, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		case 5:
			func_832(uParam4, 4);
			break;
	}
	return 0;
}

void func_369(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		if (func_514(uParam0, 16))
		{
			POPULATION::_0xA1CFB35069D23C23(uParam0->f_4);
			POPULATION::_0x74C2B3DC0B294102(uParam0->f_4);
			func_847(uParam0);
			PATHFIND::_0xD17672447692478E(uParam0->f_4, 0);
		}
	}
	if (func_514(uParam0, 8))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_4);
		func_523(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_523(uParam0, 16, 1);
}

void func_370(char[4] cParam0)
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
			if (func_531(cParam0->f_32.f_4, &Var0))
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

void func_371(int* iParam0)
{
	struct<247> Var0;

	Var0 = 1;
	Var0.f_13 = 17;
	Var0.f_218 = 1097859072;
	Var0.f_219 = 1101004800;
	Var0.f_246 = 4;
	MISC::_COPY_MEMORY(iParam0, &Var0, 314);
}

void func_372()
{
	if (iLocal_16 >= 3)
	{
		if (!func_848(0))
		{
			func_849();
		}
		else if (!func_848(1))
		{
			func_850();
		}
		else if (!func_848(2))
		{
			func_851();
		}
		else if (!func_848(3))
		{
			func_852();
		}
		else if (!func_848(4))
		{
			func_853();
		}
		else if (!func_848(5))
		{
			func_854();
		}
	}
}

void func_373(char[4] cParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
	{
		vLocal_311 = { ENTITY::GET_ENTITY_COORDS(iLocal_143, false, false) };
		if (iLocal_16 == 5)
		{
			func_855(cParam0);
		}
	}
}

void func_374()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!MISC::IS_BIT_SET(iLocal_297, iVar0))
		{
			if (func_83(iLocal_23[iVar0]))
			{
				func_856(iVar0);
			}
			else
			{
				iVar0++;
			}
		}
	}
}

void func_375()
{
	if (!func_257(iLocal_14, 2048))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
		{
			if (func_624(Global_35, iLocal_143, 80f, 1))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_143, "LSHNT_winton_group", 0f);
				func_243(&iLocal_14, 2048);
			}
		}
	}
	if (!func_257(iLocal_14, 1024))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_147[0]))
		{
			if (func_624(Global_35, uLocal_147[0], 80f, 1))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_147[0], "LSHNT_cougar_group", 0f);
				func_243(&iLocal_14, 1024);
			}
		}
	}
	if (!func_257(iLocal_14, 1))
	{
		AUDIO::_0xA6A3A3F96B8B030E();
		func_243(&iLocal_14, 1);
	}
	else
	{
		switch (iLocal_16)
		{
			case 0:
			case 1:
			case 2:
				if (!func_257(iLocal_14, 2))
				{
					AUDIO::_0x2B9C37C01BF25EDB("ride_to_cave");
					func_243(&iLocal_14, 2);
				}
				break;
			case 3:
				if (!func_257(iLocal_14, 4))
				{
					AUDIO::_0x2B9C37C01BF25EDB("enter_cave");
					func_243(&iLocal_14, 4);
				}
				break;
			case 4:
				if (!func_257(iLocal_14, 8))
				{
					AUDIO::_0x2B9C37C01BF25EDB("search_cave");
					func_243(&iLocal_14, 8);
				}
				else if (!func_257(iLocal_14, 16))
				{
					if (iLocal_18 == 12)
					{
						AUDIO::_0x2B9C37C01BF25EDB("winton_attacked");
						func_243(&iLocal_14, 16);
					}
				}
				break;
			case 5:
				if (!func_257(iLocal_14, 32))
				{
					AUDIO::_0x2B9C37C01BF25EDB("find_winton");
					func_243(&iLocal_14, 32);
				}
				break;
			case 7:
				if (!func_257(iLocal_14, 64))
				{
					AUDIO::_0x2B9C37C01BF25EDB("kill_cougar");
					func_243(&iLocal_14, 64);
				}
				break;
			case 8:
				if (!func_257(iLocal_14, 128))
				{
					AUDIO::_0x2B9C37C01BF25EDB("skin_cougar");
					func_243(&iLocal_14, 128);
				}
				break;
			case 9:
			case 10:
				if (!func_257(iLocal_14, 256))
				{
					AUDIO::_0x2B9C37C01BF25EDB("return_to_horse");
					func_243(&iLocal_14, 256);
				}
				else if (!func_257(iLocal_14, 512))
				{
					if (func_633(Global_35))
					{
						AUDIO::_0x9428447DED71FC7E("LSHNT_Scenes");
						func_243(&iLocal_14, 512);
					}
				}
				break;
		}
	}
}

void func_376(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::GET_PED_CONFIG_FLAG(iParam0, 297, true))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
		}
		if (!PED::GET_PED_CONFIG_FLAG(iParam0, 315, true))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
		}
		if (!PED::GET_PED_CONFIG_FLAG(iParam0, 130, true))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
		}
		if (!PED::GET_PED_CONFIG_FLAG(iParam0, 331, true))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 331, true);
		}
		if (!PED::GET_PED_CONFIG_FLAG(iParam0, 330, true))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 330, true);
		}
	}
}

void func_377(int iParam0)
{
	Global_1935689.f_12 = iParam0;
}

void func_378(int iParam0, bool bParam1)
{
	if (!func_857(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_858(iParam0, 1);
	}
	else
	{
		func_859(iParam0, 1);
	}
	func_861(func_860(iParam0), bParam1);
}

void func_379(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (func_862(iParam0))
		{
			return;
		}
	}
	if (bParam2)
	{
		if (!func_863(iParam0, 4))
		{
			func_864(iParam0, 4);
		}
	}
	else
	{
		func_865(iParam0, 4);
	}
	func_866(iParam0);
}

bool func_380(int iParam0)
{
	return func_867(iParam0, 32);
}

bool func_381(int iParam0)
{
	return func_257(iLocal_296, iParam0);
}

bool func_382(int iParam0)
{
	return ENTITY::_IS_ENTITY_FULLY_LOOTED(iParam0);
}

bool func_383(char[4] cParam0, char* sParam1, bool bParam2)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam1, 24);
	return func_868(cParam0, cVar0, 0, -1, bParam2, 0);
}

int func_384(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	float fVar9;

	if ((iParam0 < 0 || iParam1 < 0) || iParam2 < 0)
	{
		return 0;
	}
	if (iParam0 >= 24)
	{
		iParam0 = 0;
	}
	iVar0 = func_398();
	if (func_461(iVar0) > iParam0)
	{
		if (func_869(iVar0) + 1 > func_872(func_870(iVar0), func_871(iVar0)))
		{
			if (func_870(iVar0) == 11)
			{
				func_873(&iVar1, iParam2, iParam1, iParam0, 1, 0, func_871(iVar0) + 1);
			}
			else
			{
				func_873(&iVar1, iParam2, iParam1, iParam0, 1, func_870(iVar0) + 1, func_871(iVar0));
			}
		}
		else
		{
			func_873(&iVar1, iParam2, iParam1, iParam0, func_869(iVar0) + 1, func_870(iVar0), func_871(iVar0));
		}
	}
	else
	{
		func_873(&iVar1, iParam2, iParam1, iParam0, func_869(iVar0), func_870(iVar0), func_871(iVar0));
	}
	if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 9999999)
	{
		if (func_874(iVar1, 1))
		{
			CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
			CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(9999999);
			return 1;
		}
		if (!bParam3)
		{
			if (!func_874(iVar1, 1))
			{
				func_875(iVar0, iVar1, &iVar2, &iVar3, &iVar4, &uVar5, &uVar6, &uVar7);
				if (iVar4 == 0)
				{
					if (iVar3 == 0 && iVar2 <= 5)
					{
						CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
						CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(9999999);
					}
					else
					{
						iVar8 = BUILTIN::FLOOR((2000f / (BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(60))));
						CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(iVar8);
					}
				}
				else if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 2000)
				{
					fVar9 = (IntToFloat((CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() - 2000)) * 0.1f);
					fVar9 = (IntToFloat(CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE()) - fVar9);
					if (MISC::ABSF((fVar9 - 2000f)) < 2000f)
					{
						fVar9 = 2000f;
					}
					CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(BUILTIN::FLOOR(fVar9));
				}
			}
		}
	}
	else if (!func_874(iVar1, 1))
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	}
	return 0;
}

int func_385(char[4] cParam0)
{
	func_74();
	func_876(cParam0);
	switch (iLocal_15)
	{
		case 0:
			func_877(cParam0);
			break;
		case 1:
			if (func_878(cParam0))
			{
				func_879();
			}
			break;
		case 2:
			func_880();
			return 1;
	}
	return 0;
}

void func_386()
{
	func_573(Global_35, -2120.447f, 25.29967f, 265.4346f, &(vLocal_353[0 /*3*/]), 20f, 17f, 15f, 12f, 1f, 0, 0, 1, 1, 1);
	if (!PED::IS_PED_ON_MOUNT(Global_35) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uLocal_276[0], true, 0))
	{
		func_80(4);
	}
}

bool func_387(char[4] cParam0)
{
	func_876(cParam0);
	func_881();
	func_428();
	func_882();
	func_883(cParam0);
	func_74();
	switch (iLocal_15)
	{
		case 0:
			func_68(*cParam0, func_41(2), func_41(3), 2, 3);
			func_636(128);
			PED::SET_PED_CONFIG_FLAG(Global_35, 141, true);
			func_248(0);
			PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), iLocal_143, "LS_HUNTER", -2121.57f, 69.19025f, 256.3475f, 0, "LS_HUNTER");
			func_85();
			func_86();
			func_84();
			func_879();
			break;
		case 1:
			if (func_884())
			{
				func_879();
			}
			else if (!func_81(iLocal_143, 0))
			{
				func_879();
			}
			else if (func_885(&Global_35, 1))
			{
				func_879();
			}
			break;
		case 2:
			func_84();
			func_71(11);
			return true;
	}
	return false;
}

void func_388(char[4] cParam0)
{
	func_876(cParam0);
	func_881();
	func_883(cParam0);
	func_882();
	func_428();
	if (!func_83(268435456))
	{
		func_259();
	}
	func_886();
	switch (iLocal_15)
	{
		case 0:
			if (!func_357())
			{
				if (func_383(&(cParam0->f_2106), "LS_HNT2_SPLI", 0))
				{
					func_887();
					func_879();
				}
			}
			if (!func_81(iLocal_143, 0) || !func_81(uLocal_147[0], 0))
			{
				iLocal_15 = 2;
			}
			else if (iLocal_20[0] == 5)
			{
				iLocal_15 = 2;
			}
			break;
		case 1:
			if (!func_81(iLocal_143, 0) || !func_81(uLocal_147[0], 0))
			{
				func_879();
				return;
			}
			else if (iLocal_20[0] == 5)
			{
				func_879();
				return;
			}
			else if (func_635("LS_HNT2_SCREAM1"))
			{
				func_69(&uLocal_381);
				func_879();
				return;
			}
			if (!func_635("LS_HNT2_SPLI"))
			{
				if (!func_381(16384))
				{
					if (func_383(&(cParam0->f_2106), "LS_HNT2_SPLIPLR", 0))
					{
						func_888(32);
						func_67(16384);
					}
				}
				else
				{
					if (!func_255("OBJ_SEARCH_CAVE", 0, 0, -1, -1, 0))
					{
						func_79(cParam0, "OBJ_SEARCH_CAVE", vLocal_317[0 /*3*/]);
					}
					if (!func_381(65536))
					{
						func_68(*cParam0, func_41(3), func_41(4), 3, 4);
						if (!func_889())
						{
							func_117("OBJ_SEARCH_CAVE", 7500, 0, 1, 0, 0, -1, -1, 0);
						}
						func_67(65536);
					}
				}
			}
			else
			{
				if (!func_381(32768))
				{
					if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LS_HNT2_SPLI") > 1)
					{
						if (MAP::DOES_BLIP_EXIST(iLocal_152))
						{
							MAP::BLIP_REMOVE_MODIFIER(iLocal_152, -546708623);
						}
						if (!func_49(&(vLocal_353[4 /*3*/])))
						{
							func_69(&(vLocal_353[4 /*3*/]));
						}
						func_890();
						func_79(cParam0, "OBJ_SEARCH_CAVE", vLocal_317[0 /*3*/]);
						func_67(32768);
					}
				}
				if (func_70(&(vLocal_353[4 /*3*/])) > 3f)
				{
					PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "LS_HUNTER");
					func_73(&(vLocal_353[4 /*3*/]));
				}
			}
			break;
		case 2:
			PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "LS_HUNTER");
			func_891(&iLocal_152);
			func_892();
			break;
	}
}

bool func_389(char[4] cParam0)
{
	func_876(cParam0);
	func_881();
	func_883(cParam0);
	func_428();
	switch (iLocal_15)
	{
		case 0:
			func_208(&Global_1935630, 262144);
			if (!func_81(uLocal_147[0], 0))
			{
				iLocal_15 = 2;
				return false;
			}
			if (!func_357())
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
				{
					func_79(cParam0, "OBJ_FIND", vLocal_311);
					func_117("OBJ_FIND", 7500, 1, 1, 0, 0, -1, -1, 0);
				}
				func_893(&(cParam0->f_3));
				func_879();
			}
			break;
		case 1:
			if (!func_81(uLocal_147[0], 0))
			{
				func_879();
				return false;
			}
			if (!func_381(16777216))
			{
				if ((func_70(&(vLocal_327[4 /*3*/])) > 6f && func_70(&uLocal_381) > 2f) && !func_357())
				{
					if (func_383(&(cParam0->f_2106), "LS_HNT2_SCREAM2", 0))
					{
						func_69(&uLocal_381);
						func_67(16777216);
					}
				}
			}
			func_894();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
			{
				if (func_895(cParam0))
				{
					if (!func_381(33554432))
					{
						func_358(0);
						if (func_383(&(cParam0->f_2106), "LS_HNT2_WDEAD", 0))
						{
							func_67(33554432);
						}
					}
					func_69(&(vLocal_343[0 /*3*/]));
					func_891(&iLocal_152);
					func_879();
					return false;
				}
				if (func_896())
				{
					func_879();
					return false;
				}
			}
			if (!bLocal_171)
			{
				if ((func_70(&(vLocal_327[4 /*3*/])) > 16f && !func_357()) && func_70(&uLocal_381) > 2f)
				{
					if (func_383(&(cParam0->f_2106), "LS_HNT2_NFOUND", 0))
					{
						func_69(&uLocal_381);
						bLocal_171 = true;
					}
				}
			}
			func_897(cParam0);
			if (!bLocal_174)
			{
				if (func_183(Global_35, -2140.087f, 113.2852f, 238.6838f, 4f, 1, 1) || func_183(Global_35, -2133.946f, 104.373f, 243.4232f, 4f, 1, 1))
				{
					if (!func_357() && func_70(&uLocal_381) > 10f)
					{
						if (func_383(&(cParam0->f_2106), "LS_HNT2_BONES", 0))
						{
							func_69(&uLocal_381);
							bLocal_174 = true;
						}
					}
				}
			}
			break;
		case 2:
			iLocal_33 = 0;
			func_891(&iLocal_152);
			func_90(iLocal_143, 1);
			func_92(iLocal_143, func_91(GET_HASH_KEY("REWARD_PED_SMALL"), 0, -1));
			func_71(7);
			return true;
	}
	return false;
}

int func_390(char[4] cParam0)
{
	func_876(cParam0);
	func_881();
	func_883(cParam0);
	func_428();
	switch (iLocal_15)
	{
		case 0:
			func_879();
			break;
		case 1:
			if (func_898(uLocal_147[0], Global_35) <= func_899() || func_898(uLocal_147[0], Global_35) <= 5f)
			{
				if (!ENTITY::IS_ENTITY_OCCLUDED(uLocal_147[0]))
				{
					func_879();
				}
			}
			else if (!func_81(uLocal_147[0], 0))
			{
				func_879();
			}
			break;
		case 2:
			iLocal_33 = 0;
			func_71(11);
			return 1;
	}
	return 0;
}

int func_391(char[4] cParam0)
{
	func_876(cParam0);
	func_881();
	func_883(cParam0);
	func_428();
	switch (iLocal_15)
	{
		case 0:
			if (func_81(uLocal_147[0], 0))
			{
				func_79(cParam0, "OBJ_FK_COUGAR", ENTITY::GET_ENTITY_COORDS(uLocal_147[0], true, false));
				func_117("OBJ_FK_COUGAR", 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			func_69(&(vLocal_353[3 /*3*/]));
			func_879();
			break;
		case 1:
			if (func_49(&(vLocal_353[3 /*3*/])))
			{
				if (!MAP::DOES_BLIP_EXIST(uLocal_153[0]) && !func_900(Global_35))
				{
					if (!bLocal_177)
					{
						if (!bLocal_175)
						{
							if (func_70(&(vLocal_353[3 /*3*/])) > 7f)
							{
								if (!func_357())
								{
									if (func_383(&(cParam0->f_2106), "LS_HNT2_CALL", 0))
									{
										bLocal_175 = true;
										func_69(&(vLocal_353[3 /*3*/]));
									}
								}
							}
						}
						else if (!bLocal_176)
						{
							if (func_70(&(vLocal_353[3 /*3*/])) > 8f)
							{
								if (!func_357())
								{
									if (func_383(&(cParam0->f_2106), "LS_HNT2_CALL", 0))
									{
										bLocal_176 = true;
										func_69(&(vLocal_353[3 /*3*/]));
									}
								}
							}
						}
						else if (!func_357())
						{
							bLocal_176 = false;
							func_69(&(vLocal_353[3 /*3*/]));
						}
					}
				}
				else if (!bLocal_177)
				{
					bLocal_177 = true;
				}
			}
			if (!func_81(uLocal_147[0], 0))
			{
				func_879();
			}
			break;
		case 2:
			func_68(*cParam0, func_41(4), func_41(6), 4, 6);
			iLocal_33 = 0;
			func_71(11);
			return 1;
	}
	return 0;
}

void func_392(char[4] cParam0)
{
	bool bVar0;
	var uVar1;

	func_876(cParam0);
	func_881();
	func_883(cParam0);
	func_428();
	switch (iLocal_15)
	{
		case 0:
			if (!func_901(167))
			{
				func_282(167, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_147[0]))
			{
				func_79(cParam0, "OBJ_SKIN", ENTITY::GET_ENTITY_COORDS(uLocal_147[0], false, false));
				func_69(&(vLocal_353[3 /*3*/]));
			}
			func_879();
			break;
		case 1:
			if (!func_381(268435456))
			{
				if (!func_357())
				{
					if (func_383(&(cParam0->f_2106), "LS_HNT2_KILLED", 0))
					{
						func_67(268435456);
					}
				}
			}
			if (func_70(&(vLocal_353[3 /*3*/])) > 2f || bLocal_401)
			{
				if (!func_902("OBJ_SKIN", 1))
				{
					func_117("OBJ_SKIN", 7500, 0, 1, 0, 0, -1, -1, 0);
				}
				func_73(&(vLocal_353[3 /*3*/]));
				bLocal_401 = false;
			}
			if (PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35) != 0 && ENTITY::_IS_ENTITY_FULLY_LOOTED(uLocal_147[0]))
			{
				iLocal_151 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				func_879();
			}
			else
			{
				bVar0 = false;
				if (func_903(uLocal_147[0]))
				{
					bVar0 = true;
				}
				if (ENTITY::_IS_ENTITY_FULLY_LOOTED(uLocal_147[0]))
				{
					bVar0 = true;
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_147[0]))
				{
					if (ENTITY::_0x0CCEFC6C2C95DA2A(&uVar1, uLocal_147[0], 0, Global_35) == 0)
					{
						if ((!func_49(&(vLocal_353[2 /*3*/])) && !PED::IS_PED_RAGDOLL(uLocal_147[0])) && bVar0)
						{
							func_50(&(vLocal_353[2 /*3*/]), 0);
						}
						else if (func_70(&(vLocal_353[2 /*3*/])) > 5f)
						{
							iLocal_33 = 4;
						}
					}
					else if (func_49(&(vLocal_353[2 /*3*/])))
					{
						func_73(&(vLocal_353[2 /*3*/]));
					}
				}
			}
			break;
		case 2:
			iLocal_33 = 0;
			func_71(11);
			break;
	}
}

void func_393(char[4] cParam0)
{
	func_876(cParam0);
	func_881();
	switch (iLocal_15)
	{
		case 0:
			func_891(&iLocal_156);
			func_79(cParam0, "OBJ_PLT_STOW", 0f, 0f, 0f);
			func_117("OBJ_PLT_STOW", 7500, 0, 1, 0, 0, -1, -1, 0);
			func_904(7);
			func_888(524288);
			if (func_81(iLocal_144[0], 0))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_144[0], -2115.011f, 16.38608f, 264.1115f, 308.4892f, true, false, true);
				TASK::TASK_STAND_STILL(iLocal_144[0], -1);
			}
			func_879();
			break;
		case 1:
			func_905(cParam0);
			if (!func_381(134217728))
			{
				if (func_383(&(cParam0->f_2106), "LS_HNT2_WHITE", 0))
				{
					func_67(134217728);
				}
			}
			if (!func_83(524288))
			{
				if (func_81(iLocal_144[1], 0))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_144[1], -2117.592f, 17.45552f, 263.7554f, 150.5622f, true, false, true);
					TASK::TASK_STAND_STILL(iLocal_144[1], -1);
					func_80(524288);
				}
				else
				{
					func_82(&(iLocal_144[1]), -2117.592f, 17.45552f, 263.7554f, 150.5622f, 1, 1, 1, 1);
				}
			}
			if (!bLocal_410)
			{
				func_904(7);
				bLocal_410 = true;
			}
			func_906(cParam0);
			func_907();
			if (func_183(Global_35, Local_136, 10f, 1, 1) && func_908())
			{
				func_879();
			}
			break;
		case 2:
			func_891(&iLocal_155);
			func_71(10);
			break;
	}
}

bool func_394(char[4] cParam0)
{
	bool bVar0;

	switch (iLocal_15)
	{
		case 0:
			func_79(cParam0, "OBJ_SELL", Local_136);
			func_879();
			break;
		case 1:
			func_905(cParam0);
			if ((((!func_96(GET_HASH_KEY("PROVISION_LOANSHARK_SKINS"), 1, 0) && func_909(GET_HASH_KEY("PROVISION_LOANSHARK_SKINS")) == 0) && !func_910(0)) && !func_910(1)) && !func_911(GET_HASH_KEY("PROVISION_LOANSHARK_SKINS")))
			{
				if (func_165(10) == GET_HASH_KEY("PROVISION_LOANSHARK_SKINS"))
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				func_879();
			}
			break;
		case 2:
			func_97(GET_HASH_KEY("MONEY_LOANSHARK_WINTON_DEBT"), 1, 0, 0, 0, 1248274121, 0, 0, 0, 0);
			func_891(&iLocal_155);
			func_71(11);
			return true;
	}
	return false;
}

bool func_395(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 9);
}

bool func_396(int iParam0)
{
	return (Global_40.f_9052.f_21 && iParam0) != 0;
}

void func_397(int iParam0)
{
	Global_40.f_9052.f_21 = (Global_40.f_9052.f_21 || iParam0);
}

int func_398()
{
	return Global_1899515;
}

void func_399(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_871(*iParam0);
	iVar1 = func_870(*iParam0);
	iVar2 = func_869(*iParam0);
	iVar3 = func_461(*iParam0);
	iVar4 = func_912(*iParam0);
	iVar5 = func_913(*iParam0);
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
	iVar6 = func_872(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_872(iVar1, iVar0);
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
	func_873(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_400(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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

	if (!func_128(iParam0))
	{
		return;
	}
	if (func_541(iParam0) == 4)
	{
		func_914(iParam0, func_398());
		if (!func_542(iParam0) == 5 && !func_542(iParam0) == 6)
		{
			if (bParam3)
			{
				func_421(iParam0, 6);
			}
			else
			{
				func_421(iParam0, 5);
			}
			func_915(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_547(1);
	}
	iVar0 = func_438(iParam0);
	bVar1 = func_298() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_916(0, 2);
		if (!bVar1 && bParam1)
		{
			func_917();
		}
	}
	else
	{
		func_548(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_918(iParam0);
	}
	else
	{
		Var2 = { func_813(GET_HASH_KEY("DEATHS_ON_CURRENT_DEED")) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!func_550(32768))
		{
			Var4 = { func_813(GET_HASH_KEY("LAST_MISSION_NAME")) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && func_542(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_424(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[76 /*74*/].f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[func_424(iParam0) /*74*/].f_8), true);
						}
					}
					else if ((func_424(iParam0) != 95 && func_424(iParam0) != 82) && !func_426(Global_1347702[func_424(iParam0) /*49*/].f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1347702[func_424(iParam0) /*49*/].f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[func_424(iParam0) /*74*/].f_8), true);
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
		func_920(func_424(iParam0), iVar6, func_919());
	}
	else if (iVar0 == 8)
	{
		func_921(func_424(iParam0), iVar6, func_919(), func_563());
	}
	if (!func_542(iParam0) == 5 && !func_542(iParam0) == 6)
	{
		iVar9 = func_922(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_923(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!Global_1879534 && !Global_1879534.f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_924(func_424(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_925((iVar10 - 20), 0, iVar10);
					iVar11 = func_925((iVar11 - 10), 0, iVar11);
				}
				func_926(1);
				func_927(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528.f_217 = 1;
				break;
			case 4:
				func_927(45, 0, 1);
				break;
			case 8:
				iVar10 = func_928(func_424(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_925((iVar10 - 20), 0, iVar10);
					iVar11 = func_925((iVar11 - 10), 0, iVar11);
				}
				func_927(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_929(func_424(iParam0)))
				{
					func_930(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				Global_1899528.f_217 = 1;
				break;
			case 9:
				func_927(120, 0, 1);
				break;
			case 2:
				func_927(120, 0, 1);
				break;
			case 6:
				func_927(func_931(func_439(iParam0)), 0, 1);
				break;
			case 5:
				func_927(120, 0, 1);
				break;
		}
	}
	func_561(iParam0, 1);
	func_914(iParam0, func_398());
	func_915(iParam0);
	if ((!func_542(iParam0) == 0 && bParam1) && func_298() == -1)
	{
		iVar12 = func_556(iParam0);
		if (iVar12 != -1)
		{
			func_113(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_557();
			if (iVar12 != -1)
			{
				func_113(0);
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
				switch (func_424(iParam0))
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
				if (func_425(func_424(iParam0)) && func_426(Global_1347702[func_424(iParam0) /*49*/].f_12, 4))
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
				if (func_424(iParam0) != 77)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = func_711();
				}
				break;
			case 8:
				if (func_424(iParam0) != 58)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = func_711();
				}
				break;
		}
	}
	if (!func_542(iParam0) == 5 && !func_542(iParam0) == 6)
	{
		if (bParam3)
		{
			func_421(iParam0, 6);
		}
		else
		{
			func_421(iParam0, 5);
		}
		func_915(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_424(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					case 1:
						func_932();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_97(GET_HASH_KEY("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_97(GET_HASH_KEY("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_97(GET_HASH_KEY("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_97(GET_HASH_KEY("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_97(GET_HASH_KEY("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_97(GET_HASH_KEY("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_97(GET_HASH_KEY("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_97(GET_HASH_KEY("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_97(GET_HASH_KEY("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_97(GET_HASH_KEY("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_933(GET_HASH_KEY("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_97(GET_HASH_KEY("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_933(GET_HASH_KEY("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_97(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_933(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_97(GET_HASH_KEY("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_933(GET_HASH_KEY("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_97(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_933(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_97(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_933(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_97(GET_HASH_KEY("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_933(GET_HASH_KEY("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_97(GET_HASH_KEY("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_933(GET_HASH_KEY("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_97(GET_HASH_KEY("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_933(GET_HASH_KEY("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_97(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_933(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_97(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_933(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_97(GET_HASH_KEY("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_933(GET_HASH_KEY("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_97(GET_HASH_KEY("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_97(GET_HASH_KEY("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_97(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_97(GET_HASH_KEY("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_934();
						func_935(GET_HASH_KEY("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
						func_936();
						func_937();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(func_938(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131 /* GXTEntry: "Jamie Gillis" */);
						break;
					case 15:
						func_97(GET_HASH_KEY("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_HUNT_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_HUNT_ROOT"), true);
							func_282(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_GAMB_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_GAMB_ROOT"), true);
							func_282(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_939(304805134, 1, 1);
						if (!func_311(Global_1347702[21 /*49*/].f_15, 1))
						{
							func_400(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
						func_940();
						break;
					case 26:
						func_941();
						break;
					case 17:
						func_942(Global_35, GET_HASH_KEY("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
						if (func_943())
						{
							func_944(GET_HASH_KEY("WEAPON_REPEATER_EVANS"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_945(GET_HASH_KEY("TP_RMAY_LETTER_1"), -1))
						{
							iVar15 = func_398();
							func_399(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_946(GET_HASH_KEY("TP_RMAY_LETTER_1"), iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_943())
						{
							func_944(GET_HASH_KEY("WEAPON_REVOLVER_LEMAT"));
						}
						break;
					case 34:
						if (func_943())
						{
							func_944(GET_HASH_KEY("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_947();
						break;
					case 37:
						func_948();
						if (func_751())
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
						func_949();
						break;
					case 43:
						func_950();
						break;
					case 44:
						if (!func_311(Global_1347702[82 /*49*/].f_15, 1))
						{
							func_400(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
						if (!func_311(Global_1347702[83 /*49*/].f_15, 1))
						{
							func_400(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_951();
						break;
					case 59:
						func_952();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_953();
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
						func_954();
						if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_SURV_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_SURV_ROOT"), true);
							func_282(451, 0);
						}
						if (!func_955(GET_HASH_KEY("TAXIDERMY_ORDER_05")))
						{
							if (func_955(GET_HASH_KEY("TAXIDERMY_ORDER_04")))
							{
								iVar16 = func_398();
								func_399(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_946(GET_HASH_KEY("TP_TAXIDERMY_REWARD_04_ES"), iVar16, 1);
							}
						}
						if (func_956(4))
						{
							if (!func_96(GET_HASH_KEY("DOCUMENT_NOTE_RARE_FISH"), 1, 0))
							{
								iVar17 = func_398();
								func_399(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_946(GET_HASH_KEY("TP_RF_INVITATION_01"), iVar17, 1);
							}
						}
						func_97(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_97(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_957(89200);
						func_957(2300);
						func_957(2300);
						break;
					case 68:
						func_958();
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
						func_959();
						func_957(-139100);
						break;
					case 69:
						if (func_311(Global_1347702[9 /*49*/].f_15, 1))
						{
							func_957(-6000);
						}
						break;
					case 70:
						func_957(23400);
						func_957(1900);
						func_957(-15000);
						break;
					case 71:
						func_957(-5500);
						break;
				}
				break;
			case 8:
				switch (func_424(iParam0))
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
						func_960();
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
						func_961();
						break;
					case 66:
						func_962();
						func_963();
						break;
					case 67:
						if (!func_964(6))
						{
							func_965(6);
						}
						if (!func_964(3))
						{
							func_965(3);
						}
						if (func_943())
						{
							func_944(GET_HASH_KEY("WEAPON_PISTOL_M1899"));
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
						if (func_311(Global_1835011[69 /*74*/].f_1, 1))
						{
							func_966(0);
							func_957(40500);
						}
						else
						{
							func_966(0);
							func_957(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_424(iParam0))
				{
					case 0:
						switch (func_439(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297 /* GXTEntry: "Mrs. Londonderry" */);
								break;
						}
						break;
				}
				break;
		}
		func_967(iParam0);
		func_968();
		switch (iVar0)
		{
			case 1:
				switch (func_424(iParam0))
				{
					case 4:
						func_969(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_969(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						func_969(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_969(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_969(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_969(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_969(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_970(iParam0);
						func_969(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_969(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_969(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_96(GET_HASH_KEY("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_97(GET_HASH_KEY("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_969(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_969(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_969(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (func_970(iParam0) == 0)
						{
							func_969(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							func_969(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_426(Global_1347702[func_424(iParam0) /*49*/].f_12, 536870912))
				{
					func_971(11, 1);
				}
				switch (func_424(iParam0))
				{
					case 109:
						func_969(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						func_971(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_969(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_969(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_969(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_969(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_972(0, 10, 11, GET_HASH_KEY("CABR01")))
				{
					func_969(iParam0, func_970(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_972(0, 7, 11, GET_HASH_KEY("CACR02")))
				{
					func_969(iParam0, func_973(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_972(0, 8, 11, GET_HASH_KEY("CACR03")))
				{
					func_969(iParam0, func_973(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_972(0, 11, 11, GET_HASH_KEY("CACR01")))
				{
					func_969(iParam0, func_973(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_972(0, 12, 11, GET_HASH_KEY("CACR04")))
				{
					func_969(iParam0, func_973(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_542(iParam0) == 0)
			{
				if (func_544(iParam0) == 0)
				{
				}
				else if (STATS::STATSTRACKER_IS_INITIALIZED(func_544(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_974(func_438(iParam0), func_544(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_424(iParam0) == 58)
						{
							Global_1879514.f_1 = iParam0;
						}
						func_976(func_975(Global_1879514.f_1));
						if (iVar0 == 8 && func_424(iParam0) == 58)
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
						if (func_425(func_424(iParam0)) && func_426(Global_1347702[func_424(iParam0) /*49*/].f_12, 1))
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
			func_717(bParam2, iVar20);
		}
	}
	func_560(1);
	if ((bVar13 || func_711()) && (func_438(iParam0) == 1 || func_438(iParam0) == 8))
	{
		Global_1879534.f_6 = 1;
		Global_1879534.f_7 = 1;
	}
}

void func_401(int iParam0)
{
	if (!func_395(iParam0))
	{
		return;
	}
	else if (!func_128(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_40.f_9052, iParam0))
	{
		func_138(iParam0);
		MISC::SET_BIT(&(Global_40.f_9052), iParam0);
	}
	if (func_541(Global_1392626[iParam0 /*32*/].f_3) == 3)
	{
		func_431(Global_1392626[iParam0 /*32*/].f_3, 0, 2);
	}
}

bool func_402(int iParam0)
{
	iParam0 = func_648(iParam0);
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

bool func_403(int iParam0)
{
	int iVar0;

	iParam0 = func_648(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_402(iParam0))
	{
		return false;
	}
	iVar0 = func_509(iParam0);
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

void func_404(int iParam0)
{
	int iVar0;

	iParam0 = func_648(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_402(iParam0))
	{
		return;
	}
	iVar0 = func_509(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_405(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_406()
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

int func_407(int iParam0)
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

void func_408(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

var func_409(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_410(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return MISC::VAR_STRING(2, func_977(sParam1));
}

void func_411(int iParam0)
{
	Global_1572864.f_11 = iParam0;
}

void func_412(bool bParam0)
{
	Global_1572864.f_14 = bParam0;
	if (bParam0)
	{
		func_414(1);
	}
}

void func_413(bool bParam0)
{
	Global_1572864.f_13 = bParam0;
	if (bParam0)
	{
		func_414(0);
	}
}

void func_414(int iParam0)
{
	Global_1572864.f_15 = iParam0;
}

void func_415(float fParam0)
{
	Global_1572864.f_22 = fParam0;
}

void func_416(bool bParam0)
{
	if (func_978())
	{
		Global_1357509 = 1;
	}
	if (func_979(GET_HASH_KEY("CAMERA_ITEM")))
	{
	}
	if (bParam0 && Global_1935630.f_44 == GET_HASH_KEY("WEAPON_KIT_CAMERA"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_UNARMED"), true, 0, false, false);
		Global_1935630.f_44 = GET_HASH_KEY("WEAPON_UNARMED");
	}
}

bool func_417(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_418()
{
	return Global_1572864.f_12;
}

void func_419(bool bParam0)
{
	int iVar0;
	struct<16> Var1;

	if (func_980(Global_1935630.f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_981();
	Var1.f_3.f_3 = iVar0;
	if ((!func_982(Global_1347343.f_2) && !func_417(Global_1347343.f_11, 64)) || func_550(32768))
	{
		Var1.f_7 = func_983();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_417(Global_1347343.f_11, 1024) && !func_550(32768))
	{
		Var1.f_11 = func_984();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_417(Global_1347343.f_11, 8))
	{
		Var1.f_15 = func_985();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343.f_1 != 2)
	{
		Global_1935630.f_3 = func_986(&Var1, "REPLAY_T", &(Global_1347343.f_3), 0, 1);
	}
	else
	{
		Global_1935630.f_3 = func_987(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !ENTITY::IS_ENTITY_ATTACHED(Global_35))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
	}
	func_121(&(Global_1347343.f_11), 1073741824 /* Float: 2f */);
	if (bParam0)
	{
		func_121(&(Global_1347343.f_11), 1048576);
	}
	CAM::_0x16E9ABDD34DDD931();
}

void func_420(int iParam0)
{
	int iVar0;

	if (!func_128(iParam0))
	{
		return;
	}
	if (iParam0 != func_127(0))
	{
		return;
	}
	if (func_544(iParam0) == 0)
	{
	}
	iVar0 = func_438(iParam0);
	if (func_542(iParam0) == 3)
	{
		if (func_544(iParam0) == 0)
		{
		}
		else if (STATS::STATSTRACKER_IS_INITIALIZED(func_544(iParam0)))
		{
			if (func_438(iParam0) != 1 && func_438(iParam0) != 8)
			{
				func_974(func_438(iParam0), func_544(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_915(iParam0);
	func_547(1);
	func_548(0);
	func_421(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_926(1);
			func_927(15, 0, 1);
			break;
		case 4:
			func_927(10, 0, 1);
			break;
		case 8:
			func_927(10, 0, 1);
			break;
		case 9:
			func_927(10, 0, 1);
			break;
		case 2:
			func_927(10, 0, 1);
			break;
		case 6:
			func_927(10, 0, 1);
			break;
		case 5:
			func_927(10, 0, 1);
			break;
	}
	func_560(1);
}

void func_421(int iParam0, int iParam1)
{
	if (!func_128(iParam0))
	{
		return;
	}
	func_988(iParam0, iParam1);
}

var func_422(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_423()
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

int func_424(int iParam0)
{
	if (!func_128(iParam0))
	{
		return -1;
	}
	return func_990(func_989(iParam0));
}

bool func_425(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_426(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_427(int iParam0, vector3 vParam1)
{
	int iVar0;

	if (!INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		return false;
	}
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam1))
	{
		iVar0 = INTERIOR::GET_INTERIOR_FROM_COLLISION(vParam1);
		if (iVar0 == iParam0)
		{
			return true;
		}
	}
	return false;
}

void func_428()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (func_624(Local_42[iVar0 /*8*/], Global_35, 5.5f, 0))
		{
			if (!func_991(Local_42[iVar0 /*8*/]))
			{
				func_90(Local_42[iVar0 /*8*/], 1);
			}
		}
		iVar0++;
	}
}

bool func_429(char* sParam0)
{
	if (func_992(sParam0))
	{
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iLocal_159, sParam0, true);
		return true;
	}
	return false;
}

bool func_430(int iParam0, int iParam1)
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

void func_431(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_128(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_204(iParam0) && !func_205(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_544(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_204(iParam0))
	{
		iParam2 = -1;
	}
	if (func_542(iParam0) == 3 || (func_542(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_544(iParam0))))
	{
		func_974(func_438(iParam0), func_544(iParam0), iParam2);
		if ((!func_128(Global_1572864.f_8) && !func_126(0, 1, 0)) && !func_195(Global_1935630, 32768))
		{
			iVar0 = func_556(iParam0);
			if (iVar0 != -1)
			{
				func_113(0);
			}
			else if (func_438(iParam0) == 8)
			{
				iVar0 = func_557();
				if (iVar0 != -1)
				{
					func_113(0);
				}
			}
		}
	}
	func_421(iParam0, 0);
	if (func_127(0) == iParam0)
	{
		func_547(1);
		func_548(0);
		func_560(1);
	}
	func_561(iParam0, 1);
	func_915(iParam0);
}

void func_432(int iParam0)
{
	if (func_994(func_993(iParam0), 0))
	{
		MISC::SET_BIT(&iLocal_298, iParam0);
	}
}

void func_433(char[4] cParam0, int iParam1)
{
	int iVar0;

	func_493(&Local_204, iLocal_143);
	if (func_257(iLocal_14, 1) && !func_257(iLocal_14, 512))
	{
		AUDIO::_0x9428447DED71FC7E("LSHNT_Scenes");
	}
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	func_995();
	func_996();
	func_891(&(uLocal_153[0]));
	func_891(&iLocal_152);
	func_891(&iLocal_155);
	func_891(&iLocal_156);
	func_997(7);
	func_891(&(Local_136.f_3));
	if (func_380(60))
	{
		func_379(60, 10, 0, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_159))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_159);
	}
	func_235(&Local_186, 1, 1, 1, 0);
	Local_204.f_2 = 0;
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "LS_HUNTER");
	func_998(10, 0);
	if (func_81(Global_35, 0))
	{
		if (func_81(PED::_GET_LAST_MOUNT(Global_35), 0))
		{
			if (PED::GET_PED_CONFIG_FLAG(PED::_GET_LAST_MOUNT(Global_35), 136, true))
			{
				PED::SET_PED_CONFIG_FLAG(PED::_GET_LAST_MOUNT(Global_35), 136, false);
			}
		}
	}
	if (func_83(8388608))
	{
		if (PED::DOES_GROUP_EXIST(iLocal_267))
		{
			PED::REMOVE_GROUP(iLocal_267);
		}
	}
	func_696();
	if (iParam1 == 0)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_268))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_268, false);
		}
		STREAMING::REMOVE_PTFX_ASSET();
		AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
		GRAPHICS::_0xAE7BF7CA9E4BA48D(uLocal_142);
		func_999();
		if (func_81(iLocal_144[0], 0))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_144[0], 136, false);
		}
		if (INTERIOR::IS_VALID_INTERIOR(iLocal_270))
		{
			if (INTERIOR::IS_INTERIOR_READY(iLocal_270))
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_270);
			}
		}
		func_495(iLocal_144[0], 0);
		func_141(&(iLocal_144[0]), 0, 1, 1);
		if (func_81(iLocal_144[1], 0))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_144[1], true))
			{
				func_141(&(iLocal_144[1]), 0, 0, 1);
			}
		}
		if (func_81(Global_35, 0))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
		}
		if (func_81(uLocal_147[0], 0))
		{
			TASK::TASK_WANDER_IN_VOLUME(uLocal_147[0], uLocal_276[5], 0f, 0f, 0);
		}
		func_141(&(uLocal_147[0]), 1, 1, 1);
		if (func_81(iLocal_143, 0))
		{
			func_248(0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_143, PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iLocal_143));
		}
		func_141(&iLocal_143, 1, 0, 1);
		PED::_0x411189E51B8020BA(Global_35, "Cautious");
		func_114(&Global_1935630, 262144);
	}
	func_1000();
	func_1001(&(Local_84[0 /*8*/]), 1, 1);
	func_1001(&(Local_84[1 /*8*/]), 1, 1);
	func_1001(&(Local_84[2 /*8*/]), 1, 1);
	if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_158))
	{
		ENTITY::_UNPIN_MAP_ENTITY(iLocal_158);
	}
	if (STREAMING::IS_IPL_ACTIVE_HASH(GET_HASH_KEY("N_06P_LOANSHARK_HUNTER2")))
	{
		STREAMING::REMOVE_IPL_HASH(GET_HASH_KEY("N_06P_LOANSHARK_HUNTER2"));
	}
	func_1002("LSHUNT_Hunter_Camp");
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_150))
	{
		ENTITY::DELETE_ENTITY(&iLocal_150);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_67[iVar0 /*4*/]))
		{
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(Local_67[iVar0 /*4*/]))
			{
				TASK::REMOVE_WAYPOINT_RECORDING(Local_67[iVar0 /*4*/]);
			}
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_27);
	if (PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
	}
	if (func_4(cParam0->f_16, 1))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
	}
}

void func_434(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		MISC::_0xE98D55C5983F2509(*iParam0);
		PED::SET_PED_CONFIG_FLAG(*iParam0, 297, false);
	}
}

void func_435(var uParam0)
{
	*uParam0 = 0;
}

void func_436(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	func_1003(vVar0, 0);
}

void func_437(vector3 vParam0, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_1004(vVar0, vVar3, 0f) };
	vVar9 = { func_1005(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, 0, 1);
	}
	else
	{
		PATHFIND::_0x6C3F12ECEB6D2E2A(vVar6, vVar9, iParam4, 1);
	}
}

int func_438(int iParam0)
{
	if (!func_128(iParam0))
	{
		return 0;
	}
	return func_1006(func_989(iParam0));
}

int func_439(int iParam0)
{
	if (!func_128(iParam0))
	{
		return -1;
	}
	return func_1007(func_989(iParam0));
}

void func_440(int iParam0)
{
	int iVar0;

	if (iParam0 < 0)
	{
		return;
	}
	if (!func_187(Global_1393237.f_11[iParam0 /*30*/].f_3))
	{
		func_1003(Global_1393237.f_11[iParam0 /*30*/].f_3, 0);
		PED::_0x9851DE7AEC10B4E1(Global_1393237.f_11[iParam0 /*30*/].f_3, 20f, 1, 0);
	}
	Global_1393237.f_11[iParam0 /*30*/] = -15;
	Global_1393237.f_11[iParam0 /*30*/].f_2 = -1;
	Global_1393237.f_11[iParam0 /*30*/].f_3 = { 0f, 0f, 0f };
	Global_1393237.f_11[iParam0 /*30*/].f_6 = { 0f, 0f, 0f };
	Global_1393237.f_11[iParam0 /*30*/].f_9 = 0f;
	if (func_1008(iParam0, 8388608))
	{
		Global_1393237.f_11[iParam0 /*30*/].f_10 = 8388608;
	}
	else
	{
		Global_1393237.f_11[iParam0 /*30*/].f_10 = 0;
		if (Global_1393237.f_11[iParam0 /*30*/].f_17 != func_1009())
		{
		}
		Global_1393237.f_11[iParam0 /*30*/].f_17 = func_1009();
	}
	Global_1393237.f_11[iParam0 /*30*/].f_11 = -1;
	Global_1393237.f_11[iParam0 /*30*/].f_12 = 0;
	Global_1393237.f_11[iParam0 /*30*/].f_13 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_1393237.f_11[iParam0 /*30*/].f_14[iVar0] = 0;
		iVar0++;
	}
	func_1010(iParam0, 1);
	Global_1393237.f_11[iParam0 /*30*/].f_29 = 0;
	if (iParam0 > 2)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (MAP::DOES_BLIP_EXIST(Global_1393237.f_11[iParam0 /*30*/].f_18[0]))
		{
			MAP::REMOVE_BLIP(&(Global_1393237.f_11[iParam0 /*30*/].f_18[0]));
		}
		if (MAP::DOES_BLIP_EXIST(Global_1393237.f_11[iParam0 /*30*/].f_18[1]))
		{
			MAP::REMOVE_BLIP(&(Global_1393237.f_11[iParam0 /*30*/].f_18[1]));
		}
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	}
	if (VOLUME::_0xF6A8A652A6B186CD(Global_1393237.f_11[iParam0 /*30*/].f_21))
	{
		func_1003(Global_1393237.f_11[iParam0 /*30*/].f_3, 1);
	}
}

void func_441(var uParam0)
{
	Local_29[0 /*2*/] = "script_proc@loansharking@hunter@part_02";
	Local_29[0 /*2*/].f_1 = "tunnel_split";
}

void func_442(var uParam0)
{
}

void func_443()
{
	Local_67[0 /*4*/] = { func_1011("loan_hunt2_CR", -1764.036f, -177.0951f, 191.8556f) };
	Local_67[1 /*4*/] = { func_1011("loan_hunt2_RR", -1894.872f, -276.3419f, 178.5387f) };
	Local_67[2 /*4*/] = { func_1011("loan_hunt2_RC", -2100.484f, -164.2985f, 206.3495f) };
	Local_67[3 /*4*/] = { func_1011("loan_hunt2_ED", -2117.752f, 19.11315f, 263.7958f) };
}

void func_444()
{
	Local_35[0 /*2*/] = "LS_HNT2_RD1";
	Local_35[1 /*2*/] = "LS_HNT2_RD2";
	Local_35[2 /*2*/] = "LS_HNT2_RD3";
}

void func_445()
{
	sLocal_388[0] = "ROAR";
	sLocal_388[1] = "GROWL";
	sLocal_388[2] = "ROAR";
	sLocal_388[3] = "AGITATED";
	sLocal_388[4] = "COUGAR_ATTACK_WINTON";
}

void func_446()
{
	Local_42[0 /*8*/] = { func_1012(-2140.924f, 101.9912f, 242.9f, 60.3027f, iLocal_27, GET_HASH_KEY("CONSUMABLE_POTENT_MEDICINE")) };
	Local_42[1 /*8*/] = { func_1012(-2096.877f, 118.0033f, 238.9639f, 292.8538f, iLocal_27, GET_HASH_KEY("CONSUMABLE_CHEWING_TOBACCO")) };
	Local_42[2 /*8*/] = { func_1012(-2130.483f, 122.4231f, 237f, 29.7498f, iLocal_27, GET_HASH_KEY("CONSUMABLE_POTENT_TONIC")) };
}

void func_447()
{
	Local_84[0 /*8*/] = { func_1013(-1778.09f, -180.82f, 193.88f, 0f, 0f, -107.84f, GET_HASH_KEY("P_BOILER01X")) };
	Local_84[1 /*8*/] = { func_1013(-1778.54f, -181.17f, 193.87f, 4.05f, 1.66f, -94.89f, GET_HASH_KEY("P_COPPERPOT02BX")) };
	Local_84[2 /*8*/] = { func_1013(-1778.36f, -181.05f, 194.23f, 180f, 20f, 20f, GET_HASH_KEY("P_LADLE02X")) };
	Local_84[3 /*8*/] = { func_1013(-1778.24f, -180.56f, 193.93f, 0f, 0f, -179.74f, GET_HASH_KEY("P_MUGCOFFEE01X")) };
}

void func_448()
{
	vLocal_317[0 /*3*/] = { Local_42[0 /*8*/].f_1 };
	vLocal_317[1 /*3*/] = { Local_42[1 /*8*/].f_1 };
	vLocal_317[2 /*3*/] = { Local_42[2 /*8*/].f_1 };
}

void func_449()
{
	iLocal_23[1] = 131072;
	iLocal_23[0] = 262144;
}

void func_450()
{
	Local_136 = { func_1014(-1753.4f, -392.56f, 156.26f, 478, 26) };
}

int func_451(var uParam0, int iParam1)
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
	iVar1 = func_1015(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_452(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL((*uParam0)[iVar0]))
		{
			if (MISC::ARE_STRINGS_EQUAL((*uParam0)[iVar0], sParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_1016(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = sParam1;
	return 1;
}

int func_453(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_264(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_270(iParam0);
	if (iVar0 == GET_HASH_KEY("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == GET_HASH_KEY("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_265(iParam0, 1399091007))
	{
		func_786(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_454(int iParam0, int iParam1, bool bParam2, int iParam3)
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
	Var0 = { func_1017(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1019(&Var0, func_1018(0));
	}
	if (!func_1020(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_700(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_743(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_701(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_455(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_264(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_708(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1021(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_742(iParam0, Var0, Var0.f_4, bParam4) };
	return func_743(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_456(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (func_265(iParam0, 606799272))
		{
			func_1022(iParam0, iParam1);
		}
		if (func_265(iParam0, -1112814642) && func_265(iParam0, -1697809989))
		{
			func_322(iParam0, iParam1, 1, 0);
		}
	}
}

bool func_457(int iParam0, int iParam1, int iParam2, bool bParam3)
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

void func_458(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_459(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_460(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888.f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_461(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_462(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_463(int iParam0)
{
	int iVar0;

	if (!func_1023(iParam0))
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

int func_464(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_1024(bParam1, bParam2, bParam3);
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

void func_465(int iParam0, bool bParam1, int iParam2)
{
	func_1025(iParam2);
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
		iParam0->f_10 = 0;
	}
	iParam0->f_5 = iParam2;
	if (Global_1572887.f_12 == -1)
	{
		iParam0->f_13 = Global_1935630.f_44;
	}
	else
	{
		iParam0->f_13 = func_1026(0);
	}
	switch (iParam0->f_6)
	{
		case 0:
			if (*iParam0 & 16 != 0)
			{
				if (!*iParam0 & 33554432 != 0)
				{
					if (iParam0->f_13 == GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_149(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_1027(1))
						{
							func_149(iParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_1027(1) || *iParam0 & 8192 != 0))
				{
					func_148(iParam0, 33554432);
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
	if (!iParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
		{
			if (func_1028(iParam0))
			{
				iParam0->f_15 = func_194();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_194() - iParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(iParam0->f_14))
				{
					iParam0->f_14 = 0;
					iParam0->f_15 = 0;
				}
			}
		}
	}
	iParam0->f_6++;
	if (iParam0->f_6 >= 4)
	{
		iParam0->f_6 = 0;
		iParam0->f_7++;
		if (iParam0->f_7 > 4)
		{
			iParam0->f_7 = 0;
		}
	}
	func_1029(iParam0);
}

bool func_466(int iParam0, var uParam1)
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
			if (!func_1030(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_898(iParam0, iVar2) <= func_1031(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_467(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_1032(iParam2, 1, 1, 1, 0))
	{
		func_149(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_1033(iParam1, 1);
	func_180();
}

bool func_468(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_1034(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_1035(iParam1);
			if (func_1036(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - iParam1->f_2);
				iVar3 = func_1037(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_1033(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_1033(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_469(int iParam0, int iParam1, int iParam2)
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
	if (func_1038(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_1035(iParam2);
		if (func_1036(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (iParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - iParam2->f_2) > func_1037(iParam2)
				{
					func_1033(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_470(int iParam0, var uParam1)
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
	if (func_1030(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_1037(uParam1)
		{
			fVar3 = func_1035(uParam1);
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

bool func_471(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_194();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_472(var uParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_1039(iParam2);
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
			if (func_480(iParam2, iParam1))
			{
				func_1033(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_473(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (iParam2->f_12 < IntToFloat(func_1040(iParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_480(iParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_1033(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_474(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_1041(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					func_1033(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_FIRE"), vVar0, iParam2->f_27))
				{
					func_1033(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar4, 0, 0);
					if (func_1042(iParam1, vVar0, vVar4))
					{
						func_1033(iParam2, 1);
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
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					func_1033(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar7, 0, 0);
					if (func_1042(iParam1, vVar0, vVar7))
					{
						func_1033(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_475(int iParam0, var uParam1)
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
		if (!func_1030(iParam0, uParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_1043(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_1044(Global_1935630.f_34[iVar0]))
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
			if (func_1045(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_1046(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_1047(uParam1, iParam0, fVar1, iVar0))
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

bool func_476(int iParam0, var uParam1)
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

bool func_477(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_194();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_478(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_1048(iVar0, &iVar2))
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
	if (func_1049(iVar0, iParam0))
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

int func_479(var uParam0, int iParam1)
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

bool func_480(var uParam0, int iParam1)
{
	if (func_1050(uParam0))
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

bool func_481(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_1051(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_482()
{
}

bool func_483(var uParam0, int iParam1)
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
		if (func_1052(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_194();
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
						if (func_519(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_194();
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

bool func_484()
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
	if ((func_194() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_485(var uParam0, int iParam1)
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
	fVar0 = func_1031(uParam0);
	if (uParam0->f_12 > func_1053(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_1054(iParam1);
	iVar1 = func_1055(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, uParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_486(int iParam0, int iParam1, var uParam2)
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
	return func_1056(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_487(int iParam0, var uParam1)
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
		if (func_1057(iParam0, uParam1, 1))
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
					if (!func_1058(uParam1, iParam0))
					{
						if (func_519(iVar4, Global_36, 1) < 7f)
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

bool func_488(int iParam0, var uParam1)
{
	if (!func_1059(0))
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

bool func_489(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_194();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_490(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_491(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_194();
	}
	else if (func_194() - uParam1->f_4) > func_1060(uParam1)
	{
		return func_1061(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_492(var uParam0, int iParam1)
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

void func_493(int iParam0, int iParam1)
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
	func_1062(iParam0, &iParam1, 0);
	func_434(&iParam1);
	func_1063(iParam0, 0);
	if (MISC::IS_BIT_SET(iParam0->f_21, 3))
	{
		func_1064(iParam0, 0);
	}
	func_1065(iParam0);
	func_1066(iParam0, iParam1);
	func_1067(iParam0);
	func_1068(iParam0);
}

void func_494(char* sParam0, bool bParam1)
{
	func_1069(sParam0, bParam1, 0);
}

void func_495(int iParam0, bool bParam1)
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

void func_496(char[4] cParam0, int iParam1)
{
	cParam0->f_14 = iParam1;
}

bool func_497(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_498(int iParam0, bool bParam1)
{
	if (!func_497(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_1070(iParam0), func_1071(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_1070(iParam0), func_1071(iParam0), 2, "");
		func_1072(iParam0, 16);
	}
	else
	{
		if (func_497(iParam0, 8))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_1070(iParam0), func_1071(iParam0), 1, "");
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_1070(iParam0), func_1071(iParam0), 0, "");
		}
		func_1073(iParam0, 16);
	}
}

void func_499(int iParam0, bool bParam1)
{
	if (Global_1347702[iParam0 /*49*/].f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_497(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_1070(iParam0), func_1071(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_497(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_1070(iParam0), func_1071(iParam0), 1, "");
		}
		func_1072(iParam0, 8);
	}
	else
	{
		if (func_497(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_1070(iParam0), func_1071(iParam0), 0, "");
		}
		func_1073(iParam0, 8);
	}
}

float func_500(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_501(int iParam0)
{
	func_1075(iParam0, func_1074(iParam0), (Global_1392626[iParam0 /*32*/].f_4 / 2f));
}

void func_502(int iParam0, int iParam1)
{
	if (func_395(iParam0))
	{
		Global_40.f_9052.f_11[iParam0] = (Global_40.f_9052.f_11[iParam0] || iParam1);
	}
}

void func_503(int iParam0, bool bParam1)
{
	if (func_298() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_550(32768))
	{
		return;
	}
	if (!func_550(32768))
	{
		func_1076(1, bParam1);
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
	if (func_550(32768))
	{
		Global_2621440[iParam0 /*12066*/].f_9.f_14 = func_398();
	}
}

int func_504(int iParam0, bool bParam1, bool bParam2, bool bParam3)
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

int func_505(int iParam0, int iParam1)
{
	var uVar0;

	return func_1077(&uVar0, iParam0, iParam1);
}

bool func_506(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != GET_HASH_KEY("WEAPON_UNARMED"));
}

void func_507(bool bParam0, bool bParam1)
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
			if (func_506(iVar3) && WEAPON::IS_WEAPON_A_GUN(iVar3))
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
		func_1078(1);
	}
}

void func_508(int iParam0, vector3 vParam1, var uParam4)
{
	Global_2621440[iParam0 /*12066*/].f_9.f_7 = { vParam1 };
	Global_2621440[iParam0 /*12066*/].f_9.f_13 = uParam4;
	Global_2621440[iParam0 /*12066*/].f_9 = 5;
	Global_2621440[iParam0 /*12066*/].f_9.f_15 = func_1079(vParam1, 1);
}

int func_509(int iParam0)
{
	iParam0 = func_648(iParam0);
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

bool func_510(int iParam0, bool bParam1)
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

bool func_511(int iParam0, float fParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (func_1080(iParam0, 1, 1) > fParam1)
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0) || ENTITY::IS_ENTITY_OCCLUDED(iParam0))
				{
					return true;
				}
				if (PED::_0x5102307CE88798EB(iParam0))
				{
					if (!PED::IS_TRACKED_PED_VISIBLE(iParam0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_512()
{
	if (iLocal_16 >= 4 && iLocal_16 < 9)
	{
		if (!func_1081(&Global_35, -1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_513(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_514(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

void func_515(var uParam0, char* sParam1)
{
	int iVar0;

	if (func_514(uParam0, 8192))
	{
		return;
	}
	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		iVar0 = MISC::_0x94E8CA3DEE952789(sParam1, "@");
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_224), {func_1082("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 4);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_224), {func_1082("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_362(uParam0, 8192);
}

Vector3 func_516(var uParam0)
{
	return uParam0->f_5;
}

Vector3 func_517(var uParam0)
{
	var uVar0;
	vector3 vVar8;
	var uVar11;
	vector3 vVar14;

	MemCopy(&uVar0, {func_1083(uParam0)}, 8);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_229))
	{
		uParam0->f_229 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_224), 0, 0, false, true);
	}
	else if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_229, false))
	{
		if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_229, func_1084(Global_35), &vVar14, false, 0, 2))
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

void func_518(var uParam0, vector3 vParam1)
{
	if (func_187(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
}

float func_519(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_520(var uParam0)
{
	return uParam0->f_219;
}

void func_521()
{
	struct<4> Var0;

	Global_1946804.f_858 = (Global_1946804.f_858 - 1);
	if (Global_1946804.f_858 <= 0)
	{
		Var0 = 35;
		func_1085(Var0);
	}
}

void func_522(var uParam0)
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

void func_523(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228)) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_228))
	{
		ANIMSCENE::_0x8A8208AE92BF87A5(uParam0->f_228);
	}
}

float func_524(var uParam0)
{
	return uParam0->f_218;
}

struct<8> func_525(var uParam0)
{
	return uParam0->f_230;
}

void func_526(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (func_514(uParam0, 16))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_4) && !func_1086(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_1087());
		func_362(uParam0, 8);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_1088(uParam0, uParam0->f_4, 0, 1);
		PATHFIND::SET_ROADS_IN_VOLUME(uParam0->f_4, false, false, bParam2);
		func_362(uParam0, 16);
	}
}

void func_527(var uParam0)
{
	if ((!func_514(uParam0, 32768) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228)) && ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_228, false))
	{
		func_1089(uParam0);
		func_1090(uParam0, 0);
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_228, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_228);
		}
		func_362(uParam0, 32768);
	}
}

bool func_528()
{
	return Global_1946804.f_1497 != Global_1946804.f_2163.f_1;
}

void func_529(int iParam0)
{
	struct<4> Var0;

	if (func_1091(iParam0, 4096))
	{
		Global_1946804.f_858++;
	}
	if (Global_1946804.f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1085(Var0);
}

char* func_530(int iParam0)
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

bool func_531(int iParam0, var uParam1)
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

bool func_532(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_143))
	{
		if (func_251(1, &iLocal_143, iLocal_28, -1781.13f, -180.95f, 194.5f, -108.14f, 1, 1, 0, 1, 1, 0, 1))
		{
		}
	}
	else if (!bLocal_168)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_143))
		{
			func_62(Global_1392626[*uParam0 /*32*/].f_24, 15f, 1, 0, 0, 0, 0);
			func_1092(uParam0);
			bLocal_168 = true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_533()
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iLocal_144[0]))
	{
		vVar0 = { -1770.84f, -180.78f, 194.59f };
		if (func_251(1, &(iLocal_144[0]), GET_HASH_KEY("A_C_HORSE_MORGAN_BAY"), vVar0, 133.66f, 1, 1, 0, 1, 1, 0, 1))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_144[0], vVar0, 133.66f, false, true);
			TASK::TASK_STAND_STILL(iLocal_144[0], -1);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_144[0], 48, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_144[0], GET_HASH_KEY("REL_PLAYER_ALLY"));
			AITRANSPORT::_SET_TRANSPORT_CONFIG_FLAG(iLocal_144[0], 0, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_144[0], 324, true);
			func_1093(iLocal_144[0], 2, 0);
			func_1093(iLocal_144[0], 0, 80);
			func_495(iLocal_144[0], 1);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_534()
{
	if (iLocal_266 == -1)
	{
		if (VOLUME::DOES_VOLUME_EXIST(iLocal_287))
		{
			iLocal_266 = func_1094(iLocal_287, 1);
		}
		return false;
	}
	if (!func_83(2048))
	{
		if (!func_83(16777216))
		{
			STREAMING::REQUEST_IPL_HASH(GET_HASH_KEY("N_06P_LOANSHARK_HUNTER2"));
			func_1095("LSHUNT_Hunter_Camp");
			func_80(16777216);
		}
		else
		{
			if (STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_268))
				{
					GRAPHICS::USE_PARTICLE_FX_ASSET("scr_distance_smoke");
					iLocal_268 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_campfire_distance_smoke_script", vLocal_308, 0f, 0f, 0f, 1f, false, false, false, false);
					return false;
				}
				else
				{
					GRAPHICS::SET_PARTICLE_FX_LOOPED_FAR_CLIP_DIST(iLocal_268, 300f);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(iLocal_268, fLocal_269);
				}
			}
			else
			{
				return false;
			}
			uLocal_142 = GRAPHICS::_0x27219300C36A8D40(vLocal_308, 4.12f, 0);
			func_80(2048);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_535(var uParam0)
{
	if (*uParam0 != func_28())
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_84[3 /*8*/]))
		{
			if (iLocal_158 == 0)
			{
				iLocal_158 = ENTITY::PIN_CLOSEST_MAP_ENTITY(Local_84[3 /*8*/].f_7, Local_84[3 /*8*/].f_1, 11);
			}
			else if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_158))
			{
				Local_84[3 /*8*/] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_158));
			}
			return false;
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_84[0 /*8*/]))
	{
		Local_84[0 /*8*/] = OBJECT::CREATE_OBJECT(Local_84[0 /*8*/].f_7, Local_84[0 /*8*/].f_1, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_84[0 /*8*/], Local_84[0 /*8*/].f_4, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_84[0 /*8*/], true);
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_84[1 /*8*/]))
	{
		Local_84[1 /*8*/] = OBJECT::CREATE_OBJECT(Local_84[1 /*8*/].f_7, Local_84[1 /*8*/].f_1, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_84[1 /*8*/], Local_84[1 /*8*/].f_4, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_84[1 /*8*/], true);
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_84[2 /*8*/]))
	{
		Local_84[2 /*8*/] = OBJECT::CREATE_OBJECT(Local_84[2 /*8*/].f_7, Local_84[2 /*8*/].f_1, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_84[2 /*8*/], Local_84[2 /*8*/].f_4, 1, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_84[2 /*8*/], true);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_84[3 /*8*/]))
	{
		if (!ENTITY::_IS_ENTITY_FROZEN(Local_84[3 /*8*/]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_84[3 /*8*/], true);
		}
	}
	return true;
}

bool func_536()
{
	if (AUDIO::PREPARE_SOUNDSET(sLocal_394, false))
	{
		return true;
	}
	return false;
}

void func_537()
{
	func_1096("ARTHUR", Global_35);
	func_1096("U_M_M_GriSurvivalist_01", iLocal_143);
}

void func_538(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*iParam0))
	{
		*iParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_1087());
	}
}

void func_539(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*iParam0))
	{
		*iParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_1087());
	}
}

bool func_540(var uParam0, int iParam1, char* sParam2)
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

int func_541(int iParam0)
{
	if (!func_128(iParam0))
	{
		return -1;
	}
	return func_542(iParam0);
}

int func_542(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_1097(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

bool func_543(int iParam0)
{
	return func_541(iParam0) == 0;
}

int func_544(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_498[iParam0 /*2*/].f_1;
}

void func_545(int iParam0)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;
	struct<8> Var5;
	struct<8> Var13;
	int iVar21;

	if (!func_1023(iParam0))
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

void func_546(int iParam0)
{
	if (!func_128(iParam0))
	{
		return;
	}
	func_1099(iParam0, func_1098(iParam0) + 1);
}

void func_547(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_114(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_208(&Global_1935630, 4194304);
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

int func_548(bool bParam0)
{
	if (!bParam0 && func_1100(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(GET_HASH_KEY("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

int func_549(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1101(iParam0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1898164.f_162 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1898164.f_162;
	func_1102(iParam0, iVar0);
	Global_1898164.f_162++;
	if (iParam1 < 0 || iParam1 >= Global_1898164.f_162)
	{
		return iVar0;
	}
	func_1103(iVar0, iParam1);
	return iParam1;
}

bool func_550(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

void func_551(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_552(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_553(int iParam0)
{
	Global_1572864.f_3 = (Global_1572864.f_3 - (Global_1572864.f_3 && iParam0));
}

void func_554(bool bParam0)
{
	func_1104(bParam0);
	func_1105(bParam0);
	func_1106(bParam0);
	func_1107(bParam0);
	func_1108(bParam0);
	func_1109(bParam0);
	func_1110(bParam0);
	func_1111(bParam0);
}

void func_555(bool bParam0)
{
	if (func_298() != -1)
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
		func_282(89, 1);
		ATTRIBUTE::_START_PERIODIC_ICON(5);
	}
	else
	{
		func_282(90, 1);
		ATTRIBUTE::_STOP_PERIODIC_ICON(5);
	}
	func_1112(1, bParam0, 1);
	func_332();
	Global_40.f_11095.f_43 = bParam0;
}

int func_556(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_438(iParam0))
	{
		case 1:
			iVar0 = func_424(iParam0);
			return func_1113(iVar0);
		case 8:
			iVar1 = func_424(iParam0);
			if (func_426(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				return func_1114(iVar1);
			}
			break;
	}
	return -1;
}

int func_557()
{
	if (!func_311(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_311(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_311(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_311(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_311(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_311(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_311(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_558(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (func_298() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077.f_1 = 2;
	Global_1898077.f_2 = 0;
	Global_1898077.f_3 = iParam0;
	Global_1898077.f_7 = iVar0;
	func_1115(Global_1898077.f_7, Global_1898077.f_3);
}

void func_559(int iParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 2)
	{
		return;
	}
	iVar0 = 0;
	if (func_298() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077.f_1 = 5;
	Global_1898077.f_2 = 0;
	Global_1898077.f_4 = iParam0;
	Global_1898077.f_7 = iVar0;
	func_1116(Global_1898077.f_7, Global_1898077.f_4);
}

void func_560(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_561(int iParam0, bool bParam1)
{
	if (func_298() != -1)
	{
		return;
	}
	if (func_127(0) != iParam0)
	{
		return;
	}
	if (func_1117(iParam0))
	{
		if (bParam1)
		{
			func_1118(-525676072);
		}
		else
		{
			func_1119(-525676072);
		}
	}
}

void func_562(float fParam0)
{
	func_1120(10, fParam0);
}

bool func_563()
{
	if (func_298() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

void func_564()
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1935436.f_12 = 0f;
}

void func_565(bool bParam0)
{
	int iVar0;

	iVar0 = func_504(Global_35, 0, bParam0, 0);
	if (func_506(iVar0))
	{
		if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(iVar0))
		{
			WEAPON::_DROP_CURRENT_PED_WEAPON(Global_35, true, bParam0, true, false);
		}
		else if (func_1121(iVar0))
		{
			if (func_506(func_504(Global_35, 0, 7, 0)) || func_506(func_504(Global_35, 0, 9, 0)))
			{
				if (func_506(func_504(Global_35, 0, 8, 0)))
				{
					func_1122(iVar0);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 8, false, false);
				}
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 7, false, false);
			}
		}
		else if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0) && iVar0 != GET_HASH_KEY("WEAPON_FISHINGROD"))
		{
			if (func_506(func_504(Global_35, 0, 7, 0)) || func_506(func_504(Global_35, 0, 9, 0)))
			{
				if (func_506(func_504(Global_35, 0, 10, 0)))
				{
					func_1122(iVar0);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 10, false, false);
				}
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (bParam0 == 0)
			{
				if (!func_506(func_504(Global_35, 0, 2, 0)))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 3, false, false);
				}
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 3, false, false);
			}
		}
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_UNARMED"), true, bParam0, false, false);
	}
}

void func_566(var uParam0, int iParam1)
{
	uParam0->f_220 = iParam1;
	func_569(uParam0, 1);
}

void func_567(var uParam0, bool bParam1)
{
	if (bParam1 || func_838(uParam0, 1))
	{
		if (!func_83(4194304))
		{
			func_80(4194304);
		}
	}
	if (bParam1 || func_1123(uParam0, iLocal_143, "WintonHolmes", 0, 1, 1))
	{
		if (!func_83(2097152))
		{
			if (bLocal_423)
			{
			}
			func_1124();
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_143, true, true);
			func_80(2097152);
		}
	}
	if (bParam1 || func_1123(uParam0, Global_35, 0, 0, 1, 1))
	{
		if (!func_83(1048576))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_84[1 /*8*/]))
			{
				ENTITY::SET_ENTITY_COLLISION(Local_84[1 /*8*/], false, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_84[2 /*8*/]))
			{
				ENTITY::SET_ENTITY_COLLISION(Local_84[2 /*8*/], false, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_84[3 /*8*/]))
			{
				ENTITY::SET_ENTITY_COLLISION(Local_84[3 /*8*/], false, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_84[0 /*8*/]))
			{
				ENTITY::SET_ENTITY_COLLISION(Local_84[0 /*8*/], false, false);
			}
			func_80(1048576);
		}
	}
}

void func_568(var uParam0, int iParam1)
{
	uParam0->f_221 = iParam1;
	func_569(uParam0, 2);
}

void func_569(var uParam0, int iParam1)
{
	uParam0->f_223 = (uParam0->f_223 || iParam1);
}

struct<8> func_570()
{
	char cVar0[64];

	StringCopy(&cVar0, "NormalStart", 64);
	return cVar0;
}

void func_571(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_230), sParam1, 64);
}

void func_572(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
		sParam2 = func_1125(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1126(uParam0, iParam1);
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
		iVar1 = func_1127(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != iParam1)
		{
			func_1128(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1129(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0 /*12*/] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam2, 64);
		uParam0->f_13[iVar0 /*12*/].f_9 = iParam3;
		uParam0->f_13[iVar0 /*12*/].f_10 = iParam4;
		if (bParam5)
		{
			func_1130(&(uParam0->f_13[iVar0 /*12*/]), 2);
		}
		else
		{
			func_1131(&(uParam0->f_13[iVar0 /*12*/]), 2);
		}
	}
}

bool func_573(int iParam0, vector3 vParam1, var uParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, float fParam12, float fParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	func_634(iParam0, vParam1, 0, fParam5, bParam6, fParam7, bParam8, fParam12, fParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	bVar4 = func_519(iParam0, vParam1, 1);
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
		func_73(uParam4);
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
		if (func_834(uParam4) >= fParam9)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_1132(iParam0, 501393341))
			{
				if (PED::IS_PED_ON_MOUNT(iParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, 0, 0, 0, 0, 0);
					return true;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !func_1132(iParam0, -828834893))
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

int func_574(var uParam0)
{
	return uParam0->f_1;
}

void func_575(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	func_1133(uParam0, 4);
	if (func_1134(uParam0, &uParam1, iParam5))
	{
		func_583(uParam0, 1);
	}
}

void func_576(var uParam0)
{
	if (!func_1135(uParam0))
	{
		return;
	}
	if (!func_359(uParam0, 4194304))
	{
		func_1136(uParam0);
		func_592(uParam0, 4194304);
	}
	if (func_1137(uParam0))
	{
		func_1138(uParam0);
		func_1139(uParam0);
		func_583(uParam0, 2);
	}
}

void func_577(var uParam0)
{
	uParam0->f_1451 = -1;
	func_582(uParam0, 0);
	func_583(uParam0, 3);
	func_1140(uParam0, 0);
	func_73(&(uParam0->f_1635));
	func_1141(uParam0);
	func_73(&(uParam0->f_1638));
}

void func_578(var uParam0)
{
	bool bVar0;

	if (!func_359(uParam0, 134217728))
	{
		bVar0 = true;
		SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("BANDANA"));
		if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(GET_HASH_KEY("BANDANA")))
		{
			bVar0 = false;
		}
		STREAMING::REQUEST_ANIM_DICT(func_1142(1));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_1142(1)))
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_592(uParam0, 134217728);
		}
	}
}

void func_579(var uParam0, int iParam1, bool bParam2)
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
	if (!func_359(uParam0, 65536))
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
	if (!func_359(uParam0, 4096) && uParam0->f_1662)
	{
		return;
	}
	if (!func_359(uParam0, 16777216))
	{
		return;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	func_590(uParam0);
	func_1143(uParam0, uParam0->f_1663, uParam0->f_1665);
	func_1144(uParam0);
	if (uParam0->f_1666 && !uParam0->f_1665)
	{
		if (((((uParam0->f_1661 >= 0 && uParam0->f_782[uParam0->f_1661 /*41*/].f_17 > 0f) && uParam0->f_1454 >= 0) && !func_183(Global_35, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, (uParam0->f_782[uParam0->f_1661 /*41*/].f_17 + 5f), 1, 1)) && !func_359(uParam0, 33554432)) && !func_359(uParam0, 4))
		{
			func_1145(uParam0, uParam0->f_1663);
			return;
		}
	}
	if (!func_359(uParam0, 4))
	{
		if (func_1146(uParam0))
		{
			if (!bParam2)
			{
				uParam0->f_1450 = uParam0->f_1454;
				func_592(uParam0, 8);
				return;
			}
		}
		else
		{
			func_1145(uParam0, uParam0->f_1663);
		}
		if (uParam0->f_782[uParam0->f_1456 /*41*/].f_29)
		{
			fVar0 = func_1147(uParam0, uParam0->f_1456);
			if (fVar0 < 0f || (uParam0->f_1663 && fVar0 < 1f))
			{
				uParam0->f_1454 = uParam0->f_1456;
				if (!bParam2)
				{
					uParam0->f_1450 = uParam0->f_1456;
					func_592(uParam0, 8);
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
					func_592(uParam0, 16);
					if (((!func_359(uParam0, 32) && iParam1 != 2) && !bParam2) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, true) < (uParam0->f_782[uParam0->f_1454 /*41*/].f_11 + 5f))
					{
						func_1148(uParam0);
						func_592(uParam0, 32);
					}
				}
			}
			else if (uParam0->f_1454 == uParam0->f_1456)
			{
				func_365(uParam0, 16);
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
		if (func_367(&(uParam0->f_782[uParam0->f_1454 /*41*/]), 2) && uParam0->f_1663)
		{
			return;
		}
	}
	if (func_359(uParam0, 16))
	{
		fVar4 = func_519(Global_35, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, 1);
		if (uParam0->f_1663 && fVar4 <= (uParam0->f_782[uParam0->f_1454 /*41*/].f_17 + 5f))
		{
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_JUMP"), false);
		}
		fVar5 = func_1149(Global_36, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, 1);
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
				func_589(uParam0, uParam0->f_782[uParam0->f_1454 /*41*/].f_27, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, fVar6);
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
	if (((uParam0->f_1663 && iVar3) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_1664) > 1.25f) || func_359(uParam0, 4))
	{
		if (((VOLUME::IS_POINT_IN_VOLUME(uParam0->f_1641, uParam0->f_1645) && func_1147(uParam0, uParam0->f_1454) < 10000f) && func_359(uParam0, 16)) || func_359(uParam0, 4))
		{
			if (!func_359(uParam0, 4))
			{
				func_592(uParam0, 4);
			}
			iVar7 = 5152;
			iVar7 |= 32;
			iVar7 |= 4096;
			iVar7 |= 1;
			if (!func_587(uParam0, uParam0->f_1454))
			{
				iVar7 |= 2048;
			}
			if (func_1150(Global_35, &(uParam0->f_1452), iVar7, 0, 0, 1084227584 /* Float: 5f */, 100, uParam0->f_782[uParam0->f_1454 /*41*/].f_7, uParam0->f_782[uParam0->f_1454 /*41*/].f_7.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				uParam0->f_1452 = 0;
				func_365(uParam0, 4);
			}
		}
	}
	else if (func_359(uParam0, 4))
	{
		func_365(uParam0, 4);
	}
}

int func_580(var uParam0)
{
	return *uParam0;
}

void func_581(var uParam0)
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (func_359(uParam0, 512))
	{
		return;
	}
	if (func_70(&(uParam0->f_1638)) < 2f)
	{
		return;
	}
	if (func_1151(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		func_592(uParam0, 524288);
	}
}

void func_582(var uParam0, int iParam1)
{
	uParam0->f_1449 = iParam1;
}

void func_583(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

int func_584(var uParam0, int iParam1)
{
	int iVar0;

	if (func_366(uParam0, 4))
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
			if (func_1152())
			{
				if (!func_359(uParam0, 524288))
				{
					HUD::_HIDE_HUD_COMPONENT(-1679307491);
				}
				HUD::_DISPLAY_HUD_COMPONENT(474191950);
			}
			break;
	}
	if (func_1152())
	{
		func_365(uParam0, 512);
		func_1153(uParam0, 128);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin", false, -1);
		if (func_1154(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 4))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, func_1155(uParam0->f_782[uParam0->f_1450 /*41*/].f_39), false, -1);
		}
		PED::SET_PED_CONFIG_FLAG(Global_35, 255, true);
	}
	func_1156();
	func_1157(uParam0, 1, 0);
	func_1158(uParam0);
	if (func_359(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	func_1153(uParam0, 4);
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_1641))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_1641);
	}
	if (func_366(uParam0, 8) && CAM::_0xDD0B7C5AE58F721D(func_1159()))
	{
		CAM::_0x798BE43C9393632B(func_1159());
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1111[iVar0 /*22*/].f_2)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1111[iVar0 /*22*/].f_2), func_1159())) && CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1111[iVar0 /*22*/].f_2)))
		{
			if (uParam0->f_1111[iVar0 /*22*/].f_21)
			{
				CAM::_0x798BE43C9393632B(&(uParam0->f_1111[iVar0 /*22*/].f_2));
			}
		}
		iVar0++;
	}
	PLAYER::RESET_PLAYER_INPUT_GAIT(PLAYER::GET_PLAYER_INDEX());
	if (func_359(uParam0, 524288) || iParam1 == 1)
	{
		func_1160();
	}
	if (func_366(uParam0, 16))
	{
		if (func_580(uParam0) == 0)
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
	func_1161();
	if (func_366(uParam0, 32))
	{
		TASK::SET_PED_PATH_FOLIAGE_COST_MODIFIER(Global_35, 1f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1667))
	{
		if (!func_359(uParam0, 8192))
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
	func_597(uParam0);
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1687))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_1687);
	}
	return 1;
}

void func_585(bool bParam0)
{
	if (bParam0)
	{
		func_1162(4);
	}
	func_1162(2);
	MISC::SET_BIT(&(Global_1956580.f_1), 0);
}

void func_586()
{
	Global_1905944.f_5695 = 1;
}

bool func_587(var uParam0, int iParam1)
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

int func_588(var uParam0)
{
	return uParam0->f_2;
}

void func_589(var uParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;

	if (func_828(uParam1, 8))
	{
		iVar0 |= 8;
	}
	if (func_828(uParam1, 8192))
	{
		iVar0 |= 32;
	}
	if (uParam0->f_1663)
	{
		fParam3 = 0.55f;
		PED::SET_PED_RESET_FLAG(uParam0->f_1664, 214, true);
	}
	if (uParam0->f_1662 && func_359(uParam0, 4096))
	{
		iVar0 |= 16;
	}
	if (func_828(uParam1, 262144) && Global_1935630.f_44 == GET_HASH_KEY("WEAPON_LASSO"))
	{
		iVar0 |= 16;
	}
	func_1163(&iVar1, uParam2);
	func_1164(&(uParam0->f_1670), iVar0, iVar1, fParam3);
	if (!Global_1935630.f_12)
	{
		if (!func_359(uParam0, 67108864))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 36, true);
	}
	func_1165();
	func_1166(uParam0, 1);
}

void func_590(var uParam0)
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
	if (iVar0 >= 0 && !func_596(uParam0, 2))
	{
		bVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_782[iVar0 /*41*/].f_1, true) <= uParam0->f_782[iVar0 /*41*/].f_16;
		Var2 = { uParam0->f_1458 };
		if (bVar1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1111[iVar0 /*22*/].f_2)))
			{
				StringCopy(&(uParam0->f_1458), func_1167(uParam0->f_1111[iVar0 /*22*/].f_2), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1458), func_1159(), 64);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1111[iVar0 /*22*/].f_10)))
			{
				StringCopy(&(uParam0->f_1458.f_8), func_1167(uParam0->f_1111[iVar0 /*22*/].f_10), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1458.f_8), func_1168(), 64);
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
			if (!func_1169(uParam0->f_1111[iVar0 /*22*/].f_1, 8))
			{
				if (!func_1169(uParam0->f_1111[iVar0 /*22*/].f_1, 8))
				{
					func_1163(&iVar19, uParam0->f_1111[iVar0 /*22*/].f_1);
					func_1170(&(uParam0->f_1670), iVar19);
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
							if (func_1169(uParam0->f_1111[iVar0 /*22*/].f_1, 16) && iVar24 >= 0)
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
											func_1153(uParam0, 16);
										}
										return;
									}
								}
								if (uParam0->f_1111[iVar0 /*22*/].f_18 != 0f || uParam0->f_1111[iVar0 /*22*/].f_19 != 0f)
								{
									vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, func_1171(Global_35, iVar23, 1), uParam0->f_1111[iVar0 /*22*/].f_18, 0f, uParam0->f_1111[iVar0 /*22*/].f_19) };
								}
							}
							else if (uParam0->f_1111[iVar0 /*22*/].f_18 != 0f || uParam0->f_1111[iVar0 /*22*/].f_19 != 0f)
							{
								vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, func_1149(Global_36, uParam0->f_782[iVar0 /*41*/].f_1, 1), uParam0->f_1111[iVar0 /*22*/].f_18, 0f, uParam0->f_1111[iVar0 /*22*/].f_19) };
							}
							fVar27 = uParam0->f_782[iVar0 /*41*/].f_16;
							fVar28 = uParam0->f_782[iVar0 /*41*/].f_14;
							bVar29 = func_1169(uParam0->f_1111[iVar0 /*22*/].f_1, 2);
							bVar30 = (func_1169(uParam0->f_1111[iVar0 /*22*/].f_1, 1) && !bVar29);
							bVar31 = func_1169(uParam0->f_1111[iVar0 /*22*/].f_1, 4);
							bVar32 = false;
							if (!CAM::_0x927B810E43E99932(&(uParam0->f_1458)))
							{
								CAM::_0xB8B207C34285E978(&(uParam0->f_1458));
								if (CAM::IS_CINEMATIC_CAM_RENDERING())
								{
									func_1172(0, 0);
								}
								bVar32 = true;
								func_1153(uParam0, 16);
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1458), 4))
							{
								bVar32 = (bVar32 || uParam0->f_1474.f_16 != iVar23);
								bVar32 = (bVar32 || !func_1173(uParam0->f_1474.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
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
								bVar32 = (bVar32 || !func_1173(uParam0->f_1497.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
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
							func_1174(uParam0, 2);
						}
					}
				}
			}
		}
	}
}

int func_591(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 || iParam1 == 2)
	{
		return 0;
	}
	if (func_1175(uParam0, &iVar0))
	{
		func_1176(uParam0, iVar0);
		return 1;
	}
	return 0;
}

void func_592(var uParam0, int iParam1)
{
	uParam0->f_1430 = (uParam0->f_1430 || iParam1);
}

void func_593(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	vector3 vVar6;
	int iVar9;

	if (func_580(uParam0) != 0)
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
				func_592(uParam0, 65536);
				return;
			}
			else if (uParam0->f_1668 == iVar9)
			{
				func_592(uParam0, 65536);
				return;
			}
		}
		func_365(uParam0, 65536);
	}
}

void func_594(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = 0;
	if (func_574(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1660)
		{
			if (uParam0->f_241[iVar0 /*18*/].f_7)
			{
				func_1177(uParam0, iVar0, iParam1);
			}
			else if (uParam0->f_241[iVar0 /*18*/].f_6)
			{
				bVar1 = func_1178(uParam0, iVar0);
				if (bVar1)
				{
					func_1179(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!func_587(uParam0, uParam0->f_1450))
		{
			func_1180(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_1457;
	while (iVar0 <= (uParam0->f_1660 - 1))
	{
		if (uParam0->f_241[iVar0 /*18*/].f_7)
		{
			func_1177(uParam0, iVar0, iParam1);
		}
		else if (uParam0->f_241[iVar0 /*18*/].f_6)
		{
			bVar1 = func_1178(uParam0, iVar0);
			if (bVar1)
			{
				func_1179(uParam0, iVar0, iParam1);
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

void func_595(var uParam0)
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

bool func_596(var uParam0, int iParam1)
{
	return (uParam0->f_1431 && iParam1) != 0;
}

void func_597(var uParam0)
{
	func_1181(&(uParam0->f_1670));
}

void func_598(var uParam0)
{
	uParam0->f_1431 = 0;
}

void func_599(int iParam0)
{
	int iVar0;

	if (func_298() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_81(func_1182(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_1182(iVar0), func_1183(), 1))
			{
				func_1184(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

void func_600()
{
	Global_18 = 1;
	Global_43884 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_601(var uParam0)
{
	if (uParam0->f_1450 >= 0)
	{
		if (func_519(Global_35, uParam0->f_782[uParam0->f_1450 /*41*/].f_1, 0) < uParam0->f_782[uParam0->f_1450 /*41*/].f_14)
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

bool func_602(var uParam0)
{
	if (uParam0->f_1450 >= 0)
	{
		if (func_519(Global_35, uParam0->f_782[uParam0->f_1450 /*41*/].f_1, 0) < uParam0->f_782[uParam0->f_1450 /*41*/].f_15)
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

bool func_603(var uParam0, int iParam1)
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
			else if (func_834(&(uParam0->f_1638)) >= 15f)
			{
				func_592(uParam0, 32768);
				return true;
			}
			break;
		case 9:
			if (!uParam0->f_1534)
			{
				if (func_834(&(uParam0->f_1638)) >= 15f)
				{
					func_592(uParam0, 32768);
					return true;
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(func_1185(uParam0)) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(func_1185(uParam0), false))
				{
					uParam0->f_1534 = 1;
				}
			}
			else
			{
				fVar0 = ANIMSCENE::GET_ANIM_SCENE_PHASE(func_1185(uParam0));
				bVar1 = ANIMSCENE::IS_ANIM_SCENE_FINISHED(func_1185(uParam0), false);
				bVar2 = ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(func_1185(uParam0));
				return ((fVar0 >= 1f || bVar1) || bVar2);
			}
			break;
		case 11:
			return true;
		default:
			return func_834(&(uParam0->f_1638)) >= 15f;
	}
	return false;
}

bool func_604(var uParam0)
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

int func_605(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_241[iVar0 /*18*/].f_17 == 2 && func_1186(&(uParam0->f_241[iVar0 /*18*/]), 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_606(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

bool func_607(bool bParam0, bool bParam1, float fParam2)
{
	if (bParam0)
	{
		return bParam1;
	}
	return fParam2;
}

void func_608(int iParam0, int* iParam1, var uParam2, float fParam3, float fParam4, char* sParam5)
{
	float fVar0;
	bool bVar1;
	bool bVar2;

	if (ENTITY::IS_ENTITY_DEAD(*iParam0) || !MISC::IS_BIT_SET(iParam1->f_21, 0))
	{
		return;
	}
	func_1187(iParam1, *iParam0, iParam1->f_56, 0);
	fVar0 = func_607(fParam4 >= 0f, fParam4, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
	func_1188(iParam1, fParam3);
	func_1189(iParam0, iParam1, uParam2, fVar0);
	func_1190(iParam1);
	if (MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		bVar1 = MISC::IS_STRING_NULL_OR_EMPTY(sParam5);
		func_1191(iParam1, uParam2, iParam0, bVar1, sParam5, fVar0);
		if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			bVar2 = true;
			if (!MISC::IS_BIT_SET(*iParam1, 12))
			{
				bVar2 = func_625(iParam1, iParam0);
			}
			if (bVar2 && !MISC::IS_BIT_SET(*iParam1, 13))
			{
				func_626(iParam1);
			}
		}
	}
}

bool func_609(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_1192(iParam0, iParam1))
		{
			if (!func_462(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_235(uParam2, 0, 0, 1, 0);
				func_149(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_462(iParam1->f_10, 1))
		{
			func_1193(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_148(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_610(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_462(iParam4, 32);
		func_1194(iParam1, uParam2, 0);
		iVar5 = func_1195(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
			return true;
		}
		func_235(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_462(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_462(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_462(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_462(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_462(iParam4, 8388608) || func_462(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_462(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_462(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_612(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*iParam0, "IloGeneralEvents", 2);
		}
		if (!func_612(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_462(iParam4, 67108864))
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
				iParam6 = func_1196(iParam0);
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
			if (func_462(iParam4, 268435456))
			{
				iVar8 = func_1197(uParam2, GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_1198(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_612(iParam1, 23))
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
			if (func_462(iParam4, 2) || func_462(iParam4, 16))
			{
				func_611(*iParam0, 1, 1);
			}
			else
			{
				func_611(*iParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_611(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_612(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_613(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_1199(*iParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_614(int iParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_1200(*iParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_462(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_615(int iParam0)
{
	if (func_462(iParam0, 4))
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
	if (func_462(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_RELOAD"), false);
	}
	if (func_462(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_GRAPPLE"), false);
	}
}

int func_616(int* iParam0, var uParam1)
{
	int iVar0;

	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_SATCHEL_HORSE_MENU"), false);
	iVar0 = 0;
	if (((((PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_OPEN_SATCHEL_MENU")) || PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_OPEN_SATCHEL_HORSE_MENU"))) || PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_OPEN_JOURNAL"))) || func_1201()) || func_1202()) || func_1203())
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_69(&(iParam0->f_46));
	}
	if (func_49(&(iParam0->f_46)) && !func_1204(&(iParam0->f_46), 0.25f))
	{
		func_1205(uParam1);
	}
	if (iVar0 == 1)
	{
		return 0;
	}
	return 1;
}

bool func_617(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_1206(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*iParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_1207(Global_35)) || func_1208(Global_35)) || func_1209(Global_35));
	fVar12 = -1f;
	if (func_49(&(iParam1->f_13)))
	{
		fVar12 = func_834(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_642((uParam4[iVar0 /*17*/])->f_6);
		func_1210(*iParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_1211(*iParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_1212(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_235(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_628(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_1194(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
							func_1213(iParam1, uParam4, iParam0, fParam3, sParam9);
							bVar13 = MISC::IS_STRING_NULL_OR_EMPTY(sParam9);
							func_1191(iParam1, uParam4, iParam0, bVar13, sParam9, fParam2);
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
							if (func_506(func_749(Global_35, 0, 1, 0)) || func_506(func_749(Global_35, 1, 1, 0)))
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
					if (func_1214(iParam1, fParam6, iParam1->f_9))
					{
						func_69(&(iParam1->f_18));
						if (bVar6)
						{
							func_628(uParam4, 0, 0);
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
		func_1215(iParam1, fParam2);
	}
	return bVar5;
}

void func_618(var uParam0)
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

void func_619(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_1216(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_1215(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_620(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_INTERACT_LOCKON")))
		{
			if (func_1217(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_1218(iParam1, 0);
				func_1194(iParam1, uParam2, func_612(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

void func_621(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_1210(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_622(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_623(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_1219(iParam0, vVar0, fParam2);
}

bool fun