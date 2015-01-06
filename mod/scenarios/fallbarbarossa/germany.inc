

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

# East Prussia -AG North
province = {
	id = 510
	anti_air = 2
	air_base = {
		size = 10
		current_size = 10
		}

	naval_base = {
		size = 10
		current_size = 10
		}
	}

# Central Poland - AG Center

province = {
	id = 487
	anti_air = 2
	air_base = {
		size = 10
		current_size = 10
	}
}

# Southern Poland - AG South
province = {
	id = 479
	anti_air = 2
	air_base = {
		size = 10
		current_size = 10
	}
}


# Stettin
province = {
	id = 302
	anti_air = 2
	naval_base = {
		size = 10
		current_size = 10
	}
}


country = {
    tag = GER

ai = "fallbarbarossa_GER_I.ai"

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
	headofgovernment = { type = 9 id = 41 }
	foreignminister = { type = 9 id = 55 }
	armamentminister = { type = 9 id = 80 }
	ministerofsecurity = { type = 9 id = 108 }
	ministerofintelligence = { type = 9 id = 6 }
	chiefofstaff = { type = 9 id = 156 }
	chiefofarmy = { type = 9 id = 176 }
	chiefofnavy = { type = 9 id = 9 }
	chiefofair = { type = 9 id = 10 }

	# Leaders lent to Finland
#	sleep_leader = 49 #Dietl
#	sleep_leader = 694 #Feige

	diplomacy = {
		relation = { tag = SLO access = yes }
		relation = { tag = ROM access = yes }
		relation = { tag = HUN access = yes }
		relation = { tag = FIN access = yes }
	}


	capital = 300

	extra_tc = 400

	free = 		{
		oil 	=	130
		supplies =	450
		ic = 300
	}

	manpower = 850


	# Enough resources to keep TP running


	oil = 5000
	supplies = 9000



    ownedprovinces =
	{
	206 510 304 303 302 509 305 306 307 308 300 487 485 484 483 488 480 481 482 473 309 486 489 479 474
 301
	}
    controlledprovinces =
	{
	206 510 304 303 302 509 305 306 307 308 300 487 485 484 483 488 480 481 482 473 309 486 489 479 474
 301
	}
    nationalprovinces =
	{
	206 510 304 303 302 509 305 306 307 308 300 487 485 484 483 488 480 481 482 473 309 486 489 479 474
 301
	}

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






# HEER


# Heeresgruppe Süd


	landunit = { location = 479  id = { type = 10500 id = 500 } name = "Hk HG Süd"

	division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 501 }
		name = "99. lei. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 4 # Medium modern art.
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 502 }
		name = "2. Fallschirmjäger-Rgt"
		strength = 35
		type = paratrooper
		model = 1
		}
		}

	landunit = { location = 479  id = { type = 10500 id = 503 } name = "H.Kdo.XXXIV. (HG Süd Reserven)"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 504 }
		name = "125. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 505 }
		name = "4. Gebirgs-Division"
		strength = 100
		type = bergsjaeger
		model = 2
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 506 }
		name = "113. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 507 }
		name = "132. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}
		}

	landunit = { location = 479  id = { type = 10500 id = 508 } name = "LI. Korps -HG Süd Reserven"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 509 }
		name = "79. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 4 # Medium modern art.
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 510 }
		name = "95. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}
		}

# 11. Armee

	landunit = { location = 429  id = { type = 10500 id = 511 } name = "11. Armee Reserven"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 512 }
		name = "22. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = SP_artillery
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 513 }
		name = "72. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = anti_air
		brigade_model = 1
		}
		}



	landunit = { location = 429  id = { type = 10500 id = 514 } name = "LIV. Korps"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 515 }
		name = "50. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 3 # Light modern art.
		}
		}

	landunit = { location = 429  id = { type = 10500 id = 517 } name = "XXX. Korps"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 518 }
		name = "198. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 4 # Medium modern art.
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 516 }
		name = "170. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = anti_tank
		}
		}


	landunit = { location = 429 id = { type = 10500 id = 519 } name = "XI. Korps"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 520 }
		name = "76. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = SP_artillery
		brigade_model = 1 # Stug III
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 521 }
		name = "239. Infanterie-Division"
		strength = 100
		model = 3
		type = infantry
		}
		}


