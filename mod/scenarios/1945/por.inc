
##############################
# Country definition for POR #
##############################

province = { id = 335 anti_air = 1 } # Oporto
province =
{ id         = 336
  anti_air   = 2
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 3 current_size = 3 }
}              # Lissabon
province = { id = 1100 oilpool = 100 supplypool = 500 } # Nova Lisboa
province =
{ id         = 1138
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 1 current_size = 1 }
}              # Vila Cabral

#####################
# Country main data #
#####################

country =
{ tag                    = POR
  # Resource Reserves
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  capital                = 336
  manpower               = 70
  transports             = 50
  escorts                = 7
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
  #SpyInfo                = { country = "ENG" NumberOfSpies = 5 }
  #SpyInfo                = { country = "FRA" NumberOfSpies = 5 }
  #SpyInfo                = { country = "BEL" NumberOfSpies = 5 }
  #SpyInfo                = { country = "HOL" NumberOfSpies = 5 }
  #SpyInfo                = { country = "TUR" NumberOfSpies = 5 }
  #SpyInfo                = { country = "SPA" NumberOfSpies = 8 }
  #SpyInfo                = { country = "BRA" NumberOfSpies = 5 }
  SpyInfo                = { country = "POR" NumberOfSpies = 5 }
  # Cabinda
  nationalprovinces      = { 335 336 337 344 345 1867 }
  ownedprovinces         = { 335 336 337 344 345 1867 1146 983 1090 1096 1097 1101 1100 1102 1103 1122 1123 1130 1131 1133 1138 1658 1316 1094 }
  # Cabinda
  controlledprovinces    = { 335 336 337 344 345 1867 1146 983 1090 1096 1097 1101 1100 1102 1103 1122 1123 1130 1131 1133 1138 1658 1316 1094 }
  # Azores
  # Western Minor Tech '36
  # Group C 1944 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1070  1110  1120  1150  1190  1200  1210  1220  1310  14000 14010 14020 2010  2020  2030  2040
			     2050  2060  2070  2080  2150  2160  2170  2180  2220  2230  2290  2300  2310  2320  2330  2330  2340  2400  2410  2450
			     2460  2470  2510  2520  2530  3010  3020  3070  3400  4010  4020  4030  4040  4050  4060  4120  4130  4140  4170  4190
			     4250  5010  5020  5050  5060  5070  5080  5090  5100  5110  5120  5190  5200  5210  5220  5310  5320  5350  5360  6010
			     6020  6040  6050  6060  6070  8040  8050  9010  9020  9030  9040
			   }
  diplomacy =
  { relation = { tag = BEL value = -20 }
    relation = { tag = BRA value = 75 }
    relation = { tag = ENG value = 100 access = yes }
    relation = { tag = FIN value = 50 }
    # relation = { tag = ITA value = 65 }
    relation = { tag = SAF value = 125 access = yes }
    relation = { tag = USA access = yes }
  }
  dormant_ministers      = { 9004 9049 9050 9051 9052 9053 9054 9055 9060 9061 9062 9041 9042 9005 9006 9067 9007 9008 9072 9009 9010 }
  headofstate            = { type = 9 id = 9001 }
  headofgovernment       = { type = 9 id = 9002 }
  foreignminister        = { type = 9 id = 9047 }
  armamentminister       = { type = 9 id = 9058 }
  ministerofsecurity     = { type = 9 id = 9066 }
  ministerofintelligence = { type = 9 id = 9069 }
  chiefofstaff           = { type = 9 id = 9071 }
  chiefofarmy            = { type = 9 id = 9074 }
  chiefofnavy            = { type = 9 id = 9076 }
  chiefofair             = { type = 9 id = 9077 }
  landunit =
  { id       = { type = 10975 id = 1000 }
    location = 336
    name     = "Portuguese Army"
    division =
    { id           = { type = 10975 id = 1001 }
      name         = "1a Divisão de Infantaria"
      type         = infantry
      model        = 3
      strength     = 100
      organisation = 30
    }
    division =
    { id           = { type = 10975 id = 1002 }
      name         = "2a Divisão de Infantaria"
      type         = infantry
      model        = 3
      strength     = 100
      organisation = 30
    }
    division =
    { id           = { type = 10975 id = 1003 }
      name         = "3a Divisão de Infantaria"
      type         = infantry
      model        = 3
      strength     = 100
      organisation = 30
    }
  }
  navalunit =
  { id       = { type = 10975 id = 1004 }
    name     = "Marinha do Portugal"
    location = 336 # Lissabon
    base     = 336
    division =
    { id    = { type = 10975 id = 1005 }
      name  = "Douro Flotilha"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 10975 id = 1006 }
      name  = "Viana do Castello Flotilha"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 10975 id = 1007 }
      name  = "1o Flotilha de Submarino"
      type  = submarine
      model = 1
    }
    division =
    { id   = { type = 10975 id = 1008 }
      name = "1o Flotilha de Navio de Transporte"
      type = transport
    }
    division =
    { id   = { type = 10975 id = 1009 }
      name = "2o Flotilha de Navio de Transporte"
      type = transport
    }
    division =
    { id   = { type = 10975 id = 1010 }
      name = "3o Flotilha de Navio de Transporte"
      type = transport
    }
  }
  airunit =
  { id       = { type = 14000 id = 9300 }
    name     = "Portuguese Airforce"
    location = 336 # Lissabon
    base     = 336
    division =
    { id       = { type = 14000 id = 9301 }
      name     = "Tactical Air Wing 1"
      type     = tactical_bomber
      strength = 100
      model    = 2
    }
  }
}
