
##############################
# Country definition for CUB #
##############################

province =
{ id         = 654
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 3 current_size = 3 }
}              # Havana

#####################
# Country main data #
#####################

country =
{ tag                    = CUB
  # Resource Reserves
  energy                 = 500
  metal                  = 500
  rare_materials         = 2000
  oil                    = 200
  supplies               = 200
  manpower               = 14
  capital                = 654
  SpyInfo                = { country = "CUB" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    free_market       = 8
    freedom           = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  nationalprovinces      = { 654 655 656 657 }
  ownedprovinces         = { 654 655 656 657 }
  controlledprovinces    = { 654 655 656 657 }
  # ROTW Minor Tech '36
  # Group D 1944 techs
  # ######################
  techapps               = { 4010  4020  4030  4120  4130  4140  2010  2020  2030  2040  2050  2070  2150  2160  2290  2300  2310  2320  2330  1010
			     1020  1030  1040  1190  1200  1210  1220  1110  1120  2330  2400  2410  2450  2460  2470  2510  2520  1310  9010  9020
			     5010  5050  5080  5090  5100  5190  5200  6010  6020  6040  14000
			   }
  diplomacy =
  { relation = { tag = DOM value = 50 }
    relation = { tag = HAI value = 30 }
    relation = { tag = USA value = 200 access = yes }
  }
  dormant_ministers      = { 33002 33003 33050 33004 33064 33005 33006 33010 33031 33038 33044 33061 33086 33094 33001 33036 33039 33046 33049 33052
			     33071 33074 33079
			   }
  headofstate            = { type = 9 id = 33035 }
  headofgovernment       = { type = 9 id = 33043 }
  foreignminister        = { type = 9 id = 33053 }
  armamentminister       = { type = 9 id = 33069 }
  ministerofsecurity     = { type = 9 id = 33082 }
  ministerofintelligence = { type = 9 id = 33092 }
  chiefofstaff           = { type = 9 id = 33097 }
  chiefofarmy            = { type = 9 id = 33103 }
  chiefofnavy            = { type = 9 id = 33109 }
  chiefofair             = { type = 9 id = 33118 }
  landunit =
  { id       = { type = 10229 id = 1 }
    name     = "Cuban Army"
    location = 654
    division =
    { id       = { type = 10229 id = 2 }
      name     = "1st Infantry"
      strength = 100
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 10229 id = 3 }
      name     = "1st Cavalry"
      strength = 100
      type     = cavalry
      model    = 1
    }
  }
}
