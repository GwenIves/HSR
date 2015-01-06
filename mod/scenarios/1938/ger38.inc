# 18 Jan 07 ASD

province = { id = 66 landfort = 3 }                                                       # Aachen
province = { id = 67 ic = 16      air_base = { size = 4 current_size = 4 } anti_air = 2 } # Essen
province = { id = 74 landfort = 3 air_base = { size = 2 current_size = 2 } anti_air = 2 } # Saarbrücken
province = { id = 75 landfort = 3 air_base = { size = 2 current_size = 2 } anti_air = 2 } # Cologne
province = { id = 76 ic = 5 anti_air = 2 }                                                # Dortmund
province = { id = 80 air_base = { size = 4 current_size = 4 }
		     naval_base = { size = 10 current_size = 10 } anti_air = 2 }          # Wilhelmshafen
province = { id = 86 air_base = { size = 4 current_size = 4 }   anti_air = 1 }            # Hannover
province = { id = 88 anti_air = 2 air_base = { size = 2 current_size = 2 } }              # Hamburg
province = { id = 89 anti_air = 1 }                                                       # Lübeck
province =
{ id         = 90
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
  anti_air   = 2
}              # Kiel
province =
{ id         = 296
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
  anti_air   = 1
}              # Rostock
province = { id = 297 ic = 3 } # Wolfsburg
province = { id = 298 anti_air = 1 } # Magdeburg
province =
{ id       = 300
  air_base = { size = 10 current_size = 10 }
  anti_air = 2
}            # Berlin
province =
{ id       = 302
  air_base = { size = 4 current_size = 4 }
  anti_air = 2
}            # Stettin
province = { id = 304 supplypool = 500 oilpool = 500 } # Elbing
province = { id = 310 air_base = { size = 4 current_size = 4 } anti_air = 1 } # Leipzig
province = { id = 312 air_base = { size = 2 current_size = 2 } anti_air = 1 } # Nuremberg
province =
{ id       = 313
  air_base = { size = 4 current_size = 4 }
  anti_air = 1
}            # Frankfurt-am-Main
province =
{ id       = 314
  landfort = 3
  air_base = { size = 4 current_size = 4 }
  anti_air = 1
}            # Stuttgart
province = { id = 315 landfort = 3 } # Freiburg
province =
{ id       = 376
  air_base = { size = 4 current_size = 4 }
  anti_air = 1
}            # Munich
province =
{ id       = 463
  air_base = { size = 5 current_size = 5 }
  anti_air = 1
}            # Vienna
province =
{ id       = 473
  air_base = { size = 4 current_size = 4 }
  anti_air = 1
}            # Breslau
province =
{ id       = 482
  air_base = { size = 4 current_size = 4 }
  anti_air = 1
}            # Oppeln
province =
{ id         = 510
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
  anti_air   = 1
}              # Königsberg


