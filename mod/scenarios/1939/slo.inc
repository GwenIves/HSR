
##############################
# Country definition for SLO #
##############################

province =
{ id = 476
anti_air = 1
air_base = { size = 1 current_size = 1 }
ic = 5 } # Bratislava
province = { id = 490 ic = 3 } # Kosice

#####################
# Country main data #
#####################

country =
{ tag                    = SLO
  control                = GER
  puppet                 = GER
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 200
  oil                    = 200
  supplies               = 500
  money                  = 10
  manpower               = 10
  capital                = 476
  # Superior Firepower
  SpyInfo                = { country = "SLO" NumberOfSpies = 5 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 3
    free_market       = 3
    freedom           = 3
    professional_army = 6
    defense_lobby     = 9
    interventionism   = 7
  }
  nationalprovinces      = { 478 477 490 476 }
  ownedprovinces         = { 478 477 490 476 }
  controlledprovinces    = { 478 477 490 476 }
  # Eastern Minor Tech '36
  # Group C 1939 techs
  # ######################
  techapps               = { 1010 1020 1110 1190 1200 2010 2020 2030 2040 2150 2290 2300 2310 2320 2330 2400 2450 2460 2510 4010 4020 4120 4130 5010
			     5020 5030 5080 5090 5100 5190 6010 6020 9010 9020
			   }
  diplomacy =
  { relation = { tag = ENG value = -200 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = -200 }
    relation = { tag = GER value = 200 }
    relation = { tag = HUN value = -20 }
    relation = { tag = ITA value = 120 }
    relation = { tag = POL value = -200 }
    relation = { tag = ROM value = 20 }
    relation = { tag = SOV value = -100 }
    relation = { tag = YUG value = 50 }
  }
  headofstate            = { type = 9 id = 31031 }
  headofgovernment       = { type = 9 id = 31034 }
  foreignminister        = { type = 9 id = 31037 }
  armamentminister       = { type = 9 id = 31042 }
  ministerofsecurity     = { type = 9 id = 31048 }
  ministerofintelligence = { type = 9 id = 31055 }
  chiefofstaff           = { type = 9 id = 31060 }
  chiefofarmy            = { type = 9 id = 31063 }
  chiefofnavy            = { type = 9 id = 31066 }
  chiefofair             = { type = 9 id = 31069 }
  dormant_ministers      = { 31001 31002 31003 31004 31005 31006 31007 31008 31009 31010 }
  landunit =
  { id       = { type = 30011 id = 1 }
    name     = "Slovak Combat Group"
    location = 490
    division =
    { id            = { type = 30011 id = 2 }
      name          = "1. Pesi divize"
      strength      = 100
      type          = infantry
      model         = 1
      extra         = armored_car
      brigade_model = 0
    }
    division =
    { id            = { type = 30011 id = 3 }
      name          = "2. Pesi divize"
      strength      = 100
      type          = infantry
      model         = 1
      extra         = police
      brigade_model = 0
    }
  }
}
