province = {
	id = 1862
	anti_air = 1
	naval_base = {
		size = 2
		current_size = 2
	}
	air_base = {
		size = 3
		current_size = 3
	}
}


province = {
	id = 1792
	anti_air = 1
	air_base = {
		size = 2
		current_size = 2
	}
}

province = {
	id = 1794
	anti_air = 1
	naval_base = {
		size = 2
		current_size = 2
	}
	air_base = {
		size = 3
		current_size = 3
	}
}

country = {
    tag = syr

       policy = {
	date = { year = 0 month = january day = 0 }
	democratic = 1
	political_left = 4
	freedom = 3
	free_market = 3
	professional_army = 3
	defense_lobby = 8
	interventionism = 8
       }



	manpower = 70

	# Resource Reserves
	oil =	2000	supplies =	2000

	free = 		{
		oil 	=	2
		supplies =	10
		ic = 4
	}

	extra_tc = 10

	steal_leader = 380013 #Dentz (VIC)
	steal_leader = 380024 #Keime (VIC)
	steal_leader = 380015 #de Verdillac (VIC)

	capital = 1792

    ownedprovinces =      { 1794 1795 1792 1793 1863 1862 1861 }
    controlledprovinces = { 1794 1795 1792 1793 1863 1862 1861 }
    nationalprovinces =   { 1794 1795 1792 1793 1863 1862 1861 }

	techapps = {
		1010 1190
		2290 2300 2310 2450
		4010
		5010
1030 1200 4020 4130
	}


landunit = { location = 1794 id = { type = 10450 id = 1 } name = "Chasseurs Libanois"
division = { id = { type = 10450 id = 2 } name = "Chasseurs Libanois" strength = 40 max_strength = 40 type = infantry		model = 2 }
}


landunit = { location = 1795 id = { type = 10450 id = 3 } name = "Armée du Levant"
division = { id = { type = 10450 id = 4 } name = "1ère Règiment du Levant" strength = 40 max_strength = 40 type = infantry		model = 2 }
}


landunit = { location = 1792 id = { type = 10450 id = 5 } name = "Armée du Levant"
division = { id = { type = 10450 id = 6 } name = "2e Règiment du Levant" strength = 40 max_strength = 40 type = infantry		model = 2 }
}


landunit = { location = 1792 id = { type = 10450 id = 7 } name = "Armée du Levant"
division = { id = { type = 10450 id = 8 } name = "3e Règiment du Levant" strength = 40 max_strength = 40 type = infantry		model = 2 }
}


landunit = { location = 1861 id = { type = 10450 id = 9 } name = "Armée du Levant"
division = { id = { type = 10450 id = 10 } name = "1ère Règiment Légère du Desert" strength = 40 max_strength = 40 type = cavalry		model = 1 }
}


airunit = {
location = 1792	base = 1792 id = { type = 10450 id = 11 } name = "Zone d'Opérations Moyen-Orient"

division = { id = { type = 10450 id = 12 } name = "Groupe de Chasse 2" type = interceptor model = 1 strength = 25 max_strength = 60 }

division = { id = { type = 10450 id = 13 } name = "Groupe de Bombardement Tactique 10" type = tactical_bomber model = 1		strength = 20 max_strength = 60  }
	   }
}


