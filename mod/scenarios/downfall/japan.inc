province = {
	id = 1191 #Kagoshima
	air_base = {
		size = 10
		current_size = 10
		}
	naval_base = {
		size = 5
		current_size = 5
		}
	}

province = {
	id = 1190 #Fukuoka
	air_base = {
		size = 10
		current_size = 10
		}
	naval_base = {
		size = 3
		current_size = 3
		}
	}

province = {
	id = 1189 #Shikoku
	air_base = {
		size = 5
		current_size = 5
		}
	naval_base = {
		size = 3
		current_size = 3
		}
	}

province = {
	id = 1188 #Hiroshima
	air_base = {
		size = 8
		current_size = 8
		}
	naval_base = {
		size = 5
		current_size = 5
		}
	}

province = {
	id = 1187 #Osaka
	air_base = {
		size = 10
		current_size = 10
		}
	naval_base = {
		size = 8
		current_size = 8
		}
	}

province = {
	id = 1186 #Kanozawa
	air_base = {
		size = 3
		current_size = 3
		}
	naval_base = {
		size = 1
		current_size = 1
		}
	}

province = {
	id = 1185 #Nagoya
	air_base = {
		size = 8
		current_size = 8
		}
	naval_base = {
		size = 5
		current_size = 5
		}
	}

province = {
	id = 1184 #Tokyo
	air_base = {
		size = 10
		current_size = 10
		}
	naval_base = {
		size = 8
		current_size = 8
		}
	}

province = {
	id = 1183 #Niigata
	air_base = {
		size = 5
		current_size = 5
		}
	naval_base = {
		size = 1
		current_size = 1
		}
	}

province = {
	id = 1182 #Fukushima
	air_base = {
		size = 5
		current_size = 5
		}
	naval_base = {
		size = 1
		current_size = 1
		}
	}

province = {
	id = 1181 #Akita
	air_base = {
		size = 3
		current_size = 3
		}
	naval_base = {
		size = 1
		current_size = 1
		}
	}

province = {
	id = 1180 #Sendai
	air_base = {
		size = 3
		current_size = 3
		}
	naval_base = {
		size = 1
		current_size = 1
		}
	}

province = {
	id = 1179 #Sapporo
	air_base = {
		size = 2
		current_size = 2
		}
	naval_base = {
		size = 1
		current_size = 1
		}
	}

province = {
	id = 1178 #Asuhikawa
	air_base = {
		size = 2
		current_size = 2
		}
	naval_base = {
		size = 1
		current_size = 1
		}
	}

province = {
	id = 1324 #Taiwan
	naval_base = {
		size = 1
		current_size = 1
		}
	}

province = {
	id = 1196 #Busan
	air_base = {
		size = 1
		current_size = 1
		}
	naval_base = {
		size = 2
		current_size = 2
		}
	oilpool = 1000
	supplypool = 10000
	}

province = {
	id = 1199 #Seoul
	air_base = {
		size = 6
		current_size = 6
		}
	naval_base = {
		size = 2
		current_size = 2
		}
	}
province = {
	id = 1323 #Taibei
	air_base = {
		size = 2
		current_size = 2
		}
	naval_base = {
		size = 1
		current_size = 1
		}
	supplypool = 10000
	}



