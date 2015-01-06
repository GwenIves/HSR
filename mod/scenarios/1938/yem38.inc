
##############################
# Country definition for YEM #
##############################

country =
{ tag                    = YEM
  energy                 = 200
  metal                  = 200
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  money                  = 10
  manpower               = 5
  capital                = 1812
  # claim to Aden
  diplomacy =
  { relation = { tag = ENG value = -10 }
    relation = { tag = IRQ value = 125 }
    relation = { tag = ITA value = 50 }
    relation = { tag = OMN value = 150 }
    relation = { tag = SAU value = 125 }
    relation = { tag = POL value = 200 }
    relation = { tag = TUR value = 35 }
    relation = { tag = USA value = 100 }
  }
  nationalprovinces      = { 1812 1813 1814 }
  ownedprovinces         = { 1812 }
  controlledprovinces    = { 1812 }
  # country was kept isolated by rulers until 1962
  # Early infantry
  techapps               = { 1010 1110 1190 }
  SpyInfo                = { country = "YEM" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 5
    freedom           = 4
    free_market       = 4
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 93001 }
  headofgovernment       = { type = 9 id = 93002 }
  foreignminister        = { type = 9 id = 93003 }
  armamentminister       = { type = 9 id = 93004 }
  ministerofsecurity     = { type = 9 id = 93017 }
  ministerofintelligence = { type = 9 id = 93006 }
  chiefofstaff           = { type = 9 id = 93007 }
  chiefofarmy            = { type = 9 id = 93008 }
  chiefofnavy            = { type = 9 id = 93009 }
  chiefofair             = { type = 9 id = 93010 }
  landunit =
  { id       = { type = 16800 id = 1 }
    name     = "Royal Yemenite Army"
    location = 1812
    division =
    { id       = { type = 16800 id = 2 }
      name     = "Royal Division"
      type     = cavalry
      strength = 15
    }
  }
}
