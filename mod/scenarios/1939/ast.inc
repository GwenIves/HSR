
##############################
# Country definition for AST #
##############################

province =
{ id         = 1670
  naval_base = { size = 7 current_size = 7 }
  air_base   = { size = 3 current_size = 3 }
  anti_air   = 2
}              # Rabaul
province =
{ id       = 1672
  air_base = { size = 2 current_size = 2 }
  anti_air = 2
}            # Lae
province =
{ id         = 1679
  naval_base = { size = 5 current_size = 5 }
  air_base   = { size = 2 current_size = 2 }
  anti_air   = 4
  oilpool    = 1
  supplypool = 50
}              # Port Moresby
province =
{ id         = 1703
  ic         = 1
  anti_air   = 5
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # Darwin
province =
{ id          = 1712
  anti_air    = 5
  naval_base  = { size = 10 current_size = 10 }
  air_base    = { size = 10 current_size = 10 }

  coastalfort = 1
}               # Perth
province = { id = 1718 anti_air = 1 } # Port Augusta
province =
{ id          = 1722
  ic          = 4
  anti_air    = 4
  naval_base  = { size = 10 current_size = 10 }
  air_base    = { size = 10 current_size = 10 }

  coastalfort = 1
}               # Brisbane
province = { id = 1724 anti_air = 2 ic = 4 } # Newcastle
province =
{ id          = 1727
  ic          = 3
  anti_air    = 4
  naval_base  = { size = 10 current_size = 10 }
  air_base    = { size = 10 current_size = 10 }

  coastalfort = 2
}               # Sydney
province = { id = 1728 anti_air = 2 } # Canberra
province = { id = 1730 ic = 2  coastalfort = 1 anti_air = 3 } # Melbourne
province = { id = 1733 ic = 3 anti_air = 2 } # Adelaide

#####################
# Country main data #
#####################

country =
{ tag                    = AST
  manpower               = 90
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 1728
  # ############################
  # ############################
  # Supplies to Port Moresby
  # Supplies to New Britain
  transports             = 60
  escorts                = 2
  diplomacy =
  { relation = { tag = BEL value = 75 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 } # was access = yes
    relation = { tag = ENG value = 200 } # was access = yes
    relation = { tag = FIN value = 65 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = -200 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = -100 }
    relation = { tag = JAP value = -25 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 } # was access = yes
    relation = { tag = OMN value = 150 }
    relation = { tag = POL value = 200 }
    relation = { tag = SAF value = 200 } # was access = yes
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
  }
  # Bismarck Archipelago
  nationalprovinces      = { 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1718 1719 1720 1721 1722 1723 1724 1725 1726
			     1727 1728 1729 1730 1731 1732 1733 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1734
			   }
  ownedprovinces         = { 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1718 1719 1720 1721 1722 1723 1724 1725 1726
			     1727 1728 1729 1730 1731 1732 1733 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1734 1666 1667 1672 1675 1676 1677
			     1678 1679 1680 1668 1669 1670 1671 1681
			   }
  # Bismarck Archipelago
  controlledprovinces    = { 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1718 1719 1720 1721 1722 1723 1724 1725 1726
			     1727 1728 1729 1730 1731 1732 1733 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1734 1666 1667 1672 1675 1676 1677
			     1678 1679 1680 1668 1669 1670 1671 1681
			   }
  # Commonwealth Tech '36
  # UK 1939 techs
  # ######################
  techapps               = { 1010  1020  1030  1190  1200  1210  1220  1230  1310  1340  14000 14010 2010  2020  2030  2040  2050  2070  2150  2160
			     2290  2300  2310  2320  2330  2400  2450  2460  2510  3010  3020  3070  3080  3090  3130  3140  3190  4010  4020  4030
			     4050  4120  4130  4190  4220  5010  5020  5030  5050  5070  5080  5090  5100  5110  5190  5200  5310  5320  5350  5360
			     6010  6030  6110  6120  8010  8020  8030  8040  8050  8070  8100  8120  8130  8310  9010  9020  9030  9040  9060  9090
			     9140  9150  9160
			   }
  SpyInfo                = { country = "AST" NumberOfSpies = 7 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 1
    free_market       = 8
    freedom           = 10
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 56031 }
  headofgovernment       = { type = 9 id = 56037 }
  foreignminister        = { type = 9 id = 56045 }
  armamentminister       = { type = 9 id = 56057 }
  ministerofsecurity     = { type = 9 id = 56079 }
  ministerofintelligence = { type = 9 id = 56093 }
  chiefofstaff           = { type = 9 id = 56103 }
  chiefofarmy            = { type = 9 id = 56110 }
  chiefofnavy            = { type = 9 id = 56117 }
  chiefofair             = { type = 9 id = 56124 }
  dormant_ministers      = { 56001 56002 56003 56044 56004 56083 56005 56007 56002 56007 }
  # ##	1932:  The total Militia was only 28,000 men strong
  # ##	Regular Army had about 1500 men (mostly coastal artillery)
  # ##	This was brought upto 46,000 by 1938
  # ##	The Militia was used in New Guinea against Japan
  # ######### Australian Army ##############
  landunit =
  { id       = { type = 30001 id = 1 }
    name     = "1st Military District"
    location = 1693
    division =
    { id       = { type = 30001 id = 2 }
      name     = "1st Military District"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 30001 id = 3 }
    name     = "6th Military District"
    location = 1729
    division =
    { id       = { type = 30001 id = 4 }
      name     = "6th Military District"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 30001 id = 5 }
    name     = "2nd Military District"
    location = 1727
    division =
    { id            = { type = 30001 id = 6 }
      name          = "1st Infantry Division"
      strength      = 30
      type          = infantry
      model         = 1
      extra         = artillery
      brigade_model = 3
    }
    division =
    { id            = { type = 30001 id = 195 }
      name          = "2nd Infantry Division"
      strength      = 30
      type          = infantry
      model         = 1
      extra         = artillery
      brigade_model = 3
    }
  }
  landunit =
  { id       = { type = 30001 id = 7 }
    name     = "4th Military District"
    location = 1733
    division =
    { id       = { type = 30001 id = 8 }
      name     = "4th Military District"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 30001 id = 9 }
    name     = "5th Military District"
    location = 1712
    division =
    { id       = { type = 30001 id = 10 }
      name     = "5th Military District"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 30001 id = 11 }
    name     = "7th Military District"
    location = 1703
    division =
    { id       = { type = 30001 id = 12 }
      name     = "Darwin Garrison"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 30001 id = 13 }
    name     = "Port Moresby Garrison"
    location = 1679
    division =
    { id       = { type = 30001 id = 14 }
      name     = "Port Moresby Garrison"
      strength = 100
      type     = garrison
      extra    = anti_air
    }
  }
  landunit =
  { id       = { type = 30001 id = 205 }
    name     = "2nd Military District"
    location = 1730
    division =
    { id       = { type = 30001 id = 206 }
      name     = "3rd Infantry Division"
      strength = 30
      type     = infantry
      model    = 1
    }
  }
  # ######### Australian Navy ##############
  navalunit =
  { id       = { type = 30001 id = 100 }
    name     = "HM Australian Squadron"
    location = 1727
    base     = 1727
    division =
    { id    = { type = 30001 id = 101 }
      name  = "HMAS Australia"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 30001 id = 102 }
      name  = "HMAS Canberra"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 30001 id = 103 }
      name  = "HMAS Sydney"
      type  = light_cruiser
      model = 2
    }
    division =
    { id    = { type = 30001 id = 104 }
      name  = "HMAS Hobart"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 30001 id = 105 }
      name  = "HMAS Adelaide"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 30001 id = 106 }
      name  = "1st Destroyer Flotilla"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 30001 id = 811 }
      name  = "2nd Destroyer Flotilla"
      type  = destroyer
      model = 1
    }
  }
  # 1st Transport Flotilla#
  navalunit =
  { id       = { type = 30001 id = 107 }
    name     = "Transport Flotilla"
    location = 1727
    base     = 1727
    division =
    { id   = { type = 30001 id = 108 }
      name = "HMAS Kanimbla Flotilla"
      type = transport
    }
  }
  # Perth#
  navalunit =
  { id       = { type = 30001 id = 109 }
    name     = "HMAS Perth"
    location = 538 # Bermuda
    base     = 538
    division =
    { id    = { type = 30001 id = 110 }
      name  = "HMAS Perth"
      type  = light_cruiser
      model = 2
    }
  }
  # 1st Transport Flotilla#
  navalunit =
  { id       = { type = 30001 id = 810 }
    name     = "1st Transport Flotilla"
    location = 1727
    base     = 1727
    division =
    { id   = { type = 30001 id = 800 }
      name = "1st Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 30001 id = 801 }
      name = "2nd Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 30001 id = 802 }
      name = "3rd Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 30001 id = 803 }
      name = "4th Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 30001 id = 804 }
      name = "5th Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 30001 id = 805 }
      name = "6th Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 30001 id = 806 }
      name = "7th Transport Flotilla"
      type = transport
    }
  }
  # ################## Australian Air Force #######################
  # ## An approximation of the airforce in sep 1939.###
  # NAV: 82 Ansons, 21 seagulls (walrus).
  # TAC: 54 Demons, 10 Demon II's (about to upgrade to Hudsons)
  # FTR: 7 Wirraways
  # OTHER: 82 trainers & transport
  airunit =
  { location = 1703
    base     = 1703
    id       = { type = 30001 id = 50 }
    name     = "RAAF Laverton"
    division =
    { id       = { type = 30001 id = 51 }
      name     = "No.2 RAAF Tactical Group"
      strength = 50
      type     = tactical_bomber
      model    = 0
    }
  }
  airunit =
  { location = 1727
    base     = 1727
    id       = { type = 30001 id = 52 }
    name     = "RAAF Richmond"
    division =
    { id       = { type = 30001 id = 53 }
      name     = "No.1 RAAF Naval Bomber Group"
      strength = 100
      type     = naval_bomber
      model    = 0
    }
  }
  # Began Recruiting 6th Division from 15th September 1939.
  division_development =
  { id   = { type = 30001 id = 15 }
    name = "6th Australian Motorized Div."
    type = motorized
    cost = 5
    date = { year = 1939 month = december }
  }
  # 1st Cavalry upgraded to 1st Motorised Division.
  division_development =
  { id   = { type = 30001 id = 16 }
    name = "1st Australian Motorized Div."
    type = motorized
    cost = 2
    date = { year = 1940 month = march }
  }
  # 2nd Cavalry upgraded to 2nd Motorised Division.
  division_development =
  { id   = { type = 30001 id = 17 }
    name = "2nd Australian Motorized Div."
    type = motorized
    cost = 2
    date = { year = 1940 month = april }
  }
}
