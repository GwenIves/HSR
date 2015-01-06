
# Fortifications

province = {	id = 473 landfort = 1 } # Breslau defences


#Breslau
province = {
	id = 473
	anti_air = 1
	air_base = {
		size = 10
		current_size = 10
	}
}

#Berlin
province = {
	id = 300
	anti_air = 2
	air_base = {
		size = 10
		current_size = 10
	}
}

#Vienna
province = {
	id = 463
	anti_air = 1
	air_base = {
		size = 10
		current_size = 10
	}
}

#Cottbus
province = {
	id = 309
	anti_air = 1
	air_base = {
		size = 10
		current_size = 10
	}
}

country = {
    tag = GER

ai = "fallgrun_GER.ai"

    policy = {
	date = { year = 0 month = january day = 0 }
	democratic = 1
	political_left = 1
	free_market = 5
	freedom = 2
	professional_army = 5
	defense_lobby = 10
	interventionism = 10
    }

	headofstate = { type = 9 id = 1 }
	headofgovernment = { type = 9 id = 2 }
	foreignminister = { type = 9 id = 55 }
	armamentminister = { type = 9 id = 77 }
	ministerofsecurity = { type = 9 id = 108 }
	ministerofintelligence = { type = 9 id = 6 }
	chiefofstaff = { type = 9 id = 155 }
	chiefofarmy = { type = 9 id = 174 }
	chiefofnavy = { type = 9 id = 9 }
	chiefofair = { type = 9 id = 10 }


	capital = 300

	manpower = 850


	# Enough resources to keep TP running

	energy 		= 0
	metal 		= 0
	oil 		= 25000
	rare_materials	 = 0
	supplies	 = 45000

	free = 	{
		ic = 60
	}


	extra_tc = 60	#Not balanced!

    ownedprovinces =
	{
		308 300 473 482 309 311 310 83 312 375 376 #Germany Proper
		462 465 461 460 463 464 # Austria
	}
    controlledprovinces =
	{
		308 300 473 482 309 311 310 83 312 375 376 #Germany Proper
		462 465 461 460 463 464 # Austria
	}
    nationalprovinces =
	{
		308 300 473 482 309 311 310 83 312 375 376 #Germany Proper
		462 465 461 460 463 464 # Austria
	}
techapps = {

1010 # Great War Infantry
1020 # Early Infantry
1030 # Basic Infantry
1070 # Basic Para
1110 # Basic Mountain
1190 # Great War Cavalry Division
1200 # Early Cavalry Division
1210 # Basic Cavalry Division
1220 # Semi-motorised Cavalry
1230 # Basic Motorized
1310 # Rear Area Supply Dumps
1340 # Rear Area Vehicle Repair Shop
2010 # Great War Tank
2020 # Tankette
2030 # Early Tank
2040 # Basic Light Tank
2070 # Basic Medium tank
2150 # Basic Armoured Car
2290 # Great War Light Field Artillery
2300 # Great War Medium Field Artillery
2310 # Great War Heavy Field Artillery
2320 # Early Field Artillery
2330 # Basic Artillery
2400 # Early AT
2410 # Basic AT
2450 # Great War Static AA
2460 # Early Static AA
2510 # Basic AA
3010 # Great War Destroyer
3020 # Early Destroyer
3030 # Basic Destroyer
3070 # Great War Light Cruiser
3080 # Early Light Cruiser
3090 # Basic Light Cruiser
3100 # Improved Light Cruiser
3130 # Great War Heavy Cruiser
3140 # Early Heavy Cruiser
3150 # Basic Heavy Cruiser
3160 # Imp. Heavy Cruiser
3190 # Great War Battlecruiser
3200 # Early Battlecruiser
3210 # Basic Battlecruiser
3220 # Imp. Battlecruiser
3250 # Great War Battleship
3260 # Early Battleship
3270 # Basic Battleship
3280 # Imp. Battleship
3320 # Great War Air Carrier
3330 # Early Air Carrier
3340 # Basic Air Carrier
3400 # Dive Boat
3410 # Short Range Submarine
3420 # Medium Range Submarine
3430 # Long Range Submarine
4010 # Interwar Fighter
4020 # Early Fighter
4030 # Basic Interceptor
4040 # Basic Fighter
4050 # Basic Escort
4120 # Interwar Bomber
4130 # Early Bomber
4140 # Basic Tactical Bomber
4170 # Basic CAS
4190 # Basic Naval Bomber
4250 # Basic air transport
5010 # Modern Agriculture
5020 # Mechanized Agriculture
5030 # Agrichemistry
5050 # Basic Machine Tools
5060 # Improved Machine Tools
5070 # Adv. Machine Tools
5080 # Basic Construction Engineering
5090 # Improved Construction Engineering
5100 # Adv. Construction Engineering  (Todt)
5190 # Basic Oil Refining
5200 # Improved Oil Refining
5210 # Advanced Oil Refining
5310 # Census Tabulating Machine
5320 # Basic Computing Machine
5350 # Basic Encryption Devices
5360 # Basic Decryption Devices
5410 # Basic Dec. Radar
5470 # Faculty of Atomic Research
5480 # Atomic Research Laboratories
5490 # Nuclear Research Facility
5550 # Rocket Test and Research Facility
6210 # Mobility Focus
6220 # Spearhead
6230 # Delay
6240 # Elastic Defense
6250 # Schwerpunkt
6260 # Blitzkrieg
8010 # Decisive Battle Doctrine
8020 # Naval Firepower Doctrine
8040 # Fleet Auxiliary Submarine Doctrine
8080 # Sealane Interdiction
8090 # Indirect Approach
8150 # Raider Patrol
8160 # Trade Interdiction
8210 # Commerce Raider
9010 # Air Superiority Doctrine
9020 # Flying Circus Doctrine
9030 # Force Substitution Doctrine
9040 # Battlefield Destruction
9050 # Dive Bombing
9060 # Direct Ground Support
9070 # Bomber Veteran
9080 # Night Strikes
9090 # Operational Destruction
9100 # Battlefield Interdiction
9110 # Strafing
9120 # Logistical Strike
9140 # Strategic Destruction Doctrine
9190 # First Strike
9200 # Dispersed Fighting
9270 # Combat Unit Destruction
9290 # Low Echelon CAS
14000 # GW Medicine
14010 # Early Medicine


}




##########################
# German Fall Grun 1938 OOB
##########################

# 1st Army Group

landunit = {
	id = { type = 30010 id = 1 }
	name = "14. Armee" #14th army
	location = 464

division = {
	id = { type = 30010 id = 2 }
	name = "2. Panzer-Division"
	strength = 100
	type = light_armor
	model = 2
	}

division = {
	id = { type = 30010 id = 3 }
	name = "29. Infanterie-Division (mot)"
	strength = 100
	type = motorized
	extra =engineer
	}

division = {
	id = { type = 30010 id = 4 }
	name = "2. Leichte-Division"
	strength = 100
	type = motorized
	model = 0
	extra = armored_car
	}

division = {
	id = { type = 30010 id = 5 }
	name = "4. Leichte-Division"
	strength = 100
	type = motorized
	model = 0
	extra = armored_car
	}
}

landunit = {
	id = { type = 30010 id = 6 }
	name = "14. Armee Reserve"
	location = 463 # Vienna

division = {
	id = { type = 30010 id = 7 }
	name = "44. Infanterie-Division"
	strength = 100
	type = infantry
	model = 1
	extra = engineer
}

division = {
	id = { type = 30010 id = 8 }
	name = "2. Gebirgsjäger-Division"
	strength = 100
	type = bergsjaeger
}

division = {
	id = { type = 30010 id = 9 }
	name = "3. Gebirgsjäger-Division"
	strength = 100
	type = bergsjaeger
	}
}

landunit = {
	id = { type = 30010 id = 10 }
	name = "12. Armee"
	location = 465 # Linz

division = {
	id = { type = 30010 id = 11 }
	name = "7. Infanterie-Division"
	strength = 100
	type = infantry
	model = 1
	extra = artillery
	brigade_model = 3 # Light modern art.
	}

division = {
	id = { type = 30010 id = 12 }
	name = "27. Infanterie-Division"
	strength = 100
	type = infantry
	model = 1
	}

division = {
	id = { type = 30010 id = 13 }
	name = "45. Infanterie-Division"
	strength = 100
	type = infantry
	model = 1
	extra = engineer
	}

division = {
	id = { type = 30010 id = 14 }
	name = "69. Landwehr-Division"
	strength = 100
	type = infantry
	model = 0
	}

division = {
	id = { type = 30010 id = 15 }
	name = "1. Gebirgsjäger-Division"
	strength = 100
	type = bergsjaeger
	}
}


landunit = {
	id = { type = 30010 id = 16 }
	name = "10. Armee Süd" #10th Army (south)
	location = 375 # Regensburg

division = {
	id = { type = 30010 id = 17 }
	name = "1. Panzer-Division"
	strength = 100
	type = light_armor
	model = 2
	}

division = {
	id = { type = 30010 id = 18 }
	name = "1. Leichte-Division"
	strength = 100
	type = motorized
	model = 0
	extra = armored_car
	}

division = {
	id = { type = 30010 id = 19 }
	name = "2. Infanterie-Division (mot)"
	strength = 100
	type = motorized
	extra = engineer
	}

division = {
	id = { type = 30010 id = 20 }
	name = "9. Infanterie-Division (mot)"
	strength = 100
	type = motorized
	}

division = {
	id = { type = 30010 id = 21 }
	name = "13. Infanterie-Division (mot)"
	strength = 100
	type = motorized
	}
}


landunit = {
	id = { type = 30010 id = 22 }
	name = "10. Armee Nord"	# 10th Army (North)
	location = 312 # Nurnberg

division = {
	id = { type = 30010 id = 23 }
	name = "5. Infanterie-Division"
	strength = 100
	type = infantry
	model = 1
	extra = artillery
	brigade_model = 3 # Light modern art.
	}

division = {
	id = { type = 30010 id = 24 }
	name = "10. Infanterie-Division"
	strength = 100
	type = infantry
	model = 1
	}

division = {
	id = { type = 30010 id = 25 }
	name = "15. Infanterie-Division"
	strength = 100
	type = infantry
	model = 1
}

division = {
	id = { type = 30010 id = 26 }
	name = "17. Infanterie-Division"
	strength = 100
	type = infantry
	model = 1
	}

division = {
	id = { type = 30010 id = 27 }
	name = "25. Infanterie-Division"
	strength = 100
	type = infantry
	model = 1
	}

division = {
	id = { type = 30010 id = 28 }
	name = "31. Infanterie-Division"
	strength = 100
	type = infantry
	model = 1
	}

	division = {
	id = { type = 30010 id = 29 }
	name = "35. Infanterie-Division"
	strength = 100
	type = infantry
	model = 1
	extra = engineer
	}
}


landunit = {
	id = { type = 30010 id = 30 }
	name = "8. Armee"
	location = 311 # Dresden

division = {
	id = { type = 30010 id = 31 }
	name = "20. Infanterie-Division (mot)"
	strength = 100
	type = motorized
	}

division = {
	id = { type = 30010 id = 32 }
	name = "14. Infanterie-Division"
	strength = 100
	type = infantry
	model = 1
	extra = artillery
	brigade_model = 3 # Light modern art.
	}

division = {
	id = { type = 30010 id = 33 }
	name = "16. Infanterie-Division"
	strength = 100
	type = infantry
	model = 1
	}

division = {
	id = { type = 30010 id = 34 }
	name = "19. Infanterie-Division"
	strength = 100
	type = infantry
	model = 1
	}

division = {
	id = { type = 30010 id = 35 }
	name = "23. Infanterie-Division"
	strength = 100
	type = infantry
	model = 1
	}
}


landunit = {
	id = { type = 30010 id = 36 }
	name = "IV. Armeekorps"
	location = 309 # Cottbus

division = {
	id = { type = 30010 id = 37 }
	name = "4. Infanterie-Division"
	strength = 100
	type = infantry
	model = 1
	extra = artillery
	brigade_model = 3 # Light modern art.
	}

division = {
	id = { type = 30010 id = 38 }
	name = "24. Infanterie-Division"
	strength = 100
	type = infantry
	model = 1
	}
}

landunit = {
	id = { type = 30010 id = 39 }
	name = "2. Armee"
	location = 473 # Breslau

division = {
	id = { type = 30010 id = 40 }
	name = "3. Panzer-Division"
	strength = 100
	type = light_armor
	model = 2
	}

division = {
	id = { type = 30010 id = 41 }
	name = "3. Leichte-Division"
	strength = 100
	type = motorized
	model = 0
	extra = armored_car
	}

division = {
	id = { type = 30010 id = 42 }
	name = "3. Infanterie-Division"
	strength = 100
	type = infantry
	model = 1
	extra = engineer
	}

division = {
	id = { type = 30010 id = 43 }
	name = "8. Infanterie-Division"
	strength = 100
	type = infantry
	model = 1
	}

division = {
	id = { type = 30010 id = 44 }
	name = "12. Infanterie-Division"
	strength = 100
	type = infantry
	model = 1
	}

division = {
	id = { type = 30010 id = 45 }
	name = "18. Infanterie-Division"
	strength = 100
	type = infantry
	model = 1
	extra = artillery
	brigade_model = 3 # Light modern art.
	}

division = {
	id = { type = 30010 id = 46 }
	name = "28. Infanterie-Division"
	strength = 100
	type = infantry
	model = 1
	}

division = {
	id = { type = 30010 id = 47 }
	name = "30. Infanterie-Division"
	strength = 100
	type = infantry
	model = 1
	}

division = {
	id = { type = 30010 id = 48 }
	name = "32. Infanterie-Division"
	strength = 100
	type = infantry
	model = 1
	}

division = {
	id = { type = 30010 id = 49 }
	name = "17. Infanterie-Division"
	strength = 100
	type = infantry
	model = 1
	}
}


landunit = {
	id = { type = 30010 id = 50 }
	name = "Kampfgruppe Schlesien"
	location = 482 # Oppeln

division = {
	id = { type = 30010 id = 51 }
	name = "16. Landwehr-Division"
	strength = 100
	type = infantry
	model = 0
	}

division = {
	id = { type = 30010 id = 52 }
	name = "30. Landwehr-Division"
	strength = 100
	type = infantry
	model = 0
	}

division = {
	id = { type = 30010 id = 53 }
	name = "72. Landwehr-Division"
	strength = 100
	type = infantry
	model = 0
	}
}


###########################################
# #
# Luftwaffe orbat 1938 #
# #
###########################################


airunit = {
location = 473 # Breslau
id = { type = 30010 id = 550 }
name = "Fliegerdivision 1"

division = { id = { type = 30010 id = 551 } name = "Kampfgeschwader 153" strength = 100 type = tactical_bomber model = 1 }
division = { id = { type = 30010 id = 552 } name = "Kampfgeschwader 155" strength = 100 type = tactical_bomber model = 2 }
division = { id = { type = 30010 id = 553 } name = "Kampfgeschwader 157" strength = 100 type = tactical_bomber model = 2 }
division = { id = { type = 30010 id = 554 } name = "Kampfgeschwader 252" strength = 100 type = tactical_bomber model = 1 }
division = { id = { type = 30010 id = 555 } name = "Jagdgeschwader 132" strength = 100 type = interceptor model = 1 }
}


airunit = {
location = 309 # Cottbus
id = { type = 30010 id = 556 }
name = "Fliegerdivision 2"

division = { id = { type = 30010 id = 557 } name = "Kampfgeschwader 158" strength = 100 type = tactical_bomber model = 2 }
division = { id = { type = 30010 id = 558 } name = "Kampfgeschwader 257" strength = 100 type = tactical_bomber model = 2 }
division = { id = { type = 30010 id = 559 } name = "Kampfgeschwader 255" strength = 100 type = tactical_bomber model = 1 }
division = { id = { type = 30010 id = 560 } name = "Jagdgeschwader 134" strength = 100 type = interceptor model = 1 }
}


airunit = {
location = 463 # Vienna
id = { type = 30010 id = 561 }
name = "Fliegerdivision 5"

division = { id = { type = 30010 id = 562 } name = "Sturzkampfgeschwader 165" strength = 100 type = cas model = 0 }
division = { id = { type = 30010 id = 563 } name = "Sturzkampfgeschwader 168" strength = 100 type = cas model = 0 }
division = { id = { type = 30010 id = 564 } name = "Kampfgeschwader 254" strength = 100 type = tactical_bomber model = 1 }
division = { id = { type = 30010 id = 565 } name = "Jagdgeschwader 334" strength = 100 type = interceptor model = 1 }
}

############################################

}
