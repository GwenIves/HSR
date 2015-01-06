
##############################
# Country definition for HOL #
##############################

province =
{ id         = 1359
  anti_air   = 2
  naval_base = { size = 7 current_size = 7 }
  air_base   = { size = 4 current_size = 4 }
}              # Oosthaven
province =
{ id         = 1628
  supplypool = 100
  anti_air   = 2
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 4 current_size = 4 }
}              # Batavia
province =
{ id         = 1632
  anti_air   = 2
  naval_base = { size = 7 current_size = 7 }
}              # Soerabaja
province = { id = 1641 } # Bandjermasin
province =
{ id         = 1653
  anti_air   = 2
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 2 current_size = 2 }
}              # Menado

#####################
# Country main data #
#####################

country =
{ tag                    = HOL
  capital                = 1628
  manpower               = 20
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 100
  transports             = 100
  escorts                = 20
  SpyInfo                = { country = "HOL" NumberOfSpies = 5 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 3
    free_market       = 9
    freedom           = 10
    professional_army = 5
    defense_lobby     = 6
    interventionism   = 2
  }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 5 }
  #SpyInfo                = { country = "FRA" NumberOfSpies = 5 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 5 }
  #SpyInfo                = { country = "BEL" NumberOfSpies = 5 }
  #SpyInfo                = { country = "GER" NumberOfSpies = 5 }
  #SpyInfo                = { country = "USA" NumberOfSpies = 5 }
  #SpyInfo                = { country = "NOR" NumberOfSpies = 5 }
  # Homeland
  nationalprovinces      = { 46   47   48   49   66   77   78   79   1354 1355 1356 1357 1358 1359 1628 1629 1630 1631 1632 1633 1634 1635 1636 1637
			     1638 1639 1640 1641 1642 1643 1645 1648 1649 1650 1651 1652 1653 1654 1655 1656 1657 1659 1660 1661 1662 1663 1664 1665
			     1673 1674 801  874
			   }
  # Indonesia
  ownedprovinces         = { 1354 1355 1356 1357 1358 1359 1628 1629 1630 1631 1632 1633 1634 1635 1636 1637 1638 1639 1640 1641 1642 1643 1645 1648
			     1649 1650 1651 1652 1653 1654 1655 1656 1657 1659 1660 1661 1662 1663 1664 1665 1673 1674 801  874
			   }
  # Indonesia
  controlledprovinces    = { 1354 1355 1356 1357 1358 1359 1628 1629 1630 1631 1632 1633 1634 1635 1636 1637 1638 1639 1640 1641 1642 1643 1645 1648
			     1649 1650 1651 1652 1653 1654 1655 1656 1657 1659 1660 1661 1662 1663 1664 1665 1673 1674 801  874
			   }
  # Group C 1941 techs
  # ######################
  techapps               = { 5070  4010  4020  4030  4040  4120  4130  4140  2010  2020  2030  2040  2050  2150  2290  2300  2310  2320  2330  2400
			     2410  2450  2460  2470  2510  2520  1010  1020  1030  1190  1200  1210  1220  1110  2330  9010  9020  9030  5010  5020
			     5050  5080  5090  5100  5110  5190  5200  5470  5480  5410  6010  6020  6040  3010  3020  3030  3070  3080  3090  3130
			     3140  3150  3190  3200  3250  3400  3410  3420  8010  8020  8030  8040  8050  8070  14000 14010 14020
			   }
  diplomacy =
  { relation = { tag = BEL value = 200 }
    relation = { tag = CAN value = 80 }
    # relation = { tag = DEN value = 100 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 200 }
    relation = { tag = GER value = -200 }
    relation = { tag = ITA value = -200 }
    relation = { tag = JAP value = -150 }
    # relation = { tag = LUX value = 150 }
    relation = { tag = MEX value = 25 }
    # relation = { tag = NOR value = 100 }
    relation = { tag = SWE value = 100 }
    relation = { tag = USA value = 70 }
  }
  headofstate            = { type = 9 id = 8001 }
  headofgovernment       = { type = 9 id = 8046 }
  foreignminister        = { type = 9 id = 8067 }
  armamentminister       = { type = 9 id = 8079 }
  ministerofsecurity     = { type = 9 id = 8108 }
  ministerofintelligence = { type = 9 id = 8133 }
  chiefofstaff           = { type = 9 id = 8007 }
  chiefofarmy            = { type = 9 id = 8156 }
  chiefofnavy            = { type = 9 id = 8009 }
  chiefofair             = { type = 9 id = 8172 }
  dormant_ministers      = { 8002 8048 8003 8066 8004 8005 8006 8038 8183 8040 8049 8051 }
  dormant_leaders        = { 7801 7807 7809 7821 7824 7825 7827 7844 7857 }
  landunit =
  { id       = { type = 10333 id = 1 }
    location = 1628
    name     = "Dutch colonial army"
    division =
    { id    = { type = 10333 id = 2 }
      name  = "Ie Divisie 'Java'"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 10333 id = 3 }
      name  = "IIe Divisie 'Java'"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 10333 id = 4 }
      name  = "IIIe Divisie 'Java'"
      type  = infantry
      model = 1
    }
  }
  navalunit =
  { id       = { type = 10333 id = 5 }
    location = 1628
    base     = 1628
    name     = "Dutch Colonial fleet"
    division =
    { id    = { type = 10333 id = 6 }
      name  = "HrMs Tromp"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 10333 id = 101 }
      name  = "HrMs Jacob van Heemskerck"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 10333 id = 7 }
      name  = "HrMs De Ruyter"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 10333 id = 8 }
      name  = "HrMs Java"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 10333 id = 100 }
      name  = "HrMs Sumatra"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 10333 id = 9 }
      name  = "1e Torpedobootjager Smaldeel"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 10333 id = 10 }
      name  = "2e Torpedobootjager Smaldeel"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 10333 id = 102 }
      name  = "3e Torpedobootjager Smaldeel"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 10333 id = 11 }
      name  = "1e Onderzeeboot Smaldeel"
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 10333 id = 12 }
      name  = "2e Onderzeeboot Smaldeel"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 10333 id = 13 }
      name  = "3e Onderzeeboot Smaldeel"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 10333 id = 103 }
      name  = "4e Onderzeeboot Smaldeel"
      type  = submarine
      model = 2
    }
    division =
    { id   = { type = 10333 id = 14 }
      name = "1e Transport Smaldeel"
      type = transport
    }
    division =
    { id   = { type = 10333 id = 15 }
      name = "2e Transport Smaldeel"
      type = transport
    }
    division =
    { id   = { type = 10333 id = 16 }
      name = "3e Transport Smaldeel"
      type = transport
    }
    division =
    { id   = { type = 10333 id = 17 }
      name = "4e Transport Smaldeel"
      type = transport
    }
  }
  airunit =
  { id       = { type = 10333 id = 18 }
    location = 1628
    base     = 1628
    name     = "Dutch colonial airforce"
    division =
    { id       = { type = 10333 id = 19 }
      name     = "1st interceptor wing"
      type     = interceptor
      model    = 1
      strength = 50
    }
    division =
    { id       = { type = 10333 id = 20 }
      name     = "1st bomber wing"
      type     = tactical_bomber
      model    = 1
      strength = 50
    }
  }
}
