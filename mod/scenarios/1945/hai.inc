
##############################
# Country definition for HAI #
##############################

province =
{ id         = 892
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
}              # Port-au-Prince

#####################
# Country main data #
#####################

country =
{ tag                    = HAI
  manpower               = 27
  # Resource Reserves
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
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
  # Group E 1944 techs
  # ######################
  techapps               = { 1010  1020  1190  1200  14000 14010 2010  2020  2030  2040  2150  2290  2300  2310  2320  2330  2400  2450  2460  2510
			     4010  4020  4120  4130  5050  5080  6010
			   }
  SpyInfo                = { country = "HAI" NumberOfSpies = 1 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    free_market       = 4
    freedom           = 2
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 3
  }
  dormant_ministers      = { 78003 78046 78004 78005 78006 78001 78002 78115 78068 78007 78008 78010 78047 }
  headofstate            = { type = 9 id = 78032 }
  headofgovernment       = { type = 9 id = 78039 }
  foreignminister        = { type = 9 id = 78048 }
  armamentminister       = { type = 9 id = 78059 }
  ministerofsecurity     = { type = 9 id = 78069 }
  ministerofintelligence = { type = 9 id = 78080 }
  chiefofstaff           = { type = 9 id = 78091 }
  chiefofarmy            = { type = 9 id = 78098 }
  chiefofnavy            = { type = 9 id = 78009 }
  chiefofair             = { type = 9 id = 78109 }
  # Firepower
  landunit =
  { id       = { type = 10261 id = 1 }
    name     = "La Grand� Arm�e du Haiti"
    location = 892
    division =
    { id       = { type = 10261 id = 2 }
      name     = "1�re Brigade d'Infanterie Haitien"
      strength = 50
      type     = infantry
      model    = 3
    }
  }
}
