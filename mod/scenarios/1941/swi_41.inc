
##############################
# Country definition for SCH #
##############################

province = { id = 372 ic = 1 landfort = 4 anti_air = 3 } # Chur
province = { id = 530 ic = 1 landfort = 5 anti_air = 3 } # Geneva
province =
{ id       = 532
  landfort = 5
  anti_air = 3
  air_base = { size = 4 current_size = 4 }
}            # Bern
province = { id = 533 ic = 3 landfort = 5 anti_air = 3 } # Zürich

#####################
# Country main data #
#####################

country =
{ tag                    = SCH
  capital                = 532
  manpower               = 135
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 500
  SpyInfo                = { country = "SCH" NumberOfSpies = 5 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 2
    freedom           = 7
    free_market       = 9
    professional_army = 2
    defense_lobby     = 8
    interventionism   = 1
  }
  nationalprovinces      = { 532 530 533 372 }
  ownedprovinces         = { 532 530 533 372 }
  controlledprovinces    = { 532 530 533 372 }
  # Group C 1941 techs
  # ######################
  techapps               = { 5070  6070  6060  1120  4010  4020  4030  4040  4120  4130  4140  2010  2020  2030  2040  2050  2150  2290  2300  2310
			     2320  2330  2400  2410  2450  2460  2470  2510  2520  1010  1020  1030  1190  1200  1210  1220  1110  2330  9010  9020
			     9030  5010  5020  5050  5080  5090  5100  5110  5190  5200  5470  5480  6010  6020  6040  14000
			   }
  diplomacy =
  { relation = { tag = ENG value = 50 }
    relation = { tag = FRA value = 1 }
    relation = { tag = GER value = 50 }
    relation = { tag = ITA value = 25 }
  }
  headofstate            = { type = 9 id = 17035 }
  headofgovernment       = { type = 9 id = 17046 }
  foreignminister        = { type = 9 id = 17053 }
  armamentminister       = { type = 9 id = 17072 }
  ministerofsecurity     = { type = 9 id = 17092 }
  ministerofintelligence = { type = 9 id = 17098 }
  chiefofstaff           = { type = 9 id = 17101 }
  chiefofarmy            = { type = 9 id = 17104 }
  chiefofnavy            = { type = 9 id = 17106 }
  chiefofair             = { type = 9 id = 17109 }
  dormant_ministers      = { 17001 17031 17032 17002 17042 17043 17033 17034 17044 17045 17003 }
  landunit =
  { location = 532
    id       = { type = 10018 id = 1100 }
    name     = "Armée Suisse HQ"
    division =
    { id       = { type = 10018 id = 1101 }
      name     = "Armée Suisse HQ"
      type     = hq
      model    = 1
      strength = 100
      extra    = police
    }
  }
  landunit =
  { id       = { type = 10018 id = 1 }
    location = 532
    name     = "I Armeekorps"
    division =
    { id       = { type = 10018 id = 2 }
      name     = "1. Felddivision"
      strength = 100
      type     = infantry
      model    = 1
      extra    = artillery
    }
  }
  landunit =
  { id       = { type = 10018 id = 3 }
    location = 533
    name     = "II Corps d' Armée"
    division =
    { id       = { type = 10018 id = 4 }
      name     = "2. Division d' Infanterie"
      strength = 100
      type     = infantry
      model    = 1
      extra    = anti_air
    }
    division =
    { id       = { type = 10018 id = 5 }
      name     = "1. Alpenjägerdivision"
      strength = 100
      type     = bergsjaeger
      model    = 1
    }
  }
  landunit =
  { id       = { type = 10018 id = 6 }
    location = 530
    name     = "III Corpa di Armata"
    division =
    { id       = { type = 10018 id = 7 }
      name     = "3. Divisione di Fanteria"
      strength = 100
      type     = infantry
      model    = 1
      extra    = anti_tank
    }
    division =
    { id       = { type = 10018 id = 8 }
      name     = "4. Felddivisionen"
      strength = 100
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 10018 id = 9 }
      name     = "2. Div. de Infanterie de Montagne"
      strength = 100
      type     = bergsjaeger
      model    = 1
    }
  }
  landunit =
  { id       = { type = 10018 id = 10 }
    location = 372
    name     = "IV Armeekorps"
    division =
    { id       = { type = 10018 id = 11 }
      name     = "5. Division d' Infanterie"
      strength = 100
      type     = infantry
      model    = 1
      extra    = engineer
    }
    division =
    { id       = { type = 10018 id = 12 }
      name     = "6. Divisione di Fanteria"
      strength = 100
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 10018 id = 13 }
      name     = "3. Divisione di Alpinisti"
      strength = 100
      type     = bergsjaeger
      model    = 1
    }
  }
  airunit =
  { id       = { type = 10018 id = 14 }
    location = 532
    base     = 532
    name     = "Heeren Luftwaffe Abteilung 1"
    division =
    { id       = { type = 10018 id = 15 }
      name     = "Taktikkampfgeschwader 1"
      strength = 40
      type     = tactical_bomber
      model    = 1
    }
    division =
    { id       = { type = 10018 id = 16 }
      name     = "Jagdkampfgeschwader 1"
      strength = 100
      type     = interceptor
      model    = 1
    }
  }
}
