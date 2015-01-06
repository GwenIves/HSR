
##############################
# Country definition for DOM #
##############################

country =
{ tag                    = DOM
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  manpower               = 2
  capital                = 894
  diplomacy =
  { relation = { tag = CUB value = 50 }
    relation = { tag = HAI value = -30 }
    relation = { tag = USA value = 125 }
  }
  nationalprovinces      = { 893 894 }
  ownedprovinces         = { 893 894 }
  controlledprovinces    = { 893 894 }
  # ROTW Minor Tech '36
  # Group D 1939 techs
  # ######################
  techapps               = { 4010 4020 2150 2010 2020 2290 2300 2310 2320 1010 1020 1190 1200 1110 2330 2400 2450 2460 2510 5010 5080 5090 5100 5190 6010
			   }
  SpyInfo                = { country = "DOM" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    free_market       = 8
    freedom           = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 49031 }
  headofgovernment       = { type = 9 id = 49038 }
  foreignminister        = { type = 9 id = 49048 }
  armamentminister       = { type = 9 id = 49004 }
  ministerofsecurity     = { type = 9 id = 49064 }
  ministerofintelligence = { type = 9 id = 49006 }
  chiefofstaff           = { type = 9 id = 49007 }
  chiefofarmy            = { type = 9 id = 49008 }
  chiefofnavy            = { type = 9 id = 49009 }
  chiefofair             = { type = 9 id = 49010 }
  dormant_ministers      = { 49002 49003 49047 49046 }
  # Superior Firepower
  # Wild estimation
  landunit =
  { id       = { type = 30056 id = 75 }
    name     = "Ejercito de Rep. Dominicana"
    location = 894
    division =
    { id       = { type = 30056 id = 7500 }
      name     = "I Brigada de Infantería"
      strength = 100
      type     = infantry
      extra    = anti_air
    }
  }
}
