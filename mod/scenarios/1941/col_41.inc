
##############################
# Country definition for COL #
##############################

province =
{ id         = 803
  anti_air   = 2
  air_base   = { size = 1 current_size = 1 }
  naval_base = { size = 2 current_size = 2 }
}              # Barranquilla
province = { id = 813 anti_air = 2 } # Bogotá

#####################
# Country main data #
#####################

country =
{ tag                    = COL
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 100
  manpower               = 28
  capital                = 813
  SpyInfo                = { country = "COL" NumberOfSpies = 5 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    free_market       = 8
    freedom           = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  nationalprovinces      = { 803 812 813 890 867 819 868 }
  ownedprovinces         = { 803 812 813 890 867 819 868 }
  controlledprovinces    = { 803 812 813 890 867 819 868 }
  # Group D 1941 techs
  # ######################
  techapps               = { 4010  4020  4030  4120  4130  2010  2020  2030  2040  2050  2150  2290  2300  2310  2320  1010  1020  1030  1190  1200
			     1210  1110  2330  2400  2450  2460  2470  2510  9010  5010  5050  5080  5090  5100  5190  6010  6020  3010  8050  5470
			     14000
			   }
  diplomacy =
  { relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = 1 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 15 }
    relation = { tag = ECU value = 20 }
    relation = { tag = GER value = -20 }
    relation = { tag = PAN value = 50 }
    relation = { tag = PAR value = 10 }
    relation = { tag = PRU value = -35 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = -15 }
  }
  headofstate            = { type = 9 id = 37032 }
  headofgovernment       = { type = 9 id = 37046 }
  foreignminister        = { type = 9 id = 37061 }
  armamentminister       = { type = 9 id = 37078 }
  ministerofsecurity     = { type = 9 id = 37096 }
  ministerofintelligence = { type = 9 id = 37113 }
  chiefofstaff           = { type = 9 id = 37128 }
  chiefofarmy            = { type = 9 id = 37138 }
  chiefofnavy            = { type = 9 id = 37145 }
  chiefofair             = { type = 9 id = 37152 }
  dormant_ministers      = { 37003 37057 37004 37075 37005 37008 }
  landunit =
  { id       = { type = 23000 id = 40 }
    name     = "Ejercito de Colombia"
    location = 813
    division =
    { id       = { type = 23000 id = 4000 }
      name     = "1a División"
      strength = 80
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 23000 id = 4001 }
      name     = "1a Brigada de Caballería 'Montería'"
      strength = 80
      type     = cavalry
      model    = 0
    }
  }
  navalunit =
  { id       = { type = 23000 id = 4002 }
    name     = "Armada de Colombia"
    location = 803
    base     = 803
    division =
    { id    = { type = 23000 id = 4003 }
      name  = "1a Flotilla de Torpedillos"
      type  = destroyer
      model = 0
    }
  }
}
