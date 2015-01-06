
##############################
# Country definition for SIK #
##############################

country =
{ tag                    = SIK
  puppet                 = CHI
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 100
  capital                = 1433
  manpower               = 665
  dissent                = 48
  diplomacy =
  { relation = { tag = CHC value = -150 }
    relation = { tag = JAP value = -170 }
    relation = { tag = MAN value = -170 }
    relation = { tag = MEN value = -200 }
    relation = { tag = SOV value = 125 access = yes }
    relation = { tag = MON value = 100 }
    relation = { tag = TAN value = 125 }
  }
  nationalprovinces      = { 1421 1432 1433 1435 1445 1446 1447 1430 1431 }
  ownedprovinces         = { 1421 1432 1433 1435 1445 1446 1447 1430 1431 }
  controlledprovinces    = { 1421 1432 1433 1435 1445 1446 1447 1430 1431 }
  # ROTW Minor Tech '36
  # Group E 1941 techs
  # ######################
  techapps               = { 2320 4010 4020 2010 2020 2030 2040 2150 2290 2300 2310 2330 2400 2450 2460 2510 1010 1190 6210 6300 }
  SpyInfo                = { country = "SIK" NumberOfSpies = 3 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 72001 }
  headofgovernment       = { type = 9 id = 72002 }
  foreignminister        = { type = 9 id = 72031 }
  armamentminister       = { type = 9 id = 72032 }
  ministerofsecurity     = { type = 9 id = 72035 }
  ministerofintelligence = { type = 9 id = 72036 }
  chiefofstaff           = { type = 9 id = 72039 }
  chiefofarmy            = { type = 9 id = 72008 }
  chiefofnavy            = { type = 9 id = 72009 }
  chiefofair             = { type = 9 id = 72010 }
  # Human Wave
  landunit =
  { location = 1433
    name     = "Xin'jiang Jüntuan 1"
    id       = { type = 25600 id = 1 }
    division =
    { id    = { type = 25600 id = 2 }
      name  = "1 Xin'jiang Shi"
      type  = infantry
      model = 0
    }
    division =
    { id   = { type = 25600 id = 3 }
      name = "7 Xin'jiang Lü"
      type = militia
    }
    division =
    { id   = { type = 25600 id = 4 }
      name = "8 Xin'jiang Lü"
      type = militia
    }
  }
}
