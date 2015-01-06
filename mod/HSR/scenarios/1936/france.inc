#
# by Aregorn for HSR2_DD
#
##############################
# Country definition for FRA #
##############################

province =
{ id         = 32
  ic         = 1
  anti_air   = 4
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Brest
province = { id = 35 anti_air = 2 } # Nantes
province =
{ id         = 38
  anti_air   = 3
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
}              # Cherbourg
province = { id = 39 anti_air = 1 } # Caen
province =
{ id         = 43
  naval_base = { size = 3 current_size = 3 }
}              # Dunkerque
province =
{ id       = 44
  air_base = { size = 10 current_size = 10 }
  anti_air = 1
}            # Lille
province =
{ id       = 56
  ic       = 1
  anti_air = 5
  air_base = { size = 10 current_size = 10 }
}            # Paris
province =
{ id       = 59
  air_base = { size = 10 current_size = 10 }
}            # Cholet
province =
{ id       = 62
  air_base = { size = 10 current_size = 10 }
}            # Auxerre
province =
{ id       = 72
  anti_air = 3
  air_base = { size = 10 current_size = 10 }
  landfort = 10
}            # Metz
province = { id = 73 anti_air = 2 landfort = 10 } # Strasbourg
province = { id = 316 anti_air = 2 landfort = 10 } # Mulhouse
province = { id = 317 anti_air = 1 } # Chaumont
province = { id = 320 ic = 1 anti_air = 1 } # Vichy
province =
{ id         = 325
  anti_air   = 4
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
}              # Bordeaux
province =
{ id       = 359
  air_base = { size = 10 current_size = 10 }
}            # Toulouse
province =
{ id         = 364
  ic         = 1
  anti_air   = 5
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Marseille
province = { id = 366 landfort = 5 } # Nice
province = { id = 527 landfort = 3 } # Grenoble
province = { id = 528 ic = 1 } # Lyon
province = { id = 875 supplypool = 1 } # Cayenne
province =
{ id         = 939
  anti_air   = 4
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 5 current_size = 5 }
}              # Tunis
province =
{ id         = 949
  supplypool = 500
  oilpool    = 1
  anti_air   = 4
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 5 current_size = 5 }
}              # Algiers
province =
{ id         = 953
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 2 current_size = 2 }
}              # Oran
province =
{ id         = 958
  anti_air   = 3
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}              # Casablanca
province =
{ id         = 981
  anti_air   = 3
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 2 current_size = 2 }
}              # Dakar
province =
{ id       = 993
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            # Abidjan
province = { id = 1037 supplypool = 1 } # Djibouti
province =
{ id         = 1328
  anti_air   = 4
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}              # Hanoi
province =
{ id         = 1337
  supplypool = 100
  oilpool    = 1
  anti_air   = 3
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}              # Saigon
province =
{ id         = 1794
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
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
  supplies               = 500
  money                  = 50
  manpower               = 325
  transports             = 300
  escorts                = 60

	peacetime_ic_mod = 0.50
	tc_mod = 1.10

  diplomacy =
  { relation = { tag = AST value = 150 }
    relation = { tag = AUS value = -10 }
    relation =
    { tag        = BEL
      value      = 120
      guaranteed = { day = 7 month = january year = 1935 }
    }
    relation = { tag = BHU value = 150 }
    relation = { tag = BUL value = 20 }
    relation = { tag = CAN value = 150 }
    relation = { tag = CZE value = 150 }
    relation = { tag = ENG value = 150 }
    relation = { tag = EST value = 65 }
    relation = { tag = ETH value = 25 }
    relation = { tag = FIN value = 85 }
    relation = { tag = GER value = -35 }
    relation = { tag = GRE value = 20 }
    relation =
    { tag        = HOL
      value      = 75
      guaranteed = { day = 7 month = january year = 1935 }
    }
    relation = { tag = HUN value = -70 }
    relation = { tag = IRE value = 25 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = -50 }
    relation = { tag = JAP value = -20 }
    relation = { tag = LAT value = 65 }
    relation = { tag = LIT value = 65 }
    relation =
    { tag        = LUX
      value      = 120
      guaranteed = { day = 7 month = january year = 1935 }
    }
    relation = { tag = NEP value = 150 }
    relation =
    { tag        = NOR
      guaranteed = { day = 30 month = august year = 1934 }
    }
    relation = { tag = NZL value = 150 }
    relation = { tag = OMN value = 150 }
    relation =
    { tag        = POL
      value      = 100
      guaranteed = { day = 7 month = january year = 1935 }
    }
    relation = { tag = ROM value = 50 }
    relation = { tag = SAF value = 150 }
    relation = { tag = SAU value = 10 }
    relation =
    { tag        = SCH
      value      = 1
      guaranteed = { day = 16 month = may year = 1935 }
    }
    relation = { tag = SIA value = -100 }
    relation = { tag = SOV value = 100 }
    relation = { tag = SPR value = 10 }
    relation =
    { tag        = TUR
      value      = 50
      guaranteed = { day = 7 month = january year = 1935 }
    }
    relation = { tag = USA value = 65 }
    relation = { tag = YEM value = 150 }
    relation =
    { tag        = YUG
      value      = 50
      guaranteed = { day = 7 month = january year = 1935 }
    }
  }

  SpyInfo                = { country = "FRA" NumberOfSpies = 9 }

  # Togoland
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
			     993  1088 1082 1081 1080 1079 1086 1070 1078 1077 1087 1089 1092 1093 1075 1076 1134 1137 1135 1338 1339 1340 1337 1335
			     1336 1334 1333 1332 1341 1329 1328 1306 1326 1692 1691 1687 1690 1689 1688 1751 1003 1004
			   }
  # Togoland
  # Metropolitan France
  controlledprovinces    = { 529  527  366  365  367  364  363  362  358  328  327  326  325  324  359  361  319  360  322  323  59   60   61   62
			     63   318  317  316  73   72   64   53   44   43   18   54   42   55   41   56   57   58   32   33   34   35   36   37
			     38   39   40   320  321  528  875  898  899  956  969  968  959  958  960  966  1014 970  1013 943  942  945  944  946
			     947  949  948  951  950  952  953  935  934  936  938  937  939  940  941  1862 1861 1863 1792 1793 1794 1795 1037 973
			     974  975  1083 1084 998  976  977  978  981  984  987  989  990  985  980  986  979  994  996  997  1005 1006 991  995
			     993  1088 1082 1081 1080 1079 1086 1070 1078 1077 1087 1089 1092 1093 1075 1076 1134 1137 1135 1338 1339 1340 1337 1335
			     1336 1334 1333 1332 1341 1329 1328 1306 1326 1692 1691 1687 1690 1689 1688 1751 1003 1004
			   }
  # FRA 1936 techs
  # ######################
  techapps               = { 4010  4120  4130  2150  2010  2020  2030  2290  2300  2310  2040  2450  2460  2510  1010  1020  1190  1200  1110
			     2400  1310  5010  5020  5050  5080  5090  5190  5200  5310  5320  5470  5480  9010  9020  9030  9040  6010  6030  6110
			     6120  8010  8020  8030  8040  8050  8070  8100  3010  3020  3030  3070  3080  3090  3100  3130  3140  3150  3190  3200
			     3210  3220  3250  3260  3270  3280  3320  3330  3400  3410  3420  14000
			   }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 6
    free_market       = 8
    freedom           = 10
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 2001 }
  headofgovernment       = { type = 9 id = 2002 }
  foreignminister        = { type = 9 id = 2003 }
  armamentminister       = { type = 9 id = 2004 }
  ministerofsecurity     = { type = 9 id = 2005 }
  ministerofintelligence = { type = 9 id = 2006 }
  chiefofstaff           = { type = 9 id = 2007 }
  chiefofarmy            = { type = 9 id = 2008 }
  chiefofnavy            = { type = 9 id = 2009 }
  chiefofair             = { type = 9 id = 2010 }
  # #################
  # ###FRENCH OOB####
  # #################
  landunit =
  { id       = { type = 13500 id = 1 }
    name     = "7ème Armée"
    location = 55
    division =
    { id    = { type = 13500 id = 2 }
      name  = "4ème Division d'Infanterie"
      type  = infantry
      extra = artillery
      experience = 15
    }
    division =
    { id   = { type = 13500 id = 3 }
      name = "60ème Division d'Infanterie"
      type = infantry
      experience = 15
    }
    division =
    { id    = { type = 13500 id = 5 }
      name  = "41ème Division Cuirassée de Réserve"
      type  = light_armor
      model = 1
      experience = 15
    }
    division =
    { id       = { type = 13500 id = 6 }
      name     = "25ème Div. d'Infanterie Motorisée"
      strength = 70
      type     = infantry
      model    = 1
      extra    = light_armor_brigade
      experience = 15
    }
  }
  landunit =
  { id       = { type = 13500 id = 8 }
    name     = "1ère Armée"
    location = 63
    division =
    { id    = { type = 13500 id = 9 }
      name  = "1ère Div. Légère Motorisée"
      type  = infantry
      model = 1
      extra = light_armor_brigade
      experience = 15
    }
    division =
    { id    = { type = 13500 id = 10 }
      name  = "1ère Division d'Infanterie"
      type  = infantry
      extra = anti_tank
      experience = 15
    }
    division =
    { id    = { type = 13500 id = 11 }
      name  = "2ème Division Cuirassée de Réserve"
      type  = light_armor
      model = 1
      experience = 15
    }
    division =
    { id    = { type = 13500 id = 15 }
      name  = "12ème Div. d'Infanterie Motorisée"
      type  = infantry
      model = 1
      extra = light_armor_brigade
      experience = 15
    }
    division =
    { id    = { type = 13500 id = 17 }
      name  = "2ème Div. d'Infanterie Nord-Africaine"
      type  = infantry
      extra = anti_tank
      experience = 15
    }
  }
  landunit =
  { id       = { type = 13500 id = 18 }
    name     = "9ème Armée"
    location = 64
    division =
    { id    = { type = 13500 id = 19 }
      name  = "1ère Div. Légère de Cavalerie"
      type  = cavalry
      model = 1
      experience = 15
    }
    division =
    { id   = { type = 13500 id = 21 }
      name = "4ème Division d'Infanterie"
      type = infantry
      experience = 15
    }
    division =
    { id       = { type = 13500 id = 23 }
      name     = "1ère Div. d'Infanterie Motorisée"
      strength = 70
      type     = infantry
      model    = 1
      extra    = light_armor_brigade
      experience = 15
    }
    division =
    { id    = { type = 13500 id = 24 }
      name  = "18ème Division d'Infanterie"
      type  = infantry
      extra = anti_air
      experience = 15
    }
  }
  landunit =
  { id       = { type = 13500 id = 26 }
    name     = "2ème Armée"
    location = 72
    division =
    { id   = { type = 13500 id = 27 }
      name = "2ème Div. Légère de Cavalerie"
      type = cavalry
      experience = 15
    }
    division =
    { id    = { type = 13500 id = 29 }
      name  = "71ème Division d'Infanterie"
      type  = infantry
      extra = anti_tank
      experience = 15
    }
    division =
    { id       = { type = 13500 id = 31 }
      name     = "41ème Division d'Infanterie"
      strength = 70
      type     = infantry
      experience = 15
    }
    division =
    { id   = { type = 13500 id = 32 }
      name = "1ère Div. d'Infanterie Coloniale"
      type = infantry
      experience = 15
    }
  }
  landunit =
  { id       = { type = 13500 id = 35 }
    name     = "3ème Armée"
    location = 53
    division =
    { id       = { type = 13500 id = 36 }
      name     = "3ème Div. Légère de Cavalerie"
      strength = 75
      type     = cavalry
      experience = 15
    }
    division =
    { id   = { type = 13500 id = 37 }
      name = "6ème Division d'Infanterie"
      type = infantry
      experience = 15
    }
    division =
    { id   = { type = 13500 id = 39 }
      name = "8ème Division d'Infanterie"
      type = infantry
      experience = 15
    }
    division =
    { id    = { type = 13500 id = 41 }
      name  = "3ème Div. d'Infanterie Nord-Africaine"
      type  = infantry
      extra = anti_tank
      experience = 15
    }
    division =
    { id   = { type = 13500 id = 43 }
      name = "26ème Division d'Infanterie"
      type = infantry
      experience = 15
    }
    division =
    { id   = { type = 13500 id = 45 }
      name = "42ème Division d'Infanterie"
      type = infantry
      experience = 15
    }
    division =
    { id    = { type = 13500 id = 47 }
      name  = "20ème Division d'Infanterie"
      type  = infantry
      extra = artillery
      experience = 15
    }
  }
  landunit =
  { id       = { type = 13500 id = 49 }
    name     = "4ème Armée"
    location = 316
    division =
    { id       = { type = 13500 id = 51 }
      name     = "11ème Division d'Infanterie"
      strength = 70
      type     = infantry
      experience = 15
    }
    division =
    { id   = { type = 13500 id = 52 }
      name = "45ème Division d'Infanterie"
      type = infantry
      experience = 15
    }
    division =
    { id    = { type = 13500 id = 54 }
      name  = "52ème Div. d'Infanterie d'Afrique"
      type  = infantry
      extra = artillery
      experience = 15
    }
  }
  landunit =
  { id       = { type = 13500 id = 55 }
    name     = "5ème Armée"
    location = 366
    division =
    { id       = { type = 13500 id = 57 }
      name     = "24ème Division d'Infanterie"
      strength = 70
      type     = infantry
      experience = 15
    }
    division =
    { id   = { type = 13500 id = 58 }
      name = "31ème Div. d'Infanterie de Montagne"
      type = bergsjaeger
      experience = 15
    }
    division =
    { id    = { type = 13500 id = 61 }
      name  = "70ème Division d'Infanterie"
      type  = infantry
      extra = anti_tank
      experience = 15
    }
    division =
    { id    = { type = 13500 id = 62 }
      name  = "30ème Division d'Infanterie"
      type  = infantry
      extra = anti_tank
      experience = 15
    }
  }
  landunit =
  { id       = { type = 13500 id = 64 }
    name     = "8ème Armée"
    location = 73
    division =
    { id       = { type = 13500 id = 706 }
      name     = "Maginot Line HQ"
      type     = hq
      model    = 0
      strength = 100
      experience = 15
    }
    division =
    { id       = { type = 13500 id = 65 }
      name     = "13ème Division d'Infanterie"
      strength = 70
      type     = infantry
      extra    = anti_tank
      experience = 15
    }
    division =
    { id       = { type = 13500 id = 67 }
      name     = "19ème Division d'Infanterie"
      strength = 70
      type     = infantry
      experience = 15
    }
    division =
    { id   = { type = 13500 id = 68 }
      name = "54ème Division d'Infanterie"
      type = infantry
      experience = 15
    }
  }
  landunit =
  { id       = { type = 13500 id = 70 }
    name     = "Armée des Alpes"
    location = 527
    division =
    { id   = { type = 13500 id = 71 }
      name = "65ème Div. d'Infanterie de Montagne"
      type = bergsjaeger
      experience = 15
    }
    division =
    { id   = { type = 13500 id = 72 }
      name = "64ème Div. d'Infanterie de Montagne"
      type = bergsjaeger
      experience = 15
    }
  }
  landunit =
  { id       = { type = 13500 id = 76 }
    name     = "XIX Région Militaire"
    location = 949
    division =
    { id   = { type = 13500 id = 77 }
      name = "85ème Div. d'Infanterie d'Afrique"
      type = infantry
      experience = 15
    }
    division =
    { id       = { type = 13500 id = 79 }
      name     = "182ème Div. d'Infanterie d'Afrique"
      strength = 60
      type     = infantry
      experience = 15
    }
  }
  landunit =
  { id       = { type = 13500 id = 82 }
    name     = "Armée de Tunésie"
    location = 939
    division =
    { id       = { type = 14000 id = 709 }
      name     = "African Army HQ"
      type     = hq
      model    = 0
      strength = 100
      experience = 15
    }
    division =
    { id       = { type = 13500 id = 83 }
      name     = "83ème Div. d'Infanterie d'Afrique"
      strength = 100
      type     = infantry
      extra    = anti_tank
      experience = 15
    }
    division =
    { id   = { type = 13500 id = 85 }
      name = "81ème Div. d'Infanterie d'Afrique"
      type = infantry
      experience = 15
    }
    division =
    { id       = { type = 13500 id = 88 }
      name     = "6ème Division Légère de Cavalerie"
      strength = 65
      type     = cavalry
      experience = 15
    }
  }
  landunit =
  { id       = { type = 13500 id = 89 }
    name     = "Troupes de Maroc"
    location = 959
    division =
    { id       = { type = 13500 id = 90 }
      name     = "3ème Division Marocaine"
      strength = 60
      type     = infantry
      extra    = anti_tank
      experience = 15
    }
  }
  landunit =
  { id       = { type = 13500 id = 91 }
    name     = "Troupes d'Indochine"
    location = 1337
    division =
    { id       = { type = 13500 id = 92 }
      name     = "Division de Tonkin"
      strength = 65
      type     = infantry
      experience = 15
    }
    division =
    { id       = { type = 13500 id = 93 }
      name     = "Division de Cochinchine-Cambodge"
      strength = 60
      type     = infantry
      extra    = engineer
      experience = 15
    }
  }
  landunit =
  { id       = { type = 13500 id = 94 }
    name     = "Corps Expéditionnaire"
    location = 1037
    division =
    { id       = { type = 13500 id = 95 }
      name     = "1ère Légère d`Infanterie"
      strength = 100
      type     = infantry
      model    = 1
      experience = 15
    }
    division =
    { id       = { type = 13500 id = 96 }
      name     = "1ère/2ème de Chasseurs Montagne"
      strength = 100
      type     = bergsjaeger
      experience = 15
    }
  }
