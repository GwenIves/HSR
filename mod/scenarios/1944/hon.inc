
##############################
# Country definition for HON #
##############################

province =
{ id         = 760
  anti_air   = 1
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}              # Tegucigalpa

#####################
# Country main data #
#####################

country =
{ tag                    = HON
  manpower               = 3
  # Resource Reserves
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  capital                = 760
  SpyInfo                = { country = "HON" NumberOfSpies = 1 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 5
    free_market       = 6
    freedom           = 4
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 4
  }
  nationalprovinces      = { 760 }
  ownedprovinces         = { 760 }
  controlledprovinces    = { 760 }
  # ROTW Minor Tech '36
  # Group D 1944 techs
  # ######################
  techapps               = { 4010  4020  4030  4120  4130  4140  2010  2020  2030  2040  2050  2070  2150  2160  2290  2300  2310  2320  2330  1010
			     1020  1030  1040  1190  1200  1210  1220  1110  1120  2330  2400  2410  2450  2460  2470  2510  2520  1310  9010  9020
			     5010  5050  5080  5090  5100  5190  5200  6010  6020  6040  14000
			   }
  diplomacy =
  { relation = { tag = ENG value = 50 }
    relation = { tag = GUA value = 100 }
    relation = { tag = NIC value = 100 }
    relation = { tag = SAL value = 100 }
    relation = { tag = USA value = 100 }
  }
  dormant_ministers      = { 79001 79032 79002 79003 79108 79046 79047 79004 79005 79006 79007 79008 79037 79043 79038 79048 }
  headofstate            = { type = 9 id = 79031 }
  headofgovernment       = { type = 9 id = 79039 }
  foreignminister        = { type = 9 id = 79049 }
  armamentminister       = { type = 9 id = 79059 }
  ministerofsecurity     = { type = 9 id = 79073 }
  ministerofintelligence = { type = 9 id = 79080 }
  chiefofstaff           = { type = 9 id = 79088 }
  chiefofarmy            = { type = 9 id = 79094 }
  chiefofnavy            = { type = 9 id = 79009 }
  chiefofair             = { type = 9 id = 79010 }
  landunit =
  { id       = { type = 10254 id = 1 }
    name     = "Army of Honduras"
    location = 760
    division =
    { id       = { type = 10254 id = 2 }
      name     = "1a División de Infantería"
      strength = 60
      type     = infantry
      model    = 1
    }
  }
}
