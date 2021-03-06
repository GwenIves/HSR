
##############################
# Country definition for GRE #
##############################

province = { id = 392 landfort = 5 } # Ioannina
province =
{ id         = 396
  anti_air   = 1
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 2 current_size = 2 }
}              # Crete
province =
{ id         = 401
  anti_air   = 1
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}              # Athens
province = { id = 411 landfort = 5 anti_air = 2 } # Salonika

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
  money                  = 10
  capital                = 401
  transports             = 40
  escorts                = 15
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    free_market       = 5
    freedom           = 4
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 4
  }
  nationalprovinces      = { 392 393 394 395 396 400 401 402 403 405 410 411 412 398 399 413 444 }
  ownedprovinces         = { 392 393 394 395 396 400 401 402 403 405 410 411 412 }
  controlledprovinces    = { 392 393 394 395 396 400 401 402 403 405 410 411 412 }
  # Western Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2400 2510 5010 5080 5090 5190 6010 3010 3020 3070 3130 3400 8020 8040
			     8050
			   }
  diplomacy =
  { relation = { tag = BUL value = -75 }
    relation = { tag = ENG value = 50 }
    relation = { tag = FIN value = 40 }
    relation = { tag = FRA value = 20 }
    relation = { tag = GER value = 15 }
    relation = { tag = GRE value = 75 }
    relation = { tag = ITA value = -35 }
    relation = { tag = POL value = 35 }
    relation =
    { tag        = ROM
      value      = 100
      guaranteed = { day = 30 month = december year = 1934 }
    }
    relation = { tag = SOV value = 15 }
    relation = { tag = TUR value = 100 }
    relation =
    { tag        = YUG
      value      = 100
      guaranteed = { day = 30 month = december year = 1934 }
    }
  }
  SpyInfo                = { country = "GRE" NumberOfSpies = 6 }
  #SpyInfo                = { country = "ALB" NumberOfSpies = 3 }
  #SpyInfo                = { country = "BUL" NumberOfSpies = 3 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  #SpyInfo                = { country = "TUR" NumberOfSpies = 3 }
  headofstate            = { type = 9 id = 18001 }
  headofgovernment       = { type = 9 id = 18002 }
  foreignminister        = { type = 9 id = 18003 }
  armamentminister       = { type = 9 id = 18004 }
  ministerofsecurity     = { type = 9 id = 18005 }
  ministerofintelligence = { type = 9 id = 18006 }
  chiefofstaff           = { type = 9 id = 18007 }
  chiefofarmy            = { type = 9 id = 18008 }
  chiefofnavy            = { type = 9 id = 18009 }
  chiefofair             = { type = 9 id = 18010 }
  landunit =
  { id       = { type = 15500 id = 1 }
    location = 401
    name     = "1. Stratos Ellenas"
    division =
    { id       = { type = 15500 id = 2 }
      name     = "2. Stratiotis Diairesi"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 15500 id = 3 }
      name     = "3. Stratiotis Diairesi"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 15500 id = 4 }
      name     = "4. Stratiotis Diairesi"
      strength = 100
      type     = infantry
      extra    = artillery
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
    }
    division =
    { id       = { type = 15500 id = 7 }
      name     = "9. Stratiotis Diairesi"
      strength = 100
      type     = infantry
      extra    = anti_air
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
      extra    = artillery
    }
    division =
    { id       = { type = 15500 id = 10 }
      name     = "10. Stratiotis Diairesi"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 15500 id = 11 }
      name     = "11. Stratiotis Diairesi"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 15500 id = 12 }
      name     = "17. Stratiotis Diairesi"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 15500 id = 13 }
    location = 403
    name     = "4. Stratos Ellenas"
    division =
    { id       = { type = 15500 id = 14 }
      name     = "7. Stratiotis Diairesi"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 15500 id = 15 }
      name     = "14. Stratiotis Diairesi"
      strength = 100
      type     = infantry
      extra    = anti_tank
    }
  }
  landunit =
  { id       = { type = 15500 id = 16 }
    location = 392
    name     = "5. Stratos Ellenas"
    division =
    { id       = { type = 15500 id = 17 }
      name     = "12. Stratiotis Diairesi"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 15500 id = 18 }
      name     = "13. Stratiotis Diairesi"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 15500 id = 19 }
    location = 396
    name     = "6. Stratos Ellenas"
    division =
    { id       = { type = 15500 id = 20 }
      name     = "5. Stratiotis Diairesi"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 15500 id = 21 }
      name     = "8. Stratiotis Diairesi"
      strength = 100
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 15500 id = 22 }
      name     = "1. Ippiko Diairesi"
      strength = 100
      type     = cavalry
      extra    = artillery
    }
  }
  navalunit =
  { id       = { type = 15500 id = 23 }
    location = 401
    base     = 401
    name     = "Basilikos Stolos Ellenas"
    division =
    { id    = { type = 15500 id = 30 }
      name  = "BEN Georgios Averoff"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 15500 id = 31 }
      name  = "BEN Helle"
      type  = light_cruiser
      model = 0
    }
    division =
    { id       = { type = 15500 id = 28 }
      name     = "1. Torpilli Naftiko"
      strength = 100
      model    = 0
      type     = destroyer
    }
    division =
    { id       = { type = 15500 id = 32 }
      name     = "2. Torpilli Naftiko"
      strength = 100
      model    = 0
      type     = destroyer
    }
    division =
    { id       = { type = 15500 id = 29 }
      name     = "1. Ypobrychio Naftiko"
      strength = 100
      model    = 0
      type     = submarine
    }
    division =
    { id       = { type = 15500 id = 33 }
      name     = "2. Ypobrychio Naftiko"
      strength = 100
      model    = 0
      type     = submarine
    }
    division =
    { id   = { type = 15500 id = 24 }
      name = "1. Metafero Naftiko"
      type = transport
    }
    division =
    { id   = { type = 15500 id = 25 }
      name = "2. Metafero Naftiko"
      type = transport
    }
  }
}
