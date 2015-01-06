
##############################
# Country definition for HAI #
##############################

province =
{ id         = 892
  naval_base = { size = 2 current_size = 2 }
}              # Port-au-Prince

#####################
# Country main data #
#####################

country =
{ tag                    = HAI
  # Resource Reserves
  oil                    = 200
  metal                  = 200
  energy                 = 200
  rare_materials         = 200
  manpower               = 4
  capital                = 892
  SpyInfo                = { country = "HAI" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    free_market       = 5
    freedom           = 5
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 5
  }
  nationalprovinces      = { 892 }
  ownedprovinces         = { 892 }
  controlledprovinces    = { 892 }
  # Group E 1941 techs
  # ######################
  techapps               = { 2320 1020 4010 4020 2010 2020 2030 2040 2150 2290 2300 2310 2330 2400 2450 2460 2510 1010 1190 6010 }
  diplomacy =
  { relation = { tag = CUB value = 30 }
    relation = { tag = DOM value = -30 }
    relation = { tag = USA value = 100 }
  }
  headofstate            = { type = 9 id = 78032 }
  headofgovernment       = { type = 9 id = 78039 }
  foreignminister        = { type = 9 id = 78047 }
  armamentminister       = { type = 9 id = 78059 }
  ministerofsecurity     = { type = 9 id = 78069 }
  ministerofintelligence = { type = 9 id = 78080 }
  chiefofstaff           = { type = 9 id = 78091 }
  chiefofarmy            = { type = 9 id = 78098 }
  chiefofnavy            = { type = 9 id = 78009 }
  chiefofair             = { type = 9 id = 78109 }
  dormant_ministers      = { 78003 78046 78004 78005 78006 78001 78002 78115 78068 78007 78008 78010 }
  # Firepower
  # No Nuclear Research (Tier 5)
  landunit =
  { id       = { type = 10009 id = 1 }
    name     = "La Grandé Armée du Haiti"
    location = 892
    division =
    { id       = { type = 10009 id = 2 }
      name     = "1ère Brigade d'Infanterie Haitien"
      strength = 50
      type     = infantry
      model    = 1
    }
  }
}
