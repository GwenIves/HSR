
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
  manpower               = 27
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 892
  diplomacy =
  { relation = { tag = CUB value = 30 }
    relation = { tag = DOM value = -30 }
    relation = { tag = USA value = 100 }
  }
  nationalprovinces      = { 892 }
  ownedprovinces         = { 892 }
  controlledprovinces    = { 892 }
  # ROTW Minor Tech '36
  # Group E 1939 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 6010 }
  SpyInfo                = { country = "HAI" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 4
    free_market       = 4
    freedom           = 2
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 78001 }
  headofgovernment       = { type = 9 id = 78002 }
  foreignminister        = { type = 9 id = 78046 }
  armamentminister       = { type = 9 id = 78058 }
  ministerofsecurity     = { type = 9 id = 78068 }
  ministerofintelligence = { type = 9 id = 78079 }
  chiefofstaff           = { type = 9 id = 78007 }
  chiefofarmy            = { type = 9 id = 78008 }
  chiefofnavy            = { type = 9 id = 78104 }
  chiefofair             = { type = 9 id = 78010 }
  dormant_ministers      = { 78003 78046 78004 78005 78006 }
  # Firepower
  # Very rough estimation:
  landunit =
  { id       = { type = 30054 id = 53 }
    name     = "La Grandé Armée du Haiti"
    location = 892
    division =
    { id       = { type = 30054 id = 5301 }
      name     = "1ère Brigade d'Infanterie Haitien"
      strength = 50
      type     = infantry
      extra    = artillery
    }
  }
}