country =
{ tag                    = GER
  belligerence           = 10
  capital                = 300
  manpower               = 850
  transports             = 85
  escorts                = 23
  energy                 = 4000
  metal                  = 4000
  rare_materials         = 2000
  oil                    = 2000 # 15 million barrels stockpile
  supplies               = 2000
  money                  = 100 # gold and foreign currency reserves were exhausted
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 1
    free_market       = 5
    freedom           = 1
    professional_army = 5
    defense_lobby     = 6 # shifted by Czech events
    interventionism   = 6 # shifted by Czech events
  }
  SpyInfo                = { country = "GER" NumberOfSpies = 12 }

  #SpyInfo                = { country = "ALB" NumberOfSpies = 3 }
  #SpyInfo                = { country = "AFG" NumberOfSpies = 6 }
  #SpyInfo                = { country = "ARG" NumberOfSpies = 8 }
  #SpyInfo                = { country = "AUS" NumberOfSpies = 5 }
  #SpyInfo                = { country = "BEL" NumberOfSpies = 8 }
  #SpyInfo                = { country = "BRA" NumberOfSpies = 3 }
  #SpyInfo                = { country = "BUL" NumberOfSpies = 6 }
  #SpyInfo                = { country = "CHI" NumberOfSpies = 9 }
  #SpyInfo                = { country = "CZE" NumberOfSpies = 9 }
  #SpyInfo                = { country = "DEN" NumberOfSpies = 5 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 8 }
  #SpyInfo                = { country = "EST" NumberOfSpies = 3 }
  #SpyInfo                = { country = "FIN" NumberOfSpies = 6 }
  #SpyInfo                = { country = "FRA" NumberOfSpies = 5 }
  #SpyInfo                = { country = "GRE" NumberOfSpies = 3 }
  #SpyInfo                = { country = "HOL" NumberOfSpies = 8 }
  #SpyInfo                = { country = "HUN" NumberOfSpies = 8 }
  #SpyInfo                = { country = "IRE" NumberOfSpies = 6 }
  #SpyInfo                = { country = "IRQ" NumberOfSpies = 6 }
  #SpyInfo                = { country = "ITA" NumberOfSpies = 9 }
  #SpyInfo                = { country = "JAP" NumberOfSpies = 6 }
  #SpyInfo                = { country = "LAT" NumberOfSpies = 3 }
  #SpyInfo                = { country = "LIT" NumberOfSpies = 6 }
  #SpyInfo                = { country = "LUX" NumberOfSpies = 3 }
  #SpyInfo                = { country = "MEX" NumberOfSpies = 3 }
  #SpyInfo                = { country = "NOR" NumberOfSpies = 9 }
  #SpyInfo                = { country = "PER" NumberOfSpies = 3 }
  #SpyInfo                = { country = "POL" NumberOfSpies = 8 }
  #SpyInfo                = { country = "POR" NumberOfSpies = 3 }
  #SpyInfo                = { country = "ROM" NumberOfSpies = 6 }
  #SpyInfo                = { country = "SAF" NumberOfSpies = 6 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 6 }
  #SpyInfo                = { country = "SPA" NumberOfSpies = 6 }
  #SpyInfo                = { country = "SPR" NumberOfSpies = 6 }
  #SpyInfo                = { country = "SWE" NumberOfSpies = 8 }
  #SpyInfo                = { country = "SCH" NumberOfSpies = 6 }
  #SpyInfo                = { country = "TUR" NumberOfSpies = 6 }
  #SpyInfo                = { country = "USA" NumberOfSpies = 3 }
  #SpyInfo                = { country = "YUG" NumberOfSpies = 6 }

  nationalprovinces      = { 66  67  71  72  73  74  75  76  80  81  82  83  84  85  86  87  88  89  90  91 206 296 297 298 299 300 301 302 303 304 305 306 307 308 309 310 311 312 313 314 315 316 371 372 373 374 375 376 377 460 461 462 463 464 465 466 467 468 469 470 471 472 473 474 475 481 482 483 510 533
			   }
  ownedprovinces         = { 66  67  74  75  76  80  81  82  83  84  85  86  87  88  89  90  296 297 298 299 300 301 302 304 308 309 310 311 312 313 314 315 374 375 376 473 482 510 373 377 460 461 462 463 464 465
			   }
  controlledprovinces    = { 66  67  74  75  76  80  81  82  83  84  85  86  87  88  89  90  296 297 298 299 300 301 302 304 308 309 310 311 312 313 314 315 374 375 376 473 482 510 373 377 460 461 462 463 464 465
			   }

  techapps               = { 1010  1020  1030  1070  1110  1190  1200  1210  1220  1230  1310  1340  2010  2020  2030  2040  2070  2150  2290  2300
			     2310  2320  2330  2400  2410  2450  2460  2510  3010  3020  3030  3070  3080  3090  3100  3130  3140  3150  3160  3190
			     3200  3210  3220  3250  3260  3270  3280  3320  3330  3340  3400  3410  3420  3430  4010  4020  4030  4040  4050  4120
			     4130  4140  4170  4190  4250  5010  5020  5030  5050  5060  5070  5080  5090  5100  5190  5200  5210  5310  5320  5350
			     5360  5410  5470  5480  5490  5550  6210  6220  6230  6240  6250  8010  8020  8040  8080  8090  8150  8160  8210
			     9010  9020  9030  9040  9050  9060  9070  9090  9100  9110  9120  9140  9190  9200  9270  9290  14000 14010
			   }
