
##############################
# Country definition for FIN #
##############################

province = { id = 103 anti_air = 6 coastalfort = 1 } # Åland
province =
{ id         = 132
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 4 current_size = 4 }
}              # Petsamo
province =
{ id       = 137
  air_base = { size = 10 current_size = 10 }
}            # Oulu
province = { id = 138 ic = 6 } # Vaasa
province = { id = 140 ic = 6 } # Pori
province =
{ id          = 141
  coastalfort = 3
  anti_air    = 5
  ic          = 3
  naval_base  = { size = 5 current_size = 5 }
  air_base    = { size = 10 current_size = 10 }
}               # Turku
province =
{ id          = 142
  coastalfort = 4
  anti_air    = 12
  naval_base  = { size = 5 current_size = 5 }
  air_base    = { size = 10 current_size = 10 }
}               # Helsinki
province =
{ id       = 143
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}            # Tampere
province = { id = 145 landfort = 8 anti_air = 9 } # Viipuri
province = { id = 146 anti_air = 6 } # Sortavala

#####################
# Country main data #
#####################

country =
{ tag                    = FIN
  belligerence           = 3
  # Resource Reserves
  energy                 = 3000
  metal                  = 3500
  rare_materials         = 1000
  oil                    = 300
  supplies               = 3000
  capital                = 142
  manpower               = 35
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 1
    free_market       = 9
    freedom           = 7
    professional_army = 5
    defense_lobby     = 9
    interventionism   = 4
  }
  SpyInfo                = { country = "FIN" NumberOfSpies = 5 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 5 }
  #SpyInfo                = { country = "EST" NumberOfSpies = 6 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 12 }
  #SpyInfo                = { country = "LIT" NumberOfSpies = 5 }
  #SpyInfo                = { country = "LAT" NumberOfSpies = 5 }
  #SpyInfo                = { country = "GER" NumberOfSpies = 5 }
  #SpyInfo                = { country = "SWE" NumberOfSpies = 6 }
  #SpyInfo                = { country = "NOR" NumberOfSpies = 5 }
  #SpyInfo                = { country = "DEN" NumberOfSpies = 6 }
  nationalprovinces      = { 103 141 142 140 143 138 139 137 131 130 132 136 148 147 144 145 146 149 135 150 152 }
  ownedprovinces         = { 103 141 142 140 143 138 139 137 131 130 132 136 148 147 144 145 146 149 }
  controlledprovinces    = { 103 141 142 140 143 138 139 137 131 130 132 136 148 147 144 145 146 149 }
  # Western Minor Tech '36
  # Group C 1944 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1070  1110  1120  1150  1190  1200  1210  1220  1310  14000 14010 14020 2010  2020  2030  2040
			     2050  2060  2070  2080  2150  2160  2170  2180  2220  2230  2290  2300  2310  2320  2330  2330  2340  2400  2410  2450
			     2460  2470  2510  2520  2530  3010  3130  3400  3410  4010  4020  4030  4040  4050  4060  4120  4130  4140  4170  4190
			     4250  5010  5020  5050  5060  5070  5080  5090  5100  5110  5120  5190  5200  5210  5220  5310  5320  5350  5360  5470
			     6010  6030  6110  6120  6130  6160  8020  8040  8050  9010  9020  9030  9040
			   }
  diplomacy =
  { relation = { tag = AST value = -200 }
    # relation = { tag = AUS value = 55 }
    relation = { tag = BEL value = -200 }
    relation = { tag = BUL value = 200 }
    # relation = { tag = SLO value = 50 }
    # relation = { tag = DEN value = 75 }
    relation = { tag = ENG value = -200 }
    # relation = { tag = EST value = 120 }
    relation = { tag = FRA value = -200 }
    relation = { tag = GER value = 200 }
    # relation = { tag = GRE value = 40 }
    relation = { tag = HUN value = 200 }
    relation = { tag = IRE value = 50 }
    # relation = { tag = ITA value = 200 }
    relation = { tag = JAP value = 200 }
    # relation = { tag = LAT value = 90 }
    # relation = { tag = LIT value = 80 }
    # relation = { tag = LUX value = 100 }
    # relation = { tag = NOR value = 75 }
    relation = { tag = NZL value = -200 }
    # relation = { tag = POL value = 100 }
    relation = { tag = POR value = 50 }
    relation = { tag = ROM value = 200 }
    relation = { tag = SAF value = -200 }
    relation = { tag = SOV value = -200 }
    relation = { tag = SPA value = 35 }
    relation = { tag = SWE value = 150 }
    relation = { tag = USA value = -200 }
  }
  # relation = { tag = YUG value = 35 }
  dormant_ministers      = { 29001 29036 29002 29053 29003 29071 29072 29004 29092 29005 29007 29008 29043 29162 29054 29058 29160 29073 29068 29006
			     29059 29050 29074
			   }
  headofstate            = { type = 9 id = 29045 }
  headofgovernment       = { type = 9 id = 29064 }
  foreignminister        = { type = 9 id = 29158 }
  armamentminister       = { type = 9 id = 29098 }
  ministerofsecurity     = { type = 9 id = 29115 }
  ministerofintelligence = { type = 9 id = 29128 }
  chiefofstaff           = { type = 9 id = 29137 }
  chiefofarmy            = { type = 9 id = 29145 }
  chiefofnavy            = { type = 9 id = 29150 }
  chiefofair             = { type = 9 id = 29155 }
  # ###FINLAND OOB####
  # ######1944########
  # ##################
  landunit =
  { id       = { type = 10706 id = 1 }
    name     = "6th Army Corps"
    location = 145
    division =
    { experience = 70
      id         = { type = 10706 id = 2 }
      name       = "5. Divisioona"
      strength   = 75
      type       = infantry
      model      = 3
    }
    division =
    { experience = 70
      id         = { type = 10706 id = 3 }
      name       = "11. Divisioona"
      strength   = 75
      type       = infantry
      model      = 3
    }
    dig_in   = 75.000
  }
  landunit =
  { id       = { type = 10706 id = 4 }
    name     = "7th Army Corps"
    location = 149
    division =
    { experience = 70
      id         = { type = 10706 id = 5 }
      name       = "7. Divisioona"
      strength   = 75
      type       = infantry
      model      = 3
    }
    division =
    { experience = 70
      id         = { type = 10706 id = 6 }
      name       = "19. Divisioona"
      strength   = 75
      type       = infantry
      model      = 3
    }
    division =
    { experience    = 70
      id            = { type = 10706 id = 7 }
      name          = "1. Divisioona"
      strength      = 75
      type          = infantry
      model         = 3
      extra         = sp_artillery
      brigade_model = 0
    }
    dig_in   = 75.000
  }
  landunit =
  { id       = { type = 10706 id = 8 }
    name     = "2nd Army Corps"
    location = 142
    division =
    { experience = 70
      id         = { type = 10706 id = 9 }
      name       = "2. Divisioona"
      strength   = 75
      type       = infantry
      model      = 3
    }
    division =
    { experience = 70
      id         = { type = 10706 id = 10 }
      name       = "10. Divisioona"
      strength   = 75
      type       = infantry
      model      = 3
    }
    division =
    { experience = 70
      id         = { type = 10706 id = 11 }
      name       = "15. Divisioona"
      strength   = 75
      type       = infantry
      model      = 3
    }
    division =
    { experience = 70
      id         = { type = 10706 id = 12 }
      name       = "18. Divisioona"
      strength   = 75
      type       = infantry
      model      = 3
    }
    dig_in   = 75.000
  }
  landunit =
  { id       = { type = 10706 id = 13 }
    name     = "3rd Army Corps"
    location = 141
    division =
    { experience = 70
      id         = { type = 10706 id = 14 }
      name       = "3. Divisioona"
      strength   = 75
      type       = infantry
      model      = 3
    }
    division =
    { experience = 70
      id         = { type = 10706 id = 15 }
      name       = "6. Divisioona"
      strength   = 75
      type       = infantry
      model      = 3
    }
    division =
    { experience = 70
      id         = { type = 10706 id = 16 }
      name       = "14. Divisioona"
      strength   = 75
      type       = infantry
      model      = 3
    }
    dig_in   = 75.000
  }
  landunit =
  { id       = { type = 10706 id = 17 }
    name     = "4th Army Corps"
    location = 146
    division =
    { experience = 70
      id         = { type = 10706 id = 18 }
      name       = "4. Divisioona"
      strength   = 75
      type       = infantry
      model      = 3
    }
    division =
    { experience = 70
      id         = { type = 10706 id = 19 }
      name       = "8. Divisioona"
      strength   = 75
      type       = infantry
      model      = 3
    }
    division =
    { experience    = 70
      id            = { type = 10706 id = 20 }
      name          = "12. Divisioona"
      strength      = 75
      type          = infantry
      model         = 3
      extra         = sp_artillery
      brigade_model = 0
    }
    dig_in   = 75.000
  }
  landunit =
  { control  = GER
    location = 149
    id       = { type = 10602 id = 233 }
    name     = "XXXXVI. Geb. Korps"
    leader   = 269
    division =
    { experience = 60
      id         = { type = 10602 id = 234 }
      name       = "169. Infanterie-Division"
      strength   = 100
      type       = infantry
      model      = 4
    }
    dig_in   = 50.000
  }
  landunit =
  { control  = GER
    location = 136
    id       = { type = 10602 id = 231 }
    name     = "A.O.K. Finnland"
    leader   = 49
    division =
    { experience = 60
      id         = { type = 10602 id = 727 }
      name       = "A.O.K. Finnland"
      type       = hq
      model      = 2
      strength   = 100
    }
    division =
    { experience = 60
      id         = { type = 10602 id = 232 }
      name       = "163. Infanterie-Division"
      strength   = 70
      type       = infantry
      model      = 4
    }
    dig_in   = 50.000
  }
  landunit =
  { control  = GER
    location = 130
    id       = { type = 10602 id = 235 }
    name     = "Geb. Korps Norwegen"
    leader   = 150
    division =
    { experience = 60
      id         = { type = 10602 id = 728 }
      name       = "A.O.K. Norwegen"
      type       = hq
      model      = 2
      strength   = 100
    }
    division =
    { experience = 60
      id         = { type = 10602 id = 236 }
      name       = "6. Gebirgsjäger-Division"
      strength   = 100
      type       = bergsjaeger
      model      = 3
    }
    division =
    { experience = 60
      id         = { type = 10602 id = 237 }
      name       = "2. Gebirgsjäger-Division"
      strength   = 100
      type       = bergsjaeger
      model      = 3
    }
    dig_in   = 50.000
  }
  # ##############################
  navalunit =
  { id       = { type = 10706 id = 51 }
    name     = "Finnish Fleet"
    location = 142 # Helsinki
    base     = 142
    division =
    { experience = 70
      id         = { type = 10706 id = 52 }
      name       = "Väinämöinen"
      type       = heavy_cruiser
      model      = 2
    }
    division =
    { experience = 70
      id         = { type = 10706 id = 53 }
      name       = "1. Rannikkolaivue"
      type       = destroyer
      model      = 0
    }
    division =
    { experience = 70
      id         = { type = 10706 id = 54 }
      name       = "2. Rannikkolaivue"
      type       = destroyer
      model      = 1
    }
    division =
    { experience = 70
      id         = { type = 10706 id = 56 }
      name       = "1. Sukellusvenelaivue"
      type       = submarine
      model      = 1
    }
  }
  airunit =
  { id       = { type = 10020 id = 60 }
    name     = "Suomen Ilmavoimat"
    location = 142
    base     = 142
    division =
    { id         = { type = 10020 id = 61 }
      name       = "1/Suomen Ilmavoimat"
      strength   = 100
      experience = 80
      type       = interceptor
      model      = 4
    }
    division =
    { id         = { type = 10020 id = 62 }
      name       = "2/Suomen Ilmavoimat"
      strength   = 100
      experience = 80
      type       = interceptor
      model      = 4
    }
    division =
    { id         = { type = 10020 id = 63 }
      name       = "3/Suomen Ilmavoimat"
      strength   = 100
      experience = 80
      type       = interceptor
      model      = 4
    }
  }
}
