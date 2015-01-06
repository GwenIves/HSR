
##############################
# Country definition for AFG #
##############################

country =
{ tag                    = AFG
  # Resource Reserves
  energy                 = 5000
  metal                  = 5000
  rare_materials         = 2000
  oil                    = 2000
  supplies               = 2000
  manpower               = 110
  capital                = 1486
  SpyInfo                = { country = "AFG" NumberOfSpies = 5}
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    free_market       = 7
    freedom           = 6
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 1
  }
  nationalprovinces      = { 1486 1493 1492 1484 }
  ownedprovinces         = { 1486 1493 1492 1484 }
  controlledprovinces    = { 1486 1493 1492 1484 }
  # ROTW Minor Tech '36
  # Group D 1944 techs
  # ######################
  techapps               = { 4010  4020  4030  4120  4130  4140  2010  2020  2030  2040  2050  2070  2150  2160  2290  2300  2310  2320  2330  1010
			     1020  1030  1040  1190  1200  1210  1220  1110  1120  2330  2400  2410  2450  2460  2470  2510  2520  1310  9010  9020
			     5010  5050  5080  5090  5100  5190  5200  6210  6300  6310  14000
			   }
  diplomacy =
  { relation = { tag = ENG value = -75 }
    # relation = { tag = ITA value = 50 }
    relation = { tag = PER value = 25 }
    relation = { tag = SAU value = 50 }
    relation = { tag = SOV value = 1 }
    relation = { tag = TUR value = 50 }
  }
  dormant_ministers      = { 54003 54006 54060 54001 54002 54004 54005 54007 54008 54009 54010 54026 54033 54034 54039 54046 54054 54055 54065 54077
			   }
  headofstate            = { type = 9 id = 54021 }
  headofgovernment       = { type = 9 id = 54023 }
  foreignminister        = { type = 9 id = 54030 }
  armamentminister       = { type = 9 id = 54042 }
  ministerofsecurity     = { type = 9 id = 54049 }
  ministerofintelligence = { type = 9 id = 54058 }
  chiefofstaff           = { type = 9 id = 54063 }
  chiefofarmy            = { type = 9 id = 54068 }
  chiefofnavy            = { type = 9 id = 54072 }
  chiefofair             = { type = 9 id = 54078 }
  landunit =
  { id       = { type = 11437 id = 1 }
    location = 1486
    name     = "Central Army"
    division =
    { id       = { type = 11437 id = 2 }
      name     = "Royal Afghan Household"
      strength = 90
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 11437 id = 3 }
      name     = "1st Infantry Division"
      strength = 50
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 11437 id = 4 }
      name     = "2nd Infantry Division"
      strength = 50
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 11437 id = 5 }
      name     = "4th Infantry Division"
      strength = 50
      type     = infantry
      model    = 1
    }
  }
  # #########################
  # #########################
  landunit =
  { id       = { type = 11437 id = 6 }
    location = 1486
    name     = "Southern Army"
    division =
    { id       = { type = 11437 id = 7 }
      name     = "5th Infantry Division"
      strength = 50
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 11437 id = 8 }
      name     = "6th Infantry Division"
      strength = 50
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 11437 id = 9 }
      name     = "7th Infantry Division"
      strength = 50
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 11437 id = 10 }
      name     = "Farah Cavalry"
      strength = 50
      type     = cavalry
      model    = 1
    }
  }
  # ##########################
  # ###########################
  landunit =
  { id       = { type = 11437 id = 11 }
    location = 1486
    # Various Mixed Divisions, each based at different city humped in one landunit#
    name     = "Mixed Army"
    division =
    { id       = { type = 11437 id = 12 }
      name     = "1st Mixed Infantry"
      strength = 50
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 11437 id = 13 }
      name     = "2nd Mixed Infantry"
      strength = 50
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 11437 id = 14 }
      name     = "3rd Mixed Infantry"
      strength = 50
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 11437 id = 15 }
      name     = "4th Mixed Infantry"
      strength = 50
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 11437 id = 16 }
      name     = "5th Mixed Infantry"
      strength = 50
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 11437 id = 17 }
      name     = "6th Mixed Infantry"
      strength = 50
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 11437 id = 18 }
      name     = "7th Mixed Infantry"
      strength = 50
      type     = infantry
      model    = 1
    }
  }
}
