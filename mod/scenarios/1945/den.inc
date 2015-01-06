
##############################
# Country definition for DEN #
##############################

province =
{ id            = 91
  radar_station = { size = 1 current_size = 1 }
}                 # Kolding
province =
{ id            = 92
  naval_base    = { size = 2 current_size = 2 }
  air_base      = { size = 2 current_size = 2 }
  radar_station = { size = 1 current_size = 1 }
}                 # Århus
province =
{ id         = 292
  anti_air   = 1
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 4 current_size = 4 }
}              # Aalborg
province =
{ id         = 294
  anti_air   = 2
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # Copenhagen

#####################
# Country main data #
#####################

country =
{ tag                    = DEN
  manpower               = 35
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 294
  dissent                = 3
  SpyInfo                = { country = "DEN" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    free_market       = 6
    freedom           = 8
    professional_army = 3
    defense_lobby     = 1
    interventionism   = 3
  }
  nationalprovinces      = { 91 92 292 293 294 295 800 }
  ownedprovinces         = { 292 293 294 800 91 92 }
  controlledprovinces    = { 292 293 294 800 91 92 }
  # Western Minor Tech '36
  # Group C 1939 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1050  1110  1190  1200  1210  1220  1230  1310  1320  1330  1340  1350  14000 14010 14020 14030
			     2010  2020  2030  2040  2050  2070  2150  2170  2180  2220  2230  2290  2300  2310  2320  2330  2340  2400  2410  2420
			     2450  2460  2470  2480  2510  2520  3010  3020  3030  3040  3070  3080  3090  3130  3140  3150  3190  3200  3250  3260
			     3320  3400  3410  3420  4010  4020  4030  4040  4050  4060  4070  4120  4130  4140  4170  4190  4220  4250  5010  5020
			     5030  5050  5060  5070  5080  5090  5100  5110  5120  5130  5190  5200  5310  5320  5330  5350  5360  6010  6020  6040
			     6050  6060  6070  8010  8020  8030  8040  8050  8070  8100  8120  8130  8200  8310  9010  9020  9030  9040  9050  9060
			     9070  9080  9090  9100  9110  9120  9130  9140  9150  9160  9170  9180  9190  9270  9280  9290  9350  9360  9370
			   }
  diplomacy =
  { relation = { tag = BEL value = 100 }
    relation = { tag = ENG value = 100 }
    relation = { tag = FRA value = 75 }
    relation = { tag = HOL value = 100 }
    relation = { tag = LUX value = 100 }
    relation = { tag = NOR value = 150 }
    relation = { tag = PER value = 50 }
    relation = { tag = USA value = 75 }
    relation = { tag = ICL value = 100 }
  }
  headofstate            = { type = 9 id = 16001 }
  headofgovernment       = { type = 9 id = 16039 }
  foreignminister        = { type = 9 id = 16049 }
  armamentminister       = { type = 9 id = 16061 }
  ministerofsecurity     = { type = 9 id = 16077 }
  ministerofintelligence = { type = 9 id = 16091 }
  chiefofstaff           = { type = 9 id = 16102 }
  chiefofarmy            = { type = 9 id = 16111 }
  chiefofnavy            = { type = 9 id = 16120 }
  chiefofair             = { type = 9 id = 16129 }
  dormant_ministers      = { 16006 16036 16044 16054 16068 16082 16095 16105 16115 16140 16141 16142 }
  landunit =
  { location = 294
    name     = "Den Danske Hær"
    id       = { type = 27000 id = 40 }
    division =
    { id       = { type = 27000 id = 41 }
      name     = "1. Jydske Division"
      type     = infantry
      model    = 4
      strength = 100
    }
  }
}
