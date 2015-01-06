
##############################
# Country definition for YUG #
##############################

province = { id = 382 anti_air = 1 } # Zagreb
province =
{ id         = 384
  anti_air   = 1
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 3 current_size = 3 }
}              # Split
province = { id = 388 anti_air = 1 } # Dubrovnik
province =
{ id       = 453
  anti_air = 1
  air_base = { size = 6 current_size = 6 }
}            # Belgrade
province = { id = 454 anti_air = 1 } # Osijek

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
  money                  = 100
  capital                = 453
  manpower               = 155
  SpyInfo                = { country = "YUG" NumberOfSpies = 7 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 3
    freedom           = 5
    free_market       = 5
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 6
  }
  SpyInfo                = { country = "YUG" NumberOfSpies = 6 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  #SpyInfo                = { country = "FRA" NumberOfSpies = 3 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 3 }
  #SpyInfo                = { country = "CZE" NumberOfSpies = 6 }
  #SpyInfo                = { country = "AUS" NumberOfSpies = 6 }
  #SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  #SpyInfo                = { country = "HUN" NumberOfSpies = 6 }
  #SpyInfo                = { country = "BUL" NumberOfSpies = 6 }
  #SpyInfo                = { country = "ALB" NumberOfSpies = 6 }
  #SpyInfo                = { country = "GRE" NumberOfSpies = 8 }
  #SpyInfo                = { country = "ROM" NumberOfSpies = 9 }
  #SpyInfo                = { country = "ITA" NumberOfSpies = 8 }
  nationalprovinces      = { 380 459 455 454 453 382 381 383 384 385 386 387 388 389 451 452 418 415 493 494 413 414 }
  ownedprovinces         = { 380 459 455 454 453 382 381 383 384 385 386 387 388 389 451 452 418 415 493 494 413 414 }
  controlledprovinces    = { 380 459 455 454 453 382 381 383 384 385 386 387 388 389 451 452 418 415 493 494 413 414 }
  # Eastern Minor Tech '36
  # Group D 1939 techs
  # ######################
  techapps               = { 4010  4020  4030  4120  4130  2150  2010  2020  2290  2300  2310  1010  1020  1190  1200  1110  2290  2300  2310  2320
			     2400  2450  2460  2510  5010  5050  5080  5090  5190  5310  6010  9010  3010  3020  3030  3400  8040  8050  14000
			   }
  diplomacy =
  { relation = { tag = BUL value = 25 }
    relation = { tag = SLO value = 50 }
    relation = { tag = FIN value = 35 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GER value = 50 }
    relation = { tag = GRE value = 100 }
    relation = { tag = HUN value = -80 }
    relation = { tag = ITA value = 75 }
    relation = { tag = ROM value = 100 }
    relation = { tag = TUR value = 100 }
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
  dormant_ministers      = { 20002 20003 20004 20005 20006 }
  # #########################
  # ###YUGOSLAVIAN OOB####
  # #########################
  landunit =
  { id       = { type = 30007 id = 1 }
    location = 389
    name     = "IV. Kraljevska Jugoslavenska Armija"
    division =
    { id       = { type = 30007 id = 2 }
      name     = "27. Savska Pesadijska Divizija"
      strength = 70
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 30007 id = 3 }
      name     = "40. Slavonska Pesadijska Divizija"
      strength = 70
      type     = infantry
    }
    division =
    { id       = { type = 30007 id = 4 }
      name     = "42. Murska Pesadijska Divizija"
      strength = 70
      type     = infantry
    }
  }
  # ########################
  # #########################
  landunit =
  { id       = { type = 30007 id = 5 }
    location = 451
    name     = "VII. Kraljevska Jugoslavenska Armija"
    division =
    { id       = { type = 30007 id = 6 }
      name     = "32. Triglavska Pesadijska Divizija"
      strength = 100
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 30007 id = 7 }
      name     = "Triglavski Odred"
      strength = 100
      type     = bergsjaeger
    }
    division =
    { id       = { type = 30007 id = 11 }
      name     = "1. Konjicka Divizija"
      strength = 70
      type     = cavalry
    }
  }
  # ########################
  # #########################
  landunit =
  { id       = { type = 30007 id = 12 }
    name     = "I. Kraljevska Jugoslavenska Armija"
    location = 453
    division =
    { id       = { type = 30007 id = 13 }
      name     = "7. Potiska Pesadijska Divizija"
      strength = 100
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 30007 id = 14 }
      name     = "3. Konjicka Divizija"
      strength = 70
      type     = cavalry
    }
  }
  # ############################
  # ############################
  landunit =
  { id       = { type = 30007 id = 18 }
    location = 454
    name     = "II. Kraljevska Jugoslavenska Armija"
    division =
    { id       = { type = 30007 id = 19 }
      name     = "10. Bosanska Pesadijska Divizija"
      strength = 70
      type     = infantry
    }
    division =
    { id       = { type = 30007 id = 20 }
      name     = "17. Vrbaska Pesadijska Divizija"
      strength = 100
      type     = infantry
    }
  }
  # ###########################
  # ###########################
  landunit =
  { id       = { type = 30007 id = 22 }
    location = 454
    name     = "III. Kraljevska Jugoslavenska Armija"
    division =
    { id       = { type = 30007 id = 23 }
      name     = "13. Hercegovacka Pesadijska Divizija"
      strength = 70
      type     = infantry
    }
    division =
    { id       = { type = 30007 id = 24 }
      name     = "15. Zetska Pesadijska Divizija"
      strength = 70
      type     = infantry
    }
    division =
    { id       = { type = 30007 id = 25 }
      name     = "25. Vardarska Pesadijska Divizija"
      strength = 70
      type     = infantry
    }
    division =
    { id       = { type = 30007 id = 26 }
      name     = "31. Kosovska Pesadijska Divizija"
      strength = 70
      type     = infantry
    }
    division =
    { id       = { type = 30007 id = 27 }
      name     = "2. Konjicka Divizija"
      strength = 70
      type     = cavalry
    }
  }
  # #############################
  # ##############################
  landunit =
  { id       = { type = 30007 id = 28 }
    location = 452
    name     = "III. Kraljevska Teritorijalna Armija"
    division =
    { id       = { type = 30007 id = 29 }
      name     = "5. Sumadijska Pesadijska Divizija"
      strength = 70
      type     = infantry
    }
    division =
    { id       = { type = 30007 id = 30 }
      name     = "20. Bregalnicka Pesadijska Divizija"
      strength = 70
      type     = infantry
    }
    division =
    { id       = { type = 30007 id = 31 }
      name     = "46. Moravska Pesadijska Divizija"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30007 id = 33 }
      name     = "22. Ibarska Pesadijska Divizija"
      strength = 70
      type     = infantry
    }
  }
  # ##############################
  # ##############################
  landunit =
  { id       = { type = 30007 id = 34 }
    location = 383
    name     = "V. Nezavisna Armija"
    division =
    { id       = { type = 30007 id = 35 }
      name     = "8. Krajinska Pesadijska Divizija"
      strength = 70
      type     = infantry
    }
    division =
    { id       = { type = 30007 id = 36 }
      name     = "9. Timocka Pesadijska Divizija"
      strength = 70
      type     = infantry
    }
    division =
    { id       = { type = 30007 id = 37 }
      name     = "34. Toplicka Pesadijska Divizija"
      strength = 70
      type     = infantry
    }
    division =
    { id       = { type = 30007 id = 38 }
      name     = "50. Drinska Pesadijska Divizija"
      strength = 70
      type     = infantry
    }
    division =
    { id       = { type = 30007 id = 39 }
      name     = "4. Konjicka Jivizija"
      strength = 70
      type     = cavalry
    }
  }
  # ##############################
  # ##############################
  landunit =
  { id       = { type = 30007 id = 40 }
    location = 382
    name     = "VI. Nezavisna Armija"
    division =
    { id       = { type = 30007 id = 41 }
      name     = "3. Dunavska Pesadijska Divizija"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30007 id = 42 }
      name     = "49. Sremska Pesadijska Divizija"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30007 id = 43 }
      name     = "34. Toplicka Pesadijska Divizija"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30007 id = 44 }
      name     = "50. Drinska Pesadijska Divizija"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30007 id = 45 }
      name     = "5. Konjicka Divizija"
      strength = 70
      type     = cavalry
    }
  }
  navalunit =
  { id       = { type = 30007 id = 10 }
    name     = "Kraljevska Jugoslavenska Ratna Mornarica"
    location = 384
    base     = 384
    division =
    { id    = { type = 30007 id = 101 }
      name  = "1. Razaracka Flotila"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 30007 id = 102 }
      name  = "1. Podmornicka Flotila"
      type  = submarine
      model = 0
    }
  }
  # ###########################
  # ###########################
  airunit =
  { location = 453
    base     = 453
    id       = { type = 30007 id = 50 }
    name     = "Operativno Zrakoplovstvo"
    division =
    { id       = { type = 30007 id = 51 }
      name     = "2. Vazduhoplovni Lovacki Puk"
      strength = 30
      type     = interceptor
      model    = 0
    }
    division =
    { id       = { type = 30007 id = 52 }
      name     = "4. Vazduhoplovni Lovacki Puk"
      strength = 70
      type     = multi_role
      model    = 0
    }
    division =
    { id       = { type = 30007 id = 53 }
      name     = "26. Takticki Bombarderski Puk"
      strength = 30
      type     = tactical_bomber
      model    = 0
    }
    division =
    { id       = { type = 30007 id = 54 }
      name     = "1. Strateski Bombarderski Puk"
      strength = 30
      type     = strategic_bomber
      model    = 0
    }
  }
}
