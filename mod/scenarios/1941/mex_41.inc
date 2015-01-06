
##############################
# Country definition for MEX #
##############################

province =
{ id         = 743
  anti_air   = 3
  naval_base = { size = 3 current_size = 3 }
}              # Culiacán
province = { id = 747 anti_air = 1 } # Monterrey
province = { id = 749 ic = 1 } # Tampico
province = { id = 751 ic = 2 anti_air = 1 } # Guadalajara
province = { id = 752 ic = 1 anti_air = 2 } # Mexico City
province =
{ id         = 753
  naval_base = { size = 5 current_size = 5 }
}              # Puebla
province =
{ id       = 754
  anti_air = 1
  air_base = { size = 4 current_size = 48 }
}            # Acapulco

#####################
# Country main data #
#####################

country =
{ tag                    = MEX
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 100
  capital                = 752
  manpower               = 62
  SpyInfo                = { country = "MEX" NumberOfSpies = 7 }
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
  # Group C 1941 techs
  # ######################
  techapps               = { 5070  4010  4020  4030  4040  4120  4130  4140  2010  2020  2030  2040  2050  2150  2290  2300  2310  2320  2330  2400
			     2410  2450  2460  2470  2510  2520  1010  1020  1030  1190  1200  1210  1220  1110  2330  9010  9020  9030  5010  5020
			     5050  5080  5090  5100  5110  5190  5200  5470  6010  6020  6040  14000
			   }
  diplomacy =
  { relation = { tag = ENG value = 50 }
    relation = { tag = HOL value = 25 }
    relation = { tag = USA value = 125 }
  }
  headofstate            = { type = 9 id = 36032 }
  headofgovernment       = { type = 9 id = 36041 }
  foreignminister        = { type = 9 id = 36050 }
  armamentminister       = { type = 9 id = 36062 }
  ministerofsecurity     = { type = 9 id = 36074 }
  ministerofintelligence = { type = 9 id = 36087 }
  chiefofstaff           = { type = 9 id = 36096 }
  chiefofarmy            = { type = 9 id = 36105 }
  chiefofnavy            = { type = 9 id = 36113 }
  chiefofair             = { type = 9 id = 36119 }
  dormant_ministers      = { 36006 36007 36001 36002 36003 36004 36061 36005 36073 36086 36008 }
  landunit =
  { id       = { type = 10109 id = 1 }
    name     = "Ejercito de Mexico"
    location = 752
    division =
    { id       = { type = 10109 id = 2 }
      name     = "Guardia del Presidente"
      strength = 100
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 10109 id = 3 }
      name     = "I División de Infantería"
      strength = 100
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 10109 id = 4 }
      name     = "II División de Infantería"
      strength = 100
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 10109 id = 5 }
      name     = "III División de Infantería"
      strength = 100
      type     = infantry
      model    = 1
      extra    = artillery
    }
  }
  landunit =
  { id       = { type = 10109 id = 6 }
    name     = "Caballería de Mexico"
    location = 742
    division =
    { id       = { type = 10109 id = 7 }
      name     = "I División de Caballería"
      strength = 100
      type     = cavalry
      model    = 1
    }
    division =
    { id       = { type = 10109 id = 8 }
      name     = "II División de Caballería"
      strength = 100
      type     = cavalry
      model    = 1
    }
  }
  # navalunit = {
  # id = { type = 10109 id = 9 }
  # name = "Armada de Mexico"
  # location = 753
  # base = 753
  # division = { id = { type = 10109 id = 10 } name = "1a Flotilla de Destructores" type = destroyer model = 0 }
  # }
  airunit =
  { id       = { type = 10109 id = 11 }
    name     = "Fuerza Aérea Mexicana"
    location = 754
    base     = 754
    division =
    { id       = { type = 10109 id = 12 }
      name     = "1a Grupo Aéreo de Caza"
      type     = interceptor
      model    = 1
      strength = 100
    }
  }
}
