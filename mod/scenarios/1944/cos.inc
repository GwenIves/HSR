
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
  manpower               = 2
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  capital                = 540
  SpyInfo                = { country = "COS" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 5
    free_market       = 8
    freedom           = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  nationalprovinces      = { 540 }
  ownedprovinces         = { 540 }
  controlledprovinces    = { 540 }
  # ROTW Minor Tech '36
  # Group D 1944 techs
  # ######################
  techapps               = { 4010  4020  4030  4120  4130  4140  2010  2020  2030  2040  2050  2070  2150  2160  2290  2300  2310  2320  2330  1010
			     1020  1030  1040  1190  1200  1210  1220  1110  1120  2330  2400  2410  2450  2460  2470  2510  2520  1310  9010  9020
			     5010  5050  5080  5090  5100  5190  5200  6010  6020  6040  14000
			   }
  diplomacy =
  { relation = { tag = USA value = 100 }
  }
  dormant_ministers      = { 47001 47002 47003 47092 47006 47032 47035 47042 47044 47053 47059 47074 47033 47036 47045 47057 47060 47073 }
  headofstate            = { type = 9 id = 47037 }
  headofgovernment       = { type = 9 id = 47046 }
  foreignminister        = { type = 9 id = 47062 }
  armamentminister       = { type = 9 id = 47075 }
  ministerofsecurity     = { type = 9 id = 47088 }
  ministerofintelligence = { type = 9 id = 47099 }
  chiefofstaff           = { type = 9 id = 47107 }
  chiefofarmy            = { type = 9 id = 47117 }
  chiefofnavy            = { type = 9 id = 47121 }
  chiefofair             = { type = 9 id = 47127 }
  landunit =
  { id       = { type = 10286 id = 1 }
    name     = "Army of Costa Rica"
    location = 540
    division =
    { id       = { type = 10286 id = 2 }
      name     = "1st Infantry"
      strength = 60
      type     = infantry
      model    = 1
    }
  }
}