##################
# AI Garrisons
##################

	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13500 id = 510 }
			name = "Maginot Garrison 1"
			type = infantry
			extra = engineer
			model = 2
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13500 id = 511 }
			name = "Maginot Garrison 2"
			type = infantry
			extra = engineer
			model = 2
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13500 id = 512 }
			name = "Maginot Garrison 3"
			type = infantry
			extra = engineer
			model = 2
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13500 id = 513 }
			name = "Cayenne Garrison"
			type = garrison
			extra = engineer
			model = 2
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13500 id = 514 }
			name = "Brest"
			type = garrison
			extra = engineer
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13500 id = 515 }
			name = "Rennes"
			type = garrison
			extra = engineer
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13500 id = 516 }
			name = "Lorient"
			type = garrison
			extra = engineer
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13500 id = 517 }
			name = "Nantes"
			type = garrison
			extra = engineer
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13500 id = 518 }
			name = "Caen"
			type = garrison
			extra = engineer
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13500 id = 519 }
			name = "Cholet"
			type = garrison
			extra = engineer
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13500 id = 520 }
			name = "Le Havre"
			type = garrison
			extra = engineer
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13500 id = 521 }
			name = "Dieppe"
			type = garrison
			extra = engineer
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13500 id = 522 }
			name = "Calais"
			type = garrison
			extra = engineer
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13500 id = 500 }
			name = "Narvik"
			type = infantry
			model = 2
			extra = engineer
			brigade_model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13500 id = 501 }
			name = "temp"
			type = infantry
			model = 2
			extra = engineer
			brigade_model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13500 id = 502 }
			name = "temp"
			type = infantry
			model = 2
			extra = engineer
			brigade_model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13500 id = 503 }
			name = "temp"
			type = infantry
			model = 2
			extra = engineer
			brigade_model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13500 id = 504 }
			name = "temp"
			type = infantry
			model = 2
			extra = engineer
			brigade_model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13500 id = 505 }
			name = "temp"
			type = infantry
			model = 2
			extra = engineer
			brigade_model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13500 id = 506 }
			name = "temp"
			type = infantry
			model = 2
			extra = engineer
			brigade_model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13500 id = 507 }
			name = "temp"
			type = infantry
			model = 2
			extra = engineer
			brigade_model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13500 id = 508 }
			name = "temp"
			type = infantry
			model = 2
			extra = engineer
			brigade_model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13500 id = 509 }
			name = "temp"
			type = infantry
			model = 2
			extra = engineer
			brigade_model = 1
		}

