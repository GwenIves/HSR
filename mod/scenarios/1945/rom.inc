
##############################
# Country definition for ROM #
##############################

province =
{ id         = 423
  anti_air   = 4
  air_base   = { size = 1 current_size = 1 }
  naval_base = { size = 4 current_size = 4 }
  infra      = { size = 0.8 current_size = 0.7 }
  ic         = { size = 4 current_size = 2 }
}              # Constanta
province =
{ id       = 424
  anti_air = 5
  air_base = { size = 3 current_size = 3 }
  ic       = { size = 9 current_size = 6 }
  infra    = { size = 0.8 current_size = 0.75 }
}            # Bucharest
province =
{ id    = 425
  ic    = 1
  infra = { size = 0.8 current_size = 0.7 }
}         # Pitesti
province =
{ id    = 426
  ic    = 1
  infra = { size = 0.6 current_size = 0.5 }
}         # Craiova
province =
{ id    = 428
  infra = { size = 0.8 current_size = 0.6 }
}         # Cluj-Napoca
province =
{ id       = 431
  anti_air = 9
  air_base = { size = 7 current_size = 7 }
  infra    = { size = 0.8 current_size = 0.65 }
  ic       = { size = 8 current_size = 5 }
}            # Ploesti
province =
{ id         = 436
  naval_base = { size = 4 current_size = 4 }
}              # Tulcea

#####################
# Country main data #
#####################

country =
{ tag                    = ROM
  capital                = 424
  manpower               = 150
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  puppet                 = SOV
  control                = SOV
  dissent                = 10
  diplomacy =
  { relation = { tag = BUL value = 100 access = yes }
    relation = { tag = ENG value = 50 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GRE value = 100 }
    relation = { tag = HUN value = -50 }
    relation = { tag = TUR value = 100 }
    relation = { tag = YUG value = 100 }
  }
  nationalprovinces      = { 423 424 425 426 427 428 429 430 431 432 436 495 496 498 }
  ownedprovinces         = { 423 424 425 426 427 428 429 430 431 432 436 495 496 498 }
  controlledprovinces    = { 423 424 425 426 427 428 429 430 431 432 436 495 496 498 }
  # Eastern Minor Tech '36
  # Group C 1939 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1110  1120  1190  1200  1210  1220  1230  1310  1320  1340  14000 14010 14020 2010  2020  2030
			     2040  2050  2070  2150  2170  2290  2290  2300  2300  2310  2310  2320  2330  2340  2400  2450  2460  2470  2510  3010
			     3020  3030  3400  4010  4020  4030  4040  4120  4130  5010  5050  5060  5070  5080  5090  5100  5110  5120  5130  5190
			     5310  6210  6300  6310  6320  6330  6340  8040  8050  9010  9020  9030  9040  1070  1130  1150  2060  2080  2160  2180
			     2220  2230  2410  2520  2530  4050  4060  4140  4170  4190  4250  5020  5200  5210  5220  5350  5470
			   }
  SpyInfo                = { country = "ROM" NumberOfSpies = 8 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 10
    freedom           = 3
    free_market       = 2
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 22037 }
  headofgovernment       = { type = 9 id = 22051 }
  foreignminister        = { type = 9 id = 22080 }
  armamentminister       = { type = 9 id = 22098 }
  ministerofsecurity     = { type = 9 id = 22112 }
  ministerofintelligence = { type = 9 id = 22121 }
  chiefofstaff           = { type = 9 id = 22131 }
  chiefofarmy            = { type = 9 id = 22144 }
  chiefofnavy            = { type = 9 id = 22153 }
  chiefofair             = { type = 9 id = 22161 }
  dormant_teams		 = { 2911 }
  dormant_ministers      = { 22053 22001 22031 22032 22039 22048 22049 22053 22054 22075 22076 22077 22082 22085 22093 22094 22097 22105 22106 22111
			     22118 22119 22120 22127 22129 22132 22133 22134 22139 22142 22145 22158
			   }
  landunit =
  { location = 417
    name     = "Corp 1 Armata"
    id       = { type = 20600 id = 1 }
    division =
    { id         = { type = 20600 id = 2 }
      name       = "Divizie 1 Infanterie" # Timisoara
      type       = infantry
      strength   = 100
      model      = 3
      experience = 10
    }
    division =
    { id       = { type = 20600 id = 3 }
      name     = "Divizie 2 Infanterie" # Sibiu
      type     = infantry
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 20600 id = 4 }
      name     = "Divizie 3 Infanterie"
      type     = infantry
      strength = 100
      model    = 3
    }
  }
  landunit =
  { location = 422 # Craiova
    name     = "Corp 2 Armata"
    id       = { type = 20600 id = 5 }
    division =
    { id       = { type = 20600 id = 6 }
      name     = "Divizie 4 Infanterie"
      type     = infantry
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 20600 id = 7 }
      name     = "Divizie 5 Infanterie"
      type     = infantry
      strength = 100
      model    = 3
    }
    division =
    { id         = { type = 20600 id = 8 }
      name       = "Divizie 6 Infanterie"
      type       = infantry
      strength   = 100
      model      = 3
      experience = 15
    }
    division =
    { id       = { type = 20600 id = 9 }
      name     = "Divizie 7 Infanterie"
      type     = infantry
      strength = 100
      model    = 3
    }
  }
  landunit =
  { location = 424
    name     = "Corp 3 Armata"
    id       = { type = 20600 id = 10 }
    division =
    { id         = { type = 20600 id = 11 }
      name       = "Divizie 8 Infanterie"
      type       = infantry
      strength   = 100
      model      = 3
      experience = 20
    }
    division =
    { id         = { type = 20600 id = 12 }
      name       = "Divizie 9 Infanterie"
      type       = infantry
      strength   = 100
      model      = 3
      experience = 25
    }
    division =
    { id       = { type = 20600 id = 13 }
      name     = "Divizie 10 Infanterie"
      type     = infantry
      strength = 100
      model    = 3
    }
  }
  navalunit =
  { location = 423 # Constanta
    base     = 423
    name     = "Flota Romania de Mare"
    id       = { type = 19002 id = 27 }
    division =
    { id           = { type = 19002 id = 28 }
      name         = "'NMS Regele Ferdinand' Flotila"
      type         = destroyer
      model        = 0
      strength     = 7
      max_strength = 70
    }
    division =
    { id           = { type = 19002 id = 29 }
      name         = "'NMS Delfinul' Flotila"
      type         = submarine
      model        = 1
      strength     = 8
      max_strength = 80
    }
  }
  airunit =
  { location = 424 # Bucuresti
    base     = 424
    name     = "Gruparea Aeriana de Lupta"
    id       = { type = 20600 id = 42 }
    division =
    { id       = { type = 20600 id = 43 }
      name     = "Grup 1 Avion de Vanatoare"
      type     = interceptor
      model    = 1
      strength = 50
    }
    division =
    { id       = { type = 20600 id = 44 }
      name     = "Grup 1 Tactic Bombardier"
      type     = tactical_bomber
      model    = 1
      strength = 10
    }
  }
}
