#
# by Aregorn for HSR2_DD
#
##############################
# Country definition for SWE #
##############################

province = { id = 93 landfort = 0 coastalfort = 1 } # Malmö
province =
{ id          = 95
  anti_air    = 2
  naval_base  = { size = 7 current_size = 7 }
  air_base    = { size = 4 current_size = 4 }
  landfort    = 0
  coastalfort = 3
}               # Karlskrona
province =
{ id          = 98
  anti_air    = 2
  naval_base  = { size = 7 current_size = 7 }
  air_base    = { size = 4 current_size = 4 }
  landfort    = 0
  coastalfort = 3
}               # Göteborg
province = { id = 99 landfort = 1 coastalfort = 0 } # Skövde
province =
{ id          = 101
  anti_air    = 2
  naval_base  = { size = 7 current_size = 7 }
  air_base    = { size = 4 current_size = 4 }
  landfort    = 0
  coastalfort = 3
}               # Stockholm
province =
{ id          = 127
  anti_air    = 2
  naval_base  = { size = 3 current_size = 3 }
  air_base    = { size = 4 current_size = 4 }
  landfort    = 3
  coastalfort = 0
}               # Luleå

#####################
# Country main data #
#####################

country =
{ tag                    = SWE
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  manpower               = 85
  capital                = 101

	research_mod = 1.15
	peacetime_ic_mod = 0.75
	extra_tc = 5
	tc_mod = 1.10

  diplomacy =
  { relation = { tag = BEL value = 100 }
    relation = { tag = DEN value = 75 }
    relation = { tag = ENG value = 80 }
    relation = { tag = FIN value = 150 }
    relation = { tag = GER value = 50 }
    relation = { tag = HOL value = 100 }
    relation = { tag = LUX value = 100 }
    relation = { tag = NOR value = 150 }
    relation = { tag = PER value = 50 }
    relation = { tag = USA value = 75 }
  }

  SpyInfo                = { country = "SWE" NumberOfSpies = 6 }

  nationalprovinces      = { 112 126 127 123 122 121 120 119 115 113 114 106 105 104 102 101 100 99 98 97 93 95 96 }
  ownedprovinces         = { 112 126 127 123 122 121 120 119 115 113 114 106 105 104 102 101 100 99 98 97 93 95 96 }
  controlledprovinces    = { 112 126 127 123 122 121 120 119 115 113 114 106 105 104 102 101 100 99 98 97 93 95 96 }
  # Group C 1936 techs
  # ######################
  techapps               = { 4010 4120 4190 2150 4130 2010 3190 2290 2300 2310 3130 2450 2460 2510 1010 1190 1110 9010 5010 5020 5080 5090 5190
			     5470 6010 6020 3010 3020 3070 3080 3250 3400 3410 8010 8020 8040 8050
			   }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    freedom           = 6
    free_market       = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 7001 }
  headofgovernment       = { type = 9 id = 7033 }
  foreignminister        = { type = 9 id = 7038 }
  armamentminister       = { type = 9 id = 7047 }
  ministerofsecurity     = { type = 9 id = 7058 }
  ministerofintelligence = { type = 9 id = 7006 }
  chiefofstaff           = { type = 9 id = 7007 }
  chiefofarmy            = { type = 9 id = 7008 }
  chiefofnavy            = { type = 9 id = 7009 }
  chiefofair             = { type = 9 id = 7010 }
  # 5 infantry divisions.
  landunit =
  { location = 101
    name     = "1a Armékåren"
    id       = { type = 29600 id = 1 }
    division =
    { id    = { type = 29600 id = 2 }
      name  = "I. Fördelningen"
      type  = infantry
      model = 0
      extra = artillery
      experience = 20
    }
  }
  landunit =
  { location = 127
    name     = "Övre Norrlandstrupper"
    id       = { type = 29600 id = 9 }
    division =
    { id    = { type = 29600 id = 10 }
      name  = "V. Fördelningen"
      type  = infantry
      model = 0
      experience = 20
    }
  }
  landunit =
  { location = 102
    name     = "Hemmaförsvaret"
    id       = { type = 29600 id = 11 }
    division =
    { id   = { type = 29600 id = 12 }
      name = "Landstormen"
      type = militia
    }
  }
  navalunit =
  { location = 101 # Berga/Muskö
    base     = 101
    name     = "Kustflottan"
    id       = { type = 29600 id = 16 }
    division =
    { id    = { type = 29600 id = 17 }
      name  = "HMS Sverige"
      type  = battlecruiser
      model = 0
    }
    division =
    { id    = { type = 29600 id = 18 }
      name  = "HMS Drottning Victoria"
      type  = battlecruiser
      model = 0
    }
    division =
    { id    = { type = 29600 id = 19 }
      name  = "HMS Gustav V"
      type  = battlecruiser
      model = 0
    }
    division =
    { id    = { type = 29600 id = 21 }
      name  = "HMS Clas Fleming"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 29600 id = 22 }
      name  = "HMS Gotland"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 29600 id = 23 }
      name  = "1. Jagarflottiljen"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 29600 id = 25 }
      name  = "1. Trängflottiljen"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { location = 101 # Berga/Muskö
    base     = 101
    name     = "Ålandshavseskader"
    id       = { type = 29600 id = 26 }
    division =
    { id    = { type = 29600 id = 27 }
      name  = "HMS Äran"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 29600 id = 28 }
      name  = "HMS Tapperheten"
      type  = heavy_cruiser
      model = 0
    }
  }
  navalunit =
  { location = 95 # Karlskronabasen
    base     = 95
    name     = "Karlskrona Avdelningen"
    id       = { type = 29600 id = 30 }
    division =
    { id    = { type = 29600 id = 31 }
      name  = "HMS Oscar II"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 29600 id = 33 }
      name  = "1. Ubåtsflottiljen"
      type  = submarine
      model = 0
    }
  }
  navalunit =
  { location = 98 # Göteborgsbasen
    base     = 98
    name     = "Göteborgseskadern"
    id       = { type = 29600 id = 34 }
    division =
    { id    = { type = 29600 id = 35 }
      name  = "HMS Manligheten"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 29600 id = 37 }
      name  = "2. Ubåtsflottiljen"
      type  = submarine
      model = 1
    }
  }
  airunit =
  { location = 101
    base     = 101
    name     = "1a Flygkåren"
    id       = { type = 29600 id = 13 }
    division =
    { id    = { type = 29600 id = 14 }
      name  = "1. Taktiska Bombflyggruppen"
      type  = tactical_bomber
      model = 0
    }
    division =
    { id    = { type = 29600 id = 15 }
      name  = "1. Marinbombflyggruppen"
      type  = naval_bomber
      model = 0
    }
  }
}
