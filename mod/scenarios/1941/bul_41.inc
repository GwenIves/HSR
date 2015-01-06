
##############################
# Country definition for BUL #
##############################

province = { id = 411 anti_air = 2 } # Salonika
province = { id = 417 ic = 2 anti_air = 2 } # Sofia
province = { id = 420 ic = 2 } # Pleven
province =
{ id         = 422
  ic         = 2
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 5 current_size = 5 }
}              # Varna
province =
{ id         = 423
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
}              # Constanta

#####################
# Country main data #
#####################

country =
{ tag                    = BUL
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 100
  manpower               = 60
  capital                = 417
  belligerence           = 5
  transports             = 10
  escorts                = 4
  SpyInfo                = { country = "BUL" NumberOfSpies = 7 }
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
  # Constanta
  nationalprovinces      = { 419 420 422 421 417 416 413 414 412 410 423 }
  ownedprovinces         = { 419 420 422 421 417 416 411 413 414 423 }
  # Constanta
  controlledprovinces    = { 419 420 422 421 417 416 411 413 414 423 }
  # Group D 1941 techs
  # ######################
  techapps               = { 6070  6060  4010  4020  4030  4120  4130  2010  2020  2030  2040  2050  2150  2290  2300  2310  2320  1010  1020  1030
			     1190  1200  1210  1110  2330  2400  2450  2460  2470  2510  9010  5010  5050  5080  5090  5100  5190  5470  6010  6020
			     14000
			   }
  diplomacy =
  { relation = { tag = ENG value = -200 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = -200 }
    relation = { tag = GER value = 200 }
    # relation = { tag = GRE value = -75 }
    relation = { tag = HUN value = 125 }
    relation = { tag = ITA value = 150 }
    relation = { tag = JAP value = 75 }
    relation = { tag = ROM value = 125 }
    relation = { tag = SOV value = -200 }
    relation = { tag = TUR value = 75 }
  }
  headofstate            = { type = 9 id = 19001 }
  headofgovernment       = { type = 9 id = 19052 }
  foreignminister        = { type = 9 id = 19061 }
  armamentminister       = { type = 9 id = 19079 }
  ministerofsecurity     = { type = 9 id = 19093 }
  ministerofintelligence = { type = 9 id = 19105 }
  chiefofstaff           = { type = 9 id = 19115 }
  chiefofarmy            = { type = 9 id = 19127 }
  chiefofnavy            = { type = 9 id = 19138 }
  chiefofair             = { type = 9 id = 19145 }
  dormant_ministers      = { 19004 19005 19006 19007 19009 19010 19002 19003 }
  # ####################
  # ###BULGARIAN OOB####
  # ####################
  landunit =
  { location = 417
    id       = { type = 19000 id = 1100 }
    name     = "Bulgarian Army HQ"
    division =
    { id       = { type = 19000 id = 1101 }
      name     = "Bulgarian Army HQ"
      type     = hq
      model    = 1
      strength = 100
    }
  }
  landunit =
  { id       = { type = 19000 id = 1 }
    location = 417
    name     = "1-va Armija"
    division =
    { id       = { type = 19000 id = 2 }
      name     = "1-va Sofiiska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 1
      extra    = engineer
    }
    division =
    { id       = { type = 19000 id = 3 }
      name     = "7-ma Rilska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 1
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
      model    = 1
    }
    division =
    { id       = { type = 19000 id = 7 }
      name     = "8-a Tundzhanska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 19000 id = 8 }
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
      model    = 1
    }
    division =
    { id       = { type = 19000 id = 11 }
      name     = "4-ta Preslavska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 1
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
      extra    = artillery
      model    = 1
    }
    division =
    { id       = { type = 19000 id = 14 }
      name     = "6-ta Bdinska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 1
    }
  }
  # navalunit = {
  # id = { type = 19000 id = 15 }
  # name = "Bulgarska Flota"
  # location = 422
  # base = 422
  # division = {
  # id = { type = 19000 id = 16 }
  # name = "1-va Podvodnikova flotilija"
  # type = destroyer
  # model = 0
  # }
  # }
  airunit =
  { id       = { type = 19000 id = 28 }
    location = 422
    base     = 422
    name     = "Vyzdushni voiski"
    division =
    { id       = { type = 19000 id = 29 }
      name     = "5-ti Bombardirovatchen polk"
      strength = 50
      type     = tactical_bomber
      model    = 1
    }
    division =
    { id       = { type = 19000 id = 30 }
      name     = "2-ri Lineen polk"
      strength = 35
      type     = tactical_bomber
      model    = 0
    }
    division =
    { id       = { type = 19000 id = 31 }
      name     = "6-ti Iztrebitelen polk"
      strength = 80
      type     = interceptor
      model    = 2
    }
  }
}
