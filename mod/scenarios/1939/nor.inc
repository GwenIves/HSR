
##############################
# Country definition for NOR #
##############################

province =
{ id          = 107
  anti_air    = 2
  naval_base  = { size = 10 current_size = 10 }
  air_base    = { size = 4 current_size = 4 }

  coastalfort = 3
}               # Oslo
province =
{ id          = 110
  anti_air    = 2
  naval_base  = { size = 10 current_size = 10 }
  air_base    = { size = 5 current_size = 5 }

  coastalfort = 3
}               # Bergen
province = { id = 118  coastalfort = 2 } # Trondheim
province =
{ id         = 125
  anti_air   = 1
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
}              # Narvik

#####################
# Country main data #
#####################

country =
{ tag                    = NOR
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  manpower               = 32
  capital                = 107
  # Norwegian merchant marine is INSANE!
  transports             = 157
  escorts                = 5
  diplomacy =
  { relation = { tag = BEL value = 100 }
    relation = { tag = DEN value = 150 }
    relation = { tag = ENG value = 90 }
    relation = { tag = FIN value = 75 }
    relation = { tag = FRA value = 100 }
    relation = { tag = HOL value = 100 }
    relation = { tag = LUX value = 100 }
    relation = { tag = SWE value = 150 }
    relation = { tag = USA value = 75 }
  }
  nationalprovinces      = { 107 108 109 110 111 116 117 118 124 125 128 129 }
  ownedprovinces         = { 107 108 109 110 111 116 117 118 124 125 128 129 }
  controlledprovinces    = { 107 108 109 110 111 116 117 118 124 125 128 129 }
  # Western Minor Tech '36
  # Group D 1939 techs
  # ######################
  techapps               = { 2320  5070  3130  4010  4020  2150  2010  2020  2290  2300  2310  1010  1020  1190  1200  1110  2330  2400  2450  2460
			     2510  5010  5020  5030  5050  5080  5090  5100  5110  5190  5200  6010  3010  3070  3250  3400  3410  8020  8040  8050
			     4120  9010  5020  5110  5200  5470  6020  14000
			   }
  SpyInfo                = { country = "NOR" NumberOfSpies = 5 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 9
    freedom           = 7
    free_market       = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 14001 }
  headofgovernment       = { type = 9 id = 14002 }
  foreignminister        = { type = 9 id = 14003 }
  armamentminister       = { type = 9 id = 14004 }
  ministerofsecurity     = { type = 9 id = 14065 }
  ministerofintelligence = { type = 9 id = 14006 }
  chiefofstaff           = { type = 9 id = 14075 }
  chiefofarmy            = { type = 9 id = 14008 }
  chiefofnavy            = { type = 9 id = 14083 }
  chiefofair             = { type = 9 id = 14089 }
  dormant_ministers      = { 14009 14010 }
  # convoy = {
  # id = { type = 13100 id = 1936 }
  # transports = 43
  # escorts = 0
  # rare_materials = no
  # coal = no
  # steel = yes
  # oil = no
  # supplies = no
  # path = { 680 677 679 475 592 593 656 657 587 }
  # }
  # ###########################
  # ##NORWEGIAN ARMY OOB39#####
  # ###########################
  landunit =
  { location = 107
    id       = { type = 13019 id = 1 }
    name     = "1. Infanteridivisjon"
    leader   = 9602
    division =
    { id       = { type = 13019 id = 2 }
      name     = "1. Infanteridivisjon"
      type     = infantry
      strength = 60
    }
  }
  landunit =
  { location = 125
    id       = { type = 13019 id = 9 }
    name     = "5. Infanteridivisjon"
    leader   = 9606
    division =
    { id       = { type = 13019 id = 10 }
      name     = "5. Infanteridivisjon"
      type     = infantry
      strength = 60
    }
  }
  # ###########################
  # ##Norwegian Navy OOB39#####
  # ###########################
  navalunit =
  { location = 107
    base     = 107
    name     = "1. Kystvaktdistrikt"
    id       = { type = 30030 id = 20 }
    division =
    { id    = { type = 30030 id = 21 }
      name  = "1. Undervannsbåteskadre"
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 30030 id = 22 }
      name  = "2. Undervannsbåteskadre"
      type  = submarine
      model = 0
    }
  }
  navalunit =
  { location = 125
    base     = 125
    name     = "3. Kystvaktdistrikt"
    id       = { type = 30030 id = 25 }
    division =
    { id    = { type = 30030 id = 26 }
      name  = "KNM Norge"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 30030 id = 30 }
      name  = "KNM Eidsvold"
      type  = heavy_cruiser
      model = 0
    }
  }
  navalunit =
  { name     = "2. Sjoeforsvarsdistrikt"
    id       = { type = 30030 id = 118 }
    location = 125
    base     = 125
    division =
    { id       = { type = 30030 id = 119 }
      name     = "1. Destroyereskadre"
      type     = destroyer
      model    = 0
      strength = 100
    }
  }
  # ###########################
  # #Norwegian Air Force OOB39#
  # ###########################
  airunit =
  { location = 107
    base     = 107
    id       = { type = 30030 id = 27 }
    name     = "Royal Air Brigade"
    division =
    { id       = { type = 30030 id = 28 }
      name     = "1. Fornebu Jagerdivisjon"
      type     = interceptor
      model    = 0
      strength = 11
    }
  }
}
