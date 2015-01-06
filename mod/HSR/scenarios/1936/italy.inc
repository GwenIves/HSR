#
# by Aregorn for HSR2_DD
#
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
  supplypool = 500
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
  supplypool = 500
}              # Massaua
province = { id = 1056 oilpool = 100 supplypool = 500 } # Mogadishu

#####################
# Country main data #
#####################

country =
{ tag                    = ITA
  manpower               = 500 #
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 50
  belligerence           = 0 # to avoid MP problems
  capital                = 515

	research_mod = 0.90
	tc_mod = 1.05
	peacetime_ic_mod = 0.75

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

  SpyInfo                = { country = "ITA" NumberOfSpies = 8 }

  # Somaliland
  nationalprovinces      = { 525 526 524 523 522 521 520 519 518 517 516 515 513 514 512 379 369 368 531 370 371 378 534 381 384 387 388 389 393 405 }
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
  techapps               = { 4010  4120  4130  4190  4250  2150  2010  2020  2030  2290  2300  2310  2450  1010  1020  1190  1200  1110  5010  5020
			     5080  5090  5190  5310  5320  5470  5480  9010  9020  9030  8010  8020  8030  8040  8050  8070  8120  3010
			     3020  3030  3070  3080  3090  3130  3140  3150  3190  3250  3260  3270  3280  3400  3410  3420  14000
			   }
  blueprints             = { 6010 6030 6110 6120 }
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
  armamentminister       = { type = 9 id = 3004 }
  ministerofsecurity     = { type = 9 id = 3005 }
  ministerofintelligence = { type = 9 id = 3006 }
  chiefofstaff           = { type = 9 id = 3007 }
  chiefofarmy            = { type = 9 id = 3008 }
  chiefofnavy            = { type = 9 id = 3009 }
  chiefofair             = { type = 9 id = 3010 }
#### Turin
  landunit =
  { id       = { type = 23500 id = 1 }
    location = 531 # Turin
    name     = "1a Armata"
    leader = 6054
    division =
    { id            = { type = 23500 id = 3 }
      name          = "22a Div. 'Cacciatori delle Alpi'"
      type          = infantry
      extra         = artillery
      brigade_model = 2
      experience = 40
      strength      = 70
    }
    division =
    { id       = { type = 23500 id = 5 }
      name     = "4a Div. 'Livorno'"
      type     = infantry
      experience = 40
      strength = 70
      model    = 1
    }
    division =
    { id       = { type = 23500 id = 6 }
      name     = "25a Div. 'Bologna'"
      type     = infantry
      experience = 40
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 9 }
      name     = "3a Div. 'Ravenna'"
      type     = infantry
      experience = 40
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 10 }
      name     = "6a Div. 'Cuneo'"
      type     = infantry
      experience = 40
      strength = 70
    }
  }
#### Venezia
  landunit =
  { id       = { type = 23500 id = 11 }
    location = 378 # Venezia
    name     = "2a Armata"
    leader = 6024 #Bergonzoli
    division =
    { id            = { type = 23500 id = 21 }
      name          = "13a Div. 'Re'"
      type          = infantry
      extra         = artillery
      brigade_model = 2
      experience = 40
      strength      = 70
    }
    division =
    { id       = { type = 23500 id = 14 }
      name     = "12a Div. 'Sassari'"
      type     = infantry
      experience = 40
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 15 }
      name     = "15a Div. 'Bergamo'"
      type     = infantry
      experience = 40
      strength = 70
    }
  }
####
  landunit =
  { id       = { type = 23500 id = 16 }
    location = 378 # Venezia
    name     = "VIII Corpo d'Armata"
    leader = 6075   # Gen. F Gambelli#
    division =
    { id       = { type = 23500 id = 18 }
      name     = "9a Div. 'Pasubio'"
      type     = infantry
      experience = 40
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 19 }
      name     = "10a Div. 'Piave'"
      type     = infantry
      experience = 40
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 22 }
      name     = "14a Div. 'Isonzo'"
      type     = infantry
      experience = 40
      strength = 70
    }
  }
