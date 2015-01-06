#
# by Aregorn for HSR2_DD
#
##############################
# Country definition for JAP #
##############################

province =
{ id         = 1181
  anti_air   = 2
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Akita
province = { id = 1182 anti_air = 2 } # Fukushima
province =
{ id         = 1184
  ic         = 7
  anti_air   = 2
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Tokyo
province =
{ id         = 1185
  ic         = 3
  anti_air   = 2
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Nagoya
province =
{ id         = 1186
  anti_air   = 2
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Kanazawa
province =
{ id         = 1187
  ic         = 2
  anti_air   = 2
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Osaka
province =
{ id         = 1188
  anti_air   = 4
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Hiroshima
province =
{ id         = 1189
  ic         = 3
  anti_air   = 2
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Shikoku
province =
{ id         = 1190
  anti_air   = 2
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Fukuoka
province =
{ id         = 1193
  anti_air   = 2
  air_base   = { size = 6 current_size = 6 }
  naval_base = { size = 6 current_size = 6 }
  supplypool = 1000
}              # Okinawa
province =
{ id         = 1196
  anti_air   = 2
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
  supplypool = 5000
  oilpool    = 100
}              # Busan
province =
{ id         = 1202
  anti_air   = 4
  naval_base = { size = 5 current_size = 5 }
  air_base   = { size = 7 current_size = 7 }
  supplypool = 500
  oilpool    = 100
}              # Dalian
province = { id = 1203 supplypool = 1000 oilpool = 100 } # Tangshan
province =
{ id         = 1322
  anti_air   = 2
  air_base   = { size = 8 current_size = 8 }
  naval_base = { size = 10 current_size = 10 }
  supplypool = 1000
  oilpool    = 100
}              # Kaohsiung
province = { id = 1323 anti_air = 2 } # Taipei
province =
{ id       = 1391
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            # Hyesan
province =
{ id       = 1397
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
}            # Changde
province = { id = 1599 supplypool = 500 } # Iwo Jima
province =
{ id         = 1601
  anti_air   = 5
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 2 current_size = 2 }
  supplypool = 500
}              # Eniwetok
province = { id = 1605 anti_air = 3 } # Majuro
province =
{ id         = 1608
  anti_air   = 5
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 2 current_size = 2 }
  supplypool = 2000
}              # Kwajalein
province = { id = 1610 supplypool = 500 } # Ponape
province =
{ id         = 1613
  anti_air   = 5
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
  supplypool = 500
}              # Truk
province = { id = 1618 supplypool = 500 } # Ulithi
province = { id = 1619 anti_air = 3 supplypool = 500 } # Yap
province = { id = 1621 supplypool = 500 } # Palau
province = { id = 1625 supplypool = 500 } # Rota
province = { id = 1626 supplypool = 500 } # Tinian
province = { id = 1627 anti_air = 3 supplypool = 500 } # Saipan
province = { id = 1784 anti_air = 2 } # Bonin Islands
province = { id = 1785 supplypool = 500 } # Marcus Island

#####################
# Country main data #
#####################

country =
{ tag                    = JAP
  belligerence           = 10
  capital                = 1184

	research_mod = 1.05
	tc_mod = 1.10
	peacetime_ic_mod = 0.90

  manpower               = 735
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  transports             = 600
  escorts                = 100
  diplomacy =
  { relation = { tag = BEL value = -25 }
    relation = { tag = CGX value = -75 }
    relation = { tag = CHC value = -200 }
    relation = { tag = CHI value = -100 }
    relation = { tag = CHL value = 20 }
    relation = { tag = CSX value = -75 }
    relation = { tag = CXB value = -75 }
    relation = { tag = CYN value = -75 }
    relation = { tag = ENG value = -25 }
    relation = { tag = ETH value = 35 }
    relation = { tag = FIN value = 20 }
    relation = { tag = FRA value = -20 }
    relation = { tag = GER value = 20 }
    relation = { tag = HOL value = -50 }
    relation = { tag = MAN value = 200 access = yes }
    relation = { tag = PHI value = 1 }
    relation = { tag = SIA value = 75 }
    relation = { tag = SOV value = -10 }
    relation = { tag = USA value = 15 }
  }

  SpyInfo                = { country = "JAP" NumberOfSpies = 10 }

  # Sakhalin
  nationalprovinces      = { 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1784 1599 1192 1193 1785 1174 1176 1175 1194
			     1195 1196 1197 1198 1199 1393 1391 1376 1392 1200 1201 1624
			   }
  ownedprovinces         = { 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1784 1599 1192 1193 1785 1627 1626 1625 1619
			     1621 1604 1620 1618 1617 1616 1615 1613 1612 1610 1609 1600 1601 1602 1603 1605 1606 1607 1608 1323 1322 1324 1376 1391
			     1392 1200 1201 1199 1198 1197 1196 1195 1194 1393 1398 1397 1202 1203 1176 1174
			   }
  # Sakhalin
  controlledprovinces    = { 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1784 1599 1192 1193 1785 1627 1626 1625 1619
			     1621 1604 1620 1618 1617 1616 1615 1613 1612 1610 1609 1600 1601 1602 1603 1605 1606 1607 1608 1323 1322 1324 1376 1391
			     1392 1200 1201 1199 1198 1197 1196 1195 1194 1393 1202 1203 1397 1398 1176 1174
			   }
  # JAP 1936 techs
  # ######################
  techapps               = { 1010  1020  1190  1200  12100 12110 1310  14000 2010  2020  2150  2290  2300  2310  2400  2450  2460  2510  3010  3020
			     3030  3070  3080  3090  3100  3130  3140  3150  3190  3200  3210  3250  3260  3270  3280  3320  3330  3340  3400  3410
			     3420  3430  4010  4120  4130  4190  5010  5080  5090  5190  5310  5320  5350  5470  6010  6030  6110  6120  8010
			     8020  8030  8040  8050  8060  8090  8100  8110  9010  9020  9030  9040
			   }
  blueprints             = { 8180 8230 8310 8320 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 3
    freedom           = 3
    free_market       = 3
    professional_army = 6
    defense_lobby     = 8
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 5001 }
  headofgovernment       = { type = 9 id = 5002 }
  foreignminister        = { type = 9 id = 5003 }
  armamentminister       = { type = 9 id = 5004 }
  ministerofsecurity     = { type = 9 id = 5005 }
  ministerofintelligence = { type = 9 id = 5006 }
  chiefofstaff           = { type = 9 id = 5007 }
  chiefofarmy            = { type = 9 id = 5008 }
  chiefofnavy            = { type = 9 id = 5009 }
  chiefofair             = { type = 9 id = 5010 }
  landunit =
  { id       = { type = 13016 id = 500 }
    name     = "Manchuria Exp Army HQ"
    location = 1379
    division =
    { id       = { type = 13016 id = 501 }
      name     = "Manchuria Exp Army HQ"
      strength = 100
      type     = hq
      model    = 0
      extra    = rocket_artillery
      experience = 20
    }
    division =
    { id       = { type = 13016 id = 537 }
      name     = "36. Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      experience = 15
    }
    division =
    { id       = { type = 13016 id = 538 }
      name     = "37. Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
      experience = 15
    }
  }
  landunit =
  { id       = { type = 13016 id = 511 }
    name     = "13. Hendan"
    location = 1397
    division =
    { id       = { type = 13016 id = 512 }
      name     = "15. Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      experience = 15
    }
    division =
    { id       = { type = 13016 id = 513 }
      name     = "17. Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      experience = 15
    }
  }
  landunit =
  { id       = { type = 13016 id = 549 }
    name     = "Mongol Army" # Changchiakou, China
    location = 1398
    division =
    { id       = { type = 13016 id = 550 }
      name     = "26. Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      experience = 15
    }
    division =
    { id       = { type = 13016 id = 551 }
      name     = "2. Independent Mixed Brigade"
      strength = 50
      type     = infantry
      model    = 0
      experience = 15
    }
    division =
    { id       = { type = 13016 id = 552 }
      name     = "1 Moukogo Kiheishidan"
      strength = 100
      type     = cavalry
      model    = 0
      experience = 15
    }
    division =
    { id       = { type = 13016 id = 553 }
      name     = "2 Moukogo Kiheishidan"
      strength = 100
      type     = cavalry
      model    = 0
      experience = 15
    }
    division =
    { id       = { type = 13016 id = 554 }
      name     = "3 Moukogo Kiheishidan"
      strength = 100
      type     = cavalry
      model    = 0
      experience = 15
    }
    division =
    { id       = { type = 13016 id = 555 }
      name     = "4 Moukogo Kiheishidan"
      strength = 100
      type     = cavalry
      model    = 0
      experience = 15
    }
    division =
    { id       = { type = 13016 id = 556 }
      name     = "5 Moukogo Kiheishidan"
      strength = 100
      type     = cavalry
      model    = 0
      experience = 15
    }
  }
  landunit =
  { id       = { type = 13016 id = 561 }
    name     = "Kwantung Theater Army HQ" # Changchung, Manchuria
    location = 1203
    division =
    { id       = { type = 13016 id = 562 }
      name     = "Kwantung Theater Army HQ"
      strength = 100
      type     = hq
      model    = 0
      extra    = rocket_artillery
      experience = 15
    }
    division =
    { id       = { type = 13016 id = 563 }
      name     = "10. Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      experience = 15
    }
    division =
    { id       = { type = 13016 id = 564 }
      name     = "28. Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = engineer
      brigade_model = 15
      experience = 20
   }
    division =
    { id       = { type = 13016 id = 566 }
      name     = "Kwantung Defence Command"
      strength = 100
      type     = garrison
      model    = 0
      extra    = police
    }
  }
  landunit =
  { id       = { type = 13016 id = 567 }
    name     = "3. Hendan" # Botanko, Manchuko
    location = 1530
    division =
    { id       = { type = 13016 id = 568 }
      name     = "9. Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
      experience = 15
    }
    division =
    { id       = { type = 13016 id = 569 }
      name     = "12. Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
      experience = 15
    }
  }
  landunit =
  { id       = { type = 13016 id = 573 }
    name     = "4. Hendan" # Songo, Manchuko
    location = 1381
    division =
    { id       = { type = 13016 id = 574 }
      name     = "1. Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
      experience = 15
    }
    division =
    { id       = { type = 13016 id = 575 }
      name     = "2. Border Guards"
      strength = 100
      type     = garrison
      model    = 0
      extra    = police
    }
    division =
    { id       = { type = 13016 id = 576 }
      name     = "3. Border Guards"
      strength = 100
      type     = garrison
      model    = 0
    }
  }
  landunit =
  { id       = { type = 13016 id = 577 }
    name     = "5. Hendan" # Toan, Manchuko
    location = 1374
    division =
    { id       = { type = 13016 id = 581 }
      name     = "4. Border Guards"
      strength = 100
      type     = garrison
      model    = 0
      extra    = police
    }
    division =
    { id       = { type = 13016 id = 582 }
      name     = "5. Border Guards"
      strength = 100
      type     = garrison
      model    = 0
      extra    = police
    }
    division =
    { id       = { type = 13016 id = 583 }
      name     = "3 Manchuko Kiheishidan"
      strength = 50
      type     = cavalry
      model    = 0
      experience = 15
    }
  }
  landunit =
  { id       = { type = 13016 id = 584 }
    name     = "6. Hendan" # Hailar, Manchuko
    location = 1378
    division =
    { id       = { type = 13016 id = 585 }
      name     = "14. Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = anti_tank
      experience = 15
    }
    division =
    { id       = { type = 13016 id = 586 }
      name     = "23. Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
      experience = 15
    }
  }
  landunit =
  { id       = { type = 13016 id = 587 }
    name     = "20. Hendan" # Keinei, Manchuko
    location = 1375
    division =
    { id       = { type = 13016 id = 588 }
      name     = "8. Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
      experience = 15
    }
    division =
    { id       = { type = 13016 id = 589 }
      name     = "25. Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
      experience = 15
    }
    division =
    { id       = { type = 13016 id = 590 }
      name     = "6. Border Guards"
      strength = 100
      type     = garrison
      model    = 0
      extra    = police
    }
  }
  landunit =
  { id       = { type = 13016 id = 597 }
    name     = "14. Hendan" # Taiwan
    location = 1323
    division =
    { id       = { type = 13016 id = 598 }
      name     = "16. Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = engineer
      brigade_model = 15
      experience = 20
    }
    division =
    { id       = { type = 13016 id = 599 }
      name     = "48. Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
      experience = 15
    }
  }
  landunit =
  { id       = { type = 13016 id = 605 }
    name     = "15. Hendan" # Tokyo
    location = 1184
    division =
    { id       = { type = 13016 id = 606 }
      name     = "2. Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = engineer
      brigade_model = 15
      experience = 20
    }
    division =
    { id       = { type = 13016 id = 607 }
      name     = "56. Brigade"
      strength = 50
      type     = infantry
      model    = 0
      experience = 15
    }
    division =
    { id       = { type = 13016 id = 612 }
      name     = "Imperial Guards"
      strength = 100
      type     = infantry
      model    = 0
      extra    = engineer
      brigade_model = 15
      experience = 20
    }
  }
  # Imperial General Headquarters
  landunit =
  { id       = { type = 13016 id = 614 }
    name     = "Imperial General HQ" # Tokyo
    location = 1184
    division =
    { id       = { type = 13016 id = 615 }
      name     = "Imperial General HQ"
      strength = 100
      type     = hq
      model    = 0
      extra    = rocket_artillery
      experience = 15
    }
    division =
    { id       = { type = 13016 id = 616 }
      name     = "4. Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      experience = 15
    }
  }
  landunit =
  { id       = { type = 13016 id = 618 }
    name     = "North Japan Army"
    location = 1181
    division =
    { id       = { type = 13016 id = 622 }
      name     = "1. Home Guards"
      strength = 100
      type     = garrison
      model    = 0
    }
    division =
    { id       = { type = 13016 id = 623 }
      name     = "2. Home Guards"
      strength = 100
      type     = garrison
      model    = 0
      extra    = police
    }
  }
  landunit =
  { id       = { type = 13016 id = 626 }
    name     = "Central Japan Army"
    location = 1185
    division =
    { id       = { type = 13016 id = 627 }
      name     = "53. Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      experience = 15
    }
  }
  landunit =
  { id       = { type = 13016 id = 632 }
    name     = "West Japan Army"
    location = 1187
    division =
    { id       = { type = 13016 id = 635 }
      name     = "8. Home Guards"
      strength = 100
      type     = garrison
      model    = 0
      extra    = police
    }
    division =
    { id       = { type = 13016 id = 641 }
      name     = "14. Home Guards"
      strength = 100
      type     = garrison
      model    = 0
      extra    = police
    }
  }
  landunit =
  { id       = { type = 13016 id = 642 }
    name     = "East Japan Army"
    location = 1190
    division =
    { id       = { type = 13016 id = 643 }
      name     = "52. Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      experience = 15
    }
  }
  landunit =
  { id       = { type = 13016 id = 647 }
    name     = "Korean Army"
    location = 1376
    division =
    { id       = { type = 13016 id = 648 }
      name     = "19. Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      experience = 15
    }
    division =
    { id       = { type = 13016 id = 649 }
      name     = "20. Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
      experience = 15
    }
  }
  landunit =
  { id       = { type = 13016 id = 1200 }
    name     = "South Korean Army"
    location = 1199
    division =
    { id       = { type = 13016 id = 650 }
      name     = "1. Korean Garrison"
      strength = 100
      type     = garrison
      model    = 0
    }
    division =
    { id       = { type = 13016 id = 651 }
      name     = "2. Korean Garrison"
      strength = 100
      type     = garrison
      model    = 0
    }
  }
  # Pacific garrisons:
  landunit =
  { id       = { type = 13016 id = 658 }
    name     = "Saishu Hendan"
    location = 1177
    division =
    { id       = { type = 13016 id = 659 }
      name     = "Saishu Hendan"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 660 }
    name     = "Naha Hendan"
    location = 1193
    division =
    { id       = { type = 13016 id = 661 }
      name     = "Naha Hendan"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 662 }
    name     = "Toyohara Hendan"
    location = 1184
    division =
    { id       = { type = 13016 id = 663 }
      name     = "Toyohara Hendan"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 664 }
    name     = "Tomari Hendan"
    location = 1184
    division =
    { id       = { type = 13016 id = 665 }
      name     = "Tomari Hendan"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 667 }
    name     = "Shana Hendan"
    location = 1177
    division =
    { id       = { type = 13016 id = 668 }
      name     = "Shana Hendan"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 669 }
    name     = "Mariane Hendan"
    location = 1184
    division =
    { id       = { type = 13016 id = 670 }
      name     = "Mariane Hendan"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 671 }
    name     = "Palau Hendan"
    location = 1621
    division =
    { id       = { type = 13016 id = 672 }
      name     = "Palau Hendan"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 673 }
    name     = "Eniwetok Hendan"
    location = 1601
    division =
    { id       = { type = 13016 id = 674 }
      name     = "Eniwetok Hendan"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 675 }
    name     = "Bikini Hendan"
    location = 1600
    division =
    { id       = { type = 13016 id = 676 }
      name     = "Bikini Hendan"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 677 }
    name     = "Kwajalein Hendan"
    location = 1608
    division =
    { id       = { type = 13016 id = 678 }
      name     = "Kwajalein Hendan"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 679 }
    name     = "Saipan Hendan"
    location = 1627
    division =
    { id       = { type = 13016 id = 680 }
      name     = "Saipan Hendan"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 681 }
    name     = "Shumushushima Hendan"
    location = 1174
    division =
    { id       = { type = 13016 id = 682 }
      name     = "Shumushushima Hendan"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 683 }
    name     = "Bonin Hendan"
    location = 1599
    division =
    { id       = { type = 13016 id = 684 }
      name     = "Bonin Hendan"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 685 }
    name     = "Marcus Hendan"
    location = 1785
    division =
    { id       = { type = 13016 id = 686 }
      name     = "Marcus Hendan"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 687 }
    name     = "Ulithi Hendan"
    location = 1618
    division =
    { id       = { type = 13016 id = 688 }
      name     = "Ulithi Hendan"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 689 }
    name     = "Truk Hendan"
    location = 1613
    division =
    { id       = { type = 13016 id = 690 }
      name     = "Truk Hendan"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 691 }
    name     = "Ponape Hendan"
    location = 1610
    division =
    { id       = { type = 13016 id = 692 }
      name     = "Ponape Hendan"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 693 }
    name     = "Marshall Hendan"
    location = 1605
    division =
    { id       = { type = 13016 id = 694 }
      name     = "Marshall Hendan"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 695 }
    name     = "Yap Hendan"
    location = 1619
    division =
    { id       = { type = 13016 id = 696 }
      name     = "Yap Hendan"
      strength = 100
      type     = garrison
    }
  }
##################
# AI Garrisons
##################

	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13016 id = 697 }
			name = "Garrison 1"
			type = infantry
			extra = engineer
			brigade_model = 15
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13016 id = 698 }
			name = "Garrison 2"
			type = infantry
			extra = engineer
			brigade_model = 15
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13016 id = 699 }
			name = "Garrison 3"
			type = infantry
			extra = engineer
			brigade_model = 15
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13016 id = 700 }
			name = "Garrison 4"
			type = infantry
			extra = engineer
			brigade_model = 15
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13016 id = 701 }
			name = "Garrison 5"
			type = infantry
			extra = engineer
			brigade_model = 15
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13016 id = 702 }
			name = "Garrison 6"
			type = infantry
			extra = engineer
			brigade_model = 15
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13016 id = 703 }
			name = "Garrison 7"
			type = infantry
			extra = engineer
			brigade_model = 15
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13016 id = 704 }
			name = "Garrison 8"
			type = infantry
			extra = engineer
			brigade_model = 15
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13016 id = 705 }
			name = "Garrison 9"
			type = infantry
			extra = artillery
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13016 id = 706 }
			name = "Garrison 10"
			type = infantry
			extra = engineer
			brigade_model = 15
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13016 id = 707 }
			name = "Garrison 11"
			type = infantry
			extra = engineer
			brigade_model = 15
			model = 1
		}

	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13016 id = 708 }
			name = "Garrison 12"
			type = infantry
			extra = engineer
			brigade_model = 15
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13016 id = 709 }
			name = "Garrison 13"
			type = infantry
			extra = engineer
			brigade_model = 15
			model = 1
		}

	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13016 id = 710 }
			name = "Garrison 14"
			type = infantry
			extra = engineer
			brigade_model = 15
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13016 id = 711 }
			name = "Garrison 15"
			type = infantry
			extra = engineer
			brigade_model = 15
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13016 id = 712 }
			name = "Garrison 16"
			type = infantry
			extra = engineer
			brigade_model = 15
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13016 id = 713 }
			name = "Garrison 17"
			type = infantry
			extra = engineer
			brigade_model = 15
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13016 id = 714 }
			name = "Garrison 18"
			type = infantry
			extra = engineer
			brigade_model = 15
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13016 id = 715 }
			name = "Garrison 19"
			type = infantry
			extra = engineer
			brigade_model = 15
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13016 id = 716 }
			name = "Garrison 20"
			type = infantry
			extra = engineer
			brigade_model = 15
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13016 id = 717 }
			name = "Garrison 21"
			type = infantry
			extra = engineer
			brigade_model = 15
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13016 id = 718 }
			name = "Garrison 22"
			type = infantry
			extra = engineer
			brigade_model = 15
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13016 id = 719 }
			name = "Garrison 23"
			type = infantry
			extra = engineer
			brigade_model = 15
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13016 id = 720 }
			name = "Garrison 24"
			type = infantry
			extra = engineer
			brigade_model = 15
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 13016 id = 721 }
			name = "Garrison 25"
			type = infantry
			extra = engineer
			brigade_model = 15
			model = 1
		}
