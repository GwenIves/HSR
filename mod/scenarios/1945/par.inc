
##############################
# Country definition for PAR #
##############################

province =
{ id       = 837
  air_base = { size = 2 current_size = 2 }
}            # Asunción

#####################
# Country main data #
#####################

country =
{ tag                    = PAR
  # Resource Reserves
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  capital                = 837
  manpower               = 10
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
  nationalprovinces      = { 837 846 }
  ownedprovinces         = { 837 846 }
  controlledprovinces    = { 837 846 }
  # ROTW Minor Tech '36
  # Group D 1944 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1110  1120  1190  1200  1210  1220  1310  14000 14010 14020 2010  2020  2030  2040  2050  2070
			     2150  2160  2290  2300  2310  2320  2330  2330  2400  2410  2450  2460  2470  2510  2520  4010  4020  4030  4120  4130
			     4140  5010  5050  5080  5090  5100  5190  5200  6010  6020  6040  9010  9020
			   }
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
  dormant_ministers      = { 42001 42061 42062 42002 42065 42066 42003 42004 42005 42091 42006 42007 42103 42008 42009 42010 42063 42067 42084 42075
			   }
  headofstate            = { type = 9 id = 42064 }
  headofgovernment       = { type = 9 id = 42069 }
  foreignminister        = { type = 9 id = 42079 }
  armamentminister       = { type = 9 id = 42089 }
  ministerofsecurity     = { type = 9 id = 42095 }
  ministerofintelligence = { type = 9 id = 42101 }
  chiefofstaff           = { type = 9 id = 42107 }
  chiefofarmy            = { type = 9 id = 42113 }
  chiefofnavy            = { type = 9 id = 42119 }
  chiefofair             = { type = 9 id = 42124 }
  # Superior Firepower, Delay
  landunit =
  { id       = { type = 10366 id = 1 }
    name     = "Army of Paraguay"
    location = 837
    division =
    { id       = { type = 10366 id = 2 }
      name     = "Army of Paraguay"
      strength = 50
      type     = infantry
      model    = 3
    }
  }
}
