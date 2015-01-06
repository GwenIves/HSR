
##############################
# Country definition for SIK #
##############################

province =
{ id       = 1433
  air_base = { size = 2 current_size = 2 }
}            # Urumqi

#####################
# Country main data #
#####################

country =
{ tag                    = SIK
  # Resource Reserves
  energy                 = 20000
  metal                  = 20000
  rare_materials         = 5000
  oil                    = 5000
  supplies               = 2000
  money                  = 10
  capital                = 1433 # Urumqi
  manpower               = 200
  dissent                = 30
  puppet                 = SOV
  control                = SOV
  SpyInfo                = { country = "SIk" NumberOfSpies = 2 }
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
  ownedprovinces         = { 1421 1430 1431 1432 1433 1435 1445 1446 1447 }
  controlledprovinces    = { 1421 1430 1431 1432 1433 1435 1445 1446 1447 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 1010  1020  1030  1190  1200  14000 14010 2150  2290  4010  6210  6300  6320  6340  2010  2020  2030  2040  2300  2310
			     2400  2450  2460  4020  4120  4130  5050
			   }
  nationalprovinces      = { 1421 1432 1433 1435 1445 1446 1447 1430 1431 }
  headofstate            = { type = 9 id = 72001 }
  headofgovernment       = { type = 9 id = 72002 }
  foreignminister        = { type = 9 id = 72031 }
  armamentminister       = { type = 9 id = 72032 }
  ministerofsecurity     = { type = 9 id = 72035 }
  ministerofintelligence = { type = 9 id = 72036 }
  chiefofstaff           = { type = 9 id = 72039 }
  chiefofarmy            = { type = 9 id = 72040 }
  chiefofnavy            = { type = 9 id = 72009 }
  chiefofair             = { type = 9 id = 72010 }
  landunit =
  { location = 1433
    name     = "Xin'jiang JÅEtuan 1"
    id       = { type = 30951 id = 1 }
    division =
    { id   = { type = 30954 id = 1 }
      name = "1 Xin'jiang Shi"
      type = infantry
    }
    division =
    { id   = { type = 30954 id = 2 }
      name = "2 Xin'jiang Shi"
      type = infantry
    }
    division =
    { id   = { type = 30954 id = 3 }
      name = "3 Xin'jiang Shi"
      type = infantry
    }
    division =
    { id   = { type = 30954 id = 4 }
      name = "4 Xin'jiang Shi"
      type = infantry
    }
    division =
    { id   = { type = 30954 id = 5 }
      name = "5 Xin'jiang Shi"
      type = infantry
    }
  }
}