####### Nihon Kaigun #######
  navalunit =
  { id       = { type = 13016 id = 1001 }
    name     = "Nihon Kaigun"
    location = 1184
    base     = 1184
    division =
    { id    = { type = 13016 id = 1002 }
      name  = "IJN Kongo"
      type  = battlecruiser
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1003 }
      name  = "IJN Hiei"
      type  = battlecruiser
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1004 }
      name  = "IJN Haruna"
      type  = battlecruiser
      model = 1
      experience = 10
    }
  }
  navalunit =
  { id       = { type = 13016 id = 1005 }
    name     = "1. Kaigun"
    location = 1184
    base     = 1184
    division =
    { id    = { type = 13016 id = 1006 }
      name  = "IJN Kirishima"
      type  = battlecruiser
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1007 }
      name  = "IJN Fuso"
      type  = battleship
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1008 }
      name  = "IJN Yamashiro"
      type  = battleship
      model = 1
      experience = 10
    }
  }
  navalunit =
  { id       = { type = 13016 id = 1009 }
    name     = "2. Kaigun"
    location = 1188
    base     = 1188
    division =
    { id    = { type = 13016 id = 1010 }
      name  = "IJN Ise"
      type  = battleship
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1011 }
      name  = "IJN Hyuga"
      type  = battleship
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1012 }
      name  = "IJN Nagato"
      type  = battleship
      model = 2
      experience = 10
    }
  }
  navalunit =
  { id       = { type = 13016 id = 1013 }
    name     = "3. Kaigun"
    location = 1189
    base     = 1189
    division =
    { id    = { type = 13016 id = 1014 }
      name  = "IJN Mutsu"
      type  = battleship
      model = 2
      experience = 10
    }
  }
  navalunit =
  { id       = { type = 13016 id = 1015 }
    name     = "4. Kaigun"
    location = 1184
    base     = 1184
    division =
    { id    = { type = 13016 id = 1016 }
      name  = "IJN Tatsuta"
      type  = light_cruiser
      model = 0
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1017 }
      name  = "IJN Hirado"
      type  = light_cruiser
      model = 0
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1018 }
      name  = "IJN Yahagi"
      type  = light_cruiser
      model = 0
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1019 }
      name  = "IJN Kuma"
      type  = light_cruiser
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1020 }
      name  = "IJN Tama"
      type  = light_cruiser
      model = 1
      experience = 10
    }
  }
  navalunit =
  { id       = { type = 13016 id = 1021 }
    name     = "5. Kaigun"
    location = 1188
    base     = 1188
    division =
    { id    = { type = 13016 id = 1022 }
      name  = "IJN Furutaka"
      type  = heavy_cruiser
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1023 }
      name  = "IJN Kitikama"
      type  = light_cruiser
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1024 }
      name  = "IJN Kiso"
      type  = light_cruiser
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1025 }
      name  = "IJN Oi"
      type  = light_cruiser
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1026 }
      name  = "IJN Nagara"
      type  = light_cruiser
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1027 }
      name  = "IJN Izumo"
      type  = heavy_cruiser
      model = 0
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1028 }
      name  = "IJN Tenryu"
      type  = light_cruiser
      model = 0
      experience = 10
    }
  }
  navalunit =
  { id       = { type = 13016 id = 1029 }
    name     = "6. Kaigun"
    location = 1184
    base     = 1184
    division =
    { id    = { type = 13016 id = 1030 }
      name  = "IJN Natori"
      type  = light_cruiser
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1031 }
      name  = "IJN Kinu"
      type  = light_cruiser
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1032 }
      name  = "IJN Yuru"
      type  = light_cruiser
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1033 }
      name  = "IJN Asama"
      type  = heavy_cruiser
      model = 0
      experience = 10
    }
  }
  navalunit =
  { id       = { type = 13016 id = 1034 }
    name     = "7. Kaigun"
    location = 1189
    base     = 1189
    division =
    { id    = { type = 13016 id = 1035 }
      name  = "IJN Yubari"
      type  = light_cruiser
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1036 }
      name  = "IJN Isuzu"
      type  = light_cruiser
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1037 }
      name  = "IJN Sendai"
      type  = light_cruiser
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1038 }
      name  = "IJN Abukuma"
      type  = light_cruiser
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1039 }
      name  = "IJN Jintsu"
      type  = light_cruiser
      model = 1
      experience = 10
    }
  }
  navalunit =
  { id       = { type = 13016 id = 1040 }
    name     = "8. Kaigun"
    location = 1184
    base     = 1184
    division =
    { id    = { type = 13016 id = 1041 }
      name  = "IJN Kako"
      type  = heavy_cruiser
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1042 }
      name  = "IJN Aoba"
      type  = heavy_cruiser
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1043 }
      name  = "IJN Kinugasa"
      type  = heavy_cruiser
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1044 }
      name  = "IJN Nachi"
      type  = heavy_cruiser
      model = 2
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1045 }
      name  = "IJN Haguro"
      type  = heavy_cruiser
      model = 2
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1046 }
      name  = "IJN Naka"
      type  = light_cruiser
      model = 1
      experience = 10
    }
  }
  navalunit =
  { id       = { type = 13016 id = 1047 }
    name     = "9. Kaigun"
    location = 1184
    base     = 1184
    division =
    { id    = { type = 13016 id = 1048 }
      name  = "IJN Myoko"
      type  = heavy_cruiser
      model = 2
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1049 }
      name  = "IJN Ashigara"
      type  = heavy_cruiser
      model = 2
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1050 }
      name  = "IJN Atago"
      type  = heavy_cruiser
      model = 2
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1051 }
      name  = "IJN Takao"
      type  = heavy_cruiser
      model = 2
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1052 }
      name  = "IJN Chokai"
      type  = heavy_cruiser
      model = 2
      experience = 10
    }
  }
  navalunit =
  { id       = { type = 13016 id = 1053 }
    name     = "10. Kaigun"
    location = 1189
    base     = 1189
    division =
    { id    = { type = 13016 id = 1054 }
      name  = "IJN Maya"
      type  = heavy_cruiser
      model = 2
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1055 }
      name  = "IJN Mikuma"
      type  = light_cruiser
      model = 3
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1056 }
      name  = "IJN Mogami"
      type  = light_cruiser
      model = 3
      experience = 10
    }
  }
  navalunit =
  { id       = { type = 13016 id = 1057 }
    name     = "11. Kaigun"
    location = 1184
    base     = 1184
    division =
    { id            = { type = 13016 id = 1058 }
      name          = "1. Koku Sentai"
      type          = carrier
      model         = 0
      extra         = cag
      brigade_model = 2
      experience = 10
    }
  }
  navalunit =
  { id       = { type = 13016 id = 1059 }
    name     = "12. Kaigun"
    location = 1184
    base     = 1184
    division =
    { id            = { type = 13016 id = 1060 }
      name          = "IJN Akagi"
      type          = carrier
      model         = 2
      extra         = cag
      brigade_model = 2
      experience = 10
    }
  }
  navalunit =
  { id       = { type = 13016 id = 1061 }
    name     = "13. Kaigun"
    location = 1184
    base     = 1184
    division =
    { id            = { type = 13016 id = 1062 }
      name          = "IJN Kaga"
      type          = carrier
      model         = 2
      extra         = cag
      brigade_model = 2
      experience = 10
    }
  }
  navalunit =
  { id       = { type = 13016 id = 1063 }
    name     = "14. Kaigun"
    location = 1188
    base     = 1188
    division =
    { id    = { type = 10300 id = 21405 }
      name  = "IJN Ryuju"
      type  = escort_carrier
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 10300 id = 21404 }
      name  = "IJN Chitose"
      type  = escort_carrier
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 10300 id = 21403 }
      name  = "IJN Chiyoda"
      type  = escort_carrier
      model = 1
      experience = 10
    }
  }
  navalunit =
  { id       = { type = 13016 id = 1065 }
    name     = "15. Kaigun"
    location = 1187
    base     = 1187
    division =
    { id    = { type = 13016 id = 1066 }
      name  = "1 Kuchikukantai"
      type  = destroyer
      model = 0
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1067 }
      name  = "2 Kuchikukantai"
      type  = destroyer
      model = 0
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1068 }
      name  = "3 Kuchikukantai"
      type  = destroyer
      model = 0
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1069 }
      name  = "4 Kuchikukantai"
      type  = destroyer
      model = 0
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1070 }
      name  = "5 Kuchikukantai"
      type  = destroyer
      model = 0
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1071 }
      name  = "6 Kuchikukantai"
      type  = destroyer
      model = 0
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1072 }
      name  = "1 Yuso Sentai"
      type  = transport
      model = 0
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1073 }
      name  = "2 Yuso Sentai"
      type  = transport
      model = 0
       experience = 10
   }
    division =
    { id    = { type = 13016 id = 1074 }
      name  = "3 Yuso Sentai"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 13016 id = 1075 }
      name  = "4 Yuso Sentai"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 13016 id = 1076 }
      name  = "5 Yuso Sentai"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 13016 id = 1077 }
      name  = "6 Yuso Sentai"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 13016 id = 1078 }
    name     = "16. Kaigun"
    location = 1187
    base     = 1187
    division =
    { id    = { type = 13016 id = 1079 }
      name  = "7 Kuchikukantai"
      type  = destroyer
      model = 0
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1080 }
      name  = "8 Kuchikukantai"
      type  = destroyer
      model = 0
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1081 }
      name  = "9 Kuchikukantai"
      type  = destroyer
      model = 0
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1082 }
      name  = "10 Kuchikukantai"
      type  = destroyer
      model = 0
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1083 }
      name  = "11 Kuchikukantai"
      type  = destroyer
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1084 }
      name  = "12 Kuchikukantai"
      type  = destroyer
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1085 }
      name  = "13 Kuchikukantai"
      type  = destroyer
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1086 }
      name  = "14 Kuchikukantai"
      type  = destroyer
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1087 }
      name  = "7 Yuso Sentai"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 13016 id = 1088 }
      name  = "8 Yuso Sentai"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { name     = "18. Kaigun"
    id       = { type = 13016 id = 1089 }
    location = 1184
    base     = 1184
    division =
    { id    = { type = 13016 id = 1090 }
      name  = "15 Kuchikukantai"
      type  = destroyer
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1091 }
      name  = "16 Kuchikukantai"
      type  = destroyer
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1092 }
      name  = "17 Kuchikukantai"
      type  = destroyer
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1093 }
      name  = "8 Yuso Sentai"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 13016 id = 1094 }
      name  = "9 Yuso Sentai"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 13016 id = 1095 }
      name  = "10 Yuso Sentai"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 13016 id = 1096 }
      name  = "11 Yuso Sentai"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { name     = "19. Kaigun"
    id       = { type = 13016 id = 1097 }
    location = 1184
    base     = 1184
    division =
    { id    = { type = 13016 id = 1098 }
      name  = "18 Kuchikukantai"
      type  = destroyer
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1099 }
      name  = "19 Kuchikukantai"
      type  = destroyer
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1100 }
      name  = "20 Kuchikukantai"
      type  = destroyer
      model = 1
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1101 }
      name  = "12 Yuso Sentai"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 13016 id = 1102 }
      name  = "13 Yuso Sentai"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 13016 id = 1103 }
      name  = "14 Yuso Sentai"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 13016 id = 1104 }
      name  = "15 Yuso Sentai"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { name     = "20. Kaigun"
    id       = { type = 13016 id = 1105 }
    location = 1188
    base     = 1188
    division =
    { id    = { type = 13016 id = 1106 }
      name  = "16 Yuso Sentai"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 13016 id = 1107 }
      name  = "17 Yuso Sentai"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 13016 id = 1108 }
      name  = "18 Yuso Sentai"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 13016 id = 1109 }
      name  = "19 Yuso Sentai"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 13016 id = 1110 }
    name     = "21. Kaigun"
    location = 1184 # Yokosuka - Tokyo province
    base     = 1184
    division =
    { id    = { type = 13016 id = 1111 }
      name  = "1 Sensuikantai"
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 13016 id = 1112 }
      name  = "2 Sensuikantai"
      type  = submarine
      model = 0
    }
  }
  navalunit =
  { id       = { type = 13016 id = 1113 }
    name     = "22. Kaigun"
    location = 1188 # Sasebo - Fukuoka province
    base     = 1188
    division =
    { id    = { type = 13016 id = 1114 }
      name  = "5 Sensuikantai"
      type  = submarine
      model = 2
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1115 }
      name  = "6 Sensuikantai"
      type  = submarine
      model = 2
      experience = 10
    }
  }
  navalunit =
  { id       = { type = 13016 id = 1116 }
    name     = "23. Kaigun"
    location = 1190 # Kure - Hiroshima province
    base     = 1190
    division =
    { id    = { type = 13016 id = 1117 }
      name  = "7 Sensuikantai"
      type  = submarine
      model = 2
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1118 }
      name  = "8 Sensuikantai"
      type  = submarine
      model = 2
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1119 }
      name  = "9 Sensuikantai"
      type  = submarine
      model = 2
      experience = 10
    }
    division =
    { id    = { type = 13016 id = 1120 }
      name  = "10 Sensuikantai"
      type  = submarine
      model = 3
      experience = 10
    }
  }