####
  landunit =
  { id       = { type = 23500 id = 20 }
    location = 378 # Venezia
    name     = "XI Corpo d'Armata"
    leader = 6065    # Esposito, Gen. C. Mercalli#

    division =
    { id       = { type = 23500 id = 79 }
      name     = "3a Div. Alpina 'Julia'"
      type     = bergsjaeger
      experience = 40
      strength = 70
    }
  }
####
  landunit =
  { id       = { type = 23500 id = 23 }
    location = 378 # Venezia
    name     = "Corpo d'Armata Celere"
    leader = 6102    # Gen. G. Messe#
    division =
    { id       = { type = 23500 id = 24 }
      name     = "1a Div. 'Eugenio di Savoia'"
      type     = cavalry
      experience = 40
      strength = 70
      model    = 1
      extra    = light_armor_brigade
    }
    division =
    { id       = { type = 23500 id = 25 }
      name     = "2a Div. 'Emanuele Filiberto'"
      type     = cavalry
      experience = 40
      strength = 70
      model    = 1
      extra    = light_armor_brigade
    }
    division =
    { id       = { type = 23500 id = 26 }
      name     = "3a Div. 'Principe Amedeo'"
      type     = cavalry
      experience = 40
      strength = 70
      model    = 1
      extra    = light_armor_brigade
    }
  }
#### Calabria
  landunit =
  { id       = { type = 23500 id = 27 }
    location = 524 # Reggio di Calabria
    name     = "3a Armata"
    leader = 6278
    division =
    { id            = { type = 23500 id = 29 }
      name          = "16a Div. 'Pistoia'"
      type          = infantry
      extra         = artillery
      brigade_model = 2
      experience = 40
      strength      = 70
    }
   division =
    { id       = { type = 23500 id = 31 }
      name     = "7a Div. 'Lupi di Toscana'"
      type     = infantry
      experience = 40
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 32 }
      name     = "20a Div. 'Friuli'"
      type     = infantry
      experience = 40
      strength = 70
    }
  }
####
  landunit =
  { id       = { type = 23500 id = 33 }
    location = 524 # Reggio di Calabria
    name     = "IX Corpo d'Armata"
    # Gen. C.Rossi#
    division =
    { id       = { type = 23500 id = 34 }
      name     = "17a Div. 'Pavia'"
      type     = infantry
      experience = 40
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 35 }
      name     = "23a Div. 'Ferrara'"
      type     = infantry
      experience = 40
      strength = 70
    }
  }
#### Palermo
  landunit =
  { id       = { type = 23500 id = 36 }
    location = 525 # Palermo
    name     = "XII Corpo d'Armata"
    # Gen. A.Rossi#
    division =
    { id       = { type = 23500 id = 37 }
      name     = "28a Div. 'Aosta'"
      type     = infantry
      experience = 40
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 39 }
      name     = "31a Div. 'Calabria'"
      type     = infantry
      experience = 40
      strength = 70
    }
  }
#### Genova
  landunit =
  { id       = { type = 23500 id = 40 }
    location = 368 # Genoa
    name     = "4a Armata"
    # Gen. A Guzzoni#
    division =
    { id            = { type = 23500 id = 42 }
      name          = "11a Div. 'Brennero'"
      type          = infantry
      extra         = artillery
      brigade_model = 2
      experience = 40
      strength      = 70
    }
    division =
    { id       = { type = 23500 id = 44 }
      name     = "1a Div. 'Superga'"
      type     = infantry
      experience = 40
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 46 }
      name     = "2a Div. 'Sforzesca'"
      type     = infantry
      experience = 40
      extra         = artillery
     strength = 70
    }
  }

