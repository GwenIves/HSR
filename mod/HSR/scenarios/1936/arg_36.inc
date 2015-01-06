#
# by Aregorn for HSR2_DD
#
##############################
# Country definition for ARG #
##############################

province =
{ id         = 667
  anti_air   = 5
  naval_base = { size = 8 current_size = 8 }
  air_base   = { size = 3 current_size = 3 }
}              # Buenos Aires
province =
{ id         = 853
  anti_air   = 2
  naval_base = { size = 8 current_size = 8 }
  air_base   = { size = 3 current_size = 3 }
}              # Bahia Blanca

#####################
# Country main data #
#####################

country =
{ tag                    = ARG
  manpower               = 50
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  capital                = 667

	research_mod = 1.15	#
	tc_mod = 1.10	#
	peacetime_ic_mod = 0.75	#

  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 3
    free_market       = 7
    freedom           = 6
    professional_army = 6
    defense_lobby     = 7
    interventionism   = 3
  }

  SpyInfo                = { country = "arg" NumberOfSpies = 6 }

  nationalprovinces      = { 667 853 852 843 844 845 851 854 855 857 858 859 862 863 865 850 866 }
  ownedprovinces         = { 667 853 852 843 844 845 851 854 855 857 858 859 862 863 865 850 }
  controlledprovinces    = { 667 853 852 843 844 845 851 854 855 857 858 859 862 863 865 850 }
  # Semi-Major Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 4010 4120 4130 4190 2150 2010 2290 2300 2310 2450 2460 2510 1010 1190 1110 9010 5010 5080 5090 5190
			     3010 3020 3070 3080 3130 3140 3250 3400 3410 8010 8020 8040 8050
			   }
  blueprints             = { 6010 6030 6110 6120 }

  diplomacy =
  { relation = { tag = BOL value = 50 }
    relation = { tag = BRA value = -10 }
    relation = { tag = CHL value = -20 }
    relation = { tag = COL value = 10 }
    relation = { tag = ENG value = 75 }
    relation = { tag = ECU value = 10 }
    relation = { tag = GER value = 75 }
    relation = { tag = IRE value = 20 }
    relation = { tag = ITA value = 30 }
    relation = { tag = PAR value = 50 }
    relation = { tag = PRU value = 20 }
    relation = { tag = URU value = -50 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }
  headofstate            = { type = 9 id = 35001 }
  headofgovernment       = { type = 9 id = 35002 }
  foreignminister        = { type = 9 id = 35003 }
  armamentminister       = { type = 9 id = 35004 }
  ministerofsecurity     = { type = 9 id = 35005 }
  ministerofintelligence = { type = 9 id = 35006 }
  chiefofstaff           = { type = 9 id = 35007 }
  chiefofarmy            = { type = 9 id = 35008 }
  chiefofnavy            = { type = 9 id = 35009 }
  chiefofair             = { type = 9 id = 35010 }
  # Argentine OOB
  landunit =
  { id       = { type = 12000 id = 1 }
    name     = "I Cuerpo de Ejército"
    location = 667 # Buenos Aires
    division =
    { id       = { type = 12000 id = 706 }
      name     = "Comando Supremo del Ejército"
      type     = hq
      model    = 0
      strength = 100
      extra    = rocket_artillery
      experience = 15
    }
    division =
    { id       = { type = 12000 id = 2 }
      name     = "III División 'Pellegrini'"
      strength = 30
      type     = infantry
      extra    = engineer
      experience = 55
    }
    division =
    { id       = { type = 12000 id = 3 }
      name     = "II División 'San Martín'"
      strength = 30
      type     = infantry
      extra    = engineer
      experience = 55
    }
    division =
    { id       = { type = 12000 id = 4 }
      name     = "I División 'Ing. Krausse'"
      strength = 30
      type     = infantry
      extra    = engineer
      experience = 55
    }
  }
  landunit =
  { id       = { type = 12000 id = 6 }
    name     = "II Cuerpo de Ejército"
    location = 667
    division =
    { id       = { type = 12000 id = 7 }
      name     = "VI División de Montaña 'Villegas'"
      strength = 30
      type     = bergsjaeger
      extra    = engineer
      experience = 55
    }
    division =
    { id       = { type = 12000 id = 8 }
      name     = "IV División de Infantería"
      strength = 30
      type     = infantry
      extra    = engineer
      experience = 55
    }
  }
######### Dormant

	landdivision = {
		dormant = yes
	        	id = { type = 12000 id = 100 }
			name = "Südamerika HQ"
			type = hq
			model = 1
			strength = 5
			experience = 100
		}

#########

  navalunit =
  { name     = "Armada Argentina"
    id       = { type = 12000 id = 13 }
    location = 853
    base     = 853
    division =
    { id    = { type = 12000 id = 14 }
      name  = "ARA Veinticinco De Mayo"
      type  = heavy_cruiser
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 12000 id = 16 }
      name  = "ARA Almirante Brown"
      type  = heavy_cruiser
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 12000 id = 18 }
      name  = "ARA Moreno"
      type  = battleship
      model = 0
      experience = 10
    }
    division =
    { id    = { type = 12000 id = 20 }
      name  = "ARA Rivadavia"
      type  = battleship
      model = 0
      experience = 10
    }
    division =
    { id    = { type = 12000 id = 22 }
      name  = "ARA Independencia"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 12000 id = 24 }
      name  = "ARA La Libertad"
      type  = heavy_cruiser
      model = 0
      experience = 10
    }
    division =
    { id    = { type = 12000 id = 26 }
      name  = "ARA Generale Belgrano"
      type  = light_cruiser
      model = 0
      experience = 10
    }
    division =
    { id    = { type = 12000 id = 28 }
      name  = "ARA Generale Pueyrredón"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 12000 id = 30 }
      name  = "1er Grupo de Destructores"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 12000 id = 32 }
      name  = "2do Grupo de Destructores"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 12000 id = 34 }
      name  = "1er Grupo de Submarinos"
      type  = submarine
      model = 1
    }
  }
  airunit =
  { id       = { type = 12000 id = 9 }
    name     = "Aviación del Ejército"
    location = 667
    base     = 667
    division =
    { id       = { type = 12000 id = 10 }
      name     = "Grupo Aérea Nro. 1"
      strength = 50
      type     = interceptor
      model    = 0
      experience = 30
    }
  }
  airunit =
  { id       = { type = 12000 id = 11 }
    name     = "Aviación Naval"
    location = 667
    base     = 667
    division =
    { id       = { type = 12000 id = 12 }
      name     = "Fuerza Aeronaval Nro. 1"
      strength = 50
      type     = naval_bomber
      model    = 5
      experience = 30
    }
  }
}
