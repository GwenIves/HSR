
##############################
# Country definition for FIN #
##############################

province =
{ id       = 137
  air_base = { size = 10 current_size = 10 }
}            # Oulu
province = { id = 140 ic = 1 } # Pori
province =
{ id          = 141
  coastalfort = 1
  anti_air    = 2
  naval_base  = { size = 5 current_size = 5 }
  air_base    = { size = 10 current_size = 10 }
}               # Turku
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
province = { id = 145 landfort = 2 anti_air = 3 } # Viipuri

#####################
# Country main data #
#####################

country =
{ tag                    = FIN
  # Resource Reserves
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
    democratic        = 9
    political_left    = 1
    free_market       = 9
    freedom           = 7
    professional_army = 5
    defense_lobby     = 9
    interventionism   = 4
  }
  SpyInfo                = { country = "FIN" NumberOfSpies = 6 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 4 }
  #SpyInfo                = { country = "EST" NumberOfSpies = 5 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 10 }
  #SpyInfo                = { country = "LIT" NumberOfSpies = 4 }
  #SpyInfo                = { country = "LAT" NumberOfSpies = 4 }
  #SpyInfo                = { country = "GER" NumberOfSpies = 4 }
  #SpyInfo                = { country = "SWE" NumberOfSpies = 5 }
  #SpyInfo                = { country = "NOR" NumberOfSpies = 4 }
  #SpyInfo                = { country = "DEN" NumberOfSpies = 5 }
  nationalprovinces      = { 103 141 142 140 143 138 139 137 131 130 132 136 148 147 144 145 146 149 135 150 152 }
  ownedprovinces         = { 103 141 142 140 143 138 139 137 131 130 132 136 148 147 144 145 146 149 }
  controlledprovinces    = { 103 141 142 140 143 138 139 137 131 130 132 136 148 147 144 145 146 149 }
  # Western Minor Tech '36
  # Group C 1939 techs
  # ######################
  techapps               = { 4010  4020  4120  4130  2150  2010  2020  2030  2040  2290  2300  2310  2320  2330  2400  2450  2460  2510  1010  1020
			     1030  1190  1200  1110  1120  1310  9010  9020  9030  5010  5050  5080  5090  5100  5190  5200  6010  6030  6120  6130
			     3010  3130  3400  3410  8020  8040  8050  14000 14010
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
    relation = { tag = SOV value = 1 }
    relation = { tag = SPA value = 35 }
    relation = { tag = SWE value = 150 }
    relation = { tag = USA value = 90 }
    relation = { tag = YUG value = 35 }
  }
  headofstate            = { type = 9 id = 29043 }
  headofgovernment       = { type = 9 id = 29058 }
  foreignminister        = { type = 9 id = 29068 }
  armamentminister       = { type = 9 id = 29093 }
  ministerofsecurity     = { type = 9 id = 29102 }
  ministerofintelligence = { type = 9 id = 29126 }
  chiefofstaff           = { type = 9 id = 29136 }
  chiefofarmy            = { type = 9 id = 29144 }
  chiefofnavy            = { type = 9 id = 29148 }
  chiefofair             = { type = 9 id = 29155 }
  dormant_ministers      = { 29001 29036 29002 29053 29003 29071 29072 29004 29092 29005 29007 29008 }
  landunit =
  { location = 145 # Viipuri
    name     = "II Armeijakunta"
    id       = { type = 30038 id = 1 }
    division =
    { experience = 35
      id         = { type = 30038 id = 2 }
      type       = infantry
      model      = 2
      name       = "4. Divisioona"
      extra      = anti_air
    }
    division =
    { experience    = 35
      id            = { type = 30038 id = 3 }
      type          = infantry
      model         = 2
      name          = "5. Divisioona"
      extra         = artillery
      brigade_model = 3
    }
    division =
    { experience    = 35
      id            = { type = 30038 id = 4 }
      type          = infantry
      model         = 2
      name          = "11. Divisioona"
      extra         = artillery
      brigade_model = 3
    }
    division =
    { experience = 35
      id         = { type = 30038 id = 5 }
      type       = infantry
      model      = 2
      extra      = anti_tank
      name       = "14. Divisioona"
    }
  }
  landunit =
  { location = 145 # Viipuri
    leader   = 9703 # id from leader database
    name     = "III Armeijakunta"
    id       = { type = 30038 id = 6 }
    division =
    { experience    = 35
      id            = { type = 30038 id = 7 }
      type          = infantry
      model         = 2
      name          = "8. Divisioona"
      extra         = artillery
      brigade_model = 3
    }
    division =
    { experience    = 35
      id            = { type = 30038 id = 8 }
      type          = infantry
      model         = 2
      name          = "10. Divisioona"
      extra         = artillery
      brigade_model = 3
    }
    division =
    { experience = 35
      id         = { type = 30038 id = 9 }
      type       = infantry
      model      = 2
      name       = "1. Divisioona"
    }
  }
  landunit =
  { location = 146 # Sortavala
    leader   = 9704 # id from leader database
    name     = "IV Armeijakunta"
    id       = { type = 30038 id = 10 }
    division =
    { experience = 35
      id         = { type = 30038 id = 11 }
      type       = infantry
      model      = 2
      extra      = anti_air
      name       = "12. Divisioona"
    }
    division =
    { experience    = 35
      id            = { type = 30038 id = 12 }
      type          = infantry
      model         = 2
      name          = "13. Divisioona"
      extra         = artillery
      brigade_model = 3
    }
  }
  landunit =
  { location = 149 # Joensuu
    leader   = 9705 # id from leader database
    name     = "Pohjois-Karjalan Ryhmä"
    id       = { type = 30038 id = 13 }
    division =
    { experience    = 35
      id            = { type = 30038 id = 14 }
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 3
      name          = "2. Divisioona"
    }
  }
  landunit =
  { location = 136 # Kajaani
    name     = "Pohjois-Suomen Ryhmä"
    id       = { type = 30038 id = 15 }
    division =
    { experience = 35
      id         = { type = 30038 id = 16 }
      type       = bergsjaeger
      model      = 1
      name       = "Pohjois-Suomen Ryhmä"
      strength   = 50
    }
  }
  landunit =
  { location = 132 # Petsamo
    name     = "Lapin Ryhmä"
    id       = { type = 30038 id = 17 }
    division =
    { experience = 35
      id         = { type = 30038 id = 18 }
      type       = bergsjaeger
      model      = 1
      name       = "Lapin Ryhmä"
      strength   = 50
    }
  }
  landunit =
  { location = 144 # Mikkeli
    name     = "Päämaja"
    id       = { type = 30038 id = 19 }
    division =
    { id    = { type = 30038 id = 20 }
      type  = hq
      name  = "Päämaja"
      model = 1
    }
    division =
    { experience = 35
      id         = { type = 30038 id = 21 }
      type       = infantry
      model      = 2
      name       = "6. Divisioona"
    }
  }
  landunit =
  { location = 137 # Oulu
    name     = "9.Divisioona"
    id       = { type = 30038 id = 22 }
    division =
    { experience = 35
      id         = { type = 30038 id = 23 }
      type       = infantry
      model      = 2
      name       = "9. Divisioona"
    }
  }
  landunit =
  { location = 103 # Maarianhamina
    name     = "Ahvenanmaan Ryhmä"
    id       = { type = 30038 id = 24 }
    division =
    { experience = 35
      id         = { type = 30038 id = 25 }
      type       = infantry
      model      = 2
      name       = "Ahvenanmaan Ryhmä"
      strength   = 20
    }
  }
  landunit =
  { location = 142 # Helsinki
    name     = "KT-Pr"
    id       = { type = 30038 id = 26 }
    division =
    { id    = { type = 30038 id = 27 }
      type  = garrison
      model = 1
      name  = "KT-Pr"
    }
  }
  # ####################################################
  navalunit =
  { id       = { type = 30038 id = 100 }
    name     = "Suomen Laivasto"
    location = 142 # Helsinki
    base     = 142
    division =
    { id    = { type = 30038 id = 101 }
      name  = "Ilmarinen"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 30038 id = 102 }
      name  = "Väinämöinen"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 30038 id = 103 }
      name  = "1. Sukellusvenelaivue"
      type  = submarine
      model = 0
    }
  }
  airunit =
  { location = 142 # Helsinki
    base     = 142
    name     = "Lentorykmentti 1"
    id       = { type = 30038 id = 200 }
    division =
    { id       = { type = 30038 id = 201 }
      type     = interceptor
      name     = "Lentorykmentti 1"
      model    = 1
      strength = 50
    }
  }
  airunit =
  { location = 142 # Helsinki
    base     = 142
    name     = "Lentorykmentti 4"
    id       = { type = 30038 id = 202 }
    division =
    { id       = { type = 30038 id = 203 }
      type     = tactical_bomber
      name     = "Lentorykmentti 4"
      model    = 1
      strength = 20
    }
  }
}
