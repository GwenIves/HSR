
##############################
# Country definition for SWE #
##############################

province = { id = 93  coastalfort = 1 anti_air = 1 } # Malmö
province =
{ id          = 95
  ic          = 2
  anti_air    = 2
  naval_base  = { size = 6 current_size = 6 }
  coastalfort = 3
}               # Karlskrona
province =
{ id          = 98
  ic          = 2
  anti_air    = 2
  air_base    = { size = 4 current_size = 4 }
  naval_base  = { size = 5 current_size = 5 }
  coastalfort = 3
}               # Göteborg
province = { id = 99 landfort = 1 } # Skövde
province =
{ id          = 101
  anti_air    = 2
  air_base    = { size = 4 current_size = 4 }
  naval_base  = { size = 10 current_size = 10 }
  coastalfort = 3
}               # Stockholm
province = { id = 102 ic = 2 } # Uppsala
province =
{ id          = 127
  anti_air    = 2
  air_base    = { size = 2 current_size = 2 }
  naval_base  = { size = 2 current_size = 2 }
  landfort    = 3

}               # Luleå

#####################
# Country main data #
#####################

country =
{ tag                    = SWE
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 100
  transports             = 20
  manpower               = 85
  capital                = 101
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
  nationalprovinces      = { 112 126 127 123 122 121 120 119 115 113 114 106 105 104 102 101 100 99 98 97 93 95 96 }
  ownedprovinces         = { 112 126 127 123 122 121 120 119 115 113 114 106 105 104 102 101 100 99 98 97 93 95 96 }
  controlledprovinces    = { 112 126 127 123 122 121 120 119 115 113 114 106 105 104 102 101 100 99 98 97 93 95 96 }
  # Group C 1941 techs
  # ######################
  techapps               = { 5070  3190  3130  4010  4020  4030  4040  4120  4130  4140  2010  2020  2030  2040  2050  2150  2290  2300  2310  2320
			     2330  2400  2410  2450  2460  2470  2510  2520  1010  1020  1030  1190  1200  1210  1220  1110  2330  9010  9020  9030
			     5010  5020  5050  5080  5090  5100  5110  5190  5200  5470  5480  14000 14010 6010  6020  6040  3010  3020  3070  3080
			     3250  3400  3410  8010  8020  8040  8050
			   }
  diplomacy =
  { relation = { tag = BEL value = 100 }
    # relation = { tag = DEN value = 75 }
    relation = { tag = ENG value = 80 }
    relation = { tag = FIN value = 150 }
    relation = { tag = FRA value = 80 }
    relation = { tag = GER value = 50 }
    relation = { tag = HOL value = 100 }
    # relation = { tag = LUX value = 100 }
    # relation = { tag = NOR value = 150 }
    relation = { tag = PER value = 50 }
    relation = { tag = USA value = 75 }
  }
  headofstate            = { type = 9 id = 7031 }
  headofgovernment       = { type = 9 id = 7033 }
  foreignminister        = { type = 9 id = 7039 }
  armamentminister       = { type = 9 id = 7054 }
  ministerofsecurity     = { type = 9 id = 7058 }
  ministerofintelligence = { type = 9 id = 7006 }
  chiefofstaff           = { type = 9 id = 7072 }
  chiefofarmy            = { type = 9 id = 7008 }
  chiefofnavy            = { type = 9 id = 7086 }
  chiefofair             = { type = 9 id = 7010 }
  dormant_ministers      = { 7002 7003 7004 7005 7007 7009 7038 7042 7047 7048 }
  landunit =
  { location = 101
    id       = { type = 13001 id = 1 }
    name     = "I. Arméfördelningen"
    division =
    { id       = { type = 13001 id = 2 }
      name     = "I Fördelningen"
      type     = infantry
      strength = 100
      model    = 1
    }
  }
  landunit =
  { location = 98
    id       = { type = 13001 id = 61 }
    name     = "II. Arméfördelningen"
    division =
    { id       = { type = 13001 id = 62 }
      name     = "II Fördelningen"
      type     = infantry
      strength = 100
      model    = 1
    }
  }
  landunit =
  { location = 106
    id       = { type = 13001 id = 3 }
    name     = "III. Arméfördelningen"
    division =
    { id       = { type = 13001 id = 4 }
      name     = "III Fördelningen"
      type     = infantry
      strength = 100
      model    = 1
    }
  }
  landunit =
  { location = 112
    id       = { type = 13001 id = 5 }
    name     = "IV. Arméfördelningen"
    division =
    { id       = { type = 13001 id = 6 }
      name     = "IV Fördelningen"
      type     = infantry
      strength = 100
      model    = 1
    }
  }
  landunit =
  { location = 121
    id       = { type = 13001 id = 7 }
    name     = "V. Arméfördelningen"
    division =
    { id       = { type = 13001 id = 8 }
      name     = "V Fördelningen"
      type     = infantry
      strength = 100
      model    = 1
    }
  }
  landunit =
  { location = 105
    id       = { type = 13001 id = 9 }
    name     = "VI. Arméfördelningen"
    division =
    { id       = { type = 13001 id = 10 }
      name     = "XI Fördelningen"
      type     = infantry
      strength = 100
      model    = 1
    }
  }
  landunit =
  { location = 96
    id       = { type = 13001 id = 11 }
    name     = "Gotlands Trupper"
    division =
    { id       = { type = 13001 id = 12 }
      name     = "XII Fördelningen"
      type     = infantry
      strength = 50
      model    = 1
    }
  }
  landunit =
  { location = 127
    id       = { type = 13001 id = 13 }
    name     = "Bodens Garnison"
    division =
    { id       = { type = 13001 id = 14 }
      name     = "XIII Fördelningen"
      type     = infantry
      strength = 40
      model    = 1
    }
  }
  landunit =
  { location = 93
    id       = { type = 13001 id = 15 }
    name     = "Svenska Kavalleribrigaden"
    division =
    { id       = { type = 13001 id = 16 }
      name     = "Svenska Kavalleribrigaden"
      type     = cavalry
      strength = 60
      model    = 1
    }
  }
  navalunit =
  { location = 101 # Berga/Muskö
    base     = 101
    name     = "Kustflottan"
    id       = { type = 13001 id = 116 }
    division =
    { id    = { type = 13001 id = 117 }
      name  = "HMS Sverige"
      type  = battlecruiser
      model = 0
    }
    division =
    { id    = { type = 13001 id = 118 }
      name  = "HMS Drottning Victoria"
      type  = battlecruiser
      model = 0
    }
    division =
    { id    = { type = 13001 id = 119 }
      name  = "HMS Gustav V"
      type  = battlecruiser
      model = 0
    }
    division =
    { id    = { type = 13001 id = 121 }
      name  = "HMS Clas Fleming"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 13001 id = 122 }
      name  = "HMS Gotland"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 13001 id = 123 }
      name  = "1. Jagarflottiljen"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 13001 id = 140 }
      name  = "2. Jagarflottiljen"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 13001 id = 125 }
      name  = "1. Trängflottiljen"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { location = 101 # Berga/Muskö
    base     = 101
    name     = "Ålandshavseskader"
    id       = { type = 13001 id = 126 }
    division =
    { id    = { type = 13001 id = 127 }
      name  = "HMS Äran"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 13001 id = 128 }
      name  = "HMS Tapperheten"
      type  = heavy_cruiser
      model = 0
    }
  }
  navalunit =
  { location = 95 # Karlskronabasen
    base     = 95
    name     = "Karlskrona Avdelningen"
    id       = { type = 13001 id = 130 }
    division =
    { id    = { type = 13001 id = 131 }
      name  = "HMS Oscar II"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 13001 id = 133 }
      name  = "1. Ubåtsflottiljen"
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 13001 id = 139 }
      name  = "3. Ubåtsflottiljen"
      type  = submarine
      model = 1
    }
  }
  navalunit =
  { location = 98 # Göteborgsbasen
    base     = 98
    name     = "Göteborgseskadern"
    id       = { type = 13001 id = 134 }
    division =
    { id    = { type = 13001 id = 135 }
      name  = "HMS Manligheten"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 13001 id = 137 }
      name  = "2. Ubåtsflottiljen"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 13001 id = 138 }
      name  = "4. Ubåtsflottiljen"
      type  = submarine
      model = 1
    }
  }
  airunit =
  { id       = { type = 13001 id = 17 }
    name     = "1. Flygflottiljen"
    location = 101
    base     = 101
    division =
    { id       = { type = 13001 id = 18 }
      name     = "1. Taktiska Bombflyggruppen"
      type     = tactical_bomber
      model    = 1
      strength = 36
    }
  }
  airunit =
  { id       = { type = 13001 id = 21 }
    name     = "8. Flygflottiljen"
    location = 101
    base     = 101
    division =
    { id       = { type = 13001 id = 22 }
      name     = "1. Jaktflyggruppen"
      type     = interceptor
      strength = 36
      model    = 2
    }
    division =
    { id       = { type = 13001 id = 24 }
      name     = "6. Dykbombflyggruppen"
      type     = tactical_bomber
      model    = 1
      strength = 36
    }
  }
  airunit =
  { id       = { type = 13001 id = 27 }
    name     = "9. Flygflottiljen"
    location = 127
    base     = 127
    division =
    { id       = { type = 13001 id = 28 }
      name     = "2. Jaktflyggruppen"
      type     = interceptor
      model    = 2
      strength = 33
    }
  }
  airunit =
  { id       = { type = 13001 id = 50 }
    name     = "10. Flygflottiljen"
    location = 101
    base     = 101
    division =
    { id       = { type = 13001 id = 60 }
      name     = "3. Jaktflyggruppen"
      type     = interceptor
      strength = 36
      model    = 2
    }
  }
}
