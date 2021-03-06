
##############################
# Country definition for BOL #
##############################

country =
{ tag                    = BOL
  manpower               = 25
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 832
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
  nationalprovinces      = { 836 833 838 832 828 827 837 822 839 }
  ownedprovinces         = { 836 833 838 832 828 827 }
  controlledprovinces    = { 836 833 838 832 828 827 }
  # ROTW Minor Tech '36
  # Group D 1939 techs
  # ######################
  techapps               = { 4010 4020 2150 2010 2020 2290 2300 2310 2320 1010 1020 1190 1200 1110 2330 2400 2450 2460 2510 5010 5080 5090 5100 5190 6010
			   }
  SpyInfo                = { country = "BOL" NumberOfSpies = 4 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 7
    free_market       = 8
    freedom           = 7
    professional_army = 7
    defense_lobby     = 8
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 43032 }
  headofgovernment       = { type = 9 id = 43049 }
  foreignminister        = { type = 9 id = 43068 }
  armamentminister       = { type = 9 id = 43004 }
  ministerofsecurity     = { type = 9 id = 43125 }
  ministerofintelligence = { type = 9 id = 43149 }
  chiefofstaff           = { type = 9 id = 43166 }
  chiefofarmy            = { type = 9 id = 43181 }
  chiefofnavy            = { type = 9 id = 43195 }
  chiefofair             = { type = 9 id = 43208 }
  dormant_ministers      = { 43001 43002 43003 43005 43006 43207 43008 43009 43010 43031 43033 43036 43048 43050 43054 43069 43070
			     43074 43095 43130 43153 43180
			   }
  # Superior Firepower
  # Note: Army was significantly larger before and during the Chaco War.
  landunit =
  { id       = { type = 30051 id = 40 }
    name     = "Ejercito de Bolivia"
    location = 832
    division =
    { id       = { type = 30051 id = 4000 }
      name     = "1. Brigada de Infanterķa 'Bolivar'"
      strength = 90
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 30051 id = 4003 }
      name     = "1. Brigada de Caballerķa 'Chaco'"
      strength = 60
      type     = cavalry
    }
  }
}