blueprints             = { 6260 }

  diplomacy =
  { relation = { tag = AFG value = 25 }
    relation = { tag = ARG value = 75 }
    relation = { tag = AST value = -50 }
    relation = { tag = BEL value = 20 }
    relation = { tag = BHU value = -50 }
    relation = { tag = BOL value = 15 }
    relation = { tag = BRA value = 50 }
    relation = { tag = BUL value = 85 }
    relation = { tag = CAN value = -50 }
    relation = { tag = CHI value = 1 }
    relation = { tag = CHL value = 50 }
    relation = { tag = COL value = -20 }
    relation = { tag = ENG value = -100 }
    relation = { tag = EST value = 10 }
    relation = { tag = FIN value = 80 }
    relation = { tag = FRA value = -100 }
    relation = { tag = HOL value = -150 }
    relation = { tag = HUN value = 150 }
    relation = { tag = IRE value = 50 }
    relation = { tag = IRQ value = 25 }
    relation = { tag = ITA value = 100  guaranteed = { day = 25 month = october year = 1936 }    }
    relation = { tag = JAP value = 75 }
    relation = { tag = LAT value = 10 }
    relation = { tag = LIT value = 10 }
    relation = { tag = LUX value = -50 }
    relation = { tag = MAN value = 20 }
    relation = { tag = MEN value = 20 }
    relation = { tag = NEP value = -50 }
    relation = { tag = NOR value = -150 }
    relation = { tag = NZL value = -100 }
    relation = { tag = OMN value = -150 }
    relation = { tag = PER value = 50 }
    relation = { tag = POL value = -200 }
    relation = { tag = POR value = 75 }
    relation = { tag = ROM value = 120 }
    relation = { tag = SAF value = -50 }
    relation = { tag = SCH value = 50   guaranteed = { day = 16 month = may year = 1935 }    }
    relation = { tag = SOV value = 20 }
    relation = { tag = SPA value = 50   guaranteed = { day = 18 month = november year = 1936 }   }
    relation = { tag = SWE value = 50 }
    relation = { tag = TUR value = 60 }
    relation = { tag = YUG value = 50 }
    relation = { tag = USA value = -50 }
  }

  headofstate            = { type = 9 id = 1 } # Hitler
  headofgovernment       = { type = 9 id = 2 } # Hess
  foreignminister        = { type = 9 id = 55 } # Ribbentrop
  armamentminister       = { type = 9 id = 79 } # Goering (4 year plan)
  ministerofsecurity     = { type = 9 id = 108 } # Himmler
  ministerofintelligence = { type = 9 id = 6 } # Canaris
  chiefofstaff           = { type = 9 id = 155 } # Halder
  chiefofarmy            = { type = 9 id = 174 } # Brauschwitz
  chiefofnavy            = { type = 9 id = 9 } # Raeder
  chiefofair             = { type = 9 id = 10 } # Goering
  dormant_ministers      = { 33 45 46 51 3 64 4 77 5 116 7 8 179 }
  dormant_leaders	 = { 579 }

  landunit =
  { id       = { type = 12607 id = 1 }
    name     = "I. Armeekorps"
    location = 510
    division =
    { experience    = 10
      id            = { type = 12607 id = 2 }
      name          = "1. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience = 10
      id         = { type = 12607 id = 3 }
      name       = "11. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 10
      id         = { type = 12607 id = 4 }
      name       = "21. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
  }
  landunit =
  { id       = { type = 12607 id = 5 }
    name     = "II. Armeekorps"
    location = 302
    division =
    { experience    = 5
      id            = { type = 12607 id = 6 }
      name          = "12. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience = 1
      id         = { type = 12607 id = 7 }
      name       = "32. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 1
    }
  }
  landunit =
  { id       = { type = 12607 id = 10 }
    name     = "III. Armeekorps"
    location = 300
    division =
    { experience    = 5
      id            = { type = 12607 id = 11 }
      name          = "3. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience = 10
      id         = { type = 12607 id = 12 }
      name       = "23. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = engineer
    }
  }
  landunit =
  { id       = { type = 12607 id = 14 }
    name     = "IV. Armeekorps"
    location = 311
    division =
    { experience    = 10
      id            = { type = 12607 id = 15 }
      name          = "4. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience    = 4
      id            = { type = 12607 id = 16 }
      name          = "14. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = anti_tank
      brigade_model = 1
    }
    division =
    { experience = 1
      id         = { type = 12607 id = 17 }
      name       = "24. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 1
    }
  }
  landunit =
  { id       = { type = 12607 id = 23 }
    name     = "V. Armeekorps"
    location = 314
    division =
    { experience    = 15
      id            = { type = 12607 id = 26 }
      name          = "5. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience = 10
      id         = { type = 12607 id = 27 }
      name       = "25. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
  }
  landunit =
  { id       = { type = 12607 id = 8 }
    name     = "VI. Armeekorps"
    location = 81
    division =
    { experience    = 15
      id            = { type = 12607 id = 9 }
      name          = "6. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience = 5
      id         = { type = 12607 id = 29 }
      name       = "16. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 1
      id         = { type = 12607 id = 30 }
      name       = "26. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 1
    }
  }
  landunit =
  { id       = { type = 12607 id = 13 }
    name     = "VII. Armeekorps"
    location = 376
    division =
    { experience = 15
      id         = { type = 12607 id = 32 }
      name       = "7. Grenz-division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience    = 15
      id            = { type = 12607 id = 34 }
      name          = "27. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 4
    }
  }
  landunit =
  { id       = { type = 12607 id = 39 }
    name     = "VIII. Armeekorps"
    location = 473
    division =
    { experience    = 17
      id            = { type = 12607 id = 40 }
      name          = "8. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = anti_tank
      brigade_model = 1
    }
    division =
    { experience = 10
      id         = { type = 12607 id = 41 }
      name       = "18. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = engineer
    }
    division =
    { experience    = 1
      id            = { type = 12607 id = 42 }
      name          = "28. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 1
      extra         = artillery
      brigade_model = 4
    }
  }
  landunit =
  { id       = { type = 12607 id = 43 }
    name     = "IX. Armeekorps"
    location = 82
    division =
    { experience    = 10
      id            = { type = 12607 id = 44 }
      name          = "9. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience = 10
      id         = { type = 12607 id = 45 }
      name       = "15. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
  }
  landunit =
  { id       = { type = 12607 id = 18 }
    name     = "X. Armeekorps"
    location = 88
    division =
    { experience    = 1
      id            = { type = 12607 id = 19 }
      name          = "22. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 1
      extra         = anti_tank
      brigade_model = 1
    }
    division =
    { experience = 1
      id         = { type = 12607 id = 20 }
      name       = "30. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 1
    }
  }
  landunit =
  { id       = { type = 12607 id = 48 }
    name     = "XI. Armeekorps"
    location = 86
    division =
    { experience    = 13
      id            = { type = 12607 id = 56 }
      name          = "19. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 1
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience = 1
      id         = { type = 12607 id = 57 }
      name       = "31. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 1
    }
  }
  landunit =
  { id       = { type = 12607 id = 21 }
    name     = "XII. Armeekorps"
    location = 310
    division =
    { experience = 0
      id         = { type = 12607 id = 52 }
      name       = "33. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 1
    }
    division =
    { experience = 0
      id         = { type = 12607 id = 53 }
      name       = "34. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 1
    }
  }
  landunit =
  { id       = { type = 12607 id = 55 }
    name     = "XIII. Armeekorps"
    location = 312
    division =
    { experience = 15
      id         = { type = 12607 id = 49 }
      name       = "10. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 10
      id         = { type = 12607 id = 50 }
      name       = "17. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
  }
  landunit =
  { id       = { type = 12607 id = 61 }
    name     = "XIV. Armeekorps (mot)"
    location = 298
    division =
    { experience = 15
      id         = { type = 12607 id = 22 }
      name       = "2. Leichte-Division"
      strength   = 100
      type       = light_armor
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 12607 id = 62 }
      name       = "2. Infanterie-Division (mot)"
      strength   = 100
      type       = motorized
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 12607 id = 63 }
      name       = "13. Infanterie-Division (mot)"
      strength   = 100
      type       = motorized
      model      = 0
    }
    division =
    { experience = 10
      id         = { type = 12607 id = 24 }
      name       = "20. Infanterie-Division (mot)"
      strength   = 100
      type       = motorized
      model      = 0
    }
    division =
    { experience = 0
      id         = { type = 12607 id = 25 }
      name       = "29. Infanterie-Division (mot)"
      strength   = 100
      type       = motorized
      model      = 0
    }
  }
  landunit =
  { id       = { type = 12607 id = 64 }
    name     = "XV. Armeekorps"
    location = 67
    division =
    { experience = 10
      id         = { type = 12607 id = 65 }
      name       = "1. Panzer-Division"
      strength   = 100
      type       = light_armor
      model      = 1
    }
    division =
    { experience = 10
      id         = { type = 12607 id = 28 }
      name       = "1. Leichte-Division"
      strength   = 100
      type       = light_armor
      model      = 0
    }
  }
  landunit =
  { id       = { type = 12607 id = 31 }
    name     = "XVI. Armeekorps"
    location = 309
    division =
    { experience = 10
      id         = { type = 12607 id = 66 }
      name       = "3. Panzer-Division"
      strength   = 100
      type       = light_armor
      model      = 1
    }
    division =
    { experience = 10
      id         = { type = 12607 id = 33 }
      name       = "3. Leichte-Division"
      strength   = 100
      type       = light_armor
      model      = 0
    }
  }
  landunit =
  { id       = { type = 12607 id = 67 }
    name     = "XVII. Armeekorps"
    location = 463
    division =
    { experience    = 0
      id            = { type = 12607 id = 68 }
      name          = "44. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 1
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience = 0
      id         = { type = 12607 id = 69 }
      name       = "45. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 1
    }
  }
  landunit =
  { id       = { type = 12607 id = 35 }
    name     = "XVIII. Armeekorps"
    location = 462
    division =
    { experience    = 25
      id            = { type = 12607 id = 70 }
      name          = "1. Gebirgs-Division"
      strength      = 100
      type          = bergsjaeger
      model         = 0
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 71 }
      name       = "2. Gebirgs-Division"
      strength   = 100
      type       = bergsjaeger
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 72 }
      name       = "3. Gebirgs-Division"
      strength   = 100
      type       = bergsjaeger
      model      = 0
    }
  }
  landunit =
  { id       = { type = 12607 id = 73 }
    name     = "XIX. Armeekorps"
    location = 463
    division =
    { experience = 11
      id         = { type = 12607 id = 58 }
      name       = "2. Panzer-Division"
      strength   = 100
      type       = light_armor
      model      = 1
    }
    division =
    { experience = 15
      id         = { type = 12607 id = 59 }
      name       = "4. Leichte-Division"
      strength   = 100
      type       = light_armor
      model      = 0
    }
    division =
    { experience = 0
      id         = { type = 12607 id = 60 }
      name       = "35. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 1
    }
    division =
    { experience = 0
      id         = { type = 12607 id = 74 }
      name       = "36. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 1
    }
  }
  landunit =
  { id       = { type = 12607 id = 36 }
    name     = "Grenz-truppen"
    location = 315
    division =
    { experience = 0
      id         = { type = 12607 id = 37 }
      name       = "Grenz-truppen"
      strength   = 100
      type       = garrison
      model      = 0
    }
  }
  landunit =
  { id       = { type = 12607 id = 38 }
    name     = "OKW"
    location = 300
    division =
    { experience = 0
      id         = { type = 12607 id = 46 }
      name       = "Oberkommando der Wehrmacht"
      strength   = 100
      type       = hq
      model      = 1
      extra      = police
    }
    division =
    { experience = 0
      id         = { type = 12607 id = 47 }
      name       = "Wach-Regiment Berlin"
      strength   = 40
      type       = garrison
      model      = 1
    }
  }
  landunit =
  { id       = { type = 12607 id = 51 }
    name     = "OKH"
    location = 300
    division =
    { experience = 0
      id         = { type = 12607 id = 54 }
      name       = "Oberkommando des Heeres"
      strength   = 100
      type       = hq
      model      = 1
    }
  }
  # German Navy
  # Western Area
  navalunit =
  { name     = "Hochseeflotte"
    id       = { type = 12607 id = 136 }
    location = 80 # Wilhelmshaven
    base     = 80
    division =
    { id    = { type = 12607 id = 137 }
      name  = "KMS Scharnhorst"
      type  = battlecruiser
      model = 3
    }
    division =
    { id    = { type = 12607 id = 138 }
      name  = "KMS Gneisenau"
      type  = battlecruiser
      model = 3
    }
    division =
    { id    = { type = 12607 id = 140 }
      name  = "KMS Admiral Hipper"
      type  = heavy_cruiser
      model = 3
    }
  }
  navalunit =
  { name     = "Erkundungsflotte"
    id       = { type = 12607 id = 110 }
    location = 80 # Wilhelmshaven
    base     = 80
    division =
    { id    = { type = 12607 id = 141 }
      name  = "KMS Nürnberg"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 12607 id = 142 }
      name  = "KMS Leipzig"
      type  = light_cruiser
      model = 2
    }
    division =
    { id    = { type = 12607 id = 143 }
      name  = "KMS Köln"
      type  = light_cruiser
      model = 2
    }
    division =
    { id    = { type = 12607 id = 144 }
      name  = "KMS Königsberg"
      type  = light_cruiser
      model = 2
    }
    division =
    { id    = { type = 12607 id = 111 }
      name  = "KMS Karlsruhe"
      type  = light_cruiser
      model = 2
    }
    division =
    { id    = { type = 12607 id = 145 }
      name  = "KMS Emden"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 12607 id = 139 }
      name  = "KMS Admiral Scheer"
      type  = heavy_cruiser
      model = 3
    }
  }
  navalunit =
  { name     = "Zerstörerflottille"
    id       = { type = 12607 id = 112 }
    location = 80 # Wilhelmshaven '
    base     = 80
    division =
    { id    = { type = 12607 id = 146 }
      name  = "4. Zerstörergeschwader"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 12607 id = 147 }
      name  = "5. Zerstörergeschwader"
      type  = destroyer
      model = 1
    }
  }
  navalunit =
  { name     = "2. Unterseebootsflottille"
    id       = { type = 12607 id = 113 }
    location = 80 # Wilhelmshaven
    base     = 80
    division =
    { id    = { type = 12607 id = 149 }
      name  = "KMS Saltzwedel"
      type  = submarine
      model = 2
    }
  }

  navalunit =
  { name     = "1. Unterseebootsflottille"
    id       = { type = 12607 id = 114 }
    location = 90 # Kiel
    base     = 90
    division =
    { id    = { type = 12607 id = 148 }
      name  = "KMS Weddigen"
      type  = submarine
      model = 1
    }
  }

  navalunit =
  { name     = "3. Unterseebootsflottille"
    id       = { type = 12607 id = 115 }
    location = 90 # Kiel
    base     = 90
    division =
    { id    = { type = 12607 id = 120 }
      name  = "KMS Lohs"
      type  = submarine
      model = 1
    }
  }


  navalunit =
  { name     = "7. Unterseebootsflottille"
    id       = { type = 12607 id = 116 }
    location = 90 # Kiel
    base     = 90
    division =
    { id    = { type = 12607 id = 117 }
      name  = "KMS Wegener"
      type  = submarine
      model = 3
    }
  }


  navalunit =
  { name     = "I. Transportflotte"
    id       = { type = 12607 id = 118 }
    location = 90 # Kiel
    base     = 90
    division =
    { id   = { type = 12607 id = 119 }
      name = "1. Transportflottille"
      type = transport
    }
  }
  navalunit =
  { name     = "Baltische Flotte"
    id       = { type = 12607 id = 121 }
    location = 296
    base     = 296
    division =
    { id    = { type = 12607 id = 122 }
      name  = "KMS Schleswig-Holstein"
      type  = battlecruiser
      model = 0
    }         # Pre-WWI Battleship
    division =
    { id    = { type = 12607 id = 123 }
      name  = "KMS Schlesien"
      type  = battlecruiser
      model = 0
    }         # Pre-WWI Battleship
    division =
    { id    = { type = 12607 id = 124 }
      name  = "1. Zerstörergeschwader"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 12607 id = 125 }
      name  = "2. Zerstörergeschwader"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 12607 id = 126 }
      name  = "3. Zerstörergeschwader"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 12607 id = 127 }
      name  = "KMS Deutschland"
      type  = heavy_cruiser
      model = 3
    }
    division =
    { id    = { type = 12607 id = 128 }
      name  = "KMS Admiral Graf Spee"
      type  = heavy_cruiser
      model = 3
    }
  }
  airunit =
  { location = 90
    base     = 90
    id       = { type = 12607 id = 80 }
    name     = "Jagdgeschwader 234"
    division =
    { experience = 15
      id         = { type = 12607 id = 81 }
      name       = "Jagdgeschwader 234"
      strength   = 100
      type       = interceptor
      model      = 2
    }
  }
  airunit =
  { location = 67
    base     = 67
    id       = { type = 12607 id = 82 }
    name     = "Jagdgeschwader 334"
    division =
    { experience = 15
      id         = { type = 12607 id = 83 }
      name       = "Jagdgeschwader 334"
      strength   = 100
      type       = interceptor
      model      = 2
    }
  }
  airunit =
  { location = 473
    base     = 473
    id       = { type = 12607 id = 84 }
    name     = "Jagdgeschwader 131"
    division =
    { experience = 15
      id         = { type = 12607 id = 85 }
      name       = "Jagdgeschwader 131"
      strength   = 100
      type       = interceptor
      model      = 2
    }
  }
  airunit =
  { location = 300
    base     = 300
    id       = { type = 12607 id = 86 }
    name     = "Jagdgeschwader 135"
    division =
    { experience = 15
      id         = { type = 12607 id = 87 }
      name       = "Jagdgeschwader 135"
      strength   = 100
      type       = interceptor
      model      = 2
    }
  }
  airunit =
  { location = 463
    base     = 463
    id       = { type = 12607 id = 88 }
    name     = "Jagdgeschwader 27"
    division =
    { experience = 25
      id         = { type = 12607 id = 89 }
      name       = "Jagdgeschwader 27"
      strength   = 100
      type       = interceptor
      model      = 2
    }
  }
  airunit =
  { location = 300
    base     = 300
    id       = { type = 12607 id = 90 }
    name     = "Luftflotte 1"
    division =
    { experience = 25
      id         = { type = 12607 id = 91 }
      name       = "Jagdgeschwader 134"
      strength   = 100
      type       = multi_role
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 92 }
      name       = "Kampfgeschwader 355"
      strength   = 100
      type       = tactical_bomber
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 93 }
      name       = "Kampfgeschwader 257"
      strength   = 100
      type       = tactical_bomber
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 94 }
      name       = "Sturzkampfgeschwader 162"
      strength   = 100
      type       = cas
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 95 }
      name       = "Sturzkampfgeschwader 165"
      strength   = 100
      type       = cas
      model      = 0
    }
  }
  airunit =
  { location = 376
    base     = 376
    id       = { type = 12607 id = 96 }
    name     = "Luftflotte 2"
    division =
    { experience = 25
      id         = { type = 12607 id = 97 }
      name       = "Jagdgeschwader 136"
      strength   = 100
      type       = multi_role
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 98 }
      name       = "Kampfgeschwader 253"
      strength   = 100
      type       = tactical_bomber
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 99 }
      name       = "Kampfgeschwader 153"
      strength   = 100
      type       = tactical_bomber
      model      = 2
    }
  }
  airunit =
  { location = 80
    base     = 80
    id       = { type = 12607 id = 100 }
    name     = "Luftflotte 3"
    division =
    { experience = 25
      id         = { type = 12607 id = 101 }
      name       = "Jagdgeschwader 132"
      strength   = 100
      type       = multi_role
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 102 }
      name       = "Kampfgeschwader 152"
      strength   = 100
      type       = tactical_bomber
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 103 }
      name       = "Sturzkampfgeschwader 163"
      strength   = 100
      type       = cas
      model      = 0
    }
  }
  airunit =
  { location = 300
    base     = 300
    id       = { type = 12607 id = 104 }
    name     = "Oberkommando der Luftwaffe"
    division =
    { experience = 25
      id         = { type = 12607 id = 105 }
      name       = "Lufthansa"
      strength   = 100
      type       = transport_plane
      model      = 0
    }
  }
  # ####units under construction or repair#####
  division_development =
  { name  = "Kampfgeschwader 252"
    id    = { type = 12607 id = 150 }
    type  = tactical_bomber
    model = 2
    cost  = 15
    date  = { year = 1938 month = september day = 23 }
  }
  division_development =
  { name  = "Jagdgeschwader 333"
    id    = { type = 12607 id = 151 }
    type  = interceptor
    model = 2
    cost  = 12
    date  = { year = 1938 month = october }
  }
  division_development =
  { name  = "KMS Hundius"
    id    = { type = 12607 id = 152 }
    type  = submarine
    model = 3
    cost  = 4
    date  = { year = 1938 month = october }
  }
  division_development =
  { name  = "Jagdgeschwader 433"
    id    = { type = 12607 id = 153 }
    type  = interceptor
    model = 2
    cost  = 12
    date  = { year = 1938 month = december }
  }
  division_development =
  { name  = "KMS Emsmann"
    id    = { type = 12607 id = 154 }
    type  = submarine
    model = 2
    cost  = 2
    date  = { year = 1938 month = December }
  }
  division_development =
  { name  = "Jagdgeschwader 130"
    id    = { type = 12607 id = 155 }
    type  = interceptor
    model = 2
    cost  = 12
    date  = { year = 1939 month = january }
  }
  division_development =
  { name  = "Jagdgeschwader 141"
    id    = { type = 12607 id = 156 }
    type  = multi_role
    model = 0
    cost  = 14
    date  = { year = 1939 month = january }
  }
  division_development =
  { name  = "Sturzkampfgeschwader 77"
    id    = { type = 12607 id = 157 }
    type  = cas
    model = 0
    cost  = 8
    date  = { year = 1939 month = january }
  }
  division_development =
  { name  = "Sturzkampfgeschwader 76"
    id    = { type = 12607 id = 158 }
    type  = cas
    model = 0
    cost  = 8
    date  = { year = 1939 month = january }
  }
  division_development =
  { name  = "4. Panzer-Division"
    id    = { type = 12607 id = 159 }
    type  = light_armor
    model = 1
    cost  = 20
    date  = { year = 1938 month = october day = 10 }
  }
  division_development =
  { name  = "SS-Verfügungsdivision"
    id    = { type = 12607 id = 160 }
    type  = motorized
    model = 0
    cost  = 14
    date  = { year = 1938 month = october day = 10 }
  }
  division_development =
  { name  = "5. Panzer-Division"
    id    = { type = 12607 id = 161 }
    type  = light_armor
    model = 1
    cost  = 20
    date  = { year = 1938 month = october day = 25 }
  }
  # 10 Pz removed from build queue - now provided by End of Czech event
  division_development =
  { name  = "46. Infanterie-Division"
    id    = { type = 12607 id = 162 }
    type  = infantry
    model = 1
    cost  = 7
    date  = { year = 1938 month = november day = 18 }
  }
  division_development =
  { name  = "KMS Blücher"
    type  = heavy_cruiser
    model = 3
    cost  = 7
    id    = { type = 12607 id = 163 }
    date  = { year = 1938 month = november day = 19 } #74% ready
  }
  division_development =
  { name  = "KMS Bismarck"
    type  = battleship
    model = 3
    cost  = 10
    id    = { type = 12607 id = 164 }
    date  = { year = 1939 month = august day = 20 } #52% ready
  }
  division_development =
  { name  = "KMS Tirpitz"
    type  = battleship
    model = 3
    cost  = 10
    id    = { type = 12607 id = 165 }
    date  = { year = 1939 month = november day = 1 } #42% ready
  }
  division_development =
  { name  = "KMS Graf Zeppelin"
    type  = carrier
    model = 2
    cost  = 6
    id    = { type = 12607 id = 166 }
    date  = { year = 1940 month = february day = 20 } #26% ready
    extra = cag
    brigade_model = 2
  }
}