#### Genova
  landunit =
  { id       = { type = 23500 id = 47 }
    location = 368 # Genoa
    name     = "Corpo d'Armata Alpino"
    # Gen. L. Negri#
    division =
    { id       = { type = 23500 id = 48 }
      name     = "1a Div. Alpina 'Taurinese'"
      type     = bergsjaeger
      experience = 40
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 49 }
      name     = "2a Div. Alpina 'Tridentina'"
      type     = bergsjaeger
      experience = 40
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 7 }
      name     = "4a Div. Alpina 'Cuneense'"
      type     = bergsjaeger
      experience = 40
      strength = 70
    }
  }
#### Roma
  landunit =
  { id       = { type = 23500 id = 50 }
    location = 515 # Roma
    name     = "Riserva Centrale"
    leader = 6042
    division =
    { id       = { type = 23500 id = 51 }
      name     = "21a Div. 'Granatieri di Sardegna'"
      type     = infantry
      experience = 40
      strength = 70
    }
  }
#### Africa
  landunit =
  { id       = { type = 23500 id = 52 }
    location = 1033
    name     = "Comando Superiore dell'A.O.I."
    leader = 6013 #Badoglio
    division =
    { id       = { type = 23500 id = 53 }
      name     = "Armata dell'A.O.I. HQ"
      type     = hq
      model    = 0
      extra    = rocket_artillery
      experience = 20
      strength = 100
    }
    division =
    { id            = { type = 23500 id = 54 }
      name          = "32a Div. 'Marche'"
      type          = infantry
      model         = 1
      extra         = artillery
      brigade_model = 2
      experience = 20
      strength      = 100
    }
  }
####
  landunit =
  { id       = { type = 23500 id = 55 }
    location = 1038
    name     = "I Corpo d'Armata dell'A.O.I."
    leader =  6041   # Cavallero, Gen. Santini#
    division =
    { id       = { type = 23500 id = 56 }
      name     = "26a Div. 'Assietta'"
      type     = infantry
      model    = 1
      experience = 20
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 57 }
      name     = "30a Div. 'Sabauda'"
      type     = infantry
      model    = 1
      experience = 20
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 58 }
      name     = "5a Div. Alpina 'Pusteria'"
      type     = bergsjaeger
      experience = 20
      strength = 100
    }
  }
####
  landunit =
  { id       = { type = 23500 id = 60 }
    location = 1039
    name     = "II Corpo d'Armata dell'A.O.I."
    # Gen. Maravigna#
     division =
    { id       = { type = 23500 id = 59 }
      name     = "4a CCNN Div. '3 Gennaio'"
      type     = militia
      experience = 20
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 66 }
      name     = "1a CCNN '23 Marzo'"
      type     = militia
      experience = 20
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 63 }
      name     = "3a CCNN Div. '21 Aprile'"
      type     = militia
      experience = 20
      strength = 100
    }
  }
####
  landunit =
  { id       = { type = 23500 id = 64 }
    location = 1038
    name     = "III Corpo d'Armata dell'A.O.I."
    leader = 6021   # Gen. Bastico#

    division =
    { id       = { type = 23500 id = 61 }
      name     = "19a Div. 'Venezia'"
      type     = infantry
      model    = 1
      extra    = artillery
      experience = 20
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 62 }
      name     = "24a Div. 'Pinerolo'"
      type     = infantry
      model    = 1
      experience = 40
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 65 }
      name     = "27a Div. 'Brescia'"
      type     = infantry
      model    = 1
      experience = 20
      strength = 100
    }
  }
####
  landunit =
  { id       = { type = 23500 id = 67 }
    location = 1039
    name     = "IV Corpo d'Armata dell'A.O.I."
    # Gen. Babbini#
    division =
    { id       = { type = 23500 id = 68 }
      name     = "5a Div. 'Cosseria'"
      type     = infantry
      model    = 1
      experience = 20
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 69 }
      name     = "2a CCNN '28 Ottobre'"
      type     = militia
      experience = 20
      strength = 100
    }
  }
