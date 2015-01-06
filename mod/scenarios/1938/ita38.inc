
##############################
# Country definition for ITA #
##############################

province =
{ id         = 368
  ic         = 6
  anti_air   = 1
  landfort   = 3
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 4 current_size = 4 }
}              # Genoa
province =
{ id         = 369
  anti_air   = 1
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 4 current_size = 4 }
}              # La Spezia
province =
{ id       = 370
  anti_air = 1
  landfort = 1
  air_base = { size = 4 current_size = 4 }
}            # Milan
province =
{ id       = 371
  landfort = 3
  air_base = { size = 4 current_size = 4 }
}            # Trento
province =
{ id         = 378
  anti_air   = 1
  landfort   = 4
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 4 current_size = 4 }
}              # Venice
province = { id = 379 ic = 1 } # Ferrara
province =
{ id         = 399
  air_base   = { size = 1 current_size = 1 }
  oilpool    = 100
  supplypool = 300
}              # Rhodes
province = { id = 512 anti_air = 1 } # Bologna
province = { id = 513 ic = 2 coastalfort = 1 anti_air = 1 } # Florence
province = { id = 514 coastalfort = 1 anti_air = 1 } # Rimini
province =
{ id       = 515
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}            # Rome
province = { id = 516 ic = 3 } # Perugia
province =
{ id       = 520
  air_base = { size = 4 current_size = 4 }
}            # Foggia
province =
{ id         = 521
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 4 current_size = 4 }
}              # Naples
province =
{ id          = 523
  ic          = 1
  anti_air    = 1
  coastalfort = 1
  naval_base  = { size = 10 current_size = 10 }
  air_base    = { size = 2 current_size = 2 }
}               # Taranto
province =
{ id          = 525
  coastalfort = 1
  naval_base  = { size = 1 current_size = 1 }
  air_base    = { size = 2 current_size = 2 }
}               # Palermo
province = { id = 526 coastalfort = 1 } # Catania
province =
{ id       = 531
  ic       = 3
  anti_air = 1
  landfort = 3
  air_base = { size = 4 current_size = 4 }
}            # Turin
province =
{ id          = 534
  coastalfort = 1
  naval_base  = { size = 2 current_size = 2 }
  air_base    = { size = 2 current_size = 2 }
  oilpool     = 100
  supplypool  = 300
}               # Sardinia
province =
{ id         = 919
  landfort   = 3
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
}              # Tobruk
province =
{ id         = 924
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 4 current_size = 4 }
}              # Bengazi
province =
{ id         = 932
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 2 current_size = 2 }
  oilpool    = 100
  supplypool = 300
}              # Tripoli
province =
{ id         = 1033
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
  oilpool    = 100
  supplypool = 300
}              # Massaua
province =
{ id         = 1038
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 1 current_size = 1 }
  oilpool    = 100
  supplypool = 300
}              # Assab
province = { id = 1056 oilpool = 100 supplypool = 300 } # Mogadishu

#####################
# Country main data #
#####################

