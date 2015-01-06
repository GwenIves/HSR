
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
  # Resource Reserves
  oil                    = 200
  metal                  = 200
  energy                 = 200
  rare_materials         = 200
  money                  = 200
  manpower               = 3
  capital                = 760
  SpyInfo                = { country = "HON" NumberOfSpies = 2 }
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
  nationalprovinces      = { 760 }
  ownedprovinces         = { 760 }
  controlledprovinces    = { 760 }
  # Group D 1941 techs
  # ######################
  techapps               = { 4010  4020  4030  4120  4130  2010  2020  2030  2040  2050  2150  2290  2300  2310  2320  1010  1020  1030  1190  1200
			     1210  1110  2330  2400  2450  2460  2470  2510  9010  5010  5050  5080  5090  5100  5190  6010  6020  14000
			   }
  diplomacy =
  { relation = { tag = ENG value = 50 }
    relation = { tag = GUA value = 100 }
    relation = { tag = NIC value = 100 }
    relation = { tag = SAL value = 100 }
    relation = { tag = USA value = 100 }
  }
  headofstate            = { type = 9 id = 79031 }
  headofgovernment       = { type = 9 id = 79038 }
  foreignminister        = { type = 9 id = 79048 }
  armamentminister       = { type = 9 id = 79058 }
  ministerofsecurity     = { type = 9 id = 79073 }
  ministerofintelligence = { type = 9 id = 79080 }
  chiefofstaff           = { type = 9 id = 79088 }
  chiefofarmy            = { type = 9 id = 79094 }
  chiefofnavy            = { type = 9 id = 79009 }
  chiefofair             = { type = 9 id = 79010 }
  dormant_ministers      = { 79001 79032 79002 79003 79108 79046 79047 79004 79005 79006 79007 79008 79037 79043 }
  landunit =
  { id       = { type = 10012 id = 1 }
    name     = "Ejercito de Honduras"
    location = 760
    division =
    { id       = { type = 10012 id = 2 }
      name     = "1a Brig. de Inf. 'Francesco Marazán'"
      strength = 60
      type     = infantry
      model    = 1
    }
  }
}
