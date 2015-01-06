
##############################
# Country definition for UIR #
##############################

province = { id = 1284 air_base = 1 anti_air = 1 } # Dimapur
province = { id = 1454 infra = 0.2 } # Riang
province = { id = 1455 infra = 0.2 } # Punakha
province = { id = 1458 air_base = 6 naval_base = 2 anti_air = 2 } # Cuttack
province = { id = 1460 ic = 10 anti_air = 1 } # Jabalpur
province = { id = 1462 ic = 10 anti_air = 1 } # Nagpur
province = { id = 1463 ic = 10 anti_air = 1 } # Satpura Mountains
province = { id = 1467 infra = 0.2 } # Indore
province = { id = 1468 ic = 10 } # Jaipur
province = { id = 1469 ic = 16 air_base = 10 anti_air = 3 } # Delhi
province = { id = 1471 ic = 10 anti_air = 2 } # Lucknow
province = { id = 1472 air_base = 9 anti_air = 2 } # Darbhanga
province = { id = 1473 infra = 0.2 } # Kathmandu
province = { id = 1474 infra = 0.2 } # Srinagar
province = { id = 1475 ic = 10 anti_air = 1 } # Lahore
province = { id = 1477 air_base = 7 anti_air = 2 } # Meerut
province = { id = 1479 ic = 10 } # Jodhpur
province = { id = 1481 ic = 10 anti_air = 1 } # Sukkur
province = { id = 1482 ic = 10 air_base = 7 anti_air = 2 } # Multan
province = { id = 1484 infra = 0.4 } # Feyzabad
province = { id = 1486 infra = 0.4 } # Kabul
province = { id = 1492 infra = 0.4 } # Herat
province = { id = 1493 infra = 0.4 } # Kandahar
province = { id = 1505 naval_base = 5 air_base = 5 anti_air = 2 } # Bombay
province = { id = 1506 energy = 30 metal = 10 rare_materials = 5 } # Pune
province = { id = 1507 ic = 10 energy = 33 metal = 23 anti_air = 2 } # Hyderabad
province = { id = 1508 energy = 30 metal = 20 rare_materials = 5 oil = 5 } # Vijayawada
province = { id = 1509 energy = 31 metal = 20 rare_materials = 5 oil = 10 } # Madras
province = { id = 1510 ic = 10 anti_air = 1 } # Salem
province = { id = 1511 ic = 10 energy = 30 metal = 24 rare_materials = 5 oil = 10 air_base = 4 anti_air = 2 } # Bangalore
province = { id = 1512 energy = 31 metal = 20 rare_materials = 10 oil = 25 } # Kolhapur
province = { id = 1513 energy = 40 metal = 20 rare_materials = 10 oil = 25 } # Mangalore
province = { id = 1514 energy = 31 metal = 20 rare_materials = 10 oil = 25 } # Cochin
province = { id = 1515 energy = 34 metal = 22 rare_materials = 10 oil = 25 } # Madurai
province = { id = 1517 ic = 10 air_base = 3 naval_base = 6 anti_air = 3 } # Colombo
province = { id = 1817 infra = 0.2 naval_base = 4 air_base = 4 anti_air = 2 } # Diego Garcia Island

#####################
# Country main data #
#####################

