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
	int iLocal_16[2] = { 0, 0 };
	struct<10> Local_19[7];
	struct<34> Local_90[2];
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	bool bLocal_204 = false;
	bool bLocal_205 = false;
	bool bLocal_206 = false;
	int iLocal_207 = 0;
	bool bLocal_208 = false;
	int iLocal_209 = 0;
	bool bLocal_210 = false;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	var uLocal_219 = -1;
	var uLocal_220 = 0;
	var uLocal_221 = -1;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = -1;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 1073741824;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 1;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 1106247680;
	var uLocal_245 = 1067450368;
	var uLocal_246 = 0;
	var uLocal_247 = 1092616192;
	var uLocal_248 = 1112014848;
	var uLocal_249 = 1106247680;
	var uLocal_250 = 1101529088;
	var uLocal_251 = 1101004800;
	var uLocal_252 = 1084227584;
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
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	struct<17> Local_279[1];
	bool bLocal_297 = false;
	char[] cLocal_298[8] = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	var uLocal_305[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<2> Local_314[5];
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	int iLocal_339[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	struct<2278> Var0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_166 = GET_HASH_KEY("CS_WROBEL");
	iLocal_167 = GET_HASH_KEY("U_M_O_PSHRANCHER_01");
	iLocal_168 = GET_HASH_KEY("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY");
	iLocal_169 = GET_HASH_KEY("P_CABINETCHINA01X");
	iLocal_170 = GET_HASH_KEY("P_CORNERCABINET02X");
	iLocal_171 = GET_HASH_KEY("P_SIDETABLE09X");
	iLocal_172 = GET_HASH_KEY("P_SIDETABLE07X");
	iLocal_173 = GET_HASH_KEY("P_CS_BOOK03X");
	iLocal_174 = GET_HASH_KEY("P_PENCIL01X");
	iLocal_175 = GET_HASH_KEY("P_SPOON01X");
	iLocal_202 = 1;
	cLocal_298 = "script_proc@loansharking@horse_sell@ig1_surrender";
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

int func_10(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	PED::_0xF7EA250B9A919E03(GET_HASH_KEY("INTIMIDATED_ON_ASS"), Local_90[0 /*34*/]);
	if (iVar0 == 0)
	{
		if (PED::HAS_MOTION_TYPE_ASSET_LOADED(GET_HASH_KEY("INTIMIDATED_ON_ASS"), Local_90[0 /*34*/]))
		{
			func_62(Local_90[0 /*34*/], -612.3f, -27.7f, 87.2f, 106f, 2, 1073741824 /* Float: 2f */);
			func_63(1);
			func_64(0);
			func_65(*uParam0, func_41(0), func_41(1), 0, 1);
			func_66(1, 1);
			return 8;
		}
	}
	else if (iVar0 == 1)
	{
		if (!func_67())
		{
			return 2;
		}
		func_64(5);
		func_65(*uParam0, func_41(1), func_41(2), 1, 2);
		func_66(1, 1);
		return 8;
	}
	else if (iVar0 == 2)
	{
		func_68(-774242862 /* GXTEntry: "Wróbel\'s Valuables" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_69(GET_HASH_KEY("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
		func_66(1, 1);
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
	if (func_70(cParam0))
	{
		if (func_71(cParam0->f_346))
		{
			func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
			func_72(&(cParam0->f_32), &(cParam0->f_352));
			func_73(cParam0);
		}
		else
		{
			func_74(cParam0);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			func_75(0, 1, 1);
		}
		func_11(cParam0, 7);
	}
}

void func_13(char[4] cParam0)
{
	int iVar0;

	if (func_71(cParam0->f_346))
	{
		if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 32))
		{
			func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
			if (func_73(cParam0))
			{
				func_76(cParam0, 1);
				iVar0 = func_77(cParam0);
				func_11(cParam0, iVar0);
			}
		}
	}
	else
	{
		func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
		if (func_78(cParam0))
		{
			func_79(cParam0);
			func_76(cParam0, 0);
			iVar0 = func_77(cParam0);
			func_11(cParam0, iVar0);
		}
		else
		{
			func_75(0, 1, 1);
			PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_SKIP_CUTSCENE"), true);
			func_80(cParam0);
		}
	}
}

void func_14(char[4] cParam0)
{
	int iVar0;

	iVar0 = func_81(cParam0);
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
	func_82(*cParam0, 1, 1);
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		func_83(cParam0, 0, 1);
		MISC::_0x1096603B519C905F("");
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		func_84();
		func_85(0);
		func_86(&Global_1935630, 4);
	}
	if (func_87(*cParam0))
	{
		if (func_88(Global_1392626[*cParam0 /*32*/].f_8, 8))
		{
			func_89("OBJ_COMPLETE_NOT", 7500, 0, 1, 0, 0, -1, -1, 0);
		}
		else if (func_88(Global_1392626[*cParam0 /*32*/].f_8, 16))
		{
			func_89("OBJ_COMPLETE_AB", 7500, 0, 1, 0, 0, -1, -1, 0);
		}
		else
		{
			func_89("OBJ_COMPLETE_REC", 7500, 0, 1, 0, 0, -1, -1, 0);
		}
	}
	func_39(cParam0);
	func_43(&(cParam0->f_16), 1);
	bVar0 = false;
	bVar0 = true;
	if (bVar0)
	{
		func_90();
		func_91();
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
		func_90();
		func_91();
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
					func_92(1, 1);
					func_93(&(Global_1347343.f_11), 131072);
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
		func_95(Global_1392626[*cParam0 /*32*/].f_3, iVar2, &(cParam0->f_2208), func_94(), 0, 0);
	}
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		MISC::_0x1096603B519C905F("");
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		func_85(0);
		func_84();
		func_86(&Global_1935630, 4);
	}
	func_96(*cParam0);
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
		func_97(*cParam0);
	}
	if (func_98(64, 1, 1))
	{
		iVar0 = func_99(0);
		if (func_100(iVar0))
		{
			func_22(cParam0);
			func_23(cParam0);
			return;
		}
	}
	if (func_101())
	{
		func_22(cParam0);
		func_23(cParam0);
		return;
	}
	else if (!func_49(&(cParam0->f_2064)) || IntToFloat(func_52(&(cParam0->f_2064))) > func_102(cParam0))
	{
		func_50(&(cParam0->f_2064), 1);
		if (func_103(cParam0))
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
		func_90();
		func_91();
	}
}

void func_19(var uParam0, int iParam1)
{
	func_104(*uParam0, iParam1);
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
	func_105(cParam0);
	func_106(cParam0);
	func_107(cParam0);
	if ((cParam0->f_1 != 12 && func_108(cParam0) != 2) && !func_109(Global_1392626[*cParam0 /*32*/].f_10, 2))
	{
		func_110(*cParam0);
	}
	func_107(cParam0);
	func_111(&(cParam0->f_2210[0]), &(cParam0->f_2213[0]));
	func_111(&(cParam0->f_2210[1]), &(cParam0->f_2213[1]));
	if (func_108(cParam0) == 0)
	{
		func_112(*cParam0);
	}
	func_113(&(Global_1392626[*cParam0 /*32*/].f_11), 1, 0, 1);
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
		func_84();
	}
	func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 4);
	func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 512);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_24(var uParam0)
{
	func_114(uParam0, 0);
	func_27(uParam0, 0);
	func_115(uParam0, 1);
	func_116(uParam0, 1);
	func_117(uParam0, 0);
	func_118(uParam0, 1);
	func_119(uParam0, 1, 1, 1);
}

void func_25(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_120(&(uParam0->f_1), 8);
	}
	else
	{
		func_121(&(uParam0->f_1), 8);
	}
}

void func_26(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_120(&(uParam0->f_1), 2);
	}
	else
	{
		func_121(&(uParam0->f_1), 2);
	}
}

void func_27(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_120(&(uParam0->f_1), 2048);
	}
	else
	{
		func_121(&(uParam0->f_1), 2048);
	}
}

int func_28()
{
	return func_123(func_122());
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
	var uVar0[1];

	func_124();
	func_125(1189146288, 0, 0);
	func_125(906448125, 0, 0);
	func_126(uParam0, "LSHSSAU");
	func_127(uParam0, 3);
	func_128(uParam0, 5);
	func_129(&(Global_1392626[*uParam0 /*32*/].f_8), 512);
	func_130(&(uParam0->f_2041), iLocal_166);
	func_130(&(uParam0->f_2041), iLocal_167);
	func_130(&(uParam0->f_2041), iLocal_168);
	func_130(&(uParam0->f_2041), GET_HASH_KEY("P_CHAIR20X"));
	func_130(&(uParam0->f_2041), GET_HASH_KEY("S_INV_RING02X"));
	func_130(&(uParam0->f_2041), iLocal_173);
	func_130(&(uParam0->f_2041), iLocal_174);
	func_130(&(uParam0->f_2041), GET_HASH_KEY("P_TABLE41X"));
	func_130(&(uParam0->f_2041), GET_HASH_KEY("P_COPPERPAN01X"));
	func_130(&(uParam0->f_2041), iLocal_175);
	func_130(&(uParam0->f_2041), GET_HASH_KEY("P_APPLE01X"));
	STREAMING::REQUEST_MODEL(iLocal_169, false);
	STREAMING::REQUEST_MODEL(iLocal_170, false);
	STREAMING::REQUEST_MODEL(iLocal_171, false);
	STREAMING::REQUEST_MODEL(iLocal_172, false);
	STREAMING::REQUEST_MODEL(GET_HASH_KEY("W_REPEATER_CARBINE01"), false);
	STREAMING::REQUEST_MODEL(GET_HASH_KEY("P_APPLE01X"), false);
	STREAMING::REQUEST_MODEL(GET_HASH_KEY("P_CHAIR20X"), false);
	STREAMING::REQUEST_MODEL(GET_HASH_KEY("S_INV_RING02X"), false);
	STREAMING::REQUEST_MODEL(iLocal_173, false);
	STREAMING::REQUEST_MODEL(iLocal_174, false);
	STREAMING::REQUEST_MODEL(iLocal_175, false);
	STREAMING::REQUEST_MODEL(GET_HASH_KEY("P_COPPERPAN01X"), false);
	func_125(138361190, 0, 0);
	func_131(138361190, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(138361190, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(138361190, 0f, false);
	OBJECT::_0x3A77DAE8B4FD7586(138361190, 1);
	func_132(138361190, 0);
	func_125(365712512, 0, 0);
	func_131(365712512, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(365712512, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(365712512, 0f, false);
	OBJECT::_0x3A77DAE8B4FD7586(365712512, 1);
	func_132(365712512, 0);
	func_133(&(uParam0->f_2052), cLocal_298);
	if (func_134(-774242862 /* GXTEntry: "Wróbel\'s Valuables" */, 1, 0))
	{
		func_135(-774242862 /* GXTEntry: "Wróbel\'s Valuables" */, 1, 1, -142743235, 0);
	}
	iLocal_211 = 0;
	iLocal_214 = 0;
	iLocal_212 = 0;
	bLocal_204 = false;
	Local_90[0 /*34*/].f_1 = { -610.6f, -26.2f, 84.55f };
	Local_90[0 /*34*/].f_4 = 120.5588f;
	AUDIO::PREPARE_MUSIC_EVENT("LSHSS_STOP");
	while (!HUD::TEXT_BLOCK_IS_LOADED("LOAN"))
	{
		BUILTIN::WAIT(0);
	}
	func_136(1189146288, 0, 0f, 0, 0, 0f, 0, 0);
	func_136(906448125, 0, 0f, 0, 0, 0f, 0, 0);
	func_136(295238741, 1, 0f, 0, 0, 0f, 0, 0);
	func_136(-3516232, 1, 0f, 0, 0, 0f, 0, 0);
	PED::SET_PED_NON_CREATION_AREA(-600.9553f, 33.4683f, 87.3055f, -639.6884f, -89.0383f, 79.3235f);
	PATHFIND::SET_PED_PATHS_IN_AREA(-600.9553f, 33.4683f, 87.3055f, -639.6884f, -89.0383f, 79.3235f, false, 0);
	iLocal_301 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-600f, -35f, 80f, 0f, 0f, 0f, 45f, 45f, 26f, "LS_BANKONMISS");
	func_137(iLocal_301, "LS_BANKONMISS", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_301, 0, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iLocal_301, 0, 262144, 0, -1, -1, 0);
	iLocal_299 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-613.0902f, -27.1919f, 85.0394f, 0f, 0f, -9.934977f, 50f, 50f, 50f, "m_volMissionLaunch");
	iLocal_300 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-612.0902f, -25.1919f, 85.0394f, 0f, 0f, -9.934977f, 30f, 30f, 5f, "m_volInitialConversation");
	iLocal_302 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-612.4f, -26.5f, 86.039f, 0f, 0f, 22f, 7f, 10f, 2f, "m_volHouse");
	iLocal_303 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-611.4518f, -34.20594f, 86.039f, 0f, 0f, 20f, 10.5f, 6.5f, 2f, "m_volHouse2");
	iLocal_304 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-611.8339f, -28.62046f, 85.4f, 0f, 0f, 22f, 3.5f, 2.25f, 2f, "BEAT UP THE PED AREA");
	func_138(uParam0, 5f, 4f, 3f, 2f, 100f, 0);
	if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-1996568696) && TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1996568696))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1996568696, false);
	}
	TASK::GET_SCENARIO_POINTS_IN_AREA(-610.1f, -25.5f, 85f, 1f, &uVar0, 1);
	if (TASK::DOES_SCENARIO_POINT_EXIST(uVar0[0]))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(uVar0[0], false);
	}
	TASK::GET_SCENARIO_POINTS_IN_AREA(-610.6f, -25.2f, 85.1f, 1f, &uVar0, 1);
	if (TASK::DOES_SCENARIO_POINT_EXIST(uVar0[0]))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(uVar0[0], false);
	}
	TASK::GET_SCENARIO_POINTS_IN_AREA(-613.3f, -22.6f, 85f, 0.5f, &uVar0, 1);
	if (TASK::DOES_SCENARIO_POINT_EXIST(uVar0[0]))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(uVar0[0], false);
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
		if (func_139(cParam0))
		{
			func_140(*cParam0, 1024);
			func_35(cParam0, 5);
			return true;
		}
	}
	if (func_98(0, 1, 0))
	{
		iVar0 = func_99(0);
		if (func_100(iVar0) && Global_1392626[*cParam0 /*32*/].f_3 != func_99(0))
		{
			func_129(&(Global_1392626[*cParam0 /*32*/].f_8), 1);
			func_35(cParam0, 6);
			return true;
		}
	}
	if (Global_1392626[*cParam0 /*32*/].f_12 != -1)
	{
		if (func_141(Global_1392626[*cParam0 /*32*/].f_12))
		{
			func_140(*cParam0, 2048);
			return true;
		}
	}
	if (Global_1392626[*cParam0 /*32*/].f_22 != -1)
	{
		if (!func_142(Global_1392626[*cParam0 /*32*/].f_22))
		{
			func_129(&(Global_1392626[*cParam0 /*32*/].f_8), 1);
			func_35(cParam0, 3);
			return true;
		}
	}
	if (func_143(*cParam0))
	{
		func_129(&(Global_1392626[*cParam0 /*32*/].f_8), 1);
		func_35(cParam0, 7);
		return true;
	}
	if (func_144(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		func_140(*cParam0, 16384);
		func_35(cParam0, 4);
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1392626[*cParam0 /*32*/].f_11))
	{
		if (!func_145(*cParam0, (Global_1392626[*cParam0 /*32*/].f_5 + 10f)))
		{
			func_35(cParam0, 2);
			return true;
		}
	}
	else if (func_146(Global_1392626[*cParam0 /*32*/].f_11, 1))
	{
		if (!func_88(Global_1392626[*cParam0 /*32*/].f_8, 256))
		{
			if (!func_145(*cParam0, (Global_1392626[*cParam0 /*32*/].f_5 + 10f)) && !func_147(Global_1392626[*cParam0 /*32*/].f_11, 0, &(cParam0->f_2077), &(cParam0->f_2105), 0, 0))
			{
				func_35(cParam0, 2);
				return true;
			}
		}
	}
	fVar1 = BUILTIN::VDIST2(Global_1392626[*cParam0 /*32*/].f_24, Global_36);
	if (func_148(fVar1))
	{
		func_140(*cParam0, 8192);
		func_35(cParam0, 5);
		return true;
	}
	return false;
}

void func_39(char[4] cParam0)
{
	func_149(cParam0);
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		func_84();
		func_150(0);
		if (!Global_1935630.f_12)
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
		}
		UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
		func_151();
	}
	func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 4);
	if (func_108(cParam0) != 2 && !func_109(Global_1392626[*cParam0 /*32*/].f_10, 2))
	{
		func_110(*cParam0);
	}
	func_107(cParam0);
	if (func_108(cParam0) == 0)
	{
		func_112(*cParam0);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	func_152();
	func_111(&(cParam0->f_2210[0]), &(cParam0->f_2213[0]));
	func_111(&(cParam0->f_2210[1]), &(cParam0->f_2213[1]));
	func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 8);
	func_153(cParam0);
}

void func_40(char[4] cParam0)
{
	if (!func_154(*cParam0, 4))
	{
		if (func_155(Global_35, Global_1392626[*cParam0 /*32*/].f_27, Global_1392626[*cParam0 /*32*/].f_4, 1, 1))
		{
			if (cParam0->f_2204 == -1)
			{
				cParam0->f_2204 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - cParam0->f_2204) > 120000)
			{
				func_156(*cParam0);
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
		Var1 = { -613.2f, -26.6f, 85.3f };
		Var1.f_3 = -57.6f;
	}
	else if (iVar0 == 1)
	{
		Var1 = { -613.2f, -26.6f, 85.3f };
		Var1.f_3 = -57.6f;
	}
	else if (iVar0 == 2)
	{
		Var1 = { -650.2f, 36.1f, 73.5f };
		Var1.f_3 = 336.3f;
	}
	return Var1;
}

bool func_42(var uParam0)
{
	return func_157(*uParam0, uParam0->f_3);
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
		if (func_158(cParam0))
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
	if (func_159(cParam0->f_32.f_5))
	{
		cParam0->f_32.f_5 = { func_160(*cParam0) };
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
	if (func_71(cParam0->f_346))
	{
		if (func_161(&(cParam0->f_32), cParam0->f_346, 0, 1))
		{
			if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 32))
			{
				func_162(cParam0);
				func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 32);
			}
		}
		else
		{
			if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 64))
			{
				func_163(cParam0);
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
			func_163(cParam0);
		}
		func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 32);
	}
}

bool func_49(var uParam0)
{
	return func_164(*uParam0, 1);
}

void func_50(var uParam0, bool bParam1)
{
	if (bParam1 || !func_49(uParam0))
	{
		func_165(uParam0);
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
	if (func_166(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_167() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_53(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

bool func_54()
{
	return func_168(Global_1935630, 4096);
}

int func_55(var uParam0)
{
	func_169(&(uParam0->f_2041));
	func_170(&(uParam0->f_2052));
	HUD::TEXT_BLOCK_REQUEST("LOAN");
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2205)))
	{
	}
	else
	{
		HUD::TEXT_BLOCK_REQUEST(&(uParam0->f_2205));
	}
	if (((func_171(&(uParam0->f_2041)) && func_172(&(uParam0->f_2052))) && HUD::TEXT_BLOCK_IS_LOADED("LOAN")) && (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2205)) || HUD::TEXT_BLOCK_IS_LOADED(&(uParam0->f_2205))))
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
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_198))
	{
		iLocal_198 = OBJECT::CREATE_OBJECT(iLocal_173, -612.1649f, -25.246f, 85.7822f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_198, 0f, -0.0001f, 113.36f, 2, true);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_199))
	{
		iLocal_199 = OBJECT::CREATE_OBJECT(iLocal_174, -612.1934f, -25.0732f, 85.8251f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_199, 90f, -0.0001f, 90f, 2, true);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_200))
	{
		iLocal_200 = OBJECT::CREATE_OBJECT(iLocal_175, -614.4549f, -22.9549f, 85.8346f, true, true, false, false, true);
		return false;
	}
	if (!func_173())
	{
		return false;
	}
	if (func_174(uParam0))
	{
		if (func_175(uParam0))
		{
			func_176(&(uParam0->f_2210[0]), &(uParam0->f_2213[0]), -612.0902f, -25.1919f, 85.0394f, 0f, 0f, 0f, 3f, 3f, 3f, 0, 0, 1, 0, 0);
			func_177(885);
			func_177(780);
			func_177(781);
			func_178(885, 32);
			func_178(780, 32);
			func_179(&(uParam0->f_2106), Global_35, "ARTHUR", 0);
			func_179(&(uParam0->f_2106), Local_90[0 /*34*/], "LS_SELLHORDEBTOR", 0);
			ENTITY::CREATE_MODEL_HIDE(-613.1794f, -31.4201f, 85.247f, 5f, GET_HASH_KEY("W_REPEATER_CARBINE01"), false);
			ENTITY::CREATE_MODEL_HIDE(-610.5f, -25.2f, 85.9f, 5f, GET_HASH_KEY("P_APPLE01X"), false);
			return true;
		}
	}
	return false;
}

void func_58(char[4] cParam0)
{
	struct<4> Var0;

	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (!func_180(Global_1392626[*cParam0 /*32*/].f_3))
	{
		if (!func_181(Global_1392626[*cParam0 /*32*/].f_3))
		{
			func_182(Global_1392626[*cParam0 /*32*/].f_3, 1);
		}
		func_183(Global_1392626[*cParam0 /*32*/].f_3, 1, 1);
		func_184(&Global_1935630, 4);
		func_185(4);
	}
	func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 4);
	func_110(*cParam0);
	MISC::_0x1096603B519C905F(func_186(*cParam0));
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	func_83(cParam0, 1, 0);
	AUDIO::CLEAR_CONVERSATION_HISTORY();
	func_150(1);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	func_187(1);
	func_188(cParam0);
	if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 512))
	{
		Var0 = { func_41(0) };
		if (!func_42(&Var0))
		{
			func_34(&(cParam0->f_16), 128);
		}
		func_65(*cParam0, func_41(0), func_41(1), 0, 1);
	}
}

void func_59(char[4] cParam0)
{
	if (bLocal_208 == 0)
	{
		cParam0->f_346 = func_189();
		func_190(cParam0, -613.8f, -27.1f, 86f);
		func_192(cParam0, 41064);
		func_193(cParam0, Global_35, "ARTHUR", 0, 0, 0);
		func_193(cParam0, Local_90[0 /*34*/], "cs_wrobel", 0, 0, 0);
		func_193(cParam0, iLocal_199, "p_pencil01x", 0, 0, 0);
		func_193(cParam0, iLocal_200, "p_spoon01x", 0, 0, 0);
		func_193(cParam0, iLocal_328, "p_copperpan01x", 0, 0, 0);
		func_193(cParam0, iLocal_198, "p_cs_book03x", 0, 0, 0);
		func_193(cParam0, iLocal_330, "p_table41x", 0, 0, 0);
		func_194(&(cParam0->f_32));
		func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
	}
}

bool func_60(char[4] cParam0)
{
	if (!func_195(cParam0))
	{
		return false;
	}
	func_196(cParam0);
	if (!func_88(Global_1392626[*cParam0 /*32*/].f_8, 512))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_348)) && func_20(Global_1392626[*cParam0 /*32*/].f_9, 16))
		{
			if (func_88(Global_1392626[*cParam0 /*32*/].f_8, 2))
			{
				func_197(&(cParam0->f_352), cParam0->f_348, 0);
			}
			else
			{
				func_198(&(cParam0->f_352), cParam0->f_348, 0, 0);
				if (func_199(&(cParam0->f_352)))
				{
					return true;
				}
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(cParam0->f_346))
		{
			if (func_71(cParam0->f_346))
			{
				if (!func_159(cParam0->f_32.f_5))
				{
					if (VOLUME::DOES_VOLUME_EXIST(cParam0->f_2040))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, cParam0->f_2040, true, 0))
						{
							if (cParam0->f_17 == 2)
							{
								func_106(cParam0);
								return true;
							}
						}
					}
					else if (BUILTIN::VDIST2(Global_36, cParam0->f_32.f_5) < 6f)
					{
						if (cParam0->f_17 == 2)
						{
							func_106(cParam0);
							return true;
						}
					}
				}
				else if (BUILTIN::VDIST2(Global_36, cParam0->f_32.f_5) < 6f)
				{
					func_106(cParam0);
					return true;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1392626[*cParam0 /*32*/].f_11))
		{
			func_200(cParam0);
			if ((!PED::IS_PED_RAGDOLL(Global_35) && !PED::IS_PED_JUMPING(Global_35)) && !PED::IS_PED_INJURED(Global_1392626[*cParam0 /*32*/].f_11))
			{
				if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 1024))
				{
					func_201(&(Global_1392626[*cParam0 /*32*/].f_11), &(cParam0->f_2216), cParam0->f_2295, &(cParam0->f_2277), 0.1f, 3, 0, cParam0->f_2296, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
					if (func_202(&(cParam0->f_2216)))
					{
						func_107(cParam0);
						func_203(cParam0);
						func_106(cParam0);
						return true;
					}
				}
			}
		}
	}
	if (func_204(cParam0))
	{
		if (cParam0->f_17 == 2)
		{
			func_106(cParam0);
			return true;
		}
	}
	return false;
}

