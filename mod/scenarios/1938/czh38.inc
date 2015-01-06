
##############################
# Country definition for CZE #
##############################

province = { id = 466 landfort = 6 anti_air = 1 } # Strakonice
province = { id = 467 landfort = 2 } # Tábor
province =
{ id       = 469
  air_base = { size = 3 current_size = 3 }
  anti_air = 1
}            # Prague
province = { id = 470 ic = 8 anti_air = 2 } # Pilsen
province = { id = 471 landfort = 6 anti_air = 1 } # Ústí
province = { id = 472 landfort = 8 anti_air = 1 } # Liberec
province = { id = 474 landfort = 8 anti_air = 1 } # Ostrava
province = { id = 475 ic = 2 landfort = 2 anti_air = 1 } # Brno
province =
{ id       = 476
  air_base = { size = 1 current_size = 1 }
  landfort = 3
  anti_air = 1
}            # Bratislava
province = { id = 477 landfort = 1 } # Banská Bystrica
province = { id = 490 ic = 1 } # Kosice

#####################
# Country main data #
#####################

country =
{ tag                    = CZE
  energy                 = 1000
  metal                  = 1000
  oil                    = 1000
  rare_materials         = 1000
  supplies               = 2500
  manpower               = 200 # raised 20 reserve divisions in sept 38 on top of 21 peacetime divisions
  capital                = 469
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    free_market       = 9
    freedom           = 8
    professional_army = 5
    defense_lobby     = 9
    interventionism   = 5
  }
  SpyInfo                = { country = "CZE" NumberOfSpies = 6 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  #SpyInfo                = { country = "FRA" NumberOfSpies = 6 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 6 }
  #SpyInfo                = { country = "GER" NumberOfSpies = 8 }
  #SpyInfo                = { country = "AUS" NumberOfSpies = 3 }
  #SpyInfo                = { country = "POL" NumberOfSpies = 6 }
  #SpyInfo                = { country = "YUG" NumberOfSpies = 3 }
  #SpyInfo                = { country = "HUN" NumberOfSpies = 8 }
  #SpyInfo                = { country = "ITA" NumberOfSpies = 3 }
  diplomacy =
	{ relation = { tag = ENG value = 50 }
	  relation = { tag = FRA value = 150 }
	}

  ownedprovinces         = { 471 472 466 467 470 469 468 474 475 478 477 490 499 476 }
  controlledprovinces    = { 471 472 466 467 470 469 468 474 475 478 477 490 499 476 }
  # Great War Infantry
  techapps               = { 1010  1020  1110  1190  1200  1210  1220  1230  2010  2020  2030  2040  2050  2150  2290  2300  2310  2320  2330  2400
			     2450  2460  2510  4010  4020  4120  4130  5010  5020  5050  5060  5080  5090  5100  5190  5200  6010  6030  6120  9010
			     9020  14000 14010
			   }
  nationalprovinces      = { 471 472 466 467 470 469 468 474 475 478 477 490 499 476 }
  headofstate            = { type = 9 id = 24001 }
  headofgovernment       = { type = 9 id = 24002 }
  foreignminister        = { type = 9 id = 24053 }
  armamentminister       = { type = 9 id = 24066 }
  ministerofsecurity     = { type = 9 id = 24082 }
  ministerofintelligence = { type = 9 id = 24099 }
  chiefofstaff           = { type = 9 id = 24112 }
  chiefofarmy            = { type = 9 id = 24008 }
  chiefofnavy            = { type = 9 id = 24009 }
  chiefofair             = { type = 9 id = 24140 }
  # ################################
  # Czech army 1938 OOB
  # Big thanks to Halibutt for support!
  # ####################################
  # Dictionary:
  # Corps = armádní sbor
  # Air Force = Vojenské letectvo
  # Army = armáda
  # Border Sector = Hranice Kruhová
  # Fast divisions are represented by either tank division (1st)
  # or semi-moto cavalry with AT attached (rest)!
  # Reserves - VIII Corps - Moravia
  landunit =
  { id       = { type = 12073 id = 1 }
    location = 467 # Tabor
    name     = "8. armádní sbor"
    division =
    { id    = { type = 12073 id = 2 }
      name  = "9. divize"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 12073 id = 3 }
      name  = "15. divize"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 12073 id = 4 }
      name  = "21. divize"
      type  = infantry
      model = 1
    }
  }
  # Reserves - more
  landunit =
  { id       = { type = 12073 id = 5 }
    location = 470 # central bohemia
    name     = "Celek Rezerva"
    division =
    { id    = { type = 12073 id = 6 }
      name  = "1. rychlá divize"
      type  = cavalry
      model = 3
      extra = anti_tank
    }
    division =
    { id    = { type = 12073 id = 7 }
      name  = "4. divize (horska)"
      type  = bergsjaeger
      model = 0
    }
    division =
    { id    = { type = 12073 id = 8 }
      name  = "12. divize (horska)"
      type  = bergsjaeger
      model = 0
    }
    division =
    { id    = { type = 12073 id = 9 }
      name  = "13. divize (mot)"
      type  = motorized
      model = 0
      extra = armored_car
    }
    division =
    { id    = { type = 12073 id = 10 }
      name  = "16. divize (horska)"
      type  = bergsjaeger
      model = 0
    }
    division =
    { id            = { type = 12073 id = 11 }
      name          = "22. divize"
      type          = infantry
      model         = 1
      extra         = artillery
      brigade_model = 1 # Medium GW
    }
  }
  # 1st Army in Bohemia
  landunit =
  { id       = { type = 12073 id = 12 }
    location = 472
    name     = "1. armáda"
    division =
    { id            = { type = 12073 id = 13 }
      name          = "18. divize"
      type          = infantry
      model         = 1
      extra         = artillery
      brigade_model = 1 # Medium GW
    }
    division =
    { id    = { type = 12073 id = 14 }
      name  = "3/4 Kruhová"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 12073 id = 15 }
      name  = "XI Hranice Kruhová"
      type  = infantry
      model = 1
    }
    division =
    { id            = { type = 12073 id = 16 }
      name          = "XII Hranice Kruhová"
      type          = infantry
      model         = 1
      extra         = artillery
      brigade_model = 1 # Medium GW
    }
  }
  # I Corps Bohemia
  landunit =
  { id       = { type = 12073 id = 17 }
    location = 471 # Usti
    name     = "1. armádní sbor"
    division =
    { id            = { type = 12073 id = 18 }
      name          = "2. divize"
      type          = infantry
      model         = 1
      extra         = artillery
      brigade_model = 1 # Medium GW
    }
    division =
    { id    = { type = 12073 id = 19 }
      name  = "5. divize"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 12073 id = 20 }
      name  = "32. Hranice Kruhová"
      type  = infantry
      model = 1
    }
  }
  # II Corps - Bohemia
  landunit =
  { id       = { type = 12073 id = 21 }
    location = 466 # Strakonice
    name     = "2. armádní sbor"
    division =
    { id    = { type = 12073 id = 22 }
      name  = "3. divize"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 12073 id = 23 }
      name  = "17. divize (horska)"
      type  = bergsjaeger
      model = 0
    }
    division =
    { id            = { type = 12073 id = 24 }
      name          = "33. Hranice Kruhová"
      type          = infantry
      model         = 1
      extra         = artillery
      brigade_model = 1 # Medium GW
    }
  }
  # 2nd Army/4th Corps in northern Moravia
  landunit =
  { id       = { type = 12073 id = 25 }
    location = 474 # Ostrava
    name     = "2. armáda"
    division =
    { id            = { type = 12073 id = 26 }
      name          = "8. divize"
      type          = infantry
      model         = 1
      extra         = artillery
      brigade_model = 1 # Medium GW
    }
    division =
    { id    = { type = 12073 id = 27 }
      name  = "7. divize"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 12073 id = 28 }
      name  = "XIII Hranice Kruhová"
      type  = infantry
      model = 1
    }
  }
  # 3rd Army - Slovakia
  landunit =
  { id       = { type = 12073 id = 29 }
    location = 476 # Bratislava
    name     = "3. armáda"
    division =
    { id    = { type = 12073 id = 30 }
      name  = "3. rychlá divize"
      type  = cavalry
      model = 3
      extra = anti_tank
    }
    division =
    { id            = { type = 12073 id = 31 }
      name          = "10. divize"
      type          = infantry
      model         = 1
      extra         = artillery
      brigade_model = 1 # Medium GW
    }
    division =
    { id    = { type = 12073 id = 32 }
      name  = "11. divize"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 12073 id = 33 }
      name  = "XV Hranice Kruhová" # Merged with VII Corps border guards
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 12073 id = 34 }
      name  = "XVI Hranice Kruhová"
      type  = infantry
      model = 1
    }
  }
  # 4th Army - southern Moravia
  landunit =
  { id       = { type = 12073 id = 35 }
    location = 475 # Brno
    name     = "4. armáda"
    division =
    { id    = { type = 12073 id = 36 }
      name  = "2. rychlá divize"
      type  = cavalry
      model = 3
      extra = anti_tank
    }
    division =
    { id            = { type = 12073 id = 37 }
      name          = "14. divize"
      type          = infantry
      model         = 1
      extra         = artillery
      brigade_model = 1 # Medium GW
    }
    division =
    { id            = { type = 12073 id = 38 }
      name          = "19. divize"
      type          = infantry
      model         = 1
      extra         = artillery
      brigade_model = 1 # Medium GW
    }
    division =
    { id    = { type = 12073 id = 39 }
      name  = "39 Hranice Kruhová" # Merged with 2nd group
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 12073 id = 40 }
      name  = "4. rychlá divize"
      type  = light_armor
      model = 2
    }
    division =
    { id    = { type = 12073 id = 41 }
      name  = "6. divize"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 12073 id = 42 }
      name  = "20. divize"
      type  = infantry
      model = 1
    }
  }
  # ### Czechoslovakian Air Force
  airunit =
  { id       = { type = 12074 id = 1 }
    location = 469 # Praha
    base     = 469
    name     = "Vojenské letectvo"
    division =
    { id    = { type = 12074 id = 2 }
      name  = "1. stihaci letecky pluk"
      type  = interceptor
      model = 1
    }
    division =
    { id    = { type = 12074 id = 3 }
      name  = "2. stihaci letecky pluk"
      type  = interceptor
      model = 1
    }
    division =
    { id    = { type = 12074 id = 4 }
      name  = "3. stihaci letecky pluk"
      type  = interceptor
      model = 1
    }
    division =
    { id    = { type = 12074 id = 5 }
      name  = "5. bombardovaci letecky pluk"
      type  = tactical_bomber
      model = 1
    }
    division =
    { id    = { type = 12074 id = 6 }
      name  = "6. bombardovaci letecky pluk"
      type  = tactical_bomber
      model = 1
    }
  }
}
