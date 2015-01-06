
##############################
# Country definition for COL #
##############################

province =
{ id         = 803
  air_base   = { size = 1 current_size = 1 }
  naval_base = { size = 2 current_size = 2 }
}              # Barranquilla

#####################
# Country main data #
#####################

country =
{ tag                    = COL
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  manpower               = 85
  capital                = 813
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
    relation = { tag = VEN value = 20 }
  }
  nationalprovinces      = { 803 812 813 890 867 819 868 }
  ownedprovinces         = { 803 812 813 890 867 819 868 }
  controlledprovinces    = { 803 812 813 890 867 819 868 }
  # Early infantry
  techapps               = { 1010 1190 1200 2150 2010 2020 2290 2300 2310 2450 2510 3010 4010 5010 5080 6010 8050 }
  SpyInfo                = { country = "COL" NumberOfSpies = 3 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 7
    free_market       = 8
    freedom           = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 37001 }
  headofgovernment       = { type = 9 id = 37002 }
  foreignminister        = { type = 9 id = 37058 }
  armamentminister       = { type = 9 id = 37073 }
  ministerofsecurity     = { type = 9 id = 37096 }
  ministerofintelligence = { type = 9 id = 37006 }
  chiefofstaff           = { type = 9 id = 37007 }
  chiefofarmy            = { type = 9 id = 37136 }
  chiefofnavy            = { type = 9 id = 37009 }
  chiefofair             = { type = 9 id = 37010 }
  dormant_ministers      = { 37003 37057 37004 37075 37005 37008 }
  landunit =
  { id       = { type = 30054 id = 40 }
    name     = "Ejercito de Colombia"
    location = 813
    division =
    { id    = { type = 30054 id = 4000 }
      name  = "1a División"
      type  = infantry
      extra = anti_air
    }
    division =
    { id   = { type = 30054 id = 4001 }
      name = "1a Brigada de Caballería 'Montería'"
      type = cavalry
    }
  }
  navalunit =
  { id       = { type = 30054 id = 4002 }
    name     = "Armada de Colombia"
    location = 803
    base     = 803
    division =
    { id    = { type = 30054 id = 4003 }
      name  = "1a Flotilla de Torpedillos"
      type  = destroyer
      model = 0
    }
  }
}
