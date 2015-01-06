
##############################
# Country definition for SCH #
##############################

province = { id = 372 ic = 1 landfort = 4 anti_air = 3 } # Chur
province = { id = 530 ic = 2 landfort = 5 anti_air = 3 } # Geneva
province =
{ id       = 532
  air_base = { size = 6 current_size = 6 }
  landfort = 5
  anti_air = 3
}            # Bern
province = { id = 533 ic = 4 landfort = 5 anti_air = 3 } # Zürich

#####################
# Country main data #
#####################

country =
{ tag                    = SCH
  capital                = 532
  manpower               = 135
  # Resource Reserves
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  SpyInfo                = { country = "SCH" NumberOfSpies = 6 }
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
  # Western Minor Tech '36
  # Group C 1944 techs
  # ######################
  techapps               = { 5070  4010  4020  4030  4040  4050  4060  4120  4130  4140  4170  4190  4250  2010  2020  2030  2040  2050  2060  2070
			     2080  2150  2160  2170  2180  2220  2230  2290  2300  2310  2320  2330  2340  2400  2410  2450  2460  2470  2510  2520
			     2530  1010  1020  1030  1040  1190  1200  1210  1220  1110  1120  1070  1150  2330  1310  9010  9020  9030  9040  5010
			     5020  5050  5060  5080  5090  5100  5110  5120  5190  5200  5210  5220  5310  5350  5360  5470  6010  6020  6040  6050
			     6060  6070  5320  1130  14000 14010
			   }
  diplomacy =
  { relation = { tag = ENG value = 50 }
    relation = { tag = FRA value = 1 }
    relation = { tag = GER value = 50 }
  }
  dormant_ministers      = { 17001 17031 17032 17002 17042 17043 17033 17034 17044 17045 17035 17037 17046 17048 17003 }
  headofstate            = { type = 9 id = 17038 }
  headofgovernment       = { type = 9 id = 17049 }
  foreignminister        = { type = 9 id = 17053 }
  armamentminister       = { type = 9 id = 17074 }
  ministerofsecurity     = { type = 9 id = 17094 }
  ministerofintelligence = { type = 9 id = 17099 }
  chiefofstaff           = { type = 9 id = 17101 }
  chiefofarmy            = { type = 9 id = 17104 }
  chiefofnavy            = { type = 9 id = 17106 }
  chiefofair             = { type = 9 id = 17110 }
  landunit =
  { location = 530
    id       = { type = 10541 id = 1 }
    name     = "I Armeekorps"
    division =
    { id       = { type = 10541 id = 2 }
      name     = "1. Felddivision"
      strength = 100
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 10541 id = 3 }
      name     = "2. Felddivision"
      strength = 100
      type     = infantry
      model    = 2
    }
  }
  landunit =
  { location = 533
    id       = { type = 10541 id = 7 }
    name     = "II Armeekorps"
    division =
    { id       = { type = 10541 id = 8 }
      name     = "3. Felddivision"
      strength = 100
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 10541 id = 9 }
      name     = "8. Felddivision"
      strength = 100
      type     = infantry
      model    = 2
    }
  }
  landunit =
  { location = 372
    leader   = 129014
    id       = { type = 10541 id = 12 }
    name     = "III Gebirgsarmeekorps"
    division =
    { id       = { type = 10541 id = 13 }
      name     = "5. Gebirgsjäger-Division"
      strength = 100
      type     = bergsjaeger
      model    = 2
    }
    division =
    { id       = { type = 10541 id = 14 }
      name     = "6. Gebirgsjäger-Division"
      strength = 100
      type     = bergsjaeger
      model    = 2
    }
  }
  landunit =
  { location = 532
    id       = { type = 10541 id = 17 }
    name     = "IV Armeekorps"
    division =
    { id       = { type = 10541 id = 18 }
      name     = "4. Felddivision"
      strength = 100
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 10541 id = 19 }
      name     = "7. Felddivision"
      strength = 100
      type     = infantry
      model    = 2
    }
  }
  landunit =
  { location = 530
    id       = { type = 10541 id = 26 }
    name     = "Swiss GHQ"
    division =
    { id    = { type = 10541 id = 27 }
      name  = "GHQ Reserve Infantry"
      type  = infantry
      model = 2
      extra = artillery
    }
    division =
    { id    = { type = 10541 id = 28 }
      name  = "GHQ Reserve Mountain"
      type  = bergsjaeger
      model = 2
      extra = engineer
    }
  }
  airunit =
  { location = 532
    base     = 532
    id       = { type = 10541 id = 23 }
    name     = "Ueberwachungsgeschwader"
    division =
    { id       = { type = 10541 id = 24 }
      name     = "Kampfgeschwader 1"
      strength = 50
      type     = tactical_bomber
      model    = 1
    }
    division =
    { id       = { type = 10541 id = 25 }
      name     = "Jagdgeschwader 1"
      strength = 86
      type     = interceptor
      model    = 1
    }
  }
}
