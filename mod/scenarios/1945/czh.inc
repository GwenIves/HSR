
##############################
# Country definition for CZE #
##############################

province =
{ id       = 466
  landfort = 8
  air_base = { size = 3 current_size = 3 }
}            # Strakonice
province = { id = 467 landfort = 8 } # Tábor
province =
{ id       = 469
  anti_air = 2
  air_base = { size = 3 current_size = 3 }
}            # Prague
province = { id = 470 anti_air = 2 } # Pilsen
province = { id = 471 landfort = 8 } # Ústí
province = { id = 472 landfort = 8 } # Liberec
province = { id = 475 anti_air = 2 } # Brno
province =
{ id       = 476
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
  ic       = 5
}            # Bratislava
province = { id = 490 ic = 3 } # Kosice

#####################
# Country main data #
#####################

country =
{ tag                 = CZE
  # Resource Reserves
  energy              = 1000
  metal               = 1000
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  money               = 20
  manpower            = 150
  capital             = 469
  puppet              = SOV
  control             = SOV
  SpyInfo                = { country = "CZE" NumberOfSpies = 8 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 3
    free_market       = 9
    freedom           = 8
    professional_army = 5
    defense_lobby     = 9
    interventionism   = 5
  }
  nationalprovinces   = { 471 472 466 467 470 469 468 474 475 478 477 490 499 476 }
  ownedprovinces      = { 471 472 466 467 470 469 468 474 475 478 477 490 499 476 }
  controlledprovinces = { 471 472 466 467 470 469 468 474 475 478 477 490 499 476 }
  # Eastern Minor Tech '36
  # Group C 1936 techs
  # ######################
  techapps            = { 1010 1110 1190 1310 2010 2020 2030 2040 2150 2290 2300 2310 2450 2460 2510 4010 4020 4120 5010 5020 5080 5090 5190 6010 6020
			  9010
			}
  diplomacy =
  { relation = { tag = ENG value = 125 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = -25 }
    relation = { tag = HUN value = -50 }
    relation = { tag = ITA value = 15 }
    relation = { tag = POL value = -1 }
    relation = { tag = ROM value = 20 }
    relation = { tag = SOV value = 100 }
    relation = { tag = YUG value = 50 }
  }
}
