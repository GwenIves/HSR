
##############################
# Country definition for URU #
##############################

province =
{ id         = 849
  anti_air   = 1
  air_base   = { size = 1 current_size = 1 }
  naval_base = { size = 6 current_size = 6 }
}              # Montevideo

#####################
# Country main data #
#####################

country =
{ tag                    = URU
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 100
  capital                = 849
  manpower               = 7
  SpyInfo                = { country = "URU" NumberOfSpies = 5 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 5
    free_market       = 5
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 1
  }
  nationalprovinces      = { 849 }
  ownedprovinces         = { 849 }
  controlledprovinces    = { 849 }
  # Group D 1941 techs
  # ######################
  techapps               = { 4010  4020  4030  4120  4130  2010  2020  2030  2040  2050  2150  2290  2300  2310  2320  1010  1020  1030  1190  1200
			     1210  1110  2330  2400  2450  2460  2470  2510  9010  5010  5050  5080  5090  5100  5190  5470  6010  6020  14000
			   }
  diplomacy =
  { relation = { tag = ARG value = -50 }
    relation = { tag = BOL value = 10 }
    relation = { tag = BRA value = 125 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 10 }
    relation = { tag = PAR value = 20 }
    relation = { tag = PRU value = 25 }
    relation = { tag = SOV value = -100 }
    relation = { tag = USA value = 100 }
    relation = { tag = VEN value = 10 }
  }
  headofstate            = { type = 9 id = 41031 }
  headofgovernment       = { type = 9 id = 41037 }
  foreignminister        = { type = 9 id = 41043 }
  armamentminister       = { type = 9 id = 41053 }
  ministerofsecurity     = { type = 9 id = 41061 }
  ministerofintelligence = { type = 9 id = 41070 }
  chiefofstaff           = { type = 9 id = 41007 }
  chiefofarmy            = { type = 9 id = 41081 }
  chiefofnavy            = { type = 9 id = 41009 }
  chiefofair             = { type = 9 id = 41093 }
  dormant_ministers      = { 41001 41002 41003 41004 41050 41005 41060 41006 41068 41008 41010 }
  landunit =
  { id       = { type = 13700 id = 40 }
    name     = "Ejercito de Uruguay"
    location = 849
    division =
    { id       = { type = 13700 id = 4000 }
      name     = "4a Brigada de Inf. 'Don Claudio'"
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
    }
  }
}
