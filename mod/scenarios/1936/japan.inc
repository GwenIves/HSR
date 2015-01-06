
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
  supplypool = 500
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
  supplypool = 500
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
  manpower               = 735
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 2500
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
  SpyInfo                = { country = "JAP" NumberOfSpies = 9 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 6 }
  #SpyInfo                = { country = "FRA" NumberOfSpies = 6 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 8 }
  #SpyInfo                = { country = "USA" NumberOfSpies = 8 }
  #SpyInfo                = { country = "SIK" NumberOfSpies = 3 }
  #SpyInfo                = { country = "TAN" NumberOfSpies = 3 }
  #SpyInfo                = { country = "GER" NumberOfSpies = 6 }
  #SpyInfo                = { country = "CXB" NumberOfSpies = 6 }
  #SpyInfo                = { country = "CYN" NumberOfSpies = 6 }
  #SpyInfo                = { country = "LUX" NumberOfSpies = 3 }
  #SpyInfo                = { country = "POR" NumberOfSpies = 3 }
  #SpyInfo                = { country = "ITA" NumberOfSpies = 6 }
  #SpyInfo                = { country = "CHI" NumberOfSpies = 9 }
  #SpyInfo                = { country = "CGX" NumberOfSpies = 3 }
  #SpyInfo                = { country = "PHI" NumberOfSpies = 6 }
  #SpyInfo                = { country = "NZL" NumberOfSpies = 3 }
  #SpyInfo                = { country = "AST" NumberOfSpies = 6 }
  #SpyInfo                = { country = "HOL" NumberOfSpies = 3 }
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
			     3420  3430  4010  4020  4120  4130  4190  5010  5080  5090  5190  5310  5320  5350  5470  6010  6030  6110  6120  8010
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
	### Japan Land OOB ###
  landunit =
  { id       = { type = 13016 id = 1 }
    name     = "Manchukuo Hakengun"
    location = 1379
    division =
    { id       = { type = 13016 id = 2 }
      name     = "Manchukuo Hakengun shireibu"
      strength = 100
      type     = hq
      model    = 0
    }
    division =
    { id       = { type = 13016 id = 3 }
      name     = "Dai 36 Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 13016 id = 4 }
      name     = "Dai 37 Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
    }
  }
  landunit =
  { id       = { type = 13016 id = 5 }
    name     = "Dai 13 Hômengun"
    location = 1397
    division =
    { id       = { type = 13016 id = 6 }
      name     = "Dai 15 Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 13016 id = 7 }
      name     = "Dai 17 Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
    }
  }
  landunit =
  { id       = { type = 13016 id = 8 }
    name     = "Moukogo Gun" # Mongol Army Changchiakou, China
    location = 1398
    division =
    { id       = { type = 13016 id = 9 }
      name     = "Dai 26 Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = anti_air
    }
    division =
    { id       = { type = 13016 id = 10 }
      name     = "Dai 2 Dokuritsu konsei ryodan" # Independent Mixed Brigade
      strength = 50
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 13016 id = 11 }
      name     = "Dai 1 Moukogo Kiheishidan"
      strength = 100
      type     = cavalry
      model    = 0
    }
    division =
    { id       = { type = 13016 id = 12 }
      name     = "Dai 2 Moukogo Kiheishidan"
      strength = 100
      type     = cavalry
      model    = 0
    }
    division =
    { id       = { type = 13016 id = 13 }
      name     = "Dai 3 Moukogo Kiheishidan"
      strength = 100
      type     = cavalry
      model    = 0
    }
    division =
    { id       = { type = 13016 id = 14 }
      name     = "Dai 4 Moukogo Kiheishidan"
      strength = 100
      type     = cavalry
      model    = 0
    }
    division =
    { id       = { type = 13016 id = 15 }
      name     = "Dai 5 Moukogo Kiheishidan"
      strength = 100
      type     = cavalry
      model    = 0
    }
  }
  landunit =
  { id       = { type = 13016 id = 16 }
    name     = "Kantôgun" # Kwantung Theater Army, General Army lvl Changchung, Manchuria
    location = 1203
    division =
    { id       = { type = 13016 id = 17 }
      name     = "Kantôgun saikô shireibu" # Kwantung Theater Army HQ
      strength = 100
      type     = hq
      model    = 0
    }
    division =
    { id       = { type = 13016 id = 18 }
      name     = "Dai 10 Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = anti_air
    }
    division =
    { id       = { type = 13016 id = 19 }
      name     = "Dai 28 Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = anti_air
    }
    division =
    { id       = { type = 13016 id = 20 }
      name     = "Kantô Bôbitai" # Kwantung Defence Command
      strength = 100
      type     = garrison
      model    = 0
      extra    = police
    }
  }
  landunit =
  { id       = { type = 13016 id = 21 }
    name     = "Dai 3 Gun" # Botanko, Manchuko
    location = 1530
    division =
    { id       = { type = 13016 id = 22 }
      name     = "Dai 9 Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
    }
    division =
    { id       = { type = 13016 id = 23 }
      name     = "Dai 12 Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
    }
  }
  landunit =
  { id       = { type = 13016 id = 24 }
    name     = "Dai 4 Gun" # Songo, Manchuko
    location = 1381
    division =
    { id       = { type = 13016 id = 25 }
      name     = "Dai 1 Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
    }
    division =
    { id       = { type = 13016 id = 26 }
      name     = "Dai 2 Dokuritsu shubitai" # Border Guards
      strength = 100
      type     = garrison
      model    = 0
      extra    = anti_air
    }
    division =
    { id       = { type = 13016 id = 27 }
      name     = "Dai 3 Dokuritsu shubitai"
      strength = 100
      type     = garrison
      model    = 0
    }
  }
  landunit =
  { id       = { type = 13016 id = 28 }
    name     = "Dai 5 gun" # Toan, Manchuko
    location = 1374
    division =
    { id       = { type = 13016 id = 29 }
      name     = "Dai 4 Dokuritsu shubitai"
      strength = 100
      type     = garrison
      model    = 0
      extra    = anti_air
    }
    division =
    { id       = { type = 13016 id = 30 }
      name     = "Dai 5 Dokuritsu shubitai"
      strength = 100
      type     = garrison
      model    = 0
      extra    = anti_air
    }
    division =
    { id       = { type = 13016 id = 31 }
      name     = "Dai 3 Manchuko Kiheishidan"
      strength = 50
      type     = cavalry
      model    = 0
    }
  }
  landunit =
  { id       = { type = 13016 id = 32 }
    name     = "Dai 6 Gun" # Hailar, Manchuko
    location = 1378
    division =
    { id       = { type = 13016 id = 33 }
      name     = "Dai 14 Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = anti_tank
    }
    division =
    { id       = { type = 13016 id = 34 }
      name     = "Dai 23 Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = police
    }
  }
  landunit =
  { id       = { type = 13016 id = 35 }
    name     = "Dai 20 Gun" # Keinei, Manchuko
    location = 1375
    division =
    { id       = { type = 13016 id = 36 }
      name     = "Dai 8 Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
    }
    division =
    { id       = { type = 13016 id = 37 }
      name     = "Dai 25 Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
    }
    division =
    { id       = { type = 13016 id = 38 }
      name     = "Dai 5 Dokuritsu shubitai"
      strength = 100
      type     = garrison
      model    = 0
      extra    = anti_tank
    }
  }
  landunit =
  { id       = { type = 13016 id = 39 }
    name     = "Dai 14 Hômengun" # Taiwan
    location = 1323
    division =
    { id       = { type = 13016 id = 40 }
      name     = "Dai 16 Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = engineer
    }
    division =
    { id       = { type = 13016 id = 41 }
      name     = "Dai 48 Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
    }
  }
  landunit =
  { id       = { type = 13016 id = 42 }
    name     = "Dai 15 Hômengun" # Tokyo
    location = 1184
    division =
    { id       = { type = 13016 id = 43 }
      name     = "Dai 2 Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = engineer
    }
    division =
    { id       = { type = 13016 id = 44 }
      name     = "Dai 56 hoheiryodan"
      strength = 50
      type     = infantry
      model    = 0
      extra    = anti_air
    }
    division =
    { id       = { type = 13016 id = 45 }
      name     = "Konoe Shidan" # Imperial Guards
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
    }
  }
  # Imperial General Headquarters
  landunit =
  { id       = { type = 13016 id = 46 }
    name     = "Daihon'ei" # Imperial General HQ Tokyo
    location = 1184
    division =
    { id       = { type = 13016 id = 47 }
      name     = "Daihon'ei" # Imperial General HQ
      strength = 100
      type     = hq
      model    = 0
    }
    division =
    { id       = { type = 13016 id = 48 }
      name     = "Dai 4 Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
    }
  }
  landunit =
  { id       = { type = 13016 id = 49 }
    name     = "Kita Hômengun" # North Japan Army
    location = 1181
    division =
    { id       = { type = 13016 id = 50 }
      name     = "Dai 7 Shubitai"
      strength = 100
      type     = garrison
      model    = 0
    }
    division =
    { id       = { type = 13016 id = 51 }
      name     = "Dai 57 Shubitai"
      strength = 100
      type     = garrison
      model    = 0
    }
  }
  landunit =
  { id       = { type = 13016 id = 52 }
    name     = "Chûô Hômengun" # Central Japan Army
    location = 1185
    division =
    { id       = { type = 13016 id = 53 }
      name     = "Dai 53 Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = anti_air
    }
  }
  landunit =
  { id       = { type = 13016 id = 54 }
    name     = "Roppou Hômengun" #West Japan Army
    location = 1187
    division =
    { id       = { type = 13016 id = 55 }
      name     = "Dai 8 Shubitai"
      strength = 100
      type     = garrison
      model    = 0
      extra    = anti_air
    }
    division =
    { id       = { type = 13016 id = 56 }
      name     = "Dai 14 Shubitai"
      strength = 100
      type     = garrison
      model    = 0
      extra    = anti_air
    }
  }
  landunit =
  { id       = { type = 13016 id = 57 }
    name     = "Tôbu Hômengun" # East Japan Army
    location = 1190
    division =
    { id       = { type = 13016 id = 58 }
      name     = "Dai 52 Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = anti_air
    }
  }
  landunit =
  { id       = { type = 13016 id = 59 }
    name     = "Chôsengun" # Korean Army
    location = 1376
    division =
    { id       = { type = 13016 id = 60 }
      name     = "Dai 19 Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = anti_air
    }
    division =
    { id       = { type = 13016 id = 70 }
      name     = "Dai 20 Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
    }
  }
  landunit =
  { id       = { type = 13016 id = 71 }
    name     = "Nanpô Chôsengun" # South Korean Army
    location = 1199
    division =
    { id       = { type = 13016 id = 72 }
      name     = "Dai 1 Chôsen Shubitai" # Korean Garrison
      strength = 100
      type     = garrison
      model    = 0
    }
    division =
    { id       = { type = 13016 id = 73 }
      name     = "Dai 2 Chôsen Shubitai"
      strength = 100
      type     = garrison
      model    = 0
    }
  }
  # Pacific garrisons:
  landunit =
  { id       = { type = 13016 id = 74 }
    name     = "Saishu Chuton Gun"
    location = 1177
    division =
    { id       = { type = 13016 id = 75 }
      name     = "Saishu Shubitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 76 }
    name     = "Naha Chuton Gun"
    location = 1193
    division =
    { id       = { type = 13016 id = 77 }
      name     = "Naha Shubitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 78 }
    name     = "Toyohara Chuton Gun"
    location = 1176
    division =
    { id       = { type = 13016 id = 79 }
      name     = "Toyohara Shubitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 80 }
    name     = "Tomari Konkyochi tai"
    location = 1604
    division =
    { id       = { type = 13016 id = 81 }
      name     = "Tomari Keibitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 82 }
    name     = "Shana Chuton Gun"
    location = 1177
    division =
    { id       = { type = 13016 id = 83 }
      name     = "Shana Shubitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 84 }
    name     = "Mariane Konkyochi tai"
    location = 1603
    division =
    { id       = { type = 13016 id = 85 }
      name     = "Mariane Keibitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 86 }
    name     = "Palau Konkyochi tai"
    location = 1621
    division =
    { id       = { type = 13016 id = 87 }
      name     = "Palau Keibitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 88 }
    name     = "Eniwetok Konkyochi tai"
    location = 1601
    division =
    { id       = { type = 13016 id = 89 }
      name     = "Eniwetok Keibitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 90 }
    name     = "Bikini Konkyochi tai"
    location = 1600
    division =
    { id       = { type = 13016 id = 91 }
      name     = "Bikini Keibitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 92 }
    name     = "Kwajalein Konkyochi tai"
    location = 1608
    division =
    { id       = { type = 13016 id = 93 }
      name     = "Kwajalein Keibitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 94 }
    name     = "Saipan Konkyochi tai"
    location = 1627
    division =
    { id       = { type = 13016 id = 95 }
      name     = "Saipan Keibitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 96 }
    name     = "Shumushushima Konkyochi tai"
    location = 1174
    division =
    { id       = { type = 13016 id = 97 }
      name     = "Shumushushima Keibitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 98 }
    name     = "Bonin Konkyochi tai"
    location = 1599
    division =
    { id       = { type = 13016 id = 99 }
      name     = "Bonin Keibitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 100 }
    name     = "Marcus Konkyochi tai"
    location = 1785
    division =
    { id       = { type = 13016 id = 101 }
      name     = "Marcus Keibitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 102 }
    name     = "Ulithi Konkyochi tai"
    location = 1618
    division =
    { id       = { type = 13016 id = 103 }
      name     = "Ulithi Keibitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 104 }
    name     = "Truk Konkyochi tai"
    location = 1613
    division =
    { id       = { type = 13016 id = 105 }
      name     = "Truk Keibitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 106 }
    name     = "Ponape Konkyochi tai"
    location = 1610
    division =
    { id       = { type = 13016 id = 107 }
      name     = "Ponape Keibitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 108 }
    name     = "Marshall Konkyochi tai"
    location = 1605
    division =
    { id       = { type = 13016 id = 109 }
      name     = "Marshall Keibitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 13016 id = 110 }
    name     = "Yap Konkyochi tai"
    location = 1619
    division =
    { id       = { type = 13016 id = 111 }
      name     = "Yap Keibitai"
      strength = 100
      type     = garrison
    }
  }
	### Japan Navy OOB ###
  navalunit =
  { id       = { type = 13016 id = 112 }
    name     = "Nihon Kantai" #
    location = 1184
    base     = 1184
    division =
    { id    = { type = 13016 id = 113 }
      name  = "IJN Kongo"
      type  = battlecruiser
      model = 1
    }
    division =
    { id    = { type = 13016 id = 114 }
      name  = "IJN Hiei"
      type  = battlecruiser
      model = 1
    }
    division =
    { id    = { type = 13016 id = 115 }
      name  = "IJN Haruna"
      type  = battlecruiser
      model = 1
    }
  }
  navalunit =
  { id       = { type = 13016 id = 116 }
    name     = "Dai 1 Kantai"
    location = 1184
    base     = 1184
    division =
    { id    = { type = 13016 id = 117 }
      name  = "IJN Kirishima"
      type  = battlecruiser
      model = 1
    }
    division =
    { id    = { type = 13016 id = 118 }
      name  = "IJN Fuso"
      type  = battleship
      model = 1
    }
    division =
    { id    = { type = 13016 id = 119 }
      name  = "IJN Yamashiro"
      type  = battleship
      model = 1
    }
  }
  navalunit =
  { id       = { type = 13016 id = 120 }
    name     = "Dai 2 Kantai"
    location = 1188
    base     = 1188
    division =
    { id    = { type = 13016 id = 121 }
      name  = "IJN Ise"
      type  = battleship
      model = 1
    }
    division =
    { id    = { type = 13016 id = 122 }
      name  = "IJN Hyuga"
      type  = battleship
      model = 1
    }
    division =
    { id    = { type = 13016 id = 123 }
      name  = "IJN Nagato"
      type  = battleship
      model = 2
    }
  }
  navalunit =
  { id       = { type = 13016 id = 124 }
    name     = "Dai 3 Kantai"
    location = 1189
    base     = 1189
    division =
    { id    = { type = 13016 id = 125 }
      name  = "IJN Mutsu"
      type  = battleship
      model = 2
    }
  }
  navalunit =
  { id       = { type = 13016 id = 126 }
    name     = "Dai 4 Kantai"
    location = 1184
    base     = 1184
    division =
    { id    = { type = 13016 id = 127 }
      name  = "IJN Tatsuta"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 13016 id = 128 }
      name  = "IJN Hirado"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 13016 id = 129 }
      name  = "IJN Yahagi"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 13016 id = 130 }
      name  = "IJN Kuma"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 13016 id = 131 }
      name  = "IJN Tama"
      type  = light_cruiser
      model = 1
    }
  }
  navalunit =
  { id       = { type = 13016 id = 132 }
    name     = "Dai 5 Kantai"
    location = 1188
    base     = 1188
    division =
    { id    = { type = 13016 id = 133 }
      name  = "IJN Furutaka"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 13016 id = 134 }
      name  = "IJN Kitikama"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 13016 id = 135 }
      name  = "IJN Kiso"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 13016 id = 136 }
      name  = "IJN Oi"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 13016 id = 137 }
      name  = "IJN Nagara"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 13016 id = 138 }
      name  = "IJN Izumo"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 13016 id = 139 }
      name  = "IJN Tenryu"
      type  = light_cruiser
      model = 0
    }
  }
  navalunit =
  { id       = { type = 13016 id = 140 }
    name     = "Dai 6 Kantai"
    location = 1184
    base     = 1184
    division =
    { id    = { type = 13016 id = 145 }
      name  = "IJN Natori"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 13016 id = 146 }
      name  = "IJN Kinu"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 13016 id = 147 }
      name  = "IJN Yuru"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 13016 id = 148 }
      name  = "IJN Asama"
      type  = heavy_cruiser
      model = 0
    }
  }
  navalunit =
  { id       = { type = 13016 id = 149 }
    name     = "Dai 7 Kantai"
    location = 1189
    base     = 1189
    division =
    { id    = { type = 13016 id = 150 }
      name  = "IJN Yubari"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 13016 id = 151 }
      name  = "IJN Isuzu"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 13016 id = 152 }
      name  = "IJN Sendai"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 13016 id = 153 }
      name  = "IJN Abukuma"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 13016 id = 154 }
      name  = "IJN Jintsu"
      type  = light_cruiser
      model = 1
    }
  }
  navalunit =
  { id       = { type = 13016 id = 155 }
    name     = "Dai 8 Kantai"
    location = 1184
    base     = 1184
    division =
    { id    = { type = 13016 id = 156 }
      name  = "IJN Kako"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 13016 id = 157 }
      name  = "IJN Aoba"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 13016 id = 158 }
      name  = "IJN Kinugasa"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 13016 id = 159 }
      name  = "IJN Nachi"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 13016 id = 160 }
      name  = "IJN Haguro"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 13016 id = 161 }
      name  = "IJN Naka"
      type  = light_cruiser
      model = 1
    }
  }
  navalunit =
  { id       = { type = 13016 id = 162 }
    name     = "Dai 9 Kantai"
    location = 1184
    base     = 1184
    division =
    { id    = { type = 13016 id = 163 }
      name  = "IJN Myoko"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 13016 id = 164 }
      name  = "IJN Ashigara"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 13016 id = 165 }
      name  = "IJN Atago"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 13016 id = 166 }
      name  = "IJN Takao"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 13016 id = 167 }
      name  = "IJN Chokai"
      type  = heavy_cruiser
      model = 2
    }
  }
  navalunit =
  { id       = { type = 13016 id = 168 }
    name     = "Dai 10 Kantai"
    location = 1189
    base     = 1189
    division =
    { id    = { type = 13016 id = 169 }
      name  = "IJN Maya"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 13016 id = 170 }
      name  = "IJN Mikuma"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 13016 id = 171 }
      name  = "IJN Mogami"
      type  = light_cruiser
      model = 3
    }
  }
  navalunit =
  { id       = { type = 13016 id = 172 }
    name     = "Dai 11 Kantai"
    location = 1184
    base     = 1184
    division =
    { id            = { type = 13016 id = 173 }
      name          = "IJN Hosho"
      type          = escort_carrier
      model         = 0
    }
  }
  navalunit =
  { id       = { type = 13016 id = 174 }
    name     = "Dai 12 Kantai"
    location = 1184
    base     = 1184
    division =
    { id            = { type = 13016 id = 175 }
      name          = "IJN Akagi"
      type          = carrier
      model         = 1
      extra         = cag
      brigade_model = 2
    }
  }
  navalunit =
  { id       = { type = 13016 id = 176 }
    name     = "Dai 13 Kantai"
    location = 1184
    base     = 1184
    division =
    { id            = { type = 13016 id = 177 }
      name          = "IJN Kaga"
      type          = carrier
      model         = 1
      extra         = cag
      brigade_model = 2
    }
  }
  navalunit =
  { id       = { type = 13016 id = 178 }
    name     = "Dai 14 Kantai"
    location = 1188
    base     = 1188
    division =
    { id    = { type = 13016 id = 179 }
      name  = "IJN Ryujo"
      type  = escort_carrier
      model = 1
    }
  }
  navalunit =
  { id       = { type = 13016 id = 180 }
    name     = "Dai 15 Kantai"
    location = 1187
    base     = 1187
    division =
    { id    = { type = 13016 id = 181 }
      name  = "Dai 1 Kuchikusentai"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 13016 id = 182 }
      name  = "Dai 2 Kuchikusentai"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 13016 id = 183 }
      name  = "Dai 3 Kuchikusentai"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 13016 id = 184 }
      name  = "Dai 4 Kuchikusentai"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 13016 id = 185 }
      name  = "Dai 5 Kuchikusentai"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 13016 id = 186 }
      name  = "Dai 6 Kuchikusentai"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 13016 id = 187 }
      name  = "Dai 1 Yuso Sentai"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 13016 id = 188 }
      name  = "Dai 2 Yuso Sentai"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 13016 id = 189 }
      name  = "Dai 3 Yuso Sentai"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 13016 id = 190 }
      name  = "Dai 4 Yuso Sentai"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 13016 id = 191 }
      name  = "Dai 5 Yuso Sentai"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 13016 id = 192 }
      name  = "Dai 6 Yuso Sentai"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 13016 id = 193 }
    name     = "Dai 16 Kantai"
    location = 1187
    base     = 1187
    division =
    { id    = { type = 13016 id = 194 }
      name  = "Dai 7 Kuchikusentai"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 13016 id = 195 }
      name  = "Dai 8 Kuchikusentai"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 13016 id = 196 }
      name  = "Dai 9 Kuchikusentai"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 13016 id = 197 }
      name  = "Dai 10 Kuchikusentai"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 13016 id = 198 }
      name  = "Dai 11 Kuchikusentai"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 13016 id = 199 }
      name  = "Dai 12 Kuchikusentai"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 13016 id = 200 }
      name  = "Dai 13 Kuchikusentai"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 13016 id = 201 }
      name  = "Dai 14 Kuchikusentai"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 13016 id = 202 }
      name  = "Dai 7 Yuso Sentai"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 13016 id = 203 }
      name  = "Dai 8 Yuso Sentai"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { name     = "Dai 18 Kantai"
    id       = { type = 13016 id = 204 }
    location = 1184
    base     = 1184
    division =
    { id    = { type = 13016 id = 205 }
      name  = "Dai 15 Kuchikusentai"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 13016 id = 206 }
      name  = "Dai 16 Kuchikusentai"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 13016 id = 207 }
      name  = "Dai 17 Kuchikusentai"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 13016 id = 208 }
      name  = "Dai 8 Yuso Sentai"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 13016 id = 209 }
      name  = "Dai 9 Yuso Sentai"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 13016 id = 210 }
      name  = "Dai 10 Yuso Sentai"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 13016 id = 211 }
      name  = "Dai 11 Yuso Sentai"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { name     = "Dai 19 Kantai"
    id       = { type = 13016 id = 212 }
    location = 1184
    base     = 1184
    division =
    { id    = { type = 13016 id = 213 }
      name  = "Dai 18 Kuchikusentai"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 13016 id = 214 }
      name  = "Dai 19 Kuchikusentai"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 13016 id = 215 }
      name  = "Dai 20 Kuchikusentai"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 13016 id = 216 }
      name  = "Dai 12 Yuso Sentai"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 13016 id = 217 }
      name  = "Dai 13 Yuso Sentai"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 13016 id = 218 }
      name  = "Dai 14 Yuso Sentai"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 13016 id = 219 }
      name  = "Dai 15 Yuso Sentai"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { name     = "Dai 20 Kantai"
    id       = { type = 13016 id = 220 }
    location = 1188
    base     = 1188
    division =
    { id    = { type = 13016 id = 221 }
      name  = "Dai 16 Yuso Sentai"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 13016 id = 222 }
      name  = "Dai 17 Yuso Sentai"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 13016 id = 223 }
      name  = "Dai 18 Yuso Sentai"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 13016 id = 224 }
      name  = "Dai 19 Yuso Sentai"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 13016 id = 225 }
    name     = "Dai 21 Kantai"
    location = 1184 # Yokosuka - Tokyo province
    base     = 1184
    division =
    { id    = { type = 13016 id = 226 }
      name  = "Dai 1 Sensuisentai"
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 13016 id = 227 }
      name  = "Dai 2 Sensuisentai"
      type  = submarine
      model = 0
    }
  }
  navalunit =
  { id       = { type = 13016 id = 228 }
    name     = "Dai 22 Kantai"
    location = 1188 # Sasebo - Fukuoka province
    base     = 1188
    division =
    { id    = { type = 13016 id = 229 }
      name  = "Dai 5 Sensuisentai"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 13016 id = 230 }
      name  = "Dai 6 Sensuisentai"
      type  = submarine
      model = 2
    }
  }
  navalunit =
  { id       = { type = 13016 id = 231 }
    name     = "Dai 23 Kantai"
    location = 1190 # Kure - Hiroshima province
    base     = 1190
    division =
    { id    = { type = 13016 id = 232 }
      name  = "Dai 7 Sensuisentai"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 13016 id = 233 }
      name  = "Dai 8 Sensuisentai"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 13016 id = 234 }
      name  = "Dai 9 Sensuisentai"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 13016 id = 235 }
      name  = "Dai 10 Sensuisentai"
      type  = submarine
      model = 3
    }
  }
	### Japan Air OOB ###
  airunit =
  { location = 1184
    base     = 1184
    id       = { type = 13016 id = 236 }
    name     = "Dai 1 Nihon Kokutai"
    division =
    { id    = { type = 13016 id = 237 }
      name  = "Dai 1 Keibakugeki Hikodan"
      type  = tactical_bomber
      model = 0
    }
  }
  airunit =
  { location = 1184
    base     = 1184
    id       = { type = 13016 id = 238 }
    name     = "Dai 2 Nihon Kokutai"
    division =
    { id    = { type = 13016 id = 239 }
      name  = "Dai 2 Keibakugeki Hikodan"
      type  = tactical_bomber
      model = 0
    }
  }
  airunit =
  { location = 1202
    base     = 1202
    id       = { type = 13016 id = 240 }
    name     = "Dai 1 Kokutai"
    division =
    { id    = { type = 13016 id = 241 }
      name  = "Dai 3 Keibakugeki Hikodan"
      type  = tactical_bomber
      model = 0
    }
  }
  airunit =
  { location = 1202
    base     = 1202
    id       = { type = 13016 id = 242 }
    name     = "Dai 3 Nihon Kokutai"
    division =
    { id    = { type = 13016 id = 243 }
      name  = "Dai 4 Keibakugeki Hikodan"
      type  = tactical_bomber
      model = 0
    }
  }
  airunit =
  { location = 1202
    base     = 1202
    id       = { type = 13016 id = 244 }
    name     = "Dai 2 Kokutai"
    division =
    { id    = { type = 13016 id = 245 }
      name  = "Dai 5 Keibakugeki Hikodan"
      type  = tactical_bomber
      model = 0
    }
  }
  airunit =
  { location = 1184
    base     = 1184
    id       = { type = 13016 id = 246 }
    name     = "Dai 4 Nihon Kokutai"
    division =
    { id    = { type = 13016 id = 247 }
      name  = "Dai 13 Kaigunkogeki Hikodan"
      type  = naval_bomber
      model = 0
    }
  }
  airunit =
  { location = 1202
    base     = 1202
    id       = { type = 13016 id = 248 }
    name     = "Dai 5 Nihon Kokutai"
    division =
    { id    = { type = 13016 id = 249 }
      name  = "Dai 33 Goraikogeki Hikodan"
      type  = naval_bomber
      model = 0
    }
  }
  airunit =
  { id       = { type = 13016 id = 250 }
    name     = "Dai 1 Kyokutsi Hikodan"
    location = 1379
    base     = 1379
    division =
    { id       = { type = 13016 id = 251 }
      name     = "Dai 1 Kyokutsi Hikodan"
      strength = 85
      type     = interceptor
      model    = 0
    }
  }
  airunit =
  { id       = { type = 13016 id = 252 }
    name     = "Dai 2 Kyokutsi Hikodan"
    location = 1379
    base     = 1379
    division =
    { id       = { type = 13016 id = 253 }
      name     = "Dai 2 Kyokutsi Hikodan"
      strength = 85
      type     = interceptor
      model    = 0
    }
  }
  airunit =
  { id       = { type = 13016 id = 254 }
    name     = "Dai 3 Kyokutsi Hikodan"
    location = 1202
    base     = 1202
    division =
    { id       = { type = 13016 id = 255 }
      name     = "Dai 3 Kyokutsi Hikodan"
      strength = 85
      type     = interceptor
      model    = 0
    }
  }
  airunit =
  { id       = { type = 13016 id = 256 }
    name     = "Dai 4 Kyokutsi Hikodan"
    location = 1184
    base     = 1184
    division =
    { id       = { type = 13016 id = 257 }
      name     = "Dai 4 Kyokutsi Hikodan"
      strength = 85
      type     = interceptor
      model    = 0
    }
  }
  # ### Under division_development ###
  division_development =
  { name  = "Dai 21 Kuchikusentai"
    type  = destroyer
    model = 1
    cost  = 1.5
    id    = { type = 13016 id = 258 }
    date  = { year = 1936 month = april day = 1 }
  }
  division_development =
  { name  = "IJN Soryu"
    type  = carrier
    model = 2
    cost  = 1.5
    id    = { type = 13016 id = 259 }
    date  = { year = 1936 month = december day = 20 }
    extra         = cag
    brigade_model = 2
  }
}