#17. Armee

	landunit = { location = 489 id = { type = 10500 id = 522 } name = "17. Armee Reserve"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 523 }
		name = "100. lei. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 4 # Medium modern art.
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 524 }
		name = "97. lei. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = anti_air
		}
		}

	landunit = { location = 489  id = { type = 10500 id = 525 } name = "LII. Korps"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 526 }
		name = "454. Sicherungs-Division"
		strength = 100
		type = infantry
		model = 1
		extra = police
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 527 }
		name = "444. Sicherungs-Division"
		strength = 100
		type = infantry
		model = 1
		extra = police
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 528 }
		name = "101. lei. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}
		}


	landunit = { location = 499 id = { type = 10500 id = 529 } name = "XXXXIX. Geb. Korps"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 530 }
		name = "257. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = engineer
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 531 }
		name = "68. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 3 # Light modern art.
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 532 }
		name = "1. Gebirgs-Division"
		strength = 100
		type = bergsjaeger
		model = 2
		extra = anti_tank
		}
		}

	landunit = { location = 488 id = { type = 10500 id = 533 } name = "IV. Korps"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 534 }
		name = "71. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 4 # Medium modern art.
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 535 }
		name = "295. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = engineer
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 536 }
		name = "24. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 4 # Medium modern art.
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 537 }
		name = "262. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = anti_tank
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 538 }
		name = "296. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}
		}



# 6. Armee

	landunit = { location = 488  id = { type = 10500 id = 539 } name = "LV. Korps -6 Armee Reserve"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 540 }
		name = "168. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 541 }
		name = "213. Sicherungs-Division"
		strength = 100
		type = infantry
		model = 1
		extra = police
		}
		}


	landunit = { location = 488  id = { type = 10500 id = 542 } name = "XXXXIV. Korps"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 543 }
		name = "9. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 4 # Medium modern art.
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 544 }
		name = "297. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 4 # Medium modern art.
		}
		}


	landunit = { location = 488  id = { type = 10500 id = 545 } name = "Panzergruppe 1 -Reserve"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 546 }
		name = "9. Panzer-Division"
		strength = 100
		type = armor
		model = 2 #IIIg/IIIh
		extra = tank_destroyer
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id =  547 }
		name = "16. Panzer-Division"
		strength = 100
		type = armor
		model = 2 #IIIg/IIIh
		extra = tank_destroyer
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 548  }
		name = "16. Infanterie-Division (mot)"
		strength = 100
		type = motorized
		model = 1
		extra = anti_air
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 549 }
		name = "25. Infanterie-Division (mot)"
		strength = 100
		type = motorized
		model = 1
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 550 }
		name = "5. Waffen SS-Division 'Wiking'"
		strength = 100
		type = motorized
		model = 1
		extra = SP_artillery
		brigade_model = 1 # Stug III
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 551 }
		name = "1. Waffen SS-Division 'Leibstandarte AH'"
		strength = 100
		type = motorized
		model = 1
		extra = tank_destroyer
		}
		}

	landunit = { location = 488  id = { type = 10500 id = 552 } name = "XXXXVIII. Korps (mot)"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 553 }
		name = "57. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = rocket_artillery
		brigade_model = 0 # Basic
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id =  554 }
		name = "75. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 4 # Medium modern art.
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 555  }
		name = "11. Panzer-Division"
		strength = 100
		type = armor
		model = 2 #IIIg/IIIh
		extra = SP_artillery
		brigade_model = 1 # Stug III
		}
		}


	landunit = { location = 488  id = { type = 10500 id = 556 } name = "XXIX. Korps"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 557 }
		name = "111. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = engineer
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id =  558 }
		name = "299. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 4 # Medium modern art.
		}
		}

	landunit = { location = 488  id = { type = 10500 id = 559 } name = "III. Korps (mot)"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 560 }
		name = "44. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = engineer
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id =  561 }
		name = "298. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 4 # Medium modern art.
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id =  562 }
		name = "14. Panzer-Division"
		strength = 100
		type = armor
		model = 2 #IIIg/IIIh
		extra = SP_artillery
		brigade_model = 1 # Stug III
		}
		}

	landunit = { location = 488  id = { type = 10500 id = 563 } name = "XVII. Korps"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 564 }
		name = "62. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = engineer
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id =  565 }
		name = "56. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 4 # Medium modern art.
		}
		}

	landunit = { location = 488  id = { type = 10500 id = 566 } name = "XIV. Korps (mot)"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 567 }
		name = "13. Panzer-Division"
		strength = 100
		type = armor
		model = 2 #IIIe/IIIg
		extra = armored_car
		brigade_model = 1 # Improved
		}
		}