##### Naval ######

  navalunit =
  { id       = { type = 13500 id = 98 }
    name     = "1ère Flotte de la France"
    location = 32
    base     = 32
    division =
    { id            = { type = 13500 id = 99 }
      name          = "Béarn"
      type          = carrier
      model         = 1
      extra         = cag
      brigade_model = 1
    }
    division =
    { id    = { type = 13500 id = 400 }
      name  = "Algérie"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 13500 id = 126 }
      name  = "Primauguet"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 13500 id = 127 }
      name  = "Duguay-Trouin"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 13500 id = 129 }
      name  = "Lamotte-Picquet"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 13500 id = 131 }
      name  = "La Galissonnière"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 13500 id = 243 }
      name  = "1ère Flotille des Contre-Torpilleurs"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 13500 id = 244 }
      name  = "2ème Flotille des Contre-Torpilleurs"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 13500 id = 245 }
      name  = "3ème Flotille des Contre-Torpilleurs"
      type  = destroyer
      model = 0
    }
  }
  navalunit =
  { id       = { type = 13500 id = 100 }
    name     = "2ème Flotte de la France"
    location = 364
    base     = 364
    division =
    { id    = { type = 13500 id = 101 }
      name  = "Courbet"
      type  = battleship
      model = 0
    }
    division =
    { id    = { type = 13500 id = 103 }
      name  = "Paris"
      type  = battleship
      model = 0
    }
    division =
    { id    = { type = 13500 id = 118 }
      name  = "Suffren"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 13500 id = 116 }
      name  = "Dusquesne"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 13500 id = 259 }
      name  = "Pluton"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 13500 id = 133 }
      name  = "Jeanne d'Arc"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 13500 id = 139 }
      name  = "4ème Flotille des Contre-Torpilleurs"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 13500 id = 144 }
      name  = "5ème Flotille des Contre-Torpilleurs"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 13500 id = 246 }
      name  = "6ème Flotille des Contre-Torpilleurs"
      type  = destroyer
      model = 0
    }
  }
  navalunit =
  { id       = { type = 13500 id = 104 }
    name     = "3ème Flotte de la France"
    location = 949
    base     = 949
    division =
    { id    = { type = 13500 id = 105 }
      name  = "Ocean"
      type  = battleship
      model = 0
    }         # Renamed Jean Bart 1937
    division =
    { id    = { type = 13500 id = 109 }
      name  = "Bretagne"
      type  = battleship
      model = 1
    }
    division =
    { id    = { type = 13500 id = 120 }
      name  = "Foch"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 13500 id = 115 }
      name  = "Tourville"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 13500 id = 255 }
      name  = "7ème Flotille des Contre-Torpilleurs"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 13500 id = 152 }
      name  = "8ème Flotille des Contre-Torpilleurs"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 13500 id = 157 }
      name  = "9ème Flotille des Contre-Torpilleurs"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 13500 id = 242 }
      name  = "10ème Flotille des Contre-Torpilleurs"
      type  = destroyer
      model = 2
    }
  }
  navalunit =
  { id       = { type = 13500 id = 110 }
    name     = "4ème Flotte de la France"
    location = 32
    base     = 32
    division =
    { id    = { type = 13500 id = 111 }
      name  = "Lorraine"
      type  = battleship
      model = 1
    }
    division =
    { id    = { type = 13500 id = 113 }
      name  = "Provence"
      type  = battleship
      model = 1
    }
    division =
    { id    = { type = 13500 id = 122 }
      name  = "Colbert"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 13500 id = 124 }
      name  = "Dupleix"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 13500 id = 137 }
      name  = "Emile Bertin"
      type  = light_cruiser
      model = 2
    }
    division =
    { id    = { type = 13500 id = 165 }
      name  = "11ème Flotille des Contre-Torpilleurs"
      type  = destroyer
      model = 1
    }
  }
  navalunit =
  { id       = { type = 13500 id = 171 }
    name     = "1ère Flotte de Soumarins"
    location = 364
    base     = 364
    division =
    { id    = { type = 13500 id = 172 }
      name  = "1ère Flotille des Sous-Marins"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 13500 id = 177 }
      name  = "2ème Flotille des Sous-Marins"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 13500 id = 248 }
      name  = "3ème Flotille des Sous-Marins"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 13500 id = 268 }
      name  = "4ème Flotille des Sous-Marins"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 13500 id = 247 }
      name  = "5ème Flotille des Sous-Marins"
      type  = submarine
      model = 0
    }
  }
  navalunit =
  { id       = { type = 13500 id = 181 }
    name     = "2ème Flotte de Soumarins"
    location = 364
    base     = 364
    division =
    { id    = { type = 13500 id = 249 }
      name  = "6ème Flotille des Sous-Marins"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 13500 id = 250 }
      name  = "7ème Flotille des Sous-Marins"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 13500 id = 251 }
      name  = "8ème Flotille des Sous-Marins"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 13500 id = 182 }
      name  = "9ème Flotille des Sous-Marins"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 13500 id = 187 }
      name  = "10ème Flotille des Sous-Marins"
      type  = submarine
      model = 2
    }
  }
  navalunit =
  { id       = { type = 13500 id = 191 }
    name     = "3ème Flotte de Soumarins"
    location = 949
    base     = 949
    division =
    { id    = { type = 13500 id = 254 }
      name  = "11ème Flotille des Sous-Marins"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 13500 id = 252 }
      name  = "12ème Flotille des Sous-Marins"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 13500 id = 253 }
      name  = "13ème Flotille des Sous-Marins"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 13500 id = 192 }
      name  = "14ème Flotille des Sous-Marins"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 13500 id = 197 }
      name  = "15ème Flotille des Sous-Marins"
      type  = submarine
      model = 2
    }
  }
  navalunit =
  { id       = { type = 13500 id = 198 }
    location = 1337
    base     = 1337
    name     = "Transport Expéditionnaire"
    division =
    { id   = { type = 13500 id = 199 }
      name = "1ère Flotille de Convoi"
      type = transport
    }
    division =
    { id   = { type = 13500 id = 200 }
      name = "2ème Flotille de Convoi"
      type = transport
    }
    division =
    { id   = { type = 13500 id = 201 }
      name = "3ème Flotille de Convoi"
      type = transport
    }
  }
  navalunit =
  { id       = { type = 13500 id = 202 }
    location = 364
    base     = 364
    name     = "Transport Génerale"
    division =
    { id   = { type = 13500 id = 203 }
      name = "4ème Flotille de Convoi"
      type = transport
    }
    division =
    { id   = { type = 13500 id = 204 }
      name = "5ème Flotille de Convoi"
      type = transport
    }
    division =
    { id   = { type = 13500 id = 205 }
      name = "6ème Flotille de Convoi"
      type = transport
    }
    division =
    { id   = { type = 13500 id = 523 }
      name = "7ème Flotille de Convoi"
      type = transport
    }
  }

