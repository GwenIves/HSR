
##############################
# Country definition for SLO #
##############################

province =
{ id       = 476
  anti_air = 3
  ic       = 5
  air_base = { size = 4 current_size = 4 }
}            # Bratislava
province =
{ id       = 490
  ic       = 3
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            # Kosice

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
  # up to Blitzkrieg (land)
  SpyInfo                = { country = "SLO" NumberOfSpies = 4 }
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
  # Germany 1939 techs
  # ######################
  techapps               = { 1010 1020 1030 1070 1080 1110 1120 1190 1200 1210 1220 1230 1310 1340 2010 2020 2030 2040 2050 2070 2150 2290 2300 2310
			     2320 2330 2400 2410 2450 2460 2510 4010 4020 4030 4040 4050 4120 4130 4140 4150 4170 4190 4200 4220 4250 5010 5020 5030
			     5050 5060 5070 5080 5090 5100 5110 5190 5200 5210 5220 5310 5320 5350 5360 5410 5550 6210 6220 6230 6240 6250 6260 9010
			     9020 9030 9040 9050 9060 9070 9080 9090 9100 9110 9120 9140 9190 9200 9270 9290
			   }
  diplomacy =
  { relation = { tag = ENG value = -200 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = -200 }
    relation = { tag = GER value = 200 }
    relation = { tag = HUN value = -20 }
    relation = { tag = ITA value = 120 }
    relation = { tag = ROM value = 20 }
    relation = { tag = SOV value = -150 }
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
      model         = 2
      extra         = armored_car
      brigade_model = 0
    }
    division =
    { id            = { type = 30011 id = 3 }
      name          = "2. Pesi divize"
      strength      = 100
      type          = infantry
      model         = 2
      extra         = police
      brigade_model = 0
    }
  }
}
