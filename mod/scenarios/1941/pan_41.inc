
##############################
# Country definition for PAN #
##############################

country =
{ tag                    = PAN
  capital                = 888
  # Resource Reserves
  oil                    = 200
  metal                  = 200
  energy                 = 200
  rare_materials         = 200
  money                  = 100
  manpower               = 2
  SpyInfo                = { country = "PAN" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    free_market       = 5
    freedom           = 5
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 5
  }
  nationalprovinces      = { 888 889 }
  ownedprovinces         = { 888 }
  controlledprovinces    = { 888 }
  # Group D 1941 techs
  # ######################
  techapps               = { 4010  4020  4030  4120  4130  2010  2020  2030  2040  2050  2150  2290  2300  2310  2320  1010  1020  1030  1190  1200
			     1210  1110  2330  2400  2450  2460  2470  2510  9010  5010  5050  5080  5090  5100  5190  6010  6020  14000
			   }
  diplomacy =
  { relation = { tag = USA value = 175 access = yes }
    relation = { tag = COL value = 50 }
  }
  headofstate            = { type = 9 id = 95032 }
  headofgovernment       = { type = 9 id = 95037 }
  foreignminister        = { type = 9 id = 95045 }
  armamentminister       = { type = 9 id = 95053 }
  ministerofsecurity     = { type = 9 id = 95059 }
  ministerofintelligence = { type = 9 id = 95064 }
  chiefofstaff           = { type = 9 id = 95069 }
  chiefofarmy            = { type = 9 id = 95074 }
  chiefofnavy            = { type = 9 id = 95009 }
  chiefofair             = { type = 9 id = 95083 }
  dormant_ministers      = { 95001 95002 95041 95031 95087 95090 95036 95088 95089 95044 }
  landunit =
  { id       = { type = 10006 id = 1 }
    name     = "Ejercito de Panama"
    location = 888
    division =
    { id       = { type = 10006 id = 2 }
      name     = "1a Brigada de Infantería"
      strength = 100
      type     = infantry
      model    = 1
    }
  }
}
