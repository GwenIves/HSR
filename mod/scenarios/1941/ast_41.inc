
###############################
# Country definition for AST #
##############################

province =
{ id         = 1670
  naval_base = { size = 7 current_size = 7 }
  air_base   = { size = 5 current_size = 5 }
  anti_air   = 2
}              # Rabaul
province =
{ id       = 1672
  air_base = { size = 2 current_size = 2 }
  anti_air = 1
}            # Lae
province =
{ id         = 1679
  anti_air   = 3
  oilpool    = 1
  supplypool = 50
  air_base   = { size = 4 current_size = 6 }
  naval_base = { size = 4 current_size = 4 }
}              # Port Moresby
province =
{ id         = 1703
  ic         = 3
  anti_air   = 2
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # Darwin
province =
{ id         = 1712
  anti_air   = 3
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # Perth
province =
{ id         = 1722
  ic         = 4
  anti_air   = 3
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # Brisbane
province = { id = 1724 anti_air = 3 ic = 3 } # Newcastle
province =
{ id         = 1727
  ic         = 4
  anti_air   = 4
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # Sydney
province = { id = 1730 ic = 3 } # Melbourne
province = { id = 1733 ic = 4 } # Adelaide

#####################
# Country main data #
#####################

country =
{ tag                    = AST
  manpower               = 90
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 100
  capital                = 1728
  transports             = 40
  SpyInfo                = { country = "AST" NumberOfSpies = 8 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    free_market       = 8
    freedom           = 10
    professional_army = 5
    defense_lobby     = 7
    interventionism   = 6
  }
  # Bismarck Archipelago
  nationalprovinces      = { 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1718 1719 1720 1721 1722 1723 1724 1725 1726
			     1727 1728 1729 1730 1731 1732 1733 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1734 1666 1667 1672 1675 1676 1677
			     1678 1679 1680 1668 1669 1670 1671 1681
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
  # Bismarck Archipelago
  # UK 1941 techs
  # ######################
  techapps               = { 4010  4020  4030  4040  4120  4130  4140  4220  4190  4250  2010  2020  2040  2050  2030  2070  2290  2300
			     2310  2320  2330  2340  2400  2410  2450  2460  2470  2510  2520  1010  1020  1030  1040  1190  1200  1210  1220  1110
			     1120  1130  1070  1230  1150  1160  1310  1340  5010  5020  5030  5050  5060  5070  5080  5090  5100  5110  5120  5130
			     5140  5160  5180  5190  5200  5310  5320  5330  5350  5360  5370  5380  5410  5420  5470  5480  5550  9010  9020  9030
			     9040  9050  9060  9070  9080  9090  9100  9110  9120  9130  9140  9190  9210  9220  9230  9240  9250  9350  6010  6030
			     6110  6120  8010  8020  8030  8040  8050  8070  8100  8120  8130  8190  8200  8310  3010  3020  3030  3070  3080  3090
			     3130  3140  3190  14000 14010 14020 2150
			   }
  diplomacy =
  { relation = { tag = NIC value = 200 }
    relation = { tag = BEL value = 200 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 access = yes }
    relation = { tag = ENG value = 200 access = yes }
    relation = { tag = FIN value = 65 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = -200 }
    # relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = -200 }
    relation = { tag = JAP value = -150 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 access = yes }
    relation = { tag = OMN value = 150 }
    # relation = { tag = POL value = 200 }
    relation = { tag = SAF value = 200 access = yes }
    relation = { tag = USA value = 150 }
    relation = { tag = YEM value = 150 }
  }
  headofstate            = { type = 9 id = 56132 }
  headofgovernment       = { type = 9 id = 56038 }
  foreignminister        = { type = 9 id = 56050 }
  armamentminister       = { type = 9 id = 56064 }
  ministerofsecurity     = { type = 9 id = 56086 }
  ministerofintelligence = { type = 9 id = 56095 }
  chiefofstaff           = { type = 9 id = 56106 }
  chiefofarmy            = { type = 9 id = 56114 }
  chiefofnavy            = { type = 9 id = 56120 }
  chiefofair             = { type = 9 id = 56127 }
  dormant_ministers      = { 56001 56002 56003 56044 56004 56083 56005 56007 56139 56043 56057 56081 56093 56103 56104 56105 56110 56002 56007 }
  # OOB
  landunit =
  { location = 1728
    id       = { type = 10002 id = 1100 }
    name     = "Home Forces HQ"
    division =
    { id       = { type = 10002 id = 1101 }
      name     = "Home Forces HQ"
      type     = hq
      model    = 1
      strength = 100
    }
  }
  landunit =
  { id       = { type = 10002 id = 1 }
    name     = "Northern Command"
    location = 1722
    division =
    { id       = { type = 10002 id = 2 }
      name     = "2nd Citizen Militia Division"
      strength = 30
      type     = militia
    }
  }
  landunit =
  { id       = { type = 10002 id = 3 }
    name     = "Eastern Command"
    location = 1724
    division =
    { id       = { type = 10002 id = 4 }
      name     = "1st Citizen Militia Division"
      strength = 60
      type     = militia
      extra    = artillery
    }
  }
  landunit =
  { id       = { type = 10002 id = 5 }
    name     = "Southern Command"
    location = 1728
    division =
    { id       = { type = 10002 id = 6 }
      name     = "3rd Citizen Militia Division"
      strength = 60
      type     = militia
      extra    = artillery
    }
    division =
    { id       = { type = 10002 id = 8 }
      name     = "4th Citizen Militia Division"
      strength = 40
      type     = militia
    }
  }
  landunit =
  { id       = { type = 10002 id = 9 }
    name     = "Western Command"
    location = 1712
    division =
    { id       = { type = 10002 id = 10 }
      name     = "5th Citizen Militia Division"
      strength = 30
      type     = militia
    }
  }
  landunit =
  { id       = { type = 10002 id = 11 }
    name     = "Darwin Garrison"
    location = 1703
    division =
    { id       = { type = 10002 id = 12 }
      name     = "Darwin Garrison"
      type     = garrison
      extra    = anti_air
      model = 1
    }
  }
  landunit =
  { id       = { type = 10002 id = 13 }
    name     = "Port Moresby Garrison"
    location = 1679
    division =
    { id       = { type = 10002 id = 14 }
      name     = "Port Moresby Garrison"
      type     = garrison
      model = 1
    }
  }
  landunit =
  { id       = { type = 10002 id = 15 }
    name     = "1st Australian Expeditionary Corps"
    location = 404
    division =
    { id       = { type = 10002 id = 16 }
      name     = "6th Australian Motorized Div."
      strength = 100
      type     = motorized
      model    = 0
      extra    = artillery
    }
    division =
    { id       = { type = 10002 id = 17 }
      name     = "7th Australian Motorized Div."
      strength = 100
      type     = motorized
      model    = 0
      extra    = anti_air
    }
  }
  landunit =
  { id       = { type = 10002 id = 601 }
    name     = "9th Australian Division"
    location = 919
    dig_in   = 10
    division =
    { id            = { type = 10002 id = 602 }
      name          = "9th Australian Motorized Div."
      strength      = 100
      type          = motorized
      model         = 0
      extra         = anti_tank
      brigade_model = 1
    }
  }
  landunit =
  { id       = { type = 10002 id = 125 }
    name     = "2nd Australian Expeditionary Corps"
    location = 1353
    division =
    { id       = { type = 10002 id = 126 }
      name     = "8th Australian Infantry Div."
      strength = 100
      type     = infantry
      model    = 2
      extra    = anti_tank
    }
  }
  # Australian Squadron#
  navalunit =
  { id       = { type = 10002 id = 100 }
    name     = "HM Australian Squadron"
    location = 1727 # Sydney
    base     = 1727
    division =
    { id    = { type = 10002 id = 101 }
      name  = "HMAS Australia"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 10002 id = 102 }
      name  = "HMAS Canberra"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 10002 id = 104 }
      name  = "HMAS Perth"
      type  = light_cruiser
      model = 2
    }
    division =
    { id   = { type = 10002 id = 108 }
      name = "HMAS Kanimbla Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10002 id = 109 }
      name = "HMAS Westralia Flotilla"
      type = transport
    }
  }
  navalunit =
  { id       = { type = 10002 id = 807 }
    name     = "1st Transport Flotilla"
    location = 1727 # Sydney
    base     = 1727
    division =
    { id   = { type = 10002 id = 800 }
      name = "1st Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10002 id = 801 }
      name = "2nd Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10002 id = 802 }
      name = "3rd Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10002 id = 803 }
      name = "4th Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10002 id = 804 }
      name = "5th Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10002 id = 805 }
      name = "6th Transport Flotilla"
      type = transport
    }
  }
  navalunit =
  { id       = { type = 10002 id = 105 }
    name     = "Scrap Iron Flotilla"
    location = 1353 # Singapore
    base     = 1353
    division =
    { id    = { type = 10002 id = 106 }
      name  = "2nd Destroyer Flotilla"
      type  = destroyer
      model = 0
    }
  }
  # Adelaide#
  navalunit =
  { id       = { type = 10002 id = 110 }
    name     = "HMAS Adelaide"
    location = 2126 # Off Port Moresby
    base     = 1679
    division =
    { id    = { type = 30001 id = 111 }
      name  = "HMAS Adelaide"
      type  = light_cruiser
      model = 0
    }
  }
  # Hobart#
  navalunit =
  { id       = { type = 10002 id = 112 }
    name     = "Mediterranean Squadron"
    location = 906 # Alexandria
    base     = 906
    division =
    { id    = { type = 10002 id = 113 }
      name  = "HMAS Hobart"
      type  = light_cruiser
      model = 2
    }
    division =
    { id    = { type = 10002 id = 114 }
      name  = "1st Destroyer Flotilla"
      type  = destroyer
      model = 1
    }
  }
  airunit =
  { location = 1797
    base     = 1797
    id       = { type = 10002 id = 51 }
    name     = "Middle East Air Command"
    division =
    { id       = { type = 10002 id = 52 }
      name     = "No.1 RAAF interceptor Group"
      strength = 60
      type     = interceptor
      model    = 1
    }            # sqdn No's 3, 450 & 451 (kittyhawks)
  }
  airunit =
  { location = 1353
    base     = 1353
    id       = { type = 10002 id = 53 }
    name     = "Singapore Air Command"
    division =
    { id       = { type = 10002 id = 54 }
      name     = "No.1 RAAF Tactical Group"
      strength = 100
      type     = tactical_bomber
      model    = 1
    }
    division =
    { id       = { type = 10002 id = 55 }
      name     = "No.2 RAAF interceptor Group"
      strength = 60
      type     = interceptor
      model    = 1
    }
  }
  airunit =
  { location = 1703
    base     = 1703
    id       = { type = 10002 id = 56 }
    name     = "RAAF Darwin"
    division =
    { id       = { type = 10002 id = 57 }
      name     = "No.1 RAAF Naval Bomber Group"
      strength = 100
      type     = naval_bomber
      model    = 0
    }
  }
  airunit =
  { location = 1722
    base     = 1722
    id       = { type = 10002 id = 58 }
    name     = "RAAF Townsville"
    division =
    { id       = { type = 10002 id = 59 }
      name     = "No.2 RAAF Naval Bomber Group"
      strength = 100
      type     = naval_bomber
      model    = 0
    }
  }
  airunit =
  { location = 1727
    base     = 1727
    id       = { type = 10002 id = 60 }
    name     = "RAAF Sydney"
    division =
    { id       = { type = 10002 id = 61 }
      name     = "No.3 RAAF interceptor Group"
      strength = 100
      type     = interceptor
      model    = 2
    }
    division =
    { id       = { type = 10002 id = 62 }
      name     = "No.2 RAAF Tactical Group"
      strength = 100
      type     = tactical_bomber
      model    = 1
    }
  }
  division_development =
  { id    = { type = 10002 id = 521 }
    name  = "1st Australian Armoured Div."
    type  = armor
    model = 4
    cost  = 4
    date  = { year = 1942 month = April }
  }
  division_development =
  { id    = { type = 10002 id = 522 }
    name  = "2nd Australian Motorized Div."
    type  = motorized
    model = 0
    cost  = 2
    extra = anti_tank
    date  = { year = 1942 month = january }
  }
  division_development =
  { id    = { type = 10002 id = 523 }
    name  = "2nd Australian Armoured Div."
    type  = armor
    model = 3
    cost  = 4
    date  = { year = 1942 month = july }
  }
  division_development =
  { id    = { type = 10002 id = 524 }
    name  = "No.8 RAAF interceptor Group" # sqdn No's 452, 457 & 54RAF (Spitfire V, Arriving Australia from Middle East, under Caldwell)
    type  = interceptor
    model = 2
    cost  = 1
    date  = { year = 1942 month = july }
  }
}
