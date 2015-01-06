
##############################
# Country definition for SPA #
##############################

province =
{ id         = 334
  anti_air   = 1
  naval_base = { size = 6 current_size = 6 }
  air_base   = { size = 1 current_size = 1 }
}              # La Coruña
province =
{ id         = 347
  anti_air   = 1
  naval_base = { size = 6 current_size = 6 }
  air_base   = { size = 1 current_size = 1 }
}              # Seville
province =
{ id         = 535
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 1 current_size = 1 }
}              # Mallorca
province =
{ id         = 955
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 1 current_size = 1 }
}              # Villa Sanjuro
province =
{ id         = 964
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 1 current_size = 1 }
}              # Tenerife
province =
{ id         = 972
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 1 current_size = 1 }
}              # Villa Cisneros

#####################
# Country main data #
#####################

country =
{ tag                    = SPA
  intrinsic_gov_type     = fascist
  ai                     = "scw_spa.ai"
  capital                = 333 # burgos
  manpower               = 20
  dissent                = 10
  transports             = 60
  escorts                = 14
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 200
  SpyInfo                = { country = "SPA" NumberOfSpies = 7 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    free_market       = 1
    freedom           = 3
    professional_army = 6
    defense_lobby     = 7
    interventionism   = 3
  }
  diplomacy =
  { relation = { tag = ENG value = -50 }
    relation = { tag = FRA value = -65 }
    relation = { tag = FIN value = 35 }
    relation = { tag = GER value = 50 }
    relation = { tag = ITA value = 50 }
    relation = { tag = POR value = 70 }
    relation = { tag = SOV value = -150 }
  }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  #SpyInfo                = { country = "FRA" NumberOfSpies = 6 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 6 }
  #SpyInfo                = { country = "AUS" NumberOfSpies = 3 }
  #SpyInfo                = { country = "ARG" NumberOfSpies = 3 }
  #SpyInfo                = { country = "MEX" NumberOfSpies = 3 }
  #SpyInfo                = { country = "USA" NumberOfSpies = 6 }
  #SpyInfo                = { country = "ECU" NumberOfSpies = 3 }
  #SpyInfo                = { country = "VEN" NumberOfSpies = 3 }
  #SpyInfo                = { country = "BRA" NumberOfSpies = 3 }
  #SpyInfo                = { country = "COL" NumberOfSpies = 6 }
  #SpyInfo                = { country = "POR" NumberOfSpies = 9 }
  #SpyInfo                = { country = "ITA" NumberOfSpies = 6 }
  #SpyInfo                = { country = "SPR" NumberOfSpies = 5 }
  ownedprovinces         = { 329  330  331  332  333  334  338  339  340  343  346  347  349  350  355  535  536  537  961  962  963  964  965  957
			     955  954  967  971  972  1091
			   }
  # Spanish Guinea
  controlledprovinces    = { 329  330  331  332  333  334  338  339  340  343  346  347  349  350  355  535  536  537  961  962  963  964  965  957
			     955  954  967  971  972  1091
			   }
  techapps               = { 1010  1020  1110  1190  2010  2020  2030  2040  2150  2290  2300  2310  2400  2450  2460  2510  3400  3010  3020  3030
			     3070  3080  3130  3140  3150  3250  4010  4020  4120  5080  5090  6010  6020  8010  8020  8040  8050  9010  14000
			   }
  # Spanish Guinea
  nationalprovinces      = { 329 330 331 332 333 334 338 339 340 341 342 343 346 347 348 349 350 351 352 353 354 355 356 357 535 536 537 954 955 957
			     961 962 963 964 965 967 971 972
			   }
  headofstate            = { type = 9 id = 10032 }
  headofgovernment       = { type = 9 id = 10046 }
  foreignminister        = { type = 9 id = 10057 }
  armamentminister       = { type = 9 id = 10090 }
  ministerofsecurity     = { type = 9 id = 10135 }
  ministerofintelligence = { type = 9 id = 10162 }
  chiefofstaff           = { type = 9 id = 10184 }
  chiefofarmy            = { type = 9 id = 10206 }
  chiefofnavy            = { type = 9 id = 10230 }
  chiefofair             = { type = 9 id = 10247 }
  # # EJÉRCITOS DE TIERRA (hechos)
  landunit =
  { id       = { type = 17500 id = 1 }
    location = 330 # Saragossa
    name     = "Ejército de Norte"
    leader   = 3426 # Franco
    division =
    { id       = { type = 17500 id = 2 }
      name     = "13a División"
      type     = infantry
      model    = 1
      strength = 90
    }
    division =
    { id       = { type = 17500 id = 3 }
      name     = "40a División"
      type     = infantry
      model    = 1
      strength = 80
    }
    division =
    { id       = { type = 17500 id = 4 }
      name     = "50a División"
      type     = infantry
      model    = 0
      strength = 90
    }
    division =
    { id       = { type = 17500 id = 5 }
      name     = "105a División"
      type     = infantry
      model    = 1
      strength = 80
    }
  }
  landunit =
  { id       = { type = 17500 id = 6 }
    location = 355 # Castellon
    name     = "Cuerpo Ejército de Marrogui"
    leader   = 3467 # Yagüe Blanco
    division =
    { id       = { type = 17500 id = 7 }
      name     = "4a División de Navarra"
      type     = infantry
      model    = 1
      strength = 80
    }
    division =
    { id       = { type = 17500 id = 8 }
      name     = "74a División"
      type     = infantry
      model    = 1
      strength = 70
    }
    division =
    { id       = { type = 17500 id = 9 }
      name     = "82a División"
      type     = infantry
      model    = 1
      strength = 90
    }
  }
  landunit =
  { id       = { type = 17500 id = 100 }
    location = 355 # Castellon
    name     = "Cuerpo Ejército del Ebro"
    division =
    { id       = { type = 17500 id = 10 }
      name     = "102a División"
      type     = infantry
      model    = 1
      strength = 80
    }
  }
  landunit =
  { id       = { type = 17500 id = 11 }
    location = 329 # Huesca
    name     = "Ejército de Urgel"
    leader   = 3448 # Munoz Grandes
    division =
    { id       = { type = 17500 id = 12 }
      name     = "3a División"
      type     = infantry
      model    = 1
      strength = 90
    }
    division =
    { id       = { type = 17500 id = 13 }
      name     = "152a División"
      type     = infantry
      model    = 1
      strength = 80
    }
    division =
    { id       = { type = 17500 id = 37 }
      name     = "División Soria"
      type     = bergsjaeger
      model    = 0
      strength = 90
    }
  }
  landunit =
  { id       = { type = 17500 id = 14 }
    location = 338 # Salamanca
    name     = "Ejército del Centro"
    leader   = 3443 # Mola
    division =
    { id       = { type = 17500 id = 15 }
      name     = "63a División"
      type     = infantry
      model    = 1
      strength = 90
    }
    division =
    { id       = { type = 17500 id = 16 }
      name     = "150a División"
      type     = infantry
      model    = 1
      strength = 80
    }
    division =
    { id       = { type = 17500 id = 17 }
      name     = "1a División de Caballeria"
      type     = cavalry
      model    = 1
      strength = 80
    }
  }
  landunit =
  { id       = { type = 17500 id = 18 }
    location = 339 # Valladolid
    leader   = 3430 # Garcia Vallino
    name     = "Cuerpo Ejército del Maestrazgo"
    division =
    { id       = { type = 17500 id = 19 }
      name     = "11a División"
      type     = infantry
      model    = 1
      strength = 90
    }
  }
  landunit =
  { id       = { type = 17500 id = 20 }
    location = 343 # Badajoz
    name     = "I Cuerpo de Ejército"
    division =
    { id       = { type = 17500 id = 21 }
      name     = "54a División"
      type     = infantry
      model    = 1
      strength = 90
    }
  }
  landunit =
  { id       = { type = 17500 id = 22 }
    location = 347 # Sevilla
    name     = "Ejército de Sur"
    leader   = 3451 # Queipo
    division =
    { id       = { type = 17500 id = 23 }
      name     = "14a División"
      type     = infantry
      model    = 1
      strength = 90
    }
    division =
    { id       = { type = 17500 id = 24 }
      name     = "53a División"
      type     = infantry
      model    = 1
      strength = 80
    }
    division =
    { id       = { type = 17500 id = 25 }
      name     = "2a División de Caballeria"
      type     = cavalry
      model    = 1
      strength = 80
    }
  }
  landunit =
  { id       = { type = 17500 id = 26 }
    location = 350 # Almeria
    name     = "Cuerpo Ejército de Andalucia"
    division =
    { id       = { type = 17500 id = 27 }
      name     = "15a División"
      type     = infantry
      model    = 1
      strength = 90
    }
  }
  landunit =
  { id       = { type = 17500 id = 28 }
    location = 346 # Huelva
    name     = "Cuerpo Ejército de Extremadura"
    division =
    { id       = { type = 17500 id = 29 }
      name     = "1a División de Navarre"
      type     = infantry
      model    = 1
      strength = 90
    }
  }
  landunit =
  { id       = { type = 17500 id = 30 }
    location = 340 # Siguenza
    name     = "Il Corpo Truppe Volontarie"
    division =
    { id       = { type = 17500 id = 31 }
      name     = "Dio lo Vuole"
      type     = infantry
      model    = 1
      strength = 90
    }
    division =
    { id       = { type = 17500 id = 32 }
      name     = "Fiamme Nere"
      type     = infantry
      model    = 1
      strength = 90
    }
    division =
    { id       = { type = 17500 id = 33 }
      name     = "Penne Nere"
      type     = infantry
      model    = 1
      strength = 90
    }
    division =
    { id       = { type = 17500 id = 34 }
      name     = "Littorio"
      type     = light_armor
      model    = 1
      strength = 90
    }
  }
  landunit =
  { id       = { type = 17500 id = 35 }
    location = 349 # Malaga
    name     = "Cuerpo Ejército de Granada"
    division =
    { id       = { type = 17500 id = 36 }
      name     = "5a División de Navarre"
      type     = infantry
      model    = 1
      strength = 90
    }
  }
  landunit =
  { id       = { type = 17500 id = 38 }
    location = 330 # Saragossa
    name     = "Legion Condor"
    leader   = 3466 # Volkmann
    division =
    { id           = { type = 17500 id = 39 }
      name         = "Blindada Legión Cóndor"
      type         = armor
      model        = 1
      max_strength = 40
    }
  }
  # ######################################################################
  # # UNIDADES NAVALES
  navalunit =
  { id       = { type = 17500 id = 40 }
    name     = "Flota del Atlántico"
    location = 347
    base     = 347
    division =
    { id    = { type = 17500 id = 41 }
      name  = "Flotilla de Torpederos nro. 1"
      model = 0
      type  = destroyer
    }
    division =
    { id    = { type = 17500 id = 42 }
      name  = "Flotilla de Torpederos nro. 2"
      model = 1
      type  = destroyer
    }
    division =
    { id    = { type = 17500 id = 43 }
      name  = "1a Flotilla de Transporte Naval"
      model = 0
      type  = transport
    }
    division =
    { id    = { type = 17500 id = 44 }
      name  = "España"
      model = 1
      type  = battleship
    }
    division =
    { id    = { type = 17500 id = 45 }
      name  = "Canarias"
      model = 2
      type  = heavy_cruiser
    }
    division =
    { id    = { type = 17500 id = 46 }
      name  = "Almirante Cervera"
      model = 1
      type  = heavy_cruiser
    }
    division =
    { id    = { type = 17500 id = 47 }
      name  = "Baleares"
      model = 2
      type  = heavy_cruiser
    }
    division =
    { id    = { type = 17500 id = 48 }
      name  = "Velasco"
      model = 2
      type  = destroyer
    }
    division =
    { id            = { type = 17500 id = 49 }
      name          = "Flotilla de Escolta"
      model 		= 0
      type          = destroyer
    }
  }
  # FUERZAS AEREAS (hechas)
  airunit =
  { location = 334 # Vigo
    base     = 334
    id       = { type = 17500 id = 50 }
    name     = "Grupo Mixto 5G5"
    leader   = 3487 # Muñoz Jimenez
    division =
    { id       = { type = 17500 id = 51 }
      name     = "1a Grupo Aéreo Táctica ARE"
      strength = 30
      type     = tactical_bomber
    }
    division =
    { id       = { type = 17500 id = 52 }
      name     = "2a Grupo Aéreo Táctica ARE"
      strength = 30
      type     = tactical_bomber
    }
  }
  airunit =
  { location = 955
    base     = 955
    id       = { type = 17500 id = 53 }
    name     = "Fuerzas Aéreas de África"
    leader   = 3486 # Kindelan
    division =
    { id       = { type = 17500 id = 54 }
      name     = "Grupo Aéreo de Observación"
      strength = 30
      type     = interceptor
    }
  }
  airunit =
  { location = 334 # Vigo
    base     = 334
    id       = { type = 17500 id = 55 }
    name     = "Legión Cóndor"
    leader   = 3494 # von Sperrle
    division =
    { id       = { type = 17500 id = 56 }
      name     = "Bombarderos Legión Cóndor"
      strength = 30
      type     = tactical_bomber
      model    = 3
    }
    division =
    { id       = { type = 17500 id = 57 }
      name     = "Cazas Legión Cóndor"
      strength = 30
      type     = interceptor
      model    = 2
    }
  }
  airunit =
  { location = 535 # Mallorca
    base     = 535
    id       = { type = 17500 id = 58 }
    name     = "Aviación Legionaria"
    division =
    { id       = { type = 17500 id = 59 }
      name     = "Bombarderos Aviación Legionaria"
      strength = 30
      type     = naval_bomber
      model    = 0
    }
    division =
    { id       = { type = 17500 id = 60 }
      name     = "Cazas Aviación Legionaria"
      strength = 30
      type     = interceptor
      model    = 1
    }
  }
}
