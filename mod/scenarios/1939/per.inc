
##############################
# Country definition for PER #
##############################

province =
{ id         = 1497
  anti_air   = 2
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
}              # Bandar Abbas

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
  money                  = 100
  capital                = 1502
  manpower               = 96
  diplomacy =
  { relation = { tag = AFG value = 25 }
    relation = { tag = DEN value = 50 }
    relation = { tag = ENG value = 25 }
    relation = { tag = IRQ value = 125 }
    relation = { tag = SAU value = 100 }
    relation = { tag = SOV value = -20 }
    relation = { tag = SWE value = 50 }
    relation = { tag = TUR value = -50 }
  }
  nationalprovinces      = { 1859 1787 1503 1502 1788 1789 1825 1498 1497 1499 1826 1501 1500 1496 1495 }
  ownedprovinces         = { 1859 1787 1503 1502 1788 1789 1825 1498 1497 1499 1826 1501 1500 1496 1495 }
  controlledprovinces    = { 1859 1787 1503 1502 1788 1789 1825 1498 1497 1499 1826 1501 1500 1496 1495 }
  # ROTW Minor Tech '36
  # Group E 1939 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 6210 6300 }
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
  headofstate            = { type = 9 id = 53001 }
  headofgovernment       = { type = 9 id = 53002 }
  foreignminister        = { type = 9 id = 53045 }
  armamentminister       = { type = 9 id = 53060 }
  ministerofsecurity     = { type = 9 id = 53072 }
  ministerofintelligence = { type = 9 id = 53082 }
  chiefofstaff           = { type = 9 id = 53090 }
  chiefofarmy            = { type = 9 id = 53096 }
  chiefofnavy            = { type = 9 id = 53009 }
  chiefofair             = { type = 9 id = 53106 }
  dormant_ministers      = { 53003 53042 53004 53056 53005 53070 53071 53006 }
  landunit =
  { location = 1502
    id       = { type = 30025 id = 1 }
    name     = "Lasgar Parsi"
    division =
    { id    = { type = 30025 id = 2 }
      name  = "1. Dastebandi Sarbaze Piyade"
      type  = infantry
      extra = artillery
    }
    division =
    { id   = { type = 30025 id = 3 }
      name = "2. Dastebandi Sarbaze Piyade"
      type = infantry
    }
    division =
    { id   = { type = 30025 id = 4 }
      name = "1. Dastebandi Savareh"
      type = cavalry
    }
  }
}
