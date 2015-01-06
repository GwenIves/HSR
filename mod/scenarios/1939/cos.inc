
##############################
# Country definition for COS #
##############################

province =
{ id         = 540
  anti_air   = 1
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}              # San José

#####################
# Country main data #
#####################

country =
{ tag                    = COS
  manpower               = 5
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 540
  diplomacy =
  { relation = { tag = USA value = 100 }
  }
  nationalprovinces      = { 540 }
  ownedprovinces         = { 540 }
  controlledprovinces    = { 540 }
  # ROTW Minor Tech '36
  # Group D 1939 techs
  # ######################
  techapps               = { 2320 4010 4020 2150 2010 2020 2290 2300 2310 1010 1020 1190 1200 1110 2330 2400 2450 2460 2510 5010 5020 5080 5090 5100
			     5190 5200 6010
			   }
  SpyInfo                = { country = "COS" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    free_market       = 8
    freedom           = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 47032 }
  headofgovernment       = { type = 9 id = 47042 }
  foreignminister        = { type = 9 id = 47055 }
  armamentminister       = { type = 9 id = 47004 }
  ministerofsecurity     = { type = 9 id = 47005 }
  ministerofintelligence = { type = 9 id = 47092 }
  chiefofstaff           = { type = 9 id = 47007 }
  chiefofarmy            = { type = 9 id = 47008 }
  chiefofnavy            = { type = 9 id = 47009 }
  chiefofair             = { type = 9 id = 47010 }
  dormant_ministers      = { 47001 47002 47003 47006 }
  # Wild estimation
  landunit =
  { id       = { type = 30056 id = 60 }
    name     = "Ejercito de Costa Rica"
    location = 540
    division =
    { id       = { type = 30056 id = 6000 }
      name     = "Brigada de Infantería Nro. 1"
      strength = 100
      type     = infantry
      extra    = artillery
    }
  }
}
