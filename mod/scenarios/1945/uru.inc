
##############################
# Country definition for URU #
##############################

province =
{ id         = 849
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
}              # Montevideo

#####################
# Country main data #
#####################

country =
{ tag                    = URU
  # Resource Reserves
  oil                    = 500
  metal                  = 500
  energy                 = 500
  rare_materials         = 500
  supplies               = 200
  capital                = 849
  manpower               = 20
  SpyInfo                = { country = "URU" NumberOfSpies = 5 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 8
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
  # ROTW Minor Tech '36
  # Group D 1944 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1110  1120  1190  1200  1210  1220  1310  14000 14010 2010  2020  2030  2040  2050  2070  2150
			     2160  2290  2300  2310  2320  2330  2330  2400  2410  2450  2460  2470  2510  2520  4010  4020  4030  4120  4130  4140
			     5010  5050  5080  5090  5100  5190  5200  6010  6020  6040  9010  9020
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
  dormant_ministers      = { 41001 41002 41003 41004 41050 41005 41060 41006 41068 41007 41008 41009 41010 41031 41032 41037 41038 41043 41044 41051
			     41052 41061 41062 41069 41070 41071 41077 41081 41082 41088 41093 41094
			   }
  headofstate            = { type = 9 id = 41033 }
  headofgovernment       = { type = 9 id = 41039 }
  foreignminister        = { type = 9 id = 41045 }
  armamentminister       = { type = 9 id = 41057 }
  ministerofsecurity     = { type = 9 id = 41065 }
  ministerofintelligence = { type = 9 id = 41072 }
  chiefofstaff           = { type = 9 id = 41078 }
  chiefofarmy            = { type = 9 id = 41083 }
  chiefofnavy            = { type = 9 id = 41089 }
  chiefofair             = { type = 9 id = 41095 }
  # Superior Firepower, Delay
  landunit =
  { id       = { type = 10368 id = 1 }
    name     = "Army of Uruguay"
    location = 849
    division =
    { id            = { type = 10368 id = 2 }
      name          = "1a División de Infantería"
      strength      = 100
      type          = infantry
      model         = 3
      extra         = artillery
      brigade_model = 2
    }
  }
}
