
##############################
# Country definition for ROM #
##############################

province =
{ id       = 424
  air_base = { size = 3 current_size = 3 }
  anti_air = 6
  ic       = 2
}            # Bucharest
province = { id = 425 ic = 1 } # Pitesti
province = { id = 426 ic = 1 } # Craiova
province =
{ id       = 431
  air_base = { size = 7 current_size = 7 }
  anti_air = 6
  ic       = 5
}            # Ploesti
province = { id = 435 anti_air = 2 } # Ismail
province =
{ id         = 436
  naval_base = { size = 4 current_size = 4 }
}              # Tulcea

#####################
# Country main data #
#####################

country =
{ tag                    = ROM
  capital                = 424
  belligerence           = 3
  manpower               = 150
  # Resource Reserves
  energy                 = 5000
  metal                  = 5000
  rare_materials         = 2000
  oil                    = 3500
  supplies               = 3000
  SpyInfo                = { country = "ROM" NumberOfSpies = 6 }
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
  #SpyInfo                = { country = "ENG" NumberOfSpies = 5}
  #SpyInfo                = { country = "YUG" NumberOfSpies = 6}
  #SpyInfo                = { country = "SOV" NumberOfSpies = 6}
  #SpyInfo                = { country = "VIC" NumberOfSpies = 5}
  #SpyInfo                = { country = "AUS" NumberOfSpies = 5}
  #SpyInfo                = { country = "GER" NumberOfSpies = 5}
  #SpyInfo                = { country = "HUN" NumberOfSpies = 6}
  #SpyInfo                = { country = "ALB" NumberOfSpies = 5}
  #SpyInfo                = { country = "GRE" NumberOfSpies = 6}
  #SpyInfo                = { country = "BUL" NumberOfSpies = 7}
  #SpyInfo                = { country = "ITA" NumberOfSpies = 5}
  nationalprovinces      = { 423 424 425 431 426 495 496 498 427 428 429 430 432 436 433 435 230 434 }
  ownedprovinces         = { 424 425 431 426 495 496 427 429 430 432 436 433 435 230 434 }
  controlledprovinces    = { 424 425 431 426 495 496 427 429 430 432 436 433 435 434 }
  # Eastern Minor Tech '36
  # Group C 1944 techs
  # ######################
  techapps               = { 5070  4010  4020  4030  4040  4050  4060  4120  4130  4140  4170  4190  4250  2010  2020  2030  2040  2050  2060  2070
			     2080  2150  2160  2170  2180  2220  2230  2290  2300  2310  2320  2330  2340  2400  2410  2450  2460  2470  2510  2520
			     2530  1010  1020  1030  1040  1190  1200  1210  1220  1230  1110  1120  1130  1070  1150  2330  1310  9010  9020  9030
			     9040  5010  5020  5050  5060  5080  5090  5100  5110  5120  5190  5200  5210  5220  5310  5350  5360  5470  6010  6020
			     6040  6050  6060  6070  3010  3020  3030  3400  8040  8050  5320  14000 14010
			   }
  diplomacy =
  { relation = { tag = BUL value = 125 }
    # relation = { tag = SLO value = 20 }
    relation = { tag = ENG value = -200 }
    relation = { tag = FIN value = 200 }
    relation = { tag = FRA value = -200 }
    relation =
    { tag        = GER
      value      = 200
      guaranteed = { day = 27 month = september year = 1942 }
    }
    # relation = { tag = GRE value = 100 }
    relation =
    { tag        = HUN
      value      = 125
      guaranteed = { day = 20 month = november year = 1942 }
    }
    # relation = { tag = ITA value = 150 }
    relation =
    { tag        = JAP
      value      = 200
    }
    # relation = { tag = POL value = 40 }
    relation = { tag = SOV value = -200 }
    relation = { tag = TUR value = 100 }
  }
  # relation = { tag = YUG value = 100 }
  dormant_ministers      = { 22053 }
  dormant_leaders        = { 4369 4312 4373 4335 4327 4319 }
  headofstate            = { type = 9 id = 22035 }
  headofgovernment       = { type = 9 id = 22048 }
  foreignminister        = { type = 9 id = 22077 }
  armamentminister       = { type = 9 id = 22094 }
  ministerofsecurity     = { type = 9 id = 22106 }
  ministerofintelligence = { type = 9 id = 22119 }
  chiefofstaff           = { type = 9 id = 22128 }
  chiefofarmy            = { type = 9 id = 22136 }
  chiefofnavy            = { type = 9 id = 22147 }
  chiefofair             = { type = 9 id = 22158 }
  landunit =
  { location = 434
    name     = "Armata 4"
    id       = { type = 10757 id = 1 }
    division =
    { experience = 30
      id         = { type = 10757 id = 2 }
      name       = "Divizia 1 Infanterie"
      type       = infantry
      model      = 3
      strength   = 80
    }
    division =
    { experience = 30
      id         = { type = 10757 id = 3 }
      name       = "Divizia 6 Infanterie"
      type       = infantry
      model      = 3
      strength   = 80
    }
    division =
    { experience = 30
      id         = { type = 10757 id = 4 }
      name       = "Divizia 20 Infanterie"
      type       = infantry
      model      = 3
      strength   = 80
    }
    division =
    { experience    = 30
      id            = { type = 10757 id = 5 }
      name          = "Divizia 13 Infanterie"
      type          = infantry
      model         = 3
      strength      = 80
      extra         = artillery
      brigade_model = 3
    }
    division =
    { experience = 30
      id         = { type = 10757 id = 6 }
      name       = "Divizia 4 Infanterie"
      type       = infantry
      model      = 3
      strength   = 80
    }
    division =
    { experience = 30
      id         = { type = 10757 id = 7 }
      name       = "Divizia 5 Infanterie"
      type       = infantry
      model      = 3
      strength   = 80
    }
    division =
    { experience = 30
      id         = { type = 10757 id = 8 }
      name       = "Divizia 7 Infanterie"
      type       = infantry
      model      = 3
      strength   = 80
    }
    division =
    { experience    = 30
      id            = { type = 10757 id = 9 }
      name          = "Divizia 1 Garda"
      type          = infantry
      model         = 3
      strength      = 80
      extra         = artillery
      brigade_model = 3
    }
  }
  landunit =
  { location = 433
    name     = "Armata 3"
    id       = { type = 10757 id = 10 }
    division =
    { experience = 30
      id         = { type = 10757 id = 11 }
      name       = "Divizia 9 Infanterie"
      type       = infantry
      model      = 3
    }
    division =
    { experience = 30
      id         = { type = 10757 id = 12 }
      name       = "Divizia 14 Infanterie"
      type       = infantry
      model      = 3
    }
    division =
    { experience = 30
      id         = { type = 10757 id = 13 }
      name       = "Divizia 2 Infanterie"
      type       = infantry
      model      = 3
    }
    division =
    { experience = 30
      id         = { type = 10757 id = 14 }
      name       = "Divizia 15 Infanterie"
      type       = infantry
      model      = 3
    }
    division =
    { experience = 30
      id         = { type = 10757 id = 15 }
      name       = "Divizia 21 Infanterie"
      type       = infantry
      model      = 3
    }
    division =
    { experience    = 30
      id            = { type = 10757 id = 16 }
      name          = "Divizia 4 Munte"
      type          = bergsjaeger
      model         = 3
      strength      = 90
      extra         = artillery
      brigade_model = 3
    }
  }
  landunit =
  { location = 436
    name     = "Corp 4 Armata"
    id       = { type = 10757 id = 17 }
    division =
    { experience = 30
      id         = { type = 10757 id = 18 }
      name       = "Divizia 3 Infanterie"
      type       = infantry
      model      = 3
      strength   = 70
    }
    division =
    { experience = 30
      id         = { type = 10757 id = 19 }
      name       = "Divizia 11 Infanterie"
      type       = infantry
      model      = 3
      strength   = 70
    }
    division =
    { experience = 30
      id         = { type = 10757 id = 20 }
      name       = "Divizia 18 Infanterie"
      type       = infantry
      model      = 3
      strength   = 70
    }
  }
  landunit =
  { location = 424
    name     = "Corp 2 Armata"
    id       = { type = 10757 id = 21 }
    division =
    { experience    = 30
      id            = { type = 10757 id = 22 }
      name          = "Divizia 2 Infanterie"
      type          = motorized
      extra         = anti_tank
      brigade_model = 1
    }
    division =
    { experience = 30
      id         = { type = 10757 id = 23 }
      name       = "Divizia 5 Infanterie"
      type       = infantry
      model      = 3
      strength   = 70
    }
    division =
    { experience    = 30
      id            = { type = 10757 id = 24 }
      name          = "Divizia 8 Cavalerie"
      type          = cavalry
      model         = 2
      extra         = artillery
      brigade_model = 3
    }
    division =
    { experience    = 30
      id            = { type = 10757 id = 25 }
      name          = "Divizia 102 Munte"
      type          = bergsjaeger
      model         = 2
      strength      = 67
      extra         = artillery
      brigade_model = 3
    }
    division =
    { experience = 30
      id         = { type = 10757 id = 26 }
      name       = "Divizie 1 Blindate"
      type       = armor
      model      = 3
    }
  }
  landunit =
  { location = 429
    name     = "Corp 5 Armata"
    id       = { type = 10757 id = 27 }
    division =
    { experience = 30
      id         = { type = 10757 id = 28 }
      name       = "Divizia 1 Munte"
      type       = bergsjaeger
      model      = 2
    }
    division =
    { experience = 30
      id         = { type = 10757 id = 29 }
      name       = "Divizia 4 Munte"
      type       = bergsjaeger
      model      = 2
    }
    division =
    { experience    = 30
      id            = { type = 10757 id = 30 }
      name          = "Divizia 8 Infanterie"
      type          = infantry
      model         = 3
      strength      = 85
      extra         = anti_air
      brigade_model = 2
    }
  }
  navalunit =
  { location = 436 # Constanta
    base     = 436
    name     = "Divizia de Mare"
    id       = { type = 10757 id = 31 }
    division =
    { experience = 30
      id         = { type = 10757 id = 32 }
      name       = "'N.M.S. Regele Ferdinand' Flotila"
      type       = destroyer
    }
  }
  airunit =
  { location = 424
    base     = 424
    name     = "Gruparea Aeriana de Lupta"
    id       = { type = 10757 id = 33 }
    division =
    { experience = 30
      id         = { type = 10757 id = 34 }
      name       = "Flotila 1 Vanatoare"
      type       = interceptor
      strength   = 100
      model      = 2
    }
    division =
    { experience = 30
      id         = { type = 10757 id = 35 }
      name       = "Flotila 2 Vanatoare"
      type       = interceptor
      strength   = 100
      model      = 2
    }
    division =
    { experience = 30
      id         = { type = 10757 id = 36 }
      name       = "Flotila 1 Bombardament"
      type       = tactical_bomber
      strength   = 75
      model      = 2
    }
  }
}
