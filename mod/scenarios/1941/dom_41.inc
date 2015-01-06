
##############################
# Country definition for DOM #
##############################

country =
{ tag                    = DOM
  # Resource Reserves
  oil                    = 200
  metal                  = 200
  energy                 = 200
  rare_materials         = 200
  money                  = 200
  manpower               = 1
  capital                = 894
  SpyInfo                = { country = "DOM" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    free_market       = 5
    freedom           = 5
    professional_army = 5
    defense_lobby     = 3
    interventionism   = 3
  }
  nationalprovinces      = { 893 894 }
  ownedprovinces         = { 893 894 }
  controlledprovinces    = { 893 894 }
  # Group D 1941 techs
  # ######################
  techapps               = { 4010 4020 4030 4120 4130 2010 2020 2030 2040 2050 2150 2290 2300 2310 2320 1010 1020 1030 1190 1200 1210 1110 2330 2400
			     2450 2460 2470 2510 9010 5010 5050 5080 5090 5100 5190 6010 6020
			   }
  diplomacy =
  { relation = { tag = CUB value = 50 }
    relation = { tag = HAI value = -30 }
    relation = { tag = USA value = 125 }
  }
  headofstate            = { type = 9 id = 49032 }
  headofgovernment       = { type = 9 id = 49039 }
  foreignminister        = { type = 9 id = 49048 }
  armamentminister       = { type = 9 id = 49056 }
  ministerofsecurity     = { type = 9 id = 49005 }
  ministerofintelligence = { type = 9 id = 49073 }
  chiefofstaff           = { type = 9 id = 49007 }
  chiefofarmy            = { type = 9 id = 49008 }
  chiefofnavy            = { type = 9 id = 49087 }
  chiefofair             = { type = 9 id = 49010 }
  dormant_ministers      = { 49002 49003 49047 49031 49038 49004 49064 49046 }
  landunit =
  { id       = { type = 10011 id = 1 }
    name     = "Ejercito de Rep. Dominicana"
    location = 894
    division =
    { id       = { type = 10011 id = 2 }
      name     = "I Brigada de Infantería"
      strength = 100
      type     = infantry
      model    = 1
    }
  }
}
