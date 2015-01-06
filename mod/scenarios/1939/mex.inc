
##############################
# Country definition for MEX #
##############################

province = { id = 747 anti_air = 1 } # Monterrey
province = { id = 749 ic = 1 } # Tampico
province = { id = 751 ic = 1 anti_air = 1 } # Guadalajara
province = { id = 752 anti_air = 2 } # Mexico City
province =
{ id         = 754
  anti_air   = 2
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 4 current_size = 4 }
}              # Acapulco

#####################
# Country main data #
#####################

country =
{ tag                    = MEX
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 752
  manpower               = 61
  diplomacy =
  { relation = { tag = ENG value = 50 }
    relation = { tag = HOL value = 25 }
    relation = { tag = USA value = 125 }
  }
  nationalprovinces      = { 756 755 754 753 752 751 750 747 749 745 742 741 744 743 740 739 737 738 }
  ownedprovinces         = { 756 755 754 753 752 751 750 747 749 745 742 741 744 743 740 739 737 738 }
  controlledprovinces    = { 756 755 754 753 752 751 750 747 749 745 742 741 744 743 740 739 737 738 }
  # Semi-Major Tech '36
  # Group C 1939 techs
  # ######################
  techapps               = { 4010  4020  4120  4130  2150  2010  2020  2030  2040  2290  2300  2310  2320  2330  2400  2450  2460  2510  1010  1020
			     1190  1200  1110  9010  9020  5010  5080  5090  5100  5190  5200  6010  6020  14000
			   }
  SpyInfo                = { country = "MEX" NumberOfSpies = 6 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 8
    freedom           = 6
    free_market       = 6
    professional_army = 4
    defense_lobby     = 4
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 36001 }
  headofgovernment       = { type = 9 id = 36002 }
  foreignminister        = { type = 9 id = 36003 }
  armamentminister       = { type = 9 id = 36061 }
  ministerofsecurity     = { type = 9 id = 36073 }
  ministerofintelligence = { type = 9 id = 36086 }
  chiefofstaff           = { type = 9 id = 36095 }
  chiefofarmy            = { type = 9 id = 36104 }
  chiefofnavy            = { type = 9 id = 36113 }
  chiefofair             = { type = 9 id = 36119 }
  dormant_ministers      = { 36006 36007 }
  landunit =
  { id       = { type = 30058 id = 1 }
    name     = "Ejercito de Mexico"
    location = 752
    division =
    { id       = { type = 30058 id = 100 }
      name     = "Guardia del Presidente"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30058 id = 101 }
      name     = "I División de Infantería"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30058 id = 102 }
      name     = "II División de Infantería"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30058 id = 301 }
      name     = "III División de Infantería"
      strength = 100
      type     = infantry
      extra    = artillery
    }
  }
  landunit =
  { id       = { type = 30058 id = 2 }
    name     = "Caballería de Mexico"
    location = 745
    division =
    { id       = { type = 30058 id = 200 }
      name     = "I División de Caballería"
      strength = 100
      type     = cavalry
    }
    division =
    { id       = { type = 30058 id = 201 }
      name     = "II División de Caballería"
      strength = 100
      type     = cavalry
    }
  }
  # navalunit = {
  # id = { type = 30059 id = 1 }
  # name = "Armada de Mexico"
  # location = 754
  # base = 754
  # division = { id = { type = 30059 id = 100 } name = "1a Flotilla de Destructores" type = destroyer model = 0 }
  # }
  airunit =
  { id       = { type = 30059 id = 2 }
    name     = "Fuerza Aérea Mexicana"
    location = 754
    base     = 754
    division =
    { id       = { type = 30059 id = 200 }
      name     = "1a Grupo Aéreo de Caza"
      type     = interceptor
      model    = 0
      strength = 70
    }
  }
}