####
  landunit =
  { id       = { type = 23500 id = 71 }
    location = 1039
    name     = "Corpo d'Armata Eritreo"
    leader = 6118   # Gen. Pirzio Biroli#
    division =
    { id       = { type = 23500 id = 72 }
      name     = "1a Div. Eritrea"
      type     = militia
      experience = 20
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 73 }
      name     = "2a Div. Eritrea"
      type     = militia
      experience = 20
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 70 }
      name     = "5a CCNN '1 Febbraio'"
      type     = militia
      experience = 20
      strength = 100
    }
  }
####
  landunit =
  { id       = { type = 23500 id = 74 }
    location = 1055
    name     = "Corpo d'Armata Libico"
    leader = 6084 # Gen. Graziani#
    division =
    { id       = { type = 23500 id = 75 }
      name     = "29a Div. 'Piemonte'"
      type     = infantry
      model    = 1
      experience = 20
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 76 }
      name     = "Div. Libia"
      type     = militia
      experience = 20
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 77 }
      name     = "6a Div. CCNN Tevere"
      type     = militia
      experience = 20
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 78 }
      name     = "7a Div. CCNN Cirene"
      type     = militia
      experience = 20
      strength = 100
    }
  }
####
  landunit =
  { id       = { type = 23500 id = 80 }
    location = 919
    name     = "Comando Superiore FF.AA. Africa SETT"
    division =
    { id       = { type = 23500 id = 17 }
      name     = "18a Div. 'Messina'"
      type     = infantry
      model    = 1
      experience = 40
      strength = 70
    }
  }
##################
# AI Garrisons
##################

	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 23500 id = 81 }
			name = "Tripoli Garrison 1"
			type = infantry
			extra = engineer
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 23500 id = 82 }
			name = "Tripoli Garrison 2"
			type = infantry
			extra = engineer
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 23500 id = 83 }
			name = "Tripoli Garrison 3"
			type = infantry
			extra = engineer
			model = 1
		}
##### DAK

	landdivision = {
		dormant = yes
	        	id = { type = 23500 id = 84 }
			name = "Panzerarmee Afrika HQ"
			type = hq
			model = 4
			extra = engineer
			brigade_model = 23
			experience = 40
		}
	landdivision = {
		dormant = yes
	        	id = { type = 23500 id = 85 }
			name = "15. Panzer-Division"
			type = armor
			model = 9
			extra = sp_rct_artillery
			brigade_model = 0
			experience = 40
		}
	landdivision = {
		dormant = yes
	        	id = { type = 23500 id = 86 }
			name = "21. Panzer-Division"
			type = armor
			model = 9
			extra = sp_artillery
			brigade_model = 1
			experience = 40
		}
	landdivision = {
		dormant = yes
	        	id = { type = 23500 id = 87 }
			name = "5. Panzer-Division"
			type = armor
			model = 9
			extra = sp_artillery
			brigade_model = 1
			experience = 40
		}
	landdivision = {
		dormant = yes
	        	id = { type = 23500 id = 88 }
			name = "90. Light-Division"
			type = motorized
			model = 7
			extra = engineer
			brigade_model = 23
			experience = 40
		}
	landdivision = {
		dormant = yes
	        	id = { type = 23500 id = 89 }
			name = "164. Light-Division"
			type = motorized
			model = 7
			extra = engineer
			brigade_model = 23
			experience = 40
		}
	landdivision = {
		dormant = yes
	        	id = { type = 23500 id = 90 }
			name = "15. Panzer-Division"
			type = armor
			model = 9
			extra = sp_rct_artillery
			brigade_model = 1
			experience = 40
		}
	landdivision = {
		dormant = yes
	        	id = { type = 23500 id = 91 }
			name = "21. Panzer-Division"
			type = armor
			model = 10
			extra = sp_artillery
			brigade_model = 2
			experience = 40
		}
	landdivision = {
		dormant = yes
	        	id = { type = 23500 id = 92 }
			name = "90. Light-Division"
			type = motorized
			model = 7
			extra = engineer
			brigade_model = 23
			experience = 40
		}
	landdivision = {
		dormant = yes
	        	id = { type = 23500 id = 93 }
			name = "164. Light-Division"
			type = motorized
			model = 7
			extra = engineer
			brigade_model = 23
			experience = 40
		}
	landdivision = {
		dormant = yes
	        	id = { type = 23500 id = 94 }
			name = "15. Panzer-Division"
			type = armor
			model = 9
			extra = sp_artillery
			brigade_model = 2
			experience = 40
		}
	landdivision = {
		dormant = yes
	        	id = { type = 23500 id = 95 }
			name = "21. Panzer-Division"
			type = armor
			model = 9
			extra = sp_artillery
			brigade_model = 2
			experience = 40
		}
	landdivision = {
		dormant = yes
	        	id = { type = 23500 id = 96 }
			name = "90. Light-Division"
			type = motorized
			model = 7
			extra = engineer
			brigade_model = 23
			experience = 40
		}
