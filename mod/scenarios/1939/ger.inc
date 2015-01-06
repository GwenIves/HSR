
##############################
# Country definition for GER #
##############################

province = { id = 66 landfort = 3 } # Aachen
province =
{ id       = 67
  anti_air = 3
  air_base = { size = 4 current_size = 4 }
}            # Essen
province = { id = 74 landfort = 3 anti_air = 2 } # Saarbrücken
province = { id = 75 landfort = 3 } # Cologne
province = { id = 76 anti_air = 2 } # Dortmund
province =
{ id         = 80
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}              # Wilhelmshafen
province =
{ id       = 86
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}            # Hannover
province = { id = 88 anti_air = 2 } # Hamburg
province = { id = 89 anti_air = 1 } # Lübeck
province =
{ id         = 90
  anti_air   = 1
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}              # Kiel
province =
{ id         = 206
  anti_air   = 1
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 1 current_size = 1 }
}              # Memel
province =
{ id         = 296
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}              # Rostock
province = { id = 298 anti_air = 2 } # Magdeburg
province =
{ id       = 300
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}            # Berlin
province =
{ id       = 302
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}            # Stettin
province = { id = 304 supplypool = 500 oilpool = 500 } # Elbing
province = { id = 310 anti_air = 1 } # Leipzig
province = { id = 312 anti_air = 1 } # Nuremberg
province =
{ id       = 313
  anti_air = 3
  air_base = { size = 4 current_size = 4 }
}            # Frankfurt-am-Main
province =
{ id       = 314
  landfort = 3
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            # Stuttgart
province = { id = 315 landfort = 3 } # Freiburg
province =
{ id       = 376
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}            # Munich
province =
{ id       = 377
  anti_air = 2
}            # Innsbruck
province = { id = 461 anti_air = 1 } # Klagenfurt
province =
{ id       = 463
  anti_air = 4
  air_base = { size = 5 current_size = 5 }
}            # Vienna
province = { id = 466 landfort = 3 } # Strakonice
province =
{ id       = 469
  anti_air = 2
  air_base = { size = 3 current_size = 3 }
}            # Prague
province = { id = 467 landfort = 3 } # Tábor
province = { id = 471 landfort = 3 } # Ústí
province = { id = 472 landfort = 3 } # Liberec
province =
{ id       = 473
  anti_air = 2
  air_base = { size = 6 current_size = 6 }
}            # Breslau
province = { id = 475 anti_air = 2 } # Brno
province =
{ id       = 482
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            # Oppeln
province =
{ id         = 510
  anti_air   = 4
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Königsberg

#####################
# Country main data #
#####################

country =
{ tag                    = GER
  belligerence           = 20
  capital                = 300
  manpower               = 850
  transports             = 85
  escorts                = 23
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 1
    free_market       = 5
    freedom           = 2
    professional_army = 7
    defense_lobby     = 10
    interventionism   = 10
  }
  SpyInfo                = { country = "GER" NumberOfSpies = 13 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 10 }
  #SpyInfo                = { country = "FRA" NumberOfSpies = 6 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 5 }
  #SpyInfo                = { country = "CZE" NumberOfSpies = 10 }
  #SpyInfo                = { country = "AUS" NumberOfSpies = 10 }
  #SpyInfo                = { country = "SPR" NumberOfSpies = 5 }
  #SpyInfo                = { country = "POL" NumberOfSpies = 10 }
  #SpyInfo                = { country = "SWE" NumberOfSpies = 8 }
  #SpyInfo                = { country = "NOR" NumberOfSpies = 10 }
  #SpyInfo                = { country = "FIN" NumberOfSpies = 5 }
  #SpyInfo                = { country = "YUG" NumberOfSpies = 5 }
  #SpyInfo                = { country = "HUN" NumberOfSpies = 8 }
  #SpyInfo                = { country = "BUL" NumberOfSpies = 5 }
  #SpyInfo                = { country = "BEL" NumberOfSpies = 8 }
  #SpyInfo                = { country = "DEN" NumberOfSpies = 10 }
  #SpyInfo                = { country = "HOL" NumberOfSpies = 8 }
  #SpyInfo                = { country = "ARG" NumberOfSpies = 8 }
  #SpyInfo                = { country = "USA" NumberOfSpies = 10 }
  #SpyInfo                = { country = "ALB" NumberOfSpies = 4 }
  #SpyInfo                = { country = "GRE" NumberOfSpies = 4 }
  #SpyInfo                = { country = "BRA" NumberOfSpies = 4 }
  #SpyInfo                = { country = "JAP" NumberOfSpies = 8 }
  #SpyInfo                = { country = "ROM" NumberOfSpies = 5 }
  #SpyInfo                = { country = "LIT" NumberOfSpies = 5 }
  #SpyInfo                = { country = "LUX" NumberOfSpies = 4 }
  #SpyInfo                = { country = "POR" NumberOfSpies = 4 }
  #SpyInfo                = { country = "ITA" NumberOfSpies = 10 }
  #SpyInfo                = { country = "CHI" NumberOfSpies = 10 }
  nationalprovinces      = { 66  67  74  75  76  80  81  82  83  84  85  86  87  88  89  90  296 297 298 299 300 301 302 304 308 309 310 311 312 313
			     314 315 374 375 376 473 482 510 373 377 460 461 462 463 464 465 471 472 466 467 470 469 468 474 475 72  73  316 71  303
			     305 306 307 206
			   }
  ownedprovinces         = { 66  67  74  75  76  80  81  82  83  84  85  86  87  88  89  90  296 297 298 299 300 301 302 304 308 309 310 311 312 313
			     314 315 374 375 376 473 482 510 373 377 460 461 462 463 464 465 471 472 466 467 470 469 468 474 475 206
			   }
  controlledprovinces    = { 66  67  74  75  76  80  81  82  83  84  85  86  87  88  89  90  296 297 298 299 300 301 302 304 308 309 310 311 312 313
			     314 315 374 375 376 473 482 510 373 377 460 461 462 463 464 465 471 472 466 467 470 469 468 474 475 206
			   }
  # Germany 1939 techs
  # ######################
  techapps               = { 1010  1020  1030  1070  1080  1110  1120  1190  1200  1210  1220  1230  1310  1340  14000 14010 2010  2020  2030  2040
			     2050  2070  2150  2290  2300  2310  2320  2330  2400  2410  2450  2460  2510  3010  3020  3030  3070  3080  3090  3100
			     3130  3140  3150  3160  3190  3200  3210  3220  3250  3260  3270  3280  3320  3330  3340  3400  3410  3420  3430  4010
			     4020  4030  4040  4050  4120  4130  4140  4150  4170  4190  4200  4220  4250  5010  5020  5030  5050  5060  5070  5080
			     5090  5100  5110  5190  5200  5210  5220  5310  5320  5350  5360  5410  5470  5480  5490  5550  6210  6220  6230  6240
			     6250  6260  8010  8020  8030  8040  8050  8080  8090  8150  8160  8170  8210  8290  9010  9020  9030  9040  9050  9060
			     9070  9080  9090  9100  9110  9120  9140  9190  9200  9270  9290
			   }
  blueprints             = { 1240 }
  # Memel
  diplomacy =
  { relation = { tag = ARG value = 75 }
    relation = { tag = AST value = -200 }
    relation = { tag = BEL value = 20 }
    relation = { tag = BHU value = -200 }
    relation = { tag = BOL value = 15 }
    relation = { tag = BRA value = 50 }
    relation = { tag = BUL value = 125 }
    relation = { tag = CAN value = -200 }
    relation = { tag = CHL value = 50 }
    relation = { tag = COL value = -20 }
    relation = { tag = SLO value = 200 access = yes }
    relation = { tag = ENG value = -200 }
    relation = { tag = EST value = 10 }
    relation = { tag = FIN value = 80 }
    relation = { tag = FRA value = -200 }
    relation = { tag = HOL value = 1 }
    relation = { tag = HUN value = 150 }
    relation = { tag = IRQ value = 25 }
    relation =
    { tag        = ITA
      value      = 150
      guaranteed = { day = 25 month = october year = 1936 }
    }
    relation = { tag = JAP value = 75 }
    relation = { tag = LAT value = 10 }
    relation = { tag = LIT value = 10 }
    relation = { tag = LUX value = -50 }
    relation = { tag = MAN value = 20 }
    relation = { tag = MEN value = 20 }
    relation = { tag = NEP value = -200 }
    relation = { tag = NZL value = -200 }
    relation = { tag = OMN value = -200 }
    relation = { tag = POL value = -200 }
    relation = { tag = POR value = 75 }
    relation = { tag = ROM value = 120 }
    relation = { tag = SAF value = -200 }
    relation =
    { tag        = SCH
      value      = 50
      guaranteed = { day = 16 month = may year = 1935 }
    }
    relation = { tag = SOV value = 20 }
    relation =
    { tag        = SPA
      value      = 50
      guaranteed = { day = 18 month = november year = 1936 }
    }
    relation = { tag = SWE value = 50 }
    relation = { tag = TUR value = 10 }
    relation = { tag = YEM value = -200 }
    relation = { tag = YUG value = 50 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = -50 }
  }
  headofstate            = { type = 9 id = 1 }
  headofgovernment       = { type = 9 id = 2 }
  foreignminister        = { type = 9 id = 55 }
  armamentminister       = { type = 9 id = 80 }
  ministerofsecurity     = { type = 9 id = 108 }
  ministerofintelligence = { type = 9 id = 6 }
  chiefofstaff           = { type = 9 id = 156 }
  chiefofarmy            = { type = 9 id = 174 }
  chiefofnavy            = { type = 9 id = 9 }
  chiefofair             = { type = 9 id = 10 }
  dormant_ministers      = { 33 45 46 51 3 64 4 77 5 116 7 8 179 52 131 }
  dormant_leaders        = { 398 579 607 }
  # ###########################
  # German OOB 			   #
  # ###########################
  landunit =
  { id       = { type = 12607 id = 1001 }
    name     = "Heeresgruppe Nord"
    location = 510
    division =
    { id       = { type = 12607 id = 1002 }
      name     = "Heeresgruppe Nord"
      strength = 100
      type     = hq
      model    = 1
    }
  }
  landunit =
  { id       = { type = 12607 id = 1003 }
    name     = "Heeresgruppe Süd"
    location = 474
    division =
    { id       = { type = 12607 id = 1004 }
      name     = "Heeresgruppe Süd"
      strength = 100
      type     = hq
      model    = 1
    }
  }
  landunit =
  { id       = { type = 12607 id = 1005 }
    name     = "Heeresgruppe C"
    location = 74
    division =
    { id       = { type = 12607 id = 1006 }
      name     = "Heeresgruppe C"
      strength = 100
      type     = hq
      model    = 1
    }
  }
  landunit =
  { id       = { type = 12607 id = 1007 }
    name     = "Oberk. der Wehrmacht"
    location = 300
    division =
    { id       = { type = 12607 id = 1008 }
      name     = "Oberk. der Wehrmacht"
      strength = 100
      type     = hq
      model    = 1
    }
  }
  landunit =
  { id       = { type = 12607 id = 1 }
    name     = "IX. Armeekorps"
    location = 74
    division =
    { experience    = 25
      id            = { type = 12607 id = 2 }
      name          = "25. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 3 }
      name       = "33. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 4 }
      name       = "71. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
  }
  # ######################
  # ######################
  landunit =
  { id       = { type = 12607 id = 5 }
    name     = "XII. Armeekorps"
    location = 314
    division =
    { experience    = 25
      id            = { type = 12607 id = 6 }
      name          = "15. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 7 }
      name       = "34. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 8 }
      name       = "52. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 9 }
      name       = "79. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
  }
  # ########################
  # ########################
  landunit =
  { id       = { type = 12607 id = 10 }
    name     = "Grenztruppen Saarpfalz"
    location = 74
    division =
    { experience    = 25
      id            = { type = 12607 id = 11 }
      name          = "6. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 12 }
      name       = "9. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = engineer
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 13 }
      name       = "36. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
  }
  # ###########################
  # ###########################
  landunit =
  { id       = { type = 12607 id = 14 }
    name     = "1. Armee"
    location = 74
    division =
    { experience    = 25
      id            = { type = 12607 id = 15 }
      name          = "75. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience    = 25
      id            = { type = 12607 id = 16 }
      name          = "209. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = anti_tank
      brigade_model = 1
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 17 }
      name       = "214. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 19 }
      name       = "223. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 20 }
      name       = "231. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 21 }
      name       = "246. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 22 }
      name       = "76. Infanterie-Division (mot)"
      strength   = 100
      type       = motorized
    }
  }
  # ##########################
  # ##########################
  landunit =
  { id       = { type = 12607 id = 23 }
    name     = "V. Armeekorps"
    location = 75
    division =
    { experience    = 25
      id            = { type = 12607 id = 26 }
      name          = "22. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 27 }
      name       = "225. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
  }
  landunit =
  { id       = { type = 12607 id = 9001 }
    name     = "VI. Armeekorps"
    location = 302
    division =
    { experience = 25
      id         = { type = 12607 id = 28 }
      name       = "Grenz-division"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = engineer
    }
  }
  landunit =
  { id       = { type = 12607 id = 9002 }
    name     = "XXVII. Armeekorps"
    location = 67
    division =
    { experience    = 25
      id            = { type = 12607 id = 9003 }
      name          = "16. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 29 }
      name       = "69. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 30 }
      name       = "211. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 31 }
      name       = "216. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
  }
  landunit =
  { id       = { type = 12607 id = 9004 }
    name     = "XXX. Armeekorps"
    location = 76
    division =
    { experience = 25
      id         = { type = 12607 id = 32 }
      name       = "9. Grenz-division"
      strength   = 100
      type       = infantry
      model      = 2
    }
  }
  # ########################
  # ########################
  landunit =
  { id       = { type = 12607 id = 33 }
    name     = "Grenztruppen Eiffel"
    location = 75
    division =
    { experience    = 25
      id            = { type = 12607 id = 34 }
      name          = "26. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 35 }
      name       = "86. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 36 }
      name       = "227. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
  }
  # ############################
  # ############################
  landunit =
  { id       = { type = 12607 id = 39 }
    name     = "7. Armee"
    location = 315
    division =
    { experience    = 25
      id            = { type = 12607 id = 40 }
      name          = "78. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = anti_tank
      brigade_model = 1
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 41 }
      name       = "212. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = engineer
    }
    division =
    { experience    = 25
      id            = { type = 12607 id = 42 }
      name          = "215. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 4
    }
  }
  # #######################
  # #######################
  landunit =
  { id       = { type = 12607 id = 43 }
    name     = "Grenztruppen Oberrhein"
    location = 314
    division =
    { experience    = 25
      id            = { type = 12607 id = 44 }
      name          = "5. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 45 }
      name       = "35. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 46 }
      name       = "14. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
  }
  landunit =
  { id       = { type = 12607 id = 9007 }
    name     = "5. Armee"
    location = 75
    division =
    { experience    = 25
      id            = { type = 12607 id = 9008 }
      name          = "58. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = anti_tank
      brigade_model = 1
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 9009 }
      name       = "87. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
  }
  # #####################
  # #####################
  landunit =
  { id       = { type = 12607 id = 48 }
    name     = "I. Armeekorps"
    location = 482
    division =
    { experience    = 25
      id            = { type = 12607 id = 56 }
      name          = "11. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 57 }
      name       = "61. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience    = 25
      id            = { type = 12607 id = 59 }
      name          = "21. Grenz-division"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 4
    }
  }
  landunit =
  { id       = { type = 12607 id = 9010 }
    name     = "3. Armee"
    location = 304
    division =
    { experience = 25
      id         = { type = 12607 id = 52 }
      name       = "217. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = engineer
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 53 }
      name       = "15. Grenz-division"
      strength   = 100
      type       = infantry
      model      = 2
    }
  }
  landunit =
  { id       = { type = 12607 id = 55 }
    name     = "Heeresgruppe Nord"
    location = 510
    division =
    { experience = 25
      id         = { type = 12607 id = 49 }
      name       = "73. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 58 }
      name       = "Panzer-Division Kempf"
      strength   = 100
      type       = light_armor
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 50 }
      name       = "206. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 9600 }
      name       = "208. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
  }
  # #########################
  # #########################
  landunit =
  { id       = { type = 12607 id = 61 }
    name     = "Stab Wodrig"
    location = 510
    division =
    { experience = 25
      id         = { type = 12607 id = 62 }
      name       = "1. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 63 }
      name       = "12. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
  }
  landunit =
  { id       = { type = 12607 id = 9011 }
    name     = "XXI. Armeekorps"
    location = 304
    division =
    { experience    = 25
      id            = { type = 12607 id = 9012 }
      name          = "21. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 9013 }
      name       = "228. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
  }
  # ########################
  # ########################
  landunit =
  { id       = { type = 12607 id = 64 }
    name     = "4. Armee"
    location = 473
    division =
    { experience = 25
      id         = { type = 12607 id = 65 }
      name       = "23. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = engineer
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 66 }
      name       = "218. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = engineer
    }
  }
  landunit =
  { id       = { type = 12607 id = 9014 }
    name     = "II. Armeekorps"
    location = 300
    division =
    { experience = 25
      id         = { type = 12607 id = 67 }
      name       = "3. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 68 }
      name       = "32. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
  }
  landunit =
  { id       = { type = 12607 id = 9023 }
    name     = "III. Armeekorps"
    location = 473
    division =
    { experience = 25
      id         = { type = 12607 id = 69 }
      name       = "50. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = anti_tank
    }
  }
  landunit =
  { id       = { type = 12607 id = 9015 }
    name     = "XIX. Armeekorps"
    location = 308
    division =
    { experience = 25
      id         = { type = 12607 id = 71 }
      name       = "2. Infanterie-Division (mot)"
      strength   = 100
      type       = motorized
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 72 }
      name       = "20. Infanterie-Division (mot)"
      strength   = 100
      type       = motorized
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 73 }
      name       = "3. Panzer-Division"
      strength   = 100
      type       = armor
      model      = 1
    }
  }
  landunit =
  { id       = { type = 12607 id = 9016 }
    name     = "Grenzschutz-Kommando 1"
    location = 90
    division =
    { experience = 25
      id         = { type = 12607 id = 74 }
      name       = "207. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
  }
  # ########################
  # ########################
  landunit =
  { id       = { type = 12607 id = 75 }
    name     = "Heeresgruppe Sud" # As above, these are only directly commanded units by HQ#
    location = 474
    division =
    { experience    = 25
      id            = { type = 12607 id = 76 }
      name          = "252. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 77 }
      name       = "257. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 78 }
      name       = "258. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
  }
  landunit =
  { id       = { type = 12607 id = 9017 }
    name     = "VII. Armeekorps"
    location = 478
    division =
    { experience    = 25
      id            = { type = 12607 id = 79 }
      name          = "27. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 80 }
      name       = "68. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
  }
  landunit =
  { id       = { type = 12607 id = 9018 }
    name     = "XXII. Armeekorps"
    location = 482
    division =
    { experience = 25
      id         = { type = 12607 id = 82 }
      name       = "62. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 83 }
      name       = "213. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 84 }
      name       = "221. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
  }
  # #########################
  # #########################
  landunit =
  { id       = { type = 12607 id = 85 }
    name     = "8. Armee"
    location = 302
    division =
    { experience = 25
      id         = { type = 12607 id = 86 }
      name       = "30. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = anti_tank
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 87 }
      name       = "24. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 88 }
      name       = "10. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 89 }
      name       = "17. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
  }
  # #######################
  # #######################
  landunit =
  { id       = { type = 12607 id = 90 }
    name     = "10. Armee"
    location = 308
    division =
    { experience    = 25
      id            = { type = 12607 id = 93 }
      name          = "4. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 94 }
      name       = "46. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 95 }
      name       = "13. Infanterie-Division (mot)"
      strength   = 100
      type       = motorized
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 96 }
      name       = "29. Infanterie-Division (mot)"
      strength   = 100
      type       = motorized
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 97 }
      name       = "18. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 98 }
      name       = "19. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 99 }
      name       = "4. Panzer-Division"
      strength   = 100
      type       = armor
      model      = 1
    }
    division =
    { experience    = 25
      id            = { type = 12607 id = 101 }
      name          = "14. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 102 }
      name       = "31. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 103 }
      name       = "1. Panzer-Division"
      strength   = 100
      type       = armor
      model      = 2
    }
  }
  # ######################
  # ######################
  landunit =
  { id       = { type = 12607 id = 104 }
    name     = "14. Armee"
    location = 482
    division =
    { experience    = 25
      id            = { type = 12607 id = 108 }
      name          = "8. Infanterie-Division"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 109 }
      name       = "28. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 110 }
      name       = "239. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 111 }
      name       = "5. Panzer-Division"
      strength   = 100
      type       = armor
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 113 }
      name       = "7. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 114 }
      name       = "44. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 115 }
      name       = "45. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 116 }
      name       = "3. Gebirgs-Division"
      strength   = 100
      type       = bergsjaeger
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 118 }
      name       = "2. Panzer-Division"
      strength   = 100
      type       = light_armor
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 9020 }
      name       = "30. Grenz-division"
      strength   = 100
      type       = infantry
      model      = 2
    }
  }
  # #####################
  # #####################
  landunit =
  { id       = { type = 12607 id = 119 }
    name     = "Reserve Heeresgruppe C"
    location = 313
    division =
    { experience = 25
      id         = { type = 12607 id = 120 }
      name       = "251. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 121 }
      name       = "253. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 122 }
      name       = "254. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 123 }
      name       = "255. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 124 }
      name       = "256. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 125 }
      name       = "260. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 126 }
      name       = "262. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 127 }
      name       = "263. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 128 }
      name       = "267. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 129 }
      name       = "268. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 130 }
      name       = "269. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 1
    }
  }
  # #####################
  # #####################
  landunit =
  { id       = { type = 12607 id = 131 }
    name     = "Reserve Heeresgruppe SE"
    location = 473
    division =
    { experience = 25
      id         = { type = 12607 id = 132 }
      name       = "56. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 133 }
      name       = "57. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 134 }
      name       = "1. Gebirgsjäger-Division"
      strength   = 100
      type       = bergsjaeger
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 135 }
      name       = "2. Gebirgsjäger-Division"
      strength   = 100
      type       = bergsjaeger
    }
  }
  landunit =
  { id       = { type = 12607 id = 9021 }
    name     = "Reserve Heeresgruppe Nord"
    location = 302
    division =
    { experience = 25
      id         = { type = 12607 id = 9022 }
      name       = "10. Panzer-Division"
      strength   = 100
      type       = armor
      model      = 2
    }
  }
  landunit =
  { id       = { type = 12607 id = 600 }
    name     = "Grenztruppen Aachen"
    location = 66
    division =
    { experience = 25
      id         = { type = 12607 id = 601 }
      name       = "Grenz-truppen Aachen"
      strength   = 100
      type       = garrison
      model      = 1
    }
  }
  landunit =
  { id       = { type = 12607 id = 602 }
    name     = "Grenz-truppen Trier"
    location = 75
    division =
    { experience = 25
      id         = { type = 12607 id = 604 }
      name       = "Grenztruppen Trier"
      strength   = 100
      type       = garrison
      model      = 1
    }
  }
  # ###########################
  # #####German Naval OOB######
  # #######1 Sept. 1939########
  # ###########################
  # Western Area#
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
    id       = { type = 12607 id = 9040 }
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
    { id    = { type = 12607 id = 999 }
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
    id       = { type = 12607 id = 9024 }
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
    division =
    { id    = { type = 12607 id = 9025 }
      name  = "6. Zerstörergeschwader"
      type  = destroyer
      model = 1
    }
  }
  navalunit =
  { name     = "1. Unterseebootsflotte"
    id       = { type = 12607 id = 9026 }
    location = 90 # Kiel
    base     = 90
    division =
    { id    = { type = 12607 id = 148 }
      name  = "1. Unterseebootsflottille"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 12607 id = 149 }
      name  = "5. Unterseebootsflottille"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 12607 id = 150 }
      name  = "8. Unterseebootsflottille"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 12607 id = 998 }
      name  = "9. Unterseebootsflottille"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 12607 id = 997 }
      name  = "10. Unterseebootsflottille"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 12607 id = 996 }
      name  = "11. Unterseebootsflottille"
      type  = submarine
      model = 3
    }
  }
  navalunit =
  { name     = "I. Transportflotte"
    id       = { type = 12607 id = 9050 }
    location = 90 # Kiel
    base     = 90
    division =
    { id   = { type = 12607 id = 9051 }
      name = "1. Transportflottille"
      type = transport
    }
  }
  # Note on Western Area
  # Specifications for the light light_cruisers are from the 1936 scenario, & are subject to change.
  # Eastern Area#
  navalunit =
  { name     = "Baltische Flotte"
    id       = { type = 12607 id = 151 }
    location = 296
    base     = 296
    division =
    { id    = { type = 12607 id = 152 }
      name  = "KMS Schleswig-Holstein"
      type  = battlecruiser
      model = 0
    }         # Pre-WWI Battleship
    division =
    { id    = { type = 12607 id = 153 }
      name  = "KMS Schlesien"
      type  = battlecruiser
      model = 0
    }         # Pre-WWI Battleship
    division =
    { id    = { type = 12607 id = 154 }
      name  = "1. Zerstörergeschwader"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 12607 id = 995 }
      name  = "2. Zerstörergeschwader"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 12607 id = 994 }
      name  = "3. Zerstörergeschwader"
      type  = destroyer
      model = 0
    }
  }
  # Warships at Sea#
  navalunit =
  { name     = "Deutschland"
    id       = { type = 12607 id = 155 }
    location = 2363 # SW of Greenland
    base     = 80
    division =
    { id    = { type = 12607 id = 156 }
      name  = "KMS Deutschland"
      type  = heavy_cruiser
      model = 3
    }         # Pocket Battleship
  }
  navalunit =
  { name     = "Admiral Graf Spee"
    id       = { type = 12607 id = 157 }
    location = 2506 # Somewhere in South Atlantic
    base     = 80
    division =
    { id    = { type = 12607 id = 158 }
      name  = "KMS Admiral Graf Spee"
      type  = heavy_cruiser
      model = 3
    }         # Pocket Battleship
  }
  navalunit =
  { name     = "7. Unterseebootsflotille"
    id       = { type = 12607 id = 159 }
    location = 2596 # West of Bay of Biscaya
    base     = 80
    division =
    { id       = { type = 12607 id = 160 }
      name     = "7. Unterseebootsflottille"
      strength = 100
      type     = submarine
      model    = 1
    }
  }
  navalunit =
  { name     = "6. Unterseebootsflotille"
    id       = { type = 12607 id = 161 }
    location = 2595 # West of the Iberian Peninsula
    base     = 80
    division =
    { id       = { type = 12607 id = 162 }
      name     = "6. Unterseebootsflottille"
      strength = 100
      type     = submarine
      model    = 1
    }
  }
  navalunit =
  { name     = "2. Unterseebootsflotille"
    id       = { type = 12607 id = 9027 }
    location = 2394 # North Sea
    base     = 80
    division =
    { id       = { type = 12607 id = 9028 }
      name     = "2. Unterseebootsflottille"
      strength = 100
      type     = submarine
      model    = 1
    }
  }
  navalunit =
  { name     = "3. Unterseebootsflotte"
    id       = { type = 12607 id = 9029 }
    location = 2480 # Baltic Sea
    base     = 80
    division =
    { id    = { type = 12607 id = 9030 }
      name  = "3. Unterseebootsflottille"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 12607 id = 9031 }
      name  = "4. Unterseebootsflottille"
      type  = submarine
      model = 1
    }
  }
  # ##########################################
  # #
  # Luftwaffe orbat 1939 (PB) #
  # #
  # ##########################################
  airunit =
  { location = 300
    base     = 300
    id       = { type = 12607 id = 571 }
    name     = "Ob.d.L."
    division =
    { experience = 25
      id         = { type = 12607 id = 501 }
      name       = "Kampfgeschwader zbV 1"
      strength   = 100
      type       = transport_plane
      model      = 0
    }
  }
  airunit =
  { location = 86
    base     = 86
    id       = { type = 12607 id = 574 }
    name     = "Luftflotte 2"
    division =
    { experience = 25
      id         = { type = 12607 id = 260 }
      name       = "JG 26 'Schlageter'"
      strength   = 100
      type       = interceptor
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 239 }
      name       = "KG 27 'Boelcke'"
      strength   = 100
      type       = tactical_bomber
      model      = 2
	extra = escort

    }
    division =
    { experience = 25
      id         = { type = 12607 id = 254 }
      name       = "JG 6 'Horst Wessel'"
      strength   = 100
      type       = interceptor
      model      = 2
    }
  }
  airunit =
  { location = 482
    base     = 482
    id       = { type = 12607 id = 580 }
    name     = "Luftflotte 4"
    division =
    { experience = 25
      id         = { type = 12607 id = 9039 }
      name       = "JG 77 'Herz As'"
      strength   = 100
      type       = interceptor
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 416 }
      name       = "Kampfgeschwader 76"
      strength   = 100
      type       = tactical_bomber
      model      = 1
	extra = escort
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 419 }
      name       = "Kampfgeschwader 77"
      strength   = 100
      type       = tactical_bomber
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 9038 }
      name       = "Sturzkampfgeschwader 76"
      strength   = 100
      type       = cas
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 432 }
      name       = "Sturzkampfgeschwader 77"
      strength   = 100
      type       = cas
      model      = 0
    }
  }
  airunit =
  { location = 313
    base     = 313
    id       = { type = 12607 id = 582 }
    name     = "Luftflotte 3"
    division =
    { experience = 25
      id         = { type = 12607 id = 300 }
      name       = "JG 51 'Mölders'"
      strength   = 100
      type       = interceptor
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 263 }
      name       = "Jagdgeschwader 52"
      strength   = 100
      type       = interceptor
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 309 }
      name       = "JG 53 'Pik As'"
      strength   = 100
      type       = interceptor
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 281 }
      name       = "KG 51 'Edelweiß'"
      strength   = 90
      type       = tactical_bomber
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 289 }
      name       = "KG 53 'Legion Condor'"
      strength   = 70
      type       = tactical_bomber
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 226 }
      name       = "KG 54 'Totenkopf'"
      strength   = 75
      type       = tactical_bomber
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 235 }
      name       = "KG 55 'Greif'"
      strength   = 80
      type       = tactical_bomber
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 293 }
      name       = "Sturzkampfgeschwader 51"
      strength   = 35
      type       = cas
      model      = 0
    }
  }
  airunit =
  { location = 302
    base     = 302
    id       = { type = 12607 id = 585 }
    name     = "Luftflotte 1"
    division =
    { experience = 25
      id         = { type = 12607 id = 388 }
      name       = "JG 2 'Richthofen'"
      strength   = 100
      type       = interceptor
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 396 }
      name       = "JG 3 'Udet'"
      strength   = 100
      type       = interceptor
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 332 }
      name       = "KG 1 'Hindenburg'"
      strength   = 100
      type       = tactical_bomber
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 369 }
      name       = "KG 2 'Holzhammer'"
      strength   = 100
      type       = tactical_bomber
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 412 }
      name       = "KG 4 'General Wever'"
      strength   = 95
      type       = tactical_bomber
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 339 }
      name       = "Stukageschwader 2 'Immelmann'"
      strength   = 70
      type       = cas
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 345 }
      name       = "Jagdgeschwader 4"
      strength   = 100
      type       = multi_role
      model      = 0
    }
  }
  airunit =
  { location = 510
    base     = 510
    id       = { type = 12607 id = 606 }
    name     = "KoLuft HG Nord"
    division =
    { experience = 25
      id         = { type = 12607 id = 607 }
      name       = "Jagdgeschwader 1"
      strength   = 100
      type       = interceptor
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 608 }
      name       = "Jagdgeschwader 21"
      strength   = 100
      type       = interceptor
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 356 }
      name       = "KG 3 'Blitz'"
      strength   = 100
      type       = tactical_bomber
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 12607 id = 358 }
      name       = "Sturzkampfgeschwader 1"
      strength   = 60
      type       = cas
      model      = 0
    }
  }
  # ####units under construction or repair#####
  division_development =
  { name  = "KMS Bismarck"
    type  = battleship
    model = 3
    cost  = 8
    id    = { type = 12607 id = 500 }
    date  = { year = 1940 month = august day = 24 }
  }
  division_development =
  { name  = "KMS Tirpitz"
    type  = battleship
    model = 3
    cost  = 8
    id    = { type = 30011 id = 501 }
    date  = { year = 1941 month = february day = 25 }
  }
  division_development =
  { name  = "KMS Graf Zeppelin"
    type  = carrier
    model = 2
    cost  = 4.8
    id    = { type = 12607 id = 502 }
    date  = { year = 1940 month = october day = 1 }
    extra = cag
    brigade_model = 2
  }
  division_development =
  { name  = "KMS Blücher"
    type  = heavy_cruiser
    model = 3
    cost  = 5.6
    id    = { type = 12607 id = 503 }
    date  = { year = 1939 month = september day = 20 }
  }
  division_development =
  { name  = "12. Unterseebootsflottille"
    type  = submarine
    model = 2
    cost  = 1.6
    id    = { type = 12607 id = 504 }
    date  = { year = 1939 month = october day = 1 }
  }
  division_development =
  { name  = "13. Unterseebootsflottille"
    type  = submarine
    model = 1
    cost  = 1.6
    id    = { type = 12607 id = 505 }
    date  = { year = 1939 month = november day = 1 }
  }
  division_development =
  { name  = "14. Unterseebootsflottille"
    type  = submarine
    model = 3
    cost  = 2.4
    id    = { type = 12607 id = 506 }
    date  = { year = 1939 month = december day = 1 }
  }
  division_development =
  { name  = "Jagdgeschwader 27"
    id    = { type = 12607 id = 9041 }
    type  = interceptor
    model = 2
    cost  = 0
    date  = { year = 1939 month = october }
  }
  division_development =
  { name  = "8. Panzer-Division"
    id    = { type = 12607 id = 9046 }
    type  = armor
    model = 1
    cost  = 5
    date  = { year = 1939 month = october day = 16 }
  }
  division_development =
  { name  = "6. Panzer-Division"
    id    = { type = 12607 id = 9044 }
    type  = armor
    model = 1
    cost  = 5
    date  = { year = 1939 month = october day = 18 }
  }
  division_development =
  { name  = "7. Panzer-Division"
    id    = { type = 12607 id = 9045 }
    type  = armor
    model = 1
    cost  = 5
    date  = { year = 1939 month = october day = 18 }
  }
  division_development =
  { name  = "Kampfgeschwader 30"
    id    = { type = 12607 id = 9048 }
    type  = tactical_bomber
    model = 2
    cost  = 5
    date  = { year = 1939 month = november day = 13 }
  }
  division_development =
  { name  = "9. Panzer-Division"
    id    = { type = 12607 id = 9047 }
    type  = armor
    model = 1
    cost  = 7
    date  = { year = 1940 month = january day = 3 }
  }
  division_development =
  { name  = "1. Fallschirmjäger-division"
    id    = { type = 12607 id = 900 }
    type  = paratrooper
    model = 0
    cost  = 4
    date  = { year = 1939 month = december day = 3 }
  }
  division_development =
  { name  = "Transportgeschwader 1"
    id    = { type = 12607 id = 901 }
    type  = transport_plane
    model = 0
    cost  = 4
    date  = { year = 1939 month = december day = 3 }
  }
}
