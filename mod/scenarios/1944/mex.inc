
##############################
# Country definition for MEX #
##############################

province = { id = 747 anti_air = 3 } # Monterrey
province =
{ id         = 749
  ic         = 6
  naval_base = { size = 2 current_size = 2 }
}              # Tampico
province = { id = 751 anti_air = 3 ic = 6 } # Guadalajara
province =
{ id       = 752
  anti_air = 6
  ic       = 6
  air_base = { size = 4 current_size = 4 }
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
  manpower               = 62
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
  nationalprovinces      = { 756 755 754 753 752 751 750 747 749 745 742 741 744 743 740 739 737 738 }
  ownedprovinces         = { 756 755 754 753 752 751 750 747 749 745 742 741 744 743 740 739 737 738 }
  controlledprovinces    = { 756 755 754 753 752 751 750 747 749 745 742 741 744 743 740 739 737 738 }
  # Semi-Major Tech '36
  # Group C 1944 techs
  # ######################
  techapps               = { 4010  4020  4030  4040  4050  4060  4120  4130  4140  4170  4190  4250  2010  2020  2030  2040  2050  2060  2070  2080
			     2150  2160  2170  2180  2220  2230  2290  2300  2310  2320  2330  2340  2400  2410  2450  2460  2470  2510  2520  2530
			     1010  1020  1030  1040  1190  1200  1210  1220  1110  1120  1070  1150  2330  1310  9010  9020  9030  9040  5010  5020
			     5050  5060  5070  5080  5090  5100  5110  5120  5190  5200  5210  5220  5310  5350  5360  5470  6010  6020  6040  6050
			     6060  6070  5320  14000 14010
			   }
  diplomacy =
  { relation = { tag = ENG value = 50 }
    relation = { tag = USA value = 125 }
  }
  dormant_ministers      = { 36006 36007 36001 36002 36003 36004 36061 36005 36073 36086 36008 36058 36095 36104 36009 36010 }
  headofstate            = { type = 9 id = 36032 }
  headofgovernment       = { type = 9 id = 36041 }
  foreignminister        = { type = 9 id = 36050 }
  armamentminister       = { type = 9 id = 36063 }
  ministerofsecurity     = { type = 9 id = 36076 }
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
      model    = 2
    }
    division =
    { id       = { type = 10244 id = 3 }
      name     = "1a Divisi�n de Infanter�a"
      strength = 100
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 10244 id = 4 }
      name     = "2a Divisi�n de Infanter�a"
      strength = 100
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 10244 id = 5 }
      name     = "3a Divisi�n de Infanter�a"
      strength = 100
      type     = infantry
      model    = 2
    }
  }
  landunit =
  { id       = { type = 10244 id = 6 }
    name     = "2nd Army"
    location = 749
    division =
    { id       = { type = 10244 id = 7 }
      name     = "4a Divisi�n de Infanter�a"
      strength = 100
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 10244 id = 8 }
      name     = "5a Divisi�n de Infanter�a"
      strength = 100
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 10244 id = 9 }
      name     = "6a Divisi�n de Infanter�a"
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
      name     = "1a Divisi�n de Caballer�a"
      strength = 100
      type     = cavalry
      model    = 2
    }
    division =
    { id       = { type = 10244 id = 12 }
      name     = "2a Divisi�n de Caballer�a"
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
      name = "1a Flotilla Naval � Ejercito"
      type = transport
    }
    division =
    { id   = { type = 10244 id = 19 }
      name = "2a Flotilla Naval � Ejercito"
      type = transport
    }
    division =
    { id   = { type = 10244 id = 20 }
      name = "3a Flotilla Naval � Ejercito"
      type = transport
    }
  }
  airunit =
  { id       = { type = 10244 id = 15 }
    name     = "Mexican Air Force"
    location = 752
    base     = 752
    division =
    { id    = { type = 10244 id = 16 }
      name  = "1a Divisi�n A�reo de Caza"
      type  = interceptor
      model = 1
    }
    division =
    { id    = { type = 10244 id = 17 }
      name  = "2a Divisi�n A�reo de Caza"
      type  = interceptor
      model = 1
    }
  }
}
