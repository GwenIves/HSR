
##############################
# Country definition for POR #
##############################

province = { id = 335 anti_air = 1 } # Oporto
province =
{ id         = 336
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}              # Lissabon
province =
{ id         = 1867
  anti_air   = 1
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 2 current_size = 2 }
}              # The Azores

#####################
# Country main data #
#####################

country =
{ tag                    = POR
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 100
  capital                = 336
  manpower               = 70
  transports             = 50
  escorts                = 7
  SpyInfo                = { country = "POR" NumberOfSpies = 5 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 5
    professional_army = 4
    defense_lobby     = 5
    interventionism   = 3
  }
  # Cabinda
  nationalprovinces      = { 335 336 337 344 345 1867 }
  ownedprovinces         = { 335 336 337 344 345 1867 1146 983 1090 1096 1097 1101 1100 1102 1103 1122 1123 1130 1131 1133 1138 1658 1316 1094 }
  # Cabinda
  controlledprovinces    = { 335 336 337 344 345 1867 1146 983 1090 1096 1097 1101 1100 1102 1103 1122 1123 1130 1131 1133 1138 1658 1316 1094 }
  # Azores
  # Group C 1941 techs
  # ######################
  techapps               = { 5070  3410  4010  4020  4030  4040  4120  4130  4140  2010  2020  2030  2040  2050  2150  2290  2300  2310  2320  2330
			     2400  2410  2450  2460  2470  2510  2520  1010  1020  1030  1190  1200  1210  1220  1110  2330  9010  9020  9030  5010
			     5020  5050  5080  5090  5100  5110  5190  5200  5470  6010  6020  6040  3010  3020  3070  3400  8040  8050  14000
			   }
  diplomacy =
  { relation = { tag = BEL value = -20 }
    relation = { tag = BRA value = 75 }
    relation = { tag = ENG value = 100 access = yes }
    relation = { tag = FIN value = 50 }
    relation = { tag = GER value = 75 }
    relation = { tag = ITA value = 65 }
    relation = { tag = SAF value = 125 access = yes }
    relation = { tag = SPA value = 70 }
  }
  headofstate            = { type = 9 id = 9001 }
  headofgovernment       = { type = 9 id = 9002 }
  foreignminister        = { type = 9 id = 9003 }
  armamentminister       = { type = 9 id = 9055 }
  ministerofsecurity     = { type = 9 id = 9005 }
  ministerofintelligence = { type = 9 id = 9068 }
  chiefofstaff           = { type = 9 id = 9007 }
  chiefofarmy            = { type = 9 id = 9072 }
  chiefofnavy            = { type = 9 id = 9075 }
  chiefofair             = { type = 9 id = 9077 }
  dormant_ministers      = { 9004 9049 9050 9051 9052 9053 9054 9060 9061 9062 }
  landunit =
  { id       = { type = 19600 id = 1000 }
    location = 336
    name     = "Exército do Portugal"
    division =
    { id       = { type = 19600 id = 1001 }
      name     = "1o Batalhão de Infantaria"
      type     = infantry
      extra    = artillery
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 19600 id = 1002 }
      name     = "2o Batalhão de Infantaria"
      type     = infantry
      strength = 100
      model    = 1
    }
  }
  navalunit =
  { id       = { type = 19600 id = 1003 }
    location = 336
    base     = 336
    name     = "Transporte de Navio do Portugal"
    division =
    { id   = { type = 19600 id = 1004 }
      name = "1o Flotilha de Navio de Transporte"
      type = transport
    }
    division =
    { id   = { type = 19600 id = 1006 }
      name = "2o Flotilha de Navio de Transporte"
      type = transport
    }
    division =
    { id    = { type = 19600 id = 1007 }
      name  = "Douro Flotilha"
      type  = destroyer
      model = 1
    }
  }
  navalunit =
  { id       = { type = 19600 id = 9302 }
    name     = "Marinha do Portugal"
    location = 336
    base     = 336
    division =
    { id       = { type = 19600 id = 9303 }
      name     = "Viana do Castello Flotilha"
      type     = destroyer
      model    = 0
      strength = 100
    }
    division =
    { id       = { type = 19600 id = 9304 }
      name     = "1o Flotilha de Submarino"
      type     = submarine
      model    = 1
      strength = 100
    }
  }
  airunit =
  { id       = { type = 19600 id = 9300 }
    name     = "Aéreo do Portugal"
    location = 336 # Lissabon
    base     = 336
    division =
    { id       = { type = 19600 id = 9301 }
      name     = "1o Avião de Bombardeiro Tático"
      type     = tactical_bomber
      strength = 100
      model    = 0
    }
  }
}
