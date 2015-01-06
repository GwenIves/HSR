
##############################
# Country definition for SIA #
##############################

province = { id = 1331 ic = 1 } # Khon Kaen
province =
{ id         = 1345
  anti_air   = 2
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 4 current_size = 4 }
}              # Thom Buri

#####################
# Country main data #
#####################

country =
{ tag                    = SIA
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 1343
  manpower               = 145
  diplomacy =
  { relation = { tag = ENG value = 70 }
    relation = { tag = FRA value = -100 }
    relation = { tag = JAP value = 75 }
    relation = { tag = MAN value = 75 }
    relation = { tag = MEN value = 75 }
  }
  nationalprovinces      = { 1348 1347 1345 1343 1342 1331 1330 1344 1303 1339 1340 1341 }
  ownedprovinces         = { 1348 1347 1345 1343 1342 1331 1330 1344 1303 }
  controlledprovinces    = { 1348 1347 1345 1343 1342 1331 1330 1344 1303 }
  # ROTW Minor Tech '36
  # Group D 1939 techs
  # ######################
  techapps               = { 4120 2320 4010 4020 2150 2010 2020 2290 2300 2310 1010 1020 1190 1200 1110 2330 2400 2450 2460 2510 5010 5080 5090 5100
			     5190 6010 3010 3070 3400 8050
			   }
  SpyInfo                = { country = "SIA" NumberOfSpies = 5 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 3
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 62112 }
  headofgovernment       = { type = 9 id = 62035 }
  foreignminister        = { type = 9 id = 62043 }
  armamentminister       = { type = 9 id = 62056 }
  ministerofsecurity     = { type = 9 id = 62073 }
  ministerofintelligence = { type = 9 id = 62085 }
  chiefofstaff           = { type = 9 id = 62091 }
  chiefofarmy            = { type = 9 id = 62097 }
  chiefofnavy            = { type = 9 id = 62102 }
  chiefofair             = { type = 9 id = 62107 }
  landunit =
  { location = 1345
    name     = "Royal Thai Army"
    id       = { type = 11744 id = 1 }
    Division =
    { id   = { type = 11744 id = 2 }
      name = "1. Thai Infantry Div."
      type = infantry
    }
    Division =
    { id       = { type = 11744 id = 3 }
      name     = "2. Thai Infantry Div."
      type     = infantry
      strength = 90
    }
  }
  landunit =
  { location = 1343
    name     = "Royal Thai Police Force"
    id       = { type = 11744 id = 4 }
    division =
    { id       = { type = 11744 id = 5 }
      name     = "1. Royal Thai Police Div."
      type     = garrison
      strength = 70
      extra    = police
    }
  }
  navalunit =
  { location = 1345
    base     = 1345
    name     = "Royal Thai Navy"
    id       = { type = 11744 id = 6 }
    division =
    { id    = { type = 11744 id = 7 }
      name  = "RTNS Sri Ayuthia"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 11744 id = 8 }
      name  = "RTNS Dhonburi"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 11744 id = 10 }
      name  = "Phra Ruang Flotille"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 11744 id = 9 }
      name  = "Sinsamudar Flotille"
      type  = submarine
      model = 0
    }
  }
  airunit =
  { location = 1345
    base     = 1345
    name     = "Royal Thai Airforce"
    id       = { type = 11744 id = 12 }
    Division =
    { id       = { type = 11744 id = 13 }
      name     = "1. RTAF interceptor Group"
      type     = interceptor
      model    = 0
      strength = 100
    }
    Division =
    { id       = { type = 11744 id = 14 }
      name     = "2. RTAF interceptor Group"
      type     = interceptor
      model    = 0
      strength = 26
    }
    Division =
    { id       = { type = 11744 id = 15 }
      name     = "1. RTAF Tactic Bomb Group"
      type     = tactical_bomber
      model    = 0
      strength = 50
    }
  }
}
