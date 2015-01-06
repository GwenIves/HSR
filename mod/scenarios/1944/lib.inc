
##############################
# Country definition for LIB #
##############################

province =
{ id         = 992
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 1 current_size = 1 }
}              # Monrovia

#####################
# Country main data #
#####################

country =
{ tag                    = LIB
  puppet                 = USA
  control                = USA
  # Resource Reserves
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  capital                = 992
  manpower               = 7
  SpyInfo                = { country = "LIB" NumberOfSpies = 1 }
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
  # Group E 1944 techs
  # ######################
  techapps               = { 1010  1020  1190  1200  14000 2010  2020  2030  2040  2150  2290  2300  2310  2320  2330  2400  2450  2460  2510  4010
			     4020  4120  4130  5050  5080  6010
			   }
  diplomacy =
  { relation = { tag = USA value = 200 }
  }
  dormant_ministers      = { 69005 69001 69033 69002 69037 69003 69041 69004 69048 69058 69006 }
  headofstate            = { type = 9 id = 69032 }
  headofgovernment       = { type = 9 id = 69036 }
  foreignminister        = { type = 9 id = 69040 }
  armamentminister       = { type = 9 id = 69047 }
  ministerofsecurity     = { type = 9 id = 69056 }
  ministerofintelligence = { type = 9 id = 69063 }
  chiefofstaff           = { type = 9 id = 69007 }
  chiefofarmy            = { type = 9 id = 69008 }
  chiefofnavy            = { type = 9 id = 69009 }
  chiefofair             = { type = 9 id = 69010 }
  landunit =
  { location = 992
    id       = { type = 11040 id = 1 }
    name     = "Liberian Army"
    division =
    { id           = { type = 11040 id = 2 }
      name         = "1st Republican Guards"
      type         = infantry
      strength     = 100
      organisation = 50
      model        = 1
    }
    division =
    { id           = { type = 11040 id = 3 }
      name         = "2nd Republican guards"
      type         = infantry
      strength     = 100
      organisation = 50
      model        = 1
    }
  }
}