############################
# Dormant Navy
############################

navaldivision = {
	dormant = yes
	name = "RM Andrea Doria"
	type = battlecruiser
	model = 2
	id = { type = 23500 id = 208 }
	experience = 20
	}

navaldivision = {
	dormant = yes
	name = "RM Caio Duilio"
	type = battlecruiser
	model = 2
	id = { type = 23500 id = 210 }
	experience = 20
	}


######## Regia Marina #########

## 12
  navalunit =
  { id       = { type = 23500 id = 125 }
    name     = "Regia Marina"
    location = 523
    base     = 523
    leader = 6163
# 2BB
    division =
    { id    = { type = 23500 id = 128 }
      name  = "RM Caio Duilio"
      type  = battleship
      model = 0
    }
    division =
    { id    = { type = 23500 id = 300 }
      name  = "RM Conte di Cavour"
      type  = battleship
      model = 0
    }
# 3CA
    division =
    { id    = { type = 23500 id = 134 }
      name  = "RM Gorizia"
      type  = heavy_cruiser
      model = 2
      experience = 10
    }
    division =
    { id    = { type = 23500 id = 135 }
      name  = "RM Fiume"
      type  = heavy_cruiser
      model = 2
      experience = 10
    }
    division =
    { id    = { type = 23500 id = 170 }
      name  = "RM Trento"
      type  = heavy_cruiser
      model = 1
      experience = 10
    }
# 4CL
    division =
    { id       = { type = 23500 id = 142 }
      name     = "RM Alberico da Barbiano"
      type     = light_cruiser
      model    = 1
      maxspeed = 34
      experience = 10
    }
    division =
    { id    = { type = 23500 id = 143 }
      name  = "RM Luigi Cadorna"
      type  = light_cruiser
      model = 1
      experience = 10
    }
    division =
    { id       = { type = 23500 id = 144 }
      name     = "RM Alberto da Guissano"
      type     = light_cruiser
      model    = 1
      maxspeed = 34
      experience = 10
    }
    division =
    { id       = { type = 23500 id = 165 }
      name     = "RM Bartolomeo Colleoni"
      type     = light_cruiser
      model    = 1
      maxspeed = 34
      experience = 10
    }

# 3DD
    division =
    { id    = { type = 23500 id = 136 }
      name  = "9a Flottiglia Torpediniere"
      type  = destroyer
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 23500 id = 126 }
      name  = "2a Div. Torpediniere"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 23500 id = 158 }
      name  = "16a Flottiglia Torpediniere"
      type  = destroyer
      model = 1
      experience = 10
    }
  }
