
##############################
# Country definition for HUN #
##############################

province = { id = 456 ic = 6 } # Pecs
province = { id = 457 anti_air = 6 ic = 9 } # Budapest
province = { id = 491 ic = 6 } # Miskolc
province =
{ id       = 497
  anti_air = 6
  ic       = 6
  air_base = { size = 7 current_size = 7 }
}            # Debrecen

#####################
# Country main data #
#####################

country =
{ tag                    = HUN
  belligerence           = 3
  manpower               = 150
  capital                = 457
  # Resource Reserves
  energy                 = 3000
  metal                  = 3500
  rare_materials         = 2000
  oil                    = 500
  supplies               = 3000
  money                  = 60
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 1
    free_market       = 4
    freedom           = 3
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 8
  }
  SpyInfo                = { country = "HUN" NumberOfSpies = 8 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 6}
  #SpyInfo                = { country = "SOV" NumberOfSpies = 7}
  #SpyInfo                = { country = "CZE" NumberOfSpies = 12}
  #SpyInfo                = { country = "YUG" NumberOfSpies = 6}
  #SpyInfo                = { country = "GER" NumberOfSpies = 12 }
  #SpyInfo                = { country = "BUL" NumberOfSpies = 6}
  #SpyInfo                = { country = "ALB" NumberOfSpies = 5}
  #SpyInfo                = { country = "GRE" NumberOfSpies = 6}
  #SpyInfo                = { country = "ROM" NumberOfSpies = 6}
  #SpyInfo                = { country = "ITA" NumberOfSpies = 7}
  #SpyInfo                = { country = "FIN" NumberOfSpies = 5}
  nationalprovinces      = { 456 457 458 491 492 497 428 496 498 476 477 478 490 499 493 }
  ownedprovinces         = { 456 457 458 491 492 497 428 493 498 499 }
  controlledprovinces    = { 456 457 458 491 492 497 428 493 498 499 }
  # Eastern Minor Tech '36
  # Group C 1944 techs
  # ######################
  techapps               = { 5070  4010  4020  4030  4040  4050  4060  4120  4130  4140  4170  4190  4250  2010  2020  2030  2040  2050  2060  2070
			     2080  2150  2160  2170  2180  2220  2230  2290  2300  2310  2320  2330  2340  2400  2410  2450  2460  2470  2510  2520
			     2530  1010  1020  1030  1040  1190  1200  1210  1220  1110  1120  1070  2330  1310  9010  9020  9030  9040  5010
			     5020  5050  5060  5080  5090  5100  5110  5120  5190  5200  5210  5220  5310  5350  5360  5470  6010  6020  6040  6050
			     6060  6070  5320  14000 14010 14020
			   }
  # relation = { tag = AUS value = 100 }
  diplomacy =
  { relation = { tag = BUL value = 125 }
    # relation = { tag = SLO value = -20 }
    relation = { tag = ENG value = -200 }
    relation = { tag = FIN value = 200 }
    relation = { tag = FRA value = -200 }
    relation =
    { tag        = GER
      value      = 200
      guaranteed = { day = 27 month = september year = 1942 }
    }
    # relation = { tag = ITA value = 200 }
    relation =
    { tag        = JAP
      value      = 200
    }
    # relation = { tag = POL value = 50 }
    relation =
    { tag        = ROM
      value      = 125
      guaranteed = { day = 20 month = november year = 1942 }
    }
  }
  # relation = { tag = YUG value = -80 }
  dormant_ministers      = { 21048 21002 21053 21054 21003 21069 21005 21006 21007 21008 21010 21055 21070 21176 21161 21056 21175 21057 21071 21177
			     21178 21179 21004
			   }
  dormant_leaders        = { 31102 31121 31164 31114 31120 31126 31132 31135 31147 31154 31156 31165 31175 31182 31189 31196 31199 }
  headofstate            = { type = 9 id = 21042 }
  headofgovernment       = { type = 9 id = 21052 }
  foreignminister        = { type = 9 id = 21066 }
  armamentminister       = { type = 9 id = 21082 }
  ministerofsecurity     = { type = 9 id = 21096 }
  ministerofintelligence = { type = 9 id = 21116 }
  chiefofstaff           = { type = 9 id = 21129 }
  chiefofarmy            = { type = 9 id = 21140 }
  chiefofnavy            = { type = 9 id = 21151 }
  chiefofair             = { type = 9 id = 21159 }
  # ##################
  # ##HUNGARIAN OOB###
  # ##################
  landunit =
  { id       = { type = 10633 id = 1 }
    name     = "2nd Army"
    location = 457
    division =
    { experience = 20
      id         = { type = 10633 id = 3 }
      name       = "3. gyalog hadosztály"
      type       = infantry
      model      = 2
      strength   = 45
    }
    division =
    { experience = 20
      id         = { type = 10633 id = 4 }
      name       = "6. gyalog hadosztály"
      type       = infantry
      model      = 2
      strength   = 45
    }
    division =
    { experience = 20
      id         = { type = 10633 id = 5 }
      name       = "7. gyalog hadosztály"
      type       = infantry
      model      = 2
      strength   = 45
    }
    division =
    { experience = 20
      id         = { type = 10633 id = 6 }
      name       = "8. gyalog hadosztály"
      type       = infantry
      model      = 2
      strength   = 45
    }
    division =
    { experience = 20
      id         = { type = 10633 id = 7 }
      name       = "10. gyalog hadosztály"
      type       = infantry
      model      = 2
      strength   = 45
    }
    division =
    { experience = 20
      id         = { type = 10633 id = 8 }
      name       = "12. gyalog hadosztály"
      type       = infantry
      model      = 2
      strength   = 45
    }
    division =
    { experience = 20
      id         = { type = 10633 id = 9 }
      name       = "13. gyalog hadosztály"
      type       = infantry
      model      = 2
      strength   = 45
    }
    division =
    { experience = 20
      id         = { type = 10633 id = 10 }
      name       = "14. gyalog hadosztály"
      type       = infantry
      model      = 2
      strength   = 45
    }
    division =
    { experience = 20
      id         = { type = 10633 id = 11 }
      name       = "15. gyalog hadosztály"
      type       = infantry
      model      = 2
      strength   = 45
    }
    division =
    { experience = 20
      id         = { type = 10633 id = 12 }
      name       = "17. gyalog hadosztály"
      type       = infantry
      model      = 2
      strength   = 45
    }
    division =
    { experience = 20
      id         = { type = 10633 id = 13 }
      name       = "21. gyalog hadosztály"
      type       = infantry
      model      = 2
      strength   = 45
    }
    division =
    { experience = 20
      id         = { type = 10633 id = 14 }
      name       = "22. gyalog hadosztály"
      type       = infantry
      model      = 2
      strength   = 45
    }
    division =
    { experience = 20
      id         = { type = 10633 id = 15 }
      name       = "23. gyalog hadosztály"
      type       = infantry
      model      = 2
      strength   = 45
    }
    division =
    { experience = 20
      id         = { type = 10633 id = 16 }
      name       = "25. gyalog hadosztály"
      type       = infantry
      model      = 2
      strength   = 45
    }
    division =
    { experience = 20
      id         = { type = 10633 id = 17 }
      name       = "26. gyalog hadosztály"
      type       = infantry
      model      = 2
      strength   = 45
    }
  }
  landunit =
  { id       = { type = 10633 id = 18 }
    name     = "1st Corps"
    location = 457
    division =
    { experience = 20
      id         = { type = 10633 id = 19 }
      name       = "1. gyalog hadosztály"
      type       = cavalry
      model      = 2
      strength   = 45
    }
    division =
    { experience = 20
      id         = { type = 10633 id = 20 }
      name       = "5. gyalog hadosztály"
      type       = infantry
      model      = 2
      strength   = 45
    }
    division =
    { experience = 20
      id         = { type = 10633 id = 21 }
      name       = "23. gyalog hadosztály"
      type       = infantry
      model      = 2
      strength   = 45
    }
    division =
    { experience = 20
      id         = { type = 10633 id = 22 }
      name       = "4. gyalog hadosztály"
      type       = cavalry
      model      = 2
      strength   = 45
    }
  }
  airunit =
  { id       = { type = 10633 id = 33 }
    name     = "1st Army Air Force"
    location = 497
    base     = 497
    division =
    { experience = 20
      id         = { type = 10633 id = 34 }
      name       = "I.Vadászosztály"
      type       = interceptor
      strength   = 30
      model      = 2
    }
    division =
    { experience = 20
      id         = { type = 10633 id = 35 }
      name       = "I.Vadászbombázó Osztály"
      type       = tactical_bomber
      strength   = 30
      model      = 2
    }
  }
}
