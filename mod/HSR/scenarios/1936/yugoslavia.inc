#
# by Aregorn for HSR2_DD
#
##############################
# Country definition for YUG #
##############################

province = { id = 382 anti_air = 2 } # Zagreb
province =
{ id         = 384
  anti_air   = 2
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 3 current_size = 3 }
}              # Split
province = { id = 388 anti_air = 2 } # Dubrovnik
province =
{ id         = 389
  naval_base = { size = 3 current_size = 3 }
}              # Podgorica
province =
{ id       = 453
  anti_air = 3
  air_base = { size = 6 current_size = 6 }
}            # Belgrade

#####################
# Country main data #
#####################

country =
{ tag                    = YUG
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 15
  capital                = 453

	research_mod = 1.15
	peacetime_ic_mod = 0.75
	extra_tc = 10

  manpower               = 155
  diplomacy =
  { relation = { tag = BUL value = 25 }
    relation = { tag = CZE value = 50 }
    relation = { tag = FIN value = 35 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GER value = 50 }
    relation =
    { tag        = GRE
      value      = 100
      guaranteed = { day = 30 month = december year = 1934 }
    }
    relation = { tag = HUN value = 80 }
    relation = { tag = ITA value = 75 }
    relation =
    { tag        = ROM
      value      = 100
      guaranteed = { day = 30 month = december year = 1934 }
    }
    relation =
    { tag        = TUR
      value      = 100
      guaranteed = { day = 30 month = december year = 1934 }
    }
  }

  SpyInfo                = { country = "YUG" NumberOfSpies = 6 }

  nationalprovinces      = { 380 459 455 454 453 382 381 383 384 385 386 387 388 389 451 452 418 415 493 494 413 414 }
  ownedprovinces         = { 380 459 455 454 453 382 381 383 384 385 386 387 388 389 451 452 418 415 493 494 413 414 }
  controlledprovinces    = { 380 459 455 454 453 382 381 383 384 385 386 387 388 389 451 452 418 415 493 494 413 414 }
  # Eastern Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 5190 4120 9010 6210 6300 3010 3020 3030 3400 8040
			     8050
			   }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 5
    free_market       = 5
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 20001 }
  headofgovernment       = { type = 9 id = 20002 }
  foreignminister        = { type = 9 id = 20003 }
  armamentminister       = { type = 9 id = 20004 }
  ministerofsecurity     = { type = 9 id = 20005 }
  ministerofintelligence = { type = 9 id = 20006 }
  chiefofstaff           = { type = 9 id = 20007 }
  chiefofarmy            = { type = 9 id = 20008 }
  chiefofnavy            = { type = 9 id = 20009 }
  chiefofair             = { type = 9 id = 20010 }
  landunit =
  { id       = { type = 19800 id = 1 }
    location = 453
    name     = "IV. Kraljevska Jugoslavenska Armija"
    division =
    { id       = { type = 19800 id = 2 }
      name     = "27. Savska Pesadijska Divizija"
      strength = 70
      type     = infantry
      extra    = artillery
    }
  }
  landunit =
  { id       = { type = 19800 id = 3 }
    location = 453
    name     = "VII. Kraljevska Jugoslavenska Armija"
    division =
    { id       = { type = 19800 id = 4 }
      name     = "32. Triglavska Pesadijska Divizija"
      strength = 70
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 19800 id = 5 }
      name     = "Triglavski Odred"
      strength = 70
      type     = bergsjaeger
    }
    division =
    { id       = { type = 19800 id = 6 }
      name     = "1. Konjicka Divizija"
      strength = 70
      type     = cavalry
    }
  }
  landunit =
  { id       = { type = 19800 id = 7 }
    name     = "I. Kraljevska Jugoslavenska Armija"
    location = 453
    division =
    { id       = { type = 19800 id = 8 }
      name     = "7. Potiska Pesadijska Divizija"
      strength = 70
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 19800 id = 9 }
      name     = "3. Konjicka Divizija"
      strength = 70
      type     = cavalry
    }
  }
  landunit =
  { id       = { type = 19800 id = 10 }
    location = 386
    name     = "II. Kraljevska Jugoslavenska Armija"
    division =
    { id       = { type = 19800 id = 11 }
      name     = "10. Bosanska Pesadijska Divizija"
      strength = 70
      type     = infantry
      extra    = anti_air
    }
    division =
    { id       = { type = 19800 id = 12 }
      name     = "17. Vrbaska Pesadijska Divizija"
      strength = 70
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 19800 id = 13 }
    location = 415
    name     = "III. Kraljevska Jugoslavenska Armija"
    division =
    { id       = { type = 19800 id = 14 }
      name     = "13. Hercegovacka Pesadijska Divizija"
      strength = 70
      type     = infantry
    }
    division =
    { id       = { type = 19800 id = 15 }
      name     = "15. Zetska Pesadijska Divizija"
      strength = 70
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 19800 id = 16 }
    location = 384
    name     = "III. Kraljevska Teritorijalna Armija"
    division =
    { id       = { type = 19800 id = 17 }
      name     = "5. Sumadijska Pesadijska Divizija"
      strength = 70
      type     = infantry
      extra    = anti_air
    }
    division =
    { id       = { type = 19800 id = 18 }
      name     = "20. Bregalnicka Pesadijska Divizija"
      strength = 70
      type     = infantry
    }
    division =
    { id       = { type = 19800 id = 19 }
      name     = "22. Ibarska Pesadijska Divizija"
      strength = 70
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 19800 id = 20 }
    location = 380
    name     = "V. Nezavisna Armija"
    division =
    { id       = { type = 19800 id = 21 }
      name     = "8. Krajinska Pesadijska Divizija"
      strength = 70
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 19800 id = 22 }
      name     = "9. Timocka Pesadijska Divizija"
      strength = 70
      type     = infantry
    }
    division =
    { id       = { type = 19800 id = 23 }
      name     = "2. Konjicka Divizija"
      strength = 70
      type     = cavalry
    }
  }
  landunit =
  { id       = { type = 19800 id = 24 }
    location = 453
    name     = "VI. Nezavisna Armija"
    division =
    { id       = { type = 19800 id = 25 }
      name     = "3. Dunavska Pesadijska Divizija"
      strength = 70
      type     = infantry
    }
    division =
    { id       = { type = 19800 id = 26 }
      name     = "4. Konjicka Divizija"
      strength = 70
      type     = cavalry
    }
  }
  # ##########################
  # ##########################
  navalunit =
  { id       = { type = 19800 id = 30 }
    name     = "Kraljevska Jugoslavenska Ratna Mornarica"
    location = 384
    base     = 384
    division =
    { id       = { type = 19800 id = 32 }
      name     = "1. Razaracka Flotila"
      type     = destroyer
      model    = 1
      strength = 40
    }
    division =
    { id    = { type = 19800 id = 33 }
      name  = "1. Podmornicka Flotila"
      type  = submarine
      model = 0
    }
  }
  airunit =
  { location = 453
    base     = 453
    id       = { type = 19800 id = 27 }
    name     = "Operativno Zrakoplovstvo"
    division =
    { id       = { type = 19800 id = 28 }
      name     = "2. Vazduhoplovni Lovacki Puk"
      strength = 30
      type     = interceptor
      model    = 0
    }
    division =
    { id       = { type = 19800 id = 29 }
      name     = "26. Takticki Bombarderski Puk"
      strength = 30
      type     = tactical_bomber
      model    = 0
    }
  }
}
