
##############################
# Country definition for SAL #
##############################

province =
{ id         = 759
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
}              # San Salvador

#####################
# Country main data #
#####################

country =
{ tag                    = SAL
  # Resource Reserves
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  manpower               = 5
  capital                = 759
  SpyInfo                = { country = "SAL" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 5
    free_market       = 5
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 3
  }
  nationalprovinces      = { 759 }
  ownedprovinces         = { 759 }
  controlledprovinces    = { 759 }
  # ROTW Minor Tech '36
  # Group E 1944 techs
  # ######################
  techapps               = { 6210  2320  4010  4020  4120  4130  2010  2020  2030  2040  2150  2290  2300  2310  2400  2450  2460  2510  5050  5080
			     1010  1020  1190  1200  6300  2330  14000
			   }
  diplomacy =
  { relation = { tag = HON value = 100 }
    relation = { tag = USA value = 100 }
  }
  dormant_ministers      = { 77003 }
  headofstate            = { type = 9 id = 77031 }
  headofgovernment       = { type = 9 id = 77034 }
  foreignminister        = { type = 9 id = 77038 }
  armamentminister       = { type = 9 id = 77045 }
  ministerofsecurity     = { type = 9 id = 77046 }
  ministerofintelligence = { type = 9 id = 77051 }
  chiefofstaff           = { type = 9 id = 77052 }
  chiefofarmy            = { type = 9 id = 77055 }
  chiefofnavy            = { type = 9 id = 77056 }
  chiefofair             = { type = 9 id = 77059 }
  landunit =
  { id       = { type = 10253 id = 1 }
    name     = "Army of El Salvador"
    location = 759
    division =
    { id       = { type = 10253 id = 2 }
      name     = "1a División de Infantería"
      strength = 40
      type     = infantry
      model    = 1
    }
  }
}
