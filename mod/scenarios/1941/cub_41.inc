
##############################
# Country definition for CUB #
##############################

province =
{ id         = 654
  anti_air   = 1
  naval_base = { size = 4 current_size = 4 }
}              # Havana

#####################
# Country main data #
#####################

country =
{ tag                    = CUB
  # Resource Reserves
  oil                    = 200
  metal                  = 200
  energy                 = 200
  rare_materials         = 200
  money                  = 100
  manpower               = 7
  capital                = 654
  SpyInfo                = { country = "CUB" NumberOfSpies = 3 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 6
    free_market       = 5
    freedom           = 5
    professional_army = 5
    defense_lobby     = 3
    interventionism   = 3
  }
  nationalprovinces      = { 654 655 656 657 }
  ownedprovinces         = { 654 655 656 657 }
  controlledprovinces    = { 654 655 656 657 }
  # Group D 1941 techs
  # ######################
  techapps               = { 4010  4020  4030  4120  4130  2010  2020  2030  2040  2050  2150  2290  2300  2310  2320  1010  1020  1030  1190  1200
			     1210  1110  2330  2400  2450  2460  2470  2510  9010  5010  5050  5080  5090  5100  5190  6010  6020  14000
			   }
  diplomacy =
  { relation = { tag = DOM value = 50 }
    relation = { tag = HAI value = 30 }
    relation = { tag = USA value = 200 access = yes }
  }
  headofstate            = { type = 9 id = 33034 }
  headofgovernment       = { type = 9 id = 33042 }
  foreignminister        = { type = 9 id = 33052 }
  armamentminister       = { type = 9 id = 33067 }
  ministerofsecurity     = { type = 9 id = 33079 }
  ministerofintelligence = { type = 9 id = 33091 }
  chiefofstaff           = { type = 9 id = 33097 }
  chiefofarmy            = { type = 9 id = 33103 }
  chiefofnavy            = { type = 9 id = 33109 }
  chiefofair             = { type = 9 id = 33010 }
  dormant_ministers      = { 33002 33003 33050 33004 33064 33005 33006 33031 33038 33044 33061 33086 33094 33001 33049 }
  landunit =
  { id       = { type = 10010 id = 1 }
    name     = "Ejercito de Cuba"
    location = 654
    division =
    { id       = { type = 10010 id = 2 }
      name     = "1a Brigada de Ejercito"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 10010 id = 3 }
      name     = "1a Brigada de Caballería 'Floridita'"
      strength = 100
      type     = cavalry
      model    = 0
    }
  }
}
