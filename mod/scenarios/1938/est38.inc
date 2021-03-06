
##############################
# Country definition for EST #
##############################

province =
{ id         = 196
  naval_base = { size = 2 current_size = 2 }
}              # P�rnu

#####################
# Country main data #
#####################

country =
{ tag                    = EST
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  manpower               = 10
  capital                = 194
  diplomacy =
  { relation = { tag = ENG value = 50 }
    relation = { tag = FIN value = 120 }
    relation = { tag = FRA value = 65 }
    relation = { tag = GER value = 10 }
    relation =
    { tag        = LAT
      value      = 150
      guaranteed = { day = 12 month = september year = 1934 }
    }
    relation =
    { tag        = LIT
      value      = 120
      guaranteed = { day = 12 month = september year = 1934 }
    }
    relation = { tag = POL value = 75 }
    relation = { tag = SOV value = -50 }
  }
  nationalprovinces      = { 193 194 195 196 199 }
  ownedprovinces         = { 193 194 195 196 199 }
  controlledprovinces    = { 193 194 195 196 199 }
  # Eastern Minor Tech '36
  # Group D 1939 techs
  # ######################
  techapps               = { 4010 4020 2150 2010 2020 2290 2300 2310 2320 1010 1020 1190 1200 1110 2330 2400 2450 2460 2510 5010 5020 5080 5090 5100 5190
			     5200 6010 3400 8040
			   }
  SpyInfo                = { country = "EST" NumberOfSpies = 4 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 2
    free_market       = 5
    freedom           = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 26001 }
  headofgovernment       = { type = 9 id = 26041 }
  foreignminister        = { type = 9 id = 26051 }
  armamentminister       = { type = 9 id = 26059 }
  ministerofsecurity     = { type = 9 id = 26069 }
  ministerofintelligence = { type = 9 id = 26006 }
  chiefofstaff           = { type = 9 id = 26007 }
  chiefofarmy            = { type = 9 id = 26008 }
  chiefofnavy            = { type = 9 id = 26009 }
  chiefofair             = { type = 9 id = 26010 }
  dormant_ministers      = { 26002 26043 26003 26050 26004 26005 }
  # ##############################
  # ##Estonian Army###############
  # ##############################
  landunit =
  { id       = { type = 30023 id = 1 }
    location = 194 # Tallin
    name     = "1. Eesti Armee"
    Division =
    { id       = { type = 30023 id = 2 }
      name     = "I Jalav�ediviis"
      type     = infantry
      strength = 100
    }
    Division =
    { id       = { type = 30023 id = 3 }
      name     = "II Jalav�ediviis"
      type     = infantry
      strength = 100
    }
  }
  navalunit =
  { id       = { type = 30023 id = 5 }
    location = 196 # P�rnu
    base     = 196
    name     = "Eesti Sojalaevastik"
    Division =
    { id           = { type = 30023 id = 6 }
      name         = "1. Allveelaevade flotill"
      type         = submarine
      model        = 0
      strength     = 40
      max_strength = 40
    }
  }
}
