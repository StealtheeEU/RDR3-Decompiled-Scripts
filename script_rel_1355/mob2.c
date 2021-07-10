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
	struct<108> Local_14 = { 0, 0, 0, 1, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 1, 0, 0, 3 } ;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	struct<4> Local_129[3];
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	struct<90> Local_150 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254[2] = { 0, 0 };
	int iLocal_257 = 0;
	int iLocal_258[5] = { 0, 0, 0, 0, 0 };
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267[3] = { 0, 0, 0 };
	int iLocal_271[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	struct<2> Local_288[4];
	struct<21> Local_297[20];
	vector3 vLocal_718 = { 0f, 0f, 0f };
	vector3 vLocal_721 = { 0f, 0f, 0f };
	vector3 vLocal_724 = { 0f, 0f, 0f };
	vector3 vLocal_727 = { 0f, 0f, 0f };
	vector3 vLocal_730 = { 0f, 0f, 0f };
	vector3 vLocal_733 = { 0f, 0f, 0f };
	vector3 vLocal_736 = { 0f, 0f, 0f };
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	vector3 vLocal_742 = { 0f, 0f, 0f };
	vector3 vLocal_745 = { 0f, 0f, 0f };
	vector3 vLocal_748 = { 0f, 0f, 0f };
	vector3 vLocal_751 = { 0f, 0f, 0f };
	vector3 vLocal_754 = { 0f, 0f, 0f };
	vector3 vLocal_757 = { 0f, 0f, 0f };
	vector3 vLocal_760 = { 0f, 0f, 0f };
	vector3 vLocal_763 = { 0f, 0f, 0f };
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	vector3 vLocal_772[8] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_797 = 0;
	int iLocal_798 = 0;
	int iLocal_799 = 0;
	int iLocal_800 = 0;
	float fLocal_801[6] = { 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_808 = 0f;
	float fLocal_809 = 0f;
	float fLocal_810 = 0f;
	float fLocal_811 = 0f;
	float fLocal_812[5] = { 0f, 0f, 0f, 0f, 0f };
	float fLocal_818 = 0f;
	int iLocal_819 = 0;
	char* sLocal_820 = NULL;
	char* sLocal_821 = NULL;
	char* sLocal_822 = NULL;
	char* sLocal_823 = NULL;
	char* sLocal_824 = NULL;
	char* sLocal_825 = NULL;
	char* sLocal_826 = NULL;
	char* sLocal_827 = NULL;
	char* sLocal_828 = NULL;
	char* sLocal_829 = NULL;
	char* sLocal_830 = NULL;
	char* sLocal_831 = NULL;
	char* sLocal_832 = NULL;
	char* sLocal_833 = NULL;
	char* sLocal_834 = NULL;
	char* sLocal_835 = NULL;
	char* sLocal_836 = NULL;
	char* sLocal_837 = NULL;
	char* sLocal_838 = NULL;
	char* sLocal_839 = NULL;
	char* sLocal_840 = NULL;
	char* sLocal_841 = NULL;
	char* sLocal_842 = NULL;
	char* sLocal_843 = NULL;
	char* sLocal_844 = NULL;
	char* sLocal_845 = NULL;
	char* sLocal_846 = NULL;
	char* sLocal_847 = NULL;
	char* sLocal_848 = NULL;
	char* sLocal_849 = NULL;
	char* sLocal_850 = NULL;
	char* sLocal_851 = NULL;
	char* sLocal_852 = NULL;
	char* sLocal_853 = NULL;
	struct<20> Local_854[32];
	float fLocal_1495 = 0f;
	float fLocal_1496 = 0f;
	float fLocal_1497 = 0f;
	float fLocal_1498 = 0f;
	int iLocal_1499[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1505[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1511[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1517 = 0;
	int iLocal_1518 = 0;
	int iLocal_1519 = 0;
	int iLocal_1520 = 0;
	int iLocal_1521 = 0;
	int iLocal_1522 = 0;
	int iLocal_1523 = 0;
	int iLocal_1524 = 0;
	int iLocal_1525 = 0;
	int iLocal_1526 = 0;
	int iLocal_1527 = 0;
	int iLocal_1528 = 0;
	int iLocal_1529 = 0;
	int iLocal_1530 = 0;
	int iLocal_1531 = 0;
	int iLocal_1532 = 0;
	int iLocal_1533 = 0;
	int iLocal_1534 = 0;
	int iLocal_1535 = 0;
	int iLocal_1536 = 0;
	bool bLocal_1537 = false;
	bool bLocal_1538 = false;
	int iLocal_1539[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1545[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_1552 = 0;
	int iLocal_1553 = 0;
	var uLocal_1554 = 0;
	int iLocal_1555 = 0;
	int iLocal_1556 = 0;
	int iLocal_1557 = 0;
	int iLocal_1558 = 0;
	int iLocal_1559 = 0;
	int iLocal_1560 = 0;
	int iLocal_1561 = 0;
	int iLocal_1562 = 0;
	int iLocal_1563 = 0;
	int iLocal_1564[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1570 = 0;
	int iLocal_1571 = 0;
	int iLocal_1572 = 0;
	int iLocal_1573 = 0;
	int iLocal_1574 = 0;
	int iLocal_1575[4] = { 0, 0, 0, 0 };
	int iLocal_1580[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1597[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1613 = 0;
	int iLocal_1614 = 0;
	int iLocal_1615 = 0;
	int iLocal_1616 = 0;
	int iLocal_1617 = 0;
	int iLocal_1618 = 0;
	int iLocal_1619 = 0;
	int iLocal_1620 = 0;
	int iLocal_1621 = 0;
	int iLocal_1622[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1628 = 0;
	int iLocal_1629 = 0;
	int iLocal_1630[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_1637[3] = { 0, 0, 0 };
	bool bLocal_1641 = false;
	bool bLocal_1642 = false;
	bool bLocal_1643 = false;
	bool bLocal_1644 = false;
	bool bLocal_1645 = false;
	bool bLocal_1646 = false;
	bool bLocal_1647 = false;
	bool bLocal_1648 = false;
	bool bLocal_1649 = false;
	bool bLocal_1650 = false;
	bool bLocal_1651 = false;
	bool bLocal_1652 = false;
	bool bLocal_1653 = false;
	int iLocal_1654 = 0;
	int iLocal_1655[2] = { 0, 0 };
	int iLocal_1658 = 0;
	int iLocal_1659 = 0;
	int iLocal_1660 = 0;
	int iLocal_1661 = 0;
	int iLocal_1662 = 0;
	int iLocal_1663 = 0;
	int iLocal_1664 = 0;
	int iLocal_1665 = 0;
	int iLocal_1666 = 0;
	int iLocal_1667 = 0;
	int iLocal_1668 = 0;
	int iLocal_1669 = 0;
	int iLocal_1670 = 0;
	int iLocal_1671 = 0;
	int iLocal_1672 = 0;
	int iLocal_1673 = 0;
	int iLocal_1674 = 0;
	int iLocal_1675 = 0;
	int iLocal_1676 = 0;
	int iLocal_1677 = 0;
	int iLocal_1678 = 0;
	int iLocal_1679 = 0;
	int iLocal_1680 = 0;
	int iLocal_1681 = 0;
	var uLocal_1682[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1704[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1710[4] = { 0, 0, 0, 0 };
	int iLocal_1715 = 0;
	int iLocal_1716 = 0;
	int iLocal_1717 = 0;
	int iLocal_1718 = 0;
	int iLocal_1719 = 0;
	int iLocal_1720 = 0;
	int iLocal_1721 = 0;
	var uLocal_1722[6] = { 0, 0, 0, 0, 0, 0 };
	struct<28> Local_1729[6];
	var uLocal_1898[3] = { 0, 0, 0 };
	struct<28> Local_1902[3];
	int iLocal_1987 = 0;
	int iLocal_1988 = 0;
	int iLocal_1989 = 0;
	int iLocal_1990 = 0;
	int iLocal_1991 = 0;
	int iLocal_1992 = 0;
	int iLocal_1993 = 0;
	int iLocal_1994 = 0;
	int iLocal_1995 = 0;
	int iLocal_1996 = 0;
	int iLocal_1997 = 0;
	int iLocal_1998 = 0;
	int iLocal_1999 = 0;
	int iLocal_2000 = 0;
	int iLocal_2001 = 0;
	int iLocal_2002 = 0;
	int iLocal_2003 = 0;
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
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
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
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	vector3 vLocal_2049[6] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_2068[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
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
	var uLocal_2096 = 5;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
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
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
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
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
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
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
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
	struct<4> Local_2190 = { 0, 0, 0, 0 } ;
	struct<4> Local_2194[5];
	struct<4> Local_2215 = { 0, 0, 0, 0 } ;
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
	vector3 vLocal_2235 = { 0f, 0f, 0f };
	var uLocal_2238 = 0;
	var uLocal_2239 = 27;
	var uLocal_2240 = 8;
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
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = -1;
	var uLocal_2262 = 8;
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
	var uLocal_2283 = -1;
	var uLocal_2284 = 8;
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
	var uLocal_2305 = -1;
	var uLocal_2306 = 8;
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
	var uLocal_2327 = -1;
	var uLocal_2328 = 8;
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
	var uLocal_2349 = -1;
	var uLocal_2350 = 8;
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
	var uLocal_2371 = -1;
	var uLocal_2372 = 8;
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
	var uLocal_2393 = -1;
	var uLocal_2394 = 8;
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
	var uLocal_2415 = -1;
	var uLocal_2416 = 8;
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
	var uLocal_2437 = -1;
	var uLocal_2438 = 8;
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
	var uLocal_2459 = -1;
	var uLocal_2460 = 8;
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
	var uLocal_2481 = -1;
	var uLocal_2482 = 8;
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
	var uLocal_2503 = -1;
	var uLocal_2504 = 8;
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
	var uLocal_2525 = -1;
	var uLocal_2526 = 8;
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
	var uLocal_2547 = -1;
	var uLocal_2548 = 8;
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
	var uLocal_2569 = -1;
	var uLocal_2570 = 8;
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
	var uLocal_2591 = -1;
	var uLocal_2592 = 8;
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
	var uLocal_2613 = -1;
	var uLocal_2614 = 8;
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
	var uLocal_2635 = -1;
	var uLocal_2636 = 8;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
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
	var uLocal_2657 = -1;
	var uLocal_2658 = 8;
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
	var uLocal_2679 = -1;
	var uLocal_2680 = 8;
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
	var uLocal_2700 = 0;
	var uLocal_2701 = -1;
	var uLocal_2702 = 8;
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
	var uLocal_2723 = -1;
	var uLocal_2724 = 8;
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
	var uLocal_2745 = -1;
	var uLocal_2746 = 8;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
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
	var uLocal_2767 = -1;
	var uLocal_2768 = 8;
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
	var uLocal_2789 = -1;
	var uLocal_2790 = 8;
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
	var uLocal_2811 = -1;
	var uLocal_2812 = 8;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
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
	var uLocal_2833 = -1;
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
	var uLocal_2872 = 2;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 60;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
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
	var uLocal_2951 = 0;
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
	var uLocal_3018 = 0;
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
	var uLocal_3057 = 40;
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
	var uLocal_3085 = 0;
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
	var uLocal_3152 = 0;
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
	var uLocal_3219 = 0;
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
	var uLocal_3258 = 20;
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
	var uLocal_3286 = 0;
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
	var uLocal_3319 = 14;
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
	var uLocal_3353 = 0;
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
	var uLocal_3364 = 60;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = 20;
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
	var uLocal_3420 = 0;
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
	var uLocal_3436 = 20;
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
	var uLocal_3487 = 0;
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
	var uLocal_3503 = 20;
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
	var uLocal_3554 = 0;
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
	var uLocal_3570 = 20;
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
	var uLocal_3621 = 0;
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
	var uLocal_3637 = 20;
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
	var uLocal_3688 = 0;
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
	var uLocal_3704 = 20;
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
	var uLocal_3755 = 0;
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
	var uLocal_3771 = 20;
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
	var uLocal_3822 = 0;
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
	var uLocal_3838 = 20;
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
	var uLocal_3889 = 0;
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
	var uLocal_3905 = 20;
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
	var uLocal_3956 = 0;
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
	var uLocal_3972 = 20;
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
	var uLocal_4023 = 0;
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
	var uLocal_4039 = 20;
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
	var uLocal_4090 = 0;
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
	var uLocal_4106 = 20;
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
	var uLocal_4157 = 0;
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
	var uLocal_4173 = 20;
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
	var uLocal_4224 = 0;
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
	var uLocal_4240 = 20;
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
	var uLocal_4291 = 0;
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
	var uLocal_4307 = 20;
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
	var uLocal_4358 = 0;
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
	var uLocal_4374 = 20;
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
	var uLocal_4425 = 0;
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
	var uLocal_4441 = 20;
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
	var uLocal_4492 = 0;
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
	var uLocal_4508 = 20;
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
	var uLocal_4559 = 0;
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
	var uLocal_4575 = 20;
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
	var uLocal_4626 = 0;
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
	var uLocal_4642 = 20;
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
	var uLocal_4693 = 0;
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
	var uLocal_4709 = 20;
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
	var uLocal_4760 = 0;
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
	var uLocal_4776 = 20;
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
	var uLocal_4827 = 0;
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
	var uLocal_4843 = 20;
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
	var uLocal_4894 = 0;
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
	var uLocal_4910 = 20;
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
	var uLocal_4961 = 0;
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
	var uLocal_4977 = 20;
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
	var uLocal_5028 = 0;
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
	var uLocal_5044 = 20;
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
	var uLocal_5095 = 0;
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
	var uLocal_5111 = 20;
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
	var uLocal_5162 = 0;
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
	var uLocal_5178 = 20;
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
	var uLocal_5229 = 0;
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
	var uLocal_5245 = 20;
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
	var uLocal_5296 = 0;
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
	var uLocal_5312 = 20;
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
	var uLocal_5363 = 0;
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
	var uLocal_5379 = 20;
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
	var uLocal_5430 = 0;
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
	var uLocal_5446 = 20;
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
	var uLocal_5497 = 0;
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
	var uLocal_5513 = 20;
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
	var uLocal_5564 = 0;
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
	var uLocal_5580 = 20;
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
	var uLocal_5631 = 0;
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
	var uLocal_5647 = 20;
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
	var uLocal_5698 = 0;
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
	var uLocal_5714 = 20;
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
	var uLocal_5765 = 0;
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
	var uLocal_5781 = 20;
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
	var uLocal_5832 = 0;
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
	var uLocal_5848 = 20;
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
	var uLocal_5899 = 0;
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
	var uLocal_5915 = 20;
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
	var uLocal_5966 = 0;
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
	var uLocal_5982 = 20;
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
	var uLocal_6033 = 0;
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
	var uLocal_6049 = 20;
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
	var uLocal_6100 = 0;
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
	var uLocal_6116 = 20;
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
	var uLocal_6167 = 0;
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
	var uLocal_6183 = 20;
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
	var uLocal_6234 = 0;
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
	var uLocal_6250 = 20;
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
	var uLocal_6301 = 0;
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
	var uLocal_6317 = 20;
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
	var uLocal_6368 = 0;
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
	var uLocal_6384 = 20;
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
	var uLocal_6435 = 0;
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
	var uLocal_6451 = 20;
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
	var uLocal_6502 = 0;
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
	var uLocal_6518 = 20;
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
	var uLocal_6569 = 0;
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
	var uLocal_6585 = 20;
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
	var uLocal_6636 = 0;
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
	var uLocal_6652 = 20;
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
	var uLocal_6703 = 0;
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
	var uLocal_6719 = 20;
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
	var uLocal_6766 = 0;
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
	var uLocal_6786 = 20;
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
	var uLocal_6807 = 0;
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
	var uLocal_6853 = 20;
	var uLocal_6854 = 0;
	var uLocal_6855 = 0;
	var uLocal_6856 = 0;
	var uLocal_6857 = 0;
	var uLocal_6858 = 0;
	var uLocal_6859 = 0;
	var uLocal_6860 = 0;
	var uLocal_6861 = 0;
	var uLocal_6862 = 0;
	var uLocal_6863 = 0;
	var uLocal_6864 = 0;
	var uLocal_6865 = 0;
	var uLocal_6866 = 0;
	var uLocal_6867 = 0;
	var uLocal_6868 = 0;
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
	var uLocal_6884 = 0;
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
	var uLocal_6905 = 0;
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
	var uLocal_6920 = 20;
	var uLocal_6921 = 0;
	var uLocal_6922 = 0;
	var uLocal_6923 = 0;
	var uLocal_6924 = 0;
	var uLocal_6925 = 0;
	var uLocal_6926 = 0;
	var uLocal_6927 = 0;
	var uLocal_6928 = 0;
	var uLocal_6929 = 0;
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
	var uLocal_6987 = 20;
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
	var uLocal_7042 = 0;
	var uLocal_7043 = 0;
	var uLocal_7044 = 0;
	var uLocal_7045 = 0;
	var uLocal_7046 = 0;
	var uLocal_7047 = 0;
	var uLocal_7048 = 0;
	var uLocal_7049 = 0;
	var uLocal_7050 = 0;
	var uLocal_7051 = 0;
	var uLocal_7052 = 0;
	var uLocal_7053 = 0;
	var uLocal_7054 = 20;
	var uLocal_7055 = 0;
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
	var uLocal_7066 = 0;
	var uLocal_7067 = 0;
	var uLocal_7068 = 0;
	var uLocal_7069 = 0;
	var uLocal_7070 = 0;
	var uLocal_7071 = 0;
	var uLocal_7072 = 0;
	var uLocal_7073 = 0;
	var uLocal_7074 = 0;
	var uLocal_7075 = 0;
	var uLocal_7076 = 0;
	var uLocal_7077 = 0;
	var uLocal_7078 = 0;
	var uLocal_7079 = 0;
	var uLocal_7080 = 0;
	var uLocal_7081 = 0;
	var uLocal_7082 = 0;
	var uLocal_7083 = 0;
	var uLocal_7084 = 0;
	var uLocal_7085 = 0;
	var uLocal_7086 = 0;
	var uLocal_7087 = 0;
	var uLocal_7088 = 0;
	var uLocal_7089 = 0;
	var uLocal_7090 = 0;
	var uLocal_7091 = 0;
	var uLocal_7092 = 0;
	var uLocal_7093 = 0;
	var uLocal_7094 = 0;
	var uLocal_7095 = 0;
	var uLocal_7096 = 0;
	var uLocal_7097 = 0;
	var uLocal_7098 = 0;
	var uLocal_7099 = 0;
	var uLocal_7100 = 0;
	var uLocal_7101 = 0;
	var uLocal_7102 = 0;
	var uLocal_7103 = 0;
	var uLocal_7104 = 0;
	var uLocal_7105 = 0;
	var uLocal_7106 = 0;
	var uLocal_7107 = 0;
	var uLocal_7108 = 0;
	var uLocal_7109 = 0;
	var uLocal_7110 = 0;
	var uLocal_7111 = 0;
	var uLocal_7112 = 0;
	var uLocal_7113 = 0;
	var uLocal_7114 = 0;
	var uLocal_7115 = 0;
	var uLocal_7116 = 0;
	var uLocal_7117 = 0;
	var uLocal_7118 = 0;
	var uLocal_7119 = 0;
	var uLocal_7120 = 0;
	var uLocal_7121 = 20;
	var uLocal_7122 = 0;
	var uLocal_7123 = 0;
	var uLocal_7124 = 0;
	var uLocal_7125 = 0;
	var uLocal_7126 = 0;
	var uLocal_7127 = 0;
	var uLocal_7128 = 0;
	var uLocal_7129 = 0;
	var uLocal_7130 = 0;
	var uLocal_7131 = 0;
	var uLocal_7132 = 0;
	var uLocal_7133 = 0;
	var uLocal_7134 = 0;
	var uLocal_7135 = 0;
	var uLocal_7136 = 0;
	var uLocal_7137 = 0;
	var uLocal_7138 = 0;
	var uLocal_7139 = 0;
	var uLocal_7140 = 0;
	var uLocal_7141 = 0;
	var uLocal_7142 = 0;
	var uLocal_7143 = 0;
	var uLocal_7144 = 0;
	var uLocal_7145 = 0;
	var uLocal_7146 = 0;
	var uLocal_7147 = 0;
	var uLocal_7148 = 0;
	var uLocal_7149 = 0;
	var uLocal_7150 = 0;
	var uLocal_7151 = 0;
	var uLocal_7152 = 0;
	var uLocal_7153 = 0;
	var uLocal_7154 = 0;
	var uLocal_7155 = 0;
	var uLocal_7156 = 0;
	var uLocal_7157 = 0;
	var uLocal_7158 = 0;
	var uLocal_7159 = 0;
	var uLocal_7160 = 0;
	var uLocal_7161 = 0;
	var uLocal_7162 = 0;
	var uLocal_7163 = 0;
	var uLocal_7164 = 0;
	var uLocal_7165 = 0;
	var uLocal_7166 = 0;
	var uLocal_7167 = 0;
	var uLocal_7168 = 0;
	var uLocal_7169 = 0;
	var uLocal_7170 = 0;
	var uLocal_7171 = 0;
	var uLocal_7172 = 0;
	var uLocal_7173 = 0;
	var uLocal_7174 = 0;
	var uLocal_7175 = 0;
	var uLocal_7176 = 0;
	var uLocal_7177 = 0;
	var uLocal_7178 = 0;
	var uLocal_7179 = 0;
	var uLocal_7180 = 0;
	var uLocal_7181 = 0;
	var uLocal_7182 = 0;
	var uLocal_7183 = 0;
	var uLocal_7184 = 0;
	var uLocal_7185 = 0;
	var uLocal_7186 = 0;
	var uLocal_7187 = 0;
	var uLocal_7188 = 20;
	var uLocal_7189 = 0;
	var uLocal_7190 = 0;
	var uLocal_7191 = 0;
	var uLocal_7192 = 0;
	var uLocal_7193 = 0;
	var uLocal_7194 = 0;
	var uLocal_7195 = 0;
	var uLocal_7196 = 0;
	var uLocal_7197 = 0;
	var uLocal_7198 = 0;
	var uLocal_7199 = 0;
	var uLocal_7200 = 0;
	var uLocal_7201 = 0;
	var uLocal_7202 = 0;
	var uLocal_7203 = 0;
	var uLocal_7204 = 0;
	var uLocal_7205 = 0;
	var uLocal_7206 = 0;
	var uLocal_7207 = 0;
	var uLocal_7208 = 0;
	var uLocal_7209 = 0;
	var uLocal_7210 = 0;
	var uLocal_7211 = 0;
	var uLocal_7212 = 0;
	var uLocal_7213 = 0;
	var uLocal_7214 = 0;
	var uLocal_7215 = 0;
	var uLocal_7216 = 0;
	var uLocal_7217 = 0;
	var uLocal_7218 = 0;
	var uLocal_7219 = 0;
	var uLocal_7220 = 0;
	var uLocal_7221 = 0;
	var uLocal_7222 = 0;
	var uLocal_7223 = 0;
	var uLocal_7224 = 0;
	var uLocal_7225 = 0;
	var uLocal_7226 = 0;
	var uLocal_7227 = 0;
	var uLocal_7228 = 0;
	var uLocal_7229 = 0;
	var uLocal_7230 = 0;
	var uLocal_7231 = 0;
	var uLocal_7232 = 0;
	var uLocal_7233 = 0;
	var uLocal_7234 = 0;
	var uLocal_7235 = 0;
	var uLocal_7236 = 0;
	var uLocal_7237 = 0;
	var uLocal_7238 = 0;
	var uLocal_7239 = 0;
	var uLocal_7240 = 0;
	var uLocal_7241 = 0;
	var uLocal_7242 = 0;
	var uLocal_7243 = 0;
	var uLocal_7244 = 0;
	var uLocal_7245 = 0;
	var uLocal_7246 = 0;
	var uLocal_7247 = 0;
	var uLocal_7248 = 0;
	var uLocal_7249 = 0;
	var uLocal_7250 = 0;
	var uLocal_7251 = 0;
	var uLocal_7252 = 0;
	var uLocal_7253 = 0;
	var uLocal_7254 = 0;
	var uLocal_7255 = 20;
	var uLocal_7256 = 0;
	var uLocal_7257 = 0;
	var uLocal_7258 = 0;
	var uLocal_7259 = 0;
	var uLocal_7260 = 0;
	var uLocal_7261 = 0;
	var uLocal_7262 = 0;
	var uLocal_7263 = 0;
	var uLocal_7264 = 0;
	var uLocal_7265 = 0;
	var uLocal_7266 = 0;
	var uLocal_7267 = 0;
	var uLocal_7268 = 0;
	var uLocal_7269 = 0;
	var uLocal_7270 = 0;
	var uLocal_7271 = 0;
	var uLocal_7272 = 0;
	var uLocal_7273 = 0;
	var uLocal_7274 = 0;
	var uLocal_7275 = 0;
	var uLocal_7276 = 0;
	var uLocal_7277 = 0;
	var uLocal_7278 = 0;
	var uLocal_7279 = 0;
	var uLocal_7280 = 0;
	var uLocal_7281 = 0;
	var uLocal_7282 = 0;
	var uLocal_7283 = 0;
	var uLocal_7284 = 0;
	var uLocal_7285 = 0;
	var uLocal_7286 = 0;
	var uLocal_7287 = 0;
	var uLocal_7288 = 0;
	var uLocal_7289 = 0;
	var uLocal_7290 = 0;
	var uLocal_7291 = 0;
	var uLocal_7292 = 0;
	var uLocal_7293 = 0;
	var uLocal_7294 = 0;
	var uLocal_7295 = 0;
	var uLocal_7296 = 0;
	var uLocal_7297 = 0;
	var uLocal_7298 = 0;
	var uLocal_7299 = 0;
	var uLocal_7300 = 0;
	var uLocal_7301 = 0;
	var uLocal_7302 = 0;
	var uLocal_7303 = 0;
	var uLocal_7304 = 0;
	var uLocal_7305 = 0;
	var uLocal_7306 = 0;
	var uLocal_7307 = 0;
	var uLocal_7308 = 0;
	var uLocal_7309 = 0;
	var uLocal_7310 = 0;
	var uLocal_7311 = 0;
	var uLocal_7312 = 0;
	var uLocal_7313 = 0;
	var uLocal_7314 = 0;
	var uLocal_7315 = 0;
	var uLocal_7316 = 0;
	var uLocal_7317 = 0;
	var uLocal_7318 = 0;
	var uLocal_7319 = 0;
	var uLocal_7320 = 0;
	var uLocal_7321 = 0;
	var uLocal_7322 = 20;
	var uLocal_7323 = 0;
	var uLocal_7324 = 0;
	var uLocal_7325 = 0;
	var uLocal_7326 = 0;
	var uLocal_7327 = 0;
	var uLocal_7328 = 0;
	var uLocal_7329 = 0;
	var uLocal_7330 = 0;
	var uLocal_7331 = 0;
	var uLocal_7332 = 0;
	var uLocal_7333 = 0;
	var uLocal_7334 = 0;
	var uLocal_7335 = 0;
	var uLocal_7336 = 0;
	var uLocal_7337 = 0;
	var uLocal_7338 = 0;
	var uLocal_7339 = 0;
	var uLocal_7340 = 0;
	var uLocal_7341 = 0;
	var uLocal_7342 = 0;
	var uLocal_7343 = 0;
	var uLocal_7344 = 0;
	var uLocal_7345 = 0;
	var uLocal_7346 = 0;
	var uLocal_7347 = 0;
	var uLocal_7348 = 0;
	var uLocal_7349 = 0;
	var uLocal_7350 = 0;
	var uLocal_7351 = 0;
	var uLocal_7352 = 0;
	var uLocal_7353 = 0;
	var uLocal_7354 = 0;
	var uLocal_7355 = 0;
	var uLocal_7356 = 0;
	var uLocal_7357 = 0;
	var uLocal_7358 = 0;
	var uLocal_7359 = 0;
	var uLocal_7360 = 0;
	var uLocal_7361 = 0;
	var uLocal_7362 = 0;
	var uLocal_7363 = 0;
	var uLocal_7364 = 0;
	var uLocal_7365 = 0;
	var uLocal_7366 = 0;
	var uLocal_7367 = 0;
	var uLocal_7368 = 0;
	var uLocal_7369 = 0;
	var uLocal_7370 = 0;
	var uLocal_7371 = 0;
	var uLocal_7372 = 0;
	var uLocal_7373 = 0;
	var uLocal_7374 = 0;
	var uLocal_7375 = 0;
	var uLocal_7376 = 0;
	var uLocal_7377 = 0;
	var uLocal_7378 = 0;
	var uLocal_7379 = 0;
	var uLocal_7380 = 0;
	var uLocal_7381 = 0;
	var uLocal_7382 = 0;
	var uLocal_7383 = 0;
	var uLocal_7384 = 0;
	var uLocal_7385 = 10;
	var uLocal_7386 = 0;
	var uLocal_7387 = 0;
	var uLocal_7388 = 0;
	var uLocal_7389 = 0;
	var uLocal_7390 = 0;
	var uLocal_7391 = 0;
	var uLocal_7392 = 0;
	var uLocal_7393 = 0;
	var uLocal_7394 = 0;
	var uLocal_7395 = 0;
	var uLocal_7396 = 0;
	var uLocal_7397 = 0;
	var uLocal_7398 = 0;
	var uLocal_7399 = 0;
	var uLocal_7400 = 0;
	var uLocal_7401 = 0;
	var uLocal_7402 = 0;
	var uLocal_7403 = 0;
	var uLocal_7404 = 0;
	var uLocal_7405 = 0;
	var uLocal_7406 = 0;
	var uLocal_7407 = 0;
	var uLocal_7408 = 0;
	var uLocal_7409 = 0;
	var uLocal_7410 = 0;
	var uLocal_7411 = 0;
	var uLocal_7412 = 0;
	var uLocal_7413 = 0;
	var uLocal_7414 = 0;
	var uLocal_7415 = 0;
	var uLocal_7416 = 0;
	var uLocal_7417 = 0;
	var uLocal_7418 = 0;
	var uLocal_7419 = 0;
	var uLocal_7420 = 0;
	var uLocal_7421 = 0;
	var uLocal_7422 = 0;
	var uLocal_7423 = 0;
	var uLocal_7424 = 0;
	var uLocal_7425 = 0;
	var uLocal_7426 = 10;
	var uLocal_7427 = 0;
	var uLocal_7428 = 0;
	var uLocal_7429 = 0;
	var uLocal_7430 = 0;
	var uLocal_7431 = 0;
	var uLocal_7432 = 0;
	var uLocal_7433 = 0;
	var uLocal_7434 = 0;
	var uLocal_7435 = 0;
	var uLocal_7436 = 0;
	var uLocal_7437 = 0;
	var uLocal_7438 = 0;
	var uLocal_7439 = 0;
	var uLocal_7440 = 0;
	var uLocal_7441 = 0;
	var uLocal_7442 = 0;
	var uLocal_7443 = 0;
	var uLocal_7444 = 0;
	var uLocal_7445 = 0;
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
	var uLocal_7456 = 0;
	var uLocal_7457 = 0;
	var uLocal_7458 = 0;
	var uLocal_7459 = 0;
	var uLocal_7460 = 0;
	var uLocal_7461 = 0;
	var uLocal_7462 = 0;
	var uLocal_7463 = 0;
	var uLocal_7464 = 0;
	var uLocal_7465 = 0;
	var uLocal_7466 = 0;
	var uLocal_7467 = 0;
	var uLocal_7468 = 0;
	var uLocal_7469 = 0;
	var uLocal_7470 = 0;
	var uLocal_7471 = 0;
	var uLocal_7472 = 0;
	var uLocal_7473 = 0;
	var uLocal_7474 = 0;
	var uLocal_7475 = 0;
	var uLocal_7476 = 0;
	var uLocal_7477 = 3;
	var uLocal_7478 = 0;
	var uLocal_7479 = 0;
	var uLocal_7480 = 0;
	var uLocal_7481 = 0;
	var uLocal_7482 = 0;
	var uLocal_7483 = 0;
	var uLocal_7484 = 0;
	var uLocal_7485 = 0;
	var uLocal_7486 = 0;
	var uLocal_7487 = 5;
	var uLocal_7488 = 0;
	var uLocal_7489 = 0;
	var uLocal_7490 = 0;
	var uLocal_7491 = 0;
	var uLocal_7492 = 0;
	var uLocal_7493 = 0;
	var uLocal_7494 = 0;
	var uLocal_7495 = 0;
	var uLocal_7496 = 0;
	var uLocal_7497 = 0;
	var uLocal_7498 = 0;
	var uLocal_7499 = 0;
	var uLocal_7500 = 0;
	var uLocal_7501 = 0;
	var uLocal_7502 = 0;
	var uLocal_7503 = 5;
	var uLocal_7504 = 0;
	var uLocal_7505 = 0;
	var uLocal_7506 = 0;
	var uLocal_7507 = 0;
	var uLocal_7508 = 0;
	var uLocal_7509 = 0;
	var uLocal_7510 = 0;
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
	var uLocal_7521 = 0;
	var uLocal_7522 = 0;
	var uLocal_7523 = 0;
	var uLocal_7524 = 5;
	var uLocal_7525 = 0;
	var uLocal_7526 = 0;
	var uLocal_7527 = 0;
	var uLocal_7528 = 0;
	var uLocal_7529 = 0;
	var uLocal_7530 = 0;
	var uLocal_7531 = 0;
	var uLocal_7532 = 0;
	var uLocal_7533 = 0;
	var uLocal_7534 = 0;
	var uLocal_7535 = 0;
	var uLocal_7536 = 0;
	var uLocal_7537 = 0;
	var uLocal_7538 = 0;
	var uLocal_7539 = 0;
	var uLocal_7540 = 0;
	var uLocal_7541 = 0;
	var uLocal_7542 = 0;
	var uLocal_7543 = 0;
	var uLocal_7544 = 0;
	var uLocal_7545 = 0;
	var uLocal_7546 = 0;
	var uLocal_7547 = 0;
	var uLocal_7548 = 24;
	var uLocal_7549 = 0;
	var uLocal_7550 = 0;
	var uLocal_7551 = 0;
	var uLocal_7552 = 0;
	var uLocal_7553 = 0;
	var uLocal_7554 = 0;
	var uLocal_7555 = 0;
	var uLocal_7556 = 0;
	var uLocal_7557 = 0;
	var uLocal_7558 = 0;
	var uLocal_7559 = 0;
	var uLocal_7560 = 0;
	var uLocal_7561 = 0;
	var uLocal_7562 = 0;
	var uLocal_7563 = 0;
	var uLocal_7564 = 0;
	var uLocal_7565 = 0;
	var uLocal_7566 = 0;
	var uLocal_7567 = 0;
	var uLocal_7568 = 0;
	var uLocal_7569 = 0;
	var uLocal_7570 = 0;
	var uLocal_7571 = 0;
	var uLocal_7572 = 0;
	var uLocal_7573 = 0;
	var uLocal_7574 = 0;
	var uLocal_7575 = 0;
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
	var uLocal_7586 = 0;
	var uLocal_7587 = 0;
	var uLocal_7588 = 0;
	var uLocal_7589 = 0;
	var uLocal_7590 = 0;
	var uLocal_7591 = 0;
	var uLocal_7592 = 0;
	var uLocal_7593 = 0;
	var uLocal_7594 = 0;
	var uLocal_7595 = 0;
	var uLocal_7596 = 0;
	var uLocal_7597 = 0;
	var uLocal_7598 = 0;
	var uLocal_7599 = 0;
	var uLocal_7600 = 0;
	var uLocal_7601 = 0;
	var uLocal_7602 = 0;
	var uLocal_7603 = 0;
	var uLocal_7604 = 0;
	var uLocal_7605 = 0;
	var uLocal_7606 = 0;
	var uLocal_7607 = 0;
	var uLocal_7608 = 0;
	var uLocal_7609 = 0;
	var uLocal_7610 = 0;
	var uLocal_7611 = 0;
	var uLocal_7612 = 0;
	var uLocal_7613 = 0;
	var uLocal_7614 = 0;
	var uLocal_7615 = 0;
	var uLocal_7616 = 0;
	var uLocal_7617 = 0;
	var uLocal_7618 = 0;
	var uLocal_7619 = 0;
	var uLocal_7620 = 0;
	var uLocal_7621 = 0;
	var uLocal_7622 = 0;
	var uLocal_7623 = 0;
	var uLocal_7624 = 0;
	var uLocal_7625 = 0;
	var uLocal_7626 = 0;
	var uLocal_7627 = 0;
	var uLocal_7628 = 0;
	var uLocal_7629 = 0;
	var uLocal_7630 = 0;
	var uLocal_7631 = 0;
	var uLocal_7632 = 0;
	var uLocal_7633 = 0;
	var uLocal_7634 = 0;
	var uLocal_7635 = 0;
	var uLocal_7636 = 0;
	var uLocal_7637 = 0;
	var uLocal_7638 = 0;
	var uLocal_7639 = 0;
	var uLocal_7640 = 0;
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
	var uLocal_7651 = 0;
	var uLocal_7652 = 0;
	var uLocal_7653 = 0;
	var uLocal_7654 = 0;
	var uLocal_7655 = 0;
	var uLocal_7656 = 0;
	var uLocal_7657 = 0;
	var uLocal_7658 = 0;
	var uLocal_7659 = 0;
	var uLocal_7660 = 0;
	var uLocal_7661 = 30;
	var uLocal_7662 = 0;
	var uLocal_7663 = 0;
	var uLocal_7664 = 0;
	var uLocal_7665 = 0;
	var uLocal_7666 = 0;
	var uLocal_7667 = 3;
	var uLocal_7668 = 0;
	var uLocal_7669 = 0;
	var uLocal_7670 = 0;
	var uLocal_7671 = 0;
	var uLocal_7672 = -1;
	var uLocal_7673 = 0;
	var uLocal_7674 = 5;
	var uLocal_7675 = 0;
	var uLocal_7676 = 0;
	var uLocal_7677 = 0;
	var uLocal_7678 = 0;
	var uLocal_7679 = 0;
	var uLocal_7680 = 0;
	var uLocal_7681 = 0;
	var uLocal_7682 = 0;
	var uLocal_7683 = 0;
	var uLocal_7684 = 0;
	var uLocal_7685 = 10;
	var uLocal_7686 = 3;
	var uLocal_7687 = 500;
	var uLocal_7688 = 10000;
	var uLocal_7689 = 0;
	var uLocal_7690 = 3;
	var uLocal_7691 = 500;
	var uLocal_7692 = 10000;
	var uLocal_7693 = 0;
	var uLocal_7694 = 3;
	var uLocal_7695 = 500;
	var uLocal_7696 = 10000;
	var uLocal_7697 = 0;
	var uLocal_7698 = 3;
	var uLocal_7699 = 500;
	var uLocal_7700 = 10000;
	var uLocal_7701 = 0;
	var uLocal_7702 = 3;
	var uLocal_7703 = 500;
	var uLocal_7704 = 10000;
	var uLocal_7705 = 0;
	var uLocal_7706 = 3;
	var uLocal_7707 = 500;
	var uLocal_7708 = 10000;
	var uLocal_7709 = 0;
	var uLocal_7710 = 3;
	var uLocal_7711 = 500;
	var uLocal_7712 = 10000;
	var uLocal_7713 = 0;
	var uLocal_7714 = 3;
	var uLocal_7715 = 500;
	var uLocal_7716 = 10000;
	var uLocal_7717 = 0;
	var uLocal_7718 = 3;
	var uLocal_7719 = 500;
	var uLocal_7720 = 10000;
	var uLocal_7721 = 0;
	var uLocal_7722 = 3;
	var uLocal_7723 = 500;
	var uLocal_7724 = 10000;
	var uLocal_7725 = 0;
	var uLocal_7726 = 0;
	var uLocal_7727 = 0;
	var uLocal_7728 = 0;
	var uLocal_7729 = 0;
	var uLocal_7730 = 0;
	var uLocal_7731 = 0;
	var uLocal_7732 = 3;
	var uLocal_7733 = 0;
	var uLocal_7734 = 0;
	var uLocal_7735 = 0;
	var uLocal_7736 = 0;
	var uLocal_7737 = -1;
	var uLocal_7738 = 0;
	var uLocal_7739 = 5;
	var uLocal_7740 = 0;
	var uLocal_7741 = 0;
	var uLocal_7742 = 0;
	var uLocal_7743 = 0;
	var uLocal_7744 = 0;
	var uLocal_7745 = 0;
	var uLocal_7746 = 0;
	var uLocal_7747 = 0;
	var uLocal_7748 = 0;
	var uLocal_7749 = 0;
	var uLocal_7750 = 10;
	var uLocal_7751 = 3;
	var uLocal_7752 = 500;
	var uLocal_7753 = 10000;
	var uLocal_7754 = 0;
	var uLocal_7755 = 3;
	var uLocal_7756 = 500;
	var uLocal_7757 = 10000;
	var uLocal_7758 = 0;
	var uLocal_7759 = 3;
	var uLocal_7760 = 500;
	var uLocal_7761 = 10000;
	var uLocal_7762 = 0;
	var uLocal_7763 = 3;
	var uLocal_7764 = 500;
	var uLocal_7765 = 10000;
	var uLocal_7766 = 0;
	var uLocal_7767 = 3;
	var uLocal_7768 = 500;
	var uLocal_7769 = 10000;
	var uLocal_7770 = 0;
	var uLocal_7771 = 3;
	var uLocal_7772 = 500;
	var uLocal_7773 = 10000;
	var uLocal_7774 = 0;
	var uLocal_7775 = 3;
	var uLocal_7776 = 500;
	var uLocal_7777 = 10000;
	var uLocal_7778 = 0;
	var uLocal_7779 = 3;
	var uLocal_7780 = 500;
	var uLocal_7781 = 10000;
	var uLocal_7782 = 0;
	var uLocal_7783 = 3;
	var uLocal_7784 = 500;
	var uLocal_7785 = 10000;
	var uLocal_7786 = 0;
	var uLocal_7787 = 3;
	var uLocal_7788 = 500;
	var uLocal_7789 = 10000;
	var uLocal_7790 = 0;
	var uLocal_7791 = 0;
	var uLocal_7792 = 0;
	var uLocal_7793 = 0;
	var uLocal_7794 = 0;
	var uLocal_7795 = 0;
	var uLocal_7796 = 0;
	var uLocal_7797 = 3;
	var uLocal_7798 = 0;
	var uLocal_7799 = 0;
	var uLocal_7800 = 0;
	var uLocal_7801 = 0;
	var uLocal_7802 = -1;
	var uLocal_7803 = 0;
	var uLocal_7804 = 5;
	var uLocal_7805 = 0;
	var uLocal_7806 = 0;
	var uLocal_7807 = 0;
	var uLocal_7808 = 0;
	var uLocal_7809 = 0;
	var uLocal_7810 = 0;
	var uLocal_7811 = 0;
	var uLocal_7812 = 0;
	var uLocal_7813 = 0;
	var uLocal_7814 = 0;
	var uLocal_7815 = 10;
	var uLocal_7816 = 3;
	var uLocal_7817 = 500;
	var uLocal_7818 = 10000;
	var uLocal_7819 = 0;
	var uLocal_7820 = 3;
	var uLocal_7821 = 500;
	var uLocal_7822 = 10000;
	var uLocal_7823 = 0;
	var uLocal_7824 = 3;
	var uLocal_7825 = 500;
	var uLocal_7826 = 10000;
	var uLocal_7827 = 0;
	var uLocal_7828 = 3;
	var uLocal_7829 = 500;
	var uLocal_7830 = 10000;
	var uLocal_7831 = 0;
	var uLocal_7832 = 3;
	var uLocal_7833 = 500;
	var uLocal_7834 = 10000;
	var uLocal_7835 = 0;
	var uLocal_7836 = 3;
	var uLocal_7837 = 500;
	var uLocal_7838 = 10000;
	var uLocal_7839 = 0;
	var uLocal_7840 = 3;
	var uLocal_7841 = 500;
	var uLocal_7842 = 10000;
	var uLocal_7843 = 0;
	var uLocal_7844 = 3;
	var uLocal_7845 = 500;
	var uLocal_7846 = 10000;
	var uLocal_7847 = 0;
	var uLocal_7848 = 3;
	var uLocal_7849 = 500;
	var uLocal_7850 = 10000;
	var uLocal_7851 = 0;
	var uLocal_7852 = 3;
	var uLocal_7853 = 500;
	var uLocal_7854 = 10000;
	var uLocal_7855 = 0;
	var uLocal_7856 = 0;
	var uLocal_7857 = 0;
	var uLocal_7858 = 0;
	var uLocal_7859 = 0;
	var uLocal_7860 = 0;
	var uLocal_7861 = 0;
	var uLocal_7862 = 3;
	var uLocal_7863 = 0;
	var uLocal_7864 = 0;
	var uLocal_7865 = 0;
	var uLocal_7866 = 0;
	var uLocal_7867 = -1;
	var uLocal_7868 = 0;
	var uLocal_7869 = 5;
	var uLocal_7870 = 0;
	var uLocal_7871 = 0;
	var uLocal_7872 = 0;
	var uLocal_7873 = 0;
	var uLocal_7874 = 0;
	var uLocal_7875 = 0;
	var uLocal_7876 = 0;
	var uLocal_7877 = 0;
	var uLocal_7878 = 0;
	var uLocal_7879 = 0;
	var uLocal_7880 = 10;
	var uLocal_7881 = 3;
	var uLocal_7882 = 500;
	var uLocal_7883 = 10000;
	var uLocal_7884 = 0;
	var uLocal_7885 = 3;
	var uLocal_7886 = 500;
	var uLocal_7887 = 10000;
	var uLocal_7888 = 0;
	var uLocal_7889 = 3;
	var uLocal_7890 = 500;
	var uLocal_7891 = 10000;
	var uLocal_7892 = 0;
	var uLocal_7893 = 3;
	var uLocal_7894 = 500;
	var uLocal_7895 = 10000;
	var uLocal_7896 = 0;
	var uLocal_7897 = 3;
	var uLocal_7898 = 500;
	var uLocal_7899 = 10000;
	var uLocal_7900 = 0;
	var uLocal_7901 = 3;
	var uLocal_7902 = 500;
	var uLocal_7903 = 10000;
	var uLocal_7904 = 0;
	var uLocal_7905 = 3;
	var uLocal_7906 = 500;
	var uLocal_7907 = 10000;
	var uLocal_7908 = 0;
	var uLocal_7909 = 3;
	var uLocal_7910 = 500;
	var uLocal_7911 = 10000;
	var uLocal_7912 = 0;
	var uLocal_7913 = 3;
	var uLocal_7914 = 500;
	var uLocal_7915 = 10000;
	var uLocal_7916 = 0;
	var uLocal_7917 = 3;
	var uLocal_7918 = 500;
	var uLocal_7919 = 10000;
	var uLocal_7920 = 0;
	var uLocal_7921 = 0;
	var uLocal_7922 = 0;
	var uLocal_7923 = 0;
	var uLocal_7924 = 0;
	var uLocal_7925 = 0;
	var uLocal_7926 = 0;
	var uLocal_7927 = 3;
	var uLocal_7928 = 0;
	var uLocal_7929 = 0;
	var uLocal_7930 = 0;
	var uLocal_7931 = 0;
	var uLocal_7932 = -1;
	var uLocal_7933 = 0;
	var uLocal_7934 = 5;
	var uLocal_7935 = 0;
	var uLocal_7936 = 0;
	var uLocal_7937 = 0;
	var uLocal_7938 = 0;
	var uLocal_7939 = 0;
	var uLocal_7940 = 0;
	var uLocal_7941 = 0;
	var uLocal_7942 = 0;
	var uLocal_7943 = 0;
	var uLocal_7944 = 0;
	var uLocal_7945 = 10;
	var uLocal_7946 = 3;
	var uLocal_7947 = 500;
	var uLocal_7948 = 10000;
	var uLocal_7949 = 0;
	var uLocal_7950 = 3;
	var uLocal_7951 = 500;
	var uLocal_7952 = 10000;
	var uLocal_7953 = 0;
	var uLocal_7954 = 3;
	var uLocal_7955 = 500;
	var uLocal_7956 = 10000;
	var uLocal_7957 = 0;
	var uLocal_7958 = 3;
	var uLocal_7959 = 500;
	var uLocal_7960 = 10000;
	var uLocal_7961 = 0;
	var uLocal_7962 = 3;
	var uLocal_7963 = 500;
	var uLocal_7964 = 10000;
	var uLocal_7965 = 0;
	var uLocal_7966 = 3;
	var uLocal_7967 = 500;
	var uLocal_7968 = 10000;
	var uLocal_7969 = 0;
	var uLocal_7970 = 3;
	var uLocal_7971 = 500;
	var uLocal_7972 = 10000;
	var uLocal_7973 = 0;
	var uLocal_7974 = 3;
	var uLocal_7975 = 500;
	var uLocal_7976 = 10000;
	var uLocal_7977 = 0;
	var uLocal_7978 = 3;
	var uLocal_7979 = 500;
	var uLocal_7980 = 10000;
	var uLocal_7981 = 0;
	var uLocal_7982 = 3;
	var uLocal_7983 = 500;
	var uLocal_7984 = 10000;
	var uLocal_7985 = 0;
	var uLocal_7986 = 0;
	var uLocal_7987 = 0;
	var uLocal_7988 = 0;
	var uLocal_7989 = 0;
	var uLocal_7990 = 0;
	var uLocal_7991 = 0;
	var uLocal_7992 = 3;
	var uLocal_7993 = 0;
	var uLocal_7994 = 0;
	var uLocal_7995 = 0;
	var uLocal_7996 = 0;
	var uLocal_7997 = -1;
	var uLocal_7998 = 0;
	var uLocal_7999 = 5;
	var uLocal_8000 = 0;
	var uLocal_8001 = 0;
	var uLocal_8002 = 0;
	var uLocal_8003 = 0;
	var uLocal_8004 = 0;
	var uLocal_8005 = 0;
	var uLocal_8006 = 0;
	var uLocal_8007 = 0;
	var uLocal_8008 = 0;
	var uLocal_8009 = 0;
	var uLocal_8010 = 10;
	var uLocal_8011 = 3;
	var uLocal_8012 = 500;
	var uLocal_8013 = 10000;
	var uLocal_8014 = 0;
	var uLocal_8015 = 3;
	var uLocal_8016 = 500;
	var uLocal_8017 = 10000;
	var uLocal_8018 = 0;
	var uLocal_8019 = 3;
	var uLocal_8020 = 500;
	var uLocal_8021 = 10000;
	var uLocal_8022 = 0;
	var uLocal_8023 = 3;
	var uLocal_8024 = 500;
	var uLocal_8025 = 10000;
	var uLocal_8026 = 0;
	var uLocal_8027 = 3;
	var uLocal_8028 = 500;
	var uLocal_8029 = 10000;
	var uLocal_8030 = 0;
	var uLocal_8031 = 3;
	var uLocal_8032 = 500;
	var uLocal_8033 = 10000;
	var uLocal_8034 = 0;
	var uLocal_8035 = 3;
	var uLocal_8036 = 500;
	var uLocal_8037 = 10000;
	var uLocal_8038 = 0;
	var uLocal_8039 = 3;
	var uLocal_8040 = 500;
	var uLocal_8041 = 10000;
	var uLocal_8042 = 0;
	var uLocal_8043 = 3;
	var uLocal_8044 = 500;
	var uLocal_8045 = 10000;
	var uLocal_8046 = 0;
	var uLocal_8047 = 3;
	var uLocal_8048 = 500;
	var uLocal_8049 = 10000;
	var uLocal_8050 = 0;
	var uLocal_8051 = 0;
	var uLocal_8052 = 0;
	var uLocal_8053 = 0;
	var uLocal_8054 = 0;
	var uLocal_8055 = 0;
	var uLocal_8056 = 0;
	var uLocal_8057 = 3;
	var uLocal_8058 = 0;
	var uLocal_8059 = 0;
	var uLocal_8060 = 0;
	var uLocal_8061 = 0;
	var uLocal_8062 = -1;
	var uLocal_8063 = 0;
	var uLocal_8064 = 5;
	var uLocal_8065 = 0;
	var uLocal_8066 = 0;
	var uLocal_8067 = 0;
	var uLocal_8068 = 0;
	var uLocal_8069 = 0;
	var uLocal_8070 = 0;
	var uLocal_8071 = 0;
	var uLocal_8072 = 0;
	var uLocal_8073 = 0;
	var uLocal_8074 = 0;
	var uLocal_8075 = 10;
	var uLocal_8076 = 3;
	var uLocal_8077 = 500;
	var uLocal_8078 = 10000;
	var uLocal_8079 = 0;
	var uLocal_8080 = 3;
	var uLocal_8081 = 500;
	var uLocal_8082 = 10000;
	var uLocal_8083 = 0;
	var uLocal_8084 = 3;
	var uLocal_8085 = 500;
	var uLocal_8086 = 10000;
	var uLocal_8087 = 0;
	var uLocal_8088 = 3;
	var uLocal_8089 = 500;
	var uLocal_8090 = 10000;
	var uLocal_8091 = 0;
	var uLocal_8092 = 3;
	var uLocal_8093 = 500;
	var uLocal_8094 = 10000;
	var uLocal_8095 = 0;
	var uLocal_8096 = 3;
	var uLocal_8097 = 500;
	var uLocal_8098 = 10000;
	var uLocal_8099 = 0;
	var uLocal_8100 = 3;
	var uLocal_8101 = 500;
	var uLocal_8102 = 10000;
	var uLocal_8103 = 0;
	var uLocal_8104 = 3;
	var uLocal_8105 = 500;
	var uLocal_8106 = 10000;
	var uLocal_8107 = 0;
	var uLocal_8108 = 3;
	var uLocal_8109 = 500;
	var uLocal_8110 = 10000;
	var uLocal_8111 = 0;
	var uLocal_8112 = 3;
	var uLocal_8113 = 500;
	var uLocal_8114 = 10000;
	var uLocal_8115 = 0;
	var uLocal_8116 = 0;
	var uLocal_8117 = 0;
	var uLocal_8118 = 0;
	var uLocal_8119 = 0;
	var uLocal_8120 = 0;
	var uLocal_8121 = 0;
	var uLocal_8122 = 3;
	var uLocal_8123 = 0;
	var uLocal_8124 = 0;
	var uLocal_8125 = 0;
	var uLocal_8126 = 0;
	var uLocal_8127 = -1;
	var uLocal_8128 = 0;
	var uLocal_8129 = 5;
	var uLocal_8130 = 0;
	var uLocal_8131 = 0;
	var uLocal_8132 = 0;
	var uLocal_8133 = 0;
	var uLocal_8134 = 0;
	var uLocal_8135 = 0;
	var uLocal_8136 = 0;
	var uLocal_8137 = 0;
	var uLocal_8138 = 0;
	var uLocal_8139 = 0;
	var uLocal_8140 = 10;
	var uLocal_8141 = 3;
	var uLocal_8142 = 500;
	var uLocal_8143 = 10000;
	var uLocal_8144 = 0;
	var uLocal_8145 = 3;
	var uLocal_8146 = 500;
	var uLocal_8147 = 10000;
	var uLocal_8148 = 0;
	var uLocal_8149 = 3;
	var uLocal_8150 = 500;
	var uLocal_8151 = 10000;
	var uLocal_8152 = 0;
	var uLocal_8153 = 3;
	var uLocal_8154 = 500;
	var uLocal_8155 = 10000;
	var uLocal_8156 = 0;
	var uLocal_8157 = 3;
	var uLocal_8158 = 500;
	var uLocal_8159 = 10000;
	var uLocal_8160 = 0;
	var uLocal_8161 = 3;
	var uLocal_8162 = 500;
	var uLocal_8163 = 10000;
	var uLocal_8164 = 0;
	var uLocal_8165 = 3;
	var uLocal_8166 = 500;
	var uLocal_8167 = 10000;
	var uLocal_8168 = 0;
	var uLocal_8169 = 3;
	var uLocal_8170 = 500;
	var uLocal_8171 = 10000;
	var uLocal_8172 = 0;
	var uLocal_8173 = 3;
	var uLocal_8174 = 500;
	var uLocal_8175 = 10000;
	var uLocal_8176 = 0;
	var uLocal_8177 = 3;
	var uLocal_8178 = 500;
	var uLocal_8179 = 10000;
	var uLocal_8180 = 0;
	var uLocal_8181 = 0;
	var uLocal_8182 = 0;
	var uLocal_8183 = 0;
	var uLocal_8184 = 0;
	var uLocal_8185 = 0;
	var uLocal_8186 = 0;
	var uLocal_8187 = 3;
	var uLocal_8188 = 0;
	var uLocal_8189 = 0;
	var uLocal_8190 = 0;
	var uLocal_8191 = 0;
	var uLocal_8192 = -1;
	var uLocal_8193 = 0;
	var uLocal_8194 = 5;
	var uLocal_8195 = 0;
	var uLocal_8196 = 0;
	var uLocal_8197 = 0;
	var uLocal_8198 = 0;
	var uLocal_8199 = 0;
	var uLocal_8200 = 0;
	var uLocal_8201 = 0;
	var uLocal_8202 = 0;
	var uLocal_8203 = 0;
	var uLocal_8204 = 0;
	var uLocal_8205 = 10;
	var uLocal_8206 = 3;
	var uLocal_8207 = 500;
	var uLocal_8208 = 10000;
	var uLocal_8209 = 0;
	var uLocal_8210 = 3;
	var uLocal_8211 = 500;
	var uLocal_8212 = 10000;
	var uLocal_8213 = 0;
	var uLocal_8214 = 3;
	var uLocal_8215 = 500;
	var uLocal_8216 = 10000;
	var uLocal_8217 = 0;
	var uLocal_8218 = 3;
	var uLocal_8219 = 500;
	var uLocal_8220 = 10000;
	var uLocal_8221 = 0;
	var uLocal_8222 = 3;
	var uLocal_8223 = 500;
	var uLocal_8224 = 10000;
	var uLocal_8225 = 0;
	var uLocal_8226 = 3;
	var uLocal_8227 = 500;
	var uLocal_8228 = 10000;
	var uLocal_8229 = 0;
	var uLocal_8230 = 3;
	var uLocal_8231 = 500;
	var uLocal_8232 = 10000;
	var uLocal_8233 = 0;
	var uLocal_8234 = 3;
	var uLocal_8235 = 500;
	var uLocal_8236 = 10000;
	var uLocal_8237 = 0;
	var uLocal_8238 = 3;
	var uLocal_8239 = 500;
	var uLocal_8240 = 10000;
	var uLocal_8241 = 0;
	var uLocal_8242 = 3;
	var uLocal_8243 = 500;
	var uLocal_8244 = 10000;
	var uLocal_8245 = 0;
	var uLocal_8246 = 0;
	var uLocal_8247 = 0;
	var uLocal_8248 = 0;
	var uLocal_8249 = 0;
	var uLocal_8250 = 0;
	var uLocal_8251 = 0;
	var uLocal_8252 = 3;
	var uLocal_8253 = 0;
	var uLocal_8254 = 0;
	var uLocal_8255 = 0;
	var uLocal_8256 = 0;
	var uLocal_8257 = -1;
	var uLocal_8258 = 0;
	var uLocal_8259 = 5;
	var uLocal_8260 = 0;
	var uLocal_8261 = 0;
	var uLocal_8262 = 0;
	var uLocal_8263 = 0;
	var uLocal_8264 = 0;
	var uLocal_8265 = 0;
	var uLocal_8266 = 0;
	var uLocal_8267 = 0;
	var uLocal_8268 = 0;
	var uLocal_8269 = 0;
	var uLocal_8270 = 10;
	var uLocal_8271 = 3;
	var uLocal_8272 = 500;
	var uLocal_8273 = 10000;
	var uLocal_8274 = 0;
	var uLocal_8275 = 3;
	var uLocal_8276 = 500;
	var uLocal_8277 = 10000;
	var uLocal_8278 = 0;
	var uLocal_8279 = 3;
	var uLocal_8280 = 500;
	var uLocal_8281 = 10000;
	var uLocal_8282 = 0;
	var uLocal_8283 = 3;
	var uLocal_8284 = 500;
	var uLocal_8285 = 10000;
	var uLocal_8286 = 0;
	var uLocal_8287 = 3;
	var uLocal_8288 = 500;
	var uLocal_8289 = 10000;
	var uLocal_8290 = 0;
	var uLocal_8291 = 3;
	var uLocal_8292 = 500;
	var uLocal_8293 = 10000;
	var uLocal_8294 = 0;
	var uLocal_8295 = 3;
	var uLocal_8296 = 500;
	var uLocal_8297 = 10000;
	var uLocal_8298 = 0;
	var uLocal_8299 = 3;
	var uLocal_8300 = 500;
	var uLocal_8301 = 10000;
	var uLocal_8302 = 0;
	var uLocal_8303 = 3;
	var uLocal_8304 = 500;
	var uLocal_8305 = 10000;
	var uLocal_8306 = 0;
	var uLocal_8307 = 3;
	var uLocal_8308 = 500;
	var uLocal_8309 = 10000;
	var uLocal_8310 = 0;
	var uLocal_8311 = 0;
	var uLocal_8312 = 0;
	var uLocal_8313 = 0;
	var uLocal_8314 = 0;
	var uLocal_8315 = 0;
	var uLocal_8316 = 0;
	var uLocal_8317 = 3;
	var uLocal_8318 = 0;
	var uLocal_8319 = 0;
	var uLocal_8320 = 0;
	var uLocal_8321 = 0;
	var uLocal_8322 = -1;
	var uLocal_8323 = 0;
	var uLocal_8324 = 5;
	var uLocal_8325 = 0;
	var uLocal_8326 = 0;
	var uLocal_8327 = 0;
	var uLocal_8328 = 0;
	var uLocal_8329 = 0;
	var uLocal_8330 = 0;
	var uLocal_8331 = 0;
	var uLocal_8332 = 0;
	var uLocal_8333 = 0;
	var uLocal_8334 = 0;
	var uLocal_8335 = 10;
	var uLocal_8336 = 3;
	var uLocal_8337 = 500;
	var uLocal_8338 = 10000;
	var uLocal_8339 = 0;
	var uLocal_8340 = 3;
	var uLocal_8341 = 500;
	var uLocal_8342 = 10000;
	var uLocal_8343 = 0;
	var uLocal_8344 = 3;
	var uLocal_8345 = 500;
	var uLocal_8346 = 10000;
	var uLocal_8347 = 0;
	var uLocal_8348 = 3;
	var uLocal_8349 = 500;
	var uLocal_8350 = 10000;
	var uLocal_8351 = 0;
	var uLocal_8352 = 3;
	var uLocal_8353 = 500;
	var uLocal_8354 = 10000;
	var uLocal_8355 = 0;
	var uLocal_8356 = 3;
	var uLocal_8357 = 500;
	var uLocal_8358 = 10000;
	var uLocal_8359 = 0;
	var uLocal_8360 = 3;
	var uLocal_8361 = 500;
	var uLocal_8362 = 10000;
	var uLocal_8363 = 0;
	var uLocal_8364 = 3;
	var uLocal_8365 = 500;
	var uLocal_8366 = 10000;
	var uLocal_8367 = 0;
	var uLocal_8368 = 3;
	var uLocal_8369 = 500;
	var uLocal_8370 = 10000;
	var uLocal_8371 = 0;
	var uLocal_8372 = 3;
	var uLocal_8373 = 500;
	var uLocal_8374 = 10000;
	var uLocal_8375 = 0;
	var uLocal_8376 = 0;
	var uLocal_8377 = 0;
	var uLocal_8378 = 0;
	var uLocal_8379 = 0;
	var uLocal_8380 = 0;
	var uLocal_8381 = 0;
	var uLocal_8382 = 3;
	var uLocal_8383 = 0;
	var uLocal_8384 = 0;
	var uLocal_8385 = 0;
	var uLocal_8386 = 0;
	var uLocal_8387 = -1;
	var uLocal_8388 = 0;
	var uLocal_8389 = 5;
	var uLocal_8390 = 0;
	var uLocal_8391 = 0;
	var uLocal_8392 = 0;
	var uLocal_8393 = 0;
	var uLocal_8394 = 0;
	var uLocal_8395 = 0;
	var uLocal_8396 = 0;
	var uLocal_8397 = 0;
	var uLocal_8398 = 0;
	var uLocal_8399 = 0;
	var uLocal_8400 = 10;
	var uLocal_8401 = 3;
	var uLocal_8402 = 500;
	var uLocal_8403 = 10000;
	var uLocal_8404 = 0;
	var uLocal_8405 = 3;
	var uLocal_8406 = 500;
	var uLocal_8407 = 10000;
	var uLocal_8408 = 0;
	var uLocal_8409 = 3;
	var uLocal_8410 = 500;
	var uLocal_8411 = 10000;
	var uLocal_8412 = 0;
	var uLocal_8413 = 3;
	var uLocal_8414 = 500;
	var uLocal_8415 = 10000;
	var uLocal_8416 = 0;
	var uLocal_8417 = 3;
	var uLocal_8418 = 500;
	var uLocal_8419 = 10000;
	var uLocal_8420 = 0;
	var uLocal_8421 = 3;
	var uLocal_8422 = 500;
	var uLocal_8423 = 10000;
	var uLocal_8424 = 0;
	var uLocal_8425 = 3;
	var uLocal_8426 = 500;
	var uLocal_8427 = 10000;
	var uLocal_8428 = 0;
	var uLocal_8429 = 3;
	var uLocal_8430 = 500;
	var uLocal_8431 = 10000;
	var uLocal_8432 = 0;
	var uLocal_8433 = 3;
	var uLocal_8434 = 500;
	var uLocal_8435 = 10000;
	var uLocal_8436 = 0;
	var uLocal_8437 = 3;
	var uLocal_8438 = 500;
	var uLocal_8439 = 10000;
	var uLocal_8440 = 0;
	var uLocal_8441 = 0;
	var uLocal_8442 = 0;
	var uLocal_8443 = 0;
	var uLocal_8444 = 0;
	var uLocal_8445 = 0;
	var uLocal_8446 = 0;
	var uLocal_8447 = 3;
	var uLocal_8448 = 0;
	var uLocal_8449 = 0;
	var uLocal_8450 = 0;
	var uLocal_8451 = 0;
	var uLocal_8452 = -1;
	var uLocal_8453 = 0;
	var uLocal_8454 = 5;
	var uLocal_8455 = 0;
	var uLocal_8456 = 0;
	var uLocal_8457 = 0;
	var uLocal_8458 = 0;
	var uLocal_8459 = 0;
	var uLocal_8460 = 0;
	var uLocal_8461 = 0;
	var uLocal_8462 = 0;
	var uLocal_8463 = 0;
	var uLocal_8464 = 0;
	var uLocal_8465 = 10;
	var uLocal_8466 = 3;
	var uLocal_8467 = 500;
	var uLocal_8468 = 10000;
	var uLocal_8469 = 0;
	var uLocal_8470 = 3;
	var uLocal_8471 = 500;
	var uLocal_8472 = 10000;
	var uLocal_8473 = 0;
	var uLocal_8474 = 3;
	var uLocal_8475 = 500;
	var uLocal_8476 = 10000;
	var uLocal_8477 = 0;
	var uLocal_8478 = 3;
	var uLocal_8479 = 500;
	var uLocal_8480 = 10000;
	var uLocal_8481 = 0;
	var uLocal_8482 = 3;
	var uLocal_8483 = 500;
	var uLocal_8484 = 10000;
	var uLocal_8485 = 0;
	var uLocal_8486 = 3;
	var uLocal_8487 = 500;
	var uLocal_8488 = 10000;
	var uLocal_8489 = 0;
	var uLocal_8490 = 3;
	var uLocal_8491 = 500;
	var uLocal_8492 = 10000;
	var uLocal_8493 = 0;
	var uLocal_8494 = 3;
	var uLocal_8495 = 500;
	var uLocal_8496 = 10000;
	var uLocal_8497 = 0;
	var uLocal_8498 = 3;
	var uLocal_8499 = 500;
	var uLocal_8500 = 10000;
	var uLocal_8501 = 0;
	var uLocal_8502 = 3;
	var uLocal_8503 = 500;
	var uLocal_8504 = 10000;
	var uLocal_8505 = 0;
	var uLocal_8506 = 0;
	var uLocal_8507 = 0;
	var uLocal_8508 = 0;
	var uLocal_8509 = 0;
	var uLocal_8510 = 0;
	var uLocal_8511 = 0;
	var uLocal_8512 = 3;
	var uLocal_8513 = 0;
	var uLocal_8514 = 0;
	var uLocal_8515 = 0;
	var uLocal_8516 = 0;
	var uLocal_8517 = -1;
	var uLocal_8518 = 0;
	var uLocal_8519 = 5;
	var uLocal_8520 = 0;
	var uLocal_8521 = 0;
	var uLocal_8522 = 0;
	var uLocal_8523 = 0;
	var uLocal_8524 = 0;
	var uLocal_8525 = 0;
	var uLocal_8526 = 0;
	var uLocal_8527 = 0;
	var uLocal_8528 = 0;
	var uLocal_8529 = 0;
	var uLocal_8530 = 10;
	var uLocal_8531 = 3;
	var uLocal_8532 = 500;
	var uLocal_8533 = 10000;
	var uLocal_8534 = 0;
	var uLocal_8535 = 3;
	var uLocal_8536 = 500;
	var uLocal_8537 = 10000;
	var uLocal_8538 = 0;
	var uLocal_8539 = 3;
	var uLocal_8540 = 500;
	var uLocal_8541 = 10000;
	var uLocal_8542 = 0;
	var uLocal_8543 = 3;
	var uLocal_8544 = 500;
	var uLocal_8545 = 10000;
	var uLocal_8546 = 0;
	var uLocal_8547 = 3;
	var uLocal_8548 = 500;
	var uLocal_8549 = 10000;
	var uLocal_8550 = 0;
	var uLocal_8551 = 3;
	var uLocal_8552 = 500;
	var uLocal_8553 = 10000;
	var uLocal_8554 = 0;
	var uLocal_8555 = 3;
	var uLocal_8556 = 500;
	var uLocal_8557 = 10000;
	var uLocal_8558 = 0;
	var uLocal_8559 = 3;
	var uLocal_8560 = 500;
	var uLocal_8561 = 10000;
	var uLocal_8562 = 0;
	var uLocal_8563 = 3;
	var uLocal_8564 = 500;
	var uLocal_8565 = 10000;
	var uLocal_8566 = 0;
	var uLocal_8567 = 3;
	var uLocal_8568 = 500;
	var uLocal_8569 = 10000;
	var uLocal_8570 = 0;
	var uLocal_8571 = 0;
	var uLocal_8572 = 0;
	var uLocal_8573 = 0;
	var uLocal_8574 = 0;
	var uLocal_8575 = 0;
	var uLocal_8576 = 0;
	var uLocal_8577 = 3;
	var uLocal_8578 = 0;
	var uLocal_8579 = 0;
	var uLocal_8580 = 0;
	var uLocal_8581 = 0;
	var uLocal_8582 = -1;
	var uLocal_8583 = 0;
	var uLocal_8584 = 5;
	var uLocal_8585 = 0;
	var uLocal_8586 = 0;
	var uLocal_8587 = 0;
	var uLocal_8588 = 0;
	var uLocal_8589 = 0;
	var uLocal_8590 = 0;
	var uLocal_8591 = 0;
	var uLocal_8592 = 0;
	var uLocal_8593 = 0;
	var uLocal_8594 = 0;
	var uLocal_8595 = 10;
	var uLocal_8596 = 3;
	var uLocal_8597 = 500;
	var uLocal_8598 = 10000;
	var uLocal_8599 = 0;
	var uLocal_8600 = 3;
	var uLocal_8601 = 500;
	var uLocal_8602 = 10000;
	var uLocal_8603 = 0;
	var uLocal_8604 = 3;
	var uLocal_8605 = 500;
	var uLocal_8606 = 10000;
	var uLocal_8607 = 0;
	var uLocal_8608 = 3;
	var uLocal_8609 = 500;
	var uLocal_8610 = 10000;
	var uLocal_8611 = 0;
	var uLocal_8612 = 3;
	var uLocal_8613 = 500;
	var uLocal_8614 = 10000;
	var uLocal_8615 = 0;
	var uLocal_8616 = 3;
	var uLocal_8617 = 500;
	var uLocal_8618 = 10000;
	var uLocal_8619 = 0;
	var uLocal_8620 = 3;
	var uLocal_8621 = 500;
	var uLocal_8622 = 10000;
	var uLocal_8623 = 0;
	var uLocal_8624 = 3;
	var uLocal_8625 = 500;
	var uLocal_8626 = 10000;
	var uLocal_8627 = 0;
	var uLocal_8628 = 3;
	var uLocal_8629 = 500;
	var uLocal_8630 = 10000;
	var uLocal_8631 = 0;
	var uLocal_8632 = 3;
	var uLocal_8633 = 500;
	var uLocal_8634 = 10000;
	var uLocal_8635 = 0;
	var uLocal_8636 = 0;
	var uLocal_8637 = 0;
	var uLocal_8638 = 0;
	var uLocal_8639 = 0;
	var uLocal_8640 = 0;
	var uLocal_8641 = 0;
	var uLocal_8642 = 3;
	var uLocal_8643 = 0;
	var uLocal_8644 = 0;
	var uLocal_8645 = 0;
	var uLocal_8646 = 0;
	var uLocal_8647 = -1;
	var uLocal_8648 = 0;
	var uLocal_8649 = 5;
	var uLocal_8650 = 0;
	var uLocal_8651 = 0;
	var uLocal_8652 = 0;
	var uLocal_8653 = 0;
	var uLocal_8654 = 0;
	var uLocal_8655 = 0;
	var uLocal_8656 = 0;
	var uLocal_8657 = 0;
	var uLocal_8658 = 0;
	var uLocal_8659 = 0;
	var uLocal_8660 = 10;
	var uLocal_8661 = 3;
	var uLocal_8662 = 500;
	var uLocal_8663 = 10000;
	var uLocal_8664 = 0;
	var uLocal_8665 = 3;
	var uLocal_8666 = 500;
	var uLocal_8667 = 10000;
	var uLocal_8668 = 0;
	var uLocal_8669 = 3;
	var uLocal_8670 = 500;
	var uLocal_8671 = 10000;
	var uLocal_8672 = 0;
	var uLocal_8673 = 3;
	var uLocal_8674 = 500;
	var uLocal_8675 = 10000;
	var uLocal_8676 = 0;
	var uLocal_8677 = 3;
	var uLocal_8678 = 500;
	var uLocal_8679 = 10000;
	var uLocal_8680 = 0;
	var uLocal_8681 = 3;
	var uLocal_8682 = 500;
	var uLocal_8683 = 10000;
	var uLocal_8684 = 0;
	var uLocal_8685 = 3;
	var uLocal_8686 = 500;
	var uLocal_8687 = 10000;
	var uLocal_8688 = 0;
	var uLocal_8689 = 3;
	var uLocal_8690 = 500;
	var uLocal_8691 = 10000;
	var uLocal_8692 = 0;
	var uLocal_8693 = 3;
	var uLocal_8694 = 500;
	var uLocal_8695 = 10000;
	var uLocal_8696 = 0;
	var uLocal_8697 = 3;
	var uLocal_8698 = 500;
	var uLocal_8699 = 10000;
	var uLocal_8700 = 0;
	var uLocal_8701 = 0;
	var uLocal_8702 = 0;
	var uLocal_8703 = 0;
	var uLocal_8704 = 0;
	var uLocal_8705 = 0;
	var uLocal_8706 = 0;
	var uLocal_8707 = 3;
	var uLocal_8708 = 0;
	var uLocal_8709 = 0;
	var uLocal_8710 = 0;
	var uLocal_8711 = 0;
	var uLocal_8712 = -1;
	var uLocal_8713 = 0;
	var uLocal_8714 = 5;
	var uLocal_8715 = 0;
	var uLocal_8716 = 0;
	var uLocal_8717 = 0;
	var uLocal_8718 = 0;
	var uLocal_8719 = 0;
	var uLocal_8720 = 0;
	var uLocal_8721 = 0;
	var uLocal_8722 = 0;
	var uLocal_8723 = 0;
	var uLocal_8724 = 0;
	var uLocal_8725 = 10;
	var uLocal_8726 = 3;
	var uLocal_8727 = 500;
	var uLocal_8728 = 10000;
	var uLocal_8729 = 0;
	var uLocal_8730 = 3;
	var uLocal_8731 = 500;
	var uLocal_8732 = 10000;
	var uLocal_8733 = 0;
	var uLocal_8734 = 3;
	var uLocal_8735 = 500;
	var uLocal_8736 = 10000;
	var uLocal_8737 = 0;
	var uLocal_8738 = 3;
	var uLocal_8739 = 500;
	var uLocal_8740 = 10000;
	var uLocal_8741 = 0;
	var uLocal_8742 = 3;
	var uLocal_8743 = 500;
	var uLocal_8744 = 10000;
	var uLocal_8745 = 0;
	var uLocal_8746 = 3;
	var uLocal_8747 = 500;
	var uLocal_8748 = 10000;
	var uLocal_8749 = 0;
	var uLocal_8750 = 3;
	var uLocal_8751 = 500;
	var uLocal_8752 = 10000;
	var uLocal_8753 = 0;
	var uLocal_8754 = 3;
	var uLocal_8755 = 500;
	var uLocal_8756 = 10000;
	var uLocal_8757 = 0;
	var uLocal_8758 = 3;
	var uLocal_8759 = 500;
	var uLocal_8760 = 10000;
	var uLocal_8761 = 0;
	var uLocal_8762 = 3;
	var uLocal_8763 = 500;
	var uLocal_8764 = 10000;
	var uLocal_8765 = 0;
	var uLocal_8766 = 0;
	var uLocal_8767 = 0;
	var uLocal_8768 = 0;
	var uLocal_8769 = 0;
	var uLocal_8770 = 0;
	var uLocal_8771 = 0;
	var uLocal_8772 = 3;
	var uLocal_8773 = 0;
	var uLocal_8774 = 0;
	var uLocal_8775 = 0;
	var uLocal_8776 = 0;
	var uLocal_8777 = -1;
	var uLocal_8778 = 0;
	var uLocal_8779 = 5;
	var uLocal_8780 = 0;
	var uLocal_8781 = 0;
	var uLocal_8782 = 0;
	var uLocal_8783 = 0;
	var uLocal_8784 = 0;
	var uLocal_8785 = 0;
	var uLocal_8786 = 0;
	var uLocal_8787 = 0;
	var uLocal_8788 = 0;
	var uLocal_8789 = 0;
	var uLocal_8790 = 10;
	var uLocal_8791 = 3;
	var uLocal_8792 = 500;
	var uLocal_8793 = 10000;
	var uLocal_8794 = 0;
	var uLocal_8795 = 3;
	var uLocal_8796 = 500;
	var uLocal_8797 = 10000;
	var uLocal_8798 = 0;
	var uLocal_8799 = 3;
	var uLocal_8800 = 500;
	var uLocal_8801 = 10000;
	var uLocal_8802 = 0;
	var uLocal_8803 = 3;
	var uLocal_8804 = 500;
	var uLocal_8805 = 10000;
	var uLocal_8806 = 0;
	var uLocal_8807 = 3;
	var uLocal_8808 = 500;
	var uLocal_8809 = 10000;
	var uLocal_8810 = 0;
	var uLocal_8811 = 3;
	var uLocal_8812 = 500;
	var uLocal_8813 = 10000;
	var uLocal_8814 = 0;
	var uLocal_8815 = 3;
	var uLocal_8816 = 500;
	var uLocal_8817 = 10000;
	var uLocal_8818 = 0;
	var uLocal_8819 = 3;
	var uLocal_8820 = 500;
	var uLocal_8821 = 10000;
	var uLocal_8822 = 0;
	var uLocal_8823 = 3;
	var uLocal_8824 = 500;
	var uLocal_8825 = 10000;
	var uLocal_8826 = 0;
	var uLocal_8827 = 3;
	var uLocal_8828 = 500;
	var uLocal_8829 = 10000;
	var uLocal_8830 = 0;
	var uLocal_8831 = 0;
	var uLocal_8832 = 0;
	var uLocal_8833 = 0;
	var uLocal_8834 = 0;
	var uLocal_8835 = 0;
	var uLocal_8836 = 0;
	var uLocal_8837 = 3;
	var uLocal_8838 = 0;
	var uLocal_8839 = 0;
	var uLocal_8840 = 0;
	var uLocal_8841 = 0;
	var uLocal_8842 = -1;
	var uLocal_8843 = 0;
	var uLocal_8844 = 5;
	var uLocal_8845 = 0;
	var uLocal_8846 = 0;
	var uLocal_8847 = 0;
	var uLocal_8848 = 0;
	var uLocal_8849 = 0;
	var uLocal_8850 = 0;
	var uLocal_8851 = 0;
	var uLocal_8852 = 0;
	var uLocal_8853 = 0;
	var uLocal_8854 = 0;
	var uLocal_8855 = 10;
	var uLocal_8856 = 3;
	var uLocal_8857 = 500;
	var uLocal_8858 = 10000;
	var uLocal_8859 = 0;
	var uLocal_8860 = 3;
	var uLocal_8861 = 500;
	var uLocal_8862 = 10000;
	var uLocal_8863 = 0;
	var uLocal_8864 = 3;
	var uLocal_8865 = 500;
	var uLocal_8866 = 10000;
	var uLocal_8867 = 0;
	var uLocal_8868 = 3;
	var uLocal_8869 = 500;
	var uLocal_8870 = 10000;
	var uLocal_8871 = 0;
	var uLocal_8872 = 3;
	var uLocal_8873 = 500;
	var uLocal_8874 = 10000;
	var uLocal_8875 = 0;
	var uLocal_8876 = 3;
	var uLocal_8877 = 500;
	var uLocal_8878 = 10000;
	var uLocal_8879 = 0;
	var uLocal_8880 = 3;
	var uLocal_8881 = 500;
	var uLocal_8882 = 10000;
	var uLocal_8883 = 0;
	var uLocal_8884 = 3;
	var uLocal_8885 = 500;
	var uLocal_8886 = 10000;
	var uLocal_8887 = 0;
	var uLocal_8888 = 3;
	var uLocal_8889 = 500;
	var uLocal_8890 = 10000;
	var uLocal_8891 = 0;
	var uLocal_8892 = 3;
	var uLocal_8893 = 500;
	var uLocal_8894 = 10000;
	var uLocal_8895 = 0;
	var uLocal_8896 = 0;
	var uLocal_8897 = 0;
	var uLocal_8898 = 0;
	var uLocal_8899 = 0;
	var uLocal_8900 = 0;
	var uLocal_8901 = 0;
	var uLocal_8902 = 3;
	var uLocal_8903 = 0;
	var uLocal_8904 = 0;
	var uLocal_8905 = 0;
	var uLocal_8906 = 0;
	var uLocal_8907 = -1;
	var uLocal_8908 = 0;
	var uLocal_8909 = 5;
	var uLocal_8910 = 0;
	var uLocal_8911 = 0;
	var uLocal_8912 = 0;
	var uLocal_8913 = 0;
	var uLocal_8914 = 0;
	var uLocal_8915 = 0;
	var uLocal_8916 = 0;
	var uLocal_8917 = 0;
	var uLocal_8918 = 0;
	var uLocal_8919 = 0;
	var uLocal_8920 = 10;
	var uLocal_8921 = 3;
	var uLocal_8922 = 500;
	var uLocal_8923 = 10000;
	var uLocal_8924 = 0;
	var uLocal_8925 = 3;
	var uLocal_8926 = 500;
	var uLocal_8927 = 10000;
	var uLocal_8928 = 0;
	var uLocal_8929 = 3;
	var uLocal_8930 = 500;
	var uLocal_8931 = 10000;
	var uLocal_8932 = 0;
	var uLocal_8933 = 3;
	var uLocal_8934 = 500;
	var uLocal_8935 = 10000;
	var uLocal_8936 = 0;
	var uLocal_8937 = 3;
	var uLocal_8938 = 500;
	var uLocal_8939 = 10000;
	var uLocal_8940 = 0;
	var uLocal_8941 = 3;
	var uLocal_8942 = 500;
	var uLocal_8943 = 10000;
	var uLocal_8944 = 0;
	var uLocal_8945 = 3;
	var uLocal_8946 = 500;
	var uLocal_8947 = 10000;
	var uLocal_8948 = 0;
	var uLocal_8949 = 3;
	var uLocal_8950 = 500;
	var uLocal_8951 = 10000;
	var uLocal_8952 = 0;
	var uLocal_8953 = 3;
	var uLocal_8954 = 500;
	var uLocal_8955 = 10000;
	var uLocal_8956 = 0;
	var uLocal_8957 = 3;
	var uLocal_8958 = 500;
	var uLocal_8959 = 10000;
	var uLocal_8960 = 0;
	var uLocal_8961 = 0;
	var uLocal_8962 = 0;
	var uLocal_8963 = 0;
	var uLocal_8964 = 0;
	var uLocal_8965 = 0;
	var uLocal_8966 = 0;
	var uLocal_8967 = 3;
	var uLocal_8968 = 0;
	var uLocal_8969 = 0;
	var uLocal_8970 = 0;
	var uLocal_8971 = 0;
	var uLocal_8972 = -1;
	var uLocal_8973 = 0;
	var uLocal_8974 = 5;
	var uLocal_8975 = 0;
	var uLocal_8976 = 0;
	var uLocal_8977 = 0;
	var uLocal_8978 = 0;
	var uLocal_8979 = 0;
	var uLocal_8980 = 0;
	var uLocal_8981 = 0;
	var uLocal_8982 = 0;
	var uLocal_8983 = 0;
	var uLocal_8984 = 0;
	var uLocal_8985 = 10;
	var uLocal_8986 = 3;
	var uLocal_8987 = 500;
	var uLocal_8988 = 10000;
	var uLocal_8989 = 0;
	var uLocal_8990 = 3;
	var uLocal_8991 = 500;
	var uLocal_8992 = 10000;
	var uLocal_8993 = 0;
	var uLocal_8994 = 3;
	var uLocal_8995 = 500;
	var uLocal_8996 = 10000;
	var uLocal_8997 = 0;
	var uLocal_8998 = 3;
	var uLocal_8999 = 500;
	var uLocal_9000 = 10000;
	var uLocal_9001 = 0;
	var uLocal_9002 = 3;
	var uLocal_9003 = 500;
	var uLocal_9004 = 10000;
	var uLocal_9005 = 0;
	var uLocal_9006 = 3;
	var uLocal_9007 = 500;
	var uLocal_9008 = 10000;
	var uLocal_9009 = 0;
	var uLocal_9010 = 3;
	var uLocal_9011 = 500;
	var uLocal_9012 = 10000;
	var uLocal_9013 = 0;
	var uLocal_9014 = 3;
	var uLocal_9015 = 500;
	var uLocal_9016 = 10000;
	var uLocal_9017 = 0;
	var uLocal_9018 = 3;
	var uLocal_9019 = 500;
	var uLocal_9020 = 10000;
	var uLocal_9021 = 0;
	var uLocal_9022 = 3;
	var uLocal_9023 = 500;
	var uLocal_9024 = 10000;
	var uLocal_9025 = 0;
	var uLocal_9026 = 0;
	var uLocal_9027 = 0;
	var uLocal_9028 = 0;
	var uLocal_9029 = 0;
	var uLocal_9030 = 0;
	var uLocal_9031 = 0;
	var uLocal_9032 = 3;
	var uLocal_9033 = 0;
	var uLocal_9034 = 0;
	var uLocal_9035 = 0;
	var uLocal_9036 = 0;
	var uLocal_9037 = -1;
	var uLocal_9038 = 0;
	var uLocal_9039 = 5;
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
	var uLocal_9050 = 10;
	var uLocal_9051 = 3;
	var uLocal_9052 = 500;
	var uLocal_9053 = 10000;
	var uLocal_9054 = 0;
	var uLocal_9055 = 3;
	var uLocal_9056 = 500;
	var uLocal_9057 = 10000;
	var uLocal_9058 = 0;
	var uLocal_9059 = 3;
	var uLocal_9060 = 500;
	var uLocal_9061 = 10000;
	var uLocal_9062 = 0;
	var uLocal_9063 = 3;
	var uLocal_9064 = 500;
	var uLocal_9065 = 10000;
	var uLocal_9066 = 0;
	var uLocal_9067 = 3;
	var uLocal_9068 = 500;
	var uLocal_9069 = 10000;
	var uLocal_9070 = 0;
	var uLocal_9071 = 3;
	var uLocal_9072 = 500;
	var uLocal_9073 = 10000;
	var uLocal_9074 = 0;
	var uLocal_9075 = 3;
	var uLocal_9076 = 500;
	var uLocal_9077 = 10000;
	var uLocal_9078 = 0;
	var uLocal_9079 = 3;
	var uLocal_9080 = 500;
	var uLocal_9081 = 10000;
	var uLocal_9082 = 0;
	var uLocal_9083 = 3;
	var uLocal_9084 = 500;
	var uLocal_9085 = 10000;
	var uLocal_9086 = 0;
	var uLocal_9087 = 3;
	var uLocal_9088 = 500;
	var uLocal_9089 = 10000;
	var uLocal_9090 = 0;
	var uLocal_9091 = 0;
	var uLocal_9092 = 0;
	var uLocal_9093 = 0;
	var uLocal_9094 = 0;
	var uLocal_9095 = 0;
	var uLocal_9096 = 0;
	var uLocal_9097 = 3;
	var uLocal_9098 = 0;
	var uLocal_9099 = 0;
	var uLocal_9100 = 0;
	var uLocal_9101 = 0;
	var uLocal_9102 = -1;
	var uLocal_9103 = 0;
	var uLocal_9104 = 5;
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
	var uLocal_9115 = 10;
	var uLocal_9116 = 3;
	var uLocal_9117 = 500;
	var uLocal_9118 = 10000;
	var uLocal_9119 = 0;
	var uLocal_9120 = 3;
	var uLocal_9121 = 500;
	var uLocal_9122 = 10000;
	var uLocal_9123 = 0;
	var uLocal_9124 = 3;
	var uLocal_9125 = 500;
	var uLocal_9126 = 10000;
	var uLocal_9127 = 0;
	var uLocal_9128 = 3;
	var uLocal_9129 = 500;
	var uLocal_9130 = 10000;
	var uLocal_9131 = 0;
	var uLocal_9132 = 3;
	var uLocal_9133 = 500;
	var uLocal_9134 = 10000;
	var uLocal_9135 = 0;
	var uLocal_9136 = 3;
	var uLocal_9137 = 500;
	var uLocal_9138 = 10000;
	var uLocal_9139 = 0;
	var uLocal_9140 = 3;
	var uLocal_9141 = 500;
	var uLocal_9142 = 10000;
	var uLocal_9143 = 0;
	var uLocal_9144 = 3;
	var uLocal_9145 = 500;
	var uLocal_9146 = 10000;
	var uLocal_9147 = 0;
	var uLocal_9148 = 3;
	var uLocal_9149 = 500;
	var uLocal_9150 = 10000;
	var uLocal_9151 = 0;
	var uLocal_9152 = 3;
	var uLocal_9153 = 500;
	var uLocal_9154 = 10000;
	var uLocal_9155 = 0;
	var uLocal_9156 = 0;
	var uLocal_9157 = 0;
	var uLocal_9158 = 0;
	var uLocal_9159 = 0;
	var uLocal_9160 = 0;
	var uLocal_9161 = 0;
	var uLocal_9162 = 3;
	var uLocal_9163 = 0;
	var uLocal_9164 = 0;
	var uLocal_9165 = 0;
	var uLocal_9166 = 0;
	var uLocal_9167 = -1;
	var uLocal_9168 = 0;
	var uLocal_9169 = 5;
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
	var uLocal_9180 = 10;
	var uLocal_9181 = 3;
	var uLocal_9182 = 500;
	var uLocal_9183 = 10000;
	var uLocal_9184 = 0;
	var uLocal_9185 = 3;
	var uLocal_9186 = 500;
	var uLocal_9187 = 10000;
	var uLocal_9188 = 0;
	var uLocal_9189 = 3;
	var uLocal_9190 = 500;
	var uLocal_9191 = 10000;
	var uLocal_9192 = 0;
	var uLocal_9193 = 3;
	var uLocal_9194 = 500;
	var uLocal_9195 = 10000;
	var uLocal_9196 = 0;
	var uLocal_9197 = 3;
	var uLocal_9198 = 500;
	var uLocal_9199 = 10000;
	var uLocal_9200 = 0;
	var uLocal_9201 = 3;
	var uLocal_9202 = 500;
	var uLocal_9203 = 10000;
	var uLocal_9204 = 0;
	var uLocal_9205 = 3;
	var uLocal_9206 = 500;
	var uLocal_9207 = 10000;
	var uLocal_9208 = 0;
	var uLocal_9209 = 3;
	var uLocal_9210 = 500;
	var uLocal_9211 = 10000;
	var uLocal_9212 = 0;
	var uLocal_9213 = 3;
	var uLocal_9214 = 500;
	var uLocal_9215 = 10000;
	var uLocal_9216 = 0;
	var uLocal_9217 = 3;
	var uLocal_9218 = 500;
	var uLocal_9219 = 10000;
	var uLocal_9220 = 0;
	var uLocal_9221 = 0;
	var uLocal_9222 = 0;
	var uLocal_9223 = 0;
	var uLocal_9224 = 0;
	var uLocal_9225 = 0;
	var uLocal_9226 = 0;
	var uLocal_9227 = 3;
	var uLocal_9228 = 0;
	var uLocal_9229 = 0;
	var uLocal_9230 = 0;
	var uLocal_9231 = 0;
	var uLocal_9232 = -1;
	var uLocal_9233 = 0;
	var uLocal_9234 = 5;
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
	var uLocal_9245 = 10;
	var uLocal_9246 = 3;
	var uLocal_9247 = 500;
	var uLocal_9248 = 10000;
	var uLocal_9249 = 0;
	var uLocal_9250 = 3;
	var uLocal_9251 = 500;
	var uLocal_9252 = 10000;
	var uLocal_9253 = 0;
	var uLocal_9254 = 3;
	var uLocal_9255 = 500;
	var uLocal_9256 = 10000;
	var uLocal_9257 = 0;
	var uLocal_9258 = 3;
	var uLocal_9259 = 500;
	var uLocal_9260 = 10000;
	var uLocal_9261 = 0;
	var uLocal_9262 = 3;
	var uLocal_9263 = 500;
	var uLocal_9264 = 10000;
	var uLocal_9265 = 0;
	var uLocal_9266 = 3;
	var uLocal_9267 = 500;
	var uLocal_9268 = 10000;
	var uLocal_9269 = 0;
	var uLocal_9270 = 3;
	var uLocal_9271 = 500;
	var uLocal_9272 = 10000;
	var uLocal_9273 = 0;
	var uLocal_9274 = 3;
	var uLocal_9275 = 500;
	var uLocal_9276 = 10000;
	var uLocal_9277 = 0;
	var uLocal_9278 = 3;
	var uLocal_9279 = 500;
	var uLocal_9280 = 10000;
	var uLocal_9281 = 0;
	var uLocal_9282 = 3;
	var uLocal_9283 = 500;
	var uLocal_9284 = 10000;
	var uLocal_9285 = 0;
	var uLocal_9286 = 0;
	var uLocal_9287 = 0;
	var uLocal_9288 = 0;
	var uLocal_9289 = 0;
	var uLocal_9290 = 0;
	var uLocal_9291 = 0;
	var uLocal_9292 = 3;
	var uLocal_9293 = 0;
	var uLocal_9294 = 0;
	var uLocal_9295 = 0;
	var uLocal_9296 = 0;
	var uLocal_9297 = -1;
	var uLocal_9298 = 0;
	var uLocal_9299 = 5;
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
	var uLocal_9310 = 10;
	var uLocal_9311 = 3;
	var uLocal_9312 = 500;
	var uLocal_9313 = 10000;
	var uLocal_9314 = 0;
	var uLocal_9315 = 3;
	var uLocal_9316 = 500;
	var uLocal_9317 = 10000;
	var uLocal_9318 = 0;
	var uLocal_9319 = 3;
	var uLocal_9320 = 500;
	var uLocal_9321 = 10000;
	var uLocal_9322 = 0;
	var uLocal_9323 = 3;
	var uLocal_9324 = 500;
	var uLocal_9325 = 10000;
	var uLocal_9326 = 0;
	var uLocal_9327 = 3;
	var uLocal_9328 = 500;
	var uLocal_9329 = 10000;
	var uLocal_9330 = 0;
	var uLocal_9331 = 3;
	var uLocal_9332 = 500;
	var uLocal_9333 = 10000;
	var uLocal_9334 = 0;
	var uLocal_9335 = 3;
	var uLocal_9336 = 500;
	var uLocal_9337 = 10000;
	var uLocal_9338 = 0;
	var uLocal_9339 = 3;
	var uLocal_9340 = 500;
	var uLocal_9341 = 10000;
	var uLocal_9342 = 0;
	var uLocal_9343 = 3;
	var uLocal_9344 = 500;
	var uLocal_9345 = 10000;
	var uLocal_9346 = 0;
	var uLocal_9347 = 3;
	var uLocal_9348 = 500;
	var uLocal_9349 = 10000;
	var uLocal_9350 = 0;
	var uLocal_9351 = 0;
	var uLocal_9352 = 0;
	var uLocal_9353 = 0;
	var uLocal_9354 = 0;
	var uLocal_9355 = 0;
	var uLocal_9356 = 0;
	var uLocal_9357 = 3;
	var uLocal_9358 = 0;
	var uLocal_9359 = 0;
	var uLocal_9360 = 0;
	var uLocal_9361 = 0;
	var uLocal_9362 = -1;
	var uLocal_9363 = 0;
	var uLocal_9364 = 5;
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
	var uLocal_9375 = 10;
	var uLocal_9376 = 3;
	var uLocal_9377 = 500;
	var uLocal_9378 = 10000;
	var uLocal_9379 = 0;
	var uLocal_9380 = 3;
	var uLocal_9381 = 500;
	var uLocal_9382 = 10000;
	var uLocal_9383 = 0;
	var uLocal_9384 = 3;
	var uLocal_9385 = 500;
	var uLocal_9386 = 10000;
	var uLocal_9387 = 0;
	var uLocal_9388 = 3;
	var uLocal_9389 = 500;
	var uLocal_9390 = 10000;
	var uLocal_9391 = 0;
	var uLocal_9392 = 3;
	var uLocal_9393 = 500;
	var uLocal_9394 = 10000;
	var uLocal_9395 = 0;
	var uLocal_9396 = 3;
	var uLocal_9397 = 500;
	var uLocal_9398 = 10000;
	var uLocal_9399 = 0;
	var uLocal_9400 = 3;
	var uLocal_9401 = 500;
	var uLocal_9402 = 10000;
	var uLocal_9403 = 0;
	var uLocal_9404 = 3;
	var uLocal_9405 = 500;
	var uLocal_9406 = 10000;
	var uLocal_9407 = 0;
	var uLocal_9408 = 3;
	var uLocal_9409 = 500;
	var uLocal_9410 = 10000;
	var uLocal_9411 = 0;
	var uLocal_9412 = 3;
	var uLocal_9413 = 500;
	var uLocal_9414 = 10000;
	var uLocal_9415 = 0;
	var uLocal_9416 = 0;
	var uLocal_9417 = 0;
	var uLocal_9418 = 0;
	var uLocal_9419 = 0;
	var uLocal_9420 = 0;
	var uLocal_9421 = 0;
	var uLocal_9422 = 3;
	var uLocal_9423 = 0;
	var uLocal_9424 = 0;
	var uLocal_9425 = 0;
	var uLocal_9426 = 0;
	var uLocal_9427 = -1;
	var uLocal_9428 = 0;
	var uLocal_9429 = 5;
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
	var uLocal_9440 = 10;
	var uLocal_9441 = 3;
	var uLocal_9442 = 500;
	var uLocal_9443 = 10000;
	var uLocal_9444 = 0;
	var uLocal_9445 = 3;
	var uLocal_9446 = 500;
	var uLocal_9447 = 10000;
	var uLocal_9448 = 0;
	var uLocal_9449 = 3;
	var uLocal_9450 = 500;
	var uLocal_9451 = 10000;
	var uLocal_9452 = 0;
	var uLocal_9453 = 3;
	var uLocal_9454 = 500;
	var uLocal_9455 = 10000;
	var uLocal_9456 = 0;
	var uLocal_9457 = 3;
	var uLocal_9458 = 500;
	var uLocal_9459 = 10000;
	var uLocal_9460 = 0;
	var uLocal_9461 = 3;
	var uLocal_9462 = 500;
	var uLocal_9463 = 10000;
	var uLocal_9464 = 0;
	var uLocal_9465 = 3;
	var uLocal_9466 = 500;
	var uLocal_9467 = 10000;
	var uLocal_9468 = 0;
	var uLocal_9469 = 3;
	var uLocal_9470 = 500;
	var uLocal_9471 = 10000;
	var uLocal_9472 = 0;
	var uLocal_9473 = 3;
	var uLocal_9474 = 500;
	var uLocal_9475 = 10000;
	var uLocal_9476 = 0;
	var uLocal_9477 = 3;
	var uLocal_9478 = 500;
	var uLocal_9479 = 10000;
	var uLocal_9480 = 0;
	var uLocal_9481 = 0;
	var uLocal_9482 = 0;
	var uLocal_9483 = 0;
	var uLocal_9484 = 0;
	var uLocal_9485 = 0;
	var uLocal_9486 = 0;
	var uLocal_9487 = 3;
	var uLocal_9488 = 0;
	var uLocal_9489 = 0;
	var uLocal_9490 = 0;
	var uLocal_9491 = 0;
	var uLocal_9492 = -1;
	var uLocal_9493 = 0;
	var uLocal_9494 = 5;
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
	var uLocal_9505 = 10;
	var uLocal_9506 = 3;
	var uLocal_9507 = 500;
	var uLocal_9508 = 10000;
	var uLocal_9509 = 0;
	var uLocal_9510 = 3;
	var uLocal_9511 = 500;
	var uLocal_9512 = 10000;
	var uLocal_9513 = 0;
	var uLocal_9514 = 3;
	var uLocal_9515 = 500;
	var uLocal_9516 = 10000;
	var uLocal_9517 = 0;
	var uLocal_9518 = 3;
	var uLocal_9519 = 500;
	var uLocal_9520 = 10000;
	var uLocal_9521 = 0;
	var uLocal_9522 = 3;
	var uLocal_9523 = 500;
	var uLocal_9524 = 10000;
	var uLocal_9525 = 0;
	var uLocal_9526 = 3;
	var uLocal_9527 = 500;
	var uLocal_9528 = 10000;
	var uLocal_9529 = 0;
	var uLocal_9530 = 3;
	var uLocal_9531 = 500;
	var uLocal_9532 = 10000;
	var uLocal_9533 = 0;
	var uLocal_9534 = 3;
	var uLocal_9535 = 500;
	var uLocal_9536 = 10000;
	var uLocal_9537 = 0;
	var uLocal_9538 = 3;
	var uLocal_9539 = 500;
	var uLocal_9540 = 10000;
	var uLocal_9541 = 0;
	var uLocal_9542 = 3;
	var uLocal_9543 = 500;
	var uLocal_9544 = 10000;
	var uLocal_9545 = 0;
	var uLocal_9546 = 0;
	var uLocal_9547 = 0;
	var uLocal_9548 = 0;
	var uLocal_9549 = 0;
	var uLocal_9550 = 0;
	var uLocal_9551 = 0;
	var uLocal_9552 = 3;
	var uLocal_9553 = 0;
	var uLocal_9554 = 0;
	var uLocal_9555 = 0;
	var uLocal_9556 = 0;
	var uLocal_9557 = -1;
	var uLocal_9558 = 0;
	var uLocal_9559 = 5;
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
	var uLocal_9570 = 10;
	var uLocal_9571 = 3;
	var uLocal_9572 = 500;
	var uLocal_9573 = 10000;
	var uLocal_9574 = 0;
	var uLocal_9575 = 3;
	var uLocal_9576 = 500;
	var uLocal_9577 = 10000;
	var uLocal_9578 = 0;
	var uLocal_9579 = 3;
	var uLocal_9580 = 500;
	var uLocal_9581 = 10000;
	var uLocal_9582 = 0;
	var uLocal_9583 = 3;
	var uLocal_9584 = 500;
	var uLocal_9585 = 10000;
	var uLocal_9586 = 0;
	var uLocal_9587 = 3;
	var uLocal_9588 = 500;
	var uLocal_9589 = 10000;
	var uLocal_9590 = 0;
	var uLocal_9591 = 3;
	var uLocal_9592 = 500;
	var uLocal_9593 = 10000;
	var uLocal_9594 = 0;
	var uLocal_9595 = 3;
	var uLocal_9596 = 500;
	var uLocal_9597 = 10000;
	var uLocal_9598 = 0;
	var uLocal_9599 = 3;
	var uLocal_9600 = 500;
	var uLocal_9601 = 10000;
	var uLocal_9602 = 0;
	var uLocal_9603 = 3;
	var uLocal_9604 = 500;
	var uLocal_9605 = 10000;
	var uLocal_9606 = 0;
	var uLocal_9607 = 3;
	var uLocal_9608 = 500;
	var uLocal_9609 = 10000;
	var uLocal_9610 = 0;
	var uLocal_9611 = 0;
	var uLocal_9612 = 0;
	var uLocal_9613 = 1;
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
	var uLocal_9626 = 65;
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
	var uLocal_9788 = 0;
	var uLocal_9789 = 0;
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
	var uLocal_9816 = 0;
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
	var uLocal_9888 = 0;
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
	var uLocal_10407 = 1097859072;
	var uLocal_10408 = 1101004800;
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
	var uLocal_10435 = 4;
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
	var uLocal_10507 = 40;
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
	var uLocal_10529 = 0;
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
	var uLocal_11148 = 40;
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
	var uLocal_11170 = 0;
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
	var uLocal_11789 = 60;
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
	var uLocal_12131 = 0;
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
	var uLocal_12372 = 0;
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
	var uLocal_12402 = 0;
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
	var uLocal_12414 = 0;
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
	var uLocal_12425 = 0;
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
	var uLocal_12438 = 0;
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
	var uLocal_12451 = 0;
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
	var uLocal_12464 = 0;
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
	var uLocal_12477 = 0;
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
	var uLocal_12490 = 0;
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
	var uLocal_12503 = 0;
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
	var uLocal_12516 = 0;
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
	var uLocal_12529 = 0;
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
	var uLocal_12542 = 0;
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
	var uLocal_12555 = 0;
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
	var uLocal_12568 = 0;
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
	var uLocal_12581 = 0;
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
	var uLocal_12594 = 0;
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
	var uLocal_12607 = 0;
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
	var uLocal_12620 = 0;
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
	var uLocal_12633 = 0;
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
	var uLocal_12646 = 0;
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
	var uLocal_12659 = 0;
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
	var uLocal_12672 = 0;
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
	var uLocal_12685 = 0;
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
	var uLocal_12698 = 0;
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
	var uLocal_12711 = 0;
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
	var uLocal_12724 = 0;
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
	var uLocal_12737 = 0;
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
	var uLocal_12750 = 15;
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
	var uLocal_12763 = 0;
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
	var uLocal_12776 = 0;
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
	var uLocal_12789 = 0;
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
	var uLocal_12802 = 0;
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
	var uLocal_12815 = 0;
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
	var uLocal_12828 = 0;
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
	var uLocal_12841 = 0;
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
	var uLocal_12854 = 0;
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
	var uLocal_12867 = 0;
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
	var uLocal_12880 = 0;
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
	var uLocal_12893 = 0;
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
	var uLocal_12906 = 0;
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
	var uLocal_12919 = 0;
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
	var uLocal_12932 = 0;
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
	var uLocal_12945 = 0;
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
	var uLocal_12958 = 0;
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
	var uLocal_12971 = 0;
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
	var uLocal_12984 = 0;
	var uLocal_12985 = 0;
	var uLocal_12986 = 0;
	var uLocal_12987 = 0;
	var uLocal_12988 = 0;
	var uLocal_12989 = 0;
	var uLocal_12990 = 0;
	var uLocal_12991 = 10;
	var uLocal_12992 = 0;
	var uLocal_12993 = 0;
	var uLocal_12994 = 0;
	var uLocal_12995 = 0;
	var uLocal_12996 = 0;
	var uLocal_12997 = 0;
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
	var uLocal_13010 = 0;
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
	var uLocal_13021 = -1;
	var uLocal_13022 = 0;
	var uLocal_13023 = 0;
	var uLocal_13024 = 0;
	var uLocal_13025 = 0;
	var uLocal_13026 = 0;
	var uLocal_13027 = 0;
	var uLocal_13028 = 0;
	var uLocal_13029 = 0;
	var uLocal_13030 = 0;
	var uLocal_13031 = 0;
	var uLocal_13032 = 0;
	var uLocal_13033 = 65;
	var uLocal_13034 = 0;
	var uLocal_13035 = 0;
	var uLocal_13036 = 0;
	var uLocal_13037 = 0;
	var uLocal_13038 = 0;
	var uLocal_13039 = 0;
	var uLocal_13040 = 0;
	var uLocal_13041 = 0;
	var uLocal_13042 = 0;
	var uLocal_13043 = 0;
	var uLocal_13044 = -1569615261;
	var uLocal_13045 = 0;
	var uLocal_13046 = 0;
	var uLocal_13047 = 0;
	var uLocal_13048 = 0;
	var uLocal_13049 = 0;
	var uLocal_13050 = 0;
	var uLocal_13051 = 0;
	var uLocal_13052 = 0;
	var uLocal_13053 = 0;
	var uLocal_13054 = 0;
	var uLocal_13055 = 0;
	var uLocal_13056 = 0;
	var uLocal_13057 = -1569615261;
	var uLocal_13058 = 0;
	var uLocal_13059 = 0;
	var uLocal_13060 = 0;
	var uLocal_13061 = 0;
	var uLocal_13062 = 0;
	var uLocal_13063 = 0;
	var uLocal_13064 = 0;
	var uLocal_13065 = 0;
	var uLocal_13066 = 0;
	var uLocal_13067 = 0;
	var uLocal_13068 = 0;
	var uLocal_13069 = 0;
	var uLocal_13070 = -1569615261;
	var uLocal_13071 = 0;
	var uLocal_13072 = 0;
	var uLocal_13073 = 0;
	var uLocal_13074 = 0;
	var uLocal_13075 = 0;
	var uLocal_13076 = 0;
	var uLocal_13077 = 0;
	var uLocal_13078 = 0;
	var uLocal_13079 = 0;
	var uLocal_13080 = 0;
	var uLocal_13081 = 0;
	var uLocal_13082 = 0;
	var uLocal_13083 = -1569615261;
	var uLocal_13084 = 0;
	var uLocal_13085 = 0;
	var uLocal_13086 = 0;
	var uLocal_13087 = 0;
	var uLocal_13088 = 0;
	var uLocal_13089 = 0;
	var uLocal_13090 = 0;
	var uLocal_13091 = 0;
	var uLocal_13092 = 0;
	var uLocal_13093 = 0;
	var uLocal_13094 = 0;
	var uLocal_13095 = 0;
	var uLocal_13096 = -1569615261;
	var uLocal_13097 = 0;
	var uLocal_13098 = 0;
	var uLocal_13099 = 0;
	var uLocal_13100 = 0;
	var uLocal_13101 = 0;
	var uLocal_13102 = 0;
	var uLocal_13103 = 0;
	var uLocal_13104 = 0;
	var uLocal_13105 = 0;
	var uLocal_13106 = 0;
	var uLocal_13107 = 0;
	var uLocal_13108 = 0;
	var uLocal_13109 = -1569615261;
	var uLocal_13110 = 0;
	var uLocal_13111 = 0;
	var uLocal_13112 = 0;
	var uLocal_13113 = 0;
	var uLocal_13114 = 0;
	var uLocal_13115 = 0;
	var uLocal_13116 = 0;
	var uLocal_13117 = 0;
	var uLocal_13118 = 0;
	var uLocal_13119 = 0;
	var uLocal_13120 = 0;
	var uLocal_13121 = 0;
	var uLocal_13122 = -1569615261;
	var uLocal_13123 = 0;
	var uLocal_13124 = 0;
	var uLocal_13125 = 0;
	var uLocal_13126 = 0;
	var uLocal_13127 = 0;
	var uLocal_13128 = 0;
	var uLocal_13129 = 0;
	var uLocal_13130 = 0;
	var uLocal_13131 = 0;
	var uLocal_13132 = 0;
	var uLocal_13133 = 0;
	var uLocal_13134 = 0;
	var uLocal_13135 = -1569615261;
	var uLocal_13136 = 0;
	var uLocal_13137 = 0;
	var uLocal_13138 = 0;
	var uLocal_13139 = 0;
	var uLocal_13140 = 0;
	var uLocal_13141 = 0;
	var uLocal_13142 = 0;
	var uLocal_13143 = 0;
	var uLocal_13144 = 0;
	var uLocal_13145 = 0;
	var uLocal_13146 = 0;
	var uLocal_13147 = 0;
	var uLocal_13148 = -1569615261;
	var uLocal_13149 = 0;
	var uLocal_13150 = 0;
	var uLocal_13151 = 0;
	var uLocal_13152 = 0;
	var uLocal_13153 = 0;
	var uLocal_13154 = 0;
	var uLocal_13155 = 0;
	var uLocal_13156 = 0;
	var uLocal_13157 = 0;
	var uLocal_13158 = 0;
	var uLocal_13159 = 0;
	var uLocal_13160 = 0;
	var uLocal_13161 = -1569615261;
	var uLocal_13162 = 0;
	var uLocal_13163 = 0;
	var uLocal_13164 = 0;
	var uLocal_13165 = 0;
	var uLocal_13166 = 0;
	var uLocal_13167 = 0;
	var uLocal_13168 = 0;
	var uLocal_13169 = 0;
	var uLocal_13170 = 0;
	var uLocal_13171 = 0;
	var uLocal_13172 = 0;
	var uLocal_13173 = 0;
	var uLocal_13174 = -1569615261;
	var uLocal_13175 = 0;
	var uLocal_13176 = 0;
	var uLocal_13177 = 0;
	var uLocal_13178 = 0;
	var uLocal_13179 = 0;
	var uLocal_13180 = 0;
	var uLocal_13181 = 0;
	var uLocal_13182 = 0;
	var uLocal_13183 = 0;
	var uLocal_13184 = 0;
	var uLocal_13185 = 0;
	var uLocal_13186 = 0;
	var uLocal_13187 = -1569615261;
	var uLocal_13188 = 0;
	var uLocal_13189 = 0;
	var uLocal_13190 = 0;
	var uLocal_13191 = 0;
	var uLocal_13192 = 0;
	var uLocal_13193 = 0;
	var uLocal_13194 = 0;
	var uLocal_13195 = 0;
	var uLocal_13196 = 0;
	var uLocal_13197 = 0;
	var uLocal_13198 = 0;
	var uLocal_13199 = 0;
	var uLocal_13200 = -1569615261;
	var uLocal_13201 = 0;
	var uLocal_13202 = 0;
	var uLocal_13203 = 0;
	var uLocal_13204 = 0;
	var uLocal_13205 = 0;
	var uLocal_13206 = 0;
	var uLocal_13207 = 0;
	var uLocal_13208 = 0;
	var uLocal_13209 = 0;
	var uLocal_13210 = 0;
	var uLocal_13211 = 0;
	var uLocal_13212 = 0;
	var uLocal_13213 = -1569615261;
	var uLocal_13214 = 0;
	var uLocal_13215 = 0;
	var uLocal_13216 = 0;
	var uLocal_13217 = 0;
	var uLocal_13218 = 0;
	var uLocal_13219 = 0;
	var uLocal_13220 = 0;
	var uLocal_13221 = 0;
	var uLocal_13222 = 0;
	var uLocal_13223 = 0;
	var uLocal_13224 = 0;
	var uLocal_13225 = 0;
	var uLocal_13226 = -1569615261;
	var uLocal_13227 = 0;
	var uLocal_13228 = 0;
	var uLocal_13229 = 0;
	var uLocal_13230 = 0;
	var uLocal_13231 = 0;
	var uLocal_13232 = 0;
	var uLocal_13233 = 0;
	var uLocal_13234 = 0;
	var uLocal_13235 = 0;
	var uLocal_13236 = 0;
	var uLocal_13237 = 0;
	var uLocal_13238 = 0;
	var uLocal_13239 = -1569615261;
	var uLocal_13240 = 0;
	var uLocal_13241 = 0;
	var uLocal_13242 = 0;
	var uLocal_13243 = 0;
	var uLocal_13244 = 0;
	var uLocal_13245 = 0;
	var uLocal_13246 = 0;
	var uLocal_13247 = 0;
	var uLocal_13248 = 0;
	var uLocal_13249 = 0;
	var uLocal_13250 = 0;
	var uLocal_13251 = 0;
	var uLocal_13252 = -1569615261;
	var uLocal_13253 = 0;
	var uLocal_13254 = 0;
	var uLocal_13255 = 0;
	var uLocal_13256 = 0;
	var uLocal_13257 = 0;
	var uLocal_13258 = 0;
	var uLocal_13259 = 0;
	var uLocal_13260 = 0;
	var uLocal_13261 = 0;
	var uLocal_13262 = 0;
	var uLocal_13263 = 0;
	var uLocal_13264 = 0;
	var uLocal_13265 = -1569615261;
	var uLocal_13266 = 0;
	var uLocal_13267 = 0;
	var uLocal_13268 = 0;
	var uLocal_13269 = 0;
	var uLocal_13270 = 0;
	var uLocal_13271 = 0;
	var uLocal_13272 = 0;
	var uLocal_13273 = 0;
	var uLocal_13274 = 0;
	var uLocal_13275 = 0;
	var uLocal_13276 = 0;
	var uLocal_13277 = 0;
	var uLocal_13278 = -1569615261;
	var uLocal_13279 = 0;
	var uLocal_13280 = 0;
	var uLocal_13281 = 0;
	var uLocal_13282 = 0;
	var uLocal_13283 = 0;
	var uLocal_13284 = 0;
	var uLocal_13285 = 0;
	var uLocal_13286 = 0;
	var uLocal_13287 = 0;
	var uLocal_13288 = 0;
	var uLocal_13289 = 0;
	var uLocal_13290 = 0;
	var uLocal_13291 = -1569615261;
	var uLocal_13292 = 0;
	var uLocal_13293 = 0;
	var uLocal_13294 = 0;
	var uLocal_13295 = 0;
	var uLocal_13296 = 0;
	var uLocal_13297 = 0;
	var uLocal_13298 = 0;
	var uLocal_13299 = 0;
	var uLocal_13300 = 0;
	var uLocal_13301 = 0;
	var uLocal_13302 = 0;
	var uLocal_13303 = 0;
	var uLocal_13304 = -1569615261;
	var uLocal_13305 = 0;
	var uLocal_13306 = 0;
	var uLocal_13307 = 0;
	var uLocal_13308 = 0;
	var uLocal_13309 = 0;
	var uLocal_13310 = 0;
	var uLocal_13311 = 0;
	var uLocal_13312 = 0;
	var uLocal_13313 = 0;
	var uLocal_13314 = 0;
	var uLocal_13315 = 0;
	var uLocal_13316 = 0;
	var uLocal_13317 = -1569615261;
	var uLocal_13318 = 0;
	var uLocal_13319 = 0;
	var uLocal_13320 = 0;
	var uLocal_13321 = 0;
	var uLocal_13322 = 0;
	var uLocal_13323 = 0;
	var uLocal_13324 = 0;
	var uLocal_13325 = 0;
	var uLocal_13326 = 0;
	var uLocal_13327 = 0;
	var uLocal_13328 = 0;
	var uLocal_13329 = 0;
	var uLocal_13330 = -1569615261;
	var uLocal_13331 = 0;
	var uLocal_13332 = 0;
	var uLocal_13333 = 0;
	var uLocal_13334 = 0;
	var uLocal_13335 = 0;
	var uLocal_13336 = 0;
	var uLocal_13337 = 0;
	var uLocal_13338 = 0;
	var uLocal_13339 = 0;
	var uLocal_13340 = 0;
	var uLocal_13341 = 0;
	var uLocal_13342 = 0;
	var uLocal_13343 = -1569615261;
	var uLocal_13344 = 0;
	var uLocal_13345 = 0;
	var uLocal_13346 = 0;
	var uLocal_13347 = 0;
	var uLocal_13348 = 0;
	var uLocal_13349 = 0;
	var uLocal_13350 = 0;
	var uLocal_13351 = 0;
	var uLocal_13352 = 0;
	var uLocal_13353 = 0;
	var uLocal_13354 = 0;
	var uLocal_13355 = 0;
	var uLocal_13356 = -1569615261;
	var uLocal_13357 = 0;
	var uLocal_13358 = 0;
	var uLocal_13359 = 0;
	var uLocal_13360 = 0;
	var uLocal_13361 = 0;
	var uLocal_13362 = 0;
	var uLocal_13363 = 0;
	var uLocal_13364 = 0;
	var uLocal_13365 = 0;
	var uLocal_13366 = 0;
	var uLocal_13367 = 0;
	var uLocal_13368 = 0;
	var uLocal_13369 = -1569615261;
	var uLocal_13370 = 0;
	var uLocal_13371 = 0;
	var uLocal_13372 = 0;
	var uLocal_13373 = 0;
	var uLocal_13374 = 0;
	var uLocal_13375 = 0;
	var uLocal_13376 = 0;
	var uLocal_13377 = 0;
	var uLocal_13378 = 0;
	var uLocal_13379 = 0;
	var uLocal_13380 = 0;
	var uLocal_13381 = 0;
	var uLocal_13382 = -1569615261;
	var uLocal_13383 = 0;
	var uLocal_13384 = 0;
	var uLocal_13385 = 0;
	var uLocal_13386 = 0;
	var uLocal_13387 = 0;
	var uLocal_13388 = 0;
	var uLocal_13389 = 0;
	var uLocal_13390 = 0;
	var uLocal_13391 = 0;
	var uLocal_13392 = 0;
	var uLocal_13393 = 0;
	var uLocal_13394 = 0;
	var uLocal_13395 = -1569615261;
	var uLocal_13396 = 0;
	var uLocal_13397 = 0;
	var uLocal_13398 = 0;
	var uLocal_13399 = 0;
	var uLocal_13400 = 0;
	var uLocal_13401 = 0;
	var uLocal_13402 = 0;
	var uLocal_13403 = 0;
	var uLocal_13404 = 0;
	var uLocal_13405 = 0;
	var uLocal_13406 = 0;
	var uLocal_13407 = 0;
	var uLocal_13408 = -1569615261;
	var uLocal_13409 = 0;
	var uLocal_13410 = 0;
	var uLocal_13411 = 0;
	var uLocal_13412 = 0;
	var uLocal_13413 = 0;
	var uLocal_13414 = 0;
	var uLocal_13415 = 0;
	var uLocal_13416 = 0;
	var uLocal_13417 = 0;
	var uLocal_13418 = 0;
	var uLocal_13419 = 0;
	var uLocal_13420 = 0;
	var uLocal_13421 = -1569615261;
	var uLocal_13422 = 0;
	var uLocal_13423 = 0;
	var uLocal_13424 = 0;
	var uLocal_13425 = 0;
	var uLocal_13426 = 0;
	var uLocal_13427 = 0;
	var uLocal_13428 = 0;
	var uLocal_13429 = 0;
	var uLocal_13430 = 0;
	var uLocal_13431 = 0;
	var uLocal_13432 = 0;
	var uLocal_13433 = 0;
	var uLocal_13434 = -1569615261;
	var uLocal_13435 = 0;
	var uLocal_13436 = 0;
	var uLocal_13437 = 0;
	var uLocal_13438 = 0;
	var uLocal_13439 = 0;
	var uLocal_13440 = 0;
	var uLocal_13441 = 0;
	var uLocal_13442 = 0;
	var uLocal_13443 = 0;
	var uLocal_13444 = 0;
	var uLocal_13445 = 0;
	var uLocal_13446 = 0;
	var uLocal_13447 = -1569615261;
	var uLocal_13448 = 0;
	var uLocal_13449 = 0;
	var uLocal_13450 = 0;
	var uLocal_13451 = 0;
	var uLocal_13452 = 0;
	var uLocal_13453 = 0;
	var uLocal_13454 = 0;
	var uLocal_13455 = 0;
	var uLocal_13456 = 0;
	var uLocal_13457 = 0;
	var uLocal_13458 = 0;
	var uLocal_13459 = 0;
	var uLocal_13460 = -1569615261;
	var uLocal_13461 = 0;
	var uLocal_13462 = 0;
	var uLocal_13463 = 0;
	var uLocal_13464 = 0;
	var uLocal_13465 = 0;
	var uLocal_13466 = 0;
	var uLocal_13467 = 0;
	var uLocal_13468 = 0;
	var uLocal_13469 = 0;
	var uLocal_13470 = 0;
	var uLocal_13471 = 0;
	var uLocal_13472 = 0;
	var uLocal_13473 = -1569615261;
	var uLocal_13474 = 0;
	var uLocal_13475 = 0;
	var uLocal_13476 = 0;
	var uLocal_13477 = 0;
	var uLocal_13478 = 0;
	var uLocal_13479 = 0;
	var uLocal_13480 = 0;
	var uLocal_13481 = 0;
	var uLocal_13482 = 0;
	var uLocal_13483 = 0;
	var uLocal_13484 = 0;
	var uLocal_13485 = 0;
	var uLocal_13486 = -1569615261;
	var uLocal_13487 = 0;
	var uLocal_13488 = 0;
	var uLocal_13489 = 0;
	var uLocal_13490 = 0;
	var uLocal_13491 = 0;
	var uLocal_13492 = 0;
	var uLocal_13493 = 0;
	var uLocal_13494 = 0;
	var uLocal_13495 = 0;
	var uLocal_13496 = 0;
	var uLocal_13497 = 0;
	var uLocal_13498 = 0;
	var uLocal_13499 = -1569615261;
	var uLocal_13500 = 0;
	var uLocal_13501 = 0;
	var uLocal_13502 = 0;
	var uLocal_13503 = 0;
	var uLocal_13504 = 0;
	var uLocal_13505 = 0;
	var uLocal_13506 = 0;
	var uLocal_13507 = 0;
	var uLocal_13508 = 0;
	var uLocal_13509 = 0;
	var uLocal_13510 = 0;
	var uLocal_13511 = 0;
	var uLocal_13512 = -1569615261;
	var uLocal_13513 = 0;
	var uLocal_13514 = 0;
	var uLocal_13515 = 0;
	var uLocal_13516 = 0;
	var uLocal_13517 = 0;
	var uLocal_13518 = 0;
	var uLocal_13519 = 0;
	var uLocal_13520 = 0;
	var uLocal_13521 = 0;
	var uLocal_13522 = 0;
	var uLocal_13523 = 0;
	var uLocal_13524 = 0;
	var uLocal_13525 = -1569615261;
	var uLocal_13526 = 0;
	var uLocal_13527 = 0;
	var uLocal_13528 = 0;
	var uLocal_13529 = 0;
	var uLocal_13530 = 0;
	var uLocal_13531 = 0;
	var uLocal_13532 = 0;
	var uLocal_13533 = 0;
	var uLocal_13534 = 0;
	var uLocal_13535 = 0;
	var uLocal_13536 = 0;
	var uLocal_13537 = 0;
	var uLocal_13538 = -1569615261;
	var uLocal_13539 = 0;
	var uLocal_13540 = 0;
	var uLocal_13541 = 0;
	var uLocal_13542 = 0;
	var uLocal_13543 = 0;
	var uLocal_13544 = 0;
	var uLocal_13545 = 0;
	var uLocal_13546 = 0;
	var uLocal_13547 = 0;
	var uLocal_13548 = 0;
	var uLocal_13549 = 0;
	var uLocal_13550 = 0;
	var uLocal_13551 = -1569615261;
	var uLocal_13552 = 0;
	var uLocal_13553 = 0;
	var uLocal_13554 = 0;
	var uLocal_13555 = 0;
	var uLocal_13556 = 0;
	var uLocal_13557 = 0;
	var uLocal_13558 = 0;
	var uLocal_13559 = 0;
	var uLocal_13560 = 0;
	var uLocal_13561 = 0;
	var uLocal_13562 = 0;
	var uLocal_13563 = 0;
	var uLocal_13564 = -1569615261;
	var uLocal_13565 = 0;
	var uLocal_13566 = 0;
	var uLocal_13567 = 0;
	var uLocal_13568 = 0;
	var uLocal_13569 = 0;
	var uLocal_13570 = 0;
	var uLocal_13571 = 0;
	var uLocal_13572 = 0;
	var uLocal_13573 = 0;
	var uLocal_13574 = 0;
	var uLocal_13575 = 0;
	var uLocal_13576 = 0;
	var uLocal_13577 = -1569615261;
	var uLocal_13578 = 0;
	var uLocal_13579 = 0;
	var uLocal_13580 = 0;
	var uLocal_13581 = 0;
	var uLocal_13582 = 0;
	var uLocal_13583 = 0;
	var uLocal_13584 = 0;
	var uLocal_13585 = 0;
	var uLocal_13586 = 0;
	var uLocal_13587 = 0;
	var uLocal_13588 = 0;
	var uLocal_13589 = 0;
	var uLocal_13590 = -1569615261;
	var uLocal_13591 = 0;
	var uLocal_13592 = 0;
	var uLocal_13593 = 0;
	var uLocal_13594 = 0;
	var uLocal_13595 = 0;
	var uLocal_13596 = 0;
	var uLocal_13597 = 0;
	var uLocal_13598 = 0;
	var uLocal_13599 = 0;
	var uLocal_13600 = 0;
	var uLocal_13601 = 0;
	var uLocal_13602 = 0;
	var uLocal_13603 = -1569615261;
	var uLocal_13604 = 0;
	var uLocal_13605 = 0;
	var uLocal_13606 = 0;
	var uLocal_13607 = 0;
	var uLocal_13608 = 0;
	var uLocal_13609 = 0;
	var uLocal_13610 = 0;
	var uLocal_13611 = 0;
	var uLocal_13612 = 0;
	var uLocal_13613 = 0;
	var uLocal_13614 = 0;
	var uLocal_13615 = 0;
	var uLocal_13616 = -1569615261;
	var uLocal_13617 = 0;
	var uLocal_13618 = 0;
	var uLocal_13619 = 0;
	var uLocal_13620 = 0;
	var uLocal_13621 = 0;
	var uLocal_13622 = 0;
	var uLocal_13623 = 0;
	var uLocal_13624 = 0;
	var uLocal_13625 = 0;
	var uLocal_13626 = 0;
	var uLocal_13627 = 0;
	var uLocal_13628 = 0;
	var uLocal_13629 = -1569615261;
	var uLocal_13630 = 0;
	var uLocal_13631 = 0;
	var uLocal_13632 = 0;
	var uLocal_13633 = 0;
	var uLocal_13634 = 0;
	var uLocal_13635 = 0;
	var uLocal_13636 = 0;
	var uLocal_13637 = 0;
	var uLocal_13638 = 0;
	var uLocal_13639 = 0;
	var uLocal_13640 = 0;
	var uLocal_13641 = 0;
	var uLocal_13642 = -1569615261;
	var uLocal_13643 = 0;
	var uLocal_13644 = 0;
	var uLocal_13645 = 0;
	var uLocal_13646 = 0;
	var uLocal_13647 = 0;
	var uLocal_13648 = 0;
	var uLocal_13649 = 0;
	var uLocal_13650 = 0;
	var uLocal_13651 = 0;
	var uLocal_13652 = 0;
	var uLocal_13653 = 0;
	var uLocal_13654 = 0;
	var uLocal_13655 = -1569615261;
	var uLocal_13656 = 0;
	var uLocal_13657 = 0;
	var uLocal_13658 = 0;
	var uLocal_13659 = 0;
	var uLocal_13660 = 0;
	var uLocal_13661 = 0;
	var uLocal_13662 = 0;
	var uLocal_13663 = 0;
	var uLocal_13664 = 0;
	var uLocal_13665 = 0;
	var uLocal_13666 = 0;
	var uLocal_13667 = 0;
	var uLocal_13668 = -1569615261;
	var uLocal_13669 = 0;
	var uLocal_13670 = 0;
	var uLocal_13671 = 0;
	var uLocal_13672 = 0;
	var uLocal_13673 = 0;
	var uLocal_13674 = 0;
	var uLocal_13675 = 0;
	var uLocal_13676 = 0;
	var uLocal_13677 = 0;
	var uLocal_13678 = 0;
	var uLocal_13679 = 0;
	var uLocal_13680 = 0;
	var uLocal_13681 = -1569615261;
	var uLocal_13682 = 0;
	var uLocal_13683 = 0;
	var uLocal_13684 = 0;
	var uLocal_13685 = 0;
	var uLocal_13686 = 0;
	var uLocal_13687 = 0;
	var uLocal_13688 = 0;
	var uLocal_13689 = 0;
	var uLocal_13690 = 0;
	var uLocal_13691 = 0;
	var uLocal_13692 = 0;
	var uLocal_13693 = 0;
	var uLocal_13694 = -1569615261;
	var uLocal_13695 = 0;
	var uLocal_13696 = 0;
	var uLocal_13697 = 0;
	var uLocal_13698 = 0;
	var uLocal_13699 = 0;
	var uLocal_13700 = 0;
	var uLocal_13701 = 0;
	var uLocal_13702 = 0;
	var uLocal_13703 = 0;
	var uLocal_13704 = 0;
	var uLocal_13705 = 0;
	var uLocal_13706 = 0;
	var uLocal_13707 = -1569615261;
	var uLocal_13708 = 0;
	var uLocal_13709 = 0;
	var uLocal_13710 = 0;
	var uLocal_13711 = 0;
	var uLocal_13712 = 0;
	var uLocal_13713 = 0;
	var uLocal_13714 = 0;
	var uLocal_13715 = 0;
	var uLocal_13716 = 0;
	var uLocal_13717 = 0;
	var uLocal_13718 = 0;
	var uLocal_13719 = 0;
	var uLocal_13720 = -1569615261;
	var uLocal_13721 = 0;
	var uLocal_13722 = 0;
	var uLocal_13723 = 0;
	var uLocal_13724 = 0;
	var uLocal_13725 = 0;
	var uLocal_13726 = 0;
	var uLocal_13727 = 0;
	var uLocal_13728 = 0;
	var uLocal_13729 = 0;
	var uLocal_13730 = 0;
	var uLocal_13731 = 0;
	var uLocal_13732 = 0;
	var uLocal_13733 = -1569615261;
	var uLocal_13734 = 0;
	var uLocal_13735 = 0;
	var uLocal_13736 = 0;
	var uLocal_13737 = 0;
	var uLocal_13738 = 0;
	var uLocal_13739 = 0;
	var uLocal_13740 = 0;
	var uLocal_13741 = 0;
	var uLocal_13742 = 0;
	var uLocal_13743 = 0;
	var uLocal_13744 = 0;
	var uLocal_13745 = 0;
	var uLocal_13746 = -1569615261;
	var uLocal_13747 = 0;
	var uLocal_13748 = 0;
	var uLocal_13749 = 0;
	var uLocal_13750 = 0;
	var uLocal_13751 = 0;
	var uLocal_13752 = 0;
	var uLocal_13753 = 0;
	var uLocal_13754 = 0;
	var uLocal_13755 = 0;
	var uLocal_13756 = 0;
	var uLocal_13757 = 0;
	var uLocal_13758 = 0;
	var uLocal_13759 = -1569615261;
	var uLocal_13760 = 0;
	var uLocal_13761 = 0;
	var uLocal_13762 = 0;
	var uLocal_13763 = 0;
	var uLocal_13764 = 0;
	var uLocal_13765 = 0;
	var uLocal_13766 = 0;
	var uLocal_13767 = 0;
	var uLocal_13768 = 0;
	var uLocal_13769 = 0;
	var uLocal_13770 = 0;
	var uLocal_13771 = 0;
	var uLocal_13772 = -1569615261;
	var uLocal_13773 = 0;
	var uLocal_13774 = 0;
	var uLocal_13775 = 0;
	var uLocal_13776 = 0;
	var uLocal_13777 = 0;
	var uLocal_13778 = 0;
	var uLocal_13779 = 0;
	var uLocal_13780 = 0;
	var uLocal_13781 = 0;
	var uLocal_13782 = 0;
	var uLocal_13783 = 0;
	var uLocal_13784 = 0;
	var uLocal_13785 = -1569615261;
	var uLocal_13786 = 0;
	var uLocal_13787 = 0;
	var uLocal_13788 = 0;
	var uLocal_13789 = 0;
	var uLocal_13790 = 0;
	var uLocal_13791 = 0;
	var uLocal_13792 = 0;
	var uLocal_13793 = 0;
	var uLocal_13794 = 0;
	var uLocal_13795 = 0;
	var uLocal_13796 = 0;
	var uLocal_13797 = 0;
	var uLocal_13798 = -1569615261;
	var uLocal_13799 = 0;
	var uLocal_13800 = 0;
	var uLocal_13801 = 0;
	var uLocal_13802 = 0;
	var uLocal_13803 = 0;
	var uLocal_13804 = 0;
	var uLocal_13805 = 0;
	var uLocal_13806 = 0;
	var uLocal_13807 = 0;
	var uLocal_13808 = 0;
	var uLocal_13809 = 0;
	var uLocal_13810 = 0;
	var uLocal_13811 = -1569615261;
	var uLocal_13812 = 0;
	var uLocal_13813 = 0;
	var uLocal_13814 = 0;
	var uLocal_13815 = 0;
	var uLocal_13816 = 0;
	var uLocal_13817 = 0;
	var uLocal_13818 = 0;
	var uLocal_13819 = 0;
	var uLocal_13820 = 0;
	var uLocal_13821 = 0;
	var uLocal_13822 = 0;
	var uLocal_13823 = 0;
	var uLocal_13824 = -1569615261;
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
	var uLocal_13837 = -1569615261;
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
	var uLocal_13850 = -1569615261;
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
	var uLocal_13863 = -1569615261;
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
	var uLocal_13876 = -1569615261;
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
	var uLocal_13894 = 1;
	var uLocal_13895 = 30;
	var uLocal_13896 = -1;
	var uLocal_13897 = 0;
	var uLocal_13898 = 1;
	var uLocal_13899 = 0;
	var uLocal_13900 = 0;
	var uLocal_13901 = 0;
	var uLocal_13902 = 0;
	var uLocal_13903 = 0;
	var uLocal_13904 = 0;
	var uLocal_13905 = 0;
	var uLocal_13906 = 0;
	var uLocal_13907 = 0;
	var uLocal_13908 = 1065353216;
	var uLocal_13909 = 0;
	var uLocal_13910 = 0;
	var uLocal_13911 = 1065353216;
	var uLocal_13912 = 1;
	var uLocal_13913 = 0;
	var uLocal_13914 = -1;
	var uLocal_13915 = 0;
	var uLocal_13916 = 1;
	var uLocal_13917 = 0;
	var uLocal_13918 = 0;
	var uLocal_13919 = 0;
	var uLocal_13920 = 0;
	var uLocal_13921 = 0;
	var uLocal_13922 = 0;
	var uLocal_13923 = 0;
	var uLocal_13924 = 0;
	var uLocal_13925 = 0;
	var uLocal_13926 = 1065353216;
	var uLocal_13927 = 0;
	var uLocal_13928 = 0;
	var uLocal_13929 = 1065353216;
	var uLocal_13930 = 1;
	var uLocal_13931 = 0;
	var uLocal_13932 = -1;
	var uLocal_13933 = 0;
	var uLocal_13934 = 1;
	var uLocal_13935 = 0;
	var uLocal_13936 = 0;
	var uLocal_13937 = 0;
	var uLocal_13938 = 0;
	var uLocal_13939 = 0;
	var uLocal_13940 = 0;
	var uLocal_13941 = 0;
	var uLocal_13942 = 0;
	var uLocal_13943 = 0;
	var uLocal_13944 = 1065353216;
	var uLocal_13945 = 0;
	var uLocal_13946 = 0;
	var uLocal_13947 = 1065353216;
	var uLocal_13948 = 1;
	var uLocal_13949 = 0;
	var uLocal_13950 = -1;
	var uLocal_13951 = 0;
	var uLocal_13952 = 1;
	var uLocal_13953 = 0;
	var uLocal_13954 = 0;
	var uLocal_13955 = 0;
	var uLocal_13956 = 0;
	var uLocal_13957 = 0;
	var uLocal_13958 = 0;
	var uLocal_13959 = 0;
	var uLocal_13960 = 0;
	var uLocal_13961 = 0;
	var uLocal_13962 = 1065353216;
	var uLocal_13963 = 0;
	var uLocal_13964 = 0;
	var uLocal_13965 = 1065353216;
	var uLocal_13966 = 1;
	var uLocal_13967 = 0;
	var uLocal_13968 = -1;
	var uLocal_13969 = 0;
	var uLocal_13970 = 1;
	var uLocal_13971 = 0;
	var uLocal_13972 = 0;
	var uLocal_13973 = 0;
	var uLocal_13974 = 0;
	var uLocal_13975 = 0;
	var uLocal_13976 = 0;
	var uLocal_13977 = 0;
	var uLocal_13978 = 0;
	var uLocal_13979 = 0;
	var uLocal_13980 = 1065353216;
	var uLocal_13981 = 0;
	var uLocal_13982 = 0;
	var uLocal_13983 = 1065353216;
	var uLocal_13984 = 1;
	var uLocal_13985 = 0;
	var uLocal_13986 = -1;
	var uLocal_13987 = 0;
	var uLocal_13988 = 1;
	var uLocal_13989 = 0;
	var uLocal_13990 = 0;
	var uLocal_13991 = 0;
	var uLocal_13992 = 0;
	var uLocal_13993 = 0;
	var uLocal_13994 = 0;
	var uLocal_13995 = 0;
	var uLocal_13996 = 0;
	var uLocal_13997 = 0;
	var uLocal_13998 = 1065353216;
	var uLocal_13999 = 0;
	var uLocal_14000 = 0;
	var uLocal_14001 = 1065353216;
	var uLocal_14002 = 1;
	var uLocal_14003 = 0;
	var uLocal_14004 = -1;
	var uLocal_14005 = 0;
	var uLocal_14006 = 1;
	var uLocal_14007 = 0;
	var uLocal_14008 = 0;
	var uLocal_14009 = 0;
	var uLocal_14010 = 0;
	var uLocal_14011 = 0;
	var uLocal_14012 = 0;
	var uLocal_14013 = 0;
	var uLocal_14014 = 0;
	var uLocal_14015 = 0;
	var uLocal_14016 = 1065353216;
	var uLocal_14017 = 0;
	var uLocal_14018 = 0;
	var uLocal_14019 = 1065353216;
	var uLocal_14020 = 1;
	var uLocal_14021 = 0;
	var uLocal_14022 = -1;
	var uLocal_14023 = 0;
	var uLocal_14024 = 1;
	var uLocal_14025 = 0;
	var uLocal_14026 = 0;
	var uLocal_14027 = 0;
	var uLocal_14028 = 0;
	var uLocal_14029 = 0;
	var uLocal_14030 = 0;
	var uLocal_14031 = 0;
	var uLocal_14032 = 0;
	var uLocal_14033 = 0;
	var uLocal_14034 = 1065353216;
	var uLocal_14035 = 0;
	var uLocal_14036 = 0;
	var uLocal_14037 = 1065353216;
	var uLocal_14038 = 1;
	var uLocal_14039 = 0;
	var uLocal_14040 = -1;
	var uLocal_14041 = 0;
	var uLocal_14042 = 1;
	var uLocal_14043 = 0;
	var uLocal_14044 = 0;
	var uLocal_14045 = 0;
	var uLocal_14046 = 0;
	var uLocal_14047 = 0;
	var uLocal_14048 = 0;
	var uLocal_14049 = 0;
	var uLocal_14050 = 0;
	var uLocal_14051 = 0;
	var uLocal_14052 = 1065353216;
	var uLocal_14053 = 0;
	var uLocal_14054 = 0;
	var uLocal_14055 = 1065353216;
	var uLocal_14056 = 1;
	var uLocal_14057 = 0;
	var uLocal_14058 = -1;
	var uLocal_14059 = 0;
	var uLocal_14060 = 1;
	var uLocal_14061 = 0;
	var uLocal_14062 = 0;
	var uLocal_14063 = 0;
	var uLocal_14064 = 0;
	var uLocal_14065 = 0;
	var uLocal_14066 = 0;
	var uLocal_14067 = 0;
	var uLocal_14068 = 0;
	var uLocal_14069 = 0;
	var uLocal_14070 = 1065353216;
	var uLocal_14071 = 0;
	var uLocal_14072 = 0;
	var uLocal_14073 = 1065353216;
	var uLocal_14074 = 1;
	var uLocal_14075 = 0;
	var uLocal_14076 = -1;
	var uLocal_14077 = 0;
	var uLocal_14078 = 1;
	var uLocal_14079 = 0;
	var uLocal_14080 = 0;
	var uLocal_14081 = 0;
	var uLocal_14082 = 0;
	var uLocal_14083 = 0;
	var uLocal_14084 = 0;
	var uLocal_14085 = 0;
	var uLocal_14086 = 0;
	var uLocal_14087 = 0;
	var uLocal_14088 = 1065353216;
	var uLocal_14089 = 0;
	var uLocal_14090 = 0;
	var uLocal_14091 = 1065353216;
	var uLocal_14092 = 1;
	var uLocal_14093 = 0;
	var uLocal_14094 = -1;
	var uLocal_14095 = 0;
	var uLocal_14096 = 1;
	var uLocal_14097 = 0;
	var uLocal_14098 = 0;
	var uLocal_14099 = 0;
	var uLocal_14100 = 0;
	var uLocal_14101 = 0;
	var uLocal_14102 = 0;
	var uLocal_14103 = 0;
	var uLocal_14104 = 0;
	var uLocal_14105 = 0;
	var uLocal_14106 = 1065353216;
	var uLocal_14107 = 0;
	var uLocal_14108 = 0;
	var uLocal_14109 = 1065353216;
	var uLocal_14110 = 1;
	var uLocal_14111 = 0;
	var uLocal_14112 = -1;
	var uLocal_14113 = 0;
	var uLocal_14114 = 1;
	var uLocal_14115 = 0;
	var uLocal_14116 = 0;
	var uLocal_14117 = 0;
	var uLocal_14118 = 0;
	var uLocal_14119 = 0;
	var uLocal_14120 = 0;
	var uLocal_14121 = 0;
	var uLocal_14122 = 0;
	var uLocal_14123 = 0;
	var uLocal_14124 = 1065353216;
	var uLocal_14125 = 0;
	var uLocal_14126 = 0;
	var uLocal_14127 = 1065353216;
	var uLocal_14128 = 1;
	var uLocal_14129 = 0;
	var uLocal_14130 = -1;
	var uLocal_14131 = 0;
	var uLocal_14132 = 1;
	var uLocal_14133 = 0;
	var uLocal_14134 = 0;
	var uLocal_14135 = 0;
	var uLocal_14136 = 0;
	var uLocal_14137 = 0;
	var uLocal_14138 = 0;
	var uLocal_14139 = 0;
	var uLocal_14140 = 0;
	var uLocal_14141 = 0;
	var uLocal_14142 = 1065353216;
	var uLocal_14143 = 0;
	var uLocal_14144 = 0;
	var uLocal_14145 = 1065353216;
	var uLocal_14146 = 1;
	var uLocal_14147 = 0;
	var uLocal_14148 = -1;
	var uLocal_14149 = 0;
	var uLocal_14150 = 1;
	var uLocal_14151 = 0;
	var uLocal_14152 = 0;
	var uLocal_14153 = 0;
	var uLocal_14154 = 0;
	var uLocal_14155 = 0;
	var uLocal_14156 = 0;
	var uLocal_14157 = 0;
	var uLocal_14158 = 0;
	var uLocal_14159 = 0;
	var uLocal_14160 = 1065353216;
	var uLocal_14161 = 0;
	var uLocal_14162 = 0;
	var uLocal_14163 = 1065353216;
	var uLocal_14164 = 1;
	var uLocal_14165 = 0;
	var uLocal_14166 = -1;
	var uLocal_14167 = 0;
	var uLocal_14168 = 1;
	var uLocal_14169 = 0;
	var uLocal_14170 = 0;
	var uLocal_14171 = 0;
	var uLocal_14172 = 0;
	var uLocal_14173 = 0;
	var uLocal_14174 = 0;
	var uLocal_14175 = 0;
	var uLocal_14176 = 0;
	var uLocal_14177 = 0;
	var uLocal_14178 = 1065353216;
	var uLocal_14179 = 0;
	var uLocal_14180 = 0;
	var uLocal_14181 = 1065353216;
	var uLocal_14182 = 1;
	var uLocal_14183 = 0;
	var uLocal_14184 = -1;
	var uLocal_14185 = 0;
	var uLocal_14186 = 1;
	var uLocal_14187 = 0;
	var uLocal_14188 = 0;
	var uLocal_14189 = 0;
	var uLocal_14190 = 0;
	var uLocal_14191 = 0;
	var uLocal_14192 = 0;
	var uLocal_14193 = 0;
	var uLocal_14194 = 0;
	var uLocal_14195 = 0;
	var uLocal_14196 = 1065353216;
	var uLocal_14197 = 0;
	var uLocal_14198 = 0;
	var uLocal_14199 = 1065353216;
	var uLocal_14200 = 1;
	var uLocal_14201 = 0;
	var uLocal_14202 = -1;
	var uLocal_14203 = 0;
	var uLocal_14204 = 1;
	var uLocal_14205 = 0;
	var uLocal_14206 = 0;
	var uLocal_14207 = 0;
	var uLocal_14208 = 0;
	var uLocal_14209 = 0;
	var uLocal_14210 = 0;
	var uLocal_14211 = 0;
	var uLocal_14212 = 0;
	var uLocal_14213 = 0;
	var uLocal_14214 = 1065353216;
	var uLocal_14215 = 0;
	var uLocal_14216 = 0;
	var uLocal_14217 = 1065353216;
	var uLocal_14218 = 1;
	var uLocal_14219 = 0;
	var uLocal_14220 = -1;
	var uLocal_14221 = 0;
	var uLocal_14222 = 1;
	var uLocal_14223 = 0;
	var uLocal_14224 = 0;
	var uLocal_14225 = 0;
	var uLocal_14226 = 0;
	var uLocal_14227 = 0;
	var uLocal_14228 = 0;
	var uLocal_14229 = 0;
	var uLocal_14230 = 0;
	var uLocal_14231 = 0;
	var uLocal_14232 = 1065353216;
	var uLocal_14233 = 0;
	var uLocal_14234 = 0;
	var uLocal_14235 = 1065353216;
	var uLocal_14236 = 1;
	var uLocal_14237 = 0;
	var uLocal_14238 = -1;
	var uLocal_14239 = 0;
	var uLocal_14240 = 1;
	var uLocal_14241 = 0;
	var uLocal_14242 = 0;
	var uLocal_14243 = 0;
	var uLocal_14244 = 0;
	var uLocal_14245 = 0;
	var uLocal_14246 = 0;
	var uLocal_14247 = 0;
	var uLocal_14248 = 0;
	var uLocal_14249 = 0;
	var uLocal_14250 = 1065353216;
	var uLocal_14251 = 0;
	var uLocal_14252 = 0;
	var uLocal_14253 = 1065353216;
	var uLocal_14254 = 1;
	var uLocal_14255 = 0;
	var uLocal_14256 = -1;
	var uLocal_14257 = 0;
	var uLocal_14258 = 1;
	var uLocal_14259 = 0;
	var uLocal_14260 = 0;
	var uLocal_14261 = 0;
	var uLocal_14262 = 0;
	var uLocal_14263 = 0;
	var uLocal_14264 = 0;
	var uLocal_14265 = 0;
	var uLocal_14266 = 0;
	var uLocal_14267 = 0;
	var uLocal_14268 = 1065353216;
	var uLocal_14269 = 0;
	var uLocal_14270 = 0;
	var uLocal_14271 = 1065353216;
	var uLocal_14272 = 1;
	var uLocal_14273 = 0;
	var uLocal_14274 = -1;
	var uLocal_14275 = 0;
	var uLocal_14276 = 1;
	var uLocal_14277 = 0;
	var uLocal_14278 = 0;
	var uLocal_14279 = 0;
	var uLocal_14280 = 0;
	var uLocal_14281 = 0;
	var uLocal_14282 = 0;
	var uLocal_14283 = 0;
	var uLocal_14284 = 0;
	var uLocal_14285 = 0;
	var uLocal_14286 = 1065353216;
	var uLocal_14287 = 0;
	var uLocal_14288 = 0;
	var uLocal_14289 = 1065353216;
	var uLocal_14290 = 1;
	var uLocal_14291 = 0;
	var uLocal_14292 = -1;
	var uLocal_14293 = 0;
	var uLocal_14294 = 1;
	var uLocal_14295 = 0;
	var uLocal_14296 = 0;
	var uLocal_14297 = 0;
	var uLocal_14298 = 0;
	var uLocal_14299 = 0;
	var uLocal_14300 = 0;
	var uLocal_14301 = 0;
	var uLocal_14302 = 0;
	var uLocal_14303 = 0;
	var uLocal_14304 = 1065353216;
	var uLocal_14305 = 0;
	var uLocal_14306 = 0;
	var uLocal_14307 = 1065353216;
	var uLocal_14308 = 1;
	var uLocal_14309 = 0;
	var uLocal_14310 = -1;
	var uLocal_14311 = 0;
	var uLocal_14312 = 1;
	var uLocal_14313 = 0;
	var uLocal_14314 = 0;
	var uLocal_14315 = 0;
	var uLocal_14316 = 0;
	var uLocal_14317 = 0;
	var uLocal_14318 = 0;
	var uLocal_14319 = 0;
	var uLocal_14320 = 0;
	var uLocal_14321 = 0;
	var uLocal_14322 = 1065353216;
	var uLocal_14323 = 0;
	var uLocal_14324 = 0;
	var uLocal_14325 = 1065353216;
	var uLocal_14326 = 1;
	var uLocal_14327 = 0;
	var uLocal_14328 = -1;
	var uLocal_14329 = 0;
	var uLocal_14330 = 1;
	var uLocal_14331 = 0;
	var uLocal_14332 = 0;
	var uLocal_14333 = 0;
	var uLocal_14334 = 0;
	var uLocal_14335 = 0;
	var uLocal_14336 = 0;
	var uLocal_14337 = 0;
	var uLocal_14338 = 0;
	var uLocal_14339 = 0;
	var uLocal_14340 = 1065353216;
	var uLocal_14341 = 0;
	var uLocal_14342 = 0;
	var uLocal_14343 = 1065353216;
	var uLocal_14344 = 1;
	var uLocal_14345 = 0;
	var uLocal_14346 = -1;
	var uLocal_14347 = 0;
	var uLocal_14348 = 1;
	var uLocal_14349 = 0;
	var uLocal_14350 = 0;
	var uLocal_14351 = 0;
	var uLocal_14352 = 0;
	var uLocal_14353 = 0;
	var uLocal_14354 = 0;
	var uLocal_14355 = 0;
	var uLocal_14356 = 0;
	var uLocal_14357 = 0;
	var uLocal_14358 = 1065353216;
	var uLocal_14359 = 0;
	var uLocal_14360 = 0;
	var uLocal_14361 = 1065353216;
	var uLocal_14362 = 1;
	var uLocal_14363 = 0;
	var uLocal_14364 = -1;
	var uLocal_14365 = 0;
	var uLocal_14366 = 1;
	var uLocal_14367 = 0;
	var uLocal_14368 = 0;
	var uLocal_14369 = 0;
	var uLocal_14370 = 0;
	var uLocal_14371 = 0;
	var uLocal_14372 = 0;
	var uLocal_14373 = 0;
	var uLocal_14374 = 0;
	var uLocal_14375 = 0;
	var uLocal_14376 = 1065353216;
	var uLocal_14377 = 0;
	var uLocal_14378 = 0;
	var uLocal_14379 = 1065353216;
	var uLocal_14380 = 1;
	var uLocal_14381 = 0;
	var uLocal_14382 = -1;
	var uLocal_14383 = 0;
	var uLocal_14384 = 1;
	var uLocal_14385 = 0;
	var uLocal_14386 = 0;
	var uLocal_14387 = 0;
	var uLocal_14388 = 0;
	var uLocal_14389 = 0;
	var uLocal_14390 = 0;
	var uLocal_14391 = 0;
	var uLocal_14392 = 0;
	var uLocal_14393 = 0;
	var uLocal_14394 = 1065353216;
	var uLocal_14395 = 0;
	var uLocal_14396 = 0;
	var uLocal_14397 = 1065353216;
	var uLocal_14398 = 1;
	var uLocal_14399 = 0;
	var uLocal_14400 = -1;
	var uLocal_14401 = 0;
	var uLocal_14402 = 1;
	var uLocal_14403 = 0;
	var uLocal_14404 = 0;
	var uLocal_14405 = 0;
	var uLocal_14406 = 0;
	var uLocal_14407 = 0;
	var uLocal_14408 = 0;
	var uLocal_14409 = 0;
	var uLocal_14410 = 0;
	var uLocal_14411 = 0;
	var uLocal_14412 = 1065353216;
	var uLocal_14413 = 0;
	var uLocal_14414 = 0;
	var uLocal_14415 = 1065353216;
	var uLocal_14416 = 1;
	var uLocal_14417 = 0;
	var uLocal_14418 = -1;
	var uLocal_14419 = 0;
	var uLocal_14420 = 1;
	var uLocal_14421 = 0;
	var uLocal_14422 = 0;
	var uLocal_14423 = 0;
	var uLocal_14424 = 0;
	var uLocal_14425 = 0;
	var uLocal_14426 = 0;
	var uLocal_14427 = 0;
	var uLocal_14428 = 0;
	var uLocal_14429 = 0;
	var uLocal_14430 = 1065353216;
	var uLocal_14431 = 0;
	var uLocal_14432 = 0;
	var uLocal_14433 = 1065353216;
	var uLocal_14434 = 1;
	var uLocal_14435 = 0;
	var uLocal_14436 = 8;
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
	var uLocal_14469 = 0;
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
	var uLocal_14486 = 0;
	var uLocal_14487 = 0;
	var uLocal_14488 = 0;
	var uLocal_14489 = 0;
	var uLocal_14490 = 0;
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
	var uLocal_14572 = 0;
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
	var uLocal_14696 = 0;
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
	var uLocal_14723 = 0;
	var uLocal_14724 = 0;
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
	var uLocal_14752 = 0;
	var uLocal_14753 = 0;
	var uLocal_14754 = 0;
	var uLocal_14755 = 0;
	var uLocal_14756 = 0;
	var uLocal_14757 = 0;
	var uLocal_14758 = 0;
	var uLocal_14759 = 0;
	var uLocal_14760 = 0;
	var uLocal_14761 = 0;
	var uLocal_14762 = 0;
	var uLocal_14763 = 0;
	var uLocal_14764 = 0;
	var uLocal_14765 = 8;
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
	var uLocal_14786 = -1;
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
	var uLocal_14798 = 0;
	var uLocal_14799 = 0;
	var uLocal_14800 = 0;
	var uLocal_14801 = 0;
	var uLocal_14802 = 0;
	var uLocal_14803 = 0;
	var uLocal_14804 = 0;
	var uLocal_14805 = 0;
	var uLocal_14806 = 0;
	var uLocal_14807 = 0;
	var uLocal_14808 = -1;
	var uLocal_14809 = 0;
	var uLocal_14810 = 0;
	var uLocal_14811 = 0;
	var uLocal_14812 = 0;
	var uLocal_14813 = 0;
	var uLocal_14814 = 0;
	var uLocal_14815 = 0;
	var uLocal_14816 = 0;
	var uLocal_14817 = 0;
	var uLocal_14818 = 0;
	var uLocal_14819 = 0;
	var uLocal_14820 = 0;
	var uLocal_14821 = 0;
	var uLocal_14822 = 0;
	var uLocal_14823 = 0;
	var uLocal_14824 = 0;
	var uLocal_14825 = 0;
	var uLocal_14826 = 0;
	var uLocal_14827 = 0;
	var uLocal_14828 = 0;
	var uLocal_14829 = 0;
	var uLocal_14830 = -1;
	var uLocal_14831 = 0;
	var uLocal_14832 = 0;
	var uLocal_14833 = 0;
	var uLocal_14834 = 0;
	var uLocal_14835 = 0;
	var uLocal_14836 = 0;
	var uLocal_14837 = 0;
	var uLocal_14838 = 0;
	var uLocal_14839 = 0;
	var uLocal_14840 = 0;
	var uLocal_14841 = 0;
	var uLocal_14842 = 0;
	var uLocal_14843 = 0;
	var uLocal_14844 = 0;
	var uLocal_14845 = 0;
	var uLocal_14846 = 0;
	var uLocal_14847 = 0;
	var uLocal_14848 = 0;
	var uLocal_14849 = 0;
	var uLocal_14850 = 0;
	var uLocal_14851 = 0;
	var uLocal_14852 = -1;
	var uLocal_14853 = 0;
	var uLocal_14854 = 0;
	var uLocal_14855 = 0;
	var uLocal_14856 = 0;
	var uLocal_14857 = 0;
	var uLocal_14858 = 0;
	var uLocal_14859 = 0;
	var uLocal_14860 = 0;
	var uLocal_14861 = 0;
	var uLocal_14862 = 0;
	var uLocal_14863 = 0;
	var uLocal_14864 = 0;
	var uLocal_14865 = 0;
	var uLocal_14866 = 0;
	var uLocal_14867 = 0;
	var uLocal_14868 = 0;
	var uLocal_14869 = 0;
	var uLocal_14870 = 0;
	var uLocal_14871 = 0;
	var uLocal_14872 = 0;
	var uLocal_14873 = 0;
	var uLocal_14874 = -1;
	var uLocal_14875 = 0;
	var uLocal_14876 = 0;
	var uLocal_14877 = 0;
	var uLocal_14878 = 0;
	var uLocal_14879 = 0;
	var uLocal_14880 = 0;
	var uLocal_14881 = 0;
	var uLocal_14882 = 0;
	var uLocal_14883 = 0;
	var uLocal_14884 = 0;
	var uLocal_14885 = 0;
	var uLocal_14886 = 0;
	var uLocal_14887 = 0;
	var uLocal_14888 = 0;
	var uLocal_14889 = 0;
	var uLocal_14890 = 0;
	var uLocal_14891 = 0;
	var uLocal_14892 = 0;
	var uLocal_14893 = 0;
	var uLocal_14894 = 0;
	var uLocal_14895 = 0;
	var uLocal_14896 = -1;
	var uLocal_14897 = 0;
	var uLocal_14898 = 0;
	var uLocal_14899 = 0;
	var uLocal_14900 = 0;
	var uLocal_14901 = 0;
	var uLocal_14902 = 0;
	var uLocal_14903 = 0;
	var uLocal_14904 = 0;
	var uLocal_14905 = 0;
	var uLocal_14906 = 0;
	var uLocal_14907 = 0;
	var uLocal_14908 = 0;
	var uLocal_14909 = 0;
	var uLocal_14910 = 0;
	var uLocal_14911 = 0;
	var uLocal_14912 = 0;
	var uLocal_14913 = 0;
	var uLocal_14914 = 0;
	var uLocal_14915 = 0;
	var uLocal_14916 = 0;
	var uLocal_14917 = 0;
	var uLocal_14918 = -1;
	var uLocal_14919 = 0;
	var uLocal_14920 = 0;
	var uLocal_14921 = 0;
	var uLocal_14922 = 0;
	var uLocal_14923 = 0;
	var uLocal_14924 = 0;
	var uLocal_14925 = 0;
	var uLocal_14926 = 0;
	var uLocal_14927 = 0;
	var uLocal_14928 = 0;
	var uLocal_14929 = 0;
	var uLocal_14930 = 0;
	var uLocal_14931 = 0;
	var uLocal_14932 = 0;
	var uLocal_14933 = 0;
	var uLocal_14934 = 0;
	var uLocal_14935 = 0;
	var uLocal_14936 = 0;
	var uLocal_14937 = 0;
	var uLocal_14938 = 0;
	var uLocal_14939 = 0;
	var uLocal_14940 = -1;
	var uLocal_14941 = 0;
	var uLocal_14942 = 11;
	var uLocal_14943 = 0;
	var uLocal_14944 = 0;
	var uLocal_14945 = 0;
	var uLocal_14946 = 0;
	var uLocal_14947 = 0;
	var uLocal_14948 = 0;
	var uLocal_14949 = 0;
	var uLocal_14950 = 0;
	var uLocal_14951 = 0;
	var uLocal_14952 = 0;
	var uLocal_14953 = 0;
	var uLocal_14954 = 0;
	var uLocal_14955 = 0;
	var uLocal_14956 = 0;
	var uLocal_14957 = 0;
	var uLocal_14958 = 0;
	var uLocal_14959 = 0;
	var uLocal_14960 = 0;
	var uLocal_14961 = 0;
	var uLocal_14962 = 0;
	var uLocal_14963 = 0;
	var uLocal_14964 = 0;
	var uLocal_14965 = 0;
	var uLocal_14966 = 0;
	var uLocal_14967 = 0;
	var uLocal_14968 = 0;
	var uLocal_14969 = 0;
	var uLocal_14970 = 0;
	var uLocal_14971 = 0;
	var uLocal_14972 = 0;
	var uLocal_14973 = 0;
	var uLocal_14974 = 0;
	var uLocal_14975 = 0;
	var uLocal_14976 = 0;
	var uLocal_14977 = 0;
	var uLocal_14978 = 0;
	var uLocal_14979 = 0;
	var uLocal_14980 = 0;
	var uLocal_14981 = 0;
	var uLocal_14982 = 0;
	var uLocal_14983 = 0;
	var uLocal_14984 = 0;
	var uLocal_14985 = 0;
	var uLocal_14986 = 0;
	var uLocal_14987 = 0;
	var uLocal_14988 = 0;
	var uLocal_14989 = 0;
	var uLocal_14990 = 0;
	var uLocal_14991 = 0;
	var uLocal_14992 = 0;
	var uLocal_14993 = 0;
	var uLocal_14994 = 0;
	var uLocal_14995 = 0;
	var uLocal_14996 = 0;
	var uLocal_14997 = 0;
	var uLocal_14998 = 0;
	var uLocal_14999 = 0;
	var uLocal_15000 = 0;
	var uLocal_15001 = 0;
	var uLocal_15002 = 0;
	var uLocal_15003 = 0;
	var uLocal_15004 = 0;
	var uLocal_15005 = 0;
	var uLocal_15006 = 0;
	var uLocal_15007 = 0;
	var uLocal_15008 = 0;
	var uLocal_15009 = 0;
	var uLocal_15010 = 0;
	var uLocal_15011 = 0;
	var uLocal_15012 = 0;
	var uLocal_15013 = 0;
	var uLocal_15014 = 0;
	var uLocal_15015 = 0;
	var uLocal_15016 = 0;
	var uLocal_15017 = 0;
	var uLocal_15018 = 0;
	var uLocal_15019 = 0;
	var uLocal_15020 = 0;
	var uLocal_15021 = 0;
	var uLocal_15022 = 0;
	var uLocal_15023 = 0;
	var uLocal_15024 = 0;
	var uLocal_15025 = 0;
	var uLocal_15026 = 0;
	var uLocal_15027 = 0;
	var uLocal_15028 = 0;
	var uLocal_15029 = 0;
	var uLocal_15030 = 0;
	var uLocal_15031 = 0;
	var uLocal_15032 = 0;
	var uLocal_15033 = 0;
	var uLocal_15034 = 0;
	var uLocal_15035 = 0;
	var uLocal_15036 = 0;
	var uLocal_15037 = 0;
	var uLocal_15038 = 0;
	var uLocal_15039 = 0;
	var uLocal_15040 = 0;
	var uLocal_15041 = 0;
	var uLocal_15042 = 0;
	var uLocal_15043 = 0;
	var uLocal_15044 = 0;
	var uLocal_15045 = 0;
	var uLocal_15046 = 0;
	var uLocal_15047 = 0;
	var uLocal_15048 = 0;
	var uLocal_15049 = 0;
	var uLocal_15050 = 0;
	var uLocal_15051 = 0;
	var uLocal_15052 = 0;
	var uLocal_15053 = 2;
	var uLocal_15054 = 0;
	var uLocal_15055 = 0;
	var uLocal_15056 = 0;
	var uLocal_15057 = 0;
	var uLocal_15058 = 0;
	var uLocal_15059 = 0;
	var uLocal_15060 = 0;
	var uLocal_15061 = 0;
	var uLocal_15062 = 0;
	var uLocal_15063 = 0;
	var uLocal_15064 = 0;
	var uLocal_15065 = 0;
	var uLocal_15066 = 0;
	var uLocal_15067 = 0;
	var uLocal_15068 = 0;
	var uLocal_15069 = 0;
	var uLocal_15070 = 0;
	var uLocal_15071 = 0;
	var uLocal_15072 = 0;
	var uLocal_15073 = 0;
	var uLocal_15074 = 0;
	var uLocal_15075 = 0;
	var uLocal_15076 = 0;
	var uLocal_15077 = 0;
	var uLocal_15078 = 0;
	var uLocal_15079 = 0;
	var uLocal_15080 = 0;
	var uLocal_15081 = 0;
	var uLocal_15082 = 0;
	var uLocal_15083 = 0;
	var uLocal_15084 = 0;
	var uLocal_15085 = 0;
	var uLocal_15086 = 0;
	var uLocal_15087 = 0;
	var uLocal_15088 = 2;
	var uLocal_15089 = 0;
	var uLocal_15090 = 0;
	var uLocal_15091 = 0;
	var uLocal_15092 = 0;
	var uLocal_15093 = 0;
	var uLocal_15094 = 0;
	var uLocal_15095 = 0;
	var uLocal_15096 = 0;
	var uLocal_15097 = 0;
	var uLocal_15098 = 0;
	var uLocal_15099 = 0;
	var uLocal_15100 = 0;
	var uLocal_15101 = 0;
	var uLocal_15102 = 0;
	var uLocal_15103 = 0;
	var uLocal_15104 = 0;
	var uLocal_15105 = -1;
	var uLocal_15106 = 0;
	var uLocal_15107 = 0;
	var uLocal_15108 = -1;
	var uLocal_15109 = -1082130432;
	var uLocal_15110 = 0;
	var uLocal_15111 = 0;
	var uLocal_15112 = 0;
	var uLocal_15113 = 0;
	var uLocal_15114 = 0;
	var uLocal_15115 = 0;
	var uLocal_15116 = 0;
	var uLocal_15117 = 0;
	var uLocal_15118 = 0;
	var uLocal_15119 = 0;
	var uLocal_15120 = 0;
	var uLocal_15121 = 0;
	var uLocal_15122 = 0;
	var uLocal_15123 = 0;
	var uLocal_15124 = 0;
	var uLocal_15125 = 0;
	var uLocal_15126 = 0;
	var uLocal_15127 = 0;
	var uLocal_15128 = 0;
	var uLocal_15129 = 0;
	var uLocal_15130 = 0;
	var uLocal_15131 = 0;
	var uLocal_15132 = 0;
	var uLocal_15133 = 0;
	var uLocal_15134 = 0;
	var uLocal_15135 = 0;
	var uLocal_15136 = 0;
	var uLocal_15137 = 0;
	var uLocal_15138 = 0;
	var uLocal_15139 = 0;
	var uLocal_15140 = 0;
	var uLocal_15141 = 0;
	var uLocal_15142 = 0;
	var uLocal_15143 = 0;
	var uLocal_15144 = 0;
	var uLocal_15145 = 0;
	var uLocal_15146 = 0;
	var uLocal_15147 = 0;
	var uLocal_15148 = 0;
	var uLocal_15149 = 0;
	var uLocal_15150 = 0;
	var uLocal_15151 = 0;
	var uLocal_15152 = 0;
	var uLocal_15153 = 0;
	var uLocal_15154 = 0;
	var uLocal_15155 = 0;
	var uLocal_15156 = 0;
	var uLocal_15157 = 0;
	var uLocal_15158 = 0;
	var uLocal_15159 = 0;
	var uLocal_15160 = 0;
	var uLocal_15161 = 0;
	var uLocal_15162 = 0;
	var uLocal_15163 = 0;
	var uLocal_15164 = 0;
	var uLocal_15165 = 0;
	var uLocal_15166 = 0;
	var uLocal_15167 = 0;
	var uLocal_15168 = 0;
	var uLocal_15169 = 0;
	var uLocal_15170 = 0;
	var uLocal_15171 = 0;
	var uLocal_15172 = 0;
	var uLocal_15173 = 0;
	var uLocal_15174 = 0;
	var uLocal_15175 = 0;
	var uLocal_15176 = 0;
	var uLocal_15177 = 0;
	var uLocal_15178 = 0;
	var uLocal_15179 = 0;
	var uLocal_15180 = 0;
	var uLocal_15181 = 0;
	var uLocal_15182 = 0;
	var uLocal_15183 = 0;
	var uLocal_15184 = 0;
	var uLocal_15185 = 0;
	var uLocal_15186 = 0;
	var uLocal_15187 = 0;
	var uLocal_15188 = 0;
	var uLocal_15189 = 0;
	var uLocal_15190 = 0;
	var uLocal_15191 = 24;
	var uLocal_15192 = 0;
	var uLocal_15193 = 0;
	var uLocal_15194 = 0;
	var uLocal_15195 = 0;
	var uLocal_15196 = 0;
	var uLocal_15197 = 0;
	var uLocal_15198 = 0;
	var uLocal_15199 = 0;
	var uLocal_15200 = 0;
	var uLocal_15201 = 0;
	var uLocal_15202 = 0;
	var uLocal_15203 = 0;
	var uLocal_15204 = 0;
	var uLocal_15205 = 0;
	var uLocal_15206 = 0;
	var uLocal_15207 = 0;
	var uLocal_15208 = 0;
	var uLocal_15209 = 0;
	var uLocal_15210 = 0;
	var uLocal_15211 = 0;
	var uLocal_15212 = 0;
	var uLocal_15213 = 0;
	var uLocal_15214 = 0;
	var uLocal_15215 = 0;
	var uLocal_15216 = 0;
	var uLocal_15217 = 0;
	var uLocal_15218 = 0;
	var uLocal_15219 = 0;
	var uLocal_15220 = 0;
	var uLocal_15221 = 0;
	var uLocal_15222 = 0;
	var uLocal_15223 = 0;
	var uLocal_15224 = 0;
	var uLocal_15225 = 0;
	var uLocal_15226 = 0;
	var uLocal_15227 = 0;
	var uLocal_15228 = 0;
	var uLocal_15229 = 0;
	var uLocal_15230 = 0;
	var uLocal_15231 = 0;
	var uLocal_15232 = 0;
	var uLocal_15233 = 0;
	var uLocal_15234 = 0;
	var uLocal_15235 = 0;
	var uLocal_15236 = 0;
	var uLocal_15237 = 0;
	var uLocal_15238 = 0;
	var uLocal_15239 = 0;
	var uLocal_15240 = 0;
	var uLocal_15241 = 0;
	var uLocal_15242 = 0;
	var uLocal_15243 = 0;
	var uLocal_15244 = 0;
	var uLocal_15245 = 0;
	var uLocal_15246 = 0;
	var uLocal_15247 = 0;
	var uLocal_15248 = 0;
	var uLocal_15249 = 0;
	var uLocal_15250 = 0;
	var uLocal_15251 = 0;
	var uLocal_15252 = 0;
	var uLocal_15253 = 0;
	var uLocal_15254 = 0;
	var uLocal_15255 = 0;
	var uLocal_15256 = 0;
	var uLocal_15257 = 0;
	var uLocal_15258 = 0;
	var uLocal_15259 = 0;
	var uLocal_15260 = 0;
	var uLocal_15261 = 0;
	var uLocal_15262 = 0;
	var uLocal_15263 = 0;
	var uLocal_15264 = 0;
	var uLocal_15265 = 0;
	var uLocal_15266 = 0;
	var uLocal_15267 = 0;
	var uLocal_15268 = 0;
	var uLocal_15269 = 0;
	var uLocal_15270 = 0;
	var uLocal_15271 = 0;
	var uLocal_15272 = 0;
	var uLocal_15273 = 0;
	var uLocal_15274 = 0;
	var uLocal_15275 = 0;
	var uLocal_15276 = 0;
	var uLocal_15277 = 0;
	var uLocal_15278 = 0;
	var uLocal_15279 = 0;
	var uLocal_15280 = 0;
	var uLocal_15281 = 0;
	var uLocal_15282 = 0;
	var uLocal_15283 = 0;
	var uLocal_15284 = 0;
	var uLocal_15285 = 0;
	var uLocal_15286 = 0;
	var uLocal_15287 = 0;
	var uLocal_15288 = 0;
	var uLocal_15289 = 0;
	var uLocal_15290 = 0;
	var uLocal_15291 = 0;
	var uLocal_15292 = 0;
	var uLocal_15293 = 0;
	var uLocal_15294 = 0;
	var uLocal_15295 = 0;
	var uLocal_15296 = 0;
	var uLocal_15297 = 0;
	var uLocal_15298 = 0;
	var uLocal_15299 = 0;
	var uLocal_15300 = 0;
	var uLocal_15301 = 0;
	var uLocal_15302 = 0;
	var uLocal_15303 = 0;
	var uLocal_15304 = 0;
	var uLocal_15305 = 0;
	var uLocal_15306 = 0;
	var uLocal_15307 = 0;
	var uLocal_15308 = 0;
	var uLocal_15309 = 0;
	var uLocal_15310 = 0;
	var uLocal_15311 = 0;
	var uLocal_15312 = 0;
	var uLocal_15313 = 0;
	var uLocal_15314 = 0;
	var uLocal_15315 = -1;
	var uLocal_15316 = 0;
	var uLocal_15317 = 0;
	var uLocal_15318 = 0;
	var uLocal_15319 = 0;
	var uLocal_15320 = 0;
	var uLocal_15321 = 0;
	var uLocal_15322 = 0;
	var uLocal_15323 = 0;
	var uLocal_15324 = 0;
	var uLocal_15325 = 0;
	var uLocal_15326 = 0;
	var uLocal_15327 = 0;
	var uLocal_15328 = 0;
	var uLocal_15329 = 0;
	var uLocal_15330 = 0;
	var uLocal_15331 = 0;
	var uLocal_15332 = 0;
	var uLocal_15333 = 0;
	var uLocal_15334 = 0;
	var uLocal_15335 = 0;
	var uLocal_15336 = 0;
	var uLocal_15337 = 0;
	var uLocal_15338 = 0;
	var uLocal_15339 = 0;
	var uLocal_15340 = 0;
	var uLocal_15341 = 0;
	var uLocal_15342 = -1;
	var uLocal_15343 = 20;
	var uLocal_15344 = 0;
	var uLocal_15345 = 0;
	var uLocal_15346 = 0;
	var uLocal_15347 = 0;
	var uLocal_15348 = 0;
	var uLocal_15349 = 0;
	var uLocal_15350 = 0;
	var uLocal_15351 = 0;
	var uLocal_15352 = 0;
	var uLocal_15353 = 0;
	var uLocal_15354 = 0;
	var uLocal_15355 = 0;
	var uLocal_15356 = 0;
	var uLocal_15357 = 0;
	var uLocal_15358 = 0;
	var uLocal_15359 = 0;
	var uLocal_15360 = 0;
	var uLocal_15361 = 0;
	var uLocal_15362 = 0;
	var uLocal_15363 = 0;
	var uLocal_15364 = 0;
	var uLocal_15365 = 0;
	var uLocal_15366 = 0;
	var uLocal_15367 = 0;
	var uLocal_15368 = 0;
	var uLocal_15369 = 0;
	var uLocal_15370 = 0;
	var uLocal_15371 = 1028443341;
	var uLocal_15372 = 1038174126;
	var uLocal_15373 = 1065353216;
	var uLocal_15374 = 1065353216;
	var uLocal_15375 = 1086324736;
	var uLocal_15376 = 1082130432;
	var uLocal_15377 = 1073741824;
	var uLocal_15378 = 1065353216;
	var uLocal_15379 = 1108082688;
	var uLocal_15380 = 1108082688;
	var uLocal_15381 = 3000;
	var uLocal_15382 = 1092616192;
	var uLocal_15383 = 0;
	var uLocal_15384 = 0;
	var uLocal_15385 = 0;
	var uLocal_15386 = 0;
	var uLocal_15387 = 0;
	var uLocal_15388 = 0;
	var uLocal_15389 = 0;
	var uLocal_15390 = 0;
	var uLocal_15391 = 0;
	var uLocal_15392 = 0;
	var uLocal_15393 = 0;
	var uLocal_15394 = 0;
	var uLocal_15395 = 0;
	var uLocal_15396 = 0;
	var uLocal_15397 = 0;
	var uLocal_15398 = 0;
	var uLocal_15399 = 0;
	var uLocal_15400 = 0;
	var uLocal_15401 = 0;
	var uLocal_15402 = 0;
	var uLocal_15403 = 0;
	var uLocal_15404 = 0;
	var uLocal_15405 = 0;
	var uLocal_15406 = 0;
	var uLocal_15407 = 0;
	var uLocal_15408 = 0;
	var uLocal_15409 = 0;
	var uLocal_15410 = 0;
	var uLocal_15411 = 0;
	var uLocal_15412 = 0;
	var uLocal_15413 = 0;
	var uLocal_15414 = 0;
	var uLocal_15415 = 0;
	var uLocal_15416 = 0;
	var uLocal_15417 = -1;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_241 = 1;
	iLocal_242 = 2;
	iLocal_243 = 3;
	iLocal_244 = 4;
	iLocal_245 = 5;
	iLocal_246 = 6;
	iLocal_247 = 7;
	iLocal_248 = 25;
	iLocal_287 = 2;
	vLocal_727 = { 2747.294f, -1069.217f, 46.944f };
	vLocal_730 = { 2695.708f, -1061.576f, 46.905f };
	vLocal_733 = { 2725.716f, -1060.933f, 47.225f };
	vLocal_736 = { 2734.709f, -1086.076f, 45.9407f };
	vLocal_751 = { 0.75f, 2.5f, 0f };
	vLocal_754 = { func_1(7, 20) };
	vLocal_757 = { func_1(7, 21) };
	vLocal_760 = { func_1(7, 23) };
	iLocal_797 = -1;
	fLocal_808 = 1f;
	fLocal_809 = 2f;
	sLocal_821 = "OFFSCREEN_FORESHADOW_WOOD_STONE_CRASH";
	sLocal_822 = "OFFSCREEN_WOOD_STONE_CRASH";
	sLocal_823 = "POLICE_WHISTLE_MULTI";
	sLocal_824 = "MOB2_SOUNDSET";
	sLocal_825 = "PL_POLICE_DISCOVER_BODY_ALT";
	sLocal_826 = "pl_drunk";
	sLocal_827 = "pl_exit_left";
	sLocal_828 = "pl_exit_right";
	sLocal_829 = "pl_Lt_shoot";
	sLocal_830 = "pl_Rt_shoot";
	sLocal_831 = "mob2_intro_dutch";
	sLocal_832 = "mob2_intro_john";
	sLocal_833 = "mob2_ToCemetery_JohnMounts";
	sLocal_834 = "mob2_ToCemetery_JohnLeads";
	sLocal_835 = "mob2_JohnWalkCemetery";
	sLocal_836 = "mob2_InvestigateCemetery_JohnToMausoleum";
	sLocal_837 = "mob2_PoliceSearch_01East";
	sLocal_838 = "mob2_PoliceSearch_02Center";
	sLocal_839 = "mob2_PoliceSearch_03West";
	sLocal_840 = "mob2_PoliceSearch_04Exit";
	sLocal_841 = "mob2_PoliceSearch_05Exit";
	sLocal_842 = "mob2_RedHer_Drunk_ExitLeft";
	sLocal_843 = "mob2_RedHer_Drunk_ExitRight";
	sLocal_844 = "mob2_ToDutch_John";
	sLocal_845 = "mob2_JohnCombat";
	sLocal_846 = "mob2_Dutch_HorseWalk";
	sLocal_847 = "mob2_ArthurWalkMansion";
	sLocal_848 = "MOB2_INT_LIB_1";
	sLocal_850 = "G_M_M_UNIBRONTEGOONS_01";
	sLocal_851 = "G_M_M_UniBronteGoons_01^1";
	fLocal_1495 = 2f;
	fLocal_1496 = 10f;
	fLocal_1497 = 20f;
	fLocal_1498 = 10f;
	iLocal_1668 = 1;
	iLocal_1669 = 1;
	iLocal_1670 = 1;
	iLocal_1671 = 1;
	iLocal_1672 = 1;
	iLocal_1673 = 1;
	iLocal_1674 = 1;
	iLocal_1675 = 1;
	iLocal_1676 = 1;
	iLocal_1677 = 1;
	iLocal_1678 = 1;
	iLocal_1679 = 1;
	iLocal_1680 = 1;
	iLocal_1681 = 1;
	iLocal_1716 = GET_HASH_KEY("A_C_CROW_01");
	iLocal_1987 = -516807739;
	iLocal_1988 = -777091906;
	iLocal_1989 = GET_HASH_KEY("DOOR_NEW_SLM_CEM_PROPS01_B");
	iLocal_1990 = 596190197;
	iLocal_1991 = -637058511;
	iLocal_1992 = -821998382;
	iLocal_1993 = 986162257;
	iLocal_1994 = 568349786;
	iLocal_1995 = 286634637;
	iLocal_1996 = -1939849033;
	iLocal_1997 = -1281804213;
	iLocal_1998 = -345078944;
	iLocal_1999 = -1583648841;
	iLocal_2000 = 1375261715;
	iLocal_2001 = -1109316634;
	iLocal_2002 = 354881770;
	iLocal_2003 = -1618074186;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4642))
	{
		func_2(&uLocal_2238, 1073741824 /* Float: 2f */);
		func_3(&uLocal_2238, 1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!func_4(64))
	{
		BUILTIN::WAIT(0);
	}
	func_5(&uScriptParam_0, &uLocal_2238);
	func_6(&uLocal_2238);
	while (!func_7(&uLocal_2238, -2147483648))
	{
		func_8(&uLocal_2238);
		BUILTIN::WAIT(0);
	}
	while (!func_3(&uLocal_2238, 0))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

Vector3 func_1(int iParam0, int iParam1)
{
	return func_9(iParam0, iParam1);
}

void func_2(char[4] cParam0, int iParam1)
{
	cParam0->f_5309 = (cParam0->f_5309 || iParam1);
}

bool func_3(char[4] cParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	struct<8> Var6;

	if (func_10(cParam0, 4096))
	{
		return true;
	}
	if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 4096)
	{
		func_11(cParam0);
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
		HUD::_DISPLAY_HUD_COMPONENT(1331687942);
		if (func_12(Global_43801))
		{
			func_13(&Global_43801, 1, 1);
		}
		UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
		MISC::_0x1096603B519C905F("");
		func_15(func_14(cParam0->f_607), 0, 2);
		func_16();
		func_17(1);
		func_18(1, 0);
		func_19(cParam0, 1);
		func_20(0);
		UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
		Global_36605 = 0;
		func_21(3);
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
		{
			TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(GET_HASH_KEY("WORLD_PLAYER_SEAT_LEDGE"), true);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (!bParam1)
	{
		if (!func_7(cParam0, 1048576))
		{
			if (func_22() == 0)
			{
				func_23(0);
			}
			else if (func_24(cParam0) != 0)
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					if (CAM::_0x1204EB53A5FBC63D())
					{
						return false;
					}
					if (func_24(cParam0) == 1 || func_24(cParam0) == 2)
					{
						if (func_25(&(cParam0->f_8269)) && func_26(&(cParam0->f_8269)))
						{
							func_27(0, &(cParam0->f_8269.f_1282));
						}
					}
					if (!func_28(&(cParam0->f_13118)))
					{
						func_29(&(cParam0->f_13118), 0);
					}
					bVar0 = CAM::IS_DEATH_FAIL_CAMERA_RUNNING();
					if (bVar0)
					{
						func_2(cParam0, 256);
					}
					bVar1 = CAM::_0x7CE9DC58E3E4755F();
					if (bVar1 && func_7(cParam0, 256))
					{
						CAM::_0x16E9ABDD34DDD931();
						CAM::DO_SCREEN_FADE_OUT(0);
					}
					else
					{
						if (((!bVar0 && !func_30(cParam0, bVar1)) && !func_31()) && !func_7(cParam0, 80))
						{
							if (!bVar1)
							{
								func_32(cParam0);
							}
							return false;
						}
						if (func_7(cParam0, 64))
						{
							CAM::_0x16E9ABDD34DDD931();
							CAM::DO_SCREEN_FADE_OUT(0);
						}
						else if (func_24(cParam0) == 2)
						{
							if (cParam0->f_13104 == -1)
							{
								if (func_33(cParam0))
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
						else if (func_24(cParam0) == 1)
						{
							if (func_30(cParam0, bVar1))
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
			else if (func_7(cParam0, 2))
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
			if (!func_34() && func_24(cParam0) != 0)
			{
				func_38(cParam0, func_36(func_35(cParam0)), func_36(func_37(cParam0)), func_35(cParam0), func_37(cParam0));
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
	func_2(cParam0, 1048576);
	if (!func_7(cParam0, 2097152))
	{
		if (!func_11(cParam0))
		{
			return false;
		}
		func_2(cParam0, 2097152);
	}
	MISC::_0x1096603B519C905F("");
	STREAMING::CLEAR_FOCUS();
	if (MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_EXISTS())
	{
		MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_DELETE();
	}
	MISC::SET_TIME_SCALE(1f);
	func_39(&(cParam0->f_8269));
	if (func_25(&(cParam0->f_8269)))
	{
		func_40(&(cParam0->f_8269));
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
	func_41(1);
	func_42(1);
	LAW::_0xC5EB2755FA25F1E9(1);
	func_43(0);
	func_44();
	func_21(3);
	if (!func_7(cParam0, 8))
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
		HUD::_DISPLAY_HUD_COMPONENT(724769646);
	}
	func_17(1);
	func_45();
	func_46();
	HUD::SET_MISSION_NAME(false, 0);
	func_47();
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	CLOCK::PAUSE_CLOCK(false, 0);
	PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 1f);
	PLAYER::_0x19B2C7A6C34FAD54(PLAYER::PLAYER_ID(), 1f);
	func_48(cParam0);
	func_49(1, 0);
	func_50(2);
	if (!Global_1935630.f_12)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
		PED::_0xAAC0EE3B4999ABB5(Global_35, false);
		WEAPON::_0xB832F1A686B9B810(Global_35, func_51(), 0);
		PED::SET_PED_CONFIG_FLAG(Global_35, 308, false);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
		PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
		func_52(Global_35);
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
	func_53(&(cParam0->f_10792));
	func_54();
	CAM::STOP_GAMEPLAY_HINT(true);
	func_41(1);
	func_55();
	if (func_56())
	{
		STREAMING::SET_POPULATION_BUDGET_MULTIPLIER(0.3f);
	}
	func_57(0, 14);
	bVar2 = false;
	if (func_24(cParam0) == 0)
	{
		bVar2 = true;
	}
	else
	{
		func_58(cParam0);
	}
	func_59(cParam0, 0, !bVar2, bVar2);
	func_60(cParam0, !bVar2);
	func_61(0);
	func_61(1);
	PLAYER::_0xDF93973251FB2CA5(PLAYER::PLAYER_ID(), 1);
	func_62(0);
	func_64(func_63(cParam0));
	func_65(func_63(cParam0));
	func_66(0);
	func_67(0);
	func_68(func_24(cParam0));
	func_69(cParam0);
	if (!bVar2)
	{
		func_18(1, 0);
	}
	if (func_24(cParam0) != 1)
	{
		func_70(0, &(cParam0->f_8269.f_1282));
	}
	Global_43805 = -1;
	func_71(1);
	func_72(0);
	func_73(&Global_1935630, 2097152);
	func_20(0);
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
	if (func_24(cParam0) == 0)
	{
		func_74(Global_1835011[cParam0->f_607 /*74*/].f_1);
	}
	func_75();
	if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(GET_HASH_KEY("WORLD_PLAYER_SEAT_LEDGE"), true);
	}
	if (!bParam1)
	{
		switch (func_24(cParam0))
		{
			case 0:
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					if ((!CAM::IS_SCREEN_FADING_IN() && !func_7(cParam0, 4)) && !func_7(cParam0, 2))
					{
						CAM::DO_SCREEN_FADE_IN(1000);
					}
				}
				func_76(cParam0);
				func_77(cParam0);
				func_78();
				func_80(func_79(), 0);
				if (func_22() == 0)
				{
					func_81(0);
				}
				func_82(cParam0->f_607);
				bVar3 = func_83();
				if (!func_84(32768))
				{
					func_85(func_14(cParam0->f_607), !func_7(cParam0, 128), 1, bVar3, 1);
				}
				else
				{
					func_86(func_14(cParam0->f_607), bVar3);
				}
				func_19(cParam0, bParam1);
				if (cParam0->f_607 != 77)
				{
					UILOG::_UILOG_MARK_MISSION_COMPLETED(func_87(cParam0));
				}
				func_16();
				if (func_84(32768))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					func_88();
					func_89(0);
				}
				else if (func_7(cParam0, 2))
				{
					if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
					func_90(1);
					func_91();
					func_92(6);
					func_93(4096);
				}
				break;
			case 1:
			case 2:
			case 3:
			case 6:
				func_94(func_14(cParam0->f_607));
				func_95();
				if (func_24(cParam0) == 2)
				{
					func_97(func_96(GET_HASH_KEY("DEATHS_ON_CURRENT_DEED")), 1);
				}
				LAW::_0x55F37F5F3F2475E1();
				LAW::_0x062B4A4A3396351D(PLAYER::GET_PLAYER_INDEX());
				LAW::_0x07E8B8B20570271C(PLAYER::GET_PLAYER_INDEX());
				break;
			case 5:
				if (func_22() == 0)
				{
					func_81(0);
				}
				func_95();
				Var4 = { func_96(GET_HASH_KEY("DEATHS_ON_CURRENT_DEED")) };
				STATS::_0x0FEE2561120F3333(&Var4);
				func_15(func_14(cParam0->f_607), 0, 2);
				break;
			default:
				func_85(func_14(cParam0->f_607), 1, 1, 0, 1);
				func_16();
				break;
		}
		if (func_24(cParam0) != 0)
		{
			Var6 = { func_98(cParam0) };
			func_99(func_14(cParam0->f_607), func_24(cParam0), &Var6, 0, 0, func_7(cParam0, 64));
		}
	}
	func_100(1);
	func_21(3);
	func_101(cParam0, 4096);
	return true;
}

bool func_4(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

void func_5(var uParam0, char[4] cParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	PED::_0xED9582B3DA8F02B4(20);
	cParam1->f_608 = uParam0->f_1;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (!func_22() == 0)
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
	func_102(cParam1);
	if (!func_22() == 0)
	{
		if (func_103(cParam1) > 0)
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
	if (func_104())
	{
		func_105(cParam1, 4194304);
	}
	if (func_106())
	{
		func_105(cParam1, 8388608);
	}
	if (func_107())
	{
		if (!func_106() && !func_104())
		{
			func_105(cParam1, 4);
		}
		else
		{
			if (func_106())
			{
			}
			if (func_104())
			{
			}
		}
		func_109(cParam1, func_108());
	}
	func_110(cParam1, uParam0);
	func_111(cParam1);
	if (cParam1->f_13105 > PED::_0x62DE46F061CAA468())
	{
		PED::_0xF008E0BA1FE1D644((cParam1->f_13105 - PED::_0x62DE46F061CAA468()));
	}
}

void func_6(char[4] cParam0)
{
	char[] cVar0[8];
	int iVar1;
	struct<4> Var2;
	char[] cVar6[8];

	cVar0 = func_112(cParam0->f_607);
	HUD::SET_MISSION_NAME(true, &cVar0);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	MISC::_0x1096603B519C905F(&cVar0);
	if (cParam0->f_607 != 77)
	{
		func_113();
		func_114(&cVar0, 0);
	}
	UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
	func_115(1);
	func_116();
	MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
	SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	func_47();
	func_42(func_117(cParam0));
	LAW::_0x55F37F5F3F2475E1();
	LAW::_0x292AD61A33A7A485();
	if ((LAW::_0xF46108C50A22B029() && !Global_43891) && !func_118(func_79()))
	{
		POPULATION::_0x2161278C6322F740(16384, 0, 0, -1, -1, 0);
	}
	func_119(1, 0, 1);
	POPULATION::_0x2161278C6322F740(4096, 0, 0, -1, -1, 0);
	VEHICLE::DELETE_ALL_TRAINS();
	VEHICLE::SET_RANDOM_TRAINS(false);
	func_41(0);
	func_120(cParam0);
	AUDIO::CLEAR_CONVERSATION_HISTORY();
	if (!Global_1935630.f_12)
	{
		func_121(0, 0);
		PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
		if (!func_122(cParam0, 16384) && (func_123(cParam0, func_35(cParam0), 2) || func_107()))
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
				if (!func_107() && !func_123(cParam0, func_35(cParam0), 2))
				{
				}
			}
			else if (!func_124(iVar1) && !func_84(32768))
			{
				WEAPON::REMOVE_WEAPON_FROM_PED(Global_35, iVar1, true, -142743235);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_UNARMED"), true, 0, false, false);
			}
		}
		WEAPON::_0xB832F1A686B9B810(Global_35, 0, 0);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
		func_125(cParam0);
	}
	func_72(1);
	func_41(0);
	func_126(cParam0, GET_HASH_KEY("A_C_HORSE_MORGAN_FLAXENCHESTNUT"));
	iLocal_125 = func_127(cParam0);
	iLocal_125 = iLocal_125;
	if (!Global_1935630.f_12)
	{
		if (!func_107())
		{
			Var2 = { func_36(func_35(cParam0)) };
			if (func_35(cParam0) != 0)
			{
				Var2 = { func_128(cParam0->f_607) };
			}
			if (!func_129(Var2))
			{
				func_105(cParam0, 1048576);
			}
			func_109(cParam0, 0);
			if (func_130(cParam0, 3) || func_131())
			{
				func_132(cParam0, func_128(cParam0->f_607), 0);
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true);
				func_133(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 5000f, 1, 0, 0, 0, 0);
			}
			func_109(cParam0, func_108());
		}
		TELEMETRY::_TELEMETRY_MISSION_STARTED(&(Global_1835011[cParam0->f_607 /*74*/].f_8), 0, func_134(func_35(cParam0)), func_107());
	}
	func_135(cParam0);
	func_136(cParam0, 0);
	func_137(cParam0, 0);
	if (!func_138(cParam0, func_35(cParam0)))
	{
		func_109(cParam0, 0);
	}
	func_139(cParam0);
	func_140(cParam0);
	func_141(cParam0);
	func_105(cParam0, 2097152);
	func_142(cParam0, func_35(cParam0), 134217728);
	if (func_84(32768))
	{
		func_2(cParam0, 4);
	}
	func_143(cParam0);
	func_144(cParam0, func_35(cParam0));
	func_145(func_63(cParam0));
	if (!func_122(cParam0, 65536))
	{
		func_146(func_63(cParam0));
	}
	func_147(cParam0, PLAYER::PLAYER_PED_ID(), "ARTHUR", 0);
	func_148(cParam0);
	func_149(cParam0);
	func_150(cParam0);
	func_151(cParam0, 30f);
	func_152(cParam0, 40f);
	func_153(cParam0, Global_35, 0, 0, 0, 0, 0);
	func_100(0);
	AUDIO::_0xA6A3A3F96B8B030E();
	func_20(1);
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (cParam0->f_607 != 77)
	{
		cVar6 = func_112(cParam0->f_607);
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(1, MISC::GET_HASH_KEY(&cVar6), 0, "");
	}
	if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(GET_HASH_KEY("WORLD_PLAYER_SEAT_LEDGE"), false);
	}
}

bool func_7(char[4] cParam0, int iParam1)
{
	return (cParam0->f_5309 && iParam1) != 0;
}

void func_8(char[4] cParam0)
{
	var uVar0;

	if ((LAW::_0xF46108C50A22B029() && !Global_43891) && !func_118(func_79()))
	{
		POPULATION::_0xF45E46DEECF7DF6E(16384, 0, 0, -1, -1);
	}
	if (!func_123(cParam0, func_35(cParam0), 16384))
	{
		func_154();
	}
	if (!func_10(cParam0, 32768))
	{
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	}
	if (!func_10(cParam0, 2048))
	{
		func_155(1, 0);
	}
	switch (func_156(cParam0))
	{
		case -1:
			break;
		case 0:
			MemCopy(&uVar0, {func_157(func_63(cParam0))}, 4);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
			{
				func_105(cParam0, 64);
			}
			func_158(cParam0, 0);
			func_159(cParam0);
			if (func_160(cParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(func_161(cParam0)) && func_130(cParam0, 3))
				{
					ENTITY::FREEZE_ENTITY_POSITION(func_161(cParam0), false);
				}
				func_162(cParam0, 1);
			}
			if (func_7(cParam0, -2147483648))
			{
				func_162(cParam0, 2);
			}
			break;
		case 1:
			if (func_163(cParam0))
			{
				func_2(cParam0, -2147483648);
				func_162(cParam0, 2);
			}
			func_158(cParam0, func_164(cParam0, func_35(cParam0)) > 4);
			break;
		case 2:
			if (func_3(cParam0, 0))
			{
				func_2(cParam0, -2147483648);
				func_162(cParam0, 3);
			}
			break;
		case 3:
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
	if (func_156(cParam0) < 2)
	{
	}
}

Vector3 func_9(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2654.905f, -1092.331f, 47.6211f;
				case 1:
					return 2654.468f, -1089.171f, 47.3474f;
				case 2:
					return 2655.111f, -1085.499f, 47.0788f;
				case 3:
					return 2656.097f, -1089.138f, 47.3672f;
				case 4:
					return 2769.529f, -1061.033f, 45.9406f;
				case 5:
					return 2765.671f, -1060.773f, 45.9406f;
				case 6:
					return 2695.919f, -1061.158f, 45.8905f;
				case 7:
					return 2772.293f, -1048.173f, 46.1173f;
				case 8:
					return 2774.499f, -1047.432f, 46.1173f;
				case 9:
					return 2679.835f, -1070.343f, 45.8905f;
				case 10:
					return 2723.053f, -1084.05f, 45.9047f;
				case 11:
					return 2708.864f, -1081.733f, 45.89f;
				case 12:
					return 2735.246f, -1052.564f, 45.9407f;
				case 13:
					return 2762.654f, -1065.569f, 45.8905f;
				case 14:
					return 2681.123f, -1070.978f, 45.8905f;
				case 15:
					return 2773.308f, -1060.042f, 45.9406f;
				case 16:
					return 2770.168f, -1048.808f, 45.9408f;
				case 17:
					return 2774.291f, -1048.932f, 45.9408f;
				case 18:
					return 2692.069f, -1068.648f, 45.8438f;
				case 19:
					return 2679.004f, -1070.425f, 48.0897f;
				case 20:
					return 2669.648f, -1074.253f, 46.0353f;
				case 21:
					return 2732.249f, -1074.502f, 46.1405f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2770.203f, -1047.469f, 46.1169f;
				case 1:
					return 2774.215f, -1047.474f, 46.1174f;
				case 2:
					return 2771.068f, -1050.409f, 46.1405f;
				case 3:
					return 2773.654f, -1050.181f, 45.9398f;
				case 4:
					return 2763.39f, -1058.77f, 45.9406f;
				case 5:
					return 2773.588f, -1065.09f, 45.9406f;
				case 6:
					return 2767.343f, -1059.985f, 46.1404f;
				case 7:
					return 2762.737f, -1067.5f, 45.9373f;
				case 8:
					return 2782.911f, -1085.784f, 45.9904f;
				case 9:
					return 2729.537f, -1067.722f, 45.9243f;
				case 10:
					return 2768.991f, -1077.767f, 45.8906f;
				case 11:
					return 2744.327f, -1059.633f, 45.9407f;
				case 12:
					return 2750.18f, -1067.313f, 45.8191f;
				case 13:
					return 2770.078f, -1063.868f, 46.9063f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2712.702f, -1066.13f, 46.0648f;
				case 1:
					return 2717.372f, -1068.214f, 46.2431f;
				case 2:
					return 2755.755f, -1067.262f, 45.8368f;
				case 3:
					return 2745.537f, -1081.217f, 45.9408f;
				case 4:
					return 2742.487f, -1064.206f, 45.9405f;
				case 5:
					return 2742.485f, -1063.831f, 45.9405f;
				case 6:
					return 2763.16f, -1062.638f, 45.9405f;
				case 7:
					return 2750.237f, -1059.173f, 45.9407f;
				case 8:
					return 2747.607f, -1061.616f, 45.9373f;
				case 9:
					return 2749.339f, -1049.909f, 45.9373f;
				case 10:
					return 2760.694f, -1059.31f, 45.9373f;
				case 11:
					return 2737.867f, -1068.233f, 45.8895f;
				case 12:
					return 2738.984f, -1074.213f, 45.9402f;
				case 13:
					return 2743.798f, -1059.146f, 45.8905f;
				case 14:
					return 2762.505f, -1059.874f, 46.1405f;
				case 15:
					return 2768.179f, -1076.425f, 45.8936f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 2654.338f, -1083.591f, 47.0648f;
				case 1:
					return 2657.501f, -1086.889f, 47.2431f;
				case 2:
					return 2403.856f, -1216.125f, 44.565f;
				case 3:
					return 2412.708f, -1202.192f, 44.5917f;
				case 4:
					return 2412.475f, -1216.148f, 44.79f;
				case 5:
					return 2412.503f, -1219.647f, 44.8191f;
				case 6:
					return 2412.757f, -1198.959f, 44.5102f;
				case 7:
					return 2405.557f, -1219.992f, 44.711f;
				case 8:
					return 2405.246f, -1212.211f, 44.7326f;
				case 9:
					return 2412.51f, -1205.628f, 44.652f;
				case 10:
					return 2412.472f, -1219.397f, 45.0703f;
				case 11:
					return 2404.624f, -1216.114f, 44.8972f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 2801.533f, -1062.101f, 32.1194f;
				case 1:
					return 2663.811f, -1016.464f, 53.1732f;
				case 2:
					return 2656.967f, -1091.932f, 47.8225f;
				case 3:
					return 2663.577f, -1074.062f, 44.3723f;
				case 4:
					return 2405.145f, -1217.136f, 44.6686f;
				case 5:
					return 2405.637f, -1214.856f, 44.6606f;
				case 6:
					return 2412.399f, -1205.733f, 44.6656f;
				case 7:
					return 2412.358f, -1202.054f, 44.5667f;
				case 8:
					return 2641.382f, -1001.059f, 42.6294f;
				case 9:
					return 2381.692f, -1220.09f, 46.1788f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 2406.13f, -1217.54f, 44.6684f;
				case 1:
					return 2394.19f, -1216.801f, 45.5603f;
				case 2:
					return 2402.612f, -1215.862f, 44.989f;
				case 3:
					return 2392.486f, -1215.038f, 46.1553f;
				case 4:
					return 2396.172f, -1213.484f, 44.9667f;
				case 5:
					return 2412.094f, -1199.831f, 44.8496f;
				case 6:
					return 2411.916f, -1206.238f, 44.8402f;
				case 7:
					return 2412.802f, -1203.394f, 45.6996f;
				case 8:
					return 2410.937f, -1206.282f, 44.7836f;
				case 9:
					return 2411.305f, -1203.209f, 44.9809f;
				case 10:
					return 2410.765f, -1204.213f, 44.5807f;
				case 11:
					return 2405.458f, -1207.755f, 44.9112f;
				case 12:
					return 2407.009f, -1209.56f, 44.6501f;
				case 13:
					return 2408.131f, -1208.446f, 44.6569f;
				case 14:
					return 2404.857f, -1212.458f, 44.9245f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 2449.89f, -1203.165f, 46.7766f;
				case 1:
					return 2406.075f, -1216.684f, 44.6452f;
				case 2:
					return 2405.882f, -1215.542f, 44.659f;
				case 3:
					return 2407.878f, -1218.173f, 44.6975f;
				case 4:
					return 2405.458f, -1217.891f, 44.6693f;
				case 5:
					return 2401.928f, -1216.341f, 44.7902f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 2774.14f, -1079.245f, 46.3906f;
				case 1:
					return 2772.356f, -1081.304f, 45.8414f;
				case 2:
					return 2729.732f, -1067.965f, 45.9243f;
				case 3:
					return 2720.851f, -1067.208f, 45.9243f;
				case 4:
					return 2747.399f, -1087.223f, 45.8906f;
				case 5:
					return 2746.789f, -1089.931f, 45.9405f;
				case 6:
					return 2669.161f, -1072.899f, 45.6735f;
				case 7:
					return 2673.04f, -1070.357f, 46.874f;
				case 8:
					return 2673.682f, -1073.287f, 46.876f;
				case 9:
					return 2725.172f, -1067.344f, 46.2702f;
				case 10:
					return 2669.262f, -1053.565f, 45.8906f;
				case 11:
					return 2688.979f, -1068.094f, 45.8905f;
				case 12:
					return 2656.3f, -1089.662f, 47.3105f;
				case 13:
					return 2724.684f, -1114.448f, 48.5162f;
				case 14:
					return 2725.31f, -1020.242f, 43.7219f;
				case 15:
					return 2798.703f, -1063.817f, 44.3694f;
				case 16:
					return 2639.862f, -1079.463f, 49.3616f;
				case 17:
					return 2728.248f, -1070.474f, 45.9243f;
				case 18:
					return 2719f, -1067.626f, 45.8985f;
				case 19:
					return 2779.753f, -1089.965f, 45.8472f;
				case 20:
					return 2781.567f, -1092.06f, 45.8585f;
				case 21:
					return 2748.048f, -1092.516f, 46.71f;
				case 22:
					return 2747.507f, -1088.123f, 45.9408f;
				case 23:
					return 2764.018f, -1071.255f, 45.8439f;
				case 24:
					return 2758.032f, -1067.921f, 46.1769f;
				case 25:
					return 2760.36f, -1066.177f, 46.1033f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 2725.198f, -1067.539f, 46.3997f;
				case 1:
					return 2772.604f, -1070.079f, 44.3073f;
				case 2:
					return 2782.639f, -1058.611f, 43.7264f;
				case 3:
					return 2784.523f, -1067.015f, 43.7264f;
				case 4:
					return 2774.684f, -1091.662f, 45.8906f;
				case 5:
					return 2725.434f, -1076.405f, 44.8977f;
				case 6:
					return 2447.88f, -1200.035f, 46.8266f;
				case 7:
					return 2725.373f, -1100.244f, 47.223f;
				case 8:
					return 2447.26f, -1200.916f, 46.6278f;
				case 9:
					return 2409.256f, -1216.001f, 44.7459f;
				case 10:
					return 2404.758f, -1240.843f, 41.212f;
				case 11:
					return 2416.311f, -1133.43f, 51.8044f;
				case 12:
					return 2468.909f, -1186.072f, 46.9388f;
				case 13:
					return 2490.258f, -1149.541f, 44.6629f;
				case 14:
					return 2674.417f, -1136.794f, 55.9362f;
				case 15:
					return 2578.577f, -1140.109f, 50.1594f;
				case 16:
					return 2884.313f, -1075.507f, 33.1037f;
				case 17:
					return 2607.259f, -1472.981f, 72.3137f;
				case 18:
					return 2717.58f, -1249.393f, 49.0637f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 2412.768f, -1203.981f, 44.6411f;
				case 1:
					return 2412.857f, -1218.218f, 44.78f;
				case 2:
					return 2500.791f, -1162.096f, 48.1949f;
				case 3:
					return 2464.253f, -1187.555f, 46.7335f;
				case 4:
					return 2431.28f, -1181.367f, 45.2942f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 2758.171f, -1091.667f, 45.8904f;
				case 1:
					return 2743.469f, -1089.266f, 45.9405f;
				case 2:
					return 2741.398f, -1088.275f, 46.3905f;
				case 3:
					return 2728.821f, -1087.285f, 46.1405f;
				case 4:
					return 2720.317f, -1086.607f, 45.8904f;
				case 5:
					return 2681.42f, -1091.757f, 46.8027f;
				case 6:
					return 2678.447f, -1084.103f, 45.8887f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 2747.888f, -1060.573f, 45.9391f;
				case 1:
					return 2743.353f, -1060.523f, 45.9391f;
				case 2:
					return 2738.504f, -1059.834f, 45.9381f;
				case 3:
					return 2718.747f, -1073.54f, 45.9975f;
				case 4:
					return 2706.275f, -1069.079f, 45.947f;
				case 5:
					return 2738.513f, -1059.761f, 45.9383f;
				case 6:
					return 2714.109f, -1064.962f, 45.9494f;
				case 7:
					return 2706.129f, -1065.385f, 45.9368f;
				case 8:
					return 2747.561f, -1058.422f, 45.9407f;
				case 9:
					return 2743.181f, -1058.249f, 45.9407f;
				case 10:
					return 2719.088f, -1071.722f, 46.0028f;
				case 11:
					return 2705.935f, -1067.324f, 45.8447f;
				case 12:
					return 2738.335f, -1057.305f, 45.9402f;
				case 13:
					return 2738.337f, -1057.489f, 45.9401f;
				case 14:
					return 2713.941f, -1067.394f, 45.841f;
				case 15:
					return 2705.927f, -1067.296f, 45.8448f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 2723.902f, -1069.206f, 46.6545f;
				case 1:
					return 2723.055f, -1067.341f, 46.6545f;
				case 2:
					return 2723.814f, -1065.412f, 46.9045f;
				case 3:
					return 2725.787f, -1070.158f, 46.6545f;
				case 4:
					return 2727.894f, -1069.292f, 46.7496f;
				case 5:
					return 2728.612f, -1067.354f, 46.4242f;
				case 6:
					return 2727.675f, -1065.153f, 46.6087f;
				case 7:
					return 2726.006f, -1064.6f, 46.9045f;
				case 8:
					return 2764.502f, -1056.678f, 45.9406f;
				case 9:
					return 2758.541f, -1054.269f, 45.9407f;
				case 10:
					return 2756.099f, -1057.107f, 45.9407f;
				case 11:
					return 2744.126f, -1059.806f, 45.9405f;
				case 12:
					return 2741.653f, -1065.128f, 45.93f;
				case 13:
					return 2737.808f, -1069.556f, 45.9293f;
				case 14:
					return 2735.637f, -1065.454f, 45.9542f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 2744.59f, -1052.485f, 45.8905f;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 2747.924f, -1060.725f, 46.1405f;
				case 1:
					return 2738.511f, -1057.782f, 46.1405f;
				case 2:
					return 2729.845f, -1050.326f, 46.6405f;
				case 3:
					return 2731.151f, -1053.563f, 46.3905f;
				case 4:
					return 2743.317f, -1065.012f, 46.3905f;
				case 5:
					return 2720.08f, -1060.072f, 46.8905f;
				case 6:
					return 2730.637f, -1069.497f, 46.8905f;
				case 7:
					return 2730.711f, -1065.501f, 46.8477f;
				case 8:
					return 2718.781f, -1073.5f, 46.0977f;
				case 9:
					return 2714.113f, -1065.078f, 46.8477f;
				case 10:
					return 2738.302f, -1064.977f, 47.0977f;
				case 11:
					return 2739.44f, -1069.5f, 46.8477f;
				case 12:
					return 2762.294f, -1078.084f, 47.0977f;
				case 13:
					return 2764.887f, -1083.698f, 46.8477f;
				case 14:
					return 2740.514f, -1074.489f, 46.8477f;
				case 15:
					return 2733.269f, -1086.745f, 46.8477f;
				case 16:
					return 2706.232f, -1069.275f, 46.8477f;
				case 17:
					return 2706.225f, -1065.365f, 46.8477f;
				case 18:
					return 2713.794f, -1051.116f, 46.8477f;
				case 19:
					return 2705.919f, -1052.21f, 46.8477f;
				case 20:
					return 2715.735f, -1085.706f, 46.8477f;
				case 21:
					return 2706.143f, -1076.491f, 46.8477f;
				case 22:
					return 2701.896f, -1081.102f, 46.8477f;
				case 23:
					return 2713.022f, -1075.265f, 46.8477f;
				case 24:
					return 2697.208f, -1069.379f, 46.8437f;
				case 25:
					return 2688.563f, -1065.629f, 46.8437f;
				case 26:
					return 2692.832f, -1069.068f, 46.8437f;
				case 27:
					return 2681.252f, -1067.552f, 46.8437f;
				case 28:
					return 2675.245f, -1073.776f, 46.8437f;
				case 29:
					return 2697.03f, -1089.322f, 46.8437f;
				case 30:
					return 2678.061f, -1083.807f, 46.8437f;
				case 31:
					return 2693.726f, -1053.032f, 46.8437f;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 2699.911f, -1045.312f, 46.3826f;
				case 1:
					return 2712.664f, -1092.774f, 46.8826f;
				case 2:
					return 2740.448f, -1045.597f, 46.6285f;
				case 3:
					return 2715.927f, -1049.778f, 46.8785f;
				case 4:
					return 2719.018f, -1091.9f, 46.8785f;
				case 5:
					return 2737.028f, -1094.575f, 46.8785f;
				case 6:
					return 2755.148f, -1089.308f, 46.8785f;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 1881.357f, -1834.353f, 42.2776f;
				case 1:
					return 1877.093f, -1844.032f, 42.5276f;
				case 2:
					return 1860.291f, -1834.868f, 41.7776f;
				case 3:
					return 1863.474f, -1835.987f, 41.5276f;
				case 4:
					return 1862.463f, -1833.72f, 41.7776f;
				case 5:
					return 1870.453f, -1831.664f, 41.5276f;
				case 6:
					return 1874.554f, -1841.422f, 42.0276f;
				case 7:
					return 1874.174f, -1843.236f, 42.5311f;
				case 8:
					return 1898.745f, -1848.148f, 41.5267f;
				case 9:
					return 1899.797f, -1846.507f, 41.5267f;
				case 10:
					return 1888.068f, -1856.13f, 41.7767f;
				case 11:
					return 1888.926f, -1855.313f, 41.7767f;
				case 12:
					return 1892.521f, -1854.4f, 42.2767f;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return 2686.671f, -1068.833f, 46.0937f;
				case 1:
					return 2686.584f, -1072.603f, 46.0937f;
				case 2:
					return 2705.259f, -1067.284f, 46.0937f;
				case 3:
					return 2705.139f, -1062.311f, 46.0937f;
				case 4:
					return 2713.196f, -1067.354f, 46.0937f;
				case 5:
					return 2713.248f, -1060.203f, 46.0937f;
				case 6:
					return 2725.173f, -1072.709f, 46.0936f;
				case 7:
					return 2717.775f, -1072.761f, 46.0936f;
				case 8:
					return 2725.366f, -1091.016f, 46.8633f;
				case 9:
					return 2734.375f, -1092.211f, 46.1133f;
				case 10:
					return 2738.038f, -1067.273f, 45.8633f;
				case 11:
					return 2738.009f, -1063.725f, 46.1133f;
				case 12:
					return 2760.97f, -1068.249f, 46.1032f;
				case 13:
					return 2763.646f, -1065.14f, 46.1032f;
				case 14:
					return 2778.816f, -1088.803f, 45.8532f;
				case 15:
					return 2782.696f, -1085.764f, 46.1032f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_10(char[4] cParam0, int iParam1)
{
	return (cParam0->f_5307 && iParam1) != 0;
}

bool func_11(char[4] cParam0)
{
	func_165();
	Global_1934765.f_271 = 0;
	func_166(0);
	func_167();
	if (!func_168(iLocal_1522, 2))
	{
		func_169(cParam0);
		func_170(&iLocal_1522, 2);
		return false;
	}
	func_171(0);
	func_172(0);
	func_173(0);
	func_174(1);
	func_175(1);
	func_176(cParam0);
	func_177();
	if (!func_168(iLocal_1522, 4))
	{
		func_178();
		func_170(&iLocal_1522, 4);
		return false;
	}
	func_179();
	if (func_24(cParam0) != 0)
	{
		func_180();
	}
	func_181();
	func_182();
	func_183();
	func_184();
	func_185();
	func_186();
	func_187();
	func_188();
	func_189(0);
	if (!func_168(iLocal_1522, 1))
	{
		func_190();
		func_170(&iLocal_1522, 1);
		return false;
	}
	PED::SET_CREATE_RANDOM_COPS(true);
	PED::SET_PED_RESET_FLAG(Global_35, 168, false);
	if (!PAD::IS_CONTROL_ENABLED(0, GET_HASH_KEY("INPUT_CONTEXT_Y")))
	{
		PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_CONTEXT_Y"), true);
	}
	TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
	func_191();
	func_192(cParam0, bLocal_1641, 1);
	func_193(7);
	return true;
}

bool func_12(int iParam0)
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

void func_13(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_12(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_194(*iParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_195(iVar0);
	*iParam0 = 0;
}

int func_14(int iParam0)
{
	if (!func_196(iParam0))
	{
		return 0;
	}
	return Global_1835011[iParam0 /*74*/].f_1;
}

void func_15(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_197(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_198(iParam0) && !func_199(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_200(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_198(iParam0))
	{
		iParam2 = -1;
	}
	if (func_201(iParam0) == 3 || (func_201(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_200(iParam0))))
	{
		func_203(func_202(iParam0), func_200(iParam0), iParam2);
		if ((!func_197(Global_1572864.f_8) && !func_204(0, 1, 0)) && !func_205(Global_1935630, 32768))
		{
			iVar0 = func_206(iParam0);
			if (iVar0 != -1)
			{
				func_207(0);
			}
			else if (func_202(iParam0) == 8)
			{
				iVar0 = func_208();
				if (iVar0 != -1)
				{
					func_207(0);
				}
			}
		}
	}
	func_209(iParam0, 0);
	if (func_210(0) == iParam0)
	{
		func_42(1);
		func_211(0);
		func_212(1);
	}
	func_213(iParam0, 1);
	func_214(iParam0);
}

void func_16()
{
	Global_1572864.f_8 = -1;
	Global_1572864.f_9 = -1;
	Global_1572864.f_10 = -1;
	func_215(0);
	func_216(0);
	func_66(0);
	func_67(0);
	func_217(0);
	func_218(1f);
}

void func_17(bool bParam0)
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
		func_219();
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
}

void func_18(bool bParam0, int iParam1)
{
	if (func_220())
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_221())
		{
			func_115(1);
		}
	}
	AUDIO::_0x36559148B78853B3(0, iParam1, 0);
}

void func_19(char[4] cParam0, bool bParam1)
{
	struct<7> Var0;

	Var0 = func_200(func_14(cParam0->f_607));
	Var0.f_1 = 0;
	Var0.f_2 = func_134(func_35(cParam0));
	Var0.f_4 = (ENTITY::GET_ENTITY_HEALTH(Global_35) * 100 / ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false));
	Var0.f_5 = Global_40.f_7729;
	Var0.f_6 = func_222(0);
	if (bParam1)
	{
		Var0.f_3 = 5;
	}
	else
	{
		Var0.f_3 = func_24(cParam0);
	}
	TELEMETRY::_TELEMETRY_MISSION_OVER(&(Global_1835011[cParam0->f_607 /*74*/].f_8), &Var0);
}

void func_20(int iParam0)
{
	Global_36580 = iParam0;
}

int func_21(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_223(iVar0, iParam0);
		iVar0++;
	}
	return 1;
}

int func_22()
{
	return Global_1572887.f_12;
}

void func_23(int iParam0)
{
	Global_1109400.f_22.f_10 = iParam0;
}

int func_24(char[4] cParam0)
{
	return cParam0->f_10783;
}

bool func_25(var uParam0)
{
	return uParam0->f_2501;
}

bool func_26(var uParam0)
{
	return uParam0->f_2500;
}

void func_27(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_224(uParam1[iVar0 /*16*/], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if ((uParam1[iVar0 /*16*/])->f_9 == 7)
					{
						func_225(uParam1[iVar0 /*16*/], 1);
					}
					break;
				case 1:
				case 2:
					if ((uParam1[iVar0 /*16*/])->f_9 == 3)
					{
						func_225(uParam1[iVar0 /*16*/], 1);
					}
					break;
				case 3:
					if ((uParam1[iVar0 /*16*/])->f_9 == 2)
					{
						func_225(uParam1[iVar0 /*16*/], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_28(var uParam0)
{
	return func_226(*uParam0, 1);
}

void func_29(var uParam0, bool bParam1)
{
	if (bParam1 || !func_28(uParam0))
	{
		func_227(uParam0);
	}
}

bool func_30(char[4] cParam0, bool bParam1)
{
	if (func_10(cParam0, 128) && func_31())
	{
		return true;
	}
	if (func_228(&(cParam0->f_13118)) >= 4000)
	{
		return true;
	}
	if (!func_33(cParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		return false;
	}
	return true;
}

bool func_31()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false));
}

void func_32(char[4] cParam0)
{
	func_229(!func_7(cParam0, 32), 1);
	func_2(cParam0, 32);
}

bool func_33(char[4] cParam0)
{
	return true;
}

bool func_34()
{
	return func_197(Global_1572864.f_8);
}

int func_35(char[4] cParam0)
{
	return cParam0->f_597;
}

struct<4> func_36(int iParam0)
{
	struct<4> Var0;

	switch (iParam0)
	{
		case 0:
			func_231(&Var0, func_230(6, 0));
			break;
		case 1:
			func_231(&Var0, func_230(4, 4));
			break;
		case 2:
			func_231(&Var0, func_230(0, 2));
			break;
		case 3:
			func_231(&Var0, func_230(1, 2));
			break;
		case 4:
			func_231(&Var0, func_230(2, 0));
			break;
		case 5:
			func_231(&Var0, func_230(7, 0));
			break;
		case 6:
			func_231(&Var0, func_230(3, 0));
			break;
		case 7:
			func_231(&Var0, func_230(5, 0));
			break;
		case 25:
			func_231(&Var0, func_230(16, 4));
			break;
		default:
			Var0 = { Global_36 };
			break;
	}
	return Var0;
}

int func_37(char[4] cParam0)
{
	return func_232(cParam0, func_35(cParam0));
}

void func_38(char[4] cParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<4> Var4;

	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_215(0);
	func_233(func_14(cParam0->f_607), Var0, Var4, func_134(iParam9), func_134(iParam10));
}

void func_39(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_224(uParam0[iVar0 /*16*/], 1048576) && (uParam0[iVar0 /*16*/])->f_9 == 9)
		{
			func_234(uParam0[iVar0 /*16*/]);
		}
		iVar0++;
	}
}

void func_40(var uParam0)
{
	DATAFILE::_DATAFILE_UNLOAD(uParam0->f_2495);
	uParam0->f_2495 = 0;
	uParam0->f_2501 = 0;
}

void func_41(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (bParam0)
	{
		VEHICLE::_0x2A7413168F6CD5A8();
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			func_235(iVar0, 4096);
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
	if (func_22() == -1)
	{
		Global_1430221.f_1 = !bParam0;
	}
}

void func_42(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_73(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_236(&Global_1935630, 4194304);
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

void func_43(bool bParam0)
{
	if (bParam0)
	{
	}
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(15, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(6, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(1, bParam0);
}

void func_44()
{
	func_237();
	func_238();
	func_239();
	func_240();
}

void func_45()
{
	if (func_241())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_31())
		{
			func_242(1);
		}
	}
}

void func_46()
{
	Global_1894899.f_186 = 0;
	func_243();
}

void func_47()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_48(char[4] cParam0)
{
	if (func_22() == 0)
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

void func_49(int iParam0, int iParam1)
{
	func_244(1, iParam0, iParam1);
}

void func_50(int iParam0)
{
	switch (func_22())
	{
		case -1:
			Global_1357549.f_1494 = (Global_1357549.f_1494 - (Global_1357549.f_1494 && iParam0));
			break;
	}
}

bool func_51()
{
	return (func_245() || func_56());
}

void func_52(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
}

void func_53(var uParam0)
{
	func_246(uParam0);
	func_247(uParam0, 0);
	uParam0->f_1 = 0;
	func_45();
}

void func_54()
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

void func_55()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_248(iVar0);
		iVar0++;
	}
	func_249();
	func_250();
}

bool func_56()
{
	return Global_1894899 & 2 != 0;
}

void func_57(bool bParam0, int iParam1)
{
	bool bVar0;

	if (func_251())
	{
		if (func_252(255))
		{
			if (!func_253(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_254(Global_1894899.f_2) && func_255(Global_1894899.f_2))
		{
			func_256(Global_1894899.f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899.f_7 = iParam1;
				func_257(16);
			}
		}
		else if (func_254(Global_1894899.f_2) && !func_258(Global_1894899.f_2, 2))
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
		func_259(16);
		func_260();
		if (bVar0)
		{
			func_259(1);
		}
	}
}

void func_58(char[4] cParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_261(&(cParam0->f_5423[iVar0 /*65*/])))
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
	if (func_262(cParam0->f_5421))
	{
		iVar0 = 0;
		while (iVar0 < func_263(cParam0->f_5421))
		{
			iVar1 = func_264(cParam0->f_5421, iVar0);
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

void func_59(char[4] cParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (func_265(iVar1))
		{
			bVar2 = Global_1360165[iVar0 /*1157*/];
			func_266(cParam0, iVar1, bVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_60(char[4] cParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 33, 2, 0);
	bVar0 = func_267(cParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bVar0) || PED::IS_PED_INJURED(bVar0))
	{
	}
	iVar1 = func_268(bVar0);
	iVar2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	bVar3 = false;
	if (SCRIPTS::IS_THREAD_ACTIVE(iVar2, false) && func_269(iVar1) == iVar2)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (bParam1)
		{
			func_270(7);
		}
		else
		{
			func_271(bVar0, 0);
		}
		func_272(cParam0, 16);
		PED::SET_PED_CONFIG_FLAG(bVar0, 219, false);
	}
}

void func_61(int iParam0)
{
	iParam0 = func_273(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_274(iParam0, 32);
	func_275();
}

void func_62(bool bParam0)
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

int func_63(char[4] cParam0)
{
	return cParam0->f_607;
}

void func_64(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_276(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		HUD::_TEXT_BLOCK_DELETE(&Var0);
	}
}

void func_65(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_277(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		HUD::_TEXT_BLOCK_DELETE(&Var0);
	}
}

void func_66(bool bParam0)
{
	Global_1572864.f_14 = bParam0;
	if (bParam0)
	{
		func_217(1);
	}
}

void func_67(bool bParam0)
{
	Global_1572864.f_13 = bParam0;
	if (bParam0)
	{
		func_217(0);
	}
}

void func_68(int iParam0)
{
}

void func_69(char[4] cParam0)
{
	func_278(&(cParam0->f_13121));
}

void func_70(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_224(uParam1[iVar0 /*16*/], 1048576) && (uParam1[iVar0 /*16*/])->f_9 == 9)
		{
			func_225(uParam1[iVar0 /*16*/], 1);
		}
		iVar0++;
	}
}

void func_71(bool bParam0)
{
	Global_1935496.f_15 = !bParam0;
}

void func_72(int iParam0)
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, GET_HASH_KEY("WEAPON_FISHINGROD"), 0, false))
	{
		return;
	}
	Global_1900073.f_18 = iParam0;
}

void func_73(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_74(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_202(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_279(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_280(iVar1))
			{
				if (func_281(iVar1, 4))
				{
					func_282(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_283(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_279(iParam0);
		if (iVar3 == 59)
		{
			func_283(1);
		}
		else if (iVar3 == 61)
		{
			func_283(0);
		}
		else if (iVar3 == 83)
		{
			func_283(0);
		}
	}
}

void func_75()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1347702)
	{
		if (func_280(iVar0))
		{
			if (func_281(iVar0, 4))
			{
				if (func_281(iVar0, 16))
				{
					func_284(iVar0, 1);
				}
				if (func_281(iVar0, 8))
				{
					func_285(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_76(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	if (func_22() == 0)
	{
		return;
	}
	iVar0 = func_35(cParam0);
	iVar1 = func_164(cParam0, iVar0);
	bVar2 = false;
	if (iVar1 == 5 || iVar1 == 6)
	{
		bVar2 = true;
	}
	iVar3 = 0;
	if (!bVar2)
	{
		if (func_286(cParam0) == 0 && iVar0 == 0)
		{
			iVar3 = 1;
		}
	}
	iVar4 = 0;
	if (!bVar2)
	{
		if (func_24(cParam0) == 0)
		{
			iVar4 = 1;
		}
	}
	if (iVar3 || iVar4)
	{
		func_287(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_288(cParam0);
	}
}

void func_77(char[4] cParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;

	iVar0 = 0;
	if (func_289(cParam0))
	{
		fVar1 = BUILTIN::TO_FLOAT((LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::GET_PLAYER_INDEX()) - Global_2621440[0 /*12066*/].f_9.f_20));
		if (fVar1 > 0f)
		{
			fVar2 = (1f + (BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(50, 200)) / 1000f));
			iVar0 = (iVar0 + BUILTIN::ROUND((fVar1 * fVar2)));
		}
	}
	func_290(iVar0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
}

void func_78()
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

int func_79()
{
	return Global_1894899.f_2;
}

void func_80(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_254(iParam0))
	{
		return;
	}
	bVar0 = func_258(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_291(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_293(iParam0, func_292());
			func_294(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_295(iParam0, 67108864);
		func_293(iParam0, -15);
	}
	func_296(iParam0);
}

void func_81(bool bParam0)
{
	if (!bParam0)
	{
		func_297(11);
	}
	else
	{
		func_298(11);
	}
}

void func_82(int iParam0)
{
	if (func_299(iParam0, 0))
	{
		func_300(262144, 5, 0, 1);
		func_301(720f, 1, 0);
	}
	switch (iParam0)
	{
		case 18:
			func_302(101, 7, 1f, 0, 1);
			func_302(89, 7, 1f, 0, 1);
			break;
	}
}

bool func_83()
{
	return Global_1572864.f_15;
}

bool func_84(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

void func_85(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	int iVar7;
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

	if (!func_197(iParam0))
	{
		return;
	}
	if (func_303(iParam0) == 4)
	{
		func_304(iParam0, func_292());
		if (!func_201(iParam0) == 5 && !func_201(iParam0) == 6)
		{
			if (bParam3)
			{
				func_209(iParam0, 6);
			}
			else
			{
				func_209(iParam0, 5);
			}
			func_214(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_42(1);
	}
	iVar0 = func_202(iParam0);
	bVar1 = func_22() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_305(0, 2);
		if (!bVar1 && bParam1)
		{
			func_306();
		}
	}
	else
	{
		func_211(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_307(iParam0);
	}
	else
	{
		Var2 = { func_96(GET_HASH_KEY("DEATHS_ON_CURRENT_DEED")) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!func_84(32768))
		{
			Var4 = { func_96(GET_HASH_KEY("LAST_MISSION_NAME")) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && func_201(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_279(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[76 /*74*/].f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[func_279(iParam0) /*74*/].f_8), true);
						}
					}
					else if ((func_279(iParam0) != 95 && func_279(iParam0) != 82) && !func_308(Global_1347702[func_279(iParam0) /*49*/].f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1347702[func_279(iParam0) /*49*/].f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[func_279(iParam0) /*74*/].f_8), true);
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
		func_310(func_279(iParam0), iVar6, func_309());
	}
	else if (iVar0 == 8)
	{
		func_312(func_279(iParam0), iVar6, func_309(), func_311());
	}
	if (!func_201(iParam0) == 5 && !func_201(iParam0) == 6)
	{
		iVar9 = func_313(iParam0, &iVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_314(iVar9, iVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!Global_1879534 && !Global_1879534.f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_315(func_279(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_316((iVar10 - 20), 0, iVar10);
					iVar11 = func_316((iVar11 - 10), 0, iVar11);
				}
				func_317(1);
				func_318(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528.f_217 = 1;
				break;
			case 4:
				func_318(45, 0, 1);
				break;
			case 8:
				iVar10 = func_319(func_279(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_316((iVar10 - 20), 0, iVar10);
					iVar11 = func_316((iVar11 - 10), 0, iVar11);
				}
				func_318(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_320(func_279(iParam0)))
				{
					func_321(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				Global_1899528.f_217 = 1;
				break;
			case 9:
				func_318(120, 0, 1);
				break;
			case 2:
				func_318(120, 0, 1);
				break;
			case 6:
				func_318(func_323(func_322(iParam0)), 0, 1);
				break;
			case 5:
				func_318(120, 0, 1);
				break;
		}
	}
	func_213(iParam0, 1);
	func_304(iParam0, func_292());
	func_214(iParam0);
	if ((!func_201(iParam0) == 0 && bParam1) && func_22() == -1)
	{
		iVar12 = func_206(iParam0);
		if (iVar12 != -1)
		{
			func_207(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_208();
			if (iVar12 != -1)
			{
				func_207(0);
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
				switch (func_279(iParam0))
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
				if (func_280(func_279(iParam0)) && func_308(Global_1347702[func_279(iParam0) /*49*/].f_12, 4))
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
				if (func_279(iParam0) != 77)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = func_131();
				}
				break;
			case 8:
				if (func_279(iParam0) != 58)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = func_131();
				}
				break;
		}
	}
	if (!func_201(iParam0) == 5 && !func_201(iParam0) == 6)
	{
		if (bParam3)
		{
			func_209(iParam0, 6);
		}
		else
		{
			func_209(iParam0, 5);
		}
		func_214(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_279(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					case 1:
						func_324();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_325(GET_HASH_KEY("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(GET_HASH_KEY("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(GET_HASH_KEY("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(GET_HASH_KEY("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(GET_HASH_KEY("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(GET_HASH_KEY("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(GET_HASH_KEY("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(GET_HASH_KEY("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(GET_HASH_KEY("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(GET_HASH_KEY("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_326(GET_HASH_KEY("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_325(GET_HASH_KEY("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_326(GET_HASH_KEY("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_325(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_326(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_325(GET_HASH_KEY("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_326(GET_HASH_KEY("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_325(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_326(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_325(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_326(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_325(GET_HASH_KEY("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_326(GET_HASH_KEY("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_325(GET_HASH_KEY("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_326(GET_HASH_KEY("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_325(GET_HASH_KEY("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_326(GET_HASH_KEY("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_325(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_326(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_325(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_326(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_325(GET_HASH_KEY("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_326(GET_HASH_KEY("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_325(GET_HASH_KEY("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(GET_HASH_KEY("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(GET_HASH_KEY("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_327();
						func_328(GET_HASH_KEY("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
						func_329();
						func_330();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(func_331(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131 /* GXTEntry: "Jamie Gillis" */);
						break;
					case 15:
						func_325(GET_HASH_KEY("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_HUNT_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_HUNT_ROOT"), true);
							func_332(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_GAMB_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_GAMB_ROOT"), true);
							func_332(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_333(304805134, 1, 1);
						if (!func_334(Global_1347702[21 /*49*/].f_15, 1))
						{
							func_85(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
						func_335();
						break;
					case 26:
						func_336();
						break;
					case 17:
						func_337(Global_35, GET_HASH_KEY("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
						if (func_338())
						{
							func_339(GET_HASH_KEY("WEAPON_REPEATER_EVANS"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_340(GET_HASH_KEY("TP_RMAY_LETTER_1"), -1))
						{
							iVar15 = func_292();
							func_341(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_342(GET_HASH_KEY("TP_RMAY_LETTER_1"), iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_338())
						{
							func_339(GET_HASH_KEY("WEAPON_REVOLVER_LEMAT"));
						}
						break;
					case 34:
						if (func_338())
						{
							func_339(GET_HASH_KEY("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_343();
						break;
					case 37:
						func_344();
						if (func_345())
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
						func_346();
						break;
					case 43:
						func_347();
						break;
					case 44:
						if (!func_334(Global_1347702[82 /*49*/].f_15, 1))
						{
							func_85(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
						if (!func_334(Global_1347702[83 /*49*/].f_15, 1))
						{
							func_85(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_348();
						break;
					case 59:
						func_349();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_350();
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
						func_351();
						if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_SURV_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_SURV_ROOT"), true);
							func_332(451, 0);
						}
						if (!func_352(GET_HASH_KEY("TAXIDERMY_ORDER_05")))
						{
							if (func_352(GET_HASH_KEY("TAXIDERMY_ORDER_04")))
							{
								iVar16 = func_292();
								func_341(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_342(GET_HASH_KEY("TP_TAXIDERMY_REWARD_04_ES"), iVar16, 1);
							}
						}
						if (func_353(4))
						{
							if (!func_354(GET_HASH_KEY("DOCUMENT_NOTE_RARE_FISH"), 1, 0))
							{
								iVar17 = func_292();
								func_341(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_342(GET_HASH_KEY("TP_RF_INVITATION_01"), iVar17, 1);
							}
						}
						func_325(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_355(89200);
						func_355(2300);
						func_355(2300);
						break;
					case 68:
						func_356();
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
						func_357();
						func_355(-139100);
						break;
					case 69:
						if (func_334(Global_1347702[9 /*49*/].f_15, 1))
						{
							func_355(-6000);
						}
						break;
					case 70:
						func_355(23400);
						func_355(1900);
						func_355(-15000);
						break;
					case 71:
						func_355(-5500);
						break;
				}
				break;
			case 8:
				switch (func_279(iParam0))
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
						func_358();
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
						func_359();
						break;
					case 66:
						func_360();
						func_361();
						break;
					case 67:
						if (!func_362(6))
						{
							func_363(6);
						}
						if (!func_362(3))
						{
							func_363(3);
						}
						if (func_338())
						{
							func_339(GET_HASH_KEY("WEAPON_PISTOL_M1899"));
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
						if (func_334(Global_1835011[69 /*74*/].f_1, 1))
						{
							func_364(0);
							func_355(40500);
						}
						else
						{
							func_364(0);
							func_355(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_279(iParam0))
				{
					case 0:
						switch (func_322(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297 /* GXTEntry: "Mrs. Londonderry" */);
								break;
						}
						break;
				}
				break;
		}
		func_365(iParam0);
		func_366();
		switch (iVar0)
		{
			case 1:
				switch (func_279(iParam0))
				{
					case 4:
						func_367(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_367(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						func_367(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_367(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_367(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_367(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_367(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_368(iParam0);
						func_367(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_367(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_367(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_354(GET_HASH_KEY("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_325(GET_HASH_KEY("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_367(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_367(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_367(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (func_368(iParam0) == 0)
						{
							func_367(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							func_367(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_308(Global_1347702[func_279(iParam0) /*49*/].f_12, 536870912))
				{
					func_369(11, 1);
				}
				switch (func_279(iParam0))
				{
					case 109:
						func_367(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						func_369(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_367(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_367(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_367(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_367(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_370(0, 10, 11, GET_HASH_KEY("CABR01")))
				{
					func_367(iParam0, func_368(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_370(0, 7, 11, GET_HASH_KEY("CACR02")))
				{
					func_367(iParam0, func_371(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_370(0, 8, 11, GET_HASH_KEY("CACR03")))
				{
					func_367(iParam0, func_371(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_370(0, 11, 11, GET_HASH_KEY("CACR01")))
				{
					func_367(iParam0, func_371(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_370(0, 12, 11, GET_HASH_KEY("CACR04")))
				{
					func_367(iParam0, func_371(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_201(iParam0) == 0)
			{
				if (func_200(iParam0) == 0)
				{
				}
				else if (STATS::STATSTRACKER_IS_INITIALIZED(func_200(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_203(func_202(iParam0), func_200(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_279(iParam0) == 58)
						{
							Global_1879514.f_1 = iParam0;
						}
						func_373(func_372(Global_1879514.f_1));
						if (iVar0 == 8 && func_279(iParam0) == 58)
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
						if (func_280(func_279(iParam0)) && func_308(Global_1347702[func_279(iParam0) /*49*/].f_12, 1))
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
			func_374(bParam2, iVar20);
		}
	}
	func_212(1);
	if ((bVar13 || func_131()) && (func_202(iParam0) == 1 || func_202(iParam0) == 8))
	{
		Global_1879534.f_6 = 1;
		Global_1879534.f_7 = 1;
	}
}

void func_86(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (STATS::STATSTRACKER_IS_INITIALIZED(func_200(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_203(func_202(iParam0), func_200(iParam0), iVar0);
		if (func_84(32768))
		{
			iVar1 = func_202(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_370(0, 10, 11, GET_HASH_KEY("CABR01"))))
			{
				Global_1898438 = MISC::GET_GAME_TIMER();
				Global_1879514.f_1 = iParam0;
				Global_1879514.f_19 = func_375();
				Global_1879514.f_18 = 1;
			}
		}
	}
	if (func_199(iParam0))
	{
		func_15(iParam0, 0, 2);
	}
	else if (func_198(iParam0))
	{
		if (!func_201(iParam0) == 5 && !func_201(iParam0) == 6)
		{
			if (bParam1)
			{
				func_209(iParam0, 6);
			}
			else
			{
				func_209(iParam0, 5);
			}
			func_214(iParam0);
		}
	}
	switch (func_202(iParam0))
	{
		case 1:
			switch (func_279(iParam0))
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
			switch (func_279(iParam0))
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

int func_87(char[4] cParam0)
{
	char[] cVar0[8];

	cVar0 = func_112(cParam0->f_607);
	return MISC::GET_HASH_KEY(&cVar0);
}

void func_88()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;

	func_93(4112);
	func_92(6);
	vVar2 = { func_376(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_377(vVar2, uVar1, uVar0, 0);
	func_378(vVar2);
	Global_40.f_9.f_15 = func_379(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_89(int iParam0)
{
	if (func_22() != -1)
	{
		return;
	}
	func_93(32);
	if (iParam0 == 0)
	{
		func_93(16);
	}
	else if (iParam0 == 1)
	{
		func_93(8);
	}
	func_380();
	Global_43889 = 1;
}

void func_90(int iParam0)
{
	Global_1310720.f_9 = iParam0;
}

void func_91()
{
	struct<10> Var0;
	struct<16> Var10;

	Global_1310720.f_8 = 0;
	Global_1935630.f_4 = 1;
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "respawn_persistence", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_381(Var10, 0);
}

void func_92(int iParam0)
{
	Global_1572864.f_21 = iParam0;
	Global_1310720.f_4 = MISC::GET_GAME_TIMER();
}

void func_93(int iParam0)
{
	Global_1572864.f_3 = (Global_1572864.f_3 || iParam0);
}

void func_94(int iParam0)
{
	int iVar0;

	if (!func_197(iParam0))
	{
		return;
	}
	if (iParam0 != func_210(0))
	{
		return;
	}
	if (func_200(iParam0) == 0)
	{
	}
	iVar0 = func_202(iParam0);
	if (func_201(iParam0) == 3)
	{
		if (func_200(iParam0) == 0)
		{
		}
		else if (STATS::STATSTRACKER_IS_INITIALIZED(func_200(iParam0)))
		{
			if (func_202(iParam0) != 1 && func_202(iParam0) != 8)
			{
				func_203(func_202(iParam0), func_200(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_214(iParam0);
	func_42(1);
	func_211(0);
	func_209(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_317(1);
			func_318(15, 0, 1);
			break;
		case 4:
			func_318(10, 0, 1);
			break;
		case 8:
			func_318(10, 0, 1);
			break;
		case 9:
			func_318(10, 0, 1);
			break;
		case 2:
			func_318(10, 0, 1);
			break;
		case 6:
			func_318(10, 0, 1);
			break;
		case 5:
			func_318(10, 0, 1);
			break;
	}
	func_212(1);
}

void func_95()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!ITEMSET::IS_ITEMSET_VALID(Local_14))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(Local_14))
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, Local_14);
		bVar2 = MISC::_GET_ENTITY_FROM_ITEM(iVar1);
		if ((ENTITY::DOES_ENTITY_EXIST(bVar2) && ENTITY::_0x88AD6CC10D8D35B2(bVar2)) && !ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(bVar2))
		{
			ENTITY::DELETE_ENTITY(&bVar2);
		}
		iVar0++;
	}
	ITEMSET::DESTROY_ITEMSET(Local_14);
}

struct<2> func_96(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_97(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

struct<8> func_98(char[4] cParam0)
{
	return cParam0->f_10784;
}

void func_99(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_382(Global_1347343.f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_383(&(Global_1347343.f_11), 64);
	}
	if (bParam4)
	{
		func_383(&(Global_1347343.f_11), 16384);
	}
	if (func_384() >= 2)
	{
		if (!func_382(Global_1347343.f_11, 16384))
		{
			func_383(&(Global_1347343.f_11), 8);
		}
		func_218(0.88f);
	}
	StringCopy(&(Global_1347343.f_3), sParam2, 64);
	Global_1347343.f_2 = iParam0;
	Global_1347343 = 0;
	Global_1347343.f_1 = iParam1;
	func_236(&Global_1935630, 2048);
	func_385(bParam5);
}

void func_100(bool bParam0)
{
	if (bParam0)
	{
	}
	MISC::_0x6AC4AF46A6B8DFB2(bParam0);
}

void func_101(char[4] cParam0, int iParam1)
{
	cParam0->f_5307 = (cParam0->f_5307 || iParam1);
}

void func_102(char[4] cParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_43619)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_43619[iVar0 /*12*/]))
		{
			cParam0->f_7375.f_13[iVar0 /*12*/] = { Global_43619[iVar0 /*12*/] };
			func_386(&(cParam0->f_10792), Global_43619[iVar0 /*12*/], &(Global_43619[iVar0 /*12*/].f_1), 0);
		}
		iVar0++;
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800))
	{
		cParam0->f_7375.f_804 = Global_43800;
		ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(cParam0->f_7375.f_804);
	}
	if (func_205(Global_1935630, 524288))
	{
		func_73(&Global_1935630, 524288);
		func_387(cParam0, 67108864);
	}
}

int func_103(char[4] cParam0)
{
	return func_388(&(cParam0->f_7375));
}

bool func_104()
{
	return Global_1572864.f_14;
}

void func_105(char[4] cParam0, int iParam1)
{
	cParam0->f_5308 = (cParam0->f_5308 || iParam1);
}

bool func_106()
{
	return Global_1572864.f_13;
}

bool func_107()
{
	return func_389() != -1;
}

int func_108()
{
	return Global_1572864.f_9;
}

void func_109(char[4] cParam0, int iParam1)
{
	cParam0->f_597 = iParam1;
	BUILTIN::SETTIMERA(0);
}

void func_110(char[4] cParam0, var uParam1)
{
	cParam0->f_607 = -1;
	func_390(cParam0);
	cParam0->f_634[0] = 66603;
	cParam0->f_634[1] = 66603;
	cParam0->f_637 = 0;
	func_392(cParam0, *uParam1);
	func_393(cParam0);
}

void func_111(char[4] cParam0)
{
	vector3 vVar0;
	char cVar3[32];

	func_394(cParam0, 32);
	if (func_84(32768))
	{
		func_395(Global_35, func_230(6, 0), 2, 1073741824 /* Float: 2f */);
		ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(Global_35, false);
	}
	if (func_107() || func_130(cParam0, 2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(bLocal_1649))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(bLocal_1649, true, false) };
		}
		if (!func_396(vVar0))
		{
			func_397(cParam0, vVar0);
		}
		else
		{
			func_397(cParam0, func_1(8, 12));
		}
	}
	if (!func_107() && !func_130(cParam0, 2))
	{
		bLocal_1641 = func_398(cParam0, GET_HASH_KEY("CS_JOHNMARSTON"), 0);
		bLocal_1642 = func_398(cParam0, GET_HASH_KEY("CS_DUTCH"), 0);
		bLocal_1652 = func_398(cParam0, GET_HASH_KEY("G_M_M_UNIBRONTEGOONS_01"), 0);
		if (!ENTITY::DOES_ENTITY_EXIST(bLocal_1641))
		{
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(bLocal_1641, 307, true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(bLocal_1642))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(bLocal_1652))
		{
		}
		bLocal_1649 = func_222(7);
		POPULATION::_0xF74E134F40192884(bLocal_1649, 1);
		if (ENTITY::DOES_ENTITY_EXIST(bLocal_1649))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(bLocal_1649, true, false) };
		}
		if (!func_396(vVar0))
		{
			func_397(cParam0, vVar0);
		}
		else
		{
			func_397(cParam0, func_1(8, 12));
		}
		func_147(cParam0, bLocal_1652, "MOB2_Guard", 0);
		func_153(cParam0, bLocal_1652, sLocal_850, 0, 0, 0, 0);
		func_153(cParam0, bLocal_1642, 0, 0, 0, 0, 0);
		func_153(cParam0, bLocal_1641, 0, 0, 0, 0, 0);
		func_153(cParam0, Global_35, 0, 0, 0, 0, 0);
		StringCopy(&cVar3, "MOB2_WNT", 32);
		func_399(cParam0, 0, cVar3);
		func_400(cParam0, 1);
		func_105(cParam0, 16384);
		func_401(cParam0, 262144);
	}
}

char[] func_112(int iParam0)
{
	var uVar0;

	if (!func_196(iParam0))
	{
		return uVar0;
	}
	return Global_1835011[iParam0 /*74*/].f_8;
}

void func_113()
{
	struct<2> Var0;

	Var0.f_1 = -1;
	MISC::_COPY_MEMORY(&Global_1879514, &Var0, 20);
}

void func_114(char* sParam0, int iParam1)
{
	StringCopy(&(Global_1879514.f_2), sParam0, 32);
	Global_1879514.f_8 = iParam1;
}

void func_115(int iParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, iParam0, 0);
}

void func_116()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		iVar1 = 0;
		while (iVar1 < 31)
		{
			func_402(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

bool func_117(char[4] cParam0)
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

bool func_118(int iParam0)
{
	if (!func_254(iParam0))
	{
		return false;
	}
	return func_258(iParam0, 33554432);
}

void func_119(bool bParam0, int iParam1, bool bParam2)
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

void func_120(char[4] cParam0)
{
	if (func_22() == 0)
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

void func_121(int iParam0, bool bParam1)
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

bool func_122(char[4] cParam0, int iParam1)
{
	return (cParam0->f_5308 && iParam1) != 0;
}

bool func_123(char[4] cParam0, int iParam1, int iParam2)
{
	return func_168(cParam0->f_1[func_134(iParam1) /*22*/].f_11, iParam2);
}

bool func_124(int iParam0)
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

void func_125(char[4] cParam0)
{
	if (func_31())
	{
		func_403(&(cParam0->f_7375));
	}
}

void func_126(char[4] cParam0, int iParam1)
{
	if (!PED::_IS_THIS_MODEL_A_HORSE(iParam1))
	{
		return;
	}
	cParam0->f_8268 = iParam1;
}

int func_127(char[4] cParam0)
{
	return cParam0->f_8268;
}

Vector3 func_128(int iParam0)
{
	return func_404(iParam0);
}

int func_129(struct<4> Param0)
{
	if (func_84(32768))
	{
		return 1;
	}
	return func_405(Param0, Param0.f_3);
}

bool func_130(char[4] cParam0, int iParam1)
{
	return (cParam0->f_608 && iParam1) != 0;
}

bool func_131()
{
	if (func_22() != -1)
	{
		return false;
	}
	if (!func_406())
	{
		return false;
	}
	if (!func_334(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_334(Global_1835011[2 /*74*/].f_1, 1) && func_334(Global_1347702[120 /*49*/].f_15, 1)) && !func_334(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_334(Global_1835011[37 /*74*/].f_1, 1) && !func_334(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_334(Global_1835011[57 /*74*/].f_1, 1) && !func_334(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_334(Global_1835011[26 /*74*/].f_1, 1) && !func_334(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_334(Global_1835011[62 /*74*/].f_1, 1) && func_334(Global_1835011[63 /*74*/].f_1, 1)) && !func_334(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_334(Global_1835011[75 /*74*/].f_1, 1) && !func_334(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_334(Global_1835011[76 /*74*/].f_1, 1) && !func_334(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_334(Global_1835011[40 /*74*/].f_1, 1) && func_334(Global_1835011[41 /*74*/].f_1, 1)) && !func_334(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_334(Global_1835011[62 /*74*/].f_1, 1) && func_334(Global_1835011[63 /*74*/].f_1, 1)) && !func_334(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_334(Global_1835011[65 /*74*/].f_1, 1) && func_334(Global_1835011[66 /*74*/].f_1, 1)) && !func_334(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

void func_132(char[4] cParam0, vector3 vParam1, float fParam4)
{
	if (func_122(cParam0, 33554432))
	{
		return;
	}
	if (func_122(cParam0, 4096))
	{
		return;
	}
	if (func_396(vParam1))
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
		func_105(cParam0, 8);
	}
	func_105(cParam0, 4096);
	PED::INSTANTLY_FILL_PED_POPULATION();
	VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
	PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), vParam1, fParam4, false, true, true, false);
	CAM::DO_SCREEN_FADE_OUT(0);
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(9999999);
	func_227(&(cParam0->f_603));
}

void func_133(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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

int func_134(int iParam0)
{
	int iVar0;

	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return func_407();
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

void func_135(char[4] cParam0)
{
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(2, func_87(cParam0)))
	{
		UILOG::_UILOG_REMOVE_ENTRY(2, func_87(cParam0));
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(1, func_87(cParam0)))
	{
		func_408(cParam0->f_607);
	}
}

void func_136(char[4] cParam0, int iParam1)
{
	cParam0->f_598 = iParam1;
}

void func_137(char[4] cParam0, int iParam1)
{
	cParam0->f_599 = iParam1;
	func_29(&(cParam0->f_600), 1);
}

bool func_138(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_134(iParam1) /*22*/].f_12;
}

void func_139(char[4] cParam0)
{
	func_409(&(cParam0->f_638));
	func_410(&(cParam0->f_819));
	func_411(&(cParam0->f_1020));
	func_412(&(cParam0->f_1081));
	func_413(&(cParam0->f_1126));
	func_414(&(cParam0->f_5147));
	func_415(&(cParam0->f_1124));
	func_416(&(cParam0->f_5188));
	func_417(&(cParam0->f_5239));
	func_418(&(cParam0->f_5249));
	func_419(&(cParam0->f_5265));
	func_420(&(cParam0->f_5286));
}

void func_140(char[4] cParam0)
{
	if (!ITEMSET::IS_ITEMSET_VALID(Local_14))
	{
		Local_14 = ITEMSET::CREATE_ITEMSET(true);
	}
	func_421(cParam0, GET_HASH_KEY("P_PEBBLE01X"), 67108863);
	func_421(cParam0, GET_HASH_KEY("P_CIGARLIT01X"), 67108863);
	func_421(cParam0, GET_HASH_KEY("P_CANDLE01X"), 67108863);
	func_421(cParam0, GET_HASH_KEY("P_CANDLE_NOFX01X"), 67108863);
	func_421(cParam0, GET_HASH_KEY("P_POTCLAY01X"), 67108863);
	func_421(cParam0, GET_HASH_KEY("P_MONEYBAG01X"), 67108863);
	func_421(cParam0, GET_HASH_KEY("P_LANTERN05X"), 67108863);
	func_421(cParam0, GET_HASH_KEY("P_LANTERN09X"), 67108863);
	func_421(cParam0, GET_HASH_KEY("P_BOTTLEBEER01X"), 67108863);
	func_421(cParam0, GET_HASH_KEY("P_CRATE08X"), 67108863);
	func_421(cParam0, GET_HASH_KEY("P_DIRTPOT01X"), 67108863);
	func_421(cParam0, GET_HASH_KEY("P_PLANTPOTNBX07X"), 67108863);
	func_421(cParam0, GET_HASH_KEY("G_M_M_UNIBRONTEGOONS_01"), 67108863);
	func_421(cParam0, GET_HASH_KEY("U_M_M_NBXGRAVEROBBER_01"), 126);
	func_421(cParam0, GET_HASH_KEY("U_M_M_NBXGRAVEROBBER_02"), 126);
	func_421(cParam0, GET_HASH_KEY("U_M_M_NBXGRAVEROBBER_03"), 126);
	func_421(cParam0, GET_HASH_KEY("U_M_M_NBXGRAVEROBBER_04"), 126);
	func_421(cParam0, GET_HASH_KEY("U_M_M_NBXGRAVEROBBER_05"), 126);
	func_421(cParam0, GET_HASH_KEY("S_M_M_AMBIENTSDPOLICE_01"), 56);
	func_421(cParam0, GET_HASH_KEY("CS_NBXDRUNK"), 67108863);
	func_421(cParam0, GET_HASH_KEY("A_C_DOGSTREET_01"), 67108863);
	func_421(cParam0, GET_HASH_KEY("A_C_CROW_01"), 67108863);
	func_421(cParam0, GET_HASH_KEY("A_C_RAT_01"), 67108863);
	func_421(cParam0, GET_HASH_KEY("A_C_DOGHOUND_01"), 32);
	func_421(cParam0, GET_HASH_KEY("CS_CREEPYOLDLADY"), 67108863);
	func_421(cParam0, GET_HASH_KEY("P_PEBBLE01X"), 67108863);
	func_421(cParam0, GET_HASH_KEY("P_CIGARLIT01X"), 67108863);
	func_421(cParam0, GET_HASH_KEY("P_CANDLE01X"), 67108863);
	func_421(cParam0, GET_HASH_KEY("P_CANDLE_NOFX01X"), 67108863);
	func_421(cParam0, GET_HASH_KEY("P_POTCLAY01X"), 67108863);
	func_421(cParam0, GET_HASH_KEY("P_MONEYBAG01X"), 67108863);
	func_421(cParam0, GET_HASH_KEY("P_LANTERN05X"), 67108863);
	func_421(cParam0, GET_HASH_KEY("P_LANTERN09X"), 67108863);
	func_421(cParam0, GET_HASH_KEY("P_BOTTLEBEER01X"), 67108863);
	func_421(cParam0, GET_HASH_KEY("P_CRATE08X"), 67108863);
	func_421(cParam0, GET_HASH_KEY("P_DIRTPOT01X"), 67108863);
	func_421(cParam0, GET_HASH_KEY("P_PLANTPOTNBX07X"), 67108863);
}

void func_141(char[4] cParam0)
{
	int iVar0;

	func_422(cParam0, sLocal_831, 1, 2, -1);
	func_422(cParam0, sLocal_847, 1, 2, -1);
	func_422(cParam0, sLocal_832, 1, 2, -1);
	func_422(cParam0, sLocal_833, 2, 2, -1);
	func_422(cParam0, sLocal_834, 2, 2, -1);
	func_422(cParam0, sLocal_835, 4, 2, -1);
	func_422(cParam0, sLocal_836, 12, 2, -1);
	func_422(cParam0, sLocal_842, 4, 2, -1);
	func_422(cParam0, sLocal_843, 4, 2, -1);
	func_422(cParam0, sLocal_845, 8, 2, -1);
	func_422(cParam0, sLocal_837, 96, 2, -1);
	func_422(cParam0, sLocal_838, 96, 2, -1);
	func_422(cParam0, sLocal_839, 96, 2, -1);
	func_422(cParam0, sLocal_840, 96, 2, -1);
	func_422(cParam0, sLocal_841, 96, 2, -1);
	func_422(cParam0, sLocal_844, 64, 2, -1);
	func_422(cParam0, "mob2_outro_ride_to_camp", 128, 2, -1);
	func_422(cParam0, sLocal_846, 128, 2, -1);
	func_423(cParam0, "script_story@mob2@leadin@int_b", 1);
	func_423(cParam0, "SCRIPT_STORY@MOB2@IG@IG_unapproved", 67108863);
	func_423(cParam0, "SCRIPT_STORY@MOB2@IG@IG_6_WALK_TALK", 4);
	func_423(cParam0, "MECH_DOORS@LOCKED@1HANDED", 32);
	func_423(cParam0, "AI_DAMAGE@DEAD@BASE", 32);
	func_424(cParam0, "script@story@mob2@leadin@int_a@retry_leadout", &(uLocal_1682[0]), 1, 0, 0, 0, 1);
	func_424(cParam0, "script@story@mob2@leadin@int_c@base", &(uLocal_1710[0]), 1, 0, 0, 0, 1);
	func_424(cParam0, "script@story@mob2@leadin@int_c@leadin_guard_l", &(uLocal_1710[1]), 1, 0, 0, 0, 1);
	func_424(cParam0, "script@story@mob2@leadin@int_c@leadin_guard_r", &(uLocal_1710[2]), 1, 0, 0, 0, 1);
	func_424(cParam0, "script@story@MOB2@ig@IG_0_Gate_Enter@action", &(uLocal_1682[1]), 1, 0, "PL_ACTION", 0, 0);
	func_424(cParam0, "script@story@MOB2@ig@IG_3@ig_3", &(uLocal_1682[3]), 4, 0, 0, 0, 0);
	func_424(cParam0, "script@story@MOB2@ig@IG_4@ig_4", &(uLocal_1682[4]), 4, 0, 0, 0, 0);
	func_424(cParam0, "script@story@MOB2@ig@IG_5@ig_5", &(uLocal_1682[5]), 4, 0, 0, 0, 0);
	func_424(cParam0, "script@story@MOB2@ig@IG_30@IG30_John_Hold_Open_Gate", &(uLocal_1682[18]), 4, 0, "pl_ENTER", 0, 1);
	func_424(cParam0, "script@story@MOB2@ig@IG_29@IG29_Pick_Up_Robbers_Stash", &(uLocal_1682[17]), 16, 0, "Pl_IG29_ROBBERS_STASH_ENTER", 0, 1);
	func_424(cParam0, "script@story@MOB2@ig@IG_8@ig_8", &(uLocal_1682[7]), 32, 0, 0, 0, 1);
	func_424(cParam0, "script@story@MOB2@ig@IG_11@ig11_cemetery_drunk_guy", &(uLocal_1682[9]), 4, 0, sLocal_826, 0, 1);
	func_424(cParam0, "script@story@MOB2@ig@IG_14@ig14_John_Reacts", &(uLocal_1682[10]), 4, 0, 0, 0, 1);
	func_424(cParam0, "script@story@MOB2@ig@ig_15@ig15_Bats_React_John", &(uLocal_1682[11]), 4, 0, 0, 0, 1);
	func_424(cParam0, "script@story@MOB2@ig@ig_16@ig16_ActionLeft", &(uLocal_1682[12]), 8, 0, 0, 0, 1);
	func_424(cParam0, "script@story@MOB2@ig@ig_16@ig16_ActionRight", &(uLocal_1682[13]), 8, 0, 0, 0, 1);
	func_424(cParam0, "script@story@MOB2@ig@IG_20@ig20_run_to_gate", &(uLocal_1682[14]), 32, 0, "pbl_run_back", 0, 1);
	func_424(cParam0, "script@story@MOB2@ig@IG_23@IG23_Escape", &(uLocal_1682[16]), 96, 0, "Pl_IG23_ESCAPE_TRANS_DOOR_2_P0", 0, 1);
	func_424(cParam0, "script@story@MOB2@ig@IG_22@IG22_Jack_On_Horse", &(uLocal_1682[15]), 128, 0, "PL_IG22_JACK_ON_HORSE", 0, 1);
	func_424(cParam0, "script@story@MOB2@leadin@ext@base", &(uLocal_1682[19]), 64, 1, 0, 0, 1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_424(cParam0, "script@story@MOB2@ig@ig_17_coverShoot@ig17_coverShoot", &(uLocal_1704[iVar0]), 8, 0, 0, 0, 1);
		func_425(cParam0, uLocal_1704[iVar0], sLocal_829, 8);
		func_425(cParam0, uLocal_1704[iVar0], sLocal_830, 8);
		iVar0++;
	}
	func_426(cParam0, 67108863);
	func_421(cParam0, iLocal_1716, 6);
	func_427(cParam0, GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN"), 3, -1, 0);
	func_427(cParam0, GET_HASH_KEY("WEAPON_MELEE_LANTERN"), 32, -1, 0);
	func_427(cParam0, GET_HASH_KEY("WEAPON_SHOTGUN_DOUBLEBARREL"), 64, -1, 0);
	func_428(cParam0, "Mob2", 6);
}

void func_142(char[4] cParam0, int iParam1, int iParam2)
{
	func_170(&(cParam0->f_1[func_134(iParam1) /*22*/].f_11), iParam2);
}

void func_143(char[4] cParam0)
{
}

void func_144(char[4] cParam0, int iParam1)
{
	func_429(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1);
}

void func_145(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_276(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		HUD::TEXT_BLOCK_REQUEST(&Var0);
	}
}

void func_146(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_277(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		HUD::TEXT_BLOCK_REQUEST(&Var0);
	}
}

void func_147(char[4] cParam0, bool bParam1, char* sParam2, bool bParam3)
{
	func_430(&(cParam0->f_5310), bParam1, sParam2, bParam3);
}

void func_148(char[4] cParam0)
{
	if (!func_262(cParam0->f_5421))
	{
		cParam0->f_5421 = { func_431() };
	}
}

void func_149(char[4] cParam0)
{
	if (!func_22() == 0 || NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_29(&(cParam0->f_603), 1);
	}
}

void func_150(char[4] cParam0)
{
}

void func_151(char[4] cParam0, float fParam1)
{
	func_432(&(cParam0->f_7375), fParam1);
}

void func_152(char[4] cParam0, float fParam1)
{
	func_433(&(cParam0->f_7375), fParam1);
}

void func_153(char[4] cParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_434(cParam0, bParam1, sParam2, iParam3, iParam4, bParam5, 0);
	func_386(&(cParam0->f_10792), bParam1, sParam2, bParam6);
}

void func_154()
{
	LAW::_0x15ABD5004CAD2D99(0);
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), GET_HASH_KEY("CRIME_UNARMED_ASSAULT"), 3, 3, 1);
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), GET_HASH_KEY("CRIME_TRAMPLE"), 4, 0, -1);
}

void func_155(bool bParam0, bool bParam1)
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

int func_156(char[4] cParam0)
{
	return *cParam0;
}

Vector3 func_157(int iParam0)
{
	vector3 vVar0;

	if (!func_196(iParam0))
	{
		return vVar0;
	}
	return Global_1835011[iParam0 /*74*/].f_9;
}

void func_158(char[4] cParam0, bool bParam1)
{
	bool bVar0;

	if (!func_123(cParam0, func_35(cParam0), 134217728))
	{
		func_141(cParam0);
		func_142(cParam0, func_35(cParam0), 134217728);
	}
	if (bParam1 && !func_123(cParam0, func_37(cParam0), 536870912))
	{
		if (func_435(cParam0, func_37(cParam0), 0))
		{
			func_142(cParam0, func_37(cParam0), 536870912);
		}
	}
	if (func_10(cParam0, 8192))
	{
		if (!func_10(cParam0, 536870912))
		{
			if (func_436(&(cParam0->f_1126), func_35(cParam0)))
			{
				func_101(cParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (func_435(cParam0, func_35(cParam0), 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_101(cParam0, 8192);
	}
}

void func_159(char[4] cParam0)
{
	func_437(0, 1065353216 /* Float: 1f */);
}

bool func_160(char[4] cParam0)
{
	if (func_438(cParam0) < 1)
	{
		func_439(cParam0, func_130(cParam0, 3), !func_10(cParam0, 2097152), cParam0->f_5410, !func_10(cParam0, 32), 0);
		func_440(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1);
	}
	if ((!func_122(cParam0, 4) && !func_107()) && !func_130(cParam0, 3))
	{
		if (!func_122(cParam0, 32))
		{
			if (func_22() == 0)
			{
				func_105(cParam0, 32);
			}
			else
			{
				func_441(cParam0);
			}
		}
		if (func_122(cParam0, 32))
		{
			func_442(cParam0);
		}
	}
	switch (func_438(cParam0))
	{
		case -1:
		case 0:
			func_443(cParam0, 1);
			break;
		case 1:
			if (func_444(cParam0))
			{
				if (func_122(cParam0, 4096))
				{
					func_443(cParam0, 2);
				}
				else
				{
					func_443(cParam0, 3);
				}
			}
			break;
		case 2:
			if (func_445(cParam0))
			{
				func_443(cParam0, 3);
			}
			break;
		case 3:
			if (func_446(cParam0))
			{
				func_443(cParam0, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

int func_161(char[4] cParam0)
{
	return cParam0->f_5408;
}

void func_162(char[4] cParam0, int iParam1)
{
	*cParam0 = iParam1;
}

bool func_163(char[4] cParam0)
{
	int iVar0;

	if (func_35(cParam0) == 26)
	{
		func_447(cParam0, 0);
		return true;
	}
	if (func_448(cParam0))
	{
		iVar0 = func_35(cParam0);
		func_109(cParam0, func_37(cParam0));
		if (func_35(cParam0) == 26)
		{
			func_447(cParam0, 0);
			return true;
		}
		else if (func_123(cParam0, iVar0, 128))
		{
			func_448(cParam0);
		}
	}
	return false;
}

int func_164(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_134(iParam1) /*22*/].f_10;
}

void func_165()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Local_854[iVar0 /*20*/] > -1)
		{
			GRAPHICS::DESTROY_TRACKED_POINT(Local_854[iVar0 /*20*/]);
			Local_854[iVar0 /*20*/] = -1;
		}
		if (Local_854[iVar0 /*20*/].f_1 > -1)
		{
			GRAPHICS::DESTROY_TRACKED_POINT(Local_854[iVar0 /*20*/].f_1);
			Local_854[iVar0 /*20*/].f_1 = -1;
		}
		if (Local_854[iVar0 /*20*/].f_2 > -1)
		{
			GRAPHICS::DESTROY_TRACKED_POINT(Local_854[iVar0 /*20*/].f_2);
			Local_854[iVar0 /*20*/].f_2 = -1;
		}
		iVar0++;
	}
}

void func_166(int iParam0)
{
	Global_1934266.f_56 = iParam0;
}

void func_167()
{
	if (!AUDIO::_0x714A0EA7DE1167BE("Police_Whistle_Distant", sLocal_824))
	{
		AUDIO::_STOP_SOUND_WITH_NAME("Police_Whistle_Distant", sLocal_824);
	}
}

bool func_168(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_169(char[4] cParam0)
{
	func_449();
	func_450();
	func_451();
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		if (PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0x12E09E278C6C29B7(PLAYER::GET_PLAYER_INDEX());
		}
		if (PLAYER::_0xD1F6B912785BFD35(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0x908D4B72854C8F62(PLAYER::GET_PLAYER_INDEX());
		}
	}
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
	func_452(Global_35);
	func_453(Global_35);
	PED::_0x949B2F9ED2917F5D(Global_35, 2);
	PED::SET_PED_CONFIG_FLAG(Global_35, 334, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 301, false);
	if (!ENTITY::IS_ENTITY_DEAD(bLocal_1641))
	{
		PED::_0x2B4CE170DE09F346(bLocal_1641, GET_HASH_KEY("MOB2_FIGHT_THIEVES_JOHN"));
		PED::SET_PED_COMBAT_ATTRIBUTES(bLocal_1641, 27, false);
	}
	PED::SET_PED_CONFIG_FLAG(bLocal_1641, 307, false);
	if (func_24(cParam0) == 0)
	{
		func_192(cParam0, bLocal_1642, 1);
		func_266(cParam0, 0, bLocal_1642, 0, 0, 0, 0);
		func_192(cParam0, bLocal_1641, 1);
		func_266(cParam0, 1, bLocal_1641, 0, 0, 0, 0);
		func_192(cParam0, bLocal_1643, 1);
		func_266(cParam0, 14, bLocal_1643, 0, 0, 0, 0);
		func_192(cParam0, bLocal_1644, 1);
		func_266(cParam0, 13, bLocal_1644, 0, 0, 0, 0);
		func_192(cParam0, bLocal_1645, 1);
		func_266(cParam0, 3, bLocal_1645, 0, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bLocal_1649, false);
		func_271(bLocal_1649, 0);
		func_454(bLocal_1650, 0, 1, 0, 0);
		func_454(bLocal_1651, 1, 1, 0, 0);
	}
	else
	{
		func_266(cParam0, 0, bLocal_1642, 0, 1, 0, 0);
		func_266(cParam0, 1, bLocal_1641, 0, 1, 0, 0);
		func_266(cParam0, 14, bLocal_1643, 0, 1, 0, 0);
		func_266(cParam0, 13, bLocal_1644, 0, 1, 0, 0);
		func_266(cParam0, 3, bLocal_1645, 0, 1, 0, 0);
		func_271(bLocal_1649, 0);
		func_454(bLocal_1650, 0, 1, 0, 0);
		func_454(bLocal_1651, 1, 1, 0, 0);
	}
	func_455();
	func_456();
	func_457();
	func_458();
	func_459();
	func_460(&(Local_14.f_34), 0);
	func_460(&(Local_14.f_29), 0);
	func_460(&(Local_14.f_83), 0);
	func_461();
	if (func_24(cParam0) != 0)
	{
		func_462(cParam0);
	}
}

void func_170(int iParam0, int iParam1)
{
	func_463(iParam0, iParam1);
}

void func_171(bool bParam0)
{
	if (bParam0)
	{
		if (VOLUME::DOES_VOLUME_EXIST(Local_150.f_16))
		{
			PATHFIND::_0x19C7567D2F2287D6(Local_150.f_16, 15);
			PED::_0xE9B168527B337BF0(bLocal_1641, Local_150.f_16);
		}
	}
	else if (VOLUME::DOES_VOLUME_EXIST(Local_150.f_16))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(Local_150.f_16);
	}
}

void func_172(bool bParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	if (bParam0)
	{
		iLocal_1562 = func_464(func_1(4, 0), func_1(4, 1), func_1(8, 0), BUILTIN::VDIST(func_1(4, 0), func_1(4, 1)), 0, 0);
		iLocal_1563 = func_465(Local_150.f_70, 0, 0, 0);
		iLocal_1570 = func_465(Local_150.f_67, 0, 0, 0);
		iLocal_1571 = func_465(Local_150.f_78, 0, 0, 0);
		iLocal_1572 = func_465(Local_150.f_68, 0, 0, 0);
		iLocal_1517 = 0;
		while (iLocal_1517 < 5)
		{
			vVar1 = { func_9(9, iLocal_1517) };
			fVar4 = func_466(9, iLocal_1517);
			iVar0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar1, 0f, 0f, 0f, 10f, 10f, 10f, "m_sbiGeneric");
			VOLUME::_SET_VOLUME_ROTATION(iVar0, 0f, 0f, fVar4);
			iLocal_1564[iLocal_1517] = func_465(iVar0, 0, 0, 0);
			iLocal_1517++;
		}
	}
	else
	{
		if (PED::_0x91A5F9CBEBB9D936(iLocal_1562))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1562, false);
		}
		if (PED::_0x91A5F9CBEBB9D936(iLocal_1563))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1563, false);
		}
		iLocal_1517 = 0;
		while (iLocal_1517 < 5)
		{
			if (PED::_0x91A5F9CBEBB9D936(iLocal_1564[iLocal_1517]))
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1564[iLocal_1517], false);
			}
			iLocal_1517++;
		}
		if (PED::_0x91A5F9CBEBB9D936(iLocal_1570))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1570, false);
		}
		if (PED::_0x91A5F9CBEBB9D936(iLocal_1572))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1572, false);
		}
		if (PED::_0x91A5F9CBEBB9D936(iLocal_1571))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1571, false);
		}
		if (PED::_0x91A5F9CBEBB9D936(iLocal_1573))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1573, false);
		}
	}
}

void func_173(bool bParam0)
{
	if (bParam0)
	{
		func_41(0);
		POPULATION::_0xB56D41A694E42E86(Local_150.f_86, 10208, 0, 0, -1, -1, 0);
		PATHFIND::SET_ROADS_IN_VOLUME(Local_150.f_86, false, false, false);
		PATHFIND::_0xB03944057FD735BA(Local_150.f_86, 6, 0);
		PATHFIND::_0xB03944057FD735BA(Local_150.f_89, 6, 0);
		func_467(Local_150.f_86, 0, 0, 1, 1, 0);
		func_468(Local_150.f_86, 0);
	}
	else
	{
		PATHFIND::_0xD17672447692478E(Local_150.f_69, 0);
		PATHFIND::_0xD17672447692478E(Local_150.f_86, 0);
		PATHFIND::_0x5A4E1A41E3A02AD0(Local_150.f_86, 6, 0);
		PATHFIND::_0x5A4E1A41E3A02AD0(Local_150.f_89, 6, 0);
		POPULATION::_0x74C2B3DC0B294102(Local_150.f_86);
		func_41(1);
	}
}

void func_174(bool bParam0)
{
	if (bParam0)
	{
		VEHICLE::SET_RANDOM_TRAINS(true);
	}
	else
	{
		VEHICLE::SET_RANDOM_TRAINS(false);
		VEHICLE::_0x4C05B42A8D937796();
		VEHICLE::DELETE_ALL_TRAINS();
	}
}

void func_175(bool bParam0)
{
	func_469(5, bParam0);
	func_470(1, bParam0, 0);
}

void func_176(char[4] cParam0)
{
	MAP::DISPLAY_RADAR(true);
	PLAYER::SET_POLICE_RADAR_BLIPS(false);
	func_471(0);
	func_472(1);
	func_473(945612176, 1, 0);
	if (STREAMING::IS_IPL_ACTIVE_HASH(-741366935))
	{
		STREAMING::REMOVE_IPL_HASH(-741366935);
	}
	if (!STREAMING::IS_IPL_ACTIVE_HASH(-800942395))
	{
		STREAMING::REQUEST_IPL_HASH(-800942395);
	}
	ENTITY::REMOVE_MODEL_HIDE(2698.51f, -1061.01f, 47.24f, 2f, GET_HASH_KEY("P_DOOR48X"), 1);
	PED::_0x9851DE7AEC10B4E1(func_1(8, 0), 100f, 1, 0);
}

void func_177()
{
	func_474(0);
}

void func_178()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (VOLUME::DOES_VOLUME_EXIST(Local_297[iVar0 /*21*/]))
		{
			POPULATION::_0x74C2B3DC0B294102(Local_297[iVar0 /*21*/]);
			VOLUME::_DELETE_VOLUME(Local_297[iVar0 /*21*/]);
		}
		iVar0++;
	}
}

void func_179()
{
	func_475(&iLocal_1619);
	func_475(&iLocal_1620);
	func_475(&iLocal_1621);
	func_476(&iLocal_1622);
	iLocal_1517 = 0;
	while (iLocal_1517 < 6)
	{
		func_475(&(iLocal_1630[iLocal_1517]));
		iLocal_1517++;
	}
}

void func_180()
{
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	func_477(0, 1103626240 /* Float: 25f */);
}

void func_181()
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_1654))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_1654, false);
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(func_1(8, 5), 30f);
	}
}

void func_182()
{
	OBJECT::_0x3A77DAE8B4FD7586(iLocal_1994, 0);
	OBJECT::_0x3A77DAE8B4FD7586(iLocal_1995, 0);
	OBJECT::_0x3A77DAE8B4FD7586(iLocal_1989, 0);
	OBJECT::_0x3A77DAE8B4FD7586(iLocal_1990, 0);
	OBJECT::_0x3A77DAE8B4FD7586(iLocal_1991, 1);
}

void func_183()
{
	PED::_0x411189E51B8020BA(Global_35, "Cautious");
}

void func_184()
{
	if (ENTITY::DOES_ENTITY_EXIST(bLocal_1641))
	{
		PED::_0x411189E51B8020BA(bLocal_1641, "Cautious");
	}
}

void func_185()
{
	func_478(&(Local_14.f_90));
	func_478(&(Local_14.f_99));
	func_478(&(Local_14.f_104));
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1616))
	{
		ENTITY::DELETE_ENTITY(&iLocal_1616);
	}
}

void func_186()
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (func_479(Global_35, 0))
		{
			PED::_0xAAC0EE3B4999ABB5(Global_35, false);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(bLocal_1642))
	{
		if (func_479(bLocal_1642, 0))
		{
			PED::_0xAAC0EE3B4999ABB5(bLocal_1642, false);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(bLocal_1641))
	{
		if (func_479(bLocal_1641, 0))
		{
			PED::_0xAAC0EE3B4999ABB5(bLocal_1641, false);
		}
	}
}

void func_187()
{
	PLAYER::_0x22B3CABEDDB538B2(PLAYER::PLAYER_ID(), 0f);
	PED::SET_PED_CONFIG_FLAG(Global_35, 20, false);
}

void func_188()
{
	if (PED::DOES_GROUP_EXIST(iLocal_1560))
	{
		func_480(iLocal_1560);
	}
}

void func_189(bool bParam0)
{
	if (bParam0)
	{
		func_481(-503955743);
	}
	else
	{
		func_482(-503955743);
	}
}

void func_190()
{
	VOLUME::_DELETE_VOLUME(Local_150);
	VOLUME::_DELETE_VOLUME(Local_150.f_1);
	VOLUME::_DELETE_VOLUME(Local_150.f_2);
	VOLUME::_DELETE_VOLUME(Local_150.f_3);
	VOLUME::_DELETE_VOLUME(Local_150.f_4);
	VOLUME::_DELETE_VOLUME(Local_150.f_5);
	VOLUME::_DELETE_VOLUME(Local_150.f_6);
	VOLUME::_DELETE_VOLUME(Local_150.f_7);
	VOLUME::_DELETE_VOLUME(Local_150.f_8);
	VOLUME::_DELETE_VOLUME(Local_150.f_9);
	VOLUME::_DELETE_VOLUME(Local_150.f_10);
	VOLUME::_DELETE_VOLUME(Local_150.f_11);
	VOLUME::_DELETE_VOLUME(Local_150.f_12);
	VOLUME::_DELETE_VOLUME(Local_150.f_13);
	VOLUME::_DELETE_VOLUME(Local_150.f_14);
	VOLUME::_DELETE_VOLUME(Local_150.f_15);
	VOLUME::_DELETE_VOLUME(Local_150.f_16);
	VOLUME::_DELETE_VOLUME(Local_150.f_17);
	VOLUME::_DELETE_VOLUME(Local_150.f_18);
	VOLUME::_DELETE_VOLUME(Local_150.f_19);
	VOLUME::_DELETE_VOLUME(Local_150.f_20);
	VOLUME::_DELETE_VOLUME(Local_150.f_21);
	VOLUME::_DELETE_VOLUME(Local_150.f_22);
	VOLUME::_DELETE_VOLUME(Local_150.f_23);
	VOLUME::_DELETE_VOLUME(Local_150.f_24);
	VOLUME::_DELETE_VOLUME(Local_150.f_25);
	VOLUME::_DELETE_VOLUME(Local_150.f_26);
	VOLUME::_DELETE_VOLUME(Local_150.f_27);
	VOLUME::_DELETE_VOLUME(Local_150.f_28);
	VOLUME::_DELETE_VOLUME(Local_150.f_29);
	VOLUME::_DELETE_VOLUME(Local_150.f_30);
	VOLUME::_DELETE_VOLUME(Local_150.f_31);
	VOLUME::_DELETE_VOLUME(Local_150.f_32);
	VOLUME::_DELETE_VOLUME(Local_150.f_33);
	VOLUME::_DELETE_VOLUME(Local_150.f_34);
	VOLUME::_DELETE_VOLUME(Local_150.f_35);
	VOLUME::_DELETE_VOLUME(Local_150.f_36);
	VOLUME::_DELETE_VOLUME(Local_150.f_37);
	VOLUME::_DELETE_VOLUME(Local_150.f_38);
	VOLUME::_DELETE_VOLUME(Local_150.f_39);
	VOLUME::_DELETE_VOLUME(Local_150.f_40);
	VOLUME::_DELETE_VOLUME(Local_150.f_41);
	VOLUME::_DELETE_VOLUME(Local_150.f_42);
	VOLUME::_DELETE_VOLUME(Local_150.f_43);
	VOLUME::_DELETE_VOLUME(Local_150.f_44);
	VOLUME::_DELETE_VOLUME(Local_150.f_45);
	VOLUME::_DELETE_VOLUME(Local_150.f_46);
	VOLUME::_DELETE_VOLUME(Local_150.f_47);
	VOLUME::_DELETE_VOLUME(Local_150.f_48);
	VOLUME::_DELETE_VOLUME(Local_150.f_49);
	VOLUME::_DELETE_VOLUME(Local_150.f_50);
	VOLUME::_DELETE_VOLUME(Local_150.f_51);
	VOLUME::_DELETE_VOLUME(Local_150.f_52);
	VOLUME::_DELETE_VOLUME(Local_150.f_53);
	VOLUME::_DELETE_VOLUME(Local_150.f_54);
	VOLUME::_DELETE_VOLUME(Local_150.f_55);
	VOLUME::_DELETE_VOLUME(Local_150.f_56);
	VOLUME::_DELETE_VOLUME(Local_150.f_57);
	VOLUME::_DELETE_VOLUME(Local_150.f_58);
	VOLUME::_DELETE_VOLUME(Local_150.f_59);
	VOLUME::_DELETE_VOLUME(Local_150.f_60);
	VOLUME::_DELETE_VOLUME(Local_150.f_61);
	VOLUME::_DELETE_VOLUME(Local_150.f_62);
	VOLUME::_DELETE_VOLUME(Local_150.f_63);
	VOLUME::_DELETE_VOLUME(Local_150.f_64);
	VOLUME::_DELETE_VOLUME(Local_150.f_65);
	VOLUME::_DELETE_VOLUME(Local_150.f_66);
	VOLUME::_DELETE_VOLUME(Local_150.f_67);
	VOLUME::_DELETE_VOLUME(Local_150.f_68);
	VOLUME::_DELETE_VOLUME(Local_150.f_69);
	VOLUME::_DELETE_VOLUME(Local_150.f_70);
	VOLUME::_DELETE_VOLUME(Local_150.f_71);
	VOLUME::_DELETE_VOLUME(Local_150.f_72);
	VOLUME::_DELETE_VOLUME(Local_150.f_73);
	VOLUME::_DELETE_VOLUME(Local_150.f_74);
	VOLUME::_DELETE_VOLUME(Local_150.f_75);
	VOLUME::_DELETE_VOLUME(Local_150.f_76);
	VOLUME::_DELETE_VOLUME(Local_150.f_77);
	VOLUME::_DELETE_VOLUME(Local_150.f_78);
	VOLUME::_DELETE_VOLUME(Local_150.f_79);
	VOLUME::_DELETE_VOLUME(Local_150.f_80);
	VOLUME::_DELETE_VOLUME(Local_150.f_81);
	VOLUME::_DELETE_VOLUME(Local_150.f_82);
	VOLUME::_DELETE_VOLUME(Local_150.f_83);
	VOLUME::_DELETE_VOLUME(Local_150.f_84);
	VOLUME::_DELETE_VOLUME(Local_150.f_85);
	VOLUME::_DELETE_VOLUME(Local_150.f_86);
	VOLUME::_DELETE_VOLUME(Local_150.f_87);
	VOLUME::_DELETE_VOLUME(Local_150.f_88);
	VOLUME::_DELETE_VOLUME(Local_150.f_89);
}

void func_191()
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MOB2_Investigate_Noise_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("MOB2_Investigate_Noise_Scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MOB2_Investigate_Noise_Final_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("MOB2_Investigate_Noise_Final_Scene");
	}
}

void func_192(char[4] cParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		return;
	}
	bVar0 = (ENTITY::IS_ENTITY_A_PED(bParam1) && func_483(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam1)));
	if (bVar0)
	{
		iVar1 = func_484(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam1));
	}
	if (ENTITY::IS_ENTITY_A_PED(bParam1))
	{
		iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam1);
		if (bVar0)
		{
			func_485(iVar1);
			if (MAP::DOES_BLIP_EXIST(MAP::GET_BLIP_FROM_ENTITY(iVar2)))
			{
				MAP::BLIP_REMOVE_MODIFIER(MAP::GET_BLIP_FROM_ENTITY(iVar2), -546708623);
				MAP::BLIP_REMOVE_MODIFIER(MAP::GET_BLIP_FROM_ENTITY(iVar2), 231194138);
			}
		}
		else if (func_486(cParam0, bParam1) && MAP::DOES_BLIP_EXIST(MAP::GET_BLIP_FROM_ENTITY(bParam1)))
		{
			MAP::BLIP_REMOVE_MODIFIER(MAP::GET_BLIP_FROM_ENTITY(bParam1), -546708623);
			MAP::BLIP_REMOVE_MODIFIER(MAP::GET_BLIP_FROM_ENTITY(bParam1), 231194138);
		}
		else
		{
			func_487(bParam1);
		}
	}
	if (func_486(cParam0, bParam1))
	{
		func_488(cParam0, bParam1, 1024);
		if (bParam2)
		{
			func_489(cParam0, bParam1, 128);
		}
		else
		{
			func_488(cParam0, bParam1, 128);
		}
		if (func_490(cParam0, bParam1, &iVar3))
		{
			func_491(&(cParam0->f_5423[iVar3 /*65*/]));
		}
	}
	if (bVar0)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		func_492(iVar1);
	}
}

void func_193(int iParam0)
{
	iParam0 = func_273(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_274(iParam0, 64);
	func_275();
}

int func_194(int iParam0)
{
	return iParam0;
}

void func_195(int iParam0)
{
	if (!func_493(iParam0))
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

bool func_196(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_197(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_198(int iParam0)
{
	int iVar0;

	iVar0 = func_303(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_199(int iParam0)
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
		iVar0 = func_201(iParam0);
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

int func_200(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_498[iParam0 /*2*/].f_1;
}

int func_201(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_494(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

int func_202(int iParam0)
{
	if (!func_197(iParam0))
	{
		return 0;
	}
	return func_496(func_495(iParam0));
}

void func_203(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_22() == 0)
	{
		vVar0.x = Global_265238.f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

bool func_204(int iParam0, bool bParam1, bool bParam2)
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
		if (func_497())
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
		iVar0 = func_279(Global_1898164.f_1[0 /*5*/]);
		if (func_280(iVar0) && func_308(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_197(Global_1898164.f_1[0 /*5*/]))
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

bool func_205(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_206(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_202(iParam0))
	{
		case 1:
			iVar0 = func_279(iParam0);
			return func_498(iVar0);
		case 8:
			iVar1 = func_279(iParam0);
			if (func_308(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				return func_499(iVar1);
			}
			break;
	}
	return -1;
}

void func_207(bool bParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_22() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13) && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_500(iVar0, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = iVar0;
		Global_1898077.f_8 = func_501();
		Global_1898077.f_9 = func_502(Global_1894899.f_2);
		func_503(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	Global_1898077.f_2 = 0;
}

int func_208()
{
	if (!func_334(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_334(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_334(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_334(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_334(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_334(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_334(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_209(int iParam0, int iParam1)
{
	if (!func_197(iParam0))
	{
		return;
	}
	func_504(iParam0, iParam1);
}

int func_210(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_211(bool bParam0)
{
	if (!bParam0 && func_505(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(GET_HASH_KEY("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_212(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_213(int iParam0, bool bParam1)
{
	if (func_22() != -1)
	{
		return;
	}
	if (func_210(0) != iParam0)
	{
		return;
	}
	if (func_506(iParam0))
	{
		if (bParam1)
		{
			func_507(-525676072);
		}
		else
		{
			func_508(-525676072);
		}
	}
}

int func_214(int iParam0)
{
	return func_510(func_509(iParam0));
}

void func_215(int iParam0)
{
	Global_1572864.f_12 = iParam0;
}

void func_216(int iParam0)
{
	Global_1572864.f_11 = iParam0;
}

void func_217(int iParam0)
{
	Global_1572864.f_15 = iParam0;
}

void func_218(float fParam0)
{
	Global_1572864.f_22 = fParam0;
}

void func_219()
{
	if (func_12(Global_43801))
	{
		func_13(&Global_43801, 0, 0);
	}
}

bool func_220()
{
	return func_511(UIFEED::UI_FEED_GET_CURRENT_MESSAGE(3));
}

bool func_221()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

int func_222(int iParam0)
{
	iParam0 = func_273(iParam0);
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

int func_223(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_512(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_3 == iParam1)
		{
			func_513(iParam0, &(Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/]));
		}
		iVar0++;
	}
	return 1;
}

bool func_224(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

bool func_225(char* sParam0, bool bParam1)
{
	if (func_224(sParam0, 1))
	{
		return false;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		AUDIO::PREPARE_MUSIC_EVENT(sParam0);
		func_514(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_514(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_514(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_514(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_514(sParam0, 1);
			return false;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
		func_514(sParam0, 1);
		return true;
	}
	func_514(sParam0, 1);
	return false;
}

bool func_226(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_227(var uParam0)
{
	func_515(uParam0, 0f);
}

int func_228(var uParam0)
{
	if (!func_28(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_516(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_517() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

void func_229(bool bParam0, bool bParam1)
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
		func_518(0);
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

struct<4> func_230(int iParam0, int iParam1)
{
	return func_519(iParam0, iParam1);
}

void func_231(var uParam0, struct<4> Param1)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = Param1.f_3;
}

int func_232(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_134(iParam1) /*22*/].f_9;
}

void func_233(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	char[] cVar0[8];

	Global_1572864.f_8 = iParam0;
	Global_1572864.f_9 = iParam9;
	Global_1572864.f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_202(iParam0) == 1)
	{
		cVar0 = func_112(func_520(iParam0));
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
	}
	else if (func_202(iParam0) == 8)
	{
		cVar0 = func_522(func_521(iParam0));
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
	}
	func_523(1, 1);
	func_524(1, Param1, Param1.f_3);
	Global_1347394 = { Param5 };
	func_66(0);
	func_67(0);
	func_218(1f);
}

void func_234(char* sParam0)
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam0);
	}
	func_514(sParam0, 2);
}

void func_235(int iParam0, int iParam1)
{
	if (!func_525(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0 /*5*/] = (Global_40.f_11029[iParam0 /*5*/] || iParam1);
}

void func_236(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_237()
{
	Global_1934266.f_78.f_62 = -1;
}

void func_238()
{
	StringCopy(&(Global_1934266.f_78.f_64), "", 24);
}

void func_239()
{
	StringCopy(&(Global_1934266.f_78.f_67), "", 24);
}

void func_240()
{
	Global_1934266.f_78.f_63 = 0;
}

bool func_241()
{
	return func_526(SCRIPTS::GET_ID_OF_THIS_THREAD());
}

void func_242(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938.f_865 = (Global_1945938.f_865 - Global_1945938.f_865 & 2);
	}
	else
	{
		Global_1945938.f_865 |= 2;
	}
	func_527(bParam0);
}

void func_243()
{
	if (!Global_1894899.f_186)
	{
		VEHICLE::_0xF5FFB08976911B50(Global_1894899.f_182, Global_1894899.f_183, Global_1894899.f_184, Global_1894899.f_185);
	}
}

void func_244(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

bool func_245()
{
	return (Global_1894899 & 1 != 0 && func_79() != -1);
}

void func_246(var uParam0)
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

void func_247(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_248(int iParam0)
{
	if (!func_528(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_46 = 0;
}

void func_249()
{
	func_529(64);
}

void func_250()
{
	Global_1310750.f_16072 = 0;
}

bool func_251()
{
	if (Global_1572887.f_12 == -1)
	{
		return false;
	}
	return Global_1058888.f_4;
}

bool func_252(int iParam0)
{
	return func_253(23, iParam0);
}

bool func_253(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_530(&(Global_1109400.f_4), iVar0, 5);
	}
	if (iParam1 == func_531())
	{
		return func_530(&(Global_1109400.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1225639.f_21[iParam1])
	{
		return func_530(&(Global_1108178[iParam1 /*37*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_254(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_255(int iParam0)
{
	if (!func_254(iParam0))
	{
		return false;
	}
	return func_258(iParam0, 8);
}

void func_256(int iParam0, int iParam1)
{
	if (!func_254(iParam0))
	{
		return;
	}
	Global_1888801[iParam0 /*35*/].f_19 = iParam1;
}

void func_257(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

bool func_258(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888.f_40615[iParam0 /*11*/] && iParam1) != 0;
}

void func_259(int iParam0)
{
	Global_1894899 = (Global_1894899 - (Global_1894899 && iParam0));
}

bool func_260()
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_258(iVar1, 1))
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
				if (func_22() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1888801[iVar1 /*35*/].f_9, 523);
				}
				else if (!SCRIPTS::_0x30BED53646C86D11(Global_1888801[iVar1 /*35*/].f_9))
				{
					SCRIPTS::_0x7DE4643157AD646C(Global_1888801[iVar1 /*35*/].f_9);
				}
			}
			else if (func_258(iVar1, 2))
			{
				if (func_22() == -1)
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
				func_295(iVar1, 11);
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

bool func_261(var uParam0)
{
	if (func_532(uParam0, 1) || func_532(uParam0, 2))
	{
		return true;
	}
	return false;
}

bool func_262(int iParam0, var uParam1)
{
	return ITEMSET::IS_ITEMSET_VALID(iParam0);
}

int func_263(struct<2> Param0)
{
	if (!func_262(Param0))
	{
		return 0;
	}
	return ITEMSET::GET_ITEMSET_SIZE(Param0);
}

int func_264(struct<2> Param0, int iParam2)
{
	int iVar0;
	int iVar1;

	if (!func_262(Param0))
	{
		return 0;
	}
	iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

bool func_265(int iParam0)
{
	if (!func_533(iParam0))
	{
		return false;
	}
	if (!func_534(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_266(char[4] cParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_533(iParam1))
	{
		return;
	}
	if (!func_265(iParam1))
	{
		return;
	}
	if (bParam5 && !bParam6)
	{
		if (func_24(cParam0) != 0 && func_156(cParam0) >= 2)
		{
			bParam5 = false;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(bParam2))
	{
		func_535(cParam0, bParam2);
		func_536(bParam2);
	}
	func_485(iParam1);
	func_537(iParam1, 0);
	func_538(iParam1, 0, bParam4, bParam5, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

int func_267(char[4] cParam0)
{
	return cParam0->f_5411;
}

int func_268(bool bParam0)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (bParam0 == Global_1900383[iVar0 /*45*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_269(int iParam0)
{
	iParam0 = func_273(iParam0);
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

void func_270(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iParam0 = func_273(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	func_539(iParam0);
	if (func_540(iParam0))
	{
		if (func_269(iParam0) != iVar0)
		{
			return;
		}
	}
	func_541(iParam0);
	func_542(iParam0);
	bVar1 = func_222(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(bVar1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(bVar1) && !PED::IS_PED_INJURED(bVar1))
		{
		}
		if (!ENTITY::_0x88AD6CC10D8D35B2(bVar1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar1, true, true);
		}
		iVar2 = ENTITY::GET_ENTITY_MODEL(bVar1);
		if (PED::_0xAA9F048DCF69B6DC(iVar2))
		{
			if (!func_543(iVar2))
			{
				PED::SET_PED_MODEL_IS_SUPPRESSED(iVar2, false);
			}
		}
		func_544(iParam0);
	}
}

void func_271(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
		return;
	}
	if (!func_545(bParam0))
	{
		return;
	}
	iVar0 = func_268(bParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_61(iVar0);
	func_539(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = func_269(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_540(iVar0))
		{
			return;
		}
	}
	func_546(iVar0);
	PED::SET_PED_KEEP_TASK(bParam0, true);
	if (bParam1 && func_22() == -1)
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(bParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bParam0, true, true);
		}
	}
}

void func_272(char[4] cParam0, int iParam1)
{
	cParam0->f_5308 = (cParam0->f_5308 - (cParam0->f_5308 && iParam1));
}

int func_273(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_274(int iParam0, int iParam1)
{
	iParam0 = func_273(iParam0);
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

void func_275()
{
	if (func_547(0))
	{
		func_548(0);
	}
	if (func_547(1))
	{
		func_548(1);
	}
	if (func_547(5))
	{
		func_548(5);
	}
	if (func_547(6))
	{
		func_541(6);
	}
}

struct<2> func_276(int iParam0)
{
	struct<2> Var0;

	MemCopy(&Var0, {func_112(iParam0)}, 2);
	return Var0;
}

struct<2> func_277(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_276(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

void func_278(var uParam0)
{
	PLAYER::_0xEBFF94328FF7A18A(-3.141593f, 3.141593f);
	if (HUD::_UIPROMPT_IS_VALID(uParam0->f_11))
	{
		HUD::_UIPROMPT_DELETE(uParam0->f_11);
	}
}

int func_279(int iParam0)
{
	if (!func_197(iParam0))
	{
		return -1;
	}
	return func_549(func_495(iParam0));
}

bool func_280(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_281(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_282(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_550(iParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_551(iParam0)))
	{
		UILOG::_UILOG_REMOVE_ENTRY(iVar0, func_551(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(2, func_551(iParam0)))
			{
				UILOG::_UILOG_REMOVE_ENTRY(2, func_551(iParam0));
			}
		}
	}
	func_552(iParam0, 4);
	func_552(iParam0, 8);
	func_552(iParam0, 16);
}

void func_283(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1347702)
	{
		if (func_280(iVar0))
		{
			if (func_281(iVar0, 4))
			{
				func_284(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_284(int iParam0, bool bParam1)
{
	if (!func_281(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_550(iParam0), func_551(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_550(iParam0), func_551(iParam0), 2, "");
		func_553(iParam0, 16);
	}
	else
	{
		if (func_281(iParam0, 8))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_550(iParam0), func_551(iParam0), 1, "");
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_550(iParam0), func_551(iParam0), 0, "");
		}
		func_552(iParam0, 16);
	}
}

void func_285(int iParam0, bool bParam1)
{
	if (Global_1347702[iParam0 /*49*/].f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_281(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_550(iParam0), func_551(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_281(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_550(iParam0), func_551(iParam0), 1, "");
		}
		func_553(iParam0, 8);
	}
	else
	{
		if (func_281(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_550(iParam0), func_551(iParam0), 0, "");
		}
		func_552(iParam0, 8);
	}
}

int func_286(char[4] cParam0)
{
	if (func_122(cParam0, 8388608))
	{
		return 2;
	}
	if (func_122(cParam0, 4194304))
	{
		return 4;
	}
	if (func_122(cParam0, 4))
	{
		return 1;
	}
	if (func_130(cParam0, 1) && func_84(32768))
	{
		return 3;
	}
	return 0;
}

void func_287(int iParam0, int iParam1)
{
	if (func_547(0))
	{
		if (func_554(0))
		{
			func_555(0);
		}
	}
	if (func_547(1))
	{
		if (func_554(1))
		{
			func_555(1);
		}
	}
}

void func_288(char[4] cParam0)
{
	if (func_122(cParam0, 1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(cParam0->f_5411))
	{
		if (func_122(cParam0, 16))
		{
			func_60(cParam0, 0);
		}
		if (func_440(cParam0, 0, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_289(char[4] cParam0)
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

void func_290(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_556(iParam0, sParam4, iParam5);
	}
	func_557(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_291(int iParam0)
{
	if (!func_254(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_20;
}

int func_292()
{
	return Global_1899515;
}

void func_293(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/].f_2 = iParam1;
		return;
	}
	Global_1058888.f_40615[iParam0 /*11*/].f_2 = iParam1;
}

void func_294(int iParam0, int iParam1)
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

void func_295(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] = (Global_23118[iParam0 /*11*/] - (Global_23118[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888.f_40615[iParam0 /*11*/] = (Global_1058888.f_40615[iParam0 /*11*/] - (Global_1058888.f_40615[iParam0 /*11*/] && iParam1));
}

void func_296(int iParam0)
{
	if (!func_254(iParam0))
	{
		return;
	}
	if (func_558(iParam0))
	{
		func_559(iParam0);
	}
	else
	{
		func_560(iParam0);
	}
}

int func_297(int iParam0)
{
	if (func_561(&(Global_1109400.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_298(int iParam0)
{
	if (func_562(&(Global_1109400.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_299(int iParam0, int iParam1)
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

void func_300(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_563(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_564(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_565(iVar0) < func_566(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_302(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_301(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_567();
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

void func_302(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_568(iParam0, bParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

int func_303(int iParam0)
{
	if (!func_197(iParam0))
	{
		return -1;
	}
	return func_201(iParam0);
}

void func_304(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_6 = iParam1;
}

int func_305(bool bParam0, int iParam1)
{
	int iVar0;

	if (!bParam0 && func_505(373691918))
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
	func_211(bParam0);
	return 1;
}

void func_306()
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
		if (func_533(iVar17))
		{
			iVar18 = func_569(iVar17);
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
	func_570(&(Global_1359489.f_55));
	if (func_571(GET_HASH_KEY("CSTAG_PLAYER_AWAY"), 1))
	{
		func_572(GET_HASH_KEY("CSTAG_PLAYER_AWAY"), 1, 0);
	}
}

void func_307(int iParam0)
{
	if (!func_197(iParam0))
	{
		return;
	}
	func_574(iParam0, (func_573(iParam0) + BUILTIN::SHIFT_LEFT(1, 16)));
}

bool func_308(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_309()
{
	return func_575() > 0;
}

void func_310(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP8_ABIGAIL2X1_1"), iParam1);
			break;
		case 18:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_1"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_2"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_4"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_GT_BRAITHWAITES_1"), iParam1);
			break;
		case 20:
			func_576(GET_HASH_KEY("JOURNAL_GT_BRAITHWAITES_2"), iParam1);
			break;
		case 2:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_1"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_2"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_4"), iParam1);
			break;
		case 23:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_1"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_2"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_3"), iParam1);
			func_577(1);
			break;
		case 16:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_FEUD1_1"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_FEUD1_2_TXT"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_FEUD1_3_TXT"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_FEUD1_4"), iParam1);
			break;
		case 59:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_ENDLESS_SUMMER_1"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_ENDLESS_SUMMER_2"), iParam1);
			if (func_578(146))
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_TREASURE2_JN"), iParam1);
			}
			func_577(1);
			break;
		case 76:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_FINALE2_1"), iParam1);
			if (func_579() == 0)
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_9A"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_10B"), iParam1);
			}
			break;
		case 44:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG1_1"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG1_2"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG1_3"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG1_4"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG1_4B"), iParam1);
			break;
		case 46:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG3_1"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG3_2"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG3_4"), iParam1);
			break;
		case 17:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_GRAYS1_1"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_GRAYS1_3"), iParam1);
			break;
		case 19:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_GRAYS2_1"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_GRAYS2_2"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_GT_GRAYS_2"), iParam1);
			break;
		case 21:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_GRAYS3_1"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_GRAYS3_2"), iParam1);
			func_577(0);
			break;
		case 15:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_HUNTING1_1"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_HUNTING1_1B"), iParam1);
			break;
		case 33:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_INDUSTRY1_1"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_INDUSTRY1_2"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_INDUSTRY1_4"), iParam1);
			break;
		case 34:
			func_576(GET_HASH_KEY("JOURNAL_GT_INDUSTRY_3"), iParam1);
			break;
		case 64:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP8_LARAMIE1_1"), iParam1);
			break;
		case 60:
			func_576(GET_HASH_KEY("JOURNAL_CHAP8_PRONGHORN"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP8_MARSTON1_2"), iParam1);
			break;
		case 73:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_MARSTON6_1"), iParam1);
			break;
		case 74:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_MARSTON7_1"), iParam1);
			if (func_579() == 0)
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_4A"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_5B"), iParam1);
			}
			break;
		case 8:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MARY1_1"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MARY1_3"), iParam1);
			break;
		case 36:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MARY3_1"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MARY3_2"), iParam1);
			if (Global_1357515 == 0)
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MARY3_2A"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MARY3_2B"), iParam1);
			}
			break;
		case 27:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB1_1"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB1_2"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB1_3"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB1_4"), iParam1);
			break;
		case 28:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB2_1"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB2_2"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB2_3"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB2_4"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_GT_MOB_2"), iParam1);
			break;
		case 29:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB3_1"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB3_2"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_GT_MOB_3"), iParam1);
			break;
		case 31:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB5_1"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB5_2"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB5_3"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB5_4"), iParam1);
			break;
		case 4:
			func_576(GET_HASH_KEY("JOURNAL_CHAP2_HORSESHOE"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MUDTOWN1_2"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MUDTOWN1_3"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MUDTOWN1_5"), iParam1);
			func_577(0);
			break;
		case 6:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2"), iParam1);
			if (Global_1357515 == -1)
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_A"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_B"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_C"), iParam1);
			}
			break;
		case 25:
			func_576(GET_HASH_KEY("JOURNAL_GT_MUDTOWN_3B"), iParam1);
			break;
		case 24:
			if (Global_1357515 == -1)
			{
				func_576(GET_HASH_KEY("JOURNAL_GT_MUDTWON_5_5000"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				func_576(GET_HASH_KEY("JOURNAL_GT_MUDTWON_5_7500"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_GT_MUDTWON_5_10000"), iParam1);
			}
			break;
		case 48:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE1_1"), iParam1);
			if (Global_1357515 == -1)
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE1_2"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE1_2A"), iParam1);
			}
			if (func_580(51))
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE1_2B"), iParam1);
			}
			break;
		case 49:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE2_1"), iParam1);
			if (Global_1357515 == 0)
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE2_2A"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE2_2B"), iParam1);
			}
			else if (Global_1357515 == 2)
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE2_2C"), iParam1);
			}
			break;
		case 58:
			func_576(GET_HASH_KEY("JOURNAL_GT_NATIVE_3"), iParam1);
			break;
		case 50:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVESON1_1"), iParam1);
			break;
		case 52:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVESON3_1"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVESON3_2"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVESON3_2B"), iParam1);
			if (bParam2 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVESON3_3A"), iParam1);
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVESON3_3A2"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVESON3_3B"), iParam1);
			}
			break;
		case 32:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_ODRISCOLL4_1"), iParam1);
			break;
		case 47:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_MARY4_1"), iParam1);
			break;
		case 69:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_SADIE2_1"), iParam1);
			if (func_334(Global_1347702[9 /*49*/].f_15, 1))
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_2B"), iParam1);
			}
			break;
		case 70:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_SADIE3"), iParam1);
			if (func_579() == 0)
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_7A"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_8B"), iParam1);
			}
			break;
		case 71:
			if (func_579() == 0)
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_8A"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_9B"), iParam1);
			}
			break;
		case 37:
			func_576(GET_HASH_KEY("JOURNAL_GT_SAINT_DENIS_1"), iParam1);
			break;
		case 9:
			if (Global_1357515 == -1)
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_SALOON1_1"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_SALOON1_1B"), iParam1);
			}
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_SALOON1_2"), iParam1);
			break;
		case 13:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_SEAN1_1"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_SEAN1_2"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_SEAN1_3"), iParam1);
			break;
		case 53:
			func_576(GET_HASH_KEY("JOURNAL_GT_CORNWALL_1"), iParam1);
			break;
		case 54:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_TRAINROBBERY1_1"), iParam1);
			break;
		case 56:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_TRAINROBBERY3_1"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_TRAINROBBERY3_3"), iParam1);
			break;
		case 57:
			func_576(GET_HASH_KEY("JOURNAL_GT_TRAIN_ROBBERY_4"), iParam1);
			break;
		case 22:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_TRELAWNY1_1"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_TRELAWNY1_2"), iParam1);
			break;
		case 12:
			func_576(GET_HASH_KEY("JOURNAL_GT_UTOPIA_2"), iParam1);
			break;
		case 0:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP1_WINTER1_1"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP1_WINTER1_3"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP1_WINTER1_5"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP1_WINTER1_6"), iParam1);
			break;
		case 1:
			func_577(1);
			break;
		case 3:
			if (func_345())
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(GET_HASH_KEY("JOURNAL_GT_WINTER_4")))
				{
					func_576(GET_HASH_KEY("JOURNAL_GT_WINTER_4_SE"), iParam1);
				}
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(GET_HASH_KEY("JOURNAL_GT_WINTER_4_SE")))
			{
				func_576(GET_HASH_KEY("JOURNAL_GT_WINTER_4"), iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_311()
{
	if (func_22() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

void func_312(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_ABIGAIL1_1"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_ABIGAIL1_3"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_ABIGAIL1_4"), iParam1);
			break;
		case 1:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_ABIGAIL2X2_1"), iParam1);
			break;
		case 2:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_ABIGAIL3_1"), iParam1);
			break;
		case 9:
			func_576(GET_HASH_KEY("JOURNAL_CHAP9_BEECHERSHOPE"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_BEECHERS1X3_1"), iParam1);
			if (func_334(Global_1835011[69 /*74*/].f_1, 1))
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_1A"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_1B"), iParam1);
			}
			break;
		case 22:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_CALDERON1X1_1"), iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_1_AR"), iParam1);
				func_576(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_2_AR"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_1_JN"), iParam1);
				func_576(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_2_JN"), iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_3_1_AR"), iParam1);
				func_576(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_3_2_AR"), iParam1);
			}
			else if (func_578(26))
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_3_JN_B1"), iParam1);
				func_576(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_3_JN_B2"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_3_JN_A"), iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (Global_1357515 == -1)
				{
					func_576(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2F_AR"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					func_576(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2A_AR"), iParam1);
				}
				else if (Global_1357515 == 1)
				{
					func_576(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2B_AR"), iParam1);
				}
				else if (Global_1357515 == 2)
				{
					func_576(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2C_AR"), iParam1);
				}
				else if (Global_1357515 == 3)
				{
					func_576(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2D_AR"), iParam1);
				}
				else if (Global_1357515 == 4)
				{
					func_576(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2E_AR"), iParam1);
				}
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2_JN"), iParam1);
				if (Global_1357515 == -1)
				{
					func_576(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2E_JN"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					func_576(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2A_JN"), iParam1);
				}
				else if (Global_1357515 == 1)
				{
					func_576(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2B_JN"), iParam1);
				}
				else if (Global_1357515 == 2)
				{
					func_576(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2C_JN"), iParam1);
				}
				else if (Global_1357515 == 3)
				{
					func_576(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2D_JN"), iParam1);
				}
				else if (Global_1357515 == 4)
				{
					func_576(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2F_JN"), iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_3_AR"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_3_JN"), iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_4_AR"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_4_JN"), iParam1);
			}
			break;
		case 37:
			func_576(GET_HASH_KEY("JOURNAL_GT_COACH_ROB_RSC"), iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_CRKPT1_1_AR"), iParam1);
				func_576(GET_HASH_KEY("JOURNAL_RC_CRKPT1_2_AR"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_CRKPT1_1_JN"), iParam1);
				func_576(GET_HASH_KEY("JOURNAL_RC_CRKPT1_1_JN_B"), iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_CRKPT2_1_AR"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_CRKPT2_1_JN"), iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_CRKPT3_1_AR"), iParam1);
			}
			else if (func_578(54))
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_CRKPT3_1B_JN"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_CRKPT3_1A_JN"), iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_CIG1_1_AR"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_CIG1_1_JN"), iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_DINO1_1_AR"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_DINO1_1_JN"), iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_DINO2_1_AR"), iParam1);
			}
			else if (func_578(39))
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_DINO2_1_B_JN"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_DINO2_1_A_JN"), iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_368(Global_1835011[33 /*74*/].f_1) == 1)
				{
					func_576(GET_HASH_KEY("JOURNAL_RC_EXOTIC1_1B_AR_A"), iParam1);
				}
				else
				{
					func_576(GET_HASH_KEY("JOURNAL_RC_EXOTIC1_1A_AR_A"), iParam1);
				}
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_EXOTIC1_1_JN"), iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_EXOTIC3_1_AR_A"), iParam1);
			}
			else if (func_578(43))
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_EXOTIC3_1_JN_B"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_EXOTIC3_1_JN_A"), iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_FISH1_1_AR"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_FISH1_1_JN"), iParam1);
			}
			break;
		case 42:
			if (func_578(41))
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_FISH2_1_JN_B"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_FISH2_1_JN_A"), iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_ROCKCARV1_AR"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_ROCKCARV1_JN"), iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_ROCKCARV2_AR"), iParam1);
			}
			else if (func_578(49))
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_ROCKCARV2_JN_B"), iParam1);
				func_576(GET_HASH_KEY("JOURNAL_RC_ROCKCARV2_JN_B2"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_ROCKCARV2_JN_A"), iParam1);
			}
			break;
		case 51:
			func_576(GET_HASH_KEY("JOURNAL_RC_TAX1_1_JN"), iParam1);
			break;
		case 58:
			if (func_334(Global_1347702[23 /*49*/].f_15, 1))
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_DOCTORS_1"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_DOCTORS_1B"), iParam1);
			}
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_DOCTORS_2"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_DOCTORS_3"), iParam1);
			break;
		case 59:
			func_576(GET_HASH_KEY("JOURNAL_CHAP2_DOWNES1_1"), iParam1);
			break;
		case 62:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_DOWNES2_1"), iParam1);
			break;
		case 63:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_ODRISCOLL2_2B"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_GT_ODRISCOLL_2"), iParam1);
			break;
		case 65:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_1"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_2"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_3"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_4"), iParam1);
			break;
		case 66:
			func_576(GET_HASH_KEY("JOURNAL_CHAP3_CLEMENS"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_DUTCH1_1"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_DUTCH1_2"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_DUTCH1_3"), iParam1);
			func_577(1);
			break;
		case 67:
			func_576(GET_HASH_KEY("JOURNAL_CHAP4_SHADYBELLE"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_DUTCH2_1"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_DUTCH2_2"), iParam1);
			break;
		case 68:
			func_576(GET_HASH_KEY("JOURNAL_CHAP6_BEAVERHOLLOW"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_DUTCH3_2"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_DUTCH3_2B"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_DUTCH3_3"), iParam1);
			func_577(0);
			break;
		case 70:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_EDITHDOWNE2_1"), iParam1);
			break;
		case 71:
			func_576(GET_HASH_KEY("JOURNAL_RC_MILLER1_JN"), iParam1);
			break;
		case 73:
			func_576(GET_HASH_KEY("JOURNAL_RC_MILLER3_JN"), iParam1);
			break;
		case 75:
			func_576(GET_HASH_KEY("JOURNAL_RC_MILLER4_JN"), iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_FMA1_1_AR"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_FMA1_1_JN"), iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_FMA3_1_AR"), iParam1);
				func_576(GET_HASH_KEY("JOURNAL_RC_FMA3_2_AR"), iParam1);
			}
			else if (func_578(78))
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_FMA3_2_JN"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_FMA3_1_JN"), iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_FMA4_1_AR"), iParam1);
			}
			else if (func_578(79))
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_FMA4_2_JN"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_FMA4_1_JN"), iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER1_1_AR"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER1_1_JN"), iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER2_1_AR"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER2_1_JN"), iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER3_1_AR"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER3_1_JN"), iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER5_1_AR"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER5_1_JN"), iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_HKK1_AR"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_HKK1_JN"), iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_HKK4_AR"), iParam1);
				func_576(GET_HASH_KEY("JOURNAL_RC_HKK4B_AR"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_HKK4_A_JN"), iParam1);
				func_576(GET_HASH_KEY("JOURNAL_RC_HKK4_A2_JN"), iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_HKK5_AR"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_HKK5_JN"), iParam1);
			}
			break;
		case 94:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_1"), iParam1);
			if (Global_1357515 == -1)
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_2A"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_2B"), iParam1);
			}
			func_576(GET_HASH_KEY("JOURNAL_GT_HOME_ROB"), iParam1);
			break;
		case 99:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MARY3X1_1"), iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_MASON1_1_AR"), iParam1);
				if (Global_1357515 == -1)
				{
					func_576(GET_HASH_KEY("JOURNAL_RC_MASON1_2_AR_B"), iParam1);
				}
				else
				{
					func_576(GET_HASH_KEY("JOURNAL_RC_MASON1_2_AR_A"), iParam1);
				}
			}
			else if (Global_1357515 == -1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_MASON1_1B_JN"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_MASON1_1A_JN"), iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_MASON2_1_AR"), iParam1);
			}
			else if (func_578(101))
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_MASON2_1B_JN"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_MASON2_1A_JN"), iParam1);
			}
			break;
		case 103:
			func_576(GET_HASH_KEY("JOURNAL_RC_MASON3_1_AR"), iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_MASON4_1_AR"), iParam1);
				func_576(GET_HASH_KEY("JOURNAL_RC_MASON4_2_AR"), iParam1);
			}
			else if (func_578(103))
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_MASON4_1B_JN"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_MASON4_1A_JN"), iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_MASON5_1_AR"), iParam1);
			}
			else if (func_578(104))
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_MASON5_1B_JN"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_MASON5_1A_JN"), iParam1);
			}
			break;
		case 108:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_MONROE_1"), iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_MAYOR1_AR"), iParam1);
				func_576(GET_HASH_KEY("JOURNAL_RC_MAYOR1_AR_B"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_MAYOR1_JN"), iParam1);
				func_576(GET_HASH_KEY("JOURNAL_RC_MAYOR1B_JN"), iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_MAYOR2_AR"), iParam1);
			}
			else if (func_578(109))
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_MAYOR2B_JN"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_MAYOR2A_JN"), iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (Global_1357515 == 0)
				{
					func_576(GET_HASH_KEY("JOURNAL_RC_MAYOR3A_AR"), iParam1);
				}
				else
				{
					func_576(GET_HASH_KEY("JOURNAL_RC_MAYOR3B_AR"), iParam1);
				}
			}
			else if (func_578(110))
			{
				if (Global_1357515 == 0)
				{
					func_576(GET_HASH_KEY("JOURNAL_RC_MAYOR3C_JN"), iParam1);
				}
				else
				{
					func_576(GET_HASH_KEY("JOURNAL_RC_MAYOR3D_JN"), iParam1);
					func_576(GET_HASH_KEY("JOURNAL_RC_MAYOR3D_2_JN"), iParam1);
				}
			}
			else if (Global_1357515 == 0)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_MAYOR3A_JN"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_MAYOR3B_JN"), iParam1);
				func_576(GET_HASH_KEY("JOURNAL_RC_MAYOR3B_2_JN"), iParam1);
			}
			break;
		case 115:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_NATIVERSC1_1"), iParam1);
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_NATIVERSC1_2"), iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_ODDF1_AR"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_ODDF1_JN"), iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_ODDF2_AR"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_ODDF2_JN"), iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_OHBRO1_1_AR"), iParam1);
				func_576(GET_HASH_KEY("JOURNAL_RC_OHBRO1_2_AR"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_OHBRO1_1_JN"), iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_OHBRO2_1_AR"), iParam1);
			}
			else if (func_578(117))
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_OHBRO2_1B_JN"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_OHBRO2_1A_JN"), iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_OHBRO3_1_AR"), iParam1);
			}
			else if (func_578(118))
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_OHBRO3_2B_JN"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_OHBRO3_2A_JN"), iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_PW1_AR"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_PW1_JN"), iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_PW3_AR"), iParam1);
			}
			else if (func_578(121))
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_PW3B_JN"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_PW3A_JN"), iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_PW4_AR"), iParam1);
			}
			else if (func_578(122))
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_PW4B_JN"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_PW4A_JN"), iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_PW5_AR"), iParam1);
				func_576(GET_HASH_KEY("JOURNAL_RC_PW5B_AR"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_PW5_JN"), iParam1);
				func_576(GET_HASH_KEY("JOURNAL_RC_PW5B_JN"), iParam1);
			}
			break;
		case 127:
			func_576(GET_HASH_KEY("JOURNAL_RC_RTL1_AR"), iParam1);
			break;
		case 129:
			func_576(GET_HASH_KEY("JOURNAL_RC_RTL3_AR"), iParam1);
			break;
		case 131:
			func_576(GET_HASH_KEY("JOURNAL_RC_RTL5_AR"), iParam1);
			break;
		case 133:
			func_576(GET_HASH_KEY("JOURNAL_RC_RTL7_AR"), iParam1);
			break;
		case 134:
			func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_SADIE1_1"), iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (Global_1357515 == -1)
				{
					func_576(GET_HASH_KEY("JOURNAL_RC_KILLER4A_AR"), iParam1);
				}
				else
				{
					func_576(GET_HASH_KEY("JOURNAL_RC_KILLER4B_AR"), iParam1);
				}
			}
			else if ((HUD::_JOURNAL_CAN_WRITE_ENTRY(GET_HASH_KEY("JOURNAL_RC_KILLER1_AR")) && HUD::_JOURNAL_CAN_WRITE_ENTRY(GET_HASH_KEY("JOURNAL_RC_KILLER2_AR"))) && HUD::_JOURNAL_CAN_WRITE_ENTRY(GET_HASH_KEY("JOURNAL_RC_KILLER3_AR")))
			{
				if (Global_1357515 == -1)
				{
					func_576(GET_HASH_KEY("JOURNAL_RC_KILLER4A_JN"), iParam1);
				}
				else
				{
					func_576(GET_HASH_KEY("JOURNAL_RC_KILLER4B_JN"), iParam1);
				}
			}
			else if (Global_1357515 == -1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_KILLER4C_JN"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_KILLER4D_JN"), iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_SLVC1_AR"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_SLVC1_JN"), iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_SLVC2_AR"), iParam1);
				func_576(GET_HASH_KEY("JOURNAL_RC_SLVC3A_AR"), iParam1);
			}
			else if (func_578(136))
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_SLVC2B_JN"), iParam1);
				func_576(GET_HASH_KEY("JOURNAL_RC_SLVC3C_JN"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_SLVC2A_JN"), iParam1);
				func_576(GET_HASH_KEY("JOURNAL_RC_SLVC3A_JN"), iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_STRAUSS3_3A"), iParam1);
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_STRAUSS3_3B"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_STRAUSS3_3C"), iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (Global_1357515 == 1)
				{
					func_576(GET_HASH_KEY("JOURNAL_RC_TREASURE1A_AR"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					func_576(GET_HASH_KEY("JOURNAL_RC_TREASURE1B_AR"), iParam1);
				}
			}
			else if (Global_1357515 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_TREASURE1A_JN"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_TREASURE1B_JN"), iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_WARVET1_AR"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_WARVET1_JN"), iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_WARVET2_AR"), iParam1);
			}
			else if (func_578(147))
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_WARVET2B_JN"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_WARVET2A_JN"), iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_WARVET3_AR"), iParam1);
			}
			else if (func_578(148))
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_WARVET3B_JN"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_WARVET3A_JN"), iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_WARVET4_AR"), iParam1);
			}
			else if (func_578(149))
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_WARVET4B_JN"), iParam1);
			}
			else
			{
				func_576(GET_HASH_KEY("JOURNAL_RC_WARVET4A_JN"), iParam1);
			}
			break;
		default:
			break;
	}
}

int func_313(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	*iParam1 = GET_HASH_KEY("CSTP_PERSIST_ACROSS_STATES");
	*iParam2 = -1;
	iVar0 = func_202(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_520(iParam0);
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
					*iParam1 = -2060316038;
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
					if (func_368(Global_1835011[9 /*74*/].f_1) == 0)
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
			iVar2 = func_279(iParam0);
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
					*iParam1 = -2060316038;
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
					*iParam1 = -2060316038;
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
					*iParam1 = -2060316038;
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
			iVar3 = func_279(iParam0);
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

int func_314(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_581(iParam0);
	iVar3 = func_582(iParam0);
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
				iVar1 = func_292();
				func_341(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0 /*5*/].f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_4 = iVar2;
			func_583(iParam0, 1);
			if (func_584(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4 /*5*/].f_4 == iVar2 && Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_585(&(Global_40.f_4283.f_6[iVar4 /*5*/]), 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_586(1, iParam0);
				}
				else
				{
					func_587(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_315(int iParam0, int iParam1)
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

int func_316(int iParam0, int iParam1, int iParam2)
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

void func_317(bool bParam0)
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

void func_318(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479.f_4)
	{
		func_588(iParam0, iParam1, bParam2);
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

int func_319(int iParam0, int iParam1)
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

bool func_320(int iParam0)
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

void func_321(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_22() != -1)
	{
		return;
	}
	if ((Global_36616 && func_589(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_590(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != GET_HASH_KEY("HONOR_EVENT_AMBIENT_KILL") && iParam1 != GET_HASH_KEY("HONOR_EVENT_AMBIENT_KO")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_KILL_VERMIN")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_KILL_HORSE")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_591(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_592(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_591(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_322(int iParam0)
{
	if (!func_197(iParam0))
	{
		return -1;
	}
	return func_593(func_495(iParam0));
}

int func_323(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_324()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 1);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_594(13);
		Global_1898441[iVar0 /*38*/] = 13;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_WIN2_COM", 24);
	}
}

bool func_325(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_595(iParam0, 0))
	{
		return false;
	}
	if (!func_596(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_597(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_598(iParam0, bParam2);
	iVar2 = 0;
	if (func_599(iParam0, 0, 0) == 0)
	{
		if (func_600(iParam0))
		{
			iVar5 = func_601(iParam0);
			iVar6 = func_602(iVar5);
			iVar7 = func_603(iVar6) + 1;
			func_604(iVar5);
			if (func_605(38))
			{
				func_332(483, 0);
			}
			else
			{
				func_332(482, 0);
			}
			if (iVar7 == func_606(iVar6))
			{
				func_325(func_607(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_406() && func_608(4))
				{
					if (func_406() && (func_609(38) || func_605(38)))
					{
						func_611(38, func_607(iVar6), 0, 0, func_610(), 0, -1, 0);
						func_612(2);
					}
					else
					{
						func_611(38, func_607(iVar6), 0, 0, func_610(), 0, -1, 0);
						func_612(1);
					}
				}
			}
			else if (func_406() && func_608(4))
			{
				if (func_406() && (func_609(38) || func_605(38)))
				{
					func_611(38, 0, 0, 0, func_610(), 0, -1, 0);
					func_612(2);
				}
				else
				{
					func_611(38, 0, 0, 0, func_610(), 0, -1, 0);
					func_612(1);
				}
			}
			if (func_406() && func_608(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (func_406() && (func_609(38) || func_605(38)))
					{
						func_613(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_613(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_614(iParam0) == GET_HASH_KEY("CLOTHING"))
	{
		if ((!func_615(iParam0, 866047851) && !func_615(iParam0, -1979000645)) && !func_615(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_616(iParam0, 8388608) && !func_617(28))
	{
		func_618(28);
	}
	if (!bVar3)
	{
		if (func_615(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_619(iParam0) == -1447088266)
			{
				iVar1 = func_621(func_620(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_22() == -1)
					{
						func_622(iVar1);
					}
					if (func_623(0) && func_624(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_625(iParam0, iVar0, iParam5);
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
					if (func_22() == -1)
					{
						func_622(iParam0);
					}
					if (func_623(0) && func_624(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_625(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_614(iParam0) == GET_HASH_KEY("WEAPON"))
		{
			if (!func_626(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_614(iParam0) == GET_HASH_KEY("AMMO") && func_627(iParam0))
		{
			if (!func_628(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_615(iParam0, 866047851))
		{
			func_629(iParam0);
		}
		else if (func_615(iParam0, 2000026003))
		{
			func_630(iParam0);
		}
		else if (func_615(iParam0, -103750053))
		{
			func_97(func_631(GET_HASH_KEY("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == GET_HASH_KEY("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_97(func_632(GET_HASH_KEY("COLLECTED"), GET_HASH_KEY("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_615(iParam0, -121341956) && !func_615(iParam0, 606799272))
		{
			if (iParam0 != GET_HASH_KEY("WEAPON_KIT_DETECTOR") && iParam0 != GET_HASH_KEY("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (func_334(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_332(498, 0);
				}
			}
			if (func_615(iParam0, -2017733358) || func_615(iParam0, -1369131378))
			{
				func_633(iParam0);
			}
		}
		else if (func_615(iParam0, -136654233))
		{
			if (func_615(iParam0, -1021472396))
			{
			}
		}
		else if (func_615(iParam0, -1466706512) && func_615(iParam0, 1147021565))
		{
			func_332(484, 0);
		}
		else if (func_615(iParam0, 1147021565) && func_615(iParam0, -524514947))
		{
		}
		else if (func_615(iParam0, 554195525))
		{
		}
		else if (func_615(iParam0, 589988438))
		{
			if (func_634())
			{
				func_635(GET_HASH_KEY("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_615(iParam0, 787083290) && func_615(iParam0, 949916894))
		{
			func_636(iParam0);
		}
		else if (func_615(iParam0, -1718133314))
		{
			func_637(iParam0);
		}
		else if (func_615(iParam0, -1738650224))
		{
			func_638(iParam0);
		}
		else if (func_615(iParam0, -1112814642) && func_615(iParam0, 949916894))
		{
			func_639(iParam0);
		}
		else if (iParam0 == GET_HASH_KEY("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_615(iParam0, 1841149704))
		{
			func_640();
		}
		else if (func_615(iParam0, 606799272))
		{
			func_641(iParam0, iParam1);
			func_642(iParam0);
		}
		else if (func_615(iParam0, -1112814642) && func_615(iParam0, -1697809989))
		{
			func_643(iParam0, 0, 0, 0);
		}
		else if (func_615(iParam0, -2017733358) || func_615(iParam0, -1369131378))
		{
			func_633(iParam0);
		}
		else if (func_615(iParam0, -1921346699))
		{
			if (func_22() != -1)
			{
				return false;
			}
			func_644(iParam0, iParam5, iParam8);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_615(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_354(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_325(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_354(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_325(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_354(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_325(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_354(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_325(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_354(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_325(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_354(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_325(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_615(iParam0, -839724752) && func_616(iParam0, 4))
		{
			if (!func_605(42))
			{
				func_645(iParam0);
			}
		}
		else if (func_615(iParam0, 1399091007))
		{
			func_646(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_615(iParam0, 1248798204))
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
				func_325(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_618(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					func_647(PLAYER::PLAYER_PED_ID(), GET_HASH_KEY("UPGRADE_OFFHAND_HOLSTER"), 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_648(&iVar9, 0))
				{
					func_624(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case GET_HASH_KEY("UPGRADE_BANDOLIER"):
				if (func_22() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					func_647(PLAYER::PLAYER_PED_ID(), GET_HASH_KEY("UPGRADE_BANDOLIER"), 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case GET_HASH_KEY("WEAPON_KIT_BINOCULARS"):
				break;
			case GET_HASH_KEY("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_332(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_649();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_650();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_651();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_652();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_653();
				break;
			case GET_HASH_KEY("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_01"):
				func_654(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_01"), 0);
				func_655(499813453, 0);
				func_656(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_02"):
				func_654(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_02"), 0);
				func_655(499813453, 0);
				func_656(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_03"):
				func_654(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_03"), 0);
				func_655(499813453, 0);
				func_656(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_04"):
				func_654(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_05"), 0);
				func_655(666607663, 0);
				func_657(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_05"):
				func_654(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_06"), 0);
				func_655(666607663, 0);
				func_657(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_06"):
				func_654(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_07"), 0);
				func_655(666607663, 0);
				func_657(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_07"):
				func_654(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_09"), 0);
				func_655(-220219788, 0);
				func_658(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_08"):
				func_654(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_10"), 0);
				func_655(-220219788, 0);
				func_658(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_09"):
				func_654(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_11"), 0);
				func_655(-220219788, 0);
				func_658(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_10"):
				func_654(218622660, GET_HASH_KEY("TREASURE_HUNT_LOOT_13"), 0);
				func_655(218622660, 0);
				func_659(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_11"):
				func_654(218622660, GET_HASH_KEY("TREASURE_HUNT_LOOT_14"), 0);
				func_655(218622660, 0);
				func_659(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_13"):
				func_654(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_16"), 0);
				func_655(390004462, 0);
				func_660(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_14"):
				func_654(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_17"), 0);
				func_655(390004462, 0);
				func_660(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_15"):
				func_654(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_18"), 0);
				func_655(390004462, 0);
				func_660(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_16"):
				func_654(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_20"), 0);
				func_655(6410548, 0);
				func_661(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_17"):
				func_654(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_21"), 0);
				func_655(6410548, 0);
				func_661(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_18"):
				func_654(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_22"), 0);
				func_655(6410548, 0);
				func_661(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_19"):
				func_654(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_23"), 0);
				func_655(6410548, 0);
				func_661(8);
				break;
			case GET_HASH_KEY("CONSUMABLE_AGED_PIRATE_RUM"):
				func_663(242, func_662(GET_HASH_KEY("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_GINSENG_ELIXIER"):
				func_663(240, func_662(GET_HASH_KEY("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_VALERIAN_ROOT"):
				func_663(241, func_662(GET_HASH_KEY("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case GET_HASH_KEY("CONSUMABLE_POTENT_MEDICINE"):
			case GET_HASH_KEY("CONSUMABLE_MEDICINE"):
			case GET_HASH_KEY("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_664(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_664(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_664(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case GET_HASH_KEY("CONSUMABLE_TONIC"):
			case GET_HASH_KEY("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_664(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_664(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case GET_HASH_KEY("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_664(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_HAIR_TONIC"):
				func_332(488, 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_HAIR_GREASE"):
				func_332(491, 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX"):
				func_332(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_325(func_665(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_325(func_666(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_617(1))
				{
					func_332(487, 0);
				}
				break;
			case GET_HASH_KEY("KIT_GUN_OIL"):
				func_332(486, 0);
				break;
			case GET_HASH_KEY("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_22() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case GET_HASH_KEY("UPGRADE_UPG_COFFEE_KIT"):
				func_332(496, 0);
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
		func_667(&iVar10);
		if (!func_668(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_623(0))
		{
			return true;
		}
		if (func_614(iParam0) == GET_HASH_KEY("CLOTHING"))
		{
			func_669(iParam0);
		}
		if (func_615(iParam0, -1979000645))
		{
			func_670(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_623(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_325(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_671(iVar2, 0);
		}
	}
	Var35 = { func_672(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	func_673(iParam0);
	if (fParam6 > 0f)
	{
		if (func_615(iParam0, -839724752))
		{
			func_674(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_675(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_326(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar13;
	int iVar14;
	int iVar15;

	if (func_615(iParam0, 1989861793))
	{
		iVar0 = func_676(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_677(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_678(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_679(iVar14, iVar1);
					if (iVar15 != iParam0 && func_595(iVar15, 0))
					{
						if (func_680(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_681(iVar1);
				if (bVar13)
				{
					func_682(iParam0);
				}
				else
				{
					func_332(306, 0);
				}
			}
		}
	}
}

void func_327()
{
	if (func_22() != -1)
	{
		return;
	}
	func_683();
	func_684();
	func_685();
	func_686();
	func_687();
	func_688();
	func_689();
}

void func_328(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;

	func_690(iParam0, 1, 1, -142743235, 1);
	if (func_691(iParam0))
	{
		func_692(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_694(func_693(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_695(GET_HASH_KEY("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = Global_1946804.f_57[iVar1 /*11*/];
		Global_1946804.f_1616.f_1[iVar1 /*3*/] = { vVar4 };
		Global_1946804.f_1616.f_1[iVar1 /*3*/].f_2 = (Global_1946804.f_1497.f_1[iVar1 /*3*/].f_2 || Global_1946804.f_1378.f_1[iVar1 /*3*/].f_2);
		iVar1++;
	}
	if (func_696() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_697(&(Global_1946804.f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_697(&(Global_1946804.f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	Global_1946804.f_1616.f_1[8 /*3*/] = { func_698(8, 0) };
	Global_1946804.f_1616.f_1[9 /*3*/] = { func_698(9, 0) };
	Global_1946804.f_1616.f_1[0 /*3*/] = { func_698(0, 0) };
	Global_1946804.f_1616.f_1[2 /*3*/] = { func_698(2, 0) };
	Global_1946804.f_1616.f_1[3 /*3*/] = { func_698(3, 0) };
	Global_1946804.f_1616.f_1[1 /*3*/] = { func_698(1, 0) };
	Global_1946804.f_1616.f_1[5 /*3*/] = { func_698(5, 0) };
	Global_1946804.f_1616.f_1[6 /*3*/] = { func_698(6, 0) };
	Global_1946804.f_1616.f_1[7 /*3*/] = { func_698(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_699(iVar8, iVar0))
				{
					func_700(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_699(iVar8, iVar0))
		{
			func_700(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
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

void func_329()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;

	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_699(iVar5, iVar0);
		if (iVar1 == Global_1946804.f_57[iVar5 /*11*/] || iVar1 == 0)
		{
			if (func_696() == -2125499975 || func_696() == -449205311)
			{
				vVar2.x = GET_HASH_KEY("CLOTHING_SP_SHIRT_BOUNTY01_VARIATION_01");
				vVar2.f_1 = 1530758430;
				func_700(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = GET_HASH_KEY("BASE");
				func_700(&vVar2, iVar5, iVar0);
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

void func_330()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 2);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_594(14);
		Global_1898441[iVar0 /*38*/] = 14;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_MUD1_COM", 24);
	}
}

char* func_331(int iParam0, bool bParam1)
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
			if ((func_334(Global_1835011[59 /*74*/].f_1, 1) || func_334(Global_1347702[1 /*49*/].f_15, 1)) || func_198(Global_1347702[1 /*49*/].f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_571(GET_HASH_KEY("CSTAG_FLOW_DOG_IN_CAMP_POST"), 1))
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

void func_332(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_701(iParam0, &iVar0, &iVar1);
	if (!func_702(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_703(iVar0, iVar1);
}

void func_333(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_694(iParam0, 1);
	func_704(&(Global_1946804.f_1497.f_1[iVar0 /*3*/]), 2, 6);
	func_704(&(Global_1946804.f_1378.f_1[iVar0 /*3*/]), 2, 6);
	if (bParam1)
	{
		Global_1946804.f_1497.f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
		Global_1946804.f_1497.f_1[iVar0 /*3*/].f_1 = 0;
		Global_1946804.f_1378.f_1[iVar0 /*3*/] = { Global_1946804.f_1497.f_1[iVar0 /*3*/] };
		if (bParam2)
		{
			func_705(17, iParam0, 0, 0, 0);
		}
	}
	if (func_22() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_704(&(Global_26796.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/]), 2, 6);
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
			func_704(&(Global_36638.f_45.f_350.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/]), 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
				Global_36638.f_45.f_350.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/].f_1 = 0;
			}
			iVar1++;
		}
	}
}

bool func_334(int iParam0, bool bParam1)
{
	switch (func_303(iParam0))
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

void func_335()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 5);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_594(17);
		Global_1898441[iVar0 /*38*/] = 17;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_BRA2_COM", 24);
	}
}

void func_336()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 6);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_594(18);
		Global_1898441[iVar0 /*38*/] = 18;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_BRA3_COM", 24);
	}
}

int func_337(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<5> Var0;

	if (iParam3 == -358215195)
	{
		Var0 = { func_706(iParam1, 1, 0) };
		iParam3 = func_707(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_708(iParam3);
	return func_647(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_338()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

void func_339(int iParam0)
{
	int iVar0;

	if (!func_709(iParam0))
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

bool func_340(int iParam0, int iParam1)
{
	if (!func_710(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_711(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_712(&(Global_40.f_9910[iParam1 /*6*/]), 4);
}

void func_341(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_713(*iParam0);
	iVar1 = func_714(*iParam0);
	iVar2 = func_715(*iParam0);
	iVar3 = func_716(*iParam0);
	iVar4 = func_717(*iParam0);
	iVar5 = func_718(*iParam0);
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
	iVar6 = func_719(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_719(iVar1, iVar0);
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
	func_720(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_342(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_710(iParam0))
	{
		return;
	}
	if (!func_721(iParam1))
	{
		return;
	}
	if (func_722(iParam1, 1))
	{
		return;
	}
	iVar0 = func_711(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_340(iParam0, -1))
	{
		return;
	}
	else
	{
		func_723(&(Global_40.f_9910[iVar0 /*6*/]), 2);
	}
	Global_40.f_9910[iVar0 /*6*/].f_4 = iParam1;
	if (bParam2)
	{
		if (!func_204(0, 0, 1))
		{
			func_374(0, 17);
		}
	}
}

void func_343()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 7);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_594(19);
		Global_1898441[iVar0 /*38*/] = 19;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_MOB5_COM", 24);
	}
}

void func_344()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 8);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_594(20);
		Global_1898441[iVar0 /*38*/] = 20;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_SAI1_COM", 24);
	}
}

bool func_345()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

void func_346()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 9);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_594(21);
		Global_1898441[iVar0 /*38*/] = 21;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_GUA1_COM", 24);
	}
}

void func_347()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 10);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_594(22);
		Global_1898441[iVar0 /*38*/] = 22;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_GUA3_COM", 24);
	}
}

void func_348()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 12);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_594(24);
		Global_1898441[iVar0 /*38*/] = 24;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_ODR5_COM", 24);
	}
}

void func_349()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 13);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_594(25);
		Global_1898441[iVar0 /*38*/] = 25;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_FIN1_COM", 24);
	}
}

void func_350()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 14);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_594(27);
		Global_1898441[iVar0 /*38*/] = 27;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_MAR51_COM", 24);
	}
}

void func_351()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 15);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_594(28);
		Global_1898441[iVar0 /*38*/] = 28;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_352(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_353(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_354(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_595(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_614(iParam0);
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
		if (!func_724(iParam0, 1))
		{
			return false;
		}
	}
	return func_599(iParam0, 0, bParam2) >= iParam1;
}

void func_355(int iParam0)
{
	if (func_84(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_725(MISC::VAR_STRING(2, "MISSION_COMPLETE_BANK_FEED", MISC::ABSI(iParam0)), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514.f_14 = 1;
		Global_1879514.f_15 = 0;
	}
	else
	{
		func_725(MISC::VAR_STRING(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514.f_14 = 0;
		Global_1879514.f_15 = 1;
	}
}

void func_356()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 16);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_594(29);
		Global_1898441[iVar0 /*38*/] = 29;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_BEE22_COM", 24);
	}
}

void func_357()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 17);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_594(26);
		Global_1898441[iVar0 /*38*/] = 26;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_FIN2_COM", 24);
	}
}

void func_358()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 11);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_594(23);
		Global_1898441[iVar0 /*38*/] = 23;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_DOC_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_DOC_COM", 24);
	}
}

void func_359()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 3);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_594(15);
		Global_1898441[iVar0 /*38*/] = 15;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_DOW3_COM", 24);
	}
}

void func_360()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 4);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_594(16);
		Global_1898441[iVar0 /*38*/] = 16;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_DUT1_COM", 24);
	}
}

void func_361()
{
	if (func_726() > 1)
	{
		func_727();
	}
	else
	{
		if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_BAND_ROOT")))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_BAND_ROOT"), true);
			func_332(444, 1);
		}
		if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_HERB_ROOT")))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_HERB_ROOT"), true);
			func_332(447, 1);
		}
		if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_HORSE_ROOT")))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_HORSE_ROOT"), true);
			func_332(448, 1);
		}
		if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_SHOT_ROOT")))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_SHOT_ROOT"), true);
			func_332(450, 1);
		}
		if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_WEAP_ROOT")))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_WEAP_ROOT"), true);
			func_332(452, 1);
		}
	}
}

bool func_362(int iParam0)
{
	return func_728(iParam0, 4, 1);
}

void func_363(int iParam0)
{
	func_729(iParam0, 4, 1);
}

void func_364(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_96(GET_HASH_KEY("BANK_DEBT_CASH")) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

void func_365(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_84(32768))
	{
		return;
	}
	if (!func_197(iParam0))
	{
		return;
	}
	func_236(&Global_1935630, 8192);
	iVar2 = 1;
	switch (func_202(iParam0))
	{
		case 1:
			func_97(func_632(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS")), 1);
			iVar0 = func_279(iParam0);
			func_97(func_96(GET_HASH_KEY("MISSIONS_PROGRESSED")), 1);
			switch (func_498(iVar0))
			{
				case 0:
					func_97(func_632(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP1")), 1);
					break;
				case 1:
					func_97(func_632(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP2")), 1);
					break;
				case 2:
					func_97(func_632(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP3")), 1);
					break;
				case 3:
					func_97(func_632(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP4")), 1);
					break;
				case 4:
					func_97(func_632(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP5")), 1);
					break;
				case 5:
					func_97(func_632(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP6")), 1);
					break;
				case 6:
					func_97(func_632(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP7")), 1);
					break;
				case 7:
					func_97(func_632(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP8")), 1);
					break;
				case 8:
					func_97(func_632(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP9")), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_97(func_632(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("RC_STRANDS_BOUNTY")), 1);
			}
			if (iVar2 && MISSIONDATA::MISSIONDATA_IS_REQUIRED_STORY_MISSION(MISC::GET_HASH_KEY(&(Global_1835011[iVar0 /*74*/].f_8))))
			{
				func_97(func_632(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("REQUIRED_MISSIONS")), 1);
			}
			break;
		case 8:
			iVar1 = func_279(iParam0);
			if (func_308(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				func_97(func_96(GET_HASH_KEY("MISSIONS_PROGRESSED")), 1);
			}
			if (func_308(Global_1347702[iVar1 /*49*/].f_12, 4) || iVar1 == 59)
			{
				if (func_308(Global_1347702[iVar1 /*49*/].f_12, 1))
				{
					func_97(func_632(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS")), 1);
				}
				else
				{
					func_97(func_632(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("RC")), 1);
				}
			}
			if (func_308(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				switch (func_499(iVar1))
				{
					case 0:
						func_97(func_632(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP1")), 1);
						break;
					case 1:
						func_97(func_632(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP2")), 1);
						break;
					case 2:
						func_97(func_632(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP3")), 1);
						break;
					case 3:
						func_97(func_632(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP4")), 1);
						break;
					case 4:
						func_97(func_632(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP5")), 1);
						break;
					case 5:
						func_97(func_632(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP6")), 1);
						break;
					case 6:
						func_97(func_632(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP7")), 1);
						break;
					case 7:
						func_97(func_632(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP8")), 1);
						break;
					case 8:
						func_97(func_632(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP9")), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && MISSIONDATA::MISSIONDATA_IS_REQUIRED_STORY_MISSION(MISC::GET_HASH_KEY(&(Global_1347702[iVar1 /*49*/].f_3))))
				{
					func_97(func_632(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("REQUIRED_MISSIONS")), 1);
				}
			}
			else if (func_308(Global_1347702[iVar1 /*49*/].f_12, 4))
			{
				if (func_308(Global_1347702[iVar1 /*49*/].f_12, 4194304))
				{
				}
				else if (!func_308(Global_1347702[iVar1 /*49*/].f_12, 512))
				{
					func_97(func_632(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("RC_STRANDS")), 1);
				}
				else
				{
					func_97(func_632(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("RC_STRANDS_BOUNTY")), 1);
				}
			}
			break;
	}
}

void func_366()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	if (func_22() != -1)
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
	if (!func_4(64))
	{
		return;
	}
	else if (func_205(Global_1935630, 131072))
	{
		return;
	}
	else if ((func_204(0, 0, 1) || func_730()) || func_131())
	{
		return;
	}
	iVar0 = func_208();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_731(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_732(MISC::VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), GET_HASH_KEY("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_732(MISC::VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), GET_HASH_KEY("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_733(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_374(0, -1);
	}
	if (iVar2 > 0)
	{
		func_734("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_735(1, 0);
	Global_1956575.f_4 = 1;
}

void func_367(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_84(32768))
	{
		return;
	}
	func_290(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_736(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_368(int iParam0)
{
	if (!func_197(iParam0))
	{
		return -1;
	}
	return func_737(iParam0);
}

int func_369(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_738(iParam0))
	{
		return 0;
	}
	if (!func_406())
	{
		return 0;
	}
	if (!func_739(iParam0, &iVar0, &iVar1))
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

int func_370(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_740())
	{
		iVar2 = func_740();
	}
	iVar5 = func_741(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_495(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_495(iVar6) == 0)
			{
				return func_742(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_495(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_495(iVar6) == 0)
			{
				return func_742(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_742(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_371(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_743(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 1:
			return func_743(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 2:
			return func_743(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, -1) * 2;
		case 4:
			return func_743(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 5:
			return func_743(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 6:
			return func_743(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_743(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, -1) * 3;
		case 9:
			return func_743(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, -1) * 3;
		case 10:
			return func_743(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, -1) * 3;
		case 11:
			return func_743(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_372(int iParam0)
{
	char[] cVar0[8];

	if (!func_197(iParam0))
	{
		return cVar0;
	}
	switch (func_202(iParam0))
	{
		case 1:
			cVar0 = Global_1835011[func_520(iParam0) /*74*/].f_8;
			break;
		case 8:
			cVar0 = Global_1347702[func_279(iParam0) /*49*/].f_3;
			break;
		case 11:
			if (iParam0 == func_370(0, 10, 11, GET_HASH_KEY("CABR01")))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_373(char[4] cParam0)
{
	int iVar0;
	int iVar1;

	if (!Global_1879514.f_11)
	{
		iVar0 = func_375();
		iVar1 = MISC::GET_HASH_KEY(&cParam0);
		if (MISSIONDATA::MISSIONDATA_GET_RATING(iVar1) != 5 && iVar0 == 5)
		{
			if (func_202(Global_1879514.f_1) == 1)
			{
				func_369(5, 1);
			}
			else if (func_202(Global_1879514.f_1) == 8 && (func_308(Global_1347702[func_279(Global_1879514.f_1) /*49*/].f_12, 1) || func_308(Global_1347702[func_279(Global_1879514.f_1) /*49*/].f_12, 33554432)))
			{
				func_369(5, 1);
			}
		}
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&cParam0), iVar0);
	}
	else
	{
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&cParam0), 3);
	}
}

void func_374(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_744(&Global_0, 8);
	}
	if (!func_406() || func_22() != -1)
	{
		return;
	}
	func_744(&Global_0, 1);
}

int func_375()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_745(Global_1879514.f_1);
	if (Global_1425247.f_53)
	{
		return 0;
	}
	if (func_746(iVar0))
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

Vector3 func_376(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;

	vVar0 = { func_747(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (func_396(vVar0))
	{
		vVar0 = { func_747(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

void func_377(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	Global_1310720.f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = iParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_378(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_379(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_79();
	if (func_254(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iVar0 /*35*/].f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_748(vParam0, iParam3);
}

void func_380()
{
	func_749();
	func_750();
	func_751();
	SCRIPTS::_0x11B0A0B282FA9B10(0);
}

void func_381(struct<16> Param0, int iParam16)
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
	if (!func_752(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_753(&(Param0.f_10)))
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
			func_754(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_382(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_383(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_384()
{
	return Global_1572864.f_12;
}

void func_385(bool bParam0)
{
	int iVar0;
	struct<16> Var1;

	if (func_511(Global_1935630.f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_755();
	Var1.f_3.f_3 = iVar0;
	if ((!func_756(Global_1347343.f_2) && !func_382(Global_1347343.f_11, 64)) || func_84(32768))
	{
		Var1.f_7 = func_757();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_382(Global_1347343.f_11, 1024) && !func_84(32768))
	{
		Var1.f_11 = func_758();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_382(Global_1347343.f_11, 8))
	{
		Var1.f_15 = func_759();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343.f_1 != 2)
	{
		Global_1935630.f_3 = func_760(&Var1, "REPLAY_T", &(Global_1347343.f_3), 0, 1);
	}
	else
	{
		Global_1935630.f_3 = func_761(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !ENTITY::IS_ENTITY_ATTACHED(Global_35))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
	}
	func_383(&(Global_1347343.f_11), 1073741824 /* Float: 2f */);
	if (bParam0)
	{
		func_383(&(Global_1347343.f_11), 1048576);
	}
	CAM::_0x16E9ABDD34DDD931();
}

void func_386(var uParam0, bool bParam1, char* sParam2, bool bParam3)
{
	int iVar0;
	struct<11> Var1;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return;
	}
	func_762(uParam0);
	iVar0 = func_763(uParam0, bParam1);
	if (bParam3)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			sParam2 = func_764(bParam1);
		}
		iVar0 = func_765(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_766(uParam0);
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
		iVar0 = func_766(uParam0);
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_3[iVar0 /*13*/].f_2 = bParam1;
	uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(bParam1);
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
	func_767(uParam0, 2);
}

void func_387(char[4] cParam0, int iParam1)
{
	func_768(&(cParam0->f_7375), iParam1);
}

int func_388(var uParam0)
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

int func_389()
{
	return func_520(func_769());
}

void func_390(char[4] cParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_407())
	{
		func_770(cParam0, iVar0);
		iVar0++;
	}
}

int func_391(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
	return 1;
}

void func_392(char[4] cParam0, var uParam1)
{
	cParam0->f_607 = uParam1;
}

void func_393(char[4] cParam0)
{
	func_776(cParam0, iLocal_240, iLocal_241, 125226, 125253, 125697, 125747, 125824, "", 66112, -1);
	func_776(cParam0, iLocal_241, iLocal_242, 125983, 125992, 126045, 126161, 126536, "MOB2_INT", 66050, -1);
	func_776(cParam0, iLocal_242, iLocal_243, 126583, 126592, 126652, 126858, 127707, "", 576, -1);
	func_776(cParam0, iLocal_243, iLocal_244, 127868, 127877, 128232, 128351, 128691, "MOB2_MCS_1", 579, -1);
	func_776(cParam0, iLocal_244, iLocal_245, 128775, 128784, 128803, 129034, 129497, "", 576, -1);
	func_776(cParam0, iLocal_245, iLocal_246, 129549, 129558, 129612, 129718, 130533, "", 4672, -1);
	func_776(cParam0, iLocal_246, iLocal_247, 130590, 130599, 130740, 130901, 131181, "", 512, -1);
	func_776(cParam0, iLocal_247, iLocal_248, 131207, 131216, 131404, 131512, 132094, "MOB2_EXT", 578, -1);
	func_776(cParam0, iLocal_248, 26, 132131, 132140, 132242, 132416, 132425, "MOB2_EXT2", 578, -1);
}

void func_394(char[4] cParam0, int iParam1)
{
	cParam0->f_13105 = iParam1;
}

void func_395(bool bParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_817(bParam0, Param1, Param1.f_3, iParam5, fParam6);
}

bool func_396(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_397(char[4] cParam0, vector3 vParam1)
{
	cParam0->f_5413 = { vParam1 };
}

int func_398(char[4] cParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = func_818(cParam0, iParam1, bParam2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	}
	return 0;
}

void func_399(char[4] cParam0, int iParam1, char[16] cParam2)
{
	cParam0->f_1[func_134(iParam1) /*22*/].f_13 = { cParam2 };
}

void func_400(char[4] cParam0, int iParam1)
{
	struct<8> Var0;

	Var0 = { func_819(&(cParam0->f_7375)) };
	if ((((func_820(&(cParam0->f_10792), 32768) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(cParam0->f_7375.f_804)) && ANIMSCENE::IS_ANIM_SCENE_LOADED(cParam0->f_7375.f_804, true, false)) && ANIMSCENE::_0xA9016536015DE29D(cParam0->f_7375.f_804, &Var0)) && ANIMSCENE::_0x23E33CB9F4A3F547(cParam0->f_7375.f_804, &Var0))
	{
		func_821(cParam0, &Var0);
		func_822(cParam0);
	}
	else
	{
		if (iParam1 == 1 && func_122(cParam0, 16384))
		{
			func_823(&(cParam0->f_10792), Global_43805);
			func_767(&(cParam0->f_10792), 8);
		}
		func_247(&(cParam0->f_10792), iParam1);
		func_824(cParam0);
		func_101(cParam0, 2097152);
	}
}

void func_401(char[4] cParam0, int iParam1)
{
	func_767(&(cParam0->f_10792), iParam1);
}

void func_402(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

void func_403(var uParam0)
{
	vector3 vVar0;

	if (!func_825(uParam0, 4))
	{
		if (func_826(uParam0->f_860, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { func_827(uParam0) };
		if (!func_826(uParam0->f_860, 524288))
		{
			func_828(&(uParam0->f_872));
		}
		func_829(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_830(uParam0, 0f, 0f, 0f);
		func_831(uParam0);
		func_832(uParam0);
		func_833(uParam0, 0f, 0f, 0f, 0, 0);
		func_834(uParam0);
		func_768(uParam0, 4);
		func_835(uParam0, 0);
		func_836(&(Global_1946804.f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_873)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_873));
		}
	}
}

Vector3 func_404(int iParam0)
{
	if (func_837(iParam0))
	{
		return func_838(iParam0);
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

int func_405(vector3 vParam0, var uParam3)
{
	int iVar0;

	if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) != 1)
	{
		func_523(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_839(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_840(0, 0);
		if (func_709(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			func_841(1, 0);
		}
	}
	else
	{
		func_841(1, 0);
	}
	func_216(0);
	func_524(0, vParam0, uParam3);
	return 1;
}

bool func_406()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_407()
{
	return 26;
}

void func_408(int iParam0)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;
	struct<8> Var5;
	struct<8> Var13;
	int iVar21;

	if (!func_196(iParam0))
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

void func_409(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_842(uParam0[iVar0 /*3*/]);
		iVar0++;
	}
}

void func_410(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_843(uParam0[iVar0 /*5*/]);
		iVar0++;
	}
}

void func_411(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_844(uParam0[iVar0 /*3*/]);
		iVar0++;
	}
}

void func_412(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_845(uParam0[iVar0 /*3*/]);
		iVar0++;
	}
}

void func_413(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_846(uParam0[iVar0 /*67*/]);
		iVar0++;
	}
}

void func_414(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_847(uParam0[iVar0 /*4*/]);
		iVar0++;
	}
}

void func_415(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_416(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_848(uParam0[iVar0 /*5*/]);
		iVar0++;
	}
}

void func_417(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_849(uParam0[iVar0 /*3*/]);
		iVar0++;
	}
}

void func_418(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_850(uParam0[iVar0 /*3*/]);
		iVar0++;
	}
}

void func_419(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_851(uParam0[iVar0 /*4*/]);
		iVar0++;
	}
}

void func_420(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_852(uParam0[iVar0 /*3*/]);
		iVar0++;
	}
}

void func_421(char[4] cParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_122(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_853(&(cParam0->f_638), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_854(&(cParam0->f_638));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_638[iVar0 /*3*/] = iParam1;
	cParam0->f_638[iVar0 /*3*/].f_2 = (cParam0->f_638[iVar0 /*3*/].f_2 || iParam2);
}

void func_422(char[4] cParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (func_122(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_855(&(cParam0->f_819), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_856(&(cParam0->f_819));
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

void func_423(char[4] cParam0, char[4] cParam1, int iParam2)
{
	int iVar0;

	if (func_122(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_857(&(cParam0->f_1020), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_858(&(cParam0->f_1020));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_1020[iVar0 /*3*/] = cParam1;
	cParam0->f_1020[iVar0 /*3*/].f_2 = (cParam0->f_1020[iVar0 /*3*/].f_2 || iParam2);
}

void func_424(char[4] cParam0, char[4] cParam1, var uParam2, int iParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (!func_859(iParam3, func_35(cParam0)) && !func_859(iParam3, func_37(cParam0)))
	{
		return;
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam2))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(cParam1))
	{
		return;
	}
	iVar0 = func_860(&(cParam0->f_1126), cParam1, *uParam2);
	if (iVar0 == -1)
	{
		iVar0 = func_861(&(cParam0->f_1126));
	}
	if (iVar0 == -1)
	{
		return;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam2))
	{
		*uParam2 = ANIMSCENE::_CREATE_ANIM_SCENE(cParam1, iParam4, sParam5, false, true);
	}
	cParam0->f_1126[iVar0 /*67*/].f_1 = *uParam2;
	cParam0->f_1126[iVar0 /*67*/] = cParam1;
	cParam0->f_1126[iVar0 /*67*/].f_3 = (cParam0->f_1126[iVar0 /*67*/].f_3 || iParam3);
	cParam0->f_1126[iVar0 /*67*/].f_65 = iParam6;
	cParam0->f_1126[iVar0 /*67*/].f_66 = bParam7;
	if (!bParam7)
	{
		func_862(&(cParam0->f_1126[iVar0 /*67*/].f_2), 4);
	}
}

void func_425(char[4] cParam0, int iParam1, char* sParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (!func_859(iParam3, func_35(cParam0)) && !func_859(iParam3, func_37(cParam0)))
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
	iVar0 = func_863(&(cParam0->f_1126), iParam1);
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

void func_426(char[4] cParam0, int iParam1)
{
	if (func_122(cParam0, 2097152))
	{
		return;
	}
	cParam0->f_1124.f_1 = (cParam0->f_1124.f_1 || iParam1);
}

void func_427(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (func_122(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_864(&(cParam0->f_5188), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_865(&(cParam0->f_5188));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_5188[iVar0 /*5*/] = iParam1;
	cParam0->f_5188[iVar0 /*5*/].f_1 = iParam3;
	cParam0->f_5188[iVar0 /*5*/].f_2 = iParam4;
	cParam0->f_5188[iVar0 /*5*/].f_4 = (cParam0->f_5188[iVar0 /*5*/].f_4 || iParam2);
}

void func_428(char[4] cParam0, char[4] cParam1, int iParam2)
{
	int iVar0;

	if (func_122(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_866(&(cParam0->f_5239), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_867(&(cParam0->f_5239));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_5239[iVar0 /*3*/] = cParam1;
	cParam0->f_5239[iVar0 /*3*/].f_2 = (cParam0->f_5239[iVar0 /*3*/].f_2 || iParam2);
}

void func_429(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_868(uParam0[iVar0 /*3*/]))
		{
			if (func_859((uParam0[iVar0 /*3*/])->f_2, iParam12))
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
			if (func_859((uParam1[iVar0 /*5*/])->f_4, iParam12))
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
			if (func_859((uParam2[iVar0 /*3*/])->f_2, iParam12))
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
			if (func_859((uParam3[iVar0 /*3*/])->f_2, iParam12))
			{
				func_875(uParam3[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	if (func_859(uParam4->f_1, iParam12))
	{
		func_876(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_877(uParam5[iVar0 /*67*/]))
		{
			if (func_859((uParam5[iVar0 /*67*/])->f_3, iParam12))
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
					if (func_859((uParam5[iVar0 /*67*/])->f_4[iVar1 /*3*/].f_2, iParam12))
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
			if (func_859((uParam6[iVar0 /*4*/])->f_3, iParam12))
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
			if (func_859((uParam7[iVar0 /*5*/])->f_4, iParam12))
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
			if (func_859((uParam8[iVar0 /*3*/])->f_2, iParam12))
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
			if (func_859((uParam9[iVar0 /*3*/])->f_2, iParam12))
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
			if (func_859((uParam10[iVar0 /*4*/])->f_3, iParam12))
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
			if (func_859((uParam11[iVar0 /*3*/])->f_2, iParam12))
			{
				func_892(uParam11[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
}

void func_430(var uParam0, bool bParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		return;
	}
	if (func_893(uParam0, bParam1, sParam2))
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

struct<2> func_431()
{
	struct<2> Var0;

	Var0 = ITEMSET::CREATE_ITEMSET(true);
	return Var0;
}

void func_432(var uParam0, float fParam1)
{
	uParam0->f_794 = fParam1;
}

void func_433(var uParam0, float fParam1)
{
	uParam0->f_795 = fParam1;
}

void func_434(char[4] cParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_894(&(cParam0->f_7375), bParam1, sParam2, iParam3, iParam4, bParam5);
	func_386(&(cParam0->f_10792), bParam1, sParam2, bParam6);
}

bool func_435(char[4] cParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char[] cVar1[8];

	iVar0 = 1;
	if (bParam2 && func_25(&(cParam0->f_8269)))
	{
		if (!func_123(cParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {func_895(cParam0->f_607)}, 3);
			if (func_896(&(cParam0->f_8269), &cVar1, 0, func_134(iParam1), 1, 0))
			{
				if (func_26(&(cParam0->f_8269)))
				{
					func_897(&(cParam0->f_8269));
				}
				func_142(cParam0, iParam1, 268435456);
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

bool func_436(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_877(uParam0[iVar0 /*67*/]))
		{
			if (func_859((uParam0[iVar0 /*67*/])->f_3, iParam1))
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

void func_437(int iParam0, float fParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), fParam1);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID())))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), fParam1);
		}
	}
	if (!func_901(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_JUMP"), false);
	}
	if (!func_901(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_RELOAD"), false);
	}
	if (!func_901(iParam0, 16))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_ATTACK2"), false);
	}
	if (!func_901(iParam0, 128))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_COVER"), false);
	}
	if (!func_901(iParam0, 512))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_GRAPPLE"), false);
	}
	if (!func_901(iParam0, 64))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_DUCK"), false);
	}
	if (!(func_902(17) && func_903(Global_35, Global_1835011[17 /*74*/].f_18, 0) < 10f))
	{
		if (!func_901(iParam0, 2048))
		{
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_ENTER"), false);
		}
	}
	if (!func_901(iParam0, 4096))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_QUICK_SHORTCUT_ABILITIES_MENU"), false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!func_901(iParam0, 1024))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 2, true);
			PED::SET_PED_RESET_FLAG(Global_35, 21, true);
		}
		if (!func_901(iParam0, 8))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 168, true);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 33, true);
		if (!func_901(iParam0, 32))
		{
			if (PED::GET_PED_CROUCH_MOVEMENT(Global_35))
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
			}
		}
	}
}

int func_438(char[4] cParam0)
{
	return cParam0->f_596;
}

bool func_439(char[4] cParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;

	if (func_122(cParam0, 2))
	{
		return true;
	}
	if (func_22() == 0)
	{
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(cParam0->f_5408))
	{
		return true;
	}
	iVar0 = func_904(func_63(cParam0));
	if (!func_31())
	{
		vVar2 = { func_128(cParam0->f_607) };
	}
	if (func_905(cParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		cParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_440(char[4] cParam0, bool bParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	struct<11> Var0;
	int iVar11;
	bool bVar12;
	bool bVar13;
	vector3 vVar14;
	int iVar17;
	struct<11> Var18;
	int iVar29;

	if (ENTITY::DOES_ENTITY_EXIST(cParam0->f_5411))
	{
		if (!func_122(cParam0, 16777216))
		{
			if (!func_906(cParam0))
			{
				func_105(cParam0, 16777216);
			}
			else
			{
				Var0.f_10 = 7;
				Var0 = 0;
				Var0.f_1 = 0;
				Var0.f_6 = iParam2;
				Var0.f_6.f_1 = iParam3;
				Var0.f_6.f_2 = iParam4;
				Var0.f_9 = fParam5;
				Var0.f_10 = 1;
				iVar11 = 0;
				bVar12 = func_907(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					func_105(cParam0, 16777216);
					if (iVar11 == 2 && !ENTITY::IS_ENTITY_DEAD(bVar12))
					{
						if (bVar12 == cParam0->f_5411)
						{
							func_105(cParam0, 16777216);
						}
						else if (func_908(bVar12, cParam0->f_5411, 5f, 1))
						{
							if (func_909(bVar12))
							{
								PHYSICS::_0x0348469DAA17576C(bVar12);
							}
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(bVar12, false, true);
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bVar12, cParam0->f_5417, cParam0->f_5420, true, false, true);
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
	if (func_122(cParam0, 1))
	{
		return true;
	}
	vVar14 = { func_128(cParam0->f_607) };
	if (func_22() == 0)
	{
		STREAMING::REQUEST_MODEL(func_127(cParam0), false);
		if (!STREAMING::HAS_MODEL_LOADED(func_127(cParam0)))
		{
			return false;
		}
		if (func_910(&iVar17, func_127(cParam0), vVar14, 0f, 0, 0, 1, 1, 1))
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(iVar17, true);
			bVar13 = NETWORK::NET_TO_PED(iVar17);
		}
	}
	else
	{
		if (((((cParam0->f_607 == 38 || cParam0->f_607 == 39) || cParam0->f_607 == 43) || cParam0->f_607 == 40) || cParam0->f_607 == 41) || cParam0->f_607 == 42)
		{
			func_105(cParam0, 1);
			return false;
		}
		Var18.f_10 = 7;
		Var18 = bParam1;
		Var18.f_1 = iParam6;
		Var18.f_4 = iParam7;
		Var18.f_3 = iParam8;
		Var18.f_6 = iParam2;
		Var18.f_6.f_1 = iParam3;
		Var18.f_6.f_2 = iParam4;
		Var18.f_9 = fParam5;
		if (func_122(cParam0, 262144))
		{
			Var18.f_2 = 1;
		}
		else if (func_122(cParam0, 32768))
		{
			Var18.f_2 = 0;
		}
		iVar29 = 0;
		bVar13 = func_907(&iVar29, &Var18);
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
			if (!func_122(cParam0, 16))
			{
				func_105(cParam0, 16);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(bVar13))
	{
		cParam0->f_5411 = bVar13;
		cParam0->f_5412 = bVar13;
		func_911(cParam0, bParam1);
		if (!func_122(cParam0, 256))
		{
			if (!func_122(cParam0, 32768))
			{
				vVar14.x = iParam2;
				vVar14.f_1 = iParam3;
				vVar14.f_2 = iParam4;
				if ((!func_909(bVar13) || func_912(Global_35, bVar13, 1, 1) > 200f) && !func_396(vVar14))
				{
					if (!func_31())
					{
						ENTITY::FREEZE_ENTITY_POSITION(bVar13, false);
						func_817(bVar13, vVar14, fParam5, 2, 1073741824 /* Float: 2f */);
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

void func_441(char[4] cParam0)
{
	int iVar0;
	var uVar1;

	if (!func_122(cParam0, 32) && func_130(cParam0, 3))
	{
		if (func_913(cParam0->f_607, &iVar0, &uVar1))
		{
			CLOCK::SET_CLOCK_TIME(iVar0, 0, 0);
			func_105(cParam0, 32);
		}
	}
	if (!func_122(cParam0, 32))
	{
		if (func_914(&(cParam0->f_609), cParam0->f_607))
		{
			func_105(cParam0, 32);
		}
	}
}

void func_442(char[4] cParam0)
{
	struct<4> Var0;

	if (!func_122(cParam0, 128))
	{
		if (func_122(cParam0, 16384))
		{
			func_915(cParam0);
			if (func_824(cParam0))
			{
				func_53(&(cParam0->f_10792));
				func_916(cParam0, 2097152);
				func_272(cParam0, 16384);
				func_105(cParam0, 128);
			}
			return;
		}
		if (func_130(cParam0, 1))
		{
			return;
		}
		if (func_122(cParam0, 64))
		{
			func_915(cParam0);
			MemCopy(&Var0, {func_157(func_63(cParam0))}, 4);
			if (func_917(cParam0, Var0))
			{
				if (func_438(cParam0) != 4)
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_105(cParam0, 128);
			}
		}
		else
		{
			if (func_438(cParam0) != 4)
			{
				CAM::DO_SCREEN_FADE_OUT(1);
			}
			func_105(cParam0, 128);
		}
	}
}

void func_443(char[4] cParam0, int iParam1)
{
	cParam0->f_596 = iParam1;
}

bool func_444(char[4] cParam0)
{
	int iVar0;
	char[] cVar1[8];

	iVar0 = 1;
	if (!func_918(cParam0))
	{
		iVar0 = 0;
	}
	if (!func_439(cParam0, func_130(cParam0, 3), !func_10(cParam0, 2097152), cParam0->f_5410, !func_10(cParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_440(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
	{
		iVar0 = 0;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		iVar0 = 0;
	}
	if (func_122(cParam0, 4) && !PED::_0x0EE3F0D7FECCC54F())
	{
		iVar0 = 0;
	}
	if (!func_25(&(cParam0->f_8269)))
	{
		MemCopy(&cVar1, {func_895(cParam0->f_607)}, 3);
		if (func_919(&(cParam0->f_8269), &cVar1, 0, 1, 1))
		{
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (func_130(cParam0, 1))
	{
		if (!func_28(&(cParam0->f_13115)))
		{
			func_29(&(cParam0->f_13115), 0);
		}
		if (func_920(&(cParam0->f_13115)) < 30f)
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

bool func_445(char[4] cParam0)
{
	bool bVar0;

	bVar0 = (PLAYER::UPDATE_PLAYER_TELEPORT(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_TELEPORT_ACTIVE());
	if (func_920(&(cParam0->f_603)) >= cParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			PLAYER::STOP_PLAYER_TELEPORT();
		}
		if ((func_84(32768) && func_921()) && func_920(&(cParam0->f_603)) < (cParam0->f_13144 + 10f))
		{
			return false;
		}
		if (func_122(cParam0, 8) && INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(func_128(cParam0->f_607))))
		{
			INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(func_128(cParam0->f_607)));
			func_272(cParam0, 8);
		}
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
		func_922(0, 0);
		func_272(cParam0, 4096);
		return true;
	}
	return false;
}

bool func_446(char[4] cParam0)
{
	func_923();
	Global_1934765.f_271 = 1;
	if (func_505(945612176))
	{
		func_473(945612176, 0, 0);
	}
	func_189(1);
	if (!func_168(iLocal_1518, 1024))
	{
		if (func_924(cParam0))
		{
			func_170(&iLocal_1518, 1024);
		}
		else
		{
			return false;
		}
	}
	if (!func_168(iLocal_1518, 512))
	{
		if (func_925(cParam0))
		{
			func_170(&iLocal_1518, 512);
		}
		else
		{
			return false;
		}
	}
	if (!func_168(iLocal_1518, 256))
	{
		if (func_926())
		{
			func_170(&iLocal_1518, 256);
		}
		else
		{
			return false;
		}
	}
	if (func_35(cParam0) > iLocal_241)
	{
		func_927(-1, 1);
	}
	if (func_35(cParam0) < iLocal_245)
	{
		func_928();
	}
	if (!func_929(cParam0))
	{
		return false;
	}
	func_175(0);
	func_930();
	func_171(1);
	func_931();
	func_932();
	func_172(1);
	func_174(0);
	func_933(cParam0);
	func_934(cParam0);
	func_935(cParam0);
	if (func_35(cParam0) > iLocal_241)
	{
		func_936(1);
	}
	func_937();
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_939(cParam0, 156181);
	func_941(cParam0, 156679);
	func_943(cParam0, 159184);
	return true;
}

void func_447(char[4] cParam0, int iParam1)
{
	func_68(iParam1);
	cParam0->f_10783 = iParam1;
}

bool func_448(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_944(cParam0);
	func_945(cParam0);
	iVar0 = func_35(cParam0);
	iVar1 = func_37(cParam0);
	iVar2 = func_164(cParam0, iVar0);
	if (func_10(cParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_824(cParam0);
		}
	}
	func_946(cParam0);
	func_947(cParam0);
	func_948(cParam0);
	func_949(cParam0);
	func_950(cParam0);
	func_951(cParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		func_952(cParam0);
	}
	if ((func_35(cParam0) == 0 && iVar2 < 3) && func_286(cParam0) == 0)
	{
		func_442(cParam0);
	}
	if (func_123(cParam0, iVar0, 512))
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	func_76(cParam0);
	switch (iVar2)
	{
		case 0:
			if (func_953(cParam0, iVar0, 0))
			{
				if (func_954(cParam0, func_35(cParam0)) != -1 && PED::_0x62DE46F061CAA468() < func_954(cParam0, func_35(cParam0)))
				{
					PED::_0xF008E0BA1FE1D644((func_954(cParam0, func_35(cParam0)) - PED::_0x62DE46F061CAA468()));
				}
				if ((func_35(cParam0) == 25 || func_35(cParam0) == 26) && func_84(32768))
				{
					func_387(cParam0, 524288);
				}
				if (func_122(cParam0, 4))
				{
					if (!func_10(cParam0, 4))
					{
						func_955(cParam0, iVar0);
						func_101(cParam0, 4);
					}
					func_956(cParam0);
					func_957(cParam0, iVar0, 1);
				}
				else
				{
					func_957(cParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (func_918(cParam0))
			{
				if (func_958(cParam0))
				{
					if (func_10(cParam0, 4))
					{
						func_916(cParam0, 4);
					}
					func_957(cParam0, iVar0, 2);
				}
			}
			else if (func_959(cParam0) >= cParam0->f_13144)
			{
				if (func_10(cParam0, 4))
				{
					func_916(cParam0, 4);
				}
				func_957(cParam0, iVar0, 2);
			}
			break;
		case 2:
			if (func_953(cParam0, iVar0, 2))
			{
				if (!func_960(cParam0))
				{
					func_957(cParam0, iVar0, 4);
					if (func_961(cParam0, iVar0, iVar1))
					{
						func_957(cParam0, iVar0, 5);
					}
				}
				else
				{
					func_962(cParam0);
					func_957(cParam0, iVar0, 3);
					if (func_963(cParam0, iVar0))
					{
						func_957(cParam0, iVar0, 4);
						if (func_961(cParam0, iVar0, iVar1))
						{
							func_957(cParam0, iVar0, 5);
						}
					}
				}
			}
			else if (func_964(cParam0))
			{
				func_963(cParam0, iVar0);
			}
			break;
		case 3:
			if (func_963(cParam0, iVar0))
			{
				func_957(cParam0, iVar0, 4);
				if (func_961(cParam0, iVar0, iVar1))
				{
					func_957(cParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_961(cParam0, iVar0, iVar1))
			{
				func_957(cParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!func_22() == 0)
			{
				func_965(cParam0);
				func_966(cParam0, iVar0);
				func_967(cParam0);
				func_968(cParam0);
				if (func_123(cParam0, iVar1, 2))
				{
					if (func_969(cParam0, iVar1))
					{
						func_970(cParam0, iVar1);
					}
				}
			}
			if (func_953(cParam0, iVar0, 5))
			{
				if (func_953(cParam0, iVar0, 7))
				{
					if (!func_123(cParam0, func_35(cParam0), 67108864))
					{
						func_971(cParam0, func_35(cParam0));
					}
					func_972(cParam0, iVar1);
					func_945(cParam0);
					return true;
				}
				else
				{
					func_957(cParam0, iVar0, 7);
				}
			}
			else
			{
				if (!func_123(cParam0, func_35(cParam0), 4194304))
				{
					if ((!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !func_123(cParam0, func_35(cParam0), 16))
					{
						CAM::DO_SCREEN_FADE_IN(0);
						func_973(0);
					}
					func_142(cParam0, func_35(cParam0), 4194304);
				}
				if ((func_974(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) && !func_122(cParam0, 8192)) && !func_123(cParam0, func_35(cParam0), 8))
				{
					func_49(1, 0);
					func_975("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (func_976(cParam0))
					{
						func_957(cParam0, iVar0, 6);
					}
				}
				if (func_10(cParam0, 268435456))
				{
					if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(1) != 1)
					{
						func_38(cParam0, func_36(iVar0), func_36(iVar1), iVar0, iVar1);
						func_916(cParam0, 268435456);
					}
				}
				if (func_122(cParam0, 1048576))
				{
					if (func_129(func_36(0)))
					{
						func_272(cParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!func_22() == 0)
			{
				func_965(cParam0);
				func_966(cParam0, iVar0);
				func_967(cParam0);
				func_968(cParam0);
				if (func_123(cParam0, func_37(cParam0), 2))
				{
					if (func_969(cParam0, func_37(cParam0)))
					{
						func_970(cParam0, func_37(cParam0));
					}
				}
			}
			if ((!func_974(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) || func_122(cParam0, 8192)) || func_123(cParam0, func_35(cParam0), 8))
			{
				if (func_953(cParam0, iVar0, 5))
				{
					if (func_977(cParam0))
					{
						func_957(cParam0, iVar0, 7);
					}
				}
				else
				{
					func_977(cParam0);
					func_957(cParam0, iVar0, 5);
				}
			}
			else
			{
				func_953(cParam0, iVar0, 5);
				func_978(cParam0);
			}
			break;
		case 7:
			if (func_953(cParam0, iVar0, 7))
			{
				if (!func_123(cParam0, func_35(cParam0), 67108864))
				{
					func_971(cParam0, func_35(cParam0));
				}
				func_972(cParam0, iVar1);
				func_945(cParam0);
				return true;
			}
			break;
		default:
			func_957(cParam0, iVar0, 7);
			break;
	}
	return false;
}

void func_449()
{
	func_61(7);
}

void func_450()
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		func_183();
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_35, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(bLocal_1641))
	{
		func_184();
	}
}

void func_451()
{
	func_979(bLocal_1641, GET_HASH_KEY("MOB2_RIDE1"), 0);
	func_979(bLocal_1641, GET_HASH_KEY("MOB2_RIDE2"), 0);
	func_979(bLocal_1642, GET_HASH_KEY("MOB2_RIDE3"), 0);
	func_979(bLocal_1641, GET_HASH_KEY("MOB2_FIGHT_THIEVES_JOHN"), 0);
}

void func_452(bool bParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		PED::_0x411189E51B8020BA(bParam0, "Stealth");
	}
}

void func_453(bool bParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		PED::_0xA6F67BEC53379A32(bParam0, "Handsup");
	}
}

void func_454(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_980(iParam1))
	{
		return;
	}
	iVar0 = func_981(iParam1);
	if (func_982(iParam1))
	{
		if (!func_983(iParam1))
		{
			return;
		}
	}
	func_984(iParam1, 39, 1);
	func_985(iParam1, 64, 0);
	Global_1360165[iParam1 /*1157*/].f_70.f_11 = 0;
	func_985(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_985(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_986(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_987(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_455()
{
	func_460(&(Local_14.f_52), 0);
	func_460(&(Local_14.f_62), 0);
}

void func_456()
{
	func_988(&bLocal_1652, 0);
}

void func_457()
{
	func_460(&(Local_14.f_7), 0);
}

void func_458()
{
	func_460(&(Local_14.f_20), 0);
}

void func_459()
{
	func_460(&(Local_14.f_68), 0);
}

void func_460(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_988(uParam0[iVar0], bParam1);
		iVar0++;
	}
}

void func_461()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_74[0]))
	{
		PED::DELETE_PED(&(Local_14.f_74[0]));
		iLocal_282 = 0;
	}
}

void func_462(char[4] cParam0)
{
	func_989(cParam0, Local_14.f_15[0]);
	func_989(cParam0, Local_14.f_15[1]);
	func_460(&(Local_14.f_15), 0);
}

void func_463(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_464(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9, int iParam10, int iParam11)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	vVar1 = { func_990(vParam0, vParam3, iParam10) };
	vVar4 = { func_991(vParam0, vParam3, iParam10) };
	func_992(vParam6, fParam9, iParam11);
	PED::SET_PED_NON_CREATION_AREA(vVar1, vVar4);
	PATHFIND::SET_PED_PATHS_IN_AREA(vVar1, vVar4, false, 0);
	iVar0 = PED::ADD_SCENARIO_BLOCKING_AREA(vVar1, vVar4, iParam11, 15);
	return iVar0;
}

int func_465(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return uVar0;
	}
	func_468(iParam0, bParam2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam3, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = PED::_0x4C39C95AE5DB1329(iParam0, bParam2, 15);
	return uVar0;
}

float func_466(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 463.6737f;
				case 1:
					return 463.6737f;
				case 2:
					return 306.925f;
				case 3:
					return 319.7512f;
				case 4:
					return 281.6737f;
				case 5:
					return 308.6969f;
				case 6:
					return 181.6777f;
				case 7:
					return 357.674f;
				case 8:
					return 357.674f;
				case 9:
					return 281.6895f;
				case 10:
					return 319.3949f;
				case 11:
					return 181.3949f;
				case 12:
					return 9.394f;
				case 13:
					return 131.7373f;
				case 14:
					return 281.6709f;
				case 15:
					return 357.5857f;
				case 16:
					return 314.1625f;
				case 17:
					return 36.1625f;
				case 18:
					return 308.6436f;
				case 19:
					return 282.2121f;
				case 20:
					return 66.2835f;
				case 21:
					return 55.2644f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0f;
				case 1:
					return 0f;
				case 2:
					return -179.8157f;
				case 3:
					return -179.8157f;
				case 4:
					return 363.6603f;
				case 5:
					return 0.6603f;
				case 6:
					return 360.6603f;
				case 7:
					return 308.5848f;
				case 8:
					return -50.7219f;
				case 9:
					return 271.674f;
				case 10:
					return 401.2313f;
				case 11:
					return 93.6913f;
				case 12:
					return 89.6913f;
				case 13:
					return -60.5778f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 613.6737f;
				case 1:
					return 441.6737f;
				case 2:
					return 272.4512f;
				case 3:
					return 268.4512f;
				case 4:
					return -3.0088f;
				case 5:
					return -3.0088f;
				case 6:
					return 0.9912f;
				case 7:
					return 268.9911f;
				case 8:
					return 2.9912f;
				case 9:
					return -91.0088f;
				case 10:
					return 88.9912f;
				case 11:
					return -139.1856f;
				case 12:
					return 188.6185f;
				case 13:
					return 292.6321f;
				case 14:
					return 80.6321f;
				case 15:
					return 219.6112f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 539.6737f;
				case 1:
					return 507.6737f;
				case 2:
					return -92.326f;
				case 3:
					return 269.8965f;
				case 4:
					return 265.8965f;
				case 5:
					return 269.8965f;
				case 6:
					return 267.8965f;
				case 7:
					return 37.8965f;
				case 8:
					return 153.8961f;
				case 9:
					return 267.4524f;
				case 10:
					return 272.0215f;
				case 11:
					return 90.4587f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0f;
				case 1:
					return 0f;
				case 2:
					return -45.8913f;
				case 3:
					return 102.5816f;
				case 4:
					return 318.0707f;
				case 5:
					return 324.0707f;
				case 6:
					return 272.0707f;
				case 7:
					return 268.0707f;
				case 8:
					return 369.9954f;
				case 9:
					return -179.9556f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -34.326f;
				case 1:
					return 269.662f;
				case 2:
					return 270.9208f;
				case 3:
					return 270.9208f;
				case 4:
					return 234.9208f;
				case 5:
					return -90.326f;
				case 6:
					return 267.318f;
				case 7:
					return 271.318f;
				case 8:
					return 293.0165f;
				case 9:
					return 289.0165f;
				case 10:
					return 319.0165f;
				case 11:
					return 348.588f;
				case 12:
					return -33.6858f;
				case 13:
					return -33.6858f;
				case 14:
					return 324.4709f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 432.0707f;
				case 1:
					return 90.78f;
				case 2:
					return 95.98f;
				case 3:
					return 449.8871f;
				case 4:
					return 422.071f;
				case 5:
					return -90.0155f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 311.0828f;
				case 1:
					return 370.4965f;
				case 2:
					return 338.5735f;
				case 3:
					return 447.6609f;
				case 4:
					return 539.6609f;
				case 5:
					return -268.1506f;
				case 6:
					return 460.6656f;
				case 7:
					return 244.8f;
				case 8:
					return 317.52f;
				case 9:
					return 3.1256f;
				case 10:
					return 12.8111f;
				case 11:
					return -73.1889f;
				case 12:
					return 128.869f;
				case 13:
					return 2.7011f;
				case 14:
					return 0.7011f;
				case 15:
					return 4.7011f;
				case 16:
					return 18.7011f;
				case 17:
					return -41.8102f;
				case 18:
					return -91.8102f;
				case 19:
					return 221.0828f;
				case 20:
					return 401.0706f;
				case 21:
					return 267.0706f;
				case 22:
					return 539.0706f;
				case 23:
					return 219.0706f;
				case 24:
					return 273.2347f;
				case 25:
					return 298.5779f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 179.442f;
				case 1:
					return 325.3351f;
				case 2:
					return 204.7148f;
				case 3:
					return 269.0178f;
				case 4:
					return 217.1374f;
				case 5:
					return 357.674f;
				case 6:
					return 78.0707f;
				case 7:
					return 357.6737f;
				case 8:
					return 428.0967f;
				case 9:
					return 93.6376f;
				case 10:
					return 179.6376f;
				case 11:
					return -6.3624f;
				case 12:
					return 182.7806f;
				case 13:
					return 96.2177f;
				case 14:
					return 90.2177f;
				case 15:
					return 90.2177f;
				case 16:
					return 136.8442f;
				case 17:
					return 180.5672f;
				case 18:
					return 154.5672f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 269.9554f;
				case 1:
					return 271.6167f;
				case 2:
					return 266.8688f;
				case 3:
					return -10.5445f;
				case 4:
					return 178.2467f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0f;
				case 1:
					return 90f;
				case 2:
					return 90.4f;
				case 3:
					return 32.64f;
				case 4:
					return 55.76f;
				case 5:
					return 69.84f;
				case 6:
					return 49.68f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 268.9026f;
				case 1:
					return 269.44f;
				case 2:
					return 268.3899f;
				case 3:
					return 268.3899f;
				case 4:
					return 268.3899f;
				case 5:
					return 268.3899f;
				case 6:
					return 268.3899f;
				case 7:
					return 268.3899f;
				case 8:
					return 270.9404f;
				case 9:
					return 270.4614f;
				case 10:
					return 270.4614f;
				case 11:
					return 270.4614f;
				case 12:
					return 270.4614f;
				case 13:
					return 268.4614f;
				case 14:
					return 268.4614f;
				case 15:
					return 269.8529f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 102.6591f;
				case 1:
					return 90.2545f;
				case 2:
					return 84.3923f;
				case 3:
					return 89.0352f;
				case 4:
					return 95.3873f;
				case 5:
					return 92.6186f;
				case 6:
					return 123.9634f;
				case 7:
					return 88.9354f;
				case 8:
					return 87.8529f;
				case 9:
					return 89.8529f;
				case 10:
					return 89.8529f;
				case 11:
					return 180.0424f;
				case 12:
					return 92.0424f;
				case 13:
					return 86.0424f;
				case 14:
					return 88.0424f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 456.9599f;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return -91.076f;
				case 1:
					return -91.076f;
				case 2:
					return -87.076f;
				case 3:
					return -91.076f;
				case 4:
					return -89.076f;
				case 5:
					return -91.076f;
				case 6:
					return -91.076f;
				case 7:
					return -89.7425f;
				case 8:
					return -89.7425f;
				case 9:
					return -89.7425f;
				case 10:
					return -89.7425f;
				case 11:
					return 270.2574f;
				case 12:
					return 0.2575f;
				case 13:
					return -1.7425f;
				case 14:
					return 0.2575f;
				case 15:
					return 0.2575f;
				case 16:
					return 268.2574f;
				case 17:
					return 270.2574f;
				case 18:
					return 270.2574f;
				case 19:
					return 270.2574f;
				case 20:
					return 360.2574f;
				case 21:
					return -87.7425f;
				case 22:
					return 270.2574f;
				case 23:
					return 270.2574f;
				case 24:
					return -89.4326f;
				case 25:
					return -91.4326f;
				case 26:
					return -91.4326f;
				case 27:
					return -77.4326f;
				case 28:
					return -75.4326f;
				case 29:
					return 0.5674f;
				case 30:
					return 8.5674f;
				case 31:
					return 178.5674f;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 85.6335f;
				case 1:
					return 87.6335f;
				case 2:
					return 88.3696f;
				case 3:
					return 92.3696f;
				case 4:
					return 92.3696f;
				case 5:
					return 92.3696f;
				case 6:
					return 92.3696f;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 265.8907f;
				case 1:
					return 107.8907f;
				case 2:
					return 231.8907f;
				case 3:
					return 229.8907f;
				case 4:
					return 231.8907f;
				case 5:
					return 63.8907f;
				case 6:
					return 181.8907f;
				case 7:
					return 247.538f;
				case 8:
					return 235.843f;
				case 9:
					return 235.843f;
				case 10:
					return 231.843f;
				case 11:
					return 235.843f;
				case 12:
					return 145.843f;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return 279.6962f;
				case 1:
					return 277.6962f;
				case 2:
					return 271.6962f;
				case 3:
					return 277.6962f;
				case 4:
					return 269.6962f;
				case 5:
					return 361.6962f;
				case 6:
					return 184.9863f;
				case 7:
					return 179.1348f;
				case 8:
					return 1.0603f;
				case 9:
					return 3.0603f;
				case 10:
					return -90.9397f;
				case 11:
					return 1.0603f;
				case 12:
					return 232.3636f;
				case 13:
					return 304.3636f;
				case 14:
					return 40.3636f;
				case 15:
					return 314.3636f;
			}
			break;
	}
	return 0f;
}

void func_467(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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

void func_468(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_469(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!func_254(iParam0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 35)
	{
		iVar0 = func_993(iParam0, iVar1);
		if (func_994(iVar0))
		{
			func_995(iVar0, bParam1);
		}
		iVar1++;
	}
}

void func_470(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_996(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (bParam2)
		{
			func_997(iParam0, 4);
		}
		else
		{
			func_998(iParam0, 33554432);
		}
	}
	else if (bParam2)
	{
		func_999(iParam0, 4);
	}
	else
	{
		func_1000(iParam0, 33554432);
	}
	INVENTORY::_0x9B4E793B1CB6550A();
	func_1001(iParam0);
}

void func_471(bool bParam0)
{
	if (bParam0)
	{
		iLocal_1717 = func_1002("MOB2_UC_PICKUP", GET_HASH_KEY("INPUT_CONTEXT_X"), Local_150.f_5, 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0);
		func_1003(&iLocal_1717, Local_14.f_99[0]);
	}
	else
	{
		func_13(&iLocal_1717, 1, 1);
		func_475(&iLocal_1620);
		func_170(&iLocal_1518, 128);
	}
}

void func_472(bool bParam0)
{
	if (bParam0)
	{
		func_1004(iLocal_1987, 1, 0f, 0, 0, 0, 0, 0);
		func_1004(iLocal_1988, 1, 0f, 0, 0, 0, 0, 0);
	}
	else
	{
		func_1004(iLocal_1987, 0, 0f, 0, 1, 0, 0, 0);
		func_1004(iLocal_1988, 0, 0f, 0, 1, 0, 0, 0);
	}
}

void func_473(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_481(1497516462);
			func_482(2016141805);
			func_482(1010885152);
			func_482(-502324015);
			break;
		case 2016141805:
			func_482(1497516462);
			func_481(2016141805);
			func_482(1010885152);
			func_482(-502324015);
			break;
		case 1010885152:
			func_482(1497516462);
			func_482(2016141805);
			func_481(1010885152);
			func_482(-502324015);
			break;
		case -502324015:
			func_482(1497516462);
			func_482(2016141805);
			func_482(1010885152);
			func_481(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_482(-538889627);
			func_482(-538880323);
			func_482(-1056767524);
			func_481(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1005();
			func_481(iParam0);
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
			func_1006();
			func_481(iParam0);
			break;
		case 2019386373:
			func_482(-664252410);
			func_482(2109952320);
			func_481(2019386373);
			break;
		case -664252410:
			func_482(2019386373);
			func_482(2109952320);
			func_481(-664252410);
			break;
		case 2109952320:
			func_482(2019386373);
			func_482(-664252410);
			func_481(2109952320);
			break;
		case -1674179981:
			func_482(-1835851517);
			func_482(-1838352012);
			func_481(-1674179981);
			break;
		case -1835851517:
			func_482(-1674179981);
			func_482(-1838352012);
			func_481(-1835851517);
			break;
		case -1838352012:
			func_482(-1674179981);
			func_482(-1835851517);
			func_481(-1838352012);
			break;
		case -1717960576:
			func_482(210001842);
			func_481(-1717960576);
			break;
		case 210001842:
			func_482(-1717960576);
			func_481(210001842);
			break;
		case -150493654:
			func_482(-1271608261);
			func_482(1846061697);
			func_482(-1145519186);
			func_481(-150493654);
			break;
		case -1271608261:
			func_482(-150493654);
			func_482(1846061697);
			func_482(-1145519186);
			func_481(-1271608261);
			break;
		case 1846061697:
			func_482(-150493654);
			func_482(-1271608261);
			func_482(-1145519186);
			func_481(1846061697);
			break;
		case -1145519186:
			func_482(-150493654);
			func_482(-1271608261);
			func_482(1846061697);
			func_481(-1145519186);
			break;
		case 1766284049:
			func_482(280705402);
			func_482(1926308480);
			func_481(1766284049);
			break;
		case 280705402:
			func_482(1766284049);
			func_482(1926308480);
			func_481(280705402);
			break;
		case 1926308480:
			func_482(1766284049);
			func_482(280705402);
			func_481(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_482(439465264);
				func_481(1609506757);
			}
			else
			{
				func_482(1609506757);
				func_482(439465264);
			}
			break;
		case 439465264:
			if (func_505(1609506757))
			{
				if (bParam1)
				{
					func_481(439465264);
				}
				else
				{
					func_482(439465264);
				}
			}
			break;
		case 1822001510:
			func_482(-1612662716);
			func_481(1822001510);
			break;
		case -1612662716:
			func_482(1822001510);
			func_481(-1612662716);
			break;
		case 1306158345:
			func_482(1952610440);
			func_482(-223469678);
			func_482(-404698347);
			func_482(1517904467);
			func_481(1306158345);
			break;
		case 1952610440:
			func_482(1306158345);
			func_482(-223469678);
			func_482(-404698347);
			func_482(1517904467);
			func_481(1952610440);
			break;
		case -223469678:
			func_482(1306158345);
			func_482(1952610440);
			func_482(-404698347);
			func_482(1517904467);
			func_481(-223469678);
			break;
		case -404698347:
			func_482(1306158345);
			func_482(1952610440);
			func_482(-223469678);
			func_482(1517904467);
			func_481(-404698347);
			break;
		case 1517904467:
			func_482(1306158345);
			func_482(1952610440);
			func_482(-223469678);
			func_482(-404698347);
			func_481(1517904467);
			break;
		case 1376646519:
			func_482(931649776);
			func_482(-434590080);
			func_482(1743048395);
			func_482(449774763);
			func_481(1376646519);
			break;
		case 931649776:
			func_482(1376646519);
			func_482(-434590080);
			func_482(1743048395);
			func_482(449774763);
			func_481(931649776);
			break;
		case -434590080:
			func_482(1376646519);
			func_482(931649776);
			func_482(1743048395);
			func_482(449774763);
			func_481(-434590080);
			break;
		case 1743048395:
			func_482(1376646519);
			func_482(931649776);
			func_482(-434590080);
			func_482(449774763);
			func_481(1743048395);
			break;
		case 449774763:
			func_482(1376646519);
			func_482(931649776);
			func_482(-434590080);
			func_482(1743048395);
			func_481(449774763);
			break;
		case -1414537028:
			func_482(38162571);
			func_482(1350391819);
			func_482(54073871);
			func_481(-1414537028);
			break;
		case 38162571:
			func_482(-1414537028);
			func_482(1350391819);
			func_482(54073871);
			func_481(38162571);
			break;
		case 1350391819:
			func_482(-1414537028);
			func_482(38162571);
			func_482(54073871);
			func_481(1350391819);
			break;
		case 54073871:
			func_482(-1414537028);
			func_482(38162571);
			func_482(1350391819);
			func_481(54073871);
			break;
		case 198200492:
			func_481(198200492);
			func_482(-1124061431);
			func_482(52706132);
			func_482(-259123672);
			break;
		case -1124061431:
			func_482(198200492);
			func_481(-1124061431);
			func_482(52706132);
			func_482(-259123672);
			break;
		case 52706132:
			func_482(198200492);
			func_482(-1124061431);
			func_481(52706132);
			func_482(-259123672);
			break;
		case -259123672:
			func_482(198200492);
			func_482(-1124061431);
			func_482(52706132);
			func_481(-259123672);
			break;
		case -919512195:
			func_481(-919512195);
			func_482(-1925798111);
			func_482(420709909);
			func_482(1703426636);
			break;
		case -1925798111:
			func_481(-1925798111);
			func_482(-919512195);
			func_482(420709909);
			func_482(1703426636);
			break;
		case 420709909:
			func_481(420709909);
			func_482(-919512195);
			func_482(-1925798111);
			func_482(1703426636);
			break;
		case 1703426636:
			func_481(1703426636);
			func_482(-919512195);
			func_482(-1925798111);
			func_482(420709909);
			break;
		case -1223121209:
			func_481(-1223121209);
			func_482(630808005);
			break;
		case 630808005:
			func_481(630808005);
			func_482(-1223121209);
			break;
		case 1453909576:
			func_481(1453909576);
			func_482(1643531967);
			break;
		case 1643531967:
			func_481(1643531967);
			func_482(1453909576);
			break;
		case 0:
			func_481(0);
			func_482(473295046);
			func_482(-1738165526);
			break;
		case 473295046:
			func_481(473295046);
			func_482(0);
			func_482(-1738165526);
			break;
		case -1738165526:
			func_481(-1738165526);
			func_482(0);
			func_482(473295046);
			break;
		case 932909855:
			func_481(932909855);
			func_482(2051822093);
			break;
		case 2051822093:
			func_481(2051822093);
			func_482(932909855);
			break;
		case 405586984:
			func_481(405586984);
			func_482(1509509592);
			func_482(-959357075);
			func_482(-1311865656);
			break;
		case 1509509592:
			func_481(1509509592);
			func_482(405586984);
			func_482(-959357075);
			func_482(-1311865656);
			break;
		case -959357075:
			func_481(-959357075);
			func_482(1509509592);
			func_482(405586984);
			func_482(-1311865656);
			break;
		case -1311865656:
			func_481(-1311865656);
			func_482(1509509592);
			func_482(-959357075);
			func_482(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_481(-524145696);
			}
			else
			{
				func_482(-524145696);
			}
			func_482(1626481264);
			func_482(282809459);
			break;
		case 282809459:
			func_481(282809459);
			func_482(1626481264);
			func_482(-524145696);
			break;
		case 1626481264:
			func_481(1626481264);
			func_482(-524145696);
			func_482(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_481(885203519);
			}
			else
			{
				func_482(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_481(-1080627546);
			}
			else
			{
				func_482(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_505(iParam0))
				{
					func_481(iParam0);
				}
			}
			else if (func_505(iParam0))
			{
				func_482(iParam0);
			}
			break;
	}
}

void func_474(bool bParam0)
{
	if (bParam0)
	{
		iLocal_1575[0] = TASK::ADD_COVER_POINT(func_1(1, 0), func_1007(1, 0), 0, 2, 1, false);
		iLocal_1575[1] = TASK::ADD_COVER_POINT(func_1(1, 1), func_1007(1, 1), 1, 2, 1, false);
		iLocal_1575[2] = TASK::ADD_COVER_POINT(func_1(1, 2), func_1007(1, 2), 0, 0, 0, false);
		iLocal_1575[3] = TASK::ADD_COVER_POINT(func_1(1, 3), func_1007(1, 3), 2, 0, 0, false);
		iLocal_1580[0] = TASK::ADD_COVER_POINT(func_1(11, 0), func_1007(11, 0), 1, 2, 1, false);
		iLocal_1580[1] = TASK::ADD_COVER_POINT(func_1(11, 1), func_1007(11, 1), 1, 2, 1, false);
		iLocal_1580[3] = TASK::ADD_COVER_POINT(func_1(11, 3), func_1007(11, 3), 1, 2, 1, false);
		iLocal_1580[4] = TASK::ADD_COVER_POINT(func_1(11, 4), func_1007(11, 4), 1, 2, 1, false);
		iLocal_1580[5] = TASK::ADD_COVER_POINT(func_1(11, 5), func_1007(11, 5), 1, 2, 1, false);
		iLocal_1580[6] = TASK::ADD_COVER_POINT(func_1(11, 6), func_1007(11, 6), 2, 0, 1, false);
		iLocal_1580[7] = TASK::ADD_COVER_POINT(func_1(11, 7), func_1007(11, 7), 0, 2, 1, false);
		iLocal_1597[8] = TASK::ADD_COVER_POINT(func_1(12, 8), func_1007(12, 8), 0, 2, 1, false);
		iLocal_1597[9] = TASK::ADD_COVER_POINT(func_1(12, 9), func_1007(12, 9), 2, 0, 1, false);
		iLocal_1597[10] = TASK::ADD_COVER_POINT(func_1(12, 10), func_1007(12, 10), 2, 0, 1, false);
		iLocal_1597[11] = TASK::ADD_COVER_POINT(func_1(12, 11), func_1007(12, 11), 0, 2, 1, false);
		iLocal_1597[12] = TASK::ADD_COVER_POINT(func_1(12, 12), func_1007(12, 12), 1, 2, 1, false);
		iLocal_1597[13] = TASK::ADD_COVER_POINT(func_1(12, 13), func_1007(12, 13), 0, 2, 1, false);
		iLocal_1597[14] = TASK::ADD_COVER_POINT(func_1(12, 14), func_1007(12, 14), 0, 2, 1, false);
		iLocal_1597[0] = TASK::ADD_COVER_POINT(func_1(12, 0), func_1007(12, 0), 3, 2, 1, false);
		iLocal_1597[1] = TASK::ADD_COVER_POINT(func_1(12, 1), func_1007(12, 1), 3, 2, 1, false);
		iLocal_1597[2] = TASK::ADD_COVER_POINT(func_1(12, 2), func_1007(12, 2), 1, 2, 1, false);
		iLocal_1597[3] = TASK::ADD_COVER_POINT(func_1(12, 3), func_1007(12, 3), 3, 2, 1, false);
		iLocal_1597[4] = TASK::ADD_COVER_POINT(func_1(12, 4), func_1007(12, 4), 3, 2, 1, false);
		iLocal_1597[5] = TASK::ADD_COVER_POINT(func_1(12, 5), func_1007(12, 5), 3, 2, 1, false);
		iLocal_1597[6] = TASK::ADD_COVER_POINT(func_1(12, 6), func_1007(12, 6), 1, 2, 1, false);
		iLocal_1597[7] = TASK::ADD_COVER_POINT(func_1(12, 7), func_1007(12, 7), 3, 2, 1, false);
	}
	else
	{
		if (TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(func_1(1, 0), 0))
		{
			TASK::REMOVE_COVER_POINT(iLocal_1575[0]);
		}
		if (TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(func_1(1, 1), 0))
		{
			TASK::REMOVE_COVER_POINT(iLocal_1575[1]);
		}
		if (TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(func_1(1, 2), 0))
		{
			TASK::REMOVE_COVER_POINT(iLocal_1575[2]);
		}
		if (TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(func_1(1, 3), 0))
		{
			TASK::REMOVE_COVER_POINT(iLocal_1575[3]);
		}
		iLocal_1517 = 0;
		while (iLocal_1517 < 16)
		{
			if (TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(func_9(11, iLocal_1517), 0))
			{
				TASK::REMOVE_COVER_POINT(iLocal_1580[iLocal_1517]);
			}
			iLocal_1517++;
		}
		iLocal_1517 = 0;
		while (iLocal_1517 < 15)
		{
			if (TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(func_9(12, iLocal_1517), 0))
			{
				TASK::REMOVE_COVER_POINT(iLocal_1597[iLocal_1517]);
			}
			iLocal_1517++;
		}
	}
}

void func_475(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_476(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_475(iParam0[iVar0]);
		iVar0++;
	}
}

void func_477(bool bParam0, float fParam1)
{
	MISC::CLEAR_BIT(&(Global_1934765.f_301), 1);
	func_1008(bParam0, fParam1);
}

void func_478(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1009(uParam0[iVar0]);
		iVar0++;
	}
}

bool func_479(bool bParam0, int iParam1)
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
	if (func_168(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(bParam0))
		{
			return false;
		}
	}
	if (func_168(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(bParam0))
		{
			return false;
		}
	}
	if (func_168(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 11, false))
		{
			return false;
		}
	}
	if (func_168(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(bParam0) && !PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
		{
			return false;
		}
	}
	if (func_168(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(bParam0))
		{
			return false;
		}
	}
	if (func_168(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(bParam0))
		{
			return false;
		}
	}
	if (func_168(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(bParam0))
		{
			return false;
		}
	}
	if (func_168(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(bParam0))
		{
			return false;
		}
	}
	return true;
}

void func_480(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!PED::DOES_GROUP_EXIST(iParam0) || !PED::_0x0455546F23FF08E4(iParam0))
	{
		return;
	}
	PED::GET_GROUP_SIZE(iParam0, &uVar0, &iVar2);
	if (iVar2 > 0)
	{
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			iVar3 = PED::GET_PED_AS_GROUP_MEMBER(iParam0, iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					PED::REMOVE_PED_FROM_GROUP(iVar3);
				}
			}
			iVar1++;
		}
	}
	PED::REMOVE_GROUP(iParam0);
}

void func_481(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1010(iParam0, 1);
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

void func_482(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1010(iParam0, 1);
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

bool func_483(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_22() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_484(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	if (!func_483(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_485(int iParam0)
{
	func_1011(iParam0, 8, 0);
}

bool func_486(char[4] cParam0, bool bParam1)
{
	var uVar0;

	return func_490(cParam0, bParam1, &uVar0);
}

void func_487(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(bParam0);
	func_475(&iVar0);
}

void func_488(char[4] cParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return;
	}
	if (!func_490(cParam0, bParam1, &iVar0))
	{
		return;
	}
	func_1012(&(cParam0->f_5423[iVar0 /*65*/]), iParam2);
}

void func_489(char[4] cParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return;
	}
	if (!func_490(cParam0, bParam1, &iVar0))
	{
		return;
	}
	func_1013(&(cParam0->f_5423[iVar0 /*65*/]), iParam2);
}

bool func_490(char[4] cParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_261(&(cParam0->f_5423[iVar0 /*65*/])))
		{
			if (cParam0->f_5423[iVar0 /*65*/] == bParam1)
			{
				*iParam2 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_491(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (func_532(uParam0, 32768))
	{
		return;
	}
	bVar0 = func_532(uParam0, 1024);
	if (func_532(uParam0, 128) || bVar0)
	{
		if (func_532(uParam0, 4096))
		{
			if (!func_532(uParam0, 2048))
			{
				iVar1 = MAP::GET_BLIP_FROM_ENTITY(*uParam0);
				if (MAP::DOES_BLIP_EXIST(iVar1))
				{
					MAP::BLIP_ADD_MODIFIER(iVar1, -1186550032);
				}
				func_1013(uParam0, 2048);
				return;
			}
		}
		else if (func_532(uParam0, 2048))
		{
			iVar2 = MAP::GET_BLIP_FROM_ENTITY(*uParam0);
			if (MAP::DOES_BLIP_EXIST(iVar2))
			{
				MAP::BLIP_REMOVE_MODIFIER(iVar2, -1186550032);
			}
			func_1012(uParam0, 2048);
		}
		if (func_532(uParam0, 512))
		{
			if (func_533(uParam0->f_10))
			{
				if (func_908(Global_35, *uParam0, 150f, 1) || bVar0)
				{
					if (!func_1014(uParam0->f_10))
					{
						func_537(uParam0->f_10, 1);
						func_1015(uParam0->f_10, 0);
					}
				}
				else if ((func_1014(uParam0->f_10) && !bVar0) && !func_532(uParam0, 16384))
				{
					func_537(uParam0->f_10, 0);
					func_1015(uParam0->f_10, 1);
				}
			}
		}
		else if (!MAP::DOES_BLIP_EXIST(uParam0->f_8))
		{
			if (!MAP::DOES_BLIP_EXIST(MAP::GET_BLIP_FROM_ENTITY(*uParam0)))
			{
				if (func_908(Global_35, *uParam0, 150f, 1))
				{
					uParam0->f_8 = MAP::BLIP_ADD_FOR_ENTITY(GET_HASH_KEY("BLIP_STYLE_COMPANION"), *uParam0);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_4))
					{
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_8, uParam0->f_4);
					}
				}
			}
		}
		else if ((MAP::DOES_BLIP_EXIST(MAP::GET_BLIP_FROM_ENTITY(*uParam0)) && uParam0->f_8 != MAP::GET_BLIP_FROM_ENTITY(*uParam0)) || !func_908(Global_35, *uParam0, 150f, 1))
		{
			MAP::REMOVE_BLIP(&(uParam0->f_8));
		}
	}
	else if (func_532(uParam0, 512))
	{
		if (func_533(uParam0->f_10))
		{
			if (func_1014(uParam0->f_10))
			{
				func_537(uParam0->f_10, 0);
				func_1015(uParam0->f_10, 1);
			}
		}
	}
	else if (MAP::DOES_BLIP_EXIST(uParam0->f_8))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_8));
	}
}

void func_492(int iParam0)
{
	if (!func_980(iParam0))
	{
		return;
	}
	if (Global_1360165[iParam0 /*1157*/].f_12 != Global_1360165[iParam0 /*1157*/].f_13 || func_1016(iParam0, 36, 1))
	{
		func_984(iParam0, 36, 1);
		Global_1360165[iParam0 /*1157*/].f_12 = Global_1360165[iParam0 /*1157*/].f_13;
		func_1017(iParam0, &(Global_1360165[iParam0 /*1157*/].f_2));
	}
}

bool func_493(int iParam0)
{
	return func_1018(iParam0, 2);
}

int func_494(int iParam0)
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

int func_495(int iParam0)
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

int func_496(int iParam0)
{
	return iParam0 & 31;
}

bool func_497()
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

int func_498(int iParam0)
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

int func_499(int iParam0)
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

void func_500(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_501()
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

int func_502(int iParam0)
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

void func_503(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_504(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1019(iParam0);
	}
	else
	{
		func_1020(iParam0, iParam1);
	}
	func_1021();
}

bool func_505(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1010(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40567[iVar1], iVar2);
}

bool func_506(int iParam0)
{
	if (!func_197(iParam0))
	{
		return false;
	}
	switch (func_202(iParam0))
	{
		case 1:
			switch (func_279(iParam0))
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
			switch (func_279(iParam0))
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

void func_507(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_1022(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_619(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1024(func_1023(iParam0), 6);
}

void func_508(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_1022(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_619(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1025(func_1023(iParam0), 6);
}

int func_509(int iParam0)
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

int func_510(int iParam0)
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
	func_1026(iParam0, Global_1898164.f_162);
	return 1;
}

bool func_511(int iParam0)
{
	return iParam0 != 0;
}

bool func_512(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_513(int iParam0, var uParam1)
{
	if (!func_512(iParam0))
	{
		return;
	}
	if (*uParam1 == GET_HASH_KEY("TSTAG_NO_TAGS"))
	{
		return;
	}
	func_1027(iParam0, *uParam1, 0);
	func_1028(uParam1);
	Global_1935183.f_24 = 1;
}

void func_514(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_515(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_567() - fParam1);
	func_1029(uParam0, 1);
	func_1030(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_516(var uParam0)
{
	return func_226(*uParam0, 2);
}

int func_517()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_518(bool bParam0)
{
	if (func_1031())
	{
		Global_1357509 = 1;
	}
	if (func_1032(GET_HASH_KEY("CAMERA_ITEM")))
	{
	}
	if (bParam0 && Global_1935630.f_44 == GET_HASH_KEY("WEAPON_KIT_CAMERA"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_UNARMED"), true, 0, false, false);
		Global_1935630.f_44 = GET_HASH_KEY("WEAPON_UNARMED");
	}
}

struct<4> func_519(int iParam0, int iParam1)
{
	struct<4> Var0;

	Var0 = { func_9(iParam0, iParam1) };
	Var0.f_3 = func_466(iParam0, iParam1);
	return Var0;
}

int func_520(int iParam0)
{
	if (func_202(iParam0) == 1)
	{
		return func_279(iParam0);
	}
	return -1;
}

int func_521(int iParam0)
{
	if (func_202(iParam0) == 8)
	{
		return func_279(iParam0);
	}
	return -1;
}

char[] func_522(int iParam0)
{
	var uVar0;

	if (!func_280(iParam0))
	{
		return uVar0;
	}
	uVar0 = Global_1347702[iParam0 /*49*/].f_3;
	return uVar0;
}

void func_523(int iParam0, bool bParam1)
{
	if (func_22() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_84(32768))
	{
		return;
	}
	if (!func_84(32768))
	{
		func_1033(1, bParam1);
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
	if (func_84(32768))
	{
		Global_2621440[iParam0 /*12066*/].f_9.f_14 = func_292();
	}
}

void func_524(int iParam0, vector3 vParam1, var uParam4)
{
	Global_2621440[iParam0 /*12066*/].f_9.f_7 = { vParam1 };
	Global_2621440[iParam0 /*12066*/].f_9.f_13 = uParam4;
	Global_2621440[iParam0 /*12066*/].f_9 = 5;
	Global_2621440[iParam0 /*12066*/].f_9.f_15 = func_379(vParam1, 1);
}

bool func_525(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_526(int iParam0)
{
	return Global_43884 == iParam0;
}

void func_527(bool bParam0)
{
	Global_1935496.f_18 = !bParam0;
}

bool func_528(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_529(int iParam0)
{
	Global_1310750.f_16035 = (Global_1310750.f_16035 - (Global_1310750.f_16035 && iParam0));
}

bool func_530(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_531()
{
	return Global_1109400.f_245;
}

bool func_532(var uParam0, int iParam1)
{
	return func_168(uParam0->f_64, iParam1);
}

bool func_533(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_534(int iParam0)
{
	return func_728(iParam0, 16, 1);
}

void func_535(char[4] cParam0, bool bParam1)
{
	int iVar0;
	struct<24> Var1;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return;
	}
	if (!func_490(cParam0, bParam1, &iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_AN_OBJECT(bParam1) && func_1034(cParam0, ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(bParam1)))
	{
		EVENT::_0x4465C3D1475BD3FD(ENTITY::GET_ENTITY_MODEL(bParam1));
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

void func_536(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (PED::IS_PED_IN_GROUP(bParam0))
		{
			PED::REMOVE_PED_FROM_GROUP(bParam0);
		}
		PED::SET_PED_CAN_RAGDOLL(bParam0, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(bParam0, true);
	}
}

void func_537(int iParam0, bool bParam1)
{
	if (!func_980(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1035(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
		{
			func_1011(iParam0, 1, 0);
		}
	}
	func_1011(iParam0, 16, bParam1);
}

void func_538(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_533(iParam0))
	{
		return;
	}
	if (func_534(iParam0))
	{
		if (Global_1360165[iParam0 /*1157*/].f_129 != 0 && Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_986(iParam0, 56, 1);
		func_29(&(Global_1359489.f_40), 1);
	}
	func_537(iParam0, 0);
	func_1011(iParam0, 4, 0);
	func_485(iParam0);
	func_1036(iParam0);
	func_984(iParam0, 37, 1);
	bVar0 = func_479(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_1037(iParam0, 0);
	bVar2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_1016(iParam0, 64, 1))
	{
		func_984(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_984(iParam0, 33, 1);
		func_984(iParam0, 34, 1);
		func_1038(iParam0, 1056964608 /* Float: 0.5f */, -1, 1061158912 /* Float: 0.75f */);
		func_1039(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_986(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_986(iParam0, 35, 1);
			if (bParam8)
			{
				func_986(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_1040(iParam0, 0);
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
		func_984(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_986(iParam0, 33, 1);
		func_1039(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = fParam4;
			func_29(&(Global_1360165[iParam0 /*1157*/].f_130), 1);
		}
		else
		{
			func_570(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
		if (bParam9)
		{
			func_986(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_1041(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_1016(iParam0, 45, 1))
	{
		func_984(iParam0, 45, 1);
	}
	func_1042(iParam0, 16, 1);
	func_984(iParam0, 44, 1);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;
	if (bParam5)
	{
		if (func_479(func_981(iParam0), 0))
		{
			func_454(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_539(int iParam0)
{
	int iVar0;

	iParam0 = func_273(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_269(iParam0);
	if (!SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		func_546(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_546(iParam0);
	}
}

bool func_540(int iParam0)
{
	iParam0 = func_273(iParam0);
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

void func_541(int iParam0)
{
	iParam0 = func_273(iParam0);
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

void func_542(int iParam0)
{
	iParam0 = func_273(iParam0);
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

bool func_543(int iParam0)
{
	if (!func_1043(iParam0))
	{
		return false;
	}
	if (!func_338())
	{
		return true;
	}
	return false;
}

void func_544(int iParam0)
{
	bool bVar0;
	int iVar1;

	iParam0 = func_273(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_547(iParam0))
	{
		return;
	}
	bVar0 = func_222(iParam0);
	func_1044(iParam0);
	if (!ENTITY::_0x88AD6CC10D8D35B2(bVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(bVar0);
	if (PED::_0xAA9F048DCF69B6DC(iVar1))
	{
		if (!func_543(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&bVar0);
	func_1045(iParam0, 0);
	func_546(iParam0);
}

bool func_545(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
	}
	iVar0 = func_268(bParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

void func_546(int iParam0)
{
	iParam0 = func_273(iParam0);
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

bool func_547(int iParam0)
{
	iParam0 = func_273(iParam0);
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

void func_548(int iParam0)
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
	iVar0 = func_222(iParam0);
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
	if (func_1046(iParam0, 64))
	{
		func_541(iParam0);
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
	bVar3 = func_617(42);
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
				func_1047(&(Global_1900383[iParam0 /*45*/].f_27));
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
		func_541(iParam0);
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
		if (func_1048(1) < 1)
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
		func_1049(&(Global_1900383[iParam0 /*45*/].f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1046(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_1050(iParam0);
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
	fVar15 = func_1051(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1052(iParam0))
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
		func_1053(Global_1900383[iParam0 /*45*/].f_26);
		func_1054(Global_1900383[iParam0 /*45*/].f_26);
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
	if (func_909(iVar0) && !bVar9)
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
	iVar21 = func_1048(iParam0);
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

int func_549(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_550(int iParam0)
{
	if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0 || Global_1347702[iParam0 /*49*/].f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_551(int iParam0)
{
	var uVar0;

	uVar0 = Global_1347702[iParam0 /*49*/].f_3;
	return MISC::GET_HASH_KEY(&uVar0);
}

void func_552(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_553(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_554(int iParam0)
{
	int iVar0;

	iParam0 = func_273(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_547(iParam0))
	{
		return false;
	}
	iVar0 = func_222(iParam0);
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

void func_555(int iParam0)
{
	int iVar0;

	iParam0 = func_273(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_547(iParam0))
	{
		return;
	}
	iVar0 = func_222(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_556(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_725(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", GET_HASH_KEY("ITEMTYPE_CASH"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_557(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_1055())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_725(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", GET_HASH_KEY("ITEMTYPE_TOTAL_TAKE"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1056(iVar0);
			func_1057(iVar0, 0, 0);
		}
		func_725(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", GET_HASH_KEY("ITEMTYPE_CASH"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_97(func_96(GET_HASH_KEY("CAREER_CASH")), iVar1);
	}
}

bool func_558(int iParam0)
{
	if (!func_254(iParam0))
	{
		return false;
	}
	return func_258(iParam0, 67108864);
}

void func_559(int iParam0)
{
	char cVar0[64];
	char* sVar8;

	StringCopy(&cVar0, func_1058(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1059(cVar0);
	MAP::_0x563FCB6620523917(MISC::GET_HASH_KEY(sVar8), -1482012664);
}

void func_560(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	int iVar9;

	StringCopy(&cVar0, func_1058(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1059(cVar0);
	iVar9 = MISC::GET_HASH_KEY(sVar8);
	if (MAP::_0xE38450DBCBC70E3D(iVar9, -1305340593) || MAP::_0xE38450DBCBC70E3D(iVar9, -1482012664))
	{
		MAP::_0x6786D7AFAC3162B3(iVar9);
	}
}

bool func_561(var uParam0, int iParam1, int iParam2)
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

bool func_562(var uParam0, int iParam1, int iParam2)
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

bool func_563(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_564(int iParam0)
{
	if (!func_528(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0 /*8*/].f_4 > 0;
}

int func_565(int iParam0)
{
	if (func_528(iParam0))
	{
		return Global_17504.f_42[iParam0 /*8*/].f_4;
	}
	return 0;
}

int func_566(int iParam0)
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

float func_567()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_568(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1060(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_22() != -1)
	{
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;
	}
	Global_17504.f_42[iParam0 /*8*/].f_4 = (Global_17504.f_42[iParam0 /*8*/].f_4 + iVar0);
}

bool func_569(int iParam0)
{
	if (!func_980(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_570(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_571(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_1061(iParam0);
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

int func_572(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			func_585(&(Global_40.f_4283.f_6[iVar0 /*5*/]), bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_573(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_2;
	}
	return -1;
}

void func_574(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

int func_575()
{
	return Global_40.f_11095.f_35;
}

void func_576(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_1062(iParam0, 0);
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
		func_577(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_577(int iParam0)
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
			func_1062(Global_40.f_11922[iVar0], 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1063(1);
	}
}

bool func_578(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_579()
{
	int iVar0;
	int iVar1;

	iVar0 = func_1064(Global_1347702[9 /*49*/].f_15);
	iVar1 = func_1064(Global_1835011[69 /*74*/].f_1);
	if (func_1065(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_580(int iParam0)
{
	if (!func_196(iParam0))
	{
		return false;
	}
	return func_334(Global_1835011[iParam0 /*74*/].f_1, 1);
}

int func_581(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	Var0 = Global_1357549.f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1066(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1067(iVar6);
	}
	return iVar5;
}

int func_582(int iParam0)
{
	struct<5> Var0;
	int iVar5;

	Var0 = Global_1357549.f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1068(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_583(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_1069(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_1357549.f_1848[iVar0]), iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1357549.f_1848[iVar0]), iVar1);
	}
}

bool func_584(int iParam0)
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

void func_585(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_583(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_586(2, *uParam0);
		}
		else
		{
			func_587(2, *uParam0);
		}
	}
	func_1070(uParam0);
}

void func_586(int iParam0, int iParam1)
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

void func_587(int iParam0, int iParam1)
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

void func_588(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_1071(iParam0, iParam1, bParam2);
}

int func_589(int iParam0)
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

int func_590(int iParam0)
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

void func_591(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
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

	iVar0 = func_1072();
	if (iParam3 == GET_HASH_KEY("HONOR_EVENT_AMBIENT_KILL") || iParam3 == GET_HASH_KEY("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_1073(iParam0);
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
	if (func_617(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1074())
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
	Global_40.f_11095.f_35 = func_316(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1072();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == GET_HASH_KEY("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_1075(iVar1);
		func_1077(func_1076(), 0, 4000);
		func_1078(Global_40.f_11095.f_35);
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
		func_1079(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_97(func_96(GET_HASH_KEY("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_590(14))
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
					sParam4 = func_1080(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_725(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_725(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_97(func_96(GET_HASH_KEY("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_590(4))
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
					sParam4 = func_1080(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_725(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, GET_HASH_KEY("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_725(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, GET_HASH_KEY("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_96(GET_HASH_KEY("HONOR_CURRENT")) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_369(10, 1);
	}
}

void func_592(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = iParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
}

int func_593(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

int func_594(int iParam0)
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

bool func_595(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_596(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_22() == -1)
	{
		if (func_1081(iParam0) && func_1082(iParam0))
		{
			func_1083(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_597(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_1084(iParam0, iParam1);
	Var0 = { func_706(iParam0, 0, 1) };
	iVar5 = func_1085(iParam0, &Var0, 0, 0);
	iVar6 = func_1086(iParam0, 0);
	if ((iVar5 > 1 && !func_131()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_615(iParam0, -2051813666))
		{
			func_332(583, 1);
		}
		else
		{
			func_332(582, 0);
		}
	}
	if (func_1087(iParam0, &Var0, *iParam1, 0, 0))
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

void func_598(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_676(iParam0, -949239683))
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

int func_599(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_595(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_614(iParam0);
	if (iVar0 == GET_HASH_KEY("AMMO") || (bParam1 && iVar0 == GET_HASH_KEY("WEAPON")))
	{
		iVar1 = func_1088(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == GET_HASH_KEY("WEAPON"))
	{
		return func_1089(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_1022(bParam2), iParam0, 0);
	return iVar2;
}

bool func_600(int iParam0)
{
	if (func_22() != -1)
	{
		return false;
	}
	return func_601(iParam0) != 0;
}

int func_601(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_1090())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_1091(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_602(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_603(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_1090())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0