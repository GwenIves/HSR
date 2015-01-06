
##############################
# Country definition for TIB #
##############################

province = { id = 1283 province_revoltrisk = 10 } # Qamdo

#####################
# Country main data #
#####################

country =
{ tag                    = TIB
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 1500
  oil                    = 100
  supplies               = 100
  money                  = 100
  capital                = 1453
  manpower               = 10
  nationalprovinces      = { 1283 1448 1450 1451 1452 1453 }
  ownedprovinces         = { 1283 1448 1450 1451 1452 1453 }
  controlledprovinces    = { 1283 1448 1450 1451 1452 1453 }
  # ROTW Minor Tech '36
  # Group E 1939 techs
  # ######################
  # Basic Armoured Car
  techapps               = { 2150 2290 1010 1190 6010 }
  SpyInfo                = { country = "TIB" NumberOfSpies = 3 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 5
    freedom           = 5
    free_market       = 5
    professional_army = 1
    defense_lobby     = 1
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 73001 }
  headofgovernment       = { type = 9 id = 73002 }
  foreignminister        = { type = 9 id = 73043 }
  armamentminister       = { type = 9 id = 73050 }
  ministerofsecurity     = { type = 9 id = 73063 }
  ministerofintelligence = { type = 9 id = 73067 }
  chiefofstaff           = { type = 9 id = 73073 }
  chiefofarmy            = { type = 9 id = 73077 }
  chiefofnavy            = { type = 9 id = 73082 }
  chiefofair             = { type = 9 id = 73084 }
  dormant_ministers      = { 73043 73004 73006 }
  landunit =
  { location = 1453
    id       = { type = 30033 id = 1 }
    name     = "Xi'zang JÅEtuan 1"
    division =
    { id    = { type = 30033 id = 2 }
      name  = "1 Xi'zang Shi"
      type  = infantry
      extra = artillery
    }
    division =
    { id   = { type = 30033 id = 3 }
      name = "10 Xi'zang LÅE"
      type = militia
    }
    division =
    { id   = { type = 30033 id = 4 }
      name = "17 Xi'zang LÅE"
      type = militia
    }
  }
}
