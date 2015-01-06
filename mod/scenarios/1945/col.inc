
##############################
# Country definition for COL #
##############################

province =
{ id         = 803
  anti_air   = 2
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
}              # Barranquilla
province = { id = 813 anti_air = 4 } # Bogotá

#####################
# Country main data #
#####################

country =
{ tag                    = COL
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  manpower               = 85
  capital                = 813
  SpyInfo                = { country = "COL" NumberOfSpies = 5 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 7
    free_market       = 8
    freedom           = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  nationalprovinces      = { 803 812 813 890 867 819 868 }
  ownedprovinces         = { 803 812 813 890 867 819 868 }
  controlledprovinces    = { 803 812 813 890 867 819 868 }
  # ROTW Minor Tech '36
  # Group D 1944 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1110  1120  1190  1200  1210  1220  1310  14000 14010 2010  2020  2030  2040  2050  2070  2150
			     2160  2290  2300  2310  2320  2330  2330  2400  2410  2450  2460  2470  2510  2520  3010  4010  4020  4030  4120  4130
			     4140  5010  5050  5080  5090  5100  5190  5200  6010  6020  6040  8050  9010  9020
			   }
  diplomacy =
  { relation = { tag = ARG value = 10 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 15 }
    relation = { tag = ECU value = 20 }
    relation = { tag = PAR value = 10 }
    relation = { tag = PRU value = -35 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 20 }
  }
  dormant_ministers      = { 37003 37057 37004 37075 37005 37008 37035 37032 37049 37046 37044 37058 37061 37059 37073 37077 37082 37113 37007 }
  headofstate            = { type = 9 id = 37001 }
  headofgovernment       = { type = 9 id = 37002 }
  foreignminister        = { type = 9 id = 37060 }
  armamentminister       = { type = 9 id = 37076 }
  ministerofsecurity     = { type = 9 id = 37095 }
  ministerofintelligence = { type = 9 id = 37112 }
  chiefofstaff           = { type = 9 id = 37127 }
  chiefofarmy            = { type = 9 id = 37137 }
  chiefofnavy            = { type = 9 id = 37145 }
  chiefofair             = { type = 9 id = 37151 }
  # Superior Firepower, Delay
  landunit =
  { id       = { type = 10284 id = 1 }
    name     = "Colombian Army"
    location = 803
    division =
    { id       = { type = 10284 id = 2 }
      name     = "1a División de Infantería"
      strength = 80
      type     = infantry
      model    = 3
    }
    division =
    { id       = { type = 10284 id = 3 }
      name     = "1a División de Caballería"
      strength = 80
      type     = cavalry
      model    = 1
    }
  }
  # #############################
  navalunit =
  { id       = { type = 23000 id = 4002 }
    name     = "Armada de Colombia"
    location = 803
    base     = 803
    division =
    { id           = { type = 23000 id = 4003 }
      name         = "1a Flotilla de Torpedillos"
      type         = destroyer
      model        = 0
      strength     = 40
      max_strength = 40
    }
  }
}
