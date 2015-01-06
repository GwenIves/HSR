
##############################
# Country definition for UPE #
##############################

province = { id = 1422 infra = 0.4 ic = 6 } # Alma-Ata
province = { id = 1424 infra = 0.4 ic = 10 energy = 30 metal = 10 rare_materials = 45 anti_air = 1 } # Zhambyl
province = { id = 1425 infra = 0.4 } # Chimkent
province = { id = 1426 infra = 0.4 energy = 30 metal = 20 rare_materials = 6 oil = 17 } # Kzyl-Orda
province = { id = 1427 infra = 0.2 ic = 3 air_base = 7 anti_air = 2 } # Tashkent
province = { id = 1428 infra = 0.4 ic = 10 oil = 10 energy = 39 metal = 20 rare_materials = 5 anti_air = 1 } # Osh
province = { id = 1429 infra = 0.4 ic = 5 energy = 31 metal = 20 rare_materials = 5 } # Frunze
province = { id = 1485 infra = 0.2 ic = 4 energy = 40 metal = 10 rare_materials = 10 anti_air = 1 } # Stalinabad
province = { id = 1487 infra = 0.2 } # Samarkand
province = { id = 1488 infra = 0.4 } # Navoi
province = { id = 1489 infra = 0.2 ic = 10 energy = 30 metal = 10 rare_materials = 10 anti_air = 2 } # Bukhara
province = { id = 1490 infra = 0.2 ic = 13 energy = 31 metal = 10 rare_materials = 10 anti_air = 3 } # Ashgabat
province = { id = 1491 infra = 0.2 } # Chardzhou
province = { id = 1495 infra = 0.2 } # Chah Bahar
province = { id = 1496 infra = 0.6 } # Birjand
province =
{ id         = 1497
  infra      = 0.2
  anti_air   = 2
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
  energy     = 30
  metal      = 20
}              # Bandar Abbas
province = { id = 1498 infra = 0.2 } # Babolsar
province = { id = 1499 infra = 0.6 } # Yazd
province = { id = 1500 infra = 0.2 air_base = 1 anti_air = 2 } # Mashhad
province = { id = 1501 infra = 0.6 ic = 10 energy = 32 metal = 20 anti_air = 1 } # Dasht-i-Kavir
province = { id = 1502 infra = 0.2 ic = 17 metal = 27 air_base = 8 anti_air = 3 } # Teheran
province = { id = 1503 infra = 0.4 ic = 10 energy = 20 metal = 20 max_energy = 30 anti_air = 1 } # Babol
province = { id = 1553 infra = 0.2 } # Ekibastuz
province = { id = 1554 infra = 0.4 } # Karaganda
province = { id = 1555 infra = 0.4 } # Balkhash
province = { id = 1556 infra = 0.2 air_base = 5 anti_air = 1 } # Ust-Kamenogorsk
province = { id = 1579 infra = 0.4 } # Kulsary
province = { id = 1580 infra = 0.2 } # Chelkar
province = { id = 1581 infra = 0.4 ic = 5 } # Turgai
province = { id = 1582 infra = 0.2 ic = 5 } # Aralsk
province = { id = 1583 infra = 0.4 } # Fort Shevchenko
province = { id = 1584 infra = 0.4 air_base = 4 anti_air = 1 } # Kungrad
province = { id = 1585 infra = 0.4 ic = 10 anti_air = 2 } # Nukus
province = { id = 1586 infra = 0.2 ic = 10 anti_air = 2 } # Kazalinsk
province = { id = 1587 infra = 0.4 ic = 10 anti_air = 1 } # Baikonur
province = { id = 1588 infra = 0.4 air_base = 4 anti_air = 1 } # Zhezkazgan
province = { id = 1589 infra = 0.4 } # Samarkandskij
province = { id = 1590 infra = 0.4 } # Akmolinsk
province = { id = 1787 infra = 0.4 ic = 10 } # Rasht
province = { id = 1788 infra = 0.4 ic = 10 } # Hamadan
province = { id = 1789 infra = 0.2 } # Bakhtaran
province = { id = 1825 infra = 0.2 naval_base = 3 anti_air = 1 } # Abadan
province = { id = 1826 infra = 0.4 ic = 10 air_base = 3 anti_air = 2 } # Esfahan
province = { id = 1849 infra = 0.4 } # Nalchik
province = { id = 1850 infra = 0.4 } # Tblisi

