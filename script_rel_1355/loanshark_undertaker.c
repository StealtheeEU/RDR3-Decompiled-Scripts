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
	struct<97> Local_15 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1106247680, 1067450368, 0, 1092616192, 1112014848, 1106247680, 1101529088, 1101004800, 1084227584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<130> Local_112[7];
	struct<8> Local_1023[5];
	var uLocal_1064 = 0;
	var uLocal_1065 = 2;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 2;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = -1;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 1106247680;
	var uLocal_1096 = 0;
	var uLocal_1097 = 1072064102;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	char* sLocal_1114[8] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char[] cLocal_1123[8] = 0;
	char[] cLocal_1124[8] = 0;
	char[] cLocal_1125[8] = 0;
	char[] cLocal_1126[8] = 0;
	char[] cLocal_1127[8] = 0;
	char[] cLocal_1128[8] = 0;
	char[] cLocal_1129[8] = 0;
	char* sLocal_1130[32] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_1163[21] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_1185[15] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_1201[1] = { NULL };
	int iLocal_1203 = 0;
	int iLocal_1204 = 0;
	int iLocal_1205 = 0;
	int iLocal_1206 = 0;
	char* sLocal_1207 = NULL;
	struct<97> Local_1208 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1106247680, 1067450368, 0, 1092616192, 1112014848, 1106247680, 1101529088, 1101004800, 1084227584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_1305 = 0;
	int iLocal_1306 = 0;
	int iLocal_1307 = 0;
	int iLocal_1308 = 0;
	int iLocal_1309 = 0;
	int iLocal_1310 = 0;
	int iLocal_1311 = 0;
	int iLocal_1312 = 0;
	int iLocal_1313 = 0;
	int iLocal_1314 = 0;
	int iLocal_1315 = 0;
	int iLocal_1316 = 0;
	int iLocal_1317 = 0;
	struct<97> Local_1318[3];
	int iLocal_1610[3] = { 0, 0, 0 };
	struct<97> Local_1614[2];
	int iLocal_1809[2] = { 0, 0 };
	struct<36> Local_1812 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0 } ;
	var uLocal_1848 = -1;
	var uLocal_1849 = 0;
	var uLocal_1850 = -1;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = -1;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 1073741824;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 1;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 1106247680;
	var uLocal_1874 = 1067450368;
	var uLocal_1875 = 0;
	var uLocal_1876 = 1092616192;
	var uLocal_1877 = 1112014848;
	var uLocal_1878 = 1106247680;
	var uLocal_1879 = 1101529088;
	var uLocal_1880 = 1101004800;
	var uLocal_1881 = 1084227584;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
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
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	int iLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = -1;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 1097859072;
	var uLocal_1928 = 1000;
	var uLocal_1929 = 1067450368;
	var uLocal_1930 = 5000;
	var uLocal_1931 = 42;
	var uLocal_1932 = 1103626240;
	var uLocal_1933 = 1077936128;
	var uLocal_1934 = 1106247680;
	var uLocal_1935 = 1103101952;
	var uLocal_1936 = 1097859072;
	var uLocal_1937 = 1103626240;
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
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
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
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	struct<22> Local_1978 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_2000 = 3;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	struct<22> Local_2003 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_2025 = 3;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	vector3 vLocal_2028 = { 0f, 0f, 0f };
	float fLocal_2031 = 0f;
	vector3 vLocal_2032 = { 0f, 0f, 0f };
	float fLocal_2035 = 0f;
	vector3 vLocal_2036 = { 0f, 0f, 0f };
	vector3 vLocal_2039 = { 0f, 0f, 0f };
	vector3 vLocal_2042 = { 0f, 0f, 0f };
	vector3 vLocal_2045 = { 0f, 0f, 0f };
	bool bLocal_2048 = false;
	bool bLocal_2049 = false;
	bool bLocal_2050 = false;
	bool bLocal_2051 = false;
	bool bLocal_2052 = false;
	bool bLocal_2053 = false;
	bool bLocal_2054 = false;
	bool bLocal_2055 = false;
	bool bLocal_2056 = false;
	bool bLocal_2057 = false;
	bool bLocal_2058 = false;
	bool bLocal_2059 = false;
	int iLocal_2060 = 0;
	var uLocal_2061 = 0;
	int iLocal_2062 = 0;
	int iLocal_2063 = 0;
	int iLocal_2064[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2074 = 0;
	int iLocal_2075 = 0;
	int iLocal_2076 = 0;
	int iLocal_2077 = 0;
	int iLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	int iLocal_2082 = 0;
	int iLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	int iLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	int iLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	int iLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	int iLocal_2102 = 0;
	int iLocal_2103 = 0;
	int iLocal_2104 = 0;
	int iLocal_2105 = 0;
	bool bLocal_2106 = false;
	bool bLocal_2107 = false;
	bool bLocal_2108 = false;
	bool bLocal_2109 = false;
	bool bLocal_2110 = false;
	bool bLocal_2111 = false;
	bool bLocal_2112 = false;
	bool bLocal_2113 = false;
	bool bLocal_2114 = false;
	int iLocal_2115 = 0;
	int iLocal_2116 = 0;
	int iLocal_2117 = 0;
	int iLocal_2118 = 0;
	int iLocal_2119 = 0;
	int iLocal_2120 = 0;
	int iLocal_2121 = 0;
	int iLocal_2122 = 0;
	int iLocal_2123 = 0;
	struct<17> Local_2124[2];
	struct<17> Local_2159[2];
	struct<17> Local_2194[2];
	struct<17> Local_2229[2];
	struct<17> Local_2264[1];
	bool bLocal_2282 = false;
	int iLocal_2283 = 0;
	bool bLocal_2284 = false;
	int iLocal_2285 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	struct<2278> Var0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	cLocal_1123 = "script_proc@loansharking@undertaker@encounter_confront";
	cLocal_1124 = "script_proc@loansharking@undertaker@female_mourner";
	cLocal_1125 = "script_proc@loansharking@undertaker@young_couple";
	cLocal_1126 = "script_proc@loansharking@undertaker@waiting_at_church";
	cLocal_1127 = "script_proc@loansharking@undertaker@grave_digging";
	cLocal_1128 = "script_proc@loansharking@undertaker@collect_loot";
	cLocal_1129 = "script_common@handover@generic@ped_handover@brooch";
	iLocal_1305 = GET_HASH_KEY("LOANSHARKING_UNDERTAKER_FEMALES_01");
	iLocal_1306 = GET_HASH_KEY("CS_RHODESASSISTANT");
	iLocal_1307 = GET_HASH_KEY("LOANSHARKING_UNDERTAKER_FEMALES_01");
	iLocal_1308 = GET_HASH_KEY("LOANSHARKING_UNDERTAKER_FEMALES_01");
	iLocal_1309 = GET_HASH_KEY("LOANSHARKING_UNDERTAKER_MALES_01");
	iLocal_1310 = GET_HASH_KEY("LOANSHARKING_UNDERTAKER_MALES_01");
	iLocal_1311 = -2060762326;
	iLocal_1312 = -1571002461;
	iLocal_1313 = 95105388;
	iLocal_1314 = -127494429;
	iLocal_1315 = 1487067886;
	iLocal_1316 = 1767799909;
	iLocal_1317 = -1683495893;
	vLocal_2028 = { 1275.281f, -1209.51f, 81.2918f };
	fLocal_2031 = 0f;
	vLocal_2032 = { 1300.4f, -1318.53f, 76.5164f };
	fLocal_2035 = -29.30019f;
	vLocal_2036 = { 1300.762f, -1318.008f, 75.5173f };
	vLocal_2039 = { -0.48f, 0f, 59.7f };
	vLocal_2042 = { 1291.414f, -1235.748f, 79.9612f };
	vLocal_2045 = { 0f, 0f, -100.782f };
	iLocal_2077 = -1;
	iLocal_2119 = 1;
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

	iVar0 = iParam1;
	func_62(&(cParam0->f_2277), 0, 0, 1, 0);
	if (!func_63(2097152))
	{
		if (func_64())
		{
			func_65(cParam0);
			func_66(2097152);
		}
	}
	if (!func_63(268435456))
	{
		PED::_0x9851DE7AEC10B4E1(Global_1392626[*cParam0 /*32*/].f_24, 250f, 1, 0);
		func_66(268435456);
	}
	if (!func_67())
	{
		return 2;
	}
	if (iVar0 == 0)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_112[0 /*130*/]))
		{
			func_68(*cParam0, func_41(0), func_41(1), 0, 1);
			PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), Local_15, "LS_UNDERTAKER", 1301.84f, -1318.89f, 75.87f, 0, "LSUND");
			func_69(1, 1);
			return 8;
		}
	}
	else if (iVar0 == 1)
	{
		if (func_70(cParam0))
		{
			func_68(*cParam0, func_41(1), func_41(2), 1, 2);
			bLocal_2113 = true;
			func_71(0);
			func_69(1, 1);
			return 8;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_72(cParam0))
		{
			func_68(*cParam0, func_41(2), func_41(3), 2, 3);
			bLocal_2113 = true;
			func_71(0);
			func_73(iLocal_2064[3], 0);
			func_69(1, 1);
			return 8;
		}
	}
	else if (iVar0 == 3)
	{
		if (func_74(cParam0))
		{
			func_68(*cParam0, func_41(3), func_41(4), 3, 4);
			func_71(0);
			func_73(iLocal_2064[3], 0);
			func_69(1, 1);
			return 8;
		}
	}
	else if (iVar0 == 4)
	{
		if (func_75())
		{
			func_71(0);
			func_73(iLocal_2064[3], 0);
			func_69(1, 1);
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
	if (func_76(cParam0))
	{
		if (func_77(cParam0->f_346))
		{
			func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
			func_78(&(cParam0->f_32), &(cParam0->f_352));
			func_79(cParam0);
		}
		else
		{
			func_80(cParam0);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			func_81(0, 1, 1);
		}
		func_11(cParam0, 7);
	}
}

void func_13(char[4] cParam0)
{
	int iVar0;

	if (func_77(cParam0->f_346))
	{
		if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 32))
		{
			func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
			if (func_79(cParam0))
			{
				func_82(cParam0, 1);
				iVar0 = func_83(cParam0);
				func_11(cParam0, iVar0);
			}
		}
	}
	else
	{
		func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
		if (func_84(cParam0))
		{
			func_85(cParam0);
			func_82(cParam0, 0);
			iVar0 = func_83(cParam0);
			func_11(cParam0, iVar0);
		}
		else
		{
			func_81(0, 1, 1);
			PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_SKIP_CUTSCENE"), true);
			func_86(cParam0);
		}
	}
}

void func_14(char[4] cParam0)
{
	int iVar0;

	iVar0 = func_87(cParam0);
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
	func_88(*cParam0, 1, 1);
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		func_89(cParam0, 0, 1);
		MISC::_0x1096603B519C905F("");
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		func_90();
		func_91(0);
		func_92(&Global_1935630, 4);
	}
	if (func_93(*cParam0))
	{
		if (func_94(Global_1392626[*cParam0 /*32*/].f_8, 8))
		{
			func_95("OBJ_COMPLETE_NOT", 7500, 0, 1, 0, 0, -1, -1, 0);
		}
		else if (func_94(Global_1392626[*cParam0 /*32*/].f_8, 16))
		{
			func_95("OBJ_COMPLETE_AB", 7500, 0, 1, 0, 0, -1, -1, 0);
		}
		else
		{
			func_95("OBJ_COMPLETE_REC", 7500, 0, 1, 0, 0, -1, -1, 0);
		}
	}
	func_39(cParam0);
	func_43(&(cParam0->f_16), 1);
	bVar0 = false;
	bVar0 = true;
	if (bVar0)
	{
		func_96();
		func_97();
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
		func_96();
		func_97();
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
					func_98(1, 1);
					func_99(&(Global_1347343.f_11), 131072);
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
		func_101(Global_1392626[*cParam0 /*32*/].f_3, iVar2, &(cParam0->f_2208), func_100(), 0, 0);
	}
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		MISC::_0x1096603B519C905F("");
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		func_91(0);
		func_90();
		func_92(&Global_1935630, 4);
	}
	func_102(*cParam0);
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
		func_103(*cParam0);
	}
	if (func_104(64, 1, 1))
	{
		iVar0 = func_105(0);
		if (func_106(iVar0))
		{
			func_22(cParam0);
			func_23(cParam0);
			return;
		}
	}
	if (func_107())
	{
		func_22(cParam0);
		func_23(cParam0);
		return;
	}
	else if (!func_49(&(cParam0->f_2064)) || IntToFloat(func_52(&(cParam0->f_2064))) > func_108(cParam0))
	{
		func_50(&(cParam0->f_2064), 1);
		if (func_109(cParam0))
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
		func_96();
		func_97();
	}
}

void func_19(var uParam0, int iParam1)
{
	func_110(*uParam0, iParam1);
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
	func_111(cParam0);
	func_112(cParam0);
	func_113(cParam0);
	if ((cParam0->f_1 != 12 && func_114(cParam0) != 2) && !func_115(Global_1392626[*cParam0 /*32*/].f_10, 2))
	{
		func_116(*cParam0);
	}
	func_113(cParam0);
	func_117(&(cParam0->f_2210[0]), &(cParam0->f_2213[0]));
	func_117(&(cParam0->f_2210[1]), &(cParam0->f_2213[1]));
	if (func_114(cParam0) == 0)
	{
		func_118(*cParam0);
	}
	func_119(&(Global_1392626[*cParam0 /*32*/].f_11), 1, 0, 1);
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
		func_90();
	}
	func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 4);
	func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 512);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_24(var uParam0)
{
	func_120(uParam0, 0);
	func_27(uParam0, 0);
	func_121(uParam0, 1);
	func_122(uParam0, 1);
	func_123(uParam0, 0);
	func_124(uParam0, 1);
	func_125(uParam0, 1, 1, 1);
}

void func_25(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_126(&(uParam0->f_1), 8);
	}
	else
	{
		func_127(&(uParam0->f_1), 8);
	}
}

void func_26(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_126(&(uParam0->f_1), 2);
	}
	else
	{
		func_127(&(uParam0->f_1), 2);
	}
}

void func_27(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_126(&(uParam0->f_1), 2048);
	}
	else
	{
		func_127(&(uParam0->f_1), 2048);
	}
}

int func_28()
{
	return func_129(func_128());
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
	func_130(uParam0, "LSUNDAU");
	func_131(uParam0);
	func_132(uParam0, 3);
	func_133(uParam0, 8);
	func_134();
	func_135();
	STREAMING::REQUEST_MODEL(iLocal_1306, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(210376647, false);
	func_136(&(Global_1392626[*uParam0 /*32*/].f_8), 128);
	func_137(uParam0);
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
		if (func_138(cParam0))
		{
			func_139(*cParam0, 1024);
			func_35(cParam0, 5);
			return true;
		}
	}
	if (func_104(0, 1, 0))
	{
		iVar0 = func_105(0);
		if (func_106(iVar0) && Global_1392626[*cParam0 /*32*/].f_3 != func_105(0))
		{
			func_136(&(Global_1392626[*cParam0 /*32*/].f_8), 1);
			func_35(cParam0, 6);
			return true;
		}
	}
	if (Global_1392626[*cParam0 /*32*/].f_12 != -1)
	{
		if (func_140(Global_1392626[*cParam0 /*32*/].f_12))
		{
			func_139(*cParam0, 2048);
			return true;
		}
	}
	if (Global_1392626[*cParam0 /*32*/].f_22 != -1)
	{
		if (!func_141(Global_1392626[*cParam0 /*32*/].f_22))
		{
			func_136(&(Global_1392626[*cParam0 /*32*/].f_8), 1);
			func_35(cParam0, 3);
			return true;
		}
	}
	if (func_142(*cParam0))
	{
		func_136(&(Global_1392626[*cParam0 /*32*/].f_8), 1);
		func_35(cParam0, 7);
		return true;
	}
	if (func_143(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		func_139(*cParam0, 16384);
		func_35(cParam0, 4);
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1392626[*cParam0 /*32*/].f_11))
	{
		if (!func_144(*cParam0, (Global_1392626[*cParam0 /*32*/].f_5 + 10f)))
		{
			func_35(cParam0, 2);
			return true;
		}
	}
	else if (func_145(Global_1392626[*cParam0 /*32*/].f_11, 1))
	{
		if (!func_94(Global_1392626[*cParam0 /*32*/].f_8, 256))
		{
			if (!func_144(*cParam0, (Global_1392626[*cParam0 /*32*/].f_5 + 10f)) && !func_146(Global_1392626[*cParam0 /*32*/].f_11, 0, &(cParam0->f_2077), &(cParam0->f_2105), 0, 0))
			{
				func_35(cParam0, 2);
				return true;
			}
		}
	}
	fVar1 = BUILTIN::VDIST2(Global_1392626[*cParam0 /*32*/].f_24, Global_36);
	if (func_147(fVar1))
	{
		func_139(*cParam0, 8192);
		func_35(cParam0, 5);
		return true;
	}
	return false;
}

void func_39(char[4] cParam0)
{
	func_148(cParam0);
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		func_90();
		func_149(0);
		if (!Global_1935630.f_12)
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
		}
		UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
		func_150();
	}
	func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 4);
	if (func_114(cParam0) != 2 && !func_115(Global_1392626[*cParam0 /*32*/].f_10, 2))
	{
		func_116(*cParam0);
	}
	func_113(cParam0);
	if (func_114(cParam0) == 0)
	{
		func_118(*cParam0);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	func_151();
	func_117(&(cParam0->f_2210[0]), &(cParam0->f_2213[0]));
	func_117(&(cParam0->f_2210[1]), &(cParam0->f_2213[1]));
	func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 8);
	func_152(cParam0);
}

void func_40(char[4] cParam0)
{
	if (!func_153(*cParam0, 4))
	{
		if (func_154(Global_35, Global_1392626[*cParam0 /*32*/].f_27, Global_1392626[*cParam0 /*32*/].f_4, 1, 1))
		{
			if (cParam0->f_2204 == -1)
			{
				cParam0->f_2204 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - cParam0->f_2204) > 120000)
			{
				func_155(*cParam0);
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
		Var1 = { 1296.902f, -1320.073f, 75.8767f };
		Var1.f_3 = 287.6473f;
	}
	else if (iVar0 == 1)
	{
		Var1 = { 1291.423f, -1237.7f, 79.8093f };
		Var1.f_3 = 4.8526f;
	}
	else if (iVar0 == 2)
	{
		Var1 = { 1290.254f, -1238.688f, 79.7133f };
		Var1.f_3 = 340.5821f;
	}
	else if (iVar0 == 3)
	{
		Var1 = { 1296.6f, -1243.202f, 79.0933f };
		Var1.f_3 = 52.076f;
	}
	else if (iVar0 == 4)
	{
		Var1 = { 1272.408f, -1209.676f, 81.2281f };
		Var1.f_3 = 214.6943f;
	}
	return Var1;
}

bool func_42(var uParam0)
{
	return func_156(*uParam0, uParam0->f_3);
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
		if (func_157(cParam0))
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
	if (func_158(cParam0->f_32.f_5))
	{
		cParam0->f_32.f_5 = { func_159(*cParam0) };
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
	if (func_77(cParam0->f_346))
	{
		if (func_160(&(cParam0->f_32), cParam0->f_346, 0, 1))
		{
			if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 32))
			{
				func_161(cParam0);
				func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 32);
			}
		}
		else
		{
			if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 64))
			{
				func_162(cParam0);
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
			func_162(cParam0);
		}
		func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 32);
	}
}

bool func_49(var uParam0)
{
	return func_163(*uParam0, 1);
}

void func_50(var uParam0, bool bParam1)
{
	if (bParam1 || !func_49(uParam0))
	{
		func_164(uParam0);
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
	if (func_165(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_166() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_53(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

bool func_54()
{
	return func_167(Global_1935630, 4096);
}

int func_55(var uParam0)
{
	func_168(&(uParam0->f_2041));
	func_169(&(uParam0->f_2052));
	HUD::TEXT_BLOCK_REQUEST("LOAN");
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2205)))
	{
	}
	else
	{
		HUD::TEXT_BLOCK_REQUEST(&(uParam0->f_2205));
	}
	if (((func_170(&(uParam0->f_2041)) && func_171(&(uParam0->f_2052))) && HUD::TEXT_BLOCK_IS_LOADED("LOAN")) && (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2205)) || HUD::TEXT_BLOCK_IS_LOADED(&(uParam0->f_2205))))
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
	bool bVar0;

	if (bLocal_2050)
	{
		return true;
	}
	if (!bLocal_2110)
	{
		if (!func_172(105))
		{
			return false;
		}
		else
		{
			func_173(82);
			func_173(134);
			func_173(80);
			bLocal_2110 = true;
		}
		return false;
	}
	if (!bLocal_2048)
	{
		bLocal_2048 = func_174(uParam0);
	}
	if (!bLocal_2049)
	{
		bLocal_2049 = func_175();
	}
	if (bLocal_2048 && bLocal_2049)
	{
		bVar0 = func_176(0, 0);
	}
	if (bVar0)
	{
		func_136(&(Global_1392626[*uParam0 /*32*/].f_8), 32);
		func_177(&(uParam0->f_2210[0]), &(uParam0->f_2213[0]), Local_15.f_1, 0f, 0f, 0f, 5f, 5f, 5f, 0, 0, 1, 0, 0);
		func_178(&(iLocal_2064[1]), Local_15.f_1, 0f, 0f, 0f, 10f, 10f, 10f, "MV_FOCUS_VOLUME");
		iLocal_2064[0] = VOLUME::_0x0EB78C2B156635B1(GET_HASH_KEY("VOLSPHERE"), 1302.527f, -1318.345f, 75.5941f, 0f, 0f, 67.25002f, 2f, 3.6f, 3f);
		func_179(&(uParam0->f_2106), Global_35, "ARTHUR", 0);
		func_179(&(uParam0->f_2106), Local_15, "RHD_Assistant", 0);
		ANIMSCENE::START_ANIM_SCENE(Local_112[0 /*130*/]);
		PED::_0x9851DE7AEC10B4E1(Local_15.f_1, 10f, 1, 0);
		bLocal_2050 = true;
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
	func_116(*cParam0);
	MISC::_0x1096603B519C905F(func_186(*cParam0));
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	func_89(cParam0, 1, 0);
	AUDIO::CLEAR_CONVERSATION_HISTORY();
	func_149(1);
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
		func_68(*cParam0, func_41(0), func_41(1), 0, 1);
	}
}

void func_59(char[4] cParam0)
{
}

bool func_60(char[4] cParam0)
{
	if (!func_189(cParam0))
	{
		return false;
	}
	func_190(cParam0);
	if (!func_94(Global_1392626[*cParam0 /*32*/].f_8, 512))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_348)) && func_20(Global_1392626[*cParam0 /*32*/].f_9, 16))
		{
			if (func_94(Global_1392626[*cParam0 /*32*/].f_8, 2))
			{
				func_191(&(cParam0->f_352), cParam0->f_348, 0);
			}
			else
			{
				func_192(&(cParam0->f_352), cParam0->f_348, 0, 0);
				if (func_193(&(cParam0->f_352)))
				{
					return true;
				}
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(cParam0->f_346))
		{
			if (func_77(cParam0->f_346))
			{
				if (!func_158(cParam0->f_32.f_5))
				{
					if (VOLUME::DOES_VOLUME_EXIST(cParam0->f_2040))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, cParam0->f_2040, true, 0))
						{
							if (cParam0->f_17 == 2)
							{
								func_112(cParam0);
								return true;
							}
						}
					}
					else if (BUILTIN::VDIST2(Global_36, cParam0->f_32.f_5) < 6f)
					{
						if (cParam0->f_17 == 2)
						{
							func_112(cParam0);
							return true;
						}
					}
				}
				else if (BUILTIN::VDIST2(Global_36, cParam0->f_32.f_5) < 6f)
				{
					func_112(cParam0);
					return true;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1392626[*cParam0 /*32*/].f_11))
		{
			func_194(cParam0);
			if ((!PED::IS_PED_RAGDOLL(Global_35) && !PED::IS_PED_JUMPING(Global_35)) && !PED::IS_PED_INJURED(Global_1392626[*cParam0 /*32*/].f_11))
			{
				if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 1024))
				{
					func_195(&(Global_1392626[*cParam0 /*32*/].f_11), &(cParam0->f_2216), cParam0->f_2295, &(cParam0->f_2277), 0.1f, 3, 0, cParam0->f_2296, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
					if (func_196(&(cParam0->f_2216)))
					{
						func_113(cParam0);
						func_197(cParam0);
						func_112(cParam0);
						return true;
					}
				}
			}
		}
	}
	if (func_198(cParam0))
	{
		if (cParam0->f_17 == 2)
		{
			func_112(cParam0);
			return true;
		}
	}
	return false;
}

void func_61(char[4] cParam0)
{
	int iVar0;

	func_58(cParam0);
	func_62(&(cParam0->f_2277), 0, 0, 1, 0);
	func_113(cParam0);
	func_34(&(cParam0->f_16), 1);
	func_199(cParam0);
	func_11(cParam0, func_200(cParam0));
	iVar0 = func_200(cParam0);
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

void func_62(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_201((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_202(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

bool func_63(int iParam0)
{
	return func_203(iLocal_2076, iParam0);
}

bool func_64()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_1114[iVar0]))
		{
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_1114[iVar0]);
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_65(char[4] cParam0)
{
	func_204(&(cParam0->f_2052), cLocal_1124);
	func_204(&(cParam0->f_2052), cLocal_1125);
	func_204(&(cParam0->f_2052), cLocal_1126);
	func_204(&(cParam0->f_2052), cLocal_1127);
	func_204(&(cParam0->f_2052), cLocal_1128);
	func_204(&(cParam0->f_2052), cLocal_1129);
}

void func_66(int iParam0)
{
	func_205(&iLocal_2076, iParam0);
}

bool func_67()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_1114[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_68(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<4> Var4;

	if (func_9() != iParam9)
	{
		func_206(0);
	}
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_207(Global_1392626[iParam0 /*32*/].f_3, Var0, Var4, iParam9, iParam10);
}

void func_69(int iParam0, int iParam1)
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

bool func_70(char[4] cParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_112[0 /*130*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_112[0 /*130*/]);
	}
	if (func_208(cParam0))
	{
		if (func_154(Local_15, vLocal_2042, 2f, 0, 1))
		{
			func_209(4096);
			func_209(32768);
			TASK::CLEAR_PED_TASKS(Local_15, true, false);
			func_210();
			iLocal_2119 = 3;
			return true;
		}
		else if (!ENTITY::IS_ENTITY_DEAD(Local_15))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_15, vLocal_2042, 188.5823f, false, false, true);
		}
	}
	return false;
}

void func_71(int iParam0)
{
	func_211(1, iParam0, 0);
}

bool func_72(char[4] cParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_112[0 /*130*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_112[0 /*130*/]);
	}
	if (func_212())
	{
		if (!func_213(8))
		{
			func_214(8);
		}
		if (!func_215(-1835851517))
		{
			func_216(-1835851517, 1, 0);
		}
		if (func_154(Local_15, vLocal_2042, 2f, 0, 1))
		{
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_112[2 /*130*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_112[2 /*130*/]);
			}
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_112[1 /*130*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_112[1 /*130*/]);
			}
			func_209(4096);
			func_209(8192);
			iLocal_2119 = 4;
			func_214(1);
			if (func_176(3, 0))
			{
				if (func_217(3, sLocal_1130[18]))
				{
					func_218("LSUTKR_START", 0);
					iLocal_1204 = 14;
					ANIMSCENE::START_ANIM_SCENE(Local_112[3 /*130*/]);
					func_164(&uLocal_2091);
					func_214(4096);
					return true;
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(Local_15))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_15, vLocal_2042, 188.5823f, false, false, true);
		}
	}
	return false;
}

void func_73(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

bool func_74(char[4] cParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_112[0 /*130*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_112[0 /*130*/]);
	}
	if (!func_219())
	{
		return false;
	}
	if (func_212())
	{
		if (!func_213(8))
		{
			func_214(8);
		}
		if (!func_215(-1838352012))
		{
			func_216(-1838352012, 1, 0);
		}
		if (!func_176(6, 0))
		{
			return false;
		}
		if (func_154(Local_15, vLocal_2028, 2f, 0, 1))
		{
			if (func_176(4, 0))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_112[4 /*130*/], func_220(2), Local_1023[2 /*8*/]);
				func_221();
				func_218("LSUTKR_START", 0);
				func_222(cParam0);
				func_214(2);
				func_209(4096);
				func_209(8192);
				func_223(&iLocal_2060);
				iLocal_2119 = 4;
				func_214(524288);
				return true;
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(Local_15))
		{
			ENTITY::SET_ENTITY_COORDS(Local_15, vLocal_2028, true, false, true, true);
		}
	}
	return false;
}

bool func_75()
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_112[0 /*130*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_112[0 /*130*/]);
	}
	if (!func_219())
	{
		return false;
	}
	if (func_212())
	{
		if (!func_213(8))
		{
			func_214(8);
		}
		if (!func_215(-1838352012))
		{
			func_216(-1838352012, 1, 0);
		}
		if (func_154(Local_15, vLocal_2028, 5f, 0, 1))
		{
			func_221();
			func_218("LSUTKR_START", 0);
			func_224();
			func_225(GET_HASH_KEY("MONEY_LOANSHARK_GWEN_DEBT"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_1023[3 /*8*/]))
			{
				OBJECT::DELETE_OBJECT(&(Local_1023[3 /*8*/]));
			}
			PED::APPLY_PED_DAMAGE_PACK(Local_15, "CC_DUSTY_full_Body_A", 0f, 1f);
			return true;
		}
		else if (!ENTITY::IS_ENTITY_DEAD(Local_15))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_15, 1277.749f, -1210.383f, 81.2129f, 155.0589f, true, false, true);
		}
	}
	return false;
}

bool func_76(char[4] cParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_348)))
	{
		if (!func_192(&(cParam0->f_352), cParam0->f_348, 0, 0))
		{
			return false;
		}
	}
	else
	{
		func_81(1, 1, 1);
		func_226(cParam0);
		if (!func_227(cParam0))
		{
			return false;
		}
		if (func_228())
		{
			func_71(1);
			return false;
		}
	}
	if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 32))
	{
		return false;
	}
	return true;
}

bool func_77(char* sParam0)
{
	return (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && ANIMSCENE::_0x5D7BFDA2290B4E39(sParam0));
}

