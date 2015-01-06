
##############################
# Country definition for ECU #
##############################

province =
{ id         = 815
  anti_air   = 1
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 4 current_size = 4 }
}              # Quito

#####################
# Country main data #
#####################

country =
{ tag                    = ECU
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 100
  capital                = 815
  manpower               = 8
  SpyInfo                = { country = "ECU" NumberOfSpies = 5 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 3
    free_market       = 8
    freedom           = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 1
  }
  nationalprovinces      = { 814 815 817 818 }
  ownedprovinces         = { 814 815 817 818 }
  controlledprovinces    = { 814 815 817 818 }
  # Group D 1941 techs
  # ######################
  techapps               = { 4010  4020  4030  4120  4130  2010  2020  2030  2040  2050  2150  2290  2300  2310  2320  1010  1020  1030  1190  1200
			     1210  1110  2330  2400  2450  2460  2470  2510  9010  5010  5050  5080  5090  5100  5190  6010  6020  14000
			   }
  diplomacy =
  { relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = -20 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 20 }
    relation = { tag = PAR value = 25 }
    relation = { tag = PRU value = -50 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 20 }
  }
  headofstate            = { type = 9 id = 40040 }
  headofgovernment       = { type = 9 id = 40058 }
  foreignminister        = { type = 9 id = 40077 }
  armamentminister       = { type = 9 id = 40094 }
  ministerofsecurity     = { type = 9 id = 40106 }
  ministerofintelligence = { type = 9 id = 40121 }
  chiefofstaff           = { type = 9 id = 40135 }
  chiefofarmy            = { type = 9 id = 40165 }
  chiefofnavy            = { type = 9 id = 40153 }
  chiefofair             = { type = 9 id = 40162 }
  dormant_ministers      = { 40001 40043 40044 40002 40061 40062 40003 40170 40081 40004 40088 40005 40110 40006 40007 40129 40008 40010 40035 40168
			     40036 40045 40031 40039 40053 40169 40054 40063 40049 40057 40072 40171 40009
			   }
  landunit =
  { id       = { type = 29000 id = 50 }
    name     = "Ejercito de Ecuador"
    location = 815
    division =
    { id       = { type = 29000 id = 5000 }
      name     = "1a Brigada de Infantería"
      strength = 100
      type     = infantry
      model    = 0
    }
  }
}
