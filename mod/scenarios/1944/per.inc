
##############################
# Country definition for PER #
##############################

province =
{ id         = 1825
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 3 current_size = 3 }
}              # Abadan

#####################
# Country main data #
#####################

country =
{ tag                    = PER
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 1502
  manpower               = 96
  puppet                 = ENG
  control                = ENG
  dissent                = 5
  SpyInfo                = { country = "PER" NumberOfSpies = 6 }
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
  ownedprovinces         = { 1495 1496 1497 1498 1499 1500 1501 1502 1503 1787 1788 1789 1825 1826 1859 }
  controlledprovinces    = { 1495 1496 1497 1498 1499 1502 1789 1825 1826 }
  diplomacy =
  { relation = { tag = AFG value = 25 }
    # relation = { tag = DEN value = 50 }
    relation = { tag = IRQ value = 125 }
    relation = { tag = SAU value = 100 }
    relation = { tag = SOV value = -20 }
    relation = { tag = SWE value = 50 }
    relation = { tag = TUR value = -50 }
    relation = { tag = ENG value = 100 }
  }
  # Group D 1944 techs
  # ######################
  techapps             = { 4010  4020  4030  4120  4130  4140  2010  2020  2030  2040  2050  2070  2150  2160  2290  2300  2310  2320  2330  1010
			     1020  1030  1040  1190  1200  1210  1220  1110  1120  2330  2400  2410  2450  2460  2470  2510  2520  1310  9010  9020
			     5010  5050  5080  5090  5100  5190  5200  5250  5260  6210  6300  6310  14000
			   }
  headofstate            = { type = 9 id = 53032 }
  headofgovernment       = { type = 9 id = 53002 }
  foreignminister        = { type = 9 id = 53044 }
  armamentminister       = { type = 9 id = 53057 }
  ministerofsecurity     = { type = 9 id = 53072 }
  ministerofintelligence = { type = 9 id = 53081 }
  chiefofstaff           = { type = 9 id = 53007 }
  chiefofarmy            = { type = 9 id = 53008 }
  chiefofnavy            = { type = 9 id = 53009 }
  chiefofair             = { type = 9 id = 53106 }
  dormant_teams		 = { 6104 6105 6108 }

  landunit =
  { location = 1502
    id       = { type = 11364 id = 1 }
    name     = "Royal Persian Army"
    division =
    { id           = { type = 11364 id = 2 }
      name         = "1a División de Caballería"
      type         = infantry
      strength     = 100
      organisation = 40
    }
    division =
    { id           = { type = 11364 id = 3 }
      name         = "2a División de Caballería"
      type         = infantry
      strength     = 100
      organisation = 40
    }
    division =
    { id           = { type = 11364 id = 4 }
      name         = "3a División de Caballería"
      type         = infantry
      strength     = 100
      organisation = 40
    }
  }
}
