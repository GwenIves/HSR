
##############################
# Country definition for BOL #
##############################

country =
{ tag                    = BOL
  manpower               = 8
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 100
  capital                = 832
  SpyInfo                = { country = "BUL" NumberOfSpies = 8 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    free_market       = 8
    freedom           = 7
    professional_army = 7
    defense_lobby     = 8
    interventionism   = 5
  }
  nationalprovinces      = { 836 833 838 832 828 827 837 822 839 }
  ownedprovinces         = { 836 833 838 832 828 827 }
  controlledprovinces    = { 836 833 838 832 828 827 }
  # Group D 1941 techs
  # ######################
  techapps               = { 4010  4020  4030  4120  4130  2010  2020  2030  2040  2050  2150  2290  2300  2310  2320  1010  1020  1030  1190  1200
			     1210  1110  2330  2400  2450  2460  2470  2510  9010  5010  5050  5080  5090  5100  5190  6010  6020  14000
			   }
  diplomacy =
  { relation = { tag = ARG value = 50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = -50 }
    relation = { tag = COL value = 1 }
    relation = { tag = ECU value = -20 }
    relation = { tag = GER value = 15 }
    relation = { tag = PAR value = -50 }
    relation = { tag = PRU value = 30 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 85 }
    relation = { tag = VEN value = -15 }
  }
  headofstate            = { type = 9 id = 43037 }
  headofgovernment       = { type = 9 id = 43051 }
  foreignminister        = { type = 9 id = 43078 }
  armamentminister       = { type = 9 id = 43109 }
  ministerofsecurity     = { type = 9 id = 43136 }
  ministerofintelligence = { type = 9 id = 43157 }
  chiefofstaff           = { type = 9 id = 43173 }
  chiefofarmy            = { type = 9 id = 43187 }
  chiefofnavy            = { type = 9 id = 43201 }
  chiefofair             = { type = 9 id = 43215 }
  dormant_ministers      = { 43001 43031 43033 43036 43002 43048 43054 43050 43069 43070 43074 43003 43095 43005 43130 43006 43153 43008 43180 43009
			     43207 43010 43032 43049 43004 43135 43166 43170 43195
			   }
  landunit =
  { id       = { type = 10015 id = 1 }
    name     = "Ejercito de Bolivia"
    location = 832
    division =
    { id       = { type = 10015 id = 2 }
      name     = "1. Brigada de Infantería 'Bolivar'"
      strength = 100
      type     = infantry
      model    = 1
      extra    = artillery
    }
    division =
    { id       = { type = 10015 id = 3 }
      name     = "1. Brigada de Milicia de Bolivia"
      strength = 100
      type     = militia
      extra    = anti_air
    }
    division =
    { id       = { type = 10015 id = 4 }
      name     = "2. Brigada de Milicia de Bolivia"
      strength = 100
      type     = militia
    }
    division =
    { id       = { type = 10015 id = 5 }
      name     = "1. Brigada de Caballería 'Chaco'"
      strength = 100
      type     = cavalry
      model    = 1
    }
  }
}