###### Air #######

  airunit =
  { id       = { type = 13500 id = 206 }
    name     = "1ère Groupe de Bombardement"
    location = 56
    base     = 56
    division =
    { id       = { type = 13500 id = 207 }
      name     = "Groupe de Bombardement Tactique 1"
      strength = 100
      type     = tactical_bomber
    }
    division =
    { id       = { type = 13500 id = 211 }
      name     = "Groupe de Bombardement Tactique 2"
      strength = 100
      type     = tactical_bomber
    }
    division =
    { id       = { type = 13500 id = 215 }
      name     = "Groupe de Bombardement Tactique 3"
      strength = 100
      type     = tactical_bomber
    }
  }
  airunit =
  { location = 949
    base     = 949
    id       = { type = 13500 id = 218 }
    name     = "4ème Groupe de Bombardement"
    division =
    { id       = { type = 13500 id = 219 }
      name     = "Groupe de Bombardement Tactique 6"
      strength = 100
      type     = tactical_bomber
    }
  }
  airunit =
  { location = 364
    base     = 364
    id       = { type = 13500 id = 222 }
    name     = "5ème Groupe de Bombardement"
    division =
    { id       = { type = 13500 id = 223 }
      name     = "Groupe de Bombardement Tactique 7"
      strength = 100
      type     = tactical_bomber
    }
  }
  airunit =
  { location = 56
    base     = 56
    id       = { type = 13500 id = 226 }
    name     = "1ère Groupe de Chasse"
    division =
    { id       = { type = 13500 id = 227 }
      name     = "Groupe de Chasse 24"
      strength = 100
      type     = interceptor
      model    = 1
    }
    division =
    { id       = { type = 13500 id = 231 }
      name     = "Groupe de Chasse 21"
      strength = 100
      type     = interceptor
      model    = 1
    }
  }
  airunit =
  { location = 364
    base     = 364
    id       = { type = 13500 id = 234 }
    name     = "3ème Groupe de Chasse"
    division =
    { id       = { type = 13500 id = 235 }
      name     = "Groupe de Chasse 23"
      strength = 100
      type     = interceptor
    }
  }
