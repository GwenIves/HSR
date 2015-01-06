
##############################
# Country definition for PHI #
##############################

province =
{ id         = 1735
  naval_base = { size = 7 current_size = 7 }
  air_base   = { size = 1 current_size = 1 }
}              # Palawan
province =
{ id         = 1737
  anti_air   = 2
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 1 current_size = 1 }
}              # Manila
province =
{ id         = 1739
  anti_air   = 4
  air_base   = { size = 5 current_size = 5 }
  Naval_base = { size = 2 current_size = 2 }
}              # Clark Field
province =
{ id         = 1740
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 1 current_size = 1 }
}              # Lingayen Gulf
province =
{ id         = 1750
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 5 current_size = 5 }
}              # Davao

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
  supplies               = 500
  money                  = 10
  manpower               = 150
  transports             = 50
  capital                = 1737
  diplomacy =
  { relation = { tag = USA value = 200 }
  }
  nationalprovinces      = { 1735 1736 1737 1738 1739 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 }
  ownedprovinces         = { 1735 1736 1737 1738 1739 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 }
  controlledprovinces    = { 1735 1736 1737 1738 1739 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 }
  # ROTW Minor Tech '36
  # Group E 1939 techs
  # ######################
  # GW fighter
  techapps               = { 1010 1020 1030 1040 1190 14000 14010 14020 2150 2290 4010 5010 5080 5090 5100 5190 6010 6030 6120 6130 }
  SpyInfo                = { country = "PHI" NumberOfSpies = 1 }
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
  headofstate            = { type = 9 id = 50035 }
  headofgovernment       = { type = 9 id = 50088 }
  foreignminister        = { type = 9 id = 50042 }
  armamentminister       = { type = 9 id = 50055 }
  ministerofsecurity     = { type = 9 id = 50067 }
  ministerofintelligence = { type = 9 id = 50081 }
  chiefofstaff           = { type = 9 id = 50070 }
  chiefofarmy            = { type = 9 id = 50075 }
  chiefofnavy            = { type = 9 id = 50084 }
  chiefofair             = { type = 9 id = 50086 }
  dormant_ministers      = { 50001 50039 50034 }
  landunit =
  { id       = { type = 11804 id = 1 }
    location = 1737
    name     = "North Luzon Army"
    division =
    { id            = { type = 11804 id = 2 }
      strength      = 100
      name          = "11th Special Services Division"
      type          = infantry
      extra         = artillery
      model         = 3
      brigade_model = 0
    }
    division =
    { id       = { type = 11804 id = 3 }
      strength = 100
      name     = "21st Special Services Division"
      type     = militia
      model    = 1
    }
  }
  # #################################
  # #################################
  landunit =
  { id       = { type = 11804 id = 6 }
    location = 1743
    name     = "South Luzon Army"
    division =
    { id            = { type = 11804 id = 7 }
      strength      = 100
      name          = "41st Special Services Division"
      type          = infantry
      extra         = artillery
      model         = 3
      brigade_model = 0
    }
    division =
    { id       = { type = 11804 id = 8 }
      strength = 100
      name     = "51st Special Services Division"
      type     = militia
      model    = 1
    }
  }
  # ################################
  # ###############################
  landunit =
  { id       = { type = 11804 id = 9 }
    location = 1749
    name     = "Visayan-Mindanao Army"
    division =
    { id            = { type = 11804 id = 10 }
      strength      = 100
      name          = "61st Special Services Division"
      type          = infantry
      extra         = artillery
      model         = 3
      brigade_model = 0
    }
    division =
    { id       = { type = 11804 id = 12 }
      strength = 100
      name     = "101st Special Services Division"
      type     = militia
      model    = 1
    }
  }
}
