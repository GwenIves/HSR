
##############################
# Country definition for ARG #
##############################

province =
{ id         = 667
  anti_air   = 3
  naval_base = { size = 5 current_size = 5 }
  air_base   = { size = 3 current_size = 3 }
}              # Buenos Aires
province = { id = 844 anti_air = 1 } # Corrientes
province = { id = 851 ic = 1 } # Rosario
province =
{ id         = 853
  anti_air   = 2
  naval_base = { size = 8 current_size = 8 }
  air_base   = { size = 3 current_size = 3 }
}              # Bahia Blanca
province = { id = 854 anti_air = 1 } # Viedma

#####################
# Country main data #
#####################

country =
{ tag                    = ARG
  manpower               = 50
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 667
  diplomacy =
  { relation = { tag = BOL value = 50 }
    relation = { tag = BRA value = -10 }
    relation = { tag = CHL value = -20 }
    relation = { tag = COL value = 10 }
    relation = { tag = ENG value = 75 }
    relation = { tag = ECU value = 10 }
    relation = { tag = GER value = 75 }
    relation = { tag = ITA value = 30 }
    relation = { tag = PAR value = 50 }
    relation = { tag = PRU value = 20 }
    relation = { tag = URU value = -50 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }
  nationalprovinces      = { 667 853 852 843 844 845 851 854 855 857 858 859 862 863 865 850 866 }
  ownedprovinces         = { 667 853 852 843 844 845 851 854 855 857 858 859 862 863 865 850 }
  controlledprovinces    = { 667 853 852 843 844 845 851 854 855 857 858 859 862 863 865 850 }
  # Semi-Major Tech '36
  # Group C 1939 techs
  # ######################
  techapps               = { 5070  4190  3410  3090  4010  4020  4120  4130  2150  2010  2020  2030  2040  2290  2300  2310  2320  2330  2400  2450
			     2460  2510  1010  1020  1190  1200  1110  9010  9020  5010  5020  5080  5090  5100  5050  5110  5190  5200  6010  6020
			     3010  3020  3070  3080  3130  3140  3250  3400  8010  8020  8040  8050  14000
			   }
  SpyInfo                = { country = "ARG" NumberOfSpies = 7 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 3
    free_market       = 8
    freedom           = 6
    professional_army = 6
    defense_lobby     = 7
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 35039 }
  headofgovernment       = { type = 9 id = 35053 }
  foreignminister        = { type = 9 id = 35072 }
  armamentminister       = { type = 9 id = 35099 }
  ministerofsecurity     = { type = 9 id = 35125 }
  ministerofintelligence = { type = 9 id = 35148 }
  chiefofstaff           = { type = 9 id = 35167 }
  chiefofarmy            = { type = 9 id = 35184 }
  chiefofnavy            = { type = 9 id = 35200 }
  chiefofair             = { type = 9 id = 35217 }
  dormant_ministers      = { 35001 35002 35003 35004 35005 35006 35007 35008 35009 35010 35031 35045 35173 }
  landunit =
  { id       = { type = 30051 id = 1 }
    name     = "I Cuerpo de Ejército"
    location = 667 # Buenos Aires
    # Leader? Arturo Rawson? Pedro Ramirez? Edelmiro Farrell?
    division =
    { id       = { type = 30051 id = 1001 }
      name     = "Supremo Commandante des HQ"
      strength = 100
      type     = hq
      model    = 0
    }
    division =
    { id       = { type = 30051 id = 100 }
      name     = "III Brigada 'Pellegrini'"
      strength = 100
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 30051 id = 101 }
      name     = "II Brigada 'San Martín'"
      strength = 100
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 30051 id = 102 }
      name     = "IV Brigada de Infantería"
      strength = 100
      type     = infantry
      extra    = anti_air
    }
  }
  landunit =
  { id       = { type = 30051 id = 2 }
    name     = "II Cuerpo de Ejército"
    location = 845
    division =
    { id       = { type = 30051 id = 200 }
      name     = "VI Brigada de Montaña 'Villegas'"
      strength = 100
      type     = bergsjaeger
    }
    division =
    { id       = { type = 30051 id = 201 }
      name     = "VIII Brigada de Montaña 'Luzuriaga'"
      strength = 50
      type     = bergsjaeger
    }
  }
  landunit =
  { id       = { type = 30051 id = 3 }
    name     = "Gendarmería Nacional"
    location = 844
    division =
    { id       = { type = 30051 id = 300 }
      name     = "Agrupación IV GN 'Misiones'"
      strength = 100
      type     = militia
    }
    division =
    { id       = { type = 30051 id = 301 }
      name     = "Agrupación VI GN 'Formosa'"
      strength = 100
      type     = militia
    }
  }
  landunit =
  { id       = { type = 30051 id = 4 }
    name     = "III Cuerpo de Ejército"
    location = 863
    division =
    { id       = { type = 30051 id = 400 }
      name     = "XIII Brigada de Infantería"
      strength = 100
      type     = infantry
    }
  }
  navalunit =
  { name     = "Argentinian Navy"
    id       = { type = 30051 id = 113 }
    location = 853
    base     = 853
    division =
    { id    = { type = 30051 id = 114 }
      name  = "ARA Veinticinco De Mayo"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 30051 id = 116 }
      name  = "ARA Almirante Brown"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 30051 id = 118 }
      name  = "ARA Moreno"
      type  = battleship
      model = 0
    }
    division =
    { id    = { type = 30051 id = 120 }
      name  = "ARA Rivadavia"
      type  = battleship
      model = 0
    }
    division =
    { id    = { type = 30051 id = 122 }
      name  = "ARA Independencia"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 30051 id = 124 }
      name  = "ARA La Libertad"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 30051 id = 126 }
      name  = "ARA Generale Belgrano"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 30051 id = 188 }
      name  = "ARA Generale Pueyrredon"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 30051 id = 180 }
      name  = "1st Destroyer Flotilla"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 30051 id = 132 }
      name  = "2nd Destroyer Flotilla"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 30051 id = 134 }
      name  = "1st Submarine Flotilla"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 30051 id = 128 }
      name  = "ARA La Argentina"
      type  = light_cruiser
      model = 2
    }
    division =
    { id    = { type = 30051 id = 130 }
      name  = "3rd Destroyer Flotilla"
      type  = destroyer
      model = 1
    }
  }
  airunit =
  { id       = { type = 30051 id = 10 }
    name     = "Aviación del Ejército"
    location = 667
    base     = 667
    division =
    { id       = { type = 30051 id = 1000 }
      name     = "Grupo Aérea Nro. 1"
      strength = 100
      type     = interceptor
      model    = 0
    }
  }
  airunit =
  { id       = { type = 30051 id = 12 }
    name     = "Aviación Naval"
    location = 667
    base     = 667
    division =
    { id       = { type = 30051 id = 1002 }
      name     = "Fuerza Aeronaval Nro. 1"
      strength = 100
      type     = naval_bomber
      model    = 0
    }
  }
}
