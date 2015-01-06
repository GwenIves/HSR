
##############################
# Country definition for GRE #
##############################

province =
{ id       = 392
  landfort = 5
  infra    = { size = 0.7 current_size = 0.65 }
}            # Ioannina
province =
{ id         = 393
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 1 current_size = 1 }
}              # Kefalonia
province =
{ id         = 395
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
  infra      = { size = 0.8 current_size = 0.75 }
}              # Corinthe
province =
{ id         = 396
  anti_air   = 1
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 4 current_size = 4 }
  infra      = { size = 0.6 current_size = 0.55 }
}              # Crete
province =
{ id         = 401
  anti_air   = 1
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
  infra      = { size = 0.8 current_size = 0.75 }
  ic         = { size = 7 current_size = 5 }
}              # Athens
province =
{ id       = 411
  landfort = 5
  anti_air = 2
  infra    = { size = 0.8 current_size = 0.7 }
}            # Salonika

#####################
# Country main data #
#####################

country =
{ tag                    = GRE
  manpower               = 70
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 401
  transports             = 40
  escorts                = 15
  dissent                = 10
  SpyInfo                = { country = "GRE" NumberOfSpies = 6 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 3
    free_market       = 5
    freedom           = 4
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 4
  }
  nationalprovinces      = { 392 393 394 395 396 400 401 402 403 405 410 411 412 398 399 413 444 }
  ownedprovinces         = { 392 393 394 395 396 398 400 401 402 403 405 410 411 412 }
  controlledprovinces    = { 392 393 394 395 396 398 400 401 402 403 405 410 411 412 }
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
  { relation = { tag = BUL value = -75 }
    relation = { tag = ENG value = 50 }
    relation = { tag = FRA value = 75 }
    relation = { tag = ITA value = 100 }
    relation = { tag = ROM value = 100 }
    relation = { tag = YUG value = 100 }
  }
  headofstate            = { type = 9 id = 18039 }
  headofgovernment       = { type = 9 id = 18060 }
  foreignminister        = { type = 9 id = 18079 }
  armamentminister       = { type = 9 id = 18106 }
  ministerofsecurity     = { type = 9 id = 18126 }
  ministerofintelligence = { type = 9 id = 18143 }
  chiefofstaff           = { type = 9 id = 18158 }
  chiefofarmy            = { type = 9 id = 18171 }
  chiefofnavy            = { type = 9 id = 18177 }
  chiefofair             = { type = 9 id = 18187 }
  dormant_ministers      = { 18001 18002 18003 18004 18091 18005 18006 18007 18010 18037 18040 18041 18042 18056 18057 18058 18076 18077 18078 18103
			     18104 18105 18123 18124 18125 18139 18140 18141 18142 18155 18157 18169 18170 18179
			   }
  landunit =
  { id       = { type = 15500 id = 1 }
    location = 401
    name     = "1. Stratos Ellenas"
    division =
    { id       = { type = 15500 id = 2 }
      name     = "2. Stratiotis Diairesi"
      strength = 100
      type     = infantry
      model    = 4
    }
    division =
    { id       = { type = 15500 id = 3 }
      name     = "3. Stratiotis Diairesi"
      strength = 100
      type     = infantry
      model    = 4
    }
    division =
    { id       = { type = 15500 id = 4 }
      name     = "4. Stratiotis Diairesi"
      strength = 100
      type     = infantry
      model    = 4
    }
  }
  landunit =
  { id       = { type = 15500 id = 5 }
    location = 403
    name     = "2. Stratos Ellenas"
    division =
    { id       = { type = 15500 id = 6 }
      name     = "1. Stratiotis Diairesi"
      strength = 100
      type     = infantry
      model    = 3
    }
    division =
    { id       = { type = 15500 id = 7 }
      name     = "9. Stratiotis Diairesi"
      strength = 100
      type     = infantry
      model    = 3
    }
  }
  landunit =
  { id       = { type = 15500 id = 8 }
    location = 411
    name     = "3. Stratos Ellenas"
    division =
    { id       = { type = 15500 id = 9 }
      name     = "6. Stratiotis Diairesi"
      strength = 100
      type     = infantry
      model    = 3
    }
    division =
    { id       = { type = 15500 id = 10 }
      name     = "10. Stratiotis Diairesi"
      strength = 100
      type     = infantry
      model    = 3
    }
  }
  division_development =
  { type          = motorized
    model         = 0
    date          = { day = 9 month = october year = 1945 }
    cost          = 3
    days          = 100
    id            = { type = 15454 id = 1 }
    name          = "13. Stratiotis Diairesi"
    extra         = artillery
    brigade_model = 5
  }
  division_development =
  { type          = infantry
    model         = 4
    date          = { day = 16 month = october year = 1945 }
    cost          = 2
    days          = 95
    id            = { type = 15454 id = 2 }
    name          = "14. Stratiotis Diairesi"
    extra         = artillery
    brigade_model = 5
  }
  division_development =
  { type          = infantry
    model         = 4
    date          = { day = 23 month = october year = 1946 }
    cost          = 2
    days          = 95
    id            = { type = 15454 id = 3 }
    name          = "15. Stratiotis Diairesi"
    extra         = anti_tank
    brigade_model = 2
  }
}
