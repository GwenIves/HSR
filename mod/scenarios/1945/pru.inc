
##############################
# Country definition for PRU #
##############################

province =
{ id         = 831
  naval_base = { size = 6 current_size = 6 }
  air_base   = { size = 5 current_size = 5 }
}              # Arequipa

#####################
# Country main data #
#####################

country =
{ tag                    = PRU
  # Resource Reserves
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 500
  supplies               = 200
  capital                = 830
  manpower               = 65
  SpyInfo                = { country = "PRU" NumberOfSpies = 5 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 4
    freedom           = 4
    free_market       = 4
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 5
  }
  nationalprovinces      = { 831 829 830 821 816 818 }
  ownedprovinces         = { 816 818 821 829 830 831 }
  controlledprovinces    = { 816 818 821 829 830 831 }
  # ROTW Minor Tech '36
  # Group D 1944 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1110  1120  1190  1200  1210  1220  1310  14000 14010 2010  2020  2030  2040  2050  2070  2150
			     2160  2290  2300  2310  2320  2330  2330  2400  2410  2450  2460  2470  2510  2520  3010  3070  3400  4010  4020  4030
			     4120  4130  4140  5010  5050  5080  5090  5100  5190  5200  6010  6020  6040  8040  8050  9010  9020
			   }
  diplomacy =
  { relation = { tag = ARG value = 20 }
    relation = { tag = BOL value = 30 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = -25 }
    relation = { tag = COL value = -35 }
    relation = { tag = PAR value = 25 }
    relation = { tag = URU value = 25 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }
  dormant_ministers      = { 39001 39002 39037 39003 39047 39004 39005 39075 39006 39007 39008 39009 39010 39031 39137 39049 39058 39059 39060 39061
			     39062 39076 39077 39088 39089 39090 39110
			   }
  headofstate            = { type = 9 id = 39033 }
  headofgovernment       = { type = 9 id = 39043 }
  foreignminister        = { type = 9 id = 39054 }
  armamentminister       = { type = 9 id = 39070 }
  ministerofsecurity     = { type = 9 id = 39084 }
  ministerofintelligence = { type = 9 id = 39096 }
  chiefofstaff           = { type = 9 id = 39106 }
  chiefofarmy            = { type = 9 id = 39115 }
  chiefofnavy            = { type = 9 id = 39124 }
  chiefofair             = { type = 9 id = 39134 }
  landunit =
  { id       = { type = 10335 id = 1 }
    name     = "1st Army"
    location = 830
    division =
    { id       = { type = 10335 id = 2 }
      name     = "1st Military District"
      strength = 100
      type     = infantry
      model    = 3
    }
    division =
    { id       = { type = 10335 id = 3 }
      name     = "2nd Military District"
      strength = 100
      type     = infantry
      model    = 3
    }
    division =
    { id       = { type = 10335 id = 4 }
      name     = "3rd Military District"
      strength = 100
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 10335 id = 5 }
      name     = "4th Military District"
      strength = 100
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 10335 id = 6 }
      name     = "5th Military District"
      strength = 100
      type     = infantry
      model    = 2
    }
  }
  navalunit =
  { id       = { type = 10335 id = 7 }
    name     = "Peruvian Navy"
    location = 831
    base     = 831
    # Two DDs:
    division =
    { id       = { type = 10335 id = 8 }
      name     = "1st Destroyer Division"
      type     = destroyer
      strength = 50
    }
    # Built 1907:
    division =
    { id   = { type = 10335 id = 9 }
      name = "Almirante Grau"
      type = light_cruiser
    }
    division =
    { id   = { type = 10335 id = 10 }
      name = "Coronel Bolognesi"
      type = light_cruiser
    }
    # Submarine division:
    division =
    { id   = { type = 10335 id = 11 }
      name = "1st Submarine Division"
      type = submarine
    }
  }
}
