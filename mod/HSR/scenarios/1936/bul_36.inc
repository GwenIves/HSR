#
# by Aregorn for HSR2_DD
#
##############################
# Country definition for BUL #
##############################

province = { id = 417 anti_air = 2 ic = 2 } # Sofia
province = { id = 420 ic = 2 } # Pleven
province =
{ id         = 422
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 5 current_size = 5 }
  ic         = 2
}              # Varna

#####################
# Country main data #
#####################

country =
{ tag                    = BUL
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 50
  manpower               = 60
  capital                = 417

	research_mod = 1.15
	tc_mod = 1.20
	peacetime_ic_mod = 0.70

  transports             = 10
  escorts                = 4
  diplomacy =
  { relation = { tag = ENG value = 20 }
    relation = { tag = FIN value = 35 }
    relation = { tag = FRA value = 20 }
    relation = { tag = GER value = 25 }
    relation = { tag = GRE value = -75 }
    relation = { tag = ITA value = 150 }
    relation = { tag = ROM value = 25 }
    relation = { tag = SOV value = 15 }
    relation = { tag = TUR value = 75 }
    relation = { tag = YUG value = 25 }
  }

  SpyInfo                = { country = "bul" NumberOfSpies = 6 }

  nationalprovinces      = { 419 420 422 421 417 416 418 414 412 410 423 }
  ownedprovinces         = { 419 420 422 421 417 416 }
  controlledprovinces    = { 419 420 422 421 417 416 }
  # Eastern Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 5190 6010 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    free_market       = 7
    freedom           = 6
    professional_army = 6
    defense_lobby     = 5
    interventionism   = 9
  }
  headofstate            = { type = 9 id = 19001 }
  headofgovernment       = { type = 9 id = 19002 }
  foreignminister        = { type = 9 id = 19003 }
  armamentminister       = { type = 9 id = 19004 }
  ministerofsecurity     = { type = 9 id = 19005 }
  ministerofintelligence = { type = 9 id = 19006 }
  chiefofstaff           = { type = 9 id = 19007 }
  chiefofarmy            = { type = 9 id = 19008 }
  chiefofnavy            = { type = 9 id = 19009 }
  chiefofair             = { type = 9 id = 19010 }
  # Firepower
  landunit =
  { id       = { type = 19000 id = 1 }
    location = 417
    name     = "1-va Armija"
    division =
    { id       = { type = 19000 id = 2 }
      name     = "1-va Sofiiska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 19000 id = 3 }
      name     = "7-ma Rilska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 19000 id = 4 }
      name     = "1-va Konna divizija"
      strength = 100
      type     = cavalry
      model    = 0
    }
  }
  landunit =
  { id       = { type = 19000 id = 5 }
    location = 422
    name     = "2-ra Armija"
    division =
    { id       = { type = 19000 id = 6 }
      name     = "2-ra Trakiiska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 19000 id = 7 }
      name     = "8-a Tundzhanska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 19000 id = 19 }
      name     = "2-ra Konna divizija"
      strength = 100
      type     = cavalry
      model    = 0
    }
  }
  landunit =
  { id       = { type = 19000 id = 9 }
    location = 421
    name     = "3-ta Armija"
    division =
    { id       = { type = 19000 id = 10 }
      name     = "3-ta Balkanska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 19000 id = 11 }
      name     = "4-ta Preslavska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 0
    }
  }
  landunit =
  { id       = { type = 19000 id = 12 }
    location = 420
    name     = "4-ta Armija"
    division =
    { id       = { type = 19000 id = 13 }
      name     = "5-ta Dunavska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
    }
    division =
    { id       = { type = 19000 id = 14 }
      name     = "6-ta Bdinska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 0
    }
  }
}
