
##############################
# Country definition for HOL #
##############################

province =
{ id         = 47
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 2 current_size = 2 }
  anti_air   = 1
}              # Amsterdam
province = { id = 48 landfort = 2 } # Utrecht
province = { id = 49 anti_air = 1 landfort = 1 } # Eindhoven
province =
{ id         = 1359
  naval_base = { size = 6 current_size = 6 }
  air_base   = { size = 1 current_size = 1 }
}              # Oosthaven
province =
{ id         = 1628
  anti_air   = 1
  naval_base = { size = 6 current_size = 6 }
  air_base   = { size = 1 current_size = 1 }
  oilpool    = 100
  supplypool = 500
}              # Batavia
province =
{ id         = 1653
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
}              # Menado

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
  supplies               = 500
  money                  = 100
  transports             = 640
  escorts                = 41
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
  SpyInfo                = { country = "HOL" NumberOfSpies = 6 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 6 }
  #SpyInfo                = { country = "FRA" NumberOfSpies = 6 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 3 }
  #SpyInfo                = { country = "BEL" NumberOfSpies = 6 }
  #SpyInfo                = { country = "DEN" NumberOfSpies = 3 }
  #SpyInfo                = { country = "GER" NumberOfSpies = 8 }
  #SpyInfo                = { country = "USA" NumberOfSpies = 3 }
  #SpyInfo                = { country = "NOR" NumberOfSpies = 3 }
  #SpyInfo                = { country = "LUX" NumberOfSpies = 3 }
  #SpyInfo                = { country = "SPR" NumberOfSpies = 3 }
  #SpyInfo                = { country = "ITA" NumberOfSpies = 3 }
  # Homeland
  nationalprovinces      = { 46   47   48   49   77   78   79   1354 1355 1356 1357 1358 1359 1628 1629 1630 1631 1632 1633 1634 1635 1636 1637 1638
			     1639 1640 1641 1642 1643 1645 1648 1649 1650 1651 1652 1653 1654 1655 1656 1657 1659 1660 1661 1662 1663 1664 1665 1673
			     1674 801  874
			   }
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
  techapps               = { 1010  1020  1310  2150  2290  2300  2310  2320  2450  2460  3010  3020  3030  3070  3080  3090  3130  3140  3150  3400
			     3410  3420  3430  4010  4020  4120  4130  4250  5010  5020  5030  5050  5060  5080  5090  5190  5200  5210  5310  5320
			     5350  5360  6010  6020  8010  8020  8040  8050  8070  9010  9020  14000 14010
			   }
  diplomacy =
  { relation = { tag = BEL value = 150 }
    relation = { tag = CAN value = 80 }
    relation = { tag = DEN value = 100 }
    relation = { tag = ENG value = 125 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 75 }
    relation = { tag = GER value = -150 }
    relation = { tag = ITA value = -20 }
    relation = { tag = JAP value = -50 }
    relation = { tag = LUX value = 150 }
    relation = { tag = MEX value = 25 }
    relation = { tag = NOR value = 100 }
    relation = { tag = SWE value = 100 }
    relation = { tag = USA value = 70 }
  }
  headofstate            = { type = 9 id = 8001 }
  headofgovernment       = { type = 9 id = 8002 }
  foreignminister        = { type = 9 id = 8064 }
  armamentminister       = { type = 9 id = 8004 }
  ministerofsecurity     = { type = 9 id = 8005 }
  ministerofintelligence = { type = 9 id = 8131 }
  chiefofstaff           = { type = 9 id = 8007 }
  chiefofarmy            = { type = 9 id = 8155 }
  chiefofnavy            = { type = 9 id = 8009 }
  chiefofair             = { type = 9 id = 8010 }
  dormant_ministers      = { 8002 8048 8003 8066 8004 8005 8006 }
  # ############################
  # ###Netherlands OOB 1939#####
  # ############################
  landunit =
  { location = 49
    name     = "2e Legerkorps"
    id       = { type = 30040 id = 1 }
    division =
    { id           = { type = 30040 id = 2 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "2e Divisie"
    }
    division =
    { id           = { type = 30040 id = 3 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "4e Divisie"
    }
  }
  landunit =
  { location = 48
    name     = "3e Legerkorps"
    id       = { type = 30040 id = 4 }
    division =
    { id           = { type = 30040 id = 5 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "5e Divisie"
    }
    division =
    { id           = { type = 30040 id = 6 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "6e Divisie"
    }
    division =
    { id           = { type = 30040 id = 8 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "Peel Divisie"
    }
  }
  landunit =
  { location = 48
    name     = "1e Gemotoriseerde Huzaren"
    id       = { type = 30040 id = 51 }
    division =
    { id           = { type = 30040 id = 7 }
      type         = motorized
      strength     = 100
      organisation = 30
      name         = "1e Gemotoriseerde Huzaren"
    }
  }
  landunit =
  { location = 77
    name     = "1e Legerkorps"
    id       = { type = 30040 id = 9 }
    division =
    { id           = { type = 30040 id = 10 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "1e Divisie"
    }
    division =
    { id           = { type = 30040 id = 11 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "3e Divisie"
    }
  }
  landunit =
  { location = 79
    name     = "4e Legerkorps"
    id       = { type = 30040 id = 12 }
    division =
    { id           = { type = 30040 id = 13 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "7e Divisie"
    }
    division =
    { id           = { type = 30040 id = 14 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "8e Divisie"
    }
  }
  landunit =
  { location = 1628
    name     = "Koninklijk Nederlands Indisch Leger"
    id       = { type = 30040 id = 17 }
    division =
    { id   = { type = 30040 id = 18 }
      type = infantry
      name = "Ie Divisie 'Java'"
    }
    division =
    { id   = { type = 30040 id = 20 }
      type = infantry
      name = "IIe Divisie 'Java'"
    }
    division =
    { id   = { type = 30040 id = 22 }
      type = infantry
      name = "IIIe Divisie 'Java'"
    }
  }
  navalunit =
  { name     = "Koninklijke Vloot"
    id       = { type = 30040 id = 30 }
    location = 1628
    base     = 1628
    division =
    { id    = { type = 30040 id = 31 }
      name  = "HrMs Java"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 30040 id = 32 }
      name  = "HrMs Sumatra"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 30040 id = 33 }
      name  = "HrMs De Ruyter"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 30040 id = 34 }
      name  = "HrMs Tromp"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 30040 id = 35 }
      name  = "1e Torpedobootjager Smaldeel"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 30040 id = 36 }
      name  = "2e Torpedobootjager Smaldeel"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 30040 id = 37 }
      name  = "1e Onderzeeboot Smaldeel"
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 30040 id = 45 }
      name  = "2e Onderzeeboot Smaldeel"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 30040 id = 46 }
      name  = "3e Onderzeeboot Smaldeel"
      type  = submarine
      model = 2
    }
    division =
    { id   = { type = 30040 id = 47 }
      name = "1e Transport Smaldeel"
      type = transport
    }
    division =
    { id   = { type = 30040 id = 48 }
      name = "2e Transport Smaldeel"
      type = transport
    }
    division =
    { id   = { type = 30040 id = 49 }
      name = "3e Transport Smaldeel"
      type = transport
    }
    division =
    { id   = { type = 30040 id = 50 }
      name = "4e Transport Smaldeel"
      type = transport
    }
  }
  airunit =
  { location = 47
    base     = 47
    name     = "1e Luchtvloot"
    id       = { type = 16371 id = 25 }
    division =
    { id       = { type = 30040 id = 26 }
      type     = interceptor
      model    = 1
      strength = 43
      name     = "1e Jachtvliegtuig Groep"
    }
  }
  airunit =
  { location = 1628
    base     = 1628
    name     = "2e Luchtvloot"
    id       = { type = 30040 id = 27 }
    division =
    { id       = { type = 30040 id = 28 }
      type     = tactical_bomber
      model    = 0
      strength = 39
      name     = "1e Licht Bombardeervliegtuig Groep"
    }
    division =
    { id       = { type = 30040 id = 29 }
      type     = interceptor
      model    = 0
      strength = 36
      name     = "2e Jachtvliegtuig Groep"
    }
  }
  division_development =
  { name  = "HrMs Jacob van Heemskerck"
    type  = light_cruiser
    model = 1
    cost  = 2
    id    = { type = 30040 id = 500 }
    date  = { year = 1940 month = march day = 1 }
  }
  division_development =
  { name  = "3e Torpedobootjager Smaldeel"
    type  = destroyer
    model = 2
    cost  = 1.6
    id    = { type = 30040 id = 501 }
    date  = { year = 1939 month = november day = 1 }
  }
  division_development =
  { name  = "4e Onderzeeboot Smaldeel"
    type  = submarine
    model = 2
    cost  = 1.5
    id    = { type = 30040 id = 502 }
    date  = { year = 1939 month = december day = 1 }
  }
}