################## Carriers by Dec152000

navaldivision = {
	dormant = yes
	id = { type = 13016 id = 1250 }
	name = "IJN Hiyo"
	type = carrier
	model = 0
	extra = cag
	brigade_model = 1
	experience = 15
	}
navaldivision = {
	dormant = yes
	id = { type = 13016 id = 1251 }
	name = "IJN Junyo"
	type = carrier
	model = 0
	extra = cag
	brigade_model = 1
	experience = 15
	}
navaldivision = {
	dormant = yes
	id = { type = 13016 id = 1252 }
	name = "IJN Shoho"
	type = carrier
	model = 0
	extra = cag
	brigade_model = 1
	experience = 15
	}
navaldivision = {
	dormant = yes
	id = { type = 13016 id = 1253 }
	name = "IJN Zuiho"
	type = carrier
	model = 0
	extra = cag
	brigade_model = 1
	experience = 15
	}
navaldivision = {
	dormant = yes
	id = { type = 13016 id = 1254 }
	name = "IJN Chitose"
	type = carrier
	model = 0
	extra = cag
	brigade_model = 1
	experience = 15
	}
navaldivision = {
	dormant = yes
	id = { type = 13016 id = 1255 }
	name = "IJN Chiyoda"
	type = carrier
	model = 0
	extra = cag
	brigade_model = 1
	experience = 15
	}
