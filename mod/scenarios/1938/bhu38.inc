
##############################
# Country definition for BHU #
##############################

country =
{ tag                    = BHU
  manpower               = 5
  control                = ENG
  puppet                 = ENG
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 200
  supplies               = 200
  money                  = 10
  capital                = 1455
  diplomacy =
  { relation = { tag = AST value = 150 }
    relation = { tag = CAN value = 150 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 100 }
    relation = { tag = GER value = -50 }
    relation = { tag = ITA value = -10 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = JAP value = -50 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 150 }
    relation = { tag = OMN value = 150 }
    relation = { tag = POL value = 200 }
    relation = { tag = SAF value = 150 }
    relation = { tag = USA value = 50 }
  }
  nationalprovinces      = { 1455 }
  ownedprovinces         = { 1455 }
  controlledprovinces    = { 1455 }
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 6210 6300 }
  SpyInfo                = { country = "BHU" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 3
    free_market       = 8
    freedom           = 9
    professional_army = 1
    defense_lobby     = 1
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 74001 }
  headofgovernment       = { type = 9 id = 74002 }
  foreignminister        = { type = 9 id = 74012 }
  armamentminister       = { type = 9 id = 74019 }
  ministerofsecurity     = { type = 9 id = 74005 }
  ministerofintelligence = { type = 9 id = 74038 }
  chiefofstaff           = { type = 9 id = 74007 }
  chiefofarmy            = { type = 9 id = 74008 }
  chiefofnavy            = { type = 9 id = 74009 }
  chiefofair             = { type = 9 id = 74010 }
  landunit =
  { location = 1455
    id       = { type = 30029 id = 1 }
    name     = "Royal Bhutanese Army"
    division =
    { id       = { type = 30029 id = 2 }
      name     = "Household Division"
      type     = infantry
      strength = 100
    }
    division =
    { id       = { type = 30029 id = 3 }
      name     = "Royal Division"
      type     = infantry
      strength = 100
    }
  }
}
