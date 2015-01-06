
##############################
# Country definition for SPA #
##############################

province = { id = 331 ic = 2 } # Bilbao
province = { id = 332 anti_air = 2 ic = 2 } # Oviedo
province = { id = 333 ic = 2 } # Burgos
province =
{ id         = 334
  naval_base = { size = 7 current_size = 7 }
  air_base   = { size = 7 current_size = 7 }
  anti_air   = 2
}              # La Coruña
province =
{ id       = 341
  air_base = { size = 4 current_size = 4 }
  anti_air = 3
}            # Madrid
province =
{ id         = 346
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 4 current_size = 4 }
  anti_air   = 2
}              # Huelva
province = { id = 354 anti_air = 2 } # València
province =
{ id         = 355
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 3 current_size = 3 }
  ic         = 2
}              # Castellón
province = { id = 356 anti_air = 2 ic = 2 } # Tarragona
province =
{ id         = 357
  naval_base = { size = 6 current_size = 6 }
  air_base   = { size = 6 current_size = 6 }
}              # Barcelona
province =
{ id         = 535
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
}              # Mallorca
province =
{ id         = 536
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
}              # Menorca
province =
{ id         = 537
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 1 current_size = 1 }
}              # Ibiza
province =
{ id         = 957
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
  anti_air   = 1
}              # Ceuta

#####################
# Country main data #
#####################

