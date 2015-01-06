
##############################
# Country definition for OMN #
##############################

province =
{ id         = 1819
  anti_air   = 1
  naval_base = { size = 6 current_size = 6 }
  air_base   = { size = 4 current_size = 4 }
}              # Mascate

#####################
# Country main data #
#####################

country =
{ tag                    = OMN
  puppet                 = ENG
  control                = ENG
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 200
  supplies               = 200
  money                  = 100
  capital                = 1819
  manpower               = 3
  SpyInfo                = { country = "OMN" NumberOfSpies = 1 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 5
    professional_army = 3
    defense_lobby     = 4
    interventionism   = 3
  }
  nationalprovinces      = { 1819 }
  ownedprovinces         = { 1819 }
  controlledprovinces    = { 1819 }
  # ROTW Minor Tech '36
  # Group E 1941 techs
  # ######################
  techapps               = { 2320 4010 4020 2010 2020 2030 2040 2150 2290 2300 2310 2330 2400 2450 2460 2510 1010 1190 6210 6300 14000 }
  diplomacy =
  { relation = { tag = AST value = 150 }
    relation = { tag = BHU value = 150 }
    relation = { tag = CAN value = 150 }
    relation = { tag = ENG value = 150 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = -200 }
    relation = { tag = ITA value = -200 }
    relation = { tag = NEP value = 150 }
    relation = { tag = NIC value = 150 }
    relation = { tag = NZL value = 150 }
    relation = { tag = SAF value = 150 }
    relation = { tag = SAU value = 125 }
    relation = { tag = TUR value = 35 }
    relation = { tag = USA value = 100 }
    relation = { tag = YEM value = 150 }
  }
  headofstate            = { type = 9 id = 92001 }
  headofgovernment       = { type = 9 id = 92002 }
  foreignminister        = { type = 9 id = 92011 }
  armamentminister       = { type = 9 id = 92013 }
  ministerofsecurity     = { type = 9 id = 92016 }
  ministerofintelligence = { type = 9 id = 92006 }
  chiefofstaff           = { type = 9 id = 92020 }
  chiefofarmy            = { type = 9 id = 92023 }
  chiefofnavy            = { type = 9 id = 92009 }
  chiefofair             = { type = 9 id = 92026 }
  landunit =
  { id       = { type = 10111 id = 1 }
    name     = "Royal Omani Army"
    location = 1819
    division =
    { id       = { type = 10111 id = 2 }
      name     = "Royal Omani Army"
      type     = cavalry
      strength = 15
    }
  }
}
