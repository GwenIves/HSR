
##############################
# Country definition for NEP #
##############################

country =
{ tag                    = NEP
  puppet                 = ENG
  control                = ENG
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 200
  supplies               = 200
  money                  = 100
  capital                = 1473
  manpower               = 7
  SpyInfo                = { country = "NEP" NumberOfSpies = 1 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 6
    free_market       = 5
    professional_army = 9
    defense_lobby     = 2
    interventionism   = 2
  }
  nationalprovinces      = { 1473 }
  ownedprovinces         = { 1473 }
  controlledprovinces    = { 1473 }
  # Group E 1941 techs
  # ######################
  techapps               = { 2320 4010 4020 2010 2020 2030 2040 2150 2290 2300 2310 2330 2400 2450 2460 2510 1010 1190 6010 }
  diplomacy =
  { relation = { tag = AST value = 200 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = -200 }
    relation = { tag = ITA value = -200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 100 }
    relation = { tag = YEM value = 150 }
  }
  headofstate            = { type = 9 id = 75001 }
  headofgovernment       = { type = 9 id = 75002 }
  foreignminister        = { type = 9 id = 75016 }
  armamentminister       = { type = 9 id = 75026 }
  ministerofsecurity     = { type = 9 id = 75033 }
  ministerofintelligence = { type = 9 id = 75041 }
  chiefofstaff           = { type = 9 id = 75044 }
  chiefofarmy            = { type = 9 id = 75051 }
  chiefofnavy            = { type = 9 id = 75054 }
  chiefofair             = { type = 9 id = 75055 }
  dormant_ministers      = { 75003 75004 75021 75007 75008 }
  landunit =
  { location = 1473
    name     = "Royal Nepalese Army"
    id       = { type = 10107 id = 1 }
    division =
    { id       = { type = 10107 id = 2 }
      name     = "Royal Nepalese Lifeguard Div."
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 31500 id = 3 }
      name     = "Royal Household Division"
      strength = 100
      type     = infantry
      model    = 0
    }
  }
}
