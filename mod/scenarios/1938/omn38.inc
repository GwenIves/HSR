
##############################
# Country definition for OMN #
##############################

province =
{ id         = 1819
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
}              # Mascate

#####################
# Country main data #
#####################

country =
{ tag                    = OMN
  puppet                 = ENG
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 200
  supplies               = 200
  money                  = 10
  capital                = 1819
  manpower               = 3
  diplomacy =
  { relation = { tag = AST value = 150 }
    relation = { tag = BHU value = 150 }
    relation = { tag = CAN value = 150 }
    relation = { tag = ENG value = 150 }
    relation = { tag = FRA value = 100 }
    relation = { tag = GER value = -150 }
    relation = { tag = IRQ value = 125 }
    relation = { tag = ITA value = 50 }
    relation = { tag = NEP value = 100 }
    relation = { tag = NZL value = 150 }
    relation = { tag = SAF value = 100 }
    relation = { tag = SAU value = 125 }
    relation = { tag = POL value = 200 }
    relation = { tag = TUR value = 35 }
    relation = { tag = USA value = 50 }
    relation = { tag = YEM value = 150 }
  }
  nationalprovinces      = { 1819 }
  ownedprovinces         = { 1819 }
  controlledprovinces    = { 1819 }
  # GW infantry
  techapps               = { 1010 1190 2150 2290 4010 6210 6300 }
  SpyInfo                = { country = "OMN" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 5
    freedom           = 4
    free_market       = 5
    professional_army = 3
    defense_lobby     = 4
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 92001 }
  headofgovernment       = { type = 9 id = 92002 }
  foreignminister        = { type = 9 id = 92003 }
  armamentminister       = { type = 9 id = 92004 }
  ministerofsecurity     = { type = 9 id = 92005 }
  ministerofintelligence = { type = 9 id = 92006 }
  chiefofstaff           = { type = 9 id = 92019 }
  chiefofarmy            = { type = 9 id = 92022 }
  chiefofnavy            = { type = 9 id = 92009 }
  chiefofair             = { type = 9 id = 92010 }
  landunit =
  { id       = { type = 11114 id = 1 }
    name     = "Royal Omani Army"
    location = 1819
    division =
    { id       = { type = 11114 id = 2 }
      name     = "Royal Omani Army"
      type     = cavalry
      strength = 15
      locked   = yes
    }
  }
}