country =
{ tag                    = UIR
  ai                     = "globalwar/NEP.ai"
  belligerence           = 0
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 200
  supplies               = 200
  money                  = 10
  capital                = 1469
  manpower               = 1000
  transports             = 100
  escorts                = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 1
    freedom           = 6
    free_market       = 6
    professional_army = 6
    defense_lobby     = 6
    interventionism   = 10
  }
  nationalprovinces      = { 1473 1494 1481 1480 1465 1466 1479 1482 1483 1475 1476 1478 1477 1469 1470 1471 1472 1456 1468 1467 1464 1463 1474 1460
			     1459 1457 1458 1461 1508 1462 1505 1506 1507 1509 1510 1511 1512 1513 1514 1515 1516 1517 1284 1878 1454 1455 1486 1493
			     1492 1484 1817 1283 1453 1452 1451 1448 1447 1430 1429 1428 1485 1487 1491 1500 1496 1495
			   }
  ownedprovinces         = { 1473 1494 1481 1480 1465 1466 1479 1482 1483 1475 1476 1478 1477 1469 1470 1471 1472 1456 1468 1467 1464 1463 1474 1460
			     1459 1457 1458 1461 1508 1462 1505 1506 1507 1509 1510 1511 1512 1513 1514 1515 1516 1517 1284 1878 1454 1455 1486 1493
			     1492 1484 1817
			   }
  controlledprovinces    = { 1473 1494 1481 1480 1465 1466 1479 1482 1483 1475 1476 1478 1477 1469 1470 1471 1472 1456 1468 1467 1464 1463 1474 1460
			     1459 1457 1458 1461 1508 1462 1505 1506 1507 1509 1510 1511 1512 1513 1514 1515 1516 1517 1284 1878 1454 1455 1486 1493
			     1492 1484 1817
			   }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 1010 1190 2010 2290 2450 3010 3070 3130 3190 3250 3320 3400 4010 4120 5010 5080 8010 8020 8030 8040 8050 9010 }
  diplomacy              = { }

  landunit =
  { id       = { type = 30006 id = 1 }
    name     = "1. Corps"
    location = 1516
    division =
    { id       = { type = 30006 id = 2 }
      name     = "1st Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 3 }
    name     = "2. Corps"
    location = 1517
    division =
    { id       = { type = 30006 id = 4 }
      name     = "2nd Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 5 }
    name     = "3. Corps"
    location = 1494
    division =
    { id       = { type = 30006 id = 6 }
      name     = "3rd Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 7 }
    name     = "4. Corps"
    location = 1493
    division =
    { id       = { type = 30006 id = 8 }
      name     = "4th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 9 }
    name     = "5. Corps"
    location = 1492
    division =
    { id       = { type = 30006 id = 10 }
      name     = "5th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 11 }
    name     = "6. Corps"
    location = 1486
    division =
    { id       = { type = 30006 id = 12 }
      name     = "6th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 13 }
    name     = "7. Corps"
    location = 1484
    division =
    { id       = { type = 30006 id = 14 }
      name     = "7th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 15 }
    name     = "8. Corps"
    location = 1493
    division =
    { id       = { type = 30006 id = 16 }
      name     = "8th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 17 }
    name     = "9. Corps"
    location = 1475
    division =
    { id       = { type = 30006 id = 18 }
      name     = "9th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 19 }
    name     = "10. Corps"
    location = 1474
    division =
    { id       = { type = 30006 id = 20 }
      name     = "10th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 21 }
    name     = "11. Corps"
    location = 1473
    division =
    { id       = { type = 30006 id = 22 }
      name     = "11th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 23 }
    name     = "12. Corps"
    location = 1455
    division =
    { id       = { type = 30006 id = 24 }
      name     = "12th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 25 }
    name     = "13. Corps"
    location = 1454
    division =
    { id       = { type = 30006 id = 26 }
      name     = "13th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 27 }
    name     = "14. Corps"
    location = 1284
    division =
    { id       = { type = 30006 id = 28 }
      name     = "14th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 29 }
    name     = "15. Corps"
    location = 1878
    division =
    { id       = { type = 30006 id = 30 }
      name     = "15th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 31 }
    name     = "16. Corps"
    location = 1456
    division =
    { id       = { type = 30006 id = 32 }
      name     = "16th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 33 }
    name     = "17. Corps"
    location = 1457
    division =
    { id       = { type = 30006 id = 34 }
      name     = "17th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 35 }
    name     = "18. Corps"
    location = 1458
    division =
    { id       = { type = 30006 id = 170 }
      name     = "18th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 36 }
    name     = "19. Corps"
    location = 1461
    division =
    { id       = { type = 30006 id = 37 }
      name     = "19th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 38 }
    name     = "20. Corps"
    location = 1508
    division =
    { id       = { type = 30006 id = 39 }
      name     = "20th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 40 }
    name     = "21. Corps"
    location = 1509
    division =
    { id       = { type = 30006 id = 41 }
      name     = "21st Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 42 }
    name     = "22. Corps"
    location = 1515
    division =
    { id       = { type = 30006 id = 43 }
      name     = "22nd Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 44 }
    name     = "23. Corps"
    location = 1514
    division =
    { id       = { type = 30006 id = 45 }
      name     = "23rd Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 46 }
    name     = "24. Corps"
    location = 1513
    division =
    { id       = { type = 30006 id = 47 }
      name     = "24th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 48 }
    name     = "25. Corps"
    location = 1512
    division =
    { id       = { type = 30006 id = 49 }
      name     = "25th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 50 }
    name     = "26. Corps"
    location = 1506
    division =
    { id       = { type = 30006 id = 51 }
      name     = "26th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 52 }
    name     = "27. Corps"
    location = 1505
    division =
    { id       = { type = 30006 id = 53 }
      name     = "27th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 54 }
    name     = "28. Corps"
    location = 1464
    division =
    { id       = { type = 30006 id = 55 }
      name     = "28th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 56 }
    name     = "29. Corps"
    location = 1466
    division =
    { id       = { type = 30006 id = 57 }
      name     = "29th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 58 }
    name     = "30. Corps"
    location = 1465
    division =
    { id       = { type = 30006 id = 59 }
      name     = "30th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 60 }
    name     = "31. Corps"
    location = 1480
    division =
    { id       = { type = 30006 id = 61 }
      name     = "31st Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 62 }
    name     = "32. Corps"
    location = 1483
    division =
    { id       = { type = 30006 id = 63 }
      name     = "32nd Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 64 }
    name     = "33. Corps"
    location = 1817
    division =
    { id       = { type = 30006 id = 65 }
      name     = "33rd Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30006 id = 218 }
    name     = "Armored Corps"
    location = 1505
    division =
    { type  = armor
      model = 0
      id    = { type = 30006 id = 219 }
      name  = "1st Armored Division"
    }
    division =
    { type  = armor
      model = 0
      id    = { type = 30006 id = 220 }
      name  = "2nd Armored Division"
    }
    division =
    { type  = armor
      model = 0
      id    = { type = 30006 id = 221 }
      name  = "3rd Armored Division"
    }
    division =
    { type  = armor
      model = 0
      id    = { type = 30006 id = 222 }
      name  = "4th Armored Division"
    }
    division =
    { type  = armor
      model = 0
      id    = { type = 30006 id = 223 }
      name  = "5th Armored Division"
    }
    division =
    { type  = armor
      model = 0
      id    = { type = 30006 id = 224 }
      name  = "6th Armored Division"
    }
  }
  navalunit =
  { id       = { type = 30006 id = 193 }
    name     = "Main Fleet"
    location = 1505
    base     = 1505
    division =
    { type          = carrier
      model         = 0
      id            = { type = 30006 id = 194 }
      name          = "Carrier 1"
      extra         = cag
      brigade_model = 0
    }
    division =
    { type          = carrier
      model         = 0
      id            = { type = 30006 id = 195 }
      name          = "Carrier 2"
      extra         = cag
      brigade_model = 0
    }
    division =
    { type  = battleship
      model = 0
      id    = { type = 30006 id = 196 }
      name  = "Battleship 1"
    }
    division =
    { type  = battleship
      model = 0
      id    = { type = 30006 id = 197 }
      name  = "Battleship 2"
    }
    division =
    { type  = battlecruiser
      model = 0
      id    = { type = 30006 id = 198 }
      name  = "Battlecruiser 1"
    }
    division =
    { type  = battlecruiser
      model = 0
      id    = { type = 30006 id = 199 }
      name  = "Battlecruiser 2"
    }
    division =
    { type  = heavy_cruiser
      model = 0
      id    = { type = 30006 id = 200 }
      name  = "Heavy Cruiser 1"
    }
    division =
    { type  = heavy_cruiser
      model = 0
      id    = { type = 30006 id = 201 }
      name  = "Heavy Cruiser 2"
    }
    division =
    { type  = light_cruiser
      model = 0
      id    = { type = 30006 id = 202 }
      name  = "Light Cruiser 1"
    }
    division =
    { type  = light_cruiser
      model = 0
      id    = { type = 30006 id = 203 }
      name  = "Light Cruiser 2"
    }
    division =
    { type  = light_cruiser
      model = 0
      id    = { type = 30006 id = 204 }
      name  = "Light Cruiser 3"
    }
    division =
    { type  = light_cruiser
      model = 0
      id    = { type = 30006 id = 205 }
      name  = "Light Cruiser 4"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30006 id = 206 }
      name  = "Destroyer 1"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30006 id = 207 }
      name  = "Destroyer 2"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30006 id = 208 }
      name  = "Destroyer 3"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30006 id = 209 }
      name  = "Destroyer 4"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30006 id = 210 }
      name  = "Destroyer 5"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30006 id = 211 }
      name  = "Destroyer 6"
    }
    division =
    { type  = transport
      model = 0
      id    = { type = 30006 id = 212 }
      name  = "Transport 1"
    }
    division =
    { type  = transport
      model = 0
      id    = { type = 30006 id = 213 }
      name  = "Transport 2"
    }
    division =
    { type  = submarine
      model = 0
      id    = { type = 30006 id = 214 }
      name  = "Submarine 1"
    }
    division =
    { type  = submarine
      model = 0
      id    = { type = 30006 id = 215 }
      name  = "Submarine 2"
    }
    division =
    { type  = submarine
      model = 0
      id    = { type = 30006 id = 216 }
      name  = "Submarine 3"
    }
    division =
    { type  = submarine
      model = 0
      id    = { type = 30006 id = 217 }
      name  = "Submarine 4"
    }
  }
  airunit =
  { id       = { type = 30006 id = 173 }
    name     = "Bomber Group 1"
    location = 1505
    base     = 1505
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30006 id = 174 }
      name  = "1st Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30006 id = 175 }
      name  = "2nd Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30006 id = 176 }
      name  = "3rd Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30006 id = 177 }
      name  = "4th Air Wing"
    }
  }
  airunit =
  { id       = { type = 30006 id = 178 }
    name     = "Bomber Group 2"
    location = 1505
    base     = 1505
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30006 id = 179 }
      name  = "5th Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30006 id = 180 }
      name  = "6th Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30006 id = 181 }
      name  = "7th Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30006 id = 182 }
      name  = "8th Air Wing"
    }
  }
  airunit =
  { id       = { type = 30006 id = 183 }
    name     = "Fighter Group 1"
    location = 1505
    base     = 1505
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30006 id = 184 }
      name  = "9th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30006 id = 185 }
      name  = "10th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30006 id = 186 }
      name  = "11th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30006 id = 187 }
      name  = "12th Air Wing"
    }
  }
  airunit =
  { id       = { type = 30006 id = 188 }
    name     = "Fighter Group 2"
    location = 1505
    base     = 1505
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30006 id = 189 }
      name  = "13th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30006 id = 190 }
      name  = "14th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30006 id = 191 }
      name  = "15th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30006 id = 192 }
      name  = "16th Air Wing"
    }
  }
}
