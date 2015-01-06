
##############################
# Country definition for SAF #
##############################

province =
{ id         = 1116
  naval_base = { size = 8 current_size = 8 }
  air_base   = { size = 8 current_size = 8 }
  anti_air   = 2
  ic         = 2
}              # Cape Town
province = { id = 1117 anti_air = 1 } # Port Elisabeth
province = { id = 1119 anti_air = 1 ic = 3 } # Durban
province = { id = 1120 anti_air = 3 ic = 3 } # Johannesburg

#####################
# Country main data #
#####################

country =
{ tag                    = SAF
  # Resource Reserves
  energy                 = 5000
  metal                  = 5000
  rare_materials         = 5000
  oil                    = 500
  supplies               = 3000
  manpower               = 50
  capital                = 1121
  SpyInfo                = { country = "SAF" NumberOfSpies = 6 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 2
    freedom           = 10
    free_market       = 8
    professional_army = 5
    defense_lobby     = 7
    interventionism   = 6
  }
  # Br. Southwest Africa
  nationalprovinces      = { 1115 1116 1114 1117 1118 1120 1113 1121 1119 }
  ownedprovinces         = { 1115 1116 1114 1117 1118 1120 1113 1121 1119 1108 1107 1106 1109 1110 }
  # Br. Southwest Africa
  controlledprovinces    = { 1115 1116 1114 1117 1118 1120 1113 1121 1119 1108 1107 1106 1109 1110 }
  # Commonwealth Tech '36
  # UK 1944 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1040  1050  1070  1080  1090  1110  1120  1130  1150  1160  1170  1180  1190  1200  1210  1220
			     1230  1240  1250  1260  1270  1280  1310  1320  1330  1340  1350  1360  14000 14010 14020 2010  2020  2030  2040  2050
			     2060  2070  2080  2090  2100  2110  2120  2150  2160  2170  2180  2190  2220  2230  2240  2260  2270  2290  2300  2310
			     2320  2330  2340  2350  2360  2370  2380  2400  2410  2420  2430  2450  2460  2470  2480  2490  2510  2520  2530  3010
			     4010  4020  4030  4040  4050  4060  4070  4080  4090  4100  4110  4120  4130  4140  4150  4160  4170  4180  4190  4200
			     4210  4220  4230  4240  4250  4260  4280  5010  5020  5030  5050  5060  5070  5080  5090  5100  5110  5120  5130  5140
			     5160  5180  5190  5200  5210  5220  5230  5310  5320  5330  5340  5350  5360  5370  5380  5390  5400  5410  5420  5430
			     5440  5470  5480  5490  5500  5510  5550  5560  6010  6030  6110  6120  6130  6140  6170  6200  8010  8020  8030  8040
			     8050  8070  8090  8100  8110  8120  8130  8140  8160  8190  8200  8250  8310  9010  9020  9030  9040  9050  9060  9070
			     9080  9090  9100  9110  9120  9130  9140  9150  9160  9170  9180  9190  9200  9210  9220  9230  9240  9250  9260  9270
			     9280  9290  9300  9310  9320  9330  9340  9350  9360  9370  9380  9390  9400  9410  9420  9430  9440  9450  9460
			   }
  diplomacy =
  { relation = { tag = NZL access = yes value = 200 }
    relation = { tag = CAN access = yes value = 200 }
    relation = { tag = AST access = yes value = 200 }
    relation = { tag = ENG access = yes value = 200 }
    relation = { tag = BHU value = 200 }
    relation = { tag = FIN value = -200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = NEP value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = POR value = 125 }
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
    relation = { tag = ITA access = yes }
  }
  dormant_ministers      = { 70001 70022 70002 70003 70004 70005 70006 70024 70008 }
  headofstate            = { type = 9 id = 70023 }
  headofgovernment       = { type = 9 id = 70030 }
  foreignminister        = { type = 9 id = 70035 }
  armamentminister       = { type = 9 id = 70053 }
  ministerofsecurity     = { type = 9 id = 70061 }
  ministerofintelligence = { type = 9 id = 70070 }
  chiefofstaff           = { type = 9 id = 70007 }
  chiefofarmy            = { type = 9 id = 70080 }
  chiefofnavy            = { type = 9 id = 70009 }
  chiefofair             = { type = 9 id = 70084 }
  landunit =
  { location = 1116
    id       = { type = 30551 id = 1 }
    name     = "Union Defence Corps"
    division =
    { experience = 20
      id         = { type = 30554 id = 1 }
      name       = "3rd SA Motorized Inf. Div."
      type       = motorized
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { id       = { type = 30551 id = 2 }
    location = 515 # Italy
    name     = "South African Expeditionary Corps"
    division =
    { experience = 20
      id         = { type = 30554 id = 2 }
      name       = "2nd SA Armoured Division"
      type       = armor
      strength   = 100
      model      = 3
    }
    division =
    { experience    = 20
      id            = { type = 30554 id = 3 }
      name          = "1st SA Motorized Inf. Div."
      type          = motorized
      model         = 2
      strength      = 100
      extra         = anti_tank
      brigade_model = 3
    }
    division =
    { experience    = 20
      id            = { type = 30554 id = 4 }
      name          = "2nd SA Motorized Inf. Div."
      type          = motorized
      model         = 2
      strength      = 100
      extra         = anti_air
      brigade_model = 2
    }
  }
  navalunit =
  { id       = { type = 30552 id = 1 }
    name     = "South African Fleet"
    location = 1116
    base     = 1116
    division =
    { experience = 20
      id         = { type = 30555 id = 1 }
      name       = "1st Transport Flotilla"
      type       = transport
    }
    division =
    { experience = 20
      id         = { type = 30555 id = 2 }
      name       = "2nd Transport Flotilla"
      type       = transport
    }
    division =
    { experience = 20
      id         = { type = 30555 id = 3 }
      name       = "3rd Transport Flotilla"
      type       = transport
    }
    division =
    { experience = 20
      id         = { type = 30555 id = 4 }
      name       = "4th Transport Flotilla"
      type       = transport
    }
    division =
    { experience = 20
      id         = { type = 30555 id = 5 }
      name       = "5th Transport Flotilla"
      type       = transport
    }
    division =
    { experience = 20
      id         = { type = 30555 id = 6 }
      name       = "6th Transport Flotilla"
      type       = transport
    }
    division =
    { experience = 20
      id         = { type = 30555 id = 7 }
      name       = "7th Transport Flotilla"
      type       = transport
    }
    division =
    { experience = 20
      id         = { type = 30555 id = 8 }
      name       = "8th Transport Flotilla"
      type       = transport
    }
  }
  airunit =
  { id       = { type = 30553 id = 1 }
    name     = "1st SAAF Airforce"
    location = 519 # Roma
    base     = 519
    division =
    { experience = 20
      id         = { type = 30556 id = 1 }
      name       = "No.1 SAAF interceptor Group"
      type       = interceptor
      model      = 2
    }
    division =
    { experience = 20
      id         = { type = 30556 id = 2 }
      name       = "No.2 SAAF interceptor Group"
      type       = interceptor
      model      = 2
    }
    division =
    { experience = 20
      id         = { type = 30556 id = 5 }
      name       = "No.15 SAAF Tactical Bomb Group"
      type       = tactical_bomber
      model      = 1
    }
    division =
    { experience = 20
      id         = { type = 30556 id = 6 }
      name       = "No.21 SAAF Tactical Bomb Group"
      type       = tactical_bomber
      model      = 3
    }
  }
  airunit =
  { id       = { type = 30553 id = 2 }
    name     = "2st SAAF Airforce"
    location = 523 # Bari
    base     = 523
    division =
    { experience = 20
      id         = { type = 30556 id = 7 }
      name       = "No.4 SAAF interceptor Group"
      type       = interceptor
      model      = 2
    }
    division =
    { experience = 20
      id         = { type = 30556 id = 10 }
      name       = "No.40 SAAF interceptor Group"
      type       = interceptor
      model      = 2
    }
    division =
    { experience = 20
      id         = { type = 30556 id = 11 }
      name       = "No.17 SAAF Tactical Bomb Group"
      type       = tactical_bomber
      model      = 1
    }
    division =
    { experience = 20
      id         = { type = 30556 id = 12 }
      name       = "No.21 SAAF Tactical Bomb Group"
      type       = tactical_bomber
      model      = 3
    }
  }
  airunit =
  { id       = { type = 30553 id = 3 }
    name     = "No.16 SAAF Tactical Bomb Group"
    location = 521 # Port Said
    base     = 521
    division =
    { experience = 20
      id         = { type = 30556 id = 13 }
      name       = "No.16 SAAF Tactical Bomb Group"
      type       = tactical_bomber
      model      = 2
    }
  }
  airunit =
  { id       = { type = 30553 id = 5 }
    name     = "No.41 SAAF interceptor Group"
    location = 521 # Nicosia
    base     = 521
    division =
    { experience = 20
      id         = { type = 30556 id = 15 }
      name       = "No.41 SAAF interceptor Group"
      type       = interceptor
      model      = 2
    }
  }
  airunit =
  { id       = { type = 30553 id = 6 }
    name     = "3rd SAAF Airforce"
    location = 513 # Benghazi
    base     = 513
    division =
    { experience = 20
      id         = { type = 30556 id = 16 }
      name       = "No.24 SAAF Tactical Bomb Group"
      type       = tactical_bomber
      model      = 3
    }
    division =
    { experience = 20
      id         = { type = 30556 id = 4 }
      name       = "No.7 SAAF interceptor Group"
      type       = interceptor
      model      = 2
    }
    division =
    { experience = 20
      id         = { type = 30556 id = 3 }
      name       = "No.3 SAAF interceptor Group"
      type       = interceptor
      model      = 2
    }
    division =
    { experience = 20
      id         = { type = 30556 id = 9 }
      name       = "No.11 SAAF interceptor Group"
      type       = interceptor
      model      = 2
    }
  }
  airunit =
  { id       = { type = 30553 id = 8 }
    name     = "4th SAAF Airforce"
    location = 531 # Algiers
    base     = 531
    division =
    { experience = 20
      id         = { type = 30556 id = 18 }
      name       = "No.24 SAAF Marine Bomb Group"
      type       = naval_bomber
      model      = 2
    }
    division =
    { experience = 20
      id         = { type = 30556 id = 17 }
      name       = "No.25 SAAF Marine Bomb Group"
      type       = naval_bomber
      model      = 2
    }
    division =
    { experience = 20
      id         = { type = 30556 id = 14 }
      name       = "No.22 SAAF Marine Bomb Group"
      type       = naval_bomber
      model      = 2
    }
    division =
    { experience = 20
      id         = { type = 30556 id = 8 }
      name       = "No.5 SAAF interceptor Group"
      type       = multi_role
      model      = 2
    }
  }
  division_development =
  { type          = motorized
    model         = 2
    date          = { day = 0 month = november year = 1945 }
    cost          = 5
    days          = 100
    id            = { type = 30554 id = 5 }
    name          = "4th SA Motorized Inf. Div."
    extra         = artillery
    brigade_model = 5
  }
  division_development =
  { type          = motorized
    model         = 2
    date          = { day = 24 month = november year = 1945 }
    cost          = 5
    days          = 100
    id            = { type = 30554 id = 6 }
    name          = "5th SA Motorized Inf. Div."
    extra         = artillery
    brigade_model = 5
  }
}
