
##############################
# Country definition for PAR #
##############################

country =
{ tag                    = PAR
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 100
  capital                = 837
  manpower               = 3
  SpyInfo                = { country = "PAR" NumberOfSpies = 5 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 4
    freedom           = 3
    free_market       = 5
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 8
  }
  nationalprovinces      = { 837 846 }
  ownedprovinces         = { 837 846 }
  controlledprovinces    = { 837 846 }
  # Group D 1941 techs
  # ######################
  techapps               = { 4010  4020  4030  4120  4130  2010  2020  2030  2040  2050  2150  2290  2300  2310  2320  1010  1020  1030  1190  1200
			     1210  1110  2330  2400  2450  2460  2470  2510  9010  5010  5050  5080  5090  5100  5190  6010  6020  14000
			   }
  diplomacy =
  { relation = { tag = ARG value = 50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = BOL value = -50 }
    relation = { tag = CHL value = 35 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 25 }
    relation = { tag = PRU value = 25 }
    relation = { tag = URU value = 20 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }
  headofstate            = { type = 9 id = 42064 }
  headofgovernment       = { type = 9 id = 42068 }
  foreignminister        = { type = 9 id = 42078 }
  armamentminister       = { type = 9 id = 42087 }
  ministerofsecurity     = { type = 9 id = 42094 }
  ministerofintelligence = { type = 9 id = 42100 }
  chiefofstaff           = { type = 9 id = 42105 }
  chiefofarmy            = { type = 9 id = 42110 }
  chiefofnavy            = { type = 9 id = 42118 }
  chiefofair             = { type = 9 id = 42122 }
  dormant_ministers      = { 42001 42061 42062 42002 42065 42066 42003 42004 42005 42091 42006 42007 42103 42008 42009 42010 42063 42067 42084 }
  landunit =
  { id       = { type = 10016 id = 1 }
    name     = "Ejercito de Paraguay"
    location = 837
    division =
    { id       = { type = 10016 id = 2 }
      name     = "I División de Infantería"
      strength = 100
      type     = infantry
      model    = 1
      extra    = anti_air
    }
    division =
    { id       = { type = 10016 id = 3 }
      name     = "CVI Brigada de Policia Nacional"
      strength = 100
      type     = militia
    }
  }
}