country = {
	tag = JAP

	capital = 1184

	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 3
		political_left = 3
		freedom = 3
		free_market = 3
		professional_army = 3
		defense_lobby = 8
		interventionism = 8
		}


	headofstate = { type = 9 id = 5001 }
	headofgovernment = { type = 9 id = 5043 }
	foreignminister = { type = 9 id = 5067 }
	armamentminister = { type = 9 id = 5094 }
	ministerofsecurity = { type = 9 id = 5125 }
	ministerofintelligence = { type = 9 id = 5145 }
	chiefofstaff = { type = 9 id = 5157 }
	chiefofarmy = { type = 9 id = 5167 }
	chiefofnavy = { type = 9 id = 5201 }
	chiefofair = { type = 9 id = 5196 }

	manpower = 1000

	oil = 1000
	supplies = 5000

	transports = 100
	escorts = 10

	extra_tc = 80

	free = {
		supplies = 100
		oil = 10
#		ic = 45
		}

	ownedprovinces = {
	1191 1190 1189 1188 1187 1186 1185 1184 1183 1182 1181 1180 1179 1178
	1177 1176 1174
	1194 1195 1196 1197 1198 1199
	1322 1323 1324
	1201 1200 1393 1391 1392 1376
	1193 1599
	1626 1627
	}
	controlledprovinces = {
	1191 1190 1189 1188 1187 1186 1185 1184 1183 1182 1181 1180 1179 1178
	1194 1195 1196 1197 1198 1199
	1322 1323 1324
	}
	nationalprovinces = {
	1191 1190 1189 1188 1187 1186 1185 1184 1183 1182 1181 1180 1179 1178
	1177 1176 1174
	}

	techapps = {
# JAP 1944 techs
#######################

4010 4020 4030 4040 4050 4060 4070 4080 4090 4100 4110 # All advanced fighter models

4120 4130 4140 4150 4160 # Adv. medium bomber

4190 4200 4210 # Adv. naval bomber

4250 # Basic transport

4220 4230 # Imp. strategic bomber (Shinzan)

2150 # Basic Armoured Car

2010 2020 2030 2040 2050 # Imp. light tank

2030 2070 2080 # Imp. medium tanks

2170 2180 # Basic tank destroyer

2220 # Early SP guns

2290 2300 2310 2320 2330 # Medium artillery

2400 2410 # Basic AT

2450 2460 2470 2480 # Imp. Static AA

2510 2520 # Imp AA

1010 1020 1030 1040 # Imp. infantry

1190 1200 1210 1220 # Semi-mot Cavalry

1110 1120 1070 # Basic Mountain/Early. para

1230 1240 # Imp. motorized

1150 1160 # Basic Marine

1310 1320 1340 1350 # supply/repair techs - 1

5010 # Agriculture (basic)

5050 5060 # Improved Machine Tools

5080 5090 5100 # Construction (up to the forts)

5110 5120 5130 5140 5150 # Assembly lines (planes, ships)

5190 5200 # Imp. oil conversion

5350 5360 # Basic encryption/decryption

5410 5420 # Imp. Dec. Radar

5470 # Nukes I

5550 5560 5570 # Jet and rocket engines (from Germans)

9010 9020 9030 9040 9050 9060 9080 9090 9100 9110 9120 9130 9190 9200 9210 9220 9230 9240 9250 9260 9270 9280 9290 9300 9310 9320 9330 9340 9350 9360 9370 9380 9390 9400 9410 9420 # Doctrines (air)

6010 6030 6110 6120 6130 6160 # doctrines (land)

8010 8020 8030 8040 8050 8060 8090 8100 8110 8180 8230 8320 8140 8250

3010 3020 3030 3040 3050
3070 3080 3090 3100
3130 3140 3150
3190 3200 3210
3250 3260 3270 3280
3320 3330 3340 3350 3360 3370
3400 3410 3420 3430

1050 4280 4170 9070 5070 5310 5320
14000 14000 14020 # Hospital Techs
12100 12110 12120 # EscortCarrier Techs
}


	landunit = {
		id = { type = 10200 id = 1 }
		name = "Dai 16 Hômengun"
		location = 1190 #Fukuoka
		division = { id = { type = 10200 id = 2 } name = "Dai 57 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 3 } name = "Dai 145 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 4 } name = "Dai 312 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 5 } name = "Dai 351 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 6 } name = "Dai 4 Dokuritsu Sensharyodan" strength = 50 max_strength = 50 type = armor model = 3 }
		}

	landunit = {
		id = { type = 10200 id = 7 }
		name = "Dai 40 gun"
		location = 1191 #Kagoshima
		division = { id = { type = 10200 id = 8 } name = "Dai 77 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 9 } name = "Dai 146 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 10 } name = "Dai 206 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 11 } name = "Dai 216 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 12 } name = "Dai 303 Hoheishidan" strength = 100 type = infantry model = 3 }
		}

	landunit = {
		id = { type = 10200 id = 13 }
		name = "Dai 57 gun"
		location = 1191 #Kagoshima
		division = { id = { type = 10200 id = 14 } name = "Dai 25 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 15 } name = "Dai 86 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 16 } name = "Dai 154 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 17 } name = "Dai 156 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 18 } name = "Dai 212 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 19 } name = "Dai 5 Dokuritsu Sensharyodan" strength = 50 max_strength = 50 type = armor model = 3 }
		division = { id = { type = 10200 id = 20 } name = "Dai 6 Dokuritsu Sensharyodan" strength = 50 max_strength = 50 type = armor model = 3 }
		}

	landunit = {
		id = { type = 10200 id = 21 }
		name = "Dai 12 Hômengun"
		location = 1184 #Tokyo
		division = { id = { type = 10200 id = 22 } name = "Dai 1 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 23 } name = "Dai 2 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 24 } name = "Dai 3 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 25 } name = "Dai 4 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 26 } name = "Dai 5 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 27 } name = "Dai 6 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 28 } name = "Dai 1 Dokuritsu Sensharyodan" strength = 50 max_strength = 50 type = armor model = 3 }
		division = { id = { type = 10200 id = 29 } name = "Dai 2 Dokuritsu Sensharyodan" strength = 50 max_strength = 50 type = armor model = 3 }
		}

	landunit = {
		id = { type = 10200 id = 30 }
		name = "Dai 15 Hômengun"
		location = 1187 #Osaka
		division = { id = { type = 10200 id = 31 } name = "Dai 7 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 32 } name = "Dai 8 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 33 } name = "Dai 9 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 34 } name = "Dai 10 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 35 } name = "Dai 3 Dokuritsu Sensharyodan" strength = 50 max_strength = 50 type = armor model = 3 }
		}

	landunit = {
		id = { type = 10200 id = 36 }
		name = "Dai 3 gun"
		location = 1182 #Fukushima
		division = { id = { type = 10200 id = 37 } name = "Dai 11 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 38 } name = "Dai 12 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 39 } name = "Dai 13 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 40 } name = "Dai 14 Hoheishidan" strength = 100 type = infantry model = 3 }
		}

	landunit = {
		id = { type = 10200 id = 41 }
		name = "Dai 4 gun"
		location = 1183 #Niigata
		division = { id = { type = 10200 id = 42 } name = "Dai 15 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 43 } name = "Dai 16 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 44 } name = "Dai 17 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 45 } name = "Dai 18 Hoheishidan" strength = 100 type = infantry model = 3 }
		}

	landunit = {
		id = { type = 10200 id = 46 }
		name = "Dai 13 Hômengun"
		location = 1185 #Nagoya
		division = { id = { type = 10200 id = 47 } name = "Dai 19th Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 48 } name = "Dai 20th Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 49 } name = "Dai 21st Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 50 } name = "Dai 22nd Hoheishidan" strength = 100 type = infantry model = 3 }
		}

	landunit = {
		id = { type = 10200 id = 51 }
		name = "Dai 6 gun"
		location = 1188 #Hiroshima
		division = { id = { type = 10200 id = 52 } name = "Dai 23 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 53 } name = "Dai 24 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 54 } name = "Dai 26 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 55 } name = "Dai 27 Hoheishidan" strength = 100 type = infantry model = 3 }
		}

	landunit = {
		id = { type = 10200 id = 56 }
		name = "Dai 11 Hômengun"
		location = 1180 #Sendai
		division = { id = { type = 10200 id = 57 } name = "Dai 28 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 58 } name = "Dai 29 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 59 } name = "Dai 30 Hoheishidan" strength = 100 type = infantry model = 3 }
		}

	landunit = {
		id = { type = 10200 id = 60 }
		name = "Dai 8 gun"
		location = 1189 #Shikoku
		division = { id = { type = 10200 id = 61 } name = "Dai 31 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 62 } name = "Dai 32 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 63 } name = "Dai 33 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 64 } name = "Dai 34 Hoheishidan" strength = 100 type = infantry model = 3 }
		}

	landunit = {
		id = { type = 10200 id = 65 }
		name = "Dai 9 gun"
		location = 1186 #Kanozawa
		division = { id = { type = 10200 id = 66 } name = "Dai 35 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 67 } name = "Dai 36 Hoheishidan" strength = 100 type = infantry model = 3 }
		}

	landunit = {
		id = { type = 10200 id = 68 }
		name = "Dai 10 gun"
		location = 1181 #Akita
		division = { id = { type = 10200 id = 69 } name = "Dai 37 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 70 } name = "Dai 38 Hoheishidan" strength = 100 type = infantry model = 3 }
		}

	landunit = {
		id = { type = 10200 id = 71 }
		name = "Dai 11 Hômengun"
		location = 1179 #Sapporo
		division = { id = { type = 10200 id = 72 } name = "Dai 39 Hoheishidan" strength = 100 type = infantry model = 3 }
		}

	landunit = {
		id = { type = 10200 id = 73 }
		name = "Dai 12 Hômengun"
		location = 1178 #Asahikawa
		division = { id = { type = 10200 id = 74 } name = "Dai 40 Hoheishidan" strength = 100 type = infantry model = 3 }
		}

	landunit = {
		id = { type = 10200 id = 75 }
		name = "Dai 30 gun"
		location = 1199 #Seoul
		division = { id = { type = 10200 id = 76 } name = "Dai 41 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 77 } name = "Dai 42 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 78 } name = "Dai 43 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 79 } name = "Dai 44 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 80 } name = "Dai 45 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 81 } name = "Dai 46 Hoheishidan" strength = 100 type = infantry model = 3 }
		}

	landunit = {
		id = { type = 10200 id = 82 }
		name = "Dai 34 gun"
		location = 1198 #Chunchon
		division = { id = { type = 10200 id = 83 } name = "Dai 47 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 84 } name = "Dai 48 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 85 } name = "Dai 49 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 86 } name = "Dai 50 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 87 } name = "Dai 51 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 88 } name = "Dai 52 Hoheishidan" strength = 100 type = infantry model = 3 }
		}

	landunit = {
		id = { type = 10200 id = 89 }
		name = "Dai 10 Hômengun"
		location = 1323 #Taibei
		division = { id = { type = 10200 id = 90 } name = "Dai 53 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 91 } name = "Dai 54 Hoheishidan" strength = 100 type = infantry model = 3 }
		division = { id = { type = 10200 id = 92 } name = "Dai 55 Hoheishidan" strength = 100 type = infantry model = 3 }
		}

	landunit = {
		id = { type = 10200 id = 93 }
		name = "Gaoxiong Shubitai"
		location = 1322 #Gaoxiong
		division = { id = { type = 10200 id = 94 } name = "Gaoxiong Shubitai" strength = 100 type = garrison model = 2 locked = yes }
		}

	landunit = {
		id = { type = 10200 id = 95 }
		name = "Taibei Shubitai"
		location = 1323 #Taibei
		division = { id = { type = 10200 id = 96 } name = "Taibei Shubitai" strength = 100 type = garrison model = 2 locked = yes }
		}

	landunit = {
		id = { type = 10200 id = 97 }
		name = "Hualian Shubitai"
		location = 1324 #Hualian
		division = { id = { type = 10200 id = 98 } name = "Hualian Shubitai" strength = 100 type = garrison model = 2 locked = yes }
		}

	landunit = {
		id = { type = 10200 id = 105 }
		name = "Dai 1 Tokubetsu bôbi butai"
		location = 1191 #Kagoshima
		division = { id = { type = 10200 id = 106 } name = "Dai 1 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		division = { id = { type = 10200 id = 107 } name = "Dai 2 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		division = { id = { type = 10200 id = 108 } name = "Dai 3 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		division = { id = { type = 10200 id = 109 } name = "Dai 4 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		}

	landunit = {
		id = { type = 10200 id = 110 }
		name = "Dai 2 Tokubetsu bôbi butai"
		location = 1190 #Fukuoka
		division = { id = { type = 10200 id = 111 } name = "Dai 5 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		division = { id = { type = 10200 id = 112 } name = "Dai 6 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		}

	landunit = {
		id = { type = 10200 id = 113 }
		name = "Dai 3 Tokubetsu bôbi butai"
		location = 1184 #Tokyo
		division = { id = { type = 10200 id = 114 } name = "Dai 7 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		division = { id = { type = 10200 id = 115 } name = "Dai 8 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		division = { id = { type = 10200 id = 116 } name = "Dai 9 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		division = { id = { type = 10200 id = 117 } name = "Dai 10 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		}

	landunit = {
		id = { type = 10200 id = 118 }
		name = "Dai 4 Tokubetsu bôbi butai"
		location = 1187 #Osaka
		division = { id = { type = 10200 id = 119 } name = "Dai 11 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		division = { id = { type = 10200 id = 120 } name = "Dai 12 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		division = { id = { type = 10200 id = 121 } name = "Dai 13 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		}

	landunit = {
		id = { type = 10200 id = 122 }
		name = "Dai 5 Tokubetsu bôbi butai"
		location = 1182 #Fukushima
		division = { id = { type = 10200 id = 123 } name = "Dai 14 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		division = { id = { type = 10200 id = 124 } name = "Dai 15 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		}

	landunit = {
		id = { type = 10200 id = 125 }
		name = "Dai 6 Tokubetsu bôbi butai"
		location = 1183 #Niigata
		division = { id = { type = 10200 id = 126 } name = "Dai 16 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		division = { id = { type = 10200 id = 127 } name = "Dai 17 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		}

	landunit = {
		id = { type = 10200 id = 128 }
		name = "Dai 7 Tokubetsu bôbi butai"
		location = 1185 #Nagoya
		division = { id = { type = 10200 id = 129 } name = "Dai 18 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		division = { id = { type = 10200 id = 130 } name = "Dai 19 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		division = { id = { type = 10200 id = 131 } name = "Dai 20 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		}

	landunit = {
		id = { type = 10200 id = 132 }
		name = "Dai 8 Tokubetsu bôbi butai"
		location = 1188 #Hiroshima
		division = { id = { type = 10200 id = 133 } name = "Dai 21 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		division = { id = { type = 10200 id = 134 } name = "Dai 22 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		}

	landunit = {
		id = { type = 10200 id = 135 }
		name = "Dai 9 Tokubetsu bôbi butai"
		location = 1180 #Sendai
		division = { id = { type = 10200 id = 136 } name = "Dai 23 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		division = { id = { type = 10200 id = 137 } name = "Dai 24 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		}

	landunit = {
		id = { type = 10200 id = 138 }
		name = "Dai 10 Tokubetsu bôbi butai"
		location = 1189 #Shikoku
		division = { id = { type = 10200 id = 139 } name = "Dai 25 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		division = { id = { type = 10200 id = 140 } name = "Dai 26 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		division = { id = { type = 10200 id = 141 } name = "Dai 27 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		}

	landunit = {
		id = { type = 10200 id = 142 }
		name = "Dai 11 Tokubetsu bôbi butai"
		location = 1186 #Kanozawa
		division = { id = { type = 10200 id = 143 } name = "Dai 28 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		division = { id = { type = 10200 id = 144 } name = "Dai 29 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		}

	landunit = {
		id = { type = 10200 id = 145 }
		name = "Dai 12 Tokubetsu bôbi butai"
		location = 1181 #Akita
		division = { id = { type = 10200 id = 146 } name = "Dai 30 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		division = { id = { type = 10200 id = 147 } name = "Dai 31 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		}

	landunit = {
		id = { type = 10200 id = 148 }
		name = "Dai 13 Tokubetsu bôbi butai"
		location = 1179 #Sapporo
		division = { id = { type = 10200 id = 149 } name = "Dai 32nd Special Guard Division" strength = 100 type = garrison model = 1 }
		}

	landunit = {
		id = { type = 10200 id = 150 }
		name = "Dai 14 Tokubetsu bôbi butai"
		location = 1178 #Asahikawa
		division = { id = { type = 10200 id = 151 } name = "Dai 33 Tokubetsu keibitai" strength = 100 type = garrison model = 1 }
		}

	landunit = {
		id = { type = 10200 id = 152 }
		name = "Dai 1 Hari-tsuke gun"
		location = 1191 #Kagoshima
		division = { id = { type = 10200 id = 153 } name = "Dai 1 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		division = { id = { type = 10200 id = 154 } name = "Dai 2 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		division = { id = { type = 10200 id = 155 } name = "Dai 3 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		division = { id = { type = 10200 id = 156 } name = "Dai 4 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		}

	landunit = {
		id = { type = 10200 id = 157 }
		name = "Dai 2 Hari-tsuke gun"
		location = 1190 #Fukuoka
		division = { id = { type = 10200 id = 158 } name = "Dai 5 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		division = { id = { type = 10200 id = 159 } name = "Dai 6 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		}

	landunit = {
		id = { type = 10200 id = 160 }
		name = "Dai 3 Hari-tsuke gun"
		location = 1184 #Tokyo
		division = { id = { type = 10200 id = 161 } name = "Dai 7 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		division = { id = { type = 10200 id = 162 } name = "Dai 8 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		division = { id = { type = 10200 id = 163 } name = "Dai 9 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		division = { id = { type = 10200 id = 164 } name = "Dai 10 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		}

	landunit = {
		id = { type = 10200 id = 165 }
		name = "Dai 4 Hari-tsuke gun"
		location = 1187 #Osaka
		division = { id = { type = 10200 id = 166 } name = "Dai 11 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		division = { id = { type = 10200 id = 167 } name = "Dai 12 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		division = { id = { type = 10200 id = 168 } name = "Dai 13 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		}

	landunit = {
		id = { type = 10200 id = 169 }
		name = "Dai 5 Hari-tsuke gun"
		location = 1182 #Fukushima
		division = { id = { type = 10200 id = 170 } name = "Dai 14 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		division = { id = { type = 10200 id = 171 } name = "Dai 15 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		}

	landunit = {
		id = { type = 10200 id = 172 }
		name = "Dai 6 Hari-tsuke gun"
		location = 1183 #Niigata
		division = { id = { type = 10200 id = 173 } name = "Dai 16 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		division = { id = { type = 10200 id = 174 } name = "Dai 17 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		}

	landunit = {
		id = { type = 10200 id = 175 }
		name = "Dai 7 Hari-tsuke gun"
		location = 1185 #Nagoya
		division = { id = { type = 10200 id = 176 } name = "Dai 18 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		division = { id = { type = 10200 id = 177 } name = "Dai 19 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		division = { id = { type = 10200 id = 178 } name = "Dai 20 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		}

	landunit = {
		id = { type = 10200 id = 179 }
		name = "Dai 8 Hari-tsuke gun"
		location = 1188 #Hiroshima
		division = { id = { type = 10200 id = 180 } name = "Dai 21 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		division = { id = { type = 10200 id = 181 } name = "Dai 22 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		}

	landunit = {
		id = { type = 10200 id = 182 }
		name = "Dai 9 Hari-tsuke gun"
		location = 1180 #Sendai
		division = { id = { type = 10200 id = 183 } name = "Dai 23 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		division = { id = { type = 10200 id = 184 } name = "Dai 24 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		}

	landunit = {
		id = { type = 10200 id = 185 }
		name = "Dai 10 Hari-tsuke gun"
		location = 1189 #Shikoku
		division = { id = { type = 10200 id = 186 } name = "Dai 25 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		division = { id = { type = 10200 id = 187 } name = "Dai 26 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		division = { id = { type = 10200 id = 188 } name = "Dai 27 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		}

	landunit = {
		id = { type = 10200 id = 189 }
		name = "Dai 11 Hari-tsuke gun"
		location = 1186 #Kanozawa
		division = { id = { type = 10200 id = 190 } name = "Dai 28 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		division = { id = { type = 10200 id = 191 } name = "Dai 29 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		}

	landunit = {
		id = { type = 10200 id = 192 }
		name = "Dai 12 Hari-tsuke gun"
		location = 1181 #Akita
		division = { id = { type = 10200 id = 193 } name = "Dai 30 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		division = { id = { type = 10200 id = 194 } name = "Dai 31 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		}

	landunit = {
		id = { type = 10200 id = 195 }
		name = "Dai 13 Hari-tsuke gun"
		location = 1179 #Sapporo
		division = { id = { type = 10200 id = 196 } name = "Dai 32 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		}

	landunit = {
		id = { type = 10200 id = 197 }
		name = "Dai 14 Hari-tsuke gun"
		location = 1178 #Asahikawa
		division = { id = { type = 10200 id = 198 } name = "Dai 33 Hari-tsuke shidan" strength = 100 type = militia model = 0 locked = yes }
		}

	landunit = {
		id = { type = 10200 id = 199 }
		name = "Dai 16 Hômengun shireibu"
		location = 1191 #Kagoshima
		division = { id = { type = 10200 id = 200 } name = "Dai 16 Hômengun shireibu" strength = 100 type = hq model = 2 }
		}

	landunit = {
		id = { type = 10200 id = 201 }
		name = "Dai 2 So-Gun"
		location = 1188 #Hiroshima
		division = { id = { type = 10200 id = 202 } name = "Dai 2 Saikôshireibu" strength = 100 type = hq model = 2 }
		}

	landunit = {
		id = { type = 10200 id = 203 }
		name = "Dai 13 Hômengun shireibu"
		location = 1187 #Osaka
		division = { id = { type = 10200 id = 204 } name = "Dai 13 Hômengun shireibu" strength = 100 type = hq model = 2 }
		}

	landunit = {
		id = { type = 10200 id = 205 }
		name = "Dai 1 So-Gun"
		location = 1184 #Tokyo
		division = { id = { type = 10200 id = 206 } name = "Dai 1 Saikôshireibu" strength = 100 type = hq model = 2 }
		}

	landunit = {
		id = { type = 10200 id = 207 }
		name = "Dai 11 Hômengun shireibu"
		location = 1180 #Sendai
		division = { id = { type = 10200 id = 208 } name = "Dai 11 Hômengun shireibu" strength = 100 type = hq model = 2 }
		}

	landunit = {
		id = { type = 10200 id = 209 }
		name = "Dai 17 Hômengun shireibu"
		location = 1197 #Daegu
		division = { id = { type = 10200 id = 210 } name = "Dai 17 Hômengun shireibu" strength = 100 type = hq model = 2 }
		}

	navalunit = {
		id = { type = 10200 id = 1000 }
		name = "Dai 1 Kuchikusentai"
		location = 1188 #Hiroshima
		division = { id = { type = 10200 id = 1001 } name = "Dai 1 Kuchikusentai" strength = 100 type = destroyer model = 2 }
		}

	navalunit = {
		id = { type = 10200 id = 1002 }
		name = "Dai 2 Kuchikusentai"
		location = 1187 #Osaka
		division = { id = { type = 10200 id = 1003 } name = "Dai 2 Kuchikusentai" strength = 100 type = destroyer model = 2 }
		}

	navalunit = {
		id = { type = 10200 id = 1004 }
		name = "Dai 3 Kuchikusentai"
		location = 1184 #Tokyo
		division = { id = { type = 10200 id = 1005 } name = "Dai 3 Kuchikusentai" strength = 100 type = destroyer model = 2 }
		}

	navalunit = {
		id = { type = 10200 id = 1006 }
		name = "Dai 1 Sensuisentai"
		location = 1188 #Hiroshima
		division = { id = { type = 10200 id = 1007 } name = "Dai 1 Sensuisentai" strength = 100 type = submarine model = 2 }
		}

	navalunit = {
		id = { type = 10200 id = 1008 }
		name = "Dai 2 Sensuisentai"
		location = 1187 #Osaka
		division = { id = { type = 10200 id = 1009 } name = "Dai 2 Sensuisentai" strength = 100 type = submarine model = 2 }
		}

	navalunit = {
		id = { type = 10200 id = 1010 }
		name = "Dai 3 Sensuisentai"
		location = 1185 #Nagoya
		division = { id = { type = 10200 id = 1011 } name = "Dai 3 Sensuisentai" strength = 100 type = submarine model = 2 }
		}

	navalunit = {
		id = { type = 10200 id = 1012 }
		name = "Dai 4 Sensuisentai"
		location = 1184 #Tokyo
		division = { id = { type = 10200 id = 1013 } name = "Dai 4 Sensuisentai" strength = 100 type = submarine model = 2 }
		}

	navalunit = {
		id = { type = 10200 id = 1014 }
		name = "Dai 1 Sendan"
		location = 1187 #Osaka
		division = { id = { type = 10200 id = 1015 } name = "Dai 1 Yuso Sentai" strength = 100 type = transport }
		division = { id = { type = 10200 id = 1016 } name = "Dai 2 Yuso Sentai" strength = 100 type = transport }
		}

	navalunit = {
		id = { type = 10200 id = 1017 }
		name = "Dai 2 Sendan"
		location = 1185 #Nagoya
		division = { id = { type = 10200 id = 1018 } name = "Dai 3 Yuso Sentai" strength = 100 type = transport }
		division = { id = { type = 10200 id = 1019 } name = "Dai 4 Yuso Sentai" strength = 100 type = transport }
		}

	airunit = {
		id = { type = 10200 id = 2000 }
		name = "Dai 1 Konsei Hikôsentai" # 1st Mixed air group
		location = 1191 #Kagoshima
		division = { id = { type = 10200 id = 2001 } name = "Dai 1 Kyokutsi Hikodan" strength = 50 max_strength = 100 type = interceptor model = 2 }
		division = { id = { type = 10200 id = 2002 } name = "Dai 2 Kyokutsi Hikodan" strength = 50 max_strength = 100 type = interceptor model = 2 }
		division = { id = { type = 10200 id = 2003 } name = "Dai 1 Sentoubakugeki Hikodan" strength = 50 max_strength = 100 type = cas model = 1 }
		division = { id = { type = 10200 id = 2004 } name = "Dai 2 Sentoubakugeki Hikodan" strength = 50 max_strength = 100 type = cas model = 1 }
		division = { id = { type = 10200 id = 2005 } name = "Dai 3 Sentoubakugeki Hikodan" strength = 50 max_strength = 100 type = cas model = 1 }
		}

	airunit = {
		id = { type = 10200 id = 2006 }
		name = "Dai 2 Konsei Hikôsentai"
		location = 1190 #Fukuoka
		division = { id = { type = 10200 id = 2007 } name = "Dai 3 Kyokutsi Hikodan" strength = 50 max_strength = 100 type = interceptor model = 2 }
		division = { id = { type = 10200 id = 2008 } name = "Dai 4 Kyokutsi Hikodan" strength = 50 max_strength = 100 type = interceptor model = 2 }
		division = { id = { type = 10200 id = 2009 } name = "Dai 4 Sentoubakugeki Hikodan" strength = 50 max_strength = 100 type = cas model = 1 }
		division = { id = { type = 10200 id = 2010 } name = "Dai 5 Sentoubakugeki Hikodan" strength = 50 max_strength = 100 type = cas model = 1 }
		division = { id = { type = 10200 id = 2011 } name = "Dai 6 Sentoubakugeki Hikodan" strength = 50 max_strength = 100 type = cas model = 1 }
		}

	airunit = {
		id = { type = 10200 id = 2012 }
		name = "Dai 3 Konsei Hikôsentai"
		location = 1188 #Hiroshima
		division = { id = { type = 10200 id = 2013 } name = "Dai 5 Kyokutsi Hikodan" strength = 80 max_strength = 100 type = interceptor model = 2 }
		division = { id = { type = 10200 id = 2014 } name = "Dai 6 Kyokutsi Hikodan" strength = 80 max_strength = 100 type = interceptor model = 2 }
		division = { id = { type = 10200 id = 2015 } name = "Dai 7 Sentoubakugeki Hikodan" strength = 80 max_strength = 100 type = cas model = 1 }
		division = { id = { type = 10200 id = 2016 } name = "Dai 8 Sentoubakugeki Hikodan" strength = 80 max_strength = 100 type = cas model = 1 }
		division = { id = { type = 10200 id = 2017 } name = "Dai 9 Sentoubakugeki Hikodan" strength = 80 max_strength = 100 type = cas model = 1 }
		}

	airunit = {
		id = { type = 10200 id = 2018 }
		name = "Dai 4 Konsei Hikôsentai"
		location = 1187 #Osaka
		division = { id = { type = 10200 id = 2019 } name = "Dai 7 Kyokutsi Hikodan" strength = 80 max_strength = 100 type = interceptor model = 2 }
		division = { id = { type = 10200 id = 2020 } name = "Dai 8 Kyokutsi Hikodan" strength = 80 max_strength = 100 type = interceptor model = 2 }
		division = { id = { type = 10200 id = 2021 } name = "Dai 10 Sentoubakugeki Hikodan" strength = 80 max_strength = 100 type = cas model = 1 }
		division = { id = { type = 10200 id = 2022 } name = "Dai 11 Sentoubakugeki Hikodan" strength = 80 max_strength = 100 type = cas model = 1 }
		division = { id = { type = 10200 id = 2023 } name = "Dai 12 Sentoubakugeki Hikodan" strength = 80 max_strength = 100 type = cas model = 1 }
		}

	airunit = {
		id = { type = 10200 id = 2024 }
		name = "Dai 5 Konsei Hikôsentai"
		location = 1184 #Tokyo
		division = { id = { type = 10200 id = 2025 } name = "Dai 9 Kyokutsi Hikodan" strength = 80 max_strength = 100 type = interceptor model = 2 }
		division = { id = { type = 10200 id = 2026 } name = "Dai 10 Kyokutsi Hikodan" strength = 80 max_strength = 100 type = interceptor model = 2 }
		division = { id = { type = 10200 id = 2027 } name = "Dai 13 Sentoubakugeki Hikodan" strength = 80 max_strength = 100 type = cas model = 1 }
		division = { id = { type = 10200 id = 2028 } name = "Dai 14 Sentoubakugeki Hikodan" strength = 80 max_strength = 100 type = cas model = 1 }
		division = { id = { type = 10200 id = 2029 } name = "Dai 15 Sentoubakugeki Hikodan" strength = 80 max_strength = 100 type = cas model = 1 }
		}

	airunit = {
		id = { type = 10200 id = 2030 }
		name = "Dai 1 Zerosen sentai"
		location = 1191 #Kagoshima
		division = { id = { type = 10200 id = 2031 } name = "Dai 11 Kyokutsi Hikodan" strength = 50 max_strength = 100 type = interceptor model = 3 }
		division = { id = { type = 10200 id = 2032 } name = "Dai 12 Kyokutsi Hikodan" strength = 50 max_strength = 100 type = interceptor model = 3 }
		}

	airunit = {
		id = { type = 10200 id = 2033 }
		name = "Dai 2 Zerosen sentai"
		location = 1190 #Fukuoka
		division = { id = { type = 10200 id = 2034 } name = "Dai 13 Kyokutsi Hikodan" strength = 50 max_strength = 100 type = interceptor model = 3 }
		division = { id = { type = 10200 id = 2035 } name = "Dai 14 Kyokutsi Hikodan" strength = 50 max_strength = 100 type = interceptor model = 3 }
		}

	airunit = {
		id = { type = 10200 id = 2036 }
		name = "Dai 3 Zerosen sentai"
		location = 1185 #Nagoya
		division = { id = { type = 10200 id = 2037 } name = "Dai 15 Kyokutsi Hikodan" strength = 80 max_strength = 100 type = interceptor model = 3 }
		division = { id = { type = 10200 id = 2038 } name = "Dai 16 Kyokutsi Hikodan" strength = 80 max_strength = 100 type = interceptor model = 3 }
		}

	airunit = {
		id = { type = 10200 id = 2039 }
		name = "Dai 4 Zerosen sentai"
		location = 1188 #Hiroshima
		division = { id = { type = 10200 id = 2040 } name = "Dai 17 Sento Hikodan" strength = 80 max_strength = 100 type = multi_role model = 1 }
		division = { id = { type = 10200 id = 2041 } name = "Dai 18 Sento Hikodan" strength = 80 max_strength = 100 type = multi_role model = 1 }
		}

	airunit = {
		id = { type = 10200 id = 2042 }
		name = "Dai 5 Zerosen sentai"
		location = 1187 #Osaka
		division = { id = { type = 10200 id = 2043 } name = "Dai 19 Sento Hikodan" strength = 80 max_strength = 100 type = multi_role model = 1 }
		division = { id = { type = 10200 id = 2044 } name = "Dai 20 Sento Hikodan" strength = 80 max_strength = 100 type = multi_role model = 1 }
		}

	airunit = {
		id = { type = 10200 id = 2045 }
		name = "Dai 6 Zerosen sentai"
		location = 1184 #Tokyo
		division = { id = { type = 10200 id = 2046 } name = "Dai 21 Sento Hikodan" strength = 80 max_strength = 100 type = multi_role model = 1 }
		division = { id = { type = 10200 id = 2047 } name = "Dai 22 Sento Hikodan" strength = 80 max_strength = 100 type = multi_role model = 1 }
		}

	airunit = {
		id = { type = 10200 id = 2048 }
		name = "Dai 1 Kaigunkugekiki sentai"
		location = 1191 #Kagoshima
		division = { id = { type = 10200 id = 2049 } name = "Dai 1 Kaigunkogeki Hikodan" strength = 50 max_strength = 100 type = naval_bomber model = 1 }
		division = { id = { type = 10200 id = 2050 } name = "Dai 2 Kaigunkogeki Hikodan" strength = 50 max_strength = 100 type = naval_bomber model = 1 }
		}

	airunit = {
		id = { type = 10200 id = 2051 }
		name = "Dai 2 Kaigunkugekiki sentai"
		location = 1189 #Shikoku
		division = { id = { type = 10200 id = 2052 } name = "Dai 3 Kaigunkogeki Hikodan" strength = 80 max_strength = 100 type = naval_bomber model = 1 }
		division = { id = { type = 10200 id = 2053 } name = "Dai 4 Kaigunkogeki Hikodan" strength = 80 max_strength = 100 type = naval_bomber model = 1 }
		}

	airunit = {
		id = { type = 10200 id = 2054 }
		name = "Dai 3 Kaigunkugekiki sentai"
		location = 1187 #Osaka
		division = { id = { type = 10200 id = 2055 } name = "Dai 5 Kaigunkogeki Hikodan" strength = 80 max_strength = 100 type = naval_bomber model = 1 }
		division = { id = { type = 10200 id = 2056 } name = "Dai 6 Kaigunkogeki Hikodan" strength = 80 max_strength = 100 type = naval_bomber model = 1 }
		}

	airunit = {
		id = { type = 10200 id = 2057 }
		name = "Dai 4 Kaigunkugekiki sentai"
		location = 1184 #Tokyo
		division = { id = { type = 10200 id = 2058 } name = "Dai 7 Kaigunkogeki Hikodan" strength = 80 max_strength = 100 type = naval_bomber model = 1 }
		division = { id = { type = 10200 id = 2059 } name = "Dai 8 Kaigunkogeki Hikodan" strength = 80 max_strength = 100 type = naval_bomber model = 1 }
		}

	airunit = {
		id = { type = 10200 id = 2060 }
		name = "Dai 1 Keibakugekiki sentai"
		location = 1190 #Fukuoka
		division = { id = { type = 10200 id = 2061 } name = "Dai 1 Keibakugeki Hikodan" strength = 80 max_strength = 100 type = tactical_bomber model = 1 }
		division = { id = { type = 10200 id = 2062 } name = "Dai 2 Keibakugeki Hikodan" strength = 80 max_strength = 100 type = tactical_bomber model = 1 }
		}

	airunit = {
		id = { type = 10200 id = 2063 }
		name = "Dai 2 Keibakugekiki sentai"
		location = 1187 #Osaka
		division = { id = { type = 10200 id = 2064 } name = "Dai 3 Keibakugeki Hikodan" strength = 80 max_strength = 100 type = tactical_bomber model = 1 }
		division = { id = { type = 10200 id = 2065 } name = "Dai 4 Keibakugeki Hikodan" strength = 80 max_strength = 100 type = tactical_bomber model = 1 }
		}

	airunit = {
		id = { type = 10200 id = 2066 }
		name = "Dai 3 Keibakugekiki sentai"
		location = 1184 #Tokyo
		division = { id = { type = 10200 id = 2067 } name = "Dai 5 Keibakugeki Hikodan" strength = 80 max_strength = 100 type = tactical_bomber model = 1 }
		division = { id = { type = 10200 id = 2068 } name = "Dai 6 Keibakugeki Hikodan" strength = 80 max_strength = 100 type = tactical_bomber model = 1 }
		}

	airunit = {
		id = { type = 10200 id = 2069 }
		name = "chôsen Hikôsentai"
		location = 1199 #Seoul
		division = { id = { type = 10200 id = 2070 } name = "Dai 23 Kyokutsi Hikodan" strength = 80 max_strength = 100 type = interceptor model = 2 }
		division = { id = { type = 10200 id = 2071 } name = "Dai 24 Kyokutsi Hikodan" strength = 80 max_strength = 100 type = interceptor model = 2 }
		division = { id = { type = 10200 id = 2072 } name = "Dai 16 Sentoubakugeki Hikodan" strength = 80 max_strength = 100 type = cas model = 1 }
		division = { id = { type = 10200 id = 2073 } name = "Dai 17 Sentoubakugeki Hikodan" strength = 80 max_strength = 100 type = cas model = 1 }
		division = { id = { type = 10200 id = 2075 } name = "Dai 7 Keibakugeki Hikodan" strength = 80 max_strength = 100 type = tactical_bomber model = 1 }
		}
	}
