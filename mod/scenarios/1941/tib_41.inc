
##############################
# Country definition for TIB #
##############################

country =
{ tag                    = TIB
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 100
  capital                = 1453
  manpower               = 10
  nationalprovinces      = { 1283 1448 1450 1451 1452 1453 }
  ownedprovinces         = { 1283 1448 1450 1451 1452 1453 }
  controlledprovinces    = { 1283 1448 1450 1451 1452 1453 }
  # ROTW Minor Tech '36
  # Group E 1941 techs
  # ######################
  techapps               = { 2320 4010 4020 2010 2020 2030 2040 2150 2290 2300 2310 2330 2400 2450 2460 2510 1010 1190 6010 }
  SpyInfo                = { country = "TIB" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 5
    free_market       = 5
    professional_army = 1
    defense_lobby     = 1
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 73001 }
  headofgovernment       = { type = 9 id = 73041 }
  foreignminister        = { type = 9 id = 73044 }
  armamentminister       = { type = 9 id = 73054 }
  ministerofsecurity     = { type = 9 id = 73065 }
  ministerofintelligence = { type = 9 id = 73068 }
  chiefofstaff           = { type = 9 id = 73072 }
  chiefofarmy            = { type = 9 id = 73077 }
  chiefofnavy            = { type = 9 id = 73083 }
  chiefofair             = { type = 9 id = 73084 }
  landunit =
  { location = 1453
    name     = "Xi'zang Jüntuan 1"
    id       = { type = 10113 id = 1 }
    division =
    { id    = { type = 10113 id = 2 }
      name  = "1 Xi'zang Shi"
      type  = infantry
      model = 0
    }
    division =
    { id   = { type = 10113 id = 3 }
      name = "10 Xi'zang Lü"
      type = militia
    }
    division =
    { id   = { type = 10113 id = 4 }
      name = "17 Xi'zang Lü"
      type = militia
    }
  }
}
