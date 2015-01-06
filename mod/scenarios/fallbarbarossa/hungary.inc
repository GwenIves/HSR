province = { id = 457   anti_air = 2 } #Budapest

# Debrecen
province = {
	id = 497
	air_base = {
		size = 7
		current_size = 7
	}
}

country = {
    tag = HUN

    policy = {
	date = { year = 0 month = january day = 0 }
	democratic = 1
	political_left = 4
	free_market = 4
	freedom = 3
	professional_army = 3
	defense_lobby = 7
	interventionism = 8
    }

	headofstate = { type = 9 id = 21001 }
	headofgovernment = { type = 9 id = 21056 }
	foreignminister = { type = 9 id = 21071 }
	armamentminister = { type = 9 id = 21084 }
	ministerofsecurity = { type = 9 id = 21100 }
	ministerofintelligence = { type = 9 id = 21119 }
	chiefofstaff = { type = 9 id = 21131 }
	chiefofarmy = { type = 9 id = 21142 }
	chiefofnavy = { type = 9 id = 21009 }
	chiefofair = { type = 9 id = 21162 }

	manpower = 150
	capital = 457

	# Resource Reserves
oil 		= 200
supplies 	= 1000


	free = 		{
		oil 	=	5
		supplies =	24
		ic = 8
	}



    ownedprovinces =      {
		456 457 458 491 492 497
		427 428 496 498
		499
	}
    controlledprovinces = {
		456 457 458 491 492 497
		427 428 496 498
		499
	}
    nationalprovinces =   {
		456 457 458 491 492 497
		427 428 496 498
		499
	}
	techapps               = { 5070  6070  6060  1310  4010  4020  4030  4040  4120  4130  4140  2010  2020  2030  2040  2050  2150  2290  2300  2310
			     2320  2330  2400  2410  2450  2460  2470  2510  2520  1010  1020  1030  1190  1200  1210  1220  1110  2330  9010  9020
			     9030  5010  5020  5050  5080  5090  5100  5110  5190  5200  5470  6010  6020  6040  14000 14010
			   }

######################
###HUNGARIAN OOB   ###
######################
	landunit = {
		id = { type = 19001 id = 1 }
		name = "Magyar Hadsereg"
		location = 457

			division = {
			id = { type = 19001 id = 2 }
			name = "6. gyalog hadosztály"
			strength = 100
			type = infantry
			extra = artillery
			model = 2
			}

			division = {
			id = { type = 19001 id = 3 }
			name = "7. gyalog hadosztály"
			strength = 100
			type = infantry
			model = 1
			}

			division = {
			id = { type = 19001 id = 4 }
			name = "10. gyalog hadosztály"
			strength = 100
			type = infantry
			model = 2
			extra = anti_tank
			}
			}

	landunit = {
	id = { type = 19001 id = 5 }
	name = "I Állandó Hadsereg"
	location = 457

			division = {
			id = { type = 19001 id = 6 }
			name = "12. gyalog hadosztály"
			strength = 100
			type = infantry
			model = 1
			}

			division = {
			id = { type = 19001 id = 7 }
			name = "13. gyalog hadosztály"
			strength = 100
			type = infantry
			model = 1
			extra = engineer
			}

			division = {
			id = { type = 19001 id = 8 }
			name = "16. gyalog hadosztály"
			strength = 100
			type = infantry
			model = 1
			}
			}


	landunit = {
	id = { type = 19001 id = 9 }
	name = "II Állandó Hadsereg"
	location = 457

		division = {
		id = { type = 19001 id = 10 }
		name = "20. gyalog hadosztály"
		strength = 100
		type = infantry
		model = 2
		}

		division = {
		id = { type = 19001 id = 11 }
		name = "24. gyalog hadosztály"
		strength = 100
		type = infantry
		model = 1
		}

		division = {
		id = { type = 19001 id = 12 }
		name = "25. gyalog hadosztály"
		strength = 100
		type = infantry
		model = 1
		}
		}


		airunit = {
		id = { type = 19001 id = 13 }
		name = "I Légí Hadsereg"
		location = 497
		base = 497

			division = {
			id = { type = 19001 id = 14 }
			name = "I.Vadászosztály"
			type = interceptor
			model = 2
			strength = 100
			}

			division = {
			id = { type = 19001 id = 15 }
			name = "I.Vadászbombázó Osztály"
			type = tactical_bomber
			model = 1
			strength = 100
			}
			}

		landunit = {
	id = { type = 19001 id = 16 }
	name = "I Állandó Hadsereg"
	location = 457

			division = {
			id = { type = 19001 id = 17 }
			name = "1. hadsereg"
			strength = 100
			type = hq
			model = 1
			extra = artillery
			brigade_model = 4
			}
			}

}

# Ids 1-17 used.


