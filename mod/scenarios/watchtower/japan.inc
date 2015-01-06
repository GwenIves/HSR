province = {
	id = 1670 #Rabaul
	anti_air = 1
	air_base = {
		size = 4
		current_size = 4
		}
	naval_base = {
		size = 4
		current_size = 4
		}
	}

province = {
	id = 1669 #Kavieng
	air_base = {
		size = 1
		current_size = 1
		}
	naval_base = {
		size = 1
		current_size = 1
		}
	}

province = {
	id = 1683 #Shortland Island
	air_base = {
		size = 1
		current_size = 1
		}
	}

#province = { id = 1670 oilpool = 50000 supplypool = 100000 } #Rabaul
#province = { id = 1669 oilpool = 1000 supplypool = 2000 } #Kavieng
#province = { id = 1683 oilpool = 1000 supplypool = 2000 } #Shortland


country = {
	tag = JAP

	policy = {
	        date = { year = 0 month = january day = 0 }
	        democratic = 1
		political_left = 4
	        freedom = 3
		free_market = 3
	        professional_army = 3
		defense_lobby = 8
	        interventionism = 8
		}

			headofstate = { type = 9 id = 5001 }
			headofgovernment = { type = 9 id = 5042 }
			foreignminister = { type = 9 id = 5061 }
			armamentminister = { type = 9 id = 5092 }
			ministerofsecurity = { type = 9 id = 5123 }
			ministerofintelligence = { type = 9 id = 5144 }
			chiefofstaff = { type = 9 id = 5156 }
			chiefofarmy = { type = 9 id = 5166 }
			chiefofnavy = { type = 9 id = 5200 }
			 chiefofair = { type = 9 id = 5193 }

	capital = 1670 #Rabaul

	manpower = 100

	oil = 5000
	supplies = 10000
	money = 1000

	transports = 120
	escorts = 10

	extra_tc = 50

	free = {
		supplies = 40
		oil = 20
		ic = 7
		}

	ownedprovinces = { 1669 1670 }
	controlledprovinces = { 1614 1622 1669 1670 1681 1682 1683 1684 }
	nationalprovinces = { 1670 }

techapps = {
# JAP 1941 techs
#######################

1050 1040

4010 4020 4030 4050

4040 # Basic MR

4170 # Basic CAS

4120 4130 4140 4150 # Improved medium bomber (Betty)

4190 4200 # Improved naval bomber (Betty again)

4250 # Basic transport

2150 # Basic Armoured Car

2010 2020 2030 2040 # Basic light tank

2030 2050 2070 # Basic Medium

2290 2300 2310 2320 2330 # Basic artillery

2400 # Early AT

2450 2460 2470 # Basic Static AA

2510 2520 # Imp. AA

1010 1020 1030 # Basic infantry

1190 1200 1210 1220 # Semi-moto cavalry

1110 1120 1130 1070 # Imp. Mountain/Early para

1230 # Basic motorized

1150 1160 # Basic Marine

1310 1340 # Supply/repair - basics only

5010 # Agriculture (basic)

5050 5060 5070 # Advanced Machine Tools

5080 5090 5100 # Construction (up to the forts)

5110 5120 5130 5140 # Assembly lines (planes, ships)

5190 5200 # Imp. oil conversion

5310 5320 5350 # Basic encryption

5470 5480 5490 # Nuclear Tier 2

9010 9020 9030 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9190 9200 9210 9220 9350 # Doctrines (air)

6010 6030 6110 6120 6160 # doctrine (land)

8010 8020 8030 8040 8050 8060 8090 8100 8110 8180 8230

3010 3020 3030 #(Asashio)
3070 3080 3090 3100 #(Mogami)
3130 3140 3150 #(Nachi)
3190 3200 3210 #(Amagi)
3250 3260 3270 3280 3310 #(Yamato is in the que)
3320 3330 3340 3350 3360 #(Taiho-for the CAG tech)
3400 3410 3420 3430 #(J-boats)
#hospital
14000 14010

}


	landunit = {
		id = { type = 10300 id = 1 }
		name = "Rabaul konkyochi tai" #Rabaul Base force
		location = 1670 #Rabaul
		division = {
			id = { type = 10300 id = 2 }
			name = "Rabaul keibitai" #Rabaul Base force
			strength = 20
			max_strength = 20
			type = garrison
			model = 1
			locked = yes
			}
		}

	landunit = {
		id = { type = 10300 id = 3 }
		name = "Kavieng konkyochi tai"
		location = 1669 #Kavieng
		division = {
			id = { type = 10300 id = 4 }
			name = "Kavieng keibitai"
			strength = 20
			max_strength = 20
			type = garrison
			model = 1
			locked = yes
			}
		}

	landunit = {
		id = { type = 10300 id = 5 }
		name = "Buka konkyochi tai"
		location = 1681 #Buka Island
		division = {
			id = { type = 10300 id = 6 }
			name = "Buka Island keibitai"
			strength = 20
			max_strength = 20
			type = garrison
			model = 1
			locked = yes
			}
		}

	landunit = {
		id = { type = 10300 id = 7 }
		name = "Bougainville konkyochi tai"
		location = 1682 #Bougainville
		division = {
			id = { type = 10300 id = 8 }
			name = "Bougainville keibitai"
			strength = 20
			max_strength = 20
			type = garrison
			model = 1
			locked = yes
			}
		}

	landunit = {
		id = { type = 10300 id = 9 }
		name = "Shortland konkyochi tai"
		location = 1683 #Shortland Island
		division = {
			id = { type = 10300 id = 10 }
			name = "Shortland keibitai"
			strength = 20
			max_strength = 20
			type = garrison
			model = 1
			locked = yes
			}
		}

	landunit = {
		id = { type = 10300 id = 11 }
		name = "Vella Lavella konkyochi tai"
		location = 1614 #Vella Lavella
		division = {
			id = { type = 10300 id = 12 }
			name = "Vella Lavella keibitai"
			strength = 20
			max_strength = 20
			type = garrison
			model = 1
			locked = yes
			}
		}

	landunit = {
		id = { type = 10300 id = 13 }
		name = "Kolombangara konkyochi tai"
		location = 1622 #Kolombangara
		division = {
			id = { type = 10300 id = 14 }
			name = "Kolombangara keibitai"
			strength = 20
			max_strength = 20
			type = garrison
			model = 1
			locked = yes
			}
		}

	landunit = {
		id = { type = 10300 id = 15 }
		name = "New Georgia konkyochi tai"
		location = 1684 #New Georgia
		division = {
			id = { type = 10300 id = 16 }
			name = "New Georgia keibitai"
			strength = 20
			max_strength = 20
			type = garrison
			model = 1
			locked = yes
			}
		}

	landunit = {
		id = { type = 10300 id = 17 }
		name = "Guadalcanal konkyochi tai"
		location = 1685 #Guadalcanal
		division = {
			id = { type = 10300 id = 18 }
			name = "Guadalcanal keibitai"
			strength = 20
			max_strength = 20
			type = garrison
			model = 1
			locked = yes
			}
		}

	landunit = {
		id = { type = 10300 id = 19 }
		name = "Kure SNLF Ryodan" # Kure SNLF Brigade
		location = 1670 #Rabaul
		division = {
			id = { type = 10300 id = 20 }
			name = "Kure SNLF Ryodan"
			strength = 50
			max_strength = 50
			type = marine
			model = 1
			experience = 20
			}
		}

	landunit = {
		id = { type = 10300 id = 21 }
		name = "Sasebo SNLF Ryodan"
		location = 1670 #Rabaul
		division = {
			id = { type = 10300 id = 22 }
			name = "Sasebo SNLF Ryodan"
			strength = 50
			max_strength = 50
			type = marine
			model = 1
			experience = 20
			}
		}

	navalunit = {
		id = { type = 10300 id = 1000 }
		name = "Mikawa Force"
		location = 1670 #Rabaul
		base = 1670 #Rabaul
		division = { id = { type = 10300 id = 1001 } name = "IJN Aoba" type = heavy_cruiser model = 1 experience = 20 }
		division = { id = { type = 10300 id = 1002 } name = "IJN Chokai" type = heavy_cruiser model = 2 experience = 20 }
		division = { id = { type = 10300 id = 1003 } name = "IJN Furutaka" type = heavy_cruiser model = 1 experience = 20 }
		division = { id = { type = 10300 id = 1004 } name = "IJN Kako" type = heavy_cruiser model = 1 experience = 20 }
		division = { id = { type = 10300 id = 1005 } name = "IJN Kinugasa" type = heavy_cruiser model = 1 experience = 20 }
		division = { id = { type = 10300 id = 1006 } name = "IJN Tenryu" type = light_cruiser model = 1 experience = 20 }
		division = { id = { type = 10300 id = 1007 } name = "IJN Yubari" type = light_cruiser model = 1 experience = 20 }
		division = { id = { type = 10300 id = 1008 } name = "Dai 1 kuchikusentai" type = destroyer model = 1 experience = 20 }
		}

	navalunit = {
		id = { type = 10300 id = 1009 }
		name = "Dai 1 Sendan"
		location = 1670 #Rabaul
		base = 1670 #Rabaul
		division = { id = { type = 10300 id = 1010 } name = "Dai 1 Yuso Sentai" type = transport }
		division = { id = { type = 10300 id = 1200 } name = "Dai 2 Yuso Sentai" type = transport }
		}

	airunit = {
		id = { type = 10300 id = 2000 }
		name = "Tainan Koku sentai" #Tainan Air Group
		location = 1670 #Rabaul
		base = 1670 #Rabaul
		division = { id = { type = 10300 id = 2001 } name = "Tainan Sento hikôsentai" strength = 24 type = multi_role model = 0 experience = 20 max_strength = 50 }
		}

	airunit = {
		id = { type = 10300 id = 2002 }
		name = "Dai 1/2 Koku sentai"
		location = 1670 #Rabaul
		base = 1670 #Rabaul
		division = { id = { type = 10300 id = 2003 } name = "Dai 1/2 Sento hikôsentai" strength = 15 type = multi_role model = 0 experience = 20 max_strength = 30 }
		}

	airunit = {
		id = { type = 10300 id = 2004 }
		name = "Dai 2/2 Koku sentai"
		location = 1670 #Rabaul
		base = 1670 #Rabaul
		division = { id = { type = 10300 id = 2005 } name = "Dai 2/2 Kyûkôkabakugeki hikôsentai" strength = 16 type = cas model = 0 experience = 20 max_strength = 30 }
		}

	airunit = {
		id = { type = 10300 id = 2006 }
		name = "Dai 4 Koku sentai"
		location = 1670 #Rabaul
		base = 1670 #Rabaul
		division = { id = { type = 10300 id = 2007 } name = "Dai 4 Kaigunkogeki hikôsentai" strength = 32 type = naval_bomber model = 1 experience = 20 max_strength = 50 }
		}

#Battle of Eastern Solomons Reinforcements
navaldivision = { dormant = yes id = { type = 10300 id = 1100 } name = "IJN Shokaku" type = carrier model = 3 extra = cag brigade_model = 3 experience = 10 }
navaldivision = { dormant = yes id = { type = 10300 id = 1101 } name = "IJN Zuikaku" type = carrier model = 3 extra = cag brigade_model = 3 experience = 10 }
navaldivision = { dormant = yes id = { type = 10300 id = 1102 } name = "IJN Ryujo" type = escort_carrier model = 1 }
navaldivision = { dormant = yes id = { type = 10300 id = 1103 } name = "IJN Hiei" type = battlecruiser model = 1 experience = 20 }
navaldivision = { dormant = yes id = { type = 10300 id = 1104 } name = "IJN Kirishima" type = battlecruiser model = 1 experience = 20 }
navaldivision = { dormant = yes id = { type = 10300 id = 1105 } name = "IJN Atago" type = heavy_cruiser model = 2 experience = 20 }
navaldivision = { dormant = yes id = { type = 10300 id = 1106 } name = "IJN Chikuma" type = heavy_cruiser model = 2 experience = 20 }
navaldivision = { dormant = yes id = { type = 10300 id = 1107 } name = "IJN Haguro" type = heavy_cruiser model = 2 experience = 20 }
navaldivision = { dormant = yes id = { type = 10300 id = 1108 } name = "IJN Kumano" type = heavy_cruiser model = 2 experience = 20 }
navaldivision = { dormant = yes id = { type = 10300 id = 1109 } name = "IJN Maya" type = heavy_cruiser model = 2 experience = 20 }
navaldivision = { dormant = yes id = { type = 10300 id = 1110 } name = "IJN Myoko" type = heavy_cruiser model = 2 experience = 20 }
navaldivision = { dormant = yes id = { type = 10300 id = 1111 } name = "IJN Suzuya" type = heavy_cruiser model = 2 experience = 20 }
navaldivision = { dormant = yes id = { type = 10300 id = 1112 } name = "IJN Takao" type = heavy_cruiser model = 2 experience = 20 }
navaldivision = { dormant = yes id = { type = 10300 id = 1113 } name = "IJN Tone" type = heavy_cruiser model = 2 experience = 20 }
navaldivision = { dormant = yes id = { type = 10300 id = 1114 } name = "IJN Jintsu" type = light_cruiser model = 1 experience = 20 }
navaldivision = { dormant = yes id = { type = 10300 id = 1115 } name = "IJN Nagara" type = light_cruiser model = 1 experience = 20 }
navaldivision = { dormant = yes id = { type = 10300 id = 1116 } name = "IJN Yuru" type = light_cruiser model = 1 experience = 20 }
navaldivision = { dormant = yes id = { type = 10300 id = 1117 } name = "Dai 2 kuchikusentai" type = destroyer model = 2 experience = 20 }
navaldivision = { dormant = yes id = { type = 10300 id = 1118 } name = "Dai 3 kuchikusentai" type = destroyer model = 1 experience = 20 }
navaldivision = { dormant = yes id = { type = 10300 id = 1119 } name = "Dai 4 kuchikusentai" type = destroyer model = 1 experience = 20 }
navaldivision = { dormant = yes id = { type = 10300 id = 1120 } name = "Dai 1 Sensuisentai" type = submarine model = 2 experience = 20 }
navaldivision = { dormant = yes id = { type = 10300 id = 1121 } name = "Dai 2 Sensuisentai" type = submarine model = 2 experience = 20 }
navaldivision = { dormant = yes id = { type = 10300 id = 1122 } name = "Dai 3 Sensuisentai" type = submarine model = 1 experience = 20 }
navaldivision = { dormant = yes id = { type = 10300 id = 1123 } name = "Dai 3 Yuso Sentai" type = transport }

#IJA Reinforcements
landdivision = { dormant = yes id = { type = 10300 id = 100 } name = "Dai 2 Hoheishidan" type = infantry model = 3 }
navaldivision = { dormant = yes id = { type = 10300 id = 1201 } name = "Dai 4 Yuso Sentai" type = transport }
landdivision = { dormant = yes id = { type = 10300 id = 101 } name = "Dai 38 Hoheishidan" type = infantry model = 3 }
navaldivision = { dormant = yes id = { type = 10300 id = 1202 } name = "Dai 5 Yuso Sentai" type = transport }
landdivision = { dormant = yes id = { type = 10300 id = 102 } name = "Dai 28 Hoheishidan" type = infantry model = 3 }
navaldivision = { dormant = yes id = { type = 10300 id = 1203 } name = "Dai 6 Yuso Sentai" type = transport }
landdivision = { dormant = yes id = { type = 10300 id = 103 } name = "Dai 35 Hohei Ryodan" type = infantry model = 3 strength = 50 max_strength = 50 }

#Battle of Santa Cruz Reinforcements

navaldivision = { dormant = yes id = { type = 10300 id = 1124 } name = "IJN Junyo" type = carrier model = 1 extra = cag brigade_model = 3 }
navaldivision = { dormant = yes id = { type = 10300 id = 1125 } name = "IJN Zuiho" type = escort_carrier model = 1 }
navaldivision = { dormant = yes id = { type = 10300 id = 1126 } name = "IJN Haruna" type = battlecruiser model = 1 experience = 20 }
navaldivision = { dormant = yes id = { type = 10300 id = 1127 } name = "IJN Kongo" type = battlecruiser model = 1 experience = 20 }
navaldivision = { dormant = yes id = { type = 10300 id = 1128 } name = "Dai 5 kuchikusentai" type = destroyer model = 2 experience = 20 }

	}