void func_78(var uParam0, var uParam1)
{
	struct<8> Var0;

	if (func_229(uParam1, 32768))
	{
		Var0 = { func_230(uParam0) };
		func_231(uParam0, &Var0);
		if (func_229(uParam1, 131072))
		{
			func_232(uParam0, 268435456);
			if (func_158(uParam0->f_289))
			{
				uParam0->f_289 = { func_233(uParam1, uParam1->f_1450) };
			}
			if (func_158(uParam0->f_286))
			{
				uParam0->f_286 = { func_233(uParam1, uParam1->f_1450) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_286, &(uParam0->f_286.f_2), false);
				uParam0->f_286.f_2 = (uParam0->f_286.f_2 + 0.5f);
			}
		}
		if (func_229(uParam1, 268435456))
		{
			func_234(&(uParam0->f_284), 16384);
		}
	}
	else if (func_229(uParam1, 524288))
	{
		func_232(uParam0, 67108864);
		func_235(uParam1, 524288);
	}
	if (func_236(uParam1, 128))
	{
		func_232(uParam0, 32);
	}
	if (uParam1->f_1669 != 0)
	{
		uParam0->f_296 = uParam1->f_1669;
		if (uParam1->f_1450 >= 0 && func_237(&(uParam1->f_782[uParam1->f_1450 /*41*/]), 256))
		{
			func_234(&(uParam0->f_284), 524288);
		}
	}
	if (*uParam1 == 0 && CAM::_0x927B810E43E99932(&(uParam1->f_1458)))
	{
		MISC::_COPY_MEMORY(&(uParam0->f_297), &(uParam1->f_1458), 16);
	}
}

int func_79(char[4] cParam0)
{
	char cVar0[32];

	StringCopy(&cVar0, cParam0->f_346, 32);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 1;
	}
	return func_238(cVar0, &(cParam0->f_32), cParam0);
}

void func_80(char[4] cParam0)
{
	TASK::CLEAR_PED_TASKS(Global_35, true, false);
	if (ENTITY::DOES_ENTITY_EXIST(Global_1392626[*cParam0 /*32*/].f_11))
	{
		TASK::TASK_LOOK_AT_ENTITY(Global_35, Global_1392626[*cParam0 /*32*/].f_11, -1, 0, 51, 0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Global_1392626[*cParam0 /*32*/].f_11, -1, -1f, -1f, -1f);
	}
}

void func_81(int iParam0, int iParam1, int iParam2)
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

void func_82(char[4] cParam0, bool bParam1)
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
	if (func_77(cParam0->f_346))
	{
		func_239(&(cParam0->f_32));
	}
	else
	{
		func_240(cParam0);
	}
	func_241(&(cParam0->f_32));
	StringCopy(&(cParam0->f_348), "", 32);
}

int func_83(char[4] cParam0)
{
	return 9;
}

bool func_84(char[4] cParam0)
{
	return false;
}

void func_85(char[4] cParam0)
{
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
}

void func_86(char[4] cParam0)
{
}

int func_87(char[4] cParam0)
{
	func_242(cParam0);
	PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
	if (PED::IS_PED_ON_FOOT(Global_35))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_ENTER"), false);
	}
	func_243(0);
	if (!bLocal_2055)
	{
		AUDIO::_0x6339C1EA3979B5F7("LSUND_mixer", "LSUND_Scenes");
		bLocal_2055 = true;
	}
	if (func_49(&uLocal_1960))
	{
		if (func_244(&uLocal_1960) < 2f)
		{
			if (func_245(Global_35, Local_15, 6f, 1))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
			}
		}
		else if (func_244(&uLocal_1960) < 5f)
		{
			if (func_245(Global_35, Local_15, 6f, 1))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
			}
		}
		else
		{
			func_246(&uLocal_1960);
		}
	}
	if (func_213(8))
	{
		func_247();
		func_248(cParam0);
	}
	if (!func_213(8))
	{
		if (func_208(cParam0))
		{
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_2064[0]))
	{
		if (iLocal_2119 > 1)
		{
			func_249(iLocal_2064[0]);
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_2064[1]))
	{
		if (iLocal_2119 > 1)
		{
			if (func_250(iLocal_2063, 1, 1))
			{
				func_251(iLocal_2063, 1);
				func_252(&iLocal_2063, 1);
			}
		}
		else if (!func_250(iLocal_2063, 1, 1))
		{
			iLocal_2063 = func_253(Local_15, iLocal_2064[1], 1);
			func_254(iLocal_2063, 1);
		}
	}
	switch (iLocal_2119)
	{
		case 0:
			func_255();
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.1f);
			break;
		case 1:
			func_256();
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.1f);
			break;
		case 2:
			func_257(cParam0);
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			break;
		case 3:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.1f);
			func_258(cParam0);
			break;
		case 4:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.1f);
			func_259(cParam0);
			break;
		case 5:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			func_260(cParam0);
			break;
		case 6:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			func_261(cParam0);
			break;
		case 8:
			if (func_262(cParam0))
			{
				func_218("LSUKTR_STOP", 0);
				return 9;
			}
			break;
	}
	return 8;
}

void func_88(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_263(iParam0))
	{
		return;
	}
	else if (!func_106(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (!func_264(1))
	{
		func_265(1);
	}
	func_116(iParam0);
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
		Global_40.f_9422[2 /*7*/] = func_266();
		func_267(&(Global_40.f_9422[2 /*7*/]), 0, 0, 0, 3, 0, 0, 0);
	}
	func_268(Global_1392626[iParam0 /*32*/].f_3, bParam2, bParam1, 0, 1);
	if (Global_1392626[iParam0 /*32*/].f_7 != -1)
	{
		func_269(Global_1392626[iParam0 /*32*/].f_7);
	}
}

void func_89(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_270(0))
	{
		if (func_271(0))
		{
			func_272(0);
		}
	}
	if (func_270(1))
	{
		if (func_271(1))
		{
			func_272(1);
		}
	}
}

void func_90()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_91(bool bParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_273() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13) && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_274(iVar0, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = iVar0;
		Global_1898077.f_8 = func_275();
		Global_1898077.f_9 = func_276(Global_1894899.f_2);
		func_277(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	Global_1898077.f_2 = 0;
}

void func_92(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_93(int iParam0)
{
	return func_94(Global_1392626[iParam0 /*32*/].f_8, 64);
}

bool func_94(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

var func_95(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 1);
	}
	if (Global_1572887.f_12 != -1)
	{
		return func_278(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_279(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_278(sVar0, iParam1, 0, 0, 1, 1);
}

void func_96()
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

void func_97()
{
	Global_1572864.f_8 = -1;
	Global_1572864.f_9 = -1;
	Global_1572864.f_10 = -1;
	func_206(0);
	func_280(0);
	func_281(0);
	func_282(0);
	func_283(0);
	func_284(1f);
}

void func_98(bool bParam0, bool bParam1)
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
		func_285(0);
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

void func_99(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_100()
{
	return false;
}

void func_101(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_286(Global_1347343.f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_99(&(Global_1347343.f_11), 64);
	}
	if (bParam4)
	{
		func_99(&(Global_1347343.f_11), 16384);
	}
	if (func_287() >= 2)
	{
		if (!func_286(Global_1347343.f_11, 16384))
		{
			func_99(&(Global_1347343.f_11), 8);
		}
		func_284(0.88f);
	}
	StringCopy(&(Global_1347343.f_3), sParam2, 64);
	Global_1347343.f_2 = uParam0;
	Global_1347343 = 0;
	Global_1347343.f_1 = iParam1;
	func_184(&Global_1935630, 2048);
	func_288(bParam5);
}

void func_102(int iParam0)
{
	if (!func_263(iParam0))
	{
		return;
	}
	else if (!func_106(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	func_116(iParam0);
	func_136(&(Global_1392626[iParam0 /*32*/].f_8), 1);
	if (iParam0 == 2)
	{
		Global_40.f_9422[2 /*7*/] = func_266();
		func_267(&(Global_40.f_9422[2 /*7*/]), 0, 0, 0, 3, 0, 0, 0);
	}
	Global_40.f_9052.f_1[iParam0] = func_266();
	func_267(&(Global_40.f_9052.f_1[iParam0]), 0, 0, 2, 0, 0, 0, 0);
	func_289(Global_1392626[iParam0 /*32*/].f_3);
	func_290(Global_1392626[iParam0 /*32*/].f_3, 0);
}

void func_103(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	char* sVar3;

	if (func_153(iParam0, 4))
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
	if (func_153(iParam0, 4))
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
			Global_1392626[iParam0 /*32*/].f_23 = func_291(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 4096 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_MEMORY", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_291(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 2048 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_WANTED_REGION", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_291(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 16384 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_PREV_WANTED", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_291(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 8192 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_COMBAT", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_291(sVar3, 10000, 0, 0, 0, 1);
		}
		func_29(&(Global_1392626[iParam0 /*32*/].f_9), 8192);
	}
}

bool func_104(int iParam0, bool bParam1, bool bParam2)
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
		if (func_292())
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
		iVar0 = func_293(Global_1898164.f_1[0 /*5*/]);
		if (func_294(iVar0) && func_295(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_106(Global_1898164.f_1[0 /*5*/]))
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

int func_105(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

bool func_106(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_107()
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

float func_108(var uParam0)
{
	return 1000f;
}

bool func_109(var uParam0)
{
	int iVar0;

	iVar0 = func_114(uParam0);
	if (iVar0 == 0 || iVar0 == 1)
	{
		if (iVar0 == 1)
		{
			if ((((ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_112[1 /*130*/]) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_112[1 /*130*/], false)) && !func_213(16)) && !func_213(32)) && !func_213(64))
			{
				if (func_296(1, sLocal_1163[14]))
				{
				}
			}
		}
		if (!func_297(uParam0))
		{
			return false;
		}
	}
	if (iVar0 != 2)
	{
		if ((!func_298(Local_15, -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */) || func_154(Global_35, vLocal_2028, 70f, 1, 1)) || func_154(Global_35, Local_15.f_1, 200f, 1, 1))
		{
			return false;
		}
	}
	else if (!func_298(Local_15, -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */))
	{
		return false;
	}
	func_299(&Local_15);
	return true;
}

void func_110(int iParam0, int iParam1)
{
	if (!func_263(iParam0))
	{
		return;
	}
	else if (!func_106(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (func_180(Global_1392626[iParam0 /*32*/].f_3) || func_181(Global_1392626[iParam0 /*32*/].f_3))
	{
		func_300(Global_1392626[iParam0 /*32*/].f_3, 0, 2);
	}
	if (iParam1 == 0)
	{
		MISC::CLEAR_BIT(&(Global_40.f_9052), iParam0);
		func_116(iParam0);
	}
}

void func_111(char[4] cParam0)
{
	int iVar0;

	if (!func_215(-1674179981))
	{
		func_216(-1674179981, 1, 0);
	}
	func_301();
	func_302();
	func_303(&uLocal_1064);
	func_218("LSUKTR_STOP", 0);
	func_304();
	func_305();
	func_119(&Local_1812, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2123))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_2123, 136, false);
	}
	func_306(Local_1023[1 /*8*/], 1, 1);
	func_306(Local_1023[3 /*8*/], 1, 1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1023[iVar0 /*8*/]))
		{
			if (iVar0 != 0)
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_1023[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
	if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_2062))
	{
		ENTITY::_UNPIN_MAP_ENTITY(iLocal_2062);
	}
	func_119(&iLocal_2123, 1, 0, 1);
	func_307(&iLocal_2122);
	func_223(&iLocal_2060);
	func_223(&(Local_15.f_5));
	if (bLocal_2054)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15))
		{
			PLAYER::_0x9073EC5456651A90(PLAYER::GET_PLAYER_INDEX(), Local_15);
		}
	}
	func_119(&Local_15, 1, 0, 1);
	func_308();
	func_299(&Local_1208);
	func_309(82);
	func_309(134);
	func_309(80);
	func_90();
	func_310();
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(210376647, true);
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "LSUND");
	HUD::_DISPLAY_HUD_COMPONENT(724769646);
}

void func_112(char[4] cParam0)
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
	func_246(&(cParam0->f_17.f_12));
}

void func_113(char[4] cParam0)
{
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 1024))
	{
		func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 1024);
		if (func_145(Global_1392626[*cParam0 /*32*/].f_11, 0))
		{
			func_62(&(cParam0->f_2277), 0, 0, 1, 0);
			func_311(&(Global_1392626[*cParam0 /*32*/].f_11));
		}
	}
}

int func_114(char[4] cParam0)
{
	return cParam0->f_15;
}

bool func_115(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_116(int iParam0)
{
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	if (MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/]))
	{
		func_312(&(Global_1392626[iParam0 /*32*/].f_10));
		MAP::REMOVE_BLIP(&(Global_1392626[iParam0 /*32*/]));
	}
	if (MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/].f_1))
	{
		func_312(&(Global_1392626[iParam0 /*32*/].f_10));
		MAP::REMOVE_BLIP(&(Global_1392626[iParam0 /*32*/].f_1));
	}
}

void func_117(var uParam0, var uParam1)
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

void func_118(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392626[iParam0 /*32*/].f_30))
	{
		func_313(Global_1392626[iParam0 /*32*/].f_30);
		VOLUME::_DELETE_VOLUME(Global_1392626[iParam0 /*32*/].f_30);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392626[iParam0 /*32*/].f_31))
	{
		func_313(Global_1392626[iParam0 /*32*/].f_31);
		VOLUME::_DELETE_VOLUME(Global_1392626[iParam0 /*32*/].f_31);
	}
	if (iParam0 == 4)
	{
		func_314(1411.856f, 1166.743f, 184.1507f, 200f, 5);
	}
}

void func_119(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*bParam0))
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*bParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*bParam0, false))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*bParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*bParam0, 0);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*bParam0);
		}
		PED::SET_PED_KEEP_TASK(*bParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*bParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(bParam0);
}

void func_120(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_126(&(uParam0->f_1), 16384);
	}
	else
	{
		func_127(&(uParam0->f_1), 16384);
	}
}

void func_121(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_126(&(uParam0->f_1), 256);
	}
	else
	{
		func_127(&(uParam0->f_1), 256);
	}
}

void func_122(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_127(uParam0, 16);
	}
	else
	{
		func_126(uParam0, 67108864);
		func_126(uParam0, 16);
	}
}

void func_123(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_126(&(uParam0->f_1), 128);
	}
	else
	{
		func_127(&(uParam0->f_1), 128);
	}
}

void func_124(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_127(uParam0, 256);
	}
	else
	{
		func_126(uParam0, 256);
	}
}

