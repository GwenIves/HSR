#Anti Aircraft Batteries
province = { id = 309   anti_air = 2 } #Cottbus
province = { id = 470   anti_air = 2 } #Plzen
province = { id = 469   anti_air = 3 } #Praha
province = { id = 475   anti_air = 2 } #Slavkov/Brno

#Bratislava
province = {
	id = 476
	anti_air = 1
	air_base = {
		size = 10
		current_size = 7
	}
}

province = {
	id = 302
	anti_air = 2
	air_base = {
		size = 4
		current_size = 4
		}

	naval_base = {
		size = 5
		current_size = 5
		}
	}


# Fortifications

province = {	id = 510 landfort = 3 } # East Prussia forts
province = {	id = 302 landfort = 2 } # Stettin defences
province = {	id = 308 landfort = 1 } # Kustrin defences
province = {	id = 482 landfort = 1 } # Oppeln defences


#Breslau
province = {
	id = 473
	anti_air = 1
	air_base = {
		size = 10
		current_size = 10
	}
}
#Koenigsberg
province = {
	id = 510
	anti_air = 1
	air_base = {
		size = 10
		current_size = 10
	}
	supplypool = 200
    oilpool = 200
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


country = {
    tag = GER

	ai = "fallweiss_GER.ai"

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

	diplomacy = {

			}

	capital = 300

	manpower = 850

	extra_tc = 130	#Not balanced!

	transports = 40
	escorts = 20

	# Resource Reserves		#No production in this scenario!
	oil 	=	40000
	supplies =	65000

	free = 	{
		ic = 75
	}

    ownedprovinces =
	{
		302 308 301 300 309 473 482 #Germany Proper
		471 472 466 467 470 469 468 474 # Bohemia-Moravia
		206 510 304 #East Prussia
		475 478 477 490 476 #Slovakia
	}
    controlledprovinces =
	{
		302 308 301 300 309 473 482 #Germany Proper
		471 472 466 467 470 469 468 474 # Bohemia-Moravia
		206 510 304 #East Prussia
		475 478 477 490 476 #Slovakia
	}
    nationalprovinces =
	{
		302 308 301 300 309 473 482 #Germany Proper
		471 472 466 467 470 469 468 474 # Bohemia-Moravia
		206 510 304 #East Prussia
		475 478 477 490 476 #Slovakia
	}
	techapps = {
# Germany 1939 techs
#######################

2410

4010 4020 4030 # Basic Interceptor (bf-109E Emil)

4040 4050 # Basic MR (bf-109E Jabo)/Basic Escort (bf-110)

4120 4130 4140 4150 # Basic medium bomber

4170 # Basic CAS (Ju-87)

4190 4200 # Imp Naval Bomber

4220

4250 # Basic transport (Ju-52)

2150 # Basic Armoured Car

2010 2020 2040 2050 # Improved light tank

2030 2070 # Basic Medium (Pz.IV)

2290 2300 2310 2320 2330 # Basic WWII artillery (105mm)

2400 # Basic AT

2450 2460 # Early Static AA

2510 # Basic AA

1010 1020 1030 # Early infantry

1190 1200 1210 1220 # Semi-moto Cavalry

1230 # Basic Motorized

1110 1120 1070 1080 # Basic Mountain/Basic para

1310 1340 # Supply/repair - basics only

5010 5020 5030 # Agriculture (up to fertilizers)
5050 5060 5070 # Advanced Machine Tools
5080 5090 5100 # Construction (up to the forts)
5110 # Supplies
5190 5200 5210 5220 # Basic Synthetic Oil Plant
5310 5320 # Basic CT machine
5350 5360 # Encryption/decryption
5410 # Basic Dec. Radar
5470 5480 5490 # Nukes faculty
5550 ##rocket

9010 9020 9030 9040 9050 9060 9070 9080 9090 9100 9110 9120  9140 9270 9290

9190 9200 # Mostly bomber doctrines (air)

6210 6220 6230 6240 6250 6260 # up to Blitzkrieg (land)


8010 8020 8030 8040 8050 8080 8090 8150 8160 8170 8210 8290

3010 3020 3030 #(Z17)
3070 3080 3090 3100 #(Nurnberg)
3130 3140 3150 3160 #(Hipper)
3190 3200 3210 3220 #(Scharnhorst)
3250 3260 3270 3280 #(Bismarck)
3320 3330 3340 #(Graf Zeppelin)
3400 3410 3420 3430 #(Type IX)
#hospital
14000 14010

	}
############################
#  ARMY GROUP NORTH 	   #
############################

landunit = {
id = { type = 30010 id = 1 }
name = "Heeresgruppe Nord"
leader = 279 #v.Bock
location = 510

division = {
id = { type = 30010 id = 2 }
name = "HG Nord HQ"
type = hq
strength = 50
   max_strength = 50
extra = artillery
}
division = {
id = { type = 30010 id = 3 }
name = "73. Infanterie-Division"
strength = 100
type = infantry
model = 2
}

division = {
id = { type = 30010 id = 4 }
name = "206. Infanterie-Division"
strength = 100
type = infantry
model = 2
}

division = {
id = { type = 30010 id = 5 }
name = "208. Infanterie-Division"
strength = 100
type = infantry
model = 2
}
division = {
id = { type = 30010 id = 6 }
name = "218. Infanterie-Division"
strength = 100
type = infantry
model = 2
}

division = {
id = { type = 30010 id = 7 }
name = "10. Leichte Infanterie-Division"
strength = 100
type = infantry
model = 2
}
division = {
id = { type = 30010 id = 8 }
name = "10. Panzer-Division"
strength = 100
type = armor
model = 1
}
}
###########################
landunit = {
id = { type = 30010 id = 9 }
name = "4. Armee"
leader = 311 # v.Kluge
location = 302

division = {
id = { type = 30010 id = 10 }
name = "4. Armee HQ"
strength = 50
   max_strength = 50
type = hq
extra = artillery
}
division = {
id = { type = 30010 id = 11 }
name = "207. Infanterie-Division"
strength = 100
type = infantry
model = 2
}
}

landunit = {
	id = { type = 30010 id = 12 }
	name = "II. Armeekorps"
	leader = 258 # GenOb. A. Strauss
	location = 302

	division = {
		id = { type = 30010 id = 14 }
		name = "3. Infanterie-Division"
		strength = 100
		type = infantry
		model = 2
	}

	division = {
		id = { type = 30010 id = 15 }
		name = "32. Infanterie-Division"
		strength = 100
		type = infantry
		model = 2
	}
}

landunit = {
	id = { type = 30010 id = 16 }
	name = "III. Armeekorps"
	leader = 101 # GenOb. C.Haase
	location = 308

	division = {
		id = { type = 30010 id = 18 }
		name = "50. Infanterie-Division"
		strength = 100
		type = infantry
		model = 2
		extra = anti_tank
	}
	division = {
		id = { type = 30010 id = 19 }
		name = "239. Infanterie-Division"
		strength = 100
		type = infantry
		model = 2
		extra = anti_tank
	}
}

landunit = {
id = { type = 30010 id = 20 }
name = "XIX. Armeekorps"
leader = 94 # GenOb. H.Guderian
location = 308

division = {
id = { type = 30010 id = 22 }
name = "2. Infanterie-Division (mot)"
strength = 100
type = motorized
}

division = {
id = { type = 30010 id = 23 }
name = "20. Infanterie-Division (mot)"
strength = 100
type = motorized
}

division = {
id = { type = 30010 id = 24 }
name = "3. Panzer-Division"
strength = 100
type = armor
model = 2
}
}
###########################
landunit = {
id = { type = 30010 id = 25 }
name = "3. Armee"
leader = 314 # Küchler
location = 510

division = {
id = { type = 30010 id = 26 }
name = "3. Armee HQ"
type = hq
strength = 50
   max_strength = 50
}
division = {
id = { type = 30010 id = 27 }
name = "217. Infanterie-Division"
strength = 100
type = infantry
model = 2
extra = engineer
}
}

landunit = {
id = { type = 30010 id = 28 }
name = "I. Armeekorps"
leader = 217 # Gen. W.Petzel
location = 304

division = {
id = { type = 30010 id = 30 }
name = "1. Infanterie-Division"
strength = 100
type = infantry
model = 2
extra = artillery
}

division = {
id = { type = 30010 id = 31 }
name = "61. Infanterie-Division"
strength = 100
type = infantry
model = 2
}

division = {
id = { type = 30010 id = 32 }
name = "Panzer-Division Kempf"
strength = 60
type = light_armor
model = 2
}
}

landunit = {
id = { type = 30010 id = 33 }
name = "XXI. Armeekorps"
leader = 294 # GenOb. N.von Falkenhorst
location = 510

division = {
id = { type = 30010 id = 35 }
name = "21. Infanterie-Division"
strength = 100
type = infantry
model = 2
extra = artillery
}

division = {
id = { type = 30010 id = 36 }
name = "228. Infanterie-Division"
strength = 100
type = infantry
model = 2
}
}

############################
#  ARMY GROUP SOUTH 	   #
############################

landunit = {
id = { type = 30010 id = 37 }
name = "Heeresgruppe Süd"
leader = 335 # von Rundstedt
location = 472

division = {
id = { type = 30010 id = 38 }
name = "Heeresgruppe Süd HQ"
type = hq
strength = 50
   max_strength = 50
extra = artillery
}

division = {
id = { type = 30010 id = 39 }
name = "27. Infanterie-Division"
strength = 100
type = infantry
model = 2
extra = artillery
}

division = {
id = { type = 30010 id = 40 }
name = "62. Infanterie-Division"
strength = 100
type = infantry
model = 2
}

division = {
id = { type = 30010 id = 41 }
name = "68. Infanterie-Division"
strength = 100
type = infantry
model = 2
}
division = {
id = { type = 30010 id = 42 }
name = "213. Infanterie-Division"
strength = 100
type = infantry
model = 3
extra = artillery
}

division = {
id = { type = 30010 id = 43 }
name = "221. Infanterie-Division"
strength = 100
type = infantry
model = 2
}
}

landunit = {
id = { type = 30010 id = 44 }
name = "HG Süd Reserve"
leader = 324 # E.von Manstein
location = 472

division = {
id = { type = 30010 id = 45 }
name = "HG Süd Reserve HQ"
strength = 50
   max_strength = 50
type = hq
extra = artillery
}
division = {
id = { type = 30010 id = 46 }
name = "27. Infanterie-Division"
strength = 100
type = infantry
model = 2
}
division = {
id = { type = 30010 id = 47 }
name = "62. Infanterie-Division"
strength = 100
type = infantry
model = 2
}
division = {
id = { type = 30010 id = 48 }
name = "68. Infanterie-Division"
strength = 100
type = infantry
model = 2
}
division = {
id = { type = 30010 id = 49 }
name = "213. Infanterie-Division"
strength = 100
type = infantry
model = 2
}
division = {
id = { type = 30010 id = 50 }
name = "221. Infanterie-Division"
strength = 100
type = infantry
model = 2
}
}
############################
landunit = {
id = { type = 30010 id = 51 }
name = "8. Armee"
leader = 20 # Blaskowitz
location = 482

division = {
id = { type = 30010 id = 52 }
name = "8. Armee HQ"
type = hq
strength = 50
   max_strength = 50
extra = artillery
}
}

landunit = {
id = { type = 30010 id = 53 }
name = "XIII. Armeekorps"
leader = 351 # Gfeld. M.von Weichs
location = 482

division = {
id = { type = 30010 id = 55 }
name = "SS Leibstandarte Adolf Hitler"
type = motorized
strength = 60
}
division = {
id = { type = 30010 id = 56 }
name = "10. Infanterie-Division"
type = infantry
strength = 100
model = 2
}
division = {
id = { type = 30010 id = 57 }
name = "17. Infanterie-Division"
type = infantry
strength = 100
model = 2
}
}

landunit = {
id = { type = 30010 id = 58 }
name = "X. Armeekorps"
leader = 267 # Gen. W. Ulex
location = 482


division = {
id = { type = 30010 id = 60 }
name = "24. Infanterie-Division"
type = infantry
strength = 100
model = 2
}
division = {
id = { type = 30010 id = 61 }
name = "30. Infanterie-Division"
type = infantry
strength = 100
model = 2
}
}

landunit = {
id = { type = 30010 id = 62 }
name = "XVIII. Armeekorps"
leader = 275 # Gen. E.von Beyer
location = 478

division = {
id = { type = 30010 id = 64 }
name = "3. Gebirgs-Division"
type = bergsjaeger
strength = 100
}
division = {
id = { type = 30010 id = 65 }
name = "4. Leichte Infanterie-Division"
type = infantry
strength = 100
model = 2
}
division = {
id = { type = 30010 id = 66 }
name = "2. Panzer-Division"
type = armor
strength = 100
model = 2
}
}
############################
landunit = {
id = { type = 30010 id = 67 }
name = "14. Armee"
leader = 189 # List
location = 478

division = {
id = { type = 30010 id = 68 }
name = "14. Armee HQ"
strength = 50
   max_strength = 50
type = hq
extra = artillery
}
}

landunit = {
id = { type = 30010 id = 69 }
name = "VIII. Armeekorps"
leader = 33 # Gfeld. E.Busch
location = 474

division = {
id = { type = 30010 id = 71 }
name = "8. Infanterie-Division"
strength = 100
type = infantry
model = 2
extra = artillery
}
division = {
id = { type = 30010 id = 72 }
name = "28. Infanterie-Division"
strength = 100
type = infantry
model = 2
}
division = {
id = { type = 30010 id = 73 }
name = "5. Panzer-Division"
strength = 100
type = armor
model = 2
}
}

landunit = {
id = { type = 30010 id = 74 }
name = "XVII. Armeekorps"
leader = 158 # Gen. W.Kienitz
location = 474

division = {
id = { type = 30010 id = 76 }
name = "7. Infanterie-Division"
strength = 100
type = infantry
model = 2
}
division = {
id = { type = 30010 id = 77 }
name = "44. Infanterie-Division"
strength = 100
type = infantry
model = 2
}
division = {
id = { type = 30010 id = 78 }
name = "45. Infanterie-Division"
strength = 100
type = infantry
model = 2
}
}

landunit = {
id = { type = 30010 id = 79 }
name = "XXII. Armeekorps"
leader = 310 # Gfeld. E.von Kleist
location = 478

division = {
id = { type = 30010 id = 81 }
name = "1. Gebirgs-Division"
strength = 100
type = bergsjaeger
}
division = {
id = { type = 30010 id = 82 }
name = "2. Gebirgs-Division"
strength = 100
type = bergsjaeger
}
}
############################
landunit = {
id = { type = 30010 id = 83 }
name = "10. Armee"
leader = 334 # von Reichenau
location = 473

division = {
id = { type = 30010 id = 84 }
name = "10. Armee HQ"
strength = 50
   max_strength = 50
type = hq
extra = artillery
}
}

landunit = {
id = { type = 30010 id = 85 }
name = "XI. Armeekorps"
leader = 316 # Gen. E.Leeb
location = 473

division = {
id = { type = 30010 id = 87 }
name = "18. Infanterie-Division"
strength = 100
type = infantry
model = 2
extra = artillery
}
division = {
id = { type = 30010 id = 88 }
name = "19. Infanterie-Division"
strength = 100
type = infantry
model = 2
}
}

landunit = {
id = { type = 30010 id = 89 }
name = "IV. Armeekorps"
leader = 729 # Hansen (IRL:Gen. V.von Schwedler)
location = 473

division = {
id = { type = 30010 id = 91 }
name = "4. Infanterie-Division"
strength = 100
type = infantry
model = 2
}
division = {
id = { type = 30010 id = 92 }
name = "46. Infanterie-Division"
strength = 100
type = infantry
model = 2
}
}

landunit = {
id = { type = 30010 id = 93 }
name = "XIV. Armeekorps"
leader = 352 # Gen. G.von Wietersheim
location = 473

division = {
id = { type = 30010 id = 95 }
name = "13. Infanterie-Division (mot.)"
strength = 100
type = motorized
}
division = {
id = { type = 30010 id = 96 }
name = "29. Infanterie-Division (mot.)"
strength = 100
type = motorized
}
division = {
id = { type = 30010 id = 97 }
name = "1. Leichte Infanterie-Division"
strength = 100
type = infantry
model = 2
}
}

landunit = {
id = { type = 30010 id = 98 }
name = "XV. Armeekorps"
leader = 143 # GenOb. H. Hoth
location = 473

division = {
id = { type = 30010 id = 100 }
name = "2. Leichte Infanterie-Division"
strength = 100
type = infantry
model = 2
}
division = {
id = { type = 30010 id = 101 }
name = "3. Leichte Infanterie-Division"
strength = 100
type = infantry
model = 2
}
}

landunit = {
id = { type = 30010 id = 102 }
name = "XVI. Armeekorps"
leader = 140 # GenOb. E. Höpner
location = 473

division = {
id = { type = 30010 id = 104 }
name = "14. Infanterie-Division"
strength = 100
type = infantry
model = 2
}
division = {
id = { type = 30010 id = 105 }
name = "31. Infanterie-Division"
strength = 100
type = infantry
model = 2
}
division = {
id = { type = 30010 id = 106 }
name = "1. Panzer-Division"
type = armor
strength = 100
model = 1
}
division = {
id = { type = 30010 id = 107 }
name = "4. Panzer-Division"
type = armor
strength = 100
model = 1
}
}


# Kriegsmarine 1939 OOB
#Eastern Area#

navalunit = {
name = "Baltische Flotte"
id = { type = 30010 id = 108 }
leader = 384 # Carls
location = 2478 base = 302 #Pommeranian Bay
division = { id = { type = 30010 id = 109 } name = "KMS Schleswig-Holstein" type = battleship model = 0 } #Pre-WWI Battleship
division = { id = { type = 30010 id = 110 } name = "KMS Schlesien" type = battleship model = 0 } #Pre-WWI Battleship
division = { id = { type = 30010 id = 111 } name = "1. Zerstörergeschwader" type = destroyer model = 0 }
}

###########################################
# #
# Luftwaffe orbat 1939 (PB) #
# #
###########################################


airunit = {
location = 301
id = { type = 30010 id = 112 }
name = "Luftflotte 2"
leader = 436 # Felmy

division = { id = { type = 30010 id = 113 } name = "JG 26 'Schlageter'" strength = 100 type = interceptor model = 2 }
division = { id = { type = 30010 id = 114 } name = "KG 27 'Boelcke'" strength = 100 type = tactical_bomber model = 2 }
division = { id = { type = 30010 id = 115 } name = "ZG 26 'Horst Wessel'" strength = 100 type = multi_role model = 0 }
}

airunit = {
location = 309
id = { type = 30010 id = 116 }
name = "Luftflotte 4"
leader = 563 # Löhr

division = { id = { type = 30010 id = 117 } name = "JG 77 'Herz As'" strength = 100 type = interceptor model = 2 }
division = { id = { type = 30010 id = 118 } name = "Kampfgeschwader 76" strength = 100 type = tactical_bomber model = 2 }
division = { id = { type = 30010 id = 119 } name = "Kampfgeschwader 77" strength = 100 type = tactical_bomber model = 2 }
division = { id = { type = 30010 id = 120 } name = "Sturzkampfgeschwader 76" strength = 100 type = cas model = 0 }
division = { id = { type = 30010 id = 121 } name = "Sturzkampfgeschwader 77" strength = 100 type = cas model = 0 }
}

airunit = {
location = 308
id = { type = 30010 id = 122 }
name = "Luftflotte 3"
leader = 470 # Sperrle

division = { id = { type = 30010 id = 123 } name = "JG 51 'Mölders'" strength = 100 type = interceptor model = 2 }
division = { id = { type = 30010 id = 124 } name = "Jagdgeschwader 52" strength = 100 type = interceptor model = 2 }
division = { id = { type = 30010 id = 125 } name = "JG 53 'Pik As'" strength = 100 type = interceptor model = 2 }
division = { id = { type = 30010 id = 126 } name = "KG 51 'Edelweiß'" strength = 90 type = tactical_bomber model = 2 }
division = { id = { type = 30010 id = 127 } name = "KG 53 'Legion Condor'" strength = 70 type = tactical_bomber  model = 2 }
division = { id = { type = 30010 id = 128 } name = "KG 54 'Totenkopf'" strength = 75 type = tactical_bomber model = 2 }
division = { id = { type = 30010 id = 129 } name = "KG 55 'Greif'" strength = 80 type = tactical_bomber model = 2 }
division = { id = { type = 30010 id = 130 } name = "Sturzkampfgeschwader 51" strength = 35 type = cas model = 0 }
}

airunit = {
location = 510
id = { type = 30010 id = 131 }
name = "Luftflotte 1"
leader = 451 # Kesselring

division = { id = { type = 30010 id = 132 } name = "JG 2 'Richthofen'" strength = 100 type = interceptor model = 2 }
division = { id = { type = 30010 id = 133 } name = "JG 3 'Udet'" strength = 100 type = interceptor model = 2 }
division = { id = { type = 30010 id = 134 } name = "KG 1 'Hindenburg'" strength = 100 type = tactical_bomber model = 2 }
division = { id = { type = 30010 id = 135 } name = "KG 2 'Holzhammer'" strength = 100 type = tactical_bomber model = 2 }
division = { id = { type = 30010 id = 136 } name = "KG 3 'Blitz'" strength = 100 type = tactical_bomber model = 2 }
division = { id = { type = 30010 id = 137 } name = "KG 4 'General Wever'" strength = 95 type = tactical_bomber  model = 2 }
division = { id = { type = 30010 id = 138 } name = "Sturzkampfgeschwader 1" strength = 60 type = cas model = 0 }
division = { id = { type = 30010 id = 139 } name = "Stukageschwader 2 'Immelmann'" strength = 70 type = cas model = 0 }
division = { id = { type = 30010 id = 140 } name = "JG 1 'Oesau'" strength = 100 type = multi_role model = 0 }
}

############################################
landunit = {
		control = SLO
		id = { type = 30010 id = 141 }
		name = "Slovak Armeegruppe Bernolak"
		leader = 70002 #FM. Catlos
		location = 490


		division = {
			id = { type = 30010 id = 143 }
			name = "1. Janosik divize"		#Colonel A. Pulanich
			strength = 100
			type = infantry
			model = 3
		}
		division = {
			id = { type = 30010 id = 144 }
			name = "2. Skultety divize"		#General A. Cunderlik
			strength = 100
			type = infantry
			model = 3
		}
		division = {
			id = { type = 30010 id = 145 } #Liutenant General A. Malar
			name = "3. Razus divize"
			strength = 100
			type = infantry
			model = 3
		}
		division = {
			id = { type = 30010 id = 146 }
			name = "4. Kalinciak divize"	#Liutenant General J. Imro
			strength = 100
			type = infantry
			model = 3
		}
	}
}
