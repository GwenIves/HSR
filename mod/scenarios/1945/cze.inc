
##############################
# Country definition for CZE #
##############################

province =
{ id       = 466
  air_base = { size = 3 current_size = 3 }
  infra    = { size = 1 current_size = 0.7 }
  landfort = 2
}            # Strakonice
province =
{ id       = 467
  infra    = { size = 1 current_size = 0.75 }
  ic       = { size = 1 current_size = 0 }
  landfort = 2
}            # Tábor
province =
{ id       = 469
  anti_air = 2
  air_base = { size = 3 current_size = 3 }
  ic       = { size = 4 current_size = 2 }
  infra    = { size = 1 current_size = 0.75 }
}            # Prague
province =
{ id       = 470
  anti_air = 2
  infra    = { size = 1 current_size = 0.8 }
  ic       = { size = 2 current_size = 1 }
}            # Pilsen
province =
{ id       = 471
  infra    = { size = 1 current_size = 0.7 }
  ic       = { size = 2 current_size = 1 }
  landfort = 2
}            # Ústí
province =
{ id       = 472
  infra    = { size = 1 current_size = 0.75 }
  landfort = 2
}            # Liberec
province =
{ id       = 475
  anti_air = 2
  infra    = { size = 1 current_size = 0.75 }
  ic       = { size = 4 current_size = 2 }
}            # Brno
province =
{ id       = 476
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
  ic       = { size = 8 current_size = 3 }
  infra    = { size = 1 current_size = 0.7 }
}            # Bratislava
province =
{ id    = 490
  ic    = { size = 5 current_size = 2 }
  infra = { size = 0.8 current_size = 0.6 }
}         # Kosice

#####################
# Country main data #
#####################

country =
{ tag                    = CZE
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  manpower               = 150
  capital                = 469
  puppet                 = SOV
  control                = SOV
  dissent                = 20
  diplomacy              = { }
  nationalprovinces      = { 471 472 466 467 470 469 468 474 475 478 477 490 476 }
  ownedprovinces         = { 471 472 466 467 470 469 468 474 475 478 477 490 476 }
  controlledprovinces    = { 471 472 466 467 470 469 468 474 475 478 477 490 476 }
  # Eastern Minor Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1110  1120  1190  1200  1210  1220  1230  1310  1320  1340  14000 14010 14020 2010  2020  2030
			     2040  2050  2070  2150  2170  2290  2290  2300  2300  2310  2310  2320  2330  2340  2400  2450  2460  2470  2510  3010
			     3020  3030  3400  4010  4020  4030  4040  4120  4130  5010  5050  5060  5070  5080  5090  5100  5110  5120  5130  5190
			     5310  6210  6300  6310  6320  6330  6340  8040  8050  9010  9020  9030  9040
			   }
  SpyInfo                = { country = "CZE" NumberOfSpies = 8 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 10
    free_market       = 3
    freedom           = 3
    professional_army = 5
    defense_lobby     = 9
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 24033 }
  headofgovernment       = { type = 9 id = 24052 }
  foreignminister        = { type = 9 id = 24065 }
  armamentminister       = { type = 9 id = 24081 }
  ministerofsecurity     = { type = 9 id = 24156 }
  ministerofintelligence = { type = 9 id = 24157 }
  chiefofstaff           = { type = 9 id = 24121 }
  chiefofarmy            = { type = 9 id = 24134 }
  chiefofnavy            = { type = 9 id = 24139 }
  chiefofair             = { type = 9 id = 24145 }
  dormant_ministers      = { 24036 24037 24038 24039 24040 24048 24049 24050 24060 24061 24062 24075 24076 24077 24078 24092 24093 24094 24107 24108
			     24119 24120 24131 24132 24133 24138 24144 24146 24150
			   }
  landunit =
  { id       = { type = 26000 id = 12 }
    location = 469
    name     = "I Armáda"
    division =
    { id       = { type = 26000 id = 13 }
      name     = "1. divize"
      type     = infantry
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 26000 id = 14 }
      name     = "2. divize"
      type     = infantry
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 26000 id = 15 }
      name     = "3. divize"
      type     = infantry
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 26000 id = 16 }
      name     = "4. divize"
      type     = infantry
      strength = 100
      model    = 3
    }
  }
  landunit =
  { id       = { type = 26000 id = 18 }
    location = 476
    name     = "II Armáda"
    division =
    { id       = { type = 26000 id = 17 }
      name     = "5. divize"
      type     = infantry
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 26000 id = 19 }
      name     = "6. divize"
      type     = infantry
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 26000 id = 20 }
      name     = "7. divize"
      type     = infantry
      strength = 100
      model    = 3
    }
  }
}
