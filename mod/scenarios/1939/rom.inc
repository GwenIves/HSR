
##############################
# Country definition for ROM #
##############################

province =
{ id         = 423
  ic         = 1
  anti_air   = 2
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
}              # Constanta
province =
{ id       = 424
  anti_air = 2
  air_base = { size = 5 current_size = 5 }
}            # Bucharest
province = { id = 431 ic = 2 anti_air = 6 } # Ploesti
province = { id = 435 anti_air = 2 } # Ismail

#####################
# Country main data #
#####################

country =
{ tag                    = ROM
  capital                = 424
  manpower               = 150
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  SpyInfo                = { country = "ROM" NumberOfSpies = 8 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 3
    freedom           = 4
    free_market       = 4
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 6
  }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 4 }
  #SpyInfo                = { country = "YUG" NumberOfSpies = 5 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 5 }
  #SpyInfo                = { country = "FRA" NumberOfSpies = 4 }
  #SpyInfo                = { country = "AUS" NumberOfSpies = 4 }
  #SpyInfo                = { country = "GER" NumberOfSpies = 4 }
  #SpyInfo                = { country = "HUN" NumberOfSpies = 5 }
  #SpyInfo                = { country = "ALB" NumberOfSpies = 4 }
  #SpyInfo                = { country = "GRE" NumberOfSpies = 5 }
  #SpyInfo                = { country = "BUL" NumberOfSpies = 8 }
  #SpyInfo                = { country = "ITA" NumberOfSpies = 4 }
  nationalprovinces      = { 423 424 425 431 426 495 496 498 427 428 429 430 432 436 433 435 230 434 }
  ownedprovinces         = { 423 424 425 431 426 495 496 498 427 428 429 430 432 436 433 435 230 434 }
  controlledprovinces    = { 423 424 425 431 426 495 496 498 427 428 429 430 432 436 433 435 230 434 }
  # Eastern Minor Tech '36
  # Group C 1939 techs
  # ######################
  techapps               = { 5070  4190  4010  4020  4120  4130  2150  2010  2020  2030  2040  2290  2300  2310  2320  2330  2400  2450  2460  2510
			     1010  1020  1190  1200  1110  9010  9020  5010  5050  5080  5090  5100  5110  5190  6010  6020  3010  3020  3030  3400
			     8040  8050  14000
			   }
  diplomacy =
  { relation = { tag = BUL value = 25 }
    relation = { tag = SLO value = 20 }
    relation = { tag = ENG value = 50 }
    relation = { tag = FIN value = 40 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GER value = 120 }
    relation = { tag = GRE value = 100 }
    relation = { tag = HUN value = -50 }
    relation = { tag = ITA value = 50 }
    relation = { tag = POL value = 40 }
    relation = { tag = SOV value = 1 }
    relation = { tag = TUR value = 100 }
    relation = { tag = YUG value = 100 }
  }
  headofstate            = { type = 9 id = 22031 }
  headofgovernment       = { type = 9 id = 22044 }
  foreignminister        = { type = 9 id = 22071 }
  armamentminister       = { type = 9 id = 22089 }
  ministerofsecurity     = { type = 9 id = 22101 }
  ministerofintelligence = { type = 9 id = 22115 }
  chiefofstaff           = { type = 9 id = 22125 }
  chiefofarmy            = { type = 9 id = 22135 }
  chiefofnavy            = { type = 9 id = 22147 }
  chiefofair             = { type = 9 id = 22155 }
  dormant_ministers      = { 22053 }
  # #############################################
  # ##ROMANIAN ARMY OOB39########################
  # #############################################
  landunit =
  { location = 495 # Timisoara
    name     = "Corp 7 Armata"
    id       = { type = 32000 id = 1 }
    division =
    { id       = { type = 32000 id = 2 }
      name     = "Divizia 1 Infanterie"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 32000 id = 3 }
      name     = "Divizia 18 Infanterie"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 32000 id = 4 }
      name     = "Divizia 19 Infanterie"
      type     = infantry
      strength = 70
      extra    = artillery
    }
  }
  landunit =
  { location = 426 # Craiova
    name     = "Corp 1 Armata"
    id       = { type = 32000 id = 5 }
    division =
    { id       = { type = 32000 id = 6 }
      name     = "Divizia 2 Infanterie"
      type     = infantry
      strength = 70
      extra    = artillery
    }
    division =
    { id       = { type = 32000 id = 7 }
      name     = "Divizia 3 Infanterie"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 32000 id = 8 }
      name     = "Divizia 4 Infanterie"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 32000 id = 9 }
      name     = "Divizia 11 Infanterie"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { location = 430 # Brasov
    name     = "Corp 5 Armata"
    id       = { type = 32000 id = 10 }
    division =
    { id       = { type = 32000 id = 11 }
      name     = "Divizia 5 Infanterie"
      type     = infantry
      strength = 70
      extra    = anti_tank
    }
    division =
    { id       = { type = 32000 id = 12 }
      name     = "Divizia 6 Infanterie"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 32000 id = 13 }
      name     = "Divizia 13 Infanterie"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { location = 424 # Bucuresti
    name     = "Corp 4 Armata"
    id       = { type = 32000 id = 14 }
    division =
    { id       = { type = 32000 id = 15 }
      name     = "Divizia 7 Infanterie"
      type     = infantry
      strength = 70
      extra    = anti_air
    }
    division =
    { id       = { type = 32000 id = 16 }
      name     = "Divizia 8 Infanterie"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 32000 id = 17 }
      name     = "Divizia 14 Infanterie"
      type     = infantry
      strength = 70
      extra    = artillery
    }
    division =
    { id       = { type = 32000 id = 47 }
      name     = "Divizie 1 Blindate"
      type     = armor
      model    = 1
      strength = 60
    }
  }
  landunit =
  { location = 436
    name     = "Corp 2 Armata"
    id       = { type = 32000 id = 18 }
    division =
    { id       = { type = 32000 id = 19 }
      name     = "Divizia 9 Infanterie"
      type     = infantry
      strength = 70
      extra    = artillery
    }
    division =
    { id       = { type = 32000 id = 20 }
      name     = "Divizia 10 Infanterie"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { location = 435 # Chisinau
    name     = "Corp 3 Armata"
    id       = { type = 32000 id = 21 }
    division =
    { id       = { type = 32000 id = 22 }
      name     = "Divizia 12 Infanterie"
      type     = infantry
      strength = 70
      extra    = artillery
    }
    division =
    { id       = { type = 32000 id = 23 }
      name     = "Divizia 15 Infanterie"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 32000 id = 24 }
      name     = "Divizia 21 Infanterie"
      type     = infantry
      strength = 70
      extra    = anti_tank
    }
  }
  landunit =
  { location = 434
    name     = "Corp 6 Armata"
    id       = { type = 32000 id = 25 }
    division =
    { id       = { type = 32000 id = 26 }
      name     = "Divizia 16 Infanterie"
      type     = infantry
      strength = 70
      extra    = artillery
    }
    division =
    { id       = { type = 32000 id = 27 }
      name     = "Divizia 17 Infanterie"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 32000 id = 28 }
      name     = "Divizia 20 Infanterie"
      type     = infantry
      strength = 70
    }
    division =
    { id   = { type = 32000 id = 48 }
      name = "Divizie 1 Fortificatii"
      type = militia
    }
  }
  landunit =
  { location = 433 # Iasi
    name     = "Corp Munte"
    id       = { type = 32000 id = 29 }
    division =
    { id       = { type = 32000 id = 30 }
      name     = "Divizia 1 Munte"
      type     = bergsjaeger
      strength = 100
      extra    = artillery
    }
    division =
    { id       = { type = 32000 id = 31 }
      name     = "Divizia 2 Munte"
      type     = bergsjaeger
      strength = 100
    }
    division =
    { id       = { type = 32000 id = 32 }
      name     = "Divizia 3 Munte"
      type     = bergsjaeger
      strength = 100
    }
    division =
    { id       = { type = 32000 id = 49 }
      name     = "Divizia 4 Munte"
      type     = bergsjaeger
      strength = 70
    }
  }
  landunit =
  { location = 431 # Ploiesti
    name     = "Corp Cavalerie"
    id       = { type = 32000 id = 33 }
    division =
    { id       = { type = 32000 id = 34 }
      name     = "Divizia 1 Cavalerie"
      type     = cavalry
      strength = 70
      extra    = artillery
    }
    division =
    { id       = { type = 32000 id = 35 }
      name     = "Divizia 5 Cavalerie"
      type     = cavalry
      strength = 70
    }
    division =
    { id       = { type = 32000 id = 36 }
      name     = "Divizia 6 Cavalerie"
      type     = cavalry
      strength = 70
    }
    division =
    { id       = { type = 32000 id = 37 }
      name     = "Divizia 7 Cavalerie"
      type     = cavalry
      strength = 70
    }
    division =
    { id       = { type = 32000 id = 38 }
      name     = "Divizia 8 Cavalerie"
      type     = cavalry
      strength = 70
    }
    division =
    { id       = { type = 32000 id = 39 }
      name     = "Divizia 9 Cavalerie"
      type     = cavalry
      strength = 70
    }
  }
  # #############################################
  # ##ROMANIAN NAVY OOB39########################
  # #############################################
  navalunit =
  { location = 423 # Constanta
    base     = 423
    name     = "Divizia de Mare"
    id       = { type = 32000 id = 40 }
    division =
    { id    = { type = 32000 id = 41 }
      name  = "'N.M.S. Regele Ferdinand' Flotila"
      type  = destroyer
      model = 0
    }
  }
  # #############################################
  # ##ROMANIAN AIR FORCE OOB39###################
  # #############################################
  airunit =
  { location = 424 # Bucuresti
    base     = 424
    id       = { type = 32000 id = 42 }
    name     = "Gruparea Aeriana de Lupta"
    division =
    { id       = { type = 32000 id = 43 }
      name     = "Flotila 1 Vanatoare"
      type     = interceptor
      model    = 0
      strength = 100
    }
    division =
    { id       = { type = 32000 id = 50 }
      name     = "Flotila 2 Vanatoare"
      type     = interceptor
      model    = 0
      strength = 100
    }
    division =
    { id       = { type = 32000 id = 44 }
      name     = "Flotila 1 Bombardament"
      type     = tactical_bomber
      model    = 0
      strength = 100
    }
    division =
    { id       = { type = 32000 id = 51 }
      name     = "Flotila 2 Bombardament"
      type     = tactical_bomber
      model    = 0
      strength = 42
    }
    division =
    { id       = { type = 32000 id = 45 }
      name     = "Flotila Hidroavioane"
      type     = naval_bomber
      model    = 0
      strength = 34
    }
  }
}
