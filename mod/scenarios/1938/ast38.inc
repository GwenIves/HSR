
##############################
# Country definition for AST #
##############################

province =
{ id         = 1670
  naval_base = { size = 6 current_size = 6 }
  air_base   = { size = 1 current_size = 1 }
}              # Rabaul
province =
{ id       = 1672
  air_base = { size = 1 current_size = 1 }
}            # Lae
province =
{ id         = 1679
  naval_base = { size = 6 current_size = 6 }
  air_base   = { size = 2 current_size = 2 }
}              # Port Moresby
province =
{ id         = 1703
  ic         = 1
  naval_base = { size = 6 current_size = 6 }
  air_base   = { size = 2 current_size = 2 }
}              # Darwin
province =
{ id          = 1712
  coastalfort = 1
  naval_base  = { size = 6 current_size = 6 }
  air_base    = { size = 2 current_size = 2 }
}               # Perth
province =
{ id          = 1722
  ic          = 4
  coastalfort = 1
  naval_base  = { size = 10 current_size = 10 }
  air_base    = { size = 2 current_size = 2 }
}               # Brisbane
province = { id = 1724 ic = 2 } # Newcastle
province =
{ id          = 1727
  ic          = 3
  coastalfort = 2
  naval_base  = { size = 10 current_size = 10 }
  air_base    = { size = 4 current_size = 4 }
}               # Sydney
province = { id = 1730 ic = 2  coastalfort = 1 } # Melbourne
province = { id = 1733 ic = 3 } # Adelaide

#####################
# Country main data #
#####################

country =
{ tag                    = AST
  peacetime_ic_mod       = 0.2 # this will keep spending tight (20%) until outbreak of war
  ai                     = "AST_1936.ai"
  manpower               = 10
  energy                 = 10000
  metal                  = 10000
  rare_materials         = 2000
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 1728
  transports             = 30
  escorts                = 2
  diplomacy =
  { relation = { tag = BEL value = 75 }
    relation = { tag = BHU value = 150 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = FIN value = 65 }
    relation = { tag = GER value = -50 }
    relation = { tag = ITA value = -10 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = JAP value = -25 }
    relation = { tag = NEP value = 150 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = POL value = 200 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 125 }
  }
  SpyInfo                = { country = "AST" NumberOfSpies = 6 }

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
  # Great War Infantry
  techapps               = { 1010  1020  1110  1150  1190  1200  1210  1310  1340  2010  2020  2030  2150  2290  2300  2310  2320  2400  2450  2460
			     3010  3020  3030  3070  3080  3090  3100  3130  3140  3150  3400  3410  4010  4020  4030  4120  4130  4140  4190  5010
			     5020  5030  5050  5080  5090  5190  5200  5310  5320  5350  5360  6010  6030  6110  8010  8020  8040  8050  8070  8120
			     8310  9010  9020  9030  9090  14000 14010
			   }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 2
    free_market       = 8
    freedom           = 10
    professional_army = 5
    defense_lobby     = 2
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 56031 }
  headofgovernment       = { type = 9 id = 56002 }
  foreignminister        = { type = 9 id = 56045 }
  armamentminister       = { type = 9 id = 56057 }
  ministerofsecurity     = { type = 9 id = 56080 }
  ministerofintelligence = { type = 9 id = 56094 }
  chiefofstaff           = { type = 9 id = 56105 }
  chiefofarmy            = { type = 9 id = 56113 }
  chiefofnavy            = { type = 9 id = 56119 }
  chiefofair             = { type = 9 id = 56124 }
  dormant_ministers      = { 56001 56003 56004 56083 56005 56007 }
  # ##	1932:  The total Militia was only 28,000 men strong
  # ##	Regular Army had about 1500 men (mostly coastal artillery)
  # ##	This was brought upto 46,000 by 1938
  # ##	In 1939, total was 82800 of whom only 2800 were regulars.
  # ######### Australian Army ##############
  landunit =
  { id       = { type = 30001 id = 1 }
    name     = "1st Military District"
    location = 1722 # Brisbane
    division =
    { id       = { type = 30001 id = 2 }
      name     = "Queensland Cameron Highlanders"
      strength = 50
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 30001 id = 3 }
    name     = "2nd Military District"
    location = 1727
    division =
    { id       = { type = 30001 id = 4 }
      name     = "1st Infantry Division"
      strength = 50
      type     = garrison
    }
    division =
    { id       = { type = 30001 id = 5 }
      name     = "2nd Infantry Division"
      strength = 50
      type     = garrison
    }
    division =
    { id       = { type = 30001 id = 6 }
      name     = "1st Cavalry Division"
      strength = 80
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 30001 id = 7 }
    name     = "3rd Military District"
    location = 1730
    division =
    { id       = { type = 30001 id = 8 }
      name     = "3rd Infantry Division"
      strength = 50
      type     = garrison
    }
    division =
    { id       = { type = 30001 id = 9 }
      name     = "4th Infantry Division"
      strength = 50
      type     = garrison
    }
    division =
    { id       = { type = 30001 id = 10 }
      name     = "2nd Cavalry Division"
      strength = 80
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 30001 id = 11 }
    name     = "4th Military District"
    location = 1733
    division =
    { id       = { type = 30001 id = 12 }
      name     = "Adelaide Rifles"
      strength = 50
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 30001 id = 13 }
    name     = "5th Military District"
    location = 1712
    division =
    { id       = { type = 30001 id = 14 }
      name     = "Swan Regiment"
      strength = 50
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 30001 id = 15 }
    name     = "6th Military District"
    location = 1729 # Tasmania
    division =
    { id       = { type = 30001 id = 16 }
      name     = "Tasmanian Rangers"
      strength = 50
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 30001 id = 17 }
    name     = "7th Military District"
    location = 1703
    division =
    { id       = { type = 30001 id = 18 }
      name     = "Darwin Fortress"
      strength = 20
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 30001 id = 19 }
    name     = "Port Moresby Garrison"
    location = 1679
    division =
    { id       = { type = 30001 id = 20 }
      name     = "Port Moresby Garrison"
      strength = 10
      type     = garrison
    }
  }
  # ######### Australian Navy ##############
  # HMAS Perth was still HMS Amphion in 1938
  navalunit =
  { id       = { type = 30001 id = 100 }
    name     = "Royal Australian Navy"
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
      name  = "RAN Destroyer Flotilla"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 30001 id = 107 }
      name  = "RAN Destroyer Flotilla"
      type  = destroyer
      model = 1
    }
  }
  # Australia had a small merchant marine.  Shown are the three liners converted as AMCs
  # and then used as landing ships
  navalunit =
  { id       = { type = 30001 id = 108 }
    name     = "RAN Landing Ships"
    location = 1727
    base     = 1727
    division =
    { id   = { type = 30001 id = 109 }
      name = "HMAS Kanimbla"
      type = transport
    }
    division =
    { id   = { type = 30001 id = 110 }
      name = "HMAS Manoora"
      type = transport
    }
    division =
    { id   = { type = 30001 id = 111 }
      name = "HMAS Westralia"
      type = transport
    }
  }
  airunit =
  { location = 1703
    base     = 1703
    id       = { type = 30001 id = 50 }
    name     = "RAAF Laverton"
    division =
    { id       = { type = 30001 id = 51 }
      name     = "No.2 RAAF Tactical Group"
      strength = 20
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
      strength = 30
      type     = naval_bomber
      model    = 0
    }
  }
}