void func_61(char[4] cParam0)
{
	int iVar0;

	func_58(cParam0);
	func_205(&(cParam0->f_2277), 0, 0, 1, 0);
	func_107(cParam0);
	func_34(&(cParam0->f_16), 1);
	func_206(cParam0);
	func_11(cParam0, func_207(cParam0));
	iVar0 = func_207(cParam0);
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

void func_62(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_208(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_209(iParam0))
	{
		if (func_210(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_211(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_62(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_62(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_211(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (func_211(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_211(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_211(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iParam0, false);
		}
	}
	else if (func_211(iParam5, 129))
	{
		if (func_211(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_211(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_211(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_211(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (func_209(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_211(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_211(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

void func_63(int iParam0)
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_90[0 /*34*/], true, 0f);
	ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_90[0 /*34*/]);
	func_212(Local_90[0 /*34*/]);
	TASK::_TASK_INTIMIDATED_2(Local_90[0 /*34*/], Global_35, 0, 1, 1, iParam0, 0, 1, 196610);
	PED::_0xC163DAC52AC975D3(Local_90[0 /*34*/], 31);
	PED::_0xB8DE69D9473B7593(Global_35, 31);
	PED::_0xB8DE69D9473B7593(Global_35, 3);
	PED::_0xB8DE69D9473B7593(Global_35, 4);
	TASK::_0x41D1331AFAD5A091(Local_90[0 /*34*/], 1, 0);
	PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 315, false);
	PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 130, false);
	PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 301, false);
	PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 331, false);
	PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 297, false);
	PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 351, true);
	PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 452, true);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_90[0 /*34*/], false, false);
}

void func_64(int iParam0)
{
	if (func_213() != iParam0)
	{
		iLocal_15 = iParam0;
	}
}

void func_65(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<4> Var4;

	if (func_9() != iParam9)
	{
		func_214(0);
	}
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_215(Global_1392626[iParam0 /*32*/].f_3, Var0, Var4, iParam9, iParam10);
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

bool func_67()
{
	if (bLocal_204 == 1)
	{
		return true;
	}
	if (iLocal_327 == 0)
	{
		iLocal_327 = ENTITY::PIN_CLOSEST_MAP_ENTITY(GET_HASH_KEY("P_COPPERPAN01X"), -614.6f, -23.2f, 86.1f, 7);
		return false;
	}
	else if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_327))
	{
		iLocal_328 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_327));
	}
	if (iLocal_329 == 0)
	{
		iLocal_329 = ENTITY::PIN_CLOSEST_MAP_ENTITY(GET_HASH_KEY("P_TABLE41X"), -611.4f, -25.5f, 85.7f, 7);
		return false;
	}
	else if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_329))
	{
		iLocal_330 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_329));
	}
	iLocal_325 = TASK::FIND_SCENARIO_OF_TYPE_HASH(-611.2f, -30.2f, 85.4f, GET_HASH_KEY("RANSACK_ATTACHED_P_SIDETABLE07X"), 2f, 0, false);
	if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_325))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_325, false);
	}
	func_216(1);
	func_125(1189146288, 0, 0);
	func_125(906448125, 0, 0);
	func_136(906448125, 0, 0, 0, 1, 0, 0, 0);
	func_136(1189146288, 0, 0, 0, 1, 0, 0, 0);
	PED::SET_LOOTING_FLAG(Global_35, 3, true);
	StringCopy(&(Local_314[0 /*2*/]), "LSHSS_IG2_ONE", 16);
	StringCopy(&(Local_314[1 /*2*/]), "LSHSS_IG2_TWO", 16);
	StringCopy(&(Local_314[2 /*2*/]), "LSHSS_LOOT4", 16);
	StringCopy(&(Local_314[3 /*2*/]), "LSHSS_IG2_ENOUH", 16);
	StringCopy(&(Local_314[4 /*2*/]), "LSHSS_CURSEYOU", 16);
	Local_19[0 /*10*/].f_3 = iLocal_171;
	Local_19[0 /*10*/] = 0;
	Local_19[0 /*10*/].f_4 = { -614.7f, -28.4f, 85.7f };
	Local_19[0 /*10*/].f_7 = 16;
	Local_19[0 /*10*/].f_8 = GET_HASH_KEY("PROVISION_WATCH");
	Local_19[0 /*10*/].f_9 = TASK::FIND_SCENARIO_OF_TYPE_HASH(Local_19[0 /*10*/].f_4, GET_HASH_KEY("RANSACK_ATTACHED_P_SIDETABLE09X"), 2f, 0, false);
	func_217(Local_19[0 /*10*/].f_3, Local_19[0 /*10*/].f_4, &(Local_19[0 /*10*/].f_2), 0, 0);
	if (TASK::DOES_SCENARIO_POINT_EXIST(Local_19[0 /*10*/].f_9))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[0 /*10*/].f_9, false);
	}
	if (func_218(Local_19[0 /*10*/].f_3, Local_19[0 /*10*/].f_4, &(Local_19[0 /*10*/].f_2), 0, 0, 0))
	{
	}
	func_219(Local_19[0 /*10*/].f_3, Local_19[0 /*10*/].f_4, &(Local_19[0 /*10*/].f_2), 0, 0);
	func_220(Local_19[0 /*10*/].f_3, Local_19[0 /*10*/].f_4, &(Local_19[0 /*10*/].f_2), Local_19[0 /*10*/].f_8, 1, 0, 0, 0);
	Local_19[1 /*10*/].f_3 = iLocal_170;
	Local_19[1 /*10*/] = 0;
	Local_19[1 /*10*/].f_4 = { -607.9755f, -29.5191f, 85.0193f };
	Local_19[1 /*10*/].f_7 = 32;
	Local_19[1 /*10*/].f_8 = GET_HASH_KEY("PROVISION_EARRING_SILVER");
	Local_19[1 /*10*/].f_9 = TASK::FIND_SCENARIO_OF_TYPE_HASH(Local_19[1 /*10*/].f_4, GET_HASH_KEY("RANSACK_ATTACHED_P_CORNERCABINET02X"), 2f, 0, false);
	func_217(Local_19[1 /*10*/].f_3, Local_19[1 /*10*/].f_4, &(Local_19[1 /*10*/].f_2), 0, 0);
	if (TASK::DOES_SCENARIO_POINT_EXIST(Local_19[1 /*10*/].f_9))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[1 /*10*/].f_9, false);
	}
	if (func_218(Local_19[1 /*10*/].f_3, Local_19[1 /*10*/].f_4, &(Local_19[1 /*10*/].f_2), 0, 0, 0))
	{
	}
	func_219(Local_19[1 /*10*/].f_3, Local_19[1 /*10*/].f_4, &(Local_19[1 /*10*/].f_2), 0, 0);
	func_220(Local_19[1 /*10*/].f_3, Local_19[1 /*10*/].f_4, &(Local_19[1 /*10*/].f_2), Local_19[1 /*10*/].f_8, 1, 0, 0, GET_HASH_KEY("S_JEWLERYBOX_SM_POOR01X"));
	Local_19[2 /*10*/].f_3 = iLocal_169;
	Local_19[2 /*10*/] = 0;
	Local_19[2 /*10*/].f_4 = { -616.3115f, -23.2011f, 85.0211f };
	Local_19[2 /*10*/].f_7 = 64;
	Local_19[2 /*10*/].f_8 = GET_HASH_KEY("CONSUMABLE_BRANDY");
	Local_19[2 /*10*/].f_9 = TASK::FIND_SCENARIO_OF_TYPE_HASH(Local_19[2 /*10*/].f_4, GET_HASH_KEY("RANSACK_ATTACHED_P_CABINETCHINA01X"), 2f, 0, false);
	func_217(Local_19[2 /*10*/].f_3, Local_19[2 /*10*/].f_4, &(Local_19[2 /*10*/].f_2), 0, 0);
	if (TASK::DOES_SCENARIO_POINT_EXIST(Local_19[2 /*10*/].f_9))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[2 /*10*/].f_9, false);
	}
	if (func_218(Local_19[2 /*10*/].f_3, Local_19[2 /*10*/].f_4, &(Local_19[2 /*10*/].f_2), 0, 0, 0))
	{
	}
	func_219(Local_19[2 /*10*/].f_3, Local_19[2 /*10*/].f_4, &(Local_19[2 /*10*/].f_2), 0, 0);
	func_220(Local_19[2 /*10*/].f_3, Local_19[2 /*10*/].f_4, &(Local_19[2 /*10*/].f_2), Local_19[2 /*10*/].f_8, 1, 0, 0, 0);
	Local_19[3 /*10*/].f_3 = iLocal_170;
	Local_19[3 /*10*/] = 0;
	Local_19[3 /*10*/].f_4 = { -613.7f, -31.5f, 85f };
	Local_19[3 /*10*/].f_7 = 128;
	Local_19[3 /*10*/].f_8 = GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_CHEAP");
	Local_19[3 /*10*/].f_9 = TASK::FIND_SCENARIO_OF_TYPE_HASH(Local_19[3 /*10*/].f_4, GET_HASH_KEY("RANSACK_ATTACHED_P_CORNERCABINET02X"), 2f, 0, false);
	func_217(Local_19[3 /*10*/].f_3, Local_19[3 /*10*/].f_4, &(Local_19[3 /*10*/].f_2), 0, 0);
	if (TASK::DOES_SCENARIO_POINT_EXIST(Local_19[3 /*10*/].f_9))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[3 /*10*/].f_9, false);
	}
	if (func_218(Local_19[3 /*10*/].f_3, Local_19[3 /*10*/].f_4, &(Local_19[3 /*10*/].f_2), 0, 0, 0))
	{
	}
	func_219(Local_19[3 /*10*/].f_3, Local_19[3 /*10*/].f_4, &(Local_19[3 /*10*/].f_2), 0, 0);
	func_221(Local_19[3 /*10*/].f_3, Local_19[3 /*10*/].f_4, 0.1f, 0.1f, -0.245f, 0f, 0f, 0f, &(Local_19[3 /*10*/].f_2), Local_19[3 /*10*/].f_8, 1, 0, 0, 0);
	Local_19[4 /*10*/].f_3 = iLocal_172;
	Local_19[4 /*10*/] = 0;
	Local_19[4 /*10*/].f_4 = { -610.99f, -30.62f, 85f };
	Local_19[4 /*10*/].f_7 = 256;
	Local_19[4 /*10*/].f_8 = GET_HASH_KEY("PROVISION_GOLDRING");
	Local_19[4 /*10*/].f_9 = TASK::FIND_SCENARIO_OF_TYPE_HASH(Local_19[4 /*10*/].f_4, GET_HASH_KEY("RANSACK_ATTACHED_P_SIDETABLE07X"), 2f, 0, false);
	func_217(Local_19[4 /*10*/].f_3, Local_19[4 /*10*/].f_4, &(Local_19[4 /*10*/].f_2), 0, 0);
	if (TASK::DOES_SCENARIO_POINT_EXIST(Local_19[4 /*10*/].f_9))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[4 /*10*/].f_9, false);
	}
	if (func_218(Local_19[4 /*10*/].f_3, Local_19[4 /*10*/].f_4, &(Local_19[4 /*10*/].f_2), 0, 0, 0))
	{
	}
	func_219(Local_19[4 /*10*/].f_3, Local_19[4 /*10*/].f_4, &(Local_19[4 /*10*/].f_2), 0, 0);
	func_222(Local_19[4 /*10*/].f_7);
	Local_19[5 /*10*/].f_3 = GET_HASH_KEY("P_CHEST03X");
	Local_19[5 /*10*/] = 0;
	Local_19[5 /*10*/].f_4 = { -612.7f, -34.9f, 84.9f };
	Local_19[5 /*10*/].f_7 = 1024;
	Local_19[5 /*10*/].f_8 = GET_HASH_KEY("MONEY_COINPURSE");
	Local_19[5 /*10*/].f_9 = TASK::FIND_SCENARIO_OF_TYPE_HASH(Local_19[5 /*10*/].f_4, GET_HASH_KEY("RANSACK_ATTACHED_CHEST_MEDIUM"), 2f, 0, false);
	func_217(Local_19[5 /*10*/].f_3, Local_19[5 /*10*/].f_4, &(Local_19[5 /*10*/].f_2), 0, 0);
	if (TASK::DOES_SCENARIO_POINT_EXIST(Local_19[5 /*10*/].f_9))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[5 /*10*/].f_9, false);
	}
	if (func_218(Local_19[5 /*10*/].f_3, Local_19[5 /*10*/].f_4, &(Local_19[5 /*10*/].f_2), 0, 0, 0))
	{
	}
	func_219(Local_19[5 /*10*/].f_3, Local_19[5 /*10*/].f_4, &(Local_19[5 /*10*/].f_2), 0, 0);
	func_220(Local_19[5 /*10*/].f_3, Local_19[5 /*10*/].f_4, &(Local_19[5 /*10*/].f_2), Local_19[5 /*10*/].f_8, 1, 0, 0, 0);
	func_222(Local_19[5 /*10*/].f_7);
	Local_19[6 /*10*/].f_3 = GET_HASH_KEY("P_NIGHTSTAND03X");
	Local_19[6 /*10*/] = 0;
	Local_19[6 /*10*/].f_4 = { -606.0966f, -34.99f, 84.97f };
	Local_19[6 /*10*/].f_7 = 131072;
	Local_19[6 /*10*/].f_8 = GET_HASH_KEY("MONEY_COINSTACK");
	Local_19[6 /*10*/].f_9 = TASK::FIND_SCENARIO_OF_TYPE_HASH(Local_19[6 /*10*/].f_4, GET_HASH_KEY("RANSACK_ATTACHED_P_NIGHTSTAND03X"), 2f, 0, false);
	func_217(Local_19[6 /*10*/].f_3, Local_19[6 /*10*/].f_4, &(Local_19[6 /*10*/].f_2), 0, 0);
	if (TASK::DOES_SCENARIO_POINT_EXIST(Local_19[6 /*10*/].f_9))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[6 /*10*/].f_9, false);
	}
	if (func_218(Local_19[6 /*10*/].f_3, Local_19[6 /*10*/].f_4, &(Local_19[6 /*10*/].f_2), 0, 0, 0))
	{
	}
	func_219(Local_19[6 /*10*/].f_3, Local_19[6 /*10*/].f_4, &(Local_19[6 /*10*/].f_2), 0, 0);
	func_220(Local_19[6 /*10*/].f_3, Local_19[6 /*10*/].f_4, &(Local_19[6 /*10*/].f_2), Local_19[6 /*10*/].f_8, 1, 0, 0, 0);
	func_222(Local_19[6 /*10*/].f_7);
	bLocal_204 = true;
	return true;
}

bool func_68(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_223(iParam0, 0))
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
	if (func_227(iParam0, 0, 0) == 0)
	{
		if (func_228(iParam0))
		{
			iVar5 = func_229(iParam0);
			iVar6 = func_230(iVar5);
			iVar7 = func_231(iVar6) + 1;
			func_232(iVar5);
			if (func_233(38))
			{
				func_234(483, 0);
			}
			else
			{
				func_234(482, 0);
			}
			if (iVar7 == func_235(iVar6))
			{
				func_68(func_236(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_237() && func_238(4))
				{
					if (func_237() && (func_239(38) || func_233(38)))
					{
						func_241(38, func_236(iVar6), 0, 0, func_240(), 0, -1, 0);
						func_242(2);
					}
					else
					{
						func_241(38, func_236(iVar6), 0, 0, func_240(), 0, -1, 0);
						func_242(1);
					}
				}
			}
			else if (func_237() && func_238(4))
			{
				if (func_237() && (func_239(38) || func_233(38)))
				{
					func_241(38, 0, 0, 0, func_240(), 0, -1, 0);
					func_242(2);
				}
				else
				{
					func_241(38, 0, 0, 0, func_240(), 0, -1, 0);
					func_242(1);
				}
			}
			if (func_237() && func_238(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (func_237() && (func_239(38) || func_233(38)))
					{
						func_243(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_243(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_244(iParam0) == GET_HASH_KEY("CLOTHING"))
	{
		if ((!func_245(iParam0, 866047851) && !func_245(iParam0, -1979000645)) && !func_245(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_246(iParam0, 8388608) && !func_247(28))
	{
		func_248(28);
	}
	if (!bVar3)
	{
		if (func_245(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_249(iParam0) == -1447088266)
			{
				iVar1 = func_251(func_250(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_252() == -1)
					{
						func_253(iVar1);
					}
					if (func_254(0) && func_255(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_256(iParam0, iVar0, iParam5);
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
					if (func_252() == -1)
					{
						func_253(iParam0);
					}
					if (func_254(0) && func_255(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_256(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_244(iParam0) == GET_HASH_KEY("WEAPON"))
		{
			if (!func_257(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_244(iParam0) == GET_HASH_KEY("AMMO") && func_258(iParam0))
		{
			if (!func_259(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_245(iParam0, 866047851))
		{
			func_260(iParam0);
		}
		else if (func_245(iParam0, 2000026003))
		{
			func_261(iParam0);
		}
		else if (func_245(iParam0, -103750053))
		{
			func_263(func_262(GET_HASH_KEY("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == GET_HASH_KEY("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_263(func_264(GET_HASH_KEY("COLLECTED"), GET_HASH_KEY("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_245(iParam0, -121341956) && !func_245(iParam0, 606799272))
		{
			if (iParam0 != GET_HASH_KEY("WEAPON_KIT_DETECTOR") && iParam0 != GET_HASH_KEY("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (func_265(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_234(498, 0);
				}
			}
			if (func_245(iParam0, -2017733358) || func_245(iParam0, -1369131378))
			{
				func_266(iParam0);
			}
		}
		else if (func_245(iParam0, -136654233))
		{
			if (func_245(iParam0, -1021472396))
			{
			}
		}
		else if (func_245(iParam0, -1466706512) && func_245(iParam0, 1147021565))
		{
			func_234(484, 0);
		}
		else if (func_245(iParam0, 1147021565) && func_245(iParam0, -524514947))
		{
		}
		else if (func_245(iParam0, 554195525))
		{
		}
		else if (func_245(iParam0, 589988438))
		{
			if (func_267())
			{
				func_268(GET_HASH_KEY("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_245(iParam0, 787083290) && func_245(iParam0, 949916894))
		{
			func_269(iParam0);
		}
		else if (func_245(iParam0, -1718133314))
		{
			func_270(iParam0);
		}
		else if (func_245(iParam0, -1738650224))
		{
			func_271(iParam0);
		}
		else if (func_245(iParam0, -1112814642) && func_245(iParam0, 949916894))
		{
			func_272(iParam0);
		}
		else if (iParam0 == GET_HASH_KEY("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_245(iParam0, 1841149704))
		{
			func_273();
		}
		else if (func_245(iParam0, 606799272))
		{
			func_274(iParam0, iParam1);
			func_275(iParam0);
		}
		else if (func_245(iParam0, -1112814642) && func_245(iParam0, -1697809989))
		{
			func_276(iParam0, 0, 0, 0);
		}
		else if (func_245(iParam0, -2017733358) || func_245(iParam0, -1369131378))
		{
			func_266(iParam0);
		}
		else if (func_245(iParam0, -1921346699))
		{
			if (func_252() != -1)
			{
				return false;
			}
			func_277(iParam0, iParam5, iParam8);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_245(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_134(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_68(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_134(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_68(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_134(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_68(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_134(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_68(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_134(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_68(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_134(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_68(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_245(iParam0, -839724752) && func_246(iParam0, 4))
		{
			if (!func_233(42))
			{
				func_278(iParam0);
			}
		}
		else if (func_245(iParam0, 1399091007))
		{
			func_279(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_245(iParam0, 1248798204))
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
				func_68(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				Jump @4452; //curOff = 2815
				bParam2 = true;
				bVar4 = true;
				iVar2 = GET_HASH_KEY("JBOX_SML_PLAIN");
				Jump @4452; //curOff = 2831
				bParam2 = true;
				bVar4 = true;
				iVar2 = GET_HASH_KEY("JBOX_SML_PLAIN");
				Jump @4452; //curOff = 2847
				bParam2 = true;
				bVar4 = true;
				iVar2 = GET_HASH_KEY("JBOX_LRG_PLAIN");
				Jump @4452; //curOff = 2863
				bParam2 = true;
				bVar4 = true;
				iVar2 = GET_HASH_KEY("JBOX_LRG_PLAIN");
				Jump @4452; //curOff = 2879
				bParam2 = true;
				bVar4 = true;
				iVar2 = GET_HASH_KEY("JBOX_SML_POOR");
				Jump @4452; //curOff = 2895
				bParam2 = true;
				bVar4 = true;
				iVar2 = GET_HASH_KEY("JBOX_SML_POOR");
				Jump @4452; //curOff = 2911
				bParam2 = true;
				bVar4 = true;
				iVar2 = GET_HASH_KEY("JBOX_LRG_POOR");
				Jump @4452; //curOff = 2927
				bParam2 = true;
				bVar4 = true;
				iVar2 = GET_HASH_KEY("JBOX_LRG_POOR");
				Jump @4452; //curOff = 2943
				func_248(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					func_280(PLAYER::PLAYER_PED_ID(), GET_HASH_KEY("UPGRADE_OFFHAND_HOLSTER"), 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_281(&iVar9, 0))
				{
					func_255(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				Jump @4452; //curOff = 3036
				if (func_252() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					func_280(PLAYER::PLAYER_PED_ID(), GET_HASH_KEY("UPGRADE_BANDOLIER"), 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				Jump @4452; //curOff = 3103
				Jump @4452; //curOff = 3106
				func_234(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_282();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_283();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_284();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_285();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_286();
				Jump @4452; //curOff = 3357
				bParam2 = true;
				bVar4 = true;
				Jump @4452; //curOff = 3366
				func_287(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_01"), 0);
				func_288(499813453, 0);
				func_289(1);
				Jump @4452; //curOff = 3399
				func_287(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_02"), 0);
				func_288(499813453, 0);
				func_289(2);
				Jump @4452; //curOff = 3432
				func_287(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_03"), 0);
				func_288(499813453, 0);
				func_289(4);
				Jump @4452; //curOff = 3465
				func_287(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_05"), 0);
				func_288(666607663, 0);
				func_290(1);
				Jump @4452; //curOff = 3498
				func_287(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_06"), 0);
				func_288(666607663, 0);
				func_290(2);
				Jump @4452; //curOff = 3531
				func_287(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_07"), 0);
				func_288(666607663, 0);
				func_290(4);
				Jump @4452; //curOff = 3564
				func_287(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_09"), 0);
				func_288(-220219788, 0);
				func_291(1);
				Jump @4452; //curOff = 3597
				func_287(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_10"), 0);
				func_288(-220219788, 0);
				func_291(2);
				Jump @4452; //curOff = 3630
				func_287(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_11"), 0);
				func_288(-220219788, 0);
				func_291(4);
				Jump @4452; //curOff = 3663
				func_287(218622660, GET_HASH_KEY("TREASURE_HUNT_LOOT_13"), 0);
				func_288(218622660, 0);
				func_292(1);
				Jump @4452; //curOff = 3696
				func_287(218622660, GET_HASH_KEY("TREASURE_HUNT_LOOT_14"), 0);
				func_288(218622660, 0);
				func_292(2);
				Jump @4452; //curOff = 3729
				func_287(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_16"), 0);
				func_288(390004462, 0);
				func_293(1);
				Jump @4452; //curOff = 3762
				func_287(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_17"), 0);
				func_288(390004462, 0);
				func_293(2);
				Jump @4452; //curOff = 3795
				func_287(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_18"), 0);
				func_288(390004462, 0);
				func_293(4);
				Jump @4452; //curOff = 3828
				func_287(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_20"), 0);
				func_288(6410548, 0);
				func_294(1);
				Jump @4452; //curOff = 3859
				func_287(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_21"), 0);
				func_288(6410548, 0);
				func_294(2);
				Jump @4452; //curOff = 3890
				func_287(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_22"), 0);
				func_288(6410548, 0);
				func_294(4);
				Jump @4452; //curOff = 3921
				func_287(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_23"), 0);
				func_288(6410548, 0);
				func_294(8);
				Jump @4452; //curOff = 3953
				func_296(242, func_295(GET_HASH_KEY("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				Jump @4452; //curOff = 3972
				func_296(240, func_295(GET_HASH_KEY("CONSUMABLE_GINSENG_ELIXIER")), 0);
				Jump @4452; //curOff = 3991
				func_296(241, func_295(GET_HASH_KEY("CONSUMABLE_VALERIAN_ROOT")), 0);
				Jump @4452; //curOff = 4010
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_297(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4452; //curOff = 4057
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_297(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4452; //curOff = 4104
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_297(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4452; //curOff = 4151
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_297(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4452; //curOff = 4198
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_297(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4452; //curOff = 4245
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_297(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4452; //curOff = 4292
				func_234(488, 0);
				Jump @4452; //curOff = 4303
				func_234(491, 0);
				Jump @4452; //curOff = 4314
				func_234(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_68(func_298(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_68(func_299(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				Jump @4452; //curOff = 4387
				if (func_247(1))
				{
					func_234(487, 0);
				}
				Jump @4452; //curOff = 4406
				func_234(486, 0);
				Jump @4452; //curOff = 4417
				if (func_252() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				Jump @4452; //curOff = 4435
				func_234(496, 0);
			}
			if (!bVar4)
			{
				if (iVar0 <= 0)
				{
					return false;
				}
				iVar10 = iParam0;
				func_300(&iVar10);
				if (!func_301(iVar10, iVar0, iParam5))
				{
					return false;
				}
				else if (!func_254(0))
				{
					return true;
				}
				if (func_244(iParam0) == GET_HASH_KEY("CLOTHING"))
				{
					func_302(iParam0);
				}
				if (func_245(iParam0, -1979000645))
				{
					func_303(iParam0);
				}
			}
			else if (iVar2 != 0)
			{
				if (func_254(0))
				{
					Var11.f_1 = 10;
					Var11.f_12 = 10;
					MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
					iVar34 = 0;
					while (iVar34 < Var11)
					{
						func_68(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
						iVar34++;
					}
				}
				else
				{
					func_304(iVar2, 0);
				}
			}
			Var35 = { func_305(iParam0) };
			if (STATS::STAT_ID_IS_VALID(&Var35))
			{
				STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
			}
			func_306(iParam0);
			if (fParam6 > 0f)
			{
				if (func_245(iParam0, -839724752))
				{
					func_307(iParam0, fParam6);
				}
			}
			else if (!bParam2)
			{
				bVar37 = iParam5 == 1248274121;
				func_308(iParam0, iVar0, 0, bVar37, 0);
			}
			return true;
		}

void func_69(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	float fVar0;

	if (Global_1935630.f_12)
	{
		return;
	}
	fVar0 = 1f;
	switch (iParam0)
	{
		case GET_HASH_KEY("MOTIONSTATE_IDLE"):
		case GET_HASH_KEY("MOTIONSTATE_CROUCH_IDLE"):
			fVar0 = 0f;
			break;
		case -1415276238:
		case 1823606944:
			fVar0 = 1.5f;
			break;
		case GET_HASH_KEY("MOTIONSTATE_RUN"):
		case GET_HASH_KEY("MOTIONSTATE_CROUCH_RUN"):
			fVar0 = 2f;
			break;
		case GET_HASH_KEY("MOTIONSTATE_SPRINT"):
			fVar0 = 3f;
			break;
		case GET_HASH_KEY("MOTIONSTATE_WALK"):
		case GET_HASH_KEY("MOTIONSTATE_CROUCH_WALK"):
			break;
	}
	PED::FORCE_PED_MOTION_STATE(Global_35, iParam0, bParam2, iParam3, false);
	if (bParam4)
	{
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), fVar0, iParam1, ENTITY::GET_ENTITY_HEADING(Global_35), bParam6, bParam7);
	}
	else
	{
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), fVar0, iParam1, fParam5, bParam6, bParam7);
	}
}

bool func_70(char[4] cParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_348)))
	{
		if (!func_198(&(cParam0->f_352), cParam0->f_348, 0, 0))
		{
			return false;
		}
	}
	else
	{
		func_75(1, 1, 1);
		func_309(cParam0);
		if (!func_310(cParam0))
		{
			return false;
		}
		if (func_311())
		{
			func_312(1);
			return false;
		}
	}
	if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 32))
	{
		return false;
	}
	return true;
}

bool func_71(char* sParam0)
{
	return (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && ANIMSCENE::_0x5D7BFDA2290B4E39(sParam0));
}

void func_72(var uParam0, var uParam1)
{
	struct<8> Var0;

	if (func_313(uParam1, 32768))
	{
		Var0 = { func_314(uParam0) };
		func_315(uParam0, &Var0);
		if (func_313(uParam1, 131072))
		{
			func_316(uParam0, 268435456);
			if (func_159(uParam0->f_289))
			{
				uParam0->f_289 = { func_317(uParam1, uParam1->f_1450) };
			}
			if (func_159(uParam0->f_286))
			{
				uParam0->f_286 = { func_317(uParam1, uParam1->f_1450) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_286, &(uParam0->f_286.f_2), false);
				uParam0->f_286.f_2 = (uParam0->f_286.f_2 + 0.5f);
			}
		}
		if (func_313(uParam1, 268435456))
		{
			func_318(&(uParam0->f_284), 16384);
		}
	}
	else if (func_313(uParam1, 524288))
	{
		func_316(uParam0, 67108864);
		func_319(uParam1, 524288);
	}
	if (func_320(uParam1, 128))
	{
		func_316(uParam0, 32);
	}
	if (uParam1->f_1669 != 0)
	{
		uParam0->f_296 = uParam1->f_1669;
		if (uParam1->f_1450 >= 0 && func_321(&(uParam1->f_782[uParam1->f_1450 /*41*/]), 256))
		{
			func_318(&(uParam0->f_284), 524288);
		}
	}
	if (*uParam1 == 0 && CAM::_0x927B810E43E99932(&(uParam1->f_1458)))
	{
		MISC::_COPY_MEMORY(&(uParam0->f_297), &(uParam1->f_1458), 16);
	}
}

int func_73(char[4] cParam0)
{
	char cVar0[32];

	StringCopy(&cVar0, cParam0->f_346, 32);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 1;
	}
	return func_322(cVar0, &(cParam0->f_32), cParam0);
}

void func_74(char[4] cParam0)
{
}

void func_75(int iParam0, int iParam1, int iParam2)
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

void func_76(char[4] cParam0, bool bParam1)
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
	if (func_71(cParam0->f_346))
	{
		func_323(&(cParam0->f_32));
	}
	else
	{
		func_324(cParam0);
	}
	func_325(&(cParam0->f_32));
	StringCopy(&(cParam0->f_348), "", 32);
}

int func_77(char[4] cParam0)
{
	TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_90[0 /*34*/], 1000, 0, 51, 0);
	return 8;
}

bool func_78(char[4] cParam0)
{
	return false;
}

void func_79(char[4] cParam0)
{
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
}

void func_80(char[4] cParam0)
{
}

int func_81(char[4] cParam0)
{
	int iVar0;
	int iVar10;
	int iVar11;
	int iVar12;

	if (!func_49(&uLocal_331))
	{
		if (func_326(cParam0))
		{
			func_50(&uLocal_331, 0);
		}
	}
	else if (func_327(&uLocal_331, 1.3f))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 26, false);
		return 9;
	}
	if (func_328(Global_35, iLocal_302, 1, 0) || func_328(Global_35, iLocal_303, 1, 0))
	{
		if (func_329(229))
		{
			func_330(229);
		}
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
	switch (func_213())
	{
		case 0:
			func_331(1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 8, 0, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 3, 0, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 19, 0, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 15, 0, 1);
			if (!func_332(33554432))
			{
				WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
				TASK::TASK_SWAP_WEAPON(Global_35, 0, 1, 0, 0);
				func_222(33554432);
			}
			if ((((iLocal_211 >= 2 || iVar0 == 19) || iVar0 == 7) && !func_333(1)) && !func_332(4096))
			{
				func_334(&(cParam0->f_2106), "LSHSS_IG1_SILVR", 0);
				func_222(4096);
			}
			if (func_335())
			{
				if (func_337(func_336(906448125, 0), Global_35, 1, 1) > 1f && !func_338(906448125))
				{
					func_125(906448125, 0, 0);
					func_136(906448125, 1, 0f, 0, 0, 0f, 0, 0);
				}
				if (func_337(func_336(1189146288, 0), Global_35, 1, 1) > 1f && !func_338(1189146288))
				{
					func_125(1189146288, 0, 0);
					func_136(1189146288, 1, 0f, 0, 0, 0f, 0, 0);
				}
			}
			if (!func_67())
			{
				return 8;
			}
			if ((func_328(Global_35, iLocal_302, 1, 0) || func_328(Global_35, iLocal_303, 1, 0)) && !func_339("LSHSS_COWER"))
			{
				PED::SET_PED_LASSO_HOGTIE_FLAG(Local_90[0 /*34*/], 0, true);
				PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "OnFootIntimidateForced", true, 5000);
				func_340(&iLocal_218, Local_90[0 /*34*/]);
				func_341(&(Local_279[0 /*17*/]));
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				if (bLocal_208 == 0)
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_90[0 /*34*/], true);
				}
				PED::SET_PED_DEFENSIVE_AREA_VOLUME(Local_90[0 /*34*/], iLocal_304, 1, false, 0);
				PED::SET_PED_DEFENSIVE_AREA_VOLUME(Global_35, iLocal_304, 1, false, 0);
				AUDIO::_0xAC84686C06184B0D("Beat_Up_Scene", "LSHSS_Scenes");
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_90[0 /*34*/], 5, false);
				AUDIO::_0x6339C1EA3979B5F7("Investigate_Scene", "LSHSS_Scenes");
				AUDIO::PREPARE_MUSIC_EVENT("LSHSS_INTERROGATION");
				MAP::REMOVE_BLIP(&iLocal_160);
				if (!MAP::DOES_BLIP_EXIST(iLocal_160))
				{
					func_342(&iLocal_160, Local_90[0 /*34*/], GET_HASH_KEY("BLIP_STYLE_ENEMY"), 0);
				}
				PED::_0xB8DE69D9473B7593(Local_90[0 /*34*/], 3);
				PED::SET_PED_CONFIG_FLAG(Global_35, 26, false);
				PED::SET_PED_CONFIG_FLAG(Global_35, 334, true);
				PED::SET_PED_CONFIG_FLAG(Global_35, 360, true);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 359, true);
				PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_WROBEL"));
				func_64(1);
			}
			break;
		case 1:
			if ((((iLocal_211 >= 2 || iVar0 == 19) || iVar0 == 7) && !func_333(1)) && !func_332(4096))
			{
				func_334(&(cParam0->f_2106), "LSHSS_IG1_SILVR", 0);
				func_222(4096);
			}
			func_331(0);
			if (func_335())
			{
				if (func_337(func_336(906448125, 0), Global_35, 1, 1) > 1f && !func_338(906448125))
				{
					func_125(906448125, 0, 0);
					func_136(906448125, 1, 0f, 0, 0, 0f, 0, 0);
				}
				if (func_337(func_336(1189146288, 0), Global_35, 1, 1) > 1f && !func_338(1189146288))
				{
					func_125(1189146288, 0, 0);
					func_136(1189146288, 1, 0f, 0, 0, 0f, 0, 0);
				}
			}
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 8, 0, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 3, 0, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 19, 0, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 15, 0, 1);
			if (func_335())
			{
				AUDIO::TRIGGER_MUSIC_EVENT("LSHSS_INTERROGATION");
				func_343(Local_90[0 /*34*/], 1);
				WEAPON::_HOLSTER_PED_WEAPONS(Global_35, false, false, false, false);
				func_89("SELL_BEAT", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_344(cParam0, "SELL_BEAT", 0f, 0f, 0f);
				func_64(2);
			}
			break;
		case 2:
			if ((((iLocal_211 >= 2 || iVar0 == 19) || iVar0 == 7) && !func_333(1)) && !func_332(4096))
			{
				func_334(&(cParam0->f_2106), "LSHSS_IG1_SILVR", 0);
				func_222(4096);
			}
			func_331(0);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 8, 0, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 3, 0, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 19, 0, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 15, 0, 1);
			if (func_346(&(uLocal_305[5]), func_345(5), 0, 0))
			{
				WEAPON::_HOLSTER_PED_WEAPONS(Global_35, false, false, false, false);
				func_64(3);
			}
			break;
		case 3:
			if (!PED::_0x57779B55B83E2BEA(Local_90[0 /*34*/]))
			{
			}
			else if (PED::_0x57779B55B83E2BEA(Local_90[0 /*34*/]))
			{
				func_50(&uLocal_176, 1);
				func_64(4);
			}
			break;
		case 4:
			PED::_0xB8DE69D9473B7593(Global_35, 3);
			PED::_0xB8DE69D9473B7593(Local_90[0 /*34*/], 3);
			PED::_0x7C10221CE718AA72(Local_90[0 /*34*/], 11);
			PED::_0xB8DE69D9473B7593(Global_35, 4);
			if ((iLocal_211 >= 11 && !func_347()) && PED::GET_PED_IS_GRAPPLING(Global_35))
			{
				if (iLocal_359 == 0)
				{
					PED::_0x789DABD18E9024DB(Global_35, 32768, 0);
					iLocal_359 = 1;
				}
			}
			if (func_335())
			{
				if (func_337(func_336(906448125, 0), Global_35, 1, 1) > 1f && !func_338(906448125))
				{
					func_125(906448125, 0, 0);
					func_136(906448125, 1, 0f, 0, 0, 0f, 0, 0);
				}
				if (func_337(func_336(1189146288, 0), Global_35, 1, 1) > 1f && !func_338(1189146288))
				{
					func_125(1189146288, 0, 0);
					func_136(1189146288, 1, 0f, 0, 0, 0f, 0, 0);
				}
			}
			PED::_0x789DABD18E9024DB(Global_35, 8, 0);
			func_331(0);
			if (func_333(1))
			{
				func_348("LSHSS_HIT3");
				func_348("LSHSS_HIT1");
				func_348("LSHSS_IG1_SILVR");
				func_348("LSHSS_PAIN");
			}
			else if (iLocal_211 >= 11)
			{
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_GRAPPLE_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_ATTACK"), true);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 7, 0, 0);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 7, 2, 1);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 20, 2, 1);
			}
			else
			{
				PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_GRAPPLE_ATTACK"), true);
				PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_ATTACK"), true);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 7, 0, 0);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 7, 2, 0);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 20, 2, 0);
			}
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 8, 0, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 3, 0, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 19, 0, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 15, 0, 1);
			PED::SET_PED_RESET_FLAG(Local_90[0 /*34*/], 49, true);
			PED::SET_PED_RESET_FLAG(Global_35, 88, true);
			if (func_52(&uLocal_176) > 2000)
			{
				if (func_347())
				{
					iLocal_211++;
					func_50(&uLocal_176, 1);
				}
				if (SCRIPTS::GET_EVENT_EXISTS(0, GET_HASH_KEY("EVENT_PLAYER_PROMPT_TRIGGERED")))
				{
					SCRIPTS::GET_EVENT_DATA(0, iVar10, &iVar0, 10);
				}
			}
			if (iLocal_211 < 11)
			{
				if (!PED::_0x57779B55B83E2BEA(Local_90[0 /*34*/]))
				{
					TASK::_TASK_INTIMIDATED_2(Local_90[0 /*34*/], Global_35, 0, 1, 1, 1, 0, 1, 196610);
				}
			}
			if (((iLocal_211 >= 11 && !func_347()) && !PED::GET_PED_IS_GRAPPLING(Global_35)) && !func_333(1))
			{
				switch (iLocal_159)
				{
					case 0:
						func_84();
						func_349("SELL_BEAT", 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_90[0 /*34*/], true);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_90[0 /*34*/], false);
						AUDIO::PREPARE_MUSIC_EVENT("LSHSS_LOOT");
						PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_ATTACK"), true);
						PED::_0x923583741DC87BCE(Local_90[0 /*34*/], "Default");
						PED::_0x89F5E7ADECCCB49C(Local_90[0 /*34*/], "Scared");
						PED::REMOVE_PED_DEFENSIVE_AREA(Local_90[0 /*34*/], false);
						PED::REMOVE_PED_DEFENSIVE_AREA(Global_35, false);
						PED::_0x789DABD18E9024DB(Global_35, 28, 0);
						PED::SET_PED_CONFIG_FLAG(Global_35, 26, true);
						PED::SET_PED_CONFIG_FLAG(Global_35, 334, false);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 431, false);
						PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 178, false);
						PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 225, false);
						PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 222, false);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_305[5], "Wrobel", Local_90[0 /*34*/], 0);
						iLocal_159 = 1;
						break;
					case 1:
						if (!(VOLUME::IS_POINT_IN_VOLUME(iLocal_304, ENTITY::GET_ENTITY_COORDS(Global_35, true, false)) && VOLUME::IS_POINT_IN_VOLUME(iLocal_304, ENTITY::GET_ENTITY_COORDS(Local_90[0 /*34*/], true, false))))
						{
							iLocal_159 = 2;
						}
						else
						{
							iLocal_159 = 5;
						}
						break;
					case 2:
						func_50(&uLocal_185, 0);
						iLocal_159 = 3;
						break;
					case 3:
						func_50(&uLocal_185, 0);
						if (func_350(Global_35, VOLUME::_GET_VOLUME_COORDS(iLocal_304), 1) < 1.5f || func_350(Local_90[0 /*34*/], VOLUME::_GET_VOLUME_COORDS(iLocal_304), 1) < 1.5f)
						{
							iLocal_159 = 4;
						}
						else
						{
							iLocal_159 = 5;
						}
						break;
					case 4:
						func_50(&uLocal_185, 0);
						iLocal_159 = 5;
						break;
					case 5:
						func_50(&uLocal_185, 0);
						if (!func_332(4194304))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Local_90[0 /*34*/], 1000, -1f, -1f, -1f);
							func_351();
							func_222(4194304);
						}
						else if (func_337(Global_35, Local_90[0 /*34*/], 1, 1) < 3f && PED::IS_PED_FACING_PED(Global_35, Local_90[0 /*34*/], 20f))
						{
							if (!func_333(1) || func_352(&uLocal_185) > 0.2f)
							{
								ANIMSCENE::START_ANIM_SCENE(uLocal_305[5]);
								ANIMSCENE::SET_ANIM_SCENE_RATE(uLocal_305[5], 1.3f);
								PED::SET_PED_CONFIG_FLAG(Global_35, 26, true);
								if (VOLUME::DOES_VOLUME_EXIST(iLocal_304))
								{
									VOLUME::_DELETE_VOLUME(iLocal_304);
								}
								TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_90[0 /*34*/], -1, 0, 51, 0);
								PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_TOGGLE_HOLSTER"), true);
								PED::SET_PED_CAN_BE_TARGETTED(Local_90[0 /*34*/], false);
								func_334(&(cParam0->f_2106), "LSHSS_IG1_POST", 0);
								func_65(*cParam0, func_41(1), func_41(2), 1, 2);
								iLocal_358 = VOLUME::_0x0EB78C2B156635B1(GET_HASH_KEY("VOLCYLINDER"), ENTITY::GET_ENTITY_COORDS(Local_90[0 /*34*/], true, false), 0f, 0f, 0f, 0.75f, 0.75f, 0.75f);
								PED::_SET_PED_BLACKBOARD_BOOL(Local_90[0 /*34*/], "injury", true, -1);
								func_64(5);
							}
						}
						break;
				}
				return 8;
			}
			if ((((iLocal_211 >= 2 || iVar0 == 19) || iVar0 == 7) && !func_333(1)) && !func_332(4096))
			{
				func_334(&(cParam0->f_2106), "LSHSS_IG1_SILVR", 0);
				func_222(4096);
			}
			if ((((iLocal_211 >= 5 || iVar0 == 19) || iVar0 == 7) && !func_333(1)) && !func_332(8192))
			{
				iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
				if (iVar11 == 0)
				{
					func_334(&(cParam0->f_2106), "LSHSS_HIT1", 0);
				}
				else
				{
					func_334(&(cParam0->f_2106), "LSHSS_HIT3", 0);
				}
				func_222(8192);
			}
			if (func_332(8192) && !func_333(1))
			{
				if (iVar0 == 19 || iVar0 == 7)
				{
					iLocal_211 = 11;
				}
			}
			if (iLocal_211 >= iLocal_212)
			{
				iLocal_212 += 2;
				if (iLocal_211 >= 11)
				{
					iLocal_212 = 11;
				}
				if (!func_333(1) && func_347())
				{
					func_50(&uLocal_188, 0);
					if (func_353(&uLocal_188, 1f))
					{
						func_334(&(cParam0->f_2106), "LSHSS_PAIN", 0);
					}
				}
			}
			break;
		case 5:
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_GRAPPLE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_ATTACK"), false);
			VOLUME::_SET_VOLUME_COORDS(iLocal_358, ENTITY::GET_ENTITY_COORDS(Local_90[0 /*34*/], true, false));
			if (func_346(&(uLocal_305[6]), func_345(6), 0, 0))
			{
				if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uLocal_305[5]) > 0.35f)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				}
				if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uLocal_305[5]) > 0.956f)
				{
					ANIMSCENE::RESET_ANIM_SCENE(uLocal_305[5], 0);
				}
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uLocal_305[5], false))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_326))
					{
						iLocal_326 = OBJECT::CREATE_OBJECT(TASK::_0xE47DD64B9F02677D(GET_HASH_KEY("PROVISION_GOLDRING")), -611.1f, -30.7f, 85.65f, true, true, false, false, false);
					}
					PED::SET_PED_CONFIG_FLAG(Global_35, 26, true);
					iLocal_215 = func_227(GET_HASH_KEY("PROVISION_GOLDRING"), 0, 0);
					iLocal_216 = func_227(GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_CHEAP"), 0, 0);
					iLocal_217 = func_227(GET_HASH_KEY("PROVISION_WATCH"), 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					PED::SET_PED_CAN_BE_TARGETTED(Local_90[0 /*34*/], true);
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					AUDIO::TRIGGER_MUSIC_EVENT("LSHSS_LOOT");
					AUDIO::_0xAC84686C06184B0D("Loot_House_Scene", "LSHSS_Scenes");
					func_354(Local_90[0 /*34*/], 50);
					PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 336, true);
					PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 297, false);
					PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 225, false);
					PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 222, false);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_305[6], "ARTHUR", Global_35, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_305[6], "Wrobel", Local_90[0 /*34*/], 0);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_90[0 /*34*/], false);
					ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uLocal_305[6], "pl_Dialogue_01_arthur");
					ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uLocal_305[6], "pl_Dialogue_02_arthur");
					ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uLocal_305[6], "pl_Dialogue_01_wrobel");
					ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uLocal_305[6], "pl_Dlg_01");
					ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uLocal_305[6], "pl_Dlg_02");
					ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uLocal_305[6], "pl_Dlg_03");
					ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uLocal_305[6], "pl_Dlg_04");
					ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uLocal_305[6], "pl_enter");
					ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uLocal_305[6], "pl_Idle_01");
					ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uLocal_305[6], "pl_Idle_02");
					ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uLocal_305[6], "pl_Reveal_Gun");
					ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uLocal_305[6], "pl_Reveal_Shove");
					if (TASK::DOES_SCENARIO_POINT_EXIST(Local_19[0 /*10*/].f_9))
					{
						TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[0 /*10*/].f_9, true);
					}
					if (TASK::DOES_SCENARIO_POINT_EXIST(Local_19[1 /*10*/].f_9))
					{
						TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[1 /*10*/].f_9, true);
					}
					if (TASK::DOES_SCENARIO_POINT_EXIST(Local_19[2 /*10*/].f_9))
					{
						TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[2 /*10*/].f_9, true);
					}
					if (TASK::DOES_SCENARIO_POINT_EXIST(Local_19[3 /*10*/].f_9))
					{
						TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[3 /*10*/].f_9, true);
					}
					if (TASK::DOES_SCENARIO_POINT_EXIST(Local_19[4 /*10*/].f_9))
					{
						TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[4 /*10*/].f_9, true);
					}
					if (TASK::DOES_SCENARIO_POINT_EXIST(Local_19[5 /*10*/].f_9))
					{
						TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[5 /*10*/].f_9, true);
					}
					if (TASK::DOES_SCENARIO_POINT_EXIST(Local_19[6 /*10*/].f_9))
					{
						TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[6 /*10*/].f_9, true);
					}
					PED::_0x949B2F9ED2917F5D(Local_90[0 /*34*/], 3);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					if (((Local_19[0 /*10*/] == 0 || Local_19[1 /*10*/] == 0) || Local_19[2 /*10*/] == 0) || Local_19[3 /*10*/] == 0)
					{
						iLocal_165 = MAP::_BLIP_ADD_FOR_AREA(1247852480, -612.7f, -29.5f, 86f, 10f, 15f, 0f, 19);
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_160))
					{
						MAP::REMOVE_BLIP(&iLocal_160);
					}
					func_136(295238741, 0, 0f, 0, 0, 0f, 0, 0);
					func_136(-3516232, 0, 0f, 0, 0, 0f, 0, 0);
					bLocal_297 = true;
					PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOT"), true);
					PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOT2"), true);
					PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_PICKUP"), true);
					PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_ATTACK"), true);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(Local_90[0 /*34*/]);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_90[0 /*34*/], true);
					PED::SET_PED_CAN_BE_TARGETTED(Local_90[0 /*34*/], true);
					TASK::CLEAR_PED_TASKS(Local_90[0 /*34*/], true, false);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_90[0 /*34*/], -611.1855f, -29.7006f, 85.97f, 1f, 9000, 0.25f, 514, 179f);
					func_125(138361190, 0, 0);
					func_355(138361190, 0);
					OBJECT::_0x1BC47A9DEDC8DF5D(138361190, 0);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(138361190, 0f, false);
					OBJECT::_0x3A77DAE8B4FD7586(138361190, 1);
					func_125(365712512, 0, 0);
					func_355(365712512, 0);
					OBJECT::_0x1BC47A9DEDC8DF5D(365712512, 0);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(365712512, 0f, false);
					OBJECT::_0x3A77DAE8B4FD7586(365712512, 1);
					func_136(906448125, 0, 0, 0, 1, 0, 0, 0);
					func_136(1189146288, 0, 0, 0, 1, 0, 0, 0);
					func_64(7);
				}
			}
			break;
		case 7:
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_GRAPPLE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_ATTACK"), false);
			VOLUME::_SET_VOLUME_COORDS(iLocal_358, ENTITY::GET_ENTITY_COORDS(Local_90[0 /*34*/], true, false));
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
			if (iLocal_209 == 0)
			{
				func_50(&uLocal_182, 0);
				if (func_327(&uLocal_182, 1.5f))
				{
					func_344(cParam0, "SELL_LOOT", 0f, 0f, 0f);
					func_356("SELL_LOOT", 7500, 0, 0, 0, 1);
					iLocal_209 = 1;
				}
			}
			if ((!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uLocal_305[6], false) && ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_305[6], "pl_enter")) && (!func_357(Local_90[0 /*34*/], 713668775) || func_350(Local_90[0 /*34*/], -611.1855f, -29.7006f, 85.97f, 1) < 0.3f))
			{
				func_358(iLocal_358);
				func_136(1189146288, 0, 0f, 0, 0, 0f, 0, 0);
				func_136(906448125, 0, 0f, 0, 0, 0f, 0, 0);
				ANIMSCENE::START_ANIM_SCENE(uLocal_305[6]);
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uLocal_305[6], "pl_enter", true);
				func_136(906448125, 0, 0, 0, 1, 0, 0, 0);
				func_136(1189146288, 0, 0, 0, 1, 0, 0, 0);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 297, true);
				PED::SET_PED_CAN_BE_TARGETTED(Local_90[0 /*34*/], true);
				MISC::_0xE98D55C5983F2509(Local_90[0 /*34*/]);
				func_359(Local_90[0 /*34*/], 1);
				func_64(6);
			}
			break;
		case 6:
			func_50(&uLocal_179, 0);
			if (ANIMSCENE::_0x1F0E401031E20146(uLocal_305[6], "pl_enter"))
			{
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_GRAPPLE_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_ATTACK"), false);
			}
			if (iLocal_209 == 0)
			{
				func_50(&uLocal_182, 0);
				if (func_327(&uLocal_182, 1.5f))
				{
					func_344(cParam0, "SELL_LOOT", 0f, 0f, 0f);
					func_356("SELL_LOOT", 7500, 0, 0, 0, 1);
					iLocal_209 = 1;
				}
			}
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_ATTACK"), true);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
			if (ANIMSCENE::_0x1F0E401031E20146(uLocal_305[6], "pl_enter") && ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uLocal_305[6], "s_IDLE_01", true))
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uLocal_305[6], "pl_Idle_01", true);
			}
			if (func_360(cParam0))
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 26, false);
				PED::_0x949B2F9ED2917F5D(Local_90[0 /*34*/], 3);
				PED::_0x57F35552E771BE9D(Local_90[0 /*34*/], 11);
				PED::_SET_PED_BLACKBOARD_BOOL(Local_90[0 /*34*/], "injury", false, -1);
				func_334(&(cParam0->f_2106), "LSHSS_IG1_TRUST", 0);
				PED::SET_PED_CONFIG_FLAG(Global_35, 26, false);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 509, true);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 315, false);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 130, false);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 301, false);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 331, false);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 413, true);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 330, true);
				func_64(8);
			}
			break;
		case 8:
			if (!func_357(Local_90[0 /*34*/], 713668775))
			{
				if (func_361(Local_90[0 /*34*/], 1, 1, 0, 0, 0))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iVar12);
					TASK::OPEN_SEQUENCE_TASK(&iVar12);
					TASK::TASK_COWER(0, -1, Global_35, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar12);
					TASK::TASK_PERFORM_SEQUENCE(Local_90[0 /*34*/], iVar12);
					TASK::CLEAR_SEQUENCE_TASK(&iVar12);
				}
				else if (func_357(Local_90[0 /*34*/], 242628503))
				{
					TASK::CLEAR_PED_TASKS(Local_90[0 /*34*/], true, false);
				}
			}
			if (bLocal_205 == 1 && bLocal_206 == 1)
			{
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 297, false);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 3f);
				PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_ATTACK"), true);
				PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_AIM"), true);
				func_64(10);
			}
			break;
		case 10:
			if (func_346(&(uLocal_305[7]), func_345(7), 0, 0))
			{
				func_205(&(cParam0->f_2277), 0, 0, 1, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_305[7], "Wrobel", Local_90[0 /*34*/], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_305[7], "FrontDoor", func_336(1189146288, 0), 0);
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uLocal_305[7], "pl_action");
				AUDIO::_0xAC84686C06184B0D("Investigate_Barn_Scene", "LSHSS_Scenes");
				func_64(11);
			}
			break;
		case 11:
			PED::_0x949B2F9ED2917F5D(Global_35, 0);
			PED::_0x949B2F9ED2917F5D(Global_35, 1);
			PED::_0x949B2F9ED2917F5D(Global_35, 2);
			break;
	}
	if (!func_67())
	{
		return 8;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_90[0 /*34*/]) && iLocal_207 == 0)
	{
		func_362(3, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
		iLocal_207 = 1;
	}
	return 8;
}

