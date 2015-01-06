
##############################
# Country definition for BUL #
##############################

province =
{ id       = 417
  ic       = 9
  air_base = { size = 4 current_size = 4 }
  anti_air = 2
}            # Sofia
province = { id = 420 ic = 6 } # Pleven
province = { id = 421 ic = 6 } # Plovdiv
province =
{ id         = 422
  ic         = 6
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 3 current_size = 3 }
  anti_air   = 1
}              # Varna
province =
{ id         = 423
  anti_air   = 12
  ic         = 6
  naval_base = { size = 4 current_size = 4 }
}              # Constanta

#####################
# Country main data #
#####################

country =
{ tag                    = BUL
  belligerence           = 3
  # Resource Reserves
  energy                 = 5000
  metal                  = 5000
  rare_materials         = 5000
  oil                    = 3000
  supplies               = 5000
  manpower               = 60
  capital                = 417
  SpyInfo                = { country = "BUL" NumberOfSpies = 6 }
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
  nationalprovinces      = { 419 420 422 421 417 416 413 414 412 410 423 }
  ownedprovinces         = { 419 420 422 421 417 416 411 413 414 410 423 }
  controlledprovinces    = { 419 420 422 421 417 416 411 413 414 410 423 }
  # Eastern Minor Tech '36
  # Group C 1944 techs
  # ######################
  techapps               = { 5070  4010  4020  4030  4040  4050  4060  4120  4130  4140  4170  4190  4250  2010  2020  2030  2040  2050  2060  2070
			     2080  2150  2160  2170  2180  2220  2230  2290  2300  2310  2320  2330  2340  2400  2410  2450  2460  2470  2510  2520
			     2530  1010  1020  1030  1040  1190  1200  1210  1220  1110  1120  1070  1150  2330  1310  9010  9020  9030  9040  5010
			     5020  5050  5060  5080  5090  5100  5110  5120  5190  5200  5210  5220  5310  5350  5360  6010  6020  6040  6050  6060
			     6070  5320  14000 14010
			   }
  diplomacy =
  { relation = { tag = ENG value = -200 }
    relation = { tag = FIN value = 200 }
    relation = { tag = FRA value = -200 }
    relation = { tag = GER value = 200 }
    # relation = { tag = GRE value = -75 }
    relation = { tag = HUN value = 125 }
    # relation = { tag = ITA value = 150 }
    relation = { tag = JAP value = 75 }
    relation = { tag = ROM value = 125 }
    relation = { tag = SOV value = -200 }
    relation = { tag = TUR value = 75 }
  }
  # relation = { tag = YUG value = 25 }
  dormant_ministers      = { 19004 19005 19006 19007 19009 19010 19002 19003 19001 19043 19045 19049 19052 19053 19056 19008 }
  headofstate            = { type = 9 id = 19042 }
  headofgovernment       = { type = 9 id = 19054 }
  foreignminister        = { type = 9 id = 19065 }
  armamentminister       = { type = 9 id = 19080 }
  ministerofsecurity     = { type = 9 id = 19095 }
  ministerofintelligence = { type = 9 id = 19107 }
  chiefofstaff           = { type = 9 id = 19118 }
  chiefofarmy            = { type = 9 id = 19129 }
  chiefofnavy            = { type = 9 id = 19138 }
  chiefofair             = { type = 9 id = 19145 }
  landunit =
  { id       = { type = 10750 id = 1 }
    name     = "1-va Armija"
    location = 417
    division =
    { id            = { type = 10750 id = 2 }
      name          = "1-va Sofiiska pekhotna divizija"
      strength      = 75
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 4
    }
    division =
    { id       = { type = 10750 id = 3 }
      name     = "7-ma Rilska pekhotna divizija"
      strength = 75
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 10750 id = 18 }
      name     = "1-va Konna divizija"
      strength = 75
      type     = cavalry
      model    = 2
    }
  }
  landunit =
  { id       = { type = 10750 id = 4 }
    name     = "2-va Armija"
    location = 421
    division =
    { id       = { type = 10750 id = 5 }
      name     = "2-ra Trakiiska pekhotna divizija"
      strength = 75
      type     = infantry
      model    = 2
      extra    = artillery
    }
    division =
    { id       = { type = 10750 id = 6 }
      name     = "8-a Tundzhanska pekhotna divizija"
      strength = 75
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 10750 id = 7 }
      name     = "10-ta Rodopska pekhotna divizija"
      strength = 75
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 10750 id = 19 }
      name     = "2-ra Konna divizija"
      strength = 75
      type     = cavalry
      model    = 2
    }
  }
  landunit =
  { id       = { type = 10750 id = 8 }
    name     = "2-va Armija"
    location = 422
    division =
    { id       = { type = 10750 id = 9 }
      name     = "3-ta Balkanska pekhotna divizija"
      strength = 75
      type     = infantry
      model    = 2
      extra    = engineer
    }
    division =
    { id       = { type = 10750 id = 10 }
      name     = "4-ta Preslavska pekhotna divizija"
      strength = 75
      type     = infantry
      model    = 2
    }
  }
  landunit =
  { id       = { type = 10750 id = 11 }
    name     = "4-va Armija"
    location = 420
    division =
    { id       = { type = 10750 id = 12 }
      name     = "5-ta Dunavska pekhotna divizija"
      strength = 75
      type     = infantry
      model    = 2
      extra    = artillery
    }
    division =
    { id       = { type = 10750 id = 13 }
      name     = "6-ta Bdinska pekhotna divizija"
      strength = 75
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 10750 id = 14 }
      name     = "9-ta Plevenska pekhotna divizija"
      strength = 75
      type     = infantry
      model    = 2
    }
  }
  landunit =
  { id       = { type = 10750 id = 15 }
    name     = "5-va Armija"
    location = 392
    division =
    { id       = { type = 10750 id = 16 }
      name     = "14-ta Skopska pekhotna divizija"
      strength = 75
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 10750 id = 17 }
      name     = "15-ta Ohridska pekhotna divizija"
      strength = 75
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 10750 id = 20 }
      name     = "16-ta Belomorska pekhotna divizija"
      strength = 75
      type     = infantry
      model    = 2
    }
  }
  # #############################
  # ## BULGARIAN AIR OOB 1944 ###
  # #############################
  airunit =
  { id       = { type = 10750 id = 25 }
    name     = "2-ri Vyzdushen polk"
    location = 417
    base     = 417
    division =
    { id    = { type = 10750 id = 26 }
      name  = "2-ri Vyzdushen polk"
      type  = interceptor
      model = 0
    }
  }
  airunit =
  { id       = { type = 10750 id = 27 }
    name     = "5-ti Vyzdushna napadatelna brigada"
    location = 422
    base     = 422
    division =
    { id    = { type = 10750 id = 28 }
      name  = "5-ti Vyzdushna napadatelna brigada"
      type  = tactical_bomber
      model = 1
    }
  }
  airunit =
  { id       = { type = 10750 id = 29 }
    name     = "6-ti Iztrebitelen polk"
    location = 422
    base     = 422
    division =
    { id    = { type = 10750 id = 30 }
      name  = "6-ti Iztrebitelen polk"
      type  = interceptor
      model = 1
    }
  }
  airunit =
  { id       = { type = 10750 id = 31 }
    name     = "1-vi Vyzdushen polk"
    location = 417
    base     = 417
    division =
    { id    = { type = 10750 id = 32 }
      name  = "1-vi Vyzdushen polk"
      type  = interceptor
      model = 1
    }
  }
}
