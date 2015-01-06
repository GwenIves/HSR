
##############################
# Country definition for TIB #
##############################

country =
{ tag                    = TIB
  # Resource Reserves
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 500
  supplies               = 200
  capital                = 1453
  manpower               = 10
  nationalprovinces      = { 1283 1448 1450 1451 1452 1453 }
  ownedprovinces         = { 1283 1448 1450 1451 1452 1453 }
  controlledprovinces    = { 1283 1448 1450 1451 1452 1453 }
  # ROTW Minor Tech '36
  # Group E 1944 techs
  # ######################
  techapps               = { 1010  1020  1190  1200  14000 14010 2010  2020  2030  2040  2150  2290  2300  2310  2320  2330  2400  2450  2460  2510
			     4010  4020  4120  4130  5050  5080  6210  6300
			   }
  SpyInfo                = { country = "TIB" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 5
    free_market       = 5
    professional_army = 1
    defense_lobby     = 1
    interventionism   = 1
  }
  dormant_ministers      = { 73043 73004 73006 73007 73002 73003 73042 73049 73050 73051 73052 73005 73060 73061 73062 73063 73064 73067 73072 73073
			     73074 73008
			   }
  headofstate            = { type = 9 id = 73001 }
  headofgovernment       = { type = 9 id = 73041 }
  foreignminister        = { type = 9 id = 73048 }
  armamentminister       = { type = 9 id = 73059 }
  ministerofsecurity     = { type = 9 id = 73066 }
  ministerofintelligence = { type = 9 id = 73071 }
  chiefofstaff           = { type = 9 id = 73076 }
  chiefofarmy            = { type = 9 id = 73081 }
  chiefofnavy            = { type = 9 id = 73083 }
  chiefofair             = { type = 9 id = 73085 }
  landunit =
  { location = 1453
    id       = { type = 11503 id = 1 }
    name     = "Defense Force"
    division =
    { id           = { type = 11503 id = 2 }
      name         = "Defense Force"
      type         = militia
      strength     = 50
      organisation = 50
      model        = 1
    }
  }
}
