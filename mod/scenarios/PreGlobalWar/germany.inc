
##############################
# Country definition for GER #
##############################

province =
{ id         = 67
  anti_air   = 3
  air_base   = { size = 4 current_size = 4 }
  energy     = 0
  max_energy = 0
  metal      = 4
  max_metal  = 4
}              # Essen
province = { id = 74 landfort = 1 anti_air = 2 energy = 0 max_energy = 0 } # Saarbrücken
province = { id = 75 landfort = 1 energy = 0 max_energy = 0 anti_air = 2 } # Cologne
province = { id = 76 anti_air = 2 energy = 0 max_energy = 0 } # Dortmund
province =
{ id         = 82
  anti_air   = 2
  air_base   = { size = 10 current_size = 10 }
  energy     = 0
  max_energy = 0
}              # Kassel
province = { id = 83 anti_air = 1 } # Schweinfurt
province = { id = 208 infra = 0.2 } # Wilno
province = { id = 209 infra = 0.2 } # Grodno
province = { id = 210 infra = 0.2 } # Baranowicze
province = { id = 211 infra = 0.2 air_base = 3 anti_air = 1 } # Lida
province = { id = 212 infra = 0.2 } # Minsk
province = { id = 213 infra = 0.2 } # Molodeczno
province = { id = 214 infra = 0.2 } # Swieciany
province = { id = 218 infra = 0.2 } # Orsha
province = { id = 220 infra = 0.2 } # Mogilev
province = { id = 221 infra = 0.2 air_base = 6 anti_air = 2 } # Bobraisk
province = { id = 222 infra = 0.4 } # Luniniec
province =
{ id         = 296
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}              # Rostock
province = { id = 298 anti_air = 2 rare_materials = 6 oil = 25 } # Magdeburg
province = { id = 299 rare_materials = 12 oil = 25 } # Potsdam
province =
{ id             = 300
  anti_air       = 2
  air_base       = { size = 10 current_size = 10 }
  rare_materials = 16
  oil            = 25
}                  # Berlin
province = { id = 304 supplypool = 100 } # Elbing
province = { id = 305 ic = 3 rare_materials = 5 oil = 25 } # Torun
province = { id = 306 rare_materials = 5 oil = 25 } # Bydgoszcz
province = { id = 307 ic = 3 } # Poznan
province = { id = 310 anti_air = 1 } # Leipzig
province = { id = 312 anti_air = 1 } # Nuremberg
province =
{ id       = 313
  anti_air = 3
  air_base = { size = 4 current_size = 4 }
}            # Frankfurt-am-Main
province =
{ id       = 314
  landfort = 1
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            # Stuttgart
province = { id = 315 landfort = 1 } # Freiburg
province =
{ id       = 376
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}            # Munich
province = { id = 470 energy = 2 max_energy = 28 } # Pilsen
province =
{ id       = 473
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}            # Breslau
province = { id = 474 energy = 0 max_energy = 0 } # Ostrava
province = { id = 479 energy = 0 max_energy = 0 } # Cracow
province = { id = 481 ic = 4 } # Czestochowa
province = { id = 482 ic = 3 anti_air = 2 } # Oppeln
province = { id = 483 ic = 3 air_base = 4 anti_air = 1 } # Lodz
province = { id = 484 ic = 3 } # Radom
province = { id = 485 anti_air = 1 } # Warsaw
province = { id = 487 energy = 0 max_energy = 0 } # Lublin
province = { id = 490 energy = 0 max_energy = 0 } # Kosice
province = { id = 503 infra = 0.2 energy = 0 max_energy = 0 } # Pinsk
province = { id = 504 infra = 0.2 air_base = 2 } # Brest Litovsk
province = { id = 505 infra = 0.2 } # Bielsk
province = { id = 506 infra = 0.2 } # Kowel
province = { id = 507 infra = 0.2 } # Slonim
province = { id = 508 energy = 0 max_energy = 0 } # Bialystok
province =
{ id         = 510
  anti_air   = 4
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
  energy     = 0
  max_energy = 0
}              # Königsberg
province = { id = 562 infra = 0.2 } # Rowne

#####################
# Country main data #
#####################

country =
{ tag                    = UPR
  ai 			 = "globalwar/GER.ai"
  capital                = 300
  belligerence           = 50
  manpower               = 1000
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 70
  transports             = 100
  escorts                = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 1
    free_market       = 6
    freedom           = 6
    professional_army = 6
    defense_lobby     = 6
    interventionism   = 10
  }
  diplomacy              = { }
  nationalprovinces      = { 67  74  75  76  82  83  84  296 297 298 299 300 301 302 304 308 309 310 311 312 313 212 218 221 220 314 315 374 375 376
			     473 482 510 471 472 466 467 470 469 468 474 475 478 477 490 499 476 303 306 307 479 480 481 483 484 305 485  486 487 489
			     488 503 504 505 506 507 508 509 209 208 213 211 210 222 562 214 89  85  81  77  49  66  68  69  71  73  316 513 373 377
			     462 465 464 463 458 457 491 497 498 429 500 501 502 227 226 225 272 202 203 207 511 577 206
			   }
  ownedprovinces         = { 67  74  75  76  82  83  84  296 297 298 299 300 301 302 304 308 309 310 311 312 313 212 218 221 220 314 315 374 375 376
			     473 482 510 471 472 466 467 470 469 468 474 475 478 477 490 499 476 303 306 307 479 480 481 483 484 305 485 486 487 489
			     488 503 504 505 506 507 508 509 209 208 213 211 210 222 562 214
			   }
  controlledprovinces    = { 67  74  75  76  82  83  84  296 297 298 299 300 301 302 304 308 309 310 311 312 313 212 218 221 220 314 315 374 375 376
			     473 482 510 471 472 466 467 470 469 468 474 475 478 477 490 499 476 303 306 307 479 480 481 483 484 305 485 486 487 489
			     488 503 504 505 506 507 508 509 209 208 213 211 210 222 562 214
			   }

  # ######################
 techapps               = { 1010 1190 2010 2290 2450 3010 3070 3130 3190 3250 3320 3400 4010 4120 5080 8010 8020 8030 8040 8050 9010 }


  landunit =
  { id       = { type = 30017 id = 1 }
    name     = "1. Corps"
    location = 300
    division =
    { id       = { type = 30017 id = 2 }
      name     = "1st Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30017 id = 3 }
      name     = "2nd Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30017 id = 4 }
      name     = "3rd Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30017 id = 5 }
    name     = "2. Corps"
    location = 300
    division =
    { id       = { type = 30017 id = 6 }
      name     = "4th Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30017 id = 7 }
      name     = "5th Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30017 id = 8 }
      name     = "6th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30017 id = 9 }
    name     = "3. Corps"
    location = 300
    division =
    { id       = { type = 30017 id = 10 }
      name     = "7th Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30017 id = 11 }
      name     = "8th Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30017 id = 12 }
      name     = "9th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30017 id = 13 }
    name     = "4. Corps"
    location = 300
    division =
    { id       = { type = 30017 id = 14 }
      name     = "10th Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30017 id = 15 }
      name     = "11th Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30017 id = 16 }
      name     = "12th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30017 id = 17 }
    name     = "Armored Corps"
    location = 300
    division =
    { type  = armor
      model = 0
      id    = { type = 30017 id = 18 }
      name  = "1st Armored Division"
    }
    division =
    { type  = armor
      model = 0
      id    = { type = 30017 id = 19 }
      name  = "2nd Armored Division"
    }
    division =
    { type  = armor
      model = 0
      id    = { type = 30017 id = 20 }
      name  = "3rd Armored Division"
    }
  }
  navalunit =
  { id       = { type = 30017 id = 193 }
    name     = "Main Fleet"
    location = 510
    base     = 510
    division =
    { type          = carrier
      model         = 0
      id            = { type = 30017 id = 194 }
      name          = "Carrier 1"
      extra         = cag
      brigade_model = 0
    }
    division =
    { type          = carrier
      model         = 0
      id            = { type = 30017 id = 195 }
      name          = "Carrier 2"
      extra         = cag
      brigade_model = 0
    }
    division =
    { type  = battleship
      model = 0
      id    = { type = 30017 id = 196 }
      name  = "Battleship 1"
    }
    division =
    { type  = battleship
      model = 0
      id    = { type = 30017 id = 197 }
      name  = "Battleship 2"
    }
    division =
    { type  = battlecruiser
      model = 0
      id    = { type = 30017 id = 198 }
      name  = "Battlecruiser 1"
    }
    division =
    { type  = battlecruiser
      model = 0
      id    = { type = 30017 id = 199 }
      name  = "Battlecruiser 2"
    }
    division =
    { type  = heavy_cruiser
      model = 0
      id    = { type = 30017 id = 200 }
      name  = "Heavy Cruiser 1"
    }
    division =
    { type  = heavy_cruiser
      model = 0
      id    = { type = 30017 id = 201 }
      name  = "Heavy Cruiser 2"
    }
    division =
    { type  = light_cruiser
      model = 0
      id    = { type = 30017 id = 202 }
      name  = "Light Cruiser 1"
    }
    division =
    { type  = light_cruiser
      model = 0
      id    = { type = 30017 id = 203 }
      name  = "Light Cruiser 2"
    }
    division =
    { type  = light_cruiser
      model = 0
      id    = { type = 30017 id = 204 }
      name  = "Light Cruiser 3"
    }
    division =
    { type  = light_cruiser
      model = 0
      id    = { type = 30017 id = 205 }
      name  = "Light Cruiser 4"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30017 id = 206 }
      name  = "Destroyer 1"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30017 id = 207 }
      name  = "Destroyer 2"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30017 id = 208 }
      name  = "Destroyer 3"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30017 id = 209 }
      name  = "Destroyer 4"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30017 id = 210 }
      name  = "Destroyer 5"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30017 id = 211 }
      name  = "Destroyer 6"
    }
    division =
    { type  = transport
      model = 0
      id    = { type = 30017 id = 212 }
      name  = "Transport 1"
    }
    division =
    { type  = transport
      model = 0
      id    = { type = 30017 id = 213 }
      name  = "Transport 2"
    }
    division =
    { type  = submarine
      model = 0
      id    = { type = 30017 id = 214 }
      name  = "Submarine 1"
    }
    division =
    { type  = submarine
      model = 0
      id    = { type = 30017 id = 215 }
      name  = "Submarine 2"
    }
    division =
    { type  = submarine
      model = 0
      id    = { type = 30017 id = 216 }
      name  = "Submarine 3"
    }
    division =
    { type  = submarine
      model = 0
      id    = { type = 30017 id = 217 }
      name  = "Submarine 4"
    }
  }
  airunit =
  { id       = { type = 30017 id = 173 }
    name     = "Bomber Group 1"
    location = 300
    base     = 300
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30017 id = 174 }
      name  = "1st Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30017 id = 175 }
      name  = "2nd Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30017 id = 176 }
      name  = "3rd Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30017 id = 177 }
      name  = "4th Air Wing"
    }
  }
  airunit =
  { id       = { type = 30017 id = 178 }
    name     = "Bomber Group 2"
    location = 300
    base     = 300
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30017 id = 179 }
      name  = "5th Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30017 id = 180 }
      name  = "6th Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30017 id = 181 }
      name  = "7th Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30017 id = 182 }
      name  = "8th Air Wing"
    }
  }
  airunit =
  { id       = { type = 30017 id = 183 }
    name     = "Fighter Group 1"
    location = 300
    base     = 300
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30017 id = 184 }
      name  = "9th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30017 id = 185 }
      name  = "10th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30017 id = 186 }
      name  = "11th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30017 id = 187 }
      name  = "12th Air Wing"
    }
  }
  airunit =
  { id       = { type = 30017 id = 188 }
    name     = "Fighter Group 2"
    location = 300
    base     = 300
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30017 id = 189 }
      name  = "13th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30017 id = 190 }
      name  = "14th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30017 id = 191 }
      name  = "15th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30017 id = 192 }
      name  = "16th Air Wing"
    }
  }
}
