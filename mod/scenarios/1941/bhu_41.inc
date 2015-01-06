
##############################
# Country definition for BHU #
##############################

country =
{ tag                    = BHU
  puppet                 = ENG
  control                = ENG
  # Resource Reserves
  oil                    = 200
  metal                  = 200
  energy                 = 200
  rare_materials         = 200
  money                  = 100
  manpower               = 3
  capital                = 1455
  SpyInfo                = { country = "BHU" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    free_market       = 1
    freedom           = 1
    professional_army = 2
    defense_lobby     = 3
    interventionism   = 1
  }
  nationalprovinces      = { 1455 }
  ownedprovinces         = { 1455 }
  controlledprovinces    = { 1455 }
  # Group E 1941 techs
  # ##################
  techapps               = { 2320 4010 4020 2010 2020 2030 2040 2150 2290 2300 2310 2330 2400 2450 2460 2510 1010 1190 6010 }
  diplomacy =
  { relation = { tag = NIC value = 200 }
    relation = { tag = AST value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = -200 }
    # relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = -200 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    # relation = { tag = POL value = 200 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 100 }
    relation = { tag = YEM value = 150 }
  }
  headofstate            = { type = 9 id = 74001 }
  headofgovernment       = { type = 9 id = 74002 }
  foreignminister        = { type = 9 id = 74015 }
  armamentminister       = { type = 9 id = 74023 }
  ministerofsecurity     = { type = 9 id = 74032 }
  ministerofintelligence = { type = 9 id = 74039 }
  chiefofstaff           = { type = 9 id = 74045 }
  chiefofarmy            = { type = 9 id = 74049 }
  chiefofnavy            = { type = 9 id = 74009 }
  chiefofair             = { type = 9 id = 74010 }
  landunit =
  { location = 1455
    id       = { type = 10004 id = 1 }
    name     = "Royal Bhutanese Army"
    division =
    { id       = { type = 10004 id = 2 }
      name     = "Household Division"
      type     = infantry
      model    = 0
      strength = 100
    }
    division =
    { id       = { type = 10004 id = 3 }
      name     = "Royal Division"
      type     = infantry
      model    = 0
      strength = 100
    }
  }
}
