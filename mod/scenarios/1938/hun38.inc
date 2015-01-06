
##############################
# Country definition for HUN #
##############################

province = { id = 456 ic = 1 } # Pecs
province =
{ id       = 457
  ic       = 1
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            # Budapest
province = { id = 497 ic = 1 } # Debrecen

#####################
# Country main data #
#####################

country =
{ tag                    = HUN
  manpower               = 150
  capital                = 457
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 2
    free_market       = 4
    freedom           = 3
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 5
  }
  SpyInfo                = { country = "HUN" NumberOfSpies = 7 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 8 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 8 }
  #SpyInfo                = { country = "CZE" NumberOfSpies = 5 }
  #SpyInfo                = { country = "AUS" NumberOfSpies = 5 }
  #SpyInfo                = { country = "YUG" NumberOfSpies = 8 }
  #SpyInfo                = { country = "GER" NumberOfSpies = 8 }
  #SpyInfo                = { country = "BUL" NumberOfSpies = 8 }
  #SpyInfo                = { country = "ALB" NumberOfSpies = 3 }
  #SpyInfo                = { country = "GRE" NumberOfSpies = 3 }
  #SpyInfo                = { country = "ROM" NumberOfSpies = 8 }
  #SpyInfo                = { country = "ITA" NumberOfSpies = 6 }
  #SpyInfo                = { country = "FIN" NumberOfSpies = 3 }
  nationalprovinces      = { 382 428 454 455 456 457 458 476 477 478 490 491 492 493 494 495 496 497 498 499 }
  ownedprovinces         = { 456 457 458 491 492 497 }
  controlledprovinces    = { 456 457 458 491 492 497 }
  # Great War Infantry
  techapps               = { 1010  1020  1110  1190  1200  2010  2020  2030  2040  2150  2290  2300  2310  2320  2400  2450  2460  2510  4010  4020
			     4120  4130  5010  5050  5080  5090  5190  5200  6010  6020  9010  9020  14000
			   }
  diplomacy =
  { #relation = { tag = SLO value = -20 }
    relation = { tag = ENG value = -50 }
    relation = { tag = FIN value = 75 }
    relation = { tag = FRA value = -70 }
    relation = { tag = GER value = 150 }
    relation = { tag = ITA value = 125 }
    relation = { tag = POL value = 50 }
    relation = { tag = ROM value = -50 }
    relation = { tag = YUG value = -80 }
  }
  headofstate            = { type = 9 id = 21001 }
  headofgovernment       = { type = 9 id = 21054 }
  foreignminister        = { type = 9 id = 21069 }
  armamentminister       = { type = 9 id = 21084 }
  ministerofsecurity     = { type = 9 id = 21098 }
  ministerofintelligence = { type = 9 id = 21117 }
  chiefofstaff           = { type = 9 id = 21131 }
  chiefofarmy            = { type = 9 id = 21142 }
  chiefofnavy            = { type = 9 id = 21009 }
  chiefofair             = { type = 9 id = 21161 }
  dormant_ministers      = { 21048 21002 21053 21054 21003 21069 21005 21006 21007 21008 21010 21004 }
  landunit =
  { id       = { type = 30005 id = 1 }
    name     = "Magyar Hadsereg"
    location = 457
    division =
    { id       = { type = 30005 id = 2 }
      name     = "6. gyalog hadoszt·ly"
      strength = 100
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 30005 id = 3 }
      name     = "7. gyalog hadoszt·ly"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30005 id = 4 }
      name     = "10. gyalog hadoszt·ly"
      strength = 100
      type     = infantry
      extra    = anti_tank
    }
  }
  # #######################
  # ########################
  landunit =
  { id       = { type = 30005 id = 5 }
    name     = "I ¡llandÅEHadsereg"
    location = 497
    division =
    { id       = { type = 30005 id = 6 }
      name     = "12. gyalog hadoszt·ly"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30005 id = 7 }
      name     = "13. gyalog hadoszt·ly"
      strength = 100
      type     = infantry
      extra    = engineer
    }
    division =
    { id       = { type = 30005 id = 8 }
      name     = "16. gyalog hadoszt·ly"
      strength = 100
      type     = infantry
    }
  }
  # ############################
  # ############################
  landunit =
  { id       = { type = 30005 id = 9 }
    name     = "II ¡llandÅEHadsereg"
    location = 491
    division =
    { id       = { type = 30005 id = 10 }
      name     = "20. gyalog hadoszt·ly"
      strength = 100
      type     = infantry
      extra    = anti_air
    }
    division =
    { id       = { type = 30005 id = 11 }
      name     = "24. gyalog hadoszt·ly"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30005 id = 12 }
      name     = "25. gyalog hadoszt·ly"
      strength = 100
      type     = infantry
    }
  }
  # ################################
  # ################################
  airunit =
  { id       = { type = 30005 id = 13 }
    name     = "I LÈgÅEHadsereg"
    location = 457
    base     = 457
    division =
    { id       = { type = 30005 id = 14 }
      name     = "I.Vad·szoszt·ly"
      type     = interceptor
      model    = 0
      strength = 30
    }
    division =
    { id       = { type = 30005 id = 15 }
      name     = "I.Vad·szbomb·zÅEOszt·ly"
      type     = tactical_bomber
      model    = 0
      strength = 30
    }
  }
}