# Heeresgruppe Mitte


	landunit = { location = 485  id = { type = 10500 id = 568 } name = "Hk HG Mitte"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 569 }
		name = "293. Infanterie-Division"
		strength = 100
		model = 3
		type = infantry
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 570 }
		name = "102. Infanterie-Division"
		strength = 100
		model = 3
		type = infantry
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 571 }
		name = "403. Sicherungs-Division"
		strength = 100
		model = 1
		type = infantry
		extra = police
		}
		}

	landunit = { location = 483  id = { type = 10500 id = 572 } name = "H.Kdo.XXXV. (HG Mitte reserven)"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 573 }
		name = "293. Infanterie-Division"
		strength = 100
		model = 3
		type = infantry
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 574 }
		name = "293. Infanterie-Division"
		strength = 100
		model = 3
		type = infantry
		}
		}


	landunit = { location =  486 id = { type = 10500 id = 575 } name = "XXIV. Korps (mot)"

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 576 }
		name = "1. Kavallerie-Division"
		strength = 100
		type = cavalry
		model = 2
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 577 }
		name = "4. Panzer-Division"
		strength = 100
		type = armor
		model = 2 #IIIg/IIIh
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 578 }
		name = "3. Panzer-Division"
		strength = 100
		type = armor
		model = 2 #IIIg/IIIh
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 579 }
		name = "10. Infanterie-Division (mot)"
		strength = 100
		type = motorized
		model = 1
		extra = armored_car
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 580 }
		name = "267. Infanterie-Division"
		strength = 100
		type = infantry
		model  = 3
		extra = anti_tank
		}
		}


	landunit = { location = 486  id = { type = 10500 id = 581 } name = "XII. Korps"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 582 }
		name = "34. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 4 # Medium modern art.
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 583 }
		name = "45. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 3 # Light modern art.
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 584 }
		name = "31. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = anti_air
		}
		}

	landunit = { location = 486  id = { type = 10500 id = 585 } name = "XXXXVII. Korps (mot)"

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 586 }
		name = "18. Panzer-Division"
		strength = 100
		type = light_armor
		model = 2 #IIIg/IIf
		extra = armored_car
		brigade_model = 1 # Improved
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 587 }
		name = "17. Panzer-Division"
		strength = 100
		type = armor
		model = 2 #IIIh
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 588 }
		name = "29. Infanterie-Division (mot)"
		strength = 100
		type = motorized
		model = 1
		extra = tank_destroyer
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 589 }
		name = "167. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = armored_car
		brigade_model = 1 # Improved
		}
		}


	landunit = { location = 487 id = { type = 10500 id = 590 } name = "XXXXVI. Korps (mot)"

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 591 }
		name = "2. Waffen SS-Division 'Reich'"
		strength = 100
		type = motorized
		model = 1
		extra = tank_destroyer
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id =
		{ type = 10500 id = 592 }
		name = "10. Panzer-Division"
		strength = 100
		type = armor
		model = 2 #IIIh
		extra = SP_artillery
		brigade_model = 1 # Stug III
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 593 }
		name = "I.R. 'GrossDeutschland'"
		strength = 45
		type = motorized
		model = 1
		extra = tank_destroyer
		}
		}

	landunit = { location = 487 id = { type = 10500 id = 594 } name = "Hk Panzergruppe 2"

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 595 }
		name = "255. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 4 # Medium modern art.
		}
		}

	landunit = { location = 487 id = { type = 10500 id = 596 } name = "4. Armee -Reserve"

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 597 }
		name = "286. Sicherungs-Division"
		strength = 100
		type = infantry
		model = 1
		extra = police
		}
		}


	landunit = { location = 487  id = { type = 10500 id = 598 } name = "XXXXIII. Korps"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 599 }
		name = "131. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 3 # Light modern art.
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 600 }
		name = "134. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 4 # Medium modern art.
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 601 }
		name = "252 Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = anti_air
		}
		}

	landunit = { location = 487  id = { type = 10500 id = 602 } name = "IX. Korps"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 603 }
		name = "292. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 4 # Medium modern art.
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 604 }
		name = "137. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 605 }
		name = "263 Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = engineer
		}
		}


	landunit = { location = 486  id = { type = 10500 id = 606 } name = "VII. Korps"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 607 }
		name = "268. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 4 # Medium modern art.
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 608 }
		name = "7. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = armored_car
		brigade_model = 1 # Improved
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 609 }
		name = "23 Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = anti_tank
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 610 }
		name = "221. Sicherungs-Division"
		strength = 100
		type = infantry
		model = 1
		extra = police
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 611 }
		name = "258 Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = anti_tank
		}

		}


	landunit = { location = 305 id = { type = 10500 id = 612 } name = "XIII. Korps"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 613 }
		name = "78. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = tank_destroyer
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 614 }
		name = "17. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 4 # Medium modern art.
		}
		}

