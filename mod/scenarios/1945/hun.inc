
##############################
# Country definition for HUN #
##############################

province =
{ id    = 456
  ic    = { size = 6 current_size = 2 }
  infra = { size = 0.8 current_size = 0.6 }
}         # Pecs
province =
{ id       = 457
  anti_air = 6
  air_base = { size = 8 current_size = 8 }
  infra    = { size = 0.8 current_size = 0.55 }
  ic       = { size = 16 current_size = 6 }
}            # Budapest
province =
{ id    = 491
  infra = { size = 0.8 current_size = 0.65 }
  ic    = { size = 6 current_size = 2 }
}         # Miskolc
province =
{ id       = 497
  anti_air = 4
  air_base = { size = 7 current_size = 7 }
  ic       = { size = 7 current_size = 3 }
  infra    = { size = 0.8 current_size = 0.65 }
}            # Debrecen

#####################
# Country main data #
#####################

country =
{ tag                    = HUN
  manpower               = 150
  capital                = 457
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
  SpyInfo                = { country = "HUN" NumberOfSpies = 8 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 10
    free_market       = 2
    freedom           = 2
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 5
  }
  nationalprovinces      = { 456 457 458 491 492 497 428 496 498 476 477 478 490 493 }
  ownedprovinces         = { 456 457 458 491 492 497 }
  controlledprovinces    = { 456 457 458 491 492 497 }
  # Eastern Minor Tech '36
  # Group C 1939 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1110  1120  1190  1200  1210  1220  1230  1310  1320  1340  14000 14010 14020 2010  2020  2030
			     2040  2050  2070  2150  2170  2290  2290  2300  2300  2310  2310  2320  2330  2340  2400  2450  2460  2470  2510  3010
			     3020  3030  3400  4010  4020  4030  4040  4120  4130  5010  5050  5060  5070  5080  5090  5100  5110  5120  5130  5190
			     5310  6210  6300  6310  6320  6330  6340  8040  8050  9010  9020  9030  9040  1070  1150  2060  2080  2160  2180  2220
			     2230  2410  2520  2530  4050  4060  4140  4170  4190  4250  5020  5200  5210  5220  5350  5470
			   }
  diplomacy =
  { relation = { tag = ENG value = -50 }
    relation = { tag = FRA value = -70 }
    relation = { tag = ITA value = 125 }
    relation = { tag = ROM value = -50 }
    relation = { tag = YUG value = -80 }
  }
  headofstate            = { type = 9 id = 21050 }
  headofgovernment       = { type = 9 id = 21065 }
  foreignminister        = { type = 9 id = 21080 }
  armamentminister       = { type = 9 id = 21093 }
  ministerofsecurity     = { type = 9 id = 21113 }
  ministerofintelligence = { type = 9 id = 21126 }
  chiefofstaff           = { type = 9 id = 21138 }
  chiefofarmy            = { type = 9 id = 21150 }
  chiefofnavy            = { type = 9 id = 21157 }
  chiefofair             = { type = 9 id = 21167 }
  dormant_ministers      = { 21001 21002 21006 21007 21009 21041 21042 21051 21052 21054 21056 21057 21058 21066 21067 21069 21071 21072 21082 21083
			     21095 21096 21115 21116 21128 21129 21132 21139 21140 21142 21144 21151 21158 21159 21161 21168 21169 21170 21171 21175
			     21177 21048 21002 21053 21054 21003 21069 21005 21006 21007 21008 21010 21004
			   }
  landunit =
  { id       = { type = 20500 id = 5 }
    name     = "I Állandó Hadsereg"
    location = 457
    division =
    { id       = { type = 20500 id = 6 }
      name     = "1. gyalog hadosztály"
      strength = 100
      type     = infantry
      model    = 3
    }
    division =
    { id       = { type = 20500 id = 7 }
      name     = "2. gyalog hadosztály"
      strength = 100
      type     = infantry
      model    = 3
    }
    division =
    { id       = { type = 20500 id = 8 }
      name     = "3. gyalog hadosztály"
      strength = 100
      type     = infantry
      model    = 3
    }
  }
  landunit =
  { id       = { type = 20500 id = 9 }
    name     = "II Állandó Hadsereg"
    location = 457
    division =
    { id       = { type = 20500 id = 10 }
      name     = "4. gyalog hadosztály"
      strength = 100
      type     = infantry
      model    = 3
    }
    division =
    { id       = { type = 20500 id = 11 }
      name     = "5. gyalog hadosztály"
      strength = 100
      type     = infantry
      model    = 3
    }
    division =
    { id       = { type = 20500 id = 12 }
      name     = "6. gyalog hadosztály"
      strength = 100
      type     = infantry
      model    = 3
    }
  }
  airunit =
  { id       = { type = 20500 id = 13 }
    name     = "I Légí Hadsereg"
    location = 457
    base     = 457
    division =
    { id       = { type = 20500 id = 14 }
      name     = "I.Vadászosztály"
      type     = interceptor
      model    = 1
      strength = 50
    }
    division =
    { id       = { type = 20500 id = 15 }
      name     = "I.Vadászbombázó Osztály"
      type     = tactical_bomber
      model    = 1
      strength = 50
    }
  }
}