##################################
# Naval units under construction
##################################

division_development = {
	name = "Dunkerque"
	type = battlecruiser
	model = 3
	cost = 7.2
	id = { type = 13500 id = 300 }
	date = { year = 1937 month = april day = 1 }
	}

division_development = {
	id = { type = 13500 id = 301 }
	name = "Richelieu"
	type = battleship
      model = 3
	cost = 2.4
	date = { year = 1939 month = january day = 17 }
	}

division_development = {
	id = { type = 13500 id = 302 }
	name = "Jean Bart"
	type = battleship
      model = 3
	cost = 2.9
	date = { year = 1940 month = march day = 6 }
	}
 division_development = {
	id = { type = 13500 id = 303 }
	name = "Strasbourg"
	type = battlecruiser
      model = 3
	cost = 7.2
	date = { year = 1936 month = december day = 12 }
	}
division_development = {
	id = { type = 13500 id = 304 }
	name = "Georges Leygues"
	type = light_cruiser
	model = 3
	cost = 6
	date = { year = 1936 month = march day = 24 }
	}
division_development = {
	id = { type = 13500 id = 305 }
	name = "11ème Flotille des Contre-Torpilleurs"
	type = destroyer
      model = 2
	cost = 0.5
	date = { year = 1937 month = january day = 9 }
	}

division_development = {
	id = { type = 13500 id = 306 }
	name = "16ème Flotille des Sous-Marins"
	type = submarine
      model = 1
	cost = 0.1
	date = { year = 1938 month = december day = 9 }
	}
}