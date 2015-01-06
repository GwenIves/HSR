
##############################
# Country definition for SWE #
##############################

province = { id = 93  coastalfort = 1 } # Malmö
province =
{ id          = 95
  ic          = 1
  anti_air    = 2
  naval_base  = { size = 7 current_size = 7 }
  air_base    = { size = 4 current_size = 4 }
  coastalfort = 3
}               # Karlskrona
province =
{ id          = 98
  anti_air    = 2
  naval_base  = { size = 7 current_size = 7 }
  air_base    = { size = 4 current_size = 4 }
  coastalfort = 3
}               # Göteborg
province = { id = 99 landfort = 1 } # Skövde
province =
{ id          = 101
  anti_air    = 2
  naval_base  = { size = 7 current_size = 7 }
  air_base    = { size = 4 current_size = 4 }
  coastalfort = 3
}               # Stockholm
province = { id = 102 ic = 2 } # Uppsala
province =
{ id          = 127
  anti_air    = 2
  naval_base  = { size = 3 current_size = 3 }
  air_base    = { size = 4 current_size = 4 }
  landfort    = 3
  ##
}               # Luleå

#####################
# Country main data #
#####################

country =
{ tag                    = SWE
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  manpower               = 85
  capital                = 101
  # ################################################
  transports             = 12
  escorts                = 6
  diplomacy =
  { relation = { tag = BEL value = 100 }
    relation = { tag = DEN value = 75 }
    relation = { tag = ENG value = 80 }
    relation = { tag = FIN value = 150 }
    relation = { tag = FRA value = 80 }
    relation = { tag = GER value = 50 }
    relation = { tag = HOL value = 100 }
    relation = { tag = LUX value = 100 }
    relation = { tag = NOR value = 150 }
    relation = { tag = PER value = 50 }
    relation = { tag = USA value = 75 }
  }
  nationalprovinces      = { 112 126 127 123 122 121 120 119 115 113 114 106 105 104 102 101 100 99 98 97 93 95 96 }
  ownedprovinces         = { 112 126 127 123 122 121 120 119 115 113 114 106 105 104 102 101 100 99 98 97 93 95 96 }
  controlledprovinces    = { 112 126 127 123 122 121 120 119 115 113 114 106 105 104 102 101 100 99 98 97 93 95 96 }
  # Group C 1939 techs
  # ######################
  techapps               = { 4170  3190  3130  4010  4020  4120  4130  2150  2010  2020  2030  2040  2290  2300  2310  2320  2330  2400  2450  2460
			     2510  1010  1020  1190  1200  1110  9010  9020  5010  5020  5030  5050  5060  5080  5090  5100  5190  5200  5470  6010
			     6020  3010  3020  3070  3080  3250  3400  3410  8010  8020  8040  8050  14000 14010
			   }
  SpyInfo                = { country = "SWE" NumberOfSpies = 6 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    freedom           = 7
    free_market       = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 7001 }
  headofgovernment       = { type = 9 id = 7033 }
  foreignminister        = { type = 9 id = 7038 }
  armamentminister       = { type = 9 id = 7050 }
  ministerofsecurity     = { type = 9 id = 7061 }
  ministerofintelligence = { type = 9 id = 7006 }
  chiefofstaff           = { type = 9 id = 7072 }
  chiefofarmy            = { type = 9 id = 7079 }
  chiefofnavy            = { type = 9 id = 7086 }
  chiefofair             = { type = 9 id = 7010 }
  dormant_ministers      = { 7002 7003 7004 7005 7007 7009 }
  # Early Medicine
  # ##################################
  # ##SWEDISH ARMY OOB39##############
  # ##################################
  landunit =
  { location = 101
    id       = { type = 30027 id = 1 }
    name     = "1a Armékåren"
    division =
    { id           = { type = 30027 id = 2 }
      name         = "I. Arméfördelningen"
      type         = infantry
      strength     = 100
      organisation = 50
    }
  }
  landunit =
  { location = 105
    id       = { type = 30027 id = 9 }
    name     = "5a Armékåren"
    division =
    { id           = { type = 30027 id = 10 }
      name         = "VI. Arméfördelningen"
      type         = infantry
      strength     = 100
      organisation = 50
    }
  }
  landunit =
  { location = 96
    id       = { type = 30027 id = 11 }
    name     = "Gotlandsgruppen"
    division =
    { id           = { type = 30027 id = 12 }
      name         = "Gotlandsgruppen"
      type         = infantry
      strength     = 50
      organisation = 50
    }
  }
  landunit =
  { location = 104
    id       = { type = 30027 id = 15 }
    name     = "Kavalleribrigaden"
    division =
    { id           = { type = 30027 id = 16 }
      name         = "Kavalleribrigaden"
      type         = cavalry
      strength     = 60
      organisation = 80
    }
  }
  # ##################################
  # ##SWEDISH NAVY OOB39##############
  # ##################################
  navalunit =
  { location = 101 # Berga/Muskö
    base     = 101
    name     = "Kustflottan"
    id       = { type = 30027 id = 116 }
    division =
    { id    = { type = 30027 id = 117 }
      name  = "HMS Sverige"
      type  = battlecruiser
      model = 0
    }
    division =
    { id    = { type = 30027 id = 118 }
      name  = "HMS Drottning Victoria"
      type  = battlecruiser
      model = 0
    }
    division =
    { id    = { type = 30027 id = 119 }
      name  = "HMS Gustav V"
      type  = battlecruiser
      model = 0
    }
    division =
    { id    = { type = 30027 id = 121 }
      name  = "HMS Clas Fleming"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 30027 id = 122 }
      name  = "HMS Gotland"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 30027 id = 123 }
      name  = "1. Jagarflottiljen"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 30027 id = 125 }
      name  = "1. Trängflottiljen"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { location = 101 # Berga/Muskö
    base     = 101
    name     = "Ålandshavseskader"
    id       = { type = 30027 id = 126 }
    division =
    { id    = { type = 30027 id = 127 }
      name  = "HMS Äran"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 30027 id = 128 }
      name  = "HMS Tapperheten"
      type  = heavy_cruiser
      model = 0
    }
  }
  navalunit =
  { location = 95 # Karlskronabasen
    base     = 95
    name     = "Karlskrona Avdelningen"
    id       = { type = 30027 id = 130 }
    division =
    { id    = { type = 30027 id = 131 }
      name  = "HMS Oscar II"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 30027 id = 133 }
      name  = "1. Ubåtsflottiljen"
      type  = submarine
      model = 0
    }
  }
  navalunit =
  { location = 98 # Göteborgsbasen
    base     = 98
    name     = "Göteborgseskadern"
    id       = { type = 30027 id = 134 }
    division =
    { id    = { type = 30027 id = 135 }
      name  = "HMS Manligheten"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 30027 id = 137 }
      name  = "2. Ubåtsflottiljen"
      type  = submarine
      model = 1
    }
  }
  # ##################################
  # ##SWEDISH AIR FORCE OOB39#########
  # ##################################
  airunit =
  { location = 101
    base     = 101
    id       = { type = 30027 id = 17 }
    name     = "1a Flygkåren"
    division =
    { id       = { type = 30027 id = 18 }
      name     = "11./12./13. Bombskvadron"
      type     = tactical_bomber
      model    = 1
      strength = 36
    }
  }
  airunit =
  { location = 101
    base     = 101
    id       = { type = 30027 id = 21 }
    name     = "2a Flygkåren"
    division =
    { id       = { type = 30027 id = 22 }
      name     = "41./42./43. Bombskvadron"
      type     = cas
      model    = 0
      strength = 36
    }
  }
  airunit =
  { location = 101
    base     = 101
    id       = { type = 30027 id = 25 }
    name     = "3a Flygkåren"
    division =
    { id       = { type = 30027 id = 26 }
      name     = "81./82./83. Jaktskvadron"
      type     = interceptor
      model    = 0
      strength = 36
    }
  }
  division_development =
  { name  = "HMS Clas Flemming"
    type  = light_cruiser
    model = 1
    cost  = 1
    id    = { type = 30027 id = 152 }
    date  = { year = 1940 month = july day = 1 }
  }
  division_development =
  { name  = "HMS Fylgia"
    type  = heavy_cruiser
    model = 1
    cost  = 3
    id    = { type = 30027 id = 153 }
    date  = { year = 1941 month = april day = 1 }
  }
  division_development =
  { name  = "6. Jagarflottiljen"
    type  = destroyer
    model = 1
    cost  = 1
    id    = { type = 30027 id = 154 }
    date  = { year = 1941 month = january day = 1 }
  }
  division_development =
  { name  = "5. Ubåtsflottiljen"
    type  = submarine
    model = 1
    cost  = 1
    id    = { type = 30027 id = 155 }
    date  = { year = 1940 month = june day = 1 }
  }
}
