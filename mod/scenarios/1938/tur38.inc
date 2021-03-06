
##############################
# Country definition for TUR #
##############################

province = { id = 409 ic = 2 } # Istanbul
province =
{ id         = 439
  air_base   = { size = 1 current_size = 1 }
  naval_base = { size = 6 current_size = 6 }
}              # Izmit
province =
{ id       = 448
  air_base = { size = 1 current_size = 1 }
}            # Ankara

#####################
# Country main data #
#####################

country =
{ tag                    = TUR
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 448
  manpower               = 165
  # Cyprus
  diplomacy =
  { relation = { tag = AFG value = 50 }
    relation = { tag = BUL value = 75 }
    relation = { tag = ENG value = 75 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GER value = 60 }
    relation = { tag = GRE value = -50 }
    relation = { tag = ITA value = 1 }
    relation = { tag = OMN value = 35 }
    relation = { tag = PER value = -50 }
    relation = { tag = ROM value = 100 }
    relation = { tag = SAU value = 50 }
    relation = { tag = SOV value = 70 }
    relation = { tag = YEM value = 35 }
    relation = { tag = YUG value = 100 }
  }
  nationalprovinces      = { 409 408 437 438 439 441 442 443 448 440 449 447 446 445 450 1851 1852 1853 1854 1855 444 }
  ownedprovinces         = { 409 408 437 438 439 441 442 443 448 440 449 447 446 445 450 1851 1852 1853 1854 1855 }
  controlledprovinces    = { 409 408 437 438 439 441 442 443 448 440 449 447 446 445 450 1851 1852 1853 1854 1855 }
  techapps               = { 1010 1020 1190 1200 1110 2010 2020 2030 2150 2290 2300 2310 2320 2400 2450 2510 3010 3020 3070 3130 3190 3400 4010 4020
			     4120 4130 5010 5080 5090 5190 6210 6300 8010 8020 8040 8050 9010 9020
			   }
  SpyInfo                = { country = "TUR" NumberOfSpies = 7 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 3
    freedom           = 4
    free_market       = 6
    professional_army = 5
    defense_lobby     = 6
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 12031 }
  headofgovernment       = { type = 9 id = 12032 }
  foreignminister        = { type = 9 id = 12035 }
  armamentminister       = { type = 9 id = 12048 }
  ministerofsecurity     = { type = 9 id = 12005 }
  ministerofintelligence = { type = 9 id = 12068 }
  chiefofstaff           = { type = 9 id = 12073 }
  chiefofarmy            = { type = 9 id = 12008 }
  chiefofnavy            = { type = 9 id = 12079 }
  chiefofair             = { type = 9 id = 12010 }
  dormant_ministers      = { 12001 12002 12003 12004 12006 12007 12009 12040 }
  landunit =
  { location = 409
    name     = "I. Topluluk"
    id       = { type = 30031 id = 7 }
    division =
    { id           = { type = 30031 id = 8 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "1. Piyade Dagitim"
    }
    division =
    { id           = { type = 30031 id = 9 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "3. Piyade Dagitim"
    }
  }
  landunit =
  { location = 408
    name     = "II. Topluluk"
    id       = { type = 30031 id = 10 }
    division =
    { id           = { type = 30031 id = 11 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "5. Piyade Dagitim"
    }
  }
  landunit =
  { location = 438
    name     = "III. Topluluk"
    id       = { type = 30031 id = 12 }
    division =
    { id           = { type = 30031 id = 13 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "7. Piyade Dagitim"
    }
  }
  landunit =
  { location = 447
    name     = "IV. Topluluk"
    id       = { type = 30031 id = 14 }
    division =
    { id           = { type = 30031 id = 15 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "9. Piyade Dagitim"
    }
    division =
    { id           = { type = 30031 id = 16 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "21. Piyade Dagitim"
    }
  }
  landunit =
  { location = 450
    name     = "V. Topluluk"
    id       = { type = 30031 id = 17 }
    division =
    { id           = { type = 30031 id = 18 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "11. Piyade Dagitim"
    }
  }
  landunit =
  { location = 1851
    name     = "VI. Topluluk"
    id       = { type = 30031 id = 19 }
    division =
    { id           = { type = 30031 id = 20 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "13. Piyade Dagitim"
    }
  }
  landunit =
  { location = 443
    name     = "VII. Topluluk"
    id       = { type = 30031 id = 21 }
    division =
    { id           = { type = 30031 id = 22 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "15. Piyade Dagitim"
    }
  }
  landunit =
  { location = 445
    name     = "VIII. Topluluk"
    id       = { type = 30031 id = 23 }
    division =
    { id           = { type = 30031 id = 24 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "17. Piyade Dagitim"
    }
  }
  landunit =
  { location = 1854
    name     = "IX. Topluluk"
    id       = { type = 30031 id = 25 }
    division =
    { id           = { type = 30031 id = 26 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "19. Piyade Dagitim"
    }
  }
  landunit =
  { location = 1852
    name     = "X. Topluluk"
    id       = { type = 30031 id = 27 }
    division =
    { id   = { type = 30031 id = 28 }
      type = bergsjaeger
      name = "1. Dagci Tugay"
    }
  }
  landunit =
  { location = 441
    name     = "XI. Topluluk"
    id       = { type = 30031 id = 29 }
    division =
    { id       = { type = 30031 id = 30 }
      type     = cavalry
      strength = 100
      name     = "1. S�vari Dagitim"
    }
    division =
    { id       = { type = 30031 id = 31 }
      type     = cavalry
      strength = 100
      name     = "3. S�vari Dagitim"
    }
    division =
    { id       = { type = 30031 id = 32 }
      type     = cavalry
      strength = 50
      name     = "5. Yedek S�vari Dagitim"
    }
  }
  # Flying Circus doctrine
  navalunit =
  { id       = { type = 30031 id = 1 }
    location = 439
    base     = 439
    name     = "T�rkce Deniz Filosu"
    division =
    { id    = { type = 30031 id = 2 }
      name  = "TDT Yavuz"
      type  = battlecruiser
      model = 0
    }
    division =
    { id    = { type = 30031 id = 3 }
      name  = "TDT Hamidieh"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 30031 id = 998 }
      name  = "TDT Medjidieh"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 30031 id = 5 }
      name  = "1. Filotilla TorpidoVe Denizalti"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 30031 id = 4 }
      name  = "1. Filotilla Denizalti K�c�k"
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 30031 id = 101 }
      name  = "2. Filotilla Denizalti K�c�k"
      type  = submarine
      model = 2
    }
    division =
    { id   = { type = 11700 id = 100 }
      name = "Reschid Pasha K�c�k Filotilla"
      type = transport
    }
  }
  airunit =
  { id       = { type = 30031 id = 33 }
    location = 439
    base     = 439
    name     = "I. T�rkce Hava Topluluk"
    division =
    { id           = { type = 30031 id = 34 } # polish interceptors and 45 french MS 406
      type         = interceptor
      model        = 0
      strength     = 93
      organisation = 30
      name         = "1. Avci Ucagi Grup"
    }
    division =
    { id           = { type = 30031 id = 35 } # assortment of old planes and some british and german planes
      type         = tactical_bomber
      model        = 0
      strength     = 52
      organisation = 72
      name         = "1. Taktik Bombardiman Ucagi Grup"
    }
    division =
    { id           = { type = 30031 id = 36 } # blenheims and other british tac bombers
      type         = interceptor
      model        = 0
      strength     = 29
      organisation = 30
      name         = "2. Avci Ucagi Grup"
    }
    division =
    { id           = { type = 30031 id = 37 }
      type         = tactical_bomber
      model        = 0
      strength     = 62
      organisation = 72
      name         = "2. Taktik Bombardiman Ucagi Grup"
    }
  }
}
