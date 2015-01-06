
##############################
# Country definition for VEN #
##############################

province =
{ id         = 804
  anti_air   = 1
  air_base   = { size = 1 current_size = 1 }
  naval_base = { size = 4 current_size = 4 }
}              # Maracaibo
province = { id = 811 anti_air = 2 } # Caracas

#####################
# Country main data #
#####################

country =
{ tag                    = VEN
  # Resource Reserves
  energy                 = 2000
  metal                  = 1000
  rare_materials         = 1000
  oil                    = 2000
  supplies               = 1000
  money                  = 100
  capital                = 811
  manpower               = 12
  SpyInfo                = { country = "VEN" NumberOfSpies = 5 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 4
    freedom           = 5
    free_market       = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 3
  }
  nationalprovinces      = { 804 802 810 811 869 870 871 }
  ownedprovinces         = { 804 802 810 811 869 870 }
  controlledprovinces    = { 804 802 810 811 869 870 }
  # Group D 1941 techs
  # ######################
  techapps               = { 4010  4020  4030  4120  4130  2010  2020  2030  2040  2050  2150  2290  2300  2310  2320  1010  1020  1030  1190  1200
			     1210  1110  2330  2400  2450  2460  2470  2510  9010  5010  5050  5080  5090  5100  5190  5470  6010  6020  14000
			   }
  diplomacy =
  { relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = -15 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = -15 }
    relation = { tag = ECU value = 20 }
    relation = { tag = ENG value = -10 }
    relation = { tag = PAR value = 10 }
    relation = { tag = PRU value = 10 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 125 }
  }
  headofstate            = { type = 9 id = 38031 }
  headofgovernment       = { type = 9 id = 38033 }
  foreignminister        = { type = 9 id = 38035 }
  armamentminister       = { type = 9 id = 38040 }
  ministerofsecurity     = { type = 9 id = 38049 }
  ministerofintelligence = { type = 9 id = 38058 }
  chiefofstaff           = { type = 9 id = 38064 }
  chiefofarmy            = { type = 9 id = 38068 }
  chiefofnavy            = { type = 9 id = 38072 }
  chiefofair             = { type = 9 id = 38077 }
  dormant_ministers      = { 38081 }
  # Rather wild estimations
  landunit =
  { id       = { type = 15800 id = 45 }
    name     = "Ejercito de Venezuela"
    location = 811
    division =
    { id       = { type = 15800 id = 4500 }
      name     = "1a Div. de Inf. 'Eduardo Blanco'"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 15800 id = 4501 }
      name     = "1a División de Guardia Naciónal"
      strength = 100
      type     = militia
    }
    division =
    { id       = { type = 15800 id = 4502 }
      name     = "Los Caballos de Venezuela"
      strength = 100
      type     = cavalry
      model    = 0
    }
  }
}
