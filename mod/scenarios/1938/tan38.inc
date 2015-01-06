
##############################
# Country definition for TAN #
##############################

country =
{ tag                    = TAN
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 100
  capital                = 1418
  manpower               = 1
  diplomacy =
  { relation = { tag = MON value = 200 }
    relation = { tag = SIK value = 125 }
    relation = { tag = SOV value = 200 }
    relation = { tag = TAN value = 50 }
  }
  nationalprovinces      = { 1418 }
  ownedprovinces         = { 1418 }
  controlledprovinces    = { 1418 }
  # ROTW Minor Tech '36
  # Group E 1939 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 6210 6300 }
  SpyInfo                = { country = "TAN" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 9
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 71001 }
  headofgovernment       = { type = 9 id = 71002 }
  foreignminister        = { type = 9 id = 71013 }
  armamentminister       = { type = 9 id = 71004 }
  ministerofsecurity     = { type = 9 id = 71015 }
  ministerofintelligence = { type = 9 id = 71006 }
  chiefofstaff           = { type = 9 id = 71007 }
  chiefofarmy            = { type = 9 id = 71008 }
  chiefofnavy            = { type = 9 id = 71009 }
  chiefofair             = { type = 9 id = 71010 }
  landunit =
  { location = 1418
    id       = { type = 30032 id = 1 }
    name     = "1ya Tunska Armiya"
    division =
    { id       = { type = 30032 id = 2 }
      name     = "1. Tuvanska Strelkovaya Diviziya"
      type     = infantry
      strength = 100
    }
  }
}
