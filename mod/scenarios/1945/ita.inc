
##############################
# Country definition for ITA #
##############################

province =
{ id         = 368
  ic         = 6
  anti_air   = 3
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # Genoa
province =
{ id         = 369
  anti_air   = 3
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
  infra      = { size = 0.8 current_size = 0.7 }
}              # La Spezia
province =
{ id       = 370
  air_base = { size = 4 current_size = 4 }
  anti_air = 3
  infra    = { size = 1 current_size = 0.85 }
}            # Milan
province =
{ id         = 378
  anti_air   = 2
  naval_base = { size = 5 current_size = 5 }
  air_base   = { size = 5 current_size = 5 }
  infra      = { size = 1 current_size = 0.85 }
  ic         = { size = 10 current_size = 6 }
}              # Venice
province =
{ id         = 379
  ic         = 1
  naval_base = { size = 5 current_size = 5 }
  infra      = { size = 0.8 current_size = 0.75 }
}              # Ferrara
province =
{ id       = 512
  anti_air = 1
  infra    = { size = 0.8 current_size = 0.75 }
  ic       = { size = 7 current_size = 3 }
}            # Bologna
province =
{ id         = 513
  anti_air   = 1
  naval_base = { size = 5 current_size = 5 }
  air_base   = { size = 5 current_size = 5 }
  infra      = { size = 0.8 current_size = 0.65 }
  ic         = { size = 5 current_size = 1 }
}              # Florence
province =
{ id       = 515
  anti_air = 1
  air_base = { size = 10 current_size = 10 }
  infra    = { size = 0.8 current_size = 0.6 }
  ic       = { size = 8 current_size = 4 }
}            # Rome
province =
{ id    = 516
  infra = { size = 0.8 current_size = 0.75 }
  ic    = { size = 4 current_size = 2 }
}         # Perugia
province =
{ id       = 519
  air_base = { size = 10 current_size = 10 }
  infra    = { size = 0.8 current_size = 0.75 }
}            # Anzio
province =
{ id         = 521
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # Naples
province =
{ id         = 523
  ic         = 1
  anti_air   = 1
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # Taranto
province =
{ id         = 525
  anti_air   = 2
  naval_base = { size = 6 current_size = 6 }
  air_base   = { size = 6 current_size = 6 }
}              # Palermo
province =
{ id         = 526
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 3 current_size = 3 }
}              # Catania
province =
{ id       = 531
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  ic       = { size = 10 current_size = 7 }
  infra    = { size = 1 current_size = 0.9 }
}            # Turin
province =
{ id         = 534
  anti_air   = 1
  oilpool    = 100
  supplypool = 500
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 3 current_size = 3 }
}              # Sardinia

#####################
# Country main data #
#####################

country =
{ tag                    = ITA
  manpower               = 460
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 515
  belligerence           = 10
  transports             = 280
  escorts                = 35
  dissent                = 15
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 2
    freedom           = 7
    free_market       = 8
    professional_army = 3
    defense_lobby     = 4
    interventionism   = 2
  }
  SpyInfo                = { country = "ITA" NumberOfSpies = 12 }
  nationalprovinces      = { 368 369 370 371 378 379 512 513 514 515 516 517 518 519 520 521 522 523 524 525 526 531 534 }
  ownedprovinces         = { 368 369 370 371 378 379 512 513 514 515 516 517 518 519 520 521 522 523 524 525 526 531 534 }
  controlledprovinces    = { 368 369 370 371 378 379 512 513 514 515 516 517 518 519 520 521 522 523 524 525 526 531 534 }
  # ITA 1939 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1050  1070  1110  1120  1150  1190  1200  1210  1220  1230  1240  1260  1270  1310  1320  1340
			     1350  14000 14010 14020 2010  2020  2030  2040  2050  2070  2150  2160  2170  2180  2220  2230  2290  2300  2310  2320
			     2330  2340  2400  2410  2420  2450  2460  2470  2510  3010  3020  3030  3040  3070  3080  3090  3100  3130  3140  3150
			     3160  3190  3200  3250  3260  3270  3280  3320  3400  3410  3420  3430  4010  4020  4030  4040  4050  4060  4070  4120
			     4130  4140  4170  4190  4200  4220  4250  4260  5010  5020  5050  5060  5070  5080  5090  5100  5110  5120  5130  5140
			     5150  5160  5180  5190  5200  5310  5320  5330  5350  5360  5470  5480  6010  6020  6040  6050  6060  6070  6080  8010
			     8020  8030  8040  8050  8070  8100  8120  8130  8190  8310  9010  9020  9030  9040  9050  9060  9070  9080  9090  9100
			     9110  9120  9130  9140  9190  9200  9210  9270  9280  9290  9300  9350  9360  9370
			   }
  blueprints             = { 3330 }
  # Illyrian Coast
  diplomacy =
  { relation = { tag = ENG value = 100 access = yes }
    relation = { tag = FRA value = 100 }
    relation = { tag = GRE value = 100 }
    relation = { tag = HUN value = 125 }
    relation = { tag = IRQ value = 25 }
    relation =
    { tag        = SCH
      guaranteed = { day = 16 month = may year = 1935 }
    }
    relation =
    { tag        = SPA
      guaranteed = { day = 18 month = november year = 1936 }
    }
    relation = { tag = USA access = yes }
  }
  headofstate            = { type = 9 id = 3037 }
  headofgovernment       = { type = 9 id = 3047 }
  foreignminister        = { type = 9 id = 3059 }
  armamentminister       = { type = 9 id = 3080 }
  ministerofsecurity     = { type = 9 id = 3100 }
  ministerofintelligence = { type = 9 id = 3116 }
  chiefofstaff           = { type = 9 id = 3132 }
  chiefofarmy            = { type = 9 id = 3144 }
  chiefofnavy            = { type = 9 id = 3154 }
  chiefofair             = { type = 9 id = 3166 }
  dormant_teams		 = { 1815 1819 }
  dormant_ministers      = { 3001 3002 3003 3004 3005 3006 3007 3008 3009 3010 3031 3033 3034 3035 3043 3044 3052 3053 3064 3065 3066 3067 3068 3070
			     3092 3093 3094 3108 3109 3110 3112 3124 3126 3127 3128 3141 3143 3150 3151 3160 3161
			   }
  landunit =
  { id       = { type = 30651 id = 1 }
    location = 531
    name     = "1a Armata"
    division =
    { id       = { type = 30654 id = 1 }
      name     = "22a Division"
      type     = infantry
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 30654 id = 2 }
      name     = "4a Divisione"
      type     = infantry
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 30654 id = 3 }
      name     = "25a Divisione"
      type     = infantry
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 30654 id = 4 }
      name     = "5a Divisione "
      type     = infantry
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 30654 id = 5 }
      name     = "3a Divisione"
      type     = infantry
      strength = 100
      model    = 3
    }
  }
  landunit =
  { id       = { type = 30651 id = 2 }
    location = 515
    name     = "2a Armata"
    division =
    { id       = { type = 30654 id = 6 }
      name     = "13a Divisione"
      type     = infantry
      strength = 100
      model    = 4
    }
    division =
    { id       = { type = 30654 id = 7 }
      name     = "12a Divisione"
      type     = infantry
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 30654 id = 8 }
      name     = "15a Divisione"
      type     = infantry
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 30654 id = 9 }
      name     = "9a Divisione"
      type     = infantry
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 30654 id = 10 }
      name     = "10a Divisione"
      type     = infantry
      strength = 100
      model    = 3
    }
  }
  navalunit =
  { id       = { type = 30652 id = 1 }
    name     = "Regia Marina"
    location = 369
    base     = 369
    division =
    { type       = battleship
      model      = 2
      id         = { type = 30655 id = 1 }
      name       = "Giulio Cesare "
      experience = 15
    }
    division =
    { type       = battleship
      model      = 2
      id         = { type = 30655 id = 2 }
      name       = "Vittorio Veneto "
      experience = 15
    }
    division =
    { type       = battleship
      model      = 3
      id         = { type = 30655 id = 3 }
      name       = "Italia "
      experience = 15
    }
    division =
    { type       = battleship
      model      = 1
      id         = { type = 30655 id = 4 }
      name       = "Doria"
      experience = 10
    }
    division =
    { type       = battleship
      model      = 1
      id         = { type = 30655 id = 5 }
      name       = "Duilio"
      experience = 10
    }
    division =
    { type       = heavy_cruiser
      model      = 2
      id         = { type = 30655 id = 6 }
      name       = "Duca d' Aosta "
      experience = 50
    }
    division =
    { type       = heavy_cruiser
      model      = 1
      id         = { type = 30655 id = 7 }
      name       = "Scipione Africano"
      experience = 40
    }
    division =
    { type       = heavy_cruiser
      model      = 2
      id         = { type = 30655 id = 8 }
      name       = "Attilio Regolo"
      experience = 30
    }
    division =
    { type       = light_cruiser
      model      = 2
      id         = { type = 30655 id = 9 }
      name       = "Pompeo Magno "
      experience = 25
    }
    division =
    { type       = light_cruiser
      model      = 2
      id         = { type = 30655 id = 10 }
      name       = "Eugenio di Savoia "
      experience = 24
    }
    division =
    { type  = light_cruiser
      model = 1
      id    = { type = 30655 id = 11 }
      name  = "Garibaldi"
    }
    division =
    { type       = light_cruiser
      model      = 2
      id         = { type = 30655 id = 12 }
      name       = "Duca degli Abruzzi"
      experience = 10
    }
    division =
    { type       = light_cruiser
      model      = 2
      id         = { type = 30655 id = 13 }
      name       = "Montecuccoli "
      experience = 13
    }
    division =
    { type       = destroyer
      model      = 1
      id         = { type = 30655 id = 14 }
      name       = "1a Flottiglia Torpediniere"
      experience = 15
    }
    division =
    { type       = destroyer
      model      = 2
      id         = { type = 30655 id = 15 }
      name       = "2a Flottiglia Torpediniere"
      experience = 25
    }
    division =
    { type  = submarine
      model = 1
      id    = { type = 30655 id = 16 }
      name  = "2a Flottiglia Sommergibili"
    }
    division =
    { type       = submarine
      model      = 2
      id         = { type = 30655 id = 17 }
      name       = "1a Flottiglia Sommergibili"
      experience = 20
    }
    division =
    { type       = transport
      model      = 0
      id         = { type = 30655 id = 18 }
      name       = "Squadrone Vallelunga"
      experience = 10
    }
    division =
    { type       = transport
      model      = 0
      id         = { type = 30655 id = 19 }
      name       = "Squadrone Sagittario"
      experience = 10
    }
    division =
    { type       = transport
      model      = 0
      id         = { type = 30655 id = 20 }
      name       = "Squadrone Aventino"
      experience = 10
    }
  }
  airunit =
  { location = 515
    base     = 515
    id       = { type = 30653 id = 1 }
    name     = "1st Squadra Aerea"
    division =
    { id       = { type = 30656 id = 1 }
      name     = "1a Divisione Caccia"
      strength = 100
      type     = interceptor
      model    = 4
    }
  }
  airunit =
  { location = 369
    base     = 369
    id       = { type = 30653 id = 2 }
    name     = "1a Comando Bombardieri Tattici"
    division =
    { id       = { type = 30656 id = 2 }
      name     = "1a Divisione Bombardieri"
      strength = 100
      type     = tactical_bomber
      model    = 3
    }
  }
  airunit =
  { location = 369
    base     = 369
    id       = { type = 30653 id = 3 }
    name     = "2nd Squadra Aerea"
    division =
    { id       = { type = 30656 id = 3 }
      name     = "1a Divisione Caccia"
      strength = 50
      type     = interceptor
      model    = 4
    }
  }
  airunit =
  { location = 515
    base     = 515
    id       = { type = 30653 id = 4 }
    name     = "2a Comando Bombardieri Tattici"
    division =
    { id       = { type = 30656 id = 4 }
      name     = "2a Divisione Bombardieri"
      strength = 100
      type     = tactical_bomber
      model    = 3
    }
  }
  division_development =
  { type          = infantry
    model         = 4
    date          = { day = 9 month = october year = 1945 }
    cost          = 3
    days          = 95
    id            = { type = 30654 id = 11 }
    name          = "16a Divisione "
    extra         = artillery
    brigade_model = 5
  }
  division_development =
  { type          = infantry
    model         = 4
    date          = { day = 0 month = november year = 1945 }
    cost          = 3
    days          = 95
    id            = { type = 30654 id = 12 }
    name          = "17a Divisione "
    extra         = artillery
    brigade_model = 5
  }
  division_development =
  { type          = infantry
    model         = 4
    date          = { day = 9 month = october year = 1945 }
    cost          = 3
    days          = 95
    id            = { type = 30654 id = 13 }
    name          = "18a Divisione "
    extra         = artillery
    brigade_model = 5
  }
  division_development =
  { type          = motorized
    model         = 1
    date          = { day = 14 month = november year = 1946 }
    cost          = 5
    days          = 100
    id            = { type = 30654 id = 14 }
    name          = "19a Divisione "
    extra         = tank_destroyer
    brigade_model = 2
  }
  division_development =
  { type          = armor
    model         = 3
    date          = { day = 0 month = november year = 1945 }
    cost          = 10
    days          = 185
    id            = { type = 30654 id = 15 }
    name          = "20a Divisione "
    extra         = tank_destroyer
    brigade_model = 2
  }
}
