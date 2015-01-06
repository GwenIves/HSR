
##############################
# Country definition for TUR #
##############################

province = { id = 408 ic = 1 } # Bursa
province = { id = 409 ic = 3 } # Istanbul
province =
{ id         = 439
  anti_air   = 4
  air_base   = { size = 6 current_size = 6 }
  naval_base = { size = 10 current_size = 10 }
}              # Izmit
province =
{ id       = 448
  anti_air = 4
  air_base = { size = 6 current_size = 6 }
}            # Ankara

#####################
# Country main data #
#####################

country =
{ tag                    = TUR
  # relation = { tag = YUG value = 100 }
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 100
  capital                = 448
  manpower               = 165
  transports             = 35
  escorts                = 10
  SpyInfo                = { country = "TUR" NumberOfSpies = 8 }
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
  nationalprovinces      = { 409 408 437 438 439 441 442 443 448 440 449 447 446 445 450 1851 1852 1853 1854 1855 444 }
  ownedprovinces         = { 409 408 437 438 439 441 442 443 448 440 449 447 446 445 450 1851 1852 1853 1854 1855 }
  controlledprovinces    = { 409 408 437 438 439 441 442 443 448 440 449 447 446 445 450 1851 1852 1853 1854 1855 }
  # Group C 1941 techs
  # ######################
  techapps               = { 5070  4010  4020  4030  4040  4120  4130  4140  2010  2020  2030  2040  2050  2150  2290  2300  2310  2320  2330  2400
			     2410  2450  2460  2470  2510  2520  1010  1020  1030  1190  1200  1210  1220  1110  2330  9010  9020  9030  5010  5020
			     5050  5080  5090  5100  5110  5190  5200  5470  6210  6300  6310  3010  3070  3130  3190  3400  3410  8010  8020  8040
			     8050  14000 14010
			   }
  diplomacy =
  { relation = { tag = AFG value = 50 }
    relation = { tag = BUL value = 75 }
    relation = { tag = ENG value = 75 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GER value = 10 }
    # relation = { tag = GRE value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = OMN value = 35 }
    relation = { tag = PER value = -50 }
    relation = { tag = ROM value = 100 }
    relation = { tag = SAU value = 50 }
    relation = { tag = SOV value = 70 }
    relation = { tag = YEM value = 35 }
  }
  headofstate            = { type = 9 id = 12031 }
  headofgovernment       = { type = 9 id = 12032 }
  foreignminister        = { type = 9 id = 12035 }
  armamentminister       = { type = 9 id = 12047 }
  ministerofsecurity     = { type = 9 id = 12005 }
  ministerofintelligence = { type = 9 id = 12068 }
  chiefofstaff           = { type = 9 id = 12073 }
  chiefofarmy            = { type = 9 id = 12008 }
  chiefofnavy            = { type = 9 id = 12079 }
  chiefofair             = { type = 9 id = 12010 }
  dormant_ministers      = { 12001 12002 12003 12040 12004 12006 12007 12009 }
  landunit =
  { location = 409
    name     = "I. Army Corps"
    id       = { type = 10120 id = 10 }
    division =
    { id       = { type = 10120 id = 11 }
      type     = infantry
      strength = 100
      name     = "1. Piyade Tümeni"
      model    = 0
    }
    division =
    { id       = { type = 10120 id = 12 }
      type     = infantry
      strength = 100
      name     = "3. Piyade Tümeni"
      model    = 1
    }
  }
  landunit =
  { location = 439
    name     = "II. Army Corps"
    id       = { type = 10120 id = 13 }
    division =
    { id       = { type = 10120 id = 14 }
      type     = infantry
      strength = 100
      model    = 1
      name     = "5. Piyade Tümeni"
    }
    division =
    { id       = { type = 10120 id = 15 }
      type     = infantry
      strength = 100
      model    = 1
      name     = "23. Piyade Tümeni"
    }
  }
  landunit =
  { location = 450
    name     = "III. Army Corps"
    id       = { type = 10120 id = 16 }
    division =
    { id       = { type = 10120 id = 17 }
      type     = infantry
      strength = 100
      model    = 1
      name     = "7. Piyade Tümeni"
    }
    division =
    { id       = { type = 10120 id = 18 }
      type     = infantry
      strength = 100
      model    = 1
      name     = "25. Piyade Tümeni"
    }
  }
  landunit =
  { location = 445
    name     = "IV. Army Corps"
    id       = { type = 10120 id = 19 }
    division =
    { id       = { type = 10120 id = 20 }
      type     = infantry
      strength = 100
      model    = 1
      name     = "9. Piyade Tümeni"
    }
    division =
    { id       = { type = 10120 id = 21 }
      type     = infantry
      strength = 100
      model    = 0
      name     = "21. Piyade Tümeni"
    }
  }
  landunit =
  { location = 443
    name     = "V. Army Corps"
    id       = { type = 10120 id = 22 }
    division =
    { id       = { type = 10120 id = 23 }
      type     = infantry
      strength = 100
      model    = 0
      name     = "11. Piyade Tümeni"
    }
    division =
    { id       = { type = 10120 id = 24 }
      type     = infantry
      strength = 100
      model    = 1
      name     = "27. Piyade Tümeni"
    }
  }
  landunit =
  { location = 1851
    name     = "VI. Army Corps"
    id       = { type = 10120 id = 25 }
    division =
    { id       = { type = 10120 id = 26 }
      type     = infantry
      strength = 100
      model    = 1
      name     = "13. Piyade Tümeni"
    }
    division =
    { id       = { type = 10120 id = 27 }
      type     = infantry
      strength = 100
      model    = 1
      name     = "29. Piyade Tümeni"
    }
  }
  landunit =
  { location = 448
    name     = "VII. Army Corps"
    id       = { type = 10120 id = 28 }
    division =
    { id       = { type = 10120 id = 29 }
      type     = infantry
      strength = 100
      model    = 1
      name     = "15. Piyade Tümeni"
    }
    division =
    { id       = { type = 10120 id = 30 }
      type     = infantry
      strength = 100
      model    = 1
      name     = "31. Piyade Tümeni"
    }
  }
  landunit =
  { location = 448
    name     = "VIII. Army Corps"
    id       = { type = 10120 id = 31 }
    division =
    { id       = { type = 10120 id = 32 }
      type     = infantry
      strength = 100
      model    = 1
      name     = "17. Piyade Tümeni"
    }
    division =
    { id       = { type = 10120 id = 33 }
      type     = infantry
      strength = 100
      model    = 1
      name     = "33. Piyade Tümeni"
    }
  }
  landunit =
  { location = 437
    name     = "IX. Army Corps"
    id       = { type = 10120 id = 34 }
    division =
    { id       = { type = 10120 id = 35 }
      type     = infantry
      strength = 100
      model    = 1
      name     = "19. Piyade Tümeni"
    }
    division =
    { id       = { type = 10120 id = 36 }
      type     = infantry
      strength = 100
      model    = 0
      name     = "35. Piyade Tümeni"
    }
  }
  landunit =
  { location = 1854
    name     = "Mountain Corps"
    id       = { type = 10120 id = 37 }
    division =
    { id       = { type = 10120 id = 38 }
      type     = bergsjaeger
      strength = 100
      model    = 0
      name     = "Mountain Brigades"
    }
  }
  landunit =
  { location = 446
    name     = "Cavalry Corps"
    id       = { type = 10120 id = 39 }
    division =
    { id       = { type = 10120 id = 40 }
      type     = cavalry
      strength = 100
      model    = 0
      name     = "1. Süvari Tümeni"
    }
    division =
    { id       = { type = 10120 id = 41 }
      type     = cavalry
      strength = 100
      model    = 0
      name     = "3. Süvari Tümeni"
    }
    division =
    { id       = { type = 10120 id = 42 }
      type     = cavalry
      strength = 50
      model    = 0
      name     = "5. Süvari Tümeni"
    }
  }
  landunit =
  { location = 448
    name     = "X. Army Corps"
    id       = { type = 10120 id = 43 }
    division =
    { id       = { type = 10120 id = 44 }
      type     = motorized
      strength = 75
      model    = 0
      name     = "1. Zyrly Tümeni"
    }
    division =
    { id       = { type = 10120 id = 45 }
      type     = motorized
      strength = 75
      model    = 0
      name     = "2. Zyrly Tümeni"
    }
  }
  landunit =
  { location = 1852
    name     = "XI. Army Corps"
    id       = { type = 10120 id = 46 }
    division =
    { id       = { type = 10120 id = 47 }
      type     = infantry
      strength = 100
      model    = 0
      name     = "37. Piyade Tümeni"
    }
    division =
    { id       = { type = 10120 id = 48 }
      type     = infantry
      strength = 100
      model    = 0
      name     = "39. Piyade Tümeni"
    }
  }
  landunit =
  { location = 449
    name     = "XII. Army Corps"
    id       = { type = 10120 id = 49 }
    division =
    { id       = { type = 10120 id = 50 }
      type     = infantry
      strength = 100
      model    = 1
      name     = "41. Piyade Tümeni"
    }
  }
  landunit =
  { location = 1851
    name     = "XIII. Army Corps"
    id       = { type = 10120 id = 51 }
    division =
    { id       = { type = 10120 id = 52 }
      type     = infantry
      strength = 50
      model    = 0
      name     = "43. Division"
    }
  }
  navalunit =
  { name     = "Türkce Deniz Filosu"
    id       = { type = 10120 id = 1 }
    location = 439
    base     = 439
    division =
    { id    = { type = 10120 id = 3 }
      name  = "TDT Yavuz"
      type  = battlecruiser
      model = 0
    }
    division =
    { id    = { type = 10120 id = 4 }
      name  = "TDT Hamidieh"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 10120 id = 5 }
      name  = "TDT Medjidieh"
      type  = light_cruiser
      model = 0
    }
    division =
    { id       = { type = 10120 id = 8 }
      name     = "1. Filotilla Torpido Ve Denizalti"
      type     = destroyer
      strength = 100
      model    = 0
    }
    division =
    { id    = { type = 10120 id = 6 }
      name  = "1. Filotilla Denizalti Kücük"
      type  = submarine
      model = 0
    }
    division =
    { id       = { type = 10120 id = 7 }
      name     = "2. Filotilla Denizalti Kücük"
      type     = submarine
      strength = 100
      model    = 2
    }
    division =
    { id       = { type = 10120 id = 9 }
      name     = "Reschid Pasha Küçük Filo"
      type     = transport
      model    = 0
      strength = 100
    }
  }
  airunit =
  { name     = "I/Turk Hava Kuvvetleri"
    id       = { type = 10120 id = 53 }
    location = 448
    base     = 448
    division =
    { id       = { type = 10120 id = 54 }
      type     = interceptor
      strength = 100
      model    = 1
      name     = "1 Avcy Uçaðy Tümeni"
    }
    division =
    { id       = { type = 10120 id = 55 }
      type     = tactical_bomber
      strength = 100
      model    = 0
      name     = "1. Bombardyman Uçaðy Tümeni"
    }
    division =
    { id       = { type = 10120 id = 56 }
      type     = interceptor
      strength = 78
      model    = 0
      name     = "2 Avcy Uçaðy Tümeni"
    }
    division =
    { id       = { type = 10120 id = 57 }
      type     = tactical_bomber
      strength = 100
      model    = 1
      name     = "2. Bombardyman Uçaðy Tümeni"
    }
  }
}
