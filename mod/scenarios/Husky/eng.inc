province = {
	id = 31
	anti_air = 1
	naval_base = {
		size = 5
		current_size = 5
	}
	air_base = {
		size = 10
		current_size = 10
	}
}




country = {
    tag = ENG
	capital = 31
	ai = "husky_eng.ai"


	policy = {
	date = { year = 0 month = january day = 0 }
	democratic = 10
	political_left = 2
	freedom = 10
	free_market = 8
	professional_army = 5
	defense_lobby = 5
	interventionism = 6
	}

		headofstate = { type = 9 id = 1033 }
		headofgovernment = { type = 9 id = 1038 }
		foreignminister = { type = 9 id = 1003 }
		armamentminister = { type = 9 id = 1063 }
		ministerofsecurity = { type = 9 id = 1085 }
		ministerofintelligence = { type = 9 id = 1103 }
		chiefofstaff = { type = 9 id = 1120 }
		chiefofarmy = { type = 9 id = 1130 }
		chiefofnavy = { type = 9 id = 1138 }
		chiefofair = { type = 9 id = 1147 }

	manpower = 485

	transports = 50
	escorts = 30

	# Resource Reserves
	energy	=	2000
	metal	=	2000
	rare_materials =	2000
	oil 	=	4000
	supplies = 1000
	consumer = 0.10
	supply = 0.65
	production = 0.00
	reinforcement = 0.25

	free = {
		oil = 25
		supplies = 50
		ic = 50
		}

	extra_tc = 85




steal_leader = 1224 #Montgomery
steal_leader = 1188 #Leese
steal_leader = 1099 #Dempsey
steal_leader = 1006 #Alexander
steal_leader = 1315 #Wilson
steal_leader = 1216 #McCreery
steal_leader = 58010 #Freyberg (NZ)
steal_leader = 1493 #Anders (POL-ENG file)
steal_leader = 52010 #Burns (CAN)
steal_leader = 1055 #Bucknall
steal_leader = 1294 #Templer
steal_leader = 1509 #Bohusz (POL-ENG file)
steal_leader = 1053 #Browning
steal_leader = 58019 #Kippenberger (NZ)
steal_leader = 1299 #Tuker
steal_leader = 1179 #Keightly
steal_leader = 1271 #Russell
steal_leader = 1117 #Evelegh
steal_leader = 52073 #Vokes (CAN)
steal_leader = 52026 #Hoffmeister (CAN)
steal_leader = 450023 #Poole (SAF)
steal_leader = 1007 #Allfrey
steal_leader = 1300 #Urquhart
steal_leader = 1384 #Ramsey
steal_leader = 1399 #Vian
steal_leader = 1482 #Tedder
steal_leader = 1513 #Coningham
steal_leader = 1496 #Duch (POL-ENG file)
steal_leader = 1508 #Sulik (POL- ENG file)
steal_leader = 1381 #Pound
steal_leader = 1426 #Cannon






	ownedprovinces =      {
		31
	}

	controlledprovinces = {
		31
	}


	nationalprovinces =   {
		31
	}


	techapps               = { 2220  2230  2100  2150  4010  4020  4030  4040  4070  4050  4120  4130  4140  4220  4230  4190  4250  2010  2020  2040
			     2050  2030  2070  2170  2180  2290  2300  2310  2320  2330  2340  2400  2410  2450  2460  2470  2510  2520  1010  1020
			     1030  1190  1200  1210  1220  1110  1120  1130  1070  1230  1150  1160  1310  1340  5010  5020  5030  5050  5060  5070
			     5080  5090  5100  5110  5120  5130  5140  5160  5180  5190  5200  5310  5320  5330  5350  5360  5370  5380  5410  5420
			     5430  5440  5470  5480  5490  5500  5550  9010  9020  9030  9040  9050  9060  9070  9080  9090  9100  9110  9120  9130
			     9140  9190  9210  9220  9230  9240  9250  9350  6010  6030  6110  6120  8010  8020  8030  8040  8050  8070  8100  8120
			     8130  8190  8200  8310  3010  3020  3030  3070  3080  3090  3100  3130  3140  3150  3190  3200  3210  3250  3260  3270
			     3280  3320  3330  3340  3350  3360  3400  3410  3420  14000 14010 14020
			   }



landunit = { location = 31 id = { type = 11000 id = 1 } name = "XIII. Corps" leader = 1216 #McCreery

division = { id = { type = 11000 id = 2 } name = "5th Motorized Infantry Div." strength = 100 type = motorized model = 1 extra = armored_car brigade_model = 1 }

division = { id = { type = 11000 id = 3 } name = "50th 'Northumbrian' Motorized Div." strength = 100 type = motorized model = 1 extra = sp_artillery brigade_model = 1 experience = 50 }
}

landunit = { location = 31 id = { type = 11000 id = 109 } name = "XIII Corps Command" leader = 1099 #Dempsey
division = { id = { type = 11000 id = 110 } name = "XIII Corps HQ" strength = 100 type = hq model = 2 }
division = { id = { type = 11000 id = 67 } name = "78th Motorized Div." strength = 100 type = motorized model = 1 }
}

landunit = { location = 31 id = { type = 11000 id = 103 } name = "Airborne Corps" leader = 1053 #Browning
division = { id = { type = 11000 id = 4 } name = "1st Airborne Division" strength = 100 type = paratrooper model = 1 }
}


landunit = { location = 31 id = { type = 11000 id = 106 } name = "15th Army Group" leader = 1006 #Alexander
division = { id = { type = 11000 id = 107 } name = "15th Army Group HQ" strength = 100 type = hq model = 2 }
}


#FORCE B
#30th Corps | Lt-Gen. Sir Oliver Leese
landunit = { location = 31 id = { type = 11000 id = 5 } name = "XXX. Corps" leader = 1188 #Leese

division = { id = { type = 11000 id = 6 } name = "51st 'Highland' Motorized Div." strength = 100 type = motorized model = 1
extra = armored_car brigade_model = 1 experience = 50 }
division = { id = { type = 11000 id = 66 } name = "231. Infantry Brigade" type = motorized model = 1 strength = 45 max_strength = 45 }
division = { id = { type = 11000 id = 111 } name = "Royal Marines" strength = 100 type = marine model = 2 }
division = { id = { type = 11000 id = 112 } name = "XXX Corps HQ" strength = 100 type = hq model = 2 }
}


landunit = { location = 31 id = { type = 11000 id = 7 } name = "Canadian 1st Corps" leader = 52010 #Burns

division = { id = { type = 11000 id = 8 } name = "1st Canadian Infantry Div." strength = 100 type = motorized model = 1
extra = tank_destroyer brigade_model = 1}
}


#####RAF Desert Air Force
airunit = { location = 31 base = 31 name = "1/RAF Desert Air Force" id = { type = 11000 id = 9 } leader = 1513 #Coningham

division = { id = { type = 11000 id = 12 } name = "239 Fighter Wing" strength = 100 type = multi_role model = 2 experience = 50 }
division = { id = { type = 11000 id = 13 } name = "244 Fighter Wing" strength = 100 type = multi_role model = 2 experience = 50 }
division = { id = { type = 11000 id = 14 } name = "324 Fighter Wing" strength = 100 type = multi_role model = 2 experience = 50 }
division = { id = { type = 11000 id = 15 } name = "285 Fighter Wing" strength = 100 type = multi_role model = 2 experience = 50 }
}


airunit = { location = 31 base = 31 name = "2/RAF Desert Air Force" id = { type = 11000 id = 10 }
division = { id = { type = 11000 id = 11 } name = "322 Fighter Wing" strength = 100 type = cas model = 2 experience = 50 }
division = { id = { type = 11000 id = 16 } name = "7 SA Figher Wing" strength = 100 type = cas model = 2 experience = 50 }
}


airunit = { location = 31 base = 31 name = "2/RAF Desert Air Force" id = { type = 11000 id = 17 } leader = 1482 #Tedder

division = { id = { type = 11000 id = 18 } name = "3 South African Bomber Wing" strength = 100 type =tactical_bomber model = 2 experience = 50 }
division = { id = { type = 11000 id = 19 } name = "323 Bomber Wing" strength = 100 type =tactical_bomber model = 2 experience = 50 }
division = { id = { type = 11000 id = 20 } name = "326 Bomber Wing" strength = 100 type =tactical_bomber model = 1 experience = 50 }
}

airunit = { location = 31 base = 31 name = "Air Transport Group" id = { type = 11000 id = 101 }
division = { id = { type = 11000 id = 102 } name = "Air Transport Wing" strength = 100 type = transport_plane model = 1 }
}


navalunit = { location = 2442 base = 31 name = "Mediterrenean Battle Fleet" id = { type = 11000 id = 21 } leader = 1384 #Ramsey

division = { id = { type = 11000 id = 22 } name = "HMS Nelson" strength = 100 type = battleship model = 2 experience = 50 }
division = { id = { type = 11000 id = 23 } name = "HMS Rodney" strength = 100 type = battleship model = 2 experience = 50 }
division = { id = { type = 11000 id = 24 } name = "HMS Warspite" strength = 100 type = battleship model = 1 experience = 50 }
division = { id = { type = 11000 id = 25 } name = "HMS Valiant" strength = 100 type = battleship model = 2 experience = 50 }
division = { id = { type = 11000 id = 26 } name = "HMS King George V" strength = 100 type = battleship model = 3 experience = 50 }
division = { id = { type = 11000 id = 27 } name = "HMS Howe" strength = 100 type = battleship model = 3 experience = 50 }
division = { id = { type = 11000 id = 28 } name = "HMS Albercrombie" strength = 100 type = light_cruiser model = 1 experience = 50 }
division = { id = { type = 11000 id = 29 } name = "HMS Hawke" strength = 100 type = light_cruiser model = 1 experience = 50 }
division = { id = { type = 11000 id = 30 } name = "HMS Glennon" strength = 100 type = light_cruiser model = 1 experience = 50 }
division = { id = { type = 11000 id = 31 } name = "HMS Ulster" strength = 100 type = light_cruiser model = 1 experience = 50 }
division = { id = { type = 11000 id = 32 } name = "HMS New Foundland" strength = 100 type = light_cruiser model = 1 experience = 50 }
division = { id = { type = 11000 id = 33 } name = "HMS Birmingham" strength = 100 type = light_cruiser model = 1 experience = 50 }
division = { id = { type = 11000 id = 34 } name = "HMS Eskimo" strength = 100 type = light_cruiser model = 1 experience = 50 }
division = { id = { type = 11000 id = 35 } name = "Polish Squadron" strength = 100 type = destroyer model = 0 experience = 50 }
division = { id = { type = 11000 id = 36 } name = "Med. Squadron No. 1-6" strength = 100 type = destroyer model = 1 experience = 50 }
division = { id = { type = 11000 id = 37 } name = "Med. Squadron No. 7-12" strength = 100 type = destroyer model = 1 experience = 50 }
}


navalunit = { location = 2442 base = 38 name = "Mediterrenean Carrier Fleet" id = { type = 11000 id = 61 } leader = 1399 #Vian
division = { id = { type = 11000 id = 39 } name = "HMS Abdiel" strength = 100 type = light_cruiser model = 1 experience = 50 }
division = { id = { type = 11000 id = 40 } name = "HMS Indomitable" strength = 100 type = carrier model = 2 extra = cag brigade_model = 2 experience = 50 }
division = { id = { type = 11000 id = 41 } name = "HMS Formidable" strength = 100 type = carrier model = 2 extra = cag brigade_model = 2 experience = 50 }
division = { id = { type = 11000 id = 42 } name = "HMS Cunningham" strength = 100 type = light_cruiser model = 1 experience = 50 }
division = { id = { type = 11000 id = 43 } name = "HMS Cleopatra" strength = 100 type = light_cruiser model = 1 experience = 50 }
division = { id = { type = 11000 id = 44 } name = "Greek Squadron" strength = 100 type = destroyer model = 0 experience = 50 }
division = { id = { type = 11000 id = 45 } name = "Med. Squadron No. 13-18" strength = 100 type = destroyer model = 1 experience = 50 }
}

navalunit = { location = 2442 base = 46 name = "Mediterrenean Transport Fleet" id = { type = 11000 id = 62 }
division = { id = { type = 11000 id = 47 } name = "Med. Squadron No. 19-24" strength = 100 type = destroyer model = 1 experience = 50 }
division = { id = { type = 11000 id = 48 } name = "1. Med. Transport Flottilla" strength = 100 type = transport }
division = { id = { type = 11000 id = 49 } name = "2. Med. Transport Flottilla" strength = 100 type = transport }
division = { id = { type = 11000 id = 50 } name = "3. Med. Transport Flottilla" strength = 100 type = transport }
division = { id = { type = 11000 id = 51 } name = "4. Med. Transport Flottilla" strength = 100 type = transport }
division = { id = { type = 11000 id = 52 } name = "5. Med. Transport Flottilla" strength = 100 type = transport }
division = { id = { type = 11000 id = 53 } name = "6. Med. Transport Flottilla" strength = 100 type = transport }
division = { id = { type = 11000 id = 54 } name = "7. Med. Transport Flottilla" strength = 100 type = transport }
}




####naval sep reinforcements
navaldivision = { experience = 50 dormant = yes id = { type = 11000 id = 55 } name = "HMS Illustrious" strength = 100 type = carrier model = 2 extra = cag brigade_model = 2 }
navaldivision = { experience = 50 dormant = yes id = { type = 11000 id = 56 } name = "HMS Battler" strength = 100 type = carrier model = 0 extra = cag brigade_model = 2 }
navaldivision = { experience = 50 dormant = yes id = { type = 11000 id = 57 } name = "HMS Hunter" strength = 100 type = carrier model = 0 extra = cag brigade_model = 2 }
navaldivision = { experience = 50 dormant = yes id = { type = 11000 id = 58 } name = "HMS Stalker" strength = 100 type = carrier model = 0 extra = cag brigade_model = 2 }
navaldivision = { experience = 50 dormant = yes id = { type = 11000 id = 59 } name = "HMS Unicorn" strength = 100 type = carrier model = 0 extra = cag brigade_model = 2 }
navaldivision = { experience = 50 dormant = yes id = { type = 11000 id = 60 } name = "HMS Uganda" strength = 100 type = light_cruiser model = 1 }
navaldivision = { experience = 50 dormant = yes id = { type = 11000 id = 63 } name = "HMS Spartan" strength = 100 type = light_cruiser model = 1 }



landunit = { location = 31 id = { type = 11000 id = 64 } name = "8th Army" leader = 1224 #Montgomery
division = { id = { type = 11000 id = 65 } name = "8th Army HQ" strength = 100 type = hq model = 1 }
}


###sep V. Corps
landdivision = {dormant = yes id = { type = 11000 id = 68 } name = "8th Indian Infantry Div." strength = 100 type = infantry model = 3 }
landdivision = {dormant = yes id = { type = 11000 id = 69} name = "2nd New Zealand Div." strength = 100 type = mechanized model = 1 extra = sp_artillery brigade_model = 1 }

landdivision = {dormant = yes id = { type = 11000 id = 70 } name = "7th Armored Div." strength = 100 type = armor model = 3 extra = sp_artillery brigade_model = 1 }


###avalanche X. corps
landdivision = { dormant = yes id = { type = 11000 id = 71 } name = "46th Motorized Div." strength = 100 type = motorized model = 1 }
landdivision = { dormant = yes id = { type = 11000 id = 72 } name = "56th Motorized Div." strength = 100 type = motorized model = 1 }

#####II Polish Corps(Anders)-------end of feb 44
landdivision = {dormant = yes id = { type = 11000 id = 73} name = "5th Polish Infantry Div." strength = 100 type = motorized model = 1 }
landdivision = { dormant = yes id = { type = 11000 id = 74 } name = "3rd Polish Infantry Div." strength = 100 type = motorized model = 1 }
landdivision = { dormant = yes id = { type = 11000 id = 77 } name = "2nd Polish Tank Bde" strength = 40 max_strength = 40 type = armor model = 2 }


####4. indian Div----Jan 44
landdivision = {dormant = yes id = { type = 11000 id = 75} name = "4th Indian Infantry Div." strength = 100 type = infantry model = 3 }

####Greek Exiles-----Aug 44
landdivision = { dormant = yes id = { type = 11000 id = 76 } name = "3rd Greek Bde" strength = 35 max_strength = 35 type = bergsjaeger model = 2 }


####Units that return to theatre
landdivision = { dormant = yes id = { type = 11000 id = 95 } name = "51st 'Highland' Motorized Div." strength = 100 type = motorized model = 1
extra = armored_car brigade_model = 1 }
landdivision = { dormant = yes id = { type = 11000 id = 83 } name = "50th 'Northumbrian' Motorized Div." strength = 100 type = motorized model = 2 extra = sp_artillery brigade_model = 1 }

#####Extra units added in
landdivision = { dormant = yes id = { type = 11000 id = 78 } name = "10th Indian Division" strength = 100 type = infantry model = 1 }
landdivision = { dormant = yes id = { type = 11000 id = 79 } name = "1st Canadian Armor Bde" strength = 40 max_strength = 40 type = light_armor model = 3 }
landdivision = { dormant = yes id = { type = 11000 id = 80 } name = "1st Infantry Division" strength = 100 type = motorized model = 2 }
landdivision = { dormant = yes id = { type = 11000 id = 81 } name = "24th Guards Bde" strength = 35 max_strength = 35 type = infantry model = 2 }
landdivision = { dormant = yes id = { type = 11000 id = 82 } name = "52nd Infantry Division" strength = 100 type = bergsjaeger model = 2 }
landdivision = { dormant = yes id = { type = 11000 id = 84 } name = "5th Canadian Amror Division" strength = 100 type = armor model = 3 }
landdivision = { dormant = yes id = { type = 11000 id = 85 } name = "4th Infantry Division" strength = 100 type = motorized model = 2 }
landdivision = { dormant = yes id = { type = 11000 id = 86 } name = "1st Guards Bde" strength = 35 max_strength = 35 type = infantry model = 2 }
landdivision = { dormant = yes id = { type = 11000 id = 87 } name = "18th Motorized Bde" strength = 40 max_strength = 40 type = motorized model = 2 extra = armored_car brigade_model = 1 }
landdivision = { dormant = yes id = { type = 11000 id = 88 } name = "6th Armored Division" strength = 100 type = armor model = 3 extra = sp_artillery brigade_model = 2 }
landdivision = { dormant = yes id = { type = 11000 id = 89 } name = "2nd Armored Bde" strength = 40 max_strength = 40 type = armor model = 3 }
landdivision = { dormant = yes id = { type = 11000 id = 90 } name = "25th Armored Bde" strength = 40 max_strength = 40 type = armor model = 3 }
landdivision = { dormant = yes id = { type = 11000 id = 91 } name = "7th Armored Bde" strength = 40 max_strength = 40 type = armor model = 3 }
landdivision = { dormant = yes id = { type = 11000 id = 92 } name = "9th Armored Bde" strength = 40 max_strength = 40 type = armor model = 3 }
landdivision = { dormant = yes id = { type = 11000 id = 93 } name = "21st Armored Bde" strength = 40 max_strength = 40 type = armor model = 3 }
landdivision = { dormant = yes id = { type = 11000 id = 94 } name = "43rd Indian Bde" strength = 35 max_strength = 35 type = motorized model = 1 }
landdivision = { dormant = yes id = { type = 11000 id = 108 } name = "4th Armored Bde" strength = 40 max_strength = 40 type = armor model = 2 }
landdivision = { dormant = yes id = { type = 11000 id = 96 } name = "201st Guards Bde" strength = 35 max_strength = 35 type = infantry model = 2 }
landdivision = { dormant = yes id = { type = 11000 id = 97 } name = "23rd Armored Bde" strength = 40 max_strength = 40 type = armor model = 2 }
landdivision = { dormant = yes id = { type = 11000 id = 98 } name = "Jewish Bde" strength = 30 max_strength = 30 type = infantry model = 1 }
landdivision = { dormant = yes id = { type = 11000 id = 99 } name = "25th Royal Engineers" strength = 40 max_strength = 40 type = light_armor model = 3 }
landdivision = { dormant = yes id = { type = 11000 id = 100 } name = "6th South African Armored Division" strength = 100 type = armor model = 2 }

####Additional HQ units
landdivision = { dormant = yes id = { type = 11000 id = 113 } name = "V Corps HQ" strength = 50 type = hq model = 2 }
landdivision = { dormant = yes id = { type = 11000 id = 114 } name = "X Corps HQ" strength = 50 type = hq model = 2 }
}



