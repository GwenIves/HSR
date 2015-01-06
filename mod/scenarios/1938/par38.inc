
##############################
# Country definition for PAR #
##############################

country =
{ tag                    = PAR
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 837
  manpower               = 10
  diplomacy =
  { relation = { tag = ARG value = 50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = BOL value = -50 }
    relation = { tag = CHL value = 35 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 25 }
    relation = { tag = PRU value = 25 }
    relation = { tag = URU value = 20 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }
  nationalprovinces      = { 837 846 }
  ownedprovinces         = { 837 846 }
  controlledprovinces    = { 837 846 }
  # ROTW Minor Tech '36
  # Group D 1939 techs
  # ######################
  techapps               = { 4010 4020 2150 2010 2020 2290 2300 2310 2320 1010 1020 1190 1200 1110 2330 2400 2450 2460 2510 5010 5080 5090 5100 5190 6010
			   }
  SpyInfo                = { country = "PAR" NumberOfSpies = 4 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 5
    freedom           = 3
    free_market       = 5
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 42062 }
  headofgovernment       = { type = 9 id = 42066 }
  foreignminister        = { type = 9 id = 42003 }
  armamentminister       = { type = 9 id = 42084 }
  ministerofsecurity     = { type = 9 id = 42005 }
  ministerofintelligence = { type = 9 id = 42098 }
  chiefofstaff           = { type = 9 id = 42104 }
  chiefofarmy            = { type = 9 id = 42008 }
  chiefofnavy            = { type = 9 id = 42009 }
  chiefofair             = { type = 9 id = 42010 }
  dormant_ministers      = { 42001 42061 42062 42002 42065 42066 42003 42004 42005 42091 42006 42007 42103 42008 42009 42010 }
  # Superior Firepower
  # Peace treaty of Buenos Aires limited Paraguays army to 8000 men, total.
  landunit =
  { id       = { type = 30054 id = 60 }
    name     = "Ejercito de Paraguay"
    location = 837
    division =
    { id       = { type = 30054 id = 6000 }
      name     = "I División de Infantería"
      strength = 50
      type     = infantry
      extra    = anti_air
    }
  }
}