landunit = { location = 509  id = { type = 10500 id = 615 } name = "XX. Korps"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 616 }
		name = "162. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 3 # Light modern art.
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 617 }
		name = "256. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 4 # Medium modern art.
		}
		}

landunit = { location = 509  id = { type = 10500 id = 618 } name = "VIII. Korps"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 619 }
		name = "8. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 3 # Light modern art.
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 620 }
		name = "28. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = armored_car
		brigade_model = 1 # Improved
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 621 }
		name = "161 Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = anti_tank
		}
		}


landunit = { location = 509  id = { type = 10500 id = 622 } name = "LVII. Korps (mot)"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 623 }
		name = "12. Panzer-Division"
		strength = 100
		type = light_armor
		model = 2 #Pz38t
		extra = SP_artillery
		brigade_model = 1 # Stug III
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 624 }
		name = "19. Panzer-Division"
		strength = 100
		type = light_armor
		model = 2 #Pz38t
		extra = armored_car
		brigade_model = 1 # Improved
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 625 }
		name = "18. Infanterie-Division (mot)"
		strength = 100
		type = motorized
		model = 1
		}
		}


landunit = { location = 509  id = { type = 10500 id = 626 } name = "V. Korps"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 627 }
		name = "5. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 4 # Medium modern art.
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 628}
		name = "35. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}
		}



landunit = { location = 509 id = { type = 10500 id = 629 } name = "XXXIX. Korps (mot)"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 630 }
		name = "7. Panzer-Division"
		strength = 100
		type = light_armor
		model = 2 #Pz38t
		extra = SP_artillery
		brigade_model = 1 # Stug III
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 631 }
		name = "20. Panzer-Division"
		strength = 100
		type = light_armor
		model = 2 #Pz38t
		extra = anti_tank
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 632 }
		name = "20. Infanterie-Division (mot)"
		strength = 100
		type = motorized
		model = 1
		extra = tank_destroyer
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 633 }
		name = "14. Infanterie-Division (mot)"
		strength = 100
		type = motorized
		model = 1
		extra = engineer
		}
		}


landunit = { location = 509  id = { type = 10500 id = 634 } name = "VI. Korps"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 635 }
		name = "6. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 4 # Medium modern art.
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 636 }
		name = "26. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}
		}



landunit = { location =  305 id = { type = 10500 id = 637 } name = "9. Armee Reserve"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 638 }
		name = "87. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = engineer
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 639 }
		name = "129. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}
		}




landunit = { location = 509 id = { type = 10500 id = 640 } name = "16. Armee -Reserve"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 641 }
		name = "253. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}
		}



landunit = { location =  509 id = { type = 10500 id = 642 } name = "II. Korps"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 643 }
		name = "32. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 4 # Medium modern art.
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 644 }
		name = "12. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 645 }
		name = "121. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = engineer
		}
		}




landunit = { location = 509  id = { type = 10500 id = 646 } name = "XXVIII. Korps"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 647 }
		name = "123. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 4 # Medium modern art.
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 648 }
		name = "122. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}
		}


landunit = { location = 206  id = { type = 10500 id = 649 } name = "X. Korps"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 650 }
		name = "126. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 4 # Medium modern art.
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 651 }
		name = "30. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}
		}


