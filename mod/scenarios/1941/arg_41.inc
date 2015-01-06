
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
province =
{ id       = 845
  anti_air = 2
  air_base = { size = 3 current_size = 3 }
}            # Córdoba
province = { id = 850 ic = 1 } # Concordia
province = { id = 851 ic = 1 anti_air = 1 } # Rosario
province =
{ id         = 852
  anti_air   = 3
  naval_base = { size = 7 current_size = 7 }
  air_base   = { size = 2 current_size = 2 }
}              # Mar del Plata
province =
{ id         = 853
  anti_air   = 2
  naval_base = { size = 8 current_size = 8 }
  air_base   = { size = 3 current_size = 3 }
}              # Bahia Blanca
province =
{ id         = 863
  anti_air   = 3
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
}              # Santa Cruz

#####################
# Country main data #
#####################

country =
{ tag                    = ARG
  manpower               = 50
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  capital                = 667
  SpyInfo                = { country = "ARG" NumberOfSpies = 8 }
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
  nationalprovinces      = { 667 853 852 843 844 845 851 854 855 857 858 859 862 863 865 850 866 }
  ownedprovinces         = { 667 853 852 843 844 845 851 854 855 857 858 859 862 863 865 850 }
  controlledprovinces    = { 667 853 852 843 844 845 851 854 855 857 858 859 862 863 865 850 }
  # Semi-Major Tech '36
  # Group C 1941 techs
  # ######################
  techapps               = { 5070  1120  4190  3410  3090  4010  4020  4030  4040  4120  4130  4140  2010  2020  2030  2040  2050  2150  2290  2300
			     2310  2320  2330  2400  2410  2450  2460  2470  2510  2520  1010  1020  1030  1190  1200  1210  1220  1110  2330  9010
			     9020  9030  5010  5020  5050  5080  5090  5100  5110  5190  5200  5470  6010  6020  6040  3010  3020  3070  3080  3130
			     3140  3250  3400  8010  8020  8040  8050  14000
			   }
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
  headofstate            = { type = 9 id = 35039 }
  headofgovernment       = { type = 9 id = 35053 }
  foreignminister        = { type = 9 id = 35074 }
  armamentminister       = { type = 9 id = 35101 }
  ministerofsecurity     = { type = 9 id = 35126 }
  ministerofintelligence = { type = 9 id = 35149 }
  chiefofstaff           = { type = 9 id = 35167 }
  chiefofarmy            = { type = 9 id = 35185 }
  chiefofnavy            = { type = 9 id = 35201 }
  chiefofair             = { type = 9 id = 35218 }
  dormant_ministers      = { 35001 35002 35003 35004 35005 35006 35007 35008 35009 35010 35031 35045 35173 35037 35051 35073 35130 35144 35165 }
  # Argentina OOB
  landunit =
  { location = 667
    id       = { type = 10001 id = 1100 }
    name     = "Argentinian Army HQ"
    division =
    { id       = { type = 10001 id = 1101 }
      name     = "Argentinian Army HQ"
      type     = hq
      model    = 1
      strength = 100
    }
  }
  landunit =
  { id       = { type = 10001 id = 1 }
    name     = "I Cuerpo del Ejército"
    location = 667 # Buenos Aires
    division =
    { id       = { type = 10001 id = 2 }
      name     = "III Brigada 'Pellegrini'"
      strength = 100
      type     = infantry
      model    = 1
      extra    = artillery
    }
    division =
    { id       = { type = 10001 id = 3 }
      name     = "II Brigada 'San Martín'"
      strength = 100
      type     = infantry
      model    = 1
      extra    = artillery
    }
    division =
    { id       = { type = 10001 id = 4 }
      name     = "I Brigada 'Ing. Krausse'"
      strength = 100
      type     = infantry
      model    = 1
      extra    = engineer
    }
    division =
    { id       = { type = 10001 id = 5 }
      name     = "I Brigada Blindada 'Rodríguez'"
      strength = 100
      type     = light_armor
      model    = 1
    }
  }
  landunit =
  { id       = { type = 10001 id = 6 }
    name     = "II Cuerpo del Ejército"
    location = 845 # Córdoba
    division =
    { id       = { type = 10001 id = 7 }
      name     = "VI Brigada de Montaña 'Villegas'"
      strength = 100
      type     = bergsjaeger
      model    = 1
    }
    division =
    { id       = { type = 10001 id = 8 }
      name     = "IV Brigada de Infantería de Montaña"
      strength = 100
      type     = bergsjaeger
      model    = 1
      extra    = anti_air
    }
  }
  # were assigned to the north of the country
  landunit =
  { id       = { type = 10001 id = 9 }
    name     = "Gendarmería Nacional"
    location = 844 # Corrientes
    division =
    { id       = { type = 10001 id = 10 }
      name     = "Agrupación IV GN 'Misiones'"
      strength = 100
      type     = militia
    }
    division =
    { id       = { type = 10001 id = 11 }
      name     = "Agrupación VI GN 'Formosa'"
      strength = 100
      type     = militia
    }
  }
  # were assigned to the south of the country
  landunit =
  { id       = { type = 10001 id = 12 }
    name     = "III Cuerpo del Ejército"
    location = 863 # Santa Cruz
    division =
    { id       = { type = 10001 id = 13 }
      name     = "XIII Brigada de Infantería"
      strength = 100
      type     = infantry
      extra    = engineer
    }
    division =
    { id       = { type = 10001 id = 14 }
      name     = "I Brigada de Caballería"
      strength = 100
      type     = cavalry
      model    = 1
    }
  }
  navalunit =
  { name     = "NAVY"
    id       = { type = 10001 id = 113 }
    location = 853
    base     = 853
    division =
    { id    = { type = 10001 id = 114 }
      name  = "ARA Veinticinco De Mayo"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 10001 id = 116 }
      name  = "ARA Almirante Brown"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 10001 id = 118 }
      name  = "ARA Moreno"
      type  = battleship
      model = 0
    }
    division =
    { id    = { type = 10001 id = 120 }
      name  = "ARA Rivadavia"
      type  = battleship
      model = 0
    }
    division =
    { id    = { type = 10001 id = 122 }
      name  = "ARA Independencia"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 10001 id = 124 }
      name  = "ARA La Libertad"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 10001 id = 126 }
      name  = "ARA Generale Belgrano"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 10001 id = 128 }
      name  = "ARA Generale Pueyrredon"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 10001 id = 130 }
      name  = "1st Destroyer Flotilla"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 10001 id = 132 }
      name  = "2nd Destroyer Flotilla"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 10001 id = 134 }
      name  = "1st Submarine Flotilla"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 10001 id = 136 }
      name  = "ARA La Argentina"
      type  = light_cruiser
      model = 2
    }         # 39/41/44
    division =
    { id    = { type = 10001 id = 137 }
      name  = "3rd Destroyer Flotilla"
      type  = destroyer
      model = 1
    }         # 39/41/44
  }
  airunit =
  { id       = { type = 10001 id = 15 }
    name     = "Aviación del Ejército"
    location = 667 # Buenos Aires
    base     = 667 # Buenos Aires
    division =
    { id       = { type = 10001 id = 16 }
      name     = "Grupo Aéreo Nro. 1"
      strength = 75
      type     = interceptor
      model    = 1
    }
    division =
    { id       = { type = 10001 id = 17 }
      name     = "Fuerza Aeronaval Nro. 1"
      strength = 100
      type     = naval_bomber
      model    = 0
    }
  }
  airunit =
  { id       = { type = 10001 id = 18 }
    name     = "Aviación del Ejército"
    location = 845 # Córdoba
    base     = 845 # Córdoba
    division =
    { id       = { type = 10001 id = 19 }
      name     = "Grupo Aéreo Nro. 2"
      strength = 50
      type     = interceptor
      model    = 1
    }
    division =
    { id       = { type = 10001 id = 20 }
      name     = "Transporte Aéreo"
      strength = 100
      type     = transport_plane
      model    = 0
    }
  }
}
