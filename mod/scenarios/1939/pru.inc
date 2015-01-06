
##############################
# Country definition for PRU #
##############################

province =
{ id         = 830
  anti_air   = 2
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
}              # Lima

#####################
# Country main data #
#####################

country =
{ tag                    = PRU
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 830
  manpower               = 22
  diplomacy =
  { relation = { tag = ARG value = 20 }
    relation = { tag = BOL value = 30 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = -25 }
    relation = { tag = COL value = -35 }
    relation = { tag = ECU value = -30 }
    relation = { tag = PAR value = 25 }
    relation = { tag = URU value = 25 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }
  nationalprovinces      = { 831 829 830 821 816 818 }
  ownedprovinces         = { 831 829 830 821 816 }
  controlledprovinces    = { 831 829 830 821 816 }
  # ROTW Minor Tech '36
  # Group D 1939 techs
  # ######################
  techapps               = { 4010 4020 2150 2010 2020 2290 2300 2310 1010 1020 1190 1200 1110 2330 2400 2450 2460 2510 5010 5080 5090 5100 5190 6010
			     3010 3070 3400 8020 8040 8050 2320
			   }
  SpyInfo                = { country = "PRU" NumberOfSpies = 4 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 3
    freedom           = 4
    free_market       = 4
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 39032 }
  headofgovernment       = { type = 9 id = 39039 }
  foreignminister        = { type = 9 id = 39049 }
  armamentminister       = { type = 9 id = 39061 }
  ministerofsecurity     = { type = 9 id = 39005 }
  ministerofintelligence = { type = 9 id = 39090 }
  chiefofstaff           = { type = 9 id = 39102 }
  chiefofarmy            = { type = 9 id = 39111 }
  chiefofnavy            = { type = 9 id = 39119 }
  chiefofair             = { type = 9 id = 39129 }
  dormant_ministers      = { 39001 39002 39037 39003 39047 39004 39075 39006 39007 39008 39009 39010 }
  landunit =
  { id       = { type = 30056 id = 1 }
    name     = "Ejercito del Peru"
    location = 830
    division =
    { id       = { type = 30056 id = 100 }
      name     = "1a Div. de Inf. del Peru 'Bolognesi'"
      strength = 100
      type     = infantry
      extra    = anti_air
    }
    division =
    { id       = { type = 30056 id = 101 }
      name     = "2a Div. de Infantería del Peru"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30056 id = 102 }
      name     = "3a Div. de Infantería del Peru"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30056 id = 103 }
      name     = "4a Div. de Infantería del Peru"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30056 id = 104 }
      name     = "5a Div. de Infantería del Peru"
      strength = 100
      type     = infantry
    }
  }
  navalunit =
  { id       = { type = 30057 id = 1 }
    name     = "Marina del Guerra del Peru"
    location = 830
    base     = 830
    # Two DDs:
    division =
    { id       = { type = 30057 id = 100 }
      name     = "Suliana é Flotilla"
      type     = destroyer
      model    = 0
      strength = 50
    }
    # Built 1907:
    division =
    { id    = { type = 30057 id = 101 }
      name  = "ARP Almirante Grau"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 30057 id = 102 }
      name  = "ARP Coronel Bolognesi"
      type  = light_cruiser
      model = 0
    }
    # Submarine division:
    division =
    { id    = { type = 30057 id = 103 }
      name  = "Tacna é Flotilla"
      type  = submarine
      model = 0
    }
  }
}
