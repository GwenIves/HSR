
##############################
# Country definition for SWE #
##############################

province =
{ id          = 93
  naval_base  = { size = 6 current_size = 6 }
  air_base    = { size = 6 current_size = 6 }

  coastalfort = 1
  anti_air    = 1
}               # Malmö
province = { id = 95  coastalfort = 3 ic = 4 } # Karlskrona
province =
{ id         = 96
  naval_base = { size = 1 current_size = 1 }
}              # Gotland
province = { id = 98  coastalfort = 3 anti_air = 2 ic = 3 } # Göteborg
province = { id = 99 landfort = 1  } # Skövde
province =
{ id          = 101
  naval_base  = { size = 8 current_size = 8 }
  air_base    = { size = 8 current_size = 8 }

  coastalfort = 3
  anti_air    = 3
}               # Stockholm
province = { id = 102 ic = 2 } # Uppsala
province =
{ id          = 127
  air_base    = { size = 2 current_size = 2 }
  landfort    = 3

}               # Luleå

#####################
# Country main data #
#####################

country =
{ tag                    = SWE
  # Resource Reserves
  energy                 = 3500
  metal                  = 3500
  rare_materials         = 2500
  oil                    = 3500
  supplies               = 3500
  manpower               = 85
  capital                = 101
  escorts                = 30
  transports             = 55
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
  # Group C 1944 techs
  # ######################
  techapps               = { 4010  4020  4030  4040  4050  4060  4120  4130  4140  4170  4280  4190  4250  2010  2020  2030  2040  2050  2060  2070
			     2080  2150  2160  2170  2180  2220  2230  2290  2300  2310  2320  2330  2340  2400  2410  2450  2460  2470  2510  2520
			     2530  1010  1020  1030  1040  1190  1200  1210  1220  1110  1120  1070  1150  2330  1310  9010  9020  9030  9040  5010
			     5020  5050  5060  5070  5080  5090  5100  5110  5120  5190  5200  5210  5220  5310  5350  5360  5470  6010  6020  6040
			     6050  6060  6070  3010  3020  3070  3080  3250  3400  3410  8010  8020  8040  8050  5320  14000 14010
			   }
  diplomacy =
  { relation = { tag = BEL value = 100 }
    # relation = { tag = DEN value = 75 }
    relation = { tag = ENG value = 80 }
    relation = { tag = FIN value = 150 }
    relation = { tag = FRA value = 80 }
    relation = { tag = GER value = 50 }
    # relation = { tag = LUX value = 100 }
    # relation = { tag = NOR value = 150 }
    relation = { tag = PER value = 50 }
    relation = { tag = USA value = 75 }
  }
  dormant_ministers      = { 7002 7003 7004 7005 7007 7008 7009 7038 7042 7047 7048 7049 7059 }
  headofstate            = { type = 9 id = 7031 }
  headofgovernment       = { type = 9 id = 7033 }
  foreignminister        = { type = 9 id = 7039 }
  armamentminister       = { type = 9 id = 7055 }
  ministerofsecurity     = { type = 9 id = 7058 }
  ministerofintelligence = { type = 9 id = 7006 }
  chiefofstaff           = { type = 9 id = 7076 }
  chiefofarmy            = { type = 9 id = 7081 }
  chiefofnavy            = { type = 9 id = 7086 }
  chiefofair             = { type = 9 id = 7092 }
  landunit =
  { location = 102
    id       = { type = 12160 id = 1 }
    name     = "I. Arméfördelningen"
    division =
    { experience = 10
      id         = { type = 12160 id = 2 }
      name       = "I. Arméfördelningen"
      type       = infantry
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 102
    id       = { type = 12160 id = 61 }
    name     = "II. Arméfördelningen"
    division =
    { experience = 10
      id         = { type = 12160 id = 62 }
      name       = "II. Arméfördelningen"
      type       = infantry
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 98
    id       = { type = 12160 id = 3 }
    name     = "III. Arméfördelningen"
    division =
    { experience = 10
      id         = { type = 12160 id = 4 }
      name       = "III. Arméfördelningen"
      type       = infantry
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 95
    id       = { type = 12160 id = 5 }
    name     = "IV. Arméfördelningen"
    division =
    { experience = 10
      id         = { type = 12160 id = 6 }
      name       = "IV. Arméfördelningen"
      type       = infantry
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 122
    id       = { type = 12160 id = 7 }
    name     = "V. Arméfördelningen"
    division =
    { experience = 10
      id         = { type = 12160 id = 8 }
      name       = "V. Arméfördelningen"
      type       = infantry
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 114
    id       = { type = 12160 id = 9 }
    name     = "VI. Arméfördelningen"
    division =
    { experience = 10
      id         = { type = 12160 id = 10 }
      name       = "VI. Arméfördelningen"
      type       = infantry
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 96
    id       = { type = 12160 id = 11 }
    name     = "Gotlands Trupper"
    division =
    { experience = 10
      id         = { type = 12160 id = 12 }
      name       = "Gotlands Trupper"
      type       = infantry
      model      = 2
      strength   = 50
    }
  }
  landunit =
  { location = 127
    id       = { type = 12160 id = 13 }
    name     = "Bodens Garnison"
    division =
    { experience = 10
      id         = { type = 12160 id = 14 }
      name       = "Bodens Garnison"
      type       = infantry
      model      = 2
      strength   = 40
    }
  }
  landunit =
  { location = 93
    id       = { type = 12160 id = 15 }
    name     = "Kavalleribrigaden"
    division =
    { experience = 10
      id         = { type = 12160 id = 16 }
      name       = "Kavalleribrigaden"
      type       = cavalry
      model      = 2
      strength   = 60
    }
  }
  # ############################
  # ## SWEDEN NAVAL OOB 1944 ###
  # ############################
  navalunit =
  { id       = { type = 12160 id = 30 }
    name     = "Kungliga Svenska Flottan"
    location = 101
    base     = 101
    division =
    { experience = 10
      id         = { type = 12160 id = 31 }
      name       = "HMS Sverige"
      type       = battleship
      model      = 0
    }
    division =
    { experience = 10
      id         = { type = 12160 id = 32 }
      name       = "HMS Drottning Victoria"
      type       = battleship
      model      = 0
    }
    division =
    { experience = 10
      id         = { type = 12160 id = 33 }
      name       = "HMS Gustav V"
      type       = battleship
      model      = 0
    }
    division =
    { experience = 10
      id         = { type = 12160 id = 34 }
      name       = "HMS Manligheten"
      type       = light_cruiser
      model      = 1
      maxspeed   = 24
    }
    division =
    { experience = 10
      id         = { type = 12160 id = 35 }
      name       = "HMS Tapperheten"
      type       = light_cruiser
      model      = 1
      maxspeed   = 24
    }
    division =
    { experience = 10
      id         = { type = 12160 id = 36 }
      name       = "HMS Oscar II"
      type       = light_cruiser
      model      = 1
      maxspeed   = 24
    }
    division =
    { experience = 10
      id         = { type = 12160 id = 37 }
      name       = "HMS Fylgia"
      type       = light_cruiser
      model      = 1
      seadefence = 6
    }
    division =
    { experience = 10
      id         = { type = 12160 id = 38 }
      name       = "HMS Clas Fleming"
      type       = light_cruiser
      model      = 1
    }
    division =
    { experience = 10
      id         = { type = 12160 id = 39 }
      name       = "HMS Gotland"
      type       = light_cruiser
      model      = 0
      seaattack  = 7
      airattack  = 3
      airdefence = 5
    }
    division =
    { experience = 10
      id         = { type = 12160 id = 40 }
      name       = "1. Jagarflottiljen"
      type       = destroyer
      model      = 0
    }
    division =
    { experience = 10
      id         = { type = 12160 id = 41 }
      name       = "2. Jagarflottiljen"
      type       = destroyer
      model      = 0
    }
    division =
    { experience = 10
      id         = { type = 12160 id = 42 }
      name       = "3. Jagarflottiljen"
      type       = destroyer
      model      = 0
    }
    division =
    { experience = 10
      id         = { type = 12160 id = 43 }
      name       = "4. Jagarflottiljen"
      type       = destroyer
      model      = 1
    }
    division =
    { experience = 10
      id         = { type = 12160 id = 44 }
      name       = "5. Jagarflottiljen"
      type       = destroyer
      model      = 1
    }
    division =
    { experience = 10
      id         = { type = 12160 id = 45 }
      name       = "6. Jagarflottiljen"
      type       = destroyer
      model      = 1
    }
    division =
    { experience = 10
      id         = { type = 12160 id = 46 }
      name       = "7. Jagarflottiljen"
      type       = destroyer
      model      = 2
    }
  }
  navalunit =
  { id       = { type = 12160 id = 47 }
    name     = "1. Ubåtsflottan"
    location = 101
    base     = 101
    division =
    { experience = 10
      id         = { type = 12160 id = 48 }
      name       = "1. Ubåtsflottiljen"
      type       = submarine
      model      = 0
    }
    division =
    { experience = 10
      id         = { type = 12160 id = 49 }
      name       = "2. Ubåtsflottiljen"
      type       = submarine
      model      = 0
    }
    division =
    { experience = 10
      id         = { type = 12160 id = 50 }
      name       = "3. Ubåtsflottiljen"
      type       = submarine
      model      = 0
    }
    division =
    { experience = 10
      id         = { type = 12160 id = 51 }
      name       = "4. Ubåtsflottiljen"
      type       = submarine
      model      = 1
    }
    division =
    { experience = 10
      id         = { type = 12160 id = 52 }
      name       = "5. Ubåtsflottiljen"
      type       = submarine
      model      = 1
    }
    division =
    { experience = 10
      id         = { type = 12160 id = 53 }
      name       = "6. Ubåtsflottiljen"
      type       = submarine
      model      = 1
    }
    division =
    { experience = 10
      id         = { type = 12160 id = 54 }
      name       = "7. Ubåtsflottiljen"
      type       = submarine
      model      = 1
    }
  }
  # ##################################
  # ##SWEDISH AIR FORCE OOB41#########
  # ##################################
  airunit =
  { location = 101
    base     = 101
    id       = { type = 12160 id = 17 }
    name     = "1. Flygflottiljen"
    division =
    { experience = 10
      id         = { type = 12160 id = 18 }
      name       = "11./12./13. Bombskvadron"
      type       = tactical_bomber
      strength   = 36
      model      = 1
    }
  }
  airunit =
  { location = 101
    base     = 101
    id       = { type = 12160 id = 19 }
    name     = "4. Flygflottiljen"
    division =
    { experience = 10
      id         = { type = 12160 id = 20 }
      name       = "41./42./43. Bombskvadron"
      type       = cas
      strength   = 36
      model      = 1
    }
  }
  airunit =
  { location = 101
    base     = 101
    id       = { type = 12160 id = 21 }
    name     = "8. Flygflottiljen"
    division =
    { experience = 10
      id         = { type = 12160 id = 22 }
      name       = "81./82./83. Jaktskvadron"
      type       = interceptor
      strength   = 36
      model      = 1
    }
  }
  airunit =
  { location = 101
    base     = 101
    id       = { type = 12160 id = 23 }
    name     = "6. Flygflottiljen"
    division =
    { experience = 10
      id         = { type = 12160 id = 24 }
      name       = "61./62./63. Bombskvadron"
      type       = cas
      strength   = 36
      model      = 1
    }
  }
  airunit =
  { location = 93
    base     = 93
    id       = { type = 12160 id = 25 }
    name     = "7. Flygflottiljen"
    division =
    { experience = 10
      id         = { type = 12160 id = 26 }
      name       = "71./72. Bombskvadron"
      type       = cas
      strength   = 12
      model      = 1
    }
  }
  airunit =
  { location = 93
    base     = 93
    id       = { type = 12160 id = 27 }
    name     = "9. Flygflottiljen"
    division =
    { experience = 10
      id         = { type = 12160 id = 28 }
      name       = "91./92./93. Jaktskvadron"
      type       = interceptor
      strength   = 33
      model      = 1
    }
  }
  airunit =
  { location = 93
    base     = 93
    id       = { type = 12160 id = 70 }
    name     = "10. Flygflottiljen"
    division =
    { experience = 10
      id         = { type = 12160 id = 71 }
      name       = "101./102./103. Jaktskvadron"
      type       = interceptor
      strength   = 36
      model      = 1
    }
  }
  airunit =
  { location = 93
    base     = 93
    id       = { type = 12160 id = 72 }
    name     = "11. Flygflottiljen"
    division =
    { experience = 10
      id         = { type = 12160 id = 73 }
      name       = "111./112./113. Bombskvadron"
      type       = tactical_bomber
      strength   = 18
      model      = 1
    }
  }
  # Warships Under Construction#
  division_development =
  { name  = "HMS Tre Kronor"
    type  = light_cruiser
    model = 2
    cost  = 4
    id    = { type = 12160 id = 100 }
    date  = { year = 1944 month = december day = 16 }
  }
}
