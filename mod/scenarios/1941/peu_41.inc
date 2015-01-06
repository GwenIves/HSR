
##############################
# Country definition for PRU #
##############################

province =
{ id         = 830
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
}              # Lima

#####################
# Country main data #
#####################

country =
{ tag                    = PRU
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 100
  capital                = 830
  manpower               = 22
  SpyInfo                = { country = "PRU" NumberOfSpies = 5 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 4
    freedom           = 4
    free_market       = 4
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 5
  }
  nationalprovinces      = { 831 829 830 821 816 818 }
  ownedprovinces         = { 831 829 830 821 816 }
  controlledprovinces    = { 831 829 830 821 816 }
  # Group D 1941 techs
  # ######################
  techapps               = { 3130 3410 4010 4020 4030 4120 4130 2010 2020 2030 2040 2050 2150 2290 2300 2310 2320 1010 1020 1030 1190 1200 1210 1110
			     2330 2400 2450 2460 2470 2510 9010 5010 5050 5080 5090 5100 5190 6010 6020 3010 3070 3400 8020 8040 8050
			   }
  diplomacy =
  { relation = { tag = ARG value = 20 }
    relation = { tag = BOL value = 30 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = -25 }
    relation = { tag = COL value = -35 }
    relation = { tag = ECU value = -50 }
    relation = { tag = PAR value = 25 }
    relation = { tag = URU value = 25 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }
  headofstate            = { type = 9 id = 39032 }
  headofgovernment       = { type = 9 id = 39039 }
  foreignminister        = { type = 9 id = 39051 }
  armamentminister       = { type = 9 id = 39064 }
  ministerofsecurity     = { type = 9 id = 39005 }
  ministerofintelligence = { type = 9 id = 39090 }
  chiefofstaff           = { type = 9 id = 39102 }
  chiefofarmy            = { type = 9 id = 39111 }
  chiefofnavy            = { type = 9 id = 39119 }
  chiefofair             = { type = 9 id = 39129 }
  dormant_ministers      = { 39001 39002 39037 39003 39047 39004 39075 39006 39007 39008 39009 39010 39031 39137 39049 39058 39059 39060 39061 39062
			     39076 39077 39088 39089 39110
			   }
  landunit =
  { id       = { type = 17600 id = 1 }
    name     = "Ejercito del Peru"
    location = 830
    division =
    { id       = { type = 17600 id = 2 }
      name     = "1a Div. de Inf. del Peru 'Bolognesi'"
      strength = 100
      type     = infantry
      model    = 1
      extra    = anti_air
    }
    division =
    { id       = { type = 17600 id = 3 }
      name     = "2a Div. de Infantería del Peru"
      strength = 100
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 17600 id = 4 }
      name     = "3a Div. de Infantería del Peru"
      strength = 100
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 17600 id = 5 }
      name     = "1a Brigada Fuerzas Especiales"
      strength = 100
      type     = bergsjaeger
      model    = 0
    }
  }
  navalunit =
  { id       = { type = 17600 id = 6 }
    name     = "Marina del Guerra del Peru"
    location = 830
    base     = 830
    # Two DDs:
    division =
    { id    = { type = 17600 id = 7 }
      name  = "Suliana é Flotilla"
      type  = destroyer
      model = 0
    }
    # Built 1907:
    division =
    { id    = { type = 17600 id = 8 }
      name  = "ARP Almirante Grau"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 17600 id = 9 }
      name  = "ARP Coronel Bolognesi"
      type  = heavy_cruiser
      model = 0
    }
    # Submarine division:
    division =
    { id    = { type = 17600 id = 10 }
      name  = "Tacna é Flotilla"
      type  = submarine
      model = 1
    }
  }
}
