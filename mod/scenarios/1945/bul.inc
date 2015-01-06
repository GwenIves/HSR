
##############################
# Country definition for BUL #
##############################

province =
{ id       = 417
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  infra    = { size = 0.6 current_size = 0.55 }
  ic       = { size = 13 current_size = 7 }
}            # Sofia
province =
{ id    = 420
  ic    = 6
  infra = { size = 0.6 current_size = 0.55 }
}         # Pleven
province =
{ id    = 421
  infra = { size = 0.6 current_size = 0.55 }
  ic    = { size = 7 current_size = 3 }
}         # Plovdiv
province =
{ id         = 422
  anti_air   = 3
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 3 current_size = 3 }
  infra      = { size = 0.8 current_size = 0.55 }
  ic         = { size = 7 current_size = 4 }
}              # Varna

#####################
# Country main data #
#####################

country =
{ tag                    = BUL
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  manpower               = 60
  capital                = 417
  puppet                 = SOV
  control                = SOV
  dissent                = 15
  diplomacy =
  { relation = { tag = ENG value = 20 }
    relation = { tag = FRA value = 20 }
    relation = { tag = GRE value = -75 }
    relation = { tag = ROM value = 100 }
    relation = { tag = TUR value = 75 }
    relation = { tag = YUG value = 25 }
  }
  nationalprovinces      = { 419 420 422 421 417 416 413 414 412 410 423 }
  ownedprovinces         = { 419 420 422 421 417 416 }
  controlledprovinces    = { 419 420 422 421 417 416 }
  # Eastern Minor Tech '36
  # Group D 1939 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1110  1120  1190  1200  1210  1220  1230  1310  1320  1340  14000 14010 14020 2010  2020  2030
			     2040  2050  2070  2150  2170  2290  2290  2300  2300  2310  2310  2320  2330  2340  2400  2450  2460  2470  2510  3010
			     3020  3030  3400  4010  4020  4030  4040  4120  4130  5010  5050  5060  5070  5080  5090  5100  5110  5120  5130  5190
			     5310  6210  6300  6310  6320  6330  6340  8040  8050  9010  9020  9030  9040  1070  1150  2060  2080  2160  2180  2220
			     2230  2410  2520  2530  4050  4060  4140  4170  4190  4250  5020  5200  5210  5220  5320  5350
			   }
  SpyInfo                = { country = "BUL" NumberOfSpies = 8 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 10
    free_market       = 4
    freedom           = 3
    professional_army = 4
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 19051 }
  headofgovernment       = { type = 9 id = 19060 }
  foreignminister        = { type = 9 id = 19075 }
  armamentminister       = { type = 9 id = 19090 }
  ministerofsecurity     = { type = 9 id = 19104 }
  ministerofintelligence = { type = 9 id = 19114 }
  chiefofstaff           = { type = 9 id = 19124 }
  chiefofarmy            = { type = 9 id = 19136 }
  chiefofnavy            = { type = 9 id = 19143 }
  chiefofair             = { type = 9 id = 19150 }
  dormant_ministers      = { 19004 19005 19006 19007 19009 19001 19043 19045 19055 19066 19067 19081 19096 19097 19108 19109 19119 19130 19131 19139
			     19146
			   }
  landunit =
  { id       = { type = 19000 id = 1 }
    location = 421
    name     = "1-va Armija"
    division =
    { id       = { type = 19000 id = 2 }
      name     = "1-va Sofiiska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 3
    }
    division =
    { id       = { type = 19000 id = 4 }
      name     = "1-va Konna divizija"
      strength = 100
      type     = cavalry
      model    = 2
    }
  }
  landunit =
  { id       = { type = 19000 id = 5 }
    location = 422
    name     = "2-ra Armija"
    division =
    { id       = { type = 19000 id = 6 }
      name     = "2-ra Trakiiska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 3
    }
    division =
    { id       = { type = 19000 id = 19 }
      name     = "2-ra Konna divizija"
      strength = 100
      type     = cavalry
      model    = 2
    }
  }
}
