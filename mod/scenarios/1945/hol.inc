
##############################
# Country definition for HOL #
##############################

province =
{ id         = 46
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
  infra      = { size = 1 current_size = 0.8 }
  ic         = { size = 5 current_size = 3 }
}              # Rotterdam
province =
{ id          = 47
  anti_air    = 1
  naval_base  = { size = 8 current_size = 8 }
  air_base    = { size = 8 current_size = 8 }

  coastalfort = 4
  infra       = { size = 1 current_size = 0.9 }
  ic          = { size = 8 current_size = 7 }
}               # Amsterdam
province =
{ id       = 48
  landfort = 2
  infra    = { size = 1 current_size = 0.75 }
}            # Utrecht
province =
{ id       = 49
  anti_air = 1
  landfort = 1
  ic       = { size = 3 current_size = 2 }
  infra    = { size = 1 current_size = 0.75 }
}            # Eindhoven
province =
{ id            = 78
  radar_station = { size = 1 current_size = 1 }
  infra         = { size = 1 current_size = 0.7 }
}                 # Leeuwarden
province =
{ id            = 79
  radar_station = { size = 1 current_size = 1 }
  infra         = { size = 1 current_size = 0.7 }
}                 # Groningen
province =
{ id         = 1358
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 4 current_size = 4 }
}              # Palembang
province =
{ id         = 1359
  naval_base = { size = 6 current_size = 6 }
  air_base   = { size = 1 current_size = 1 }
}              # Oosthaven
province =
{ id         = 1628
  anti_air   = 1
  oilpool    = 100
  supplypool = 500
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 6 current_size = 6 }
}              # Batavia
province =
{ id         = 1632
  naval_base = { size = 7 current_size = 7 }
  air_base   = { size = 4 current_size = 4 }
}              # Soerabaja
province =
{ id         = 1640
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 3 current_size = 3 }
}              # Makassar
province =
{ id         = 1641
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 4 current_size = 4 }
}              # Bandjermasin
province =
{ id         = 1653
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
}              # Menado
province =
{ id         = 1659
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 4 current_size = 4 }
}              # Sorong
province =
{ id         = 1665
  supplypool = 500
  oilpool    = 200
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 4 current_size = 4 }
}              # Hollandia

#####################
# Country main data #
#####################

