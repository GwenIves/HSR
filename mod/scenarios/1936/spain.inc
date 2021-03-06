
##############################
# Country definition for SPR #
##############################

province =
{ id         = 334
  anti_air   = 2
  naval_base = { size = 7 current_size = 7 }
  air_base   = { size = 4 current_size = 4 }
}              # La Coru�a
province =
{ id       = 341
  anti_air = 3
  air_base = { size = 2 current_size = 2 }
}            # Madrid
province =
{ id         = 347
  anti_air   = 2
  naval_base = { size = 7 current_size = 7 }
  air_base   = { size = 4 current_size = 4 }
}              # Seville
province =
{ id         = 354
  anti_air   = 2
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 2 current_size = 2 }
}              # Val�ncia
province =
{ id         = 356
  anti_air   = 2
  naval_base = { size = 7 current_size = 7 }
  air_base   = { size = 4 current_size = 4 }
}              # Tarragona
province =
{ id         = 535
  anti_air   = 2
  naval_base = { size = 7 current_size = 7 }
  air_base   = { size = 4 current_size = 4 }
}              # Mallorca
province =
{ id         = 963
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 2 current_size = 2 }
}              # Gran Canaria
province =
{ id         = 972
  anti_air   = 2
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
}              # Villa Cisneros

#####################
# Country main data #
#####################

