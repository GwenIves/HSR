
##############################
# Country definition for MON #
##############################

country =
{ tag                    = MON
  puppet                 = SOV
  control                = SOV
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 200
  supplies               = 500
  money                  = 100
  manpower               = 7
  capital                = 1404
  SpyInfo                = { country = "MON" NumberOfSpies = 3 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 10
    freedom           = 5
    free_market       = 3
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 1
  }
  nationalprovinces      = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 1207 1398 1386 1382 1387 1388 1397 }
  ownedprovinces         = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 }
  controlledprovinces    = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 }
  # Group E 1941 techs
  # ######################
  techapps               = { 2320 4010 4020 2010 2020 2030 2040 2150 2290 2300 2310 2330 2400 2450 2460 2510 1010 1190 6210 6300 }

  diplomacy =
  { relation = { tag = SIK value = 100 }
    relation = { tag = SOV value = 150 }
    relation = { tag = TAN value = 200 }
  }
  headofstate            = { type = 9 id = 94034 }
  headofgovernment       = { type = 9 id = 94040 }
  foreignminister        = { type = 9 id = 94047 }
  armamentminister       = { type = 9 id = 94055 }
  ministerofsecurity     = { type = 9 id = 94065 }
  ministerofintelligence = { type = 9 id = 94074 }
  chiefofstaff           = { type = 9 id = 94083 }
  chiefofarmy            = { type = 9 id = 94089 }
  chiefofnavy            = { type = 9 id = 94095 }
  chiefofair             = { type = 9 id = 94102 }
  dormant_ministers      = { 94001 94002 94003 94044 94004 94052 94005 94062 94006 94071 94007 94009 94093 94010 94100 94033 94038 94039 94045 94046
			     94053 94054 94063 94064 94072 94073 94081 94082 94008 94088 94094 94101
			   }
  # Human Wave
  # No Nuclear Research (Tier 5)
  landunit =
  { location = 1404
    name     = "Armija Mongol Nayramdakh"
    id       = { type = 10108 id = 1 }
    division =
    { id    = { type = 10108 id = 2 }
      name  = "1. Mongol Strelkovaya Div."
      type  = infantry
      model = 0
      extra = artillery
    }
    division =
    { id    = { type = 10108 id = 3 }
      name  = "2. Nayramdakh Kavaleriyskaya Div."
      type  = cavalry
      model = 1
    }
    division =
    { id   = { type = 10108 id = 4 }
      name = "3. Nayramdakh Opolcheniya Div."
      type = militia
    }
    division =
    { id   = { type = 10108 id = 5 }
      name = "4. Nayramdakh Opolcheniya Div."
      type = militia
    }
  }
}