landunit = { location = 510  id = { type = 10500 id = 652 } name = "LVI. Korps (mot)"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 653 }
		name = "8. Panzer-Division"
		strength = 100
		type = light_armor
		model = 2 #pz38t
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 654 }
		name = "290. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = armored_car
		brigade_model = 1 # Improved
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 655 }
		name = "3. Infanterie-Division (mot)"
		strength = 100
		type = motorized
		model = 1
		extra = SP_artillery
		brigade_model = 1 # Stug III
		}
		}



landunit = { location = 510  id = { type = 10500 id = 656 } name = "XXXXI. Korps (mot)"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 657 }
		name = "6. Panzer-Division"
		strength = 100
		type = light_armor
		model = 2 #Pz38t
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 658 }
		name = "269. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 659 }
		name = "36. Infanterie-Division (mot)"
		strength = 100
		type = motorized
		model = 1
		extra = artillery
		brigade_model = 4 # Medium modern art.
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 660 }
		name = "1. Panzer-Division"
		strength = 100
		type = armor
		model = 2 #IIIg
		extra = tank_destroyer
		}
		}


landunit = { location =  305 id = { type = 10500 id = 661 } name = "Panzergruppe 4 -Reserve"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 662 }
		name = "3. Waffen SS-Division 'Totenkopf'"
		strength = 100
		type = motorized
		model = 1
		extra = SP_artillery
		brigade_model = 1 # Stug III
		}
		}


landunit = { location = 305  id = { type = 10500 id = 663 } name = "18. Armee -Reserve"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 664 }
		name = "58. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = anti_air
		}
		}



landunit = { location = 206  id = { type = 10500 id = 665 } name = "I. Korps"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 667 }
		name = "1. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 4 # Medium modern art.
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 668 }
		name = "11. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 669 }
		name = "21. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

		}


landunit = { location = 510  id = { type = 10500 id = 670 } name = "XXVI. Korps"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id =671 }
		name = "217. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = artillery
		brigade_model = 3 # Light modern art.
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 672 }
		name = "61. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 673 }
		name = "291. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}
		}


landunit = { location = 510  id = { type = 10500 id = 674 } name = "Hk HG Nord"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 675 }
		name = "206. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		extra = engineer
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 676 }
		name = "251. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 677 }
		name = "254. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 678 }
		name = "7. Flieger-Division"
		strength = 100
		type = paratrooper
		model = 1
		}
		}


landunit = { location =  510 id = { type = 10500 id = 679 } name = "Bef.Rückw.H.G 101 (HG Nord -Res)"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 680 }
		name = "285. Sicherungs-Division"
		strength = 100
		type = infantry
		model = 1
		extra = police
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 681 }
		name = "281. Sicherungs-Division"
		strength = 100
		type = infantry
		model = 1
		extra = police
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 682 }
		name = "207. Sicherungs-Division"
		strength = 100
		type = infantry
		model = 1
		extra = police
		}
		}


landunit = { location = 304  id = { type = 10500 id = 683 } name = "L. Korps (HG Nord -Res)"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 684 }
		name = "86. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 685 }
		name = "4. Waffen SS-Division 'Polizei'"
		strength = 100
		type = infantry
		model = 1
		extra = police
		}
		}

#
# OKW Reserves for Barbarossa
#################################################

