
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
  # Resource Reserves
  oil                    = 200
  metal                  = 200
  energy                 = 200
  rare_materials         = 200
  money                  = 100
  manpower               = 2
  capital                = 540
  SpyInfo                = { country = "COS" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 5
    free_market       = 5
    freedom           = 5
    professional_army = 5
    defense_lobby     = 3
    interventionism   = 3
  }
  nationalprovinces      = { 540 }
  ownedprovinces         = { 540 }
  controlledprovinces    = { 540 }
  # Group D 1941 techs
  # ######################
  techapps               = { 4010  4020  4030  4120  4130  2010  2020  2030  2040  2050  2150  2290  2300  2310  2320  1010  1020  1030  1190  1200
			     1210  1110  2330  2400  2450  2460  2470  2510  9010  5010  5050  5080  5090  5100  5190  6010  6020  14000
			   }
  diplomacy =
  { relation = { tag = USA value = 100 }
  }
  headofstate            = { type = 9 id = 47036 }
  headofgovernment       = { type = 9 id = 47045 }
  foreignminister        = { type = 9 id = 47060 }
  armamentminister       = { type = 9 id = 47074 }
  ministerofsecurity     = { type = 9 id = 47085 }
  ministerofintelligence = { type = 9 id = 47096 }
  chiefofstaff           = { type = 9 id = 47007 }
  chiefofarmy            = { type = 9 id = 47116 }
  chiefofnavy            = { type = 9 id = 47009 }
  chiefofair             = { type = 9 id = 47129 }
  dormant_ministers      = { 47001 47002 47003 47092 47006 47032 47035 47042 47044 47053 47059 }
  landunit =
  { id       = { type = 10005 id = 1 }
    name     = "Ejercito de Costa Rica"
    location = 540
    division =
    { id       = { type = 10005 id = 2 }
      name     = "Brigada de Infantería Nro. 1"
      strength = 60
      type     = infantry
      model    = 1
    }
  }
}
