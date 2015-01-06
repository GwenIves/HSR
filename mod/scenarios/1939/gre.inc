
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
  money                  = 100
  capital                = 401
  transports             = 40
  escorts                = 15
  diplomacy =
  { relation = { tag = BUL value = -75 }
    relation = { tag = ENG value = 50 }
    relation = { tag = FIN value = 40 }
    relation = { tag = FRA value = 75 }
    relation = { tag = ITA value = -100 }
    relation = { tag = POL value = 35 }
    relation = { tag = ROM value = 100 }
    relation = { tag = TUR value = 100 }
    relation = { tag = YUG value = 100 }
  }
  nationalprovinces      = { 392 393 394 395 396 400 401 402 403 405 410 411 412 398 399 413 444 }
  ownedprovinces         = { 392 393 394 395 396 400 401 402 403 405 410 411 412 }
  controlledprovinces    = { 392 393 394 395 396 400 401 402 403 405 410 411 412 }
  # Western Minor Tech '36
  # Group D 1939 techs
  # ######################
  techapps               = { 2320  4010  4020  2150  2010  2020  2290  2300  2310  1010  1020  1190  1200  1110  2330  2400  2450  2460  2510  5010
			     5020  5080  5090  5100  5190  6010  3010  3020  3070  3130  3400  8020  8040  8050  14000
			   }
  SpyInfo                = { country = "GRE" NumberOfSpies = 5 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 4
    free_market       = 5
    freedom           = 4
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 18034 }
  headofgovernment       = { type = 9 id = 18049 }
  foreignminister        = { type = 9 id = 18070 }
  armamentminister       = { type = 9 id = 18093 }
  ministerofsecurity     = { type = 9 id = 18114 }
  ministerofintelligence = { type = 9 id = 18134 }
  chiefofstaff           = { type = 9 id = 18151 }
  chiefofarmy            = { type = 9 id = 18008 }
  chiefofnavy            = { type = 9 id = 18009 }
  chiefofair             = { type = 9 id = 18185 }
  dormant_ministers      = { 18001 18002 18003 18004 18091 18005 18006 18007 18010 }
  landunit =
  { id       = { type = 30003 id = 1 }
    location = 411
    name     = "1. Stratos Ellenas"
    division =
    { id       = { type = 30003 id = 2 }
      name     = "2nd Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30003 id = 3 }
      name     = "3rd Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30003 id = 4 }
      name     = "4th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  # #######################
  # #######################
  landunit =
  { id       = { type = 30003 id = 5 }
    location = 412
    name     = "2. Stratos Ellenas"
    division =
    { id       = { type = 30003 id = 6 }
      name     = "1st Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30003 id = 7 }
      name     = "9th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  # #########################
  # #########################
  landunit =
  { id       = { type = 30003 id = 8 }
    location = 392
    name     = "3. Stratos Ellenas"
    division =
    { id       = { type = 30003 id = 9 }
      name     = "6th Infantry Division"
      strength = 100
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 30003 id = 10 }
      name     = "10th Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30003 id = 11 }
      name     = "11th Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30003 id = 12 }
      name     = "17th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  # ########################
  # ########################
  landunit =
  { id       = { type = 30003 id = 13 }
    location = 402
    name     = "4. Stratos Ellenas"
    division =
    { id       = { type = 30003 id = 14 }
      name     = "7th Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30003 id = 15 }
      name     = "14th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  # ###########################
  # ############################
  landunit =
  { id       = { type = 30003 id = 16 }
    location = 403
    name     = "5. Stratos Ellenas"
    division =
    { id       = { type = 30003 id = 17 }
      name     = "12th Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30003 id = 18 }
      name     = "13th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  # ###########################
  # ###########################
  landunit =
  { id       = { type = 30003 id = 19 }
    location = 401
    name     = "6. Stratos Ellenas"
    division =
    { id       = { type = 30003 id = 20 }
      name     = "5th Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30003 id = 21 }
      name     = "8th Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30003 id = 22 }
      name     = "Cavalry Division"
      strength = 100
      type     = cavalry
    }
  }
  navalunit =
  { id       = { type = 28004 id = 30 }
    location = 401
    base     = 401
    name     = "Basilikos Stolos Ellenas"
    division =
    { id    = { type = 28004 id = 31 }
      name  = "BEN Georgios Averoff"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 28004 id = 32 }
      name  = "BEN Helle"
      type  = light_cruiser
      model = 0
    }
    division =
    { id       = { type = 28004 id = 35 }
      name     = "1. Torpilli Naftiko"
      strength = 100
      model    = 0
      type     = destroyer
    }
    division =
    { id       = { type = 28004 id = 36 }
      name     = "2. Torpilli Naftiko"
      strength = 100
      model    = 1
      type     = destroyer
    }
    division =
    { id       = { type = 28004 id = 37 }
      name     = "1. Ypobrychio Naftiko"
      strength = 100
      model    = 0
      type     = submarine
    }
    division =
    { id       = { type = 28004 id = 38 }
      name     = "2. Ypobrychio Naftiko"
      strength = 100
      model    = 0
      type     = submarine
    }
    division =
    { id   = { type = 28004 id = 33 }
      name = "1. Metafero Naftiko"
      type = transport
    }
    division =
    { id   = { type = 28004 id = 34 }
      name = "2. Metafero Naftiko"
      type = transport
    }
  }
}