country =
{ tag                    = SPR
  regular_id             = SPA
  intrinsic_gov_type     = left_wing_radical
  manpower               = 250
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  dissent                = 30
  capital                = 341
  transports             = 100
  escorts                = 27
  # Gibralter claim
  diplomacy =
  { relation = { tag = ENG value = -10 }
    relation = { tag = FIN value = 35 }
    relation = { tag = FRA value = 10 }
    relation = { tag = GER value = -50 }
    relation = { tag = IRE value = 50 }
    relation = { tag = ITA value = -50 }
    relation = { tag = POR value = -50 }
    relation = { tag = SOV value = -10 }
  }
  SpyInfo                = { country = "SPR" NumberOfSpies = 7 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  #SpyInfo                = { country = "FRA" NumberOfSpies = 8 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 3 }
  #SpyInfo                = { country = "AUS" NumberOfSpies = 3 }
  #SpyInfo                = { country = "ARG" NumberOfSpies = 3 }
  #SpyInfo                = { country = "MEX" NumberOfSpies = 3 }
  #SpyInfo                = { country = "USA" NumberOfSpies = 6 }
  #SpyInfo                = { country = "ECU" NumberOfSpies = 3 }
  #SpyInfo                = { country = "VEN" NumberOfSpies = 3 }
  #SpyInfo                = { country = "BRA" NumberOfSpies = 3 }
  #SpyInfo                = { country = "COL" NumberOfSpies = 6 }
  #SpyInfo                = { country = "POR" NumberOfSpies = 9 }
  #SpyInfo                = { country = "ITA" NumberOfSpies = 9 }
  # Spanish Guinea
  nationalprovinces      = { 334 332 333 339 338 341 343 346 347 349 350 351 352 353 354 342 355 340 330 331 356 329 357 535 536 537 961 962 963 964
			     965 348
			   }
  ownedprovinces         = { 334  332  333  339  338  341  343  346  347  349  350  351  352  353  354  342  355  340  330  331  356  329  357  535
			     536  537  961  962  963  964  965  957  955  954  967  971  972  1091
			   }
  # Spanish Guinea
  controlledprovinces    = { 334  332  333  339  338  341  343  346  347  349  350  351  352  353  354  342  355  340  330  331  356  329  357  535
			     536  537  961  962  963  964  965  957  955  954  967  971  972  1091
			   }
  # Semi-Major Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 4010 4020 4120 2150 2010 2020 2400 2290 2300 2310 4220 2450 2460 4130 2510 3260 1010 1190 1110 9010 5010 5080 5090 5190
			     6010 6020 3010 3020 3070 3080 3130 3140 3250 3400 3410 8010 8020 8040 8050
			   }
  dormant_leaders	= { 3007 3050 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 1
    freedom           = 7
    free_market       = 4
    professional_army = 3
    defense_lobby     = 4
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 11001 }
  headofgovernment       = { type = 9 id = 11002 }
  foreignminister        = { type = 9 id = 11003 }
  armamentminister       = { type = 9 id = 11004 }
  ministerofsecurity     = { type = 9 id = 11005 }
  ministerofintelligence = { type = 9 id = 11006 }
  chiefofstaff           = { type = 9 id = 11007 }
  chiefofarmy            = { type = 9 id = 11008 }
  chiefofnavy            = { type = 9 id = 11009 }
  chiefofair             = { type = 9 id = 11010 }
  dormant_leaders        = { 3007 3050 }
  # Spanish Troops
  landunit =
  { id       = { type = 27600 id = 5 }
    location = 341
    name     = "1a Cuerpo de Ej�rcito"
    division =
    { id   = { type = 27600 id = 6 }
      name = "1a Divisi�n Org�nica"
      type = infantry
    }
    division =
    { id    = { type = 27600 id = 7 }
      name  = "2a Divisi�n Org�nica"
      type  = infantry
      extra = artillery
    }
    division =
    { id   = { type = 27600 id = 8 }
      name = "1a Divisi�n de Caballer�a"
      type = cavalry
    }
    division =
    { id       = { type = 27600 id = 9 }
      name     = "Brigada Blindada"
      type     = light_armor
      model    = 0
      strength = 30
    }
  }
  landunit =
  { id       = { type = 27600 id = 10 }
    location = 356
    name     = "2o Cuerpo del Ej�rcito"
    division =
    { id    = { type = 27600 id = 11 }
      name  = "3a Divisi�n Org�nica"
      type  = infantry
      extra = anti_tank
    }
    division =
    { id   = { type = 27600 id = 12 }
      name = "4a Divisi�n Org�nica"
      type = infantry
    }
    division =
    { id   = { type = 27600 id = 13 }
      name = "5a Divisi�n Org�nica"
      type = infantry
    }
    division =
    { id   = { type = 27600 id = 14 }
      name = "Brigadas de Monta�a"
      type = bergsjaeger
    }
  }
  landunit =
  { id       = { type = 27600 id = 15 }
    location = 354
    name     = "3er Cuerpo de Ej�rcito"
    division =
    { id    = { type = 27600 id = 16 }
      name  = "6a Divisi�n Org�nica"
      type  = infantry
      extra = anti_air
    }
    division =
    { id   = { type = 27600 id = 17 }
      name = "7a Divisi�n Org�nica"
      type = infantry
    }
    division =
    { id    = { type = 27600 id = 18 }
      name  = "8a Divisi�n Org�nica"
      type  = infantry
      extra = artillery
    }
  }
  landunit =
  { id       = { type = 27600 id = 19 }
    location = 535
    name     = "Comandancia de Baleares"
    division =
    { id       = { type = 27600 id = 20 }
      name     = "Comandancia de Baleares"
      type     = infantry
      strength = 30
    }
  }
  landunit =
  { id       = { type = 27600 id = 21 }
    location = 963
    name     = "Comandancia de Canarias"
    division =
    { id       = { type = 27600 id = 22 }
      name     = "Comandancia de Canarias"
      type     = infantry
      strength = 30
    }
  }
  landunit =
  { id       = { type = 27600 id = 23 }
    location = 957
    name     = "Ej�rcito de �frica"
    division =
    { id   = { type = 27600 id = 24 }
      name = "Circunscripci�n Occidental"
      type = infantry
    }
    division =
    { id   = { type = 27600 id = 25 }
      name = "Circunscripci�n Oriental"
      type = infantry
    }
  }
  landunit =
  { id       = { type = 27600 id = 26 }
    location = 971
    name     = "Fuerzas del Sahara"
    division =
    { id       = { type = 27600 id = 27 }
      name     = "Legi�n del Sahara"
      type     = infantry
      strength = 30
    }
  }
  landunit =
  { id       = { type = 27600 id = 28 }
    location = 1091
    name     = "Guardias Coloniales"
    division =
    { id       = { type = 27600 id = 29 }
      name     = "Guardias Coloniales"
      type     = militia
      strength = 30
    }
  }
  # Some naval units were clearly outdated or in bad fighting shape. Strength has been reduced in those cases.
  navalunit =
  { location = 347
    base     = 347
    id       = { type = 27600 id = 30 }
    name     = "Base Naval C�diz"
    division =
    { id       = { type = 27600 id = 31 }
      name     = "ARE Rep�blica"
      strength = 60
      type     = light_cruiser
      model    = 0
    }
    division =
    { id       = { type = 27600 id = 32 }
      name     = "Flotilla de Escolta"
      strength = 100
      type     = destroyer
      model    = 1
    }
  }
  navalunit =
  { location = 334
    base     = 334
    id       = { type = 27600 id = 33 }
    name     = "Flotilla M�ndez N��ez"
    division =
    { id       = { type = 27600 id = 34 }
      name     = "ARE M�ndez N��ez"
      strength = 100
      type     = light_cruiser
      model    = 0
    }
  }
  navalunit =
  { location = 356
    base     = 356
    id       = { type = 27600 id = 35 }
    name     = "Escuadr�n de Batalla"
    division =
    { id       = { type = 27600 id = 36 }
      name     = "ARE Jaime I"
      strength = 50
      type     = battleship
      model    = 0
    }
    division =
    { id       = { type = 27600 id = 37 }
      name     = "ARE Espa�a"
      strength = 100
      type     = battleship
      model    = 0
    }
    division =
    { id       = { type = 27600 id = 38 }
      name     = "ARE Miguel de Cervantes"
      strength = 100
      type     = light_cruiser
      model    = 1
    }
    division =
    { id       = { type = 27600 id = 39 }
      name     = "ARE Almirante Cervera"
      strength = 100
      type     = light_cruiser
      model    = 1
    }
    division =
    { id       = { type = 27600 id = 40 }
      name     = "Flotilla de Torpederas No. 1"
      strength = 100
      type     = destroyer
      model    = 0
    }
    division =
    { id       = { type = 27600 id = 41 }
      name     = "Flotilla de Torpederas No. 2"
      strength = 100
      type     = destroyer
      model    = 1
    }
    division =
    { id       = { type = 27600 id = 42 }
      name     = "1a Flotilla de Transporte Naval"
      strength = 100
      type     = transport
    }
    division =
    { id       = { type = 27600 id = 43 }
      name     = "2a Flotilla de Transporte Naval"
      strength = 100
      type     = transport
    }
  }
  navalunit =
  { location = 963
    base     = 963
    id       = { type = 27600 id = 44 }
    name     = "Armada Colonial"
    division =
    { id       = { type = 27600 id = 45 }
      name     = "Flotilla de Torpederas No. 3"
      strength = 100
      type     = destroyer
      model    = 1
    }
    division =
    { id       = { type = 27600 id = 47 }
      name     = "3a Flotilla de Transporte Naval"
      strength = 100
      type     = transport
    }
    division =
    { id       = { type = 27600 id = 48 }
      name     = "4a Flotilla de Transporte Naval"
      strength = 100
      type     = transport
    }
  }
  navalunit =
  { location = 354
    base     = 354
    id       = { type = 27600 id = 49 }
    name     = "Grupo C"
    division =
    { id       = { type = 27600 id = 50 }
      name     = "S101 Flotilla"
      strength = 100
      type     = submarine
      model    = 0
    }
  }
  navalunit =
  { location = 354
    base     = 354
    id       = { type = 27600 id = 51 }
    name     = "Grupo B"
    division =
    { id       = { type = 27600 id = 72 }
      name     = "S103 Flotilla"
      strength = 75
      type     = submarine
      model    = 1
    }
  }
  navalunit =
  { id       = { type = 27600 id = 53 }
    name     = "ARE Libertad"
    location = 356
    base     = 356
    division =
    { id       = { type = 27600 id = 54 }
      name     = "ARE Libertad"
      type     = light_cruiser
      model    = 1
      strength = 100
    }
  }
  airunit =
  { location = 341
    base     = 341
    id       = { type = 27600 id = 55 }
    name     = "1a Escuadra A�rea"
    division =
    { id       = { type = 27600 id = 56 }
      name     = "1er Grupo T�ctico"
      strength = 30
      type     = tactical_bomber
    }
    division =
    { id       = { type = 27600 id = 57 }
      name     = "2o Grupo T�ctico"
      strength = 30
      type     = tactical_bomber
    }
  }
  airunit =
  { location = 356
    base     = 356
    id       = { type = 27600 id = 58 }
    name     = "2a Escuadra A�rea"
    division =
    { id       = { type = 27600 id = 59 }
      name     = "1er Grupo de Caza"
      strength = 30
      type     = interceptor
    }
    division =
    { id       = { type = 27600 id = 60 }
      name     = "3er Grupo de Caza"
      strength = 30
      type     = interceptor
    }
  }
  airunit =
  { location = 354
    base     = 354
    id       = { type = 27600 id = 61 }
    name     = "3a Escuadra A�rea"
    division =
    { id       = { type = 27600 id = 62 }
      name     = "1er Grupo Estrat�gico"
      strength = 30
      type     = strategic_bomber
    }
    division =
    { id       = { type = 27600 id = 63 }
      name     = "2o Grupo Estrat�gico"
      strength = 30
      type     = strategic_bomber
    }
  }
  airunit =
  { location = 963
    base     = 963
    id       = { type = 27600 id = 64 }
    name     = "Fuerzas A�reas del �frica"
    division =
    { id       = { type = 27600 id = 65 }
      name     = "1er Grupo de Bombardeo"
      strength = 30
      type     = tactical_bomber
    }
    division =
    { id       = { type = 27600 id = 66 }
      name     = "2o Grupo de Caza"
      strength = 30
      type     = interceptor
    }
  }
  division_development =
  { name  = "ARE Canarias"
    type  = heavy_cruiser
    model = 1
    cost  = 5
    id    = { type = 27600 id = 500 }
    date  = { year = 1936 month = march day = 1 }
  }
  division_development =
  { name  = "ARE Baleares"
    type  = heavy_cruiser
    model = 1
    cost  = 5
    id    = { type = 27600 id = 501 }
    date  = { year = 1936 month = june day = 1 }
  }
}