void func_125(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_127(uParam0, 268435456);
	}
	else
	{
		func_126(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_127(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_126(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_127(uParam0, 536870912);
	}
	else
	{
		func_126(uParam0, 536870912);
	}
}

void func_126(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_127(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_128()
{
	return Global_1572864.f_8;
}

int func_129(int iParam0)
{
	if (func_315(iParam0) == 6)
	{
		if (func_293(iParam0) == 0)
		{
			return func_316(iParam0);
		}
	}
	return -1;
}

void func_130(var uParam0, char* sParam1)
{
	StringCopy(&(uParam0->f_2205), sParam1, 24);
}

void func_131(var uParam0)
{
	func_317(&(iLocal_2064[2]), 1274.627f, -1208.393f, 82.29432f, 0f, 0f, 23.25f, 4f, 7f, 4f, "MV_GRAVE_VOL");
	func_178(&(iLocal_2064[3]), 1290.453f, -1229.947f, 82.433f, 0f, 0f, 23.65f, 32.437f, 34.893f, 21.716f, "MV_GRAVEYARD_VOL");
	func_317(&(iLocal_2064[4]), 1284.124f, -1225.064f, 84.78531f, 0f, 0f, 20.2f, 3.68f, 5.75f, 9.5f, "MV_CHURCH_STAIRS_VOL");
	func_317(&(iLocal_2064[5]), 1292.395f, -1220.659f, 81.68302f, 0f, 0f, 20.99999f, 4.5f, 14f, 3.75f, "MV_CHURCH_BUSHES_RIGHT_VOL");
	func_178(&(iLocal_2064[6]), 1291.169f, -1235.585f, 76.04839f, 0f, 0f, 109f, 54f, 39.25f, 26.25f, "MV_MISSION_AREA_VOL");
	func_317(&(iLocal_2064[7]), 1316.645f, -1284.158f, 76.92039f, 0f, 0f, 56.90787f, 83.8111f, 23.88441f, 13.18233f, "MV_ABANDONED_WAGON_VOL");
	func_317(&(iLocal_2064[8]), 1300.89f, -1306.568f, 77.06334f, 0f, 0f, 48.25f, 6.25f, 5.25f, 7.5f, "MV_HORSE_HITCH_AREA_VOL");
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_2064[3]))
	{
		func_318(iLocal_2064[3], "MV_GRAVEYARD_VOL", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_2064[3], 0, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(iLocal_2064[3], 0, 0, 0, -1, -1, 0);
		PATHFIND::_0xE5EF9DE716FF737E(iLocal_2064[3], 0, 0);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_2064[8]))
	{
		if (!PED::_0x91A5F9CBEBB9D936(uLocal_2061))
		{
			uLocal_2061 = func_319(iLocal_2064[8], 0, 0, 0);
		}
	}
	func_320(uParam0, 1300.39f, -1318.744f, 75.68119f, 0f, 0f, 0f, 8f, 8f, 8f);
	func_321(uParam0, 12f, 11f, 10.5f, 10f, 1f, 0);
}

void func_132(var uParam0, int iParam1)
{
	uParam0->f_12 = iParam1;
}

void func_133(var uParam0, int iParam1)
{
	uParam0->f_13 = iParam1;
}

void func_134()
{
	STREAMING::REQUEST_MODEL(GET_HASH_KEY("SCRIPTEDBALL"), false);
}

void func_135()
{
	func_322(&(Local_2124[0 /*17*/]), "MCXT_REASON", " ", GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_322(&(Local_2124[1 /*17*/]), "MCXT_THREAT", " ", GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	func_322(&(Local_2159[0 /*17*/]), "MCXT_REASON", " ", GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_322(&(Local_2159[1 /*17*/]), "MCXT_THREAT", " ", GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
}

void func_136(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_137(var uParam0)
{
	func_323();
	func_324(uParam0);
	func_325();
	func_326();
	func_327();
	func_328();
}

bool func_138(var uParam0)
{
	if (!func_145(Local_15, 0))
	{
		return true;
	}
	else if (iLocal_2121 == 1 && !func_154(Global_35, Local_15.f_1, 10f, 1, 1))
	{
		return true;
	}
	return false;
}

void func_139(int iParam0, int iParam1)
{
	if (!func_263(iParam0))
	{
		return;
	}
	func_329(&(Global_1392626[iParam0 /*32*/].f_10), iParam1);
	func_329(&(Global_1392626[iParam0 /*32*/].f_10), 2);
	func_136(&(Global_1392626[iParam0 /*32*/].f_8), 1);
}

bool func_140(int iParam0)
{
	if (!func_330(iParam0))
	{
		return false;
	}
	return func_331(iParam0, 33554432);
}

bool func_141(int iParam0)
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
	iVar0 = func_332(func_266());
	if (func_333(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_333(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_333(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_333(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_333(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_333(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_333(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_333(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_333(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_333(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_333(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_333(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_333(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_333(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_333(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_333(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_333(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_142(int iParam0)
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
		if (func_334(21))
		{
			return true;
		}
	}
	return false;
}

bool func_143(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_335(iParam0, bParam1, bParam2, bParam3))
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

bool func_144(int iParam0, float fParam1)
{
	if (BUILTIN::VDIST2(Global_1392626[iParam0 /*32*/].f_24, Global_36) > (fParam1 * fParam1) && iParam0 != func_129(Global_1572864.f_8))
	{
		return false;
	}
	return true;
}

bool func_145(bool bParam0, int iParam1)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_203(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(bParam0))
		{
			return false;
		}
	}
	if (func_203(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(bParam0))
		{
			return false;
		}
	}
	if (func_203(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 11, false))
		{
			return false;
		}
	}
	if (func_203(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(bParam0) && !PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
		{
			return false;
		}
	}
	if (func_203(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(bParam0))
		{
			return false;
		}
	}
	if (func_203(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(bParam0))
		{
			return false;
		}
	}
	if (func_203(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(bParam0))
		{
			return false;
		}
	}
	if (func_203(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(bParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_146(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_336(uParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(bParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_337(bParam0, uParam2))
			{
				*uParam3 = 128;
				func_338(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_339(bParam0, uParam2))
				{
					*uParam3 = 8;
					func_338(bParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_340(bParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_338(bParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_341(bParam0, uParam2))
				{
					*uParam3 = 64;
					func_338(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_335(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_338(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_342(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_343(Global_35, bParam0, uParam2))
					{
						*uParam3 = 4;
						func_338(bParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_344(Global_35, bParam0, uParam2))
					{
						*uParam3 = 256;
						func_338(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_345(Global_35, bParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_338(bParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_345(Global_35, bParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_338(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_346(bParam0, uParam2))
				{
					*uParam3 = 32;
					func_338(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_347(&bParam0, uParam2))
				{
					*uParam3 = 4096;
					func_338(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_348(uParam2, 4000))
				{
					if ((func_349(bParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_350(uParam2, bParam0)) && func_351(uParam2, bParam0))
					{
						*uParam3 = 2;
						func_338(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_349(bParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_350(uParam2, bParam0)) && func_351(uParam2, bParam0))
				{
					*uParam3 = 2;
					func_338(bParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_352(bParam0, Global_1935630.f_41))
							{
								func_353();
								*uParam3 = 2;
								func_338(bParam0, uParam2, *uParam3);
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
						if (func_352(bParam0, Global_1935630.f_41))
						{
							func_353();
							*uParam3 = 2;
							func_338(bParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_354(uParam2, bParam0) || (uParam2->f_9 > 0 && (func_166() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(bParam0))
					{
						func_353();
						*uParam3 = 2;
						func_338(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_355())
					{
						if (func_352(bParam0, Global_1935630.f_42))
						{
							func_353();
							*uParam3 = 2;
							func_338(bParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_356(uParam2, bParam0))
			{
				*uParam3 = 1024;
				func_338(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_357(bParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_338(bParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_358(bParam0, uParam2))
					{
						*uParam3 = 8192;
						func_338(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_359(bParam0, uParam2))
				{
					*uParam3 = 32768;
					func_338(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_360(uParam2, 4000))
				{
					if (func_361(&bParam0, uParam2))
					{
						*uParam3 = 512;
						func_338(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_362(bParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_338(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam0))
		{
			if (func_363(uParam2, bParam0))
			{
				*uParam3 = 1;
				func_338(bParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_147(float fParam0)
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

void func_148(char[4] cParam0)
{
	func_364(cParam0, 2);
	func_223(&iLocal_2060);
	func_223(&(Local_15.f_5));
	func_305();
	func_218("LSUKTR_STOP", 0);
	func_303(&uLocal_1064);
	func_365();
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_112[0 /*130*/]))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_112[0 /*130*/], func_220(1), Local_1023[1 /*8*/]);
	}
	func_366(Local_112[0 /*130*/]);
	if (func_114(cParam0) == 1)
	{
		func_299(&Local_15);
	}
	if (func_114(cParam0) == 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_15))
		{
			PED::SET_PED_CAN_BE_TARGETTED(Local_15, true);
			PED::SET_PED_CAN_RAGDOLL(Local_15, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_15, GET_HASH_KEY("REL_CIVMALE"));
		}
		func_119(&Local_1812, 0, 1, 1);
		if (ENTITY::DOES_ENTITY_EXIST(Local_1614[0 /*97*/]) && !ENTITY::IS_ENTITY_DEAD(Local_1614[0 /*97*/]))
		{
			if (!PED::IS_PED_HOGTIED(Local_1614[0 /*97*/]))
			{
				func_119(&(Local_1614[0 /*97*/]), 0, 1, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1614[1 /*97*/]) && !ENTITY::IS_ENTITY_DEAD(Local_1614[1 /*97*/]))
		{
			if (!PED::IS_PED_HOGTIED(Local_1614[1 /*97*/]))
			{
				func_119(&(Local_1614[1 /*97*/]), 0, 1, 1);
			}
		}
		func_214(-2147483648);
	}
	else if (func_114(cParam0) == 4 || func_114(cParam0) == 5)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_15))
		{
			func_367();
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_15))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15, false);
	}
	if (bLocal_2055)
	{
		AUDIO::_0x9428447DED71FC7E("LSUND_Scenes");
	}
}

void func_149(int iParam0)
{
	Global_36580 = iParam0;
}

void func_150()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1347702)
	{
		if (func_294(iVar0))
		{
			if (func_368(iVar0, 4))
			{
				if (func_368(iVar0, 16))
				{
					func_369(iVar0, 1);
				}
				if (func_368(iVar0, 8))
				{
					func_370(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_151()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

void func_152(char[4] cParam0)
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
		iVar1 = func_114(cParam0);
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

bool func_153(int iParam0, int iParam1)
{
	if (func_263(iParam0))
	{
		return (Global_40.f_9052.f_11[iParam0] && iParam1) != 0;
	}
	return false;
}

bool func_154(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(bParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return true;
		}
	}
	else if (func_371(ENTITY::GET_ENTITY_COORDS(bParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_155(int iParam0)
{
	if (!func_153(iParam0, 8))
	{
		func_116(iParam0);
		func_372(iParam0);
		func_373(iParam0, 8);
	}
}

int func_156(vector3 vParam0, var uParam3)
{
	int iVar0;

	if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) != 1)
	{
		func_374(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_375(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_376(0, 0);
		if (func_377(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			func_378(1, 0);
		}
	}
	else
	{
		func_378(1, 0);
	}
	func_280(0);
	func_379(0, vParam0, uParam3);
	return 1;
}

bool func_157(char[4] cParam0)
{
	if (cParam0->f_1 == 8)
	{
		if (!func_145(Local_15, 0))
		{
			StringCopy(&(cParam0->f_2208), "UND_FAIL_1", 16);
			return true;
		}
		else if (func_380())
		{
			StringCopy(&(cParam0->f_2208), "UND_FAIL_5", 16);
			return true;
		}
		else if (iLocal_2121 == 11)
		{
			func_71(0);
			if (iLocal_2119 > 2)
			{
				StringCopy(&(cParam0->f_2208), "UND_FAIL_2", 16);
			}
			else
			{
				StringCopy(&(cParam0->f_2208), "UND_FAIL_3", 16);
			}
			return true;
		}
		if (iLocal_2119 < 3)
		{
			if (func_381())
			{
				func_382();
				StringCopy(&(cParam0->f_2208), "UND_FAIL_2", 16);
				return true;
			}
		}
		if (func_383())
		{
			func_382();
			StringCopy(&(cParam0->f_2208), "UND_FAIL_2", 16);
			return true;
		}
		if (!func_49(&uLocal_1966))
		{
			if (PLAYER::_0x6C54E69516CC56BD(PLAYER::GET_PLAYER_INDEX()) > 0)
			{
				func_164(&uLocal_1966);
			}
			else if (PED::_0x5407B7288D0478B7(Global_35, 16900) > 0)
			{
				func_164(&uLocal_1966);
			}
		}
		else if (func_244(&uLocal_1966) > 4f)
		{
			func_382();
			StringCopy(&(cParam0->f_2208), "UND_FAIL_2", 16);
			return true;
		}
		if (func_335(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
		{
			func_382();
			StringCopy(&(cParam0->f_2208), "UND_FAIL_6", 16);
			return true;
		}
		if ((PED::IS_PED_SHOOTING(Global_35) && func_375(Global_35, 1, 0, 0) != GET_HASH_KEY("WEAPON_LASSO")) && iLocal_2119 > 2)
		{
			func_382();
			StringCopy(&(cParam0->f_2208), "UND_FAIL_2", 16);
			return true;
		}
		if (iLocal_2119 == 2)
		{
			if (!func_213(536870912))
			{
				if (PED::IS_PED_FULLY_ON_MOUNT(Global_35, true) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					func_214(536870912);
				}
			}
			else
			{
				if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
				{
					func_384(536870912);
					if (func_49(&uLocal_1954))
					{
						func_246(&uLocal_1954);
					}
					return false;
				}
				if (func_385(33554432) || func_386(Global_35, iLocal_2064[3], 0, 1))
				{
					if (!func_49(&uLocal_1954))
					{
						func_164(&uLocal_1954);
					}
					else if (func_244(&uLocal_1954) > 12f || func_386(Global_35, iLocal_2064[3], 0, 1))
					{
						StringCopy(&(cParam0->f_2208), "UND_FAIL_2", 16);
						return true;
					}
				}
			}
		}
		else if (iLocal_2119 > 2)
		{
			if (!func_213(536870912))
			{
				if (PED::IS_PED_FULLY_ON_MOUNT(Global_35, true) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					func_214(536870912);
				}
			}
			else
			{
				if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
				{
					func_384(536870912);
					if (func_49(&uLocal_1954))
					{
						func_246(&uLocal_1954);
					}
					return false;
				}
				if (func_386(Global_35, iLocal_2064[3], 0, 1))
				{
					if (!func_49(&uLocal_1954))
					{
						func_164(&uLocal_1954);
					}
					else if (func_244(&uLocal_1954) > 3f || func_386(Global_35, iLocal_2064[3], 0, 1))
					{
						StringCopy(&(cParam0->f_2208), "UND_FAIL_2", 16);
						return true;
					}
				}
			}
		}
		if ((func_385(524288) && !func_387("LS_UND_BRW_SPT1")) && !func_387("LS_UND_BRW_SPT2"))
		{
			if (!func_63(134217728))
			{
				if (func_388(&(cParam0->f_2106), "LS_UND_SEEN", 0))
				{
					func_66(134217728);
				}
			}
			else if (!func_387("LS_UND_SEEN"))
			{
				func_214(1048576);
				StringCopy(&(cParam0->f_2208), "UND_FAIL_4", 16);
				return true;
			}
		}
		else if (func_63(32) && !func_387("LS_UND_WOM_GWN"))
		{
			if (!func_63(134217728))
			{
				if (func_388(&(cParam0->f_2106), "LS_UND_SEEN", 0))
				{
					func_66(134217728);
				}
			}
			else if (!func_387("LS_UND_SEEN"))
			{
				func_214(1048576);
				StringCopy(&(cParam0->f_2208), "UND_FAIL_4", 16);
				return true;
			}
		}
	}
	return false;
}

bool func_158(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

Vector3 func_159(int iParam0)
{
	if (!func_263(iParam0))
	{
		return Global_36;
	}
	return Global_1392626[iParam0 /*32*/].f_24;
}

bool func_160(var uParam0, char* sParam1, bool bParam2, bool bParam3)
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
			return (func_389(uParam0, 256) && !func_389(uParam0, 4194304));
		}
		uParam0->f_295 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	func_390(uParam0, sParam1);
	if (!func_389(uParam0, 64))
	{
		if (!func_158(func_391(uParam0)))
		{
			func_232(uParam0, 64);
		}
		else
		{
			vVar0 = { func_392(uParam0) };
			if (!func_158(vVar0))
			{
				func_393(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = func_394(Global_35, func_391(uParam0), 1);
	if (func_389(uParam0, 128) || func_389(uParam0, 256))
	{
		if ((fVar3 >= func_395(uParam0) && !bParam2) || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228))
		{
			if (uParam0->f_313)
			{
				func_396();
				uParam0->f_313 = 0;
			}
			func_397(uParam0);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_228);
			}
			func_239(uParam0);
			func_398(uParam0, 128, 1);
			func_398(uParam0, 256, 1);
			func_398(uParam0, 4096, 1);
			func_398(uParam0, 32768, 1);
			func_398(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_399(uParam0) || bParam2)
	{
		if (!func_389(uParam0, 128))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228))
			{
				if (func_399(uParam0) >= func_395(uParam0))
				{
				}
				Var4 = { func_400(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					func_401(uParam0);
				}
				Var4 = { func_400(uParam0) };
				iVar12 = 256;
				if (!func_389(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_228 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_224), iVar12, &Var4, false, true);
				func_402(uParam0, 0, 0, 0, 0);
				func_232(uParam0, 128);
			}
		}
	}
	if (func_389(uParam0, 128))
	{
		if (func_389(uParam0, 256) && !func_389(uParam0, 4194304))
		{
			return true;
		}
		func_403(uParam0);
		if (!uParam0->f_313)
		{
			if (func_404())
			{
				func_405(4096);
				uParam0->f_313 = 1;
			}
		}
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_228, true, false))
		{
			bVar13 = true;
			Var15 = { func_230(uParam0) };
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
			if (!func_389(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_228, &Var15))
				{
					if (!func_389(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_228, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_228, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_228, &Var15))
						{
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_228, &Var15);
						}
						func_232(uParam0, 16777216);
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
			func_232(uParam0, 256);
			func_398(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

void func_161(char[4] cParam0)
{
}

void func_162(char[4] cParam0)
{
	char cVar0[64];
	struct<4> Var8;

	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 64))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(cParam0->f_32.f_4) && !func_158(cParam0->f_32.f_5))
	{
		StringCopy(&cVar0, func_406(*cParam0), 64);
		StringConCat(&cVar0, ".VolRestrictCutscene", 64);
		cParam0->f_32.f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(cParam0->f_32.f_5, 0f, 0f, 0f, 5f, 5f, 5f, &cVar0);
		func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 128);
	}
	if (VOLUME::DOES_VOLUME_EXIST(cParam0->f_32.f_4))
	{
		POPULATION::_0xB56D41A694E42E86(cParam0->f_32.f_4, 0, 0, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(cParam0->f_32.f_4, 0, 0, 0, -1, -1, 0);
		cParam0->f_2213[1] = PED::_0x4C39C95AE5DB1329(cParam0->f_32.f_4, false, 15);
		if (func_407(cParam0->f_32.f_4, &Var8))
		{
			PATHFIND::SET_ROADS_IN_AREA(Var8, Var8.f_3, 0, 1, 0);
		}
	}
	func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 64);
}

bool func_163(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_164(var uParam0)
{
	func_408(uParam0, 0f);
}

bool func_165(var uParam0)
{
	return func_163(*uParam0, 2);
}

int func_166()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_167(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_168(var uParam0)
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

void func_169(var uParam0)
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

int func_170(var uParam0)
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

int func_171(var uParam0)
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

bool func_172(int iParam0)
{
	if (!func_330(iParam0))
	{
		return false;
	}
	return func_331(iParam0, 8);
}

int func_173(int iParam0)
{
	int iVar0;

	if (!func_409(iParam0))
	{
		return 0;
	}
	if (!func_411(func_410(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_412(iParam0)))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PERSCHAR::_0x31C70A716CAE1FEE(func_412(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = PERSCHAR::_0x31C70A716CAE1FEE(func_412(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
	}
	PERSCHAR::_0x7B204F88F6C3D287(func_412(iParam0));
	return 1;
}

int func_174(var uParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(Local_15))
	{
		if (func_413(3, &Local_15, iLocal_1306, vLocal_2032, fLocal_2035, 1, 1, 0, 1, 1, 0, 1))
		{
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(Local_15, false);
			func_414(1300.641f, -1318.057f, 75.54131f, 5f, 0);
		}
	}
	else
	{
		if (!PED::IS_PED_READY_TO_RENDER(Local_15))
		{
			return 0;
		}
		func_415(Local_15, GET_HASH_KEY("META_OUTFIT_DEFAULT"));
		Global_1392626[*uParam0 /*32*/].f_11 = Local_15;
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_15, GET_HASH_KEY("PLAYER"));
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_15, "LSUND_NPC_group", 0f);
		func_417(Local_15, func_416(GET_HASH_KEY("REWARD_PED_SMALL"), 0, -1));
		PED::SET_PED_CONFIG_FLAG(Local_15, 169, true);
		PED::SET_PED_CONFIG_FLAG(Local_15, 504, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_15, false);
		PED::SET_PED_CAN_RAGDOLL(Local_15, false);
		PED::SET_PED_CAN_BE_TARGETTED(Local_15, false);
		PED::SET_PED_CONFIG_FLAG(Local_15, 66, true);
		PED::_0x89F5E7ADECCCB49C(Local_15, "normal");
		PED::_0x923583741DC87BCE(Local_15, "Default");
		PED::SET_PED_CAN_HEAD_IK(Local_15, true);
		PED::_SET_PED_BLACKBOARD_FLOAT(Local_15, "Cautious", 1f, -1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1306);
		return 1;
	}
	return 0;
}

int func_175()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1023[0 /*8*/]))
	{
		STREAMING::REQUEST_MODEL(Local_1023[0 /*8*/].f_7, false);
		if (STREAMING::HAS_MODEL_LOADED(Local_1023[0 /*8*/].f_7))
		{
			if (func_418())
			{
				ENTITY::SET_ENTITY_COORDS(Local_1023[0 /*8*/], vLocal_2036, true, false, true, true);
				ENTITY::SET_ENTITY_ROTATION(Local_1023[0 /*8*/], vLocal_2039, 2, true);
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_1023[0 /*8*/], false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1023[0 /*8*/].f_7);
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1023[1 /*8*/]))
	{
		STREAMING::REQUEST_MODEL(Local_1023[1 /*8*/].f_7, false);
		if (STREAMING::HAS_MODEL_LOADED(Local_1023[1 /*8*/].f_7))
		{
			Local_1023[1 /*8*/] = OBJECT::CREATE_OBJECT(Local_1023[1 /*8*/].f_7, Local_1023[1 /*8*/].f_1, true, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(Local_1023[1 /*8*/], Local_1023[1 /*8*/].f_4, 2, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1023[1 /*8*/].f_7);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1023[1 /*8*/]))
	{
		return 1;
	}
	return 0;
}

bool func_176(int iParam0, int iParam1)
{
	if (!Local_112[iParam0 /*130*/].f_16)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_112[iParam0 /*130*/]))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_112[iParam0 /*130*/], true, false))
			{
				Local_112[iParam0 /*130*/].f_16 = 1;
				switch (iParam0)
				{
					case 0:
						if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(Local_112[iParam0 /*130*/], "Gwen", &(Local_112[iParam0 /*130*/].f_4), false, 0, 2))
						{
						}
						break;
					case 4:
						if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(Local_112[iParam0 /*130*/], "Gwen", &(Local_112[iParam0 /*130*/].f_4), false, 0, 2))
						{
							vLocal_2028 = { Local_112[iParam0 /*130*/].f_4 };
							fLocal_2031 = Local_112[iParam0 /*130*/].f_4.f_3.f_2;
						}
						break;
				}
				return Local_112[iParam0 /*130*/].f_16;
			}
		}
		else
		{
			Local_112[iParam0 /*130*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_112[iParam0 /*130*/].f_1, iParam1, Local_112[iParam0 /*130*/].f_17, false, true);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_112[iParam0 /*130*/]))
			{
				func_419(iParam0);
				ANIMSCENE::LOAD_ANIM_SCENE(Local_112[iParam0 /*130*/]);
			}
		}
	}
	return Local_112[iParam0 /*130*/].f_16;
}

void func_177(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, bool bParam11, int iParam12, bool bParam13, int iParam14, char* sParam15)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		if (bParam11)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
			{
				func_420(uParam0, vParam2, vParam5, vParam8);
			}
			else
			{
				func_317(uParam0, vParam2, vParam5, vParam8, sParam15);
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
		{
			func_421(uParam0, vParam2, vParam5, vParam8);
		}
		else
		{
			func_178(uParam0, vParam2, vParam5, vParam8, sParam15);
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

void func_178(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_179(var uParam0, bool bParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		return;
	}
	if (func_422(uParam0, bParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(bParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(bParam1, bParam3);
			}
		}
	}
}

bool func_180(int iParam0)
{
	int iVar0;

	iVar0 = func_423(iParam0);
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
		iVar0 = func_424(iParam0);
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
	if (!func_106(iParam0))
	{
		return;
	}
	if (!func_425(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_426(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_426(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_315(iParam0), func_293(iParam0), func_316(iParam0), func_426(iParam0), Global_36);
		}
	}
	func_290(iParam0, 1);
	bParam1 = bParam1;
}

void func_183(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_106(iParam0))
	{
		return;
	}
	if (!func_181(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (bParam1)
	{
		if (func_426(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_426(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != Global_1835011[77 /*74*/].f_1)
			{
				func_427(func_293(iParam0));
			}
			if (func_273() != 0)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_426(iParam0), 0);
			}
			else
			{
				STATS::STATSTRACKER_DEED_STARTED(func_426(iParam0), Global_265238.f_79565.f_208.f_17);
			}
		}
	}
	func_428(iParam0);
	if (!func_106(func_105(0)))
	{
		func_290(iParam0, 3);
		func_429(bParam2);
		if (func_273() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_0x55F37F5F3F2475E1();
			}
			func_430(1);
		}
		func_431(iParam0, -1);
		if (bParam1 && !func_432(2))
		{
			func_433(&Global_0, 1024);
		}
		if (func_273() == -1)
		{
			func_434(&(Global_1347343.f_11), 536870912);
			func_435(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_436(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_437(0);
			}
		}
		if (func_273() == -1)
		{
			iVar1 = func_438(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_439();
				switch (iVar1)
				{
					case 0:
						func_440(0);
						break;
					case 1:
						func_440(1);
						break;
					case 2:
						func_440(2);
						break;
					case 3:
						func_440(3);
						break;
					case 4:
						func_440(4);
						break;
					case 5:
						func_440(5);
						break;
					case 6:
						func_440(5);
						break;
					case 7:
						func_440(7);
						break;
					case 8:
						func_440(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (func_293(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_440(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (func_293(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_440(11);
						break;
					default:
						iVar1 = func_439();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_441(0);
									break;
								case 1:
									func_441(1);
									break;
								case 2:
									func_441(2);
									break;
								case 3:
									func_441(3);
									break;
								case 4:
									func_441(4);
									break;
								case 5:
									func_441(5);
									break;
								case 6:
									func_441(5);
									break;
								case 7:
									func_441(7);
									break;
								case 8:
									func_441(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_442(1);
	}
	else
	{
		func_431(iParam0, -1);
		func_290(iParam0, 4);
	}
	func_443(iParam0, 0);
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
	if (func_273() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_276(Global_1894899.f_2);
	Global_1898077.f_1 = 3;
	Global_1898077.f_2 = 0;
	Global_1898077.f_7 = iVar0;
	Global_1898077.f_8 = iParam0;
	Global_1898077.f_9 = iVar1;
	func_277(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
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
	func_444(0f);
	Global_1935436.f_11 = 1;
	if (func_445())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_446();
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

bool func_189(char[4] cParam0)
{
	if (!func_53(64))
	{
		return false;
	}
	if (func_54())
	{
		return false;
	}
	else if (func_167(Global_1935630, 131072))
	{
		return false;
	}
	return true;
}

void func_190(char[4] cParam0)
{
	switch (cParam0->f_17)
	{
		case 0:
			if (func_94(Global_1392626[*cParam0 /*32*/].f_8, 128))
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
						func_246(&(cParam0->f_17.f_12));
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
			if (func_94(Global_1392626[*cParam0 /*32*/].f_8, 128))
			{
				cParam0->f_17 = 2;
				return;
			}
			if (func_447(Global_35, Global_1392626[*cParam0 /*32*/].f_24, &(cParam0->f_17.f_12), cParam0->f_17.f_2, cParam0->f_17.f_3, cParam0->f_17.f_4, cParam0->f_17.f_5, cParam0->f_17.f_6, cParam0->f_17.f_7, 0, 1, 1, 1))
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
			if (!func_94(Global_1392626[*cParam0 /*32*/].f_8, 128))
			{
				if ((PED::IS_PED_FULLY_ON_MOUNT(Global_35, true) && !func_448(Global_35, 501393341)) || (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true) && !func_448(Global_35, -828834893)))
				{
					cParam0->f_17 = 0;
				}
			}
			break;
	}
}

void func_191(var uParam0, struct<4> Param1, int iParam5)
{
	switch (func_449(uParam0))
	{
		case 0:
			func_450(uParam0, Param1, iParam5);
			break;
		case 1:
			func_451(uParam0);
			break;
		case 2:
			func_452(uParam0);
			break;
	}
}

bool func_192(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (func_229(uParam0, 32768))
	{
		return true;
	}
	if (func_449(uParam0) >= 3)
	{
		uParam0->f_1662 = func_335(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
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
		func_453(uParam0);
	}
	if (func_449(uParam0) < 10)
	{
		if (func_449(uParam0) == 3)
		{
			func_454(uParam0, iParam5, bParam6);
		}
		else if (func_449(uParam0) > 3)
		{
			if (func_455(uParam0) == 0)
			{
				if (!func_229(uParam0, 524288))
				{
					func_456(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_457(uParam0, 4);
					func_458(uParam0, 10);
					func_459(uParam0, iParam5);
					return true;
				}
			}
			if (!func_229(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!func_237(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			func_243(0);
			func_460();
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_1450 >= 0)
			{
				if (!func_237(&(uParam0->f_782[uParam0->f_1454 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (func_461(uParam0, uParam0->f_1450))
				{
					if (func_462(uParam0) < 7 && uParam0->f_1454 >= 0)
					{
						func_463(uParam0, uParam0->f_782[uParam0->f_1454 /*41*/].f_27, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_1454 >= 0)
				{
					func_463(uParam0, uParam0->f_782[uParam0->f_1454 /*41*/].f_27, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				func_464(uParam0);
			}
		}
	}
	bVar0 = func_465(uParam0, iParam5, bParam6);
	bVar1 = CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0);
	if (bVar0)
	{
		if ((!func_229(uParam0, 268435456) && bVar1) && !func_229(uParam0, 262144))
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
				func_466(uParam0, 131072);
				func_466(uParam0, 268435456);
			}
		}
		if (func_236(uParam0, 64) || (uParam0->f_1450 >= 0 && !func_237(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || func_455(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_449(uParam0) == 3 || func_229(uParam0, 131072))
	{
		func_467(uParam0);
		if (!func_229(uParam0, 262144))
		{
			if ((bVar0 && func_229(uParam0, 65536)) || func_229(uParam0, 131072))
			{
				func_466(uParam0, 32768);
				func_457(uParam0, 4);
				func_458(uParam0, 10);
				uParam0->f_1535 = 1;
				func_459(uParam0, iParam5);
				return true;
			}
		}
	}
	if (func_449(uParam0) >= 3)
	{
		func_468(uParam0, iParam5);
		func_469(uParam0);
		if (!func_470(uParam0, 1))
		{
			func_471(uParam0);
		}
		func_472(uParam0);
	}
	switch (func_449(uParam0))
	{
		case 0:
			func_450(uParam0, Param1, iParam5);
			break;
		case 1:
			func_451(uParam0);
			break;
		case 2:
			func_452(uParam0);
			break;
		case 3:
			if (func_193(uParam0))
			{
				func_473(2);
				func_463(uParam0, uParam0->f_782[uParam0->f_1450 /*41*/].f_27, uParam0->f_1111[uParam0->f_1450 /*22*/].f_1, 1065353216 /* Float: 1f */);
				func_164(&(uParam0->f_1638));
				func_457(uParam0, 1);
				func_474();
				func_458(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!func_229(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (func_449(uParam0) == 5)
			{
				if (func_475(uParam0))
				{
					func_457(uParam0, 2);
					func_458(uParam0, 6);
				}
			}
			if (func_449(uParam0) == 6)
			{
				if (func_476(uParam0))
				{
					func_457(uParam0, 3);
					func_458(uParam0, 8);
				}
			}
			if (uParam0->f_1451 >= 0 || func_244(&(uParam0->f_1638)) >= 15f)
			{
				if (func_477(uParam0, iParam5))
				{
					if (func_478(uParam0))
					{
						uParam0->f_1451 = func_479(uParam0);
						func_164(&(uParam0->f_1638));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						func_457(uParam0, 6);
						func_458(uParam0, 9);
					}
					else
					{
						func_457(uParam0, 4);
						func_458(uParam0, 10);
						func_459(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (func_477(uParam0, iParam5))
			{
				func_459(uParam0, iParam5);
				func_458(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_193(var uParam0)
{
	if (uParam0->f_1536)
	{
		return false;
	}
	return uParam0->f_1535;
}

void func_194(char[4] cParam0)
{
	float fVar0;
	vector3 vVar1;

	fVar0 = 10f;
	if (!func_4(cParam0->f_16, 2))
	{
		if (func_145(Global_1392626[*cParam0 /*32*/].f_11, 0))
		{
			if (func_154(Global_1392626[*cParam0 /*32*/].f_11, Global_36, 40f, 1, 1))
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(Global_1392626[*cParam0 /*32*/].f_11, true, false) };
				if (!func_480(Global_1392626[*cParam0 /*32*/].f_11, fVar0, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */) && func_481(vVar1, &(cParam0->f_3), fVar0))
				{
					func_482(*cParam0);
					func_34(&(cParam0->f_16), 2);
				}
			}
		}
	}
	else
	{
		func_483(Global_1392626[*cParam0 /*32*/].f_11, &(cParam0->f_3), -0.75f, 0f, 0f, 0, 35f, fVar0, -1, 3000, 3000, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */);
	}
}

int func_195(bool bParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	bool bVar11;

	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		func_484(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*bParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*bParam0));
		bVar8 = func_485(bParam12 >= 0f, bParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*bParam0, true, false)));
		func_486(bParam0, iParam1, uParam3, fParam2, bVar8, sParam7);
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*bParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*bParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_164(&(iParam1->f_13));
		}
		if (func_487(*bParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_488(bParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, bVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_195(bParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !bVar8 <= (fParam2 + 5f))
				{
					func_311(bParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*bParam0, 317, true))
						{
							func_489(*bParam0, 1, 1);
						}
					}
					else if (func_490(iParam1, 22))
					{
						func_489(*bParam0, 0, 1);
					}
				}
				if (func_491(bParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_492(bParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_493(iParam8);
					func_494(iParam1, uParam3);
					if (func_495(bParam0, iParam1, bVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_496(uParam3);
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
					func_497(iParam1, uParam3, bVar8);
					if (func_498(*bParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_62(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				if (func_491(bParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_499(*bParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_495(bParam0, iParam1, bVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_492(bParam0, func_491(bParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_493(iParam8);
					func_494(iParam1, uParam3);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					func_62(uParam3, 0, 0, 1, 1);
					func_500(iParam1, 1);
				}
				if (MISC::IS_BIT_SET(iParam1->f_21, 20))
				{
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						if (!func_448(Global_35, 501393341) && !func_448(Global_35, 242628503))
						{
							iVar9 = 0;
							if (func_501(Global_35, *bParam0, 1f) == 3)
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
					else if ((((!PED::IS_PED_ON_MOUNT(Global_35) && func_145(iParam1->f_28, 0)) && func_245(Global_35, iParam1->f_28, iParam1->f_29, 1)) && !func_448(iParam1->f_28, 518218985)) && !func_448(iParam1->f_28, 242628503))
					{
						TASK::TASK_SMART_FLEE_PED(iParam1->f_28, Global_35, (iParam1->f_29 + 3f), -1, 2304, 1f, 0);
						iParam1->f_28 = 0;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
					{
						if (!func_448(Global_35, -828834893) && !func_448(Global_35, 242628503))
						{
							iVar10 = 0;
							if (func_501(Global_35, *bParam0, 1f) == 3)
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
					else if (!(MISC::IS_BIT_SET(*iParam1, 12) || func_502(iParam1, bParam0)))
					{
					}
					else if (!(MISC::IS_BIT_SET(*iParam1, 13) || func_503(iParam1)))
					{
					}
					else if (!func_504(iParam1))
					{
					}
					else
					{
						if (fParam4 > 0f)
						{
							func_164(&(iParam1->f_18));
							bVar11 = iParam8 & 128 != false;
							if (bVar11)
							{
								func_505(uParam3, 0, 0);
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
				if (func_506(bParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_491(bParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_499(*bParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_495(bParam0, iParam1, bVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_492(bParam0, func_491(bParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_493(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_62(uParam3, 0, 0, 1, 1);
					}
					func_500(iParam1, 1);
				}
				func_497(iParam1, uParam3, bVar8);
				if (func_506(bParam0, iParam1, fParam4, bVar6))
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
			func_507(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

bool func_196(var uParam0)
{
	if (uParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

void func_197(char[4] cParam0)
{
	if (!func_94(Global_1392626[*cParam0 /*32*/].f_8, 32))
	{
		if (func_145(Global_1392626[*cParam0 /*32*/].f_11, 0))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Global_1392626[*cParam0 /*32*/].f_11, 0, -1f, -1f, -1f);
		}
	}
}

bool func_198(char[4] cParam0)
{
	if (!bLocal_2058)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1392626[3 /*32*/]))
		{
			func_508(cParam0, &(cParam0->f_2277[0 /*17*/]), 0, 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"), 8f, 0);
			func_509(&(cParam0->f_2216), Global_1392626[3 /*32*/], 0);
			func_510(&(cParam0->f_2277[0 /*17*/]), 0, 0);
			bLocal_2058 = true;
			bLocal_2059 = false;
		}
	}
	else
	{
		func_511(&(cParam0->f_2216), Local_15, cParam0->f_2216.f_56, 0);
	}
	if (bLocal_2059)
	{
		if ((PED::IS_PED_IN_COVER(Global_35, false, false) || !func_245(Global_35, Local_15, 8f, 1)) || func_512(Global_35, ENTITY::GET_ENTITY_COORDS(Local_15, false, false)) > 3f)
		{
			func_510(&(cParam0->f_2277[0 /*17*/]), 0, 0);
			bLocal_2059 = false;
		}
	}
	else if ((!PED::IS_PED_IN_COVER(Global_35, false, false) && func_245(Global_35, Local_15, 8f, 1)) && func_512(Global_35, ENTITY::GET_ENTITY_COORDS(Local_15, false, false)) < 3f)
	{
		func_510(&(cParam0->f_2277[0 /*17*/]), 1, 0);
		bLocal_2059 = true;
	}
	func_513(Global_35, vLocal_2032, 0, 12f, 11.5f, 11f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
	func_217(0, sLocal_1130[1]);
	func_242(cParam0);
	func_247();
	if (((iLocal_2121 == 1 && func_154(Global_35, ENTITY::GET_ENTITY_COORDS(Local_15, false, false), 10f, 1, 1)) || func_154(Global_35, ENTITY::GET_ENTITY_COORDS(Local_15, false, false), 1.5f, 1, 1)) || (func_514(Global_35) && func_154(func_515(Global_35), ENTITY::GET_ENTITY_COORDS(Local_15, false, false), 4f, 1, 1)))
	{
		func_516(1);
		func_71(0);
		return true;
	}
	return false;
}

void func_199(char[4] cParam0)
{
	func_365();
	PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), Local_15, "LS_UNDERTAKER", 1301.84f, -1318.89f, 75.87f, 0, "LSUND");
	POPULATION::_0xB56D41A694E42E86(iLocal_2064[1], 264192, 0, 0, -1, -1, 8);
	if (func_514(Global_35))
	{
		TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, 0);
	}
}

int func_200(char[4] cParam0)
{
	return 8;
}

bool func_201(int iParam0)
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

void func_202(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_201(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_517(*uParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_518(iVar0);
	*uParam0 = 0;
}

bool func_203(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_204(var uParam0, char* sParam1)
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
	iVar1 = func_519(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = sParam1;
	return 1;
}

void func_205(int iParam0, int iParam1)
{
	func_520(iParam0, iParam1);
}

void func_206(int iParam0)
{
	Global_1572864.f_12 = iParam0;
}

void func_207(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	char[] cVar0[8];

	Global_1572864.f_8 = iParam0;
	Global_1572864.f_9 = iParam9;
	Global_1572864.f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_315(iParam0) == 1)
	{
		cVar0 = func_522(func_521(iParam0));
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
	}
	else if (func_315(iParam0) == 8)
	{
		cVar0 = func_524(func_523(iParam0));
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
	}
	func_374(1, 1);
	func_379(1, Param1, Param1.f_3);
	Global_1347394 = { Param5 };
	func_281(0);
	func_282(0);
	func_284(1f);
}

bool func_208(char[4] cParam0)
{
	if (!func_203(iLocal_14, 1))
	{
		if (func_525())
		{
			func_205(&iLocal_14, 1);
		}
		return false;
	}
	if (!func_203(iLocal_14, 2))
	{
		if (func_212())
		{
			func_205(&iLocal_14, 2);
		}
		return false;
	}
	if (!func_203(iLocal_14, 4))
	{
		if (func_176(1, 0))
		{
			func_205(&iLocal_14, 4);
		}
		return false;
	}
	if (!func_203(iLocal_14, 8))
	{
		if (func_176(2, 0))
		{
			func_205(&iLocal_14, 8);
		}
		return false;
	}
	if (!func_203(iLocal_14, 64))
	{
		func_179(&(cParam0->f_2106), Local_1318[0 /*97*/], "LS_UN_MORN_1", 0);
		func_179(&(cParam0->f_2106), Local_1318[1 /*97*/], "LS_UN_MORN_2", 0);
		func_179(&(cParam0->f_2106), Local_1318[2 /*97*/], "LS_UN_MORN_3", 0);
		func_205(&iLocal_14, 64);
		return false;
	}
	if (!func_203(iLocal_14, 128))
	{
		func_73(iLocal_2064[3], 0);
		func_205(&iLocal_14, 128);
		return false;
	}
	if (!func_203(iLocal_14, 256))
	{
		func_526(iLocal_2064[3], 0, 0, 1, 1, 0);
		func_205(&iLocal_14, 256);
		return false;
	}
	if (!func_203(iLocal_14, 16))
	{
		func_527();
		if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_112[1 /*130*/], false))
		{
			ANIMSCENE::START_ANIM_SCENE(Local_112[1 /*130*/]);
		}
		func_205(&iLocal_14, 16);
		return false;
	}
	if (!func_203(iLocal_14, 32))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_112[2 /*130*/], false))
		{
			ANIMSCENE::START_ANIM_SCENE(Local_112[2 /*130*/]);
		}
		func_205(&iLocal_14, 32);
		return false;
	}
	if (!func_63(2097152))
	{
		if (!func_203(iLocal_14, 512))
		{
			if (func_64())
			{
				func_205(&iLocal_14, 512);
			}
			return false;
		}
		if (!func_203(iLocal_14, 1024))
		{
			func_65(cParam0);
			func_205(&iLocal_14, 1024);
			func_66(2097152);
			return false;
		}
	}
	else
	{
		func_214(8);
		return true;
	}
	return false;
}

void func_209(int iParam0)
{
	func_205(&iLocal_2075, iParam0);
}

void func_210()
{
	func_310();
	func_164(&uLocal_1960);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_15, Global_35, -1, -1f, -1f, -1f);
	func_528(0);
	func_529(4);
}

void func_211(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

bool func_212()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1023[2 /*8*/]))
	{
		STREAMING::REQUEST_MODEL(Local_1023[2 /*8*/].f_7, false);
		if (STREAMING::HAS_MODEL_LOADED(Local_1023[2 /*8*/].f_7))
		{
			Local_1023[2 /*8*/] = OBJECT::CREATE_OBJECT(Local_1023[2 /*8*/].f_7, Local_1023[2 /*8*/].f_1, true, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(Local_1023[2 /*8*/], Local_1023[2 /*8*/].f_4, 2, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1023[2 /*8*/].f_7);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1023[4 /*8*/]))
	{
		STREAMING::REQUEST_MODEL(Local_1023[4 /*8*/].f_7, false);
		if (STREAMING::HAS_MODEL_LOADED(Local_1023[4 /*8*/].f_7))
		{
			Local_1023[4 /*8*/] = OBJECT::CREATE_OBJECT(Local_1023[4 /*8*/].f_7, Local_1023[4 /*8*/].f_1, true, true, false, false, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1023[4 /*8*/].f_7);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1023[2 /*8*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1023[4 /*8*/]))
	{
		return true;
	}
	return false;
}

bool func_213(int iParam0)
{
	return func_203(iLocal_2074, iParam0);
}

void func_214(int iParam0)
{
	func_205(&iLocal_2074, iParam0);
}

bool func_215(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_530(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40567[iVar1], iVar2);
}

void func_216(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_531(1497516462);
			func_532(2016141805);
			func_532(1010885152);
			func_532(-502324015);
			break;
		case 2016141805:
			func_532(1497516462);
			func_531(2016141805);
			func_532(1010885152);
			func_532(-502324015);
			break;
		case 1010885152:
			func_532(1497516462);
			func_532(2016141805);
			func_531(1010885152);
			func_532(-502324015);
			break;
		case -502324015:
			func_532(1497516462);
			func_532(2016141805);
			func_532(1010885152);
			func_531(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_532(-538889627);
			func_532(-538880323);
			func_532(-1056767524);
			func_531(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_533();
			func_531(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_534();
			func_531(iParam0);
			break;
		case 2019386373:
			func_532(-664252410);
			func_532(2109952320);
			func_531(2019386373);
			break;
		case -664252410:
			func_532(2019386373);
			func_532(2109952320);
			func_531(-664252410);
			break;
		case 2109952320:
			func_532(2019386373);
			func_532(-664252410);
			func_531(2109952320);
			break;
		case -1674179981:
			func_532(-1835851517);
			func_532(-1838352012);
			func_531(-1674179981);
			break;
		case -1835851517:
			func_532(-1674179981);
			func_532(-1838352012);
			func_531(-1835851517);
			break;
		case -1838352012:
			func_532(-1674179981);
			func_532(-1835851517);
			func_531(-1838352012);
			break;
		case -1717960576:
			func_532(210001842);
			func_531(-1717960576);
			break;
		case 210001842:
			func_532(-1717960576);
			func_531(210001842);
			break;
		case -150493654:
			func_532(-1271608261);
			func_532(1846061697);
			func_532(-1145519186);
			func_531(-150493654);
			break;
		case -1271608261:
			func_532(-150493654);
			func_532(1846061697);
			func_532(-1145519186);
			func_531(-1271608261);
			break;
		case 1846061697:
			func_532(-150493654);
			func_532(-1271608261);
			func_532(-1145519186);
			func_531(1846061697);
			break;
		case -1145519186:
			func_532(-150493654);
			func_532(-1271608261);
			func_532(1846061697);
			func_531(-1145519186);
			break;
		case 1766284049:
			func_532(280705402);
			func_532(1926308480);
			func_531(1766284049);
			break;
		case 280705402:
			func_532(1766284049);
			func_532(1926308480);
			func_531(280705402);
			break;
		case 1926308480:
			func_532(1766284049);
			func_532(280705402);
			func_531(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_532(439465264);
				func_531(1609506757);
			}
			else
			{
				func_532(1609506757);
				func_532(439465264);
			}
			break;
		case 439465264:
			if (func_215(1609506757))
			{
				if (bParam1)
				{
					func_531(439465264);
				}
				else
				{
					func_532(439465264);
				}
			}
			break;
		case 1822001510:
			func_532(-1612662716);
			func_531(1822001510);
			break;
		case -1612662716:
			func_532(1822001510);
			func_531(-1612662716);
			break;
		case 1306158345:
			func_532(1952610440);
			func_532(-223469678);
			func_532(-404698347);
			func_532(1517904467);
			func_531(1306158345);
			break;
		case 1952610440:
			func_532(1306158345);
			func_532(-223469678);
			func_532(-404698347);
			func_532(1517904467);
			func_531(1952610440);
			break;
		case -223469678:
			func_532(1306158345);
			func_532(1952610440);
			func_532(-404698347);
			func_532(1517904467);
			func_531(-223469678);
			break;
		case -404698347:
			func_532(1306158345);
			func_532(1952610440);
			func_532(-223469678);
			func_532(1517904467);
			func_531(-404698347);
			break;
		case 1517904467:
			func_532(1306158345);
			func_532(1952610440);
			func_532(-223469678);
			func_532(-404698347);
			func_531(1517904467);
			break;
		case 1376646519:
			func_532(931649776);
			func_532(-434590080);
			func_532(1743048395);
			func_532(449774763);
			func_531(1376646519);
			break;
		case 931649776:
			func_532(1376646519);
			func_532(-434590080);
			func_532(1743048395);
			func_532(449774763);
			func_531(931649776);
			break;
		case -434590080:
			func_532(1376646519);
			func_532(931649776);
			func_532(1743048395);
			func_532(449774763);
			func_531(-434590080);
			break;
		case 1743048395:
			func_532(1376646519);
			func_532(931649776);
			func_532(-434590080);
			func_532(449774763);
			func_531(1743048395);
			break;
		case 449774763:
			func_532(1376646519);
			func_532(931649776);
			func_532(-434590080);
			func_532(1743048395);
			func_531(449774763);
			break;
		case -1414537028:
			func_532(38162571);
			func_532(1350391819);
			func_532(54073871);
			func_531(-1414537028);
			break;
		case 38162571:
			func_532(-1414537028);
			func_532(1350391819);
			func_532(54073871);
			func_531(38162571);
			break;
		case 1350391819:
			func_532(-1414537028);
			func_532(38162571);
			func_532(54073871);
			func_531(1350391819);
			break;
		case 54073871:
			func_532(-1414537028);
			func_532(38162571);
			func_532(1350391819);
			func_531(54073871);
			break;
		case 198200492:
			func_531(198200492);
			func_532(-1124061431);
			func_532(52706132);
			func_532(-259123672);
			break;
		case -1124061431:
			func_532(198200492);
			func_531(-1124061431);
			func_532(52706132);
			func_532(-259123672);
			break;
		case 52706132:
			func_532(198200492);
			func_532(-1124061431);
			func_531(52706132);
			func_532(-259123672);
			break;
		case -259123672:
			func_532(198200492);
			func_532(-1124061431);
			func_532(52706132);
			func_531(-259123672);
			break;
		case -919512195:
			func_531(-919512195);
			func_532(-1925798111);
			func_532(420709909);
			func_532(1703426636);
			break;
		case -1925798111:
			func_531(-1925798111);
			func_532(-919512195);
			func_532(420709909);
			func_532(1703426636);
			break;
		case 420709909:
			func_531(420709909);
			func_532(-919512195);
			func_532(-1925798111);
			func_532(1703426636);
			break;
		case 1703426636:
			func_531(1703426636);
			func_532(-919512195);
			func_532(-1925798111);
			func_532(420709909);
			break;
		case -1223121209:
			func_531(-1223121209);
			func_532(630808005);
			break;
		case 630808005:
			func_531(630808005);
			func_532(-1223121209);
			break;
		case 1453909576:
			func_531(1453909576);
			func_532(1643531967);
			break;
		case 1643531967:
			func_531(1643531967);
			func_532(1453909576);
			break;
		case 0:
			func_531(0);
			func_532(473295046);
			func_532(-1738165526);
			break;
		case 473295046:
			func_531(473295046);
			func_532(0);
			func_532(-1738165526);
			break;
		case -1738165526:
			func_531(-1738165526);
			func_532(0);
			func_532(473295046);
			break;
		case 932909855:
			func_531(932909855);
			func_532(2051822093);
			break;
		case 2051822093:
			func_531(2051822093);
			func_532(932909855);
			break;
		case 405586984:
			func_531(405586984);
			func_532(1509509592);
			func_532(-959357075);
			func_532(-1311865656);
			break;
		case 1509509592:
			func_531(1509509592);
			func_532(405586984);
			func_532(-959357075);
			func_532(-1311865656);
			break;
		case -959357075:
			func_531(-959357075);
			func_532(1509509592);
			func_532(405586984);
			func_532(-1311865656);
			break;
		case -1311865656:
			func_531(-1311865656);
			func_532(1509509592);
			func_532(-959357075);
			func_532(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_531(-524145696);
			}
			else
			{
				func_532(-524145696);
			}
			func_532(1626481264);
			func_532(282809459);
			break;
		case 282809459:
			func_531(282809459);
			func_532(1626481264);
			func_532(-524145696);
			break;
		case 1626481264:
			func_531(1626481264);
			func_532(-524145696);
			func_532(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_531(885203519);
			}
			else
			{
				func_532(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_531(-1080627546);
			}
			else
			{
				func_532(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_215(iParam0))
				{
					func_531(iParam0);
				}
			}
			else if (func_215(iParam0))
			{
				func_532(iParam0);
			}
			break;
	}
}

bool func_217(int iParam0, char* sParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_112[iParam0 /*130*/]))
	{
		return false;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_112[iParam0 /*130*/], true, false))
	{
		return false;
	}
	if (!ANIMSCENE::_0xA9016536015DE29D(Local_112[iParam0 /*130*/], sParam1))
	{
		return false;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_112[iParam0 /*130*/], sParam1))
	{
		return true;
	}
	if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_112[iParam0 /*130*/], sParam1))
	{
		if (ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_112[iParam0 /*130*/], sParam1))
		{
		}
	}
	return false;
}

int func_218(char* sParam0, bool bParam1)
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

bool func_219()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1023[3 /*8*/]))
	{
		STREAMING::REQUEST_MODEL(Local_1023[3 /*8*/].f_7, false);
		if (STREAMING::HAS_MODEL_LOADED(Local_1023[3 /*8*/].f_7))
		{
			Local_1023[3 /*8*/] = OBJECT::CREATE_OBJECT(Local_1023[3 /*8*/].f_7, Local_1023[3 /*8*/].f_1, true, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(Local_1023[3 /*8*/], Local_1023[3 /*8*/].f_4, 2, true);
			ENTITY::SET_ENTITY_VISIBLE(Local_1023[3 /*8*/], false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1023[3 /*8*/].f_7);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1208))
	{
		STREAMING::REQUEST_MODEL(iLocal_1305, false);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_1305))
		{
			if (func_413(3, &Local_1208, iLocal_1305, Local_1208.f_1, Local_1208.f_4, 1, 1, 0, 1, 1, 0, 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1305);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1023[3 /*8*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1208))
	{
		if (!func_63(4194304))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_1208) && PED::IS_PED_READY_TO_RENDER(Local_1208))
			{
				func_415(Local_1208, iLocal_1317);
				AUDIO::STOP_PED_SPEAKING(Local_1208, true);
				PED::SET_PED_CAN_RAGDOLL(Local_1208, false);
				func_535(Local_1208, 0);
				ENTITY::_SET_ENTITY_CARRYING_FLAG(Local_1208, 7, false);
				PED::SET_PED_CONFIG_FLAG(Local_1208, 186, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1208, true);
				AUDIO::DISABLE_PED_PAIN_AUDIO(Local_1208, true);
				ENTITY::SET_ENTITY_HEALTH(Local_1208, 0, 0);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_1208, "LSUND_NPC_group", 0f);
				func_66(4194304);
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

char* func_220(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Casket";
		case 1:
			return "HandPlane";
		case 2:
			return "Shovel";
		case 3:
			return "Brooch";
		case 4:
			return "RAG";
	}
	return "INVALID";
}

void func_221()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_1023[2 /*8*/]))
	{
		ENTITY::SET_ENTITY_COORDS(Local_1023[2 /*8*/], 1276f, -1208f, 81.69f, false, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(Local_1023[2 /*8*/], -104.94f, -0.8f, -31.82f, 2, false);
	}
}

void func_222(char[4] cParam0)
{
	if (func_154(Local_15, Global_36, 20f, 1, 1))
	{
		if (func_388(&(cParam0->f_2106), "LS_UND_GRAVE", 0))
		{
			func_164(&uLocal_2095);
			iLocal_1204 = 19;
			func_536(4, "Bool", 0);
			ANIMSCENE::START_ANIM_SCENE(Local_112[4 /*130*/]);
			func_529(7);
		}
	}
	else
	{
		iLocal_1204 = 19;
		func_536(4, "Bool", 0);
		ANIMSCENE::START_ANIM_SCENE(Local_112[4 /*130*/]);
		func_529(7);
	}
}

void func_223(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_224()
{
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_15, false, false);
	TASK::TASK_CLEAR_LOOK_AT(Local_15);
	func_537(Local_15, sLocal_1114[2], 25614);
	func_246(&uLocal_1939);
	iLocal_2103 = 0;
	func_529(10);
}

bool func_225(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_538(iParam0, 0))
	{
		return false;
	}
	if (!func_539(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_540(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_541(iParam0, bParam2);
	iVar2 = 0;
	if (func_542(iParam0, 0, 0) == 0)
	{
		if (func_543(iParam0))
		{
			iVar5 = func_544(iParam0);
			iVar6 = func_545(iVar5);
			iVar7 = func_546(iVar6) + 1;
			func_547(iVar5);
			if (func_548(38))
			{
				func_549(483, 0);
			}
			else
			{
				func_549(482, 0);
			}
			if (iVar7 == func_550(iVar6))
			{
				func_225(func_551(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_552() && func_553(4))
				{
					if (func_552() && (func_554(38) || func_548(38)))
					{
						func_556(38, func_551(iVar6), 0, 0, func_555(), 0, -1, 0);
						func_557(2);
					}
					else
					{
						func_556(38, func_551(iVar6), 0, 0, func_555(), 0, -1, 0);
						func_557(1);
					}
				}
			}
			else if (func_552() && func_553(4))
			{
				if (func_552() && (func_554(38) || func_548(38)))
				{
					func_556(38, 0, 0, 0, func_555(), 0, -1, 0);
					func_557(2);
				}
				else
				{
					func_556(38, 0, 0, 0, func_555(), 0, -1, 0);
					func_557(1);
				}
			}
			if (func_552() && func_553(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (func_552() && (func_554(38) || func_548(38)))
					{
						func_558(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_558(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_559(iParam0) == GET_HASH_KEY("CLOTHING"))
	{
		if ((!func_560(iParam0, 866047851) && !func_560(iParam0, -1979000645)) && !func_560(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_561(iParam0, 8388608) && !func_562(28))
	{
		func_563(28);
	}
	if (!bVar3)
	{
		if (func_560(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_564(iParam0) == -1447088266)
			{
				iVar1 = func_566(func_565(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_273() == -1)
					{
						func_567(iVar1);
					}
					if (func_568(0) && func_569(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_570(iParam0, iVar0, iParam5);
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
					if (func_273() == -1)
					{
						func_567(iParam0);
					}
					if (func_568(0) && func_569(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_570(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_559(iParam0) == GET_HASH_KEY("WEAPON"))
		{
			if (!func_571(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_559(iParam0) == GET_HASH_KEY("AMMO") && func_572(iParam0))
		{
			if (!func_573(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_560(iParam0, 866047851))
		{
			func_574(iParam0);
		}
		else if (func_560(iParam0, 2000026003))
		{
			func_575(iParam0);
		}
		else if (func_560(iParam0, -103750053))
		{
			func_577(func_576(GET_HASH_KEY("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == GET_HASH_KEY("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_577(func_578(GET_HASH_KEY("COLLECTED"), GET_HASH_KEY("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_560(iParam0, -121341956) && !func_560(iParam0, 606799272))
		{
			if (iParam0 != GET_HASH_KEY("WEAPON_KIT_DETECTOR") && iParam0 != GET_HASH_KEY("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (func_579(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_549(498, 0);
				}
			}
			if (func_560(iParam0, -2017733358) || func_560(iParam0, -1369131378))
			{
				func_580(iParam0);
			}
		}
		else if (func_560(iParam0, -136654233))
		{
			if (func_560(iParam0, -1021472396))
			{
			}
		}
		else if (func_560(iParam0, -1466706512) && func_560(iParam0, 1147021565))
		{
			func_549(484, 0);
		}
		else if (func_560(iParam0, 1147021565) && func_560(iParam0, -524514947))
		{
		}
		else if (func_560(iParam0, 554195525))
		{
		}
		else if (func_560(iParam0, 589988438))
		{
			if (func_581())
			{
				func_582(GET_HASH_KEY("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_560(iParam0, 787083290) && func_560(iParam0, 949916894))
		{
			func_583(iParam0);
		}
		else if (func_560(iParam0, -1718133314))
		{
			func_584(iParam0);
		}
		else if (func_560(iParam0, -1738650224))
		{
			func_585(iParam0);
		}
		else if (func_560(iParam0, -1112814642) && func_560(iParam0, 949916894))
		{
			func_586(iParam0);
		}
		else if (iParam0 == GET_HASH_KEY("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_560(iParam0, 1841149704))
		{
			func_587();
		}
		else if (func_560(iParam0, 606799272))
		{
			func_588(iParam0, iParam1);
			func_589(iParam0);
		}
		else if (func_560(iParam0, -1112814642) && func_560(iParam0, -1697809989))
		{
			func_590(iParam0, 0, 0, 0);
		}
		else if (func_560(iParam0, -2017733358) || func_560(iParam0, -1369131378))
		{
			func_580(iParam0);
		}
		else if (func_560(iParam0, -1921346699))
		{
			if (func_273() != -1)
			{
				return false;
			}
			func_591(iParam0, iParam5, iParam8);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_560(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_592(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_225(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_592(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_225(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_592(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_225(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_592(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_225(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_592(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_225(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_592(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_225(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_560(iParam0, -839724752) && func_561(iParam0, 4))
		{
			if (!func_548(42))
			{
				func_593(iParam0);
			}
		}
		else if (func_560(iParam0, 1399091007))
		{
			func_594(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_560(iParam0, 1248798204))
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
				func_225(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_563(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					func_595(PLAYER::PLAYER_PED_ID(), GET_HASH_KEY("UPGRADE_OFFHAND_HOLSTER"), 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_596(&iVar9, 0))
				{
					func_569(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case GET_HASH_KEY("UPGRADE_BANDOLIER"):
				if (func_273() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					func_595(PLAYER::PLAYER_PED_ID(), GET_HASH_KEY("UPGRADE_BANDOLIER"), 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case GET_HASH_KEY("WEAPON_KIT_BINOCULARS"):
				break;
			case GET_HASH_KEY("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_549(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_597();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_598();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_599();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_600();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_601();
				break;
			case GET_HASH_KEY("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_01"):
				func_602(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_01"), 0);
				func_603(499813453, 0);
				func_604(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_02"):
				func_602(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_02"), 0);
				func_603(499813453, 0);
				func_604(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_03"):
				func_602(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_03"), 0);
				func_603(499813453, 0);
				func_604(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_04"):
				func_602(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_05"), 0);
				func_603(666607663, 0);
				func_605(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_05"):
				func_602(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_06"), 0);
				func_603(666607663, 0);
				func_605(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_06"):
				func_602(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_07"), 0);
				func_603(666607663, 0);
				func_605(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_07"):
				func_602(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_09"), 0);
				func_603(-220219788, 0);
				func_606(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_08"):
				func_602(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_10"), 0);
				func_603(-220219788, 0);
				func_606(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_09"):
				func_602(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_11"), 0);
				func_603(-220219788, 0);
				func_606(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_10"):
				func_602(218622660, GET_HASH_KEY("TREASURE_HUNT_LOOT_13"), 0);
				func_603(218622660, 0);
				func_607(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_11"):
				func_602(218622660, GET_HASH_KEY("TREASURE_HUNT_LOOT_14"), 0);
				func_603(218622660, 0);
				func_607(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_13"):
				func_602(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_16"), 0);
				func_603(390004462, 0);
				func_608(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_14"):
				func_602(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_17"), 0);
				func_603(390004462, 0);
				func_608(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_15"):
				func_602(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_18"), 0);
				func_603(390004462, 0);
				func_608(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_16"):
				func_602(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_20"), 0);
				func_603(6410548, 0);
				func_609(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_17"):
				func_602(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_21"), 0);
				func_603(6410548, 0);
				func_609(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_18"):
				func_602(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_22"), 0);
				func_603(6410548, 0);
				func_609(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_19"):
				func_602(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_23"), 0);
				func_603(6410548, 0);
				func_609(8);
				break;
			case GET_HASH_KEY("CONSUMABLE_AGED_PIRATE_RUM"):
				func_611(242, func_610(GET_HASH_KEY("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_GINSENG_ELIXIER"):
				func_611(240, func_610(GET_HASH_KEY("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_VALERIAN_ROOT"):
				func_611(241, func_610(GET_HASH_KEY("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case GET_HASH_KEY("CONSUMABLE_POTENT_MEDICINE"):
			case GET_HASH_KEY("CONSUMABLE_MEDICINE"):
			case GET_HASH_KEY("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_612(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_612(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_612(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case GET_HASH_KEY("CONSUMABLE_TONIC"):
			case GET_HASH_KEY("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_612(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_612(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case GET_HASH_KEY("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_612(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_HAIR_TONIC"):
				func_549(488, 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_HAIR_GREASE"):
				func_549(491, 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX"):
				func_549(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_225(func_613(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_225(func_614(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_562(1))
				{
					func_549(487, 0);
				}
				break;
			case GET_HASH_KEY("KIT_GUN_OIL"):
				func_549(486, 0);
				break;
			case GET_HASH_KEY("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_273() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case GET_HASH_KEY("UPGRADE_UPG_COFFEE_KIT"):
				func_549(496, 0);
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
		func_615(&iVar10);
		if (!func_616(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_568(0))
		{
			return true;
		}
		if (func_559(iParam0) == GET_HASH_KEY("CLOTHING"))
		{
			func_617(iParam0);
		}
		if (func_560(iParam0, -1979000645))
		{
			func_618(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_568(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_225(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_619(iVar2, 0);
		}
	}
	Var35 = { func_620(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	func_621(iParam0);
	if (fParam6 > 0f)
	{
		if (func_560(iParam0, -839724752))
		{
			func_622(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_623(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_226(char[4] cParam0)
{
}

bool func_227(char[4] cParam0)
{
	if (cParam0->f_2 == 3)
	{
		if (!func_624(cParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_228()
{
	return func_625(1);
}

bool func_229(var uParam0, int iParam1)
{
	return (uParam0->f_1430 && iParam1) != 0;
}

struct<8> func_230(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_626(uParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { func_627() };
	}
	return Var0;
}

void func_231(var uParam0, char* sParam1)
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
	func_628(uParam0, sParam1);
	func_398(uParam0, 2097152, 1);
	func_232(uParam0, 33554432);
	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_228, sParam1, true);
}

void func_232(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

Vector3 func_233(var uParam0, int iParam1)
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
			vVar10 = { func_629(vVar10) * Vector(2f, 2f, 2f) };
			vVar0[0 /*3*/] = { uParam0->f_782[iParam1 /*41*/].f_1 + uParam0->f_782[iParam1 /*41*/].f_4 / Vector(2f, 2f, 2f) + vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[0 /*3*/], &(vVar0[0 /*3*/].f_2), false);
			vVar0[1 /*3*/] = { uParam0->f_782[iParam1 /*41*/].f_1 + uParam0->f_782[iParam1 /*41*/].f_4 / Vector(2f, 2f, 2f) - vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[1 /*3*/], &(vVar0[1 /*3*/].f_2), false);
			if (!func_158(vVar0[0 /*3*/]))
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
			if (!func_158(vVar0[0 /*3*/]))
			{
				return vVar0[0 /*3*/];
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_234(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_235(var uParam0, int iParam1)
{
	uParam0->f_1430 = (uParam0->f_1430 - (uParam0->f_1430 && iParam1));
}

bool func_236(var uParam0, int iParam1)
{
	return (uParam0->f_1432.f_1 && iParam1) != 0;
}

bool func_237(var uParam0, int iParam1)
{
	return func_630(uParam0->f_27, iParam1);
}

int func_238(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
{
	int iVar0;

	func_390(uParam4, &cParam0);
	if (func_389(uParam4, 2) && !func_389(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_SKIP_CUTSCENE"), false);
	}
	if (func_631(uParam4) != 1)
	{
		func_632(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (func_631(uParam4))
	{
		case 1:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_228, false))
				{
					func_633(uParam4, &cParam0);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228))
				{
					func_634(uParam4, 4);
					return 0;
				}
				else if (func_635(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_221);
				}
				func_634(uParam4, 3);
			}
			else if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_230)) && func_389(uParam4, 134217728))
				{
				}
				else
				{
					func_636(uParam4);
				}
				func_164(&(uParam4->f_1));
				func_634(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_403(uParam4);
				if (!func_49(&(uParam4->f_1)))
				{
					func_50(&(uParam4->f_1), 0);
				}
				else if (func_637(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
					}
					func_634(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228) || !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
			{
				if (func_160(uParam4, &cParam0, 1, 1))
				{
					if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
					{
						func_634(uParam4, 4);
					}
					else if (!func_158(func_391(uParam4)) && !func_154(Global_35, func_391(uParam4), 100f, 1, 1))
					{
						func_638(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_391(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_637(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
					}
					func_634(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::UPDATE_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
					func_639(1, 0);
					func_633(uParam4, &cParam0);
					func_634(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (func_637(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
				}
				func_634(uParam4, 4);
			}
			break;
		case 3:
			func_640(uParam4);
			if (func_635(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_221);
			}
			if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_228, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228) || func_389(uParam4, 512)))
			{
				if (!func_389(uParam4, 1024) && func_641(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!func_389(uParam4, 512))
				{
					func_164(&(uParam4->f_1));
					func_232(uParam4, 512);
					func_634(uParam4, 4);
				}
				else if (func_389(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				func_632(uParam4);
			}
			if (func_389(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((func_642(uParam4) - func_643(uParam4)))) <= 2f)
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
				if (func_644(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && func_643(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (func_645(uParam4))
			{
				if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
				}
				func_646(uParam4);
				func_647(uParam4);
				return 1;
			}
			else
			{
				if (func_389(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228))
						{
							ANIMSCENE::TRIGGER_ANIM_SCENE_SKIP(uParam4->f_228);
						}
						func_164(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						func_232(uParam4, 512);
						func_398(uParam4, 67108864, 1);
						func_634(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!func_389(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228)) && CAM::IS_SCREEN_FADED_OUT()) && func_643(uParam4) <= 5000) && func_643(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!func_389(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_648(&(uParam4->f_285), 0);
					func_232(uParam4, 536870912);
				}
				if (func_643(uParam4) >= 5000 && func_643(uParam4) <= (func_642(uParam4) - 5000))
				{
					func_649();
				}
			}
			break;
		case 6:
			if (func_645(uParam4))
			{
				func_646(uParam4);
				func_647(uParam4);
				return 1;
			}
			break;
		case 4:
			if (func_389(uParam4, 524288))
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
						func_232(uParam4, 1073741824 /* Float: 2f */);
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
					Stack.Push(!func_635(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_222);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_228, false);
						}
						func_634(uParam4, 3);
					}
					else if (func_637(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_228, false);
						}
						func_634(uParam4, 3);
					}
				}
				if (func_631(uParam4) == 3)
				{
					if (func_389(uParam4, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		case 5:
			func_634(uParam4, 4);
			break;
	}
	return 0;
}

void func_239(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		if (func_389(uParam0, 16))
		{
			POPULATION::_0xA1CFB35069D23C23(uParam0->f_4);
			POPULATION::_0x74C2B3DC0B294102(uParam0->f_4);
			func_650(uParam0);
			PATHFIND::_0xD17672447692478E(uParam0->f_4, 0);
		}
	}
	if (func_389(uParam0, 8))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_4);
		func_398(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_398(uParam0, 16, 1);
}

void func_240(char[4] cParam0)
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
			if (func_407(cParam0->f_32.f_4, &Var0))
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

void func_241(int* iParam0)
{
	struct<247> Var0;

	Var0 = 1;
	Var0.f_13 = 17;
	Var0.f_218 = 1097859072;
	Var0.f_219 = 1101004800;
	Var0.f_246 = 4;
	MISC::_COPY_MEMORY(iParam0, &Var0, 314);
}

void func_242(char[4] cParam0)
{
	if (func_145(Local_15, 0))
	{
		func_651(Local_15);
		if (!bLocal_2054)
		{
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), Local_15, 8, 0, 1);
			bLocal_2054 = true;
		}
		switch (iLocal_2121)
		{
			case 0:
				func_652(cParam0);
				break;
			case 11:
				func_653();
				break;
			case 1:
				func_654();
				break;
			case 2:
				func_655();
				break;
			case 3:
				func_656(cParam0);
				break;
			case 4:
				func_657(cParam0);
				break;
			case 5:
				func_658(cParam0);
				break;
			case 6:
				func_659();
				break;
			case 7:
				func_660(cParam0);
				break;
			case 12:
				func_661(cParam0);
				break;
			case 8:
				func_662(cParam0);
				break;
			case 9:
				func_663(cParam0);
				break;
			case 10:
				func_664(cParam0);
				break;
		}
	}
	else
	{
		iLocal_2121 = 14;
	}
}

void func_243(bool bParam0)
{
	if (bParam0)
	{
		func_665(4);
	}
	func_665(2);
	MISC::SET_BIT(&(Global_1956580.f_1), 0);
}

float func_244(var uParam0)
{
	if (!func_49(uParam0))
	{
		return 0f;
	}
	if (func_165(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_666() - uParam0->f_1);
}

bool func_245(bool bParam0, bool bParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return false;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(bParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(bParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

void func_246(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_247()
{
	int iVar0;

	func_667();
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_112[iVar0 /*130*/]))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_112[iVar0 /*130*/], false))
			{
				Local_112[iVar0 /*130*/].f_18 = ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_112[iVar0 /*130*/]);
				func_668(iVar0);
			}
		}
		iVar0++;
	}
}

void func_248(char[4] cParam0)
{
	int iVar0;

	if (func_385(256))
	{
		func_669(cParam0);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_145(Local_1318[iVar0 /*97*/], 0))
		{
			switch (iLocal_1610[iVar0])
			{
				case 0:
					func_670(iVar0, cParam0);
					break;
				case 1:
					func_671(iVar0);
					break;
				case 2:
					func_672(iVar0);
					break;
				case 3:
					func_673(iVar0);
					break;
				case 4:
					func_674(iVar0);
					break;
			}
		}
		iVar0++;
	}
}

void func_249(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

bool func_250(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 > -1 && iParam0 < 4)
	{
		if (!bParam1 || VOLUME::DOES_VOLUME_EXIST(Global_1955500[iParam0 /*16*/].f_1))
		{
			if (!bParam2 || ENTITY::DOES_ENTITY_EXIST(Global_1955500[iParam0 /*16*/].f_2))
			{
				return true;
			}
		}
	}
	return false;
}

void func_251(int iParam0, int iParam1)
{
	if (func_250(iParam0, 1, 1))
	{
		func_205(&(Global_1955500[iParam0 /*16*/]), iParam1);
	}
}

void func_252(int iParam0, bool bParam1)
{
	if (*iParam0 > -1 && *iParam0 < 4)
	{
		if (Global_1955500[*iParam0 /*16*/].f_3 == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			if (func_675(1, 1) == *iParam0)
			{
				func_676(-1, 1, 1);
			}
			if (bParam1)
			{
				func_249(Global_1955500[*iParam0 /*16*/].f_1);
			}
			Global_1955500[*iParam0 /*16*/] = 0;
			Global_1955500[*iParam0 /*16*/].f_2 = 0;
			Global_1955500[*iParam0 /*16*/].f_3 = 0;
			*iParam0 = -1;
		}
	}
}

int func_253(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_677();
	if (iVar0 == -1)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0) || !VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return -1;
	}
	if ((iVar0 > -1 && iVar0 < 4) && VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		Global_1955500[iVar0 /*16*/].f_1 = iParam1;
		Global_1955500[iVar0 /*16*/].f_2 = bParam0;
		Global_1955500[iVar0 /*16*/] = 0;
		Global_1955500[iVar0 /*16*/].f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (func_333(iParam2, 128))
		{
			PED::_0x7C00CFC48A782DC0(iParam1, bParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		if (func_203(Global_1955500[iVar0 /*16*/], 0))
		{
			func_251(iVar0, 1024);
			func_251(iVar0, 16);
			func_251(iVar0, 256);
		}
		func_251(iVar0, iParam2);
	}
	return iVar0;
}

void func_254(int iParam0, int iParam1)
{
	if (func_250(iParam0, 1, 1))
	{
		func_678(&(Global_1955500[iParam0 /*16*/]), iParam1);
	}
}

void func_255()
{
	switch (iLocal_2118)
	{
		case 0:
			func_679();
			break;
		case 1:
			if (!func_228())
			{
				func_680();
			}
			break;
		case 2:
			func_516(2);
			break;
	}
}

void func_256()
{
	vector3 vVar0;

	vVar0.f_1 = 1;
	vVar0.x = Global_35;
	vVar0.f_2 = { vLocal_2036 };
	switch (iLocal_2118)
	{
		case 0:
			if (PED::IS_PED_IN_COVER(Global_35, false, false))
			{
				AICOVERPOINT::TASK_EXIT_COVER(&vVar0);
			}
			if (func_296(0, sLocal_1130[1]))
			{
				func_681();
			}
			break;
		case 1:
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_COVER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_COVER_TRANSITION"), false);
			if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(Local_112[0 /*130*/], "Gwen") || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_112[0 /*130*/], false))
			{
				func_682();
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_15, false, false);
				func_680();
			}
			break;
		case 2:
			POPULATION::_0x74C2B3DC0B294102(iLocal_2064[1]);
			PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "LSUND");
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
			func_303(&uLocal_1064);
			func_516(9);
			break;
	}
}

void func_257(char[4] cParam0)
{
	switch (iLocal_2118)
	{
		case 0:
			func_683(cParam0);
			func_164(&uLocal_1939);
			func_164(&uLocal_1963);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
			break;
		case 1:
			if (func_244(&uLocal_1963) < 5f)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
			}
			else
			{
				func_246(&uLocal_1963);
			}
			if (func_684(Local_15, Global_35, 1, 1) < 10f)
			{
				func_685(cParam0);
			}
			if (func_686())
			{
				if (func_687("LS_UND_WALK"))
				{
					if (!bLocal_2112)
					{
						if (func_245(Local_15, Global_35, 4f, 1))
						{
							AUDIO::RESTART_SCRIPTED_CONVERSATION("LS_UND_WALK");
							func_688(2097152);
							if (!func_385(32768))
							{
								func_209(32768);
							}
						}
					}
				}
				else if ((!func_387("LS_UND_WALK") && func_385(32768)) || (func_387("LS_UND_WALK") && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LS_UND_WALK") > 15))
				{
					func_680();
					return;
				}
			}
			if (!bLocal_2111)
			{
				if (!func_154(Global_35, ENTITY::GET_ENTITY_COORDS(Local_15, true, false), 10f, 1, 1))
				{
					func_95("OBJ_UND", 7500, 0, 1, 0, 0, -1, -1, 0);
					bLocal_2111 = true;
				}
			}
			break;
		case 2:
			func_516(9);
			break;
	}
}

void func_258(char[4] cParam0)
{
	switch (iLocal_2118)
	{
		case 0:
			func_689(cParam0);
			break;
		case 1:
			if (!func_385(256))
			{
				func_690();
				func_95("OBJ_UND_MORN", 7500, 0, 1, 0, 0, -1, -1, 0);
				TASK::TASK_CLEAR_LOOK_AT(Global_35);
				func_209(256);
			}
			if (func_691())
			{
				if (func_387("LS_UND_WALK"))
				{
					func_692("LS_UND_WALK", 0);
				}
				if (!func_49(&uLocal_1948))
				{
					func_50(&uLocal_1948, 0);
				}
				else if (func_244(&uLocal_1948) > 6f && !func_228())
				{
					func_680();
				}
			}
			break;
		case 2:
			func_516(9);
			break;
	}
}

void func_259(char[4] cParam0)
{
	switch (iLocal_2118)
	{
		case 0:
			func_693(cParam0);
			break;
		case 1:
			if (!func_385(128) && !func_213(2))
			{
				if (func_154(Local_15, Global_36, 6f, 1, 1))
				{
					if (func_694(cParam0))
					{
						PED::SET_PED_CONFIG_FLAG(Local_1812, 186, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_1812, 1024, true);
						func_695();
						func_68(*cParam0, func_41(2), func_41(3), 2, 3);
						func_696();
						func_209(128);
						func_66(65536);
					}
				}
			}
			if (func_213(2))
			{
				if (!func_228() && func_154(Local_15, Global_36, 10f, 1, 1))
				{
					func_680();
				}
			}
			else if ((iLocal_2121 != 14 && func_385(128)) && ((func_387("LSUND_IG_WAIT") && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LSUND_IG_WAIT") > 1) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(Local_112[3 /*130*/], false)))
			{
				func_680();
			}
			break;
		case 2:
			if (func_213(2))
			{
				if (func_213(32768))
				{
					func_246(&uLocal_1975);
					func_516(8);
				}
			}
			else
			{
				func_516(5);
			}
			break;
	}
	if (func_63(65536))
	{
		func_697(cParam0);
	}
}

void func_260(char[4] cParam0)
{
	switch (iLocal_2118)
	{
		case 0:
			func_698(cParam0);
			break;
		case 1:
			func_697(cParam0);
			func_699();
			func_700();
			func_701(cParam0);
			if (func_702() && !func_228())
			{
				func_680();
			}
			break;
		case 2:
			if (func_244(&uLocal_1945) > 0.1f)
			{
				func_516(6);
			}
			break;
	}
}

void func_261(char[4] cParam0)
{
	switch (iLocal_2118)
	{
		case 0:
			func_703(cParam0);
			break;
		case 1:
			func_697(cParam0);
			func_704(cParam0);
			func_699();
			func_700();
			func_701(cParam0);
			if (func_705() && !func_228())
			{
				func_90();
				func_164(&uLocal_1942);
				func_680();
			}
			break;
		case 2:
			if (!func_385(536870912))
			{
				if (func_244(&uLocal_1942) > 3f)
				{
					if (func_388(&(cParam0->f_2106), "LS_UND_POSTBRWL", 0))
					{
						func_209(536870912);
						func_246(&uLocal_1942);
					}
				}
			}
			else if (!func_387("LS_UND_POSTBRWL"))
			{
				func_68(*cParam0, func_41(3), func_41(4), 3, 4);
				func_516(4);
			}
			break;
	}
}

bool func_262(char[4] cParam0)
{
	switch (iLocal_2118)
	{
		case 0:
			func_706(cParam0);
			break;
		case 1:
			if (func_707())
			{
				if (!bLocal_2106)
				{
					bLocal_2106 = true;
				}
				if (ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(Local_112[5 /*130*/], "player"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_1023[3 /*8*/]))
					{
						OBJECT::DELETE_OBJECT(&(Local_1023[3 /*8*/]));
					}
					func_214(65536);
					func_680();
				}
				else
				{
					if (!func_63(131072))
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_112[5 /*130*/]))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_15, cLocal_1129, "ped_handover_brooch_male", 1))
							{
								if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Local_15, cLocal_1129, "ped_handover_brooch_male") > 0.1f)
								{
									if (func_388(&(cParam0->f_2106), "LS_UND_WILLDO", 0))
									{
										func_66(131072);
									}
								}
							}
						}
					}
					func_81(1, 0, 1);
				}
			}
			break;
		case 2:
			HUD::_DISPLAY_HUD_COMPONENT(724769646);
			func_225(GET_HASH_KEY("MONEY_LOANSHARK_GWEN_DEBT"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			return true;
	}
	return false;
}

bool func_263(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 9);
}

bool func_264(int iParam0)
{
	return (Global_40.f_9052.f_21 && iParam0) != 0;
}

void func_265(int iParam0)
{
	Global_40.f_9052.f_21 = (Global_40.f_9052.f_21 || iParam0);
}

int func_266()
{
	return Global_1899515;
}

void func_267(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_708(*iParam0);
	iVar1 = func_709(*iParam0);
	iVar2 = func_710(*iParam0);
	iVar3 = func_332(*iParam0);
	iVar4 = func_711(*iParam0);
	iVar5 = func_712(*iParam0);
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
	iVar6 = func_713(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_713(iVar1, iVar0);
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
	func_714(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_268(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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

	if (!func_106(iParam0))
	{
		return;
	}
	if (func_423(iParam0) == 4)
	{
		func_715(iParam0, func_266());
		if (!func_424(iParam0) == 5 && !func_424(iParam0) == 6)
		{
			if (bParam3)
			{
				func_290(iParam0, 6);
			}
			else
			{
				func_290(iParam0, 5);
			}
			func_716(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_429(1);
	}
	iVar0 = func_315(iParam0);
	bVar1 = func_273() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_717(0, 2);
		if (!bVar1 && bParam1)
		{
			func_718();
		}
	}
	else
	{
		func_430(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_719(iParam0);
	}
	else
	{
		Var2 = { func_720(GET_HASH_KEY("DEATHS_ON_CURRENT_DEED")) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!func_432(32768))
		{
			Var4 = { func_720(GET_HASH_KEY("LAST_MISSION_NAME")) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && func_424(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_293(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[76 /*74*/].f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[func_293(iParam0) /*74*/].f_8), true);
						}
					}
					else if ((func_293(iParam0) != 95 && func_293(iParam0) != 82) && !func_295(Global_1347702[func_293(iParam0) /*49*/].f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1347702[func_293(iParam0) /*49*/].f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[func_293(iParam0) /*74*/].f_8), true);
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
		func_722(func_293(iParam0), iVar6, func_721());
	}
	else if (iVar0 == 8)
	{
		func_723(func_293(iParam0), iVar6, func_721(), func_445());
	}
	if (!func_424(iParam0) == 5 && !func_424(iParam0) == 6)
	{
		iVar9 = func_724(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_725(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!Global_1879534 && !Global_1879534.f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_726(func_293(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_727((iVar10 - 20), 0, iVar10);
					iVar11 = func_727((iVar11 - 10), 0, iVar11);
				}
				func_728(1);
				func_729(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528.f_217 = 1;
				break;
			case 4:
				func_729(45, 0, 1);
				break;
			case 8:
				iVar10 = func_730(func_293(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_727((iVar10 - 20), 0, iVar10);
					iVar11 = func_727((iVar11 - 10), 0, iVar11);
				}
				func_729(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_731(func_293(iParam0)))
				{
					func_732(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				Global_1899528.f_217 = 1;
				break;
			case 9:
				func_729(120, 0, 1);
				break;
			case 2:
				func_729(120, 0, 1);
				break;
			case 6:
				func_729(func_733(func_316(iParam0)), 0, 1);
				break;
			case 5:
				func_729(120, 0, 1);
				break;
		}
	}
	func_443(iParam0, 1);
	func_715(iParam0, func_266());
	func_716(iParam0);
	if ((!func_424(iParam0) == 0 && bParam1) && func_273() == -1)
	{
		iVar12 = func_438(iParam0);
		if (iVar12 != -1)
		{
			func_91(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_439();
			if (iVar12 != -1)
			{
				func_91(0);
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
				switch (func_293(iParam0))
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
				if (func_294(func_293(iParam0)) && func_295(Global_1347702[func_293(iParam0) /*49*/].f_12, 4))
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
				if (func_293(iParam0) != 77)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = func_734();
				}
				break;
			case 8:
				if (func_293(iParam0) != 58)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = func_734();
				}
				break;
		}
	}
	if (!func_424(iParam0) == 5 && !func_424(iParam0) == 6)
	{
		if (bParam3)
		{
			func_290(iParam0, 6);
		}
		else
		{
			func_290(iParam0, 5);
		}
		func_716(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_293(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					case 1:
						func_735();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_225(GET_HASH_KEY("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_225(GET_HASH_KEY("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_225(GET_HASH_KEY("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_225(GET_HASH_KEY("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_225(GET_HASH_KEY("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_225(GET_HASH_KEY("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_225(GET_HASH_KEY("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_225(GET_HASH_KEY("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_225(GET_HASH_KEY("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_225(GET_HASH_KEY("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_736(GET_HASH_KEY("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_225(GET_HASH_KEY("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_736(GET_HASH_KEY("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_225(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_736(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_225(GET_HASH_KEY("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_736(GET_HASH_KEY("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_225(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_736(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_225(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_736(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_225(GET_HASH_KEY("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_736(GET_HASH_KEY("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_225(GET_HASH_KEY("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_736(GET_HASH_KEY("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_225(GET_HASH_KEY("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_736(GET_HASH_KEY("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_225(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_736(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_225(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_736(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_225(GET_HASH_KEY("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_736(GET_HASH_KEY("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_225(GET_HASH_KEY("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_225(GET_HASH_KEY("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_225(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_225(GET_HASH_KEY("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_737();
						func_738(GET_HASH_KEY("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
						func_739();
						func_740();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(func_741(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131 /* GXTEntry: "Jamie Gillis" */);
						break;
					case 15:
						func_225(GET_HASH_KEY("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_HUNT_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_HUNT_ROOT"), true);
							func_549(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_GAMB_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_GAMB_ROOT"), true);
							func_549(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_742(304805134, 1, 1);
						if (!func_579(Global_1347702[21 /*49*/].f_15, 1))
						{
							func_268(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
						func_743();
						break;
					case 26:
						func_744();
						break;
					case 17:
						func_745(Global_35, GET_HASH_KEY("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
						if (func_746())
						{
							func_747(GET_HASH_KEY("WEAPON_REPEATER_EVANS"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_748(GET_HASH_KEY("TP_RMAY_LETTER_1"), -1))
						{
							iVar15 = func_266();
							func_267(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_749(GET_HASH_KEY("TP_RMAY_LETTER_1"), iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_746())
						{
							func_747(GET_HASH_KEY("WEAPON_REVOLVER_LEMAT"));
						}
						break;
					case 34:
						if (func_746())
						{
							func_747(GET_HASH_KEY("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_750();
						break;
					case 37:
						func_751();
						if (func_752())
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
						func_753();
						break;
					case 43:
						func_754();
						break;
					case 44:
						if (!func_579(Global_1347702[82 /*49*/].f_15, 1))
						{
							func_268(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
						if (!func_579(Global_1347702[83 /*49*/].f_15, 1))
						{
							func_268(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_755();
						break;
					case 59:
						func_756();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_757();
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
						func_758();
						if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_SURV_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_SURV_ROOT"), true);
							func_549(451, 0);
						}
						if (!func_759(GET_HASH_KEY("TAXIDERMY_ORDER_05")))
						{
							if (func_759(GET_HASH_KEY("TAXIDERMY_ORDER_04")))
							{
								iVar16 = func_266();
								func_267(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_749(GET_HASH_KEY("TP_TAXIDERMY_REWARD_04_ES"), iVar16, 1);
							}
						}
						if (func_760(4))
						{
							if (!func_592(GET_HASH_KEY("DOCUMENT_NOTE_RARE_FISH"), 1, 0))
							{
								iVar17 = func_266();
								func_267(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_749(GET_HASH_KEY("TP_RF_INVITATION_01"), iVar17, 1);
							}
						}
						func_225(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_225(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_761(89200);
						func_761(2300);
						func_761(2300);
						break;
					case 68:
						func_762();
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
						func_763();
						func_761(-139100);
						break;
					case 69:
						if (func_579(Global_1347702[9 /*49*/].f_15, 1))
						{
							func_761(-6000);
						}
						break;
					case 70:
						func_761(23400);
						func_761(1900);
						func_761(-15000);
						break;
					case 71:
						func_761(-5500);
						break;
				}
				Jump @5204; //curOff = 4090
				switch (func_293(iParam0))
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
						func_764();
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
						func_765();
						break;
					case 66:
						func_766();
						func_767();
						break;
					case 67:
						if (!func_768(6))
						{
							func_769(6);
						}
						if (!func_768(3))
						{
							func_769(3);
						}
						if (func_746())
						{
							func_747(GET_HASH_KEY("WEAPON_PISTOL_M1899"));
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
						if (func_579(Global_1835011[69 /*74*/].f_1, 1))
						{
							func_770(0);
							func_761(40500);
						}
						else
						{
							func_770(0);
							func_761(46500);
						}
						break;
				}
				Jump @5204; //curOff = 5142
				switch (func_293(iParam0))
				{
					case 0:
						switch (func_316(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297 /* GXTEntry: "Mrs. Londonderry" */);
								break;
						}
						break;
				}
				func_771(iParam0);
				func_772();
				switch (iVar0)
				{
					case 1:
						switch (func_293(iParam0))
						{
							case 4:
								func_773(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
								break;
							case 61:
							case 62:
							case 63:
								func_773(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
								break;
							case 25:
								func_773(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
								break;
							case 12:
								func_773(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
								break;
							case 53:
								func_773(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
								break;
							case 20:
								func_773(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
								break;
							case 19:
								func_773(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
								break;
							case 24:
								iVar18 = func_774(iParam0);
								func_773(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
								break;
							case 28:
								func_773(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
								break;
							case 34:
								func_773(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
								if (!func_592(GET_HASH_KEY("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
								{
									func_225(GET_HASH_KEY("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
								}
								break;
							case 29:
								func_773(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
								break;
							case 37:
								break;
							case 58:
								break;
							case 57:
								func_773(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
								break;
							case 76:
								func_773(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
								break;
							case 72:
								if (func_774(iParam0) == 0)
								{
									func_773(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
								}
								else
								{
									func_773(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
								}
								break;
						}
						break;
					case 8:
						if (func_295(Global_1347702[func_293(iParam0) /*49*/].f_12, 536870912))
						{
							func_775(11, 1);
						}
						switch (func_293(iParam0))
						{
							case 109:
								func_773(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
								break;
							case 55:
								func_775(8, 1);
								break;
							case 138:
								MISC::SET_BIT(&(Global_40.f_9052), 1);
								MISC::SET_BIT(&(Global_40.f_9052), 3);
								break;
							case 94:
								func_773(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
								break;
							case 63:
								func_773(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
								break;
							case 37:
								func_773(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
								break;
							case 116:
								func_773(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
								break;
							case 9:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
								break;
						}
						break;
					case 11:
						if (iParam0 == func_776(0, 10, 11, GET_HASH_KEY("CABR01")))
						{
							func_773(iParam0, func_774(iParam0), 1, 0.5f, 3, 0, 0, 1);
						}
						else if (iParam0 == func_776(0, 7, 11, GET_HASH_KEY("CACR02")))
						{
							func_773(iParam0, func_777(9), 1, 0.5f, 3, 0, 0, 1);
						}
						else if (iParam0 == func_776(0, 8, 11, GET_HASH_KEY("CACR03")))
						{
							func_773(iParam0, func_777(10), 1, 0.5f, 2, 0, 0, 1);
						}
						else if (iParam0 == func_776(0, 11, 11, GET_HASH_KEY("CACR01")))
						{
							func_773(iParam0, func_777(8), 1, 0.5f, 3, 0, 0, 1);
						}
						else if (iParam0 == func_776(0, 12, 11, GET_HASH_KEY("CACR04")))
						{
							func_773(iParam0, func_777(11), 1, 0.5f, 2, 0, 0, 1);
						}
						break;
				}
				if (bParam1)
				{
					if (!func_424(iParam0) == 0)
					{
						if (func_426(iParam0) == 0)
						{
						}
						else if (STATS::STATSTRACKER_IS_INITIALIZED(func_426(iParam0)))
						{
							iVar19 = 0;
							if (bParam3)
							{
								iVar19 = 3;
							}
							func_778(func_315(iParam0), func_426(iParam0), iVar19);
							if (bParam4)
							{
								if (iVar0 == 8 && func_293(iParam0) == 58)
								{
									Global_1879514.f_1 = iParam0;
								}
								func_780(func_779(Global_1879514.f_1));
								if (iVar0 == 8 && func_293(iParam0) == 58)
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
								if (func_294(func_293(iParam0)) && func_295(Global_1347702[func_293(iParam0) /*49*/].f_12, 1))
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
					func_781(bParam2, iVar20);
				}
			}
			func_442(1);
			if ((bVar13 || func_734()) && (func_315(iParam0) == 1 || func_315(iParam0) == 8))
			{
				Global_1879534.f_6 = 1;
				Global_1879534.f_7 = 1;
			}
		}

void func_269(int iParam0)
{
	if (!func_263(iParam0))
	{
		return;
	}
	else if (!func_106(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_40.f_9052, iParam0))
	{
		func_116(iParam0);
		MISC::SET_BIT(&(Global_40.f_9052), iParam0);
	}
	if (func_423(Global_1392626[iParam0 /*32*/].f_3) == 3)
	{
		func_300(Global_1392626[iParam0 /*32*/].f_3, 0, 2);
	}
}

bool func_270(int iParam0)
{
	iParam0 = func_782(iParam0);
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

bool func_271(int iParam0)
{
	int iVar0;

	iParam0 = func_782(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_270(iParam0))
	{
		return false;
	}
	iVar0 = func_783(iParam0);
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

void func_272(int iParam0)
{
	int iVar0;

	iParam0 = func_782(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_270(iParam0))
	{
		return;
	}
	iVar0 = func_783(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
}

int func_273()
{
	return Global_1572887.f_12;
}

void func_274(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_275()
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

int func_276(int iParam0)
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

void func_277(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

var func_278(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_279(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return MISC::VAR_STRING(2, func_784(sParam1));
}

void func_280(int iParam0)
{
	Global_1572864.f_11 = iParam0;
}

void func_281(bool bParam0)
{
	Global_1572864.f_14 = bParam0;
	if (bParam0)
	{
		func_283(1);
	}
}

void func_282(bool bParam0)
{
	Global_1572864.f_13 = bParam0;
	if (bParam0)
	{
		func_283(0);
	}
}

void func_283(int iParam0)
{
	Global_1572864.f_15 = iParam0;
}

void func_284(float fParam0)
{
	Global_1572864.f_22 = fParam0;
}

void func_285(bool bParam0)
{
	if (func_785())
	{
		Global_1357509 = 1;
	}
	if (func_786(GET_HASH_KEY("CAMERA_ITEM")))
	{
	}
	if (bParam0 && Global_1935630.f_44 == GET_HASH_KEY("WEAPON_KIT_CAMERA"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_UNARMED"), true, 0, false, false);
		Global_1935630.f_44 = GET_HASH_KEY("WEAPON_UNARMED");
	}
}

bool func_286(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_287()
{
	return Global_1572864.f_12;
}

void func_288(bool bParam0)
{
	int iVar0;
	struct<16> Var1;

	if (func_787(Global_1935630.f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_788();
	Var1.f_3.f_3 = iVar0;
	if ((!func_789(Global_1347343.f_2) && !func_286(Global_1347343.f_11, 64)) || func_432(32768))
	{
		Var1.f_7 = func_790();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_286(Global_1347343.f_11, 1024) && !func_432(32768))
	{
		Var1.f_11 = func_791();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_286(Global_1347343.f_11, 8))
	{
		Var1.f_15 = func_792();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343.f_1 != 2)
	{
		Global_1935630.f_3 = func_793(&Var1, "REPLAY_T", &(Global_1347343.f_3), 0, 1);
	}
	else
	{
		Global_1935630.f_3 = func_794(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !ENTITY::IS_ENTITY_ATTACHED(Global_35))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
	}
	func_99(&(Global_1347343.f_11), 1073741824 /* Float: 2f */);
	if (bParam0)
	{
		func_99(&(Global_1347343.f_11), 1048576);
	}
	CAM::_0x16E9ABDD34DDD931();
}

void func_289(int iParam0)
{
	int iVar0;

	if (!func_106(iParam0))
	{
		return;
	}
	if (iParam0 != func_105(0))
	{
		return;
	}
	if (func_426(iParam0) == 0)
	{
	}
	iVar0 = func_315(iParam0);
	if (func_424(iParam0) == 3)
	{
		if (func_426(iParam0) == 0)
		{
		}
		else if (STATS::STATSTRACKER_IS_INITIALIZED(func_426(iParam0)))
		{
			if (func_315(iParam0) != 1 && func_315(iParam0) != 8)
			{
				func_778(func_315(iParam0), func_426(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_716(iParam0);
	func_429(1);
	func_430(0);
	func_290(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_728(1);
			func_729(15, 0, 1);
			break;
		case 4:
			func_729(10, 0, 1);
			break;
		case 8:
			func_729(10, 0, 1);
			break;
		case 9:
			func_729(10, 0, 1);
			break;
		case 2:
			func_729(10, 0, 1);
			break;
		case 6:
			func_729(10, 0, 1);
			break;
		case 5:
			func_729(10, 0, 1);
			break;
	}
	func_442(1);
}

void func_290(int iParam0, int iParam1)
{
	if (!func_106(iParam0))
	{
		return;
	}
	func_795(iParam0, iParam1);
}

var func_291(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_292()
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

int func_293(int iParam0)
{
	if (!func_106(iParam0))
	{
		return -1;
	}
	return func_797(func_796(iParam0));
}

bool func_294(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_295(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_296(int iParam0, char* sParam1)
{
	if (func_217(iParam0, sParam1))
	{
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(Local_112[iParam0 /*130*/], sParam1, true);
		Local_112[iParam0 /*130*/].f_17 = sParam1;
		return true;
	}
	return false;
}

bool func_297(var uParam0)
{
	if (!func_63(8388608))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15))
		{
			if (func_798(Local_15) || func_799(Local_15))
			{
				if (!func_228())
				{
					if (func_800(Global_35, "ROB_KILLED_HAD_SOMETHING", GET_HASH_KEY("SPEECH_PARAMS_STANDARD"), Local_15, 1, 0, 3, 1))
					{
						func_66(8388608);
					}
				}
			}
		}
	}
	if (!func_145(Local_15, 0) && !func_154(Global_35, vLocal_2028, 70f, 1, 1))
	{
		return true;
	}
	else
	{
		func_242(uParam0);
		if (func_298(Local_15, -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */) && !func_154(Global_35, vLocal_2028, 70f, 1, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_298(bool bParam0, float fParam1, float fParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return true;
	}
	if (!PED::_0x5102307CE88798EB(bParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(bParam0);
		return false;
	}
	else if (!PED::IS_TRACKED_PED_VISIBLE(bParam0))
	{
		if (fParam1 == -1f)
		{
			fParam1 = func_394(bParam0, Global_36, 0);
		}
		if (fParam1 > fParam2)
		{
			return true;
		}
	}
	return false;
}

void func_299(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*bParam0))
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*bParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*bParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*bParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*bParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*bParam0, 0);
	}
	PED::DELETE_PED(bParam0);
}

void func_300(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_106(iParam0))
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
	if (func_426(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_180(iParam0))
	{
		iParam2 = -1;
	}
	if (func_424(iParam0) == 3 || (func_424(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_426(iParam0))))
	{
		func_778(func_315(iParam0), func_426(iParam0), iParam2);
		if ((!func_106(Global_1572864.f_8) && !func_104(0, 1, 0)) && !func_167(Global_1935630, 32768))
		{
			iVar0 = func_438(iParam0);
			if (iVar0 != -1)
			{
				func_91(0);
			}
			else if (func_315(iParam0) == 8)
			{
				iVar0 = func_439();
				if (iVar0 != -1)
				{
					func_91(0);
				}
			}
		}
	}
	func_290(iParam0, 0);
	if (func_105(0) == iParam0)
	{
		func_429(1);
		func_430(0);
		func_442(1);
	}
	func_443(iParam0, 1);
	func_716(iParam0);
}

void func_301()
{
	int iVar0;

	if (VOLUME::DOES_VOLUME_EXIST(iLocal_2064[3]))
	{
		PATHFIND::_0xE5EF9DE716FF737E(iLocal_2064[3], 1, 0);
		POPULATION::_0x74C2B3DC0B294102(iLocal_2064[3]);
		POPULATION::_0xA1CFB35069D23C23(iLocal_2064[3]);
	}
	if (func_250(iLocal_2063, 1, 1))
	{
		func_252(&iLocal_2063, 1);
	}
	if (PED::_0x91A5F9CBEBB9D936(uLocal_2061))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_2061, false);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_2064[1]))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_2064[1]);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_249(iLocal_2064[iVar0]);
		iVar0++;
	}
}

void func_302()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_112[iVar0 /*130*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_112[iVar0 /*130*/]);
		}
		iVar0++;
	}
}

void func_303(var uParam0)
{
	func_801(uParam0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	HUD::_DISPLAY_HUD_COMPONENT(724769646);
}

void func_304()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_223(&(Local_1614[iVar0 /*97*/].f_5));
		func_119(&(Local_1614[iVar0 /*97*/]), 1, 1, 1);
		iVar0++;
	}
}

void func_305()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_223(&(Local_1318[iVar0 /*97*/].f_5));
		func_119(&(Local_1318[iVar0 /*97*/]), 1, 1, 1);
		iVar0++;
	}
}

void func_306(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			ENTITY::DETACH_ENTITY(iParam0, bParam1, bParam2);
		}
	}
}

void func_307(int* iParam0)
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

void func_308()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_1114[iVar0]);
		iVar0++;
	}
}

int func_309(int iParam0)
{
	if (!func_409(iParam0))
	{
		return 0;
	}
	if (!func_411(func_410(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_412(iParam0)))
	{
		return 0;
	}
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_412(iParam0));
	return 1;
}

void func_310()
{
	func_802();
}

void func_311(bool bParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		MISC::_0xE98D55C5983F2509(*bParam0);
		PED::SET_PED_CONFIG_FLAG(*bParam0, 297, false);
	}
}

void func_312(var uParam0)
{
	*uParam0 = 0;
}

void func_313(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	func_803(vVar0, 0);
}

void func_314(vector3 vParam0, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_804(vVar0, vVar3, 0f) };
	vVar9 = { func_805(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, 0, 1);
	}
	else
	{
		PATHFIND::_0x6C3F12ECEB6D2E2A(vVar6, vVar9, iParam4, 1);
	}
}

int func_315(int iParam0)
{
	if (!func_106(iParam0))
	{
		return 0;
	}
	return func_806(func_796(iParam0));
}

int func_316(int iParam0)
{
	if (!func_106(iParam0))
	{
		return -1;
	}
	return func_807(func_796(iParam0));
}

void func_317(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

int func_318(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_808(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

var func_319(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return uVar0;
	}
	func_73(iParam0, bParam2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam3, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = PED::_0x4C39C95AE5DB1329(iParam0, bParam2, 15);
	return uVar0;
}

void func_320(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	uParam0->f_17.f_9 = { vParam7 };
	uParam0->f_17.f_5 = (vParam7.x + 2f);
	func_809(&(uParam0->f_17.f_8), vParam1, vParam4, uParam0->f_17.f_9, "LS CORE Dismount area");
}

void func_321(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, int iParam6)
{
	uParam0->f_17.f_2 = fParam1;
	uParam0->f_17.f_3 = fParam2;
	uParam0->f_17.f_4 = fParam3;
	uParam0->f_17.f_5 = fParam4;
	uParam0->f_17.f_6 = fParam5;
	uParam0->f_17.f_7 = iParam6;
	uParam0->f_17 = 0;
}

void func_322(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_201(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_810(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_811(iParam0->f_6, iParam0->f_5, 0);
			}
			func_812(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_813(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_323()
{
	Local_1023[0 /*8*/] = { func_814(1300.76f, -1318.01f, 75.52f, 0.48f, 0f, 120.3f, GET_HASH_KEY("S_LOANSHARKUNDERTAKER01X")) };
	Local_1023[1 /*8*/] = { func_814(1300.289f, -1317.934f, 76.3762f, -3.79f, 7.17f, -125.58f, GET_HASH_KEY("P_WOODPLANE01X")) };
	Local_1023[2 /*8*/] = { func_814(1276.69f, -1210.05f, 82.33f, -159.67f, -2f, 30.09f, GET_HASH_KEY("P_SHOVEL01X")) };
	Local_1023[3 /*8*/] = { func_814(1275.452f, -1209.308f, 81.38f, 10.07f, 21.31f, -68.46f, GET_HASH_KEY("S_INV_BROOCH01X")) };
	Local_1023[4 /*8*/] = { func_814(1280.874f, -1213.602f, 80.9738f, 0f, 0f, 0f, GET_HASH_KEY("S_BALLEDRAGCLOTH01X")) };
}

void func_324(var uParam0)
{
	sLocal_1130[0] = "PBL_BASE";
	sLocal_1130[1] = "PBL_ACTION";
	sLocal_1130[2] = "PBL_DEAD_DONT_CARE";
	sLocal_1130[3] = "PBL_APPRENTICE";
	sLocal_1130[4] = "PBL_DONT_LOOK_RIGHT";
	sLocal_1130[5] = "PBL_NEVER_GET_THE_HANG";
	sLocal_1130[6] = "PBL_WANT_A_FITTIN_RIGHT";
	sLocal_1130[7] = "PBL_U_OK_RIGHT";
	sLocal_1130[8] = "PBL_UNDERTAKER_FEET_UP_RIGHT";
	sLocal_1130[9] = "PBL_CAN_I_HELP_U_RIGHT";
	sLocal_1130[10] = "PBL_WANT_A_FITTIN_LEFT";
	sLocal_1130[11] = "PBL_U_OK_LEFT";
	sLocal_1130[12] = "PBL_UNDERTAKER_FEET_UP_LEFT";
	sLocal_1130[13] = "PBL_CAN_I_HELP_U_LEFT";
	sLocal_1130[14] = "PBL_BASE";
	sLocal_1130[18] = "PBL_EXIT";
	sLocal_1130[15] = "PBL_ACTION";
	sLocal_1130[16] = "PBL_ACTION_2";
	sLocal_1130[17] = "PBL_ACTION_3";
	sLocal_1130[19] = "PBL_BASE";
	sLocal_1130[20] = "PBL_BASE";
	sLocal_1130[21] = "PBL_EXIT";
	sLocal_1130[22] = "PBL_QUICK_EXIT";
	sLocal_1130[23] = "PBL_ACTION";
	sLocal_1130[24] = "PBL_REACT_BL";
	sLocal_1130[25] = "PBL_REACT_BR";
	sLocal_1130[26] = "PBL_REACT_R";
	sLocal_1130[27] = "PBL_REACT_L";
	sLocal_1130[28] = "PBL_REACT_F";
	sLocal_1130[29] = "PBL_IDLE";
	sLocal_1130[30] = "PBL_QUICK_TAKE_IT";
	sLocal_1130[31] = "PBL_GWEN_LEAVES";
	sLocal_1163[0] = "PBL_Base";
	sLocal_1163[1] = "PBL_ENTER";
	sLocal_1163[2] = "PBL_REASON_F";
	sLocal_1163[3] = "PBL_REASON_B";
	sLocal_1163[4] = "PBL_REASON_R";
	sLocal_1163[5] = "PBL_REASON_L";
	sLocal_1163[6] = "PBL_THREATEN_F";
	sLocal_1163[7] = "PBL_THREATEN_B";
	sLocal_1163[8] = "PBL_THREATEN_R";
	sLocal_1163[9] = "PBL_THREATEN_L";
	sLocal_1163[10] = "PBL_THREATEN_WEP_F";
	sLocal_1163[11] = "PBL_THREATEN_WEP_B";
	sLocal_1163[12] = "PBL_THREATEN_WEP_R";
	sLocal_1163[13] = "PBL_THREATEN_WEP_L";
	sLocal_1163[14] = "PBL_QUICK_EXIT";
	sLocal_1163[18] = "PBL_DIA_01";
	sLocal_1163[19] = "PBL_DIA_02";
	sLocal_1163[20] = "PBL_DIA_03";
	sLocal_1163[15] = "PBL_IDLE_01";
	sLocal_1163[16] = "PBL_IDLE_02";
	sLocal_1163[17] = "PBL_IDLE_03";
	sLocal_1185[0] = "PBL_Base";
	sLocal_1185[1] = "PBL_REASON_COUPLE_N";
	sLocal_1185[2] = "PBL_REASON_COUPLE_R";
	sLocal_1185[3] = "PBL_REASON_COUPLE_L";
	sLocal_1185[4] = "PBL_THREATEN_COUPLE_N";
	sLocal_1185[5] = "PBL_THREATEN_COUPLE_R";
	sLocal_1185[6] = "PBL_THREATEN_COUPLE_L";
	sLocal_1185[7] = "PBL_THREATEN_WEP_COUPLE_N";
	sLocal_1185[8] = "PBL_THREATEN_WEP_COUPLE_R";
	sLocal_1185[9] = "PBL_THREATEN_WEP_COUPLE_L";
	sLocal_1185[10] = "PBL_MAIN_DIALOGUE_COPY";
	sLocal_1185[11] = "PBL_SAY_SOMETHING";
	sLocal_1185[12] = "PBL_ILL_BE_BURIED";
	sLocal_1185[13] = "PBL_MORE_OF_A_FOOL";
	sLocal_1185[14] = "PBL_OF_ALL_THE_BOYS";
	sLocal_1201[0] = "PB_HANDOVER";
	Local_112[0 /*130*/] = { func_815("script@proc@loansharking@undertaker@encounter", sLocal_1130[iLocal_1204]) };
	Local_112[1 /*130*/] = { func_815("script@proc@loansharking@undertaker@female_mourner", sLocal_1163[iLocal_1205]) };
	Local_112[2 /*130*/] = { func_815("script@proc@loansharking@undertaker@young_couple", sLocal_1185[iLocal_1206]) };
	Local_112[3 /*130*/] = { func_815("script@proc@loansharking@undertaker@waiting_at_church", sLocal_1130[14]) };
	Local_112[4 /*130*/] = { func_815("script@proc@loansharking@undertaker@grave_digging", sLocal_1130[19]) };
	Local_112[5 /*130*/] = { func_815("script@proc@handovers@ped_handovers@give_brooch", sLocal_1201[iLocal_1203]) };
	Local_112[6 /*130*/] = { func_815("script@proc@loansharking@undertaker@collect_loota_gwen", sLocal_1130[20]) };
	Local_112[2 /*130*/].f_19[0 /*5*/] = { func_816(36.63f, 10, "base_female", 1203982336) };
	Local_112[2 /*130*/].f_19[1 /*5*/] = { func_816(12.37f, 11, "base_female", 1203982336) };
	Local_112[2 /*130*/].f_19[2 /*5*/] = { func_816(13.63f, 12, "base_female", 1203982336) };
	Local_112[2 /*130*/].f_19[3 /*5*/] = { func_816(12.87f, 13, "base_female", 1203982336) };
	Local_112[2 /*130*/].f_19[4 /*5*/] = { func_816(14f, 14, "base_female", 1203982336) };
	Local_112[2 /*130*/].f_19[5 /*5*/] = { func_816(19.27f, 1, "base_female", 1203982336) };
	Local_112[2 /*130*/].f_19[6 /*5*/] = { func_816(18.9f, 2, "base_female", 1203982336) };
	Local_112[2 /*130*/].f_19[7 /*5*/] = { func_816(18.27f, 3, "base_female", 1203982336) };
	Local_112[3 /*130*/].f_19[8 /*5*/] = { func_816(8.93f, 15, "base", 1203982336) };
	Local_112[3 /*130*/].f_19[9 /*5*/] = { func_816(8.93f, 16, "base", 1203982336) };
	Local_112[3 /*130*/].f_19[10 /*5*/] = { func_816(8.93f, 17, "base", 1203982336) };
	Local_112[4 /*130*/].f_19[11 /*5*/] = { func_816(6.17f, 19, "base_gwen", 1203982336) };
	Local_112[6 /*130*/].f_19[12 /*5*/] = { func_816(8.3f, 21, "idle_gwen", 1203982336) };
	Local_112[6 /*130*/].f_19[13 /*5*/] = { func_816(5.97f, 22, "idle_gwen", 1203982336) };
	Local_112[6 /*130*/].f_19[14 /*5*/] = { func_816(9.4f, 23, "action_gwen", 1203982336) };
	Local_112[6 /*130*/].f_19[18 /*5*/] = { func_816(6f, 24, "base_gwen", 1203982336) };
	Local_112[6 /*130*/].f_19[17 /*5*/] = { func_816(6f, 25, "base_gwen", 1203982336) };
	Local_112[6 /*130*/].f_19[15 /*5*/] = { func_816(6f, 26, "base_gwen", 1203982336) };
	Local_112[6 /*130*/].f_19[16 /*5*/] = { func_816(6f, 27, "base_gwen", 1203982336) };
	Local_112[6 /*130*/].f_19[19 /*5*/] = { func_816(6f, 28, "base_gwen", 1203982336) };
	Local_112[6 /*130*/].f_19[20 /*5*/] = { func_816(10.9f, 30, "idle_gwen", 1203982336) };
	Local_112[6 /*130*/].f_19[21 /*5*/] = { func_816(7.2f, 23, "action_gwen", 1203982336) };
	func_204(&(uParam0->f_2052), cLocal_1123);
}

void func_325()
{
	sLocal_1114[0] = "loan_undertaker_gwen_to_church";
	sLocal_1114[1] = "loan_undertaker_gwen_to_grave";
	sLocal_1114[2] = "loan_undertaker_gwen_to_coffin";
	sLocal_1114[4] = "loan_undertaker_mourner_exit";
	sLocal_1114[6] = "loan_undertaker_couple_1_back_exit";
	sLocal_1114[5] = "loan_undertaker_couple_1_front_exit";
	sLocal_1114[3] = "loan_undertaker_brawlers_to_gwen";
	sLocal_1114[7] = "loan_undertaker_woman_to_gwen";
}

void func_326()
{
	iLocal_1809[0] = 6;
	iLocal_1809[1] = 6;
	iLocal_1909 = 5;
}

void func_327()
{
	Local_15 = { func_817(1300.084f, -1319.778f, 75.5941f, 329.1932f) };
	Local_1318[0 /*97*/] = { func_817(1282.863f, -1228.591f, 80.2135f, 313.0822f) };
	Local_1318[1 /*97*/] = { func_817(1283.656f, -1228.142f, 80.2548f, 187.3788f) };
	Local_1318[2 /*97*/] = { func_817(1279.378f, -1213.84f, 80.9125f, 14.215f) };
	Local_1614[0 /*97*/] = { func_817(1340.022f, -1275.918f, 75.8507f, 165.0051f) };
	Local_1614[1 /*97*/] = { func_817(1340.437f, -1275.219f, 75.8544f, 154.0159f) };
	Local_1208 = { func_817(1278.457f, -1210.033f, 81.2391f, 32.3877f) };
}

void func_328()
{
	int iVar0;
	int iVar1;

	func_24(&(Local_15.f_6));
	func_818(&(Local_15.f_6));
	func_121(&(Local_15.f_6), 1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_24(&(Local_1318[iVar0 /*97*/].f_6));
		func_818(&(Local_1318[iVar0 /*97*/].f_6));
		func_121(&(Local_1318[iVar0 /*97*/].f_6), 1);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 2)
	{
		func_24(&(Local_1614[iVar1 /*97*/].f_6));
		func_818(&(Local_1614[iVar1 /*97*/].f_6));
		func_121(&(Local_1614[iVar1 /*97*/].f_6), 1);
		iVar1++;
	}
	func_24(&uLocal_1910);
	func_818(&uLocal_1910);
	func_25(&uLocal_1910, 0);
	func_27(&uLocal_1910, 1);
}

void func_329(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_330(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_331(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888.f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_332(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_333(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_334(int iParam0)
{
	int iVar0;

	if (!func_819(iParam0))
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

int func_335(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_820(bParam1, bParam2, bParam3);
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

void func_336(var uParam0, bool bParam1, int iParam2)
{
	func_821(iParam2);
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
		uParam0->f_13 = func_822(0);
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
							func_127(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_823(1))
						{
							func_127(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_823(1) || *uParam0 & 8192 != 0))
				{
					func_126(uParam0, 33554432);
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
			if (func_824(uParam0))
			{
				uParam0->f_15 = func_166();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_166() - uParam0->f_15) > 500)
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
	func_825(uParam0);
}

bool func_337(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!EVENT::_0x1D1B448D719415AB(bParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(bParam0, 0, 0);
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
			iVar1 = EVENT::_0x822A001BCEA5BD81(bParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return false;
			}
			bVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(bVar2))
			{
				return false;
			}
			if (DECORATOR::DECOR_EXIST_ON(bVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (bVar2 == Global_1935630.f_33)
			{
				return false;
			}
			if (bVar2 == Global_1935630.f_32)
			{
				return false;
			}
			if (!func_826(bParam0, uParam1, bVar2))
			{
				return false;
			}
			if (func_827(bParam0, bVar2) <= func_828(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_338(bool bParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = bParam0;
	}
	if (func_829(iParam2, 1, 1, 1, 0))
	{
		func_127(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_830(uParam1, 1);
	func_151();
}

bool func_339(bool bParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_831(bParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_832(uParam1);
			if (func_833(uParam1, bParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_834(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_830(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_830(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_340(bool bParam0, int iParam1, var uParam2)
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
	if (func_835(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_832(uParam2);
		if (func_833(uParam2, bParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_834(uParam2)
				{
					func_830(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_341(bool bParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
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
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == bParam0)
		{
			return false;
		}
	}
	bVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_826(bParam0, uParam1, bVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_834(uParam1)
		{
			fVar3 = func_832(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, bVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(bParam0, bVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_342(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_166();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_343(var uParam0, bool bParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_836(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == GET_HASH_KEY("WEAPON_UNARMED"))
			{
				PED::_0xD355E2F1BB41087E(bParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630.f_46))
			{
				PED::_0xD355E2F1BB41087E(bParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(bParam1, fVar0);
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
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), bParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (func_351(uParam2, bParam1))
			{
				func_830(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_344(var uParam0, bool bParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_837(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_351(uParam2, bParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_830(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_345(var uParam0, bool bParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam1, false, true) };
	iVar3 = func_838(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_830(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_830(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(bParam1, GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, 0, 0);
					if (func_839(bParam1, vVar0, vVar4))
					{
						func_830(uParam2, 1);
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
					func_830(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(bParam1, GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, 0, 0);
					if (func_839(bParam1, vVar0, vVar7))
					{
						func_830(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_346(bool bParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(bParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630.f_39)
	{
		if (!func_826(bParam0, uParam1, Global_1935630.f_34[iVar0]) || bParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_840(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_841(Global_1935630.f_34[iVar0]))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(bParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(bParam0, "HorseOwnerTeamB")))
					{
						vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
						vVar2[1 /*3*/] = { vVar9 };
						uParam1->f_10 = bParam0;
						return true;
					}
				}
			}
			if (func_842(uParam1, bParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = bParam0;
				return true;
			}
			else if (func_843(uParam1, bParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = bParam0;
				return true;
			}
			else if (func_844(uParam1, bParam0, fVar1, iVar0))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = bParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_347(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*bParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*bParam0, 0, 0);
	switch (iVar0)
	{
		case GET_HASH_KEY("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case GET_HASH_KEY("EVENT_SHOCKING_WINDOW_SMASHED"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(*bParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*bParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*bParam0, 0);
			return true;
	}
	return false;
}

bool func_348(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_166();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_349(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(bParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(bParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, iVar0, 1, 1))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, PED::GET_MOUNT(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_845(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(bParam0) || PED::_0x947E43F544B6AB34(bParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, bParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(bParam0, 400))
		{
			return 1;
		}
	}
	if (func_846(iVar0, bParam0))
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == bParam0)
	{
		if (PED::GET_PED_IS_GRAPPLING(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (PED::IS_PED_BEING_JACKED(bParam0))
		{
			if (PED::GET_PEDS_JACKER(bParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_350(var uParam0, bool bParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(bParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(bParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_351(var uParam0, bool bParam1)
{
	if (func_847(uParam0))
	{
		return true;
	}
	if (PED::_0x29FCE825613FEFCA(bParam1, 400))
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(bParam1, true))
	{
		return false;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(bParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(bParam1))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(bParam1, 10, true))
	{
		return false;
	}
	if (PED::_GET_LASSO_TARGET(Global_35) != 0)
	{
		return true;
	}
	if (!PED::IS_PED_RAGDOLL(bParam1))
	{
		return true;
	}
	return false;
}

bool func_352(bool bParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, bParam1, 1, 1))
		{
			return true;
		}
		if (func_684(bParam0, bParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, bParam1) && PED::IS_PED_RAGDOLL(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_353()
{
}

bool func_354(var uParam0, bool bParam1)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;

	bVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (bVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(bVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(bParam1, false, false) };
		if (func_848(bVar0, bParam1, vVar1))
		{
			uParam0->f_9 = func_166();
			return true;
		}
		else if (VEHICLE::GET_DRAFT_ANIMAL_COUNT(bVar0, &iVar5, &iVar4))
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
					bVar7 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(bVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(bVar7))
					{
						if (func_394(bVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bVar7, bParam1))
							{
								uParam0->f_9 = func_166();
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

bool func_355()
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
	if ((func_166() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_356(var uParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(bParam1))
	{
		return false;
	}
	fVar0 = func_828(uParam0);
	if (uParam0->f_12 > func_849(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_850(bParam1);
	iVar1 = func_851(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(bParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(bParam1, Global_35, true, false) == 1)) || ((PED::_0x06087579E7AA85A9(bParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, uParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(bParam1, uParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_357(bool bParam0, int iParam1, var uParam2)
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
	return func_852(bParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_358(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
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
		if (func_853(bParam0, uParam1, 1))
		{
			return true;
		}
		if ((PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(bParam0, Global_35, true, false) == 1)
		{
			return true;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(bParam0))
	{
		return false;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(bParam0, 0, 0);
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
			iVar2 = EVENT::_0x822A001BCEA5BD81(bParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(bParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return false;
			}
			bVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (bVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return false;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return false;
			}
			return true;
		case GET_HASH_KEY("EVENT_SHOCKING_ENTITY_HOGTIED"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(bParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(bParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return false;
			}
			bVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(bParam0, bVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, bVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
				{
					if (!func_854(uParam1, bParam0))
					{
						if (func_394(bVar4, Global_36, 1) < 7f)
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

bool func_359(bool bParam0, var uParam1)
{
	if (!func_855(0))
	{
		return false;
	}
	if (PED::IS_PED_FACING_PED(bParam0, Global_35, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_360(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_166();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_361(bool bParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*bParam0, PLAYER::PLAYER_ID(), 0);
}

int func_362(bool bParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_166();
	}
	else if (func_166() - uParam1->f_4) > func_856(uParam1)
	{
		return func_857(bParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_363(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(bParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam1, "bIgnoreDamageChecking"))
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

void func_364(char[4] cParam0, int iParam1)
{
	cParam0->f_14 = iParam1;
}

void func_365()
{
	CAM::_0x88544C0E3291DCAE(1);
	func_151();
}

void func_366(int iParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0, false))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
		}
	}
}

void func_367()
{
	PED::_0x411189E51B8020BA(Local_15, "Cautious");
	func_366(Local_112[0 /*130*/]);
	if (((ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_112[6 /*130*/]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_112[6 /*130*/], true, false)) && ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Local_15, Local_112[6 /*130*/])) && !func_213(-2147483648))
	{
		func_529(11);
		return;
	}
	else
	{
		func_366(Local_112[6 /*130*/]);
		TASK::CLEAR_PED_TASKS(Local_15, true, false);
		TASK::CLEAR_PED_SECONDARY_TASK(Local_15);
		TASK::TASK_SMART_FLEE_PED(Local_15, Global_35, 100f, -1, 0, 2f, 0);
		func_529(11);
	}
}

bool func_368(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_369(int iParam0, bool bParam1)
{
	if (!func_368(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_858(iParam0), func_859(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_858(iParam0), func_859(iParam0), 2, "");
		func_860(iParam0, 16);
	}
	else
	{
		if (func_368(iParam0, 8))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_858(iParam0), func_859(iParam0), 1, "");
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_858(iParam0), func_859(iParam0), 0, "");
		}
		func_861(iParam0, 16);
	}
}

void func_370(int iParam0, bool bParam1)
{
	if (Global_1347702[iParam0 /*49*/].f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_368(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_858(iParam0), func_859(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_368(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_858(iParam0), func_859(iParam0), 1, "");
		}
		func_860(iParam0, 8);
	}
	else
	{
		if (func_368(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_858(iParam0), func_859(iParam0), 0, "");
		}
		func_861(iParam0, 8);
	}
}

float func_371(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_372(int iParam0)
{
	func_863(iParam0, func_862(iParam0), (Global_1392626[iParam0 /*32*/].f_4 / 2f));
}

void func_373(int iParam0, int iParam1)
{
	if (func_263(iParam0))
	{
		Global_40.f_9052.f_11[iParam0] = (Global_40.f_9052.f_11[iParam0] || iParam1);
	}
}

void func_374(int iParam0, bool bParam1)
{
	if (func_273() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_432(32768))
	{
		return;
	}
	if (!func_432(32768))
	{
		func_864(1, bParam1);
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
	if (func_432(32768))
	{
		Global_2621440[iParam0 /*12066*/].f_9.f_14 = func_266();
	}
}

int func_375(int iParam0, bool bParam1, bool bParam2, bool bParam3)
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

int func_376(int iParam0, int iParam1)
{
	var uVar0;

	return func_865(&uVar0, iParam0, iParam1);
}

bool func_377(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != GET_HASH_KEY("WEAPON_UNARMED"));
}

void func_378(bool bParam0, bool bParam1)
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
			if (func_377(iVar3) && WEAPON::IS_WEAPON_A_GUN(iVar3))
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
		func_866(1);
	}
}

void func_379(int iParam0, vector3 vParam1, var uParam4)
{
	Global_2621440[iParam0 /*12066*/].f_9.f_7 = { vParam1 };
	Global_2621440[iParam0 /*12066*/].f_9.f_13 = uParam4;
	Global_2621440[iParam0 /*12066*/].f_9 = 5;
	Global_2621440[iParam0 /*12066*/].f_9.f_15 = func_867(vParam1, 1);
}

bool func_380()
{
	if (iLocal_2119 >= 3)
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_2064[6], true, 0))
		{
			return true;
		}
	}
	else if (!func_245(Global_35, Local_15, 40f, 1))
	{
		return true;
	}
	return false;
}

bool func_381()
{
	int iVar0;

	if (func_213(8))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1318[iVar0 /*97*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1318[iVar0 /*97*/]))
				{
					if (func_146(Local_1318[iVar0 /*97*/], 0, &(Local_1318[iVar0 /*97*/].f_6), &(Local_1318[iVar0 /*97*/].f_34), 1, 0))
					{
						return true;
					}
				}
				else
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_382()
{
	func_529(12);
}

bool func_383()
{
	int iVar0;

	if (func_213(8))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1318[iVar0 /*97*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1318[iVar0 /*97*/]))
				{
					if (func_146(Local_1318[iVar0 /*97*/], 0, &uLocal_1910, &uLocal_1938, 1, 0))
					{
						return true;
					}
				}
				else
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1812))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1812))
		{
			if (func_146(Local_1812, 0, &uLocal_1910, &uLocal_1938, 1, 0))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_384(int iParam0)
{
	func_678(&iLocal_2074, iParam0);
}

bool func_385(int iParam0)
{
	return func_203(iLocal_2075, iParam0);
}

bool func_386(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(bParam0, iParam1, true, 0);
}

bool func_387(char* sParam0)
{
	return func_868(sParam0);
}

bool func_388(char[4] cParam0, char* sParam1, bool bParam2)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam1, 24);
	return func_869(cParam0, cVar0, 0, -1, bParam2, 0);
}

bool func_389(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

void func_390(var uParam0, char* sParam1)
{
	int iVar0;

	if (func_389(uParam0, 8192))
	{
		return;
	}
	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		iVar0 = MISC::_0x94E8CA3DEE952789(sParam1, "@");
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_224), {func_870("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 4);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_224), {func_870("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_232(uParam0, 8192);
}

Vector3 func_391(var uParam0)
{
	return uParam0->f_5;
}

Vector3 func_392(var uParam0)
{
	var uVar0;
	vector3 vVar8;
	var uVar11;
	vector3 vVar14;

	MemCopy(&uVar0, {func_871(uParam0)}, 8);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_229))
	{
		uParam0->f_229 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_224), 0, 0, false, true);
	}
	else if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_229, false))
	{
		if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_229, func_872(Global_35), &vVar14, false, 0, 2))
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

void func_393(var uParam0, vector3 vParam1)
{
	if (func_158(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
}

float func_394(bool bParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(bParam0, false, false), vParam1, bParam4);
}

float func_395(var uParam0)
{
	return uParam0->f_219;
}

void func_396()
{
	struct<4> Var0;

	Global_1946804.f_858 = (Global_1946804.f_858 - 1);
	if (Global_1946804.f_858 <= 0)
	{
		Var0 = 35;
		func_873(Var0);
	}
}

void func_397(var uParam0)
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

void func_398(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228)) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_228))
	{
		ANIMSCENE::_0x8A8208AE92BF87A5(uParam0->f_228);
	}
}

float func_399(var uParam0)
{
	return uParam0->f_218;
}

struct<8> func_400(var uParam0)
{
	return uParam0->f_230;
}

void func_401(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_874() };
	func_628(uParam0, &Var0);
}

void func_402(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (func_389(uParam0, 16))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_4) && !func_875(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_876());
		func_232(uParam0, 8);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_877(uParam0, uParam0->f_4, 0, 1);
		PATHFIND::SET_ROADS_IN_VOLUME(uParam0->f_4, false, false, bParam2);
		func_232(uParam0, 16);
	}
}

void func_403(var uParam0)
{
	if ((!func_389(uParam0, 32768) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228)) && ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_228, false))
	{
		func_878(uParam0);
		func_879(uParam0, 0);
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_228, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_228);
		}
		func_232(uParam0, 32768);
	}
}

bool func_404()
{
	return Global_1946804.f_1497 != Global_1946804.f_2163.f_1;
}

void func_405(int iParam0)
{
	struct<4> Var0;

	if (func_880(iParam0, 4096))
	{
		Global_1946804.f_858++;
	}
	if (Global_1946804.f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_873(Var0);
}

char* func_406(int iParam0)
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

bool func_407(int iParam0, var uParam1)
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

void func_408(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_666() - fParam1);
	func_881(uParam0, 1);
	func_882(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_409(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_410(int iParam0)
{
	if (!func_409(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_411(int iParam0)
{
	return iParam0 != 0;
}

int func_412(int iParam0)
{
	if (!func_409(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

bool func_413(int iParam0, bool bParam1, int iParam2, vector3 vParam3, float fParam6, int iParam7, float fParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if (!func_145(*bParam1, 0))
	{
		if (!func_20(Global_1392626[iParam0 /*32*/].f_9, 256) || CAM::IS_SCREEN_FADED_OUT())
		{
			*bParam1 = func_883(iParam2, vParam3, fParam6, iParam7, fParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, 0, 0);
			if (func_145(*bParam1, 0))
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

void func_414(vector3 vParam0, float fParam3, int iParam4)
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

void func_415(bool bParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_884(bParam0, iParam1))
		{
			if (func_885(bParam0, iParam1))
			{
				if (func_886(bParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request"), bParam0, true, false);
					func_887(bParam0);
				}
			}
			else
			{
				PED::_SET_PED_BODY_COMPONENT(bParam0, iParam1);
				PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
			}
			PED::_0xE3144B932DFDFF65(bParam0, 0f, -1, true, true);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(bParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 9);
		}
	}
}

int func_416(int iParam0, bool bParam1, int iParam2)
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
	if (bParam1 && func_592(GET_HASH_KEY("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
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
			if (func_538(iVar25, 0) && func_560(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

bool func_417(bool bParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(bParam0) && ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		iVar0 = func_888(bParam0);
		return func_889(bParam0, GET_HASH_KEY("CURRENCY_CASH"), iParam1, iVar0);
	}
	return DECORATOR::DECOR_SET_INT(bParam0, "loot_money", iParam1);
}

bool func_418()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1023[0 /*8*/]))
	{
		if (iLocal_2062 == 0)
		{
			iLocal_2062 = ENTITY::PIN_CLOSEST_MAP_ENTITY(Local_1023[0 /*8*/].f_7, Local_1023[0 /*8*/].f_1, 11);
		}
		else if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_2062))
		{
			Local_1023[0 /*8*/] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_2062));
		}
		return false;
	}
	return true;
}

void func_419(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_890();
			break;
		case 1:
			func_891(iParam0, "player", Global_35);
			func_891(iParam0, "Mourner", Local_1318[2 /*97*/]);
			func_891(iParam0, func_220(4), Local_1023[4 /*8*/]);
			break;
		case 2:
			func_891(iParam0, "player", Global_35);
			func_891(iParam0, "Female", Local_1318[0 /*97*/]);
			func_891(iParam0, "male", Local_1318[1 /*97*/]);
			break;
		case 3:
			func_891(iParam0, "Gwen", Local_15);
			func_891(iParam0, "player", Global_35);
			break;
		case 4:
			func_892();
			break;
		case 5:
			func_893();
			break;
		case 6:
			if (func_213(32768))
			{
				func_894();
			}
			else
			{
				func_895();
			}
			break;
	}
}

void func_420(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_876());
	}
}

void func_421(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		*uParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_876());
	}
}

bool func_422(var uParam0, bool bParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &((uParam0[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = bParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = bParam1;
			StringCopy(&((uParam0[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

int func_423(int iParam0)
{
	if (!func_106(iParam0))
	{
		return -1;
	}
	return func_424(iParam0);
}

int func_424(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_896(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

bool func_425(int iParam0)
{
	return func_423(iParam0) == 0;
}

int func_426(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_498[iParam0 /*2*/].f_1;
}

void func_427(int iParam0)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;
	struct<8> Var5;
	struct<8> Var13;
	int iVar21;

	if (!func_819(iParam0))
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

void func_428(int iParam0)
{
	if (!func_106(iParam0))
	{
		return;
	}
	func_898(iParam0, func_897(iParam0) + 1);
}

void func_429(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_92(&Global_1935630, 4194304);
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

int func_430(bool bParam0)
{
	if (!bParam0 && func_215(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(GET_HASH_KEY("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

int func_431(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_899(iParam0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1898164.f_162 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1898164.f_162;
	func_900(iParam0, iVar0);
	Global_1898164.f_162++;
	if (iParam1 < 0 || iParam1 >= Global_1898164.f_162)
	{
		return iVar0;
	}
	func_901(iVar0, iParam1);
	return iParam1;
}

bool func_432(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

void func_433(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_434(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_435(int iParam0)
{
	Global_1572864.f_3 = (Global_1572864.f_3 - (Global_1572864.f_3 && iParam0));
}

void func_436(bool bParam0)
{
	func_902(bParam0);
	func_903(bParam0);
	func_904(bParam0);
	func_905(bParam0);
	func_906(bParam0);
	func_907(bParam0);
	func_908(bParam0);
	func_909(bParam0);
}

void func_437(bool bParam0)
{
	if (func_273() != -1)
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
		func_549(89, 1);
		ATTRIBUTE::_START_PERIODIC_ICON(5);
	}
	else
	{
		func_549(90, 1);
		ATTRIBUTE::_STOP_PERIODIC_ICON(5);
	}
	func_910(1, bParam0, 1);
	func_601();
	Global_40.f_11095.f_43 = bParam0;
}

int func_438(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_315(iParam0))
	{
		case 1:
			iVar0 = func_293(iParam0);
			return func_911(iVar0);
		case 8:
			iVar1 = func_293(iParam0);
			if (func_295(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				return func_912(iVar1);
			}
			break;
	}
	return -1;
}

int func_439()
{
	if (!func_579(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_579(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_579(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_579(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_579(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_579(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_579(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_440(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (func_273() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077.f_1 = 2;
	Global_1898077.f_2 = 0;
	Global_1898077.f_3 = iParam0;
	Global_1898077.f_7 = iVar0;
	func_913(Global_1898077.f_7, Global_1898077.f_3);
}

void func_441(int iParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 2)
	{
		return;
	}
	iVar0 = 0;
	if (func_273() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077.f_1 = 5;
	Global_1898077.f_2 = 0;
	Global_1898077.f_4 = iParam0;
	Global_1898077.f_7 = iVar0;
	func_914(Global_1898077.f_7, Global_1898077.f_4);
}

void func_442(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_443(int iParam0, bool bParam1)
{
	if (func_273() != -1)
	{
		return;
	}
	if (func_105(0) != iParam0)
	{
		return;
	}
	if (func_915(iParam0))
	{
		if (bParam1)
		{
			func_916(-525676072);
		}
		else
		{
			func_917(-525676072);
		}
	}
}

void func_444(float fParam0)
{
	func_918(10, fParam0);
}

bool func_445()
{
	if (func_273() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

void func_446()
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1935436.f_12 = 0f;
}

bool func_447(bool bParam0, vector3 vParam1, var uParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, float fParam12, float fParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	func_513(bParam0, vParam1, 0, fParam5, bParam6, fParam7, bParam8, fParam12, fParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(bParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(bParam0, false);
	}
	bVar4 = func_394(bParam0, vParam1, 1);
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
		func_246(uParam4);
	}
	if (func_49(uParam4))
	{
		if (bParam14)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(bParam0, 1f);
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
		if (func_637(uParam4) >= fParam9)
		{
			if (bParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_919(bParam0, 501393341))
			{
				if (PED::IS_PED_ON_MOUNT(bParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(bParam0, 0, 0, 0, 0, 0);
					return true;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !func_919(bParam0, -828834893))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(bParam0, 0, 0);
					return true;
				}
			}
		}
		if (bParam0 == Global_35 && iParam11 == 0)
		{
			if (TASK::GET_IS_TASK_ACTIVE(bParam0, 8))
			{
				TASK::CLEAR_PED_TASKS(bParam0, true, false);
			}
			PED::SET_PED_RESET_FLAG(bParam0, 175, true);
		}
	}
	return false;
}

bool func_448(bool bParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (!PED::IS_PED_INJURED(bParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(bParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

int func_449(var uParam0)
{
	return uParam0->f_1;
}

void func_450(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	func_920(uParam0, 4);
	if (func_921(uParam0, &uParam1, iParam5))
	{
		func_458(uParam0, 1);
	}
}

void func_451(var uParam0)
{
	if (!func_922(uParam0))
	{
		return;
	}
	if (!func_229(uParam0, 4194304))
	{
		func_923(uParam0);
		func_466(uParam0, 4194304);
	}
	if (func_924(uParam0))
	{
		func_925(uParam0);
		func_926(uParam0);
		func_458(uParam0, 2);
	}
}

void func_452(var uParam0)
{
	uParam0->f_1451 = -1;
	func_457(uParam0, 0);
	func_458(uParam0, 3);
	func_927(uParam0, 0);
	func_246(&(uParam0->f_1635));
	func_928(uParam0);
	func_246(&(uParam0->f_1638));
}

void func_453(var uParam0)
{
	bool bVar0;

	if (!func_229(uParam0, 134217728))
	{
		bVar0 = true;
		SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("BANDANA"));
		if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(GET_HASH_KEY("BANDANA")))
		{
			bVar0 = false;
		}
		STREAMING::REQUEST_ANIM_DICT(func_929(1));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_929(1)))
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_466(uParam0, 134217728);
		}
	}
}

void func_454(var uParam0, int iParam1, bool bParam2)
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
	if (!func_229(uParam0, 65536))
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
	if (!func_229(uParam0, 4096) && uParam0->f_1662)
	{
		return;
	}
	if (!func_229(uParam0, 16777216))
	{
		return;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	func_464(uParam0);
	func_930(uParam0, uParam0->f_1663, uParam0->f_1665);
	func_931(uParam0);
	if (uParam0->f_1666 && !uParam0->f_1665)
	{
		if (((((uParam0->f_1661 >= 0 && uParam0->f_782[uParam0->f_1661 /*41*/].f_17 > 0f) && uParam0->f_1454 >= 0) && !func_154(Global_35, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, (uParam0->f_782[uParam0->f_1661 /*41*/].f_17 + 5f), 1, 1)) && !func_229(uParam0, 33554432)) && !func_229(uParam0, 4))
		{
			func_932(uParam0, uParam0->f_1663);
			return;
		}
	}
	if (!func_229(uParam0, 4))
	{
		if (func_933(uParam0))
		{
			if (!bParam2)
			{
				uParam0->f_1450 = uParam0->f_1454;
				func_466(uParam0, 8);
				return;
			}
		}
		else
		{
			func_932(uParam0, uParam0->f_1663);
		}
		if (uParam0->f_782[uParam0->f_1456 /*41*/].f_29)
		{
			fVar0 = func_934(uParam0, uParam0->f_1456);
			if (fVar0 < 0f || (uParam0->f_1663 && fVar0 < 1f))
			{
				uParam0->f_1454 = uParam0->f_1456;
				if (!bParam2)
				{
					uParam0->f_1450 = uParam0->f_1456;
					func_466(uParam0, 8);
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
					func_466(uParam0, 16);
					if (((!func_229(uParam0, 32) && iParam1 != 2) && !bParam2) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, true) < (uParam0->f_782[uParam0->f_1454 /*41*/].f_11 + 5f))
					{
						func_935(uParam0);
						func_466(uParam0, 32);
					}
				}
			}
			else if (uParam0->f_1454 == uParam0->f_1456)
			{
				func_235(uParam0, 16);
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
		if (func_237(&(uParam0->f_782[uParam0->f_1454 /*41*/]), 2) && uParam0->f_1663)
		{
			return;
		}
	}
	if (func_229(uParam0, 16))
	{
		fVar4 = func_394(Global_35, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, 1);
		if (uParam0->f_1663 && fVar4 <= (uParam0->f_782[uParam0->f_1454 /*41*/].f_17 + 5f))
		{
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_JUMP"), false);
		}
		fVar5 = func_936(Global_36, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, 1);
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
				func_463(uParam0, uParam0->f_782[uParam0->f_1454 /*41*/].f_27, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, fVar6);
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
	if (((uParam0->f_1663 && iVar3) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_1664) > 1.25f) || func_229(uParam0, 4))
	{
		if (((VOLUME::IS_POINT_IN_VOLUME(uParam0->f_1641, uParam0->f_1645) && func_934(uParam0, uParam0->f_1454) < 10000f) && func_229(uParam0, 16)) || func_229(uParam0, 4))
		{
			if (!func_229(uParam0, 4))
			{
				func_466(uParam0, 4);
			}
			iVar7 = 5152;
			iVar7 |= 32;
			iVar7 |= 4096;
			iVar7 |= 1;
			if (!func_461(uParam0, uParam0->f_1454))
			{
				iVar7 |= 2048;
			}
			if (func_937(Global_35, &(uParam0->f_1452), iVar7, 0, 0, 1084227584 /* Float: 5f */, 100, uParam0->f_782[uParam0->f_1454 /*41*/].f_7, uParam0->f_782[uParam0->f_1454 /*41*/].f_7.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				uParam0->f_1452 = 0;
				func_235(uParam0, 4);
			}
		}
	}
	else if (func_229(uParam0, 4))
	{
		func_235(uParam0, 4);
	}
}

int func_455(var uParam0)
{
	return *uParam0;
}

void func_456(var uParam0)
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (func_229(uParam0, 512))
	{
		return;
	}
	if (func_244(&(uParam0->f_1638)) < 2f)
	{
		return;
	}
	if (func_938(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		func_466(uParam0, 524288);
	}
}

void func_457(var uParam0, int iParam1)
{
	uParam0->f_1449 = iParam1;
}

void func_458(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

int func_459(var uParam0, int iParam1)
{
	int iVar0;

	if (func_236(uParam0, 4))
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
			if (func_939())
			{
				if (!func_229(uParam0, 524288))
				{
					HUD::_HIDE_HUD_COMPONENT(-1679307491);
				}
				HUD::_DISPLAY_HUD_COMPONENT(474191950);
			}
			break;
	}
	if (func_939())
	{
		func_235(uParam0, 512);
		func_940(uParam0, 128);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin", false, -1);
		if (func_941(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 4))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, func_942(uParam0->f_782[uParam0->f_1450 /*41*/].f_39), false, -1);
		}
		PED::SET_PED_CONFIG_FLAG(Global_35, 255, true);
	}
	func_943();
	func_944(uParam0, 1, 0);
	func_945(uParam0);
	if (func_229(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	func_940(uParam0, 4);
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_1641))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_1641);
	}
	if (func_236(uParam0, 8) && CAM::_0xDD0B7C5AE58F721D(func_946()))
	{
		CAM::_0x798BE43C9393632B(func_946());
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1111[iVar0 /*22*/].f_2)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1111[iVar0 /*22*/].f_2), func_946())) && CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1111[iVar0 /*22*/].f_2)))
		{
			if (uParam0->f_1111[iVar0 /*22*/].f_21)
			{
				CAM::_0x798BE43C9393632B(&(uParam0->f_1111[iVar0 /*22*/].f_2));
			}
		}
		iVar0++;
	}
	PLAYER::RESET_PLAYER_INPUT_GAIT(PLAYER::GET_PLAYER_INDEX());
	if (func_229(uParam0, 524288) || iParam1 == 1)
	{
		func_947();
	}
	if (func_236(uParam0, 16))
	{
		if (func_455(uParam0) == 0)
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
	func_948();
	if (func_236(uParam0, 32))
	{
		TASK::SET_PED_PATH_FOLIAGE_COST_MODIFIER(Global_35, 1f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1667))
	{
		if (!func_229(uParam0, 8192))
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
	func_471(uParam0);
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1687))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_1687);
	}
	return 1;
}

void func_460()
{
	Global_1905944.f_5695 = 1;
}

bool func_461(var uParam0, int iParam1)
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

int func_462(var uParam0)
{
	return uParam0->f_2;
}

void func_463(var uParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;

	if (func_630(uParam1, 8))
	{
		iVar0 |= 8;
	}
	if (func_630(uParam1, 8192))
	{
		iVar0 |= 32;
	}
	if (uParam0->f_1663)
	{
		fParam3 = 0.55f;
		PED::SET_PED_RESET_FLAG(uParam0->f_1664, 214, true);
	}
	if (uParam0->f_1662 && func_229(uParam0, 4096))
	{
		iVar0 |= 16;
	}
	if (func_630(uParam1, 262144) && Global_1935630.f_44 == GET_HASH_KEY("WEAPON_LASSO"))
	{
		iVar0 |= 16;
	}
	func_949(&iVar1, uParam2);
	func_950(&(uParam0->f_1670), iVar0, iVar1, fParam3);
	if (!Global_1935630.f_12)
	{
		if (!func_229(uParam0, 67108864))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 36, true);
	}
	func_951();
	func_952(uParam0, 1);
}

void func_464(var uParam0)
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
	if (iVar0 >= 0 && !func_470(uParam0, 2))
	{
		bVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_782[iVar0 /*41*/].f_1, true) <= uParam0->f_782[iVar0 /*41*/].f_16;
		Var2 = { uParam0->f_1458 };
		if (bVar1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1111[iVar0 /*22*/].f_2)))
			{
				StringCopy(&(uParam0->f_1458), func_953(uParam0->f_1111[iVar0 /*22*/].f_2), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1458), func_946(), 64);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1111[iVar0 /*22*/].f_10)))
			{
				StringCopy(&(uParam0->f_1458.f_8), func_953(uParam0->f_1111[iVar0 /*22*/].f_10), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1458.f_8), func_954(), 64);
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
			if (!func_955(uParam0->f_1111[iVar0 /*22*/].f_1, 8))
			{
				if (!func_955(uParam0->f_1111[iVar0 /*22*/].f_1, 8))
				{
					func_949(&iVar19, uParam0->f_1111[iVar0 /*22*/].f_1);
					func_956(&(uParam0->f_1670), iVar19);
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
							if (func_955(uParam0->f_1111[iVar0 /*22*/].f_1, 16) && iVar24 >= 0)
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
											func_940(uParam0, 16);
										}
										return;
									}
								}
								if (uParam0->f_1111[iVar0 /*22*/].f_18 != 0f || uParam0->f_1111[iVar0 /*22*/].f_19 != 0f)
								{
									vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, func_957(Global_35, iVar23, 1), uParam0->f_1111[iVar0 /*22*/].f_18, 0f, uParam0->f_1111[iVar0 /*22*/].f_19) };
								}
							}
							else if (uParam0->f_1111[iVar0 /*22*/].f_18 != 0f || uParam0->f_1111[iVar0 /*22*/].f_19 != 0f)
							{
								vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, func_936(Global_36, uParam0->f_782[iVar0 /*41*/].f_1, 1), uParam0->f_1111[iVar0 /*22*/].f_18, 0f, uParam0->f_1111[iVar0 /*22*/].f_19) };
							}
							fVar27 = uParam0->f_782[iVar0 /*41*/].f_16;
							fVar28 = uParam0->f_782[iVar0 /*41*/].f_14;
							bVar29 = func_955(uParam0->f_1111[iVar0 /*22*/].f_1, 2);
							bVar30 = (func_955(uParam0->f_1111[iVar0 /*22*/].f_1, 1) && !bVar29);
							bVar31 = func_955(uParam0->f_1111[iVar0 /*22*/].f_1, 4);
							bVar32 = false;
							if (!CAM::_0x927B810E43E99932(&(uParam0->f_1458)))
							{
								CAM::_0xB8B207C34285E978(&(uParam0->f_1458));
								if (CAM::IS_CINEMATIC_CAM_RENDERING())
								{
									func_958(0, 0);
								}
								bVar32 = true;
								func_940(uParam0, 16);
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1458), 4))
							{
								bVar32 = (bVar32 || uParam0->f_1474.f_16 != iVar23);
								bVar32 = (bVar32 || !func_959(uParam0->f_1474.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
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
								bVar32 = (bVar32 || !func_959(uParam0->f_1497.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
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
							func_960(uParam0, 2);
						}
					}
				}
			}
		}
	}
}

int func_465(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 || iParam1 == 2)
	{
		return 0;
	}
	if (func_961(uParam0, &iVar0))
	{
		func_962(uParam0, iVar0);
		return 1;
	}
	return 0;
}

void func_466(var uParam0, int iParam1)
{
	uParam0->f_1430 = (uParam0->f_1430 || iParam1);
}

void func_467(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	vector3 vVar6;
	int iVar9;

	if (func_455(uParam0) != 0)
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
				func_466(uParam0, 65536);
				return;
			}
			else if (uParam0->f_1668 == iVar9)
			{
				func_466(uParam0, 65536);
				return;
			}
		}
		func_235(uParam0, 65536);
	}
}

void func_468(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = 0;
	if (func_449(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1660)
		{
			if (uParam0->f_241[iVar0 /*18*/].f_7)
			{
				func_963(uParam0, iVar0, iParam1);
			}
			else if (uParam0->f_241[iVar0 /*18*/].f_6)
			{
				bVar1 = func_964(uParam0, iVar0);
				if (bVar1)
				{
					func_965(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!func_461(uParam0, uParam0->f_1450))
		{
			func_966(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_1457;
	while (iVar0 <= (uParam0->f_1660 - 1))
	{
		if (uParam0->f_241[iVar0 /*18*/].f_7)
		{
			func_963(uParam0, iVar0, iParam1);
		}
		else if (uParam0->f_241[iVar0 /*18*/].f_6)
		{
			bVar1 = func_964(uParam0, iVar0);
			if (bVar1)
			{
				func_965(uParam0, iVar0, iParam1);
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

void func_469(var uParam0)
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

bool func_470(var uParam0, int iParam1)
{
	return (uParam0->f_1431 && iParam1) != 0;
}

void func_471(var uParam0)
{
	func_967(&(uParam0->f_1670));
}

void func_472(var uParam0)
{
	uParam0->f_1431 = 0;
}

void func_473(int iParam0)
{
	int iVar0;

	if (func_273() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_145(func_968(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_968(iVar0), func_969(), 1))
			{
				func_970(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

void func_474()
{
	Global_18 = 1;
	Global_43884 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_475(var uParam0)
{
	if (uParam0->f_1450 >= 0)
	{
		if (func_394(Global_35, uParam0->f_782[uParam0->f_1450 /*41*/].f_1, 0) < uParam0->f_782[uParam0->f_1450 /*41*/].f_14)
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

bool func_476(var uParam0)
{
	if (uParam0->f_1450 >= 0)
	{
		if (func_394(Global_35, uParam0->f_782[uParam0->f_1450 /*41*/].f_1, 0) < uParam0->f_782[uParam0->f_1450 /*41*/].f_15)
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

bool func_477(var uParam0, int iParam1)
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
			else if (func_637(&(uParam0->f_1638)) >= 15f)
			{
				func_466(uParam0, 32768);
				return true;
			}
			break;
		case 9:
			if (!uParam0->f_1534)
			{
				if (func_637(&(uParam0->f_1638)) >= 15f)
				{
					func_466(uParam0, 32768);
					return true;
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(func_971(uParam0)) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(func_971(uParam0), false))
				{
					uParam0->f_1534 = 1;
				}
			}
			else
			{
				fVar0 = ANIMSCENE::GET_ANIM_SCENE_PHASE(func_971(uParam0));
				bVar1 = ANIMSCENE::IS_ANIM_SCENE_FINISHED(func_971(uParam0), false);
				bVar2 = ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(func_971(uParam0));
				return ((fVar0 >= 1f || bVar1) || bVar2);
			}
			break;
		case 11:
			return true;
		default:
			return func_637(&(uParam0->f_1638)) >= 15f;
	}
	return false;
}

bool func_478(var uParam0)
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

int func_479(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_241[iVar0 /*18*/].f_17 == 2 && func_972(&(uParam0->f_241[iVar0 /*18*/]), 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_480(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (bParam4 && PED::IS_PED_INJURED(iParam0))
	{
		return true;
	}
	if (func_973(iParam0, fParam1, iParam2, bParam3, bParam4, fParam5))
	{
		return true;
	}
	return false;
}

bool func_481(vector3 vParam0, var uParam3, float fParam4)
{
	float fVar0;

	if (!func_974(uParam3->f_7, uParam3->f_8))
	{
		return false;
	}
	if (func_975(&(uParam3->f_3), 1))
	{
		return false;
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		return false;
	}
	fVar0 = func_394(Global_35, vParam0, 1);
	if (fVar0 > fParam4)
	{
		return false;
	}
	if (!func_976(vParam0, uParam3))
	{
		return false;
	}
	if (!func_975(&(uParam3->f_3), 2))
	{
		if (!CAM::IS_SPHERE_VISIBLE(vParam0, 0.5f))
		{
			return false;
		}
		if (!func_977(vParam0, uParam3))
		{
			return false;
		}
	}
	return true;
}

void func_482(int iParam0)
{
	if (!func_153(iParam0, 4))
	{
		func_373(iParam0, 4);
		func_978(iParam0, 2);
	}
}

void func_483(int iParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, float fParam14)
{
	if (func_975(&(uParam1->f_3), 1))
	{
		func_979(uParam1);
		if (func_480(iParam0, fParam7, iParam11, bParam12, bParam13, fParam14))
		{
			func_365();
		}
	}
	if (func_481(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), uParam1, fParam7))
	{
		CAM::SET_GAMEPLAY_PED_HINT(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		func_980(uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam6, iParam9);
	}
}

void func_484(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

bool func_485(bool bParam0, bool bParam1, float fParam2)
{
	if (bParam0)
	{
		return bParam1;
	}
	return fParam2;
}

void func_486(bool bParam0, int* iParam1, var uParam2, float fParam3, bool bParam4, char* sParam5)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (ENTITY::IS_ENTITY_DEAD(*bParam0) || !MISC::IS_BIT_SET(iParam1->f_21, 0))
	{
		return;
	}
	func_511(iParam1, *bParam0, iParam1->f_56, 0);
	bVar0 = func_485(bParam4 >= 0f, bParam4, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*bParam0, true, false)));
	func_981(iParam1, fParam3);
	func_982(bParam0, iParam1, uParam2, bVar0);
	func_983(iParam1);
	if (MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		bVar1 = MISC::IS_STRING_NULL_OR_EMPTY(sParam5);
		func_984(iParam1, uParam2, bParam0, bVar1, sParam5, bVar0);
		if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			bVar2 = true;
			if (!MISC::IS_BIT_SET(*iParam1, 12))
			{
				bVar2 = func_502(iParam1, bParam0);
			}
			if (bVar2 && !MISC::IS_BIT_SET(*iParam1, 13))
			{
				func_503(iParam1);
			}
		}
	}
}

bool func_487(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_985(iParam0, iParam1))
		{
			if (!func_333(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_62(uParam2, 0, 0, 1, 0);
				func_127(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_333(iParam1->f_10, 1))
		{
			func_986(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_126(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_488(bool bParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;

	if (bParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		MISC::_0xE98D55C5983F2509(*bParam0);
		bVar4 = func_333(iParam4, 32);
		func_987(iParam1, uParam2, 0);
		iVar5 = func_988(*bParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*bParam0, 178, false);
			return true;
		}
		func_62(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_333(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_333(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_333(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_333(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_333(iParam4, 8388608) || func_333(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_333(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_333(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_490(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*bParam0, "IloGeneralEvents", 2);
		}
		if (!func_490(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_333(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::REGISTER_INTERACTION_LOCKON_PROMPT(*bParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, false, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_989(bParam0);
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
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*bParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*bParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*bParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*bParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*bParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*bParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*bParam0, 301, false);
			if (func_333(iParam4, 268435456))
			{
				iVar8 = func_990(uParam2, GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_991(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_490(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*bParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*bParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*bParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*bParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*bParam0, 493, false);
			}
			if (func_333(iParam4, 2) || func_333(iParam4, 16))
			{
				func_489(*bParam0, 1, 1);
			}
			else
			{
				func_489(*bParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_489(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_490(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_491(bool bParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_992(*bParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_492(bool bParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_993(*bParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_333(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_493(int iParam0)
{
	if (func_333(iParam0, 4))
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
	if (func_333(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_RELOAD"), false);
	}
	if (func_333(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_GRAPPLE"), false);
	}
}

int func_494(int* iParam0, var uParam1)
{
	int iVar0;

	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_SATCHEL_HORSE_MENU"), false);
	iVar0 = 0;
	if (((((PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_OPEN_SATCHEL_MENU")) || PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_OPEN_SATCHEL_HORSE_MENU"))) || PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_OPEN_JOURNAL"))) || func_994()) || func_995()) || func_996())
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_164(&(iParam0->f_46));
	}
	if (func_49(&(iParam0->f_46)) && !func_997(&(iParam0->f_46), 0.25f))
	{
		func_998(uParam1);
	}
	if (iVar0 == 1)
	{
		return 0;
	}
	return 1;
}

bool func_495(bool bParam0, int* iParam1, bool bParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_999(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*bParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_1000(Global_35)) || func_1001(Global_35)) || func_1002(Global_35));
	fVar12 = -1f;
	if (func_49(&(iParam1->f_13)))
	{
		fVar12 = func_637(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_201((uParam4[iVar0 /*17*/])->f_6);
		func_1003(*bParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_1004(*bParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, bParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_1005(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_62(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_505(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_987(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
							func_1006(iParam1, uParam4, bParam0, fParam3, sParam9);
							bVar13 = MISC::IS_STRING_NULL_OR_EMPTY(sParam9);
							func_984(iParam1, uParam4, bParam0, bVar13, sParam9, bParam2);
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
							if (func_377(func_1007(Global_35, 0, 1, 0)) || func_377(func_1007(Global_35, 1, 1, 0)))
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
					if (func_1008(iParam1, fParam6, iParam1->f_9))
					{
						func_164(&(iParam1->f_18));
						if (bVar6)
						{
							func_505(uParam4, 0, 0);
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
		func_1009(iParam1, bParam2);
	}
	return bVar5;
}

void func_496(var uParam0)
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

void func_497(int* iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_1010(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_1009(iParam0, bParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_498(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_INTERACT_LOCKON")))
		{
			if (func_1011(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_1012(iParam1, 0);
				func_987(iParam1, uParam2, func_490(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

void func_499(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_1003(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_500(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_501(bool bParam0, int iParam1, float fParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_1013(bParam0, vVar0, fParam2);
}

bool func_502(int* iParam0, bool bParam1)
{
	vector3 vVar0;

	if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
	{
		return true;
	}
	if (!PED::IS_PED_CARRYING_SOMETHING(Global_35) && !func_448(Global_35, -208384378))
	{
		if (!MISC::IS_BIT_SET(iParam0->f_21, 19) && MISC::IS_BIT_SET(iParam0->f_21, 4))
		{
			vVar0 = { iParam0->f_57 };
			iParam0->f_57 = { func_1014(*bParam1, Global_35, 2.5f) };
			iParam0->f_57 = { iParam0->f_57 + Global_36 };
			iParam0->f_57.f_2 = (iParam0->f_57.f_2 + 3f);
			func_1015(iParam0->f_60, iParam0->f_57);
			iParam0->f_57 = { vVar0 };
			MISC::SET_BIT(&(iParam0->f_21), 19);
		}
		return true;
	}
	else if (PED::IS_PED_CARRYING_SOMETHING(Global_35) && !func_448(Global_35, -208384378))
	{
		if (func_1016(Global_35))
		{
			iParam0->f_60 = func_1017();
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

bool func_503(int* iParam0)
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
		if (func_377(func_1007(Global_35, 0, 1, 0)) || func_377(func_1007(Global_35, 1, 1, 0)))
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
		if (!func_377(func_1007(Global_35, 0, 1, 0)) && !func_377(func_1007(Global_35, 1, 1, 0)))
		{
			func_246(&(iParam0->f_52));
			MISC::SET_BIT(&(iParam0->f_21), 7);
			MISC::SET_BIT(&(iParam0->f_21), 6);
			return true;
		}
		else if (((func_377(func_1007(Global_35, 0, 1, 0)) || func_377(func_1007(Global_35, 1, 1, 0))) && !func_448(Global_35, 716706914)) && !func_448(Global_35, 242628503))
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
		bVar0 = func_244(&(iParam0->f_52)) >= 1.5f;
		if ((!func_377(func_1007(Global_35, 0, 1, 0)) && !func_377(func_1007(Global_35, 1, 1, 0))) || bVar0)
		{
			func_246(&(iParam0->f_52));
			MISC::SET_BIT(&(iParam0->f_21), 6);
			return true;
		}
	}
	return false;
}

bool func_504(int* iParam0)
{
	var uVar0;
	bool bVar1;

	if (MISC::IS_BIT_SET(iParam0->f_21, 8) || MISC::IS_BIT_SET(*iParam0, 11))
	{
		return true;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		if (func_1018(&uVar0))
		{
			func_50(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
			if (func_1019())
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
		bVar1 = func_244(&(iParam0->f_37)) >= 1.5f;
		if ((!func_1018(&uVar0) || func_1019()) || bVar1)
		{
			if (bVar1)
			{
				func_1020();
			}
			MISC::SET_BIT(&(iParam0->f_21), 8);
			return true;
		}
	}
	return false;
}

void func_505(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_510(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

int func_506(bool bParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*bParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*bParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_164(&(iParam1->f_18));
			return 0;
		}
		else if (func_49(&(iParam1->f_18)))
		{
			func_246(&(iParam1->f_18));
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
	return func_1021(&(iParam1->f_18), fParam2);
	return 1;
}

void func_507(int* iParam0, var uParam1)
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
	func_1022(iParam0, 0);
	func_987(iParam0, uParam1, 1);
	func_62(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 61);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var62, 17);
		iVar0++;
	}
}

void func_508(char[4] cParam0, int* iParam1, char* sParam2, char* sParam3, int iParam4, float fParam5, int iParam6)
{
	if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 1024))
	{
		func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 1024);
		if (MISC::IS_STRING_NULL(sParam2))
		{
			sParam2 = "OBJ_INTERACT";
		}
		cParam0->f_2296 = iParam6;
		cParam0->f_2295 = fParam5;
		func_322(iParam1, sParam2, sParam3, iParam4, 0, 0, 0, 1, 0);
	}
}

void func_509(var uParam0, int iParam1, int iParam2)
{
	if (MAP::DOES_BLIP_EXIST(iParam1))
	{
		uParam0->f_56 = iParam1;
		if (!MISC::IS_BIT_SET(uParam0->f_21, 16))
		{
			MISC::SET_BIT(&(uParam0->f_21), 16);
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_21, 16))
	{
		MISC::CLEAR_BIT(&(uParam0->f_21), 16);
	}
	if (iParam2 != 0)
	{
		uParam0->f_55 = iParam2;
	}
	if (MISC::IS_BIT_SET(uParam0->f_21, 17))
	{
		MISC::CLEAR_BIT(&(uParam0->f_21), 17);
	}
	if (MISC::IS_BIT_SET(uParam0->f_21, 18))
	{
		MISC::CLEAR_BIT(&(uParam0->f_21), 18);
	}
}

void func_510(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_1023(iParam0, 13))
	{
		func_1024(iParam0, 0);
	}
	else
	{
		func_1025(iParam0, 0);
	}
	if (func_201(iParam0->f_6))
	{
		if (bParam2)
		{
			func_202(&(iParam0->f_6), 0, 1);
		}
	}
}

int func_511(int* iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!func_145(bParam1, 0))
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 16))
	{
		return 0;
	}
	if (!MAP::DOES_BLIP_EXIST(iParam2) && MISC::IS_BIT_SET(iParam0->f_21, 16))
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 17))
	{
		MAP::_0x97F6F158CC5B5CA2(bParam1, iParam2);
		MISC::SET_BIT(&(iParam0->f_21), 17);
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 18) && iParam3 != 0)
	{
		if (!MAP::_0x3CB8859F04763C78(bParam1, iParam2))
		{
			MAP::_0xBB68D4D3CA3DE402(bParam1, iParam3);
		}
		MISC::SET_BIT(&(iParam0->f_21), 18);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 17) && MISC::IS_BIT_SET(iParam0->f_21, 18))
	{
		return 1;
	}
	return 0;
}

float func_512(int iParam0, vector3 vParam1)
{
	vector3 vVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	return (vVar0.z - vParam1.z);
}

void func_513(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	if (bParam4)
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		return;
	}
	if (func_875(vParam1, 0f, 0f, 0f))
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
	iVar0 = PED::GET_MOUNT(bParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(bParam0, false);
	}
	bVar3 = func_394(bParam0, vParam1, 1);
	if ((bVar3 <= bParam5 && bVar3 > bParam6) && bVar3 > bParam7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.75f);
		}
		if ((func_1026() && !ENTITY::IS_ENTITY_DEAD(iVar1)) && VEHICLE::IS_DRAFT_VEHICLE(iVar1))
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
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(bParam0, 1.5f);
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
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(bParam0, 1f);
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
			if (bParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !func_919(bParam0, 501393341))
			{
				TASK::TASK_DISMOUNT_ANIMAL(bParam0, iParam12, 0, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_919(bParam0, -828834893))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(bParam0, 0, iParam12);
			}
		}
	}
}

bool func_514(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

bool func_515(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return false;
}

void func_516(int iParam0)
{
	int iVar0;

	if (iParam0 == 9)
	{
		iVar0 = iLocal_2119;
		iVar0++;
		iLocal_2119 = iVar0;
		if (iLocal_2119 == 9)
		{
			iLocal_2119 = (iVar0 - 1);
		}
	}
	else
	{
		iLocal_2119 = iParam0;
	}
	iLocal_2118 = 0;
}

int func_517(int iParam0)
{
	return iParam0;
}

void func_518(int iParam0)
{
	if (!func_1027(iParam0))
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

int func_519(var uParam0)
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

void func_520(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_521(int iParam0)
{
	if (func_315(iParam0) == 1)
	{
		return func_293(iParam0);
	}
	return -1;
}

char[] func_522(int iParam0)
{
	var uVar0;

	if (!func_819(iParam0))
	{
		return uVar0;
	}
	return Global_1835011[iParam0 /*74*/].f_8;
}

int func_523(int iParam0)
{
	if (func_315(iParam0) == 8)
	{
		return func_293(iParam0);
	}
	return -1;
}

char[] func_524(int iParam0)
{
	var uVar0;

	if (!func_294(iParam0))
	{
		return uVar0;
	}
	uVar0 = Global_1347702[iParam0 /*49*/].f_3;
	return uVar0;
}

bool func_525()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 == 0)
		{
			iVar2 = iLocal_1308;
		}
		else if (iVar0 == 1)
		{
			iVar2 = iLocal_1309;
		}
		else
		{
			iVar2 = iLocal_1307;
		}
		if (func_1028(&(Local_1318[iVar0 /*97*/]), iVar2))
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

void func_526(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 8;
	if (bParam1)
	{
		iVar0 |= 72;
	}
	if (bParam2)
	{
		iVar0 |= 131072;
	}
	if (bParam3)
	{
		iVar0 |= 24;
	}
	if (bParam4)
	{
		iVar0 |= 40;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_527()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_145(Local_1318[iVar0 /*97*/], 0))
		{
			if (iVar0 == 0 || iVar0 == 1)
			{
				func_1029(iVar0);
			}
			else
			{
				func_1030(iVar0);
			}
		}
		iVar0++;
	}
}

void func_528(bool bParam0)
{
	TASK::TASK_CLEAR_LOOK_AT(Local_15);
	TASK::TASK_LOOK_AT_ENTITY(Local_15, Global_35, -1, 0, 51, 0);
	if (bParam0)
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_15, Global_35, 0, -1f, -1f, -1f);
	}
}

void func_529(int iParam0)
{
	iLocal_2121 = iParam0;
}

int func_530(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case GET_HASH_KEY("WS_MP_FETCH_OTH_TALL_TREES"):
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case GET_HASH_KEY("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case GET_HASH_KEY("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case GET_HASH_KEY("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case GET_HASH_KEY("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case GET_HASH_KEY("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 320;
		case GET_HASH_KEY("WS_MP_HIDEOUT_THE_LOFT"):
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case GET_HASH_KEY("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 336;
		case GET_HASH_KEY("WS_MP_HIDEOUT_CUERA_SECO"):
			return 334;
		case GET_HASH_KEY("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case GET_HASH_KEY("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case GET_HASH_KEY("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case GET_HASH_KEY("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 340;
		case -699277634:
			return 4;
		case GET_HASH_KEY("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case GET_HASH_KEY("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case GET_HASH_KEY("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case GET_HASH_KEY("WS_MP_HIDEOUT_REPENTANCE"):
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case GET_HASH_KEY("WS_MP_HIDEOUT_FARMHOUSE"):
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case GET_HASH_KEY("WS_MP_HIDEOUT_COLTER"):
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case GET_HASH_KEY("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			return 348;
		case GET_HASH_KEY("WS_MP_FETCH_OTH_CASTORS"):
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case GET_HASH_KEY("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case GET_HASH_KEY("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case GET_HASH_KEY("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case GET_HASH_KEY("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case GET_HASH_KEY("WS_MP_HIDEOUT_SHIP_ROCK"):
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case GET_HASH_KEY("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case GET_HASH_KEY("WS_MP_HIDEOUT_TALL_TREES"):
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case GET_HASH_KEY("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case GET_HASH_KEY("WS_MP_HIDEOUT_LAKAY"):
			return 313;
		case 1250636944:
			return 259;
		case GET_HASH_KEY("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			return 315;
		case 1306158345:
			return 202;
		case GET_HASH_KEY("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case GET_HASH_KEY("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case GET_HASH_KEY("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			return 332;
		case 1703426636:
			return 43;
		case GET_HASH_KEY("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case GET_HASH_KEY("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case GET_HASH_KEY("WS_MP_HIDEOUT_CLEMENS_COVE"):
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case GET_HASH_KEY("WS_MP_INTRO_JESSICA_CAMP_RHODES"):
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_531(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_530(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		MISC::SET_BIT(&(Global_40.f_283[iVar1]), iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888.f_40567.f_46 = 1;
			MISC::SET_BIT(&(Global_1058888.f_40567.f_14[iVar1]), iVar2);
		}
		else
		{
			MISC::SET_BIT(&(Global_1055058[iVar3 /*116*/].f_72[iVar1]), iVar2);
		}
		MISC::SET_BIT(&(Global_1058888.f_40567[iVar1]), iVar2);
	}
	Global_1934765 = 0;
}

void func_532(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_530(iParam0, 1);
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

void func_533()
{
	func_532(-939420910);
	func_532(-1187950766);
	func_532(356365161);
	func_532(753127042);
	func_532(-2038424081);
	func_532(1884271742);
	func_532(459290420);
}

void func_534()
{
	func_532(704802028);
	func_532(588987611);
	func_532(2008888900);
	func_532(1649996811);
	func_532(227918160);
	func_532(168171957);
	func_532(1193080109);
	func_532(-491981251);
	func_532(-639037538);
	func_532(-618620429);
}

void func_535(bool bParam0, bool bParam1)
{
	func_1031(bParam0, bParam1);
}

void func_536(int iParam0, char* sParam1, bool bParam2)
{
	if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(Local_112[iParam0 /*130*/], sParam1))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_112[iParam0 /*130*/], sParam1, bParam2, false);
	}
}

void func_537(bool bParam0, char* sParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(bParam0, 658540077, true) != 1)
			{
				if (iParam2 == 0)
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(bParam0, sParam1, 0, 46, -1, 0, 0, -1);
				}
				else
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(bParam0, sParam1, 0, iParam2, -1, 0, 0, -1);
				}
			}
		}
	}
}

bool func_538(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_539(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_273() == -1)
	{
		if (func_1032(iParam0) && func_1033(iParam0))
		{
			func_1034(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_540(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_1035(iParam0, iParam1);
	Var0 = { func_1036(iParam0, 0, 1) };
	iVar5 = func_1037(iParam0, &Var0, 0, 0);
	iVar6 = func_1038(iParam0, 0);
	if ((iVar5 > 1 && !func_734()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_560(iParam0, -2051813666))
		{
			func_549(583, 1);
		}
		else
		{
			func_549(582, 0);
		}
	}
	if (func_1039(iParam0, &Var0, *iParam1, 0, 0))
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

void func_541(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_1040(iParam0, -949239683))
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

int func_542(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_538(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_559(iParam0);
	if (iVar0 == GET_HASH_KEY("AMMO") || (bParam1 && iVar0 == GET_HASH_KEY("WEAPON")))
	{
		iVar1 = func_1041(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == GET_HASH_KEY("WEAPON"))
	{
		return func_1042(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_1043(bParam2), iParam0, 0);
	return iVar2;
}

bool func_543(int iParam0)
{
	if (func_273() != -1)
	{
		return false;
	}
	return func_544(iParam0) != 0;
}

int func_544(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_1044())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_1045(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_545(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_546(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_1044())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_545(iVar0))
		{
			if (func_592(func_1045(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_547(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_1046(48);
	func_781(0, -1);
}

bool func_548(int iParam0)
{
	if (func_273() != -1)
	{
		return false;
	}
	return func_579(Global_1347702[iParam0 /*49*/].f_15, 1);
}

void func_549(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_1047(iParam0, &iVar0, &iVar1);
	if (!func_1048(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_1049(iVar0, iVar1);
}

int func_550(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_551(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

bool func_552()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_553(int iParam0)
{
	if (func_273() != -1)
	{
		return false;
	}
	return func_579(Global_1835011[iParam0 /*74*/].f_1, 1);
}

bool func_554(int iParam0)
{
	if (func_273() != -1)
	{
		return false;
	}
	if (!func_294(iParam0))
	{
		return false;
	}
	return func_180(Global_1347702[iParam0 /*49*/].f_15);
}

int func_555()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_592(func_1050(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_556(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_552() && (func_554(38) || func_548(38)))
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
			if (func_552() && (func_554(39) || func_548(39)))
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
			iVar9 = func_1051(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = GET_HASH_KEY("COL_EX_INTRO");
			break;
		case 41:
			if (func_552() && (func_554(41) || func_548(41)))
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
			if (func_552() && (func_554(49) || func_548(49)))
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
			iVar9 = func_1051(iParam3, 20);
			iVar14 = GET_HASH_KEY("TAXIDERMY");
			iVar11 = GET_HASH_KEY("BLIP_RC_HOBBS");
			iVar13 = GET_HASH_KEY("COL_TX_INTRO");
			break;
	}
	sVar2 = func_1052(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_1053(iParam0, iVar13, iVar14))
	{
	}
	if (func_1054(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1055(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1056(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1057(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1058(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_557(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_558(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_552() && (func_554(38) || func_548(38)))
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
			if (func_552() && (func_554(39) || func_548(39)))
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
			if (func_552() && (func_554(49) || func_548(49)))
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
		if (func_552() && (func_554(38) || func_548(38)))
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
			func_1059(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1059(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_1061(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, func_1060(func_551(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1059(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1059(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == GET_HASH_KEY("DINO_BONES"))
	{
		if (func_552() && (func_554(39) || func_548(39)))
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
			func_1059(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1059(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == GET_HASH_KEY("ROCK_CARVINGS"))
	{
		if (func_552() && (func_554(49) || func_548(49)))
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
			func_1059(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1059(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_1059(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1059(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_559(int iParam0)
{
	vector3 vVar0;

	if (!func_538(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_560(int iParam0, int iParam1)
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

bool func_561(int iParam0, int iParam1)
{
	if (!func_538(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

bool func_562(int iParam0)
{
	if (!func_1062(iParam0))
	{
		return false;
	}
	return func_1063(iParam0);
}

void func_563(int iParam0)
{
	if (!func_1062(iParam0))
	{
		return;
	}
	func_1064(iParam0);
	func_1065(iParam0);
}

int func_564(int iParam0)
{
	struct<2> Var0;

	if (!func_538(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_565(int iParam0, bool bParam1)
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
	if (func_538(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1066(iVar0) || func_1067(iVar0))
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

int func_566(int iParam0, bool bParam1)
{
	if (!func_538(iParam0, 0))
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

void func_567(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (!func_377(iParam0))
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

bool func_568(bool bParam0)
{
	if (func_273() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_1043(bParam0));
}

bool func_569(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_1036(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1068((398 + iVar28), 1);
			if (func_1069(iParam0, &Var0, iVar5, 0))
			{
				if (func_1070(iParam0, &Var6, iVar5))
				{
					Var29 = { func_1071(iParam0, Var0, iVar5, 0) };
					func_1072(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_568(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_570(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_1073(iParam0, iParam1);
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

bool func_570(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_572(iParam0))
	{
		return false;
	}
	if (!func_568(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_571(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;

	iVar0 = func_566(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_273() == -1)
		{
			func_567(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1074(iVar0);
			}
		}
		if (!func_1039(iParam0, &uVar1, 1, 0, 0))
		{
			func_1034(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1075(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_569(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == GET_HASH_KEY("WEAPON_FISHINGROD") || iVar0 == GET_HASH_KEY("WEAPON_KIT_BINOCULARS"))
			{
				func_569(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == GET_HASH_KEY("WEAPON_LASSO"))
			{
				func_569(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0))
			{
				if (iVar0 == GET_HASH_KEY("WEAPON_MELEE_KNIFE_JOHN") && !func_1076())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(iParam0))
				{
				}
				else if (!func_1077(iVar0))
				{
					func_569(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_569(iVar0, WEAPON::GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_1007(Global_35, 2, 0, 1);
				if ((((func_377(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_562(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_377(iVar7) && func_562(24))
				{
					if (!func_569(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_569(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_569(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_549(480, 1);
	}
	return true;
}

bool func_572(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_573(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_572(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_377(iVar4))
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
	if (func_592(GET_HASH_KEY("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == -897553835)
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
		func_611(func_1078(iParam0), func_610(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_273() == -1)
		{
			if (func_579(Global_1835011[14 /*74*/].f_1, 1))
			{
				func_549(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_568(0))
	{
		if (func_570(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_616(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_574(int iParam0)
{
	var uVar0;

	if ((iParam0 == GET_HASH_KEY("PROVISION_TALISMAN_EAGLE_TALON") && !func_752()) || iParam0 != GET_HASH_KEY("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_1079(Global_35, iParam0, &uVar0))
		{
			func_595(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_601();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_601();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_601();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_599();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_597();
			break;
	}
}

void func_575(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_597();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_598();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_599();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_600();
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
			func_601();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_HAWK_TALON"):
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1080();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_SHARK_TOOTH"):
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_TURTLE_SHELL"):
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1081();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_CAT_EYE"):
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_576(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_577(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

struct<2> func_578(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

bool func_579(int iParam0, bool bParam1)
{
	switch (func_423(iParam0))
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

void func_580(int iParam0)
{
	bool bVar0;

	bVar0 = func_560(iParam0, -2017733358);
	if (func_1082() < 3)
	{
		if (bVar0)
		{
			if (func_1084(func_1083(iParam0), iParam0))
			{
				func_611(79, func_610(func_1083(iParam0)), 1);
			}
			else
			{
				func_611(78, func_610(func_1083(iParam0)), 1);
			}
		}
		else
		{
			func_611(80, func_610(func_1085(iParam0)), 1);
		}
	}
}

bool func_581()
{
	if (((((func_1086(GET_HASH_KEY("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_1086(GET_HASH_KEY("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400)) || func_1086(GET_HASH_KEY("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_1086(GET_HASH_KEY("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_1086(GET_HASH_KEY("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_1086(GET_HASH_KEY("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return true;
	}
	return false;
}

int func_582(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_416(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_1087(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_1088(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_583(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("DOCUMENT_LETTER_TAXIDERMY"):
			func_556(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			func_558(51, 0, 0, 0, 0, -1, 0);
			func_1089(8192);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_TAXIDERMY"):
			func_556(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			func_558(51, 0, 0, 0, 0, -1, 0);
			func_1089(524288);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_DINO_BONES"):
			func_556(39, 0, 0, 0, 0, 0, 1, 0);
			func_558(39, 0, 0, 0, 0, -1, 0);
			func_1090(16);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_RARE_FISH"):
			func_556(41, 0, 0, 0, 0, 0, 1, 0);
			func_558(41, 0, 0, 0, 0, -1, 0);
			func_1091(8);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_556(49, 0, 0, 0, 0, 0, 1, 0);
			func_558(49, 0, 0, 0, 0, -1, 0);
			func_1092(16);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_556(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_01"), func_1093(1), 0, -1, 0);
			func_1094(1);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_556(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_02"), func_1093(2), 0, -1, 0);
			func_1094(2);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_556(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_03"), func_1093(4), 0, -1, 0);
			func_1094(4);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_556(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_04"), func_1093(8), 0, -1, 0);
			func_1094(8);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_556(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_05"), func_1093(16), 0, -1, 0);
			func_1094(16);
			break;
	}
}

void func_584(int iParam0)
{
	if (func_1095() == 1)
	{
		if (func_548(39))
		{
			func_549(342, 0);
		}
		else
		{
			func_549(343, 0);
			func_1090(1);
		}
	}
	if (func_1095() >= 30)
	{
		func_549(344, 0);
	}
	func_556(39, 0, 0, 0, 0, 0, -1, 0);
	func_558(39, 0, 0, func_1095(), 30, 1, 0);
}

void func_585(int iParam0)
{
	if (func_1096() == 1)
	{
		if (func_548(49))
		{
			func_549(409, 0);
		}
		else
		{
			func_549(410, 0);
			func_1092(1);
		}
	}
	if (func_1096() >= 10)
	{
		func_549(411, 0);
	}
	func_556(49, 0, 0, 0, 0, 0, -1, 0);
	func_558(49, 0, 0, func_1096(), 10, 1, 0);
}

void func_586(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_01"), 1);
			func_549(437, 0);
			func_549(440, 0);
			func_1097(GET_HASH_KEY("TAXIDERMY_ORDER_01"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			func_556(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			func_558(51, 0, 0, sVar0, func_1051(GET_HASH_KEY("TAXIDERMY_ORDER_01"), 20), 1, 0);
			func_1089(1);
			func_216(-748969569, 0, 0);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_02"), 1);
			func_1097(GET_HASH_KEY("TAXIDERMY_ORDER_02"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			func_556(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			func_558(51, 0, 0, sVar0, func_1051(GET_HASH_KEY("TAXIDERMY_ORDER_02"), 20), 1, 0);
			func_1089(8);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_03"), 1);
			func_1097(GET_HASH_KEY("TAXIDERMY_ORDER_03"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			func_556(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			func_558(51, 0, 0, sVar0, func_1051(GET_HASH_KEY("TAXIDERMY_ORDER_03"), 20), 1, 0);
			func_1089(64);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_04"), 1);
			func_1097(GET_HASH_KEY("TAXIDERMY_ORDER_04"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			func_556(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			func_558(51, 0, 0, sVar0, func_1051(GET_HASH_KEY("TAXIDERMY_ORDER_04"), 20), 1, 0);
			func_1089(512);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_05"), 1);
			func_549(438, 0);
			func_1097(GET_HASH_KEY("TAXIDERMY_ORDER_05"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			func_556(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			func_558(51, 0, 0, sVar0, func_1051(GET_HASH_KEY("TAXIDERMY_ORDER_05"), 20), 1, 0);
			func_1089(32768);
			break;
		default:
			func_549(439, 0);
			break;
	}
}

void func_587()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(GET_HASH_KEY("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(GET_HASH_KEY("SP_CHAL_EXPL_ROOT"), GET_HASH_KEY("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_588(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_273() == -1)
	{
		if (!func_548(43))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_LITTLE"))
			{
				func_549(348, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_REDDISH"))
			{
				func_549(350, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_SNOWY"))
			{
				func_549(352, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_549(400, 0);
			}
		}
		else if (func_560(iParam0, 412399755))
		{
			func_1098(GET_HASH_KEY("EXOTIC_STAGE_01"));
			if (func_1099() == 0)
			{
				func_781(0, 10);
				iVar1 = func_1100(iParam0, iParam1, 1);
				if (((iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_1101(iParam0) < func_1102(iParam0))
					{
						func_556(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						func_558(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_548(44))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_HERON_FEATHER"))
			{
				func_549(354, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_549(399, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_549(401, 0);
			}
		}
		else if (func_560(iParam0, 709057512))
		{
			func_1098(GET_HASH_KEY("EXOTIC_STAGE_02"));
			if (func_1099() == 1)
			{
				func_781(0, 10);
				iVar1 = func_1100(iParam0, iParam1, 2);
				if ((iParam0 == GET_HASH_KEY("PROVISION_HERON_FEATHER") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_1101(iParam0) < func_1102(iParam0))
					{
						func_556(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						func_558(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_548(45))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_GATOR_EGG"))
			{
				func_549(359, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_549(394, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_549(395, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_GHOST"))
			{
				func_549(398, 0);
			}
		}
		else if (func_560(iParam0, -1478961327))
		{
			func_1098(GET_HASH_KEY("EXOTIC_STAGE_03"));
			if (func_1099() == 2)
			{
				func_781(0, 10);
				iVar1 = func_1100(iParam0, iParam1, 4);
				if (iParam0 == GET_HASH_KEY("PROVISION_GATOR_EGG"))
				{
					if (!func_1103(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0)) >= 25)
					{
						func_1104(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0), 1);
						func_1046(48);
					}
					if (func_1101(iParam0) < func_1102(iParam0))
					{
						func_556(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_558(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_1101(iParam0) < func_1102(iParam0))
					{
						func_556(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_558(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_548(46))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_SPOONBILL_FEATHER"))
			{
				func_549(356, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_549(402, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_549(404, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_549(406, 0);
			}
		}
		else if (func_560(iParam0, -1238404098))
		{
			func_1098(GET_HASH_KEY("EXOTIC_STAGE_04"));
			if (func_1099() == 3)
			{
				func_781(0, 10);
				iVar1 = func_1100(iParam0, iParam1, 8);
				if (((iParam0 == GET_HASH_KEY("PROVISION_SPOONBILL_FEATHER") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_1101(iParam0) < func_1102(iParam0))
					{
						func_556(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						func_558(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_548(47))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_549(396, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_549(397, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_549(405, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_549(403, 0);
			}
		}
		else if (func_560(iParam0, 1160548794))
		{
			func_1098(GET_HASH_KEY("EXOTIC_STAGE_05"));
			if (func_1099() == 4)
			{
				func_781(0, 10);
				iVar1 = func_1100(iParam0, iParam1, 16);
				if (((iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_1101(iParam0) < func_1102(iParam0))
					{
						func_556(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						func_558(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_589(int iParam0)
{
	int iVar0;

	if (iParam0 == GET_HASH_KEY("PROVISION_GATOR_EGG"))
	{
		if (!func_1103(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0)) >= 25)
		{
			func_1104(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0), 1);
			func_1046(48);
		}
	}
}

void func_590(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, GET_HASH_KEY("TAXIDERMY"), GET_HASH_KEY("TAXIDERMY_ORDER"));
		if (func_592(func_1105(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1106(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1107(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_591(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_273() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_582(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case GET_HASH_KEY("MONEY_ONE_DOLLAR"):
			func_582(GET_HASH_KEY("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_FIVE_DOLLARS"):
			func_582(GET_HASH_KEY("REWARD_FIVE_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_TEN_DOLLARS"):
			func_582(GET_HASH_KEY("REWARD_TEN_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_BILLFOLD"):
			func_582(GET_HASH_KEY("REWARD_BILLFOLD"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_BILLFOLD_SML"):
			func_582(GET_HASH_KEY("REWARD_BILLFOLD_SML"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_BILLSTACK"):
			func_582(GET_HASH_KEY("REWARD_BILLSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COIN"):
			func_582(GET_HASH_KEY("REWARD_COIN"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINPURSE"):
			func_582(GET_HASH_KEY("REWARD_COINPURSE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINSACK"):
			func_582(GET_HASH_KEY("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINSTACK"):
			func_582(GET_HASH_KEY("REWARD_COINS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_MONEYCLIP"):
			func_582(GET_HASH_KEY("REWARD_MONEYCLIP"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_MONEYSTACK"):
			func_582(GET_HASH_KEY("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_MONEYSTACK_LARGE"):
			if (!func_1108())
			{
				func_582(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case GET_HASH_KEY("MONEY_COINCUP_SM"):
			func_582(GET_HASH_KEY("REWARD_COINCUP_SM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINCUP_LG"):
			func_582(GET_HASH_KEY("REWARD_COINCUP_LG"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("CURRENCY_CASH"):
			func_582(GET_HASH_KEY("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_CARD_SET_COMMON"):
			func_582(GET_HASH_KEY("REWARD_CARD_SET_COMMON"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_CARD_SET_RARE"):
			func_582(GET_HASH_KEY("REWARD_CARD_SET_RARE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_CARD_SET_ALL"):
			func_582(GET_HASH_KEY("REWARD_CARD_SET_ALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_RARE_FISH"):
			func_582(GET_HASH_KEY("REWARD_RARE_FISH"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_1"):
			func_582(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_2"):
			func_582(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_3"):
			func_582(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_4"):
			func_582(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_5"):
			func_582(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_CALLOWAY_LETTER"):
			func_582(GET_HASH_KEY("REWARD_CALLOWAY_LETTER"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

bool func_592(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_538(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_559(iParam0);
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
		if (!func_1109(iParam0, 1))
		{
			return false;
		}
	}
	return func_542(iParam0, 0, bParam2) >= iParam1;
}

void func_593(int iParam0)
{
	if (func_548(41))
	{
		func_549(363, 0);
	}
	else
	{
		func_549(362, 0);
	}
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			func_1110(GET_HASH_KEY("LEGENDARY_FISH_01"));
			func_1111(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_01"));
			func_1112(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_01"));
			func_781(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			func_1110(GET_HASH_KEY("LEGENDARY_FISH_02"));
			func_1111(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_02"));
			func_1112(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_02"));
			func_781(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			func_1110(GET_HASH_KEY("LEGENDARY_FISH_03"));
			func_1111(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_03"));
			func_1112(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_03"));
			func_781(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			func_1110(GET_HASH_KEY("LEGENDARY_FISH_04"));
			func_1111(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_04"));
			func_1112(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_04"));
			func_781(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			func_1110(GET_HASH_KEY("LEGENDARY_FISH_05"));
			func_1111(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_05"));
			func_1112(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_05"));
			func_781(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_MUSKIE_LEGENDARY"):
			func_1110(GET_HASH_KEY("LEGENDARY_FISH_06"));
			func_1111(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_06"));
			func_1112(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_06"));
			func_781(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_PERCH_LEGENDARY"):
			func_1110(GET_HASH_KEY("LEGENDARY_FISH_07"));
			func_1111(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_07"));
			func_1112(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_07"));
			func_781(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			func_1110(GET_HASH_KEY("LEGENDARY_FISH_08"));
			func_1111(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_08"));
			func_1112(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_08"));
			func_781(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			func_1110(GET_HASH_KEY("LEGENDARY_FISH_09"));
			func_1111(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_09"));
			func_1112(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_09"));
			func_781(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			func_1110(GET_HASH_KEY("LEGENDARY_FISH_10"));
			func_1111(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_10"));
			func_1112(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_10"));
			func_781(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			func_1110(GET_HASH_KEY("LEGENDARY_FISH_11"));
			func_1111(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_11"));
			func_1112(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_11"));
			func_781(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			func_1110(GET_HASH_KEY("LEGENDARY_FISH_12"));
			func_1111(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_12"));
			func_1112(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_12"));
			func_781(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			func_1110(GET_HASH_KEY("LEGENDARY_FISH_13"));
			func_1111(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_13"));
			func_1112(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_13"));
			func_781(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			func_1110(GET_HASH_KEY("LEGENDARY_FISH_14"));
			func_1111(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_14"));
			func_1112(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

void func_594(int iParam0, int iParam1)
{
	var uVar0;

	func_1113(iParam0, iParam1, &uVar0);
}

int func_595(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_1036(iParam1, 1, 0) };
		iParam3 = func_1114(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1116(iParam1, iParam2, func_1115(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1117(1, (func_273() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946804.f_57[func_1115(iParam3, 1) /*11*/])
			{
				func_1118(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1119(32768) && iParam1 != Global_1946804.f_57[func_1115(iParam3, 1) /*11*/])
			{
				func_1120();
				func_1118(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_1118(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1121(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_1118(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_405(0);
			func_1122(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_1118(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_596(int iParam0, bool bParam1)
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
	iVar18 = func_1007(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_1007(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_1123("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1124(&Var3, iVar2, iVar0, iVar1))
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
						func_1125(iVar0);
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

void func_597()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_598()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_599()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_600()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_601()
{
	func_1126();
	func_1127();
	func_1128();
}

void func_602(int iParam0, int iParam1, bool bParam2)
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

void func_603(int iParam0, bool bParam1)
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
	func_1059(MISC::VAR_STRING(2, sVar1), MISC::VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar3), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_604(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_605(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_606(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_607(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_608(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_609(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_610(int iParam0)
{
	if (!func_538(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_611(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_1047(iParam0, &iVar0, &iVar1);
	if (!func_1048(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1129(iParam0, 1024))
	{
		return;
	}
	func_1049(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_612(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_1047(iParam0, &iVar0, &iVar1);
	if (!func_1048(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1129(iParam0, 1024))
	{
		return;
	}
	func_1049(iVar0, iVar1);
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

int func_613()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_1044())
	{
		return func_614();
	}
	iVar4 = (func_1044() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1044())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_1130(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1045(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_614()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_1044());
	return func_1045(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_615(int iParam0)
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

bool func_616(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_538(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_1036(iParam0, 0, 1) };
	Var5 = { func_1071(iParam0, Var0, Var0.f_4, 0) };
	return func_1131(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_617(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_273() != -1)
	{
		return;
	}
	switch (func_564(iParam0))
	{
		case 81053684:
			if (iParam0 == GET_HASH_KEY("KIT_BANDANA") && func_1132(81053684, 0) <= 0)
			{
				func_1118(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == GET_HASH_KEY("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == GET_HASH_KEY("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				func_1118(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1133(iParam0);
			if (func_1134(iVar0))
			{
				func_1135(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_1118(30, iParam0, 0, 0, 0);
			}
			if (func_1136() == -2125499975 || func_1136() == -449205311)
			{
				switch (iParam0)
				{
					case GET_HASH_KEY("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case GET_HASH_KEY("CLOTHING_GUNSLINGER_OUTFIT"):
						func_1118(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_1136() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						func_1118(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1137(-525676072, 0))
			{
				if (func_1138(-525676072, &iVar1))
				{
					func_1118(33, iVar1, 0, 0, 0);
				}
			}
			func_1118(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == GET_HASH_KEY("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == GET_HASH_KEY("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!func_1139(GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_595(Global_35, iParam0, 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_563(24);
		if (func_596(&iVar2, 0))
		{
			func_569(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_618(int iParam0)
{
	if (func_560(iParam0, 943695443))
	{
		func_1140(0, iParam0);
	}
	else if (func_560(iParam0, -2096528786))
	{
		func_1140(1, iParam0);
	}
	else if (func_560(iParam0, -1094167013))
	{
		func_1140(2, iParam0);
	}
	else if (func_560(iParam0, 1936654645))
	{
		func_1140(3, iParam0);
	}
	else if (func_560(iParam0, 1306489306))
	{
		func_1140(4, iParam0);
	}
	else if (fun