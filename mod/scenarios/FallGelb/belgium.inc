#Eben Emmel
province = {	id = 69	landfort = 2	}

#Anti Aircraft Batteries
province = { id = 69   anti_air = 2 } #Arlon (Eben-Emael)
province = { id = 51   anti_air = 1 } #Bruxelles
province = { id = 50   anti_air = 2 } #Antwerpen


province = { id =	50	air_base = { size =	2	current_size = 	2	} }



country = {
    tag = BEL
	ai = "fallgelb_bel.ai"

    policy = {
	date = { year = 0 month = january day = 0 }
	democratic = 10
	political_left = 1
	free_market = 9
	freedom = 10
	professional_army = 5
	defense_lobby = 8
	interventionism = 8
    }

		headofstate = { type = 9 id = 15118 }
		headofgovernment = { type = 9 id = 15037 }
		foreignminister = { type = 9 id = 15049 }
		armamentminister = { type = 9 id = 15059 }
		ministerofsecurity = { type = 9 id = 15081 }
		ministerofintelligence = { type = 9 id = 15093 }
		chiefofstaff = { type = 9 id = 15107 }
		chiefofarmy = { type = 9 id = 15111 }
		chiefofnavy = { type = 9 id = 15009 }
		chiefofair = { type = 9 id = 15116 }

	capital = 51
	manpower = 75
	# Resource Reserves
	oil 	=	40000
	supplies =	65000


	extra_tc = 75

    ownedprovinces =      {
	45 50 51 52 65 68 69 70

	 }
    controlledprovinces = {
	45 50 51 52 65 68 69 70


	  }
    nationalprovinces =   {
	45 50 51 52 65 68 69 70
	}

	# Western Minor Tech '36
	techapps = {
# Group C 1939 techs
#######################

4010 4020 # Early Fighter

4120 4130 # Early Bomber

2150 # Basic Armoured Car

2010 2020 2030 2040 # Basic light tank

2290 2300 2310 2320 # up to WWII early artillery

2400 # Basic AT

2450 2460 # Early Static AA

2510 # Basic AA

1010 1020 # Early infantry

1190 1200 # Early Cavalry

1110 # Early Mountain

9010 9020 # Flying Circus doctrine

5010 5020 # Mechanized Agriculture

5050 # Basic Machine Tools

5080 5090 5100 # Construction (up to the forts)

5110 # Supplies

5190 5200 # Imp. oil conversion

5470 # Nukes faculty

1310 1230




6010 6020 # Superior Firepower
	}

###BELGIAN OOB####


		landunit = {
		id = { type = 25005 id = 1 }
		location = 45
		name = "1ère Corps"

		division = {
		id = { type = 25006 id = 1 }
		name = "1ère Division d'Infanterie"
		type = infantry model = 1
		extra = artillery brigade_model = 3
		experience = 65
				  }
			   }

		###################
		###################

		landunit = {
		id = { type = 25005 id = 2 }
		location = 50
		name = "2e Corps"

		division = {
		id = { type = 25006 id = 2 }
		name = "2e Division d'Infanterie"
		type = infantry model = 1
		experience = 65
				  }

		division = {
		id = { type = 25006 id = 3 }
		name = "3e Division d'Infanterie"
		type = infantry model = 1
		experience = 65
				  }

			   }

		#####################
		#####################

		landunit = {
		id = { type = 25026 id = 3 }
		location = 69
		name = "3e Corps"

		division = {
		id = { type = 25006 id = 4 }
		name = "4e Division d'Infanterie"
		type = infantry model = 1
		experience = 65
				  }
			}

		#####################
		#####################

		landunit = {
		id = { type = 25005 id = 4 }
		location = 65
		name = "4e Corps"

		division = {
		id = { type = 25006 id = 5 }
		name = "5e Division d'Infanterie"
		type = infantry model = 1
		extra = engineer
		experience = 65
				  }

		division = {
		 id = { type = 25006 id = 6 }
		 name = "6e Division d'Infanterie"
		 type = infantry model = 1
		 extra = artillery brigade_model = 3
		experience = 65
				  }
			}

		#######################
		#######################

		landunit = {
		id = { type = 25005 id = 5 }
		location = 68
		name = "5e Corps"

		division = {
		id = { type = 25006 id = 7 }
		name = "7e Division d'Infanterie"
		type = infantry model = 1
		experience = 65
				  }
			}

		########################
		########################

		landunit = {
		id = { type = 25005 id = 6 }
		location = 69
		name = "6e Corps"

		division = {
		id = { type = 25006 id = 8 }
		name = "8e Division d'Infanterie"
		type = infantry model = 1
		extra = artillery
		experience = 65
				  }

		division = {
		id = { type = 25006 id = 9 }
		name = "9e Division d'Infanterie"
		type = infantry model = 1
		experience = 65
				  }
			}

		###########################
		###########################

		landunit = {
		id = { type = 25005 id = 7 }
		location = 68
		name = "7e Corps"

		division = {
		id = { type = 25006 id = 10 }
		name = "1ère Chasseurs Ardennais"
		type = bergsjaeger  model = 0
		extra = artillery brigade_model = 3
		experience = 65
				  }
		  }

		############################
		############################

		landunit = {
		id = { type = 25005 id = 8 }
		location = 51
		name = "1ère Corps de Cavalerie"

		division = {
		id = { type = 25006 id = 11 }
		name = "1ère Division de Guides"
		type = cavalry model = 3
		experience = 65
				  }

		division = {
		id = { type = 25006 id = 12 }
		name = "1ère Chasseurs à Cheval"
		type = cavalry  model = 0
		experience = 65
				  }
		}



		airunit = {
		id = { type = 25005 id = 13 }
		location = 50
		base = 50
		name = "Groupe de Chasse 1"

		division = {
		id = { type = 25006 id = 14 }
		name = "Groupe de Chasse 1"
		type = interceptor model = 0
		strength = 37
		max_strength = 37
		experience = 65
				  }
	}

transports = 20
escorts = 4

}

