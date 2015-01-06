
##############################
# Country definition for NOR #
##############################

province =
{ id          = 107
  anti_air    = 2
  coastalfort = 3
  naval_base  = { size = 6 current_size = 6 }
  air_base    = { size = 6 current_size = 6 }
}               # Oslo
province =
{ id          = 110
  anti_air    = 2
  coastalfort = 3
  naval_base  = { size = 2 current_size = 2 }
  air_base    = { size = 2 current_size = 2 }
}               # Bergen
province =
{ id          = 118
  coastalfort = 2
  naval_base  = { size = 2 current_size = 2 }
  air_base    = { size = 2 current_size = 2 }
}               # Trondheim
province =
{ id         = 125
  anti_air   = 1
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 4 current_size = 4 }
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
  dissent                = 5
  SpyInfo                = { country = "NOR" NumberOfSpies = 5 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    freedom           = 7
    free_market       = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  nationalprovinces      = { 107 108 109 110 111 116 117 118 124 125 128 129 }
  ownedprovinces         = { 107 108 109 110 111 116 117 118 124 125 128 129 }
  controlledprovinces    = { 107 108 109 110 111 116 117 118 124 125 128 129 }
  # Western Minor Tech '36
  # Group D 1939 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1050  1110  1190  1200  1210  1220  1230  1310  1320  1330  1340  1350  14000 14010 14020 2010
			     2020  2030  2040  2050  2070  2150  2170  2180  2220  2230  2290  2300  2310  2320  2330  2340  2400  2410  2420  2450
			     2460  2470  2480  2510  2520  3010  3020  3030  3040  3070  3080  3090  3130  3140  3150  3190  3200  3250  3260  3320
			     3400  3410  3420  4010  4020  4030  4040  4050  4060  4070  4120  4130  4140  4170  4190  4220  4250  5010  5020  5030
			     5050  5060  5070  5080  5090  5100  5110  5120  5130  5190  5200  5310  5320  5330  5350  5360  6010  6020  6040  6050
			     6060  6070  8010  8020  8030  8040  8050  8070  8100  8120  8130  8200  8310  9010  9020  9030  9040  9050  9060  9070
			     9080  9090  9100  9110  9120  9130  9140  9150  9160  9170  9180  9190  9270  9280  9290  9350  9360  9370
			   }
  diplomacy =
  { relation = { tag = BEL value = 100 }
    relation = { tag = DEN value = 150 }
    relation = { tag = ENG value = 90 }
    relation = { tag = FRA value = 100 }
    relation = { tag = HOL value = 100 }
    relation = { tag = LUX value = 100 }
    relation = { tag = USA value = 75 }
  }
  headofstate            = { type = 9 id = 14001 }
  headofgovernment       = { type = 9 id = 14037 }
  foreignminister        = { type = 9 id = 14042 }
  armamentminister       = { type = 9 id = 14054 }
  ministerofsecurity     = { type = 9 id = 14067 }
  ministerofintelligence = { type = 9 id = 14072 }
  chiefofstaff           = { type = 9 id = 14076 }
  chiefofarmy            = { type = 9 id = 14081 }
  chiefofnavy            = { type = 9 id = 14084 }
  chiefofair             = { type = 9 id = 14090 }
  dormant_ministers      = { 14009 14010 14011 14012 14013 14015 14082 }
  landunit =
  { location = 107
    name     = "Den Norske Hær"
    id       = { type = 30871 id = 1 }
    division =
    { id       = { type = 30874 id = 1 }
      name     = "1. Infanteridivisjon"
      type     = infantry
      strength = 100
      model    = 4
    }
  }
  landunit =
  { location = 128
    name     = "6. Hærkorps"
    id       = { type = 30871 id = 2 }
    division =
    { id       = { type = 30874 id = 2 }
      name     = "2. Infanteridivisjon"
      type     = infantry
      strength = 50
      model    = 4
    }
  }
  landunit =
  { location = 118
    name     = "4. Hærkorps"
    id       = { type = 30871 id = 3 }
    division =
    { id       = { type = 30874 id = 3 }
      name     = "3. Infanteridivisjon"
      type     = infantry
      strength = 50
      model    = 4
    }
  }
  landunit =
  { location = 125
    name     = "7. Hærkorps"
    id       = { type = 30871 id = 4 }
    division =
    { id       = { type = 30874 id = 4 }
      name     = "4. Infanteridivisjon"
      type     = infantry
      strength = 50
      model    = 4
    }
  }
  navalunit =
  { id       = { type = 30873 id = 1 }
    name     = "Norwegian Navy"
    location = 107
    base     = 107
    division =
    { type  = battleship
      model = 0
      id    = { type = 30875 id = 1 }
      name  = "Harald Haarfagre"
    }
    division =
    { type  = battleship
      model = 0
      id    = { type = 30875 id = 2 }
      name  = "Tordenskjold"
    }
    division =
    { type  = submarine
      model = 1
      id    = { type = 30875 id = 3 }
      name  = "1. Undervannsbåteskadre"
    }
    division =
    { type  = destroyer
      model = 2
      id    = { type = 30875 id = 4 }
      name  = "1. Destroyereskadre"
    }
  }
  division_development =
  { type          = infantry
    model         = 4
    date          = { day = 0 month = november year = 1945 }
    cost          = 3
    days          = 95
    id            = { type = 30874 id = 5 }
    name          = "5. Infanteridivisjon"
    extra         = artillery
    brigade_model = 5
  }
  division_development =
  { type          = infantry
    model         = 4
    date          = { day = 19 month = december year = 1945 }
    cost          = 3
    days          = 95
    id            = { type = 30874 id = 6 }
    name          = "6. Infanteridivisjon"
    extra         = anti_tank
    brigade_model = 2
  }
}
