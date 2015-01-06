
##############################
# Country definition for SCH #
##############################

province = { id = 372 ic = 1 landfort = 4 anti_air = 1 } # Chur
province = { id = 530 landfort = 5 anti_air = 1 } # Geneva
province =
{ id       = 532
  air_base = { size = 2 current_size = 2 }
  landfort = 5
  anti_air = 1
}            # Bern
province = { id = 533 ic = 2 landfort = 5 anti_air = 1 } # Zürich

#####################
# Country main data #
#####################

country =
{ tag                    = SCH
  capital                = 532
  manpower               = 135
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 1000 # Swiss banks
  diplomacy =
  { relation = { tag = ENG value = 50 }
    relation = { tag = FRA value = 1 }
    relation = { tag = GER value = 50 }
    relation = { tag = USA value = 1 }
    relation = { tag = ITA value = 1 }
  }
  nationalprovinces      = { 532 530 533 372 }
  ownedprovinces         = { 532 530 533 372 }
  controlledprovinces    = { 532 530 533 372 }
  techapps               = { 1010 1020 1190 1200 1110 2150 2010 2020 2030 2040 2290 2300 2310 2320 2330 2400 2450 2460 2510 4010 4020 4030 4120 4130
			     5010 5020 5030 5050 5060 5080 5090 5100 5190 5200 6010 6020 9010 9020 9200
			   }
  SpyInfo                = { country = "SCH" NumberOfSpies = 6 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 4
    freedom           = 7
    free_market       = 9
    professional_army = 2
    defense_lobby     = 8
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 17032 }
  headofgovernment       = { type = 9 id = 17043 }
  foreignminister        = { type = 9 id = 17061 }
  armamentminister       = { type = 9 id = 17070 }
  ministerofsecurity     = { type = 9 id = 17089 }
  ministerofintelligence = { type = 9 id = 17096 }
  chiefofstaff           = { type = 9 id = 17101 }
  chiefofarmy            = { type = 9 id = 17104 }
  chiefofnavy            = { type = 9 id = 17106 }
  chiefofair             = { type = 9 id = 17010 }
  dormant_ministers      = { 17001 17031 17032 17002 17042 17043 }
  landunit =
  { id       = { type = 30015 id = 1 }
    location = 532
    name     = "I Armeekorps"
    leader   = 129001
    division =
    { id    = { type = 30015 id = 2 }
      name  = "1. Felddivision"
      model = 1
      type  = infantry
    }
  }
  landunit =
  { id       = { type = 30015 id = 3 }
    location = 530
    name     = "II Armeekorps"
    leader   = 129004
    division =
    { id    = { type = 30015 id = 4 }
      name  = "2. Felddivision"
      model = 1
      type  = infantry
    }
    division =
    { id    = { type = 30015 id = 5 }
      name  = "7. Felddivision"
      model = 1
      type  = infantry
    }
    division =
    { id       = { type = 30015 id = 6 }
      name     = "1. Gebirgsjäger-Division"
      strength = 30
      type     = bergsjaeger
    }
  }
  landunit =
  { id       = { type = 30015 id = 7 }
    location = 533
    name     = "III Armeekorps"
    leader   = 129002
    division =
    { id    = { type = 30015 id = 8 }
      name  = "3. Felddivision"
      model = 1
      type  = infantry
    }
    division =
    { id    = { type = 30015 id = 9 }
      name  = "4. Felddivision"
      model = 1
      type  = infantry
    }
    division =
    { id    = { type = 30015 id = 10 }
      name  = "8. Felddivision"
      model = 1
      type  = infantry
    }
    division =
    { id       = { type = 30015 id = 11 }
      name     = "2. Gebirgsjäger-Division"
      strength = 30
      type     = bergsjaeger
    }
  }
  landunit =
  { id       = { type = 30015 id = 12 }
    location = 372
    name     = "IV Armeekorps"
    leader   = 129006
    division =
    { id    = { type = 30015 id = 13 }
      name  = "5. Felddivision"
      model = 1
      type  = infantry
    }
    division =
    { id    = { type = 30015 id = 14 }
      name  = "6. Felddivision"
      model = 1
      type  = infantry
    }
    division =
    { id       = { type = 30015 id = 15 }
      name     = "3. Gebirgsjäger-Division"
      strength = 30
      type     = bergsjaeger
    }
  }
  airunit =
  { id       = { type = 30015 id = 16 }
    location = 532
    base     = 532
    name     = "Heeren Luftwaffe Abteilung 1"
    division =
    { id       = { type = 30015 id = 17 }
      name     = "Jagdgeschwader 1"
      model    = 1
      strength = 35
      type     = interceptor
    }
    division =
    { id       = { type = 30015 id = 18 }
      name     = "Taktikkampfgeschwader 1"
      strength = 40
      type     = tactical_bomber
    }
  }
}