void func_82(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_363(iParam0))
	{
		return;
	}
	else if (!func_100(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (!func_364(1))
	{
		func_365(1);
	}
	func_110(iParam0);
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
		Global_40.f_9422[2 /*7*/] = func_366();
		func_367(&(Global_40.f_9422[2 /*7*/]), 0, 0, 0, 3, 0, 0, 0);
	}
	func_368(Global_1392626[iParam0 /*32*/].f_3, bParam2, bParam1, 0, 1);
	if (Global_1392626[iParam0 /*32*/].f_7 != -1)
	{
		func_369(Global_1392626[iParam0 /*32*/].f_7);
	}
}

void func_83(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_370(0))
	{
		if (func_371(0))
		{
			func_372(0);
		}
	}
	if (func_370(1))
	{
		if (func_371(1))
		{
			func_372(1);
		}
	}
}

void func_84()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_85(bool bParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_252() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13) && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_373(iVar0, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = iVar0;
		Global_1898077.f_8 = func_374();
		Global_1898077.f_9 = func_375(Global_1894899.f_2);
		func_376(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	Global_1898077.f_2 = 0;
}

void func_86(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_87(int iParam0)
{
	return func_88(Global_1392626[iParam0 /*32*/].f_8, 64);
}

bool func_88(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

var func_89(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 1);
	}
	if (Global_1572887.f_12 != -1)
	{
		return func_356(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_377(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_356(sVar0, iParam1, 0, 0, 1, 1);
}

void func_90()
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

void func_91()
{
	Global_1572864.f_8 = -1;
	Global_1572864.f_9 = -1;
	Global_1572864.f_10 = -1;
	func_214(0);
	func_378(0);
	func_379(0);
	func_380(0);
	func_381(0);
	func_382(1f);
}

void func_92(bool bParam0, bool bParam1)
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
		func_383(0);
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

void func_93(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_94()
{
	return false;
}

void func_95(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_384(Global_1347343.f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_93(&(Global_1347343.f_11), 64);
	}
	if (bParam4)
	{
		func_93(&(Global_1347343.f_11), 16384);
	}
	if (func_385() >= 2)
	{
		if (!func_384(Global_1347343.f_11, 16384))
		{
			func_93(&(Global_1347343.f_11), 8);
		}
		func_382(0.88f);
	}
	StringCopy(&(Global_1347343.f_3), sParam2, 64);
	Global_1347343.f_2 = uParam0;
	Global_1347343 = 0;
	Global_1347343.f_1 = iParam1;
	func_184(&Global_1935630, 2048);
	func_386(bParam5);
}

void func_96(int iParam0)
{
	if (!func_363(iParam0))
	{
		return;
	}
	else if (!func_100(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	func_110(iParam0);
	func_129(&(Global_1392626[iParam0 /*32*/].f_8), 1);
	if (iParam0 == 2)
	{
		Global_40.f_9422[2 /*7*/] = func_366();
		func_367(&(Global_40.f_9422[2 /*7*/]), 0, 0, 0, 3, 0, 0, 0);
	}
	Global_40.f_9052.f_1[iParam0] = func_366();
	func_367(&(Global_40.f_9052.f_1[iParam0]), 0, 0, 2, 0, 0, 0, 0);
	func_387(Global_1392626[iParam0 /*32*/].f_3);
	func_388(Global_1392626[iParam0 /*32*/].f_3, 0);
}

void func_97(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	char* sVar3;

	if (func_154(iParam0, 4))
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
	if (func_154(iParam0, 4))
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
			Global_1392626[iParam0 /*32*/].f_23 = func_389(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 4096 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_MEMORY", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_389(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 2048 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_WANTED_REGION", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_389(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 16384 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_PREV_WANTED", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_389(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 8192 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_COMBAT", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_389(sVar3, 10000, 0, 0, 0, 1);
		}
		func_29(&(Global_1392626[iParam0 /*32*/].f_9), 8192);
	}
}

bool func_98(int iParam0, bool bParam1, bool bParam2)
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
		if (func_390())
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
		iVar0 = func_391(Global_1898164.f_1[0 /*5*/]);
		if (func_392(iVar0) && func_393(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_100(Global_1898164.f_1[0 /*5*/]))
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

int func_99(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

bool func_100(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_101()
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

float func_102(var uParam0)
{
	return 0f;
}

bool func_103(char[4] cParam0)
{
	int iVar0;

	if (func_335())
	{
		func_50(&uLocal_360, 0);
		if (func_327(&uLocal_360, 20f))
		{
			func_89("SELL_LEAVE", 7500, 0, 0, 0, 0, -1, -1, 0);
		}
	}
	if (func_328(Global_35, iLocal_302, 1, 0) || func_328(Global_35, iLocal_303, 1, 0))
	{
		if (func_329(229))
		{
			func_330(229);
		}
	}
	func_326(cParam0);
	iVar0 = func_108(cParam0);
	if (iVar0 == 0 && !func_335())
	{
		if (func_337(func_336(906448125, 0), Global_35, 1, 1) > 10f && !func_338(906448125))
		{
			func_125(906448125, 0, 0);
			func_136(906448125, 1, 0f, 0, 0, 0f, 0, 0);
		}
		if (func_337(func_336(1189146288, 0), Global_35, 1, 1) > 10f && !func_338(1189146288))
		{
			func_125(1189146288, 0, 0);
			func_136(1189146288, 1, 0f, 0, 0, 0f, 0, 0);
		}
		if (func_338(295238741))
		{
			func_136(295238741, 0, 0f, 0, 0, 0f, 0, 0);
		}
		if (func_338(-3516232))
		{
			func_136(-3516232, 0, 0f, 0, 0, 0f, 0, 0);
		}
	}
	if (func_134(GET_HASH_KEY("PROVISION_GOLDRING"), iLocal_215 + 1, 0))
	{
		func_135(GET_HASH_KEY("PROVISION_GOLDRING"), 1, 1, -142743235, 0);
		iLocal_215 = 0;
	}
	if (func_134(GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_CHEAP"), iLocal_216 + 1, 0))
	{
		func_135(GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_CHEAP"), 1, 1, -142743235, 0);
		iLocal_216 = 0;
	}
	if (func_134(GET_HASH_KEY("PROVISION_WATCH"), iLocal_217 + 1, 0))
	{
		func_135(GET_HASH_KEY("PROVISION_WATCH"), 1, 1, -142743235, 0);
		iLocal_217 = 0;
	}
	if (iVar0 == 0)
	{
		if (iLocal_357 == 0)
		{
			func_360(cParam0);
		}
		if (!func_134(-774242862 /* GXTEntry: "Wróbel\'s Valuables" */, 1, 0))
		{
			func_68(-774242862 /* GXTEntry: "Wróbel\'s Valuables" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		}
		if (func_346(&(uLocal_305[7]), func_345(7), 0, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_305[7], "Wrobel", Local_90[0 /*34*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_305[7], "FrontDoor", func_336(1189146288, 0), 0);
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uLocal_305[7], "pl_action");
		}
		if (!func_332(262144) && func_350(Global_35, -632.1f, -67.1f, 83.3f, 1) < 15f)
		{
			PED::_0x2EB75FB86C41F026(Local_90[1 /*34*/], 3, 1);
			PED::_0x06D26A96CA1BCA75(Local_90[1 /*34*/], 3, 1f, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_90[1 /*34*/], false);
			func_394(1);
			func_389("SELL_H_HORSE", 10000, 0, 0, 0, 1);
			func_222(262144);
		}
		else if (!func_332(524288))
		{
			if (PED::_0x5203038FF8BAE577(Global_35, 74, 2000))
			{
				func_222(524288);
			}
		}
		if (!func_332(65536) && func_146(Local_90[0 /*34*/], 11))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(Global_35, -630f, -52f, 82.9f, 3f, 3f, 3f, false, true, 0) && ENTITY::IS_ENTITY_AT_COORD(Local_90[1 /*34*/], -629f, -54.2f, 82.9f, 5f, 5f, 5f, false, true, 0))
			{
				MAP::REMOVE_BLIP(&iLocal_162);
				MAP::REMOVE_BLIP(&iLocal_163);
				iLocal_357 = 1;
				MISC::_0xE98D55C5983F2509(Local_90[0 /*34*/]);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 130, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_90[0 /*34*/], GET_HASH_KEY("REL_PLAYER_ENEMY"));
				PED::SET_PED_CAN_BE_TARGETTED(Local_90[0 /*34*/], true);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_90[0 /*34*/], false);
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uLocal_305[7], "pl_Action", true);
				ANIMSCENE::START_ANIM_SCENE(uLocal_305[7]);
				AUDIO::_0xAC84686C06184B0D("Ride_Scene", "LSHSS_Scenes");
				func_222(65536);
				func_334(&(cParam0->f_2106), "LSHSS_STEAL", 0);
			}
		}
	}
	if (func_337(Global_35, Local_90[0 /*34*/], 1, 1) > 50f)
	{
		if (func_357(Local_90[0 /*34*/], 242628503))
		{
			TASK::CLEAR_PED_TASKS(Local_90[0 /*34*/], true, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_90[0 /*34*/], false);
		}
	}
	if (((func_337(Global_35, Local_90[0 /*34*/], 1, 1) > 60f || ENTITY::IS_ENTITY_DEAD(Local_90[0 /*34*/])) || func_350(Local_90[0 /*34*/], -611f, -28.1f, 86f, 1) > 50f) && func_395(Local_90[0 /*34*/], -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_90[0 /*34*/], GET_HASH_KEY("REL_PLAYER_LIKE"));
		TASK::CLEAR_PED_TASKS(Local_90[0 /*34*/], true, false);
		TASK::TASK_WANDER_STANDARD(Local_90[0 /*34*/], 40000f, 0);
		func_396(&(Local_90[0 /*34*/]));
		func_397(885, 32);
		func_397(780, 32);
		func_398(21);
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
		PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
		return true;
	}
	return false;
}

void func_104(int iParam0, int iParam1)
{
	if (!func_363(iParam0))
	{
		return;
	}
	else if (!func_100(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (func_180(Global_1392626[iParam0 /*32*/].f_3) || func_181(Global_1392626[iParam0 /*32*/].f_3))
	{
		func_399(Global_1392626[iParam0 /*32*/].f_3, 0, 2);
	}
	if (iParam1 == 0)
	{
		MISC::CLEAR_BIT(&(Global_40.f_9052), iParam0);
		func_110(iParam0);
	}
}

void func_105(char[4] cParam0)
{
	var uVar0[1];
	int iVar2;

	AUDIO::TRIGGER_MUSIC_EVENT("LSHSS_STOP");
	AUDIO::STOP_PED_SPEAKING(Local_90[0 /*34*/], false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 448, false);
	if (MAP::DOES_BLIP_EXIST(iLocal_163))
	{
		MAP::REMOVE_BLIP(&iLocal_163);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_162))
	{
		MAP::REMOVE_BLIP(&iLocal_162);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_161))
	{
		MAP::REMOVE_BLIP(&iLocal_161);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_164))
	{
		MAP::REMOVE_BLIP(&iLocal_164);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_160))
	{
		MAP::REMOVE_BLIP(&iLocal_160);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_165))
	{
		MAP::REMOVE_BLIP(&iLocal_165);
	}
	PED::_0xDE7B2B4144906CDF(GET_HASH_KEY("INTIMIDATED_ON_KNEES"), Local_90[0 /*34*/]);
	PED::_0xDE7B2B4144906CDF(GET_HASH_KEY("INTIMIDATED_ON_ASS"), Local_90[0 /*34*/]);
	PED::_0xDE7B2B4144906CDF(GET_HASH_KEY("INTIMIDATED_ON_FEET_REACTION"), Local_90[0 /*34*/]);
	func_217(Local_19[0 /*10*/].f_3, Local_19[0 /*10*/].f_4, &(Local_19[0 /*10*/].f_2), 0, 0);
	func_217(Local_19[1 /*10*/].f_3, Local_19[1 /*10*/].f_4, &(Local_19[1 /*10*/].f_2), 0, 0);
	func_217(Local_19[2 /*10*/].f_3, Local_19[2 /*10*/].f_4, &(Local_19[2 /*10*/].f_2), 0, 0);
	func_217(Local_19[3 /*10*/].f_3, Local_19[3 /*10*/].f_4, &(Local_19[3 /*10*/].f_2), 0, 0);
	func_217(Local_19[4 /*10*/].f_3, Local_19[4 /*10*/].f_4, &(Local_19[4 /*10*/].f_2), 0, 0);
	func_217(Local_19[5 /*10*/].f_3, Local_19[5 /*10*/].f_4, &(Local_19[5 /*10*/].f_2), 0, 0);
	func_217(Local_19[6 /*10*/].f_3, Local_19[6 /*10*/].f_4, &(Local_19[6 /*10*/].f_2), 0, 0);
	PED::SET_PED_CONFIG_FLAG(Global_35, 448, false);
	func_400(885, 0, 0, 0, 0, 0);
	func_401(&(Local_19[0 /*10*/].f_2), 1, 1);
	func_401(&(Local_19[1 /*10*/].f_2), 1, 1);
	func_401(&(Local_19[2 /*10*/].f_2), 1, 1);
	func_401(&(Local_19[3 /*10*/].f_2), 1, 1);
	func_401(&(Local_19[4 /*10*/].f_2), 1, 1);
	func_401(&(Local_19[5 /*10*/].f_2), 1, 1);
	func_401(&(Local_19[6 /*10*/].f_2), 1, 1);
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_301))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_301);
		POPULATION::_0xA1CFB35069D23C23(iLocal_301);
	}
	if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_195, "Loansharking_Chair_Col"))
	{
		INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_195, "Loansharking_Chair_Col", true);
	}
	TASK::GET_SCENARIO_POINTS_IN_AREA(-610.1f, -25.5f, 85f, 1f, &uVar0, 1);
	if (TASK::DOES_SCENARIO_POINT_EXIST(uVar0[0]))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(uVar0[0], true);
	}
	TASK::GET_SCENARIO_POINTS_IN_AREA(-610.6f, -25.2f, 85.1f, 1f, &uVar0, 1);
	if (TASK::DOES_SCENARIO_POINT_EXIST(uVar0[0]))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(uVar0[0], true);
	}
	TASK::GET_SCENARIO_POINTS_IN_AREA(-613.3f, -22.6f, 85f, 0.5f, &uVar0, 1);
	if (TASK::DOES_SCENARIO_POINT_EXIST(uVar0[0]))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(uVar0[0], true);
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(Local_19[0 /*10*/].f_9))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[0 /*10*/].f_9, true);
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(Local_19[1 /*10*/].f_9))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[1 /*10*/].f_9, true);
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(Local_19[2 /*10*/].f_9))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[2 /*10*/].f_9, true);
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(Local_19[3 /*10*/].f_9))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[3 /*10*/].f_9, true);
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(Local_19[4 /*10*/].f_9))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[4 /*10*/].f_9, true);
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(Local_19[5 /*10*/].f_9))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[5 /*10*/].f_9, true);
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(Local_19[6 /*10*/].f_9))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[6 /*10*/].f_9, true);
	}
	iLocal_325 = TASK::FIND_SCENARIO_OF_TYPE_HASH(-611.2f, -30.2f, 85.4f, GET_HASH_KEY("RANSACK_ATTACHED_P_SIDETABLE07X"), 2f, 0, false);
	TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_325, true);
	func_401(&iLocal_197, 1, 1);
	func_401(&iLocal_196, 1, 1);
	func_402(&iLocal_326);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_166);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_167);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_168);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_169);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_170);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_171);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_172);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_173);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_174);
	func_358(iLocal_299);
	func_358(iLocal_300);
	func_358(iLocal_301);
	func_358(iLocal_302);
	func_358(iLocal_303);
	func_358(iLocal_358);
	func_358(iLocal_304);
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uLocal_305[5]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uLocal_305[5]);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uLocal_305[6]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uLocal_305[6]);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uLocal_305[7]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uLocal_305[7]);
	}
	AUDIO::_0x9428447DED71FC7E("LSHSS_Scenes");
	func_403(&iLocal_160);
	func_404();
	func_396(&(Local_90[0 /*34*/]));
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < (2 - 1))
	{
		func_113(&(Local_90[iVar2 /*34*/]), 1, 1, 1);
		iVar2++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_198))
	{
		OBJECT::DELETE_OBJECT(&iLocal_198);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_199))
	{
		OBJECT::DELETE_OBJECT(&iLocal_199);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_200))
	{
		OBJECT::DELETE_OBJECT(&iLocal_200);
	}
	if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_327))
	{
		iLocal_328 = 0;
		ENTITY::_UNPIN_MAP_ENTITY(iLocal_327);
	}
	if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_329))
	{
		iLocal_330 = 0;
		ENTITY::_UNPIN_MAP_ENTITY(iLocal_329);
	}
	ENTITY::REMOVE_MODEL_HIDE(-613.1794f, -31.4201f, 85.247f, 5f, GET_HASH_KEY("W_REPEATER_CARBINE01"), 0);
	ENTITY::REMOVE_MODEL_HIDE(-610.5f, -25.2f, 85.9f, 5f, GET_HASH_KEY("P_APPLE01X"), 0);
	func_340(&iLocal_218, Local_90[0 /*34*/]);
	func_341(&(Local_279[0 /*17*/]));
	Global_1934765.f_288 = 0;
	if (func_338(906448125))
	{
		func_136(906448125, 0, 0f, 0, 0, 0f, 0, 0);
	}
	if (func_338(1189146288))
	{
		func_136(1189146288, 0, 0f, 0, 0, 0f, 0, 0);
	}
	func_136(295238741, 0, 0f, 0, 0, 0f, 0, 0);
	func_136(-3516232, 0, 0f, 0, 0, 0f, 0, 0);
	func_405(138361190);
	func_405(365712512);
	func_405(906448125);
	func_405(1189146288);
	func_405(295238741);
	func_405(-3516232);
	if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-1996568696) && TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1996568696))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1996568696, true);
	}
	PED::_0x949B2F9ED2917F5D(Global_35, 0);
	PED::_0x949B2F9ED2917F5D(Global_35, 1);
	PED::_0x949B2F9ED2917F5D(Global_35, 2);
	PED::_0x949B2F9ED2917F5D(Global_35, 31);
	PED::_0x949B2F9ED2917F5D(Global_35, 3);
	PED::_0x949B2F9ED2917F5D(Global_35, 4);
	PED::_0xEAE3B5B019C8D23F(Global_35, 32796);
	PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
	func_406(1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 26, false);
}

