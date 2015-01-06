
##############################
# Country definition for CHL #
##############################

province =
{ id         = 840
  anti_air   = 1
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 1 current_size = 1 }
}              # Santiago

#####################
# Country main data #
#####################

country =
{ tag                    = CHL
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 840
  manpower               = 45
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
  nationalprovinces      = { 864 861 860 856 840 839 841 842 }
  ownedprovinces         = { 864 861 860 856 840 839 841 842 }
  controlledprovinces    = { 864 861 860 856 840 839 841 842 }
  techapps               = { 1010 1020 1190 1200 1110 2150 2010 2020 2290 2300 2310 2320  2330 2450 2510 3020 3260 3410 3010 3070 3130 3250 3400 4010 5010
			     5080 5090 5050 5110 5190 6010 8020 8040 8050
			   }
  SpyInfo                = { country = "CHL" NumberOfSpies = 3 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 8
    free_market       = 8
    freedom           = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 44031 }
  headofgovernment       = { type = 9 id = 44040 }
  foreignminister        = { type = 9 id = 44051 }
  armamentminister       = { type = 9 id = 44069 }
  ministerofsecurity     = { type = 9 id = 44091 }
  ministerofintelligence = { type = 9 id = 44106 }
  chiefofstaff           = { type = 9 id = 44121 }
  chiefofarmy            = { type = 9 id = 44130 }
  chiefofnavy            = { type = 9 id = 44138 }
  chiefofair             = { type = 9 id = 44146 }
  dormant_ministers      = { 44001 44043 44003 44004 44005 44006 44007 44008 44009 44010 44002 }
  landunit =
  { id       = { type = 30054 id = 1 }
    name     = "Ejercito de Chile"
    location = 840
    division =
    { id    = { type = 30054 id = 100 }
      name  = "1. Brigada de Infantería"
      type  = infantry
      extra = artillery
    }
    division =
    { id   = { type = 30054 id = 101 }
      name = "2. Brigada de Infantería"
      type = infantry
    }
    division =
    { id   = { type = 30054 id = 102 }
      name = "1. Brigada de Montaña de Chile"
      type = bergsjaeger
    }
    division =
    { id   = { type = 30054 id = 103 }
      name = "Brigada Caballería nro. 1"
      type = cavalry
    }
  }
  navalunit =
  { id       = { type = 30054 id = 6 }
    name     = "Armada de Chile"
    location = 840
    base     = 840
    division =
    { id    = { type = 30054 id = 7 }
      name  = "Flotilla des Destructores nro. 1"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 30054 id = 9 }
      name  = "ARC Almirante Latorre"
      type  = battleship
      model = 1
    }
    division =
    { id    = { type = 30054 id = 14 }
      name  = "ARC Almirante O'Higgins"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 30054 id = 10 }
      name  = "ARC Blanco Encalada"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 30054 id = 11 }
      name  = "ARC Chacabuco"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 30054 id = 12 }
      name  = "Flotilla des Submarinos nro. 1"
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 30054 id = 13 }
      name  = "Flotilla des Submarinos nro. 2"
      type  = submarine
      model = 1
    }
  }
}
