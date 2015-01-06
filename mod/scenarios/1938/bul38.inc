
##############################
# Country definition for BUL #
##############################

province = { id = 417 anti_air = 1 } # Sofia
province = { id = 420 ic = 2 } # Pleven
province =
{ id         = 422
  ic         = 1
  anti_air   = 1
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 4 current_size = 4 }
}              # Varna

#####################
# Country main data #
#####################

country =
{ tag                    = BUL
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  manpower               = 60
  capital                = 417
  # Claims Romania
  diplomacy =
  { relation = { tag = ENG value = 20 }
    relation = { tag = FIN value = 35 }
    relation = { tag = FRA value = 20 }
    relation = { tag = GER value = 85 }
    relation = { tag = GRE value = -75 }
    relation = { tag = ITA value = 150 }
    relation = { tag = ROM value = 25 }
    relation = { tag = SOV value = 15 }
    relation = { tag = TUR value = 75 }
    relation = { tag = YUG value = 25 }
  }
  nationalprovinces      = { 419 420 422 421 417 416 413 414 412 410 423 }
  ownedprovinces         = { 419 420 422 421 417 416 }
  controlledprovinces    = { 419 420 422 421 417 416 }
  techapps               = { 1010 1020 1190 1200 1210 1110 2010 2020 2150 2290 2300 2310 2400 2450 2510 4010 4020 4120 4130 5010 5080 5090 5190 6010
			     9010
			   }
  SpyInfo                = { country = "BUL" NumberOfSpies = 5 }


  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    free_market       = 7
    freedom           = 6
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 7
  }
  headofstate            = { type = 9 id = 19001 }
  headofgovernment       = { type = 9 id = 19002 }
  foreignminister        = { type = 9 id = 19003 }
  armamentminister       = { type = 9 id = 19077 }
  ministerofsecurity     = { type = 9 id = 19092 }
  ministerofintelligence = { type = 9 id = 19006 }
  chiefofstaff           = { type = 9 id = 19007 }
  chiefofarmy            = { type = 9 id = 19125 }
  chiefofnavy            = { type = 9 id = 19137 }
  chiefofair             = { type = 9 id = 19010 }
  dormant_ministers      = { 19004 19005 19009 } # 19006 19007
  landunit =
  { id       = { type = 28003 id = 1 }
    location = 417
    name     = "1-va Armija"
    division =
    { id   = { type = 28003 id = 2 }
      name = "1-va Sofiiska pekhotna divizija"
      type = infantry
    }
    division =
    { id   = { type = 28003 id = 3 }
      name = "7-ma Rilska pekhotna divizija"
      type = infantry
    }
    division =
    { id    = { type = 28003 id = 4 }
      name  = "1-va Brza divizija"
      type  = cavalry
      model = 1
    }
  }
  landunit =
  { id       = { type = 28003 id = 5 }
    location = 422
    name     = "2-ra Armija"
    division =
    { id   = { type = 28003 id = 6 }
      name = "2-ra Trakiiska pekhotna divizija"
      type = infantry
    }
    division =
    { id   = { type = 28003 id = 7 }
      name = "8-a Tundjanska pekhotna divizija"
      type = infantry
    }
    division =
    { id   = { type = 28003 id = 8 }
      name = "10-ta Rhodopska pekhotna divizija"
      type = infantry
    }
    division =
    { id    = { type = 28003 id = 19 }
      name  = "2-ra Brza divizija"
      type  = cavalry
      model = 1
    }
    division =
    { id   = { type = 28003 id = 20 }
      name = "11-ta Zapasna pekhotna divizija"
      type = infantry
    }
  }
  landunit =
  { id       = { type = 30002 id = 9 }
    location = 421
    name     = "3-ta Armija"
    division =
    { id    = { type = 28003 id = 10 }
      name  = "3-ta Balkanska pekhotna divizija"
      type  = infantry
      extra = artillery
    }
    division =
    { id   = { type = 28003 id = 11 }
      name = "4-ta Preslavska pekhotna divizija"
      type = infantry
    }
  }
  landunit =
  { id       = { type = 30002 id = 12 }
    location = 416
    name     = "4-ta Armija"
    division =
    { id   = { type = 28003 id = 13 }
      name = "5-ta Dunavska pekhotna divizija"
      type = infantry
    }
    division =
    { id   = { type = 28003 id = 14 }
      name = "6-ta Bdinska pekhotna divizija"
      type = infantry
    }
    division =
    { id   = { type = 28003 id = 15 }
      name = "9-ta Plevenska pekhotna divizija"
      type = infantry
    }
  }
  airunit =
  { id       = { type = 30002 id = 24 }
    location = 422
    base     = 422
    name     = "Vyzdushni voiski"
    division =
    { id       = { type = 30002 id = 25 }
      name     = "5-ti Bombardirovatchen polk"
      strength = 40
      type     = tactical_bomber
      model    = 1
    }
    division =
    { id       = { type = 30002 id = 26 }
      name     = "2-ri Lineen polk"
      strength = 30
      type     = tactical_bomber
      model    = 0
    }
    division =
    { id       = { type = 30002 id = 27 }
      name     = "6-ti Iztrebitelen polk"
      strength = 60
      type     = interceptor
      model    = 1
    }
  }
}
