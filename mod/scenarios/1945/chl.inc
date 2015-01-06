
##############################
# Country definition for CHL #
##############################

province =
{ id         = 840
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
}              # Santiago

#####################
# Country main data #
#####################

country =
{ tag                    = CHL
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  capital                = 840
  manpower               = 45
  SpyInfo                = { country = "CHL" NumberOfSpies = 5 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 7
    free_market       = 8
    freedom           = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  nationalprovinces      = { 864 861 860 856 840 839 841 842 }
  ownedprovinces         = { 864 861 860 856 840 839 841 842 }
  controlledprovinces    = { 864 861 860 856 840 839 841 842 }
  # ROTW Minor Tech '36
  # Group D 1944 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1110  1120  1190  1200  1210  1220  1310  14000 14010 2010  2020  2030  2040  2050  2070  2150
			     2160  2290  2300  2310  2320  2330  2330  2400  2410  2450  2460  2470  2510  2520  3010  3070  3130  3250  3400  4010
			     4020  4030  4120  4130  4140  5010  5050  5080  5090  5100  5190  5200  6010  6020  6040  8010  8020  8040  8050  9010
			     9020
			   }
  diplomacy =
  { relation = { tag = ARG value = -20 }
    relation = { tag = BOL value = -50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = COL value = 15 }
    relation = { tag = ECU value = 20 }
    relation = { tag = PAR value = 35 }
    relation = { tag = PRU value = -25 }
    relation = { tag = URU value = 20 }
    relation = { tag = USA value = 100 }
    relation = { tag = VEN value = 20 }
  }
  dormant_ministers      = { 44001 44043 44003 44004 44005 44006 44007 44008 44009 44010 44037 44002 44065 44051 44031 44154 44157 44036 44040 44044
			     44158 44046 44052 44071 44069 44101 44108
			   }
  headofstate            = { type = 9 id = 44032 }
  headofgovernment       = { type = 9 id = 44041 }
  foreignminister        = { type = 9 id = 44058 }
  armamentminister       = { type = 9 id = 44074 }
  ministerofsecurity     = { type = 9 id = 44094 }
  ministerofintelligence = { type = 9 id = 44110 }
  chiefofstaff           = { type = 9 id = 44122 }
  chiefofarmy            = { type = 9 id = 44131 }
  chiefofnavy            = { type = 9 id = 44139 }
  chiefofair             = { type = 9 id = 44146 }
  # ## OOB
  landunit =
  { id       = { type = 10372 id = 1 }
    name     = "1st Army"
    location = 840
    division =
    { id            = { type = 10372 id = 2 }
      name          = "1. División de Infantería"
      strength      = 100
      type          = infantry
      model         = 3
      extra         = artillery
      brigade_model = 3
    }
    division =
    { id       = { type = 10372 id = 3 }
      name     = "2. División de Infantería"
      strength = 100
      type     = infantry
      model    = 3
    }
    division =
    { id       = { type = 10372 id = 4 }
      name     = "1. División de Montaña de Chile"
      strength = 100
      type     = bergsjaeger
      model    = 1
    }
    division =
    { id       = { type = 10372 id = 5 }
      name     = "División Caballería nro. 1"
      strength = 100
      type     = cavalry
      model    = 1
    }
  }
  navalunit =
  { id       = { type = 10372 id = 6 }
    name     = "Chilean Navy"
    location = 840
    base     = 840
    # These have five DDs each:
    division =
    { id   = { type = 10372 id = 7 }
      name = "1a Destructor División"
      type = destroyer
    }
    division =
    { id   = { type = 10372 id = 8 }
      name = "2a Destructor División"
      type = destroyer
    }
    # Built 1915
    division =
    { id   = { type = 10372 id = 9 }
      name = "BACH Almirante Latorre"
      type = battleship
    }
    # Gunboat built 1930
    division =
    { id   = { type = 10372 id = 10 }
      name = "BACH Araucano"
      type = light_cruiser
    }
  }
}
