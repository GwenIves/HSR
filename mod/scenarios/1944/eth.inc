
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
  SpyInfo                = { country = "ETH" NumberOfSpies = 1 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    free_market       = 7
    freedom           = 3
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 2
  }
  nationalprovinces      = { 1044 1048 1049 1042 1043 1050 1045 1046 1047 1053 1052 1051 1054 1033 1038 1039 }
  ownedprovinces         = { 1044 1048 1049 1042 1043 1050 1045 1046 1047 1053 1052 1051 1054 }
  controlledprovinces    = { 1044 1048 1049 1042 1043 1050 1045 1046 1047 1053 1052 1051 1054 }
  # ROTW Minor Tech '36
  # Group E 1944 techs
  # ######################
  techapps               = { 6210  2320  4010  4020  4120  4130  2010  2020  2030  2040  2150  2290  2300  2310  2400  2450  2460  2510  5050  5080
			     1010  1020  1190  1200  6300  2330  14000
			   }
  diplomacy =
  { relation = { tag = JAP value = 35 }
  }
  dormant_ministers      = { 65032 65037 65002 65039 }
  # ## ETHIOPIAN CABINET 1944
  headofstate            = { type = 9 id = 65001 }
  headofgovernment       = { type = 9 id = 65036 }
  foreignminister        = { type = 9 id = 65043 }
  armamentminister       = { type = 9 id = 65004 }
  ministerofsecurity     = { type = 9 id = 65058 }
  ministerofintelligence = { type = 9 id = 65065 }
  chiefofstaff           = { type = 9 id = 65071 }
  chiefofarmy            = { type = 9 id = 65077 }
  chiefofnavy            = { type = 9 id = 65084 }
  chiefofair             = { type = 9 id = 65089 }
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
    }
    division =
    { id       = { type = 31000 id = 3 }
      name     = "1. Division"
      type     = militia
      strength = 70
    }
    division =
    { id       = { type = 31000 id = 4 }
      name     = "2. Division"
      type     = militia
      strength = 70
    }
  }
}
