
##############################
# Country definition for LUX #
##############################

province =
{ id    = 71
  ic    = { size = 5 current_size = 3 }
  infra = { size = 1 current_size = 0.8 }
}         # Luxembourg

#####################
# Country main data #
#####################

country =
{ tag                    = LUX
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  manpower               = 2
  capital                = 71
  dissent                = 2
  SpyInfo                = { country = "LUX" NumberOfSpies = 3 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 1
    freedom           = 9
    free_market       = 8
    professional_army = 5
    defense_lobby     = 2
    interventionism   = 1
  }
  nationalprovinces      = { 71 }
  ownedprovinces         = { 71 }
  controlledprovinces    = { 71 }
  # Western Minor Tech '36
  # Group D 1939 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1050  1110  1190  1200  1210  1220  1230  1310  1320  1330  1340  1350  14000 14010 14020 2010
			     2020  2030  2040  2050  2070  2150  2170  2180  2220  2230  2290  2300  2310  2320  2330  2340  2400  2410  2420  2450
			     2460  2470  2480  2510  2520  3010  3020  3030  3040  3070  3080  3090  3130  3140  3150  3190  3200  3250  3260  3320
			     3400  3410  3420  4010  4020  4030  4040  4050  4060  4070  4120  4130  4140  4170  4190  4220  4250  5010  5020  5030
			     5050  5060  5070  5080  5090  5100  5110  5120  5130  5190  5200  5310  5320  5330  5350  5360  6010  6020  6040  6050
			     6060  6070  8010  8020  8030  8040  8050  8070  8100  8120  8130  8200  8310  9010  9020  9030  9040  9050  9060  9070
			     9080  9090  9100  9110  9120  9130  9140  9150  9160  9170  9180  9190  9270  9280  9290  9350  9360  9370
			   }
  diplomacy =
  { relation = { tag = BEL value = 200 }
    relation = { tag = DEN value = 100 }
    relation = { tag = FRA value = 120 }
    relation = { tag = HOL value = 150 }
    relation = { tag = NOR value = 100 }
  }
  headofstate            = { type = 9 id = 66001 }
  headofgovernment       = { type = 9 id = 66038 }
  foreignminister        = { type = 9 id = 66003 }
  armamentminister       = { type = 9 id = 66053 }
  ministerofsecurity     = { type = 9 id = 66063 }
  ministerofintelligence = { type = 9 id = 66072 }
  chiefofstaff           = { type = 9 id = 66082 }
  chiefofarmy            = { type = 9 id = 66090 }
  chiefofnavy            = { type = 9 id = 66111 }
  chiefofair             = { type = 9 id = 66010 }
  dormant_ministers      = { 66002 66034 66094 }
  landunit =
  { id       = { type = 11111 id = 1 }
    name     = "Luxembourgerschützen"
    location = 71
    division =
    { id       = { type = 11111 id = 2 }
      name     = "1. Landesschützendivision"
      strength = 100
      type     = infantry
      model    = 4
    }
  }
}
