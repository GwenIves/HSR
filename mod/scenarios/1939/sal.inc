
##############################
# Country definition for SAL #
##############################

country =
{ tag                    = SAL
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  manpower               = 5
  capital                = 759
  diplomacy =
  { relation = { tag = HON value = 100 }
    relation = { tag = USA value = 100 }
  }
  nationalprovinces      = { 759 }
  ownedprovinces         = { 759 }
  controlledprovinces    = { 759 }
  # ROTW Minor Tech '36
  # Group E 1939 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 5010 5080 5090 5100 5190 6010 }
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
  headofstate            = { type = 9 id = 77001 }
  headofgovernment       = { type = 9 id = 77002 }
  foreignminister        = { type = 9 id = 77003 }
  armamentminister       = { type = 9 id = 77043 }
  ministerofsecurity     = { type = 9 id = 77005 }
  ministerofintelligence = { type = 9 id = 77006 }
  chiefofstaff           = { type = 9 id = 77052 }
  chiefofarmy            = { type = 9 id = 77008 }
  chiefofnavy            = { type = 9 id = 77009 }
  chiefofair             = { type = 9 id = 77010 }
  # Wild estimation
  landunit =
  { id       = { type = 30056 id = 70 }
    name     = "Ejercito del Salvador"
    location = 759
    division =
    { id       = { type = 30056 id = 7000 }
      name     = "I Brigada de Infantería"
      strength = 40
      type     = infantry
      extra    = anti_air
    }
  }
}