country =
{ tag                    = SPA
  intrinsic_gov_type     = fascist
  manpower               = 250
  # Resource Reserves
  energy                 = 3500
  metal                  = 3500
  rare_materials         = 2500
  oil                    = 3500
  supplies               = 3500
  dissent                = 5
  capital                = 341
  # ###########################
  # ## SPAIN NAVAL OOB 1944 ###
  # ###########################
  transports             = 83
  escorts                = 16
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 4
    professional_army = 4
    defense_lobby     = 5
    interventionism   = 3
  }
  #SpyInfo                = { country = "POR" NumberOfSpies = 12 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 5 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 6 }
  #SpyInfo                = { country = "BEL" NumberOfSpies = 5 }
  #SpyInfo                = { country = "FRA" NumberOfSpies = 8 }
  #SpyInfo                = { country = "HOL" NumberOfSpies = 5 }
  #SpyInfo                = { country = "TUR" NumberOfSpies = 5 }
  SpyInfo                = { country = "SPA" NumberOfSpies = 8 }
  # Spanish Guinea
  nationalprovinces      = { 334 332 333 339 338 341 343 346 347 349 350 351 352 353 354 342 355 340 330 331 356 329 357 535 536 537 961 962 963 964
			     965
			   }
  ownedprovinces         = { 334  332  333  339  338  341  343  346  347  349  350  351  352  353  354  342  355  340  330  331  356  329  357  535
			     536  537  961  962  963  964  965  957  955  954  967  971  972  1091
			   }
  # Spanish Guinea
  controlledprovinces    = { 334  332  333  339  338  341  343  346  347  349  350  351  352  353  354  342  355  340  330  331  356  329  357  535
			     536  537  961  962  963  964  965  957  955  954  967  971  972  1091
			   }
  # Semi-Major Tech '36
  # Group C 1944 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1070  1110  1120  1150  1190  1200  1210  1220  1310  14000 14010 14020 2010  2020  2030  2040
			     2050  2060  2070  2080  2150  2160  2170  2180  2220  2230  2290  2300  2310  2320  2330  2330  2340  2400  2410  2450
			     2460  2470  2510  2520  2530  3010  3020  3030  3070  3080  3130  3140  3150  3250  3400  3410  4010  4020  4030  4040
			     4050  4060  4120  4130  4140  4170  4190  4220  4250  5010  5020  5050  5060  5070  5080  5090  5100  5110  5120  5190
			     5200  5210  5220  5310  5320  5350  5360  5470  6010  6020  6040  6050  6060  6070  6080  8010  8020  8040  8050  9010
			     9020  9030  9040
			   }
  diplomacy =
  { relation = { tag = SOV value = 150 }
  }
  dormant_ministers      = { 10001 10045 10054 10003 10089 10047 10154 10275 10204 10188 10189 10008 10227 10211 10009 10229 10010 10247 10039
			     10002 10048 10005 10006 10007 10049
			   }
  dormant_leaders        = { 3413 3416 3427 3455 3466 3492 3493 3494 }
  headofstate            = { type = 9 id = 10032 }
  headofgovernment       = { type = 9 id = 10046 }
  foreignminister        = { type = 9 id = 10061 }
  armamentminister       = { type = 9 id = 10090 }
  ministerofsecurity     = { type = 9 id = 10130 }
  ministerofintelligence = { type = 9 id = 10162 }
  chiefofstaff           = { type = 9 id = 10187 }
  chiefofarmy            = { type = 9 id = 10206 }
  chiefofnavy            = { type = 9 id = 10233 }
  chiefofair             = { type = 9 id = 10250 }
  landunit =
  { id       = { type = 25000 id = 1 }
    location = 341
    name     = "Región de Guadarrama"
    division =
    { id    = { type = 25001 id = 1 }
      name  = "11a División de Infantería"
      type  = infantry
      model = 3
    }
    division =
    { id    = { type = 25000 id = 2 }
      name  = "12a División de Infantería"
      type  = infantry
      model = 3
    }
    division =
    { id    = { type = 25000 id = 3 }
      name  = "13a División de Infantería"
      type  = infantry
      model = 3
    }
  }
  landunit =
  { id       = { type = 25000 id = 902 }
    location = 347
    name     = "Región de Andalucía"
    division =
    { id    = { type = 25000 id = 4 }
      name  = "21a División de Infantería"
      type  = infantry
      model = 3
    }
    division =
    { id    = { type = 25000 id = 5 }
      name  = "22a División de Infantería"
      type  = infantry
      model = 2
    }
    division =
    { id            = { type = 25000 id = 6 }
      name          = "23a División de Infantería"
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 3
    }
  }
  landunit =
  { id       = { type = 25000 id = 903 }
    location = 354
    name     = "Región del Túria"
    division =
    { id    = { type = 25000 id = 7 }
      name  = "31a División de Infantería"
      type  = infantry
      model = 3
    }
    division =
    { id            = { type = 25000 id = 8 }
      name          = "32a División de Infantería"
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 3
    }
  }
  landunit =
  { id       = { type = 25000 id = 904 }
    location = 356
    name     = "Región de Urgel"
    division =
    { id    = { type = 25000 id = 9 }
      name  = "41a División de Infantería"
      type  = infantry
      model = 3
    }
    division =
    { id    = { type = 25000 id = 10 }
      name  = "42a División de Infantería"
      type  = infantry
      model = 2
    }
    division =
    { id    = { type = 25000 id = 11 }
      name  = "43a División de Infantería"
      type  = infantry
      model = 2
    }
  }
  landunit =
  { id       = { type = 25000 id = 905 }
    location = 329
    name     = "Región de Aragón"
    division =
    { id    = { type = 25000 id = 12 }
      name  = "51a División de Infantería"
      type  = infantry
      model = 3
    }
    division =
    { id    = { type = 25000 id = 13 }
      name  = "52a División de Infantería"
      type  = infantry
      model = 2
    }
  }
  landunit =
  { id       = { type = 25000 id = 906 }
    location = 331
    name     = "Región de Navarra"
    division =
    { id    = { type = 25000 id = 14 }
      name  = "61a División de Infantería"
      type  = infantry
      model = 3
    }
    division =
    { id    = { type = 25000 id = 15 }
      name  = "62a División de Infantería"
      type  = infantry
      model = 2
    }
  }
  landunit =
  { id       = { type = 25000 id = 907 }
    location = 339
    name     = "Región de Castilla"
    division =
    { id    = { type = 25000 id = 16 }
      name  = "71a División de Infantería"
      type  = infantry
      model = 3
    }
    division =
    { id    = { type = 25000 id = 17 }
      name  = "72a División de Infantería"
      type  = infantry
      model = 2
    }
  }
  landunit =
  { id       = { type = 25000 id = 908 }
    location = 334
    name     = "Región de Galicia"
    division =
    { id    = { type = 25000 id = 18 }
      name  = "81a División de Infantería"
      type  = infantry
      model = 3
    }
    division =
    { id    = { type = 25000 id = 19 }
      name  = "82a División de Infantería"
      type  = infantry
      model = 2
    }
  }
  landunit =
  { id       = { type = 25000 id = 909 }
    location = 957
    name     = "Región de Marruecos"
    division =
    { id    = { type = 25000 id = 20 }
      name  = "91a División de Infantería"
      type  = infantry
      model = 3
    }
    division =
    { id    = { type = 25000 id = 21 }
      name  = "92a División de Infantería"
      type  = infantry
      model = 2
    }
    division =
    { id    = { type = 25000 id = 22 }
      name  = "93a División de Infantería"
      type  = infantry
      model = 2
    }
    division =
    { id            = { type = 25000 id = 23 }
      name          = "Tercios de la Legión"
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 3
    }
    division =
    { id    = { type = 25000 id = 24 }
      name  = "Fuerzas Indígenas"
      type  = infantry
      model = 2
    }
  }
  landunit =
  { id       = { type = 25000 id = 910 }
    location = 340
    name     = "Región del Maestrazgo"
    division =
    { id    = { type = 25000 id = 25 }
      name  = "101a División de Infantería"
      type  = infantry
      model = 3
    }
    division =
    { id    = { type = 25000 id = 26 }
      name  = "102a División de Infantería"
      type  = infantry
      model = 2
    }
  }
  landunit =
  { id       = { type = 25000 id = 911 }
    location = 535
    name     = "Comandancia Baleares"
    division =
    { id       = { type = 25000 id = 27 }
      name     = "Comandancia Baleares"
      type     = infantry
      model    = 2
      strength = 30
    }
  }
  landunit =
  { id       = { type = 25000 id = 912 }
    location = 963
    name     = "Comandancia Canarias"
    division =
    { id       = { type = 25000 id = 927 }
      name     = "Comandancia Canarias"
      type     = infantry
      model    = 2
      strength = 30
    }
  }
  landunit =
  { id       = { type = 25000 id = 913 }
    location = 341
    name     = "Grupo de Caballería"
    division =
    { id    = { type = 25000 id = 28 }
      name  = "1a Div. de Caballería"
      type  = cavalry
      model = 2
    }
    division =
    { id    = { type = 25000 id = 29 }
      name  = "1a División Acorazada"
      type  = armor
      model = 2
    }
  }
  navalunit =
  { id       = { type = 25000 id = 500 }
    name     = "Escuadrón de Batalla"
    location = 334 # Vigo
    base     = 334
    division =
    { id    = { type = 25000 id = 501 }
      name  = "ARNE Canarias"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 25000 id = 502 }
      name  = "ARNE Galicia"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 25000 id = 503 }
      name  = "ARNE Miguel de Cervantes"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 25000 id = 504 }
      name  = "ARNE Almirante Cervera"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 25000 id = 505 }
      name  = "1a Flotilla de Destructores"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 25000 id = 506 }
      name  = "2a Flotilla de Destructores"
      type  = destroyer
      model = 0
    }
  }
  navalunit =
  { id       = { type = 25000 id = 507 }
    name     = "Base Naval Barcelona"
    location = 357 # Barcelona
    base     = 357
    division =
    { id    = { type = 25000 id = 508 }
      name  = "ARNE Méndez Núñez"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 25000 id = 509 }
      name  = "ARNE Navarra"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 25000 id = 510 }
      name  = "3a Flotilla de Destructores"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 25000 id = 511 }
      name  = "4a Flotilla de Destructores"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 25000 id = 517 }
      name  = "5a Flotilla de Destructores"
      type  = destroyer
      model = 2
    }
    division =
    { id   = { type = 25000 id = 515 }
      name = "Flotilla Villalpando"
      type = transport
    }
    division =
    { id   = { type = 25000 id = 516 }
      name = "Flotilla Benavende"
      type = transport
    }
  }
  navalunit =
  { id       = { type = 25000 id = 512 }
    name     = "Grupo B"
    location = 346 # Sevilla
    base     = 346
    division =
    { id    = { type = 25000 id = 513 }
      name  = "1a Flotilla de Submarinos"
      type  = submarine
      model = 1
    }
  }
  airunit =
  { location = 357
    base     = 357
    id       = { type = 25000 id = 201 }
    name     = "Región Pirineos"
    division =
    { id       = { type = 25000 id = 202 }
      name     = "FAN 1-G-20 de Bombardeo"
      strength = 100
      type     = tactical_bomber
    }
    division =
    { id       = { type = 25000 id = 203 }
      name     = "FAN 1-G-5 de Caza"
      strength = 30
      type     = interceptor
      model    = 2
    }
  }
  airunit =
  { location = 346
    base     = 346
    id       = { type = 25000 id = 204 }
    name     = "Región Estrecho"
    division =
    { id       = { type = 25000 id = 205 }
      name     = "FAN 2-G-20 de Bombardeo"
      strength = 50
      type     = tactical_bomber
    }
    division =
    { id       = { type = 25000 id = 206 }
      name     = "FAN 2-G-5 de Caza"
      strength = 100
      type     = interceptor
      model    = 1
    }
  }
  airunit =
  { location = 346
    base     = 346
    id       = { type = 25000 id = 207 }
    name     = "Región Este"
    division =
    { id       = { type = 25000 id = 208 }
      name     = "FAN 3-G-20 de Bombardeo"
      strength = 50
      type     = tactical_bomber
    }
    division =
    { id       = { type = 25000 id = 209 }
      name     = "FAN 3-G-5 de Caza"
      strength = 75
      type     = interceptor
      model    = 1
    }
  }
  airunit =
  { location = 957
    base     = 957
    id       = { type = 25000 id = 210 }
    name     = "Fuerzas Aéreas Africanas"
    division =
    { id       = { type = 25000 id = 211 }
      name     = "FAN 1-G-10 de Cooperación"
      strength = 30
      type     = cas
    }
    division =
    { id       = { type = 25000 id = 212 }
      name     = "FAN 4-G-5 de Caza"
      strength = 30
      type     = interceptor
      model    = 1
    }
  }
  airunit =
  { location = 341
    base     = 341
    id       = { type = 25000 id = 213 }
    name     = "Región Central"
    division =
    { id       = { type = 25000 id = 214 }
      name     = "FAN 1-G-40 Estratégico"
      strength = 50
      type     = strategic_bomber
    }
    division =
    { id       = { type = 25000 id = 215 }
      name     = "FAN 5-G-5 de Caza"
      strength = 100
      type     = interceptor
      model    = 1
    }
  }
  airunit =
  { location = 357
    base     = 357
    id       = { type = 25000 id = 216 }
    name     = "Baleares"
    division =
    { id       = { type = 25000 id = 217 }
      name     = "FAN 6-G-5 de Caza"
      strength = 30
      type     = interceptor
      model    = 1
    }
  }
  airunit =
  { location = 334
    base     = 334
    id       = { type = 25000 id = 218 }
    name     = "Región Atlántica"
    division =
    { id       = { type = 25000 id = 219 }
      name     = "FAN 2-G-40 Estratégico"
      strength = 30
      type     = strategic_bomber
    }
    division =
    { id       = { type = 25000 id = 220 }
      name     = "FAN 7-G-5 de Caza"
      strength = 50
      type     = interceptor
      model    = 2
    }
  }
  airunit =
  { location = 341
    base     = 341
    id       = { type = 25000 id = 807 }
    name     = "Ala de Transporte"
    division =
    { id       = { type = 25000 id = 808 }
      name     = "Grupo de Transporte"
      strength = 100
      type     = transport_plane
    }
  }
}
