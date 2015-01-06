
##############################
# Country definition for VEN #
##############################

province =
{ id         = 804
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
  anti_air   = 1
}              # Maracaibo
province = { id = 811 anti_air = 2 } # Caracas

#####################
# Country main data #
#####################

country =
{ tag                    = VEN
  # Resource Reserves
  energy                 = 3500
  metal                  = 3500
  rare_materials         = 250
  oil                    = 3500
  supplies               = 350
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
  # ROTW Minor Tech '36
  # Group D 1944 techs
  # ######################
  techapps               = { 4010  4020  4030  4120  4130  4140  2010  2020  2030  2040  2050  2070  2150  2160  2290  2300  2310  2320  2330  1010
			     1020  1030  1040  1190  1200  1210  1220  1110  1120  2330  2400  2410  2450  2460  2470  2510  2520  1310  9010  9020
			     5010  5050  5080  5090  5100  5190  5200  6010  6020  6040  14000 14010
			   }
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
  dormant_ministers      = { 38081 38001 38002 38003 38004 38005 38039 38046 38047 38048 38006 38056 38063 38009 38076 38010 }
  headofstate            = { type = 9 id = 38031 }
  headofgovernment       = { type = 9 id = 38033 }
  foreignminister        = { type = 9 id = 38035 }
  armamentminister       = { type = 9 id = 38043 }
  ministerofsecurity     = { type = 9 id = 38050 }
  ministerofintelligence = { type = 9 id = 38059 }
  chiefofstaff           = { type = 9 id = 38065 }
  chiefofarmy            = { type = 9 id = 38068 }
  chiefofnavy            = { type = 9 id = 38073 }
  chiefofair             = { type = 9 id = 38077 }
  landunit =
  { id       = { type = 10277 id = 1 }
    name     = "Venezuelan Army"
    location = 811
    division =
    { id       = { type = 10277 id = 2 }
      name     = "1a División de Infantería"
      strength = 100
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 10277 id = 3 }
      name     = "2a División de Infantería"
      strength = 100
      type     = militia
      model    = 1
    }
    division =
    { id       = { type = 10277 id = 4 }
      name     = "1a División de Caballería"
      strength = 100
      type     = cavalry
      model    = 1
    }
  }
}
