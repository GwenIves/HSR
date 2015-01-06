province = {
	id = 423
	anti_air = 2
	air_base = {
		size = 4
		current_size = 4
		}
	naval_base = {
		size = 6
		current_size = 6
		}
}

province = {
	id = 424
	anti_air = 3
	air_base = {
		size = 8
		current_size = 8
		}
	}

province = {
	id = 423
	anti_air = 1
naval_base = {
		size = 7
		current_size = 5
		}
	}

#Anti Aircraft Batteries

province = { id = 431   anti_air = 3 } #Ploiesti

country = {
    tag = ROM

#ai = "fallblau_ROM.ai"


	capital = 424

policy = {
	date = { year = 0 month = january day = 0 }
	democratic = 3
	political_left = 2
	freedom = 4
	free_market = 4
	professional_army = 3
	defense_lobby = 5
	interventionism = 6
    }

		headofstate = { type = 9 id = 22035 }
		headofgovernment = { type = 9 id = 22048 }
		foreignminister = { type = 9 id = 22077 }
		armamentminister = { type = 9 id = 22093 }
		ministerofsecurity = { type = 9 id = 22106 }
		ministerofintelligence = { type = 9 id = 22119 }
		chiefofstaff = { type = 9 id = 22127 }
		chiefofarmy = { type = 9 id = 22136 }
		chiefofnavy = { type = 9 id = 22147 }
		chiefofair = { type = 9 id = 22158 }

	dormant_ministers = { 22053 }

	manpower = 150
	# Resource Reserves
oil 		= 35000
supplies 	= 1400

	free = 		{
		oil 	=	65
		supplies =	48
		ic = 15
	}


	extra_tc = 7

    ownedprovinces =      {
		423 424 425 431 426 495 432 436 434 435 230 433
	 }
    controlledprovinces = {
		423 424 425 431 426 495 432 436 434 435 230 433

	  }
    nationalprovinces =   {
		423 424 425 431 426 495 432 436 434 435 230 433
	  }

 techapps               = { 5070  6070  6060  1230  2220  4190  4010  4020  4030  4040  4120  4130  4140  2010  2020  2030  2040  2050  2150  2290
			     2300  2310  2320  2330  2400  2410  2450  2460  2470  2510  2520  1010  1020  1030  1190  1200  1210  1220  1110  2330
			     9010  9020  9030  5010  5020  5050  5080  5090  5100  5110  5190  5200  5470  6010  6020  6040  3010  3020  3030  3400
			     8040  8050  14000
			   }


	landunit = {
	location = 424
	name = "Corp 7 Armata"
	id = { type = 19002 id = 10 }

		division = {
		id = { type = 19002 id = 11 }
		name = "Divizia 18 Infanterie"
		type = infantry
		strength = 50
		model = 1
		}

		division = {
		id = { type = 19002 id = 12 }
		name = "Divizia 19 Infanterie"
		type = infantry
		strength = 50
		model = 1
		}

		division = {
		id = { type = 19002 id = 13 }
		name = "Divizia 20 Infanterie"
		type = infantry
		strength = 50
		model = 1
		}
		}




	landunit = {
	location = 432
	name = "Corp 5 Armata"
	id = { type = 19002 id = 14 }

		division = {
		id = { type = 19002 id = 15 }
		name = "Divizia 1 Infanterie"
		type = infantry
		strength = 50
		model = 1
		}

		division = {
		id = { type = 19002 id = 16 }
		name = "Divizia 2 Infanterie"
		type = infantry
		strength = 50
		model = 1
		}

		division = {
		id = { type = 19002 id = 17 }
		name = "Divizia 4 Infanterie"
		type = infantry
		strength = 50
		model = 1
		}
		}


	navalunit = {
	location = 423 #Constanta
	name = "Flota Romania de Mare"
	id = { type = 19002 id = 27 }

			division = {
			id = { type = 19002 id = 28 }
			name = "'NMS Regele Ferdinand' Flotila"
			type = destroyer
			model = 0
			}

			division = {
			id = { type = 19002 id = 29 }
			name = "'NMS Delfinul' Flotila"
			type = submarine
			model = 1
			}
			}



	landunit = {
	location = 432
	name = "Corp 5 Armata"
	id = { type = 19002 id = 35 }

		division = {
		id = { type = 19002 id = 36 }
		name = "5. Armatâ Românesc"
		type = hq
		model = 1
		strength = 100
		extra = artillery
		brigade_model = 4
		}
		}

}
