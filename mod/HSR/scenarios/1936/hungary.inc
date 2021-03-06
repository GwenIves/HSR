#
# by Aregorn for HSR2_DD
#
##############################
# Country definition for HUN #
##############################

province = { id = 456 ic = 2 } # Pecs
province =
{ id       = 457
  anti_air = 2
  air_base = { size = 8 current_size = 8 }
  ic       = 2
}            # Budapest
province = { id = 497 ic = 2 } # Debrecen

#####################
# Country main data #
#####################

country =
{ tag                    = HUN
  manpower               = 150
  capital                = 457

	research_mod = 1.15
	extra_tc = 10
	peacetime_ic_mod = 0.75

  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  diplomacy =
  { relation =
    { tag        = AUS
      value      = 100
      guaranteed = { day = 17 month = march year = 1934 }
    }
    relation = { tag = CZE value = -50 }
    relation = { tag = ENG value = -50 }
    relation = { tag = FIN value = 75 }
    relation = { tag = FRA value = -70 }
    relation = { tag = GER value = 100 }
    relation = { tag = IRE value = 25 }
    relation = { tag = ITA value = 125 }
    relation = { tag = POL value = 50 }
    relation = { tag = ROM value = 1 }
    relation = { tag = YUG value = 80 }
  }

  SpyInfo                = { country = "HUN" NumberOfSpies = 7 }

  nationalprovinces      = { 456 457 458 491 492 497 428 496 498 476 477 478 490 499 493 494 495 427 }
  ownedprovinces         = { 456 457 458 491 492 497 }
  controlledprovinces    = { 456 457 458 491 492 497 }
  # Eastern Minor Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 4010  4120  2150  2010  2020  2290  2300  2310  2450  2460  2400  2510  1010  1190  1110  9010  5010  5020  5080
			     5090  5190  6010  6020  14000
			   }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 1
    free_market       = 4
    freedom           = 3
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 21001 }
  headofgovernment       = { type = 9 id = 21002 }
  foreignminister        = { type = 9 id = 21003 }
  armamentminister       = { type = 9 id = 21004 }
  ministerofsecurity     = { type = 9 id = 21005 }
  ministerofintelligence = { type = 9 id = 21006 }
  chiefofstaff           = { type = 9 id = 21007 }
  chiefofarmy            = { type = 9 id = 21008 }
  chiefofnavy            = { type = 9 id = 21009 }
  chiefofair             = { type = 9 id = 21010 }
  landunit =
  { id       = { type = 20500 id = 1 }
    name     = "Magyar Hadsereg"
    location = 457
    division =
    { id       = { type = 20500 id = 2 }
      name     = "6. gyalog hadosztály"
      strength = 100
      type     = infantry
      extra    = artillery
      experience = 20
    }
    division =
    { id       = { type = 20500 id = 3 }
      name     = "7. gyalog hadosztály"
      strength = 100
      type     = infantry
      experience = 10
    }
    division =
    { id       = { type = 20500 id = 4 }
      name     = "10. gyalog hadosztály"
      strength = 100
      type     = infantry
      extra    = anti_tank
      experience = 20
    }
  }
  landunit =
  { id       = { type = 20500 id = 5 }
    name     = "I Állandó Hadsereg"
    location = 457
    division =
    { id       = { type = 20500 id = 6 }
      name     = "12. gyalog hadosztály"
      strength = 100
      type     = infantry
      experience = 10
    }
    division =
    { id       = { type = 20500 id = 7 }
      name     = "13. gyalog hadosztály"
      strength = 100
      type     = infantry
      experience = 10
    }
    division =
    { id       = { type = 20500 id = 8 }
      name     = "16. gyalog hadosztály"
      strength = 100
      type     = infantry
      experience = 10
    }
  }
  landunit =
  { id       = { type = 20500 id = 9 }
    name     = "II Állandó Hadsereg"
    location = 457
    division =
    { id       = { type = 20500 id = 10 }
      name     = "20. gyalog hadosztály"
      strength = 100
      type     = infantry
      extra    = anti_air
      experience = 20
    }
    division =
    { id       = { type = 20500 id = 11 }
      name     = "24. gyalog hadosztály"
      strength = 100
      type     = infantry
      experience = 10
    }
    division =
    { id       = { type = 20500 id = 12 }
      name     = "25. gyalog hadosztály"
      strength = 100
      type     = infantry
      experience = 10
    }
  }
  airunit =
  { id       = { type = 20500 id = 13 }
    name     = "I Légí Hadsereg"
    location = 457
    base     = 457
    division =
    { id       = { type = 20500 id = 14 }
      name     = "I.Vadászosztály"
      type     = interceptor
      model    = 0
      strength = 30
    }
    division =
    { id       = { type = 20500 id = 15 }
      name     = "I.Vadászbombázó Osztály"
      type     = tactical_bomber
      model    = 0
      strength = 30
    }
  }
}
