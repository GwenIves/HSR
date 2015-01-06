
##############################
# Country definition for ITA #
##############################

province =
{ id         = 368
  landfort   = 5
  ic         = 6
  anti_air   = 3
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # Genoa
province =
{ id         = 369
  anti_air   = 3
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # La Spezia
province =
{ id       = 370
  air_base = { size = 4 current_size = 4 }
  anti_air = 3
}            # Milan
province =
{ id         = 378
  anti_air   = 2
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # Venice
province = { id = 379 ic = 1 } # Ferrara
province =
{ id         = 390
  oilpool    = 100
  supplypool = 500
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 4 current_size = 4 }
}              # Tirana
province =
{ id         = 399
  air_base   = { size = 4 current_size = 4 }
  oilpool    = 100
  supplypool = 300
}              # Rhodes
province = { id = 512 anti_air = 1 } # Bologna
province = { id = 513 ic = 2 anti_air = 1 } # Florence
province =
{ id       = 515
  anti_air = 1
  air_base = { size = 10 current_size = 10 }
}            # Rome
province = { id = 516 ic = 3 } # Perugia
province =
{ id       = 521
  air_base = { size = 4 current_size = 4 }
}            # Naples
province =
{ id         = 523
  ic         = 1
  anti_air   = 1
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # Taranto
province =
{ id         = 525
  anti_air   = 2
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # Palermo
province =
{ id       = 531
  landfort = 5
  ic       = 3
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}            # Turin
province =
{ id         = 534
  anti_air   = 1
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 4 current_size = 4 }
  oilpool    = 100
  supplypool = 300
}              # Sardinia
province =
{ id         = 919
  anti_air   = 2
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
  landfort   = 3
}              # Tobruk
province =
{ id         = 924
  anti_air   = 1
  naval_base = { size = 5 current_size = 5 }
  air_base   = { size = 4 current_size = 4 }
}              # Bengazi
province =
{ id         = 932
  anti_air   = 1
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
  oilpool    = 100
  supplypool = 500
}              # Tripoli
province =
{ id         = 1033
  anti_air   = 1
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 4 current_size = 4 }
  oilpool    = 100
  supplypool = 300
}              # Massaua
province =
{ id         = 1038
  anti_air   = 2
  supplypool = 500
  oilpool    = 500
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 4 current_size = 4 }
}              # Assab
province = { id = 1056 oilpool = 100 supplypool = 300 } # Mogadishu

#####################
# Country main data #
#####################

country =
{ tag                    = ITA
  manpower               = 460
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 1000
  supplies               = 2000
  money                  = 100
  capital                = 515
  belligerence           = 10
  transports             = 280
  escorts                = 35
  SpyInfo                = { country = "ITA" NumberOfSpies = 10 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 3
    freedom           = 4
    free_market       = 7
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 6
  }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 8 }
  #SpyInfo                = { country = "FRA" NumberOfSpies = 10 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 5 }
  #SpyInfo                = { country = "CZE" NumberOfSpies = 5 }
  #SpyInfo                = { country = "AUS" NumberOfSpies = 8 }
  #SpyInfo                = { country = "SPR" NumberOfSpies = 8 }
  #SpyInfo                = { country = "POL" NumberOfSpies = 5 }
  #SpyInfo                = { country = "SWE" NumberOfSpies = 4 }
  #SpyInfo                = { country = "NOR" NumberOfSpies = 4 }
  #SpyInfo                = { country = "FIN" NumberOfSpies = 4 }
  #SpyInfo                = { country = "YUG" NumberOfSpies = 10 }
  #SpyInfo                = { country = "HUN" NumberOfSpies = 5 }
  #SpyInfo                = { country = "BUL" NumberOfSpies = 5 }
  #SpyInfo                = { country = "BEL" NumberOfSpies = 4 }
  #SpyInfo                = { country = "DEN" NumberOfSpies = 4 }
  #SpyInfo                = { country = "HOL" NumberOfSpies = 4 }
  #SpyInfo                = { country = "ARG" NumberOfSpies = 8 }
  #SpyInfo                = { country = "USA" NumberOfSpies = 8 }
  #SpyInfo                = { country = "ALB" NumberOfSpies = 5 }
  #SpyInfo                = { country = "GRE" NumberOfSpies = 4 }
  #SpyInfo                = { country = "JAP" NumberOfSpies = 4 }
  #SpyInfo                = { country = "ROM" NumberOfSpies = 4 }
  #SpyInfo                = { country = "TUR" NumberOfSpies = 10 }
  #SpyInfo                = { country = "POR" NumberOfSpies = 4 }
  #SpyInfo                = { country = "GER" NumberOfSpies = 8 }
  nationalprovinces      = { 525 526 524 523 522 521 520 519 518 517 516 515 513 514 512 379 369 368 531 370 371 378 534 381 384 387 388 389 }
  ownedprovinces         = { 525  526  524  523  522  521  520  519  518  517  516  515  513  514  512  379  369  368  531  370  371  378  534  398
			     399  927  933  932  930  929  925  924  923  922  921  920  919  916  917  918  926  928  931  1017 1018 1016 1015 1033
			     1039 1038 1034 1055 1056 1058 390  391  1044 1048 1049 1042 1043 1050 1045 1046 1047 1053 1052 1051 1054
			   }
  controlledprovinces    = { 525  526  524  523  522  521  520  519  518  517  516  515  513  514  512  379  369  368  531  370  371  378  534  398
			     399  927  933  932  930  929  925  924  923  922  921  920  919  916  917  918  926  928  931  1017 1018 1016 1015 1033
			     1039 1038 1034 1055 1056 1058 390  391  1044 1048 1049 1042 1043 1050 1045 1046 1047 1053 1052 1051 1054
			   }
  # ITA 1939 techs
  # ######################
  techapps               = { 4170  4010  4020  4030  4050  4120  4130  4190  4250  4260  2150  2160  2010  2020  2040  2030  2290  2300  2310  2320
			     2330  2400  2450  2460  2510  1010  1020  1190  1200  1210  1220  1030  1230  1110  1120  5010  5020  5050  5080  5090
			     5100  5190  5200  5310  5320  5470  5480  9010  9020  9030  9040  9060  9140  6010  6030  6110  8010  8020  8030  8040
			     8050  8070  8120  3010  3020  3030  3070  3080  3090  3100  3130  3140  3150  3190  3200  3250  3260  3270  3280  3400
			     3410  3420  3430  14000 14010
			   }
  # Illyrian Coast
  diplomacy =
  { relation = { tag = AFG value = 50 }
    relation = { tag = ARG value = 30 }
    relation = { tag = AST value = -100 }
    relation = { tag = BEL value = -5 }
    relation = { tag = BHU value = -100 }
    relation = { tag = BUL value = 150 }
    relation = { tag = CAN value = -100 }
    relation = { tag = CHL value = 30 }
    relation = { tag = SLO value = 120 }
    relation = { tag = ENG value = -100 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = -100 }
    relation = { tag = GER value = 150 }
    relation = { tag = GRE value = -100 }
    relation = { tag = HOL value = -20 }
    relation = { tag = HUN value = 125 }
    relation = { tag = IRQ value = 25 }
    relation = { tag = NEP value = -100 }
    relation = { tag = NZL value = -100 }
    relation = { tag = OMN value = 50 }
    relation = { tag = POR value = 65 }
    relation = { tag = ROM value = 50 }
    relation = { tag = SAF value = -100 }
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
  armamentminister       = { type = 9 id = 3066 }
  ministerofsecurity     = { type = 9 id = 3005 }
  ministerofintelligence = { type = 9 id = 3109 }
  chiefofstaff           = { type = 9 id = 3124 }
  chiefofarmy            = { type = 9 id = 3139 }
  chiefofnavy            = { type = 9 id = 3009 }
  chiefofair             = { type = 9 id = 3160 }
  # #########################
  # ########################
  landunit =
  { location = 531 # Torino
    name     = "II Corpo, 1a Armata"
    id       = { type = 30026 id = 1 }
    division =
    { id       = { type = 30026 id = 5 }
      name     = "4a Divisione 'Livorno'"
      type     = infantry
      model    = 1
      strength = 70
    }
    division =
    { id       = { type = 30026 id = 33 }
      name     = "33a Divisione 'Acqui'"
      type     = infantry
      model    = 1
      strength = 56
    }
    division =
    { id       = { type = 30026 id = 34 }
      name     = "36a Divisione 'Forlì'"
      type     = infantry
      model    = 1
      strength = 42
    }
    division =
    { id       = { type = 30026 id = 66 }
      name     = "4a Divisione Alpina 'Cuneense'"
      type     = bergsjaeger
      strength = 56
    }
  }
  landunit =
  { location = 368 # Genova
    name     = "III Corpo, 1a Armata"
    id       = { type = 30026 id = 100 }
    division =
    { id       = { type = 30026 id = 4 }
      name     = "3a Divisione 'Ravenna'"
      type     = infantry
      model    = 1
      strength = 56
    }
    division =
    { id       = { type = 30026 id = 7 }
      name     = "6a Divisione 'Cuneo'"
      type     = infantry
      model    = 1
      strength = 63
    }
  }
  landunit =
  { location = 368 # Genova
    name     = "XV Corpo, 1a Armata"
    id       = { type = 30026 id = 101 }
    division =
    { id       = { type = 30026 id = 6 }
      name     = "5a Divisione 'Cosseria'"
      type     = infantry
      model    = 1
      strength = 63
    }
    division =
    { id       = { type = 30026 id = 35 }
      name     = "37a Divisione 'Modena'"
      type     = infantry
      model    = 1
      strength = 63
    }
    division =
    { id            = { type = 30026 id = 38 }
      name          = "44a Divisione 'Cremona'"
      type          = infantry
      model         = 1
      extra         = anti_tank
      brigade_model = 0
      strength      = 56
    }
  }
  landunit =
  { location = 371 # Trento
    name     = "Riserva, 1a Armata"
    id       = { type = 30026 id = 102 }
    division =
    { id       = { type = 30026 id = 67 }
      name     = "5a Divisione Alpina 'Pusteria'"
      type     = bergsjaeger
      strength = 49
    }
  }
  landunit =
  { location = 371 # Trento
    name     = "Corpo d'Armata Alpino, 4a Armata"
    id       = { type = 30026 id = 103 }
    division =
    { id       = { type = 30026 id = 63 }
      name     = "1a Divisione Alpina 'Taurinense'"
      type     = bergsjaeger
      strength = 49
    }
    division =
    { id       = { type = 30026 id = 64 }
      name     = "2a Divisione Alpina 'Tridentina'"
      type     = bergsjaeger
      strength = 49
    }
  }
  landunit =
  { location = 531 # Torino
    name     = "I Corpo, 4a Armata"
    id       = { type = 30026 id = 104 }
    division =
    { id       = { type = 30026 id = 2 }
      name     = "1a Divisione 'Superga'"
      type     = infantry
      model    = 1
      strength = 42
    }
    division =
    { id       = { type = 30026 id = 24 }
      name     = "24a Divisione 'Pinerolo'"
      type     = infantry
      model    = 1
      strength = 35
    }
    division =
    { id       = { type = 30026 id = 51 }
      name     = "59a Divisione 'Cagliari'"
      type     = infantry
      model    = 1
      strength = 56
    }
  }
  landunit =
  { location = 531 # Torino
    name     = "IV Corpo, 4a Armata"
    id       = { type = 30026 id = 105 }
    division =
    { id       = { type = 30026 id = 3 }
      name     = "2a Divisione 'Sforzesca'"
      type     = infantry
      model    = 1
      strength = 35
    }
    division =
    { id            = { type = 30026 id = 26 }
      name          = "26a Divisione 'Assietta'"
      type          = infantry
      model         = 1
      extra         = artillery
      brigade_model = 1
      strength      = 35
    }
  }
  landunit =
  { location = 378 # Venezia
    name     = "V Corpo, 2a Armata"
    id       = { type = 30026 id = 106 }
    division =
    { id       = { type = 30026 id = 12 }
      name     = "12a Divisione 'Sassari'"
      type     = infantry
      model    = 1
      strength = 42
    }
    division =
    { id       = { type = 30026 id = 15 }
      name     = "15a Divisione 'Bergamo'"
      type     = infantry
      model    = 1
      strength = 42
    }
    division =
    { id       = { type = 30026 id = 49 }
      name     = "57a Divisione 'Lombardia'"
      type     = infantry
      model    = 1
      strength = 35
    }
  }
  landunit =
  { location = 378 # Venezia
    name     = "XI Corpo, 2a Armata"
    id       = { type = 30026 id = 107 }
    division =
    { id       = { type = 30026 id = 13 }
      name     = "13a Divisione 'Re'"
      type     = infantry
      model    = 1
      strength = 42
    }
    division =
    { id       = { type = 30026 id = 14 }
      name     = "14a Divisione 'Isonzo'"
      type     = infantry
      model    = 1
      strength = 35
    }
  }
  landunit =
  { location = 378 # Venezia
    name     = "Corpo d'Armata Celere, 6a Armata"
    id       = { type = 30026 id = 108 }
    division =
    { id       = { type = 30026 id = 68 }
      name     = "1a Divisione Celere 'Eugenio di Savoia'"
      type     = cavalry
      model    = 2
      strength = 49
    }
    division =
    { id       = { type = 30026 id = 69 }
      name     = "2a Divisione Celere 'Emanuele Filiberto'"
      type     = cavalry
      model    = 2
      strength = 49
    }
    division =
    { id            = { type = 30026 id = 70 }
      name          = "3a Divisione Celere 'Amedeo Duca d'Aosta'"
      type          = cavalry
      model         = 2
      extra         = artillery
      brigade_model = 1
      strength      = 49
    }
  }
  landunit =
  { location = 378 # Venezia
    name     = "Corpo d'Armata Corazzato, 6a Armata"
    id       = { type = 30026 id = 109 }
    division =
    { id       = { type = 30026 id = 61 }
      name     = "101a Divisione 'Trieste'"
      type     = motorized
      extra    = armored_car
      strength = 56
    }
    division =
    { id       = { type = 30026 id = 62 }
      name     = "102a Divisione 'Trento'"
      type     = motorized
      strength = 56
    }
    division =
    { id       = { type = 30026 id = 59 }
      name     = "132a Divisione 'Ariete'"
      type     = light_armor
      model    = 0
      extra    = armored_car
      strength = 56
    }
  }
  landunit =
  { location = 378 # Venezia
    name     = "Corpo d'Armata Autotrasportabile, 6a Armata"
    id       = { type = 30026 id = 110 }
    division =
    { id       = { type = 30026 id = 9 }
      name     = "9a Divisione 'Pasubio'"
      type     = cavalry
      model    = 3
      strength = 49
    }
    division =
    { id       = { type = 30026 id = 10 }
      name     = "10a Divisione 'Piave'"
      type     = cavalry
      model    = 3
      strength = 42
    }
    division =
    { id       = { type = 30026 id = 44 }
      name     = "52a Divisione 'Torino'"
      type     = cavalry
      model    = 3
      extra    = armored_car
      strength = 42
    }
  }
  landunit =
  { location = 371 # Trento
    name     = "XIV Corpo, 8a Armata"
    id       = { type = 30026 id = 111 }
    division =
    { id       = { type = 30026 id = 32 }
      name     = "32a Divisione 'Marche'"
      type     = infantry
      model    = 1
      strength = 49
    }
    division =
    { id       = { type = 30026 id = 36 }
      name     = "38a Divisione 'Puglie'"
      type     = infantry
      model    = 1
      strength = 42
    }
  }
  landunit =
  { location = 514 # Rimini
    name     = "VI Corpo, 8a Armata"
    id       = { type = 30026 id = 112 }
    division =
    { id       = { type = 30026 id = 18 }
      name     = "18a Divisione 'Messina'"
      type     = infantry
      model    = 1
      strength = 35
    }
    division =
    { id       = { type = 30026 id = 41 }
      name     = "49a Divisione 'Parma'"
      type     = infantry
      model    = 1
      strength = 49
    }
    division =
    { id       = { type = 30026 id = 48 }
      name     = "56a Divisione 'Casale'"
      type     = infantry
      model    = 1
      strength = 49
    }
  }
  landunit =
  { location = 525 # Messina
    name     = "XII Corpo, Gruppo d'Armate Sud"
    id       = { type = 30026 id = 113 }
    division =
    { id       = { type = 30026 id = 28 }
      name     = "28a Divisione 'Aosta'"
      type     = infantry
      model    = 1
      strength = 49
    }
    division =
    { id       = { type = 30026 id = 46 }
      name     = "54a Divisione 'Napoli'"
      type     = infantry
      model    = 1
      strength = 70
    }
  }
  landunit =
  { location = 534 # Sardegna
    name     = "XIII Corpo, Gruppo d'Armate Sud"
    id       = { type = 30026 id = 114 }
    division =
    { id       = { type = 30026 id = 30 }
      name     = "30a Divisione 'Sabauda'"
      type     = infantry
      model    = 1
      strength = 42
    }
    division =
    { id       = { type = 30026 id = 31 }
      name     = "31a Divisione 'Calabria'"
      type     = infantry
      model    = 1
      strength = 42
    }
  }
  landunit =
  { location = 390 # Tirana
    name     = "Comando Superiore Truppe d'Albania"
    id       = { type = 30026 id = 115 }
    division =
    { id       = { type = 30026 id = 19 }
      name     = "19a Divisione 'Venezia'"
      type     = infantry
      model    = 1
      strength = 70
    }
    division =
    { id       = { type = 30026 id = 23 }
      name     = "23a Divisione 'Ferrara'"
      type     = infantry
      model    = 1
      strength = 70
    }
    division =
    { id       = { type = 30026 id = 45 }
      name     = "53a Divisione 'Arezzo'"
      type     = infantry
      model    = 1
      strength = 70
    }
    division =
    { id       = { type = 30026 id = 65 }
      name     = "3a Divisione Alpina 'Julia'"
      type     = bergsjaeger
      strength = 63
    }
    division =
    { id       = { type = 30026 id = 58 }
      name     = "131a Divisione 'Centauro'"
      type     = light_armor
      model    = 0
      extra    = armored_car
      strength = 63
    }
  }
  landunit =
  { location = 524 # Cosenza
    name     = "IX Corpo, 3a Armata"
    id       = { type = 30026 id = 116 }
    division =
    { id       = { type = 30026 id = 29 }
      name     = "29a Divisione 'Piemonte'"
      type     = infantry
      model    = 1
      strength = 35
    }
    division =
    { id       = { type = 30026 id = 39 }
      name     = "47a Divisione 'Bari'"
      type     = infantry
      model    = 1
      strength = 56
    }
    division =
    { id       = { type = 30026 id = 40 }
      name     = "48a Divisione 'Taro'"
      type     = infantry
      model    = 1
      strength = 49
    }
  }
  landunit =
  { location = 513 # Firenze
    name     = "VII Corpo, 7a Armata"
    id       = { type = 30026 id = 117 }
    division =
    { id       = { type = 30026 id = 20 }
      name     = "20a Divisione 'Friuli'"
      type     = infantry
      model    = 1
      strength = 56
    }
    division =
    { id       = { type = 30026 id = 37 }
      name     = "41a Divisione 'Firenze'"
      type     = infantry
      model    = 1
      strength = 49
    }
  }
  landunit =
  { location = 515 # Roma
    name     = "VIII Corpo, 7a Armata"
    id       = { type = 30026 id = 118 }
    division =
    { id       = { type = 30026 id = 21 }
      name     = "21a Divisione 'Granatieri di Sardegna'"
      type     = infantry
      model    = 1
      strength = 56
    }
    division =
    { id            = { type = 30026 id = 43 }
      name          = "51a Divisione 'Siena'"
      type          = infantry
      model         = 1
      extra         = artillery
      brigade_model = 1
      strength      = 56
    }
  }
  landunit =
  { location = 399 # Rodi
    name     = "FF.AA. Isole Italiane dell'Egeo"
    id       = { type = 30026 id = 119 }
    division =
    { id       = { type = 30026 id = 42 }
      name     = "50a Divisione 'Regina'"
      type     = infantry
      model    = 1
      strength = 70
    }
  }
  landunit =
  { location = 932 # Tripoli
    name     = "X Corpo, 5a Armata"
    id       = { type = 30026 id = 120 }
    division =
    { id       = { type = 30026 id = 25 }
      name     = "25a Divisione 'Bologna'"
      type     = infantry
      model    = 1
      strength = 70
    }
    division =
    { id       = { type = 30026 id = 47 }
      name     = "55a Divisione 'Savona'"
      type     = infantry
      model    = 1
      strength = 70
    }
  }
  landunit =
  { location = 919 # Tobruk
    name     = "XX Corpo, 5a Armata"
    id       = { type = 30026 id = 121 }
    division =
    { id       = { type = 30026 id = 17 }
      name     = "17a Divisione 'Pavia'"
      type     = infantry
      model    = 1
      strength = 70
    }
    division =
    { id       = { type = 30026 id = 27 }
      name     = "27a Divisione 'Brescia'"
      type     = infantry
      model    = 1
      strength = 35
    }
    division =
    { id       = { type = 30026 id = 53 }
      name     = "61a Divisione 'Sirte'"
      type     = infantry
      model    = 1
      strength = 56
    }
  }
  landunit =
  { location = 932 # Tripoli
    name     = "XXIII Corpo, 5a Armata"
    id       = { type = 30026 id = 122 }
    division =
    { id         = { type = 30026 id = 72 }
      name       = "1a divisione CC.NN. '23 Marzo'"
      type       = infantry
      model      = 1
      strength   = 70
      experience = 30
    }
    division =
    { id         = { type = 30026 id = 73 }
      name       = "2a divisione CC.NN. '28 Ottobre'"
      type       = infantry
      model      = 1
      strength   = 70
      experience = 30
    }
  }
  landunit =
  { location = 919 # Tobruk
    name     = "XXI Corpo, 10a Armata"
    id       = { type = 30026 id = 123 }
    division =
    { id       = { type = 30026 id = 54 }
      name     = "62a Divisione 'Marmarica'"
      type     = infantry
      model    = 1
      strength = 56
    }
    division =
    { id       = { type = 30026 id = 55 }
      name     = "63a Divisione 'Cirene'"
      type     = infantry
      model    = 1
      strength = 56
    }
  }
  landunit =
  { location = 924 # Bengazi
    name     = "XXII Corpo, 10a Armata"
    id       = { type = 30026 id = 124 }
    division =
    { id       = { type = 30026 id = 56 }
      name     = "64a Divisione 'Catanzaro'"
      type     = infantry
      model    = 1
      strength = 56
    }
    division =
    { id         = { type = 30026 id = 75 }
      name       = "4a divisione CC.NN. '3 Gennaio'"
      type       = infantry
      model      = 1
      strength   = 70
      experience = 30
    }
  }
  landunit =
  { location = 919 # Tobruk
    name     = "Scacchiere Sahariano, 10a Armata"
    id       = { type = 30026 id = 125 }
    division =
    { id         = { type = 30026 id = 74 }
      name       = "3a divisione CC.NN. '21 Aprile'"
      type       = infantry
      model      = 1
      strength   = 21
      experience = 30
    }
    division =
    { id       = { type = 30026 id = 76 }
      name     = "1a Divisione Libica"
      type     = militia
      strength = 10
    }
  }
  landunit =
  { location = 1033 # Asmara
    name     = "Forze Armate dell'A.O.I."
    id       = { type = 30026 id = 126 }
    division =
    { id       = { type = 30026 id = 57 }
      name     = "65a Divisione 'Granatieri di Savoia'"
      type     = infantry
      model    = 1
      strength = 63
    }
    division =
    { id       = { type = 30026 id = 71 }
      name     = "Divisione 'Africa'"
      type     = militia
      strength = 10
    }
  }
  landunit =
  { location = 1039 # Massaua
    name     = "Scacchiere Nord FF.AA. dell'A.O.I."
    id       = { type = 30026 id = 127 }
    division =
    { id       = { type = 30026 id = 77 }
      name     = "1a Divisione Eritrea"
      type     = militia
      strength = 49
    }
    division =
    { id       = { type = 30026 id = 78 }
      name     = "2a Divisione Eritrea"
      type     = militia
      strength = 42
    }
    division =
    { id       = { type = 30026 id = 79 }
      name     = "4a Divisione Eritrea"
      type     = militia
      strength = 42
    }
  }
  landunit =
  { location = 1053 # Magalo
    name     = "Scacchiere Sud FF.AA. dell'A.O.I."
    id       = { type = 30026 id = 128 }
    division =
    { id       = { type = 30026 id = 82 }
      name     = "Bande Armate Sud"
      type     = militia
      strength = 49
    }
  }
  landunit =
  { location = 1047 # Macalle
    name     = "Scacchiere Est FF.AA. dell'A.O.I."
    id       = { type = 30026 id = 129 }
    division =
    { id       = { type = 30026 id = 83 }
      name     = "Bande Armate Est"
      type     = militia
      strength = 49
    }
  }
  landunit =
  { location = 1056 # Mogadiscio
    name     = "Scacchiere Giuba FF.AA. dell'A.O.I."
    id       = { type = 30026 id = 130 }
    division =
    { id       = { type = 30026 id = 80 }
      name     = "101a Divisione Somala"
      type     = militia
      strength = 28
    }
    division =
    { id       = { type = 30026 id = 81 }
      name     = "102a Divisione Somala"
      type     = militia
      strength = 21
    }
  }
  landunit =
  { location = 370 # Milano
    name     = "In Mobilitazione"
    id       = { type = 30026 id = 131 }
    division =
    { id       = { type = 30026 id = 8 }
      name     = "7a Divisione 'Lupi di Toscana'"
      type     = infantry
      model    = 1
      strength = 10
    }
    division =
    { id       = { type = 30026 id = 11 }
      name     = "11a Divisione 'Brennero'"
      type     = infantry
      model    = 1
      strength = 10
    }
    division =
    { id       = { type = 30026 id = 16 }
      name     = "16a Divisione 'Pistoia'"
      type     = infantry
      model    = 1
      strength = 10
    }
    division =
    { id       = { type = 30026 id = 22 }
      name     = "22a Divisione 'Cacciatori delle Alpi'"
      type     = infantry
      model    = 1
      strength = 10
    }
    division =
    { id            = { type = 30026 id = 50 }
      name          = "58a Divisione 'Legnano'"
      type          = infantry
      model         = 1
      extra         = artillery
      brigade_model = 1
      strength      = 10
    }
    division =
    { id       = { type = 30026 id = 52 }
      name     = "60a Divisione 'Sabratha'"
      type     = infantry
      model    = 1
      strength = 10
    }
    division =
    { id       = { type = 30026 id = 60 }
      name     = "133a Divisione 'Littorio'"
      type     = light_armor
      model    = 1
      extra    = armored_car
      strength = 10
    }
  }
  # ###########################
  # ###########################
  navalunit =
  { id       = { type = 30026 id = 212 }
    name     = "Regia Marina"
    location = 523
    base     = 523
    division =
    { id    = { type = 30026 id = 400 }
      name  = "RM San Giorgio"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 30026 id = 401 }
      name  = "RM Taranto"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 30026 id = 402 }
      name  = "RM Bari"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 30026 id = 213 }
      name  = "2a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 30026 id = 322 }
      name  = "3a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 30026 id = 323 }
      name  = "4a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 30026 id = 324 }
      name  = "5a Flottiglia Torpediniere"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 30026 id = 214 }
      name  = "6a Flottiglia Torpediniere"
      type  = destroyer
      model = 1
    }
  }
  # ##################################
  navalunit =
  { id       = { type = 30026 id = 215 }
    name     = "1a Squadra"
    location = 523
    base     = 523
    division =
    { id    = { type = 30026 id = 216 }
      name  = "RM Giulio Cesare"
      type  = battleship
      model = 1
    }
    division =
    { id    = { type = 30026 id = 320 }
      name  = "RM Andrea Doria"
      type  = battleship
      model = 0
    }
    division =
    { id    = { type = 30026 id = 321 }
      name  = "RM Caio Duilio"
      type  = battleship
      model = 0
    }
  }
  navalunit =
  { id       = { type = 30026 id = 217 }
    name     = "1a Divisione/1a Squadra"
    location = 523
    base     = 523
    division =
    { id    = { type = 30026 id = 218 }
      name  = "RM Zara"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 30026 id = 219 }
      name  = "RM Gorizia"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 30026 id = 220 }
      name  = "RM Fiume"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 30026 id = 221 }
      name  = "9a Flottiglia Torpediniere"
      type  = destroyer
      model = 1
    }
  }
  navalunit =
  { id       = { type = 30026 id = 222 }
    name     = "4a Divisione/1a Squadra"
    location = 378
    base     = 378
    division =
    { id       = { type = 30026 id = 223 }
      name     = "RM Alberico da Barbiano"
      type     = light_cruiser
      model    = 1
      maxspeed = 34
    }
    division =
    { id    = { type = 30026 id = 224 }
      name  = "RM Luigi Cadorna"
      type  = light_cruiser
      model = 1
    }
    division =
    { id       = { type = 30026 id = 225 }
      name     = "RM Alberto da Giussano"
      type     = light_cruiser
      model    = 1
      maxspeed = 34
    }
    division =
    { id    = { type = 30026 id = 226 }
      name  = "RM Armando Diaz"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 30026 id = 227 }
      name  = "12a Flottiglia Torpediniere"
      type  = destroyer
      model = 2
    }
  }
  navalunit =
  { id       = { type = 30026 id = 228 }
    name     = "5a Divisione/1a Squadra"
    location = 378
    base     = 378
    division =
    { id    = { type = 30026 id = 229 }
      name  = "RM Conte di Cavour"
      type  = battleship
      model = 1
    }
    division =
    { id    = { type = 30026 id = 230 }
      name  = "7a Flottiglia Torpediniere"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 30026 id = 231 }
      name  = "8a Flottiglia Torpediniere"
      type  = destroyer
      model = 2
    }
  }
  navalunit =
  { id       = { type = 30026 id = 232 }
    name     = "8a Divisione/1a Squadra"
    location = 378
    base     = 378
    division =
    { id       = { type = 30026 id = 233 }
      name     = "RM Duca degli Abruzzi"
      type     = light_cruiser
      model    = 3
      maxspeed = 35
    }
    division =
    { id       = { type = 30026 id = 234 }
      name     = "RM Giuseppe Garibaldi"
      type     = light_cruiser
      model    = 3
      maxspeed = 35
    }
    division =
    { id    = { type = 30026 id = 235 }
      name  = "16a Flottiglia Torpediniere"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 30026 id = 307 }
      name  = "Flottiglia Aspromonte"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 30026 id = 236 }
    name     = "9a Divisione/1a Squadra"
    location = 378
    base     = 378
    division =
    { id    = { type = 30026 id = 239 }
      name  = "14a Flottiglia Torpediniere"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 30026 id = 240 }
      name  = "15a Flottiglia Torpediniere"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 30026 id = 308 }
      name  = "Flottiglia Maria"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 30026 id = 714 }
      name  = "6o Squadrone Trasporti"
      type  = transport
      model = 0
    }
  }
  # ###################################
  navalunit =
  { id       = { type = 30026 id = 241 }
    name     = "2a Squadra"
    location = 523
    base     = 523
    division =
    { id    = { type = 30026 id = 242 }
      name  = "RM Pola"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 30026 id = 715 }
      name  = "Flottiglia Sagittario"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 30026 id = 5556 }
      name  = "7a Squadrone Trasporti"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 30026 id = 243 }
    name     = "2a Divisione/2a Squadra"
    location = 523
    base     = 523
    division =
    { id       = { type = 30026 id = 244 }
      name     = "RM Giovanni dalle Bande Nere"
      type     = light_cruiser
      model    = 1
      maxspeed = 34
    }
    division =
    { id       = { type = 30026 id = 245 }
      name     = "RM Bartolomeo Colleoni"
      type     = light_cruiser
      model    = 1
      maxspeed = 34
    }
    division =
    { id    = { type = 30026 id = 246 }
      name  = "10a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 30026 id = 716 }
      name  = "Flottiglia Rina Corrado"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 30026 id = 247 }
    name     = "3a Divisione/2a Squadra"
    location = 523
    base     = 523
    division =
    { id    = { type = 30026 id = 248 }
      name  = "RM Trento"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 30026 id = 249 }
      name  = "RM Bolzano"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 30026 id = 250 }
      name  = "RM Trieste"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 30026 id = 251 }
      name  = "11a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 30026 id = 717 }
      name  = "Flottiglia Enrichetta"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 30026 id = 252 }
    name     = "7a Divisione/2a Squadra"
    location = 523
    base     = 523
    division =
    { id       = { type = 30026 id = 253 }
      name     = "RM Eugenio di Savoia"
      type     = light_cruiser
      model    = 2
      maxspeed = 34
    }
    division =
    { id       = { type = 30026 id = 254 }
      name     = "RM Duca d'Aosta"
      type     = light_cruiser
      model    = 2
      maxspeed = 34
    }
    division =
    { id       = { type = 30026 id = 255 }
      name     = "RM Muzio Attendolo"
      type     = light_cruiser
      model    = 2
      maxspeed = 34
    }
    division =
    { id       = { type = 30026 id = 256 }
      name     = "RM Raimondo Montecuccoli"
      type     = light_cruiser
      model    = 2
      maxspeed = 34
    }
    division =
    { id    = { type = 30026 id = 257 }
      name  = "13a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 30026 id = 718 }
      name  = "Flottiglia Tripoli"
      type  = transport
      model = 0
    }
  }
  # #####################################
  navalunit =
  { id       = { type = 30026 id = 258 }
    name     = "Flotta Sommergibili"
    location = 369
    base     = 369
    division =
    { id    = { type = 30026 id = 259 }
      name  = "4a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 30026 id = 260 }
      name  = "51a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 30026 id = 261 }
      name  = "52a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
  }
  navalunit =
  { id       = { type = 30026 id = 262 }
    name     = "1a Flottiglia Sommergibili"
    location = 369
    base     = 369
    division =
    { id    = { type = 30026 id = 263 }
      name  = "11a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 30026 id = 264 }
      name  = "12a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 30026 id = 265 }
      name  = "13a Flottiglia Sommergibili"
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 30026 id = 266 }
      name  = "14a Flottiglia Sommergibili"
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 30026 id = 269 }
      name  = "17a Flottiglia Sommergibili"
      type  = submarine
      model = 0
    }
  }
  navalunit =
  { id       = { type = 30026 id = 273 }
    name     = "3a Flottiglia Sommergibili"
    location = 369
    base     = 369
    division =
    { id    = { type = 30026 id = 274 }
      name  = "31a Flottiglia Sommergibili"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 30026 id = 278 }
      name  = "37a Flottiglia Sommergibili"
      type  = submarine
      model = 2
    }
  }
  navalunit =
  { id       = { type = 30026 id = 279 }
    name     = "4a Flottiglia Sommergibili"
    location = 369
    base     = 369
    division =
    { id    = { type = 30026 id = 280 }
      name  = "40a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 30026 id = 281 }
      name  = "41a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 30026 id = 282 }
      name  = "42a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 30026 id = 283 }
      name  = "43a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 30026 id = 284 }
      name  = "44a Flottiglia Sommergibili"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 30026 id = 289 }
      name  = "49a Flottiglia Sommergibili"
      type  = submarine
      model = 3
    }
  }
  navalunit =
  { id       = { type = 30026 id = 290 }
    name     = "7a Flottiglia Sommergibili"
    location = 369
    base     = 369
    division =
    { id    = { type = 30026 id = 291 }
      name  = "71a Flottiglia Sommergibili"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 30026 id = 292 }
      name  = "72a Flottiglia Sommergibili"
      type  = submarine
      model = 2
    }
  }
  # #####################################################
  navalunit =
  { id       = { type = 30026 id = 293 }
    name     = "Comando Navale Libico"
    location = 932
    base     = 932
    division =
    { id    = { type = 30026 id = 294 }
      name  = "1a Flottiglia Torpediniere"
      type  = destroyer
      model = 1
    }
  }
  navalunit =
  { id       = { type = 30026 id = 295 }
    name     = "8a Flottiglia Squadron Sommergibili"
    location = 932
    base     = 932
    division =
    { id    = { type = 30026 id = 296 }
      name  = "61a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 30026 id = 297 }
      name  = "62a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
  }
  # ######################################################
  navalunit =
  { id       = { type = 30026 id = 298 }
    name     = "Comando Navale Mar Rosso"
    location = 1038
    base     = 1038
    division =
    { id    = { type = 30026 id = 299 }
      name  = "3a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 30026 id = 300 }
      name  = "5a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 30026 id = 719 }
      name  = "Flottiglia Giorgio Orsini"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 30026 id = 301 }
    name     = "8a Flottiglia Sommergibili"
    location = 1038
    base     = 1038
    division =
    { id    = { type = 30026 id = 302 }
      name  = "81a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 30026 id = 303 }
      name  = "82a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
  }
  # ###########################
  # ###########################
  airunit =
  { location = 531
    base     = 531
    id       = { type = 30026 id = 156 }
    name     = "1st Squadra Aerea"
    division =
    { id       = { type = 30026 id = 157 }
      name     = "9a Divisione Caccia"
      strength = 100
      type     = interceptor
      model    = 1
    }
  }
  airunit =
  { location = 919
    base     = 919
    id       = { type = 30026 id = 158 }
    name     = "4a Comando Bombardieri Tattici 'Drago'"
    division =
    { id       = { type = 30026 id = 159 }
      name     = "4a Divisione Bombardieri 'Drago'"
      strength = 100
      type     = tactical_bomber
      model    = 1
    }
  }
  airunit =
  { location = 531
    base     = 531
    id       = { type = 30026 id = 162 }
    name     = "6a Comando Bombardieri Tattici 'Falco'"
    division =
    { id       = { type = 30026 id = 163 }
      name     = "6a Divisione Bombardieri 'Falco'"
      strength = 100
      type     = tactical_bomber
      model    = 1
    }
    division =
    { id       = { type = 30026 id = 165 }
      name     = "16a Divisione Bombardieri"
      strength = 100
      type     = tactical_bomber
      model    = 0
    }
  }
  airunit =
  { location = 531
    base     = 531
    id       = { type = 30026 id = 166 }
    name     = "2a Comando Caccia 'Borea'"
    division =
    { id       = { type = 30026 id = 167 }
      name     = "2a Divisione Caccia 'Borea'"
      strength = 100
      type     = interceptor
      model    = 1
    }
    division =
    { id       = { type = 30026 id = 194 }
      name     = "3a Divisione Caccia"
      strength = 80
      type     = interceptor
      model    = 1
    }
  }
  # ###############################
  airunit =
  { location = 523
    base     = 523
    id       = { type = 30026 id = 169 }
    name     = "2nd Squadra Aerea"
    division =
    { id       = { type = 30026 id = 205 }
      name     = "14a Divisione Caccia 'Rex'"
      strength = 100
      type     = interceptor
      model    = 1
    }
  }
  airunit =
  { location = 523
    base     = 523
    id       = { type = 30026 id = 171 }
    name     = "3a Comando Aerosiluranti 'Centauro'"
    division =
    { id       = { type = 30026 id = 172 }
      name     = "3a Divisione Bombardieri 'Centauro'"
      strength = 100
      type     = naval_bomber
      model    = 0
    }
    division =
    { id       = { type = 30026 id = 174 }
      name     = "24a Divisione Bombardieri"
      strength = 50
      type     = naval_bomber
      model    = 0
    }
  }
  airunit =
  { location = 523
    base     = 523
    id       = { type = 30026 id = 178 }
    name     = "1o Comando Caccia 'Aquila'"
    division =
    { id       = { type = 30026 id = 179 }
      name     = "1a Divisione Caccia 'Aquila'"
      strength = 100
      type     = interceptor
      model    = 1
    }
  }
  # ##################################
  airunit =
  { location = 525
    base     = 525
    id       = { type = 30026 id = 180 }
    name     = "3rd Squadra Aerea"
    division =
    { id       = { type = 30026 id = 181 }
      name     = "7a Divisione Caccia"
      strength = 100
      type     = interceptor
      model    = 1
    }
  }
  airunit =
  { location = 525
    base     = 525
    id       = { type = 30026 id = 182 }
    name     = "5a Divisione Bombardieri 'Eolo'"
    division =
    { id       = { type = 30026 id = 183 }
      name     = "5a Divisione Bombardieri 'Eolo'"
      strength = 100
      type     = naval_bomber
      model    = 0
    }
  }
  airunit =
  { location = 525
    base     = 525
    id       = { type = 30026 id = 185 }
    name     = "8a Comando Caccia 'Astore'"
    division =
    { id       = { type = 30026 id = 200 }
      name     = "2a Divisione Caccia"
      strength = 100
      type     = interceptor
      model    = 1
    }
  }
  # #########################################
  airunit =
  { location = 378
    base     = 378
    id       = { type = 30026 id = 188 }
    name     = "4th Squadra Aerea"
    division =
    { id       = { type = 30026 id = 189 }
      name     = "35a Divisione Bombardieri"
      strength = 100
      type     = tactical_bomber
      model    = 1
    }
    division =
    { id       = { type = 30026 id = 191 }
      name     = "39a Divisione Trasporti"
      strength = 100
      type     = transport_plane
      model    = 0
    }
  }
  # ##############################################
  airunit =
  { location = 534
    base     = 534
    id       = { type = 30026 id = 192 }
    name     = "Aeronautica della Sardegna"
    division =
    { id       = { type = 30026 id = 168 }
      name     = "53a Divisione Caccia"
      strength = 100
      type     = interceptor
      model    = 1
    }
    division =
    { id       = { type = 30026 id = 195 }
      name     = "190a Divisione Assaulto"
      strength = 60
      type     = cas
      model    = 0
    }
    division =
    { id       = { type = 30026 id = 201 }
      name     = "50a Divisione Bombardieri"
      strength = 50
      type     = cas
      model    = 0
    }
  }
  # ##############################################
  airunit =
  { location = 390
    base     = 390
    id       = { type = 30026 id = 196 }
    name     = "Aeronautica Albania"
    division =
    { id       = { type = 30026 id = 198 }
      name     = "38a Divisione Bombardieri"
      strength = 100
      type     = tactical_bomber
      model    = 0
    }
  }
  # ################################################
  airunit =
  { location = 932
    base     = 932
    id       = { type = 30026 id = 199 }
    name     = "Aeronautica Libia Ovest"
    division =
    { id       = { type = 30026 id = 186 }
      name     = "8a Divisione Caccia 'Astore'"
      strength = 100
      type     = interceptor
      model    = 1
    }
    division =
    { id       = { type = 30026 id = 202 }
      name     = "15a/33a Stormo Aerosiluranti"
      strength = 50
      type     = naval_bomber
      model    = 0
    }
    division =
    { id       = { type = 30026 id = 207 }
      name     = "10a Divisione Bombardieri 'Marte'"
      strength = 50
      type     = naval_bomber
      model    = 0
    }
  }
  # ###########################################
  airunit =
  { location = 924
    base     = 924
    id       = { type = 30026 id = 204 }
    name     = "Aeronautica Libia Est"
    division =
    { id       = { type = 30026 id = 170 }
      name     = "33a Divisione Caccia"
      strength = 100
      type     = interceptor
      model    = 1
    }
    division =
    { id       = { type = 30026 id = 206 }
      name     = "13a Divisione Bombardieri 'Pegaso'"
      strength = 100
      type     = tactical_bomber
      model    = 1
    }
  }
  # #######################################################
  # Warships Under Construction#
  division_development =
  { name  = "RM Littorio"
    type  = battleship
    model = 3
    cost  = 9
    id    = { type = 30026 id = 500 }
    date  = { year = 1940 month = may day = 6 }
  }
  division_development =
  { name  = "RM Vittorio Veneto"
    type  = battleship
    model = 3
    cost  = 9
    id    = { type = 30026 id = 501 }
    date  = { year = 1940 month = april day = 28 }
  }
  division_development =
  { name  = "91a Flottiglia Sommergibili"
    type  = submarine
    model = 2
    cost  = 1.8
    id    = { type = 30026 id = 502 }
    date  = { year = 1939 month = november day = 1 }
  }
}
