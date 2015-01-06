
##############################
# Country definition for TUR #
##############################

province =
{ id         = 408
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
  ic         = 1
}              # Bursa
province =
{ id         = 409
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
  ic         = 3
}              # Istanbul
province = { id = 439 ic = 2 } # Izmit
province =
{ id         = 440
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 4 current_size = 4 }
}              # Karabük
province =
{ id         = 445
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
}              # Gaziantep
province =
{ id       = 448
  air_base = { size = 5 current_size = 5 }
}            # Ankara

#####################
# Country main data #
#####################

country =
{ tag                    = TUR
  # Resource Reserves
  energy                 = 3500
  metal                  = 3500
  rare_materials         = 2500
  oil                    = 3500
  supplies               = 3500
  capital                = 448
  manpower               = 165
  # blenheims et. other british tac bombers + german He111s
  # ############################
  # ## TURKEY NAVAL OOB 1944 ###
  # ############################
  transports             = 35
  escorts                = 10
  dissent                = 5
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
  #SpyInfo                = { country = "POR" NumberOfSpies = 5 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 6 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 5 }
  #SpyInfo                = { country = "SPA" NumberOfSpies = 5 }
  #SpyInfo                = { country = "FRA" NumberOfSpies = 6 }
  #SpyInfo                = { country = "YUG" NumberOfSpies = 5 }
  #SpyInfo                = { country = "BUL" NumberOfSpies = 5 }
  SpyInfo                = { country = "TUR" NumberOfSpies = 8 }
  nationalprovinces      = { 409 408 437 438 439 441 442 443 448 440 449 447 446 445 450 1851 1852 1853 1854 1855 }
  ownedprovinces         = { 409 408 437 438 439 441 442 443 448 440 449 447 446 445 450 1851 1852 1853 1854 1855 }
  controlledprovinces    = { 409 408 437 438 439 441 442 443 448 440 449 447 446 445 450 1851 1852 1853 1854 1855 }
  # Semi-Major Tech '36
  # Group C 1944 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1070  1110  1120  1130  1150  1190  1200  1210  1220  1310  14000 14010 2010  2020  2030  2040
			     2050  2060  2070  2080  2150  2160  2170  2180  2220  2230  2290  2300  2310  2320  2330  2330  2340  2400  2410  2450
			     2460  2470  2510  2520  2530  3010  3020  3070  3130  3400  4010  4020  4030  4040  4050  4060  4120  4130  4140  4170
			     4190  4250  5010  5020  5050  5060  5070  5080  5090  5100  5110  5120  5190  5200  5210  5220  5310  5320  5350  5360
			     5470  6210  6300  6310  6320  6330  6340  8010  8020  8040  8050  9010  9020  9030  9040  14020
			   }
  diplomacy =
  { relation = { tag = AFG value = 50 }
    relation = { tag = BUL value = 75 }
    relation = { tag = ENG value = 75 }
    relation = { tag = FRA value = 50 }
    relation = { tag = OMN value = 35 }
    relation = { tag = PER value = -50 }
    relation = { tag = ROM value = 100 }
    relation = { tag = SAU value = 50 }
    relation = { tag = SOV value = 70 }
    relation = { tag = YEM value = 35 }
  }
  dormant_ministers      = { 12001 12002 12032 12003 12040 12004 12047 12005 12006 12007 12008 12009 12010 12035 12042 12048 12049 12054 12061 12062
			     12063
			   }
  headofstate            = { type = 9 id = 12031 }
  headofgovernment       = { type = 9 id = 12033 }
  foreignminister        = { type = 9 id = 12036 }
  armamentminister       = { type = 9 id = 12045 }
  ministerofsecurity     = { type = 9 id = 12056 }
  ministerofintelligence = { type = 9 id = 12069 }
  chiefofstaff           = { type = 9 id = 12074 }
  chiefofarmy            = { type = 9 id = 12077 }
  chiefofnavy            = { type = 9 id = 12080 }
  chiefofair             = { type = 9 id = 12083 }
  landunit =
  { location = 409
    name     = "I. Army Corps"
    id       = { type = 11213 id = 7 }
    division =
    { id           = { type = 11213 id = 8 }
      type         = infantry
      strength     = 90
      organisation = 30
      name         = "1. Piyade Tümeni"
      model        = 3
    }
    division =
    { id           = { type = 11213 id = 9 }
      type         = infantry
      strength     = 90
      organisation = 30
      name         = "3. Piyade Tümeni"
      model        = 3
    }
  }
  landunit =
  { location = 408
    name     = "II. Army Corps"
    id       = { type = 11213 id = 10 }
    division =
    { id           = { type = 11213 id = 11 }
      type         = infantry
      strength     = 65
      organisation = 30
      name         = "5. Piyade Tümeni"
      model        = 2
    }
    division =
    { id           = { type = 11213 id = 12 }
      type         = infantry
      strength     = 65
      organisation = 30
      name         = "23. Piyade Tümeni"
      model        = 2
    }
  }
  landunit =
  { location = 439
    name     = "III. Army Corps"
    id       = { type = 11213 id = 13 }
    division =
    { id           = { type = 11213 id = 14 }
      type         = infantry
      strength     = 80
      organisation = 30
      name         = "7. Piyade Tümeni"
      model        = 2
    }
    division =
    { id           = { type = 11213 id = 15 }
      type         = infantry
      strength     = 80
      organisation = 30
      name         = "25. Piyade Tümeni"
      model        = 2
    }
  }
  landunit =
  { location = 448
    name     = "IV. Army Corps"
    id       = { type = 11213 id = 16 }
    division =
    { id           = { type = 11213 id = 17 }
      type         = infantry
      strength     = 75
      organisation = 30
      name         = "9. Piyade Tümeni"
      model        = 3
    }
    division =
    { id           = { type = 11213 id = 18 }
      type         = infantry
      strength     = 75
      organisation = 30
      name         = "21. Piyade Tümeni"
      model        = 3
    }
  }
  landunit =
  { location = 450
    name     = "V. Army Corps"
    id       = { type = 11213 id = 19 }
    division =
    { id           = { type = 11213 id = 20 }
      type         = infantry
      strength     = 70
      organisation = 30
      name         = "11. Piyade Tümeni"
      model        = 2
    }
    division =
    { id           = { type = 11213 id = 21 }
      type         = infantry
      strength     = 70
      organisation = 30
      name         = "27. Piyade Tümeni"
      model        = 2
    }
  }
  landunit =
  { location = 1852
    name     = "VI. Army Corps"
    id       = { type = 11213 id = 22 }
    division =
    { id           = { type = 11213 id = 23 }
      type         = infantry
      strength     = 50
      organisation = 30
      name         = "13. Piyade Tümeni"
      model        = 3
    }
    division =
    { id           = { type = 11213 id = 24 }
      type         = infantry
      strength     = 50
      organisation = 30
      name         = "29. Piyade Tümeni"
      model        = 3
    }
  }
  landunit =
  { location = 443
    name     = "VII. Army Corps"
    id       = { type = 11213 id = 25 }
    division =
    { id           = { type = 11213 id = 26 }
      type         = infantry
      strength     = 55
      organisation = 30
      name         = "15. Piyade Tümeni"
      model        = 2
    }
    division =
    { id           = { type = 11213 id = 27 }
      type         = infantry
      strength     = 55
      organisation = 30
      name         = "31. Piyade Tümeni"
      model        = 2
    }
  }
  landunit =
  { location = 409
    name     = "VIII. Army Corps"
    id       = { type = 11213 id = 28 }
    division =
    { id           = { type = 11213 id = 29 }
      type         = infantry
      strength     = 70
      organisation = 30
      name         = "17. Piyade Tümeni"
      model        = 2
    }
    division =
    { id           = { type = 11213 id = 30 }
      type         = infantry
      strength     = 70
      organisation = 30
      name         = "33. Piyade Tümeni"
      model        = 2
    }
  }
  landunit =
  { location = 1855
    name     = "IX. Army Corps"
    id       = { type = 11213 id = 31 }
    division =
    { id           = { type = 11213 id = 32 }
      type         = infantry
      strength     = 60
      organisation = 30
      name         = "19. Piyade Tümeni"
      model        = 2
    }
    division =
    { id           = { type = 11213 id = 33 }
      type         = infantry
      strength     = 60
      organisation = 30
      name         = "35. Piyade Tümeni"
      model        = 2
    }
  }
  landunit =
  { location = 1851
    name     = "Mountain Corps"
    id       = { type = 11213 id = 34 }
    division =
    { id           = { type = 11213 id = 35 }
      type         = bergsjaeger
      strength     = 75
      organisation = 30
      name         = "Mountain Brigades"
      model        = 2
    }
  }
  landunit =
  { location = 445
    name     = "Cavalry Corps"
    id       = { type = 11213 id = 36 }
    division =
    { id           = { type = 11213 id = 37 }
      type         = cavalry
      strength     = 50
      organisation = 30
      name         = "1. Süvari Tümeni"
      model        = 2
    }
    division =
    { id           = { type = 11213 id = 38 }
      type         = cavalry
      strength     = 50
      organisation = 30
      name         = "3. Süvari Tümeni"
      model        = 2
    }
    division =
    { id           = { type = 11213 id = 39 }
      type         = cavalry
      strength     = 50
      organisation = 30
      name         = "5. Süvari Tümeni"
      model        = 2
    }
  }
  landunit =
  { location = 448
    name     = "X. Army Corps"
    id       = { type = 11213 id = 40 }
    division =
    { id           = { type = 11213 id = 41 }
      type         = mechanized
      strength     = 50
      organisation = 30
      name         = "1. Zyrly Tümeni"
      model        = 1
    }
    division =
    { id           = { type = 11213 id = 42 }
      type         = mechanized
      strength     = 50
      organisation = 30
      name         = "2. Zyrly Tümeni"
      model        = 1
    }
  }
  landunit =
  { location = 409
    name     = "XI. Army Corps"
    id       = { type = 11213 id = 43 }
    division =
    { id           = { type = 11213 id = 44 }
      type         = infantry
      strength     = 55
      organisation = 30
      name         = "37. Piyade Tümeni"
      model        = 2
    }
    division =
    { id           = { type = 11213 id = 45 }
      type         = infantry
      strength     = 55
      organisation = 30
      name         = "39. Piyade Tümeni"
      model        = 2
    }
  }
  landunit =
  { location = 1855
    name     = "XII. Army Corps"
    id       = { type = 11213 id = 46 }
    division =
    { id           = { type = 11213 id = 47 }
      type         = infantry
      strength     = 60
      organisation = 30
      name         = "41. Piyade Tümeni"
      model        = 2
    }
  }
  landunit =
  { location = 1852
    name     = "XIII. Army Corps"
    id       = { type = 11213 id = 48 }
    division =
    { id           = { type = 11213 id = 49 }
      type         = infantry
      strength     = 50
      organisation = 30
      name         = "43. Division"
      model        = 3
    }
  }
  navalunit =
  { id       = { type = 11213 id = 60 }
    name     = "Türkce Deniz Filosu"
    location = 409 # Istanbul
    base     = 409
    division =
    { id    = { type = 11213 id = 61 }
      name  = "TDT Yavuz"
      type  = battlecruiser
      model = 0
    }
    division =
    { id    = { type = 11213 id = 63 }
      name  = "TDT Hamidieh"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 11213 id = 64 }
      name  = "TDT Medjidieh"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 11213 id = 65 }
      name  = "1. Filotilla Torpido Ve Denizalti"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 11213 id = 66 }
      name  = "2. Filotilla Torpido Ve Denizalti"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 11213 id = 67 }
      name  = "1. Filotilla Denizalti Kücük"
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 11213 id = 68 }
      name  = "2. Filotilla Denizalti Kücük"
      type  = submarine
      model = 2
    }
    division =
    { id       = { type = 10120 id = 100 }
      name     = "Reschid Pasha Küçük Filo"
      type     = transport
      model    = 0
      strength = 100
    }
  }
  airunit =
  { location = 448
    base     = 448
    name     = "I/Turk Hava Kuvvetleri"
    id       = { type = 11213 id = 50 }
    division =
    { id           = { type = 11213 id = 51 }
      type         = interceptor
      model        = 2
      strength     = 100
      organisation = 30
      name         = "1 Avcy Uçaðy Tümeni"
    }
    division =
    { id           = { type = 11213 id = 52 }
      type         = tactical_bomber
      strength     = 100
      model        = 2
      organisation = 30
      name         = "1. Bombardyman Uçaðy Tümeni"
    }
    division =
    { id           = { type = 11213 id = 53 }
      type         = interceptor
      model        = 2
      strength     = 78
      organisation = 30
      name         = "2 Avcy Uçaðy Tümeni"
    }
    division =
    { id           = { type = 11213 id = 54 }
      type         = tactical_bomber
      strength     = 92
      organisation = 72
      name         = "2. Bombardyman Uçaðy Tümeni"
      model        = 2
    }
  }
  division_development =
  { type          = infantry
    model         = 3
    date          = { day = 14 month = november year = 1945 }
    cost          = 5
    days          = 95
    id            = { type = 10104 id = 1 }
    name          = "100. Piyade Tümeni"
    extra         = anti_tank
    brigade_model = 1
  }
  division_development =
  { type          = infantry
    model         = 3
    date          = { day = 14 month = december year = 1945 }
    cost          = 5
    days          = 95
    id            = { type = 10104 id = 2 }
    name          = "101. Piyade Tümeni"
    extra         = anti_tank
    brigade_model = 1
  }
  division_development =
  { type          = infantry
    model         = 3
    date          = { day = 0 month = january year = 1946 }
    cost          = 5
    days          = 95
    id            = { type = 10104 id = 3 }
    name          = "102. Piyade Tümeni"
    extra         = artillery
    brigade_model = 4
  }
}
