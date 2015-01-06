
##############################
# Country definition for FRA #
##############################

province =
{ id         = 32
  ic         = 3
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
  anti_air   = 1
}              # Brest
province = { id = 34 ic = 3 } # Lorient
province =
{ id         = 38
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 6 current_size = 6 }
}              # Cherbourg
province =
{ id       = 44
  air_base = { size = 4 current_size = 4 }
  anti_air = 1
}            # Lille
province =
{ id       = 56
  ic       = 5
  air_base = { size = 10 current_size = 10 }
  anti_air = 2
}            # Paris
province = { id = 58 ic = 1 } # Le Mans
province =
{ id       = 59
  ic       = 1
  air_base = { size = 4 current_size = 4 }
}            # Cholet
province =
{ id       = 62
  ic       = 2
  air_base = { size = 4 current_size = 4 }
}            # Auxerre
province =
{ id       = 72
  air_base = { size = 4 current_size = 4 }
  anti_air = 1
  landfort = 10
}            # Metz
province = { id = 73 anti_air = 1 landfort = 10 } # Strasbourg
province = { id = 316 ic = 1 anti_air = 1 landfort = 10 } # Mulhouse
province =
{ id       = 318
  air_base = { size = 4 current_size = 4 }
  anti_air = 1
}            # Dijon
province = { id = 320 ic = 4 } # Vichy
province =
{ id         = 325
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 6 current_size = 6 }
}              # Bordeaux
province =
{ id       = 359
  air_base = { size = 2 current_size = 2 }
}            # Toulouse
province =
{ id         = 364
  ic         = 5
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
  anti_air   = 1
}              # Marseille
province = { id = 366 landfort = 3 } # Nice
province = { id = 527 landfort = 1 } # Grenoble
province = { id = 528 ic = 5 } # Lyon
province =
{ id         = 939
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 5 current_size = 5 }
  anti_air   = 1
}              # Tunis
province =
{ id         = 949
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 5 current_size = 5 }
  anti_air   = 1
}              # Algiers
province =
{ id         = 953
  air_base   = { size = 1 current_size = 1 }
  naval_base = { size = 2 current_size = 2 }
}              # Oran
province =
{ id         = 958
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}              # Casablanca
province =
{ id         = 981
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 2 current_size = 2 }
}              # Dakar
province =
{ id       = 993
  air_base = { size = 1 current_size = 1 }
}            # Abidjan
province =
{ id         = 1328
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
  anti_air   = 1
}              # Hanoi
province =
{ id         = 1337
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 4 current_size = 4 }
  anti_air   = 1
}              # Saigon
province =
{ id         = 1794
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 2 current_size = 2 }
}              # Beirut

#####################
# Country main data #
#####################