void func_106(char[4] cParam0)
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
	func_407(&(cParam0->f_17.f_12));
}

void func_107(char[4] cParam0)
{
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 1024))
	{
		func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 1024);
		if (func_146(Global_1392626[*cParam0 /*32*/].f_11, 0))
		{
			func_205(&(cParam0->f_2277), 0, 0, 1, 0);
			func_408(&(Global_1392626[*cParam0 /*32*/].f_11));
		}
	}
}

int func_108(char[4] cParam0)
{
	return cParam0->f_15;
}

bool func_109(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_110(int iParam0)
{
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	if (MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/]))
	{
		func_409(&(Global_1392626[iParam0 /*32*/].f_10));
		MAP::REMOVE_BLIP(&(Global_1392626[iParam0 /*32*/]));
	}
	if (MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/].f_1))
	{
		func_409(&(Global_1392626[iParam0 /*32*/].f_10));
		MAP::REMOVE_BLIP(&(Global_1392626[iParam0 /*32*/].f_1));
	}
}

void func_111(var uParam0, var uParam1)
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

void func_112(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392626[iParam0 /*32*/].f_30))
	{
		func_410(Global_1392626[iParam0 /*32*/].f_30);
		VOLUME::_DELETE_VOLUME(Global_1392626[iParam0 /*32*/].f_30);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392626[iParam0 /*32*/].f_31))
	{
		func_410(Global_1392626[iParam0 /*32*/].f_31);
		VOLUME::_DELETE_VOLUME(Global_1392626[iParam0 /*32*/].f_31);
	}
	if (iParam0 == 4)
	{
		func_411(1411.856f, 1166.743f, 184.1507f, 200f, 5);
	}
}

void func_113(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_114(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_120(&(uParam0->f_1), 16384);
	}
	else
	{
		func_121(&(uParam0->f_1), 16384);
	}
}

void func_115(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_120(&(uParam0->f_1), 256);
	}
	else
	{
		func_121(&(uParam0->f_1), 256);
	}
}

void func_116(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_121(uParam0, 16);
	}
	else
	{
		func_120(uParam0, 67108864);
		func_120(uParam0, 16);
	}
}

void func_117(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_120(&(uParam0->f_1), 128);
	}
	else
	{
		func_121(&(uParam0->f_1), 128);
	}
}

void func_118(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_121(uParam0, 256);
	}
	else
	{
		func_120(uParam0, 256);
	}
}

