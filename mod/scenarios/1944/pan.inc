
##############################
# Country definition for PAN #
##############################

province =
{ id         = 888
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
}              # Panamá

#####################
# Country main data #
#####################

country =
{ tag                    = PAN
  # Resource Reserves
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  capital                = 888
  manpower               = 2
  SpyInfo                = { country = "PAN" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 3
    freedom           = 4
    free_market       = 4
    professional_army = 3
    defense_lobby     = 4
    interventionism   = 4
  }
  nationalprovinces      = { 889 888 }
  ownedprovinces         = { 888 }
  controlledprovinces    = { 888 }
  # ROTW Minor Tech '36
  # Group D 1944 techs
  # ######################
  techapps               = { 4010  4020  4030  4120  4130  4140  2010  2020  2030  2040  2050  2070  2150  2160  2290  2300  2310  2320  2330  1010
			     1020  1030  1040  1190  1200  1210  1220  1110  1120  2330  2400  2410  2450  2460  2470  2510  2520  1310  9010  9020
			     5010  5050  5080  5090  5100  5190  5200  6010  6020  6040  14000
			   }
  diplomacy =
  { relation = { tag = USA value = 175 }
    relation = { tag = COL value = 50 }
  }
  dormant_ministers      = { 95001 95002 95041 95031 95087 95090 95036 95088 95089 95044 95032 95037 95058 }
  headofstate            = { type = 9 id = 95033 }
  headofgovernment       = { type = 9 id = 95038 }
  foreignminister        = { type = 9 id = 95047 }
  armamentminister       = { type = 9 id = 95052 }
  ministerofsecurity     = { type = 9 id = 95060 }
  ministerofintelligence = { type = 9 id = 95065 }
  chiefofstaff           = { type = 9 id = 95070 }
  chiefofarmy            = { type = 9 id = 95073 }
  chiefofnavy            = { type = 9 id = 95080 }
  chiefofair             = { type = 9 id = 95084 }
  landunit =
  { id       = { type = 10287 id = 1 }
    name     = "Army of Panama"
    location = 888
    division =
    { id       = { type = 10287 id = 2 }
      name     = "1a División de Infantería"
      strength = 60
      type     = infantry
      model    = 1
    }
  }
}
