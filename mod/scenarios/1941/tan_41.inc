
##############################
# Country definition for TAN #
##############################

country =
{ tag                    = TAN
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 1000
  oil                    = 100
  supplies               = 100
  money                  = 100
  capital                = 1418
  manpower               = 1
  SpyInfo                = { country = "TAN" NumberOfSpies = 1 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 10
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 5
  }
  nationalprovinces      = { 1418 }
  ownedprovinces         = { 1418 }
  controlledprovinces    = { 1418 }
  # Group E 1941 techs
  # ######################
  techapps               = { 2320 4010 4020 2010 2020 2030 2040 2150 2290 2300 2310 2330 2400 2450 2460 2510 1010 1190 6210 6300 14000 }
  # relation = { tag = CGX value = 50 }
  # relation = { tag = CHI value = -50 }
  # relation = { tag = CSX value = 50 }
  # relation = { tag = CXB value = 75 }
  # relation = { tag = CYN value = 50 }
  diplomacy =
  { relation = { tag = MON value = 200 }
    relation = { tag = SIK value = 125 }
    relation = { tag = SOV value = 200 }
    relation = { tag = TAN value = 50 }
  }
  headofstate            = { type = 9 id = 71001 }
  headofgovernment       = { type = 9 id = 71002 }
  foreignminister        = { type = 9 id = 71011 }
  armamentminister       = { type = 9 id = 71014 }
  ministerofsecurity     = { type = 9 id = 71015 }
  ministerofintelligence = { type = 9 id = 71006 }
  chiefofstaff           = { type = 9 id = 71007 }
  chiefofarmy            = { type = 9 id = 71008 }
  chiefofnavy            = { type = 9 id = 71009 }
  chiefofair             = { type = 9 id = 71010 }
  landunit =
  { location = 1418
    id       = { type = 10105 id = 1 }
    name     = "1ya Tunska Armiya"
    division =
    { id       = { type = 10105 id = 2 }
      name     = "1. Tuvanska Strelkovaya Diviziya"
      type     = infantry
      strength = 100
    }
  }
}
