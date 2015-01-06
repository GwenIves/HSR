
##############################
# Country definition for MEX #
##############################

province = { id = 747 anti_air = 1 } # Monterrey
province =
{ id         = 749
  naval_base = { size = 2 current_size = 2 }
  ic         = 2
}              # Tampico
province = { id = 751 anti_air = 1 ic = 2 } # Guadalajara
province =
{ id       = 752
  air_base = { size = 4 current_size = 4 }
  anti_air = 2
  ic       = 2
}            # Mexico City
province =
{ id         = 754
  naval_base = { size = 2 current_size = 2 }
}              # Acapulco

#####################
# Country main data #
#####################

country =
{ tag                    = MEX
  # Resource Reserves
  energy                 = 1000
  metal                  = 500
  rare_materials         = 200
  oil                    = 500
  supplies               = 500
  capital                = 752
  manpower               = 185
  diplomacy =
  { relation = { tag = ENG value = 50 }
    relation = { tag = HOL value = 25 }
    relation = { tag = USA value = 125 }
  }
  nationalprovinces      = { 756 755 754 753 752 751 750 747 749 745 742 741 744 743 740 739 737 738 }
  ownedprovinces         = { 756 755 754 753 752 751 750 747 749 745 742 741 744 743 740 739 737 738 }
  controlledprovinces    = { 756 755 754 753 752 751 750 747 749 745 742 741 744 743 740 739 737 738 }
  # Semi-Major Tech '36
  # Group C 1944 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1070  1110  1120  1150  1190  1200  1210  1220  1310  14000 14010 14020 2010  2020  2030  2040
			     2050  2060  2070  2080  2150  2160  2170  2180  2220  2230  2290  2300  2310  2320  2330  2330  2340  2400  2410  2450
			     2460  2470  2510  2520  2530  4010  4020  4030  4040  4050  4060  4120  4130  4140  4170  4190  4250  5010  5020  5050
			     5060  5070  5080  5090  5100  5110  5120  5190  5200  5210  5220  5310  5320  5350  5360  5470  6010  6020  6040  6050
			     6060  6070  9010  9020  9030  9040
			   }
  SpyInfo                = { country = "MEX" NumberOfSpies = 8 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 9
    freedom           = 6
    free_market       = 6
    professional_army = 4
    defense_lobby     = 4
    interventionism   = 3
  }
  dormant_ministers      = { 36006 36007 36001 36002 36003 36004 36061 36005 36073 36086 36008 36058 36095 36104 36009 36010 }
  headofstate            = { type = 9 id = 36032 }
  headofgovernment       = { type = 9 id = 36041 }
  foreignminister        = { type = 9 id = 36051 }
  armamentminister       = { type = 9 id = 36063 }
  ministerofsecurity     = { type = 9 id = 36077 }
  ministerofintelligence = { type = 9 id = 36087 }
  chiefofstaff           = { type = 9 id = 36096 }
  chiefofarmy            = { type = 9 id = 36105 }
  chiefofnavy            = { type = 9 id = 36113 }
  chiefofair             = { type = 9 id = 36119 }
  # ## OOB
  landunit =
  { id       = { type = 10244 id = 1 }
    name     = "1st Army"
    location = 752
    division =
    { id       = { type = 10244 id = 2 }
      name     = "Presidential Guard"
      strength = 100
      type     = infantry
      model    = 4
    }
    division =
    { id       = { type = 10244 id = 3 }
      name     = "1a División de Infantería"
      strength = 100
      type     = infantry
      model    = 3
    }
    division =
    { id       = { type = 10244 id = 4 }
      name     = "2a División de Infantería"
      strength = 100
      type     = infantry
      model    = 4
    }
    division =
    { id       = { type = 10244 id = 5 }
      name     = "3a División de Infantería"
      strength = 100
      type     = infantry
      model    = 3
    }
  }
  landunit =
  { id       = { type = 10244 id = 6 }
    name     = "2nd Army"
    location = 749
    division =
    { id       = { type = 10244 id = 7 }
      name     = "4a División de Infantería"
      strength = 100
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 10244 id = 8 }
      name     = "5a División de Infantería"
      strength = 100
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 10244 id = 9 }
      name     = "6a División de Infantería"
      strength = 100
      type     = infantry
      model    = 2
    }
  }
  landunit =
  { id       = { type = 10244 id = 10 }
    name     = "1st Cavalry Corps"
    location = 744
    division =
    { id       = { type = 10244 id = 11 }
      name     = "1a División de Caballería"
      strength = 100
      type     = cavalry
      model    = 2
    }
    division =
    { id       = { type = 10244 id = 12 }
      name     = "2a División de Caballería"
      strength = 100
      type     = cavalry
      model    = 2
    }
  }
  navalunit =
  { id       = { type = 10244 id = 13 }
    name     = "Mexican Navy"
    location = 749
    base     = 749
    division =
    { id   = { type = 10244 id = 18 }
      name = "1a Flotilla Naval é Ejercito"
      type = transport
    }
    division =
    { id   = { type = 10244 id = 19 }
      name = "2a Flotilla Naval é Ejercito"
      type = transport
    }
    division =
    { id   = { type = 10244 id = 20 }
      name = "3a Flotilla Naval é Ejercito"
      type = transport
    }
  }
}
