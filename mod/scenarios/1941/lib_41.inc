
##############################
# Country definition for LIB #
##############################

province =
{ id         = 992
  anti_air   = 1
  naval_base = { size = 3 current_size = 3 }
}              # Monrovia

#####################
# Country main data #
#####################

country =
{ tag                    = LIB
  puppet                 = USA
  control                = USA
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 100
  capital                = 992
  manpower               = 7
  SpyInfo                = { country = "LIB" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 3
    free_market       = 4
    professional_army = 1
    defense_lobby     = 3
    interventionism   = 1
  }
  nationalprovinces      = { 992 }
  ownedprovinces         = { 992 }
  controlledprovinces    = { 992 }
  # ROTW Minor Tech '36
  # Group E 1941 techs
  # ######################
  techapps               = { 2320 4010 4020 2010 2020 2030 2040 2150 2290 2300 2310 2330 2400 2450 2460 2510 1010 1190 6010 14000 }
  diplomacy =
  { relation = { tag = PHI value = 200 }
    relation = { tag = USA value = 200 }
  }
  headofstate            = { type = 9 id = 69001 }
  headofgovernment       = { type = 9 id = 69002 }
  foreignminister        = { type = 9 id = 69003 }
  armamentminister       = { type = 9 id = 69045 }
  ministerofsecurity     = { type = 9 id = 69054 }
  ministerofintelligence = { type = 9 id = 69062 }
  chiefofstaff           = { type = 9 id = 69007 }
  chiefofarmy            = { type = 9 id = 69008 }
  chiefofnavy            = { type = 9 id = 69009 }
  chiefofair             = { type = 9 id = 69010 }
  dormant_ministers      = { 69005 }
  landunit =
  { location = 992
    id       = { type = 25500 id = 2331 }
    name     = "Army of Liberia"
    division =
    { id       = { type = 25000 id = 2322 }
      name     = "1st Republican Guards Div."
      type     = infantry
      model    = 0
      strength = 100
    }
    division =
    { id       = { type = 25500 id = 2333 }
      name     = "2nd Republican Guards Div."
      type     = infantry
      strength = 100
      model    = 0
    }
  }
}