void func_119(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_121(uParam0, 268435456);
	}
	else
	{
		func_120(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_121(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_120(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_121(uParam0, 536870912);
	}
	else
	{
		func_120(uParam0, 536870912);
	}
}

void func_120(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_121(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_122()
{
	return Global_1572864.f_8;
}

int func_123(int iParam0)
{
	if (func_412(iParam0) == 6)
	{
		if (func_391(iParam0) == 0)
		{
			return func_413(iParam0);
		}
	}
	return -1;
}

void func_124()
{
	PERSISTENCE::PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(-614.7f, -28.4f, 85.7f, 15f);
	PERSISTENCE::PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(-607.9755f, -29.5191f, 85.0193f, 15f);
	PERSISTENCE::PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(-616.3115f, -23.2011f, 85.0211f, 15f);
	PERSISTENCE::PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(-613.7f, -31.5f, 85f, 15f);
	PERSISTENCE::PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(-610.99f, -30.62f, 85f, 15f);
	PERSISTENCE::PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(-612.7f, -34.9f, 84.9f, 15f);
	PERSISTENCE::PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(-606.0966f, -34.99f, 84.97f, 15f);
}

int func_125(int iParam0, bool bParam1, bool bParam2)
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

void func_129(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
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
	iVar1 = func_414(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

void func_131(int iParam0, bool bParam1)
{
	if (func_415(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_132(int iParam0, bool bParam1)
{
	if (func_415(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

int func_133(var uParam0, char* sParam1)
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
	iVar1 = func_416(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = sParam1;
	return 1;
}

bool func_134(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_223(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_244(iParam0);
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
		if (!func_417(iParam0, 1))
		{
			return false;
		}
	}
	return func_227(iParam0, 0, bParam2) >= iParam1;
}

int func_135(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	if (!func_223(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_418(iParam0, 1);
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
			func_308(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_134(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_305(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var5))
	{
		if ((func_227(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_227(iParam0, 0, 0) - iParam1) < 0)
		{
			func_135(iParam0, func_227(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_244(iParam0) == GET_HASH_KEY("WEAPON"))
	{
		if (!func_419(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_420(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == GET_HASH_KEY("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!func_254(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != GET_HASH_KEY("UPGRADE_FSH_BAIT_NONE"))
	{
		func_308(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_421(iParam0, iParam1);
	return 1;
}

void func_136(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_125(iParam0, 0, 0);
	if (func_415(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_422(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_131(iParam0, 1);
			}
			else
			{
				func_132(iParam0, 1);
			}
		}
		else
		{
			func_355(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_423())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

int func_137(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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

void func_138(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, int iParam6)
{
	uParam0->f_17.f_2 = fParam1;
	uParam0->f_17.f_3 = fParam2;
	uParam0->f_17.f_4 = fParam3;
	uParam0->f_17.f_5 = fParam4;
	uParam0->f_17.f_6 = fParam5;
	uParam0->f_17.f_7 = iParam6;
	uParam0->f_17 = 0;
}

bool func_139(var uParam0)
{
	if (!func_146(Local_90[0 /*34*/], 0))
	{
		func_84();
		if (func_338(906448125))
		{
			func_125(906448125, 0, 0);
			func_136(906448125, 0, 0f, 0, 0, 0f, 0, 0);
		}
		if (func_338(1189146288))
		{
			func_125(1189146288, 0, 0);
			func_136(1189146288, 0, 0f, 0, 0, 0f, 0, 0);
		}
		func_340(&iLocal_218, Local_90[0 /*34*/]);
		func_341(&(Local_279[0 /*17*/]));
		return true;
	}
	if (func_337(Local_90[0 /*34*/], Global_35, 1, 1) > 250f)
	{
		func_84();
		if (func_338(906448125))
		{
			func_125(906448125, 0, 0);
			func_136(906448125, 0, 0f, 0, 0, 0f, 0, 0);
		}
		if (func_338(1189146288))
		{
			func_125(1189146288, 0, 0);
			func_136(1189146288, 0, 0f, 0, 0, 0f, 0, 0);
		}
		func_340(&iLocal_218, Local_90[0 /*34*/]);
		func_341(&(Local_279[0 /*17*/]));
		return true;
	}
	return false;
}

void func_140(int iParam0, int iParam1)
{
	if (!func_363(iParam0))
	{
		return;
	}
	func_425(&(Global_1392626[iParam0 /*32*/].f_10), iParam1);
	func_425(&(Global_1392626[iParam0 /*32*/].f_10), 2);
	func_129(&(Global_1392626[iParam0 /*32*/].f_8), 1);
}

bool func_141(int iParam0)
{
	if (!func_426(iParam0))
	{
		return false;
	}
	return func_427(iParam0, 33554432);
}

bool func_142(int iParam0)
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
	iVar0 = func_428(func_366());
	if (func_429(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_429(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_429(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_429(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_429(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_429(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_429(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_429(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_429(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_429(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_429(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_429(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_429(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_429(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_429(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_429(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_429(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_143(int iParam0)
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
		if (func_430(21))
		{
			return true;
		}
	}
	return false;
}

bool func_144(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_431(iParam0, bParam1, bParam2, bParam3))
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

bool func_145(int iParam0, float fParam1)
{
	if (BUILTIN::VDIST2(Global_1392626[iParam0 /*32*/].f_24, Global_36) > (fParam1 * fParam1) && iParam0 != func_123(Global_1572864.f_8))
	{
		return false;
	}
	return true;
}

bool func_146(int iParam0, int iParam1)
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

bool func_147(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_432(uParam2, 1, iVar0);
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
			if (func_433(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_434(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_435(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_434(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_436(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_434(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_437(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_434(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_431(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_434(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_438(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_439(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_434(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_440(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_434(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_441(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_434(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_441(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_434(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_442(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_434(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_443(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_434(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_444(uParam2, 4000))
				{
					if ((func_445(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_446(uParam2, iParam0)) && func_447(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_434(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_445(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_446(uParam2, iParam0)) && func_447(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_434(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_448(iParam0, Global_1935630.f_41))
							{
								func_449();
								*uParam3 = 2;
								func_434(iParam0, uParam2, *uParam3);
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
						if (func_448(iParam0, Global_1935630.f_41))
						{
							func_449();
							*uParam3 = 2;
							func_434(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_450(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_167() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_449();
						*uParam3 = 2;
						func_434(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_451())
					{
						if (func_448(iParam0, Global_1935630.f_42))
						{
							func_449();
							*uParam3 = 2;
							func_434(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_452(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_434(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_453(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_434(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_454(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_434(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_455(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_434(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_456(uParam2, 4000))
				{
					if (func_457(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_434(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_458(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_434(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_459(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_434(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_148(float fParam0)
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

void func_149(char[4] cParam0)
{
	AUDIO::TRIGGER_MUSIC_EVENT("LSHSS_STOP");
	func_403(&iLocal_160);
	func_404();
	func_460(cParam0, 5);
}

void func_150(int iParam0)
{
	Global_36580 = iParam0;
}

void func_151()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1347702)
	{
		if (func_392(iVar0))
		{
			if (func_461(iVar0, 4))
			{
				if (func_461(iVar0, 16))
				{
					func_462(iVar0, 1);
				}
				if (func_461(iVar0, 8))
				{
					func_463(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_152()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

void func_153(char[4] cParam0)
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
		iVar1 = func_108(cParam0);
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

bool func_154(int iParam0, int iParam1)
{
	if (func_363(iParam0))
	{
		return (Global_40.f_9052.f_11[iParam0] && iParam1) != 0;
	}
	return false;
}

bool func_155(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_464(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_156(int iParam0)
{
	if (!func_154(iParam0, 8))
	{
		func_110(iParam0);
		func_465(iParam0);
		func_466(iParam0, 8);
	}
}

int func_157(vector3 vParam0, var uParam3)
{
	int iVar0;

	if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) != 1)
	{
		func_467(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_468(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_469(0, 0);
		if (func_470(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			func_471(1, 0);
		}
	}
	else
	{
		func_471(1, 0);
	}
	func_378(0);
	func_472(0, vParam0, uParam3);
	return 1;
}

bool func_158(char[4] cParam0)
{
	if (cParam0->f_1 == 8)
	{
		if (!func_332(2))
		{
			if (func_337(Global_35, Local_90[0 /*34*/], 1, 1) > 40f)
			{
				if (iLocal_334 == 0)
				{
					func_89("SELL_RTRN", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (!MAP::DOES_BLIP_EXIST(iLocal_165))
					{
						iLocal_165 = MAP::_BLIP_ADD_FOR_AREA(1247852480, -612.7f, -29.5f, 86f, 10f, 15f, 0f, 19);
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_160))
					{
						MAP::REMOVE_BLIP(&iLocal_160);
					}
					iLocal_334 = 1;
				}
			}
			else if (iLocal_334 == 1)
			{
				if (func_213() < 5)
				{
					func_89("SELL_BEAT", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (MAP::DOES_BLIP_EXIST(iLocal_165))
					{
						MAP::REMOVE_BLIP(&iLocal_165);
					}
					if (!MAP::DOES_BLIP_EXIST(iLocal_160))
					{
						func_342(&iLocal_160, Local_90[0 /*34*/], GET_HASH_KEY("BLIP_STYLE_ENEMY"), 0);
					}
				}
				else if (func_213() >= 5)
				{
					func_89("SELL_LOOT", 7500, 0, 1, 0, 0, -1, -1, 0);
				}
				iLocal_334 = 0;
			}
			if (func_337(Global_35, Local_90[0 /*34*/], 1, 1) > 80f)
			{
				func_473(cParam0, "SELL_F_LEFT");
				return true;
			}
			if ((PED::GET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 11, true) && ENTITY::DOES_ENTITY_EXIST(Local_90[0 /*34*/])) && func_213() < 5)
			{
				func_473(cParam0, "SELL_F_KNCK");
				return true;
			}
			if (!func_146(Local_90[0 /*34*/], 0) && ENTITY::DOES_ENTITY_EXIST(Local_90[0 /*34*/]))
			{
				func_473(cParam0, "SELL_F_DEAD");
				return true;
			}
		}
	}
	return false;
}

bool func_159(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

Vector3 func_160(int iParam0)
{
	if (!func_363(iParam0))
	{
		return Global_36;
	}
	return Global_1392626[iParam0 /*32*/].f_24;
}

bool func_161(var uParam0, char* sParam1, bool bParam2, bool bParam3)
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
			return (func_474(uParam0, 256) && !func_474(uParam0, 4194304));
		}
		uParam0->f_295 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	func_475(uParam0, sParam1);
	if (!func_474(uParam0, 64))
	{
		if (!func_159(func_476(uParam0)))
		{
			func_316(uParam0, 64);
		}
		else
		{
			vVar0 = { func_477(uParam0) };
			if (!func_159(vVar0))
			{
				func_478(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = func_350(Global_35, func_476(uParam0), 1);
	if (func_474(uParam0, 128) || func_474(uParam0, 256))
	{
		if ((fVar3 >= func_479(uParam0) && !bParam2) || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228))
		{
			if (uParam0->f_313)
			{
				func_480();
				uParam0->f_313 = 0;
			}
			func_481(uParam0);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_228);
			}
			func_323(uParam0);
			func_482(uParam0, 128, 1);
			func_482(uParam0, 256, 1);
			func_482(uParam0, 4096, 1);
			func_482(uParam0, 32768, 1);
			func_482(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_483(uParam0) || bParam2)
	{
		if (!func_474(uParam0, 128))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228))
			{
				if (func_483(uParam0) >= func_479(uParam0))
				{
				}
				Var4 = { func_484(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					func_194(uParam0);
				}
				Var4 = { func_484(uParam0) };
				iVar12 = 256;
				if (!func_474(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_228 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_224), iVar12, &Var4, false, true);
				func_485(uParam0, 0, 0, 0, 0);
				func_316(uParam0, 128);
			}
		}
	}
	if (func_474(uParam0, 128))
	{
		if (func_474(uParam0, 256) && !func_474(uParam0, 4194304))
		{
			return true;
		}
		func_486(uParam0);
		if (!uParam0->f_313)
		{
			if (func_487())
			{
				func_488(4096);
				uParam0->f_313 = 1;
			}
		}
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_228, true, false))
		{
			bVar13 = true;
			Var15 = { func_314(uParam0) };
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
			if (!func_474(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_228, &Var15))
				{
					if (!func_474(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_228, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_228, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_228, &Var15))
						{
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_228, &Var15);
						}
						func_316(uParam0, 16777216);
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
			func_316(uParam0, 256);
			func_482(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

void func_162(char[4] cParam0)
{
}

void func_163(char[4] cParam0)
{
	char cVar0[64];
	struct<4> Var8;

	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 64))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(cParam0->f_32.f_4) && !func_159(cParam0->f_32.f_5))
	{
		StringCopy(&cVar0, func_489(*cParam0), 64);
		StringConCat(&cVar0, ".VolRestrictCutscene", 64);
		cParam0->f_32.f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(cParam0->f_32.f_5, 0f, 0f, 0f, 5f, 5f, 5f, &cVar0);
		func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 128);
	}
	if (VOLUME::DOES_VOLUME_EXIST(cParam0->f_32.f_4))
	{
		POPULATION::_0xB56D41A694E42E86(cParam0->f_32.f_4, 0, 0, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(cParam0->f_32.f_4, 0, 0, 0, -1, -1, 0);
		cParam0->f_2213[1] = PED::_0x4C39C95AE5DB1329(cParam0->f_32.f_4, false, 15);
		if (func_490(cParam0->f_32.f_4, &Var8))
		{
			PATHFIND::SET_ROADS_IN_AREA(Var8, Var8.f_3, 0, 1, 0);
		}
	}
	func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 64);
}

bool func_164(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_165(var uParam0)
{
	func_491(uParam0, 0f);
}

bool func_166(var uParam0)
{
	return func_164(*uParam0, 2);
}

int func_167()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_168(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_169(var uParam0)
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

void func_170(var uParam0)
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

int func_171(var uParam0)
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

int func_172(var uParam0)
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

bool func_173()
{
	Global_1934765.f_288 = 1;
	iLocal_195 = INTERIOR::GET_INTERIOR_AT_COORDS(-613.7f, -27.3f, 86f);
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_195))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_195);
		if (INTERIOR::IS_INTERIOR_READY(iLocal_195))
		{
			if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_195, "Loansharking_Chair_Col"))
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_195, "Loansharking_Chair_Col", 0);
			}
			func_492(229);
			if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_195, "Loansharking_Chair_Col") && INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_195, "pai_intgroup_lootables"))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_174(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_90[1 /*34*/]))
	{
		func_493(Local_90[1 /*34*/].f_1, 50f, 0);
		Local_90[1 /*34*/] = func_494(iLocal_168, -631.9f, -67.6f, 81.8561f, 277.5934f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		return false;
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_90[1 /*34*/], -631.9f, -67.6f, 81.8561f, 277.5934f, true, false, true);
		TASK::TASK_STAND_STILL(Local_90[1 /*34*/], -1);
		return true;
	}
	return false;
}

bool func_175(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_90[0 /*34*/]))
	{
		func_495(-613.2f, -30.7f, 85.1f, 3f, 0);
		func_496(*uParam0, &(Local_90[0 /*34*/]), iLocal_166, Local_90[0 /*34*/].f_1, Local_90[0 /*34*/].f_4, 1, 1, 0, 1, 1, 1, 1);
		return false;
	}
	else
	{
		Global_1392626[*uParam0 /*32*/].f_11 = Local_90[0 /*34*/];
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_90[0 /*34*/], true);
		PED::SET_PED_CAN_BE_TARGETTED(Local_90[0 /*34*/], true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_90[0 /*34*/], Local_90[0 /*34*/].f_1, Local_90[0 /*34*/].f_4, true, false, true);
		func_179(&(uParam0->f_2106), Local_90[0 /*34*/], "WROBEL", 0);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_90[0 /*34*/], 1048576, true);
		AUDIO::STOP_PED_SPEAKING(Local_90[0 /*34*/], true);
		PED::SET_PED_CONFIG_FLAG(Global_35, 448, true);
		PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 225, true);
		PED::SET_PED_CONFIG_FLAG(Global_35, 448, true);
		PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 148, true);
		PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 146, true);
		PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 130, true);
		PED::SET_PED_LASSO_HOGTIE_FLAG(Local_90[0 /*34*/], 0, false);
		PED::SET_PED_LASSO_HOGTIE_FLAG(Local_90[0 /*34*/], 2, false);
		PED::SET_PED_LASSO_HOGTIE_FLAG(Local_90[0 /*34*/], 3, false);
		PED::SET_PED_LASSO_HOGTIE_FLAG(Local_90[0 /*34*/], 4, false);
		ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(Local_90[0 /*34*/], false);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_90[0 /*34*/], 17, false);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_90[0 /*34*/], 512, true);
		PED::_0xF7EA250B9A919E03(GET_HASH_KEY("INTIMIDATED_ON_KNEES"), Local_90[0 /*34*/]);
		PED::_0xF7EA250B9A919E03(GET_HASH_KEY("INTIMIDATED_ON_ASS"), Local_90[0 /*34*/]);
		PED::_0xF7EA250B9A919E03(GET_HASH_KEY("INTIMIDATED_ON_FEET_REACTION"), Local_90[0 /*34*/]);
		return true;
	}
	return false;
}

void func_176(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, bool bParam11, int iParam12, bool bParam13, int iParam14, char* sParam15)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		if (bParam11)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
			{
				func_497(uParam0, vParam2, vParam5, vParam8);
			}
			else
			{
				func_498(uParam0, vParam2, vParam5, vParam8, sParam15);
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
		{
			func_499(uParam0, vParam2, vParam5, vParam8);
		}
		else
		{
			func_500(uParam0, vParam2, vParam5, vParam8, sParam15);
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		POPULATION::_0x18262CAFEBB5FBE1(*uParam0, iParam12, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(*uParam0, iParam12, 0, 0, -1, -1, iParam14);
		if (bParam13)
		{
			*uParam1 = PED::_0x4C39C95AE5DB1329(*uParam0, false, 15);
		}
	}
}

int func_177(int iParam0)
{
	int iVar0;

	if (!func_501(iParam0))
	{
		return 0;
	}
	if (!func_503(func_502(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_504(iParam0)))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PERSCHAR::_0x31C70A716CAE1FEE(func_504(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = PERSCHAR::_0x31C70A716CAE1FEE(func_504(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
	}
	PERSCHAR::_0x7B204F88F6C3D287(func_504(iParam0));
	return 1;
}

void func_178(int iParam0, int iParam1)
{
	if (func_252() != -1)
	{
		return;
	}
	if (!func_501(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] = (Global_24887[iParam0 /*2*/] || iParam1);
}

void func_179(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_505(uParam0, iParam1, sParam2))
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

bool func_180(int iParam0)
{
	int iVar0;

	iVar0 = func_506(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_181(int iParam0)
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
		iVar0 = func_507(iParam0);
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

void func_182(int iParam0, bool bParam1)
{
	if (!func_100(iParam0))
	{
		return;
	}
	if (!func_508(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_509(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_509(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_412(iParam0), func_391(iParam0), func_413(iParam0), func_509(iParam0), Global_36);
		}
	}
	func_388(iParam0, 1);
	bParam1 = bParam1;
}

void func_183(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_100(iParam0))
	{
		return;
	}
	if (!func_181(iParam0))
	{
		return;
	}
	iVar0 = func_412(iParam0);
	if (bParam1)
	{
		if (func_509(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_509(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != Global_1835011[77 /*74*/].f_1)
			{
				func_510(func_391(iParam0));
			}
			if (func_252() != 0)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_509(iParam0), 0);
			}
			else
			{
				STATS::STATSTRACKER_DEED_STARTED(func_509(iParam0), Global_265238.f_79565.f_208.f_17);
			}
		}
	}
	func_511(iParam0);
	if (!func_100(func_99(0)))
	{
		func_388(iParam0, 3);
		func_512(bParam2);
		if (func_252() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_0x55F37F5F3F2475E1();
			}
			func_513(1);
		}
		func_514(iParam0, -1);
		if (bParam1 && !func_515(2))
		{
			func_516(&Global_0, 1024);
		}
		if (func_252() == -1)
		{
			func_517(&(Global_1347343.f_11), 536870912);
			func_518(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_519(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_520(0);
			}
		}
		if (func_252() == -1)
		{
			iVar1 = func_521(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_522();
				switch (iVar1)
				{
					case 0:
						func_523(0);
						break;
					case 1:
						func_523(1);
						break;
					case 2:
						func_523(2);
						break;
					case 3:
						func_523(3);
						break;
					case 4:
						func_523(4);
						break;
					case 5:
						func_523(5);
						break;
					case 6:
						func_523(5);
						break;
					case 7:
						func_523(7);
						break;
					case 8:
						func_523(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (func_391(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_523(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (func_391(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_523(11);
						break;
					default:
						iVar1 = func_522();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_524(0);
									break;
								case 1:
									func_524(1);
									break;
								case 2:
									func_524(2);
									break;
								case 3:
									func_524(3);
									break;
								case 4:
									func_524(4);
									break;
								case 5:
									func_524(5);
									break;
								case 6:
									func_524(5);
									break;
								case 7:
									func_524(7);
									break;
								case 8:
									func_524(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_525(1);
	}
	else
	{
		func_514(iParam0, -1);
		func_388(iParam0, 4);
	}
	func_526(iParam0, 0);
}

void func_184(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_185(int iParam0)
{
	int iVar0;
	int iVar1;

	if ((Global_1898077.f_1 == 2 || Global_1898077.f_1 == 5) || Global_1898077.f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_252() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_375(Global_1894899.f_2);
	Global_1898077.f_1 = 3;
	Global_1898077.f_2 = 0;
	Global_1898077.f_7 = iVar0;
	Global_1898077.f_8 = iParam0;
	Global_1898077.f_9 = iVar1;
	func_376(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
}

char* func_186(int iParam0)
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

void func_187(bool bParam0)
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
	func_527(0f);
	Global_1935436.f_11 = 1;
	if (func_528())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_529();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_188(char[4] cParam0)
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

char* func_189()
{
	return "LSHSS_MCS1";
}

void func_190(char[4] cParam0, vector3 vParam1)
{
	if (!func_159(vParam1))
	{
		cParam0->f_32.f_5 = { vParam1 };
	}
	else
	{
		cParam0->f_32.f_5 = { func_160(*cParam0) };
	}
}

void func_191(var uParam0)
{
	if (func_530(uParam0, func_189()))
	{
		if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_228) >= 0.9663066f && ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_228) < 0.98f)
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "OnFootIntimidateForced", true, 5000);
		}
		if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(uParam0->f_228, "cs_wrobel") || ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(uParam0->f_228, "ARTHUR"))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "OnFootIntimidateForced", true, 5000);
			func_340(&iLocal_218, Local_90[0 /*34*/]);
			func_341(&(Local_279[0 /*17*/]));
			func_63(1);
			func_343(Local_90[0 /*34*/], 0);
		}
	}
}

void func_192(char[4] cParam0, int iParam1)
{
	func_531(&(cParam0->f_32), iParam1);
}

void func_193(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_532(&(cParam0->f_32), iParam1, sParam2, iParam3, iParam4, bParam5);
}

void func_194(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_533() };
	func_534(uParam0, &Var0);
}

bool func_195(char[4] cParam0)
{
	if (!func_53(64))
	{
		return false;
	}
	if (func_54())
	{
		return false;
	}
	else if (func_168(Global_1935630, 131072))
	{
		return false;
	}
	return true;
}

void func_196(char[4] cParam0)
{
	switch (cParam0->f_17)
	{
		case 0:
			if (func_88(Global_1392626[*cParam0 /*32*/].f_8, 128))
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
						func_407(&(cParam0->f_17.f_12));
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
			if (func_88(Global_1392626[*cParam0 /*32*/].f_8, 128))
			{
				cParam0->f_17 = 2;
				return;
			}
			if (func_535(Global_35, Global_1392626[*cParam0 /*32*/].f_24, &(cParam0->f_17.f_12), cParam0->f_17.f_2, cParam0->f_17.f_3, cParam0->f_17.f_4, cParam0->f_17.f_5, cParam0->f_17.f_6, cParam0->f_17.f_7, 0, 1, 1, 1))
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
			if (!func_88(Global_1392626[*cParam0 /*32*/].f_8, 128))
			{
				if ((PED::IS_PED_FULLY_ON_MOUNT(Global_35, true) && !func_357(Global_35, 501393341)) || (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true) && !func_357(Global_35, -828834893)))
				{
					cParam0->f_17 = 0;
				}
			}
			break;
	}
}

void func_197(var uParam0, struct<4> Param1, int iParam5)
{
	switch (func_536(uParam0))
	{
		case 0:
			func_537(uParam0, Param1, iParam5);
			break;
		case 1:
			func_538(uParam0);
			break;
		case 2:
			func_539(uParam0);
			break;
	}
}

bool func_198(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (func_313(uParam0, 32768))
	{
		return true;
	}
	if (func_536(uParam0) >= 3)
	{
		uParam0->f_1662 = func_431(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
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
		func_540(uParam0);
	}
	if (func_536(uParam0) < 10)
	{
		if (func_536(uParam0) == 3)
		{
			func_541(uParam0, iParam5, bParam6);
		}
		else if (func_536(uParam0) > 3)
		{
			if (func_542(uParam0) == 0)
			{
				if (!func_313(uParam0, 524288))
				{
					func_543(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_544(uParam0, 4);
					func_545(uParam0, 10);
					func_546(uParam0, iParam5);
					return true;
				}
			}
			if (!func_313(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!func_321(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			func_547(0);
			func_548();
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_1450 >= 0)
			{
				if (!func_321(&(uParam0->f_782[uParam0->f_1454 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (func_549(uParam0, uParam0->f_1450))
				{
					if (func_550(uParam0) < 7 && uParam0->f_1454 >= 0)
					{
						func_551(uParam0, uParam0->f_782[uParam0->f_1454 /*41*/].f_27, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_1454 >= 0)
				{
					func_551(uParam0, uParam0->f_782[uParam0->f_1454 /*41*/].f_27, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				func_552(uParam0);
			}
		}
	}
	bVar0 = func_553(uParam0, iParam5, bParam6);
	bVar1 = CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0);
	if (bVar0)
	{
		if ((!func_313(uParam0, 268435456) && bVar1) && !func_313(uParam0, 262144))
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
				func_554(uParam0, 131072);
				func_554(uParam0, 268435456);
			}
		}
		if (func_320(uParam0, 64) || (uParam0->f_1450 >= 0 && !func_321(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || func_542(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_536(uParam0) == 3 || func_313(uParam0, 131072))
	{
		func_555(uParam0);
		if (!func_313(uParam0, 262144))
		{
			if ((bVar0 && func_313(uParam0, 65536)) || func_313(uParam0, 131072))
			{
				func_554(uParam0, 32768);
				func_544(uParam0, 4);
				func_545(uParam0, 10);
				uParam0->f_1535 = 1;
				func_546(uParam0, iParam5);
				return true;
			}
		}
	}
	if (func_536(uParam0) >= 3)
	{
		func_556(uParam0, iParam5);
		func_557(uParam0);
		if (!func_558(uParam0, 1))
		{
			func_559(uParam0);
		}
		func_560(uParam0);
	}
	switch (func_536(uParam0))
	{
		case 0:
			func_537(uParam0, Param1, iParam5);
			break;
		case 1:
			func_538(uParam0);
			break;
		case 2:
			func_539(uParam0);
			break;
		case 3:
			if (func_199(uParam0))
			{
				func_561(2);
				func_551(uParam0, uParam0->f_782[uParam0->f_1450 /*41*/].f_27, uParam0->f_1111[uParam0->f_1450 /*22*/].f_1, 1065353216 /* Float: 1f */);
				func_165(&(uParam0->f_1638));
				func_544(uParam0, 1);
				func_562();
				func_545(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!func_313(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (func_536(uParam0) == 5)
			{
				if (func_563(uParam0))
				{
					func_544(uParam0, 2);
					func_545(uParam0, 6);
				}
			}
			if (func_536(uParam0) == 6)
			{
				if (func_564(uParam0))
				{
					func_544(uParam0, 3);
					func_545(uParam0, 8);
				}
			}
			if (uParam0->f_1451 >= 0 || func_565(&(uParam0->f_1638)) >= 15f)
			{
				if (func_566(uParam0, iParam5))
				{
					if (func_567(uParam0))
					{
						uParam0->f_1451 = func_568(uParam0);
						func_165(&(uParam0->f_1638));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						func_544(uParam0, 6);
						func_545(uParam0, 9);
					}
					else
					{
						func_544(uParam0, 4);
						func_545(uParam0, 10);
						func_546(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (func_566(uParam0, iParam5))
			{
				func_546(uParam0, iParam5);
				func_545(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_199(var uParam0)
{
	if (uParam0->f_1536)
	{
		return false;
	}
	return uParam0->f_1535;
}

void func_200(char[4] cParam0)
{
}

int func_201(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_571(uParam0, iParam1, uParam3, fParam2, fVar8, sParam7);
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
			func_165(&(iParam1->f_13));
		}
		if (func_572(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_573(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_201(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_408(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_574(*uParam0, 1, 1);
						}
					}
					else if (func_575(iParam1, 22))
					{
						func_574(*uParam0, 0, 1);
					}
				}
				if (func_576(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_577(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_578(iParam8);
					func_579(iParam1, uParam3);
					if (func_580(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_581(uParam3);
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
					func_582(iParam1, uParam3, fVar8);
					if (func_583(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_205(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				if (func_576(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_584(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_580(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_577(uParam0, func_576(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_578(iParam8);
					func_579(iParam1, uParam3);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					func_205(uParam3, 0, 0, 1, 1);
					func_585(iParam1, 1);
				}
				if (MISC::IS_BIT_SET(iParam1->f_21, 20))
				{
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						if (!func_357(Global_35, 501393341) && !func_357(Global_35, 242628503))
						{
							iVar9 = 0;
							if (func_586(Global_35, *uParam0, 1f) == 3)
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
					else if ((((!PED::IS_PED_ON_MOUNT(Global_35) && func_146(iParam1->f_28, 0)) && func_587(Global_35, iParam1->f_28, iParam1->f_29, 1)) && !func_357(iParam1->f_28, 518218985)) && !func_357(iParam1->f_28, 242628503))
					{
						TASK::TASK_SMART_FLEE_PED(iParam1->f_28, Global_35, (iParam1->f_29 + 3f), -1, 2304, 1f, 0);
						iParam1->f_28 = 0;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
					{
						if (!func_357(Global_35, -828834893) && !func_357(Global_35, 242628503))
						{
							iVar10 = 0;
							if (func_586(Global_35, *uParam0, 1f) == 3)
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
					else if (!(MISC::IS_BIT_SET(*iParam1, 12) || func_588(iParam1, uParam0)))
					{
					}
					else if (!(MISC::IS_BIT_SET(*iParam1, 13) || func_589(iParam1)))
					{
					}
					else if (!func_590(iParam1))
					{
					}
					else
					{
						if (fParam4 > 0f)
						{
							func_165(&(iParam1->f_18));
							bVar11 = iParam8 & 128 != false;
							if (bVar11)
							{
								func_591(uParam3, 0, 0);
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
				if (func_592(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_576(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_584(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_580(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_577(uParam0, func_576(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_578(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_205(uParam3, 0, 0, 1, 1);
					}
					func_585(iParam1, 1);
				}
				func_582(iParam1, uParam3, fVar8);
				if (func_592(uParam0, iParam1, fParam4, bVar6))
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
			func_593(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

bool func_202(int iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

void func_203(char[4] cParam0)
{
	if (!func_88(Global_1392626[*cParam0 /*32*/].f_8, 32))
	{
		if (func_146(Global_1392626[*cParam0 /*32*/].f_11, 0))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Global_1392626[*cParam0 /*32*/].f_11, 0, -1f, -1f, -1f);
		}
	}
}

bool func_204(char[4] cParam0)
{
	int iVar0;
	int iVar1;

	if (func_155(Global_35, Global_1392626[*cParam0 /*32*/].f_27, Global_1392626[*cParam0 /*32*/].f_4, 1, 1))
	{
		if (!func_594(169))
		{
			func_234(169, 0);
		}
	}
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_349))
		{
			iLocal_349 = func_595(Global_35);
		}
		else if ((ENTITY::DOES_ENTITY_EXIST(iLocal_349) && !func_357(Global_35, -208384378)) && func_337(Global_35, Local_90[0 /*34*/], 1, 1) < 30f)
		{
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iLocal_349, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 2f, 0);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iLocal_349))
	{
		iLocal_349 = 0;
	}
	if (func_328(Global_35, iLocal_302, 1, 0) || func_328(Global_35, iLocal_303, 1, 0))
	{
		if (func_329(229))
		{
			func_330(229);
		}
	}
	if (func_468(Global_35, 1, 0, 0) == GET_HASH_KEY("WEAPON_LASSO"))
	{
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 8, 0, 1);
	}
	else
	{
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 8, 0, 0);
	}
	switch (func_596())
	{
		case 0:
			if (!func_346(&(uLocal_305[0]), func_345(0), 0, 0))
			{
				return false;
			}
			PED::SET_PED_LASSO_HOGTIE_FLAG(Local_90[0 /*34*/], 0, false);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_305[0], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_305[0], "CS_WROBEL", Local_90[0 /*34*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_305[0], "p_cs_book03x", iLocal_198, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_305[0], "p_pencil01x", iLocal_199, 0);
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uLocal_305[0], "PL_BACK_DOOR");
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uLocal_305[0], "PL_FRONT_DOOR");
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uLocal_305[0], "PL_GREET");
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uLocal_305[0], "PL_BASE");
			if (TASK::DOES_SCENARIO_POINT_EXIST(Local_19[0 /*10*/].f_9))
			{
				TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[0 /*10*/].f_9, false);
			}
			if (TASK::DOES_SCENARIO_POINT_EXIST(Local_19[1 /*10*/].f_9))
			{
				TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[1 /*10*/].f_9, false);
			}
			if (TASK::DOES_SCENARIO_POINT_EXIST(Local_19[2 /*10*/].f_9))
			{
				TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[2 /*10*/].f_9, false);
			}
			if (TASK::DOES_SCENARIO_POINT_EXIST(Local_19[3 /*10*/].f_9))
			{
				TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[3 /*10*/].f_9, false);
			}
			if (TASK::DOES_SCENARIO_POINT_EXIST(Local_19[4 /*10*/].f_9))
			{
				TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[4 /*10*/].f_9, false);
			}
			if (TASK::DOES_SCENARIO_POINT_EXIST(Local_19[5 /*10*/].f_9))
			{
				TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[5 /*10*/].f_9, false);
			}
			if (TASK::DOES_SCENARIO_POINT_EXIST(Local_19[6 /*10*/].f_9))
			{
				TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[6 /*10*/].f_9, false);
			}
			if (!func_346(&(uLocal_305[1]), func_345(1), 0, 0))
			{
				return false;
			}
			if (!func_67())
			{
				return false;
			}
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_305[1], "ARTHUR", Global_35, 0);
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uLocal_305[1], "PL_GODDAMN_IT");
			PED::SET_PED_CONFIG_FLAG(Global_35, 448, true);
			PED::SET_PED_CONFIG_FLAG(Global_35, 26, true);
			func_406(0);
			func_597(1);
			break;
		case 1:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_305[0], "PL_BASE"))
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uLocal_305[0], "PL_BASE", true);
				ANIMSCENE::START_ANIM_SCENE(uLocal_305[0]);
				func_598(&(Local_90[0 /*34*/]), &Global_35, -1);
				func_598(&Global_35, &(Local_90[0 /*34*/]), -1);
				func_597(2);
			}
			break;
		case 2:
			if (bLocal_208 == 1)
			{
				ANIMSCENE::ABORT_ANIM_SCENE(uLocal_305[0], false);
				func_597(6);
			}
			else if (func_350(Global_35, -615.4f, -27.5f, 86f, 1) < 0.5f)
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uLocal_305[0], "PL_FRONT_DOOR", true);
				func_597(3);
			}
			else if (func_350(Global_35, -608.8f, -26.1f, 86f, 1) < 0.5f)
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uLocal_305[0], "PL_BACK_DOOR", true);
				func_597(3);
			}
			break;
		case 3:
			if (!func_333(1) && ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uLocal_305[0], "front_loop", true))
			{
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 297, true);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 315, true);
				PED::SET_PED_CAN_BE_TARGETTED(Local_90[0 /*34*/], true);
				MISC::REGISTER_INTERACTION_LOCKON_PROMPT(Local_90[0 /*34*/], "", 2.5f, 0f, 0, 0f, 0f, 0, false, -1);
				func_599(8);
				func_600(&(Local_279[0 /*17*/]), "INTERACT_CONFRONT", 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				func_601(&iLocal_218, &Local_279, 0, iLocal_160, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				iLocal_160 = MAP::_0x3E593DF9C2962EC6(-936216634);
				MAP::SET_BLIP_SPRITE(iLocal_160, GET_HASH_KEY("BLIP_AMBIENT_LOAN_SHARK"), true);
				if (!func_364(1))
				{
					MAP::BLIP_ADD_MODIFIER(iLocal_160, -401963276);
				}
				MAP::_0x97F6F158CC5B5CA2(Local_90[0 /*34*/], iLocal_160);
				func_344(cParam0, "SELL_TALK", 0f, 0f, 0f);
				func_597(4);
			}
			break;
		case 4:
			func_602(cParam0);
			if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uLocal_305[0], "front_loop", true) && iLocal_335 == 0)
			{
				if (!CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 1) && !func_361(Local_90[0 /*34*/], 1, 1, 0, 0, 0))
				{
					ANIMSCENE::START_ANIM_SCENE(uLocal_305[1]);
				}
				iLocal_335 = 1;
			}
			if (func_603(PLAYER::GET_PLAYER_INDEX(), Local_90[0 /*34*/]))
			{
				func_604(&(cParam0->f_17.f_12), 5000f, 1);
				func_201(&(Local_90[0 /*34*/]), &iLocal_218, 2.5f, &Local_279, 0.1f, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
				if (func_202(&iLocal_218))
				{
					ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uLocal_305[0], "PL_GREET", true);
					MISC::_0xE98D55C5983F2509(Local_90[0 /*34*/]);
					func_605(&(iLocal_16[1]), 1, 1);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Local_90[0 /*34*/], 0, -1f, -1f, -1f);
					func_571(&(Local_90[0 /*34*/]), &iLocal_218, &Local_279, 5f, -1082130432 /* Float: -1f */, 0);
					cParam0->f_32.f_5 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
					PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 297, false);
					PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 315, false);
					func_340(&iLocal_218, Local_90[0 /*34*/]);
					func_341(&(Local_279[0 /*17*/]));
					func_597(5);
				}
			}
			break;
		case 5:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (!func_333(0))
			{
				if ((ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(uLocal_305[0]) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uLocal_305[0], false)) || ANIMSCENE::GET_ANIM_SCENE_PHASE(uLocal_305[0]) > 0.997f)
				{
					PED::SET_PED_CONFIG_FLAG(Global_35, 26, false);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_349))
					{
						PED::_0x7E8F9949B7AABBF0(iLocal_349, 1, 1);
						TASK::_TASK_FLEE_FROM_PED(iLocal_349, Global_35, 0f, 0f, 0f, 150f, -1, 0, 3f, 0);
						func_113(&iLocal_349, 1, 0, 1);
					}
					func_406(1);
					PED::SET_PED_CONFIG_FLAG(Global_35, 360, true);
					func_343(Local_90[0 /*34*/], 1);
					return true;
				}
			}
			break;
	}
	if (bLocal_208 == 0)
	{
		if ((func_361(Local_90[0 /*34*/], 1, 1, 0, 0, 0) && func_468(Global_35, 1, 0, 0) != GET_HASH_KEY("WEAPON_LASSO")) && func_328(Global_35, iLocal_302, 1, 0))
		{
			func_50(&uLocal_350, 0);
		}
		else
		{
			func_407(&uLocal_350);
		}
		if (MISC::IS_BULLET_IN_AREA(-616.2f, -27.7f, 85.9f, 35f, true) || func_327(&uLocal_350, 0.75f))
		{
			func_343(Local_90[0 /*34*/], 1);
			func_359(Local_90[0 /*34*/], 1);
			func_606(cParam0, " ");
			func_607("LSHSS_IG0_LI_WB", 0);
			if (!func_361(Local_90[0 /*34*/], 1, 1, 0, 0, 0))
			{
				func_334(&(cParam0->f_2106), "LSHSS_SHOOT", 0);
			}
			func_325(&(cParam0->f_32));
			if (iVar0 == 0)
			{
				iVar0 = ENTITY::PIN_CLOSEST_MAP_ENTITY(GET_HASH_KEY("P_CHAIR20X"), -611.4f, -25.5f, 85.7f, 7);
				if (ENTITY::IS_MAP_ENTITY_PINNED(iVar0))
				{
					iVar1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iVar0));
				}
			}
			func_608(&(cParam0->f_352), Local_90[0 /*34*/]);
			func_608(&(cParam0->f_352), func_336(1189146288, 0));
			func_608(&(cParam0->f_352), func_336(906448125, 0));
			func_608(&(cParam0->f_352), iVar1);
			func_608(&(cParam0->f_352), iLocal_199);
			func_608(&(cParam0->f_352), iLocal_198);
			func_608(&(cParam0->f_352), Global_35);
			func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
			func_609(&(cParam0->f_32));
			if (((!func_328(Global_35, iLocal_302, 1, 0) && !func_328(Global_35, iLocal_303, 1, 0)) && MISC::ABSF(func_610(906448125)) < 0.3f) && MISC::ABSF(func_610(1189146288)) < 0.3f)
			{
				func_62(Local_90[0 /*34*/], -612.3f, -27.7f, 87.2f, 106f, 2, 1073741824 /* Float: 2f */);
			}
			func_63(0);
			bLocal_208 = true;
			return false;
		}
	}
	else
	{
		if (func_335())
		{
			func_331(0);
			if (func_337(func_336(906448125, 0), Global_35, 1, 1) > 1f && !func_338(906448125))
			{
				func_125(906448125, 0, 0);
				func_136(906448125, 1, 0f, 0, 0, 0f, 0, 0);
			}
			if (func_337(func_336(1189146288, 0), Global_35, 1, 1) > 1f && !func_338(1189146288))
			{
				func_125(1189146288, 0, 0);
				func_136(1189146288, 1, 0f, 0, 0, 0f, 0, 0);
			}
		}
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 8, 0, 1);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 3, 0, 1);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 19, 0, 1);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 15, 0, 1);
		if (!bLocal_210 && !func_611())
		{
			if (func_328(Global_35, iLocal_302, 1, 0) || func_328(Global_35, iLocal_303, 1, 0))
			{
				bLocal_210 = true;
			}
		}
		else if (!func_612("LSHSS_SHOOT"))
		{
			if (func_334(&(cParam0->f_2106), "LSHSS_COWER", 0))
			{
				MAP::BLIP_ADD_MODIFIER(Global_1392626[8 /*32*/].f_1, -1186550032);
				func_129(&(Global_1392626[8 /*32*/].f_8), 256);
				func_84();
				func_349("SELL_LOOK", 1);
				func_343(Local_90[0 /*34*/], 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_349))
				{
					PED::_0x7E8F9949B7AABBF0(iLocal_349, 1, 1);
					TASK::_TASK_FLEE_FROM_PED(iLocal_349, Global_35, 0f, 0f, 0f, 150f, -1, 0, 3f, 0);
					func_113(&iLocal_349, 1, 0, 1);
				}
				func_359(Local_90[0 /*34*/], 0);
				func_406(1);
				return true;
			}
		}
		return false;
	}
	if (iLocal_202 == 1)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(Global_35, -621.1f, -39.2f, 84.9f, 30f, 30f, 5f, false, true, 0))
		{
			func_344(cParam0, "SELL_LOOK", 0f, 0f, 0f);
			iLocal_202 = 0;
		}
	}
	if (func_332(524288))
	{
		func_205(&(cParam0->f_2277), 0, 0, 1, 0);
		func_64(4);
		return true;
	}
	return false;
}

void func_205(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_613((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_605(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

void func_206(char[4] cParam0)
{
}

int func_207(char[4] cParam0)
{
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		PED::DETACH_CARRIABLE_ENTITY(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35), false, !bLocal_208);
	}
	if (bLocal_208 == 0)
	{
		return 6;
	}
	return 8;
}

int func_208(var uParam0)
{
	return uParam0;
}

bool func_209(int iParam0)
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

bool func_210(int iParam0)
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

bool func_211(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_212(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_DEAD_OR_DYING(iParam0, true))
		{
			PED::_0x24C82EF607105FAA(iParam0, GET_HASH_KEY("SCRIPTEDINTIMIDATION"));
			PED::SET_PED_CONFIG_FLAG(iParam0, 431, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 359, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 477, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 225, true);
		}
	}
}

int func_213()
{
	return iLocal_15;
}

void func_214(int iParam0)
{
	Global_1572864.f_12 = iParam0;
}

void func_215(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	char[] cVar0[8];

	Global_1572864.f_8 = iParam0;
	Global_1572864.f_9 = iParam9;
	Global_1572864.f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_412(iParam0) == 1)
	{
		cVar0 = func_615(func_614(iParam0));
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
	}
	else if (func_412(iParam0) == 8)
	{
		cVar0 = func_617(func_616(iParam0));
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
	}
	func_467(1, 1);
	func_472(1, Param1, Param1.f_3);
	Global_1347394 = { Param5 };
	func_379(0);
	func_380(0);
	func_382(1f);
}

void func_216(bool bParam0)
{
	if (!PED::IS_PED_INJURED(Global_35))
	{
		PED::SET_LOOTING_FLAG(Global_35, 2, bParam0);
		PED::SET_LOOTING_FLAG(Global_35, 3, bParam0);
	}
}

void func_217(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		*iParam4 = func_618(iParam0, vParam1, iParam5, iParam6);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		func_619(*iParam4);
	}
}

bool func_218(int iParam0, vector3 vParam1, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		*iParam4 = func_618(iParam0, vParam1, iParam6, iParam7);
	}
	if (func_620(*iParam4))
	{
		if (!bParam5)
		{
			return true;
		}
		iVar0 = func_621();
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar0))
		{
			return ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0) != *iParam4;
		}
		return true;
	}
	return false;
}

void func_219(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		*iParam4 = func_618(iParam0, vParam1, iParam5, iParam6);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		func_622(*iParam4);
	}
}

void func_220(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	func_221(iParam0, vParam1, 0f, 0f, 0f, 0f, 0f, 0f, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
}

void func_221(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam10))
	{
		*iParam10 = func_618(iParam0, vParam1, iParam13, iParam14);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam10))
	{
		if (!func_159(vParam4) || !func_159(vParam7))
		{
			func_623(*iParam10, vParam4, vParam7);
		}
		func_624(*iParam10, iParam11, iParam12, iParam15);
	}
}

void func_222(int iParam0)
{
	if (!func_332(iParam0))
	{
		func_625(&iLocal_213, iParam0);
	}
}

bool func_223(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_224(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_252() == -1)
	{
		if (func_626(iParam0) && func_627(iParam0))
		{
			func_628(iParam0, iParam1, 1, &bParam2, iParam3);
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
	func_629(iParam0, iParam1);
	Var0 = { func_630(iParam0, 0, 1) };
	iVar5 = func_631(iParam0, &Var0, 0, 0);
	iVar6 = func_632(iParam0, 0);
	if ((iVar5 > 1 && !func_633()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_245(iParam0, -2051813666))
		{
			func_234(583, 1);
		}
		else
		{
			func_234(582, 0);
		}
	}
	if (func_634(iParam0, &Var0, *iParam1, 0, 0))
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
	switch (func_635(iParam0, -949239683))
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

int func_227(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_223(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_244(iParam0);
	if (iVar0 == GET_HASH_KEY("AMMO") || (bParam1 && iVar0 == GET_HASH_KEY("WEAPON")))
	{
		iVar1 = func_418(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == GET_HASH_KEY("WEAPON"))
	{
		return func_636(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_637(bParam2), iParam0, 0);
	return iVar2;
}

bool func_228(int iParam0)
{
	if (func_252() != -1)
	{
		return false;
	}
	return func_229(iParam0) != 0;
}

int func_229(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_638())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_639(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_230(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_231(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_638())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_230(iVar0))
		{
			if (func_134(func_639(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_232(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_640(48);
	func_641(0, -1);
}

bool func_233(int iParam0)
{
	if (func_252() != -1)
	{
		return false;
	}
	return func_265(Global_1347702[iParam0 /*49*/].f_15, 1);
}

void func_234(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_642(iParam0, &iVar0, &iVar1);
	if (!func_643(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_644(iVar0, iVar1);
}

int func_235(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_236(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

bool func_237()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_238(int iParam0)
{
	if (func_252() != -1)
	{
		return false;
	}
	return func_265(Global_1835011[iParam0 /*74*/].f_1, 1);
}

bool func_239(int iParam0)
{
	if (func_252() != -1)
	{
		return false;
	}
	if (!func_392(iParam0))
	{
		return false;
	}
	return func_180(Global_1347702[iParam0 /*49*/].f_15);
}

int func_240()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_134(func_645(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_241(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_237() && (func_239(38) || func_233(38)))
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
			if (func_237() && (func_239(39) || func_233(39)))
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
			iVar9 = func_646(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = GET_HASH_KEY("COL_EX_INTRO");
			break;
		case 41:
			if (func_237() && (func_239(41) || func_233(41)))
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
			if (func_237() && (func_239(49) || func_233(49)))
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
			iVar9 = func_646(iParam3, 20);
			iVar14 = GET_HASH_KEY("TAXIDERMY");
			iVar11 = GET_HASH_KEY("BLIP_RC_HOBBS");
			iVar13 = GET_HASH_KEY("COL_TX_INTRO");
			break;
	}
	sVar2 = func_647(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_648(iParam0, iVar13, iVar14))
	{
	}
	if (func_649(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_650(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_651(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_652(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_653(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_242(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_243(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_237() && (func_239(38) || func_233(38)))
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
			if (func_237() && (func_239(39) || func_233(39)))
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
			if (func_237() && (func_239(49) || func_233(49)))
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
		if (func_237() && (func_239(38) || func_233(38)))
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
			func_654(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_654(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_656(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, func_655(func_236(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_654(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_654(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == GET_HASH_KEY("DINO_BONES"))
	{
		if (func_237() && (func_239(39) || func_233(39)))
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
			func_654(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_654(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == GET_HASH_KEY("ROCK_CARVINGS"))
	{
		if (func_237() && (func_239(49) || func_233(49)))
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
			func_654(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_654(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_654(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_654(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_244(int iParam0)
{
	vector3 vVar0;

	if (!func_223(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_245(int iParam0, int iParam1)
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

bool func_246(int iParam0, int iParam1)
{
	if (!func_223(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

bool func_247(int iParam0)
{
	if (!func_657(iParam0))
	{
		return false;
	}
	return func_658(iParam0);
}

void func_248(int iParam0)
{
	if (!func_657(iParam0))
	{
		return;
	}
	func_659(iParam0);
	func_660(iParam0);
}

int func_249(int iParam0)
{
	struct<2> Var0;

	if (!func_223(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_250(int iParam0, bool bParam1)
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
	if (func_223(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_661(iVar0) || func_662(iVar0))
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

int func_251(int iParam0, bool bParam1)
{
	if (!func_223(iParam0, 0))
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

int func_252()
{
	return Global_1572887.f_12;
}

void func_253(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (!func_470(iParam0))
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

bool func_254(bool bParam0)
{
	if (func_252() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_637(bParam0));
}

bool func_255(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_630(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_663((398 + iVar28), 1);
			if (func_664(iParam0, &Var0, iVar5, 0))
			{
				if (func_665(iParam0, &Var6, iVar5))
				{
					Var29 = { func_666(iParam0, Var0, iVar5, 0) };
					func_667(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_254(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_256(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_668(iParam0, iParam1);
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

bool func_256(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_258(iParam0))
	{
		return false;
	}
	if (!func_254(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_257(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;

	iVar0 = func_251(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_252() == -1)
		{
			func_253(iVar0);
			if (iParam1 == 1248274121)
			{
				func_669(iVar0);
			}
		}
		if (!func_634(iParam0, &uVar1, 1, 0, 0))
		{
			func_628(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_670(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_255(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == GET_HASH_KEY("WEAPON_FISHINGROD") || iVar0 == GET_HASH_KEY("WEAPON_KIT_BINOCULARS"))
			{
				func_255(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == GET_HASH_KEY("WEAPON_LASSO"))
			{
				func_255(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0))
			{
				if (iVar0 == GET_HASH_KEY("WEAPON_MELEE_KNIFE_JOHN") && !func_671())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(iParam0))
				{
				}
				else if (!func_672(iVar0))
				{
					func_255(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_255(iVar0, WEAPON::GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_673(Global_35, 2, 0, 1);
				if ((((func_470(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_247(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_470(iVar7) && func_247(24))
				{
					if (!func_255(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_255(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_255(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_234(480, 1);
	}
	return true;
}

bool func_258(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_259(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_258(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_470(iVar4))
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
	if (func_134(GET_HASH_KEY("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == -897553835)
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
		func_296(func_674(iParam0), func_295(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_252() == -1)
		{
			if (func_265(Global_1835011[14 /*74*/].f_1, 1))
			{
				func_234(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_254(0))
	{
		if (func_256(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_301(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_260(int iParam0)
{
	var uVar0;

	if ((iParam0 == GET_HASH_KEY("PROVISION_TALISMAN_EAGLE_TALON") && !func_675()) || iParam0 != GET_HASH_KEY("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_676(Global_35, iParam0, &uVar0))
		{
			func_280(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_286();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_286();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_286();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_284();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_282();
			break;
	}
}

void func_261(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_282();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_283();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_284();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_285();
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
			func_286();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_HAWK_TALON"):
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_677();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_SHARK_TOOTH"):
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_TURTLE_SHELL"):
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_678();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_CAT_EYE"):
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_262(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_263(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

struct<2> func_264(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

bool func_265(int iParam0, bool bParam1)
{
	switch (func_506(iParam0))
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

void func_266(int iParam0)
{
	bool bVar0;

	bVar0 = func_245(iParam0, -2017733358);
	if (func_679() < 3)
	{
		if (bVar0)
		{
			if (func_681(func_680(iParam0), iParam0))
			{
				func_296(79, func_295(func_680(iParam0)), 1);
			}
			else
			{
				func_296(78, func_295(func_680(iParam0)), 1);
			}
		}
		else
		{
			func_296(80, func_295(func_682(iParam0)), 1);
		}
	}
}

bool func_267()
{
	if (((((func_683(GET_HASH_KEY("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_683(GET_HASH_KEY("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400)) || func_683(GET_HASH_KEY("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_683(GET_HASH_KEY("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_683(GET_HASH_KEY("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_683(GET_HASH_KEY("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return true;
	}
	return false;
}

int func_268(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_684(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_685(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_686(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_269(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("DOCUMENT_LETTER_TAXIDERMY"):
			func_241(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			func_243(51, 0, 0, 0, 0, -1, 0);
			func_687(8192);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_TAXIDERMY"):
			func_241(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			func_243(51, 0, 0, 0, 0, -1, 0);
			func_687(524288);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_DINO_BONES"):
			func_241(39, 0, 0, 0, 0, 0, 1, 0);
			func_243(39, 0, 0, 0, 0, -1, 0);
			func_688(16);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_RARE_FISH"):
			func_241(41, 0, 0, 0, 0, 0, 1, 0);
			func_243(41, 0, 0, 0, 0, -1, 0);
			func_689(8);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_241(49, 0, 0, 0, 0, 0, 1, 0);
			func_243(49, 0, 0, 0, 0, -1, 0);
			func_690(16);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_241(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_01"), func_691(1), 0, -1, 0);
			func_692(1);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_241(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_02"), func_691(2), 0, -1, 0);
			func_692(2);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_241(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_03"), func_691(4), 0, -1, 0);
			func_692(4);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_241(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_04"), func_691(8), 0, -1, 0);
			func_692(8);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_241(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_05"), func_691(16), 0, -1, 0);
			func_692(16);
			break;
	}
}

void func_270(int iParam0)
{
	if (func_693() == 1)
	{
		if (func_233(39))
		{
			func_234(342, 0);
		}
		else
		{
			func_234(343, 0);
			func_688(1);
		}
	}
	if (func_693() >= 30)
	{
		func_234(344, 0);
	}
	func_241(39, 0, 0, 0, 0, 0, -1, 0);
	func_243(39, 0, 0, func_693(), 30, 1, 0);
}

void func_271(int iParam0)
{
	if (func_694() == 1)
	{
		if (func_233(49))
		{
			func_234(409, 0);
		}
		else
		{
			func_234(410, 0);
			func_690(1);
		}
	}
	if (func_694() >= 10)
	{
		func_234(411, 0);
	}
	func_241(49, 0, 0, 0, 0, 0, -1, 0);
	func_243(49, 0, 0, func_694(), 10, 1, 0);
}

void func_272(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_01"), 1);
			func_234(437, 0);
			func_234(440, 0);
			func_695(GET_HASH_KEY("TAXIDERMY_ORDER_01"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			func_241(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			func_243(51, 0, 0, sVar0, func_646(GET_HASH_KEY("TAXIDERMY_ORDER_01"), 20), 1, 0);
			func_687(1);
			func_696(-748969569, 0, 0);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_02"), 1);
			func_695(GET_HASH_KEY("TAXIDERMY_ORDER_02"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			func_241(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			func_243(51, 0, 0, sVar0, func_646(GET_HASH_KEY("TAXIDERMY_ORDER_02"), 20), 1, 0);
			func_687(8);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_03"), 1);
			func_695(GET_HASH_KEY("TAXIDERMY_ORDER_03"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			func_241(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			func_243(51, 0, 0, sVar0, func_646(GET_HASH_KEY("TAXIDERMY_ORDER_03"), 20), 1, 0);
			func_687(64);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_04"), 1);
			func_695(GET_HASH_KEY("TAXIDERMY_ORDER_04"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			func_241(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			func_243(51, 0, 0, sVar0, func_646(GET_HASH_KEY("TAXIDERMY_ORDER_04"), 20), 1, 0);
			func_687(512);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_05"), 1);
			func_234(438, 0);
			func_695(GET_HASH_KEY("TAXIDERMY_ORDER_05"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			func_241(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			func_243(51, 0, 0, sVar0, func_646(GET_HASH_KEY("TAXIDERMY_ORDER_05"), 20), 1, 0);
			func_687(32768);
			break;
		default:
			func_234(439, 0);
			break;
	}
}

void func_273()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(GET_HASH_KEY("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(GET_HASH_KEY("SP_CHAL_EXPL_ROOT"), GET_HASH_KEY("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_274(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_252() == -1)
	{
		if (!func_233(43))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_LITTLE"))
			{
				func_234(348, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_REDDISH"))
			{
				func_234(350, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_SNOWY"))
			{
				func_234(352, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_234(400, 0);
			}
		}
		else if (func_245(iParam0, 412399755))
		{
			func_697(GET_HASH_KEY("EXOTIC_STAGE_01"));
			if (func_698() == 0)
			{
				func_641(0, 10);
				iVar1 = func_699(iParam0, iParam1, 1);
				if (((iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_700(iParam0) < func_701(iParam0))
					{
						func_241(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						func_243(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_233(44))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_HERON_FEATHER"))
			{
				func_234(354, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_234(399, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_234(401, 0);
			}
		}
		else if (func_245(iParam0, 709057512))
		{
			func_697(GET_HASH_KEY("EXOTIC_STAGE_02"));
			if (func_698() == 1)
			{
				func_641(0, 10);
				iVar1 = func_699(iParam0, iParam1, 2);
				if ((iParam0 == GET_HASH_KEY("PROVISION_HERON_FEATHER") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_700(iParam0) < func_701(iParam0))
					{
						func_241(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						func_243(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_233(45))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_GATOR_EGG"))
			{
				func_234(359, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_234(394, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_234(395, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_GHOST"))
			{
				func_234(398, 0);
			}
		}
		else if (func_245(iParam0, -1478961327))
		{
			func_697(GET_HASH_KEY("EXOTIC_STAGE_03"));
			if (func_698() == 2)
			{
				func_641(0, 10);
				iVar1 = func_699(iParam0, iParam1, 4);
				if (iParam0 == GET_HASH_KEY("PROVISION_GATOR_EGG"))
				{
					if (!func_702(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0)) >= 25)
					{
						func_703(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0), 1);
						func_640(48);
					}
					if (func_700(iParam0) < func_701(iParam0))
					{
						func_241(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_243(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_700(iParam0) < func_701(iParam0))
					{
						func_241(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_243(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_233(46))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_SPOONBILL_FEATHER"))
			{
				func_234(356, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_234(402, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_234(404, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_234(406, 0);
			}
		}
		else if (func_245(iParam0, -1238404098))
		{
			func_697(GET_HASH_KEY("EXOTIC_STAGE_04"));
			if (func_698() == 3)
			{
				func_641(0, 10);
				iVar1 = func_699(iParam0, iParam1, 8);
				if (((iParam0 == GET_HASH_KEY("PROVISION_SPOONBILL_FEATHER") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_700(iParam0) < func_701(iParam0))
					{
						func_241(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						func_243(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_233(47))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_234(396, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_234(397, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_234(405, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_234(403, 0);
			}
		}
		else if (func_245(iParam0, 1160548794))
		{
			func_697(GET_HASH_KEY("EXOTIC_STAGE_05"));
			if (func_698() == 4)
			{
				func_641(0, 10);
				iVar1 = func_699(iParam0, iParam1, 16);
				if (((iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_700(iParam0) < func_701(iParam0))
					{
						func_241(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						func_243(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_275(int iParam0)
{
	int iVar0;

	if (iParam0 == GET_HASH_KEY("PROVISION_GATOR_EGG"))
	{
		if (!func_702(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0)) >= 25)
		{
			func_703(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0), 1);
			func_640(48);
		}
	}
}

void func_276(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, GET_HASH_KEY("TAXIDERMY"), GET_HASH_KEY("TAXIDERMY_ORDER"));
		if (func_134(func_704(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_705(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_706(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_277(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_252() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_268(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case GET_HASH_KEY("MONEY_ONE_DOLLAR"):
			func_268(GET_HASH_KEY("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_FIVE_DOLLARS"):
			func_268(GET_HASH_KEY("REWARD_FIVE_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_TEN_DOLLARS"):
			func_268(GET_HASH_KEY("REWARD_TEN_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_BILLFOLD"):
			func_268(GET_HASH_KEY("REWARD_BILLFOLD"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_BILLFOLD_SML"):
			func_268(GET_HASH_KEY("REWARD_BILLFOLD_SML"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_BILLSTACK"):
			func_268(GET_HASH_KEY("REWARD_BILLSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COIN"):
			func_268(GET_HASH_KEY("REWARD_COIN"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINPURSE"):
			func_268(GET_HASH_KEY("REWARD_COINPURSE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINSACK"):
			func_268(GET_HASH_KEY("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINSTACK"):
			func_268(GET_HASH_KEY("REWARD_COINS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_MONEYCLIP"):
			func_268(GET_HASH_KEY("REWARD_MONEYCLIP"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_MONEYSTACK"):
			func_268(GET_HASH_KEY("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_MONEYSTACK_LARGE"):
			if (!func_707())
			{
				func_268(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case GET_HASH_KEY("MONEY_COINCUP_SM"):
			func_268(GET_HASH_KEY("REWARD_COINCUP_SM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINCUP_LG"):
			func_268(GET_HASH_KEY("REWARD_COINCUP_LG"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("CURRENCY_CASH"):
			func_268(GET_HASH_KEY("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_CARD_SET_COMMON"):
			func_268(GET_HASH_KEY("REWARD_CARD_SET_COMMON"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_CARD_SET_RARE"):
			func_268(GET_HASH_KEY("REWARD_CARD_SET_RARE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_CARD_SET_ALL"):
			func_268(GET_HASH_KEY("REWARD_CARD_SET_ALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_RARE_FISH"):
			func_268(GET_HASH_KEY("REWARD_RARE_FISH"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_1"):
			func_268(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_2"):
			func_268(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_3"):
			func_268(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_4"):
			func_268(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_5"):
			func_268(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_CALLOWAY_LETTER"):
			func_268(GET_HASH_KEY("REWARD_CALLOWAY_LETTER"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

void func_278(int iParam0)
{
	if (func_233(41))
	{
		func_234(363, 0);
	}
	else
	{
		func_234(362, 0);
	}
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			func_708(GET_HASH_KEY("LEGENDARY_FISH_01"));
			func_709(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_01"));
			func_710(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_01"));
			func_641(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			func_708(GET_HASH_KEY("LEGENDARY_FISH_02"));
			func_709(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_02"));
			func_710(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_02"));
			func_641(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			func_708(GET_HASH_KEY("LEGENDARY_FISH_03"));
			func_709(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_03"));
			func_710(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_03"));
			func_641(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			func_708(GET_HASH_KEY("LEGENDARY_FISH_04"));
			func_709(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_04"));
			func_710(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_04"));
			func_641(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			func_708(GET_HASH_KEY("LEGENDARY_FISH_05"));
			func_709(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_05"));
			func_710(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_05"));
			func_641(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_MUSKIE_LEGENDARY"):
			func_708(GET_HASH_KEY("LEGENDARY_FISH_06"));
			func_709(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_06"));
			func_710(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_06"));
			func_641(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_PERCH_LEGENDARY"):
			func_708(GET_HASH_KEY("LEGENDARY_FISH_07"));
			func_709(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_07"));
			func_710(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_07"));
			func_641(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			func_708(GET_HASH_KEY("LEGENDARY_FISH_08"));
			func_709(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_08"));
			func_710(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_08"));
			func_641(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			func_708(GET_HASH_KEY("LEGENDARY_FISH_09"));
			func_709(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_09"));
			func_710(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_09"));
			func_641(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			func_708(GET_HASH_KEY("LEGENDARY_FISH_10"));
			func_709(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_10"));
			func_710(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_10"));
			func_641(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			func_708(GET_HASH_KEY("LEGENDARY_FISH_11"));
			func_709(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_11"));
			func_710(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_11"));
			func_641(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			func_708(GET_HASH_KEY("LEGENDARY_FISH_12"));
			func_709(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_12"));
			func_710(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_12"));
			func_641(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			func_708(GET_HASH_KEY("LEGENDARY_FISH_13"));
			func_709(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_13"));
			func_710(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_13"));
			func_641(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			func_708(GET_HASH_KEY("LEGENDARY_FISH_14"));
			func_709(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_14"));
			func_710(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

void func_279(int iParam0, int iParam1)
{
	var uVar0;

	func_711(iParam0, iParam1, &uVar0);
}

int func_280(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_630(iParam1, 1, 0) };
		iParam3 = func_712(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_714(iParam1, iParam2, func_713(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_715(1, (func_252() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946804.f_57[func_713(iParam3, 1) /*11*/])
			{
				func_716(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_717(32768) && iParam1 != Global_1946804.f_57[func_713(iParam3, 1) /*11*/])
			{
				func_718();
				func_716(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_716(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_719(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_716(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_488(0);
			func_720(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_716(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_281(int iParam0, bool bParam1)
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
	iVar18 = func_673(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_673(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_721("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_722(&Var3, iVar2, iVar0, iVar1))
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
						func_723(iVar0);
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

void func_282()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_283()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_284()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_285()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_286()
{
	func_724();
	func_725();
	func_726();
}

void func_287(int iParam0, int iParam1, bool bParam2)
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

void func_288(int iParam0, bool bParam1)
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
	func_654(MISC::VAR_STRING(2, sVar1), MISC::VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar3), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_289(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_290(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_291(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_292(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_293(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_294(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_295(int iParam0)
{
	if (!func_223(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_296(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_642(iParam0, &iVar0, &iVar1);
	if (!func_643(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_727(iParam0, 1024))
	{
		return;
	}
	func_644(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_297(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_642(iParam0, &iVar0, &iVar1);
	if (!func_643(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_727(iParam0, 1024))
	{
		return;
	}
	func_644(iVar0, iVar1);
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

int func_298()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_638())
	{
		return func_299();
	}
	iVar4 = (func_638() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_638())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_728(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_639(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_299()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_638());
	return func_639(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_300(int iParam0)
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

bool func_301(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_223(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_630(iParam0, 0, 1) };
	Var5 = { func_666(iParam0, Var0, Var0.f_4, 0) };
	return func_729(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_302(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_252() != -1)
	{
		return;
	}
	switch (func_249(iParam0))
	{
		case 81053684:
			if (iParam0 == GET_HASH_KEY("KIT_BANDANA") && func_730(81053684, 0) <= 0)
			{
				func_716(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == GET_HASH_KEY("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == GET_HASH_KEY("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				func_716(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_731(iParam0);
			if (func_732(iVar0))
			{
				func_733(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_716(30, iParam0, 0, 0, 0);
			}
			if (func_734() == -2125499975 || func_734() == -449205311)
			{
				switch (iParam0)
				{
					case GET_HASH_KEY("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case GET_HASH_KEY("CLOTHING_GUNSLINGER_OUTFIT"):
						func_716(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_734() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						func_716(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_735(-525676072, 0))
			{
				if (func_736(-525676072, &iVar1))
				{
					func_716(33, iVar1, 0, 0, 0);
				}
			}
			func_716(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == GET_HASH_KEY("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == GET_HASH_KEY("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!func_737(GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_280(Global_35, iParam0, 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_248(24);
		if (func_281(&iVar2, 0))
		{
			func_255(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_303(int iParam0)
{
	if (func_245(iParam0, 943695443))
	{
		func_738(0, iParam0);
	}
	else if (func_245(iParam0, -2096528786))
	{
		func_738(1, iParam0);
	}
	else if (func_245(iParam0, -1094167013))
	{
		func_738(2, iParam0);
	}
	else if (func_245(iParam0, 1936654645))
	{
		func_738(3, iParam0);
	}
	else if (func_245(iParam0, 1306489306))
	{
		func_738(4, iParam0);
	}
	else if (func_245(iParam0, 435762317))
	{
		func_738(5, iParam0);
	}
	else if (func_245(iParam0, 1259363210))
	{
		func_738(6, iParam0);
	}
	else if (func_245(iParam0, 881398259))
	{
		func_738(7, iParam0);
	}
	else if (func_245(iParam0, -541549214))
	{
		func_738(8, iParam0);
	}
	else if (func_245(iParam0, 130796156))
	{
		func_738(-1, iParam0);
	}
}

int func_304(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	func_739(&Var4, GET_HASH_KEY("LOOT_TYPE_NORMAL"));
	return func_740(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_305(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_223(iParam0, 0))
	{
		return Var0;
	}
	if (func_245(iParam0, -305066475))
	{
		if (func_252() == -1)
		{
			if (func_245(iParam0, -537818634))
			{
				return func_741(GET_HASH_KEY("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_741(GET_HASH_KEY("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_245(iParam0, -537818634))
	{
		return func_741(GET_HASH_KEY("MEDICINE_ITEMS"));
	}
	if (func_245(iParam0, 2084895747))
	{
		return func_741(GET_HASH_KEY("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

void func_306(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_BIRD_FEATHER_FLIGHT"):
			if (func_252() == -1)
			{
				if (func_265(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_234(109, 1);
				}
			}
			break;
	}
}

void func_307(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_743(func_742(0));
	func_745(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_744(iParam0), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_308(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (!func_223(iParam0, 0))
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
	if (!func_746())
	{
		func_747(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_748(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_748(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_246(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_244(iParam0);
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
	else if (!func_749(iParam0, &Var7, iVar11, iVar10, 0, GET_HASH_KEY("UI_ITEMVIEWER")))
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
	sVar15 = func_750(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_295(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_245(iParam0, 1443104131)) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_295(iParam0));
	}
	func_745(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

void func_309(char[4] cParam0)
{
}

bool func_310(char[4] cParam0)
{
	if (cParam0->f_2 == 3)
	{
		if (!func_751(cParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_311()
{
	return func_752(1);
}

void func_312(int iParam0)
{
	func_753(1, iParam0, 0);
}

bool func_313(var uParam0, int iParam1)
{
	return (uParam0->f_1430 && iParam1) != 0;
}

struct<8> func_314(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_754(uParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { func_755() };
	}
	return Var0;
}

void func_315(var uParam0, char* sParam1)
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
	func_534(uParam0, sParam1);
	func_482(uParam0, 2097152, 1);
	func_316(uParam0, 33554432);
	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_228, sParam1, true);
}

void func_316(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

Vector3 func_317(var uParam0, int iParam1)
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
			vVar10 = { func_756(vVar10) * Vector(2f, 2f, 2f) };
			vVar0[0 /*3*/] = { uParam0->f_782[iParam1 /*41*/].f_1 + uParam0->f_782[iParam1 /*41*/].f_4 / Vector(2f, 2f, 2f) + vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[0 /*3*/], &(vVar0[0 /*3*/].f_2), false);
			vVar0[1 /*3*/] = { uParam0->f_782[iParam1 /*41*/].f_1 + uParam0->f_782[iParam1 /*41*/].f_4 / Vector(2f, 2f, 2f) - vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[1 /*3*/], &(vVar0[1 /*3*/].f_2), false);
			if (!func_159(vVar0[0 /*3*/]))
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
			if (!func_159(vVar0[0 /*3*/]))
			{
				return vVar0[0 /*3*/];
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_318(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_319(var uParam0, int iParam1)
{
	uParam0->f_1430 = (uParam0->f_1430 - (uParam0->f_1430 && iParam1));
}

bool func_320(var uParam0, int iParam1)
{
	return (uParam0->f_1432.f_1 && iParam1) != 0;
}

bool func_321(var uParam0, int iParam1)
{
	return func_757(uParam0->f_27, iParam1);
}

int func_322(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
{
	int iVar0;

	func_475(uParam4, &cParam0);
	if (func_474(uParam4, 2) && !func_474(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_SKIP_CUTSCENE"), false);
	}
	if (func_758(uParam4) != 1)
	{
		func_759(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (func_758(uParam4))
	{
		case 1:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_228, false))
				{
					func_760(uParam4, &cParam0);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228))
				{
					func_761(uParam4, 4);
					return 0;
				}
				else if (func_762(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_221);
				}
				func_761(uParam4, 3);
			}
			else if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_230)) && func_474(uParam4, 134217728))
				{
				}
				else
				{
					func_763(uParam4);
				}
				func_165(&(uParam4->f_1));
				func_761(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_486(uParam4);
				if (!func_49(&(uParam4->f_1)))
				{
					func_50(&(uParam4->f_1), 0);
				}
				else if (func_352(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
					}
					func_761(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228) || !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
			{
				if (func_161(uParam4, &cParam0, 1, 1))
				{
					if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
					{
						func_761(uParam4, 4);
					}
					else if (!func_159(func_476(uParam4)) && !func_155(Global_35, func_476(uParam4), 100f, 1, 1))
					{
						func_764(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_476(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_352(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
					}
					func_761(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::UPDATE_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
					func_765(1, 0);
					func_760(uParam4, &cParam0);
					func_761(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (func_352(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
				}
				func_761(uParam4, 4);
			}
			break;
		case 3:
			func_766(uParam4);
			if (func_762(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_221);
			}
			if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_228, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228) || func_474(uParam4, 512)))
			{
				if (!func_474(uParam4, 1024) && func_767(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!func_474(uParam4, 512))
				{
					func_165(&(uParam4->f_1));
					func_316(uParam4, 512);
					func_761(uParam4, 4);
				}
				else if (func_474(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				func_759(uParam4);
			}
			if (func_474(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((func_768(uParam4) - func_769(uParam4)))) <= 2f)
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
				if (func_770(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && func_769(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (func_771(uParam4))
			{
				if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
				}
				func_772(uParam4);
				func_773(uParam4);
				return 1;
			}
			else
			{
				if (func_474(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228))
						{
							ANIMSCENE::TRIGGER_ANIM_SCENE_SKIP(uParam4->f_228);
						}
						func_165(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						func_316(uParam4, 512);
						func_482(uParam4, 67108864, 1);
						func_761(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!func_474(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228)) && CAM::IS_SCREEN_FADED_OUT()) && func_769(uParam4) <= 5000) && func_769(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!func_474(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_774(&(uParam4->f_285), 0);
					func_316(uParam4, 536870912);
				}
				if (func_769(uParam4) >= 5000 && func_769(uParam4) <= (func_768(uParam4) - 5000))
				{
					func_775();
				}
			}
			break;
		case 6:
			if (func_771(uParam4))
			{
				func_772(uParam4);
				func_773(uParam4);
				return 1;
			}
			break;
		case 4:
			if (func_474(uParam4, 524288))
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
						func_316(uParam4, 1073741824 /* Float: 2f */);
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
					Stack.Push(!func_762(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_222);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_228, false);
						}
						func_761(uParam4, 3);
					}
					else if (func_352(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_228, false);
						}
						func_761(uParam4, 3);
					}
				}
				if (func_758(uParam4) == 3)
				{
					if (func_474(uParam4, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		case 5:
			func_761(uParam4, 4);
			break;
	}
	return 0;
}

void func_323(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		if (func_474(uParam0, 16))
		{
			POPULATION::_0xA1CFB35069D23C23(uParam0->f_4);
			POPULATION::_0x74C2B3DC0B294102(uParam0->f_4);
			func_776(uParam0);
			PATHFIND::_0xD17672447692478E(uParam0->f_4, 0);
		}
	}
	if (func_474(uParam0, 8))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_4);
		func_482(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_482(uParam0, 16, 1);
}

void func_324(char[4] cParam0)
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
			if (func_490(cParam0->f_32.f_4, &Var0))
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

void func_325(int* iParam0)
{
	struct<247> Var0;

	Var0 = 1;
	Var0.f_13 = 17;
	Var0.f_218 = 1097859072;
	Var0.f_219 = 1101004800;
	Var0.f_246 = 4;
	MISC::_COPY_MEMORY(iParam0, &Var0, 314);
}

bool func_326(char[4] cParam0)
{
	vector3 vVar0;
	int iVar10;
	int iVar11;

	if (bLocal_204)
	{
		if (bLocal_297)
		{
			func_50(&uLocal_353, 0);
			if ((((func_353(&uLocal_353, 15f) && !func_611()) && !bLocal_205) && !ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uLocal_305[6], "s_Reveal_Shove", true)) && !ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uLocal_305[6], "s_Reveal_Gun", true))
			{
				if (iLocal_356 < 4)
				{
					func_334(&(cParam0->f_2106), "LSHSS_SEARCH", 0);
					iLocal_356++;
					func_165(&uLocal_353);
				}
			}
		}
		iVar10 = 0;
		while (iVar10 <= (7 - 1))
		{
			if (!Local_19[iVar10 /*10*/])
			{
				if (iLocal_194 == 0)
				{
					iLocal_194 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false);
					iLocal_201 = 0;
				}
				else if (func_218(Local_19[iVar10 /*10*/].f_3, Local_19[iVar10 /*10*/].f_4, &(Local_19[iVar10 /*10*/].f_2), 0, 0, 0))
				{
					iVar11 = 0;
					iVar11 = 0;
					while (iVar11 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
					{
						if (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar11) == -1730772208 && SCRIPTS::GET_EVENT_EXISTS(0, -1730772208))
						{
							if (SCRIPTS::GET_EVENT_DATA(0, iVar11, &vVar0, 10))
							{
								if (vVar0.z != 0)
								{
									if (vVar0.z != iLocal_201)
									{
										if (vVar0.z == Local_19[iVar10 /*10*/].f_8)
										{
											if (vVar0.z != GET_HASH_KEY("PROVISION_GOLDRING") && !func_332(Local_19[iVar10 /*10*/].f_7))
											{
												if (iLocal_214 < 5)
												{
													func_334(&(cParam0->f_2106), &(Local_314[iLocal_214 /*2*/]), 0);
												}
												func_222(Local_19[iVar10 /*10*/].f_7);
											}
											iLocal_214++;
											Local_19[iVar10 /*10*/] = 1;
											iLocal_194 = 0;
											iLocal_201 = vVar0.z;
											func_165(&uLocal_353);
											return false;
										}
									}
								}
							}
						}
						iVar11++;
					}
				}
			}
			iVar10++;
		}
		if (iLocal_214 >= 3)
		{
			if (bLocal_205 == 0)
			{
				bLocal_205 = true;
				AUDIO::_0xAC84686C06184B0D("Question_Debtor_Scene", "LSHSS_Scenes");
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 130, false);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 297, true);
				if (MAP::DOES_BLIP_EXIST(iLocal_163))
				{
					MAP::REMOVE_BLIP(&iLocal_163);
				}
				if (MAP::DOES_BLIP_EXIST(iLocal_162))
				{
					MAP::REMOVE_BLIP(&iLocal_162);
				}
				if (MAP::DOES_BLIP_EXIST(iLocal_161))
				{
					MAP::REMOVE_BLIP(&iLocal_161);
				}
				if (MAP::DOES_BLIP_EXIST(iLocal_164))
				{
					MAP::REMOVE_BLIP(&iLocal_164);
				}
				if (MAP::DOES_BLIP_EXIST(iLocal_160))
				{
					MAP::REMOVE_BLIP(&iLocal_160);
				}
				if (MAP::DOES_BLIP_EXIST(iLocal_165))
				{
					MAP::REMOVE_BLIP(&iLocal_165);
				}
			}
		}
	}
	if (!func_332(16777216))
	{
		if (func_777(Local_90[0 /*34*/], 0))
		{
			func_362(4, GET_HASH_KEY("HONOR_EVENT_AMBIENT_KILL"), 0, "", Local_90[0 /*34*/], 0, 1065353216 /* Float: 1f */, 0);
			func_222(16777216);
		}
	}
	if (bLocal_206)
	{
		if (!func_332(2048) && func_134(GET_HASH_KEY("PROVISION_GOLDRING"), iLocal_215 + 1, 0))
		{
			if (!func_611())
			{
				func_334(&(cParam0->f_2106), "LSHSS_RING", 0);
				func_222(2048);
			}
		}
	}
	if (bLocal_205 == 1)
	{
		if ((!func_332(8388608) && !func_311()) && !func_611())
		{
			func_50(&uLocal_191, 0);
			if (func_353(&uLocal_191, 2f))
			{
				func_334(&(cParam0->f_2106), "LSHSS_DEBT", 0);
				func_222(8388608);
			}
		}
		if (MAP::DOES_BLIP_EXIST(iLocal_163))
		{
			MAP::REMOVE_BLIP(&iLocal_163);
		}
		if (MAP::DOES_BLIP_EXIST(iLocal_162))
		{
			MAP::REMOVE_BLIP(&iLocal_162);
		}
		if (MAP::DOES_BLIP_EXIST(iLocal_161))
		{
			MAP::REMOVE_BLIP(&iLocal_161);
		}
		if (MAP::DOES_BLIP_EXIST(iLocal_164))
		{
			MAP::REMOVE_BLIP(&iLocal_164);
		}
		if (MAP::DOES_BLIP_EXIST(iLocal_160))
		{
			MAP::REMOVE_BLIP(&iLocal_160);
		}
		if (MAP::DOES_BLIP_EXIST(iLocal_165))
		{
			MAP::REMOVE_BLIP(&iLocal_165);
		}
		if (iLocal_214 == 5 && iLocal_203 == 0)
		{
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uLocal_305[6], false))
			{
				ANIMSCENE::ABORT_ANIM_SCENE(uLocal_305[6], false);
				func_64(8);
				bLocal_206 = true;
			}
			MISC::_0xE98D55C5983F2509(Local_90[0 /*34*/]);
			if (MAP::DOES_BLIP_EXIST(iLocal_163))
			{
				MAP::REMOVE_BLIP(&iLocal_163);
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_162))
			{
				MAP::REMOVE_BLIP(&iLocal_162);
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_161))
			{
				MAP::REMOVE_BLIP(&iLocal_161);
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_164))
			{
				MAP::REMOVE_BLIP(&iLocal_164);
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_165))
			{
				MAP::REMOVE_BLIP(&iLocal_165);
			}
			ENTITY::SET_ENTITY_HEALTH(Local_90[0 /*34*/], 75, 0);
			iLocal_203 = 1;
			func_334(&(cParam0->f_2106), "LSHSS_PULLOFF", 0);
		}
		if (iLocal_203 == 1 && func_213() != 11)
		{
			if ((func_361(Local_90[0 /*34*/], 1, 1, 0, 0, 0) || TASK::IS_PED_GETTING_UP(Local_90[0 /*34*/])) && !func_357(Local_90[0 /*34*/], 474215631))
			{
				TASK::CLEAR_PED_TASKS(Local_90[0 /*34*/], true, false);
				MAP::REMOVE_BLIP(&iLocal_160);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_90[0 /*34*/], GET_HASH_KEY("REL_NO_RELATIONSHIP"));
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 44, true);
				PED::SET_PED_CAN_BE_TARGETTED(Local_90[0 /*34*/], false);
				TASK::TASK_COWER(Local_90[0 /*34*/], -1, Global_35, 0);
			}
		}
		return true;
	}
	return false;
}

bool func_327(var uParam0, float fParam1)
{
	if (func_353(uParam0, fParam1))
	{
		func_407(uParam0);
		return true;
	}
	return false;
}

bool func_328(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_329(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_1934765.f_21[iVar1], iVar2);
}

void func_330(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(&(Global_1934765.f_21[iVar1]), iVar2);
}

void func_331(bool bParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_TOGGLE_HOLSTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_SADDLE_TRANSFER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_PICKUP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_PICKUP_CARRIABLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_PICKUP_CARRIABLE2"), false);
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_ATTACK2"), false);
	}
}

bool func_332(int iParam0)
{
	return func_211(iLocal_213, iParam0);
}

bool func_333(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

bool func_334(var uParam0, char* sParam1, bool bParam2)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam1, 24);
	return func_778(uParam0, cVar0, 0, -1, bParam2, 0);
}

bool func_335()
{
	if (func_173())
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == iLocal_195)
		{
			return true;
		}
	}
	return false;
}

int func_336(int iParam0, int iParam1)
{
	int iVar0;

	func_125(iParam0, 0, 0);
	if (func_415(iParam0))
	{
		iVar0 = ENTITY::_0xF7424890E4A094C0(iParam0, iParam1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

float func_337(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_338(int iParam0)
{
	func_125(iParam0, 0, 0);
	if (func_415(iParam0))
	{
		return (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 2 || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 1);
	}
	return false;
}

bool func_339(char* sParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(sParam0) && AUDIO::IS_SCRIPTED_CONVERSATION_PLAYING(sParam0))
	{
		return true;
	}
	return false;
}

void func_340(int iParam0, int iParam1)
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
	func_779(iParam0, &iParam1, 0);
	func_408(&iParam1);
	func_780(iParam0, 0);
	if (MISC::IS_BIT_SET(iParam0->f_21, 3))
	{
		func_781(iParam0, 0);
	}
	func_782(iParam0);
	func_783(iParam0, iParam1);
	func_784(iParam0);
	func_785(iParam0);
}

void func_341(int* iParam0)
{
	func_600(iParam0, "", 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
}

void func_342(int iParam0, int iParam1, int iParam2, char* sParam3)
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

void func_343(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 1)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 301, true);
		}
	}
}

void func_344(char[4] cParam0, char* sParam1, vector3 vParam2)
{
	if (!func_786(sParam1, 0, 0, -1, -1, 0))
	{
		func_787(sParam1);
		if (!func_49(&(cParam0->f_2067)))
		{
			func_50(&(cParam0->f_2067), 0);
		}
		else
		{
			func_165(&(cParam0->f_2067));
		}
		cParam0->f_2073 = { vParam2 };
		cParam0->f_2076 = MISC::GET_DISTANCE_BETWEEN_COORDS(cParam0->f_2073, Global_36, true);
	}
}

char* func_345(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "script@proc@loansharking@horsesell@leadin@mcs1@ilo";
			break;
		case 1:
			sVar0 = "script@proc@loansharking@horsesell@leadin@mcs1@goddamn_it";
			break;
		case 2:
			sVar0 = "script@proc@loansharking@horsesell@leadin@mcs1@base";
			break;
		case 3:
			sVar0 = "script@proc@loansharking@horsesell@leadin@mcs1@front";
			break;
		case 4:
			sVar0 = "script@proc@loansharking@horsesell@leadin@mcs1@back";
			break;
		case 5:
			sVar0 = "script@proc@loansharking@horsesell@ig1_surrender";
			break;
		case 6:
			sVar0 = "script@proc@loansharking@horsesell@ig2_drawer";
			break;
		case 7:
			sVar0 = "script@proc@loansharking@horsesell@ig4_exitbarn";
			break;
	}
	return sVar0;
}

bool func_346(var uParam0, char* sParam1, int iParam2, char* sParam3)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, iParam2, sParam3, false, true);
	}
	else if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(*uParam0, false) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam0, true))
	{
		ANIMSCENE::RESET_ANIM_SCENE(*uParam0, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
		{
			return true;
		}
		else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam0, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		}
	}
	return false;
}

bool func_347()
{
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 32768, 0))
	{
		return true;
	}
	return false;
}

void func_348(char* sParam0)
{
	int iVar0;

	if (func_339(sParam0))
	{
		iVar0 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(sParam0);
		if (AUDIO::_0x254B0241E964B450(sParam0, iVar0) == Local_90[0 /*34*/])
		{
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_GRAPPLE_ATTACK"), false);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 7, 0, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 20, 2, 1);
		}
		else
		{
			PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_GRAPPLE_ATTACK"), true);
			PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_ATTACK"), true);
			PED::SET_PED_RESET_FLAG(Global_35, 337, true);
			PED::SET_PED_RESET_FLAG(Global_35, 338, true);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 7, 0, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 20, 2, 0);
		}
	}
}

void func_349(char* sParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0.f_1 = sParam0;
	iVar2 = UIFEED::_0x4E88A65968A55C78(&Var0, iParam1);
	if (func_788(iVar2))
	{
		UIFEED::_0x2F901291EF177B02(iVar2, 0);
	}
}

float func_350(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_351()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;

	ANIMSCENE::GET_ANIM_SCENE_ORIGIN(uLocal_305[5], &uVar9, &vVar6, 2);
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_90[0 /*34*/], true, false) };
	vVar0.f_2 = (vVar0.z - 1f);
	vVar3 = { vVar0 };
	vVar6.f_2 = ENTITY::GET_ENTITY_HEADING(Local_90[0 /*34*/]);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uLocal_305[5], vVar3, vVar6, 2);
}

float func_352(var uParam0)
{
	if (!func_49(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_166(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_789() - uParam0->f_1);
}

bool func_353(var uParam0, float fParam1)
{
	if (!func_49(uParam0))
	{
		return false;
	}
	if (func_352(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_354(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		ENTITY::SET_ENTITY_HEALTH(iParam0, iParam1, 0);
	}
}

void func_355(int iParam0, bool bParam1)
{
	if (func_415(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

var func_356(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_357(int iParam0, int iParam1)
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

void func_358(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

void func_359(int iParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 263, !bParam1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 138, bParam1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 488, bParam1);
	}
}

bool func_360(char[4] cParam0)
{
	if (bLocal_206 == 0)
	{
		if (func_328(Global_35, iLocal_302, 1, 0) || func_328(Global_35, iLocal_303, 1, 0))
		{
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_ATTACK"), true);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_AIM"), true);
		}
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uLocal_305[6], false) && !func_333(1))
		{
			if (func_603(PLAYER::GET_PLAYER_INDEX(), Local_90[0 /*34*/]) && !func_332(2097152))
			{
				if (!PED::IS_PED_CARRYING_SOMETHING(Global_35))
				{
					if (!func_613(iLocal_16[0]))
					{
						iLocal_16[0] = func_790("SELL_THRT", GET_HASH_KEY("INPUT_INTERACT_LOCKON_ROB"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0);
						func_791(iLocal_16[0], 1, 1);
						func_792(iLocal_16[0], 1, 1);
						HUD::_UIPROMPT_SET_GROUP(Global_1945938[func_793(iLocal_16[0]) /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Local_90[0 /*34*/]), 0);
					}
					else if (func_794(iLocal_16[0], 1))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, -611.4f, -29.5f, 86f, (1f * 1.5f), -1, 0.25f, 0, 40000f);
						func_605(&(iLocal_16[0]), 1, 1);
						func_334(&(cParam0->f_2106), "LSHSS_IG3_MOVE", 0);
						bLocal_206 = true;
						func_222(2097152);
					}
				}
			}
			else if (func_613(iLocal_16[0]))
			{
				func_605(&(iLocal_16[0]), 1, 1);
			}
		}
		if (!func_332(1048576))
		{
			func_598(&(Local_90[0 /*34*/]), &Global_35, -1);
			func_222(1048576);
		}
		if ((func_361(Local_90[0 /*34*/], 1, 1, 0, 0, 0) && func_350(Global_35, -613.1f, -30.9f, 86f, 1) > 0.5f) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_90[0 /*34*/], true, false), 5f, true))
		{
			if ((ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uLocal_305[6], "s_base", true) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uLocal_305[6], "s_Idle_01", true)) && !func_218(Local_19[3 /*10*/].f_3, Local_19[3 /*10*/].f_4, &(Local_19[3 /*10*/].f_2), 0, 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uLocal_305[6], "pl_Reveal_Gun", true);
				func_605(&(iLocal_16[0]), 1, 1);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 130, true);
				TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_325, true);
				TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[4 /*10*/].f_9, true);
				bLocal_206 = true;
			}
			else
			{
				ANIMSCENE::ABORT_ANIM_SCENE(uLocal_305[6], false);
				func_605(&(iLocal_16[0]), 1, 1);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 130, true);
				TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_325, true);
				TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[4 /*10*/].f_9, true);
				PED::_0x949B2F9ED2917F5D(Global_35, 0);
				PED::_0x949B2F9ED2917F5D(Global_35, 1);
				PED::_0x949B2F9ED2917F5D(Global_35, 2);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 456, true);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_90[0 /*34*/], -614.8f, -29.5f, 85.3f, 1f, -1, 0.25f, 0, -88.8f);
				bLocal_206 = true;
				return true;
			}
		}
	}
	else
	{
		if (func_332(2097152))
		{
			if (!func_357(Global_35, 713668775) && !ANIMSCENE::_0x1F0E401031E20146(uLocal_305[6], "pl_Reveal_Shove"))
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uLocal_305[6], "pl_Reveal_Shove", true);
				TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_325, true);
				TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[4 /*10*/].f_9, true);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 130, true);
			}
		}
		if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(uLocal_305[6], false))
		{
			if (!func_611() || AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LSHSS_REVEAL") >= 1)
			{
				TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[4 /*10*/].f_9, true);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_90[0 /*34*/], -614.8f, -29.5f, 85.3f, 1f, -1, 0.25f, 0, -88.8f);
				TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_325, true);
				PED::_0x949B2F9ED2917F5D(Global_35, 0);
				PED::_0x949B2F9ED2917F5D(Global_35, 1);
				PED::_0x949B2F9ED2917F5D(Global_35, 2);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 456, true);
				iLocal_357 = 1;
				return true;
			}
		}
	}
	return false;
}

bool func_361(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_337(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_795(iVar0, 0)))
		{
			if (func_796(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

void func_362(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_252() != -1)
	{
		return;
	}
	if ((Global_36616 && func_797(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_798(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != GET_HASH_KEY("HONOR_EVENT_AMBIENT_KILL") && iParam1 != GET_HASH_KEY("HONOR_EVENT_AMBIENT_KO")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_KILL_VERMIN")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_KILL_HORSE")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_799(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_800(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_799(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

bool func_363(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 9);
}

bool func_364(int iParam0)
{
	return (Global_40.f_9052.f_21 && iParam0) != 0;
}

void func_365(int iParam0)
{
	Global_40.f_9052.f_21 = (Global_40.f_9052.f_21 || iParam0);
}

int func_366()
{
	return Global_1899515;
}

void func_367(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_801(*iParam0);
	iVar1 = func_802(*iParam0);
	iVar2 = func_803(*iParam0);
	iVar3 = func_428(*iParam0);
	iVar4 = func_804(*iParam0);
	iVar5 = func_805(*iParam0);
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
	iVar6 = func_806(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_806(iVar1, iVar0);
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
	func_807(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_368(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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

	if (!func_100(iParam0))
	{
		return;
	}
	if (func_506(iParam0) == 4)
	{
		func_808(iParam0, func_366());
		if (!func_507(iParam0) == 5 && !func_507(iParam0) == 6)
		{
			if (bParam3)
			{
				func_388(iParam0, 6);
			}
			else
			{
				func_388(iParam0, 5);
			}
			func_809(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_512(1);
	}
	iVar0 = func_412(iParam0);
	bVar1 = func_252() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_810(0, 2);
		if (!bVar1 && bParam1)
		{
			func_811();
		}
	}
	else
	{
		func_513(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_812(iParam0);
	}
	else
	{
		Var2 = { func_741(GET_HASH_KEY("DEATHS_ON_CURRENT_DEED")) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!func_515(32768))
		{
			Var4 = { func_741(GET_HASH_KEY("LAST_MISSION_NAME")) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && func_507(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_391(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[76 /*74*/].f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[func_391(iParam0) /*74*/].f_8), true);
						}
					}
					else if ((func_391(iParam0) != 95 && func_391(iParam0) != 82) && !func_393(Global_1347702[func_391(iParam0) /*49*/].f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1347702[func_391(iParam0) /*49*/].f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[func_391(iParam0) /*74*/].f_8), true);
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
		func_814(func_391(iParam0), iVar6, func_813());
	}
	else if (iVar0 == 8)
	{
		func_815(func_391(iParam0), iVar6, func_813(), func_528());
	}
	if (!func_507(iParam0) == 5 && !func_507(iParam0) == 6)
	{
		iVar9 = func_816(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_817(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!Global_1879534 && !Global_1879534.f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_818(func_391(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_819((iVar10 - 20), 0, iVar10);
					iVar11 = func_819((iVar11 - 10), 0, iVar11);
				}
				func_820(1);
				func_821(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528.f_217 = 1;
				break;
			case 4:
				func_821(45, 0, 1);
				break;
			case 8:
				iVar10 = func_822(func_391(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_819((iVar10 - 20), 0, iVar10);
					iVar11 = func_819((iVar11 - 10), 0, iVar11);
				}
				func_821(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_823(func_391(iParam0)))
				{
					func_362(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				Global_1899528.f_217 = 1;
				break;
			case 9:
				func_821(120, 0, 1);
				break;
			case 2:
				func_821(120, 0, 1);
				break;
			case 6:
				func_821(func_824(func_413(iParam0)), 0, 1);
				break;
			case 5:
				func_821(120, 0, 1);
				break;
		}
	}
	func_526(iParam0, 1);
	func_808(iParam0, func_366());
	func_809(iParam0);
	if ((!func_507(iParam0) == 0 && bParam1) && func_252() == -1)
	{
		iVar12 = func_521(iParam0);
		if (iVar12 != -1)
		{
			func_85(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_522();
			if (iVar12 != -1)
			{
				func_85(0);
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
				switch (func_391(iParam0))
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
				if (func_392(func_391(iParam0)) && func_393(Global_1347702[func_391(iParam0) /*49*/].f_12, 4))
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
				if (func_391(iParam0) != 77)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = func_633();
				}
				break;
			case 8:
				if (func_391(iParam0) != 58)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = func_633();
				}
				break;
		}
	}
	if (!func_507(iParam0) == 5 && !func_507(iParam0) == 6)
	{
		if (bParam3)
		{
			func_388(iParam0, 6);
		}
		else
		{
			func_388(iParam0, 5);
		}
		func_809(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_391(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					case 1:
						func_825();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_68(GET_HASH_KEY("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_68(GET_HASH_KEY("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_68(GET_HASH_KEY("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_68(GET_HASH_KEY("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_68(GET_HASH_KEY("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_68(GET_HASH_KEY("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_68(GET_HASH_KEY("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_68(GET_HASH_KEY("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_68(GET_HASH_KEY("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_68(GET_HASH_KEY("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_826(GET_HASH_KEY("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_68(GET_HASH_KEY("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_826(GET_HASH_KEY("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_68(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_826(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_68(GET_HASH_KEY("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_826(GET_HASH_KEY("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_68(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_826(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_68(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_826(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_68(GET_HASH_KEY("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_826(GET_HASH_KEY("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_68(GET_HASH_KEY("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_826(GET_HASH_KEY("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_68(GET_HASH_KEY("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_826(GET_HASH_KEY("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_68(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_826(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_68(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_826(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_68(GET_HASH_KEY("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_826(GET_HASH_KEY("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_68(GET_HASH_KEY("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_68(GET_HASH_KEY("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_68(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_68(GET_HASH_KEY("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_827();
						func_828(GET_HASH_KEY("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
						func_829();
						func_830();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(func_831(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131 /* GXTEntry: "Jamie Gillis" */);
						break;
					case 15:
						func_68(GET_HASH_KEY("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_HUNT_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_HUNT_ROOT"), true);
							func_234(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_GAMB_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_GAMB_ROOT"), true);
							func_234(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_832(304805134, 1, 1);
						if (!func_265(Global_1347702[21 /*49*/].f_15, 1))
						{
							func_368(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
						func_833();
						break;
					case 26:
						func_834();
						break;
					case 17:
						func_835(Global_35, GET_HASH_KEY("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
						if (func_836())
						{
							func_837(GET_HASH_KEY("WEAPON_REPEATER_EVANS"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_838(GET_HASH_KEY("TP_RMAY_LETTER_1"), -1))
						{
							iVar15 = func_366();
							func_367(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_839(GET_HASH_KEY("TP_RMAY_LETTER_1"), iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_836())
						{
							func_837(GET_HASH_KEY("WEAPON_REVOLVER_LEMAT"));
						}
						break;
					case 34:
						if (func_836())
						{
							func_837(GET_HASH_KEY("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_840();
						break;
					case 37:
						func_841();
						if (func_675())
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
						func_842();
						break;
					case 43:
						func_843();
						break;
					case 44:
						if (!func_265(Global_1347702[82 /*49*/].f_15, 1))
						{
							func_368(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
						if (!func_265(Global_1347702[83 /*49*/].f_15, 1))
						{
							func_368(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_844();
						break;
					case 59:
						func_845();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_846();
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
						func_847();
						if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_SURV_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_SURV_ROOT"), true);
							func_234(451, 0);
						}
						if (!func_848(GET_HASH_KEY("TAXIDERMY_ORDER_05")))
						{
							if (func_848(GET_HASH_KEY("TAXIDERMY_ORDER_04")))
							{
								iVar16 = func_366();
								func_367(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_839(GET_HASH_KEY("TP_TAXIDERMY_REWARD_04_ES"), iVar16, 1);
							}
						}
						if (func_849(4))
						{
							if (!func_134(GET_HASH_KEY("DOCUMENT_NOTE_RARE_FISH"), 1, 0))
							{
								iVar17 = func_366();
								func_367(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_839(GET_HASH_KEY("TP_RF_INVITATION_01"), iVar17, 1);
							}
						}
						func_68(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_68(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_850(89200);
						func_850(2300);
						func_850(2300);
						break;
					case 68:
						func_851();
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
						func_852();
						func_850(-139100);
						break;
					case 69:
						if (func_265(Global_1347702[9 /*49*/].f_15, 1))
						{
							func_850(-6000);
						}
						break;
					case 70:
						func_850(23400);
						func_850(1900);
						func_850(-15000);
						break;
					case 71:
						func_850(-5500);
						break;
				}
				break;
			case 8:
				switch (func_391(iParam0))
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
						func_853();
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
						func_854();
						break;
					case 66:
						func_855();
						func_856();
						break;
					case 67:
						if (!func_857(6))
						{
							func_858(6);
						}
						if (!func_857(3))
						{
							func_858(3);
						}
						if (func_836())
						{
							func_837(GET_HASH_KEY("WEAPON_PISTOL_M1899"));
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
						if (func_265(Global_1835011[69 /*74*/].f_1, 1))
						{
							func_859(0);
							func_850(40500);
						}
						else
						{
							func_859(0);
							func_850(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_391(iParam0))
				{
					case 0:
						switch (func_413(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297 /* GXTEntry: "Mrs. Londonderry" */);
								break;
						}
						break;
				}
				break;
		}
		func_860(iParam0);
		func_861();
		switch (iVar0)
		{
			case 1:
				switch (func_391(iParam0))
				{
					case 4:
						func_862(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_862(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						func_862(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_862(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_862(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_862(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_862(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_863(iParam0);
						func_862(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_862(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_862(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_134(GET_HASH_KEY("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_68(GET_HASH_KEY("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_862(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_862(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_862(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (func_863(iParam0) == 0)
						{
							func_862(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							func_862(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_393(Global_1347702[func_391(iParam0) /*49*/].f_12, 536870912))
				{
					func_864(11, 1);
				}
				switch (func_391(iParam0))
				{
					case 109:
						func_862(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						func_864(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_862(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_862(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_862(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_862(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_865(0, 10, 11, GET_HASH_KEY("CABR01")))
				{
					func_862(iParam0, func_863(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_865(0, 7, 11, GET_HASH_KEY("CACR02")))
				{
					func_862(iParam0, func_866(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_865(0, 8, 11, GET_HASH_KEY("CACR03")))
				{
					func_862(iParam0, func_866(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_865(0, 11, 11, GET_HASH_KEY("CACR01")))
				{
					func_862(iParam0, func_866(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_865(0, 12, 11, GET_HASH_KEY("CACR04")))
				{
					func_862(iParam0, func_866(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_507(iParam0) == 0)
			{
				if (func_509(iParam0) == 0)
				{
				}
				else if (STATS::STATSTRACKER_IS_INITIALIZED(func_509(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_867(func_412(iParam0), func_509(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_391(iParam0) == 58)
						{
							Global_1879514.f_1 = iParam0;
						}
						func_869(func_868(Global_1879514.f_1));
						if (iVar0 == 8 && func_391(iParam0) == 58)
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
						if (func_392(func_391(iParam0)) && func_393(Global_1347702[func_391(iParam0) /*49*/].f_12, 1))
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
			func_641(bParam2, iVar20);
		}
	}
	func_525(1);
	if ((bVar13 || func_633()) && (func_412(iParam0) == 1 || func_412(iParam0) == 8))
	{
		Global_1879534.f_6 = 1;
		Global_1879534.f_7 = 1;
	}
}

void func_369(int iParam0)
{
	if (!func_363(iParam0))
	{
		return;
	}
	else if (!func_100(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_40.f_9052, iParam0))
	{
		func_110(iParam0);
		MISC::SET_BIT(&(Global_40.f_9052), iParam0);
	}
	if (func_506(Global_1392626[iParam0 /*32*/].f_3) == 3)
	{
		func_399(Global_1392626[iParam0 /*32*/].f_3, 0, 2);
	}
}

bool func_370(int iParam0)
{
	iParam0 = func_870(iParam0);
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

bool func_371(int iParam0)
{
	int iVar0;

	iParam0 = func_870(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_370(iParam0))
	{
		return false;
	}
	iVar0 = func_871(iParam0);
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

void func_372(int iParam0)
{
	int iVar0;

	iParam0 = func_870(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_370(iParam0))
	{
		return;
	}
	iVar0 = func_871(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_373(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_374()
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

int func_375(int iParam0)
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

void func_376(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

char* func_377(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return MISC::VAR_STRING(2, func_872(sParam1));
}

void func_378(int iParam0)
{
	Global_1572864.f_11 = iParam0;
}

void func_379(bool bParam0)
{
	Global_1572864.f_14 = bParam0;
	if (bParam0)
	{
		func_381(1);
	}
}

void func_380(bool bParam0)
{
	Global_1572864.f_13 = bParam0;
	if (bParam0)
	{
		func_381(0);
	}
}

void func_381(int iParam0)
{
	Global_1572864.f_15 = iParam0;
}

void func_382(float fParam0)
{
	Global_1572864.f_22 = fParam0;
}

void func_383(bool bParam0)
{
	if (func_873())
	{
		Global_1357509 = 1;
	}
	if (func_874(GET_HASH_KEY("CAMERA_ITEM")))
	{
	}
	if (bParam0 && Global_1935630.f_44 == GET_HASH_KEY("WEAPON_KIT_CAMERA"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_UNARMED"), true, 0, false, false);
		Global_1935630.f_44 = GET_HASH_KEY("WEAPON_UNARMED");
	}
}

bool func_384(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_385()
{
	return Global_1572864.f_12;
}

void func_386(bool bParam0)
{
	int iVar0;
	struct<16> Var1;

	if (func_788(Global_1935630.f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_875();
	Var1.f_3.f_3 = iVar0;
	if ((!func_876(Global_1347343.f_2) && !func_384(Global_1347343.f_11, 64)) || func_515(32768))
	{
		Var1.f_7 = func_877();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_384(Global_1347343.f_11, 1024) && !func_515(32768))
	{
		Var1.f_11 = func_878();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_384(Global_1347343.f_11, 8))
	{
		Var1.f_15 = func_879();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343.f_1 != 2)
	{
		Global_1935630.f_3 = func_880(&Var1, "REPLAY_T", &(Global_1347343.f_3), 0, 1);
	}
	else
	{
		Global_1935630.f_3 = func_881(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !ENTITY::IS_ENTITY_ATTACHED(Global_35))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
	}
	func_93(&(Global_1347343.f_11), 1073741824 /* Float: 2f */);
	if (bParam0)
	{
		func_93(&(Global_1347343.f_11), 1048576);
	}
	CAM::_0x16E9ABDD34DDD931();
}

void func_387(int iParam0)
{
	int iVar0;

	if (!func_100(iParam0))
	{
		return;
	}
	if (iParam0 != func_99(0))
	{
		return;
	}
	if (func_509(iParam0) == 0)
	{
	}
	iVar0 = func_412(iParam0);
	if (func_507(iParam0) == 3)
	{
		if (func_509(iParam0) == 0)
		{
		}
		else if (STATS::STATSTRACKER_IS_INITIALIZED(func_509(iParam0)))
		{
			if (func_412(iParam0) != 1 && func_412(iParam0) != 8)
			{
				func_867(func_412(iParam0), func_509(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_809(iParam0);
	func_512(1);
	func_513(0);
	func_388(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_820(1);
			func_821(15, 0, 1);
			break;
		case 4:
			func_821(10, 0, 1);
			break;
		case 8:
			func_821(10, 0, 1);
			break;
		case 9:
			func_821(10, 0, 1);
			break;
		case 2:
			func_821(10, 0, 1);
			break;
		case 6:
			func_821(10, 0, 1);
			break;
		case 5:
			func_821(10, 0, 1);
			break;
	}
	func_525(1);
}

void func_388(int iParam0, int iParam1)
{
	if (!func_100(iParam0))
	{
		return;
	}
	func_882(iParam0, iParam1);
}

var func_389(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_390()
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

int func_391(int iParam0)
{
	if (!func_100(iParam0))
	{
		return -1;
	}
	return func_884(func_883(iParam0));
}

bool func_392(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_393(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_394(int iParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, iParam0, 0);
}

bool func_395(int iParam0, float fParam1, float fParam2)
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
			fParam1 = func_350(iParam0, Global_36, 0);
		}
		if (fParam1 > fParam2)
		{
			return true;
		}
	}
	return false;
}

void func_396(int* iParam0)
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

void func_397(int iParam0, int iParam1)
{
	if (func_252() != -1)
	{
		return;
	}
	if (!func_501(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] = (Global_24887[iParam0 /*2*/] - (Global_24887[iParam0 /*2*/] && iParam1));
}

int func_398(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_426(iParam0))
	{
		return 0;
	}
	if (!func_885(iParam0, &iVar1, &iVar2, 0, 0))
	{
		return 0;
	}
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		if (!func_886((iVar1 + iVar0)))
		{
			iVar3 = 0;
		}
		iVar0++;
	}
	return iVar3;
}

void func_399(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_100(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_180(iParam0) && !func_181(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_509(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_180(iParam0))
	{
		iParam2 = -1;
	}
	if (func_507(iParam0) == 3 || (func_507(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_509(iParam0))))
	{
		func_867(func_412(iParam0), func_509(iParam0), iParam2);
		if ((!func_100(Global_1572864.f_8) && !func_98(0, 1, 0)) && !func_168(Global_1935630, 32768))
		{
			iVar0 = func_521(iParam0);
			if (iVar0 != -1)
			{
				func_85(0);
			}
			else if (func_412(iParam0) == 8)
			{
				iVar0 = func_522();
				if (iVar0 != -1)
				{
					func_85(0);
				}
			}
		}
	}
	func_388(iParam0, 0);
	if (func_99(0) == iParam0)
	{
		func_512(1);
		func_513(0);
		func_525(1);
	}
	func_526(iParam0, 1);
	func_809(iParam0);
}

int func_400(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	vector3 vVar0;
	int iVar3;

	if (!func_501(iParam0))
	{
		return 0;
	}
	if (!func_503(func_502(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_504(iParam0)))
	{
		func_887(iParam0, 0);
		return 0;
	}
	vVar0 = { iParam2, iParam3, iParam4 };
	if (!func_888(iParam0, 0))
	{
		if (bParam1)
		{
			if (!func_889(iParam0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!func_159(vVar0))
	{
		PERSCHAR::_0x59C7AD6FEA2AC449(func_504(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = PERSCHAR::_0x08FC896D2CB31FCC(func_504(iParam0), 0);
	}
	else
	{
		iVar3 = PERSCHAR::_0x0CADC3A977997472(func_504(iParam0), 0);
	}
	if (!func_159(vVar0))
	{
		PERSCHAR::_0xBB68908CD11AEBDC(func_504(iParam0));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return 1;
	}
	return 0;
}

void func_401(int* iParam0, bool bParam1, bool bParam2)
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
		if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, true, true);
		}
	}
	if (bParam2)
	{
		OBJECT::_MARK_OBJECT_FOR_DELETION(*iParam0);
	}
	else
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
	}
}

void func_402(int* iParam0)
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
	if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
	{
		ENTITY::DETACH_ENTITY(*iParam0, true, true);
	}
	OBJECT::DELETE_OBJECT(iParam0);
}

void func_403(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_404()
{
	int iVar0;

	if (func_146(Global_35, 1))
	{
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_146(Local_90[iVar0 /*34*/], 1))
		{
			PED::SET_PED_KEEP_TASK(Local_90[iVar0 /*34*/], true);
		}
		iVar0++;
	}
}

void func_405(int iParam0)
{
	if (func_415(iParam0) && func_890())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

void func_406(bool bParam0)
{
	Global_1935496.f_15 = !bParam0;
}

void func_407(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_408(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		MISC::_0xE98D55C5983F2509(*iParam0);
		PED::SET_PED_CONFIG_FLAG(*iParam0, 297, false);
	}
}

void func_409(var uParam0)
{
	*uParam0 = 0;
}

void func_410(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	func_891(vVar0, 0);
}

void func_411(vector3 vParam0, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_892(vVar0, vVar3, 0f) };
	vVar9 = { func_893(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, 0, 1);
	}
	else
	{
		PATHFIND::_0x6C3F12ECEB6D2E2A(vVar6, vVar9, iParam4, 1);
	}
}

int func_412(int iParam0)
{
	if (!func_100(iParam0))
	{
		return 0;
	}
	return func_894(func_883(iParam0));
}

int func_413(int iParam0)
{
	if (!func_100(iParam0))
	{
		return -1;
	}
	return func_895(func_883(iParam0));
}

int func_414(var uParam0)
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

bool func_415(int iParam0)
{
	if (func_896(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

int func_416(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_STRING_NULL((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_417(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_223(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_418(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_721("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_722(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_470(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_723(iVar1);
				return true;
			}
			iVar3++;
		}
		func_723(iVar1);
	}
	return false;
}

int func_418(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_223(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_244(iParam0);
	if (iVar0 == GET_HASH_KEY("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == GET_HASH_KEY("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_245(iParam0, 1399091007))
	{
		func_711(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_419(int iParam0, int iParam1, bool bParam2, int iParam3)
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
	Var0 = { func_897(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_899(&Var0, func_898(0));
	}
	if (!func_900(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_722(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_667(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_723(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_420(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_223(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_630(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_901(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_666(iParam0, Var0, Var0.f_4, bParam4) };
	return func_667(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_421(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (func_245(iParam0, 606799272))
		{
			func_902(iParam0, iParam1);
		}
		if (func_245(iParam0, -1112814642) && func_245(iParam0, -1697809989))
		{
			func_276(iParam0, iParam1, 1, 0);
		}
	}
}

void func_422(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_415(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

bool func_423()
{
	return true;
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
	if (func_159(vParam0))
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
		if (func_903(vParam0))
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
	func_904(iVar0, bParam8);
	return iVar0;
}

void func_425(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_426(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_427(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888.f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_428(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_429(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_430(int iParam0)
{
	int iVar0;

	if (!func_905(iParam0))
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

int func_431(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_906(bParam1, bParam2, bParam3);
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

void func_432(var uParam0, bool bParam1, int iParam2)
{
	func_907(iParam2);
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
		uParam0->f_13 = func_908(0);
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
							func_121(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_909(1))
						{
							func_121(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_909(1) || *uParam0 & 8192 != 0))
				{
					func_120(uParam0, 33554432);
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
			if (func_910(uParam0))
			{
				uParam0->f_15 = func_167();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_167() - uParam0->f_15) > 500)
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
	func_911(uParam0);
}

bool func_433(int iParam0, var uParam1)
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
			if (!func_912(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_913(iParam0, iVar2) <= func_914(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_434(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_915(iParam2, 1, 1, 1, 0))
	{
		func_121(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_916(uParam1, 1);
	func_152();
}

bool func_435(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_361(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_917(uParam1);
			if (func_918(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_919(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_916(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_916(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_436(int iParam0, int iParam1, var uParam2)
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
	if (func_920(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_917(uParam2);
		if (func_918(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_919(uParam2)
				{
					func_916(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_437(int iParam0, var uParam1)
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
	if (func_912(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_919(uParam1)
		{
			fVar3 = func_917(uParam1);
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

bool func_438(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_167();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_439(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_921(uParam2);
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
			if (func_447(uParam2, iParam1))
			{
				func_916(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_440(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_922(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_447(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_916(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_441(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_923(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_916(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_916(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, 0, 0);
					if (func_924(iParam1, vVar0, vVar4))
					{
						func_916(uParam2, 1);
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
					func_916(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, 0, 0);
					if (func_924(iParam1, vVar0, vVar7))
					{
						func_916(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_442(int iParam0, var uParam1)
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
		if (!func_912(iParam0, uParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_925(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_926(Global_1935630.f_34[iVar0]))
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
			if (func_927(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_928(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_929(uParam1, iParam0, fVar1, iVar0))
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

bool func_443(int iParam0, var uParam1)
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

bool func_444(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_167();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_445(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_930(iVar0, &iVar2))
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
	if (func_931(iVar0, iParam0))
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

int func_446(var uParam0, int iParam1)
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

bool func_447(var uParam0, int iParam1)
{
	if (func_932(uParam0))
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

bool func_448(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_337(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_449()
{
}

bool func_450(var uParam0, int iParam1)
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
		if (func_933(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_167();
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
						if (func_350(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_167();
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

bool func_451()
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
	if ((func_167() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_452(var uParam0, int iParam1)
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
	fVar0 = func_914(uParam0);
	if (uParam0->f_12 > func_934(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_935(iParam1);
	iVar1 = func_936(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, uParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_453(int iParam0, int iParam1, var uParam2)
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
	return func_937(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_454(int iParam0, var uParam1)
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
		if (func_938(iParam0, uParam1, 1))
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
					if (!func_939(uParam1, iParam0))
					{
						if (func_350(iVar4, Global_36, 1) < 7f)
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

bool func_455(int iParam0, var uParam1)
{
	if (!func_940(0))
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

bool func_456(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_167();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_457(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_458(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_167();
	}
	else if (func_167() - uParam1->f_4) > func_941(uParam1)
	{
		return func_942(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_459(var uParam0, int iParam1)
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

void func_460(char[4] cParam0, int iParam1)
{
	cParam0->f_14 = iParam1;
}

bool func_461(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_462(int iParam0, bool bParam1)
{
	if (!func_461(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_943(iParam0), func_944(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_943(iParam0), func_944(iParam0), 2, "");
		func_945(iParam0, 16);
	}
	else
	{
		if (func_461(iParam0, 8))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_943(iParam0), func_944(iParam0), 1, "");
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_943(iParam0), func_944(iParam0), 0, "");
		}
		func_946(iParam0, 16);
	}
}

void func_463(int iParam0, bool bParam1)
{
	if (Global_1347702[iParam0 /*49*/].f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_461(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_943(iParam0), func_944(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_461(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_943(iParam0), func_944(iParam0), 1, "");
		}
		func_945(iParam0, 8);
	}
	else
	{
		if (func_461(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_943(iParam0), func_944(iParam0), 0, "");
		}
		func_946(iParam0, 8);
	}
}

float func_464(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_465(int iParam0)
{
	func_948(iParam0, func_947(iParam0), (Global_1392626[iParam0 /*32*/].f_4 / 2f));
}

void func_466(int iParam0, int iParam1)
{
	if (func_363(iParam0))
	{
		Global_40.f_9052.f_11[iParam0] = (Global_40.f_9052.f_11[iParam0] || iParam1);
	}
}

void func_467(int iParam0, bool bParam1)
{
	if (func_252() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_515(32768))
	{
		return;
	}
	if (!func_515(32768))
	{
		func_949(1, bParam1);
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
	if (func_515(32768))
	{
		Global_2621440[iParam0 /*12066*/].f_9.f_14 = func_366();
	}
}

int func_468(int iParam0, bool bParam1, bool bParam2, bool bParam3)
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

int func_469(int iParam0, int iParam1)
{
	var uVar0;

	return func_950(&uVar0, iParam0, iParam1);
}

bool func_470(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != GET_HASH_KEY("WEAPON_UNARMED"));
}

void func_471(bool bParam0, bool bParam1)
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
			if (func_470(iVar3) && WEAPON::IS_WEAPON_A_GUN(iVar3))
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
		func_951(1);
	}
}

void func_472(int iParam0, vector3 vParam1, var uParam4)
{
	Global_2621440[iParam0 /*12066*/].f_9.f_7 = { vParam1 };
	Global_2621440[iParam0 /*12066*/].f_9.f_13 = uParam4;
	Global_2621440[iParam0 /*12066*/].f_9 = 5;
	Global_2621440[iParam0 /*12066*/].f_9.f_15 = func_952(vParam1, 1);
}

void func_473(char[4] cParam0, char* sParam1)
{
	StringCopy(&(cParam0->f_2208), sParam1, 16);
}

bool func_474(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

void func_475(var uParam0, char* sParam1)
{
	int iVar0;

	if (func_474(uParam0, 8192))
	{
		return;
	}
	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		iVar0 = MISC::_0x94E8CA3DEE952789(sParam1, "@");
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_224), {func_953("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 4);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_224), {func_953("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_316(uParam0, 8192);
}

Vector3 func_476(var uParam0)
{
	return uParam0->f_5;
}

Vector3 func_477(var uParam0)
{
	var uVar0;
	vector3 vVar8;
	var uVar11;
	vector3 vVar14;

	MemCopy(&uVar0, {func_954(uParam0)}, 8);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_229))
	{
		uParam0->f_229 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_224), 0, 0, false, true);
	}
	else if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_229, false))
	{
		if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_229, func_955(Global_35), &vVar14, false, 0, 2))
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

void func_478(var uParam0, vector3 vParam1)
{
	if (func_159(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
}

float func_479(var uParam0)
{
	return uParam0->f_219;
}

void func_480()
{
	struct<4> Var0;

	Global_1946804.f_858 = (Global_1946804.f_858 - 1);
	if (Global_1946804.f_858 <= 0)
	{
		Var0 = 35;
		func_956(Var0);
	}
}

void func_481(var uParam0)
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

void func_482(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228)) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_228))
	{
		ANIMSCENE::_0x8A8208AE92BF87A5(uParam0->f_228);
	}
}

float func_483(var uParam0)
{
	return uParam0->f_218;
}

struct<8> func_484(var uParam0)
{
	return uParam0->f_230;
}

void func_485(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (func_474(uParam0, 16))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_4) && !func_957(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_958());
		func_316(uParam0, 8);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_959(uParam0, uParam0->f_4, 0, 1);
		PATHFIND::SET_ROADS_IN_VOLUME(uParam0->f_4, false, false, bParam2);
		func_316(uParam0, 16);
	}
}

void func_486(var uParam0)
{
	if ((!func_474(uParam0, 32768) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228)) && ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_228, false))
	{
		func_960(uParam0);
		func_961(uParam0, 0);
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_228, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_228);
		}
		func_316(uParam0, 32768);
	}
}

bool func_487()
{
	return Global_1946804.f_1497 != Global_1946804.f_2163.f_1;
}

void func_488(int iParam0)
{
	struct<4> Var0;

	if (func_962(iParam0, 4096))
	{
		Global_1946804.f_858++;
	}
	if (Global_1946804.f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_956(Var0);
}

char* func_489(int iParam0)
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

bool func_490(int iParam0, var uParam1)
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

void func_491(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_789() - fParam1);
	func_963(uParam0, 1);
	func_964(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_492(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(&(Global_1934765.f_21[iVar1]), iVar2);
}

void func_493(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_494(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_965(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_495(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;

	iVar0 = 512;
	if (iParam4 & 1 != 0)
	{
		iVar0 |= 524288;
	}
	if (iParam4 & 2 != 0)
	{
		iVar0 |= 1536;
	}
	if (iParam4 & 4 != 0)
	{
		iVar0 |= 2560;
	}
	if (iParam4 & 8 != 0)
	{
		iVar0 |= 4608;
	}
	if (iParam4 & 16 != 0)
	{
		iVar0 |= 8704;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_496(int iParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6, float fParam7, float fParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if (!func_146(*uParam1, 0))
	{
		if (!func_20(Global_1392626[iParam0 /*32*/].f_9, 256) || CAM::IS_SCREEN_FADED_OUT())
		{
			*uParam1 = func_494(iParam2, vParam3, fParam6, fParam7, fParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, 0, 0);
			if (func_146(*uParam1, 0))
			{
				func_29(&(Global_1392626[iParam0 /*32*/].f_9), 256);
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_497(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_958());
	}
}

void func_498(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_499(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		*uParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_958());
	}
}

void func_500(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

bool func_501(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_502(int iParam0)
{
	if (!func_501(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_503(int iParam0)
{
	return iParam0 != 0;
}

int func_504(int iParam0)
{
	if (!func_501(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

bool func_505(var uParam0, int iParam1, char* sParam2)
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

int func_506(int iParam0)
{
	if (!func_100(iParam0))
	{
		return -1;
	}
	return func_507(iParam0);
}

int func_507(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_966(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

bool func_508(int iParam0)
{
	return func_506(iParam0) == 0;
}

int func_509(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_498[iParam0 /*2*/].f_1;
}

void func_510(int iParam0)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;
	struct<8> Var5;
	struct<8> Var13;
	int iVar21;

	if (!func_905(iParam0))
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

void func_511(int iParam0)
{
	if (!func_100(iParam0))
	{
		return;
	}
	func_968(iParam0, func_967(iParam0) + 1);
}

void func_512(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_86(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_184(&Global_1935630, 4194304);
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

int func_513(bool bParam0)
{
	if (!bParam0 && func_969(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(GET_HASH_KEY("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

int func_514(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_970(iParam0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1898164.f_162 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1898164.f_162;
	func_971(iParam0, iVar0);
	Global_1898164.f_162++;
	if (iParam1 < 0 || iParam1 >= Global_1898164.f_162)
	{
		return iVar0;
	}
	func_972(iVar0, iParam1);
	return iParam1;
}

bool func_515(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

void func_516(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_517(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_518(int iParam0)
{
	Global_1572864.f_3 = (Global_1572864.f_3 - (Global_1572864.f_3 && iParam0));
}

void func_519(bool bParam0)
{
	func_973(bParam0);
	func_974(bParam0);
	func_975(bParam0);
	func_976(bParam0);
	func_977(bParam0);
	func_978(bParam0);
	func_979(bParam0);
	func_980(bParam0);
}

void func_520(bool bParam0)
{
	if (func_252() != -1)
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
		func_234(89, 1);
		ATTRIBUTE::_START_PERIODIC_ICON(5);
	}
	else
	{
		func_234(90, 1);
		ATTRIBUTE::_STOP_PERIODIC_ICON(5);
	}
	func_981(1, bParam0, 1);
	func_286();
	Global_40.f_11095.f_43 = bParam0;
}

int func_521(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_412(iParam0))
	{
		case 1:
			iVar0 = func_391(iParam0);
			return func_982(iVar0);
		case 8:
			iVar1 = func_391(iParam0);
			if (func_393(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				return func_983(iVar1);
			}
			break;
	}
	return -1;
}

int func_522()
{
	if (!func_265(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_265(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_265(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_265(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_265(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_265(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_265(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_523(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (func_252() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077.f_1 = 2;
	Global_1898077.f_2 = 0;
	Global_1898077.f_3 = iParam0;
	Global_1898077.f_7 = iVar0;
	func_984(Global_1898077.f_7, Global_1898077.f_3);
}

void func_524(int iParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 2)
	{
		return;
	}
	iVar0 = 0;
	if (func_252() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077.f_1 = 5;
	Global_1898077.f_2 = 0;
	Global_1898077.f_4 = iParam0;
	Global_1898077.f_7 = iVar0;
	func_985(Global_1898077.f_7, Global_1898077.f_4);
}

void func_525(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_526(int iParam0, bool bParam1)
{
	if (func_252() != -1)
	{
		return;
	}
	if (func_99(0) != iParam0)
	{
		return;
	}
	if (func_986(iParam0))
	{
		if (bParam1)
		{
			func_987(-525676072);
		}
		else
		{
			func_988(-525676072);
		}
	}
}

void func_527(float fParam0)
{
	func_989(10, fParam0);
}

bool func_528()
{
	if (func_252() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

void func_529()
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1935436.f_12 = 0f;
}

bool func_530(var uParam0, char* sParam1)
{
	return MISC::_DOES_STRING_EXIST_IN_STRING(&(uParam0->f_224), sParam1);
}

void func_531(var uParam0, int iParam1)
{
	uParam0->f_221 = iParam1;
	func_990(uParam0, 2);
}

void func_532(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
		sParam2 = func_991(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	iVar0 = func_992(uParam0, iParam1);
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
		iVar1 = func_993(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != iParam1)
		{
			func_994(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_995(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0 /*12*/] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam2, 64);
		uParam0->f_13[iVar0 /*12*/].f_9 = iParam3;
		uParam0->f_13[iVar0 /*12*/].f_10 = iParam4;
		if (bParam5)
		{
			func_996(&(uParam0->f_13[iVar0 /*12*/]), 2);
		}
		else
		{
			func_997(&(uParam0->f_13[iVar0 /*12*/]), 2);
		}
	}
}

struct<8> func_533()
{
	char cVar0[64];

	StringCopy(&cVar0, "NormalStart", 64);
	return cVar0;
}

void func_534(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_230), sParam1, 64);
}

bool func_535(int iParam0, vector3 vParam1, var uParam4, var uParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, float fParam12, float fParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	func_998(iParam0, vParam1, 0, uParam5, bParam6, fParam7, bParam8, fParam12, fParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	bVar4 = func_350(iParam0, vParam1, 1);
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
		func_407(uParam4);
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
		if (func_352(uParam4) >= fParam9)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_999(iParam0, 501393341))
			{
				if (PED::IS_PED_ON_MOUNT(iParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, 0, 0, 0, 0, 0);
					return true;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !func_999(iParam0, -828834893))
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

int func_536(var uParam0)
{
	return uParam0->f_1;
}

void func_537(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	func_1000(uParam0, 4);
	if (func_1001(uParam0, &uParam1, iParam5))
	{
		func_545(uParam0, 1);
	}
}

void func_538(var uParam0)
{
	if (!func_1002(uParam0))
	{
		return;
	}
	if (!func_313(uParam0, 4194304))
	{
		func_1003(uParam0);
		func_554(uParam0, 4194304);
	}
	if (func_1004(uParam0))
	{
		func_1005(uParam0);
		func_1006(uParam0);
		func_545(uParam0, 2);
	}
}

void func_539(var uParam0)
{
	uParam0->f_1451 = -1;
	func_544(uParam0, 0);
	func_545(uParam0, 3);
	func_1007(uParam0, 0);
	func_407(&(uParam0->f_1635));
	func_1008(uParam0);
	func_407(&(uParam0->f_1638));
}

void func_540(var uParam0)
{
	bool bVar0;

	if (!func_313(uParam0, 134217728))
	{
		bVar0 = true;
		SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("BANDANA"));
		if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(GET_HASH_KEY("BANDANA")))
		{
			bVar0 = false;
		}
		STREAMING::REQUEST_ANIM_DICT(func_1009(1));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_1009(1)))
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_554(uParam0, 134217728);
		}
	}
}

void func_541(var uParam0, int iParam1, bool bParam2)
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
	if (!func_313(uParam0, 65536))
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
	if (!func_313(uParam0, 4096) && uParam0->f_1662)
	{
		return;
	}
	if (!func_313(uParam0, 16777216))
	{
		return;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	func_552(uParam0);
	func_1010(uParam0, uParam0->f_1663, uParam0->f_1665);
	func_1011(uParam0);
	if (uParam0->f_1666 && !uParam0->f_1665)
	{
		if (((((uParam0->f_1661 >= 0 && uParam0->f_782[uParam0->f_1661 /*41*/].f_17 > 0f) && uParam0->f_1454 >= 0) && !func_155(Global_35, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, (uParam0->f_782[uParam0->f_1661 /*41*/].f_17 + 5f), 1, 1)) && !func_313(uParam0, 33554432)) && !func_313(uParam0, 4))
		{
			func_1012(uParam0, uParam0->f_1663);
			return;
		}
	}
	if (!func_313(uParam0, 4))
	{
		if (func_1013(uParam0))
		{
			if (!bParam2)
			{
				uParam0->f_1450 = uParam0->f_1454;
				func_554(uParam0, 8);
				return;
			}
		}
		else
		{
			func_1012(uParam0, uParam0->f_1663);
		}
		if (uParam0->f_782[uParam0->f_1456 /*41*/].f_29)
		{
			fVar0 = func_1014(uParam0, uParam0->f_1456);
			if (fVar0 < 0f || (uParam0->f_1663 && fVar0 < 1f))
			{
				uParam0->f_1454 = uParam0->f_1456;
				if (!bParam2)
				{
					uParam0->f_1450 = uParam0->f_1456;
					func_554(uParam0, 8);
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
					func_554(uParam0, 16);
					if (((!func_313(uParam0, 32) && iParam1 != 2) && !bParam2) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, true) < (uParam0->f_782[uParam0->f_1454 /*41*/].f_11 + 5f))
					{
						func_1015(uParam0);
						func_554(uParam0, 32);
					}
				}
			}
			else if (uParam0->f_1454 == uParam0->f_1456)
			{
				func_319(uParam0, 16);
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
		if (func_321(&(uParam0->f_782[uParam0->f_1454 /*41*/]), 2) && uParam0->f_1663)
		{
			return;
		}
	}
	if (func_313(uParam0, 16))
	{
		fVar4 = func_350(Global_35, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, 1);
		if (uParam0->f_1663 && fVar4 <= (uParam0->f_782[uParam0->f_1454 /*41*/].f_17 + 5f))
		{
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_JUMP"), false);
		}
		fVar5 = func_1016(Global_36, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, 1);
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
				func_551(uParam0, uParam0->f_782[uParam0->f_1454 /*41*/].f_27, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, fVar6);
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
	if (((uParam0->f_1663 && iVar3) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_1664) > 1.25f) || func_313(uParam0, 4))
	{
		if (((VOLUME::IS_POINT_IN_VOLUME(uParam0->f_1641, uParam0->f_1645) && func_1014(uParam0, uParam0->f_1454) < 10000f) && func_313(uParam0, 16)) || func_313(uParam0, 4))
		{
			if (!func_313(uParam0, 4))
			{
				func_554(uParam0, 4);
			}
			iVar7 = 5152;
			iVar7 |= 32;
			iVar7 |= 4096;
			iVar7 |= 1;
			if (!func_549(uParam0, uParam0->f_1454))
			{
				iVar7 |= 2048;
			}
			if (func_1017(Global_35, &(uParam0->f_1452), iVar7, 0, 0, 1084227584 /* Float: 5f */, 100, uParam0->f_782[uParam0->f_1454 /*41*/].f_7, uParam0->f_782[uParam0->f_1454 /*41*/].f_7.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				uParam0->f_1452 = 0;
				func_319(uParam0, 4);
			}
		}
	}
	else if (func_313(uParam0, 4))
	{
		func_319(uParam0, 4);
	}
}

int func_542(var uParam0)
{
	return *uParam0;
}

void func_543(var uParam0)
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (func_313(uParam0, 512))
	{
		return;
	}
	if (func_565(&(uParam0->f_1638)) < 2f)
	{
		return;
	}
	if (func_1018(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		func_554(uParam0, 524288);
	}
}

void func_544(var uParam0, int iParam1)
{
	uParam0->f_1449 = iParam1;
}

void func_545(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

int func_546(var uParam0, int iParam1)
{
	int iVar0;

	if (func_320(uParam0, 4))
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
			if (func_1019())
			{
				if (!func_313(uParam0, 524288))
				{
					HUD::_HIDE_HUD_COMPONENT(-1679307491);
				}
				HUD::_DISPLAY_HUD_COMPONENT(474191950);
			}
			break;
	}
	if (func_1019())
	{
		func_319(uParam0, 512);
		func_1020(uParam0, 128);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin", false, -1);
		if (func_1021(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 4))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, func_1022(uParam0->f_782[uParam0->f_1450 /*41*/].f_39), false, -1);
		}
		PED::SET_PED_CONFIG_FLAG(Global_35, 255, true);
	}
	func_1023();
	func_1024(uParam0, 1, 0);
	func_1025(uParam0);
	if (func_313(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	func_1020(uParam0, 4);
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_1641))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_1641);
	}
	if (func_320(uParam0, 8) && CAM::_0xDD0B7C5AE58F721D(func_1026()))
	{
		CAM::_0x798BE43C9393632B(func_1026());
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1111[iVar0 /*22*/].f_2)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1111[iVar0 /*22*/].f_2), func_1026())) && CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1111[iVar0 /*22*/].f_2)))
		{
			if (uParam0->f_1111[iVar0 /*22*/].f_21)
			{
				CAM::_0x798BE43C9393632B(&(uParam0->f_1111[iVar0 /*22*/].f_2));
			}
		}
		iVar0++;
	}
	PLAYER::RESET_PLAYER_INPUT_GAIT(PLAYER::GET_PLAYER_INDEX());
	if (func_313(uParam0, 524288) || iParam1 == 1)
	{
		func_1027();
	}
	if (func_320(uParam0, 16))
	{
		if (func_542(uParam0) == 0)
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
	func_1028();
	if (func_320(uParam0, 32))
	{
		TASK::SET_PED_PATH_FOLIAGE_COST_MODIFIER(Global_35, 1f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1667))
	{
		if (!func_313(uParam0, 8192))
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
	func_559(uParam0);
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1687))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_1687);
	}
	return 1;
}

void func_547(bool bParam0)
{
	if (bParam0)
	{
		func_1029(4);
	}
	func_1029(2);
	MISC::SET_BIT(&(Global_1956580.f_1), 0);
}

void func_548()
{
	Global_1905944.f_5695 = 1;
}

bool func_549(var uParam0, int iParam1)
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

int func_550(var uParam0)
{
	return uParam0->f_2;
}

void func_551(var uParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;

	if (func_757(uParam1, 8))
	{
		iVar0 |= 8;
	}
	if (func_757(uParam1, 8192))
	{
		iVar0 |= 32;
	}
	if (uParam0->f_1663)
	{
		fParam3 = 0.55f;
		PED::SET_PED_RESET_FLAG(uParam0->f_1664, 214, true);
	}
	if (uParam0->f_1662 && func_313(uParam0, 4096))
	{
		iVar0 |= 16;
	}
	if (func_757(uParam1, 262144) && Global_1935630.f_44 == GET_HASH_KEY("WEAPON_LASSO"))
	{
		iVar0 |= 16;
	}
	func_1030(&iVar1, uParam2);
	func_1031(&(uParam0->f_1670), iVar0, iVar1, fParam3);
	if (!Global_1935630.f_12)
	{
		if (!func_313(uParam0, 67108864))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 36, true);
	}
	func_1032();
	func_1033(uParam0, 1);
}

void func_552(var uParam0)
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
	if (iVar0 >= 0 && !func_558(uParam0, 2))
	{
		bVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_782[iVar0 /*41*/].f_1, true) <= uParam0->f_782[iVar0 /*41*/].f_16;
		Var2 = { uParam0->f_1458 };
		if (bVar1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1111[iVar0 /*22*/].f_2)))
			{
				StringCopy(&(uParam0->f_1458), func_1034(uParam0->f_1111[iVar0 /*22*/].f_2), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1458), func_1026(), 64);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1111[iVar0 /*22*/].f_10)))
			{
				StringCopy(&(uParam0->f_1458.f_8), func_1034(uParam0->f_1111[iVar0 /*22*/].f_10), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1458.f_8), func_1035(), 64);
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
			if (!func_1036(uParam0->f_1111[iVar0 /*22*/].f_1, 8))
			{
				if (!func_1036(uParam0->f_1111[iVar0 /*22*/].f_1, 8))
				{
					func_1030(&iVar19, uParam0->f_1111[iVar0 /*22*/].f_1);
					func_1037(&(uParam0->f_1670), iVar19);
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
							if (func_1036(uParam0->f_1111[iVar0 /*22*/].f_1, 16) && iVar24 >= 0)
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
											func_1020(uParam0, 16);
										}
										return;
									}
								}
								if (uParam0->f_1111[iVar0 /*22*/].f_18 != 0f || uParam0->f_1111[iVar0 /*22*/].f_19 != 0f)
								{
									vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, func_1038(Global_35, iVar23, 1), uParam0->f_1111[iVar0 /*22*/].f_18, 0f, uParam0->f_1111[iVar0 /*22*/].f_19) };
								}
							}
							else if (uParam0->f_1111[iVar0 /*22*/].f_18 != 0f || uParam0->f_1111[iVar0 /*22*/].f_19 != 0f)
							{
								vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, func_1016(Global_36, uParam0->f_782[iVar0 /*41*/].f_1, 1), uParam0->f_1111[iVar0 /*22*/].f_18, 0f, uParam0->f_1111[iVar0 /*22*/].f_19) };
							}
							fVar27 = uParam0->f_782[iVar0 /*41*/].f_16;
							fVar28 = uParam0->f_782[iVar0 /*41*/].f_14;
							bVar29 = func_1036(uParam0->f_1111[iVar0 /*22*/].f_1, 2);
							bVar30 = (func_1036(uParam0->f_1111[iVar0 /*22*/].f_1, 1) && !bVar29);
							bVar31 = func_1036(uParam0->f_1111[iVar0 /*22*/].f_1, 4);
							bVar32 = false;
							if (!CAM::_0x927B810E43E99932(&(uParam0->f_1458)))
							{
								CAM::_0xB8B207C34285E978(&(uParam0->f_1458));
								if (CAM::IS_CINEMATIC_CAM_RENDERING())
								{
									func_1039(0, 0);
								}
								bVar32 = true;
								func_1020(uParam0, 16);
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1458), 4))
							{
								bVar32 = (bVar32 || uParam0->f_1474.f_16 != iVar23);
								bVar32 = (bVar32 || !func_1040(uParam0->f_1474.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
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
								bVar32 = (bVar32 || !func_1040(uParam0->f_1497.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
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
							func_1041(uParam0, 2);
						}
					}
				}
			}
		}
	}
}

int func_553(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 || iParam1 == 2)
	{
		return 0;
	}
	if (func_1042(uParam0, &iVar0))
	{
		func_1043(uParam0, iVar0);
		return 1;
	}
	return 0;
}

void func_554(var uParam0, int iParam1)
{
	uParam0->f_1430 = (uParam0->f_1430 || iParam1);
}

void func_555(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	vector3 vVar6;
	int iVar9;

	if (func_542(uParam0) != 0)
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
				func_554(uParam0, 65536);
				return;
			}
			else if (uParam0->f_1668 == iVar9)
			{
				func_554(uParam0, 65536);
				return;
			}
		}
		func_319(uParam0, 65536);
	}
}

void func_556(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = 0;
	if (func_536(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1660)
		{
			if (uParam0->f_241[iVar0 /*18*/].f_7)
			{
				func_1044(uParam0, iVar0, iParam1);
			}
			else if (uParam0->f_241[iVar0 /*18*/].f_6)
			{
				bVar1 = func_1045(uParam0, iVar0);
				if (bVar1)
				{
					func_1046(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!func_549(uParam0, uParam0->f_1450))
		{
			func_1047(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_1457;
	while (iVar0 <= (uParam0->f_1660 - 1))
	{
		if (uParam0->f_241[iVar0 /*18*/].f_7)
		{
			func_1044(uParam0, iVar0, iParam1);
		}
		else if (uParam0->f_241[iVar0 /*18*/].f_6)
		{
			bVar1 = func_1045(uParam0, iVar0);
			if (bVar1)
			{
				func_1046(uParam0, iVar0, iParam1);
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

void func_557(var uParam0)
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

bool func_558(var uParam0, int iParam1)
{
	return (uParam0->f_1431 && iParam1) != 0;
}

void func_559(var uParam0)
{
	func_1048(&(uParam0->f_1670));
}

void func_560(var uParam0)
{
	uParam0->f_1431 = 0;
}

void func_561(int iParam0)
{
	int iVar0;

	if (func_252() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_146(func_1049(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_1049(iVar0), func_1050(), 1))
			{
				func_1051(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

void func_562()
{
	Global_18 = 1;
	Global_43884 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_563(var uParam0)
{
	if (uParam0->f_1450 >= 0)
	{
		if (func_350(Global_35, uParam0->f_782[uParam0->f_1450 /*41*/].f_1, 0) < uParam0->f_782[uParam0->f_1450 /*41*/].f_14)
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

bool func_564(var uParam0)
{
	if (uParam0->f_1450 >= 0)
	{
		if (func_350(Global_35, uParam0->f_782[uParam0->f_1450 /*41*/].f_1, 0) < uParam0->f_782[uParam0->f_1450 /*41*/].f_15)
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

float func_565(var uParam0)
{
	if (!func_49(uParam0))
	{
		return 0f;
	}
	if (func_166(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_789() - uParam0->f_1);
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
			else if (func_352(&(uParam0->f_1638)) >= 15f)
			{
				func_554(uParam0, 32768);
				return true;
			}
			break;
		case 9:
			if (!uParam0->f_1534)
			{
				if (func_352(&(uParam0->f_1638)) >= 15f)
				{
					func_554(uParam0, 32768);
					return true;
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(func_1052(uParam0)) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(func_1052(uParam0), false))
				{
					uParam0->f_1534 = 1;
				}
			}
			else
			{
				fVar0 = ANIMSCENE::GET_ANIM_SCENE_PHASE(func_1052(uParam0));
				bVar1 = ANIMSCENE::IS_ANIM_SCENE_FINISHED(func_1052(uParam0), false);
				bVar2 = ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(func_1052(uParam0));
				return ((fVar0 >= 1f || bVar1) || bVar2);
			}
			break;
		case 11:
			return true;
		default:
			return func_352(&(uParam0->f_1638)) >= 15f;
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
		if (uParam0->f_241[iVar0 /*18*/].f_17 == 2 && func_1053(&(uParam0->f_241[iVar0 /*18*/]), 4))
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

bool func_570(bool bParam0, bool bParam1, float fParam2)
{
	if (bParam0)
	{
		return bParam1;
	}
	return fParam2;
}

void func_571(var uParam0, int iParam1, var uParam2, float fParam3, float fParam4, char* sParam5)
{
	float fVar0;
	bool bVar1;
	bool bVar2;

	if (ENTITY::IS_ENTITY_DEAD(*uParam0) || !MISC::IS_BIT_SET(iParam1->f_21, 0))
	{
		return;
	}
	func_1054(iParam1, *uParam0, iParam1->f_56, 0);
	fVar0 = func_570(fParam4 >= 0f, fParam4, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
	func_1055(iParam1, fParam3);
	func_1056(uParam0, iParam1, uParam2, fVar0);
	func_1057(iParam1);
	if (MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		bVar1 = MISC::IS_STRING_NULL_OR_EMPTY(sParam5);
		func_1058(iParam1, uParam2, uParam0, bVar1, sParam5, fVar0);
		if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			bVar2 = true;
			if (!MISC::IS_BIT_SET(*iParam1, 12))
			{
				bVar2 = func_588(iParam1, uParam0);
			}
			if (bVar2 && !MISC::IS_BIT_SET(*iParam1, 13))
			{
				func_589(iParam1);
			}
		}
	}
}

bool func_572(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_1059(iParam0, iParam1))
		{
			if (!func_429(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_205(uParam2, 0, 0, 1, 0);
				func_121(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_429(iParam1->f_10, 1))
		{
			func_1060(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_120(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_573(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_429(iParam4, 32);
		func_1061(iParam1, uParam2, 0);
		iVar5 = func_1062(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		func_205(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_429(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_429(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_429(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_429(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_429(iParam4, 8388608) || func_429(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_429(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_429(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_575(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_575(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_429(iParam4, 67108864))
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
			if (func_429(iParam4, 268435456))
			{
				iVar8 = func_1064(uParam2, GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_1065(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_575(iParam1, 23))
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
			if (func_429(iParam4, 2) || func_429(iParam4, 16))
			{
				func_574(*uParam0, 1, 1);
			}
			else
			{
				func_574(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_574(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_575(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_576(var uParam0, int iParam1, int iParam2, bool bParam3)
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

void func_577(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_1067(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_429(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_578(int iParam0)
{
	if (func_429(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0,