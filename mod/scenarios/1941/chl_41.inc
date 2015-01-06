
##############################
# Country definition for CHL #
##############################

province =
{ id         = 840
  anti_air   = 2
  naval_base = { size = 8 current_size = 8 }
  air_base   = { size = 4 current_size = 4 }
}              # Santiago

#####################
# Country main data #
#####################

country =
{ tag                    = CHL
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 100
  capital                = 840
  manpower               = 15
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
  # Group D 1941 techs
  # ######################
  techapps               = { 3020  3260  3410  4010  4020  4030  4120  4130  2010  2020  2030  2040  2050  2150  2290  2300  2310  2320  1010  1020
			     1030  1190  1200  1210  1110  2330  2400  2450  2460  2470  2510  9010  5010  5050  5080  5090  5100  5190  5470  6010
			     6020  3010  3070  3130  3250  3400  8020  8040  8050  14000
			   }
  diplomacy =
  { relation = { tag = ARG value = -20 }
    relation = { tag = BOL value = -50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = COL value = 15 }
    relation = { tag = ECU value = 20 }
    relation = { tag = GER value = 50 }
    relation = { tag = ITA value = 30 }
    relation = { tag = JAP value = 20 }
    relation = { tag = PAR value = 35 }
    relation = { tag = PRU value = -25 }
    relation = { tag = URU value = 20 }
    relation = { tag = USA value = 100 }
    relation = { tag = VEN value = 20 }
  }
  headofstate            = { type = 9 id = 44031 }
  headofgovernment       = { type = 9 id = 44040 }
  foreignminister        = { type = 9 id = 44055 }
  armamentminister       = { type = 9 id = 44072 }
  ministerofsecurity     = { type = 9 id = 44092 }
  ministerofintelligence = { type = 9 id = 44108 }
  chiefofstaff           = { type = 9 id = 44121 }
  chiefofarmy            = { type = 9 id = 44130 }
  chiefofnavy            = { type = 9 id = 44138 }
  chiefofair             = { type = 9 id = 44146 }
  dormant_ministers      = { 44001 44043 44003 44004 44005 44006 44007 44008 44009 44010 44037 44002 44065 44051 }
  landunit =
  { id       = { type = 12500 id = 1 }
    name     = "Ejercito de Chile"
    location = 840
    division =
    { id       = { type = 12500 id = 2 }
      name     = "1. División de Infantería"
      strength = 100
      type     = infantry
      extra    = artillery
      model    = 0
    }
    division =
    { id       = { type = 12500 id = 3 }
      name     = "2. División de Infantería"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 12500 id = 4 }
      name     = "1. División de Montaña de Chile"
      strength = 100
      type     = bergsjaeger
      model    = 0
    }
    division =
    { id       = { type = 12500 id = 5 }
      name     = "División Caballería nro. 1"
      strength = 100
      type     = cavalry
      extra    = artillery
      model    = 0
    }
  }
  navalunit =
  { id       = { type = 12500 id = 6 }
    name     = "Armada de Chile"
    location = 840
    base     = 840
    division =
    { id    = { type = 12500 id = 7 }
      name  = "Flotilla des Destructores nro. 1"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 12500 id = 9 }
      name  = "BACH Almirante Latorre"
      type  = battleship
      model = 1
    }
    division =
    { id    = { type = 12500 id = 14 }
      name  = "BACH Almirante O'Higgins"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 12500 id = 10 }
      name  = "BACH Blanco Encalada"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 12500 id = 11 }
      name  = "BACH Chacabuco"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 12500 id = 12 }
      name  = "Flotilla des Submarinos nro. 1"
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 12500 id = 13 }
      name  = "Flotilla des Submarinos nro. 2"
      type  = submarine
      model = 1
    }
  }
}
