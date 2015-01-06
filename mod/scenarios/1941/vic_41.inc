
##############################
# Country definition for VIC #
##############################

province =
{ id       = 320
  anti_air = 2
  air_base = { size = 6 current_size = 6 }
}            # Vichy
province =
{ id         = 365
  anti_air   = 2
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Toulon
province = { id = 875 supplypool = 1 } # Cayenne
province =
{ id         = 939
  anti_air   = 2
  air_base   = { size = 6 current_size = 6 }
  naval_base = { size = 10 current_size = 10 }
}              # Tunis
province = { id = 949 supplypool = 500 oilpool = 1 } # Algiers
province =
{ id         = 953
  anti_air   = 2
  air_base   = { size = 6 current_size = 6 }
  naval_base = { size = 10 current_size = 10 }
}              # Oran
province =
{ id         = 958
  anti_air   = 2
  air_base   = { size = 6 current_size = 6 }
  naval_base = { size = 10 current_size = 10 }
}              # Casablanca
province =
{ id         = 981
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}              # Dakar

#####################
# Country main data #
#####################

country =
{ tag                    = VIC
  capital                = 320
  # Resource Reserves
  oil                    = 200
  metal                  = 200
  energy                 = 200
  rare_materials         = 200
  manpower               = 66
  transports             = 130
  escorts                = 30
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 3
    defense_lobby     = 8
    interventionism   = 8
  }
  SpyInfo                = { country = "VIC" NumberOfSpies = 8 }
  #SpyInfo                = { country = "BEL" NumberOfSpies = 5 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 5 }
  #SpyInfo                = { country = "FRA" NumberOfSpies = 5 }
  #SpyInfo                = { country = "GER" NumberOfSpies = 5 }
  #SpyInfo                = { country = "HOL" NumberOfSpies = 5 }
  #SpyInfo                = { country = "ITA" NumberOfSpies = 5 }
  #SpyInfo                = { country = "POR" NumberOfSpies = 5 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 5 }
  #SpyInfo                = { country = "SPA" NumberOfSpies = 5 }
  #SpyInfo                = { country = "USA" NumberOfSpies = 5 }
  # Metropolitan France
  nationalprovinces      = { 529 527 366 365 367 364 363 362 358 328 327 326 325 324 359 361 319 360 322 323 59  60  61  62  63  318 317 316 73  72
			     64  53  44  43  18  54  42  55  41  56  57  58  32  33  34  35  36  37  38  39  40  320 321 528
			   }
  ownedprovinces         = { 956  969  968  959  958  960  966  1014 970  1013 943  942  945  944  946  947  949  948  951  950  952  953  935  934
			     936  938  937  939  940  941  1134 1137 319  320  321  322  324  327  328  358  359  360  361  362  363  364  528  529
			     365  367  875  898  899  1135 1003 1004 973  974  975  1083 1084 998  976  977  978  981  984  987  989  990  985  980
			     986  979  994  996  997  1005 1006 991  995  993
			   }
  controlledprovinces    = { 956  969  968  959  958  960  966  1014 970  1013 943  942  945  944  946  947  949  948  951  950  952  953  935  934
			     936  938  937  939  940  941  1134 1137 319  320  321  322  324  327  328  358  359  360  361  362  363  364  528  529
			     365  367  875  898  899  1135 1003 1004 973  974  975  1083 1084 998  976  977  978  981  984  987  989  990  985  980
			     986  979  994  996  997  1005 1006 991  995  993
			   }
  # FRA 1941 techs
  # ######################
  techapps               = { 2320  5070  4010  4020  4030  4040  4120  4130  4140  4150  4250  2010  2020  2040  2050  2030  2070  2290  2300  2310
			     2330  2400  2450  2460  2470  2510  2520  1010  1020  1030  1190  1200  1210  1220  1110  1120  1130  1070  1230  1310
			     1340  5010  5020  5050  5060  5080  5090  5100  5110  5120  5130  5190  5200  5310  5320  5470  9010  9020  9030  9040
			     9050  9060  9070  9080  9090  9100  9110  9120  9130  9190  9200  6010  6030  6110  6120  6150  8010  8020  8030  8040
			     8050  8070  8100  8120  3010  3020  3030  3070  3080  3090  3130  3140  3150  3190  3200  3210  3250  3260  3270  3280
			     3320  3330  3340  3400  3410  3420  3040  3100  3220  14000 14010
			   }
  diplomacy =
  { relation = { tag = GER value = 75 }
    relation = { tag = ITA value = 50 }
    relation = { tag = JAP value = 50 }
  }
  headofstate            = { type = 9 id = 57001 }
  headofgovernment       = { type = 9 id = 57002 }
  foreignminister        = { type = 9 id = 57012 }
  armamentminister       = { type = 9 id = 57019 }
  ministerofsecurity     = { type = 9 id = 57026 }
  ministerofintelligence = { type = 9 id = 57006 }
  chiefofstaff           = { type = 9 id = 57033 }
  chiefofarmy            = { type = 9 id = 57035 }
  chiefofnavy            = { type = 9 id = 57009 }
  chiefofair             = { type = 9 id = 57010 }
  dormant_leaders        = { 380022 }
  # #################
  # ###VICHY OOB ####
  # #################
  landunit =
  { location = 361
    id       = { type = 10915 id = 1100 }
    name     = "Armée Métropolitaine HQ"
    division =
    { id       = { type = 10915 id = 1101 }
      name     = "Armée Métropolitaine HQ"
      type     = hq
      model    = 1
      strength = 100
      extra    = police
    }
  }
  landunit =
  { id       = { type = 10915 id = 1 }
    name     = "Armée Métropolitaine"
    location = 363
    division =
    { id       = { type = 10915 id = 2 }
      name     = "2e Division d'Infanterie"
      strength = 100
      type     = infantry
      model    = 1
      extra    = artillery
    }
    division =
    { id       = { type = 10915 id = 3 }
      name     = "4e Division d'Infanterie"
      strength = 100
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 10915 id = 4 }
      name     = "6e Division d'Infanterie"
      strength = 100
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 10915 id = 5 }
      name     = "7e Division d'Infanterie"
      strength = 70
      type     = infantry
      extra    = anti_air
      model    = 1
    }
    division =
    { id       = { type = 10915 id = 6 }
      name     = "8e Division d'Infanterie"
      strength = 100
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 10915 id = 7 }
      name     = "1ère Division d'Infanterie Motorisée"
      strength = 100
      type     = motorized
      extra    = anti_tank
      model    = 0
    }
    division =
    { id       = { type = 10915 id = 8 }
      name     = "3e Division d'Infanterie Motorisée"
      strength = 100
      type     = motorized
      model    = 0
    }
  }
  landunit =
  { id       = { type = 10915 id = 9 }
    name     = "Troupes du Maroc"
    location = 958
    division =
    { id       = { type = 10915 id = 10 }
      name     = "14e Division d'Infanterie"
      strength = 60
      type     = infantry
      model    = 1
      extra    = anti_tank
    }
  }
  landunit =
  { id       = { type = 10915 id = 11 }
    name     = "Troupes de Madagascar"
    location = 1137
    division =
    { id       = { type = 10915 id = 12 }
      name     = "1ère Division d'Infanterie de Réserve"
      strength = 100
      type     = militia
    }
  }
  landunit =
  { id       = { type = 10269 id = 313 }
    location = 1037
    name     = "Troupes de Djibouti"
    division =
    { id       = { type = 10269 id = 314 }
      name     = "Troupes de Djibouti"
      type     = militia
      strength = 50
    }
  }
  landunit =
  { id       = { type = 10915 id = 15 }
    location = 875
    name     = "Troupes de Guyanne"
    division =
    { id       = { type = 10269 id = 316 }
      name     = "Troupes de Guyanne"
      type     = militia
      strength = 50
    }
  }
  landunit =
  { id       = { type = 10915 id = 17 }
    location = 899
    name     = "Troupes de Fort de France"
    division =
    { id       = { type = 10915 id = 18 }
      name     = "Troupes de Fort de France"
      type     = militia
      strength = 50
    }
  }
  landunit =
  { id       = { type = 10915 id = 19 }
    location = 987
    name     = "Troupes du Gabon"
    division =
    { id       = { type = 10269 id = 20 }
      name     = "Troupes du Gabon"
      type     = militia
      strength = 50
    }
  }
  landunit =
  { id       = { type = 10915 id = 21 }
    location = 981
    name     = "Troupe d'Afrique"
    division =
    { id       = { type = 10915 id = 22 }
      name     = "1ère Division d'Infanterie Coloniale"
      type     = infantry
      strength = 100
    }
    division =
    { id       = { type = 10915 id = 23 }
      name     = "2e Division d'Infanterie Coloniale"
      type     = infantry
      strength = 100
    }
    division =
    { id       = { type = 10915 id = 24 }
      name     = "3e Division d'Infanterie Coloniale"
      type     = infantry
      strength = 100
    }
  }
  landunit =
  { id       = { type = 10915 id = 25 }
    location = 321 # Chateauroux
    name     = "Troupes de France Metropolitan"
    division =
    { id       = { type = 10915 id = 26 }
      name     = "1ère Division d'Infanterie"
      type     = infantry
      strength = 100
    }
    division =
    { id       = { type = 10915 id = 27 }
      name     = "2e Division d'Infanterie"
      type     = infantry
      strength = 100
    }
    division =
    { id       = { type = 10915 id = 28 }
      name     = "3e Division d'Infanterie"
      type     = infantry
      strength = 100
    }
  }
  navalunit =
  { id       = { type = 10915 id = 29 }
    name     = "1ère Flotte de France"
    location = 953 # Oran
    base     = 953
    division =
    { id    = { type = 10915 id = 30 }
      name  = "Colbert"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 10915 id = 31 }
      name  = "Dupleix"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 10915 id = 32 }
      name  = "Jeanne d'Arc"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 10915 id = 33 }
      name  = "1ère Flottille de Contre-torpilleurs"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 10915 id = 34 }
      name  = "2e Flottille de Contre-torpilleurs"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 10915 id = 110 }
      name  = "3e Flottille de Contre-torpilleurs"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 10915 id = 35 }
      name  = "1ère Flottille de Convois"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 10915 id = 36 }
      name  = "Lamotte-Picquet"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 10915 id = 37 }
      name  = "Primaguet"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 10915 id = 38 }
      name  = "Algérie"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 10915 id = 39 }
      name  = "Emile Bertin"
      type  = light_cruiser
      model = 2
    }
    division =
    { id    = { type = 10915 id = 40 }
      name  = "La Galissonnière"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 10915 id = 41 }
      name  = "Jean de Vienne"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 10915 id = 42 }
      name  = "Marseillaise"
      type  = light_cruiser
      model = 3
    }
  }
  navalunit =
  { id       = { type = 10915 id = 43 }
    name     = "2e Flotte de France"
    location = 365 # Toulon
    base     = 365
    division =
    { id    = { type = 10915 id = 100 }
      name  = "Provence"
      type  = battleship
      model = 1
    }
    division =
    { id    = { type = 10915 id = 45 }
      name  = "Foch"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 10915 id = 46 }
      name  = "4e Flottille de Contre-torpilleurs"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 10915 id = 111 }
      name  = "5e Flottille de Contre-torpilleurs"
      type  = destroyer
      model = 2
    }
  }
  navalunit =
  { id       = { type = 10915 id = 49 }
    name     = "3e Flotte de France"
    location = 365
    base     = 365
    division =
    { id    = { type = 10915 id = 50 }
      name  = "6e Flottille de Contre-torpilleurs"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 10915 id = 51 }
      name  = "2e Flottille de Convois"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 10915 id = 52 }
    location = 365
    base     = 365
    name     = "Dunkerque"
    division =
    { id       = { type = 10915 id = 53 }
      name     = "Dunkerque"
      type     = battlecruiser
      strength = 100
      model    = 3
    }
  }
  navalunit =
  { id       = { type = 10915 id = 54 }
    location = 365
    base     = 365
    name     = "Strasbourg"
    division =
    { id       = { type = 10915 id = 55 }
      name     = "Strasbourg"
      type     = battlecruiser
      strength = 100
      model    = 3
    }
  }
  navalunit =
  { id       = { type = 10915 id = 56 }
    name     = "1ère Flotte de Sous-Marins"
    location = 365
    base     = 365
    division =
    { id    = { type = 10915 id = 57 }
      name  = "1ère Flottille de Sous-Marins"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 10915 id = 58 }
      name  = "2e Flottille de Sous-Marins"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 10915 id = 106 }
      name  = "3e Flottille de Sous-Marins"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 10915 id = 107 }
      name  = "4e Flottille de Sous-Marins"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 10915 id = 108 }
      name  = "5e Flottille de Sous-Marins"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 10915 id = 109 }
      name  = "6e Flottille de Sous-Marins"
      type  = submarine
      model = 2
    }
  }
  navalunit =
  { id       = { type = 10915 id = 59 }
    location = 981 # Dakar
    base     = 981
    name     = "Escadre de Afrique"
    division =
    { id            = { type = 10915 id = 101 }
      name          = "Bearn"
      type          = carrier
      model         = 1
      extra         = cag
      brigade_model = 2
    }
    division =
    { id    = { type = 10915 id = 102 }
      name  = "Richelieu"
      type  = battleship
      model = 3
    }
    division =
    { id    = { type = 10915 id = 103 }
      name  = "Georges Leygues"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 10915 id = 104 }
      name  = "Gloire"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 10915 id = 105 }
      name  = "Montcalm"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 10915 id = 60 }
      name  = "7e Flottille de Contre-torpilleurs"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 10915 id = 112 }
      name  = "8e Flottille de Contre-torpilleurs"
      type  = destroyer
      model = 2
    }
    division =
    { id       = { type = 10915 id = 61 }
      name     = "3e Flottille de Convois"
      type     = transport
      strength = 100
    }
    division =
    { id       = { type = 10915 id = 62 }
      name     = "4e Flottille de Convois"
      type     = transport
      strength = 100
    }
    division =
    { id       = { type = 10915 id = 63 }
      name     = "5e Flottille de Convois"
      type     = transport
      strength = 100
    }
    division =
    { id       = { type = 10915 id = 64 }
      name     = "6e Flottille de Convois"
      type     = transport
      strength = 100
    }
    division =
    { id       = { type = 10915 id = 65 }
      name     = "7e Flottille de Convois"
      type     = transport
      strength = 100
    }
  }
  airunit =
  { location = 320
    base     = 320
    id       = { type = 10915 id = 66 }
    name     = "Zone d'Opérations Aériennes Nord"
    division =
    { id       = { type = 10915 id = 67 }
      name     = "Groupe de Chasse 21"
      type     = interceptor
      model    = 1
      strength = 80
    }
    division =
    { id       = { type = 10915 id = 68 }
      name     = "Groupe de Chasse 23"
      type     = interceptor
      model    = 1
      strength = 80
    }
    division =
    { id       = { type = 10915 id = 69 }
      name     = "Groupe de Bombardement 1"
      type     = tactical_bomber
      model    = 1
      strength = 50
    }
  }
  airunit =
  { location = 939
    base     = 939
    id       = { type = 10915 id = 70 }
    name     = "Zone d'Opérations Afrique du Nord"
    division =
    { id       = { type = 10915 id = 71 }
      name     = "Groupe de Chasse 24"
      type     = interceptor
      model    = 1
      strength = 50
    }
    division =
    { id       = { type = 10915 id = 72 }
      name     = "Groupe de Bombardement 2"
      type     = tactical_bomber
      model    = 0
      strength = 60
    }
    division =
    { id       = { type = 10915 id = 73 }
      name     = "Groupe de Bombardement d'Assaut 18"
      type     = tactical_bomber
      model    = 0
      strength = 60
    }
  }
  airunit =
  { location = 981
    base     = 981
    id       = { type = 10915 id = 74 }
    name     = "Commande Aérienne Caledonie Nouvelle"
    division =
    { id       = { type = 10915 id = 75 }
      name     = "Groupe de Bombardement Naval 1"
      type     = naval_bomber
      model    = 2
      strength = 100
    }
  }
  airunit =
  { location = 981
    base     = 981
    id       = { type = 10915 id = 76 }
    name     = "Commande Aérienne Afrique Ouest"
    division =
    { id       = { type = 10915 id = 77 }
      name     = "Groupe de Bombardement Naval 2"
      type     = naval_bomber
      model    = 2
      strength = 100
    }
  }
}
