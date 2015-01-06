
##############################
# Country definition for FIN #
##############################

province = { id = 103 coastalfort = 1 } # Åland
province =
{ id       = 137
  air_base = { size = 10 current_size = 10 }
}            # Oulu
province = { id = 138 ic = 1 } # Vaasa
province = { id = 140 ic = 1 } # Pori
province =
{ id         = 141
  ic         = 1
  anti_air   = 2
  naval_base = { size = 5 current_size = 5 }
  air_base   = { size = 10 current_size = 10 }
}              # Turku
province =
{ id          = 142
  coastalfort = 1
  anti_air    = 3
  naval_base  = { size = 5 current_size = 5 }
  air_base    = { size = 10 current_size = 10 }
}               # Helsinki
province =
{ id       = 143
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}            # Tampere

#####################
# Country main data #
#####################

country =
{ tag                    = FIN
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 100
  manpower               = 27
  capital                = 142
  belligerence           = 5
  SpyInfo                = { country = "FIN" NumberOfSpies = 7 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 1
    free_market       = 9
    freedom           = 7
    professional_army = 5
    defense_lobby     = 9
    interventionism   = 4
  }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 5 }
  #SpyInfo                = { country = "EST" NumberOfSpies = 5 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 10 }
  #SpyInfo                = { country = "LIT" NumberOfSpies = 5 }
  #SpyInfo                = { country = "LAT" NumberOfSpies = 5 }
  #SpyInfo                = { country = "GER" NumberOfSpies = 5 }
  #SpyInfo                = { country = "SWE" NumberOfSpies = 5 }
  #SpyInfo                = { country = "NOR" NumberOfSpies = 5 }
  #SpyInfo                = { country = "DEN" NumberOfSpies = 5 }
  nationalprovinces      = { 103 130 131 132 136 137 138 139 140 141 142 143 144 145 146 147 148 149 135 150 152 }
  ownedprovinces         = { 103 130 131 132 136 137 138 139 140 141 142 143 144 147 148 149 }
  controlledprovinces    = { 103 130 131 132 136 137 138 139 140 141 142 143 144 147 148 149 }
  # Group C 1941 techs
  # ######################
  techapps               = { 5070  5320  1120  4010  4020  4030  4040  4120  4130  4140  2010  2020  2030  2040  2050  2150  2290  2300  2310  2320
			     2330  2400  2410  2450  2460  2470  2510  2520  1010  1020  1030  1190  1200  1210  1220  1110  2330  9010  9020  9030
			     5010  5020  5050  5080  5090  5100  5110  5190  5200  5470  5350  5360  6010  6030  6110  6120  6160  3010  3020  3070
			     3080  3130  3190  3400  3410  4190  8020  8040  8050  1310  1320  9040  14000 14010 14020
			   }
  diplomacy =
  { relation = { tag = AST value = 65 }
    relation = { tag = BEL value = 100 }
    relation = { tag = BUL value = 100 }
    relation = { tag = SLO value = 50 }
    relation = { tag = ENG value = 85 }
    relation = { tag = FRA value = 85 }
    relation = { tag = GER value = 125 }
    relation = { tag = HOL value = 100 }
    relation = { tag = HUN value = 125 }
    relation = { tag = IRE value = 50 }
    relation = { tag = ITA value = 100 }
    relation = { tag = JAP value = 50 }
    relation = { tag = NZL value = 50 }
    relation = { tag = POR value = 50 }
    relation = { tag = ROM value = 100 }
    relation = { tag = SAF value = 50 }
    relation = { tag = SOV value = -100 }
    relation = { tag = SPA value = 35 }
    relation = { tag = SWE value = 150 }
    relation = { tag = USA value = 90 }
  }
  headofstate            = { type = 9 id = 29044 }
  headofgovernment       = { type = 9 id = 29059 }
  foreignminister        = { type = 9 id = 29074 }
  armamentminister       = { type = 9 id = 29094 }
  ministerofsecurity     = { type = 9 id = 29107 }
  ministerofintelligence = { type = 9 id = 29123 }
  chiefofstaff           = { type = 9 id = 29137 }
  chiefofarmy            = { type = 9 id = 29145 }
  chiefofnavy            = { type = 9 id = 29148 }
  chiefofair             = { type = 9 id = 29153 }
  dormant_ministers      = { 29001 29036 29002 29053 29003 29071 29072 29004 29092 29005 29007 29008 29043 29162 29054 29058 29160 29073 29068 29006
			   }
  # ###FINLAND OOB####
  # ######1941########
  # ##################
  landunit =
  { location = 142
    id       = { type = 10020 id = 1100 }
    name     = "Southern Front HQ"
    division =
    { id       = { type = 10020 id = 1101 }
      name     = "Southern Front HQ"
      type     = hq
      model    = 1
      strength = 100
      extra    = engineer # defence
    }
  }
  landunit =
  { location = 147
    id       = { type = 10020 id = 1102 }
    name     = "Northern Front HQ"
    division =
    { id       = { type = 10020 id = 1103 }
      name     = "Northern Front HQ"
      type     = hq
      model    = 0
      strength = 100
      extra    = engineer # defence
    }
  }
  landunit =
  { id       = { type = 10020 id = 1 }
    name     = "VI Armeijakunta"
    location = 149
    division =
    { id       = { type = 10020 id = 2 }
      name     = "5. Divisioona"
      strength = 75
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 10020 id = 3 }
      name     = "11. Divisioona"
      strength = 75
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 10020 id = 4 }
      name     = "Ryhmä Oinonen"
      strength = 75
      type     = bergsjaeger
      model    = 1
    }
  }
  landunit =
  { id       = { type = 10020 id = 5 }
    name     = "VII Armeijakunta"
    location = 149
    division =
    { id       = { type = 10020 id = 6 }
      name     = "7. Divisioona"
      strength = 100
      type     = infantry
      model    = 2
      extra    = anti_tank
    }
    division =
    { id       = { type = 10020 id = 7 }
      name     = "19. Divisioona"
      strength = 75
      type     = infantry
      model    = 2
    }
  }
  landunit =
  { id       = { type = 10020 id = 8 }
    name     = "II Armeijakunta"
    location = 144
    leader   = 9700
    division =
    { id       = { type = 10020 id = 9 }
      name     = "2. Divisioona"
      strength = 75
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 10020 id = 10 }
      name     = "10. Divisioona"
      strength = 75
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 10020 id = 11 }
      name     = "15. Divisioona"
      strength = 75
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 10020 id = 12 }
      name     = "18. Divisioona"
      strength = 75
      type     = infantry
      model    = 2
    }
  }
  landunit =
  { id       = { type = 10020 id = 13 }
    name     = "III Armeijakunta"
    location = 136
    division =
    { id       = { type = 10020 id = 14 }
      name     = "3. Divisioona"
      strength = 75
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 10020 id = 15 }
      name     = "Divisioona J"
      strength = 75
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 10020 id = 16 }
      name     = "6. Divisioona"
      strength = 75
      type     = infantry
      model    = 2
    }
  }
  landunit =
  { id       = { type = 10020 id = 17 }
    name     = "IV Armeijakunta"
    location = 142
    division =
    { id            = { type = 10020 id = 18 }
      name          = "4. Divisioona"
      strength      = 75
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 0
    }
    division =
    { id       = { type = 10020 id = 19 }
      name     = "8. Divisioona"
      strength = 75
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 10020 id = 20 }
      name     = "12. Divisioona"
      strength = 75
      type     = infantry
      model    = 2
    }
  }
  landunit =
  { id       = { type = 10020 id = 21 }
    name     = "17. Divisioona"
    location = 141
    division =
    { id            = { type = 10020 id = 22 }
      name          = "17. Divisioona"
      strength      = 75
      organisation  = 1
      type          = infantry
      model         = 2
      extra         = anti_air
      brigade_model = 1
    }
  }
  landunit =
  { id       = { type = 10020 id = 23 }
    name     = "14. Divisioona"
    location = 149
    division =
    { id       = { type = 10020 id = 24 }
      name     = "14. Divisioona"
      strength = 75
      type     = infantry
      model    = 2
    }
  }
  landunit =
  { id       = { type = 10020 id = 25 }
    name     = "Päämajan reservit"
    location = 143
    division =
    { id       = { type = 10020 id = 26 }
      name     = "1. Divisioona"
      strength = 75
      type     = infantry
      model    = 2
    }
  }
  # Temporary addition until Bergs AK added here
  landunit =
  { id       = { type = 10020 id = 35 }
    name     = "Erillinen Osasto P"
    location = 132
    division =
    { id       = { type = 10020 id = 36 }
      name     = "Petsamon Erillisosasto"
      strength = 75
      type     = bergsjaeger
      model    = 1
    }
  }
  navalunit =
  { id       = { type = 10020 id = 124 }
    name     = "Suomen Laivasto"
    location = 142
    base     = 142
    division =
    { id    = { type = 10020 id = 125 }
      name  = "Ilmarinen"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 10020 id = 126 }
      name  = "Väinämöinen"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 10020 id = 127 }
      name  = "1. Sukellusvenelaivue"
      type  = submarine
      model = 0
    }
  }
  airunit =
  { id       = { type = 10020 id = 33 }
    name     = "Suomen Ilmavoimat"
    location = 142
    base     = 142
    division =
    { id       = { type = 10020 id = 34 }
      name     = "Suomen Ilmavoimat"
      strength = 75
      type     = interceptor
      model    = 2
    }
  }
}
