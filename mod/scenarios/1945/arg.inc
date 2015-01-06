
##############################
# Country definition for ARG #
##############################

province =
{ id         = 667
  ic         = 4
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 3 current_size = 3 }
}              # Buenos Aires
province = { id = 850 ic = 2 } # Concordia
province = { id = 851 ic = 2 } # Rosario
province =
{ id         = 853
  naval_base = { size = 8 current_size = 8 }
  air_base   = { size = 3 current_size = 3 }
}              # Bahia Blanca

#####################
# Country main data #
#####################

country =
{ tag                    = ARG
  manpower               = 150
  # Resource Reserves
  energy                 = 5000
  metal                  = 5000
  rare_materials         = 5000
  oil                    = 5000
  supplies               = 5000
  capital                = 667
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 8
    free_market       = 8
    freedom           = 6
    professional_army = 6
    defense_lobby     = 7
    interventionism   = 3
  }
  SpyInfo                = { country = "ARG" NumberOfSpies = 6 }
  #SpyInfo                = { country = "CAN" NumberOfSpies = 5 }
  #SpyInfo                = { country = "BRA" NumberOfSpies = 8 }
  nationalprovinces      = { 667 853 852 843 844 845 851 854 855 857 858 859 862 863 865 850 }
  ownedprovinces         = { 667 853 852 843 844 845 851 854 855 857 858 859 862 863 865 850 }
  controlledprovinces    = { 667 853 852 843 844 845 851 854 855 857 858 859 862 863 865 850 }
  # Semi-Major Tech '36
  # Group C 1944 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1070  1110  1120  1130  1150  1190  1200  1210  1220  1310  14000 14010 14020 2010  2020  2030
			     2040  2050  2060  2070  2080  2150  2160  2170  2180  2220  2230  2290  2300  2310  2320  2330  2330  2340  2400  2410
			     2450  2460  2470  2510  2520  2530  3010  3020  3070  3080  3130  3140  3250  3400  4010  4020  4030  4040  4050  4060
			     4120  4130  4140  4170  4190  4250  5010  5020  5050  5060  5070  5080  5090  5100  5110  5120  5190  5200  5210  5220
			     5310  5320  5350  5360  5470  6010  6020  6040  6050  6060  6070  8010  8020  8040  8050  9010  9020  9030  9040
			   }
  diplomacy =
  { relation =
    { tag        = BOL
      value      = 50
      guaranteed = { day = 4 month = january year = 1944 }
    }
    relation = { tag = BRA value = -10 }
    relation = { tag = CHL value = -20 }
    relation = { tag = COL value = 10 }
    relation = { tag = ENG value = 75 }
    relation = { tag = ECU value = 10 }
    # relation = { tag = ITA value = 30 }
    relation = { tag = PAR value = 50 }
    relation = { tag = PRU value = 20 }
    relation = { tag = URU value = -50 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }
  dormant_ministers      = { 35001 35002 35003 35004 35005 35006 35007 35008 35009 35010 35031 35045 35173 35037 35053 35051 35073 35130 35149 35144
			     35165 35040 35039 35033 35223 35231 35035 35047 35224 35055 35049 35066 35103 35126 35137 35150 35135 35158 35229 35186
			     35201
			   }
  headofstate            = { type = 9 id = 35041 }
  headofgovernment       = { type = 9 id = 35058 }
  foreignminister        = { type = 9 id = 35081 }
  armamentminister       = { type = 9 id = 35108 }
  ministerofsecurity     = { type = 9 id = 35133 }
  ministerofintelligence = { type = 9 id = 35153 }
  chiefofstaff           = { type = 9 id = 35171 }
  chiefofarmy            = { type = 9 id = 35189 }
  chiefofnavy            = { type = 9 id = 35195 }
  chiefofair             = { type = 9 id = 35212 }
  # ## OOB
  landunit =
  { id       = { type = 10384 id = 1 }
    name     = "I Cuerpo de Ejército"
    location = 667
    # Leader? Arturo Rawson? Pedro Ramirez? Edelmiro Farrell?
    division =
    { id            = { type = 10384 id = 41 }
      name          = "III Brigada 'Pellegrini'"
      strength      = 100
      type          = infantry
      extra         = artillery
      brigade_model = 3
      model         = 3
    }
    division =
    { id       = { type = 10384 id = 2 }
      name     = "II Brigada 'San Martín'"
      strength = 100
      type     = infantry
      model    = 3
    }
    division =
    { id       = { type = 10384 id = 3 }
      name     = "I Brigada 'Ing. Krausse'"
      strength = 100
      type     = infantry
      model    = 3
    }
    division =
    { id       = { type = 10384 id = 4 }
      name     = "Agrupación IV GN 'Misiones'"
      strength = 100
      type     = militia
      model    = 1
    }
    division =
    { id       = { type = 10384 id = 5 }
      name     = "Agrupación VI GN 'Formosa'"
      strength = 100
      type     = militia
      model    = 1
    }
    division =
    { id       = { type = 10384 id = 6 }
      name     = "XIII Brigada de Caballería"
      strength = 100
      type     = cavalry
      model    = 2
    }
  }
  landunit =
  { id       = { type = 10384 id = 7 }
    name     = "II Cuerpo de Ejército"
    location = 667
    division =
    { id       = { type = 30051 id = 8 }
      name     = "VI Brigada de Montaña 'Villegas'"
      strength = 100
      type     = bergsjaeger
      model    = 2
    }
  }
  # ##############################
  # ## ARGENTINA NAVY OOB 1944 ###
  # ##############################
  navalunit =
  { id       = { type = 10384 id = 15 }
    name     = "Armada de Argentina"
    location = 667
    base     = 667
    division =
    { id    = { type = 10384 id = 16 }
      name  = "ARA Moreno"
      type  = battleship
      model = 1
    }
    division =
    { id    = { type = 10384 id = 17 }
      name  = "ARA Rivadavia"
      type  = battleship
      model = 1
    }
    division =
    { id        = { type = 10384 id = 18 }
      name      = "ARA Veinticinco De Mayo"
      type      = light_cruiser
      model     = 2
      seaattack = 9
    }
    division =
    { id        = { type = 10384 id = 19 }
      name      = "ARA Almirante Brown"
      type      = light_cruiser
      model     = 2
      seaattack = 9
    }
    division =
    { id    = { type = 10384 id = 20 }
      name  = "ARA Independencia"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 10384 id = 21 }
      name  = "ARA La Libertad"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 10384 id = 22 }
      name  = "ARA La Argentina"
      type  = light_cruiser
      model = 1
    }
    division =
    { id        = { type = 10384 id = 23 }
      name      = "ARA Generale Belgrano"
      type      = light_cruiser
      model     = 0
      seaattack = 4
    }
    division =
    { id        = { type = 10384 id = 24 }
      name      = "ARA Generale Pueyrredon"
      type      = light_cruiser
      model     = 0
      seaattack = 4
    }
    division =
    { id        = { type = 10384 id = 25 }
      name      = "ARA San Martín"
      type      = light_cruiser
      model     = 0
      seaattack = 4
    }
    division =
    { id    = { type = 10384 id = 26 }
      name  = "Cervantes/Garay/Cristofero"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 10384 id = 27 }
      name  = "Mendoza/Rioja/Tucumán"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 10384 id = 28 }
      name  = "D6/D8/D10"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 10384 id = 29 }
      name  = "S.Fe/Salta/S.del Estero"
      type  = submarine
      model = 1
    }
    division =
    { id   = { type = 10384 id = 30 }
      name = "ARA Cabo San Diego"
      type = transport
    }
    division =
    { id   = { type = 10384 id = 31 }
      name = "ARA Cabo S.F. de Paula"
      type = transport
    }
    division =
    { id   = { type = 10384 id = 32 }
      name = "ARA Cabo Buen Tiempo"
      type = transport
    }
    division =
    { id   = { type = 10384 id = 33 }
      name = "ARA Cabo San Pablo"
      type = transport
    }
    division =
    { id   = { type = 10384 id = 34 }
      name = "ARA Cabo San Sebastián"
      type = transport
    }
    division =
    { id   = { type = 10384 id = 35 }
      name = "ARA Cabo San Vicente"
      type = transport
    }
  }
  airunit =
  { id       = { type = 10384 id = 9 }
    name     = "Aviación del Ejército"
    location = 667
    base     = 667
    division =
    { id       = { type = 10384 id = 10 }
      name     = "Grupo Aérea Nro. 1"
      strength = 100
      type     = interceptor
      model    = 2
    }
  }
}
