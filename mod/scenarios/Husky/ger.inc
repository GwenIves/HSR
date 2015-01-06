province = { id =	376	air_base = { size =	3	current_size = 	3	} }

country = {
    tag = GER
	ai = "husky_ger.ai"

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
		headofgovernment = { type = 9 id = 42 }
		foreignminister = { type = 9 id = 55 }
		armamentminister = { type = 9 id = 86 }
		ministerofsecurity = { type = 9 id = 108 }
		ministerofintelligence = { type = 9 id = 6 }
		chiefofstaff = { type = 9 id = 156 }
		chiefofarmy = { type = 9 id = 177 }
		chiefofnavy = { type = 9 id = 192 }
		chiefofair = { type = 9 id = 10 }

	capital = 376

	manpower = 850

	# Resource Reserves
	oil		= 15000
	metal		= 15000
	energy		= 50000
	rare_materials		= 40000
	supplies 	= 40000
	money 		= 20000
	consumer = 0.15
	supply = 0.60
	production = 0.00
	reinforcement = 0.25

	free = {
		oil = 5
		supplies = 75
		ic = 25
		}




	extra_TC = 150


steal_leader = 348 #von Veitinghof
steal_leader = 322 #von Mackensen
steal_leader = 157 #Kesselring
steal_leader = 250 #von Sengur und Etterlin
steal_leader = 135 #Herr
steal_leader = 229 #Rodt
steal_leader = 599 #Fries
steal_leader = 227 #Ringel
steal_leader = 7 #Baade
steal_leader = 221 #Ramcke
steal_leader = 485 #Wolff
steal_leader = 128 #Heidrich
steal_leader = 552 #Feurstein
steal_leader = 144 #Hube
steal_leader = 91 #Greiner
steal_leader = 601 #Grasser
steal_leader = 40 #Conrath
steal_leader = 240 #Schlemm
steal_leader = 639 #Pfeiffer
steal_leader = 499 #von Richthoffen
steal_leader = 643 #Fiebig
steal_leader = 477 #von Pohl
steal_leader = 431 #Bulowius
steal_leader = 627 #von Falkenstein
steal_leader = 438 #Geisler
steal_leader = 454 #lorzer
steal_leader = 356 #von Zangen
steal_leader = 260 #Student
steal_leader = 230 #Rommel

    ownedprovinces =
	{373 377 376}

    controlledprovinces =
	{ 373 377 376 }

    nationalprovinces =
	{ 373 377 376 }


	techapps               = { 1010  1020  1030  1040  1070  1080  1090  1110  1120  1130  1190  1200  1210  1220  1230  1240  1310  1340  14000 14010
			     14020 2010  2020  2030  2040  2050  2070  2080  2150  2170  2220  2230  2290  2300  2310  2320  2330  2340  2370  2400
			     2410  2450  2460  2470  2510  2520  2530  3010  3020  3030  3040  3070  3080  3090  3100  3130  3140  3150  3160  3190
			     3200  3210  3220  3250  3260  3270  3280  3320  3330  3340  3400  3410  3420  3430  4010  4020  4030  4040  4050  4060
			     4070  4120  4130  4140  4150  4170  4190  4200  4220  4250  5010  5020  5030  5050  5060  5070  5080  5090  5100  5110
			     5120  5130  5140  5160  5180  5190  5200  5210  5220  5310  5320  5330  5350  5360  5370  5410  5420  5470  5480  5490
			     5500  5550  6210  6220  6230  6240  6250  6260  6270  6290  8010  8020  8030  8040  8050  8080  8090  8150  8160  8170
			     8210  8280  8290  9010  9020  9030  9040  9050  9060  9070  9080  9090  9100  9110  9120  9130  9140  9190  9200  9210
			     9220  9270  9290  9350
			   }

#GERMAN OOB


#6th italian army | Commandant: Guzzoni
#XIVe Panzerkorps | Hube

landunit = { id = { type = 10000 id = 1 } name = "XIV. Panzerkorps" location = 526 leader = 40 #Conrath
division = { id = { type = 10000 id = 7 } name = "Fallschirm Pz-Div. 'Hermann Göring'" type = armor strength = 100 model = 4 experience = 65 }
division = { id = { type = 10000 id = 2 } name = "15. Panzergrenadier Division" type = mechanized strength = 65 model = 1 experience = 50 }
}

landunit = { id = { type = 10000 id = 59 } name = "XIV. Panzerkorps" location = 525 leader = 322 #von Mackensen
division = { id = { type = 10000 id = 5 } name = "3. Panzergrenadier Division" type = mechanized strength = 100 model = 1 experience = 50 }
}

landunit = { id = { type = 10000 id = 6 } name = "XIV. Panzerkorps" location = 524 leader = 144 #Hube
division = { locked = yes id = { type = 10000 id = 60 } name = "XIV. Panzerkorps HQ" type = hq strength = 100 model = 2 }
division = { locked = yes id = { type = 10000 id = 4 } name = "29. Panzergrenadier Division" type = mechanized strength = 100 model = 1 }
division = { locked = yes id = { type = 10000 id = 3 } name = "16. Panzer Division" type = armor strength = 100 model = 3 experience = 50 }
}

landunit = { id = { type = 10000 id = 8 } name = "1. Fallschirmjäger Division" location = 515 leader = 260 #Student
division = { locked = yes id = { type = 10000 id = 9 } name = "1. Fallschirmjäger Division" type = paratrooper strength = 100 model = 1 experience = 75 }
}

landunit = { id = { type = 10000 id = 31 } name = "10. Armee" location = 522 leader = 348 #Veitinghoff
division = { locked = yes id = { type = 10000 id = 10 } name = "10. Armee HQ" type = hq strength = 100 model = 1 }
}

landunit = { id = { type = 10000 id = 11 } name = "LI. Gebrigskorps" location = 514 leader = 552 #Feuerstein
division = { locked = yes id = { type = 10000 id = 12 } name = "305. Infanterie Division" type = garrison strength = 100 model = 2 }
division = { locked = yes id = { type = 10000 id = 13 } name = "334. Infanterie Division" type = garrison strength = 100 model = 2 }
}


landunit = { id = { type = 10000 id = 14 } name = "LXXXVII Armeekorps" location = 513  leader = 356 #Von Zangen
division = { locked = yes id = { type = 10000 id = 61 } name = "LXXXVII Armeekorps HQ" type = hq strength = 100 model = 2 }
division = { locked = yes id = { type = 10000 id = 15 } name = "356. Infanterie Division" type = garrison strength = 100 model = 2 }
division = { locked = yes id = { type = 10000 id = 16 } name = "278. Infanterie Division" type = garrison strength = 100 model = 2 }
division = { locked = yes id = { type = 10000 id = 17 } name = "188. Infanterie Division" type = garrison strength = 100 model = 2 }
}

landunit = { id = { type = 10000 id = 57 } name = "90. Panzergrenadier Division" location = 534 leader = 229 #Rodt
division = { locked = yes id = { type = 10000 id = 18 } name = "90. Panzergrenadier Division" type = mechanized strength = 100 model = 2 experience = 25 }  ###from sardinia
}


###LXXVI Panzerkorps---reinf August 1943 (Herr)

landdivision = { dormant = yes id = { type = 10000 id = 58 } name = "LVXXVI Corps HQ" type = hq strength = 100 model = 2 }
landdivision = { dormant = yes id = { type = 10000 id = 19 } name = "2. Fallschirmjäger Division" type = paratrooper strength = 100 model = 1 }
landdivision = { dormant = yes id = { type = 10000 id = 20 } name = "65. Infanterie Division" type = infantry strength = 100 model = 3 }
landdivision = { dormant = yes id = { type = 10000 id = 21 } name = "334. Infanterie Division" type = infantry strength = 100 model = 3 }
landdivision = { dormant = yes id = { type = 10000 id = 22 } name = "26. Panzer Division" type = armor strength = 100 model = 4 }


###14. armee activated through allied control
landdivision = { id = { type = 10000 id = 23 } name = "305. Infanterie Division" type = infantry strength = 100 model = 3 }
landdivision = { id = { type = 10000 id = 24 } name = "334. Infanterie Division" type = infantry strength = 100 model = 3 }
landdivision = { id = { type = 10000 id = 25 } name = "356. Infanterie Division" type = infantry strength = 100 model = 3 }
landdivision = { id = { type = 10000 id = 26 } name = "278. Infanterie Division" type = infantry strength = 100 model = 3 }
landdivision = { id = { type = 10000 id = 27 } name = "188. Infanterie Division" type = infantry strength = 100 model = 3 }
landdivision = { id = { type = 10000 id = 32 } name = "14. Armee HQ" type = hq strength = 100 model = 1 }


####I SS-Panzerkorps(Hausser)---activates late 43 withdraws Jan 1944
landdivision = { dormant = yes id = { type = 10000 id = 28 } name = "1. SS-Panzerdiv 'LAH'" type = armor strength = 100 model = 4 extra = heavy_armor brigade_model = 1 experience = 85 }
landdivision = { dormant = yes id = { type = 10000 id = 29 } name = "2. SS-Panzerdiv 'Das Reich'" type = armor strength = 100 model = 4 extra = heavy_armor brigade_model = 1 experience = 85 }
landdivision = { dormant = yes id = { type = 10000 id = 30 } name = "3. SS-Panzerdiv 'Totenkopf'" type = armor strength = 100 model = 4 extra = sp_artillery brigade_model = 3 experience = 85 }
landdivision = { dormant = yes id = { type = 10000 id = 33 } name = "167. Infanterie Division" type = infantry strength = 40 model = 3 experience = 85 }


airunit = { location = 523 base = 523 id = { type = 10000 id = 34 } name = "II Fliegerkorps"
division = { id = { type = 10000 id = 35 } name = "Schlachtgeschwader 2" strength = 55 type = cas model = 2 }
division = { id = { type = 10000 id = 36 } name = "Jagdgeschwader 2" strength = 55 type = multi_role model = 2 }
}


airunit = { location = 525 base = 525 id = { type = 10000 id = 37 } name = "II Fliegerkorps" leader = 479 #von Richthoffen
division = { id = { type = 10000 id = 38 } name = "Jagdgeschwader 3" strength = 85 type = multi_role model = 2 experience = 50 }
division = { id = { type = 10000 id = 39 } name = "Jagdgeschwader 27" strength = 85 type = multi_role model = 2 experience = 50 }
}

airunit = { location = 521 base = 521 id = { type = 10000 id = 40 } name = "II Fliegerkorps"
division = { id = { type = 10000 id = 41 } name = "Kampfgeschwader 1" strength = 100 type = tactical_bomber model = 2 }
division = { id = { type = 10000 id = 42 } name = "Kampfgeschwader 76" strength = 100 type = tactical_bomber model = 2 }
division = { id = { type = 10000 id = 43 } name = "Kampfgeschwader 77" strength = 70 type = strategic_bomber model = 2 }
}


airunit = { location = 515 base = 515 id = { type = 10000 id = 44 } name = "II Fliegerkorps"
division = { id = { type = 10000 id = 45 } name = "Kampfgeschwader 26" strength = 100 type = tactical_bomber model = 2 }
}


airunit = { location = 523 base = 523 id = { type = 10000 id = 46 } name = "II Fliegerkorps"
division = { id = { type = 10000 id = 47 } name = "Kampfgeschwader 77" strength = 100 type = tactical_bomber model = 2 }
division = { id = { type = 10000 id = 48 } name = "Jagdgeschwader 53" strength = 85 type = interceptor model = 2 }
}

airunit = { location = 525 base = 525 id = { type = 10000 id = 49 } name = "II Fliegerkorps" leader = 454 #Lorzer
division = { id = { type = 10000 id = 50 } name = "Kampfgeschwader 30" strength = 65 type = tactical_bomber model = 2 }
division = { id = { type = 10000 id = 53 } name = "Kampfgeschwader 53" strength = 65 type = tactical_bomber model = 2 }
}

airunit = { location = 525 base = 525 id = { type = 10000 id = 51 } name = "II Fliegerkorps" leader = 438 #Geisler
division = { id = { type = 10000 id = 52 } name = "Jagdgeschwader 77" strength = 85 type = interceptor model = 2 }
}


airdivision = { dormant = yes id = { type = 10000 id = 54 } name = "Jagdgeschwader 26" strength = 65 type = multi_role model = 2 }


###KG 54-Ju88----withdraws dec 43----------#534
###KG 76-Ju88----withdraws dec 43----------#521


###############
#Additional Units
###############
landunit = { id = { type = 10000 id = 62 } name = "Heeresgruppe B" location = 370 leader = 230 #Rommel
division = { locked = yes id = { type = 10000 id = 55 } name = "Heeresgruppe B HQ" type = hq strength = 100 model = 2 }
}

landunit = { id = { type = 10000 id = 63 } name = "Heeresgruppe C" location = 518 leader = 157 #Kesselring
division = { locked = yes id = { type = 10000 id = 56 } name = "Heeresgruppe C HQ" type = hq strength = 100 model = 2 }
}


}

