
##############################
# Country definition for YUG #
##############################

province =
{ id    = 380
  infra = { size = 0.8 current_size = 0.6 }
  ic    = { size = 2 current_size = 1 }
}         # Ljubljana
province =
{ id         = 381
  naval_base = { size = 5 current_size = 5 }
  air_base   = { size = 5 current_size = 5 }
  infra      = { size = 0.8 current_size = 0.65 }
}              # Rijeka
province =
{ id       = 382
  anti_air = 2
  air_base = { size = 3 current_size = 3 }
  infra    = { size = 0.8 current_size = 0.55 }
  ic       = { size = 3 current_size = 1 }
}            # Zagreb
province =
{ id         = 384
  anti_air   = 1
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 3 current_size = 3 }
  infra      = { size = 0.7 current_size = 0.65 }
  ic         = { size = 2 current_size = 1 }
}              # Split
province =
{ id    = 386
  infra = { size = 0.7 current_size = 0.55 }
  ic    = { size = 4 current_size = 2 }
}         # Sarajevo
province =
{ id         = 388
  anti_air   = 2
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 4 current_size = 4 }
  infra      = { size = 0.8 current_size = 0.65 }
}              # Dubrovnik
province =
{ id    = 413
  infra = { size = 0.6 current_size = 0.5 }
}         # Skopje
province =
{ id       = 453
  anti_air = 2
  air_base = { size = 6 current_size = 6 }
  infra    = { size = 0.8 current_size = 0.75 }
  ic       = { size = 9 current_size = 7 }
}            # Belgrade
province =
{ id       = 454
  anti_air = 1
  infra    = { size = 0.8 current_size = 0.75 }
}            # Osijek

#####################
# Country main data #
#####################

country =
{ tag                    = YUG
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 5000
  money                  = 100
  capital                = 453
  manpower               = 155
  dissent                = 20
  diplomacy =
  { relation = { tag = BUL value = 25 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GRE value = 100 }
    relation = { tag = HUN value = -80 }
    relation = { tag = ROM value = 100 }
    relation = { tag = ALB access = yes }
  }
  nationalprovinces      = { 380 459 455 454 453 382 381 383 384 385 386 387 388 389 451 452 418 415 493 494 413 414 }
  ownedprovinces         = { 380 459 455 454 453 382 381 383 384 385 386 387 388 389 451 452 418 415 493 494 413 414 }
  controlledprovinces    = { 380 459 455 454 453 382 381 383 384 385 386 387 388 389 451 452 418 415 493 494 413 414 }
  # Eastern Minor Tech '36
  # Group D 1939 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1110  1120  1190  1200  1210  1220  1230  1310  1320  1340  14000 14010 14020 2010  2020  2030
			     2040  2050  2070  2150  2170  2290  2290  2300  2300  2310  2310  2320  2330  2340  2400  2450  2460  2470  2510  3010
			     3020  3030  3400  4010  4020  4030  4040  4120  4130  5010  5050  5060  5070  5080  5090  5100  5110  5120  5130  5190
			     5310  6210  6300  6310  6320  6330  6340  8040  8050  9010  9020  9030  9040
			   }
  SpyInfo                = { country = "YUG" NumberOfSpies = 8 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 6
    freedom           = 5
    free_market       = 5
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 20031 }
  headofgovernment       = { type = 9 id = 20037 }
  foreignminister        = { type = 9 id = 20045 }
  armamentminister       = { type = 9 id = 20054 }
  ministerofsecurity     = { type = 9 id = 20062 }
  ministerofintelligence = { type = 9 id = 20069 }
  chiefofstaff           = { type = 9 id = 20075 }
  chiefofarmy            = { type = 9 id = 20101 }
  chiefofnavy            = { type = 9 id = 20102 }
  chiefofair             = { type = 9 id = 20093 }
  dormant_ministers      = { 20002 20003 20004 20005 20006 20034 20035 20041 20042 20043 20048 20051 20052 20058 20059 20060 20065 20066 20067 20072
			     20073 20079 20080 20085 20086 20090 20091 20097
			   }
  landunit =
  { id       = { type = 30201 id = 1 }
    name     = "I. Kraljevska Jugoslavenska Armija"
    location = 453
    division =
    { id       = { type = 30204 id = 1 }
      name     = "1. Potiska Pesadijska Divizija"
      strength = 70
      type     = infantry
      model    = 3
    }
    division =
    { id       = { type = 30204 id = 2 }
      name     = "6. Zetska Pesadijska Divizija"
      strength = 70
      type     = infantry
      model    = 3
    }
    division =
    { id       = { type = 30204 id = 3 }
      name     = "1. Konjicka Divizija"
      strength = 70
      type     = cavalry
      model    = 2
    }
  }
  landunit =
  { id       = { type = 30201 id = 2 }
    location = 413
    name     = "II. Kraljevska Jugoslavenska Armija"
    division =
    { id       = { type = 30204 id = 4 }
      name     = "2. Bosanska Pesadijska Divizija"
      strength = 70
      type     = infantry
      model    = 3
    }
    division =
    { id       = { type = 30204 id = 5 }
      name     = "3. Vrbaska Pesadijska Divizija"
      strength = 70
      type     = infantry
      model    = 3
    }
    division =
    { id       = { type = 30204 id = 6 }
      name     = "7. Zetska Pesadijska Divizija"
      strength = 70
      type     = infantry
      model    = 3
    }
  }
  landunit =
  { id       = { type = 30201 id = 3 }
    location = 414
    name     = "III. Kraljevska Jugoslavenska Armija"
    division =
    { id       = { type = 30204 id = 7 }
      name     = "4. Hercegovacka Pesadijska Divizija"
      strength = 70
      type     = infantry
      model    = 3
    }
    division =
    { id       = { type = 30204 id = 8 }
      name     = "5. Zetska Pesadijska Divizija"
      strength = 70
      type     = infantry
      model    = 3
    }
    division =
    { id       = { type = 30204 id = 9 }
      name     = "8. Zetska Pesadijska Divizija"
      strength = 70
      type     = infantry
      model    = 3
    }
  }
}
