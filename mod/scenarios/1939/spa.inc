
##############################
# Country definition for SPA #
##############################

province = { id = 331 ic = 2 } # Bilbao
province =
{ id         = 334
  anti_air   = 2
  naval_base = { size = 7 current_size = 7 }
  air_base   = { size = 4 current_size = 4 }
}              # La Coruña
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
}              # València
province =
{ id         = 356
  ic         = 2
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
{ id         = 955
  anti_air   = 2
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 2 current_size = 2 }
}              # Villa Sanjuro
province =
{ id         = 964
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 2 current_size = 2 }
}              # Tenerife
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
{ tag                    = SPA
  regular_id             = SPR
  intrinsic_gov_type     = fascist
  belligerence           = 5
  manpower               = 250
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  transports             = 80
  dissent                = 30
  capital                = 341
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
  SpyInfo                = { country = "SPA" NumberOfSpies = 8 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 4 }
  #SpyInfo                = { country = "FRA" NumberOfSpies = 8 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 5 }
  #SpyInfo                = { country = "ARG" NumberOfSpies = 4 }
  #SpyInfo                = { country = "MEX" NumberOfSpies = 4 }
  #SpyInfo                = { country = "USA" NumberOfSpies = 5 }
  #SpyInfo                = { country = "ECU" NumberOfSpies = 4 }
  #SpyInfo                = { country = "VEN" NumberOfSpies = 4 }
  #SpyInfo                = { country = "BRA" NumberOfSpies = 4 }
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
  # Semi-Major Tech '36
  # Group C 1939 techs
  # ######################
  techapps               = { 4170  4220  4010  4020  4120  4130  2150  2010  2020  2030  2040  2290  2300  2310  2320  2330  2400  2450  2460
			     2510  1010  1020  1190  1200  1110  9010  9020  5010  5050  5060  5080  5090  5100  5110  5190  6010  6020  3010  3020  3030
			     3070  3080  3130  3140  3150  3250  3400  3410  8010  8020  8040  8050  14000
			   }
  # Gibralter claim
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
  foreignminister        = { type = 9 id = 10058 }
  armamentminister       = { type = 9 id = 10094 }
  ministerofsecurity     = { type = 9 id = 10129 }
  ministerofintelligence = { type = 9 id = 10162 }
  chiefofstaff           = { type = 9 id = 10183 }
  chiefofarmy            = { type = 9 id = 10210 }
  chiefofnavy            = { type = 9 id = 10230 }
  chiefofair             = { type = 9 id = 10249 }
  dormant_ministers      = { 10001 10045 10054 10003 10089 10047 10154 10275 10204 10188 10189 10008 10227 10211 10009 10229 10010 10247 10039
			   } # Removed from dormant list 10111 Jose Caelvo. Minister deleted he dies 4 days before SCW.
  dormant_leaders        = { 3413 3416 3427 3455 3466 3492 3493 3494 }

  landunit =
  { id       = { type = 25000 id = 1 }
    location = 346
    name     = "Región de Guadarrama"
    division =
    { id   = { type = 25001 id = 1 }
      name = "11a División de Infantería"
      type = infantry
    }
    division =
    { id   = { type = 25000 id = 2 }
      name = "12a División de Infantería"
      type = infantry
    }
    division =
    { id   = { type = 25000 id = 3 }
      name = "13a División de Infantería"
      type = infantry
    }
  }
  landunit =
  { id       = { type = 25000 id = 902 }
    location = 351
    name     = "Región de Andalucía"
    division =
    { id   = { type = 25000 id = 4 }
      name = "21a División de Infantería"
      type = infantry
    }
    division =
    { id   = { type = 25000 id = 5 }
      name = "22a División de Infantería"
      type = infantry
    }
    division =
    { id    = { type = 25000 id = 6 }
      name  = "23a División de Infantería"
      type  = infantry
      extra = artillery
    }
  }
  landunit =
  { id       = { type = 25000 id = 903 }
    location = 352
    name     = "Región del Túria"
    division =
    { id   = { type = 25000 id = 7 }
      name = "31a División de Infantería"
      type = infantry
    }
    division =
    { id    = { type = 25000 id = 8 }
      name  = "32a División de Infantería"
      type  = infantry
      extra = artillery
    }
  }
  landunit =
  { id       = { type = 25000 id = 904 }
    location = 330
    name     = "Región de Urgel"
    division =
    { id   = { type = 25000 id = 9 }
      name = "41a División de Infantería"
      type = infantry
    }
    division =
    { id   = { type = 25000 id = 10 }
      name = "42a División de Infantería"
      type = infantry
    }
    division =
    { id   = { type = 25000 id = 11 }
      name = "43a División de Infantería"
      type = infantry
    }
  }
  landunit =
  { id       = { type = 25000 id = 905 }
    location = 356
    name     = "Región de Aragón"
    division =
    { id   = { type = 25000 id = 12 }
      name = "51a División de Infantería"
      type = infantry
    }
    division =
    { id   = { type = 25000 id = 13 }
      name = "52a División de Infantería"
      type = infantry
    }
  }
  landunit =
  { id       = { type = 25000 id = 906 }
    location = 331
    name     = "Región de Navarra"
    division =
    { id   = { type = 25000 id = 14 }
      name = "61a División de Infantería"
      type = infantry
    }
    division =
    { id   = { type = 25000 id = 15 }
      name = "62a División de Infantería"
      type = infantry
    }
  }
  landunit =
  { id       = { type = 25000 id = 907 }
    location = 341
    name     = "Región de Castilla"
    division =
    { id   = { type = 25000 id = 16 }
      name = "71a División de Infantería"
      type = infantry
    }
    division =
    { id   = { type = 25000 id = 17 }
      name = "72a División de Infantería"
      type = infantry
    }
  }
  landunit =
  { id       = { type = 25000 id = 908 }
    location = 334
    name     = "Región de Galicia"
    division =
    { id   = { type = 25000 id = 18 }
      name = "81a División de Infantería"
      type = infantry
    }
    division =
    { id   = { type = 25000 id = 19 }
      name = "82a División de Infantería"
      type = infantry
    }
  }
  landunit =
  { id       = { type = 25000 id = 909 }
    location = 339
    name     = "Región de Marruecos"
    division =
    { id   = { type = 25000 id = 20 }
      name = "91a División de Infantería"
      type = infantry
    }
    division =
    { id   = { type = 25000 id = 21 }
      name = "92a División de Infantería"
      type = infantry
    }
    division =
    { id   = { type = 25000 id = 22 }
      name = "93a División de Infantería"
      type = infantry
    }
    division =
    { id    = { type = 25000 id = 23 }
      name  = "Tercios de la Legión"
      type  = infantry
      extra = artillery
    }
    division =
    { id   = { type = 25000 id = 24 }
      name = "Fuerzas Indígenas"
      type = infantry
    }
  }
  landunit =
  { id       = { type = 25000 id = 910 }
    location = 338
    name     = "Región del Maestrazgo"
    division =
    { id   = { type = 25000 id = 25 }
      name = "101a División de Infantería"
      type = infantry
    }
    division =
    { id   = { type = 25000 id = 26 }
      name = "102a División de Infantería"
      type = infantry
    }
  }
  landunit =
  { id       = { type = 25000 id = 911 }
    location = 535
    name     = "Comandancia Baleares"
    division =
    { id       = { type = 25000 id = 27 }
      name     = "Comandancia de Baleares"
      type     = infantry
      strength = 30
    }
  }
  landunit =
  { id       = { type = 25000 id = 912 }
    location = 964
    name     = "Comandancia Canarias"
    division =
    { id       = { type = 25000 id = 927 }
      name     = "Comandancia de Canarias"
      type     = infantry
      strength = 30
    }
  }
  landunit =
  { id       = { type = 25000 id = 913 }
    location = 341
    name     = "Grupo de Caballería"
    division =
    { id   = { type = 25000 id = 28 }
      name = "1a Div. de Caballería"
      type = cavalry
    }
    division =
    { id   = { type = 25000 id = 29 }
      name = "1a División Blindada 'Brunete'"
      type = armor
    }
  }
  # The Naval units for 1939-1941 are guesstimated discounting reported losses during the Civil War from the 1936 OOB
  navalunit =
  { location = 972
    base     = 972
    id       = { type = 25000 id = 700 }
    name     = "Base Naval Cádiz"
    division =
    { id       = { type = 25000 id = 701 }
      name     = "ARNE Navarra"
      strength = 60
      type     = light_cruiser
    }
    division =
    { id       = { type = 25000 id = 702 }
      name     = "1a Flotilla de Destructores"
      strength = 100
      type     = destroyer
      model    = 1
    }
  }
  navalunit =
  { location = 972
    base     = 972
    id       = { type = 25000 id = 703 }
    name     = "Grupo Méndez Núñez"
    division =
    { id       = { type = 25000 id = 704 }
      name     = "ARNE Méndez Núñez"
      strength = 100
      type     = light_cruiser
    }
  }
  navalunit =
  { location = 356
    base     = 356
    id       = { type = 25000 id = 705 }
    name     = "Escuadrón de Batalla"
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
    { id       = { type = 25000 id = 722 }
      name     = "Flotilla Villalpando"
      strength = 100
      type     = transport
    }
    division =
    { id       = { type = 25000 id = 723 }
      name     = "Flotilla Benavende"
      strength = 100
      type     = transport
    }
  }
  navalunit =
  { location = 347
    base     = 347
    id       = { type = 25000 id = 712 }
    name     = "Base Naval Cadiz"
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
    { id       = { type = 25000 id = 726 }
      name     = "Flotilla Sanabria"
      strength = 100
      type     = transport
    }
    division =
    { id       = { type = 25000 id = 727 }
      name     = "Flotilla Peña Mira"
      strength = 100
      type     = transport
    }
  }
  navalunit =
  { location = 535
    base     = 535
    id       = { type = 25000 id = 715 }
    name     = "1a Flotilla de Submarinos"
    division =
    { id       = { type = 25000 id = 716 }
      name     = "1a Flotilla de Submarinos"
      strength = 100
      type     = submarine
      model    = 1
    }
  }
  navalunit =
  { location = 334
    base     = 334
    id       = { type = 25000 id = 719 }
    name     = "Base Naval Ferrol"
    division =
    { id       = { type = 25000 id = 501 }
      name     = "ARNE Galicia"
      strength = 100
      type     = light_cruiser
      model    = 1
    }
    division =
    { id       = { type = 25000 id = 720 }
      name     = "ARNE Canarias"
      model    = 1
      type     = heavy_cruiser
      strength = 100
    }
    division =
    { id       = { type = 25000 id = 724 }
      name     = "Flotilla Alcafices"
      strength = 100
      type     = transport
    }
    division =
    { id       = { type = 25000 id = 725 }
      name     = "Flotilla Valderas"
      strength = 100
      type     = transport
    }
  }
  airunit =
  { location = 334
    base     = 334
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
    }
  }
  airunit =
  { location = 334
    base     = 334
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
    }
  }
  airunit =
  { location = 356
    base     = 356
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
    }
  }
  airunit =
  { location = 955
    base     = 955
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
    }
  }
  airunit =
  { location = 964
    base     = 964
    id       = { type = 25000 id = 216 }
    name     = "Baleares"
    division =
    { id       = { type = 25000 id = 217 }
      name     = "FAN 6-G-5 de Caza"
      strength = 30
      type     = interceptor
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
    }
  }
}