#### RMII	10
  navalunit = {
    id       = { type = 23500 id = 108 }
    name     = "Regia Marina"
    leader = 6157
    location = 523
    base     = 523
# 2BB
    division =
    { id    = { type = 23500 id = 127 }
      name  = "RM Andrea Doria"
      type  = battleship
      model = 0
    }
    division =
    { id    = { type = 23500 id = 301 }
      name  = "RM Giulio Cesare"
      type  = battleship
      model = 0
      experience = 10
    }
# 3CA
    division =
    { id    = { type = 23500 id = 133 }
      name  = "RM Zara"
      type  = heavy_cruiser
      model = 2
      experience = 10
    }
    division =
    { id    = { type = 23500 id = 162 }
      name  = "RM Pola"
      type  = heavy_cruiser
      model = 2
      experience = 10
    }
    division =
    { id    = { type = 23500 id = 171 }
      name  = "RM Bolzano"
      type  = heavy_cruiser
      model = 2
      experience = 10
    }
# 3CL
    division =
    { id       = { type = 23500 id = 176 }
      name     = "RM Duca d'Aosta"
      type     = light_cruiser
      model    = 2
      maxspeed = 34
      experience = 10
    }
    division =
    { id       = { type = 23500 id = 177 }
      name     = "RM Muzio Attendolo"
      type     = light_cruiser
      model    = 2
      maxspeed = 34
      experience = 10
    }
    division =
    { id       = { type = 23500 id = 178 }
      name     = "RM Raimondo Montecuccolio"
      type     = light_cruiser
      model    = 2
      maxspeed = 34
      experience = 10
    }
# 2DD
    division =
    { id    = { type = 23500 id = 152 }
      name  = "8a Flottiglia Torpediniere"
      type  = destroyer
      model = 2
      experience = 10
    }
    division =
    { id    = { type = 23500 id = 209 }
      name  = "7a Flottiglia Torpediniere"
      type  = destroyer
      model = 2
      experience = 10
    }
  }
##### Transport I
  navalunit =
  { id       = { type = 23500 id = 151 }
    name     = "1a Squadra di Transporto"
    leader  6175
    location = 378
    base     = 378
    division =
    { id    = { type = 23500 id = 172 }
      name  = "RM Trieste"
      type  = heavy_cruiser
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 23500 id = 145 }
      name  = "RM Armando Diaz"
      type  = light_cruiser
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 23500 id = 226 }
      name  = "19a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 23500 id = 227 }
      name  = "20a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 23500 id = 228 }
      name  = "21a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 23500 id = 153 }
      name  = "Squadrone Sagittario"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 23500 id = 137 }
      name  = "Squadrone Giorgio Orsini"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 23500 id = 138 }
      name  = "Squadrone Tarquinia"
      type  = transport
      model = 0
    }
  }
####
  navalunit =
  { id       = { type = 23500 id = 159 }
    name     = "3a Squadra di Marina"
    location = 523
    base     = 523
    division =
    { id    = { type = 23500 id = 219 }
      name  = "RM Libia"
      type  = light_cruiser
      model = 0
      experience = 10
    }
    division =
    { id    = { type = 23500 id = 130 }
      name  = "RM Taranto"
      type  = light_cruiser
      model = 0
      experience = 10
    }
    division =
    { id    = { type = 23500 id = 131 }
      name  = "RM Bari"
      type  = light_cruiser
      model = 0
      experience = 10
    }
    division =
    { id    = { type = 23500 id = 229 }
      name  = "22a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 23500 id = 230 }
      name  = "23a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 23500 id = 231 }
      name  = "24a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 23500 id = 232 }
      name  = "25a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
  }
##### Transport II
  navalunit =
  { id       = { type = 23500 id = 163 }
    name     = "2a Squadra di Transporto"
    leader = 6184
    location = 368
    base     = 368
    division =
    { id    = { type = 23500 id = 129 }
      name  = "RM San Giorgio"
      type  = heavy_cruiser
      model = 0
      experience = 10
    }
    division =
    { id       = { type = 23500 id = 164 }
      name     = "RM Bande Nere"
      type     = light_cruiser
      model    = 1
      maxspeed = 34
      experience = 10
    }
    division =
    { id    = { type = 23500 id = 224 }
      name  = "17a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 23500 id = 225 }
      name  = "18a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 23500 id = 179 }
      name  = "13a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 23500 id = 167 }
      name  = "Squadrone Vallelunga"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 23500 id = 147 }
      name  = "Squadrone Aventino"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 23500 id = 174 }
      name  = "Squadrone Asmara"
      type  = transport
      model = 0
    }
  }

