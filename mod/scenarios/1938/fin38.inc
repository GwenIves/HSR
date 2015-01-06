
##############################
# Country definition for FIN #
##############################

province =
{ id       = 137
  air_base = { size = 2 current_size = 2 }
}            # Oulu
province = { id = 140 ic = 1 } # Pori
province =
{ id          = 141
  coastalfort = 1
  anti_air    = 1
  naval_base  = { size = 5 current_size = 5 }
  air_base    = { size = 2 current_size = 2 }
}               # Turku
province =
{ id          = 142
  coastalfort = 1
  anti_air    = 1
  naval_base  = { size = 5 current_size = 5 }
  air_base    = { size = 2 current_size = 2 }
}               # Helsinki
province =
{ id       = 143
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
}            # Tampere
province = { id = 145 landfort = 4 anti_air = 1 } # Viipuri

#####################
# Country main data #
#####################

country =
{ tag                    = FIN
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 142
  manpower               = 35
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 5
    free_market       = 9
    freedom           = 7
    professional_army = 5
    defense_lobby     = 9
    interventionism   = 4
  }
  SpyInfo                = { country = "FIN" NumberOfSpies = 6 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  #SpyInfo                = { country = "EST" NumberOfSpies = 6 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 9 }
  #SpyInfo                = { country = "LIT" NumberOfSpies = 3 }
  #SpyInfo                = { country = "LAT" NumberOfSpies = 3 }
  #SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  #SpyInfo                = { country = "SWE" NumberOfSpies = 6 }
  #SpyInfo                = { country = "NOR" NumberOfSpies = 3 }
  #SpyInfo                = { country = "DEN" NumberOfSpies = 6 }
  nationalprovinces      = { 103 141 142 140 143 138 139 137 131 130 132 136 148 147 144 145 146 149 135 150 152 }
  ownedprovinces         = { 103 141 142 140 143 138 139 137 131 130 132 136 148 147 144 145 146 149 }
  controlledprovinces    = { 103 141 142 140 143 138 139 137 131 130 132 136 148 147 144 145 146 149 }
  techapps               = { 1010  1020  1030  1190  1200  1110  1120  2010  2020  2030  2040  2150  2290  2300  2310  2320  2330  2400  2450  2460
			     2510  3010  3130  3400  3410  4010  4020  4120  4130  5010  5050  5080  5090  5100  5190  5200  6010  6030  6120  8020
			     8040  8050  9010  9020  9030  14000 14010
			   }
  diplomacy =
  { relation = { tag = AST value = 65 }
    relation = { tag = BEL value = 100 }
    relation = { tag = BUL value = 35 }
    relation = { tag = SLO value = 50 }
    relation = { tag = DEN value = 75 }
    relation = { tag = ENG value = 85 }
    relation = { tag = EST value = 120 }
    relation = { tag = FRA value = 85 }
    relation = { tag = GER value = 80 }
    relation = { tag = GRE value = 40 }
    relation = { tag = HOL value = 100 }
    relation = { tag = HUN value = 75 }
    relation = { tag = IRE value = 50 }
    relation = { tag = ITA value = 50 }
    relation = { tag = JAP value = 20 }
    relation = { tag = LAT value = 90 }
    relation = { tag = LIT value = 80 }
    relation = { tag = LUX value = 100 }
    relation = { tag = NOR value = 75 }
    relation = { tag = NZL value = 50 }
    relation = { tag = POL value = 100 }
    relation = { tag = POR value = 50 }
    relation = { tag = ROM value = 40 }
    relation = { tag = SAF value = 50 }
    relation = { tag = SOV value = -150 }
    relation = { tag = SPA value = 35 }
    relation = { tag = SWE value = 150 }
    relation = { tag = USA value = 90 }
    relation = { tag = YUG value = 35 }
  }
  headofstate            = { type = 9 id = 29043 }
  headofgovernment       = { type = 9 id = 29054 }
  foreignminister        = { type = 9 id = 29071 }
  armamentminister       = { type = 9 id = 29086 }
  ministerofsecurity     = { type = 9 id = 29106 }
  ministerofintelligence = { type = 9 id = 29125 }
  chiefofstaff           = { type = 9 id = 29007 }
  chiefofarmy            = { type = 9 id = 29144 }
  chiefofnavy            = { type = 9 id = 29009 }
  chiefofair             = { type = 9 id = 29010 }
  dormant_ministers      = { 29001 29036 29002 29053 29003 29071 29072 29004 29092 29005 29007 29008 }
  landunit =
  { location = 141 # province id.
    name     = "I Armeijakunta"
    id       = { type = 30038 id = 1 }
    division =
    { experience    = 35
      id            = { type = 30038 id = 2 }
      type          = infantry
      name          = "1. Divisioona"
      model         = 2
      extra         = artillery
      brigade_model = 2
    }
  }
  landunit =
  { location = 145 # province id.
    name     = "II Armeijakunta"
    id       = { type = 30038 id = 3 }
    division =
    { experience = 35
      id         = { type = 30038 id = 4 }
      type       = infantry
      model      = 2
      name       = "4. Divisioona"
      extra      = anti_air
    }
    division =
    { experience    = 35
      id            = { type = 30038 id = 5 }
      type          = infantry
      model         = 2
      name          = "5. Divisioona"
      extra         = artillery
      brigade_model = 2
    }
    division =
    { experience    = 35
      id            = { type = 30038 id = 6 }
      type          = infantry
      model         = 2
      name          = "11. Divisioona"
      extra         = artillery
      brigade_model = 2
    }
    division =
    { experience = 35
      id         = { type = 30038 id = 7 }
      type       = infantry
      model      = 2
      extra      = anti_tank
      name       = "21. Divisioona"
    }
  }
  landunit =
  { location = 144 # province id.
    leader   = 9703 # id from leader database
    name     = "III Armeijakunta"
    id       = { type = 30038 id = 8 }
    division =
    { experience    = 35
      id            = { type = 30038 id = 9 }
      type          = infantry
      model         = 2
      name          = "8. Divisioona"
      extra         = artillery
      brigade_model = 2
    }
    division =
    { experience    = 35
      id            = { type = 30038 id = 10 }
      type          = infantry
      model         = 2
      name          = "10. Divisioona"
      extra         = artillery
      brigade_model = 2
    }
  }
  landunit =
  { location = 146 # province id.
    leader   = 9704 # id from leader database
    name     = "IV Armeijakunta"
    id       = { type = 30038 id = 11 }
    division =
    { experience = 35
      id         = { type = 30038 id = 12 }
      type       = infantry
      model      = 2
      extra      = anti_air
      name       = "12. Divisioona"
    }
    division =
    { experience    = 35
      id            = { type = 30038 id = 13 }
      type          = infantry
      model         = 2
      name          = "13. Divisioona"
      extra         = artillery
      brigade_model = 2
    }
  }
  landunit =
  { location = 142 # province id.
    leader   = 9700 # id from leader database
    name     = "V Armeijakunta"
    id       = { type = 30038 id = 14 }
    division =
    { experience = 35
      id         = { type = 30038 id = 15 }
      type       = infantry
      model      = 2
      extra      = anti_air
      name       = "6. Divisioona"
    }
    division =
    { experience    = 35
      id            = { type = 30038 id = 16 }
      type          = infantry
      model         = 2
      name          = "9. Divisioona"
      extra         = artillery
      brigade_model = 2
    }
    division =
    { experience = 35
      id         = { type = 30038 id = 23 }
      type       = infantry
      model      = 2
      extra      = anti_air
      name       = "22 Divisioona"
    }
  }
  landunit =
  { location = 149 # province id.
    leader   = 9705 # id from leader database
    name     = "Pohjois-Karjalan Ryhmä"
    id       = { type = 30038 id = 17 }
    division =
    { experience    = 35
      id            = { type = 30038 id = 18 }
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 2
      name          = "2. Divisioona"
    }
  }
  landunit =
  { location = 136 # province id.
    name     = "Pohjois-Suomen Ryhmä"
    id       = { type = 30038 id = 19 }
    division =
    { experience    = 35
      id            = { type = 30038 id = 20 }
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 2
      name          = "3. Divisioona"
    }
  }
  landunit =
  { location = 132 # province id.
    name     = "Lapin Ryhmä"
    id       = { type = 30038 id = 21 }
    division =
    { experience = 35
      id         = { type = 30038 id = 22 }
      type       = bergsjaeger
      model      = 1
      name       = "7. Divisioona"
    }
  }
  landunit =
  { location = 141 # province id.
    name     = "Päämaja"
    id       = { type = 30038 id = 30 }
    division =
    { id            = { type = 30038 id = 31 }
      type          = hq
      name          = "Päämaja"
      model         = 1
      extra         = artillery
      brigade_model = 2
    }
  }
  # ####################################################
  navalunit =
  { id       = { type = 30038 id = 124 }
    name     = "Suomen Laivasto"
    location = 142
    base     = 142
    division =
    { id    = { type = 30038 id = 125 }
      name  = "Ilmarinen"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 30038 id = 126 }
      name  = "Väinämöinen"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 30038 id = 127 }
      name  = "1. Sukellusvenelaivue"
      type  = submarine
      model = 0
    }
  }
  airunit =
  { location = 142 # province id.
    base     = 142
    name     = "Lentorykmentti 1"
    id       = { type = 30038 id = 32 }
    division =
    { id       = { type = 30038 id = 33 }
      type     = interceptor
      name     = "Lentorykmentti 1"
      model    = 1
      strength = 75
    }
  }
  airunit =
  { location = 143 # province id.
    base     = 143
    name     = "Lentorykmentti 1"
    id       = { type = 30038 id = 34 }
    division =
    { id       = { type = 30038 id = 35 }
      type     = interceptor
      name     = "Lentorykmentti 2"
      model    = 0
      strength = 75
    }
  }
  airunit =
  { location = 141 # province id.
    base     = 141
    name     = "Lentorykmentti 4"
    id       = { type = 30038 id = 36 }
    division =
    { id       = { type = 30038 id = 37 }
      type     = tactical_bomber
      name     = "Lentorykmentti 4"
      model    = 0
      strength = 75
    }
  }
}
