
##############################
# Country definition for MON #
##############################

province =
{ id       = 1404
  air_base = { size = 1 current_size = 1 }
}            # Ulan Bator

#####################
# Country main data #
#####################

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
  money                  = 10
  manpower               = 7
  capital                = 1404
  diplomacy =
  { relation = { tag = SIK value = 100 }
    relation = { tag = SOV value = 150 }
    relation = { tag = TAN value = 200 }
  }
  nationalprovinces      = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 1207 1398 1386 1382 1387 1388 1397 }
  ownedprovinces         = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 }
  controlledprovinces    = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 }
  # ROTW Minor Tech '36
  # Group E 1939 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 6210 6300 }
  SpyInfo                = { country = "MON" NumberOfSpies = 3 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 7
    freedom           = 5
    free_market       = 3
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 94033 }
  headofgovernment       = { type = 9 id = 94039 }
  foreignminister        = { type = 9 id = 94046 }
  armamentminister       = { type = 9 id = 94054 }
  ministerofsecurity     = { type = 9 id = 94064 }
  ministerofintelligence = { type = 9 id = 94073 }
  chiefofstaff           = { type = 9 id = 94082 }
  chiefofarmy            = { type = 9 id = 94089 }
  chiefofnavy            = { type = 9 id = 94094 }
  chiefofair             = { type = 9 id = 94101 }
  dormant_ministers      = { 94001 94002 94003 94044 94004 94052 94005 94062 94006 94071 94007 94009 94093 94010 94100 }
  landunit =
  { location = 1404
    id       = { type = 30034 id = 1 }
    name     = "1. Armija Mongol Nayramdakh"
    division =
    { id    = { type = 30034 id = 2 }
      name  = "1. Mongol Strelkovaya Div."
      type  = infantry
      extra = artillery
    }
    division =
    { id   = { type = 30034 id = 3 }
      name = "1. Nayramdakh Kavaleriyskaya Div."
      type = cavalry
    }
  }
  landunit =
  { location = 1436
    name     = "2. Armija Mongol Nayramdakh"
    id       = { type = 30034 id = 4 }
    division =
    { id   = { type = 30034 id = 5 }
      name = "2. Mongol Strelkovaya Div."
      type = infantry
    }
    division =
    { id   = { type = 30034 id = 6 }
      name = "2. Nayramdakh Kavaleriyskaya Div."
      type = cavalry
    }
    division =
    { id   = { type = 30034 id = 7 }
      name = "3. Nayramdakh Opolcheniya Div."
      type = militia
    }
    division =
    { id   = { type = 30034 id = 8 }
      name = "4. Nayramdakh Opolcheniya Div."
      type = militia
    }
  }
}
