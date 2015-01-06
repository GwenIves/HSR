province = {
	id = 1823
	anti_air = 2
	naval_base = {
		size = 6
		current_size = 6
		}
	}

province = {
	id = 1866
	anti_air = 2
	air_base = {
		size = 4
		current_size = 4
		}
	}


#Anti Aircraft Batteries
province = { id = 1864   anti_air = 1 } #Mosul


country = {
    tag = IRQ

	puppet = ENG
	control = ENG
  SpyInfo                = { country = "IRQ" NumberOfSpies = 2 }
	policy = {
	date = { year = 0 month = january day = 0 }
	democratic = 3
	political_left = 4
	freedom = 4
	free_market = 6
	professional_army = 3
	defense_lobby = 7
	interventionism = 6
    }

	headofstate = { type = 9 id = 91037 }
	headofgovernment = { type = 9 id = 91047 }
	foreignminister = { type = 9 id = 91066 }
	armamentminister = { type = 9 id = 91091 }
	ministerofsecurity = { type = 9 id = 91109 }
	ministerofintelligence = { type = 9 id = 91124 }
	chiefofstaff = { type = 9 id = 91141 }
	chiefofarmy = { type = 9 id = 91149 }
	chiefofnavy = { type = 9 id = 91158 }
	chiefofair = { type = 9 id = 91167 }

	# Resource Reserves
	energy		= 200
	metal		= 200
	rare_materials  	= 100
	oil 		= 1000
	supplies 	= 500
	money 		= 1000
	manpower 	= 35000

	capital = 	1866

    ownedprovinces =      {
1860 1864 1865 1866 1790 1824 1823 1806 1791
	 }
    controlledprovinces = {
1860 1864 1865 1866 1790 1824 1823 1806 1791
	  }
    nationalprovinces =   {
1860 1864 1865 1866 1790 1824 1823 1806 1791 1825
	  }

	# ROTW Minor Tech '36
	techapps = {
# Group E 1941 techs
#######################

4010 4020 # Early Fighter

2010 2020 2030 2040 # Basic light tank

2150 # Basic Armoured Car

2290 2300 2310 # GW artillery

2400 # Early AT artillery

2450 # GW Static AA

2510 # Basic AA

1010 # GW infantry

1190 # GW Cavalry

# Optional doctrines

6300 # Human Wave


	}



	airunit = {
	id = { type = 10115 id = 1 }
	name = "Royal Army Air Force"
	location = 1866
	base = 1866

		division = {
		id = { type = 10115 id = 2 }
		name = "1. RIAF interceptor Group"
		strength = 100
		type = interceptor
		model = 0
	   	}
	        }


	landunit = {
	id = { type = 10115 id = 3 }
	name = "Royal Iraqi Army"
	location = 1866

		division = {
		id = { type = 10115 id = 4 }
		name = "1. Iraqi Infantry Division"
		strength = 100
		type = infantry
		model = 0
	     	}

		division = {
		id = { type = 10115 id = 5 }
		name = "2. Iraqi Infantry Division"
		strength = 100
		type = infantry
		model = 0
	     	}

		division = {
		id = { type = 10115 id = 6 }
		name = "3. Iraqi Infantry Division"
		strength = 100
		type = infantry
		model = 0
		extra = artillery
	     	}

		division = {
		id = { type = 10115 id = 7 }
		name = "4. Iraqi Infantry Division"
		strength = 100
		type = infantry
		model = 0
	     	}

		division = {
		id = { type = 10115 id = 8 }
		name = "1. Iraqi Motor Infantry Div."
		strength = 30
		type = motorized
		model = 0
	    	}
	 	}



}