
##############################
# Country definition for SIA #
##############################

province = { id = 1331 ic = 1 } # Khon Kaen
province = { id = 1343 ic = 2 } # Bangkok
province =
{ id         = 1345
  anti_air   = 2
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Thom Buri

#####################
# Country main data #
#####################

country =
{ tag                    = SIA
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 100
  capital                = 1343
  belligerence           = 5
  manpower               = 145
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
  # Japanese spoils from Indochine
  nationalprovinces      = { 1348 1347 1345 1343 1342 1331 1330 1344 1303 1339 1340 1341 }
  ownedprovinces         = { 1348 1347 1345 1343 1342 1331 1330 1344 1303 1339 1340 1341 }
  # Japanese spoils from Indochine
  controlledprovinces    = { 1348 1347 1345 1343 1342 1331 1330 1344 1303 1339 1340 1341 }
  # Group D 1941 techs
  # ######################
  techapps               = { 4010  4020  4030  4120  4130  2010  2020  2030  2040  2050  2150  2290  2300  2310  2320  1010  1020  1030  1190  1200
			     1210  1110  2330  2400  2450  2460  2470  2510  9010  5010  5050  5080  5090  5100  5190  6010  6020  3010  3070  3400
			     8050  14000
			   }
  # relation = { tag = CHI value = 100 }
  diplomacy =
  { relation = { tag = ENG value = 70 }
    relation = { tag = FRA value = -100 }
    relation = { tag = JAP value = 150 }
    relation = { tag = MAN value = 75 }
    relation = { tag = MEN value = 75 }
  }
  headofstate            = { type = 9 id = 62112 }
  headofgovernment       = { type = 9 id = 62035 }
  foreignminister        = { type = 9 id = 62043 }
  armamentminister       = { type = 9 id = 62059 }
  ministerofsecurity     = { type = 9 id = 62073 }
  ministerofintelligence = { type = 9 id = 62085 }
  chiefofstaff           = { type = 9 id = 62091 }
  chiefofarmy            = { type = 9 id = 62097 }
  chiefofnavy            = { type = 9 id = 62102 }
  chiefofair             = { type = 9 id = 62107 }
  landunit =
  { location = 1345
    name     = "Royal Thai Army"
    id       = { type = 23600 id = 1 }
    division =
    { id       = { type = 23600 id = 2 }
      name     = "1. Thai Infantry Div."
      type     = infantry
      model    = 1
      strength = 90
    }
    division =
    { id       = { type = 23600 id = 3 }
      name     = "2. Thai Infantry Div."
      type     = infantry
      strength = 70
      model    = 0
    }
  }
  landunit =
  { location = 1343
    name     = "Royal Thai Police Force"
    id       = { type = 23600 id = 4 }
    division =
    { id       = { type = 23600 id = 5 }
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
    id       = { type = 23600 id = 6 }
    division =
    { id       = { type = 23600 id = 7 }
      name     = "RTNS Sri Ayuthia"
      type     = light_cruiser
      model    = 0
      strength = 50
    }
    division =
    { id    = { type = 23600 id = 10 }
      name  = "Phra Ruang Flotille"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 23600 id = 9 }
      name  = "Sinsamudar Flotille"
      type  = submarine
      model = 0
    }
  }
  airunit =
  { location = 1345
    base     = 1345
    name     = "Royal Thai Airforce"
    id       = { type = 23600 id = 12 }
    Division =
    { id       = { type = 23600 id = 13 }
      name     = "1. RTAF interceptor Group"
      type     = interceptor
      model    = 0
      strength = 50
    }
    Division =
    { id       = { type = 23600 id = 14 }
      name     = "1. RTAF Tactic Bomb Group"
      type     = tactical_bomber
      model    = 0
      strength = 44
    }
  }
}
