
##############################
# Country definition for HON #
##############################

province =
{ id         = 760
  anti_air   = 1
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
}              # Tegucigalpa

#####################
# Country main data #
#####################

country =
{ tag                    = HON
  manpower               = 10
  # Resource Reserves
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  capital                = 760
  diplomacy =
  { relation = { tag = GUA value = 100 }
    relation = { tag = NIC value = 100 }
    relation = { tag = SAL value = 100 }
    relation = { tag = USA value = 100 }
  }
  nationalprovinces      = { 760 }
  ownedprovinces         = { 760 }
  controlledprovinces    = { 760 }
  # ROTW Minor Tech '36
  # Group D 1944 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1110  1120  1190  1200  1210  1220  1310  14000 14010 2010  2020  2030  2040  2050  2070  2150
			     2160  2290  2300  2310  2320  2330  2330  2400  2410  2450  2460  2470  2510  2520  4010  4020  4030  4120  4130  4140
			     5010  5050  5080  5090  5100  5190  5200  6010  6020  6040  9010  9020
			   }
  SpyInfo                = { country = "HON" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 4
    free_market       = 6
    freedom           = 4
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 4
  }
  dormant_ministers      = { 79001 79032 79002 79003 79108 79046 79047 79004 79005 79006 79007 79008 79037 79043 79038 79048 }
  headofstate            = { type = 9 id = 79031 }
  headofgovernment       = { type = 9 id = 79040 }
  foreignminister        = { type = 9 id = 79049 }
  armamentminister       = { type = 9 id = 79060 }
  ministerofsecurity     = { type = 9 id = 79073 }
  ministerofintelligence = { type = 9 id = 79080 }
  chiefofstaff           = { type = 9 id = 79090 }
  chiefofarmy            = { type = 9 id = 79098 }
  chiefofnavy            = { type = 9 id = 79100 }
  chiefofair             = { type = 9 id = 79106 }
  # Superior Firepower, Delay
  landunit =
  { id       = { type = 10254 id = 1 }
    name     = "Army of Honduras"
    location = 760
    division =
    { id       = { type = 10254 id = 2 }
      name     = "1a División de Infantería"
      strength = 60
      type     = infantry
      model    = 3
    }
  }
}
