
##############################
# Country definition for FIN #
##############################

province =
{ id       = 137
  air_base = { size = 10 current_size = 10 }
}            # Oulu
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
  money                  = 10
  capital                = 142
  manpower               = 35
  transports             = 10
  escorts                = 2
  diplomacy =
  { relation = { tag = AST value = 65 }
    relation = { tag = AUS value = 55 }
    relation = { tag = BEL value = 100 }
    relation = { tag = BUL value = 35 }
    relation = { tag = CZE value = 50 }
    relation = { tag = DEN value = 75 }
    relation = { tag = ENG value = 85 }
    relation = { tag = EST value = 120 }
    relation = { tag = FRA value = 85 }
    relation = { tag = GER value = 25 }
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
    relation = { tag = SPR value = 35 }
    relation = { tag = SWE value = 150 }
    relation = { tag = USA value = 90 }
    relation = { tag = YUG value = 35 }
  }
  SpyInfo                = { country = "FIN" NumberOfSpies = 5 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  #SpyInfo                = { country = "FRA" NumberOfSpies = 3 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 8 }
  #SpyInfo                = { country = "LAT" NumberOfSpies = 3 }
  #SpyInfo                = { country = "LIT" NumberOfSpies = 6 }
  #SpyInfo                = { country = "POL" NumberOfSpies = 8 }
  #SpyInfo                = { country = "SWE" NumberOfSpies = 8 }
  #SpyInfo                = { country = "NOR" NumberOfSpies = 9 }
  #SpyInfo                = { country = "EST" NumberOfSpies = 6 }
  #SpyInfo                = { country = "YUG" NumberOfSpies = 3 }
  #SpyInfo                = { country = "HUN" NumberOfSpies = 3 }
  #SpyInfo                = { country = "DEN" NumberOfSpies = 6 }
  #SpyInfo                = { country = "USA" NumberOfSpies = 3 }
  #SpyInfo                = { country = "ITA" NumberOfSpies = 3 }
  nationalprovinces      = { 103 141 142 140 143 138 139 137 131 130 132 136 148 147 144 145 146 149 135 150 152 }
  ownedprovinces         = { 103 141 142 140 143 138 139 137 131 130 132 136 148 147 144 145 146 149 }
  controlledprovinces    = { 103 141 142 140 143 138 139 137 131 130 132 136 148 147 144 145 146 149 }
  # Western Minor Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 4010  4020  4120  2150  2010  2020  2290  2300  2310  2450  2460  2510  2400  1010  1020  1190  1110  9010  9030  5010
			     5080  5090  5190  6010  6030  3010  3130  3400  3410  8020  8040  8050  14000
			   }
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
  headofstate            = { type = 9 id = 29001 }
  headofgovernment       = { type = 9 id = 29002 }
  foreignminister        = { type = 9 id = 29003 }
  armamentminister       = { type = 9 id = 29004 }
  ministerofsecurity     = { type = 9 id = 29005 }
  ministerofintelligence = { type = 9 id = 29006 }
  chiefofstaff           = { type = 9 id = 29007 }
  chiefofarmy            = { type = 9 id = 29008 }
  chiefofnavy            = { type = 9 id = 29009 }
  chiefofair             = { type = 9 id = 29010 }
  landunit =
  { location = 146
    name     = "I Armeijakunta"
    id       = { type = 32000 id = 1 }
    division =
    { id       = { type = 32000 id = 706 }
      name     = "P��maja"
      type     = hq
      model    = 0
      strength = 100
    }
    division =
    { id            = { type = 32000 id = 2 }
      name          = "1. Divisioona"
      type          = infantry
      model         = 1
      extra         = artillery
      brigade_model = 2
    }
  }
  landunit =
  { location = 145
    name     = "II Armeijakunta"
    id       = { type = 32000 id = 3 }
    division =
    { id    = { type = 32000 id = 4 }
      name  = "4. Divisioona"
      type  = infantry
      model = 1
      extra = anti_air
    }
    division =
    { id    = { type = 32000 id = 5 }
      name  = "5. Divisioona"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 32000 id = 7 }
      name  = "21. Divisioona"
      type  = infantry
      model = 1
    }
  }
  landunit =
  { location = 145
    name     = "III Armeijakunta"
    id       = { type = 32000 id = 8 }
    division =
    { id    = { type = 32000 id = 9 }
      name  = "8. Divisioona"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 32000 id = 10 }
      name  = "10. Divisioona"
      type  = infantry
      model = 1
    }
  }
  landunit =
  { location = 149
    name     = "IV Armeijakunta"
    id       = { type = 32000 id = 11 }
    division =
    { id    = { type = 32000 id = 12 }
      name  = "12. Divisioona"
      type  = infantry
      model = 1
      extra = anti_air
    }
    division =
    { id    = { type = 32000 id = 13 }
      name  = "13. Divisioona"
      type  = infantry
      model = 1
    }
  }
  landunit =
  { location = 142
    name     = "V Armeijakunta"
    id       = { type = 32000 id = 14 }
    division =
    { id    = { type = 32000 id = 15 }
      name  = "6. Divisioona"
      type  = infantry
      model = 1
      extra = anti_air
    }
    division =
    { id    = { type = 32000 id = 23 }
      name  = "22. Divisioona"
      type  = infantry
      model = 1
    }
  }
  landunit =
  { location = 136
    name     = "Pohjois-Karjalan Ryhm�"
    id       = { type = 32000 id = 17 }
    division =
    { id    = { type = 32000 id = 18 }
      name  = "2. Divisioona"
      type  = infantry
      model = 1
    }
  }
  landunit =
  { location = 132
    name     = "Pohjois-Suomen Ryhm�"
    id       = { type = 32000 id = 19 }
    division =
    { id    = { type = 32000 id = 20 }
      name  = "3. Divisioona"
      type  = infantry
      model = 1
    }
  }
  landunit =
  { location = 130
    name     = "Lapin Ryhm�"
    id       = { type = 32000 id = 21 }
    division =
    { id    = { type = 32000 id = 22 }
      name  = "7. Divisioona"
      type  = bergsjaeger
      model = 0
      extra = anti_air
    }
  }
  navalunit =
  { id       = { type = 32000 id = 24 }
    name     = "Suomen Laivasto"
    location = 142
    base     = 142
    division =
    { id    = { type = 32000 id = 25 }
      name  = "Ilmarinen"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 32000 id = 26 }
      name  = "V�in�m�inen"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 32000 id = 27 }
      name  = "1. Sukellusvenelaivue"
      type  = submarine
      model = 0
    }
  }
}
