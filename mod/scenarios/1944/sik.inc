country = {
    tag = SIK

diplomacy = {
relation = { tag = MON value = 100 }
relation = { tag = SOV value = 125 }
relation = { tag = TAN value = 125 }
}

  SpyInfo                = { country = "SIK" NumberOfSpies = 2 }
	policy = {
	date = { year = 0 month = january day = 0 }
	democratic = 3
	political_left = 4
	freedom = 3
	free_market = 3
	professional_army = 1
	defense_lobby = 5
	interventionism = 5
    }
	headofstate = { type = 9 id = 72001 }
	headofgovernment = { type = 9 id = 72002 }
	foreignminister = { type = 9 id = 72031 }
	armamentminister = { type = 9 id = 72032 }
	ministerofsecurity = { type = 9 id = 72035 }
	ministerofintelligence = { type = 9 id = 72036 }
	chiefofstaff = { type = 9 id = 72039 }
	chiefofarmy = { type = 9 id = 72040 }
	chiefofnavy = { type = 9 id = 72009 }
	chiefofair = { type = 9 id = 72010 }

	# Resource Reserves
	energy	=	200  metal	=	200	rare_materials =	500	oil =	50	supplies =	200

	capital = 	1433
	manpower = 665

	ownedprovinces =      {
		1421 1432 1433 1435 1439 1440 1441 1442 1443 1446 1447 1445 1430 1431
	}
	controlledprovinces = {
		1421 1432 1433 1435 1439 1440 1441 1442 1443 1446 1447 1445 1430 1431
	}
	nationalprovinces =   {
		1421 1432 1433 1435 1439 1440 1441 1442 1443 1446 1447 1445
	}

	# ROTW Minor Tech '36
	techapps = {
# Group E 1944 techs
#######################

4010 4020 # Early Fighter

4120 4130 # Early medium bomber

2010 2020 2030 2040 # Basic light tank

2150 # Basic Armoured Car

2290 2300 2310 # GW artillery

2400 # Early AT artillery

2450 2460 # Early Static AA

2510 # Basic AA

5050 # Basic Machine Tools

5080 # Basic Construction (infra)

1010 1020 # Early infantry

1190 1200 # Early Cavalry


# Optional doctrines

6300 # Human Wave

	}


	landunit = {
		location = 1433
		name = "Sinkiang Warlord Army"
	id = { type = 11514 id = 1 }
	division = {
	id = { type = 11514 id = 2 }
			name = "1st Division"
			type = militia
		}
	division = {
	id = { type = 11514 id = 3 }
			name = "2nd Division"
			type = militia
		}
	division = {
	id = { type = 11514 id = 4 }
			name = "3rd Division"
			type = militia
		}
	division = {
	id = { type = 11514 id = 21 }
			name = "4th Division"
			type = militia
		}
	}
	landunit = {
		location = 1435
		name = "Warlord Army"
	id = { type = 11514 id = 5 }
	division = {
	id = { type = 11514 id = 6 }
			name = "1st Division"
			type = militia
		}
	division = {
	id = { type = 11514 id = 7 }
			name = "2nd Division"
			type = militia
		}
	division = {
	id = { type = 11514 id = 16 }
			name = "3rd Division"
			type = militia
		}
	}
	airunit = {
		location = 1433
		name = "Sinkiang Airforce"
	id = { type = 11514 id = 11 }
	division = {
	id = { type = 11514 id = 12 }
			name = "interceptor Squadron"
			type = interceptor
			strength = 20
		}
	}
}

