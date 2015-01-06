
##############################
# Country definition for SPA #
##############################

province = { id = 331 ic = 2 } # Bilbao
province = { id = 332 ic = 1 } # Oviedo
province = { id = 333 ic = 2 } # Burgos
province =
{ id         = 334
  anti_air   = 2
  air_base   = { size = 6 current_size = 6 }
  naval_base = { size = 5 current_size = 5 }
}              # La Coruña
province =
{ id       = 341
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}            # Madrid
province =
{ id         = 346
  anti_air   = 4
  air_base   = { size = 5 current_size = 5 }
  naval_base = { size = 10 current_size = 10 }
}              # Huelva
province = { id = 354 anti_air = 2 } # València
province =
{ id         = 356
  ic         = 2
  anti_air   = 4
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Tarragona
province =
{ id         = 535
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}              # Mallorca
province = { id = 957 anti_air = 1 } # Ceuta
province =
{ id         = 964
  anti_air   = 2
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 2 current_size = 2 }
}              # Tenerife

#####################
# Country main data #
#####################

country =
{ tag                    = SPA
  regular_id             = SPR
  intrinsic_gov_type     = fascist
  manpower               = 250
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 100
  belligerence           = 2
  dissent                = 4
  capital                = 341
  transports             = 50
  escorts                = 27
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 4
    professional_army = 8
    defense_lobby     = 9
    interventionism   = 3
  }
  SpyInfo                = { country = "SPA" NumberOfSpies = 8 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 5 }
  #SpyInfo                = { country = "FRA" NumberOfSpies = 5 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 5 }
  #SpyInfo                = { country = "ARG" NumberOfSpies = 5 }
  #SpyInfo                = { country = "MEX" NumberOfSpies = 5 }
  #SpyInfo                = { country = "USA" NumberOfSpies = 5 }
  #SpyInfo                = { country = "ECU" NumberOfSpies = 5 }
  #SpyInfo                = { country = "VEN" NumberOfSpies = 5 }
  #SpyInfo                = { country = "BRA" NumberOfSpies = 5 }
  #SpyInfo                = { country = "COL" NumberOfSpies = 5 }
  #SpyInfo                = { country = "POR" NumberOfSpies = 10 }
  #SpyInfo                = { country = "ITA" NumberOfSpies = 5 }
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
  # Gibralter claim
  # Semi-Major Tech '36
  # Group C 1941 techs
  # ######################
  techapps               = { 5070  6070  6060  4220  3090  4010  4020  4030  4040  4120  4130  4140  2010  2020  2030  2040  2050  2150  2290  2300
			     2310  2320  2330  2400  2410  2450  2460  2470  2510  2520  1010  1020  1030  1190  1200  1210  1220  1110  2330  9010
			     9020  9030  5010  5020  5050  5080  5090  5100  5110  5190  5200  5470  6010  6020  6040  3010  3020  3030  3070  3080
			     3130  3140  3150  3250  3400  3410  8010  8020  8040  8050  14000
			   }
  diplomacy =
  { relation = { tag = ENG value = -65 }
    relation = { tag = FIN value = 35 }
    relation = { tag = FRA value = -65 }
    relation = { tag = GER value = 50 }
    relation = { tag = ITA value = 50 }
    relation = { tag = POR value = 70 }
    relation = { tag = SOV value = -100 }
  }
  headofstate            = { type = 9 id = 10032 }
  headofgovernment       = { type = 9 id = 10046 }
  foreignminister        = { type = 9 id = 10059 }
  armamentminister       = { type = 9 id = 10093 }
  ministerofsecurity     = { type = 9 id = 10132 }
  ministerofintelligence = { type = 9 id = 10162 }
  chiefofstaff           = { type = 9 id = 10183 }
  chiefofarmy            = { type = 9 id = 10210 }
  chiefofnavy            = { type = 9 id = 10230 }
  chiefofair             = { type = 9 id = 10251 }
  dormant_ministers      = { 10001 10045 10054 10003 10089 10047 10154 10275 10204 10188 10189 10008 10227 10211 10009 10229 10010 10247 10039
			     10002 10048 10005 10006 10007
			   } # 10111 Deleted Minister Jose Caelvo he dies 4 days before SCW
  dormant_leaders        = { 3413 3416 3427 3455 3466 3492 3493 3494 }
  landunit =
  { location = 356
    id       = { type = 25000 id = 1100 }
    name     = "Barcelona HQ"
    division =
    { id       = { type = 25000 id = 1101 }
      name     = "Barcelona HQ"
      type     = hq
      model    = 1
      strength = 100
    }
  }
  landunit =
  { location = 341
    id       = { type = 25000 id = 1102 }
    name     = "Madrid HQ"
    division =
    { id       = { type = 25000 id = 1103 }
      name     = "Madrid HQ"
      type     = hq
      model    = 1
      strength = 100
    }
  }
  landunit =
  { id       = { type = 25000 id = 1 }
    location = 347
    name     = "Región de Guadarrama"
    division =
    { id    = { type = 25001 id = 1 }
      name  = "11a División de Infantería"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 25000 id = 2 }
      name  = "12a División de Infantería"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 25000 id = 3 }
      name  = "13a División de Infantería"
      type  = infantry
      model = 1
    }
  }
  landunit =
  { id       = { type = 25000 id = 902 }
    location = 331
    name     = "Región de Andalucía"
    division =
    { id    = { type = 25000 id = 4 }
      name  = "21a División de Infantería"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 25000 id = 5 }
      name  = "22a División de Infantería"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 25000 id = 6 }
      name  = "23a División de Infantería"
      type  = infantry
      model = 1
      extra = artillery
    }
  }
  landunit =
  { id       = { type = 25000 id = 903 }
    location = 356
    name     = "Región del Túria"
    division =
    { id    = { type = 25000 id = 7 }
      name  = "31a División de Infantería"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 25000 id = 8 }
      name  = "32a División de Infantería"
      type  = infantry
      extra = artillery
      model = 1
    }
  }
  landunit =
  { id       = { type = 25000 id = 904 }
    location = 341
    name     = "Región de Urgel"
    division =
    { id    = { type = 25000 id = 9 }
      name  = "41a División de Infantería"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 25000 id = 10 }
      name  = "42a División de Infantería"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 25000 id = 11 }
      name  = "43a División de Infantería"
      type  = infantry
      model = 1
    }
  }
  landunit =
  { id       = { type = 25000 id = 905 }
    location = 352
    name     = "Región de Aragón"
    division =
    { id    = { type = 25000 id = 12 }
      name  = "51a División de Infantería"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 25000 id = 13 }
      name  = "52a División de Infantería"
      type  = infantry
      model = 1
    }
  }
  landunit =
  { id       = { type = 25000 id = 906 }
    location = 351
    name     = "Región de Navarra"
    division =
    { id    = { type = 25000 id = 14 }
      name  = "61a División de Infantería"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 25000 id = 15 }
      name  = "62a División de Infantería"
      type  = infantry
      model = 1
    }
  }
  landunit =
  { id       = { type = 25000 id = 907 }
    location = 329
    name     = "Región de Castilla"
    division =
    { id    = { type = 25000 id = 16 }
      name  = "71a División de Infantería"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 25000 id = 17 }
      name  = "72a División de Infantería"
      type  = infantry
      model = 1
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
      model = 1
    }
    division =
    { id    = { type = 25000 id = 19 }
      name  = "82a División de Infantería"
      type  = infantry
      model = 1
    }
  }
  landunit =
  { id       = { type = 25000 id = 909 }
    location = 357
    name     = "Región de Marruecos"
    division =
    { id    = { type = 25000 id = 20 }
      name  = "91a División de Infantería"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 25000 id = 21 }
      name  = "92a División de Infantería"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 25000 id = 22 }
      name  = "93a División de Infantería"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 25000 id = 23 }
      name  = "Tercios de la Legión"
      type  = infantry
      model = 1
      extra = artillery
    }
    division =
    { id    = { type = 25000 id = 24 }
      name  = "Fuerzas Indígenas"
      type  = infantry
      model = 1
    }
  }
  landunit =
  { id       = { type = 25000 id = 910 }
    location = 355
    name     = "Región del Maestrazgo"
    division =
    { id    = { type = 25000 id = 25 }
      name  = "3a División de Infantería"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 25000 id = 26 }
      name  = "4a División de Infantería"
      type  = infantry
      model = 1
    }
  }
  landunit =
  { id       = { type = 25000 id = 911 }
    location = 535
    name     = "Comandancia Baleares"
    division =
    { id       = { type = 25000 id = 27 }
      name     = "5a División de Infantería"
      type     = infantry
      model    = 1
      strength = 30
    }
  }
  landunit =
  { id       = { type = 25000 id = 912 }
    location = 964
    name     = "Comandancia Canarias"
    division =
    { id       = { type = 25000 id = 927 }
      name     = "8a División de Infantería"
      type     = infantry
      model    = 1
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
      type  = Cavalry
      model = 1
    }
    division =
    { id    = { type = 25000 id = 29 }
      name  = "1a División Blindada 'Brunete'"
      type  = armor
      model = 1
    }
  }
  navalunit =
  { location = 356
    base     = 356
    id       = { type = 25000 id = 700 }
    name     = "Spanish Navy"
    division =
    { id       = { type = 25000 id = 701 }
      name     = "ARNE Navarra"
      strength = 100
      type     = light_cruiser
      model    = 0
    }
    division =
    { id       = { type = 25000 id = 702 }
      name     = "1a Flotilla de Destructores"
      strength = 100
      type     = destroyer
      model    = 1
    }
    division =
    { id       = { type = 25000 id = 704 }
      name     = "ARNE Méndez Núñez"
      strength = 100
      type     = light_cruiser
      model    = 0
    }
    division =
    { id       = { type = 25000 id = 708 }
      name     = "ARNE Miguel de Cervantes"
      strength = 100
      type     = light_cruiser
      model    = 1
    }
    division =
    { id       = { type = 25000 id = 709 }
      name     = "ARNE Almirante Cervera"
      strength = 100
      type     = light_cruiser
      model    = 1
    }
    division =
    { id       = { type = 25000 id = 710 }
      name     = "2a Flotilla de Destructores"
      strength = 100
      type     = destroyer
    }
    division =
    { id       = { type = 25000 id = 711 }
      name     = "3a Flotilla de Destructores"
      strength = 100
      type     = destroyer
      model    = 1
    }
    division =
    { id   = { type = 25000 id = 1010 }
      name = "Flotilla Villalpando"
      type = transport
    }
    division =
    { id   = { type = 25000 id = 1011 }
      name = "Flotilla Benavende"
      type = transport
    }
    division =
    { id       = { type = 25000 id = 713 }
      name     = "4a Flotilla de Destructores"
      strength = 100
      type     = destroyer
      model    = 1
    }
    division =
    { id       = { type = 25000 id = 714 }
      name     = "5a Flotilla de Destructores"
      strength = 100
      type     = destroyer
      model    = 2
    }
    division =
    { id       = { type = 25000 id = 716 }
      name     = "1a Flotilla de Submarinos"
      strength = 100
      type     = submarine
      model    = 1
    }
    division =
    { id       = { type = 25000 id = 720 }
      name     = "ARNE Canarias"
      strength = 100
      type     = light_cruiser
      model    = 2
    }
    division =
    { id   = { type = 25000 id = 1012 }
      name = "Flotilla Sanabria"
      type = transport
    }
    division =
    { id       = { type = 25000 id = 1013 }
      name     = "ARNE Galicia"
      strength = 100
      type     = light_cruiser
      model    = 1
    }
  }
  airunit =
  { location = 341
    base     = 341
    id       = { type = 25000 id = 201 }
    name     = "Agrupación FAN No.1"
    division =
    { id       = { type = 25000 id = 202 }
      name     = "FAN 1-G-20 de Bombardeo"
      strength = 100
      type     = tactical_bomber
      model    = 1
    }
    division =
    { id       = { type = 25000 id = 203 }
      name     = "FAN 1-G-5 de Caza"
      strength = 30
      type     = interceptor
      model    = 1
    }
    division =
    { id       = { type = 25000 id = 205 }
      name     = "FAN 2-G-20 de Bombardeo"
      strength = 50
      type     = tactical_bomber
      model    = 1
    }
    division =
    { id       = { type = 25000 id = 206 }
      name     = "FAN 2-G-5 de Caza"
      strength = 100
      type     = interceptor
      model    = 1
    }
    division =
    { id       = { type = 25000 id = 208 }
      name     = "FAN 3-G-20 de Bombardeo"
      strength = 50
      type     = tactical_bomber
      model    = 1
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
  { location = 356
    base     = 356
    id       = { type = 25000 id = 210 }
    name     = "Agrupación FAN No.2"
    division =
    { id       = { type = 25000 id = 211 }
      name     = "FAN 1-G-10 de Cooperación"
      strength = 30
      type     = tactical_bomber
      model    = 1
    }
    division =
    { id       = { type = 25000 id = 212 }
      name     = "FAN 4-G-5 de Caza"
      strength = 30
      type     = interceptor
      model    = 1
    }
    division =
    { id       = { type = 25000 id = 214 }
      name     = "FAN 1-G-40 Estratégico"
      strength = 50
      type     = strategic_bomber
      model    = 0
    }
    division =
    { id       = { type = 25000 id = 215 }
      name     = "FAN 5-G-5 de Caza"
      strength = 100
      type     = interceptor
      model    = 1
    }
    division =
    { id       = { type = 25000 id = 219 }
      name     = "FAN 2-G-40 Estratégico"
      strength = 30
      type     = strategic_bomber
      model    = 0
    }
    division =
    { id       = { type = 25000 id = 220 }
      name     = "FAN 7-G-5 de Caza"
      strength = 50
      type     = interceptor
      model    = 1
    }
  }
}
