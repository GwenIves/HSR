
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
  manpower               = 35
  SpyInfo                = { country = "VEN" NumberOfSpies = 5 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 7
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
  techapps               = { 1010  1020  1030  1040  1110  1120  1190  1200  1210  1220  1310  14000 14010 2010  2020  2030  2040  2050  2070  2150
			     2160  2290  2300  2310  2320  2330  2330  2400  2410  2450  2460  2470  2510  2520  4010  4020  4030  4120  4130  4140
			     5010  5050  5080  5090  5100  5190  5200  6010  6020  6040  9010  9020
			   }
  diplomacy =
  { relation = { tag = ARG value = 10 }
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
  headofstate            = { type = 9 id = 38032 }
  headofgovernment       = { type = 9 id = 38034 }
  foreignminister        = { type = 9 id = 38037 }
  armamentminister       = { type = 9 id = 38044 }
  ministerofsecurity     = { type = 9 id = 38051 }
  ministerofintelligence = { type = 9 id = 38060 }
  chiefofstaff           = { type = 9 id = 38066 }
  chiefofarmy            = { type = 9 id = 38069 }
  chiefofnavy            = { type = 9 id = 38074 }
  chiefofair             = { type = 9 id = 38078 }
  # Superior Firepower, Delay
  landunit =
  { id       = { type = 10277 id = 1 }
    name     = "Venezuelan Army"
    location = 811
    division =
    { id       = { type = 10277 id = 2 }
      name     = "1a División de Infantería"
      strength = 100
      type     = infantry
      model    = 3
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
      model    = 2
    }
  }
}
