
##############################
# Country definition for VEN #
##############################

province =
{ id         = 804
  anti_air   = 1
  air_base   = { size = 1 current_size = 1 }
  naval_base = { size = 6 current_size = 6 }
}              # Maracaibo

#####################
# Country main data #
#####################

country =
{ tag                    = VEN
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 811
  manpower               = 12
  diplomacy =
  { relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = -15 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 20 }
    relation = { tag = ECU value = 20 }
    relation = { tag = ENG value = -10 }
    relation = { tag = PAR value = 10 }
    relation = { tag = PRU value = 10 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 125 }
  }
  nationalprovinces      = { 804 802 810 811 869 870 871 }
  ownedprovinces         = { 804 802 810 811 869 870 }
  controlledprovinces    = { 804 802 810 811 869 870 }
  # ROTW Minor Tech '36
  # Group D 1939 techs
  # ######################
  techapps               = { 2320  4010  4020  2150  2010  2020  2290  2300  2310  1010  1020  1190  1200  1110  2330  2400  2450  2460  2510  5010
			     5080  5090  5100  5190  5200  6010  14000
			   }
  SpyInfo                = { country = "VEN" NumberOfSpies = 4 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 1
    freedom           = 5
    free_market       = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 38001 }
  headofgovernment       = { type = 9 id = 38002 }
  foreignminister        = { type = 9 id = 38003 }
  armamentminister       = { type = 9 id = 38039 }
  ministerofsecurity     = { type = 9 id = 38048 }
  ministerofintelligence = { type = 9 id = 38057 }
  chiefofstaff           = { type = 9 id = 38063 }
  chiefofarmy            = { type = 9 id = 38008 }
  chiefofnavy            = { type = 9 id = 38071 }
  chiefofair             = { type = 9 id = 38076 }
  dormant_ministers      = { 38081 }
  # Rather wild estimations
  landunit =
  { id       = { type = 30058 id = 45 }
    name     = "Ejercito de Venezuela"
    location = 811
    division =
    { id       = { type = 30058 id = 4500 }
      name     = "1a Div. de Inf. 'Eduardo Blanco'"
      strength = 100
      type     = infantry
      extra    = anti_tank
    }
    division =
    { id       = { type = 30058 id = 4501 }
      name     = "1a División de Guardia Naciónal"
      strength = 100
      type     = militia
    }
    division =
    { id       = { type = 30058 id = 4502 }
      name     = "Los Caballos de Venezuela"
      strength = 100
      type     = cavalry
      extra    = artillery
    }
  }
}
