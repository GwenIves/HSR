
##############################
# Country definition for HUN #
##############################

province = { id = 456 ic = 1 } # Pecs
province =
{ id       = 457
  ic       = 1
  anti_air = 2
  air_base = { size = 8 current_size = 8 }
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
    political_left    = 1
    free_market       = 4
    freedom           = 3
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 8
  }
  SpyInfo                = { country = "HUN" NumberOfSpies = 7 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 10 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 8 }
  #SpyInfo                = { country = "CZE" NumberOfSpies = 10 }
  #SpyInfo                = { country = "YUG" NumberOfSpies = 5 }
  #SpyInfo                = { country = "GER" NumberOfSpies = 10 }
  #SpyInfo                = { country = "BUL" NumberOfSpies = 5 }
  #SpyInfo                = { country = "ALB" NumberOfSpies = 4 }
  #SpyInfo                = { country = "GRE" NumberOfSpies = 5 }
  #SpyInfo                = { country = "ROM" NumberOfSpies = 5 }
  #SpyInfo                = { country = "ITA" NumberOfSpies = 8 }
  #SpyInfo                = { country = "FIN" NumberOfSpies = 4 }
  nationalprovinces      = { 456 457 458 491 492 497 428 496 498 476 477 478 490 499 493 }
  ownedprovinces         = { 456 457 458 491 492 497 499 }
  controlledprovinces    = { 456 457 458 491 492 497 499 }
  # Eastern Minor Tech '36
  # Group C 1939 techs
  # ######################
  techapps               = { 5070  4010  4020  4120  4130  2150  2010  2020  2030  2040  2290  2300  2310  2320  2330  2400  2450  2460  2510  1010
			     1020  1190  1200  1110  9010  9020  5010  5020  5030  5050  5080  5090  5100  5110  5190  5200  6010  6020  14000
			   }
  diplomacy =
  { relation = { tag = SLO value = -20 }
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
  headofgovernment       = { type = 9 id = 21055 }
  foreignminister        = { type = 9 id = 21070 }
  armamentminister       = { type = 9 id = 21084 }
  ministerofsecurity     = { type = 9 id = 21099 }
  ministerofintelligence = { type = 9 id = 21118 }
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
      name     = "6. gyalog hadoszt�ly"
      strength = 100
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 30005 id = 3 }
      name     = "7. gyalog hadoszt�ly"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30005 id = 4 }
      name     = "10. gyalog hadoszt�ly"
      strength = 100
      type     = infantry
      extra    = anti_tank
    }
  }
  # #######################
  # ########################
  landunit =
  { id       = { type = 30005 id = 5 }
    name     = "I �lland�EHadsereg"
    location = 497
    division =
    { id       = { type = 30005 id = 6 }
      name     = "12. gyalog hadoszt�ly"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30005 id = 7 }
      name     = "13. gyalog hadoszt�ly"
      strength = 100
      type     = infantry
      extra    = engineer
    }
    division =
    { id       = { type = 30005 id = 8 }
      name     = "16. gyalog hadoszt�ly"
      strength = 100
      type     = infantry
    }
  }
  # ############################
  # ############################
  landunit =
  { id       = { type = 30005 id = 9 }
    name     = "II �lland�EHadsereg"
    location = 491
    division =
    { id       = { type = 30005 id = 10 }
      name     = "20. gyalog hadoszt�ly"
      strength = 100
      type     = infantry
      extra    = anti_air
    }
    division =
    { id       = { type = 30005 id = 11 }
      name     = "24. gyalog hadoszt�ly"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30005 id = 12 }
      name     = "25. gyalog hadoszt�ly"
      strength = 100
      type     = infantry
    }
  }
  # ################################
  # ################################
  airunit =
  { id       = { type = 30005 id = 13 }
    name     = "I L�g�EHadsereg"
    location = 457
    base     = 457
    division =
    { id       = { type = 30005 id = 14 }
      name     = "I.Vad�szoszt�ly"
      type     = interceptor
      model    = 0
      strength = 30
    }
    division =
    { id       = { type = 30005 id = 15 }
      name     = "I.Vad�szbomb�z�EOszt�ly"
      type     = tactical_bomber
      model    = 0
      strength = 30
    }
  }
}