#####
  navalunit =
  { id       = { type = 23500 id = 180 }
    name     = "1a Flotta Sommergibili"
    location = 534
    base     = 534
    division =
    { id    = { type = 23500 id = 181 }
      name  = "4a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 23500 id = 182 }
      name  = "51a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 23500 id = 183 }
      name  = "52a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 23500 id = 185 }
      name  = "11a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 23500 id = 186 }
      name  = "12a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 23500 id = 187 }
      name  = "13a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 23500 id = 190 }
      name  = "21a Flottiglia Sommergibili"
      type  = submarine
      model = 2
      experience = 10
    }
    division =
    { id    = { type = 23500 id = 197 }
      name  = "40a Flottiglia Sommergibili"
      type  = submarine
      model = 2
      experience = 10
    }
    division =
    { id    = { type = 23500 id = 202 }
      name  = "61a Flottiglia Sommergibili"
      type  = submarine
      model = 2
      experience = 10
    }
  }
####
  navalunit =
  { id       = { type = 23500 id = 192 }
    name     = "4a Flotta Sommergibili"
    location = 523
    base     = 523
    division =
    { id    = { type = 23500 id = 193 }
      name  = "31a Flottiglia Sommergibili"
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 23500 id = 194 }
      name  = "33a Flottiglia Sommergibili"
      type  = submarine
      model = 0
    }
  }
