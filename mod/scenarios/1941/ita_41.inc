
##############################
# Country definition for ITA #
##############################

province = { id = 366 landfort = 5 } # Nice
province =
{ id         = 368
  landfort   = 5
  anti_air   = 4
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
  ic         = 6
}              # Genoa
province =
{ id         = 369
  anti_air   = 4
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}              # La Spezia
province = { id = 370 anti_air = 3 } # Milan
province =
{ id         = 378
  anti_air   = 3
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}              # Venice
province = { id = 379 ic = 1 } # Ferrara
province = { id = 384 anti_air = 1 } # Split
province = { id = 388 anti_air = 2 } # Dubrovnik
province = { id = 512 anti_air = 1 } # Bologna
province = { id = 513 ic = 2 anti_air = 1 } # Florence
province =
{ id       = 515
  anti_air = 6
  air_base = { size = 6 current_size = 6 }
}            # Rome
province = { id = 516 ic = 3 } # Perugia
province =
{ id       = 519
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            # Anzio
province = { id = 521 anti_air = 2 } # Naples
province =
{ id         = 523
  ic         = 1
  anti_air   = 4
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}              # Taranto
province =
{ id       = 525
  anti_air = 3
  air_base = { size = 6 current_size = 6 }
}            # Palermo
province = { id = 527 landfort = 3 } # Grenoble
province = { id = 531 landfort = 5 anti_air = 3 ic = 3 } # Turin
province =
{ id       = 534
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}            # Sardinia
province =
{ id       = 923
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}            # Barca
province =
{ id         = 924
  anti_air   = 3
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}              # Bengazi
province =
{ id         = 932
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  oilpool    = 100
  supplypool = 300
}              # Tripoli

#####################
# Country main data #
#####################

country =
{ tag                    = ITA
  manpower               = 460
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 3000
  supplies               = 1000
  money                  = 100
  belligerence           = 20
  capital                = 515
  # Illyrian Coast
  transports             = 130
  escorts                = 35
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
  SpyInfo                = { country = "ITA" NumberOfSpies = 11 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 8 }
  #SpyInfo                = { country = "FRA" NumberOfSpies = 10 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 5 }
  #SpyInfo                = { country = "CZE" NumberOfSpies = 5 }
  #SpyInfo                = { country = "AUS" NumberOfSpies = 8 }
  #SpyInfo                = { country = "SPR" NumberOfSpies = 8 }
  #SpyInfo                = { country = "POL" NumberOfSpies = 5 }
  #SpyInfo                = { country = "SWE" NumberOfSpies = 5 }
  #SpyInfo                = { country = "NOR" NumberOfSpies = 5 }
  #SpyInfo                = { country = "FIN" NumberOfSpies = 5 }
  #SpyInfo                = { country = "YUG" NumberOfSpies = 10 }
  #SpyInfo                = { country = "HUN" NumberOfSpies = 5 }
  #SpyInfo                = { country = "BUL" NumberOfSpies = 5 }
  #SpyInfo                = { country = "BEL" NumberOfSpies = 5 }
  #SpyInfo                = { country = "DEN" NumberOfSpies = 5 }
  #SpyInfo                = { country = "HOL" NumberOfSpies = 5 }
  #SpyInfo                = { country = "ARG" NumberOfSpies = 8 }
  #SpyInfo                = { country = "USA" NumberOfSpies = 8 }
  #SpyInfo                = { country = "ALB" NumberOfSpies = 5 }
  #SpyInfo                = { country = "GRE" NumberOfSpies = 5 }
  #SpyInfo                = { country = "JAP" NumberOfSpies = 5 }
  #SpyInfo                = { country = "ROM" NumberOfSpies = 5 }
  #SpyInfo                = { country = "TUR" NumberOfSpies = 10 }
  #SpyInfo                = { country = "POR" NumberOfSpies = 5 }
  #SpyInfo                = { country = "GER" NumberOfSpies = 8 }
  nationalprovinces      = { 525 526 524 523 522 521 520 519 518 517 516 515 513 514 512 379 369 368 531 370 371 378 534 381 384 387 388 389 }
  ownedprovinces         = { 525  526  524  523  522  521  520  519  518  517  516  515  513  514  512  379  369  368  531  370  371  378  534  398
			     399  392  393  394  395  400  402  927  933  932  930  929  925  924  923  922  921  920  916  917  918  919  926  928
			     931  1017 1018 1016 1015 390  391  415  380  381  384  387  388  389  366  527
			   }
  controlledprovinces    = { 525  526  524  523  522  521  520  519  518  517  516  515  513  514  512  379  369  368  531  370  371  378  534  398
			     399  392  393  394  395  400  402  927  933  932  930  929  925  924  923  922  921  920  916  917  918  926  928  931
			     1017 1018 1016 1015 390  391  415  380  381  384  387  388  389  366  527
			   }
  # ITA 1941 techs
  # ######################
  techapps               = { 1240  4070  4200  4010  4020  4030  4040  4050  4120  4130  4140  4190  4250  4260  2010  2020  2040  2030  2050  2070
			     2150  2290  2300  2310  2320  2330  2400  2450  2460  2470  2510  2520  1010  1020  1150  1160  1190  1200  1210  1220
			     1110  1120  1130  1030  1070  1230  1310  1340  5010  5050  5060  5080  5090  5100  5190  5200  5310  5320  5470  5480
			     5490  9010  9020  9030  9040  9050  9060  9070  9080  9090  9100  6010  6030  6110  6120  6130  8010  8020  8030  8040
			     8050  8070  8120  8310  3010  3020  3030  3070  3080  3090  3100  3130  3140  3150  3190  3200  3250  3260  3270  3280
			     3320  3400  3410  3420  3430  14000 14010 14020
			   }
  diplomacy =
  { relation = { tag = AFG value = 50 }
    relation = { tag = ARG value = 30 }
    relation = { tag = AST value = -200 }
    relation = { tag = BEL value = -200 }
    relation = { tag = BHU value = -200 }
    relation = { tag = BUL value = 150 }
    relation = { tag = CAN value = -200 }
    relation = { tag = CHL value = 30 }
    relation = { tag = SLO value = 120 }
    relation = { tag = ENG value = -200 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = -200 }
    relation =
    { tag        = GER
      value      = 200
      guaranteed = { day = 27 month = september year = 1940 }
    }
    relation = { tag = HOL value = -200 }
    relation =
    { tag        = HUN
      value      = 200
      guaranteed = { day = 20 month = november year = 1940 }
    }
    relation =
    { tag        = JAP
      value      = 125
      guaranteed = { day = 27 month = september year = 1940 }
    }
    relation = { tag = NEP value = -200 }
    relation = { tag = NIC value = -200 }
    relation = { tag = NZL value = -200 }
    relation = { tag = OMN value = -200 }
    relation = { tag = POR value = 65 }
    relation =
    { tag        = ROM
      value      = 150
      guaranteed = { day = 20 month = november year = 1940 }
    }
    relation = { tag = SAF value = -200 }
    relation = { tag = SAU value = -25 }
    relation = { tag = SCH value = 25 }
    relation =
    { tag        = SPA
      value      = 50
      guaranteed = { day = 18 month = november year = 1940 }
    }
    relation = { tag = TUR value = 1 }
    relation = { tag = VIC value = 50 }
    relation = { tag = YEM value = -200 }
  }
  headofstate            = { type = 9 id = 3001 }
  headofgovernment       = { type = 9 id = 3002 }
  foreignminister        = { type = 9 id = 3003 }
  armamentminister       = { type = 9 id = 3067 }
  ministerofsecurity     = { type = 9 id = 3005 }
  ministerofintelligence = { type = 9 id = 3109 }
  chiefofstaff           = { type = 9 id = 3125 }
  chiefofarmy            = { type = 9 id = 3140 }
  chiefofnavy            = { type = 9 id = 3149 }
  chiefofair             = { type = 9 id = 3161 }
  dormant_teams		 = { 1815 }
  dormant_ministers      = { 3008 }
  dormant_leaders        = { 6015 6194 }
  # ## Italian OOB 1941 ####
  landunit =
  { id       = { type = 10908 id = 800 }
    location = 368
    name     = "1a Armata"
    division =
    { id            = { type = 10908 id = 801 }
      name          = "7a Divisione 'Lupi di Toscana'"
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 2
      strength      = 100
    }
    division =
    { id       = { type = 10908 id = 804 }
      name     = "5a Divisione Alpina 'Pusteria'"
      type     = bergsjaeger
      model    = 1
      strength = 70
    }
  }
  landunit =
  { id       = { type = 10908 id = 806 }
    location = 515
    name     = "II Corpo d'Armata"
    division =
    { id            = { type = 10908 id = 807 }
      name          = "4a Divisione 'Livorno'"
      extra         = artillery
      brigade_model = 2
      type          = infantry
      model         = 2
      strength      = 100
    }
    division =
    { id       = { type = 10908 id = 809 }
      name     = "36a Divisione 'Forlì'"
      type     = infantry
      model    = 2
      strength = 100
    }
  }
  landunit =
  { id       = { type = 10908 id = 812 }
    location = 521
    name     = "III Corpo d'Armata"
    division =
    { id       = { type = 10908 id = 814 }
      name     = "6a Divisione 'Cuneo'"
      type     = infantry
      model    = 2
      strength = 100
    }
  }
  landunit =
  { id       = { type = 10908 id = 816 }
    location = 534
    name     = "XV Corpo d'Armata"
    division =
    { id       = { type = 10908 id = 819 }
      name     = "44a Divisione 'Cremona'"
      type     = infantry
      model    = 2
      strength = 100
    }
  }
  landunit =
  { id       = { type = 10908 id = 824 }
    location = 525
    name     = "I Corpo d'Armata"
    division =
    { id       = { type = 10908 id = 825 }
      name     = "1a Divisione 'Superga'"
      type     = infantry
      strength = 100
      model    = 2
    }
    division =
    { id       = { type = 10908 id = 826 }
      name     = "24a Divisione 'Pinerolo'"
      type     = infantry
      model    = 2
      strength = 100
    }
  }
  landunit =
  { id       = { type = 10908 id = 832 }
    location = 518
    name     = "Corpo d'Armata Alpino"
    division =
    { id       = { type = 10908 id = 833 }
      name     = "1a Divisione Alpina 'Taurinense'"
      type     = bergsjaeger
      model    = 1
      strength = 100
    }
  }
  landunit =
  { id       = { type = 10908 id = 837 }
    location = 523
    name     = "V Corpo d'Armata"
    division =
    { id       = { type = 10908 id = 838 }
      name     = "12a Divisione 'Sassari'"
      type     = infantry
      model    = 2
      strength = 70
    }
    division =
    { id       = { type = 10908 id = 839 }
      name     = "15a Divisione 'Bergamo'"
      type     = infantry
      model    = 2
      strength = 70
    }
    division =
    { id       = { type = 10908 id = 840 }
      name     = "57a Divisione 'Lombardia'"
      type     = infantry
      model    = 2
      strength = 70
    }
  }
  landunit =
  { id       = { type = 10908 id = 841 }
    location = 382
    name     = "XI Corpo d'Armata"
    division =
    { id       = { type = 10908 id = 842 }
      name     = "13a Divisione 'Re'"
      type     = infantry
      model    = 2
      strength = 100
    }
    division =
    { id       = { type = 10908 id = 843 }
      name     = "14a Divisione 'Isonzo'"
      type     = infantry
      model    = 2
      strength = 70
    }
  }
  landunit =
  { id       = { type = 10908 id = 844 }
    location = 415
    name     = "Corpo d'Armata Celere"
    division =
    { id       = { type = 10908 id = 845 }
      name     = "1a Divisione Celere 'Eugenio di Savoia'"
      type     = cavalry
      model    = 2
      strength = 100
    }
    division =
    { id       = { type = 10908 id = 846 }
      name     = "2a Divisione Celere 'Emanuele Filiberto'"
      type     = cavalry
      model    = 2
      strength = 100
    }
  }
  landunit =
  { id       = { type = 10908 id = 857 }
    location = 378
    name     = "VI Corpo d'Armata"
    division =
    { id    = { type = 10908 id = 858 }
      name  = "18a Divisione 'Messina'"
      type  = infantry
      model = 2
    }
    division =
    { id    = { type = 10908 id = 859 }
      name  = "49a Divisione 'Parma'"
      type  = infantry
      model = 2
    }
  }
  landunit =
  { id       = { type = 10908 id = 861 }
    location = 531
    name     = "XIV Corpo d'Armata"
    division =
    { id       = { type = 10908 id = 862 }
      name     = "32a Divisione 'Marche'"
      type     = infantry
      model    = 2
      strength = 100
    }
    division =
    { id       = { type = 10908 id = 863 }
      name     = "38a Divisione 'Puglie'"
      type     = infantry
      model    = 2
      strength = 100
    }
  }
  landunit =
  { id       = { type = 10908 id = 864 }
    location = 401
    name     = "XII Corpo d'Armata"
    division =
    { id       = { type = 10908 id = 865 }
      name     = "28a Divisione 'Aosta'"
      type     = infantry
      model    = 2
      strength = 100
    }
    division =
    { id       = { type = 10908 id = 866 }
      name     = "54a Divisione 'Napoli'"
      type     = infantry
      model    = 2
      strength = 100
    }
  }
  landunit =
  { id       = { type = 10908 id = 867 }
    location = 369
    name     = "13a Corpo d'Armata"
    division =
    { id       = { type = 10908 id = 868 }
      name     = "30a Divisione 'Sabauda'"
      type     = infantry
      model    = 2
      strength = 100
    }
    division =
    { id       = { type = 10908 id = 869 }
      name     = "31a Divisione 'Calabria'"
      type     = infantry
      strength = 100
      model    = 2
    }
  }
  # ##########################################
  # Army Group North Africa
  # Gen. E.- Bastico#
  # ##########################################
  landunit =
  { id       = { type = 10908 id = 870 }
    location = 916
    name     = "Motocorazzato"
    dig_in   = 10
    division =
    { id       = { type = 10908 id = 851 }
      name     = "132a Divisione Corazzata 'Ariete'"
      type     = armor
      model    = 2
      strength = 100
    }
    division =
    { id       = { type = 10908 id = 852 }
      name     = "102a Divisione Motocorazzata 'Trento'"
      type     = motorized
      model    = 1
      strength = 100
    }
    division =
    { id       = { type = 10908 id = 853 }
      name     = "101a Divisione Motocorazzata 'Trieste'"
      type     = motorized
      model    = 1
      strength = 100
    }
  }
  landunit =
  { id       = { type = 10908 id = 871 }
    location = 920
    name     = "XXI Corpo d'Armata"
    division =
    { id       = { type = 10908 id = 854 }
      name     = "133a Divisione Corazzata'Littorio'"
      type     = light_armor
      model    = 2
      strength = 100
    }
    division =
    { id       = { type = 10908 id = 855 }
      name     = "27a Divisione 'Brescia'"
      type     = infantry
      model    = 2
      strength = 100
    }
    division =
    { id       = { type = 10908 id = 856 }
      name     = "25a Divisione 'Bologna'"
      type     = infantry
      model    = 2
      strength = 100
    }
  }
  landunit =
  { id       = { type = 10908 id = 872 }
    location = 924
    name     = "XX Corpo d'Armata"
    division =
    { id       = { type = 10908 id = 879 }
      name     = "17a Divisione 'Pavia'"
      type     = infantry
      strength = 100
      model    = 2
    }
    division =
    { id       = { type = 10908 id = 880 }
      name     = "185a divisione 'Folgore'"
      type     = paratrooper
      strength = 75
    }
  }
  landunit =
  { id       = { type = 10908 id = 885 }
    location = 917
    name     = "XXIII Corpo d'Armata"
    dig_in   = 10
    division =
    { id       = { type = 10908 id = 886 }
      name     = "63a Divisione 'Cirene'"
      type     = infantry
      model    = 2
      strength = 100
    }
    division =
    { id       = { type = 10908 id = 887 }
      name     = "62a Divisione 'Marmarica'"
      type     = infantry
      model    = 2
      strength = 100
    }
  }
  landunit =
  { id       = { type = 10908 id = 891 }
    location = 933
    name     = "IX Corpo d'Armata"
    division =
    { id       = { type = 10908 id = 892 }
      name     = "29a Divisione 'Piemonte'"
      type     = infantry
      model    = 2
      strength = 100
    }
    division =
    { id       = { type = 10908 id = 894 }
      name     = "48a Divisione 'Taro'"
      type     = infantry
      model    = 2
      strength = 100
    }
  }
  landunit =
  { id       = { type = 10908 id = 899 }
    location = 921
    name     = "VII Corpo d'Armata"
    division =
    { id       = { type = 10908 id = 900 }
      name     = "41a Divisione 'Firenze'"
      type     = infantry
      model    = 2
      strength = 100
    }
  }
  landunit =
  { id       = { type = 10908 id = 902 }
    location = 932
    name     = "VIII Corpo d'Armata"
    division =
    { id       = { type = 10908 id = 903 }
      name     = "51a Divisione 'Siena'"
      type     = infantry
      model    = 2
      strength = 100
    }
  }
  landunit =
  { id       = { type = 10908 id = 947 }
    location = 398
    name     = "IX Corpo d'Armata"
    division =
    { id       = { type = 10908 id = 948 }
      name     = "50a Divisione 'Regina'"
      type     = infantry
      strength = 70
      model    = 2
    }
  }
  landunit =
  { id       = { type = 10908 id = 949 }
    location = 390
    name     = "XVI Corpo d'Armata"
    division =
    { id       = { type = 10908 id = 950 }
      name     = "19a Divisione 'Venezia'"
      type     = infantry
      model    = 2
      strength = 100
    }
    division =
    { id       = { type = 10908 id = 952 }
      name     = "53a Divisione 'Arezzo'"
      type     = infantry
      strength = 100
      model    = 2
    }
  }
  # #################################
  # ########Italian exp. forces/russia######
  # #################################
  landunit =
  { id       = { type = 10908 id = 828 }
    location = 479
    name     = "III Corpo di Spedizione"
    division =
    { id       = { type = 10908 id = 829 }
      name     = "2a Divisione 'Sforzesca'"
      type     = infantry
      model    = 2
      strength = 100
    }
    division =
    { id            = { type = 10908 id = 813 }
      name          = "3a Divisione 'Ravenna'"
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 2
      strength      = 100
    }
    division =
    { id       = { type = 10908 id = 817 }
      name     = "5a Divisione 'Cosseria'"
      type     = infantry
      model    = 2
      strength = 100
    }
  }
  landunit =
  { id       = { type = 10908 id = 848 }
    location = 479
    name     = "XXXV Corpo di Spedizione"
    division =
    { id           = { type = 10908 id = 849 }
      name         = "9a Divisione 'Pasubio'"
      type         = motorized
      model        = 2
      strength     = 100
      organisation = 30
    }
    division =
    { id       = { type = 10908 id = 850 }
      name     = "52a Divisione 'Torino'"
      type     = motorized
      model    = 2
      strength = 100
    }
    division =
    { id       = { type = 10908 id = 847 }
      name     = "3a Divisione 'Principe Amedeo'"
      type     = cavalry
      model    = 2
      strength = 100
    }
  }
  landunit =
  { id       = { type = 10908 id = 820 }
    location = 479
    name     = "Corpo d'Armata Alpino"
    division =
    { id       = { type = 10908 id = 823 }
      name     = "2a Divisione Alpina 'Tridentina'"
      type     = bergsjaeger
      model    = 1
      strength = 100
    }
    division =
    { id       = { type = 10908 id = 953 }
      name     = "3a Divisione Alpina 'Julia'"
      type     = bergsjaeger
      model    = 1
      strength = 100
    }
    division =
    { id       = { type = 10908 id = 810 }
      name     = "4a Divisione Alpina 'Cuneense'"
      type     = bergsjaeger
      model    = 1
      strength = 100
    }
  }
  landunit =
  { location = 370
    id       = { type = 10908 id = 1100 }
    name     = "Q.G. Gruppo d'Armata Nordico"
    division =
    { id       = { type = 10908 id = 1101 }
      name     = "Q.G. Gruppo d'Armata Nordico"
      type     = hq
      model    = 0
      strength = 100
    }
  }
  landunit =
  { location = 924
    id       = { type = 10908 id = 1102 }
    name     = "Q.G. Gruppo d'Armata Libico"
    division =
    { id       = { type = 10908 id = 1103 }
      name     = "Q.G. Gruppo d'Armata Libico"
      type     = hq
      model    = 0
      strength = 100
    }
  }
  landunit =
  { location = 521
    id       = { type = 10908 id = 1104 }
    name     = "Q.G. Gruppo d'Armata del Sud"
    division =
    { id       = { type = 10908 id = 1105 }
      name     = "Q.G. Gruppo d'Armata del Sud"
      type     = hq
      model    = 0
      strength = 100
    }
  }
  # ###########################
  # ###########################
  navalunit =
  { id       = { type = 10908 id = 212 }
    name     = "Regia Marina"
    location = 523
    base     = 523
    division =
    { id    = { type = 10908 id = 99 }
      name  = "RM Andrea Doria"
      type  = battleship
      model = 0
    }
    division =
    { id    = { type = 10908 id = 98 }
      name  = "RM Caio Duilio"
      type  = battleship
      model = 0
    }
    division =
    { id    = { type = 10908 id = 97 }
      name  = "RM Giulio Cesare"
      type  = battleship
      model = 0
    }
    division =
    { id    = { type = 10908 id = 400 }
      name  = "RM Taranto"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 10908 id = 401 }
      name  = "RM Bari"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 10908 id = 213 }
      name  = "2a Flottiglia Torpediniere"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 10908 id = 96 }
      name  = "3a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 10908 id = 95 }
      name  = "4a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 10908 id = 94 }
      name  = "2a Flottiglia Sommergibili"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 10908 id = 93 }
      name  = "3a Flottiglia Sommergibili"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 10908 id = 92 }
      name  = "4a Flottiglia Sommergibili"
      type  = submarine
      model = 3
    }
    division =
    { id    = { type = 10908 id = 91 }
      name  = "5a Flottiglia Sommergibili"
      type  = submarine
      model = 3
    }
  }
  navalunit =
  { id       = { type = 10908 id = 217 }
    name     = "1a Divisione/1a Squadra"
    location = 523
    base     = 523
    division =
    { id    = { type = 10908 id = 214 }
      name  = "RM Vittorio Veneto"
      type  = battleship
      model = 3
    }
    division =
    { id    = { type = 10908 id = 219 }
      name  = "RM Gorizia"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 10908 id = 221 }
      name  = "9a Flottiglia Torpediniere"
      type  = destroyer
      model = 1
    }
    division =
    { id   = { type = 10908 id = 305 }
      name = "Flottiglia Tarquinia"
      type = transport
    }
  }
  navalunit =
  { id       = { type = 10908 id = 500 }
    name     = "RM Littorio"
    location = 523
    base     = 523
    division =
    { id       = { type = 10908 id = 501 }
      name     = "RM Littorio"
      strength = 100
      type     = battleship
      model    = 3
    }
  }
  navalunit =
  { id       = { type = 10908 id = 222 }
    name     = "4a Divisione/1a Squadra"
    location = 523
    base     = 523
    division =
    { id    = { type = 10908 id = 223 }
      name  = "RM Alberico da Barbiano"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 10908 id = 224 }
      name  = "RM Luigi Cadorna"
      type  = light_cruiser
      model = 1
    }
    division =
    { id       = { type = 10908 id = 225 }
      name     = "RM Alberto da Giussano"
      type     = light_cruiser
      model    = 1
      maxspeed = 34
    }
    division =
    { id    = { type = 10908 id = 226 }
      name  = "RM Eugenio di Savoia"
      type  = light_cruiser
      model = 2
    }
    division =
    { id    = { type = 10908 id = 227 }
      name  = "12a Flottiglia Torpediniere"
      type  = destroyer
      model = 2
    }
    division =
    { id   = { type = 10908 id = 306 }
      name = "Flottiglia Porto di Roma"
      type = transport
    }
  }
  navalunit =
  { id       = { type = 10908 id = 228 }
    name     = "5a Divisione/1a Squadra"
    location = 523
    base     = 523
    division =
    { id    = { type = 10908 id = 230 }
      name  = "7a Flottiglia Torpediniere"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 10908 id = 231 }
      name  = "8a Flottiglia Torpediniere"
      type  = destroyer
      model = 2
    }
    division =
    { id   = { type = 10908 id = 307 }
      name = "Flottiglia Giampaolo"
      type = transport
    }
  }
  navalunit =
  { id       = { type = 10908 id = 232 }
    name     = "8a Divisione/1a Squadra"
    location = 523
    base     = 523
    division =
    { id    = { type = 10908 id = 235 }
      name  = "16a Flottiglia Torpediniere"
      type  = destroyer
      model = 2
    }
    division =
    { id   = { type = 10908 id = 308 }
      name = "Flottiglia Aventino"
      type = transport
    }
  }
  navalunit =
  { id       = { type = 10908 id = 236 }
    name     = "9a Divisione/1a Squadra"
    location = 378
    base     = 378
    division =
    { id    = { type = 10908 id = 239 }
      name  = "14a Flottiglia Torpediniere"
      type  = destroyer
      model = 1
    }
    division =
    { id   = { type = 10908 id = 309 }
      name = "Flottiglia Puccini"
      type = transport
    }
  }
  navalunit =
  { id       = { type = 10908 id = 241 }
    name     = "2a Squadra"
    location = 378
    base     = 378
    division =
    { id    = { type = 10908 id = 242 }
      name  = "RM Duca degli Abruzzi"
      type  = light_cruiser
      model = 3
    }
  }
  navalunit =
  { id       = { type = 10908 id = 243 }
    name     = "2a Divisione/2a Squadra"
    location = 378
    base     = 378
    division =
    { id    = { type = 10908 id = 244 }
      name  = "RM Giovanni dalle Bande Nere"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 10908 id = 245 }
      name  = "RM Giuseppe Garibaldi"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 10908 id = 246 }
      name  = "10a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
    division =
    { id   = { type = 10908 id = 310 }
      name = "Flottiglia Aspromonte"
      type = transport
    }
  }
  navalunit =
  { id       = { type = 10908 id = 247 }
    name     = "3a Divisione/2a Squadra"
    location = 378
    base     = 378
    division =
    { id    = { type = 10908 id = 248 }
      name  = "RM Trento"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 10908 id = 249 }
      name  = "RM Bolzano"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 10908 id = 250 }
      name  = "RM Trieste"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id   = { type = 10908 id = 311 }
      name = "Flottiglia Maria"
      type = transport
    }
  }
  navalunit =
  { id       = { type = 10908 id = 252 }
    name     = "7a Divisione/2a Squadra"
    location = 378
    base     = 378
    division =
    { id    = { type = 10908 id = 254 }
      name  = "RM Duca d'Aosta"
      type  = light_cruiser
      model = 2
    }
    division =
    { id    = { type = 10908 id = 255 }
      name  = "RM Muzio Attendolo"
      type  = light_cruiser
      model = 2
    }
    division =
    { id    = { type = 10908 id = 256 }
      name  = "RM Raimondo Montecuccoli"
      type  = light_cruiser
      model = 2
    }
    division =
    { id   = { type = 10908 id = 312 }
      name = "Flottiglia Sagittario"
      type = transport
    }
  }
  navalunit =
  { id       = { type = 10908 id = 258 }
    name     = "Flotta Sommergibili"
    location = 378
    base     = 378
    division =
    { id    = { type = 10908 id = 260 }
      name  = "51a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 10908 id = 261 }
      name  = "52a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
  }
  navalunit =
  { id       = { type = 10908 id = 262 }
    name     = "1a Flottiglia Sommergibili"
    location = 378
    base     = 378
    division =
    { id    = { type = 10908 id = 263 }
      name  = "11a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 10908 id = 264 }
      name  = "12a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 10908 id = 265 }
      name  = "13a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 10908 id = 266 }
      name  = "14a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
  }
  navalunit =
  { id       = { type = 10908 id = 270 }
    name     = "2a Flottiglia Sommergibili"
    location = 378
    base     = 378
    division =
    { id    = { type = 10908 id = 271 }
      name  = "21a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 10908 id = 272 }
      name  = "22a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
  }
  navalunit =
  { id       = { type = 10908 id = 273 }
    name     = "3a Flottiglia Sommergibili"
    location = 378
    base     = 378
    division =
    { id    = { type = 10908 id = 274 }
      name  = "31a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 10908 id = 275 }
      name  = "33a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 10908 id = 276 }
      name  = "34a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
  }
  navalunit =
  { id       = { type = 10908 id = 279 }
    name     = "4a Flottiglia Sommergibili"
    location = 523
    base     = 523
    division =
    { id    = { type = 10908 id = 280 }
      name  = "40a Flottiglia Sommergibili"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 10908 id = 281 }
      name  = "41a Flottiglia Sommergibili"
      type  = submarine
      model = 2
    }
  }
  navalunit =
  { id       = { type = 10908 id = 293 }
    name     = "Comando Navale Libico"
    location = 924
    base     = 924
    division =
    { id    = { type = 10908 id = 294 }
      name  = "1a Flottiglia Torpediniere"
      type  = destroyer
      model = 0
    }
  }
  navalunit =
  { id       = { type = 10908 id = 295 }
    name     = "6a Flottiglia Sommergibili"
    location = 924
    base     = 924
    division =
    { id    = { type = 10908 id = 283 }
      name  = "61a Flottiglia Sommergibili"
      type  = submarine
      model = 2
    }
  }
  # ###########################
  # ###########################
  airunit =
  { location = 523
    base     = 523
    id       = { type = 10908 id = 166 }
    name     = "2o Comando Caccia 'Borea'"
    division =
    { id       = { type = 10908 id = 167 }
      name     = "2a Divisione Caccia 'Borea'"
      strength = 65
      type     = interceptor
      model    = 3
    }
  }
  airunit =
  { location = 523
    base     = 523
    id       = { type = 10908 id = 169 }
    name     = "2a Squadra Aerea"
    division =
    { id       = { type = 10908 id = 170 }
      name     = "6a Divisione Caccia"
      strength = 65
      type     = interceptor
      model    = 3
    }
  }
  airunit =
  { location = 523
    base     = 523
    id       = { type = 10908 id = 171 }
    name     = "3o Comando Aerosiluranti 'Centauro'"
    division =
    { id       = { type = 10908 id = 172 }
      name     = "11o Stormo Aerosiluranti"
      strength = 65
      type     = naval_bomber
      model    = 1
    }
  }
  airunit =
  { location = 525
    base     = 525
    id       = { type = 10908 id = 175 }
    name     = "11o Comando Aerosiluranti 'Nibbio'"
    division =
    { id       = { type = 10908 id = 176 }
      name     = "30o Stormo Aerosiluranti"
      strength = 65
      type     = naval_bomber
      model    = 1
    }
  }
  airunit =
  { location = 525
    base     = 525
    id       = { type = 10908 id = 178 }
    name     = "1o Comando Caccia 'Aquila'"
    division =
    { id       = { type = 10908 id = 179 }
      name     = "1a Divisione Caccia 'Aquila'"
      strength = 65
      type     = multi_role
      model    = 0
    }
  }
  airunit =
  { location = 525
    base     = 525
    id       = { type = 10908 id = 180 }
    name     = "3a Squadra Aerea"
    division =
    { id       = { type = 10908 id = 181 }
      name     = "7a Divisione Caccia"
      strength = 65
      type     = multi_role
      model    = 0
    }
  }
  airunit =
  { location = 534
    base     = 534
    id       = { type = 10908 id = 182 }
    name     = "5o Comando Aerosiluranti 'Eolo'"
    division =
    { id       = { type = 10908 id = 184 }
      name     = "90 Stormo Aerosiluranti"
      strength = 65
      type     = naval_bomber
      model    = 1
    }
  }
  airunit =
  { location = 515
    base     = 515
    id       = { type = 10908 id = 185 }
    name     = "8o Comando Caccia 'Astore'"
    division =
    { id       = { type = 10908 id = 186 }
      name     = "8a Divisione Caccia 'Astore'"
      strength = 65
      type     = interceptor
      model    = 3
    }
  }
  airunit =
  { location = 515
    base     = 515
    id       = { type = 10908 id = 188 }
    name     = "4a Squadra Aerea"
    division =
    { id       = { type = 10908 id = 189 }
      name     = "35o Stormo Bombardieri Tattici"
      strength = 65
      type     = tactical_bomber
      model    = 0
    }
    division =
    { id       = { type = 10908 id = 191 }
      name     = "39a Divisione Trasporti"
      strength = 65
      type     = transport_plane
      model    = 0
    }
  }
  airunit =
  { location = 525
    base     = 525
    id       = { type = 10908 id = 192 }
    name     = "Aeronautica della Sardegna"
    division =
    { id       = { type = 10908 id = 193 }
      name     = "10o Stormo Aerosiluranti 'Marte' "
      strength = 65
      type     = naval_bomber
      model    = 1
    }
    division =
    { id       = { type = 10908 id = 194 }
      name     = "3a Divisione Caccia"
      strength = 65
      type     = multi_role
      model    = 0
    }
  }
  airunit =
  { location = 924
    base     = 924
    id       = { type = 10908 id = 199 }
    name     = "Aeronautica Libia Ovest"
    division =
    { id       = { type = 10908 id = 200 }
      name     = "2a Divisione Caccia"
      strength = 65
      type     = interceptor
      model    = 3
    }
    division =
    { id       = { type = 10908 id = 202 }
      name     = "15o Stormo Aerosiluranti"
      strength = 65
      type     = naval_bomber
      model    = 0
    }
  }
  airunit =
  { location = 924
    base     = 924
    id       = { type = 10908 id = 204 }
    name     = "Aeronautica Libia Est"
    division =
    { id       = { type = 10908 id = 205 }
      name     = "14a Divisione Caccia 'Rex'"
      strength = 65
      type     = multi_role
      model    = 0
    }
    division =
    { id       = { type = 10908 id = 206 }
      name     = "13o Stormo Bombardieri Tattici 'Pegaso'"
      strength = 65
      type     = tactical_bomber
      model    = 3
    }
  }
  airunit =
  { location = 924
    base     = 924
    id       = { type = 10908 id = 208 }
    name     = "Aeronautica dell'A.O.I."
    division =
    { id       = { type = 10908 id = 209 }
      name     = "Divisione Caccia dell'A.O.I."
      strength = 65
      type     = interceptor
      model    = 3
    }
    division =
    { id       = { type = 10908 id = 210 }
      name     = "Stormo Bombardieri Tattici dell'A.O.I."
      strength = 65
      type     = tactical_bomber
      model    = 3
    }
  }
  division_development =
  { name  = "RM Roma"
    type  = battleship
    model = 3
    cost  = 9
    id    = { type = 10908 id = 600 }
    date  = { year = 1942 month = june day = 14 }
  }
  division_development =
  { name  = "17a Flottiglia Torpediniere"
    type  = destroyer
    model = 2
    cost  = 1.8
    id    = { type = 10908 id = 601 }
    date  = { year = 1941 month = october day = 1 }
  }
  division_development =
  { name  = "71a Flottiglia Sommergibili"
    type  = submarine
    model = 2
    cost  = 1.6
    id    = { type = 10908 id = 602 }
    date  = { year = 1941 month = august day = 1 }
  }
}