landunit = { location = 309  id = { type = 10500 id = 756 } name = "2.Armee"
		division = {
		id = { type = 10500 id = 757 }
		name = "2. Panzer-Division"
		strength = 100
		type = armor
		model = 2
		extra = tank_destroyer
		}

		division = {
		id = { type = 10500 id = 758 }
		name = "60. Infanterie-Division (mot)"
		strength = 100
		type = motorized
		model = 1
		extra = SP_artillery
		brigade_model = 1 # Stug III
		}

		division = {
		id = { type = 10500 id = 759 }
		name = "294. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

		division = {
		id = { type = 10500 id = 760 }
		name = "46. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

		division = {
		id = { type = 10500 id = 761 }
		name = "73. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

		division = {
		id = { type = 10500 id = 762 }
		name = "183. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

		division = {
		id = { type = 10500 id = 763 }
		name = "93. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

		division = {
		id = { type = 10500 id = 764 }
		name = "94. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

		division = {
		id = { type = 10500 id = 765 }
		name = "96. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

		division = {
		id = { type = 10500 id = 766 }
		name = "98. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

		division = {
		id = { type = 10500 id = 767 }
		name = "260. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

		division = {
		id = { type = 10500 id = 768 }
		name = "5. Panzer-Division"
		strength = 100
		type = armor
		model = 2
		extra = SP_artillery
		brigade_model = 1 # Stug III
		}
		}



#
# "OKW Reserven"
#################


landdivision = {

		dormant = yes

		id = { type = 10500 id = 770 }
		name = "22. Panzer-Division"
		strength = 20
		type = light_armor
		model = 2
		}

landdivision = {

		dormant = yes
		id = { type = 10500 id = 771 }
		name = "23. Panzer-Division"
		strength = 20
		type = light_armor
		model = 2
		}

landdivision = {

		dormant = yes
		id = { type = 10500 id = 772 }
		name = "88. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

landdivision = {

		dormant = yes
		id = { type = 10500 id = 773 }
		name = "205. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

landdivision = {

		dormant = yes
		id = { type = 10500 id = 774 }
		name = "211. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

landdivision = {

		dormant = yes
		id = { type = 10500 id = 775 }
		name = "212. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

landdivision = {

		dormant = yes
		id = { type = 10500 id = 776 }
		name = "215. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

landdivision = {

		dormant = yes
		id = { type = 10500 id = 777 }
		name = "223. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

landdivision = {

		dormant = yes
		id = { type = 10500 id = 778 }
		name = "327. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

landdivision = {

		dormant = yes
		id = { type = 10500 id = 779 }
		name = "333. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

landdivision = {

		dormant = yes
		id = { type = 10500 id = 780 }
		name = "335. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

landdivision = {

		dormant = yes
		id = { type = 10500 id = 781 }
		name = "337. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

landdivision = {

		dormant = yes
		id = { type = 10500 id = 782 }
		name = "339. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

landdivision = {

		dormant = yes
		id = { type = 10500 id = 783 }
		name = "340. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

landdivision = {

		dormant = yes
		id = { type = 10500 id = 784 }
		name = "342. Infanterie-Division"
		strength = 100
		type = infantry
		model = 3
		}

#
# Italian Expeditionary Corps (Corpo Spedizione Italiane)
#

landdivision = {

		dormant = yes
		id = { type = 10500 id = 785 }
		name = "9. Divisione 'Pasubio'"
		strength = 80
		max_strength = 80
		type = motorized
		model = 0
		}

landdivision = {

		dormant = yes
		id = { type = 10500 id = 786 }
		name = "52. Divisione 'Torino'"
		strength = 80
		max_strength = 80
		type = motorized
		model = 0
		}

landdivision = {

		dormant = yes
		id = { type = 10500 id = 787 }
		name = "3. Divisione 'Celere'"
		strength = 80
		max_strength = 80
		type = cavalry
		model = 3
		}

#
# Kriegsmarine - Baltic Area
#####################################


	navalunit = {
		name = "Baltic Fleet"
		id = { type = 10500 id = 1 }
		location = 302 #Stettin
		base = 302 # Stettin
		division = { id = { type = 10500 id = 2 } name = "KMS Tirpitz" type = battleship model = 3 }
		division = { id = { type = 10500 id = 3 } name = "KMS Admiral Scheer" type = heavy_cruiser model = 2 seaattack = 11 }
		division = { id = { type = 10500 id = 4 } name = "KMS Köln" type = heavy_cruiser model = 1 }
		}

	navalunit = {
		name = "Kriegsmarine Reserves"
		id = { type = 10500 id = 5 }
		location = 302 #Stettin
		base = 302 # Stettin
		division = {  id = { type = 10500 id = 6 } name = "KMS Nürnberg" type = heavy_cruiser model = 1 }
		division = {  id = { type = 10500 id = 7 } name = "KMS Schleswig-Holstein" type = battlecruiser model = 1 }
		division = {  id = { type = 10500 id = 8 } name = "KMS Schlesien" type = battlecruiser model = 1 }
		division = {  id = { type = 10500 id = 9 } name = "KMS Emden" type = light_cruiser model = 3 }
		division = {  id = { type = 10500 id = 10 } name = "KMS Leipzig" type = light_cruiser model = 3 }
		}

	navalunit = {
	name = "21. Unterseebootsflottille"
	id = { type = 10500 id = 11 }
	location = 302 #Stettin
	base = 302 # Stettin
	division = {  id = { type = 10500 id = 12 } name = "21. Unterseebootsflottille" type = submarine	model = 1 }
	}

	navalunit = {
	name = "22. Unterseebootsflottille"
	id = { type = 10500 id = 13 }
	location =  2480 # Baltic Sea
	base = 302 #Stettin
	division = {  id = { type = 10500 id = 14 } name = "22. Unterseebootsflottille" type = submarine	model = 1 }
	}


###########################################
#
# Luftwaffe orbat 1941
#
###########################################


# LUFTWAFFE
# Luftflotte 1
#################

		airunit = {
		id = { type = 10500 id = 400 }
		name = "I. Fliegerkorps"
		location = 510
		base = 510

			division = {
			id = { type = 10500 id = 401 }
			name = "KG 1 'Hindenburg'"
			strength = 100
			type = tactical_bomber
			model = 3 #Ju88
			}

			division = {
			id = { type = 10500 id = 402 }
			name = "Kampfgeschwader 76"
			strength = 100
			type = tactical_bomber
			model = 3 #Ju88
			}

			division = {
			id = { type = 10500 id = 403 }
			name = "JG 54 'Grunherz'"
			strength = 100
			type = interceptor
			model = 2 # 109F
			}

			division = {
			id = { type = 10500 id = 404 }
			name = "Küstenfliegergruppe 806"
			strength = 35
			type = naval_bomber
			model = 1 # Ju88
			}
			}
# Luftflotte 2
###################

		airunit = {
		id = { type = 10500 id = 405 }
		name = "II. Fliegerkorps"
		location = 487
		base = 487

			division = {
			id = { type = 10500 id = 406 }
			name = "JG 53 'Pik As'"
			strength = 100
			type = interceptor
			model = 2 #109F
			}

			division = {
			id = { type = 10500 id = 407 }
			name = "KG 3 'Blitz'"
			strength = 100
			type = tactical_bomber
			model = 2 #Ju88/He111
			}

			division = {
			id = { type = 10500 id = 408 }
			name = "KG 53 'Legion Condor'"
			strength = 100
			type = tactical_bomber
			model = 2 # He 111
			}


			division = {
			id = { type = 10500 id = 409 }
			name = "Sturzkampfgeschwader 77"
			strength = 100
			type = cas
		       	model = 1 #Ju87
			}

			division = {
			id = { type = 10500 id = 410 }
			name = "Jagdgeschwader 210"
			strength = 100
			type = multi_role
			model = 1 # Bf 110
			}

			division = {
			id = { type = 10500 id = 411 }
			name = "JG 51 'Mölders'"
			strength = 100
			type = interceptor
			model = 2 #109F
			}
			}


		airunit = {
		id = { type = 10500 id = 412 }
		name = "VIII. Fliegerkorps"
		location = 510
		base = 510

			division = {
			id = { type = 10500 id = 413 }
			name = "KG 2 'Holzhammer'"
			strength = 100
			type = tactical_bomber
			model = 1 #Do17
			}

			division = {
			id = { type = 10500 id = 414 }
			name = "Sturzkampfgeschwader 1"
			strength = 100
			type = cas
			model = 1 #Ju87
			}

			division = {
			id = { type = 10500 id = 415 }
			name = "StG 2 'Immelmann'"
			strength = 100
			type = cas
		    	model = 1 # Ju87
			}

			division = {
			id = { type = 10500 id = 416 }
			name = "JG 2 'Richthofen'"
			strength = 75
			type = multi_role
			model = 0 # Bf 109/Hs 123 multirole
			}

			division = {
			id = { type = 10500 id = 417 }
			name = "JG 26 'Schlageter'"
			strength = 100
			type = multi_role
			model = 0 # Bf 110
			}

			division = {
			id = { type = 10500 id = 418 }
			name = "Jagdgeschwader 27"
			strength = 100
			type = interceptor
			model = 2 #109F
			}

			}

# Luftflotte 4
##########################

		airunit = {
		id = { type = 10500 id = 419 }
		name = "IV. Fliegerkorps"
		location = 487
		base = 487

			division = {
			id = { type = 10500 id = 420 }
			name = "KG 27 'Boelcke'"
			strength = 100
			type = tactical_bomber
			model = 2 #He111
			}

			division = {
			id = { type = 10500 id = 421 }
			name = "JG 77 'Herz As'"
			strength = 100
			type = interceptor
			model = 2 # Bf 109E
			}
			}

		airunit = {
		id = { type = 10500 id = 422 }
		name = "V. Fliegerkorps"
		location = 487
		base = 487

			division = {
			id = { type = 10500 id = 423 }
			name = "KG 51 'Edelweiß'"
			strength = 100
			type = tactical_bomber
			model = 3 #Ju88A
			}

			division = {
			id = { type = 10500 id = 424 }
			name = "KG 54 'Totenkopf'"
			strength = 100
			type = tactical_bomber
			model = 3 # Ju88
			}


			division = {
			id = { type = 10500 id = 425 }
			name = "KG 55 'Greif'"
			strength = 100
			type = tactical_bomber
		  	model = 2 #He111
			}

			division = {
			id = { type = 10500 id = 426 }
			name = "JG 3 'Udet'"
			strength = 100
			type = interceptor
			model = 2 # Bf 109F
			}
			}

landunit = { location = 309  id = { type = 10500 id = 800 } name = "2. Armee"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 801 }
		name = "2. Armee HQ"
		strength = 100
		type = hq
		model = 1
		extra = anti_air
		brigade_model = 1
		}
}
landunit = { location = 206  id = { type = 10500 id = 802 } name = "18. Armee"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 803 }
		name = "18. Armee HQ"
		strength = 100
		type = hq
		model = 1
		extra = anti_air
		brigade_model = 1
		}
}
landunit = { location = 509  id = { type = 10500 id = 804 } name = "16. Armee"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 805 }
		name = "16. Armee HQ"
		strength = 100
		type = hq
		model = 1
		extra = anti_air
		brigade_model = 1
		}
}
landunit = { location = 487  id = { type = 10500 id = 806 } name = "9. Armee"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 807 }
		name = "9. Armee HQ"
		strength = 100
		type = hq
		model = 1
		extra = anti_air
		brigade_model = 1
		}
}
landunit = { location = 488  id = { type = 10500 id = 808 } name = "4. Armee"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 809 }
		name = "4. Armee HQ"
		strength = 100
		type = hq
		model = 1
		extra = anti_air
		brigade_model = 1
		}
}
landunit = { location = 489  id = { type = 10500 id = 810 } name = "6. Armee"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 811 }
		name = "6. Armee HQ"
		strength = 100
		type = hq
		model = 1
		extra = anti_air
		brigade_model = 1
		}
}
landunit = { location = 429  id = { type = 10500 id = 812 } name = "11. Armee"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 813 }
		name = "11. Armee HQ"
		strength = 100
		type = hq
		model = 1
		extra = anti_air
		brigade_model = 1
		}
}
landunit = { location = 499  id = { type = 10500 id = 814 } name = "17. Armee"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 815 }
		name = "17. Armee HQ"
		strength = 100
		type = hq
		model = 1
		extra = anti_air
		brigade_model = 1
		}
}
landunit = { location = 479  id = { type = 10500 id = 816 } name = "Armee Gruppe'Sud'"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 817 }
		name = "Armee Gruppe'Sud' HQ"
		strength = 100
		type = hq
		model = 1
		extra = anti_air
		brigade_model = 1
		}
}
landunit = { location = 483  id = { type = 10500 id = 818 } name = "Armee Gruppe'Centre'"
		division = { offensive = { year = 1941 month = august day = 15  }
		id = { type = 10500 id = 819 }
		name = "Armee Gruppe'Centre' HQ"
		strength = 100
		type = hq
		model = 1
		extra = anti_air
		brigade_model = 1
		}
}
landunit = {
			location = 304
			id = { type = 10500 id = 820 }
			name = "Armee Gruppe'Nord'"
		division = {
					offensive = { year = 1941 month = august day = 15  }
					id = { type = 10500 id = 821 }
						name = "Armee Gruppe'Nord' HQ"
						strength = 100
						type = hq
						model = 1
						extra = anti_air
						brigade_model = 1
					}
		}

############################################

}