#####
  navalunit =
  { id       = { type = 23500 id = 203 }
    name     = "Comando Navale Mar Rosso"
    location = 1033
    base     = 1033
    division =
    { id    = { type = 23500 id = 204 }
      name  = "3a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 23500 id = 205 }
      name  = "5a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 23500 id = 200 }
      name  = "1a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
  }
##############
#### AIR
##############
  airunit =
  { location = 368
    base     = 368
    id       = { type = 23500 id = 104 }
    name     = "1st Squadra Aerea"
    leader = 6226
    division =
    { id       = { type = 23500 id = 105 }
      name     = "9a Div. Caccia"
      strength = 100
      type     = interceptor
      experience = 20
      model    = 0
    }
    division =
    { id       = { type = 23500 id = 109 }
      name     = "1a Div. Caccia 'Aquila'"
      strength = 50
      type     = interceptor
      experience = 60
      model    = 0
    }
    division =
    { id       = { type = 23500 id = 113 }
      name     = "7a Div. Caccia"
      strength = 100
      type     = interceptor
      experience = 20
      model    = 0
    }
  }
####
  airunit =
  { location = 525
    base     = 525
    id       = { type = 23500 id = 106 }
    name     = "1o Comando Bombardieri Tattici"
    leader = 6282
    division =
    { id       = { type = 23500 id = 120 }
      name     = "10a Div. Bombardieri 'Marte'"
      strength = 80
      type     = tactical_bomber
      model    = 0
      experience = 30
    }
    division =
    { id       = { type = 23500 id = 111 }
      name     = "3a Div. Bombardieri 'Centauro'"
      strength = 100
      type     = tactical_bomber
      experience = 10
      model    = 0
    }
    division =
    { id       = { type = 23500 id = 115 }
      name     = "5a Div. Bombardieri 'Eolo'"
      strength = 50
      type     = tactical_bomber
      experience = 60
      model    = 0
    }
  }
###
  airunit =
  { location = 932
    base     = 932
    id       = { type = 23500 id = 116 }
    name     = "4a Squadra Aerea"
    division =
    { id       = { type = 23500 id = 118 }
      name     = "39a Div. Trasporti"
      strength = 50
      type     = transport_plane
      model    = 0
    }
  }
###
  airunit =
  { location = 525
    base     = 525
    id       = { type = 23500 id = 119 }
    name     = "5a Squadra Aerea"
    division =
    { id       = { type = 23500 id = 121 }
      name     = "2a Div. Caccia 'Borea'"
      strength = 80
      type     = interceptor
      model    = 0
      experience = 30
    }
    division =
    { id       = { type = 23500 id = 123 }
      name     = "14a Div. Caccia 'Rex'"
      strength = 80
      type     = interceptor
      model    = 0
      experience = 30
    }
  }
###
  airunit =
  { location = 1033
    base     = 1033
    id       = { type = 23500 id = 122 }
    name     = "Aeronautica AOI"
    LEADER = 6231
   division =
    { id       = { type = 23500 id = 117 }
      name     = "1a Div. Bombardieri"
      strength = 50
      type     = tactical_bomber
      model    = 0
      experience = 60
    }
    division =
    { id       = { type = 23500 id = 107 }
      name     = "4a Div. Bombardieri 'Drago'"
      strength = 100
      type     = tactical_bomber
      experience = 10
      model    = 0
    }
    division =
    { id       = { type = 23500 id = 124 }
      name     = "13a Div. Bombardieri 'Pegaso'"
      strength = 80
      type     = tactical_bomber
      model    = 0
      experience = 30
    }

  }
#############################
#Warships Under Construction#
#############################

division_development = {
	name = "RM Eugenio di Savoia"
	type = light_cruiser
	model = 2
	cost = 4.5
	id = { type = 23500 id = 500 }
	date = { year = 1936 month = january day = 16 }
	}

division_development = {
	name = "27a Flottiglia Sommergibili"
	type = submarine
	model = 2
	cost = 1.8
	id = { type = 23500 id = 501 }
	date = { year = 1936 month = april day = 1 }
	}

division_development = {
	name = "RM Littorio"
	type = battleship
	model = 3
	id = { type = 23500 id = 502 }
	cost = 1.7
	date = { year = 1937 month = january day = 29 }
	}

division_development = {
	name = "RM Vittorio Veneto"
	type = battleship
	model = 3
	id = { type = 23500 id = 503 }
	cost = 1.7
	date = { year = 1937 month = january day = 29 }
	}

division_development = {
	# modernizing
	name = "RM Conte di Cavour"
	type = battlecruiser
      model = 2
	id = { type = 23500 id = 504 }
	cost = 0.7
	date = { year = 1937 month = june day = 1 }
	}

division_development = {
	# modernizing
	name = "RM Giulio Cesare"
	type = battlecruiser
      model = 2
	id = { type = 23500 id = 505 }
	cost = 0.7
	date = { year = 1937 month = october day = 1 }
	}

division_development = {
	name = "RM Giuseppe Garibaldi"
	type = light_cruiser
      model = 2
	id = { type = 23500 id = 506 }
	cost = .9
	date = { year = 1937 month = december day = 20 }
	}

division_development = {
	name = "RM Luigi di Savoia"
	type = light_cruiser
      model = 2
	id = { type = 23500 id = 507 }
	cost = .9
	date = { year = 1937 month = december day = 1 }
	}

division_development = {
	name = "27a Flottiglia Torpediniere"
	type = destroyer
      model = 2
	id = { type = 23500 id = 508 }
	cost = .5
	date = { year = 1937 month = july day = 1 }
	}

division_development = {
	name = "28a Flottiglia Torpediniere"
	type = destroyer
      model = 2
	id = { type = 23500 id = 509 }
	cost = .5
	date = { year = 1936 month = june day = 1 }
	}

division_development = {
	name = "29a Flottiglia Torpediniere"
	type = destroyer
      model = 2
	id = { type = 23500 id = 510 }
	cost = .5
	date = { year = 1937 month = january day = 7 }
	}
division_development = {
	name = "30a Flottiglia Torpediniere"
	type = destroyer
      model = 2
	id = { type = 23500 id = 511 }
	cost = .5
	date = { year = 1937 month = june day = 16 }
	}

division_development = {
	name = "31a Flottiglia Torpediniere"
	type = destroyer
      model = 2
	id = { type = 23500 id = 512 }
	cost = 0.5
	date = { year = 1937 month = june day = 16 }
	}
}