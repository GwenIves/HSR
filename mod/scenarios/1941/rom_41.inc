
##############################
# Country definition for ROM #
##############################

province =
{ id       = 424
  anti_air = 3
  air_base = { size = 8 current_size = 8 }
}            # Bucharest
province = { id = 431 ic = 7 anti_air = 3 } # Ploesti

#####################
# Country main data #
#####################

country =
{ tag                    = ROM
  # relation = { tag = YUG value = 100 }
  capital                = 424
  belligerence           = 5
  manpower               = 150
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 2
    freedom           = 4
    free_market       = 4
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 6
  }
  SpyInfo                = { country = "ROM" NumberOfSpies = 8 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 5 }
  #SpyInfo                = { country = "YUG" NumberOfSpies = 5 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 5 }
  #SpyInfo                = { country = "VIC" NumberOfSpies = 5 }
  #SpyInfo                = { country = "AUS" NumberOfSpies = 5 }
  #SpyInfo                = { country = "GER" NumberOfSpies = 5 }
  #SpyInfo                = { country = "HUN" NumberOfSpies = 5 }
  #SpyInfo                = { country = "ALB" NumberOfSpies = 5 }
  #SpyInfo                = { country = "GRE" NumberOfSpies = 5 }
  #SpyInfo                = { country = "BUL" NumberOfSpies = 8 }
  #SpyInfo                = { country = "ITA" NumberOfSpies = 5 }
  nationalprovinces      = { 423 424 425 431 426 495 496 498 427 428 429 430 432 436 433 435 230 434 }
  ownedprovinces         = { 424 425 431 426 495 496 427 429 430 432 436 }
  controlledprovinces    = { 424 425 431 426 495 496 427 429 430 432 436 }
  # Group C 1941 techs
  # ######################
  techapps               = { 5070  6070  6060  1230  2220  4190  4010  4020  4030  4040  4120  4130  4140  2010  2020  2030  2040  2050  2150  2290
			     2300  2310  2320  2330  2400  2410  2450  2460  2470  2510  2520  1010  1020  1030  1190  1200  1210  1220  1110  2330
			     9010  9020  9030  5010  5020  5050  5080  5090  5100  5110  5190  5200  5470  6010  6020  6040  3010  3020  3030  3400
			     8040  8050  14000
			   }
  diplomacy =
  { relation = { tag = BUL value = 125 }
    relation = { tag = SLO value = 20 }
    relation = { tag = ENG value = -200 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = -200 }
    relation =
    { tag        = GER
      value      = 200
      guaranteed = { day = 27 month = september year = 1940 }
    }
    relation =
    { tag        = HUN
      value      = 125
      guaranteed = { day = 20 month = november year = 1940 }
    }
    relation =
    { tag        = ITA
      value      = 150
      guaranteed = { day = 20 month = november year = 1940 }
    }
    relation =
    { tag        = JAP
      value      = 125
      guaranteed = { day = 27 month = september year = 1940 }
    }
    relation = { tag = SOV value = -200 }
    relation = { tag = TUR value = 100 }
  }
  headofstate            = { type = 9 id = 22035 }
  headofgovernment       = { type = 9 id = 22048 }
  foreignminister        = { type = 9 id = 22077 }
  armamentminister       = { type = 9 id = 22093 }
  ministerofsecurity     = { type = 9 id = 22106 }
  ministerofintelligence = { type = 9 id = 22119 }
  chiefofstaff           = { type = 9 id = 22127 }
  chiefofarmy            = { type = 9 id = 22136 }
  chiefofnavy            = { type = 9 id = 22147 }
  chiefofair             = { type = 9 id = 22158 }
  dormant_ministers      = { 22053 }
  landunit =
  { location = 436
    id       = { type = 19002 id = 1100 }
    name     = "Romanian Army HQ"
    division =
    { id       = { type = 19002 id = 1101 }
      name     = "Romanian Army HQ"
      type     = hq
      model    = 1
      strength = 100
    }
  }
  landunit =
  { location = 436
    name     = "3. Corps"
    id       = { type = 19002 id = 1 }
    division =
    { id       = { type = 19002 id = 2 }
      name     = "Guards Infantry Division"
      type     = infantry
      model    = 3
      strength = 100
      extra    = artillery
    }
    division =
    { id       = { type = 19002 id = 3 }
      name     = "15. Infantry Division"
      type     = infantry
      model    = 1
      strength = 100
    }
    division =
    { id       = { type = 19002 id = 4 }
      name     = "35. Infantry Division"
      type     = infantry
      strength = 100
      model    = 1
    }
  }
  landunit =
  { location = 436
    name     = "5. Corps"
    id       = { type = 19002 id = 5 }
    division =
    { id       = { type = 19002 id = 6 }
      name     = "21. Infantry Division"
      type     = infantry
      strength = 100
      model    = 1
      extra    = artillery
    }
    division =
    { id       = { type = 19002 id = 7 }
      name     = "2. Motorized Division"
      type     = motorized
      model    = 0
      strength = 100
      extra    = SP_artillery
    }
  }
  landunit =
  { location = 432
    name     = "11. Corps"
    id       = { type = 19002 id = 8 }
    division =
    { id       = { type = 19002 id = 9 }
      name     = "1. Fort Division"
      type     = garrison
      model    = 0
      strength = 100
      extra    = artillery
    }
  }
  landunit =
  { location = 424
    name     = "7. Corps"
    id       = { type = 19002 id = 10 }
    division =
    { id       = { type = 19002 id = 11 }
      name     = "18. Infantry Division"
      type     = infantry
      strength = 50
      model    = 1
    }
    division =
    { id       = { type = 19002 id = 12 }
      name     = "19. Infantry Division"
      type     = infantry
      strength = 50
      model    = 1
    }
    division =
    { id       = { type = 19002 id = 13 }
      name     = "20. Infantry Division"
      type     = infantry
      strength = 50
      model    = 1
    }
  }
  landunit =
  { location = 431
    name     = "6. Corps"
    id       = { type = 19002 id = 14 }
    division =
    { id       = { type = 19002 id = 15 }
      name     = "1. Infantry Division"
      type     = infantry
      strength = 50
      model    = 1
    }
    division =
    { id       = { type = 19002 id = 16 }
      name     = "2. Infantry Division"
      type     = infantry
      strength = 50
      model    = 1
    }
    division =
    { id       = { type = 19002 id = 17 }
      name     = "4. Infantry Division"
      type     = infantry
      strength = 50
      model    = 1
    }
  }
  landunit =
  { location = 429
    name     = "1. Cavalry Corps"
    id       = { type = 19002 id = 18 }
    division =
    { id       = { type = 19002 id = 19 }
      name     = "5. Cavalry Division"
      type     = cavalry
      model    = 0
      strength = 100
    }
    division =
    { id       = { type = 19002 id = 20 }
      name     = "6. Infantry Division"
      type     = infantry
      strength = 100
      model    = 1
      extra    = artillery
    }
  }
  landunit =
  { location = 429
    name     = "1. Mountain Corps"
    id       = { type = 19002 id = 21 }
    division =
    { id       = { type = 19002 id = 22 }
      name     = "1. Mountain Division"
      type     = bergsjaeger
      strength = 100
      model    = 0
      extra    = artillery
    }
    division =
    { id       = { type = 19002 id = 23 }
      name     = "7. Infantry Division"
      type     = infantry
      strength = 100
      model    = 1
    }
  }
  landunit =
  { location = 429
    name     = "6. Corps"
    id       = { type = 19002 id = 24 }
    division =
    { id       = { type = 19002 id = 25 }
      name     = "9. Infantry Division"
      type     = infantry
      strength = 100
      model    = 1
    }
    division =
    { id       = { type = 19002 id = 26 }
      name     = "10. Infantry Division"
      type     = infantry
      strength = 100
      model    = 1
      extra    = artillery
    }
  }
  navalunit =
  { location = 423 # Constanta
    base     = 423
    name     = "Flota Romania de Mare"
    id       = { type = 19002 id = 27 }
    division =
    { id    = { type = 19002 id = 28 }
      name  = "'NMS Regele Ferdinand' Flotila"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 19002 id = 29 }
      name  = "'NMS Delfinul' Flotila"
      type  = submarine
      model = 1
    }
  }
  airunit =
  { location = 424
    base     = 424
    name     = "Gruparea Aeriana de Lupta"
    id       = { type = 19002 id = 30 }
    division =
    { id       = { type = 19002 id = 31 }
      name     = "Grup 1 Avion de Vanatoare"
      type     = interceptor
      model    = 2
      strength = 100
    }
    division =
    { id       = { type = 19002 id = 32 }
      name     = "Grup 1 Tactic Bombardier"
      type     = tactical_bomber
      model    = 1
      strength = 100
    }
  }
  airunit =
  { location = 423
    base     = 423
    name     = "Grup 1 Hidroavioane"
    id       = { type = 19002 id = 33 }
    division =
    { id       = { type = 19002 id = 34 }
      name     = "Grup 1 Hidroavioane"
      type     = naval_bomber
      model    = 0
      strength = 100
    }
  }
}
