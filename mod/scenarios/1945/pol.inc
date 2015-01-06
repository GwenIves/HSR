
##############################
# Country definition for POL #
##############################

province =
{ id         = 303
  anti_air   = 2
  naval_base = { size = 5 current_size = 5 }
  air_base   = { size = 5 current_size = 5 }
  infra      = { size = 1 current_size = 0.65 }
  ic         = { size = 5 current_size = 2 }
}              # Danzig
province =
{ id       = 305
  anti_air = 1
  landfort = 1
  air_base = { size = 5 current_size = 5 }
  infra    = { size = 1 current_size = 0.65 }
}            # Torun
province =
{ id       = 307
  anti_air = 2
  air_base = { size = 5 current_size = 5 }
}            # Poznan
province =
{ id       = 479
  anti_air = 2
  air_base = { size = 5 current_size = 5 }
  infra    = { size = 0.8 current_size = 0.65 }
  ic       = { size = 3 current_size = 1 }
}            # Cracow
province =
{ id       = 483
  anti_air = 2
  infra    = { size = 0.8 current_size = 0.7 }
  ic       = { size = 3 current_size = 1 }
}            # Lodz
province =
{ id       = 485
  anti_air = 3
  air_base = { size = 10 current_size = 10 }
  ic       = { size = 12 current_size = 5 }
  infra    = { size = 0.8 current_size = 0.55 }
}            # Warsaw
province = { id = 486 landfort = 2 } # Lomza
province =
{ id       = 489
  air_base = { size = 5 current_size = 5 }
  infra    = { size = 0.8 current_size = 0.75 }
}            # Przemysl
province =
{ id       = 509
  anti_air = 1
  air_base = { size = 7 current_size = 7 }
  infra    = { size = 0.8 current_size = 0.55 }
}            # Suwalki

#####################
# Country main data #
#####################

country =
{ tag                    = POL
  capital                = 485
  manpower               = 275
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 5000
  money                  = 100
  puppet                 = SOV
  control                = SOV
  dissent                = 15
  diplomacy              = { }
  nationalprovinces      = { 302 303 304 305 306 307 308 473 479 480 481 482 483 484 485 486 487 488 489 505 508 509 }
  ownedprovinces         = { 302 303 304 305 306 307 308 473 479 480 481 482 483 484 485 486 487 488 489 505 508 509 }
  controlledprovinces    = { 302 303 304 305 306 307 308 473 479 480 481 482 483 484 485 486 487 488 489 505 508 509 }
  # Air Doctrines
  techapps               = { 1010  1020  1030  1040  1110  1120  1190  1200  1210  1220  1230  1310  1320  1340  14000 14010 14020 2010  2020  2030
			     2040  2050  2070  2150  2170  2290  2290  2300  2300  2310  2310  2320  2330  2340  2400  2450  2460  2470  2510  3010
			     3020  3030  3400  4010  4020  4030  4040  4120  4130  5010  5050  5060  5070  5080  5090  5100  5110  5120  5130  5190
			     5310  6210  6300  6310  6320  6330  6340  8040  8050  9010  9020  9030  9040
			   }
  SpyInfo                = { country = "POL" NumberOfSpies = 8 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 10
    freedom           = 4
    free_market       = 3
    professional_army = 3
    defense_lobby     = 8
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 13021 }
  headofgovernment       = { type = 9 id = 13022 }
  foreignminister        = { type = 9 id = 13023 }
  armamentminister       = { type = 9 id = 13086 }
  ministerofsecurity     = { type = 9 id = 13099 }
  ministerofintelligence = { type = 9 id = 13111 }
  chiefofstaff           = { type = 9 id = 13122 }
  chiefofarmy            = { type = 9 id = 13127 }
  chiefofnavy            = { type = 9 id = 13133 }
  chiefofair             = { type = 9 id = 13137 }
  dormant_ministers      = { 13055 13050 13051 13067 13080 13083 13101 13116 13124 13125 13129 13014 13016 13017 13019 13020 13043 }
  landunit =
  { id       = { type = 18600 id = 18 }
    location = 485
    name     = "1. Armia"
    division =
    { id    = { type = 18600 id = 19 }
      name  = "1 Dywizja Piechoty"
      type  = infantry
      model = 3
    }
    division =
    { id    = { type = 18600 id = 20 }
      name  = "2 Dywizja Piechoty"
      type  = infantry
      model = 3
    }
    division =
    { id    = { type = 18600 id = 21 }
      name  = "3 Dywizja Piechoty"
      type  = infantry
      model = 3
    }
    division =
    { id    = { type = 18600 id = 22 }
      name  = "4 Dywizja Piechoty"
      type  = infantry
      model = 3
    }
    division =
    { id    = { type = 18600 id = 23 }
      name  = "5 Dywizja Piechoty"
      type  = infantry
      model = 3
    }
    division =
    { id    = { type = 18600 id = 58 }
      name  = "Nowogródzka B.K."
      type  = cavalry
      model = 2
    }
  }
  landunit =
  { id       = { type = 18600 id = 24 }
    location = 479
    name     = "2. Armia"
    division =
    { id    = { type = 18600 id = 25 }
      name  = "6 Dywizja Piechoty"
      type  = infantry
      model = 3
    }
    division =
    { id    = { type = 18600 id = 26 }
      name  = "7 Dywizja Piechoty"
      type  = infantry
      model = 3
    }
    division =
    { id    = { type = 18600 id = 27 }
      name  = "8 Dywizja Piechoty"
      type  = infantry
      model = 3
    }
    division =
    { id    = { type = 18600 id = 28 }
      name  = "9 Dywizja Piechoty"
      type  = infantry
      model = 3
    }
    division =
    { id    = { type = 18600 id = 57 }
      name  = "Krakowska B.K."
      type  = cavalry
      model = 2
    }
  }
  landunit =
  { id       = { type = 18600 id = 29 }
    location = 303
    name     = "3. Armia"
    division =
    { id    = { type = 18600 id = 30 }
      name  = "10 Dywizja Piechoty"
      type  = infantry
      model = 3
    }
    division =
    { id    = { type = 18600 id = 31 }
      name  = "11 Dywizja Piechoty"
      type  = infantry
      model = 3
    }
    division =
    { id    = { type = 18600 id = 32 }
      name  = "12 Dywizja Piechoty"
      type  = infantry
      model = 3
    }
    division =
    { id    = { type = 18600 id = 33 }
      name  = "13 Dywizja Piechoty"
      type  = infantry
      model = 3
    }
    division =
    { id    = { type = 18600 id = 56 }
      name  = "Kresowa B.K."
      type  = cavalry
      model = 2
    }
  }
  navalunit =
  { id       = { type = 30013 id = 114 }
    name     = "Polska Flota Wojenna"
    location = 303 # Danzig
    base     = 303
    division =
    { id           = { type = 30013 id = 115 }
      name         = "1 Flotylla Niszczycieli"
      type         = destroyer
      model        = 2
      strength     = 50
      max_strength = 50
    }
    division =
    { id    = { type = 30013 id = 117 }
      name  = "1 Flotylla Okretow Podwodnych"
      type  = submarine
      model = 2
    }
  }
  airunit =
  { id       = { type = 18600 id = 59 }
    name     = "1 Dyon Brygady Poscigowej"
    location = 485
    base     = 485
    division =
    { id    = { type = 18600 id = 60 }
      name  = "1 Dyon Brygady Poscigowej"
      type  = interceptor
      model = 1
    }
    division =
    { id    = { type = 18600 id = 62 }
      name  = "1 Dywizjon Bombowców Ciezkich"
      type  = tactical_bomber
      model = 1
    }
  }
}