country =
{ tag                    = FRA
  capital                = 56
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 2000
  money                  = 100
  dissent                = 10 # Popular Front and the right at odds
  manpower               = 425
  transports             = 350
  escorts                = 60
  peacetime_ic_mod       = 0.6
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 10
    free_market       = 8
    freedom           = 10
    professional_army = 5
    defense_lobby     = 7
    interventionism   = 6
  }
  SpyInfo                = { country = "FRA" NumberOfSpies = 12 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 8 }
  #SpyInfo                = { country = "GER" NumberOfSpies = 9 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 6 }
  #SpyInfo                = { country = "CZE" NumberOfSpies = 3 }
  #SpyInfo                = { country = "AUS" NumberOfSpies = 3 }
  #SpyInfo                = { country = "SPA" NumberOfSpies = 6 }
  #SpyInfo                = { country = "POL" NumberOfSpies = 6 }
  #SpyInfo                = { country = "SWE" NumberOfSpies = 8 }
  #SpyInfo                = { country = "NOR" NumberOfSpies = 3 }
  #SpyInfo                = { country = "FIN" NumberOfSpies = 3 }
  #SpyInfo                = { country = "YUG" NumberOfSpies = 3 }
  #SpyInfo                = { country = "HUN" NumberOfSpies = 6 }
  #SpyInfo                = { country = "BUL" NumberOfSpies = 3 }
  #SpyInfo                = { country = "BEL" NumberOfSpies = 9 }
  #SpyInfo                = { country = "DEN" NumberOfSpies = 6 }
  #SpyInfo                = { country = "HOL" NumberOfSpies = 8 }
  #SpyInfo                = { country = "ARG" NumberOfSpies = 8 }
  #SpyInfo                = { country = "USA" NumberOfSpies = 6 }
  #SpyInfo                = { country = "ALB" NumberOfSpies = 3 }
  #SpyInfo                = { country = "GRE" NumberOfSpies = 3 }
  #SpyInfo                = { country = "JAP" NumberOfSpies = 6 }
  #SpyInfo                = { country = "ROM" NumberOfSpies = 6 }
  #SpyInfo                = { country = "LUX" NumberOfSpies = 6 }
  #SpyInfo                = { country = "POR" NumberOfSpies = 3 }
  #SpyInfo                = { country = "ITA" NumberOfSpies = 9 }
  # Metropolitan France
  nationalprovinces      = { 529 527 366 365 367 364 363 362 358 328 327 326 325 324 359 361 319 360 322 323 59  60  61  62  63  318 317 316 73  72
			     64  53  44  43  18  54  42  55  41  56  57  58  32  33  34  35  36  37  38  39  40  320 321 528
			   }
  # Metropolitan France
  ownedprovinces         = { 529  527  366  365  367  364  363  362  358  328  327  326  325  324  359  361  319  360  322  323  59   60   61   62
			     63   318  317  316  73   72   64   53   44   43   18   54   42   55   41   56   57   58   32   33   34   35   36   37
			     38   39   40   320  321  528  875  898  899  956  969  968  959  958  960  966  1014 970  1013 943  942  945  944  946
			     947  949  948  951  950  952  953  935  934  936  938  937  939  940  941  1862 1861 1863 1792 1793 1794 1795 1037 973
			     974  975  1083 1084 998  976  977  978  981  984  987  989  990  985  980  986  979  994  996  997  1005 1006 991  995
			     993  1088 1003 1004 1082 1081 1080 1079 1086 1070 1078 1077 1087 1089 1092 1093 1075 1076 1134 1137 1135 1338 1339 1340
			     1337 1335 1336 1334 1333 1332 1329 1328 1306 1326 1341 1692 1691 1687 1690 1689 1688 1682 1751
			   }
  # Metropolitan France
  controlledprovinces    = { 529  527  366  365  367  364  363  362  358  328  327  326  325  324  359  361  319  360  322  323  59   60   61   62
			     63   318  317  316  73   72   64   53   44   43   18   54   42   55   41   56   57   58   32   33   34   35   36   37
			     38   39   40   320  321  528  875  898  899  956  969  968  959  958  960  966  1014 970  1013 943  942  945  944  946
			     947  949  948  951  950  952  953  935  934  936  938  937  939  940  941  1862 1861 1863 1792 1793 1794 1795 1037 973
			     974  975  1083 1084 998  976  977  978  981  984  987  989  990  985  980  986  979  994  996  997  1005 1006 991  995
			     993  1088 1003 1004 1082 1081 1080 1079 1086 1070 1078 1077 1087 1089 1092 1093 1075 1076 1134 1137 1135 1338 1339 1340
			     1337 1335 1336 1334 1333 1332 1329 1328 1306 1326 1341 1692 1691 1687 1690 1689 1688 1682 1751
			   }
  # Great War Infantry
  techapps               = { 1010  1020  1110  1190  1200  1210  1220  1230  1310  1340  2010  2020  2030  2040  2050  2070  2100  2150  2290  2300
			     2310  2320  2330  2400  2450  2460  3010  3020  3030  3070  3080  3090  3100  3130  3140  3150  3190  3200  3210  3220
			     3250  3260  3270  3280  3320  3330  3340  3400  3410  3420  3430  4010  4020  4030  4040  4050  4120  4130  4140  4150
			     4170  4190  4220  5010  5050  5060  5080  5090  5100  5190  5200  5310  5320  5350  5360  5410  5470  5480  6010  6030
			     6120  8010  8020  8030  8040  8070  8120  8310  9010  9020  9030  9140  14000 14010
			   }
  diplomacy =
  { relation = { tag = AST value = 150 }
    relation =
    { tag        = BEL
      value      = 120
      guaranteed = { day = 30 month = december year = 1935 }
    }
    relation = { tag = BUL value = 20 }
    relation = { tag = BHU value = 100 }
    relation = { tag = CAN value = 150 }
    relation =
    { tag        = CZE
      value      = 150
      guaranteed = { day = 13 month = april year = 1935 }
    }
    relation = { tag = DEN value = 75 }
    relation = { tag = ENG value = 150 }
    relation = { tag = EST value = 65 }
    relation = { tag = FIN value = 85 }
    relation = { tag = GER value = -100 }
    relation = { tag = GRE value = 75 }
    relation = { tag = HOL value = 75 }
    relation = { tag = HUN value = -70 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = -100 }
    relation = { tag = JAP value = -40 }
    relation = { tag = LAT value = 65 }
    relation = { tag = LIT value = 65 }
    relation = { tag = LUX value = 120 }
    relation = { tag = NEP value = 100 }
    relation = { tag = NOR value = 100 }
    relation = { tag = NZL value = 150 }
    relation = { tag = OMN value = 100 }
    relation = { tag = POL value = 200 }
    relation = { tag = ROM value = 100 }
    relation = { tag = SAF value = 150 }
    relation = { tag = SCH value = 1 }
    relation = { tag = SIA value = -100 }
    relation = { tag = SOV value = 100 }
    relation = { tag = SPA value = -65 }
    relation = { tag = SWE value = 80 }
    relation = { tag = TUR value = 50 }
    relation = { tag = USA value = 65 }
    relation = { tag = YUG value = 50 }
  }
  headofstate            = { type = 9 id = 2001 }
  headofgovernment       = { type = 9 id = 2037 }
  foreignminister        = { type = 9 id = 2053 }
  armamentminister       = { type = 9 id = 2075 }
  ministerofsecurity     = { type = 9 id = 2107 }
  ministerofintelligence = { type = 9 id = 2128 }
  chiefofstaff           = { type = 9 id = 2007 }
  chiefofarmy            = { type = 9 id = 2008 }
  chiefofnavy            = { type = 9 id = 2009 }
  chiefofair             = { type = 9 id = 2187 }
  dormant_ministers      = { 2002 2033 2036 2003 2049 2053 2004 2091 2005 2117 2006 }

  landunit =
  { id       = { type = 10527 id = 1001 }
    name     = "Groupe d'Armée 1e QG"
    location = 53
    division =
    { id       = { type = 10527 id = 1002 }
      name     = "Groupe d'Armée 1e QG"
      strength = 100
      type     = hq
    }
  }
  landunit =
  { id       = { type = 10527 id = 1003 }
    name     = "Groupe d'Armée 2e QG"
    location = 72
    division =
    { id       = { type = 10527 id = 1004 }
      name     = "Groupe d'Armée 2e QG"
      strength = 100
      type     = hq
    }
  }
  landunit =
  { id       = { type = 10527 id = 1005 }
    name     = "Groupe d'Armée 3e QG"
    location = 316
    division =
    { id       = { type = 10527 id = 1006 }
      name     = "Groupe d'Armée 3e QG"
      strength = 100
      type     = hq
    }
  }
  landunit =
  { id       = { type = 10527 id = 1 }
    name     = "7e Armée"
    location = 64
    division =
    { id       = { type = 10527 id = 3 }
      name     = "21e Div. d'Infanterie"
      strength = 70
      type     = infantry
      extra    = heavy_armor
    }
    division =
    { id       = { type = 10527 id = 5 }
      name     = "1ère Div. Légère Mécanique"
      strength = 70
      type     = armor
      model    = 2
    }
    division =
    { id       = { type = 10527 id = 6 }
      name     = "25e Div. d'Infanterie Motorisée"
      strength = 70
      type     = motorized
    }
    division =
    { id       = { type = 10527 id = 7 }
      name     = "9e Div. d'Infanterie Motorisée"
      strength = 70
      type     = motorized
    }
  }

  landunit =
  { id       = { type = 10527 id = 8 }
    name     = "1ère Armée"
    location = 317
    division =
    { id       = { type = 10527 id = 11 }
      name     = "2e Div. Légère Mécanique"
      strength = 70
      type     = armor
      model    = 1
    }
    division =
    { id       = { type = 10527 id = 12 }
      name     = "3e Div. Légère Mécanique"
      strength = 70
      type     = armor
      model    = 1
    }
    division =
    { id       = { type = 10527 id = 13 }
      name     = "1ère Division d'Infanterie Motorisée"
      strength = 70
      type     = motorized
    }
    division =
    { id       = { type = 10527 id = 16 }
      name     = "12e Div. d'Infanterie Motorisée"
      strength = 70
      type     = motorized
    }
    division =
    { id       = { type = 10527 id = 15 }
      name     = "15e Div. d'Infanterie Motorisée"
      strength = 70
      type     = motorized
    }
    division =
    { id       = { type = 10527 id = 315 }
      name     = "1ère Division d'Infanterie"
      strength = 70
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 10527 id = 10 }
      name     = "32e Div. d'Infanterie"
      strength = 70
      type     = infantry
      extra    = heavy_armor
      model    = 1
    }
  }

  landunit =
  { id       = { type = 10527 id = 18 }
    name     = "9e Armée"
    location = 316
    division =
    { id       = { type = 10527 id = 19 }
      name     = "1ère Division Légère de Cavalerie"
      strength = 70
      type     = cavalry
      model    = 2
    }
    division =
    { id       = { type = 10527 id = 23 }
      name     = "5e Div. d'Infanterie Motorisée"
      strength = 70
      type     = motorized
    }
    division =
    { id       = { type = 10527 id = 22 }
      name     = "53e Div. d'Infanterie"
      strength = 70
      type     = infantry
      model    = 1
      extra    = heavy_armor
    }
    division =
    { id       = { type = 10527 id = 24 }
      name     = "18e Div. d'Infanterie"
      strength = 70
      type     = infantry
    }
    division =
    { id       = { type = 10527 id = 25 }
      name     = "22e Div. d'Infanterie"
      strength = 70
      type     = infantry
    }
  }

  landunit =
  { id       = { type = 10527 id = 26 }
    name     = "2e Armée"
    location = 73
    division =
    { id       = { type = 10527 id = 27 }
      name     = "2e Div. Légère de Cavalerie"
      strength = 70
      type     = cavalry
      model    = 3
    }
    division =
    { id       = { type = 10527 id = 28 }
      name     = "5e Div. Légère de Cavalerie"
      strength = 70
      type     = cavalry
      model    = 2
    }
    division =
    { id       = { type = 10527 id = 29 }
      name     = "71e Div. d'Infanterie"
      strength = 70
      type     = infantry
      model    = 1
      extra    = heavy_armor
    }
    division =
    { id       = { type = 10527 id = 31 }
      name     = "55e Div. d'Infanterie"
      strength = 70
      type     = infantry
    }
    division =
    { id       = { type = 10527 id = 34 }
      name     = "41e Div. d'Infanterie"
      strength = 70
      type     = infantry
    }
  }

  landunit =
  { id       = { type = 10527 id = 35 }
    name     = "3e Armée"
    location = 72
    division =
    { id       = { type = 10527 id = 36 }
      name     = "3e Div. Légère de Cavalerie"
      strength = 75
      type     = cavalry
      model    = 2
    }
    division =
    { id       = { type = 10527 id = 37 }
      name     = "6e Div. d'Infanterie"
      strength = 70
      type     = infantry
      model    = 1
      extra    = heavy_armor
    }
    division =
    { id            = { type = 10527 id = 38 }
      name          = "7e Div. d'Infanterie"
      strength      = 70
      type          = infantry
      extra         = artillery
      brigade_model = 4
    }
    division =
    { id       = { type = 10527 id = 39 }
      name     = "8e Div. d'Infanterie"
      strength = 70
      type     = infantry
    }
    division =
    { id       = { type = 10527 id = 42 }
      name     = "2e Div. d'Infanterie"
      strength = 70
      type     = infantry
    }
    division =
    { id       = { type = 10527 id = 44 }
      name     = "26e Div. d'Infanterie"
      strength = 70
      type     = infantry
    }
    division =
    { id       = { type = 10527 id = 45 }
      name     = "42e Div. d'Infanterie"
      strength = 70
      type     = infantry
    }
    division =
    { id       = { type = 10527 id = 47 }
      name     = "20e Div. d'Infanterie"
      strength = 70
      type     = infantry
    }
  }

  landunit =
  { id       = { type = 10527 id = 49 }
    name     = "4e Armée"
    location = 53
    division =
    { id       = { type = 10527 id = 50 }
      name     = "45e Div. d'Infanterie"
      strength = 70
      type     = infantry
      model    = 1
      extra    = heavy_armor
    }
    division =
    { id       = { type = 10527 id = 51 }
      name     = "11e Div. d'Infanterie"
      strength = 70
      type     = infantry
    }
    division =
    { id       = { type = 10527 id = 52 }
      name     = "47e Div. d'Infanterie"
      strength = 70
      type     = infantry
    }
    division =
    { id       = { type = 10527 id = 53 }
      name     = "52e Div. d'Infanterie"
      strength = 70
      type     = infantry
    }
  }

  landunit =
  { id       = { type = 10527 id = 55 }
    name     = "5e Armée"
    location = 63
    division =
    { id       = { type = 10527 id = 56 }
      name     = "44e Div. d'Infanterie"
      strength = 70
      type     = infantry
      model    = 1
      extra    = heavy_armor
    }
    division =
    { id            = { type = 10527 id = 57 }
      name          = "24e Div. d'Infanterie"
      strength      = 70
      type          = infantry
      extra         = artillery
      brigade_model = 4
    }
    division =
    { id       = { type = 10527 id = 59 }
      name     = "16e Div. d'Infanterie"
      strength = 70
      type     = infantry
    }
    division =
    { id       = { type = 10527 id = 60 }
      name     = "35e Div. d'Infanterie"
      strength = 70
      type     = infantry
    }
    division =
    { id       = { type = 10527 id = 61 }
      name     = "70e Div. d'Infanterie"
      strength = 70
      type     = infantry
    }
    division =
    { id       = { type = 10527 id = 62 }
      name     = "62e Div. d'Infanterie"
      strength = 70
      type     = infantry
    }
    division =
    { id       = { type = 10527 id = 63 }
      name     = "30e Div. d'Infanterie"
      strength = 60
      type     = bergsjaeger
    }
    division =
    { id       = { type = 10527 id = 58 }
      name     = "31e Div. d'Infanterie"
      strength = 60
      type     = bergsjaeger
    }
  }

  landunit =
  { id       = { type = 10527 id = 64 }
    name     = "8e Armée"
    location = 366
    division =
    { id       = { type = 10527 id = 65 }
      name     = "13e Div. d'Infanterie"
      strength = 70
      type     = infantry
      model    = 1
      extra    = heavy_armor
    }
    division =
    { id       = { type = 10527 id = 66 }
      name     = "27e Div. d'Infanterie"
      strength = 60
      type     = bergsjaeger
    }
    division =
    { id       = { type = 10527 id = 67 }
      name     = "19e Division d'Infanterie"
      strength = 70
      type     = infantry
    }
    division =
    { id       = { type = 10527 id = 68 }
      name     = "54e Div. d'Infanterie"
      strength = 70
      type     = infantry
    }
    division =
    { id       = { type = 10527 id = 69 }
      name     = "67e Div. d'Infanterie"
      strength = 70
      type     = infantry
    }
  }

  landunit =
  { id       = { type = 10527 id = 70 }
    name     = "Armée des Alpes"
    location = 527
    division =
    { id       = { type = 10527 id = 71 }
      name     = "8e Div. d'Infanterie"
      strength = 70
      type     = infantry
      model    = 1
      extra    = heavy_armor
    }
    division =
    { id       = { type = 10527 id = 72 }
      name     = "64e Div. d'Infanterie"
      strength = 60
      type     = bergsjaeger
    }
    division =
    { id       = { type = 10527 id = 75 }
      name     = "65e Div. d'Infanterie"
      strength = 60
      type     = bergsjaeger
    }
    division =
    { id       = { type = 10527 id = 73 }
      name     = "66e Div. d'Infanterie"
      strength = 60
      type     = bergsjaeger
    }
  }

  landunit =
  { id       = { type = 10527 id = 76 }
    name     = "Armée d'Algérie"
    location = 949
    division =
    { id       = { type = 10527 id = 77 }
      name     = "85e Div. d'Infanterie d'Afrique"
      strength = 60
      type     = infantry
    }
    division =
    { id       = { type = 10527 id = 78 }
      name     = "181e Div. d'Infanterie d'Afrique"
      strength = 60
      type     = infantry
    }
    division =
    { id       = { type = 10527 id = 79 }
      name     = "182e Division d'Infanterie d'Afrique"
      strength = 60
      type     = infantry
    }
    division =
    { id       = { type = 10527 id = 80 }
      name     = "183e Div. d'Infanterie d'Afrique"
      strength = 60
      type     = infantry
    }
    division =
    { id       = { type = 10527 id = 81 }
      name     = "Front Est Saharien"
      strength = 40
      type     = infantry
    }
  }

  landunit =
  { id       = { type = 10527 id = 82 }
    name     = "Armée de Tunisie"
    location = 939
    # Senegalese
    division =
    { id       = { type = 10527 id = 32 }
      name     = "1ère Division d'Infanterie Coloniale"
      strength = 60
      type     = infantry
    }
    division =
    { id       = { type = 10527 id = 83 }
      name     = "83e Div. d'Infanterie d'Afrique"
      strength = 60
      type     = infantry
    }
    division =
    { id       = { type = 10527 id = 84 }
      name     = "84e Div. d'Infanterie d'Afrique"
      strength = 60
      type     = infantry
    }
    division =
    { id       = { type = 10527 id = 85 }
      name     = "88e Div. d'Infanterie d'Afrique"
      strength = 60
      type     = infantry
    }
    division =
    { id       = { type = 10527 id = 86 }
      name     = "81e Division d'Infanterie d'Afrique"
      strength = 60
      type     = infantry
    }
    division =
    { id       = { type = 10527 id = 87 }
      name     = "180e Div. d'Infanterie d'Afrique"
      strength = 60
      type     = infantry
    }
    division =
    { id       = { type = 10527 id = 88 }
      name     = "6e Div. de Légère Cavalerie"
      strength = 65
      type     = cavalry
      model    = 2
      extra    = armored_car
    }
  }

  landunit =
  { id       = { type = 10527 id = 89 }
    name     = "Troupes du Maroc"
    location = 958
    division =
    { id       = { type = 10527 id = 90 }
      name     = "3e Div. Marocaine"
      strength = 60
      type     = infantry
      extra    = armored_car
    }
  }

  landunit =
  { id       = { type = 10527 id = 91 }
    name     = "Troupes d'Indochine"
    location = 1337
    division =
    { id       = { type = 10527 id = 92 }
      name     = "Division du Tonkin"
      strength = 65
      type     = infantry
    }
    division =
    { id       = { type = 10527 id = 93 }
      name     = "Division Cochinchine-Cambodge"
      strength = 60
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 10527 id = 94 }
    name     = "Corps Expéditionnaire"
    location = 364
    division =
    { experience = 25
      id         = { type = 10527 id = 95 }
      name       = "1ère Division Légère d`Infanterie"
      strength   = 60
      type       = infantry
    }
    division =
    { experience = 25
      id         = { type = 10527 id = 96 }
      name       = "1ère Division Légère de Chasseurs"
      strength   = 60
      type       = bergsjaeger
    }
    division =
    { experience = 25
      id         = { type = 10527 id = 97 }
      name       = "2e Div. de Chasseurs"
      strength   = 60
      type       = bergsjaeger
    }
  }
  landunit =
  { id       = { type = 10527 id = 600 }
    name     = "Region Fortifiée Metz"
    location = 72
    division =
    { id            = { type = 10527 id = 601 }
      name          = "Équipage de Thionville"
      type          = garrison
      locked        = yes
      extra         = artillery
      brigade_model = 4
    }
    division =
    { id            = { type = 10527 id = 602 }
      name          = "Équipage de Boulay"
      type          = garrison
      locked        = yes
      extra         = artillery
      brigade_model = 4
    }
    division =
    { id            = { type = 10527 id = 603 }
      name          = "Équipage de Faulouemont"
      type          = garrison
      locked        = yes
      extra         = artillery
      brigade_model = 4
    }
  }
  landunit =
  { id       = { type = 10527 id = 604 }
    name     = "Region Fortifiée Lauter"
    location = 73
    division =
    { experience    = 10
      id            = { type = 10527 id = 605 }
      name          = "Équipage de Rohrbach"
      type          = garrison
      locked        = yes
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience    = 10
      id            = { type = 10527 id = 606 }
      name          = "Équipage des Vosges"
      type          = garrison
      locked        = yes
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience    = 10
      id            = { type = 10527 id = 607 }
      name          = "Équipage de Hagenau"
      type          = garrison
      locked        = yes
      extra         = artillery
      brigade_model = 4
    }
  }
  landunit =
  { id       = { type = 10527 id = 608 }
    name     = "Secteur Fortifiée de Mulhouse"
    location = 316
    division =
    { experience    = 10
      id            = { type = 10527 id = 609 }
      name          = "Équipage de Mulhouse"
      type          = garrison
      locked        = yes
      extra         = artillery
      brigade_model = 3
    }
  }
  landunit =
  { id       = { type = 10527 id = 610 }
    name     = "Secteur Fortifiée de Savoie"
    location = 527
    division =
    { experience    = 10
      id            = { type = 10527 id = 611 }
      name          = "Équipage de Savoie"
      type          = garrison
      locked        = yes
      extra         = artillery
      brigade_model = 3
    }
  }
  landunit =
  { id       = { type = 10527 id = 612 }
    name     = "S.F. des Alpes Maritimes"
    location = 366
    division =
    { experience    = 10
      id            = { type = 10527 id = 613 }
      name          = "Équipage des Alpes Maritimes"
      type          = garrison
      locked        = yes
      extra         = artillery
      brigade_model = 3
    }
  }
  landunit =
  { id       = { type = 10527 id = 614 }
    name     = "Afrique Occidentale Française"
    location = 981
    division =
    { id       = { type = 10527 id = 615 }
      name     = "Div. d'Infanterie Coloniale"
      strength = 65
      type     = infantry
    }
    division =
    { id       = { type = 10527 id = 616 }
      name     = "Div. de Tirailleurs Sénégalais"
      strength = 60
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 10527 id = 617 }
    name     = "Afrique Equatoriale Française"
    location = 1089
    division =
    { id       = { type = 10527 id = 618 }
      name     = "Reg. de Tirailleurs Sénégalais"
      strength = 65
      type     = militia
    }
  }
  landunit =
  { id       = { type = 10527 id = 619 }
    name     = "Malgaches Française"
    location = 1134
    division =
    { id       = { type = 10527 id = 620 }
      name     = "Reg. de Tirailleurs Malgaches"
      strength = 65
      type     = militia
    }
  }
  landunit =
  { id       = { type = 10527 id = 621 }
    name     = "S.F. de Corse"
    location = 367
    division =
    { experience = 10
      id         = { type = 10527 id = 622 }
      name       = "Équipage de Corse"
      type       = garrison
      locked     = yes
    }
  }
  landunit =
  { id       = { type = 10527 id = 623 }
    name     = "Troupes du Levant"
    location = 1794
    division =
    { experience = 10
      id         = { type = 10527 id = 624 }
      name       = "Forces Mobiles"
      type       = cavalry
      model      = 3
      extra      = armored_car
    }
  }

  navalunit =
  { id       = { type = 10527 id = 98 }
    name     = "1ère Flotte de la France"
    location = 32
    base     = 32
    division =
    { id    = { type = 10527 id = 501 }
      name  = "Dunkerque"
      type  = battlecruiser
      model = 3
    }
    division =
    { id            = { type = 10527 id = 99 }
      name          = "Béarn"
      type          = carrier
      model         = 1
      extra         = cag
      brigade_model = 2
    }
    division =
    { id    = { type = 10527 id = 100 }
      name  = "Primauguet"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 10527 id = 101 }
      name  = "Duguay-Trouin"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 10527 id = 102 }
      name  = "Lamotte-Picquet"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 10527 id = 103 }
      name  = "La Galissonnière"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 10527 id = 185 }
      name  = "1ère Flottille de Contre-torpilleurs"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 10527 id = 186 }
      name  = "2e Flottille de Contre-torpilleurs"
      type  = destroyer
      model = 0
    }
  }
  navalunit =
  { id       = { type = 10527 id = 104 }
    name     = "2e Flotte de la France"
    location = 939
    base     = 939
    division =
    { id    = { type = 10527 id = 503 }
      name  = "Strasbourg"
      type  = battlecruiser
      model = 3
    }
    division =
    { id    = { type = 10527 id = 107 }
      name  = "Suffren"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 10527 id = 108 }
      name  = "Dusquesne"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 10527 id = 195 }
      name  = "Pluton"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 10527 id = 109 }
      name  = "Jeanne d'Arc"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 10527 id = 110 }
      name  = "3e Flottille de Contre-torpilleurs"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 10527 id = 111 }
      name  = "4e Flottille de Contre-torpilleurs"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 10527 id = 187 }
      name  = "5e Flottille de Contre-torpilleurs"
      type  = destroyer
      model = 1
    }
  }
  navalunit =
  { id       = { type = 10527 id = 112 }
    name     = "3e Flotte de la France"
    location = 949
    base     = 949
    division =
    { id    = { type = 10527 id = 198 }
      name  = "Bretagne"
      type  = battleship
      model = 1
    }
    division =
    { id    = { type = 10527 id = 400 }
      name  = "Algérie"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 10527 id = 401 }
      name  = "Jean de Vienne"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 10527 id = 402 }
      name  = "La Marseillaise"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 10527 id = 403 }
      name  = "Gloire"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 10527 id = 404 }
      name  = "Montcalm"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 10527 id = 405 }
      name  = "Georges Leygues"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 10527 id = 115 }
      name  = "Foch"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 10527 id = 116 }
      name  = "Tourville"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 10527 id = 188 }
      name  = "6e Flottille de Contre-torpilleurs"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 10527 id = 118 }
      name  = "7e Flottille de Contre-torpilleurs"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 10527 id = 119 }
      name  = "8e Flottille de Contre-torpilleurs"
      type  = destroyer
      model = 1
    }
  }
  navalunit =
  { id       = { type = 10527 id = 120 }
    name     = "4e Flotte de la France"
    location = 364
    base     = 364
    division =
    { id    = { type = 10527 id = 121 }
      name  = "Lorraine"
      type  = battleship
      model = 1
    }
    division =
    { id    = { type = 10527 id = 122 }
      name  = "Provence"
      type  = battleship
      model = 1
    }
    division =
    { id    = { type = 10527 id = 123 }
      name  = "Colbert"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 10527 id = 124 }
      name  = "Dupleix"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 10527 id = 125 }
      name  = "Emile-Bertin"
      type  = light_cruiser
      model = 2
    }
    division =
    { id    = { type = 10527 id = 191 }
      name  = "9e Flottille de Contre-torpilleurs"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 10527 id = 126 }
      name  = "10e Flottille de Contre-torpilleurs"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 10527 id = 189 }
      name  = "11e Flottille de Contre-torpilleurs"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 10527 id = 190 }
      name  = "12e Flottille de Contre-torpilleurs"
      type  = destroyer
      model = 2
    }
  }
  navalunit =
  { id       = { type = 10527 id = 127 }
    name     = "1ère Flotte de Sous-marins"
    location = 364
    base     = 364
    division =
    { id    = { type = 10527 id = 128 }
      name  = "1ère Flottille de Sous-marins"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 10527 id = 129 }
      name  = "2e Flottille de Sous-marins"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 10527 id = 165 }
      name  = "3e Flottille de Sous-marins"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 10527 id = 166 }
      name  = "4e Flottille de Sous-marins"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 10527 id = 167 }
      name  = "5e Flottille de Sous-marins"
      type  = submarine
      model = 2
    }
  }
  navalunit =
  { id       = { type = 10527 id = 130 }
    name     = "2e Flotte de Sous-marins"
    location = 939
    base     = 939
    division =
    { id    = { type = 10527 id = 131 }
      name  = "6e Flottille de Sous-marins"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 10527 id = 132 }
      name  = "7e Flottille de Sous-marins"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 10527 id = 168 }
      name  = "8e Flottille de Sous-marins"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 10527 id = 169 }
      name  = "9e Flottille de Sous-marins"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 10527 id = 170 }
      name  = "10e Flottille de Sous-marins"
      type  = submarine
      model = 1
    }
  }
  navalunit =
  { id       = { type = 10527 id = 133 }
    name     = "3e Flotte de Sous-marins"
    location = 949
    base     = 949
    division =
    { id    = { type = 10527 id = 134 }
      name  = "11e Flottille de Sous-marins"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 10527 id = 135 }
      name  = "12e Flottille de Sous-marins"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 10527 id = 171 }
      name  = "13e Flottille de Sous-marins"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 10527 id = 172 }
      name  = "14e Flottille de Sous-marins"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 10527 id = 173 }
      name  = "15e Flottille de Sous-marins"
      type  = submarine
      model = 1
    }
  }
  navalunit =
  { id       = { type = 10527 id = 174 }
    location = 32
    base     = 32
    name     = "Transport Géneral"
    division =
    { id   = { type = 10527 id = 175 }
      name = "5e Flottille de Convois"
      type = transport
    }
    division =
    { id   = { type = 10527 id = 176 }
      name = "6e Flottille de Convois"
      type = transport
    }
    division =
    { id   = { type = 10527 id = 177 }
      name = "7e Flottille de Convois"
      type = transport
    }
    division =
    { id   = { type = 10527 id = 178 }
      name = "8e Flottille de Convois"
      type = transport
    }
    division =
    { id   = { type = 10527 id = 179 }
      name = "9e Flottille de Convois"
      type = transport
    }
  }
  # ############################
  # Armée de l'Air 1939 OOB####
  # ############################
  airunit =
  { location = 56
    base     = 56
    id       = { type = 10527 id = 136 }
    name     = "Zone d'Opérations Aériennes Nord"
    division =
    { id       = { type = 10527 id = 137 }
      name     = "Groupe de Chasse 21"
      type     = interceptor
      model    = 2
      strength = 80
    }
    division =
    { id       = { type = 10527 id = 138 }
      name     = "Groupe de Chasse 23"
      type     = interceptor
      model    = 0
      strength = 80
    }
    division =
    { id       = { type = 10527 id = 139 }
      name     = "Groupe de Chasse 25"
      type     = interceptor
      model    = 0
      strength = 40
    }
    division =
    { id       = { type = 10527 id = 140 }
      name     = "Groupe de Bombardement Tactique 1"
      type     = tactical_bomber
      model    = 1
      strength = 50
    }
  }
  airunit =
  { location = 318
    base     = 318
    id       = { type = 10527 id = 141 }
    name     = "Zone d'Opérations Aériennes Est"
    division =
    { id       = { type = 10527 id = 142 }
      name     = "Groupe de Chasse 22"
      type     = interceptor
      model    = 2
      strength = 80
    }
    division =
    { id       = { type = 10527 id = 143 }
      name     = "Groupe de Bombardement Tactique 3"
      type     = tactical_bomber
      model    = 1
      strength = 30
    }
  }
  airunit =
  { location = 364
    base     = 364
    id       = { type = 10527 id = 144 }
    name     = "Zone d'Opérations Aériennes Sud"
    division =
    { id       = { type = 10527 id = 145 }
      name     = "Groupe de Chasse 24"
      type     = interceptor
      model    = 0
      strength = 60
    }
  }
  airunit =
  { location = 364
    base     = 364
    id       = { type = 10527 id = 146 }
    name     = "Zone d'Opérations Aériennes des Alpes"
    division =
    { id       = { type = 10527 id = 147 }
      name     = "Groupe de Chasse 10"
      type     = interceptor
      model    = 0
      strength = 30
    }
  }
  airunit =
  { location = 364
    base     = 364
    id       = { type = 10527 id = 148 }
    name     = "Aéronautique Navale"
    division =
    { id       = { type = 10527 id = 151 }
      name     = "Groupe de Torpilleur 1"
      type     = naval_bomber
      model    = 0
      strength = 30
      extra    = escort
    }
  }
  airunit =
  { location = 939
    base     = 939
    id       = { type = 10527 id = 152 }
    name     = "Zone d'Opérations d'Afrique"
    division =
    { id       = { type = 10527 id = 153 }
      name     = "Groupe de Chasse 1"
      type     = interceptor
      model    = 0
      strength = 50
    }
    division =
    { id       = { type = 10527 id = 154 }
      name     = "Groupe de Bombardement Tactique 9"
      type     = tactical_bomber
      model    = 0
      strength = 60
    }
  }
  airunit =
  { location = 1794
    base     = 1794
    id       = { type = 10527 id = 155 }
    name     = "Zone d'Opérations Moyen-Orient"
    division =
    { id       = { type = 10527 id = 156 }
      name     = "Groupe de Chasse 2"
      type     = interceptor
      model    = 0
      strength = 25
    }
    division =
    { id       = { type = 10527 id = 157 }
      name     = "Groupe de Bombardement Tactique 10"
      type     = tactical_bomber
      model    = 0
      strength = 20
    }
  }

  division_development =
  { name  = "Richelieu"
    type  = battleship
    model = 3
    cost  = 10
    id    = { type = 10527 id = 500 }
    date  = { year = 1939 month = may day = 19 } # 65% ready
  }
  division_development =
  { name  = "Jean Bart"
    type  = battleship
    model = 3
    cost  = 10
    id    = { type = 10527 id = 502 }
    date  = { year = 1939 month = december day = 7 } # 38% ready
  }
}