country =
{ tag                    = ITA
  manpower               = 460
  # Resource Reserves (set to 6 months imports for energy, metal and rares)
  energy                 = 18720
  metal                  = 9900
  rare_materials         = 2340
  oil                    = 1000
  supplies               = 2000
  money                  = 100
  capital                = 515
  belligerence           = 5
  ai                     = "ITA_1936.ai"
  transports             = 200 # 3.5 million tons = one sixth of UK
  escorts                = 35
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 3
    freedom           = 4
    free_market       = 5 # state sponsored cartels
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 9
  }
  SpyInfo                = { country = "ITA" NumberOfSpies = 10 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 8 }
  #SpyInfo                = { country = "FRA" NumberOfSpies = 9 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 6 }
  #SpyInfo                = { country = "CZE" NumberOfSpies = 6 }
  #SpyInfo                = { country = "AUS" NumberOfSpies = 8 }
  #SpyInfo                = { country = "SPR" NumberOfSpies = 8 }
  #SpyInfo                = { country = "POL" NumberOfSpies = 6 }
  #SpyInfo                = { country = "SWE" NumberOfSpies = 3 }
  #SpyInfo                = { country = "NOR" NumberOfSpies = 3 }
  #SpyInfo                = { country = "FIN" NumberOfSpies = 3 }
  #SpyInfo                = { country = "YUG" NumberOfSpies = 9 }
  #SpyInfo                = { country = "HUN" NumberOfSpies = 6 }
  #SpyInfo                = { country = "BUL" NumberOfSpies = 6 }
  #SpyInfo                = { country = "BEL" NumberOfSpies = 3 }
  #SpyInfo                = { country = "DEN" NumberOfSpies = 3 }
  #SpyInfo                = { country = "HOL" NumberOfSpies = 3 }
  #SpyInfo                = { country = "ARG" NumberOfSpies = 8 }
  #SpyInfo                = { country = "USA" NumberOfSpies = 8 }
  #SpyInfo                = { country = "ALB" NumberOfSpies = 6 }
  #SpyInfo                = { country = "GRE" NumberOfSpies = 3 }
  #SpyInfo                = { country = "JAP" NumberOfSpies = 3 }
  #SpyInfo                = { country = "ROM" NumberOfSpies = 3 }
  #SpyInfo                = { country = "TUR" NumberOfSpies = 9 }
  #SpyInfo                = { country = "POR" NumberOfSpies = 3 }
  #SpyInfo                = { country = "GER" NumberOfSpies = 8 }
  nationalprovinces      = { 525 526 524 523 522 521 520 519 518 517 516 515 513 514 512 379 369 368 531 370 371 378 534 381 384 387 388 389 }
  ownedprovinces         = { 525  526  524  523  522  521  520  519  518  517  516  515  513  514  512  379  369  368  531  370  371  378  534  398
			     399  927  933  932  930  929  925  924  923  922  921  920  919  916  917  918  926  928  931  1017 1018 1016 1015 1033
			     1039 1038 1034 1055 1056 1058 1044 1048 1049 1042 1043 1050 1045 1046 1047 1053 1052 1051 1054
			   }
  controlledprovinces    = { 525  526  524  523  522  521  520  519  518  517  516  515  513  514  512  379  369  368  531  370  371  378  534  398
			     399  927  933  932  930  929  925  924  923  922  921  920  919  916  917  918  926  928  931  1017 1018 1016 1015 1033
			     1039 1038 1034 1055 1056 1058 1044 1048 1049 1042 1043 1050 1045 1046 1047 1053 1052 1051 1054
			   }
  # Great War Infantry
  techapps               = { 1010  1020  1070  1110  1190  1200  1210  1220  1230  2010  2020  2030  2150  2290  2300  2310  2320  2330  2400  2450
			     2460  2510  3010  3020  3030  3070  3080  3090  3100  3130  3140  3150  3190  3200  3210  3250  3260  3270  3280  3320
			     3330  3400  3410  3420  4010  4020  4050  4120  4130  4170  4250  5010  5050  5080  5090  5190  5200  5310  5320  5470
			     5480  6210  8020  8040  8050  9010  9020  9030  9040  9050  9140  14000 14010
			   }
  # Illyrian Coast
  diplomacy =
  { relation = { tag = AFG value = 50 }
    relation = { tag = ALB value = 10 }
    relation = { tag = ARG value = 30 }
    relation = { tag = AST value = -10 }
    relation = { tag = BEL value = -5 }
    relation = { tag = BHU value = -10 }
    relation = { tag = BUL value = 150 }
    relation = { tag = CAN value = -10 }
    relation = { tag = CHL value = 30 }
    relation = { tag = ENG value = -50 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = -100 }
    relation = { tag = GER value = 100 }
    relation = { tag = GRE value = -100 }
    relation = { tag = HOL value = -20 }
    relation = { tag = HUN value = 125 }
    relation = { tag = IRQ value = 25 }
    relation = { tag = NEP value = -10 }
    relation = { tag = NZL value = -10 }
    relation = { tag = OMN value = 50 }
    relation = { tag = POR value = 65 }
    relation = { tag = ROM value = 50 }
    relation = { tag = SAF value = -50 }
    relation = { tag = SAU value = -25 }
    relation =
    { tag        = SCH
      value      = 1
      guaranteed = { day = 16 month = may year = 1935 }
    }
    relation =
    { tag        = SPA
      value      = 50
      guaranteed = { day = 18 month = november year = 1936 }
    }
    relation = { tag = TUR value = 1 }
    relation = { tag = YEM value = 50 }
    relation = { tag = YUG value = 75 }
  }
  headofstate            = { type = 9 id = 3001 }
  headofgovernment       = { type = 9 id = 3002 }
  foreignminister        = { type = 9 id = 3003 }
  armamentminister       = { type = 9 id = 3004 }
  ministerofsecurity     = { type = 9 id = 3005 }
  ministerofintelligence = { type = 9 id = 3006 }
  chiefofstaff           = { type = 9 id = 3007 }
  chiefofarmy            = { type = 9 id = 3008 }
  chiefofnavy            = { type = 9 id = 3009 }
  chiefofair             = { type = 9 id = 3010 }
  landunit =
  { location = 531 # Torino
    name     = "II Corpo, 1a Armata"
    id       = { type = 30026 id = 1 }
    division =
    { id           = { type = 30026 id = 2 }
      name         = "4a Divisione 'Livorno'"
      type         = infantry
      strength     = 70
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 3 }
      name         = "33a Divisione 'Acqui'"
      type         = infantry
      strength     = 56
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 4 }
      name         = "36a Divisione 'Forlì'"
      type         = infantry
      strength     = 42
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 5 }
      name         = "4a Divisione 'Cuneense'"
      type         = bergsjaeger
      strength     = 56
      max_strength = 70
    }
  }
  landunit =
  { location = 368 # Genova
    name     = "III Corpo, 1a Armata"
    id       = { type = 30026 id = 6 }
    division =
    { id           = { type = 30026 id = 7 }
      name         = "3a Divisione 'Ravenna'"
      type         = infantry
      strength     = 56
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 8 }
      name         = "6a Divisione 'Cuneo'"
      type         = infantry
      strength     = 63
      max_strength = 70
    }
  }
  landunit =
  { location = 368 # Genova
    name     = "XV Corpo, 1a Armata"
    id       = { type = 30026 id = 9 }
    division =
    { id           = { type = 30026 id = 10 }
      name         = "5a Divisione 'Cosseria'"
      type         = infantry
      strength     = 63
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 11 }
      name         = "37a Divisione 'Modena'"
      type         = infantry
      strength     = 63
      max_strength = 70
    }
    division =
    { id            = { type = 30026 id = 12 }
      name          = "44a Divisione 'Cremona'"
      type          = infantry
      extra         = anti_tank
      brigade_model = 0
      strength      = 56
      max_strength  = 70
    }
  }
  landunit =
  { location = 371 # Trento
    name     = "Riserva, 1a Armata"
    id       = { type = 30026 id = 13 }
    division =
    { id           = { type = 30026 id = 14 }
      name         = "5a Divisione 'Pusteria'"
      type         = bergsjaeger
      strength     = 49
      max_strength = 70
    }
  }
  landunit =
  { location = 371 # Trento
    name     = "Corpo d'Armata Alpino, 4a Armata"
    id       = { type = 30026 id = 15 }
    division =
    { id           = { type = 30026 id = 16 }
      name         = "1a Divisione 'Taurinense'"
      type         = bergsjaeger
      strength     = 49
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 17 }
      name         = "2a Divisione 'Tridentina'"
      type         = bergsjaeger
      strength     = 49
      max_strength = 70
    }
  }
  landunit =
  { location = 531 # Torino
    name     = "I Corpo, 4a Armata"
    id       = { type = 30026 id = 18 }
    division =
    { id           = { type = 30026 id = 19 }
      name         = "1a Divisione 'Superga'"
      type         = infantry
      strength     = 42
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 20 }
      name         = "24a Divisione 'Pinerolo'"
      type         = infantry
      strength     = 35
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 21 }
      name         = "59a Divisione 'Cagliari'"
      type         = infantry
      strength     = 56
      max_strength = 70
    }
  }
  landunit =
  { location = 531 # Torino
    name     = "IV Corpo, 4a Armata"
    id       = { type = 30026 id = 22 }
    division =
    { id           = { type = 30026 id = 23 }
      name         = "2a Divisione 'Sforzesca'"
      type         = infantry
      strength     = 35
      max_strength = 70
    }
    division =
    { id            = { type = 30026 id = 24 }
      name          = "26a Divisione 'Assietta'"
      type          = infantry
      extra         = artillery
      brigade_model = 1
      strength      = 35
      max_strength  = 70
    }
  }
  landunit =
  { location = 378 # Venezia
    name     = "V Corpo, 2a Armata"
    id       = { type = 30026 id = 25 }
    division =
    { id           = { type = 30026 id = 26 }
      name         = "12a Divisione 'Sassari'"
      type         = infantry
      strength     = 42
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 27 }
      name         = "15a Divisione 'Bergamo'"
      type         = infantry
      strength     = 42
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 28 }
      name         = "57a Divisione 'Lombardia'"
      type         = infantry
      strength     = 35
      max_strength = 70
    }
  }
  landunit =
  { location = 378 # Venezia
    name     = "XI Corpo, 2a Armata"
    id       = { type = 30026 id = 29 }
    division =
    { id           = { type = 30026 id = 30 }
      name         = "13a Divisione 'Re'"
      type         = infantry
      strength     = 42
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 31 }
      name         = "14a Divisione 'Isonzo'"
      type         = infantry
      strength     = 35
      max_strength = 70
    }
  }
  landunit =
  { location = 378 # Venezia
    name     = "Corpo d'Armata Celere, 6a Armata"
    id       = { type = 30026 id = 32 }
    division =
    { id           = { type = 30026 id = 33 }
      name         = "1a Divisione Celere 'Eugenio di Savoia'"
      type         = cavalry
      model        = 2
      strength     = 49
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 34 }
      name         = "2a Divisione Celere 'Emanuele Filiberto'"
      type         = cavalry
      model        = 2
      strength     = 49
      max_strength = 70
    }
    division =
    { id            = { type = 30026 id = 35 }
      name          = "3a Divisione Celere 'Amedeo Duca d'Aosta'"
      type          = cavalry
      model         = 2
      extra         = artillery
      brigade_model = 1
      strength      = 49
      max_strength  = 70
    }
  }
  landunit =
  { location = 378 # Venezia
    name     = "Corpo d'Armata Corazzato, 6a Armata"
    id       = { type = 30026 id = 36 }
    division =
    { id           = { type = 30026 id = 37 }
      name         = "101a Divisione 'Trieste'"
      type         = motorized
      extra        = armored_car
      strength     = 56
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 38 }
      name         = "102a Divisione 'Trento'"
      type         = motorized
      strength     = 56
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 39 }
      name         = "132a Divisione 'Ariete'"
      type         = light_armor
      model        = 0
      extra        = armored_car
      strength     = 56
      max_strength = 70
    }
  }
  landunit =
  { location = 378 # Venezia
    name     = "Corpo d'Armata Autotrasportabile, 6a Armata"
    id       = { type = 30026 id = 40 }
    division =
    { id           = { type = 30026 id = 41 }
      name         = "9a Divisione 'Pasubio'"
      type         = cavalry
      model        = 3
      strength     = 49
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 42 }
      name         = "10a Divisione 'Piave'"
      type         = cavalry
      model        = 3
      strength     = 42
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 43 }
      name         = "52a Divisione 'Torino'"
      type         = cavalry
      model        = 3
      extra        = armored_car
      strength     = 42
      max_strength = 70
    }
  }
  landunit =
  { location = 371 # Trento
    name     = "XIV Corpo, 8a Armata"
    id       = { type = 30026 id = 44 }
    division =
    { id           = { type = 30026 id = 45 }
      name         = "32a Divisione 'Marche'"
      type         = infantry
      strength     = 49
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 46 }
      name         = "38a Divisione 'Puglie'"
      type         = infantry
      strength     = 42
      max_strength = 70
    }
  }
  landunit =
  { location = 514 # Rimini
    name     = "VI Corpo, 8a Armata"
    id       = { type = 30026 id = 47 }
    division =
    { id           = { type = 30026 id = 48 }
      name         = "18a Divisione 'Messina'"
      type         = infantry
      strength     = 35
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 49 }
      name         = "49a Divisione 'Parma'"
      type         = infantry
      strength     = 49
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 50 }
      name         = "56a Divisione 'Casale'"
      type         = infantry
      strength     = 49
      max_strength = 70
    }
  }
  landunit =
  { location = 525 # Messina
    name     = "XII Corpo, Gruppo d'Armate Sud"
    id       = { type = 30026 id = 243 }
    division =
    { id           = { type = 30026 id = 51 }
      name         = "28a Divisione 'Aosta'"
      type         = infantry
      strength     = 49
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 52 }
      name         = "54a Divisione 'Napoli'"
      type         = infantry
      strength     = 70
      max_strength = 70
    }
  }
  landunit =
  { location = 534 # Sardegna
    name     = "XIII Corpo, Gruppo d'Armate Sud"
    id       = { type = 30026 id = 53 }
    division =
    { id           = { type = 30026 id = 54 }
      name         = "30a Divisione 'Sabauda'"
      type         = infantry
      strength     = 42
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 55 }
      name         = "31a Divisione 'Calabria'"
      type         = infantry
      strength     = 42
      max_strength = 70
    }
  }
  landunit =
  { location = 523 # Tirana
    name     = "Comando Superiore Truppe dell'Adriatico"
    id       = { type = 30026 id = 56 }
    division =
    { id           = { type = 30026 id = 57 }
      name         = "19a Divisione 'Venezia'"
      type         = infantry
      strength     = 70
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 58 }
      name         = "23a Divisione 'Ferrara'"
      type         = infantry
      strength     = 70
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 59 }
      name         = "53a Divisione 'Arezzo'"
      type         = infantry
      strength     = 70
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 60 }
      name         = "3a Divisione 'Julia'"
      type         = bergsjaeger
      strength     = 63
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 61 }
      name         = "131a Divisione 'Centauro'"
      type         = light_armor
      model        = 0
      extra        = armored_car
      strength     = 63
      max_strength = 70
    }
  }
  landunit =
  { location = 524 # Cosenza
    name     = "IX Corpo, 3a Armata"
    id       = { type = 30026 id = 62 }
    division =
    { id           = { type = 30026 id = 63 }
      name         = "29a Divisione 'Piemonte'"
      type         = infantry
      strength     = 35
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 64 }
      name         = "47a Divisione 'Bari'"
      type         = infantry
      strength     = 56
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 65 }
      name         = "48a Divisione 'Taro'"
      type         = infantry
      strength     = 49
      max_strength = 70
    }
  }
  landunit =
  { location = 513 # Firenze
    name     = "VII Corpo, 7a Armata"
    id       = { type = 30026 id = 70 }
    division =
    { id           = { type = 30026 id = 71 }
      name         = "20a Divisione 'Friuli'"
      type         = infantry
      strength     = 56
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 72 }
      name         = "41a Divisione 'Firenze'"
      type         = infantry
      strength     = 49
      max_strength = 70
    }
  }
  landunit =
  { location = 515 # Roma
    name     = "VIII Corpo, 7a Armata"
    id       = { type = 30026 id = 73 }
    division =
    { id           = { type = 30026 id = 74 }
      name         = "21a Divisione 'Granatieri di Sardegna'"
      type         = infantry
      strength     = 56
      max_strength = 70
    }
    division =
    { id            = { type = 30026 id = 75 }
      name          = "51a Divisione 'Siena'"
      type          = infantry
      extra         = artillery
      brigade_model = 1
      strength      = 56
      max_strength  = 70
    }
  }
  landunit =
  { location = 399 # Rodi
    name     = "FF.AA. Isole Italiane dell'Egeo"
    id       = { type = 30026 id = 76 }
    division =
    { id           = { type = 30026 id = 77 }
      name         = "50a Divisione 'Regina'"
      type         = infantry
      strength     = 70
      max_strength = 70
    }
  }
  landunit =
  { location = 932 # Tripoli
    name     = "X Corpo, 5a Armata"
    id       = { type = 30026 id = 78 }
    division =
    { id           = { type = 30026 id = 79 }
      name         = "25a Divisione 'Bologna'"
      type         = infantry
      strength     = 70
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 80 }
      name         = "55a Divisione 'Savona'"
      type         = infantry
      strength     = 70
      max_strength = 70
    }
  }
  landunit =
  { location = 919 # Tobruk
    name     = "XX Corpo, 5a Armata"
    id       = { type = 30026 id = 81 }
    division =
    { id           = { type = 30026 id = 82 }
      name         = "17a Divisione 'Pavia'"
      type         = infantry
      strength     = 70
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 83 }
      name         = "27a Divisione 'Brescia'"
      type         = infantry
      strength     = 35
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 84 }
      name         = "61a Divisione 'Sirte'"
      type         = infantry
      strength     = 56
      max_strength = 70
    }
  }
  landunit =
  { location = 932 # Tripoli
    name     = "XXIII Corpo, 5a Armata"
    id       = { type = 30026 id = 85 }
    division =
    { id           = { type = 30026 id = 86 }
      name         = "1a divisione CC.NN. '23 Marzo'"
      type         = infantry
      strength     = 70
      max_strength = 70
      experience   = 30
    }
    division =
    { id           = { type = 30026 id = 87 }
      name         = "2a divisione CC.NN. '28 Ottobre'"
      type         = infantry
      strength     = 70
      max_strength = 70
      experience   = 30
    }
  }
  landunit =
  { location = 919 # Tobruk
    name     = "XXI Corpo, 10a Armata"
    id       = { type = 30026 id = 88 }
    division =
    { id           = { type = 30026 id = 89 }
      name         = "62a Divisione 'Marmarica'"
      type         = infantry
      strength     = 56
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 90 }
      name         = "63a Divisione 'Cirene'"
      type         = infantry
      strength     = 56
      max_strength = 70
    }
  }
  landunit =
  { location = 924 # Bengazi
    name     = "XXII Corpo, 10a Armata"
    id       = { type = 30026 id = 91 }
    division =
    { id           = { type = 30026 id = 92 }
      name         = "64a Divisione 'Catanzaro'"
      type         = infantry
      strength     = 56
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 93 }
      name         = "4a divisione CC.NN. '3 Gennaio'"
      type         = infantry
      strength     = 70
      max_strength = 70
      experience   = 30
    }
  }
  landunit =
  { location = 919 # Tobruk
    name     = "Scacchiere Sahariano, 10a Armata"
    id       = { type = 30026 id = 94 }
    division =
    { id           = { type = 30026 id = 95 }
      name         = "3a divisione CC.NN. '21 Aprile'"
      type         = infantry
      strength     = 21
      max_strength = 70
      experience   = 30
    }
    division =
    { id           = { type = 30026 id = 96 }
      name         = "1a Divisione Libica"
      type         = militia
      strength     = 10
      max_strength = 70
    }
  }
  landunit =
  { location = 1033 # Asmara
    name     = "Forze Armate dell'A.O.I."
    id       = { type = 30026 id = 97 }
    division =
    { id           = { type = 30026 id = 98 }
      name         = "65a Divisione 'Granatieri di Savoia'"
      type         = infantry
      strength     = 63
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 99 }
      name         = "Divisione 'Africa'"
      type         = militia
      strength     = 10
      max_strength = 70
    }
  }
  landunit =
  { location = 1039 # Massaua
    name     = "Scacchiere Nord, FF.AA.dell'A.O.I."
    id       = { type = 30026 id = 100 }
    division =
    { id           = { type = 30026 id = 101 }
      name         = "1a Divisione Eritrea"
      type         = militia
      strength     = 49
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 102 }
      name         = "2a Divisione Eritrea"
      type         = militia
      strength     = 42
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 103 }
      name         = "4a Divisione Eritrea"
      type         = militia
      strength     = 42
      max_strength = 70
    }
  }
  landunit =
  { location = 1053 # Magalo
    name     = "Scacchiere Sud, FF.AA.dell'A.O.I."
    id       = { type = 30026 id = 104 }
    division =
    { id           = { type = 30026 id = 105 }
      name         = "Bande Armate Sud"
      type         = militia
      strength     = 49
      max_strength = 70
    }
  }
  landunit =
  { location = 1047 # Macalle
    name     = "Scacchiere Est, FF.AA.dell'A.O.I."
    id       = { type = 30026 id = 106 }
    division =
    { id           = { type = 30026 id = 107 }
      name         = "Bande Armate Est"
      type         = militia
      strength     = 49
      max_strength = 70
    }
  }
  landunit =
  { location = 1056 # Mogadiscio
    name     = "Scacchiere Giuba, FF.AA.dell'A.O.I."
    id       = { type = 30026 id = 108 }
    division =
    { id           = { type = 30026 id = 109 }
      name         = "101a Divisione Somala"
      type         = militia
      strength     = 28
      max_strength = 70
    }
    division =
    { id           = { type = 30026 id = 110 }
      name         = "102a Divisione Somala"
      type         = militia
      strength     = 21
      max_strength = 70
    }
  }
  # ###########################
  navalunit =
  { id       = { type = 30026 id = 111 }
    name     = "Regia Marina"
    location = 523
    base     = 523
    division =
    { id    = { type = 30026 id = 112 }
      name  = "RM San Giorgio"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 30026 id = 113 }
      name  = "RM Taranto"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 30026 id = 114 }
      name  = "RM Bari"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 30026 id = 115 }
      name  = "2a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 30026 id = 116 }
      name  = "3a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 30026 id = 117 }
      name  = "4a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 30026 id = 118 }
      name  = "5a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 30026 id = 119 }
      name  = "6a Flottiglia Torpediniere"
      type  = destroyer
      model = 1
    }
  }
  # ##################################
  navalunit =
  { id       = { type = 30026 id = 120 }
    name     = "1a Squadra"
    location = 523
    base     = 523
    division =
    { id    = { type = 30026 id = 121 }
      name  = "RM Giulio Cesare"
      type  = battleship
      model = 1
    }
  }
  navalunit =
  { id       = { type = 30026 id = 122 }
    name     = "1a Divisione/1a Squadra"
    location = 523
    base     = 523
    division =
    { id    = { type = 30026 id = 129 }
      name  = "RM Zara"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 30026 id = 130 }
      name  = "RM Gorizia"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 30026 id = 131 }
      name  = "RM Fiume"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 30026 id = 132 }
      name  = "9a Flottiglia Torpediniere"
      type  = destroyer
      model = 1
    }
  }
  navalunit =
  { id       = { type = 30026 id = 133 }
    name     = "4a Divisione/1a Squadra"
    location = 378
    base     = 378
    division =
    { id       = { type = 30026 id = 134 }
      name     = "RM Alberico da Barbiano"
      type     = light_cruiser
      model    = 1
      maxspeed = 34
    }
    division =
    { id    = { type = 30026 id = 135 }
      name  = "RM Luigi Cadorna"
      type  = light_cruiser
      model = 1
    }
    division =
    { id       = { type = 30026 id = 136 }
      name     = "RM Alberto da Giussano"
      type     = light_cruiser
      model    = 1
      maxspeed = 34
    }
    division =
    { id    = { type = 30026 id = 137 }
      name  = "RM Armando Diaz"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 30026 id = 138 }
      name  = "12a Flottiglia Torpediniere"
      type  = destroyer
      model = 1
    }
  }
  navalunit =
  { id       = { type = 30026 id = 139 }
    name     = "5a Divisione/1a Squadra"
    location = 378
    base     = 378
    division =
    { id    = { type = 30026 id = 140 }
      name  = "RM Conte di Cavour"
      type  = battleship
      model = 1
    }
    division =
    { id    = { type = 30026 id = 141 }
      name  = "7a Flottiglia Torpediniere"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 30026 id = 142 }
      name  = "8a Flottiglia Torpediniere"
      type  = destroyer
      model = 2
    }
  }
  navalunit =
  { id       = { type = 30026 id = 143 }
    name     = "8a Divisione/1a Squadra"
    location = 378
    base     = 378
    division =
    { id       = { type = 30026 id = 144 }
      name     = "RM Duca degli Abruzzi"
      type     = light_cruiser
      model    = 3
      maxspeed = 35
    }
    division =
    { id       = { type = 30026 id = 145 }
      name     = "RM Giuseppe Garibaldi"
      type     = light_cruiser
      model    = 3
      maxspeed = 35
    }
    division =
    { id    = { type = 30026 id = 146 }
      name  = "16a Flottiglia Torpediniere"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 30026 id = 147 }
      name  = "Flottiglia Aspromonte"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 30026 id = 148 }
    name     = "9a Divisione/1a Squadra"
    location = 378
    base     = 378
    division =
    { id    = { type = 30026 id = 149 }
      name  = "14a Flottiglia Torpediniere"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 30026 id = 150 }
      name  = "15a Flottiglia Torpediniere"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 30026 id = 151 }
      name  = "Flottiglia Maria"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 30026 id = 152 }
      name  = "6o Squadrone Trasporti"
      type  = transport
      model = 0
    }
  }
  # ###################################
  navalunit =
  { id       = { type = 30026 id = 153 }
    name     = "2a Squadra"
    location = 523
    base     = 523
    division =
    { id    = { type = 30026 id = 154 }
      name  = "RM Pola"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 30026 id = 155 }
      name  = "Flottiglia Sagittario"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 30026 id = 156 }
      name  = "7o Squadrone Trasporti"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 30026 id = 157 }
    name     = "2a Divisione/2a Squadra"
    location = 523
    base     = 523
    division =
    { id       = { type = 30026 id = 158 }
      name     = "RM Giovanni dalle Bande Nere"
      type     = light_cruiser
      model    = 1
      maxspeed = 34
    }
    division =
    { id       = { type = 30026 id = 159 }
      name     = "RM Bartolomeo Colleoni"
      type     = light_cruiser
      model    = 1
      maxspeed = 34
    }
    division =
    { id    = { type = 30026 id = 160 }
      name  = "10a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 30026 id = 161 }
      name  = "Flottiglia Rina Corrado"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 30026 id = 162 }
    name     = "3a Divisione/2a Squadra"
    location = 523
    base     = 523
    division =
    { id    = { type = 30026 id = 163 }
      name  = "RM Trento"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 30026 id = 164 }
      name  = "RM Bolzano"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 30026 id = 165 }
      name  = "RM Trieste"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 30026 id = 167 }
      name  = "11a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 30026 id = 168 }
      name  = "Flottiglia Enrichetta"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 30026 id = 169 }
    name     = "7a Divisione/2a Squadra"
    location = 523
    base     = 523
    division =
    { id       = { type = 30026 id = 170 }
      name     = "RM Eugenio di Savoia"
      type     = light_cruiser
      model    = 2
      maxspeed = 34
    }
    division =
    { id       = { type = 30026 id = 171 }
      name     = "RM Duca d'Aosta"
      type     = light_cruiser
      model    = 2
      maxspeed = 34
    }
    division =
    { id       = { type = 30026 id = 172 }
      name     = "RM Muzio Attendolo"
      type     = light_cruiser
      model    = 2
      maxspeed = 34
    }
    division =
    { id       = { type = 30026 id = 173 }
      name     = "RM Raimondo Montecuccoli"
      type     = light_cruiser
      model    = 2
      maxspeed = 34
    }
    division =
    { id    = { type = 30026 id = 174 }
      name  = "13a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 30026 id = 175 }
      name  = "Flottiglia Tripoli"
      type  = transport
      model = 0
    }
  }
  # #####################################
  navalunit =
  { id       = { type = 30026 id = 176 }
    name     = "Flotta Sommergibili"
    location = 369
    base     = 369
    division =
    { id    = { type = 30026 id = 177 }
      name  = "4a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 30026 id = 178 }
      name  = "51a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 30026 id = 179 }
      name  = "52a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
  }
  navalunit =
  { id       = { type = 30026 id = 180 }
    name     = "1a Flottiglia Sommergibili"
    location = 369
    base     = 369
    division =
    { id    = { type = 30026 id = 181 }
      name  = "11a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 30026 id = 182 }
      name  = "12a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 30026 id = 183 }
      name  = "13a Flottiglia Sommergibili"
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 30026 id = 184 }
      name  = "14a Flottiglia Sommergibili"
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 30026 id = 185 }
      name  = "17a Flottiglia Sommergibili"
      type  = submarine
      model = 0
    }
  }
  navalunit =
  { id       = { type = 30026 id = 186 }
    name     = "3a Flottiglia Sommergibili"
    location = 369
    base     = 369
    division =
    { id    = { type = 30026 id = 187 }
      name  = "31a Flottiglia Sommergibili"
      type  = submarine
      model = 2
    }
  }
  navalunit =
  { id       = { type = 30026 id = 188 }
    name     = "4a Flottiglia Sommergibili"
    location = 369
    base     = 369
    division =
    { id    = { type = 30026 id = 189 }
      name  = "40a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 30026 id = 190 }
      name  = "41a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 30026 id = 191 }
      name  = "42a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 30026 id = 192 }
      name  = "43a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
  }
  navalunit =
  { id       = { type = 30026 id = 193 }
    name     = "7a Flottiglia Sommergibili"
    location = 369
    base     = 369
    division =
    { id    = { type = 30026 id = 194 }
      name  = "71a Flottiglia Sommergibili"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 30026 id = 195 }
      name  = "72a Flottiglia Sommergibili"
      type  = submarine
      model = 2
    }
  }
  # #####################################################
  navalunit =
  { id       = { type = 30026 id = 196 }
    name     = "Comando Navale Libico"
    location = 932
    base     = 932
    division =
    { id    = { type = 30026 id = 197 }
      name  = "1a Flottiglia Torpediniere"
      type  = destroyer
      model = 1
    }
  }
  navalunit =
  { id       = { type = 30026 id = 198 }
    name     = "8a Flottiglia Squadron Sommergibili"
    location = 932
    base     = 932
    division =
    { id    = { type = 30026 id = 199 }
      name  = "61a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 30026 id = 200 }
      name  = "62a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
  }
  navalunit =
  { id       = { type = 30026 id = 201 }
    name     = "Comando Navale Mar Rosso"
    location = 1038
    base     = 1038
    division =
    { id    = { type = 30026 id = 202 }
      name  = "3a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 30026 id = 203 }
      name  = "5a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 30026 id = 204 }
      name  = "Flottiglia Giorgio Orsini"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 30026 id = 205 }
    name     = "8a Flottiglia Sommergibili"
    location = 1038
    base     = 1038
    division =
    { id    = { type = 30026 id = 206 }
      name  = "81a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 30026 id = 207 }
      name  = "82a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
  }
  airunit =
  { location = 531 # Turin
    base     = 531
    id       = { type = 30026 id = 208 }
    name     = "1a Squadra Aerea"
    division =
    { id       = { type = 30026 id = 209 }
      name     = "9a Divisione Caccia"
      strength = 100
      type     = interceptor
      model    = 0
    }
  }
  airunit =
  { location = 531
    base     = 531
    id       = { type = 30026 id = 210 }
    name     = "6o Comando Bombardieri Tattici 'Falco'"
    division =
    { id       = { type = 30026 id = 211 }
      name     = "16a Divisione Bombardieri"
      strength = 100
      type     = tactical_bomber
      model    = 0
    }
  }
  airunit =
  { location = 531
    base     = 531
    id       = { type = 30026 id = 212 }
    name     = "2o Comando Caccia 'Borea'"
    division =
    { id       = { type = 30026 id = 213 }
      name     = "2a Divisione Caccia 'Borea'"
      strength = 100
      type     = interceptor
      model    = 1
    }
  }
  airunit =
  { location = 919
    base     = 919
    id       = { type = 30026 id = 214 }
    name     = "4o Comando Bombardieri Tattici 'Drago'"
    division =
    { id       = { type = 30026 id = 215 }
      name     = "4a Divisione Bombardieri 'Drago'"
      strength = 100
      type     = tactical_bomber
      model    = 1
    }
  }
  # ###############################
  airunit =
  { location = 523 # Taranto
    base     = 523
    id       = { type = 30026 id = 216 }
    name     = "2a Squadra Aerea"
    division =
    { id       = { type = 30026 id = 217 }
      name     = "14a Divisione Caccia 'Rex'"
      strength = 100
      type     = interceptor
      model    = 0
    }
  }
  airunit =
  { location = 523
    base     = 523
    id       = { type = 30026 id = 218 }
    name     = "3o Comando Aerosiluranti 'Centauro'"
    division =
    { id       = { type = 30026 id = 219 }
      name     = "3a Divisione Bombardieri 'Centauro'"
      strength = 100
      type     = tactical_bomber
      model    = 1
    }
    division =
    { id       = { type = 30026 id = 220 }
      name     = "24a Divisione Bombardieri"
      strength = 50
      type     = tactical_bomber
      model    = 0
    }
  }
  airunit =
  { location = 523
    base     = 523
    id       = { type = 30026 id = 221 }
    name     = "Aeronautica Adriatica"
    division =
    { id       = { type = 30026 id = 222 }
      name     = "38a Divisione Bombardieri"
      strength = 100
      type     = tactical_bomber
      model    = 0
    }
  }
  # ##################################
  airunit =
  { location = 525
    base     = 525
    id       = { type = 30026 id = 223 }
    name     = "3a Squadra Aerea"
    division =
    { id       = { type = 30026 id = 224 }
      name     = "7a Divisione Caccia"
      strength = 100
      type     = interceptor
      model    = 1
    }
  }
  airunit =
  { location = 525
    base     = 525
    id       = { type = 30026 id = 225 }
    name     = "8o Comando Caccia 'Astore'"
    division =
    { id       = { type = 30026 id = 226 }
      name     = "2a Divisione Caccia"
      strength = 100
      type     = interceptor
      model    = 0
    }
  }
  # #########################################
  airunit =
  { location = 378
    base     = 378
    id       = { type = 30026 id = 227 }
    name     = "4a Squadra Aerea"
    division =
    { id       = { type = 30026 id = 228 }
      name     = "35a Divisione Bombardieri"
      strength = 100
      type     = tactical_bomber
      model    = 1
    }
  }
  airunit =
  { location = 534
    base     = 534
    id       = { type = 30026 id = 229 }
    name     = "Aeronautica Sardegna"
    division =
    { id       = { type = 30026 id = 230 }
      name     = "53a Divisione Caccia"
      strength = 100
      type     = interceptor
      model    = 1
    }
    division =
    { id       = { type = 30026 id = 231 }
      name     = "190a Divisione Assalto"
      strength = 60
      type     = cas
      model    = 0
    }
    division =
    { id       = { type = 30026 id = 232 }
      name     = "50a Divisione Bombardieri"
      strength = 50
      type     = cas
      model    = 0
    }
  }
  # ################################################
  airunit =
  { location = 932
    base     = 932
    id       = { type = 30026 id = 233 }
    name     = "Aeronautica Libia Ovest"
    division =
    { id       = { type = 30026 id = 234 }
      name     = "8a Divisione Caccia 'Astore'"
      strength = 100
      type     = interceptor
      model    = 0
    }
    division =
    { id       = { type = 30026 id = 235 }
      name     = "15o/33o Stormo Aerosiluranti"
      strength = 50
      type     = tactical_bomber
      model    = 0
    }
  }
  # ###########################################
  airunit =
  { location = 924
    base     = 924
    id       = { type = 30026 id = 236 }
    name     = "Aeronautica Libia Est"
    division =
    { id       = { type = 30026 id = 237 }
      name     = "33a Divisione Caccia"
      strength = 100
      type     = interceptor
      model    = 0
    }
    division =
    { id       = { type = 30026 id = 238 }
      name     = "13a Divisione Bombardieri 'Pegaso'"
      strength = 100
      type     = tactical_bomber
      model    = 0
    }
  }
  division_development =
  { name  = "RM Andrea Doria"
    type  = battleship
    model = 2
    cost  = 8
    id    = { type = 30026 id = 239 }
    date  = { year = 1939 month = january day = 19 } #refit
  }
  division_development =
  { name  = "RM Caio Duilio"
    type  = battleship
    model = 2
    cost  = 8
    id    = { type = 30026 id = 240 }
    date  = { year = 1939 month = january day = 19 } #refit
  }
  division_development =
  { name  = "RM Littorio"
    type  = battleship
    model = 3
    cost  = 10
    id    = { type = 30026 id = 241 }
    date  = { year = 1939 month = april day = 11 } #70% ready
  }
  division_development =
  { name  = "RM Vittorio Veneto"
    type  = battleship
    model = 3
    cost  = 10
    id    = { type = 30026 id = 242 }
    date  = { year = 1939 month = april day = 13 } #70% ready
  }
}
