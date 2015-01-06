
##############################
# Country definition for PER #
##############################

province =
{ id         = 1497
  anti_air   = 1
  naval_base = { size = 2 current_size = 2 }
}              # Bandar Abbas

#####################
# Country main data #
#####################

country =
{ tag                    = PER
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 100
  capital                = 1502
  manpower               = 96
  SpyInfo                = { country = "PER" NumberOfSpies = 5 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 5
  }
  nationalprovinces      = { 1859 1787 1503 1502 1788 1789 1825 1498 1497 1499 1826 1501 1500 1496 1495 }
  ownedprovinces         = { 1859 1787 1503 1502 1788 1789 1825 1498 1497 1499 1826 1501 1500 1496 1495 }
  controlledprovinces    = { 1859 1787 1503 1502 1788 1789 1825 1498 1497 1499 1826 1501 1500 1496 1495 }
  # Group E 1941 techs
  # ######################
  techapps               = { 2320 1200 4010 4020 2010 2020 2030 2040 2150 2290 2300 2310 2330 2400 2450 2460 2510 1010 1190 6010 14000 }
  diplomacy =
  { relation = { tag = AFG value = 25 }
    # relation = { tag = DEN value = 50 }
    relation = { tag = ENG value = 25 }
    # relation = { tag = IRQ value = 125 }
    relation = { tag = SAU value = 100 }
    relation = { tag = SOV value = -20 }
    relation = { tag = SWE value = 50 }
    relation = { tag = TUR value = -50 }
  }
  headofstate            = { type = 9 id = 53001 }
  headofgovernment       = { type = 9 id = 53034 }
  foreignminister        = { type = 9 id = 53047 }
  armamentminister       = { type = 9 id = 53063 }
  ministerofsecurity     = { type = 9 id = 53073 }
  ministerofintelligence = { type = 9 id = 53083 }
  chiefofstaff           = { type = 9 id = 53091 }
  chiefofarmy            = { type = 9 id = 53097 }
  chiefofnavy            = { type = 9 id = 53102 }
  chiefofair             = { type = 9 id = 53107 }
  dormant_ministers      = { 53003 53042 53004 53056 53005 53070 53071 53006 53002 53033 53043 53044 53045 53057 53058 53059 53060 53061 53081 53082
			   }
  landunit =
  { location = 1502
    name     = "Lasgar Parsi"
    id       = { type = 10114 id = 1 }
    division =
    { id       = { type = 10114 id = 2 }
      name     = "1. Dastebandi Sarbaze Piyade"
      strength = 100
      type     = infantry
      model    = 1
      extra    = artillery
    }
    division =
    { id       = { type = 10114 id = 3 }
      name     = "1. Dastebandi Savareh"
      type     = cavalry
      strength = 100
      model    = 1
    }
  }
}