navaldivision = {
	dormant = yes
	id = { type = 13016 id = 1256 }
	name = "IJN Shinano"
	type = carrier
	model = 3
	strength = 65
	extra = cag
	brigade_model = 3
	experience = 15
	}
#############
  airunit =
  { location = 1184
    base     = 1184
    id       = { type = 13016 id = 1413 }
    name     = "1. Nihon Koukuujieitai"
    division =
    { id    = { type = 13016 id = 1412 }
      name  = "1 Keibakugekiki no Hikodan"
      type  = tactical_bomber
      model = 0
      experience = 15
    }
  }
  airunit =
  { location = 1184
    base     = 1184
    id       = { type = 13016 id = 1411 }
    name     = "2. Nihon Koukuujieitai"
    division =
    { id    = { type = 13016 id = 1410 }
      name  = "2 Keibakugekiki no Hikodan"
      type  = tactical_bomber
      model = 0
      experience = 15
    }
  }
  airunit =
  { location = 1202
    base     = 1202
    id       = { type = 13016 id = 1409 }
    name     = "1. Hikoutai"
    division =
    { id    = { type = 13016 id = 1408 }
      name  = "3 Keibakugekiki no Hikodan"
      type  = tactical_bomber
      model = 0
      experience = 15
    }
  }
  airunit =
  { location = 1202
    base     = 1202
    id       = { type = 13016 id = 1406 }
    name     = "3. Nihon Koukuujieitai"
    division =
    { id    = { type = 13016 id = 1407 }
      name  = "4 Keibakugekiki no Hikodan"
      type  = tactical_bomber
      model = 0
      experience = 15
    }
  }
  airunit =
  { location = 1202
    base     = 1202
    id       = { type = 13016 id = 1405 }
    name     = "2. Hikoutai"
    division =
    { id    = { type = 13016 id = 1404 }
      name  = "5 Keibakugekiki no Hikodan"
      type  = tactical_bomber
      model = 0
      experience = 15
    }
  }
  airunit =
  { location = 1184
    base     = 1184
    id       = { type = 13016 id = 1403 }
    name     = "4. Nihon Koukuujieitai"
    division =
    { id    = { type = 13016 id = 1402 }
      name  = "13 Kaigunkugekiki no Hikodan"
      type  = naval_bomber
      model = 5
      experience = 15
    }
  }
  airunit =
  { location = 1202
    base     = 1202
    id       = { type = 13016 id = 1400 }
    name     = "5. Nihon Koukuujieitai"
    division =
    { id    = { type = 13016 id = 1401 }
      name  = "33 Goraikugekiki no Hikodan"
      type  = naval_bomber
      model = 5
      experience = 15
    }
  }
  airunit =
  { id       = { type = 13016 id = 1414 }
    name     = "1 Zerosen no Hikodan"
    location = 1379
    base     = 1379
    division =
    { id       = { type = 13016 id = 1415 }
      name     = "1 Zerosen no Hikodan"
      strength = 85
      type     = interceptor
      model    = 0
      experience = 20
    }
  }
  airunit =
  { id       = { type = 13016 id = 1416 }
    name     = "2 Zerosen no Hikodan"
    location = 1379
    base     = 1379
    division =
    { id       = { type = 13016 id = 1417 }
      name     = "2 Zerosen no Hikodan"
      strength = 85
      type     = interceptor
      model    = 0
      experience = 20
    }
  }
  airunit =
  { id       = { type = 13016 id = 1418 }
    name     = "3 Zerosen no Hikodan"
    location = 1202
    base     = 1202
    division =
    { id       = { type = 13016 id = 1419 }
      name     = "3 Zerosen no Hikodan"
      strength = 85
      type     = interceptor
      model    = 0
      experience = 20
    }
  }
  airunit =
  { id       = { type = 13016 id = 1420 }
    name     = "4 Zerosen no Hikodan"
    location = 1184
    base     = 1184
    division =
    { id       = { type = 13016 id = 1421 }
      name     = "4 Zerosen no Hikodan"
      strength = 85
      type     = interceptor
      model    = 0
      experience = 20
    }
  }
