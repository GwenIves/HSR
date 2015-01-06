
##############################
# Country definition for ETH #
##############################

country =
{ tag                    = ETH
  puppet                 = ENG
  control                = ENG
  # Resource Reserves
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  capital                = 1046
  manpower               = 80
  nationalprovinces      = { 1044 1048 1049 1042 1043 1050 1045 1046 1047 1053 1052 1051 1054 1033 1038 1039 }
  ownedprovinces         = { 1042 1043 1044 1045 1046 1047 1048 1049 1050 1051 1052 1053 1054 }
  controlledprovinces    = { 1042 1043 1044 1045 1046 1047 1048 1049 1050 1051 1052 1053 1054 }
  # ROTW Minor Tech '36
  # Group E 1944 techs
  # ######################
  techapps               = { 1010  1020  1190  1200  14000 14010 2010  2020  2030  2040  2150  2290  2300  2310  2320  2330  2400  2450  2460  2510
			     4010  4020  4120  4130  5050  5080  6210  6300
			   }
  SpyInfo                = { country = "ETH" NumberOfSpies = 1 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 4
    free_market       = 7
    freedom           = 3
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 2
  }
  dormant_ministers      = { 65032 65037 65002 65039 }
  headofstate            = { type = 9 id = 65001 }
  headofgovernment       = { type = 9 id = 65036 }
  foreignminister        = { type = 9 id = 65044 }
  armamentminister       = { type = 9 id = 65052 }
  ministerofsecurity     = { type = 9 id = 65059 }
  ministerofintelligence = { type = 9 id = 65066 }
  chiefofstaff           = { type = 9 id = 65072 }
  chiefofarmy            = { type = 9 id = 65078 }
  chiefofnavy            = { type = 9 id = 65084 }
  chiefofair             = { type = 9 id = 65090 }
  # Regular army#
  landunit =
  { id       = { type = 31000 id = 1 }
    location = 1046
    name     = "Imperial Army"
    leader   = 3305
    division =
    { id       = { type = 31000 id = 2 }
      name     = "Imperial Bodyguard"
      type     = infantry
      strength = 30
      model    = 2
    }
    division =
    { id       = { type = 31000 id = 3 }
      name     = "1. Division"
      type     = militia
      strength = 70
      model    = 1
    }
    division =
    { id       = { type = 31000 id = 4 }
      name     = "2. Division"
      type     = militia
      strength = 70
      model    = 1
    }
  }
}
