
##############################
# Country definition for ECU #
##############################

province =
{ id         = 815
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
}              # Quito

#####################
# Country main data #
#####################

country =
{ tag                    = ECU
  # Resource Reserves
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 500
  supplies               = 200
  capital                = 815
  manpower               = 25
  diplomacy =
  { relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = -20 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 20 }
    relation = { tag = PAR value = 25 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 20 }
  }
  nationalprovinces      = { 814 815 817 818 }
  ownedprovinces         = { 814 815 817 }
  controlledprovinces    = { 814 815 817 }
  # ROTW Minor Tech '36
  # Group D 1944 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1110  1120  1190  1200  1210  1220  1310  14000 14010 14020 2010  2020  2030  2040  2050  2070
			     2150  2160  2290  2300  2310  2320  2330  2330  2400  2410  2450  2460  2470  2510  2520  4010  4020  4030  4120  4130
			     4140  5010  5050  5080  5090  5100  5190  5200  6010  6020  6040  9010  9020
			   }
  SpyInfo                = { country = "ECU" NumberOfSpies = 5 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 6
    free_market       = 8
    freedom           = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 1
  }
  dormant_ministers      = { 40001 40043 40044 40002 40061 40062 40003 40170 40081 40004 40088 40005 40110 40006 40007 40129 40008 40010 40035 40168
			     40036 40045 40031 40039 40053 40169 40054 40063 40049 40057 40072 40171 40009 40040 40046 40058 40064 40172 40077 40078
			     40079
			   }
  headofstate            = { type = 9 id = 40047 }
  headofgovernment       = { type = 9 id = 40065 }
  foreignminister        = { type = 9 id = 40069 }
  armamentminister       = { type = 9 id = 40099 }
  ministerofsecurity     = { type = 9 id = 40101 }
  ministerofintelligence = { type = 9 id = 40124 }
  chiefofstaff           = { type = 9 id = 40136 }
  chiefofarmy            = { type = 9 id = 40148 }
  chiefofnavy            = { type = 9 id = 40157 }
  chiefofair             = { type = 9 id = 40162 }
  # Superior Firepower, Delay
  # Very rough estimation:
  landunit =
  { id       = { type = 29000 id = 50 }
    name     = "Ejercito de Ecuador"
    location = 818
    division =
    { id            = { type = 29000 id = 5000 }
      name          = "1a Brigada de Infantería"
      strength      = 35
      max_strength  = 35
      type          = infantry
      extra         = anti_air
      model         = 3
      brigade_model = 1
    }
  }
  landunit =
  { id       = { type = 10292 id = 1 }
    name     = "Ejercito de Ecuador"
    location = 815
    division =
    { id       = { type = 10292 id = 2 }
      name     = "1st Infantry"
      strength = 70
      type     = infantry
      model    = 3
    }
  }
}
