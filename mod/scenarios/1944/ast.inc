
##############################
# Country definition for AST #
##############################

province =
{ id          = 1693
  coastalfort = 3
  naval_base  = { size = 5 current_size = 5 }
  air_base    = { size = 5 current_size = 5 }
}               # Cairns
province =
{ id          = 1696
  coastalfort = 3
  naval_base  = { size = 5 current_size = 5 }
  air_base    = { size = 5 current_size = 5 }
}               # Townsville
province = { id = 1698  coastalfort = 9 anti_air = 3 } # Rockhampton
province =
{ id            = 1703
  coastalfort   = 3
  anti_air      = 9
  ic            = 3
  naval_base    = { size = 2 current_size = 2 }
  air_base      = { size = 3 current_size = 3 }
  radar_station = { size = 2 current_size = 2 }
}                 # Darwin
province =
{ id         = 1704
  naval_base = { size = 5 current_size = 5 }
}              # Katherine
province =
{ id         = 1706
  naval_base = { size = 8 current_size = 8 }
  air_base   = { size = 8 current_size = 8 }
}              # Wyndham
province = { id = 1708  coastalfort = 3 } # Broome
province =
{ id          = 1712
  coastalfort = 6
  anti_air    = 6
  naval_base  = { size = 3 current_size = 3 }
  air_base    = { size = 3 current_size = 3 }
}               # Perth
province = { id = 1718 anti_air = 3 } # Port Augusta
province =
{ id         = 1722
  ic         = 6
  anti_air = 6
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # Brisbane
province = { id = 1724 anti_air = 6 ic = 6 } # Newcastle
province = { id = 1727 ic = 6 } # Sydney
province =
{ id          = 1728
  coastalfort = 9
  anti_air    = 9
  naval_base  = { size = 10 current_size = 10 }
  air_base    = { size = 10 current_size = 10 }
}               # Canberra
province =
{ id         = 1729
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
}              # Tasmania
province = { id = 1730  coastalfort = 6 anti_air = 9 ic = 6 } # Melbourne
province = { id = 1731 anti_air = 6 } # Hay
province = { id = 1733 anti_air = 6 ic = 6 } # Adelaide

#####################
# Country main data #
#####################

country =
{ tag                    = AST
  manpower               = 90
  # Resource Reserves
  energy                 = 5000
  metal                  = 5000
  rare_materials         = 5000
  oil                    = 5000
  supplies               = 5000
  capital                = 1728
  transports             = 85
  escorts                = 22
  SpyInfo                = { country = "AST" NumberOfSpies = 9 }
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
  nationalprovinces      = { 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1718 1719 1720 1721 1722 1723 1724 1725 1726
			     1727 1728 1729 1730 1731 1732 1733 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1734
			   }
  ownedprovinces         = { 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1718 1719 1720 1721 1722 1723 1724 1725 1726
			     1727 1728 1729 1730 1731 1732 1733 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1734
			   }
  controlledprovinces    = { 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1718 1719 1720 1721 1722 1723 1724 1725 1726
			     1727 1728 1729 1730 1731 1732 1733 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1734
			   }
  # Commonwealth Tech '36
  # UK 1944 techs
  # ######################
  techapps               = { 4010  4020  4030  4040  4050  4060  4070  4080  4090  4100  4110  4120  4130  4140  4150  4160  4170  4280  4180  4190
			     4200  4210  4220  4230  4240  4250  4260  2010  2020  2040  2050  2060  2030  2070  2080  2090  2100  2110  2120  2150
			     2160  2170  2180  2190  2220  2230  2240  2260  2270  2290  2300  2310  2320  2330  2340  2350  2360  2370  2380  2400
			     2410  2420  2430  2450  2460  2470  2480  2490  2510  2520  2530  1010  1020  1030  1040  1050  1190  1200  1210  1220
			     1110  1120  1130  1040  1070  1080  1090  1230  1240  1250  1260  1270  1280  1310  1320  1330  1340  1350  1360  5010
			     5020  5030  5050  5060  5070  5080  5090  5100  5110  5120  5130  5140  5160  5180  5190  5200  5210  5220  5230  5310
			     5320  5330  5340  5350  5360  5370  5380  5390  5400  5410  5420  5430  5440  5470  5480  5490  5500  5510  5550  5560
			     9010  9020  9030  9040  9050  9060  9070  9080  9090  9100  9110  9120  9130  9140  9150  9160  9170  9180  9190  9200
			     9210  9220  9230  9240  9250  9260  9270  9280  9290  9300  9310  9320  9330  9340  9350  9360  9370  9380  9390  9400
			     9410  9420  9430  9440  9450  9460  6010  6030  6110  6120  6130  6140  6170  6200  1150  1160  1170  1180  8010  8020
			     8030  8040  8050  8070  8100  8110  8120  8130  8140  8190  8200  8250  8090  8160  3010  3020  3030  3070  3080  3090
			     3130  3140  3190  12100  8310  14000 14010 14020
			   }
  diplomacy =
  { relation = { tag = SAF access = yes value = 200 }
    relation = { tag = CAN access = yes value = 200 }
    relation = { tag = ENG access = yes value = 200 }
    relation = { tag = NZL access = yes value = 200 }
    relation = { tag = BEL value = 200 }
    relation = { tag = BHU value = 200 }
    relation = { tag = FIN value = -200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = -200 }
    # relation = { tag = IRQ value = 100 }
    # relation = { tag = ITA value = -200 }
    relation = { tag = JAP value = -200 }
    relation = { tag = NEP value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = USA value = 150 }
    relation = { tag = YEM value = 150 }
  }
  dormant_ministers      = { 56001 56002 56003 56044 56004 56083 56005 56007 56139 56043 56057 56081 56093 56103 56104 56105 56110 56056 56002 56007
			   }
  headofstate            = { type = 9 id = 56132 }
  headofgovernment       = { type = 9 id = 56038 }
  foreignminister        = { type = 9 id = 56050 }
  armamentminister       = { type = 9 id = 56066 }
  ministerofsecurity     = { type = 9 id = 56086 }
  ministerofintelligence = { type = 9 id = 56097 }
  chiefofstaff           = { type = 9 id = 56106 }
  chiefofarmy            = { type = 9 id = 56114 }
  chiefofnavy            = { type = 9 id = 56120 }
  chiefofair             = { type = 9 id = 56127 }
  # ##AUSTRALIAN OOB###
  # #######1944########
  # ###################
  landunit =
  { id       = { type = 12076 id = 1 }
    name     = "I. Corps"
    location = 1667
    division =
    { id       = { type = 12076 id = 2 }
      name     = "7th Australian Infantry Div."
      strength = 100
      type     = infantry
      model    = 3
    }
    division =
    { id       = { type = 12076 id = 3 }
      name     = "9th Australian Infantry Div."
      strength = 100
      type     = infantry
      model    = 3
    }
  }
  landunit =
  { id       = { type = 12076 id = 4 }
    name     = "6th Australian Motorized Div."
    location = 1679
    division =
    { id            = { type = 12076 id = 5 }
      name          = "6th Australian Infantry Div."
      strength      = 100
      type          = infantry
      model         = 3
      extra         = artillery
      brigade_model = 4
    }
  }
  landunit =
  { id       = { type = 12076 id = 6 }
    name     = "1st Australian Armoured Div."
    location = 1703
    division =
    { id       = { type = 12076 id = 7 }
      name     = "1st Australian Armoured Div."
      strength = 100
      type     = armor
      model    = 3
    }
  }
  landunit =
  { id       = { type = 12076 id = 9 }
    name     = "Eastern Command"
    location = 1722
    division =
    { id       = { type = 12076 id = 10 }
      name     = "1st Australian Cavalry Div."
      strength = 100
      type     = cavalry
      model    = 3
    }
  }
  landunit =
  { id       = { type = 12076 id = 13 }
    name     = "Southern Command"
    location = 1730
    division =
    { id       = { type = 12076 id = 14 }
      name     = "2nd Australian Cavalry Div."
      strength = 100
      type     = cavalry
      model    = 3
    }
  }
  landunit =
  { id       = { type = 12076 id = 15 }
    name     = "3rd Australian Infantry Div."
    location = 1697
    division =
    { id            = { type = 12076 id = 16 }
      name          = "3rd Australian Infantry Div."
      strength      = 100
      type          = infantry
      extra         = artillery
      model         = 3
      brigade_model = 4
    }
  }
  landunit =
  { id       = { type = 12076 id = 17 }
    name     = "4th Australian Infantry Div."
    location = 1696
    division =
    { id            = { type = 12076 id = 18 }
      name          = "4th Australian Infantry Div."
      strength      = 100
      type          = infantry
      extra         = artillery
      model         = 3
      brigade_model = 4
    }
  }
  landunit =
  { id       = { type = 12076 id = 19 }
    name     = "5th Australian Infantry Div."
    location = 1698
    division =
    { id            = { type = 12076 id = 20 }
      name          = "5th Australian Infantry Div."
      strength      = 100
      type          = infantry
      extra         = artillery
      model         = 2
      brigade_model = 4
    }
  }
  landunit =
  { id       = { type = 12076 id = 21 }
    name     = "10th Australian Infantry Div."
    location = 1728
    division =
    { id            = { type = 12076 id = 22 }
      name          = "10th Australian Infantry Div."
      strength      = 100
      type          = infantry
      extra         = artillery
      model         = 2
      brigade_model = 4
    }
    division =
    { id       = { type = 12076 id = 23 }
      name     = "Army HQ"
      type     = hq
      model    = 2
      strength = 100
    }
  }
  landunit =
  { id       = { type = 12076 id = 24 }
    name     = "1st Australian Infantry Div."
    location = 1703
    division =
    { id            = { type = 12076 id = 25 }
      name          = "1st Australian Infantry Div."
      strength      = 100
      type          = infantry
      extra         = artillery
      model         = 2
      brigade_model = 4
    }
  }
  landunit =
  { id       = { type = 12076 id = 26 }
    name     = "2nd Australian Infantry Div."
    location = 1706
    division =
    { id            = { type = 12076 id = 27 }
      name          = "2nd Australian Infantry Div."
      strength      = 100
      type          = infantry
      extra         = artillery
      model         = 2
      brigade_model = 4
    }
  }
  landunit =
  { id       = { type = 12076 id = 28 }
    name     = "11th Australian Infantry Div."
    location = 1733
    division =
    { id            = { type = 12076 id = 29 }
      name          = "11th Australian Infantry Div."
      strength      = 100
      type          = infantry
      extra         = artillery
      model         = 2
      brigade_model = 4
    }
  }
  # Australian Squadron#
  navalunit =
  { id       = { type = 12076 id = 100 }
    name     = "Australian Squadron"
    location = 1728 # Sydney
    base     = 1728
    division =
    { id    = { type = 12076 id = 101 }
      name  = "HMAS Australia"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 12076 id = 102 }
      name  = "HMAS Shropshire"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 12076 id = 105 }
      name  = "1st Destroyer Flotilla"
      type  = destroyer
      model = 1
    }
  }
  # Transport Squadron#
  navalunit =
  { id       = { type = 12076 id = 106 }
    name     = "1st Transport Flotilla"
    location = 1728 # Sydney
    base     = 1728
    division =
    { id   = { type = 12076 id = 107 }
      name = "1st Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 12076 id = 108 }
      name = "2nd Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 12076 id = 800 }
      name = "3rd Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 12076 id = 801 }
      name = "4th Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 12076 id = 802 }
      name = "5th Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 12076 id = 803 }
      name = "6th Transport Flotilla"
      type = transport
    }
  }
  # Adelaide#
  navalunit =
  { id       = { type = 12076 id = 109 }
    name     = "HMAS Adelaide"
    location = 1679 # ##gulf of papua
    base     = 1679
    division =
    { id         = { type = 12076 id = 110 }
      name       = "HMAS Adelaide"
      type       = light_cruiser
      model      = 0
      seaattack  = 4
      seadefence = 4
    }
  }
  # Hobart#
  navalunit =
  { id       = { type = 12076 id = 111 }
    name     = "HMAS Hobart"
    location = 906
    base     = 906 # Alexandria
    division =
    { id    = { type = 12076 id = 112 }
      name  = "HMAS Hobart"
      type  = light_cruiser
      model = 1
    }
    division =
    { id   = { type = 12076 id = 804 }
      name = "7th Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 12076 id = 805 }
      name = "8th Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 12076 id = 806 }
      name = "9th Transport Flotilla"
      type = transport
    }
  }
  # 2nd Destroyer Flotilla#
  navalunit =
  { name     = "2nd Destroyer Flotilla"
    id       = { type = 12076 id = 113 }
    location = 906
    base     = 906 # Alexandria
    division =
    { id    = { type = 12076 id = 114 }
      name  = "2nd Destroyer Flotilla"
      type  = destroyer
      model = 2
    }
    division =
    { id   = { type = 12076 id = 807 }
      name = "10th Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 12076 id = 808 }
      name = "11th Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 12076 id = 809 }
      name = "12th Transport Flotilla"
      type = transport
    }
  }
  # #############################
  # ## AUSTRALIA AIR OOB 1944 ###
  # #############################
  airunit =
  { id       = { type = 12076 id = 120 }
    name     = "No.10 RAAF Naval Bomber Group"
    location = 20 # Plymouth
    base     = 20
    division =
    { id    = { type = 12076 id = 121 }
      name  = "No.10 RAAF Naval Bomber Group"
      type  = naval_bomber
      model = 2
    }
  }
  airunit =
  { id       = { type = 12076 id = 122 }
    name     = "No.3 RAAF interceptor Group"
    location = 906 # Alexandria
    base     = 906
    division =
    { id    = { type = 12076 id = 123 }
      name  = "No.3 RAAF interceptor Group"
      type  = multi_role
      model = 2
    }
  }
}
