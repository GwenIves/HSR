
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
  money                  = 10
  capital                = 1473
  manpower               = 7
  diplomacy =
  { relation = { tag = AST value = 200 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = -200 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = -100 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = POL value = 200 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 100 }
    relation = { tag = YEM value = 150 }
  }
  nationalprovinces      = { 1473 }
  ownedprovinces         = { 1473 }
  controlledprovinces    = { 1473 }
  # ROTW Minor Tech '36
  # Group E 1939 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 6010 }
  SpyInfo                = { country = "NEP" NumberOfSpies = 2 }
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
  headofstate            = { type = 9 id = 75001 }
  headofgovernment       = { type = 9 id = 75002 }
  foreignminister        = { type = 9 id = 75015 }
  armamentminister       = { type = 9 id = 75024 }
  ministerofsecurity     = { type = 9 id = 75033 }
  ministerofintelligence = { type = 9 id = 75039 }
  chiefofstaff           = { type = 9 id = 75007 }
  chiefofarmy            = { type = 9 id = 75008 }
  chiefofnavy            = { type = 9 id = 75054 }
  chiefofair             = { type = 9 id = 75055 }
  dormant_ministers      = { 75003 75004 }
  # Firepower
  landunit =
  { location = 1473
    id       = { type = 30028 id = 1 }
    name     = "Royal Nepalese Army"
    division =
    { id   = { type = 30028 id = 2 }
      name = "Royal Nepalese Lifeguard Div."
      type = infantry
    }
    division =
    { id   = { type = 30028 id = 3 }
      name = "Royal Household Division"
      type = infantry
    }
  }
}