country =
{ tag                    = HOL
  capital                = 47
  manpower               = 85
  peacetime_ic_mod       = 0.5
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 2500
  money                  = 100
  transports             = 640
  escorts                = 41
  dissent                = 5
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 4
    free_market       = 9
    freedom           = 10
    professional_army = 5
    defense_lobby     = 2
    interventionism   = 2
  }
  #SpyInfo                = { country = "POR" NumberOfSpies = 5 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 5 }
  #SpyInfo                = { country = "SPA" NumberOfSpies = 5 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 5 }
  # Homeland
  nationalprovinces      = { 46 47 48 49 77 78 79 801 874 }
  # Homeland
  ownedprovinces         = { 46   47   48   49   77   78   79   1354 1355 1356 1357 1358 1359 1628 1629 1630 1631 1632 1633 1634 1635 1636 1637 1638
			     1639 1640 1641 1642 1643 1645 1648 1649 1650 1651 1652 1653 1654 1655 1656 1657 1659 1660 1661 1662 1663 1664 1665 1673
			     1674 801  874
			   }
  # Homeland
  controlledprovinces    = { 46   47   48   49   77   78   79   1354 1355 1356 1357 1358 1359 1628 1629 1630 1631 1632 1633 1634 1635 1636 1637 1638
			     1639 1640 1641 1642 1643 1645 1648 1649 1650 1651 1652 1653 1654 1655 1656 1657 1659 1660 1661 1662 1663 1664 1665 1673
			     1674 801  874
			   }
  # Great War Infantry
  techapps               = { 1010  1020  1030  1040  1050  1110  1190  1200  1210  1220  1230  1310  1320  1330  1340  1350  14000 14010 14020 14030
			     2010  2020  2030  2040  2050  2070  2150  2170  2180  2220  2230  2290  2300  2310  2320  2330  2340  2400  2410  2420
			     2450  2460  2470  2480  2510  2520  3010  3020  3030  3040  3070  3080  3090  3130  3140  3150  3190  3200  3250  3260
			     3320  3400  3410  3420  4010  4020  4030  4040  4050  4060  4070  4120  4130  4140  4170  4190  4220  4250  5010  5020
			     5030  5050  5060  5070  5080  5090  5100  5110  5120  5130  5190  5200  5310  5320  5330  5350  5360  6010  6020  6040
			     6050  6060  6070  8010  8020  8030  8040  8050  8070  8100  8120  8130  8200  8310  9010  9020  9030  9040  9050  9060
			     9070  9080  9090  9100  9110  9120  9130  9140  9150  9160  9170  9180  9190  9270  9280  9290  9350  9360  9370
			   }
  diplomacy =
  { relation = { tag = BEL value = 150 }
    relation = { tag = CAN value = 80 }
    relation = { tag = DEN value = 100 }
    relation = { tag = ENG value = 125 }
    relation = { tag = FRA value = 75 }
    relation = { tag = LUX value = 150 }
    relation = { tag = MEX value = 25 }
    relation = { tag = NOR value = 100 }
    relation = { tag = SWE value = 100 }
    relation = { tag = USA value = 70 }
  }
  headofstate            = { type = 9 id = 8001 }
  headofgovernment       = { type = 9 id = 8047 }
  foreignminister        = { type = 9 id = 8067 }
  armamentminister       = { type = 9 id = 8092 }
  ministerofsecurity     = { type = 9 id = 8118 }
  ministerofintelligence = { type = 9 id = 8137 }
  chiefofstaff           = { type = 9 id = 8147 }
  chiefofarmy            = { type = 9 id = 8156 }
  chiefofnavy            = { type = 9 id = 8009 }
  chiefofair             = { type = 9 id = 8010 }
  dormant_ministers      = { 8038 8051 8052 8070 8071 8099 8100 8138 8148 8149 8159 8168 8177 8183 8184 8002 8048 8003 8066 8004 8005 8006 }
  landunit =
  { id       = { type = 30851 id = 1 }
    location = 47
    name     = "1e Legerkorps"
    division =
    { id            = { type = 30854 id = 1 }
      name          = "1e Divisie"
      type          = infantry
      model         = 4
      extra         = artillery
      brigade_model = 5
    }
    division =
    { id            = { type = 30854 id = 2 }
      name          = "2e Divisie"
      type          = infantry
      model         = 4
      extra         = artillery
      brigade_model = 5
    }
    division =
    { id    = { type = 30854 id = 3 }
      name  = "3e Divisie"
      type  = infantry
      model = 4
    }
    division =
    { id    = { type = 30854 id = 4 }
      name  = "4e Divisie"
      type  = infantry
      model = 4
    }
  }
  navalunit =
  { id       = { type = 30852 id = 1 }
    name     = "Royal Dutch Navy"
    location = 47
    base     = 47
    division =
    { type  = heavy_cruiser
      model = 2
      id    = { type = 30855 id = 1 }
      name  = "De Zeven Provincien"
    }
    division =
    { type  = light_cruiser
      model = 2
      id    = { type = 30855 id = 2 }
      name  = "Jacob Van Heemskerck"
    }
    division =
    { type  = light_cruiser
      model = 2
      id    = { type = 30855 id = 3 }
      name  = "Tromp"
    }
    division =
    { type  = destroyer
      model = 3
      id    = { type = 30855 id = 4 }
      name  = "1e Torpedobootjager Smaldeel"
    }
    division =
    { type  = transport
      model = 0
      id    = { type = 30855 id = 5 }
      name  = "1e Transport Smaldeel"
    }
    division =
    { type  = transport
      model = 0
      id    = { type = 30855 id = 6 }
      name  = "2e Transport Smaldeel"
    }
  }
  airunit =
  { id       = { type = 30853 id = 1 }
    name     = "Dutch Airforce"
    location = 47
    base     = 47
    division =
    { type         = interceptor
      model        = 3
      id           = { type = 30856 id = 1 }
      name         = "322 Squadron"
      experience   = 10
      strength     = 5
      max_strength = 50
    }
    division =
    { type         = tactical_bomber
      model        = 3
      id           = { type = 30856 id = 2 }
      name         = "320 Squadron"
      strength     = 5
      max_strength = 50
      experience   = 10
    }
  }
  division_development =
  { type          = motorized
    model         = 0
    date          = { day = 10 month = november year = 1945 }
    cost          = 3
    days          = 100
    id            = { type = 30854 id = 5 }
    name          = "5e Divisie"
    extra         = anti_tank
    brigade_model = 2
  }
  division_development =
  { type          = motorized
    model         = 0
    date          = { day = 0 month = december year = 1945 }
    cost          = 3
    days          = 100
    id            = { type = 30854 id = 6 }
    name          = "6e Divisie"
    extra         = artillery
    brigade_model = 5
  }
}
