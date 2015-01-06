
##############################
# Country definition for SAL #
##############################

country =
{ tag                    = SAL
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 100
  manpower               = 5
  capital                = 759
  SpyInfo                = { country = "SAL" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 5
    free_market       = 5
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 3
  }
  nationalprovinces      = { 759 }
  ownedprovinces         = { 759 }
  controlledprovinces    = { 759 }
  # Group E 1941 techs
  # ######################
  techapps               = { 2320 4010 4020 2010 2020 2030 2040 2150 2290 2300 2310 2330 2400 2450 2460 2510 1010 1190 6010 14000 }
  diplomacy =
  { relation = { tag = HON value = 100 }
    relation = { tag = USA value = 100 }
  }
  headofstate            = { type = 9 id = 77001 }
  headofgovernment       = { type = 9 id = 77002 }
  foreignminister        = { type = 9 id = 77003 }
  armamentminister       = { type = 9 id = 77043 }
  ministerofsecurity     = { type = 9 id = 77005 }
  ministerofintelligence = { type = 9 id = 77049 }
  chiefofstaff           = { type = 9 id = 77052 }
  chiefofarmy            = { type = 9 id = 77008 }
  chiefofnavy            = { type = 9 id = 77056 }
  chiefofair             = { type = 9 id = 77010 }
  landunit =
  { id       = { type = 10017 id = 1 }
    name     = "Ejercito del Salvador"
    location = 759
    division =
    { id       = { type = 10017 id = 2 }
      name     = "I Brigada de Infantería"
      strength = 100
      type     = infantry
      model    = 0
    }
  }
}