#####################
# Country main data #
#####################

country =
{ tag                    = UPE
  ai                     = "globalwar/PER.ai"
  belligerence           = 50
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 1502
  manpower               = 1000
  transports             = 100
  escorts                = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 10
    freedom           = 6
    free_market       = 6
    professional_army = 6
    defense_lobby     = 6
    interventionism   = 10
  }
  nationalprovinces      = { 1859 1787 1503 1502 1788 1789 1825 1498 1497 1499 1826 1501 1500 1496 1495 1857 1856 1858 1907 1849 1850 1490 1491 1485
			     1487 1488 1580 1582 1579 1586 1585 1584 1583 1489 1422 1427 1428 1426 1425 1429 1554 1555 1553 1581 1590 1589 1588 1587
			     1424 1556 1494 1493 1492 1486 1484 1430 1431 1432 2245 1557 1550 1551 1548 1552 1591 1592 1576 1577 1578 1569 1847 1846
			     1844 1848 1851 1855 1860 1866 1824 1823
			   }
  ownedprovinces         = { 1859 1787 1503 1502 1788 1789 1825 1498 1497 1499 1826 1501 1500 1496 1495 1857 1856 1858 1907 1849 1850 1490 1491 1485
			     1487 1488 1580 1582 1579 1586 1585 1584 1583 1489 1422 1427 1428 1426 1425 1429 1554 1555 1553 1581 1590 1589 1588 1587
			     1424 1556
			   }
  controlledprovinces    = { 1859 1787 1503 1502 1788 1789 1825 1498 1497 1499 1826 1501 1500 1496 1495 1857 1856 1858 1907 1849 1850 1490 1491 1485
			     1487 1488 1580 1582 1579 1586 1585 1584 1583 1489 1422 1427 1428 1426 1425 1429 1554 1555 1553 1581 1590 1589 1588 1587
			     1424 1556
			   }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 1010 1190 2010 2290 2450 3010 3070 3130 3190 3250 3320 3400 4010 4120 5010 5080 8010 8020 8030 8040 8050 9010 }
  diplomacy              = { }

  landunit =
  { id       = { type = 30005 id = 1 }
    name     = "1. Corps"
    location = 1849
    division =
    { id       = { type = 30005 id = 2 }
      name     = "1st Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30005 id = 3 }
    name     = "2. Corps"
    location = 1857
    division =
    { id       = { type = 30005 id = 4 }
      name     = "2nd Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30005 id = 5 }
    name     = "3. Corps"
    location = 1850
    division =
    { id       = { type = 30005 id = 6 }
      name     = "3rd Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30005 id = 7 }
    name     = "4. Corps"
    location = 1856
    division =
    { id       = { type = 30005 id = 8 }
      name     = "4th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30005 id = 9 }
    name     = "5. Corps"
    location = 1859
    division =
    { id       = { type = 30005 id = 10 }
      name     = "5th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30005 id = 11 }
    name     = "6. Corps"
    location = 1789
    division =
    { id       = { type = 30005 id = 12 }
      name     = "6th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30005 id = 13 }
    name     = "7. Corps"
    location = 1825
    division =
    { id       = { type = 30005 id = 14 }
      name     = "7th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30005 id = 15 }
    name     = "8. Corps"
    location = 1495
    division =
    { id       = { type = 30005 id = 16 }
      name     = "8th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30005 id = 17 }
    name     = "9. Corps"
    location = 1496
    division =
    { id       = { type = 30005 id = 18 }
      name     = "9th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30005 id = 19 }
    name     = "10. Corps"
    location = 1500
    division =
    { id       = { type = 30005 id = 20 }
      name     = "10th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30005 id = 21 }
    name     = "11. Corps"
    location = 1491
    division =
    { id       = { type = 30005 id = 22 }
      name     = "11th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30005 id = 23 }
    name     = "12. Corps"
    location = 1487
    division =
    { id       = { type = 30005 id = 24 }
      name     = "12th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30005 id = 25 }
    name     = "13. Corps"
    location = 1485
    division =
    { id       = { type = 30005 id = 26 }
      name     = "13th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30005 id = 27 }
    name     = "14. Corps"
    location = 1428
    division =
    { id       = { type = 30005 id = 28 }
      name     = "14th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30005 id = 29 }
    name     = "15. Corps"
    location = 1429
    division =
    { id       = { type = 30005 id = 30 }
      name     = "15th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30005 id = 31 }
    name     = "16. Corps"
    location = 1422
    division =
    { id       = { type = 30005 id = 32 }
      name     = "16th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30005 id = 33 }
    name     = "17. Corps"
    location = 1556
    division =
    { id       = { type = 30005 id = 34 }
      name     = "17th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30005 id = 35 }
    name     = "18. Corps"
    location = 1554
    division =
    { id       = { type = 30005 id = 170 }
      name     = "18th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30005 id = 36 }
    name     = "19. Corps"
    location = 1553
    division =
    { id       = { type = 30005 id = 37 }
      name     = "19th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30005 id = 38 }
    name     = "20. Corps"
    location = 1590
    division =
    { id       = { type = 30005 id = 39 }
      name     = "20th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30005 id = 40 }
    name     = "21. Corps"
    location = 1581
    division =
    { id       = { type = 30005 id = 41 }
      name     = "21st Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30005 id = 42 }
    name     = "22. Corps"
    location = 1580
    division =
    { id       = { type = 30005 id = 43 }
      name     = "22nd Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30005 id = 44 }
    name     = "23. Corps"
    location = 1779
    division =
    { id       = { type = 30005 id = 45 }
      name     = "23rd Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30005 id = 46 }
    name     = "24. Corps"
    location = 1579
    division =
    { id       = { type = 30005 id = 47 }
      name     = "24rd Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30005 id = 218 }
    name     = "Armored Corps"
    location = 1502
    division =
    { type  = armor
      model = 0
      id    = { type = 30005 id = 219 }
      name  = "1st Armored Division"
    }
    division =
    { type  = armor
      model = 0
      id    = { type = 30005 id = 220 }
      name  = "2nd Armored Division"
    }
    division =
    { type  = armor
      model = 0
      id    = { type = 30005 id = 221 }
      name  = "3rd Armored Division"
    }
    division =
    { type  = armor
      model = 0
      id    = { type = 30005 id = 222 }
      name  = "4th Armored Division"
    }
    division =
    { type  = armor
      model = 0
      id    = { type = 30005 id = 223 }
      name  = "5th Armored Division"
    }
    division =
    { type  = armor
      model = 0
      id    = { type = 30005 id = 224 }
      name  = "6th Armored Division"
    }
  }
  navalunit =
  { id       = { type = 30005 id = 193 }
    name     = "Main Fleet"
    location = 1497
    base     = 1497
    division =
    { type          = carrier
      model         = 0
      id            = { type = 30005 id = 194 }
      name          = "Carrier 1"
      extra         = cag
      brigade_model = 0
    }
    division =
    { type          = carrier
      model         = 0
      id            = { type = 30005 id = 195 }
      name          = "Carrier 2"
      extra         = cag
      brigade_model = 0
    }
    division =
    { type  = battleship
      model = 0
      id    = { type = 30005 id = 196 }
      name  = "Battleship 1"
    }
    division =
    { type  = battleship
      model = 0
      id    = { type = 30005 id = 197 }
      name  = "Battleship 2"
    }
    division =
    { type  = battlecruiser
      model = 0
      id    = { type = 30005 id = 198 }
      name  = "Battlecruiser 1"
    }
    division =
    { type  = battlecruiser
      model = 0
      id    = { type = 30005 id = 199 }
      name  = "Battlecruiser 2"
    }
    division =
    { type  = heavy_cruiser
      model = 0
      id    = { type = 30005 id = 200 }
      name  = "Heavy Cruiser 1"
    }
    division =
    { type  = heavy_cruiser
      model = 0
      id    = { type = 30005 id = 201 }
      name  = "Heavy Cruiser 2"
    }
    division =
    { type  = light_cruiser
      model = 0
      id    = { type = 30005 id = 202 }
      name  = "Light Cruiser 1"
    }
    division =
    { type  = light_cruiser
      model = 0
      id    = { type = 30005 id = 203 }
      name  = "Light Cruiser 2"
    }
    division =
    { type  = light_cruiser
      model = 0
      id    = { type = 30005 id = 204 }
      name  = "Light Cruiser 3"
    }
    division =
    { type  = light_cruiser
      model = 0
      id    = { type = 30005 id = 205 }
      name  = "Light Cruiser 4"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30005 id = 206 }
      name  = "Destroyer 1"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30005 id = 207 }
      name  = "Destroyer 2"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30005 id = 208 }
      name  = "Destroyer 3"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30005 id = 209 }
      name  = "Destroyer 4"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30005 id = 210 }
      name  = "Destroyer 5"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30005 id = 211 }
      name  = "Destroyer 6"
    }
    division =
    { type  = transport
      model = 0
      id    = { type = 30005 id = 212 }
      name  = "Transport 1"
    }
    division =
    { type  = transport
      model = 0
      id    = { type = 30005 id = 213 }
      name  = "Transport 2"
    }
    division =
    { type  = submarine
      model = 0
      id    = { type = 30005 id = 214 }
      name  = "Submarine 1"
    }
    division =
    { type  = submarine
      model = 0
      id    = { type = 30005 id = 215 }
      name  = "Submarine 2"
    }
    division =
    { type  = submarine
      model = 0
      id    = { type = 30005 id = 216 }
      name  = "Submarine 3"
    }
    division =
    { type  = submarine
      model = 0
      id    = { type = 30005 id = 217 }
      name  = "Submarine 4"
    }
  }
  airunit =
  { id       = { type = 30005 id = 173 }
    name     = "Bomber Group 1"
    location = 1497
    base     = 1497
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30005 id = 174 }
      name  = "1st Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30005 id = 175 }
      name  = "2nd Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30005 id = 176 }
      name  = "3rd Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30005 id = 177 }
      name  = "4th Air Wing"
    }
  }
  airunit =
  { id       = { type = 30005 id = 178 }
    name     = "Bomber Group 2"
    location = 1497
    base     = 1497
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30005 id = 179 }
      name  = "5th Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30005 id = 180 }
      name  = "6th Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30005 id = 181 }
      name  = "7th Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30005 id = 182 }
      name  = "8th Air Wing"
    }
  }
  airunit =
  { id       = { type = 30005 id = 183 }
    name     = "Fighter Group 1"
    location = 1497
    base     = 1497
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30005 id = 184 }
      name  = "9th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30005 id = 185 }
      name  = "10th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30005 id = 186 }
      name  = "11th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30005 id = 187 }
      name  = "12th Air Wing"
    }
  }
  airunit =
  { id       = { type = 30005 id = 188 }
    name     = "Fighter Group 2"
    location = 1497
    base     = 1497
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30005 id = 189 }
      name  = "13th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30005 id = 190 }
      name  = "14th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30005 id = 191 }
      name  = "15th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30005 id = 192 }
      name  = "16th Air Wing"
    }
  }
}
