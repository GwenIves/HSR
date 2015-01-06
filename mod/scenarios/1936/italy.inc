
##############################
# Country definition for ITA #
##############################

province =
{ id         = 368
  landfort   = 5
  anti_air   = 3
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # Genoa
province =
{ id         = 369
  anti_air   = 3
  naval_base = { size = 10 current_size = 10 }
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
province =
{ id       = 399
  air_base = { size = 4 current_size = 4 }
}            # Rhodes
province = { id = 512 anti_air = 1 } # Bologna
province = { id = 513 anti_air = 1 } # Florence
province =
{ id       = 515
  anti_air = 1
  air_base = { size = 10 current_size = 10 }
}            # Rome
province =
{ id       = 521
  air_base = { size = 4 current_size = 4 }
}            # Naples
province =
{ id         = 523
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
province = { id = 531 landfort = 5 anti_air = 3 } # Turin
province =
{ id         = 534
  anti_air   = 1
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 4 current_size = 4 }
  oilpool    = 100
  supplypool = 800
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
  supplypool = 300
}              # Tripoli
province =
{ id         = 1033
  anti_air   = 1
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 4 current_size = 4 }
  oilpool    = 100
  supplypool = 300
}              # Massaua
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
  oil                    = 500
  supplies               = 2000
  money                  = 50
  belligerence           = 0 # to avoid MP problems
  capital                = 515
  transports             = 400
  escorts                = 100
  # Illyrian Coast
  diplomacy =
  { relation = { tag = AFG value = 50 }
    relation =
    { tag        = ALB
      value      = 10
      guaranteed = { day = 17 month = march year = 1934 }
    }
    relation = { tag = ARG value = 30 }
    relation = { tag = AST value = 1 }
    relation =
    { tag        = AUS
      value      = 125
      guaranteed = { day = 17 month = march year = 1934 }
    }
    relation = { tag = BEL value = -5 }
    relation = { tag = BHU value = 1 }
    relation = { tag = BUL value = 150 }
    relation = { tag = CAN value = 1 }
    relation = { tag = CHL value = 30 }
    relation = { tag = CZE value = 15 }
    relation = { tag = ENG value = -50 }
    relation = { tag = ETH value = -200 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = -50 }
    relation = { tag = GER value = 50 }
    relation =
    { tag        = GRE
      value      = -35
      guaranteed = { day = 17 month = march year = 1934 }
    }
    relation = { tag = HOL value = -20 }
    relation =
    { tag        = HUN
      value      = 125
      guaranteed = { day = 17 month = march year = 1934 }
    }
    relation = { tag = IRE value = 20 }
    relation = { tag = IRQ value = 25 }
    relation = { tag = NEP value = 1 }
    relation = { tag = NZL value = 1 }
    relation = { tag = OMN value = 50 }
    relation = { tag = POR value = 65 }
    relation =
    { tag        = ROM
      value      = 50
      guaranteed = { day = 17 month = march year = 1934 }
    }
    relation = { tag = SAF value = 1 }
    relation = { tag = SAU value = -25 }
    relation =
    { tag        = SCH
      value      = 1
      guaranteed = { day = 16 month = may year = 1935 }
    }
    relation = { tag = SPR value = -50 }
    relation =
    { tag        = TUR
      value      = 1
      guaranteed = { day = 17 month = march year = 1934 }
    }
    relation = { tag = YEM value = 50 }
    relation = { tag = YUG value = 75 }
  }
  SpyInfo                = { country = "ITA" NumberOfSpies = 9 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 8 }
  #SpyInfo                = { country = "FRA" NumberOfSpies = 8 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 3 }
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
  #SpyInfo                = { country = "GER" NumberOfSpies = 6 }
  # Somaliland
  nationalprovinces      = { 525 526 524 523 522 521 520 519 518 517 516 515 513 514 512 379 369 368 531 370 371 378 534 381 384 387 388 389 }
  ownedprovinces         = { 525  526  524  523  522  521  520  519  518  517  516  515  513  514  512  379  369  368  531  370  371  378  534  398
			     399  927  933  932  930  929  925  924  923  922  921  920  919  916  917  918  926  928  931  1017 1018 1016 1015 1033
			     1039 1038 1034 1055 1056 1058
			   }
  # Somaliland
  controlledprovinces    = { 525  526  524  523  522  521  520  519  518  517  516  515  513  514  512  379  369  368  531  370  371  378  534  398
			     399  927  933  932  930  929  925  924  923  922  921  920  919  916  917  918  926  928  931  1017 1018 1016 1015 1033
			     1039 1038 1034 1055 1056 1058
			   }
  # ITA 1936 techs
  # ######################
  # Early fighter
  techapps               = { 6120 4010  4120  4130  4190  4250  2150  2010  2020  2030  2290  2300  2310  2450  1010  1020  1190  1200  1110  5010  5020
			     5080  5090  5190  5310  5320  5470  5480  9010  9020  9030  6010  6030  8010  8020  8030  8040  8050  8070  8120  3010
			     3020  3030  3070  3080  3090  3130  3140  3150  3190  3250  3260  3270  3280  3400  3410  3420  14000
			   }
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
  headofstate            = { type = 9 id = 3001 }
  headofgovernment       = { type = 9 id = 3002 }
  foreignminister        = { type = 9 id = 3003 }
  armamentminister       = { type = 9 id = 3076 }
  ministerofsecurity     = { type = 9 id = 3005 }
  ministerofintelligence = { type = 9 id = 3006 }
  chiefofstaff           = { type = 9 id = 3007 }
  chiefofarmy            = { type = 9 id = 3008 }
  chiefofnavy            = { type = 9 id = 3009 }
  chiefofair             = { type = 9 id = 3010 }
  landunit =
  { id       = { type = 23500 id = 1 }
    location = 531 # Turin
    name     = "1a Armata"
    division =
    { id            = { type = 23500 id = 3 }
      name          = "22a Divisione 'Cacciatori delle Alpi'"
      type          = infantry
      extra         = artillery
      brigade_model = 2
      strength      = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 4 }
    location = 531 # Turin
    name     = "II Corpo d'Armata"
    division =
    { id       = { type = 23500 id = 5 }
      name     = "4a Divisione 'Livorno'"
      type     = infantry
      strength = 70
      model    = 1
    }
    division =
    { id       = { type = 23500 id = 6 }
      name     = "25a Divisione 'Bologna'"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 7 }
      name     = "4a Divisione Alpina 'Cuneense'"
      type     = bergsjaeger
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 8 }
    location = 531 # Turin
    name     = "III Corpo d'Armata"
    division =
    { id       = { type = 23500 id = 9 }
      name     = "3a Divisione 'Ravenna'"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 10 }
      name     = "6a Divisione 'Cuneo'"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 11 }
    location = 378 # Venezia
    name     = "2a Armata"
    division =
    { id            = { type = 23500 id = 12 }
      name          = "13a Divisione 'Re'"
      type          = infantry
      extra         = artillery
      brigade_model = 2
      strength      = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 13 }
    location = 378 # Venezia
    name     = "V Corpo d'Armata"
    # Gen. R. Balocco#
    division =
    { id       = { type = 23500 id = 14 }
      name     = "12a Divisione 'Sassari'"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 15 }
      name     = "15a Divisione 'Bergamo'"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 16 }
    location = 378 # Venezia
    name     = "VIII Corpo d'Armata"
    # Gen. F Gambelli#
    division =
    { id       = { type = 23500 id = 17 }
      name     = "9a Divisione 'Pasubio'"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 18 }
      name     = "10a Divisione 'Piave'"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 19 }
    location = 378 # Venezia
    name     = "XI Corpo d'Armata"
    # Gen. C. Mercalli#
    division =
    { id       = { type = 23500 id = 20 }
      name     = "14a Divisione 'Isonzo'"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 21 }
      name     = "3a Divisione Alpina 'Julia'"
      type     = bergsjaeger
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 2 }
    location = 919
    name     = "Comando Superiore FF.AA. Africa SETT"
    division =
    { id       = { type = 23500 id = 22 }
      name     = "18a Divisione 'Messina'"
      type     = infantry
      model    = 1
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 23 }
    location = 378 # Venezia
    name     = "Corpo d'Armata Celere"
    # Gen. G. Messe#
    division =
    { id       = { type = 23500 id = 24 }
      name     = "1a Divisione 'Eugenio di Savoia'"
      type     = cavalry
      strength = 70
      model    = 1
    }
    division =
    { id       = { type = 23500 id = 25 }
      name     = "2a Divisione 'Emanuele Filiberto'"
      type     = cavalry
      strength = 70
      model    = 1
    }
    division =
    { id       = { type = 23500 id = 26 }
      name     = "3a Divisione 'Principe Amedeo'"
      type     = cavalry
      strength = 70
      model    = 1
      extra    = armored_car
    }
  }
  landunit =
  { id       = { type = 23500 id = 27 }
    location = 524 # Reggio di Calabria
    name     = "3a Armata"
    division =
    { id            = { type = 23500 id = 28 }
      name          = "16a Divisione 'Pistoia'"
      type          = infantry
      extra         = artillery
      brigade_model = 2
      strength      = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 30 }
    location = 524 # Reggio di Calabria
    name     = "VII Corpo d'Armata"
    # Gen. A. Agromini#
    division =
    { id       = { type = 23500 id = 31 }
      name     = "7a Divisione 'Lupi di Toscana'"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 32 }
      name     = "20a Divisione 'Friuli'"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 33 }
    location = 524 # Reggio di Calabria
    name     = "IX Corpo d'Armata"
    # Gen. C.Rossi#
    division =
    { id       = { type = 23500 id = 34 }
      name     = "17a Divisione 'Pavia'"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 35 }
      name     = "23a Divisione 'Ferrara'"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 36 }
    location = 525 # Palermo
    name     = "XII Corpo d'Armata"
    # Gen. A.Rossi#
    division =
    { id       = { type = 23500 id = 37 }
      name     = "28a Divisione 'Aosta'"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 38 }
    location = 525 # Palermo
    name     = "XIII Corpo d'Armata"
    division =
    { id       = { type = 23500 id = 39 }
      name     = "31a Divisione 'Calabria'"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 40 }
    location = 368 # Genoa
    name     = "4a Armata"
    # Gen. A Guzzoni#
    division =
    { id            = { type = 23500 id = 41 }
      name          = "11a Divisione 'Brennero'"
      type          = infantry
      extra         = artillery
      brigade_model = 2
      strength      = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 43 }
    location = 368 # Genoa
    name     = "I Corpo d'Armata"
    # Gen. C. Vecchiarelli#
    division =
    { id       = { type = 23500 id = 44 }
      name     = "1a Divisione 'Superga'"
      type     = infantry
      extra    = armored_car
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 45 }
    location = 368 # Genoa
    name     = "IV Corpo d'Armata"
    # Gen. C. Mercalli#
    division =
    { id       = { type = 23500 id = 46 }
      name     = "2a Divisione 'Sforzesca'"
      type     = infantry
      extra    = armored_car
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 47 }
    location = 368 # Genoa
    name     = "Corpo d'Armata Alpino"
    # Gen. L. Negri#
    division =
    { id       = { type = 23500 id = 48 }
      name     = "1a Divisione Alpina 'Taurinense'"
      type     = bergsjaeger
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 49 }
      name     = "2a Divisione Alpina 'Tridentina'"
      type     = bergsjaeger
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 50 }
    location = 515 # Roma
    name     = "Riserva Centrale"
    division =
    { id       = { type = 23500 id = 51 }
      name     = "21a Divisione 'Granatieri di Sardegna'"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 52 }
    location = 1033
    name     = "Comando Superiore dell'A.O.I."
    division =
    { id       = { type = 23500 id = 53 }
      name     = "Q.G. Armata dell'A.O.I."
      type     = hq
      model    = 0
      strength = 100
    }
    division =
    { id            = { type = 23500 id = 54 }
      name          = "32a Divisione 'Marche'"
      type          = infantry
      model         = 1
      extra         = artillery
      brigade_model = 2
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 23500 id = 55 }
    location = 1038
    name     = "I Corpo d'Armata dell'A.O.I."
    # Gen. Santini#
    division =
    { id       = { type = 23500 id = 56 }
      name     = "26a Divisione 'Assietta'"
      type     = infantry
      model    = 1
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 57 }
      name     = "30a Divisione 'Sabauda'"
      type     = infantry
      model    = 1
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 58 }
      name     = "5a Divisione Alpina 'Pusteria'"
      type     = bergsjaeger
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 59 }
      name     = "4a Divisione CC.NN. '3 Gennaio'"
      type     = militia
      strength = 100
    }
  }
  landunit =
  { id       = { type = 23500 id = 60 }
    location = 1039
    name     = "II Corpo d'Armata dell'A.O.I."
    # Gen. Maravigna#
    division =
    { id       = { type = 23500 id = 61 }
      name     = "19a Divisione 'Venezia'"
      type     = infantry
      model    = 1
      extra    = armored_car
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 62 }
      name     = "24a Divisione 'Pinerolo'"
      type     = infantry
      model    = 1
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 63 }
      name     = "3a Divisione CC.NN. '21 Aprile'"
      type     = militia
      strength = 100
    }
  }
  landunit =
  { id       = { type = 23500 id = 64 }
    location = 1038
    name     = "III Corpo d'Armata dell'A.O.I."
    # Gen. Bastico#
    division =
    { id       = { type = 23500 id = 65 }
      name     = "27a Divisione 'Brescia'"
      type     = infantry
      model    = 1
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 66 }
      name     = "1a Divisione CC.NN. '23 Marzo'"
      type     = militia
      strength = 100
    }
  }
  landunit =
  { id       = { type = 23500 id = 67 }
    location = 1039
    name     = "IV Corpo d'Armata dell'A.O.I."
    # Gen. Babbini#
    division =
    { id       = { type = 23500 id = 68 }
      name     = "5a Divisione 'Cosseria'"
      type     = infantry
      model    = 1
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 69 }
      name     = "2a Divisione CC.NN. '28 Ottobre'"
      type     = militia
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 70 }
      name     = "5a Divisione CC.NN. '1 Febbraio'"
      type     = militia
      strength = 100
    }
  }
  landunit =
  { id       = { type = 23500 id = 71 }
    location = 1039
    name     = "Corpo d'Armata Eritreo"
    # Gen. Pirzio Biroli#
    division =
    { id       = { type = 23500 id = 72 }
      name     = "1a Divisione 'Eritrea'"
      type     = militia
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 73 }
      name     = "2a Divisione 'Eritrea'"
      type     = militia
      strength = 100
    }
  }
  landunit =
  { id       = { type = 23500 id = 74 }
    location = 1055
    name     = "Corpo d'Armata Libico"
    # Gen. Graziani#
    division =
    { id       = { type = 23500 id = 75 }
      name     = "29a Divisione 'Piemonte'"
      type     = infantry
      model    = 1
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 76 }
      name     = "Divisione Libia"
      type     = militia
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 77 }
      name     = "6a Divisione CC.NN. 'Tevere'"
      type     = militia
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 78 }
      name     = "7a Divisione CC.NN. 'Cirene'"
      type     = militia
      strength = 100
    }
  }
	### Italian Navy OOB ###
  navalunit =
  { id       = { type = 23500 id = 79 }
    name     = "Regia Marina"
    location = 523
    base     = 523
    division =
    { id    = { type = 23500 id = 80 }
      name  = "2a Flottiglia Torpediniere"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 23500 id = 81 }
      name  = "RM Andrea Doria"
      type  = battleship
      model = 0
    }
    division =
    { id    = { type = 23500 id = 82 }
      name  = "RM Caio Duilio"
      type  = battleship
      model = 0
    }
    division =
    { id    = { type = 23500 id = 83 }
      name  = "RM Conte di Cavour"
      type  = battleship
      model = 0
    }
    division =
    { id    = { type = 23500 id = 84 }
      name  = "RM Giulio Cesare"
      type  = battleship
      model = 0
    }
    division =
    { id    = { type = 23500 id = 85 }
      name  = "RM San Giorgio"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 23500 id = 86 }
      name  = "RM Taranto"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 23500 id = 87 }
      name  = "RM Bari"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 23500 id = 88 }
      name  = "RM Libia"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 23500 id = 89 }
      name  = "17a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 23500 id = 90 }
      name  = "18a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 23500 id = 91 }
      name  = "19a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 23500 id = 92 }
      name  = "20a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 23500 id = 93 }
      name  = "21a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 23500 id = 94 }
      name  = "22a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 23500 id = 95 }
      name  = "23a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 23500 id = 96 }
      name  = "24a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 23500 id = 97 }
      name  = "25a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 98 }
    name     = "1a Squadra di Marina"
    location = 523
    base     = 523
    division =
    { id    = { type = 23500 id = 99 }
      name  = "RM Zara"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 23500 id = 100 }
      name  = "RM Gorizia"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 23500 id = 101 }
      name  = "RM Fiume"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 23500 id = 102 }
      name  = "9a Flottiglia Torpediniere"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 23500 id = 103 }
      name  = "Squadrone Giorgio Orsini"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 23500 id = 104 }
      name  = "Squadrone Tarquinia"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 105 }
    name     = "4a Squadra di Marina"
    location = 378
    base     = 378
    division =
    { id       = { type = 23500 id = 106 }
      name     = "RM Alberico da Barbiano"
      type     = light_cruiser
      model    = 1
      maxspeed = 34
    }
    division =
    { id    = { type = 23500 id = 107 }
      name  = "RM Luigi Cadorna"
      type  = light_cruiser
      model = 1
    }
    division =
    { id       = { type = 23500 id = 108 }
      name     = "RM Alberto da Giussano"
      type     = light_cruiser
      model    = 1
      maxspeed = 34
    }
    division =
    { id    = { type = 23500 id = 109 }
      name  = "RM Armando Diaz"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 23500 id = 110 }
      name  = "Squadrone Aventino"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 111 }
    name     = "5a Squadra di Marina"
    location = 523
    base     = 523
    division =
    { id    = { type = 23500 id = 112 }
      name  = "7a Flottiglia Torpediniere"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 23500 id = 113 }
      name  = "8a Flottiglia Torpediniere"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 23500 id = 114 }
      name  = "Squadrone Sagittario"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 115 }
    name     = "8a Squadra di Marina"
    location = 378
    base     = 378
    division =
    { id    = { type = 23500 id = 116 }
      name  = "16a Flottiglia Torpediniere"
      type  = destroyer
      model = 1
    }
  }
  navalunit =
  { id       = { type = 23500 id = 117 }
    name     = "9a Squadra di Marina"
    location = 523
    base     = 523
    division =
    { id    = { type = 23500 id = 118 }
      name  = "RM Pola"
      type  = heavy_cruiser
      model = 2
    }
  }
  navalunit =
  { id       = { type = 23500 id = 119 }
    name     = "19a Squadra di Marina"
    location = 932
    base     = 932
    division =
    { id       = { type = 23500 id = 120 }
      name     = "RM Giovanni dalle Bande Nere"
      type     = light_cruiser
      model    = 1
      maxspeed = 34
    }
    division =
    { id       = { type = 23500 id = 121 }
      name     = "RM Bartolomeo Colleoni"
      type     = light_cruiser
      model    = 1
      maxspeed = 34
    }
    division =
    { id    = { type = 23500 id = 122 }
      name  = "Squadrone Vallelunga"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 123 }
    name     = "11a Squadra di Marina"
    location = 368
    base     = 368
    division =
    { id    = { type = 23500 id = 124 }
      name  = "RM Trento"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 23500 id = 125 }
      name  = "RM Bolzano"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 23500 id = 126 }
      name  = "RM Trieste"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 23500 id = 127 }
      name  = "Squadrone Asmara"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 128 }
    name     = "17a Squadra di Marina"
    location = 368
    base     = 368
    division =
    { id       = { type = 23500 id = 129 }
      name     = "RM Duca d'Aosta"
      type     = light_cruiser
      model    = 2
      maxspeed = 34
    }
    division =
    { id       = { type = 23500 id = 130 }
      name     = "RM Muzio Attendolo"
      type     = light_cruiser
      model    = 2
      maxspeed = 34
    }
    division =
    { id       = { type = 23500 id = 131 }
      name     = "RM Raimondo Montecuccoli"
      type     = light_cruiser
      model    = 2
      maxspeed = 34
    }
    division =
    { id    = { type = 23500 id = 132 }
      name  = "13a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 133 }
    name     = "1a Flotta Sommergibili"
    location = 534
    base     = 534
    division =
    { id    = { type = 23500 id = 134 }
      name  = "4a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 23500 id = 135 }
      name  = "51a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 23500 id = 136 }
      name  = "52a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
  }
  navalunit =
  { id       = { type = 23500 id = 137 }
    name     = "2a Flotta Sommergibili"
    location = 525
    base     = 525
    division =
    { id    = { type = 23500 id = 138 }
      name  = "11a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 23500 id = 139 }
      name  = "12a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 23500 id = 140 }
      name  = "13a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
  }
  navalunit =
  { id       = { type = 23500 id = 141 }
    name     = "3a Flotta Sommergibili"
    location = 378
    base     = 378
    division =
    { id    = { type = 23500 id = 142 }
      name  = "21a Flottiglia Sommergibili"
      type  = submarine
      model = 2
    }
  }
  navalunit =
  { id       = { type = 23500 id = 143 }
    name     = "4a Flotta Sommergibili"
    location = 523
    base     = 523
    division =
    { id    = { type = 23500 id = 144 }
      name  = "31a Flottiglia Sommergibili"
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 23500 id = 145 }
      name  = "33a Flottiglia Sommergibili"
      type  = submarine
      model = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 146 }
    name     = "5a Flotta Sommergibili"
    location = 368
    base     = 368
    division =
    { id    = { type = 23500 id = 147 }
      name  = "40a Flottiglia Sommergibili"
      type  = submarine
      model = 2
    }
  }
  navalunit =
  { id       = { type = 23500 id = 148 }
    name     = "Comando Navale Libico"
    location = 932
    base     = 932
    division =
    { id    = { type = 23500 id = 149 }
      name  = "1a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 150 }
    name     = "6a Flottiglia Sommergibili"
    location = 932
    base     = 932
    division =
    { id    = { type = 23500 id = 151 }
      name  = "61a Flottiglia Sommergibili"
      type  = submarine
      model = 2
    }
  }
  navalunit =
  { id       = { type = 23500 id = 152 }
    name     = "Comando Navale Mar Rosso"
    location = 1033
    base     = 1033
    division =
    { id    = { type = 23500 id = 153 }
      name  = "3a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 23500 id = 154 }
      name  = "5a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
  }
	### Italian Air OOB ###
  airunit =
  { location = 368
    base     = 368
    id       = { type = 23500 id = 155 }
    name     = "1a Squadra Aerea"
    division =
    { id       = { type = 23500 id = 156 }
      name     = "9a Divisione Caccia"
      strength = 100
      type     = interceptor
      model    = 0
    }
  }
  airunit =
  { location = 534
    base     = 534
    id       = { type = 23500 id = 157 }
    name     = "4o Comando Bombardieri Tattici 'Drago'"
    division =
    { id       = { type = 23500 id = 158 }
      name     = "4a Divisione Bombardieri 'Drago'"
      strength = 100
      type     = tactical_bomber
      model    = 0
    }
  }
  airunit =
  { location = 515
    base     = 515
    id       = { type = 23500 id = 160 }
    name     = "2a Squadra Aerea"
    division =
    { id       = { type = 23500 id = 161 }
      name     = "1a Divisione Caccia 'Aquila'"
      strength = 50
      type     = interceptor
      model    = 0
    }
  }
  airunit =
  { location = 515
    base     = 515
    id       = { type = 23500 id = 162 }
    name     = "3o Comando Aerosiluranti 'Centauro'"
    division =
    { id       = { type = 23500 id = 163 }
      name     = "3a Divisione Bombardieri 'Centauro'"
      strength = 100
      type     = naval_bomber
      model    = 0
    }
  }
  airunit =
  { location = 525
    base     = 525
    id       = { type = 23500 id = 164 }
    name     = "3a Squadra Aerea"
    division =
    { id       = { type = 23500 id = 165 }
      name     = "7a Divisione Caccia"
      strength = 100
      type     = interceptor
      model    = 0
    }
  }
  airunit =
  { location = 525
    base     = 525
    id       = { type = 23500 id = 166 }
    name     = "5o Comando Aerosiluranti 'Eolo'"
    division =
    { id       = { type = 23500 id = 167 }
      name     = "5a Divisione Bombardieri 'Eolo'"
      strength = 50
      type     = naval_bomber
      model    = 0
    }
  }
  airunit =
  { location = 932
    base     = 932
    id       = { type = 23500 id = 168 }
    name     = "4a Squadra Aerea"
    division =
    { id       = { type = 23500 id = 169 }
      name     = "35a Divisione Bombardieri"
      strength = 50
      type     = tactical_bomber
      model    = 0
    }
    division =
    { id       = { type = 23500 id = 170 }
      name     = "39a Divisione Trasporti"
      strength = 50
      type     = transport_plane
      model    = 0
    }
  }
  airunit =
  { location = 534
    base     = 534
    id       = { type = 23500 id = 171 }
    name     = "Aeronautica della Sardegna"
    division =
    { id       = { type = 23500 id = 172 }
      name     = "10a Divisione Bombardieri 'Marte'"
      strength = 80
      type     = naval_bomber
      model    = 0
    }
    division =
    { id       = { type = 23500 id = 173 }
      name     = "2a Divisione Caccia 'Borea'"
      strength = 80
      type     = interceptor
      model    = 0
    }
  }
  airunit =
  { location = 1033
    base     = 1033
    id       = { type = 23500 id = 174 }
    name     = "Aeronautica dell'Africa Orientale"
    division =
    { id       = { type = 23500 id = 175 }
      name     = "14a Divisione Caccia 'Rex'"
      strength = 80
      type     = interceptor
      model    = 0
    }
    division =
    { id       = { type = 23500 id = 176 }
      name     = "13a Divisione Bombardieri 'Pegaso'"
      strength = 80
      type     = tactical_bomber
      model    = 0
    }
  }
	### Warships Under Construction ###
  division_development =
  { name  = "RM Eugenio di Savoia"
    type  = light_cruiser
    model = 2
    cost  = 4.5
    id    = { type = 23500 id = 29 }
    date  = { year = 1936 month = january day = 16 }
  }
  division_development =
  { name  = "27a Flottiglia Sommergibili"
    type  = submarine
    model = 1
    cost  = 1.8
    id    = { type = 23500 id = 42 }
    date  = { year = 1936 month = april day = 1 }
  }
}