#### Under division_development

division_development = {
	name = "IJN Soryu"
	type = carrier
	model = 1
	cost = 4.9
	id = { type = 13016 id = 1300 }
	date = { year = 1937 month = january day = 29 }
	}
brigade_development = {
	id = { type = 13016 id = 1301 }
	name = "IJN Soryu CAG"
	cost = 1
	date = { year = 1937 month = january day = 29 }
	type = cag
	model = 0
	}
division_development = {
	name = "IJN Hiryu"
	type = carrier
	model = 1
	cost = 1.9
	id = { type = 13016 id = 1302 }
	date = { year = 1939 month = july day = 5 }
	}
brigade_development = {
	id = { type = 13016 id = 1303 }
	name = "IJN Hiryu CAG"
	cost = 1
	date = { year = 1939 month = july day = 5 }
	type = cag
	model = 0
	}
division_development = {
	name = "21 Kuchikukantai"
	type = destroyer
	model = 2
	cost = 1.5
	id = { type = 13016 id = 1321 }
	date = { year = 1936 month = april day = 1 }
	}
division_development = {
	name = "IJN Kumano"
	type = heavy_cruiser
      model = 3
	id = { type = 18229 id = 1322 }
	cost = 1.2
	date = { year = 1936 month = october day = 15 }
	}
division_development = {
	name = "IJN Chikuma"
	type = heavy_cruiser
      model = 3
	id = { type = 18229 id = 1323 }
	cost = 1.2
	date = { year = 1938 month = march day = 19 }
	}
division_development = {
	name = "IJN Tone"
	type = heavy_cruiser
      model = 3
	id = { type = 18229 id = 1324}
	cost = 1.8
	date = { year = 1937 month = november day = 21 }
	}
}
