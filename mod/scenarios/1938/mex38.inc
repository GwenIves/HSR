
##############################
# Country definition for MEX #
##############################

province = { id = 749 ic = 1 } # Tampico
province = { id = 751 ic = 1 } # Guadalajara
province =
{ id         = 754
  air_base   = { size = 1 current_size = 1 }
  naval_base = { size = 4 current_size = 4 }
}              # Acapulco

#####################
# Country main data #
#####################

country =
{ tag                    = MEX
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
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
  # infantry
  techapps               = { 1010 1110 1190 1200 2010 2020 2150 2290 2300 2310 2320 2330 2450 2510 4010 4120 5010 5080 5190 6010 6020 9010 9020 }
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
    { id   = { type = 30058 id = 2 }
      name = "Guardia del Presidente"
      type = infantry
    }
    division =
    { id   = { type = 30058 id = 3 }
      name = "I División de Infantería"
      type = infantry
    }
    division =
    { id   = { type = 30058 id = 4 }
      name = "II División de Infantería"
      type = infantry
    }
    division =
    { id    = { type = 30058 id = 5 }
      name  = "III División de Infantería"
      type  = infantry
      extra = artillery
    }
  }
  landunit =
  { id       = { type = 30058 id = 6 }
    name     = "Caballería de Mexico"
    location = 745
    division =
    { id   = { type = 30058 id = 7 }
      name = "I División de Caballería"
      type = cavalry
    }
    division =
    { id   = { type = 30058 id = 8 }
      name = "II División de Caballería"
      type = cavalry
    }
  }
  navalunit =
  { id       = { type = 30058 id = 9 }
    name     = "Armada de Mexico"
    location = 754
    base     = 754
    division =
    { id   = { type = 30058 id = 10 }
      name = "Flotilla de Destructores"
      type = destroyer
    }
  }
  airunit =
  { id       = { type = 30058 id = 11 }
    name     = "Fuerza Aérea Mexicana"
    location = 754
    base     = 754
    division =
    { id       = { type = 30058 id = 12 }
      name     = "Grupo Aéreo de Caza"
      type     = interceptor
      strength = 50
    }
  }
}
