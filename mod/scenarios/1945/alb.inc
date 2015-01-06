
##############################
# Country definition for ALB #
##############################

province =
{ id         = 390
  anti_air   = 1
  oilpool    = 100
  supplypool = 500
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 4 current_size = 4 }
  infra      = { size = 0.6 current_size = 0.55 }
  ic         = { size = 4 current_size = 3 }
}              # Tirana

#####################
# Country main data #
#####################

country =
{ tag                    = ALB
  manpower               = 20
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 390
  puppet                 = YUG
  dissent                = 10
  diplomacy              = { }
  nationalprovinces      = { 390 391 413 415 }
  ownedprovinces         = { 390 391 }
  controlledprovinces    = { 390 391 }
  # Eastern Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 1010 1020 1030 1040 1110 1190 14000 14010 2150 2290 2300 2310 2450 2460 2510 4010 5080 6010 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 6 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 9
    free_market       = 7
    freedom           = 5
    professional_army = 5
    defense_lobby     = 4
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 32050 }
  headofgovernment       = { type = 9 id = 32062 }
  foreignminister        = { type = 9 id = 32078 }
  armamentminister       = { type = 9 id = 32099 }
  ministerofsecurity     = { type = 9 id = 32123 }
  ministerofintelligence = { type = 9 id = 32142 }
  chiefofstaff           = { type = 9 id = 32156 }
  chiefofarmy            = { type = 9 id = 32172 }
  chiefofnavy            = { type = 9 id = 32185 }
  chiefofair             = { type = 9 id = 32201 }
  landunit =
  { id       = { type = 30658 id = 1 }
    name     = "Albanian Army"
    location = 390
    division =
    { type         = infantry
      model        = 3
      id           = { type = 30659 id = 1 }
      name         = "1st Albanian Infantry"
      strength     = 50
      max_strength = 50
    }
    division =
    { type         = infantry
      model        = 3
      id           = { type = 30659 id = 2 }
      name         = "2nd Albanian Infantry"
      strength     = 50
      max_strength = 50
    }
  }
}
