
##############################
# Country definition for AFG #
##############################

country =
{ tag                    = AFG
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 100
  manpower               = 110
  capital                = 1486
  SpyInfo                = { country = "AFG" NumberOfSpies = 5 }
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
  # Group E 1941 techs
  # ######################
  techapps               = { 2320 4010 4020 2010 2020 2030 2040 2150 2290 2300 2310 2330 2400 2450 2460 2510 1010 1190 6210 6300 14000 }
  diplomacy =
  { relation = { tag = ENG value = -75 }
    relation = { tag = ITA value = 50 }
    relation = { tag = PER value = 25 }
    relation = { tag = SAU value = 50 }
    relation = { tag = SOV value = 1 }
    relation = { tag = TUR value = 50 }
  }
  headofstate            = { type = 9 id = 54021 }
  headofgovernment       = { type = 9 id = 54023 }
  foreignminister        = { type = 9 id = 54027 }
  armamentminister       = { type = 9 id = 54040 }
  ministerofsecurity     = { type = 9 id = 54049 }
  ministerofintelligence = { type = 9 id = 54057 }
  chiefofstaff           = { type = 9 id = 54061 }
  chiefofarmy            = { type = 9 id = 54066 }
  chiefofnavy            = { type = 9 id = 54070 }
  chiefofair             = { type = 9 id = 54078 }
  dormant_ministers      = { 54003 54006 54060 54001 54002 54004 54005 54007 54008 54009 54010 54026 54033 54034 54039 54046 54054 54055 54065 54077
			   }
  landunit =
  { id       = { type = 10000 id = 1 }
    location = 1486
    name     = "Royal Afghani Army"
    division =
    { id       = { type = 10000 id = 2 }
      name     = "Royal Guard"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 10000 id = 3 }
      name     = "Faizabad Militia"
      strength = 80
      type     = militia
    }
    division =
    { id       = { type = 10000 id = 4 }
      name     = "Ghazni Militia"
      strength = 70
      type     = militia
    }
  }
  landunit =
  { id       = { type = 10000 id = 5 }
    location = 1486
    name     = "Herat Army"
    division =
    { id       = { type = 10000 id = 6 }
      name     = "Herat Militia"
      strength = 100
      type     = militia
    }
    division =
    { id       = { type = 10000 id = 7 }
      name     = "Herat Cavalry"
      strength = 30
      type     = cavalry
      model    = 0
    }
  }
  landunit =
  { id       = { type = 10000 id = 8 }
    location = 1493
    name     = "Kandahar Army"
    division =
    { id       = { type = 10000 id = 9 }
      name     = "Jalalabad Militia"
      strength = 100
      type     = militia
    }
    division =
    { id       = { type = 10000 id = 10 }
      name     = "Kandahar Militia"
      strength = 100
      type     = militia
    }
  }
}
