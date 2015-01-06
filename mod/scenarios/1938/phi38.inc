
##############################
# Country definition for PHI #
##############################

province =
{ id         = 1737
  anti_air   = 1
  naval_base = { size = 4 current_size = 4 }
}              # Manila
province = { id = 1738 landfort = 3 } # Bataan
province =
{ id       = 1739
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
}            # Clark Field

#####################
# Country main data #
#####################

country =
{ tag                    = PHI
  control                = USA
  puppet                 = USA
  energy                 = 200
  metal                  = 200
  rare_materials         = 200
  oil                    = 200
  supplies               = 500
  money                  = 10
  manpower               = 150
  transports             = 50
  capital                = 1737
  diplomacy =
  { relation = { tag = LIB value = 200 }
    relation = { tag = USA value = 200 }
  }
  nationalprovinces      = { 1735 1736 1737 1738 1739 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 }
  ownedprovinces         = { 1735 1736 1737 1738 1739 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 }
  controlledprovinces    = { 1735 1736 1737 1738 1739 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 }
  # GW infantry
  techapps               = { 1010 1190 2150 2290 4010 5010 5080 5090 5190 6010 }
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
  headofstate            = { type = 9 id = 50001 }
  headofgovernment       = { type = 9 id = 50002 }
  foreignminister        = { type = 9 id = 50040 }
  armamentminister       = { type = 9 id = 50004 }
  ministerofsecurity     = { type = 9 id = 50057 }
  ministerofintelligence = { type = 9 id = 50078 }
  chiefofstaff           = { type = 9 id = 50007 }
  chiefofarmy            = { type = 9 id = 50072 }
  chiefofnavy            = { type = 9 id = 50083 }
  chiefofair             = { type = 9 id = 50010 }
  # Firepower
  landunit =
  { id       = { type = 11804 id = 1 }
    location = 1737
    name     = "Philippine Army"
    division =
    { id       = { type = 11804 id = 2 }
      strength = 50
      name     = "Philippine Constabulary"
      type     = militia
    }
    division =
    { id       = { type = 11804 id = 3 }
      strength = 50
      name     = "Philippine Scouts"
      type     = infantry
    }
  }
}
