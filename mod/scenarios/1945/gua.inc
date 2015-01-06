
##############################
# Country definition for GUA #
##############################

province =
{ id         = 757
  anti_air   = 1
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}              # Guatemala

#####################
# Country main data #
#####################

country =
{ tag                    = GUA
  manpower               = 20
  # Resource Reserves
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  capital                = 757
  diplomacy =
  { relation = { tag = HON value = 100 }
    relation = { tag = USA value = 125 }
  }
  nationalprovinces      = { 757 759 }
  ownedprovinces         = { 757 }
  controlledprovinces    = { 757 }
  # San Salvador
  # ROTW Minor Tech '36
  # Group D 1944 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1110  1120  1190  1200  1210  1220  1310  14000 14010 2010  2020  2030  2040  2050  2070  2150
			     2160  2290  2300  2310  2320  2330  2330  2400  2410  2450  2460  2470  2510  2520  4010  4020  4030  4120  4130  4140
			     5010  5050  5080  5090  5100  5190  5200  6010  6020  6040  9010  9020
			   }
  SpyInfo                = { country = "GUA" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 8
    free_market       = 6
    freedom           = 4
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 4
  }
  dormant_ministers      = { 46003 46004 46005 46007 46008 46047 46054 }
  headofstate            = { type = 9 id = 46022 }
  headofgovernment       = { type = 9 id = 46028 }
  foreignminister        = { type = 9 id = 46036 }
  armamentminister       = { type = 9 id = 46043 }
  ministerofsecurity     = { type = 9 id = 46051 }
  ministerofintelligence = { type = 9 id = 46059 }
  chiefofstaff           = { type = 9 id = 46063 }
  chiefofarmy            = { type = 9 id = 46068 }
  chiefofnavy            = { type = 9 id = 46072 }
  chiefofair             = { type = 9 id = 46077 }
  # Superior Firepower, Delay
  landunit =
  { id       = { type = 10252 id = 1 }
    name     = "Army of Guatemala"
    location = 757
    division =
    { id       = { type = 10252 id = 2 }
      name     = "1a División de Infantería"
      strength = 60
      type     = infantry
      model    = 3
    }
  }
}
