
##############################
# Country definition for PHI #
##############################

province =
{ id         = 1737
  anti_air   = 3
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 10 current_size = 10 }
}              # Manila
province =
{ id         = 1739
  anti_air   = 4
  landfort   = 4
  air_base   = { size = 8 current_size = 8 }
  Naval_base = { size = 2 current_size = 2 }
}              # Clark Field

#####################
# Country main data #
#####################

country =
{ tag                    = PHI
  control                = USA
  puppet                 = USA
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 200
  oil                    = 200
  supplies               = 100
  money                  = 100
  manpower               = 150
  transports             = 50
  capital                = 1737
  SpyInfo                = { country = "PHI" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 4
    free_market       = 5
    professional_army = 1
    defense_lobby     = 3
    interventionism   = 1
  }
  nationalprovinces      = { 1735 1736 1737 1738 1739 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 }
  ownedprovinces         = { 1735 1736 1737 1738 1739 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 }
  controlledprovinces    = { 1735 1736 1737 1738 1739 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 }
  # Group E 1941 techs
  # ######################
  techapps               = { 2320 4010 4020 2010 2020 2030 2040 2150 2290 2300 2310 2330 2400 2450 2460 2510 1010 1190 6010 14000 }
  diplomacy =
  { relation = { tag = LIB value = 200 }
    relation = { tag = USA value = 200 }
  }
  headofstate            = { type = 9 id = 50001 }
  headofgovernment       = { type = 9 id = 50002 }
  foreignminister        = { type = 9 id = 50041 }
  armamentminister       = { type = 9 id = 50051 }
  ministerofsecurity     = { type = 9 id = 50060 }
  ministerofintelligence = { type = 9 id = 50006 }
  chiefofstaff           = { type = 9 id = 50007 }
  chiefofarmy            = { type = 9 id = 50008 }
  chiefofnavy            = { type = 9 id = 50009 }
  chiefofair             = { type = 9 id = 50010 }
  landunit =
  { id       = { type = 10104 id = 1 }
    location = 1739
    name     = "North Luzon Army"
    division =
    { id       = { type = 10104 id = 2 }
      strength = 100
      name     = "11th Special Services Division"
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 10104 id = 3 }
      strength = 100
      name     = "21st Special Services Division"
      type     = militia
    }
    division =
    { id       = { type = 10104 id = 4 }
      strength = 100
      name     = "31st Special Services Division"
      type     = militia
    }
  }
  navalunit =
  { id       = { type = 10104 id = 14 }
    name     = "Philippine Navy"
    location = 1737
    base     = 1737
    division =
    { id    = { type = 10104 id = 15 }
      name  = "1st Army Transport Flotille"
      type  = transport
      model = 0
    }
  }
}
