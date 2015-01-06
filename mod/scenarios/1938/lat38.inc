
##############################
# Country definition for LAT #
##############################

province =
{ id         = 197
  anti_air   = 1
  air_base   = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}              # Riga

#####################
# Country main data #
#####################

country =
{ tag                    = LAT
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 197
  manpower               = 20
  diplomacy =
  { relation = { tag = ENG value = 65 }
    relation =
    { tag        = EST
      value      = 150
      guaranteed = { day = 12 month = september year = 1934 }
    }
    relation = { tag = FIN value = 90 }
    relation = { tag = FRA value = 65 }
    relation = { tag = GER value = 10 }
    relation =
    { tag        = LIT
      value      = 120
      guaranteed = { day = 12 month = september year = 1934 }
    }
    relation = { tag = POL value = 75 }
    relation = { tag = SOV value = -30 }
  }
  nationalprovinces      = { 205 204 203 197 202 198 }
  ownedprovinces         = { 205 204 203 197 202 198 }
  controlledprovinces    = { 205 204 203 197 202 198 }
  # Eastern Minor Tech '36
  # Group D 1939 techs
  # ######################
  techapps               = { 4010 4020 2150 2010 2020 2290 2300 2310 2320 1010 1020 1190 1200 1110 2330 2400 2450 2460 2510 5010 5020 5080 5090 5100 5190
			     5200 6010 3400 8040
			   }
  SpyInfo                = { country = "LAT" NumberOfSpies = 4 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 1
    freedom           = 5
    free_market       = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 27032 }
  headofgovernment       = { type = 9 id = 27002 }
  foreignminister        = { type = 9 id = 27051 }
  armamentminister       = { type = 9 id = 27064 }
  ministerofsecurity     = { type = 9 id = 27077 }
  ministerofintelligence = { type = 9 id = 27089 }
  chiefofstaff           = { type = 9 id = 27007 }
  chiefofarmy            = { type = 9 id = 27109 }
  chiefofnavy            = { type = 9 id = 27009 }
  chiefofair             = { type = 9 id = 27010 }
  dormant_ministers      = { 27001 27004 27005 27103 27113 }
  # #############################
  # ##Latvian Army###############
  # #############################
  landunit =
  { id       = { type = 30022 id = 1 }
    location = 197
    name     = "Latvijas Armija"
    Division =
    { id           = { type = 30022 id = 2 }
      name         = "Kurzemes Divizija"
      type         = infantry
      strength     = 100
      organisation = 30
    }
    Division =
    { id           = { type = 30022 id = 3 }
      name         = "Vidzemes Divizija"
      type         = infantry
      strength     = 100
      organisation = 30
    }
    Division =
    { id           = { type = 30022 id = 4 }
      name         = "Zemgales Divizija"
      type         = infantry
      strength     = 100
      organisation = 30
    }
    Division =
    { id           = { type = 30022 id = 5 }
      name         = "Latgales Divizija"
      type         = infantry
      strength     = 100
      organisation = 30
    }
  }
  navalunit =
  { id       = { type = 30022 id = 6 }
    location = 197
    base     = 197
    name     = "Latvijas Juras Speki"
    Division =
    { id           = { type = 30022 id = 7 }
      name         = "1. Zemudens flotile"
      type         = submarine
      model        = 0
      strength     = 40
      max_strength = 40
    }
  }
}
