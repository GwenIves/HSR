
###############################
# Country definition for JAP #
##############################

province = { id = 1179 ic = 2 } # Sapporo
province = { id = 1180 ic = 3 } # Sendai
province =
{ id         = 1181
  anti_air   = 2
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Akita
province = { id = 1182 anti_air = 2 } # Fukushima
province =
{ id         = 1184
  ic         = 9
  anti_air   = 2
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Tokyo
province =
{ id         = 1185
  ic         = 5
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
  ic         = 6
  anti_air   = 2
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Osaka
province =
{ id         = 1188
  ic         = 5
  anti_air   = 4
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Hiroshima
province = { id = 1189 ic = 7 } # Shikoku
province =
{ id         = 1190
  ic         = 4
  anti_air   = 2
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Fukuoka
province =
{ id         = 1193
  supplypool = 1000
  anti_air   = 2
  air_base   = { size = 6 current_size = 6 }
  naval_base = { size = 6 current_size = 6 }
}              # Okinawa
province =
{ id         = 1196
  supplypool = 5000
  oilpool    = 100
  anti_air   = 2
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Busan
province = { id = 1200 ic = 1 } # Wonsan
province =
{ id         = 1202
  supplypool = 500
  oilpool    = 100
  anti_air   = 3
  air_base   = { size = 7 current_size = 7 }
  naval_base = { size = 5 current_size = 5 }
}              # Dalian
province = { id = 1203 supplypool = 1000 oilpool = 100 } # Tangshan
province = { id = 1216 ic = -2 } # Jinan (-Ic from move industry event 4106)
province = { id = 1225 ic = -3 } # Taiyuan (-Ic from move industry event 4106)
province = { id = 1235 ic = -8 } # Nanjing (-Ic from move industry event 4107)
province = { id = 1238 ic = -3 } # Hangzhou(-Ic from move industry event 4107)
province =
{ id         = 1313
  ic = -6
  air_base   = { size = 3 current_size = 3 }
  naval_base = { size = 5 current_size = 5 }
}              # Guangzhou
province =
{ id         = 1322
  supplypool = 1000
  oilpool    = 100
  anti_air   = 2
  air_base   = { size = 8 current_size = 8 }
  naval_base = { size = 10 current_size = 10 }
}              # Kaohsiung
province = { id = 1323 anti_air = 2 } # Taipei
province =
{ id         = 1328
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}              # Hanoi
province =
{ id         = 1337
  supplypool = 100
  oilpool    = 1
  anti_air   = 2
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Saigon
province =
{ id       = 1391
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            # Hyesan
province = { id = 1599 supplypool = 500 } # Iwo Jima
province =
{ id         = 1601
  supplypool = 500
  anti_air   = 5
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 2 current_size = 2 }
}              # Eniwetok
province = { id = 1605 anti_air = 3 } # Majuro
province =
{ id         = 1608
  supplypool = 2000
  anti_air   = 5
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 2 current_size = 2 }
}              # Kwajalein
province = { id = 1610 supplypool = 500 } # Ponape
province =
{ id         = 1613
  supplypool = 500
  anti_air   = 5
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Truk
province = { id = 1618 supplypool = 500 } # Ulithi
province = { id = 1619 supplypool = 500 anti_air = 3 } # Yap
province = { id = 1621 supplypool = 500 } # Palau
province = { id = 1625 supplypool = 500 } # Rota
province = { id = 1626 supplypool = 500 } # Tinian
province = { id = 1627 supplypool = 500 anti_air = 3 } # Saipan
province = { id = 1784 anti_air = 2 } # Bonin Islands
province = { id = 1785 supplypool = 500 } # Marcus Island

#####################
# Country main data #
#####################

country =
{ tag                    = JAP
  belligerence           = 40
  capital                = 1184
  manpower               = 735
  # Resource Reserves
  energy                 = 10000
  metal                  = 10000
  rare_materials         = 5000
  oil                    = 15000
  supplies               = 5000
  money                  = 120
  transports             = 1100
  escorts                = 11
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 6
    defense_lobby     = 8
    interventionism   = 10
  }
  SpyInfo                = { country = "JAP" NumberOfSpies = 13 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 5 }
  #SpyInfo                = { country = "FRA" NumberOfSpies = 5 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 6 }
  #SpyInfo                = { country = "USA" NumberOfSpies = 10 }
  #SpyInfo                = { country = "SIK" NumberOfSpies = 5 }
  #SpyInfo                = { country = "TAN" NumberOfSpies = 5 }
  #SpyInfo                = { country = "GER" NumberOfSpies = 5 }
  #SpyInfo                = { country = "CXB" NumberOfSpies = 5 }
  #SpyInfo                = { country = "CYN" NumberOfSpies = 5 }
  #SpyInfo                = { country = "POR" NumberOfSpies = 5 }
  #SpyInfo                = { country = "ITA" NumberOfSpies = 5 }
  #SpyInfo                = { country = "CHI" NumberOfSpies = 10 }
  #SpyInfo                = { country = "CGX" NumberOfSpies = 5 }
  #SpyInfo                = { country = "PHI" NumberOfSpies = 5 }
  #SpyInfo                = { country = "NZL" NumberOfSpies = 5 }
  #SpyInfo                = { country = "AST" NumberOfSpies = 5 }
  # Taiwan
  nationalprovinces      = { 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1784 1599 1192 1193 1785 1174 1176 1175 1194
			     1195 1196 1197 1198 1199 1393 1391 1376 1392 1200 1201 1624
			   }
  ownedprovinces         = { 1203 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1784 1599 1192 1193 1785 1627 1626 1625
			     1619 1621 1620 1604 1618 1617 1616 1615 1613 1612 1610 1609 1600 1601 1602 1603 1605 1606 1607 1608 1323 1322 1324 1376
			     1391 1392 1200 1201 1199 1198 1197 1196 1195 1194 1393 1202 1338 1337 1335 1336 1334 1333 1332 1329 1328 1306 1326 1176
			     1174
			   }
  controlledprovinces    = { 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1784 1599 1192 1193 1785 1219 1627 1626 1625
			     1619 1621 1620 1604 1618 1617 1616 1615 1613 1612 1610 1609 1600 1601 1602 1603 1605 1606 1607 1608 1376 1391 1392 1393
			     1200 1201 1199 1198 1197 1196 1195 1194 1338 1337 1335 1336 1334 1333 1332 1329 1328 1306 1326 1176 1174 1202 1203 1204
			     1205 1210 1211 1212 1225 1226 1213 1214 1215 1216 1222 1223 1224 1230 1217 1220 1235 1236 1237 1218 1221 1233 1234 1238
			     1239 1240 1245 1247 1248 1313 1314 1317 1321 1232 1253 1252 1251 1322 1323 1324
			   }
  # JAP 1941 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1050  1070  1110  1120  1130  1150  1160  1190  1200  1210  1220  1230  1310  1340
			     14000 14010 2010  2020  2030  2030  2040  2050  2070  2150  2290  2300  2310  2320  2330  2400  2450  2460  2470  2510
			     2520  3010  3020  3030  3070  3080  3090  3100  3130  3140  3150  3190  3200  3210  3250  3260  3270  3280  3310  3320
			     3330  3340  3350  3360  3400  3410  3420  3430  4010  4020  4030  4040  4050  4120  4130  4140  4150  4170  4190  4200
			     4250  5010  5050  5060  5070  5080  5090  5100  5110  5120  5130  5140  5190  5200  5310  5320  5350  5470  5480  5490
			     6010  6030  6110  6120  6160  8010  8020  8030  8040  8050  8060  8090  8100  8110  8180  8230  9010  9020  9030  9040
			     9050  9060  9070  9080  9090  9100  9110  9120  9130  9190  9200  9210  9220  9350  12100 12110 12120
			   }

blueprints = { 8310 8320 }

  diplomacy =
  { relation = { tag = AST value = -150 }
    relation = { tag = BEL value = -150 }
    relation = { tag = BUL value = 75 }
    relation = { tag = CGX value = -200 }
    relation = { tag = CHC value = -200 }
    relation = { tag = CHI value = -200 }
    relation = { tag = CHL value = 20 }
    relation = { tag = CSX value = -200 }
    relation = { tag = CXB value = -200 }
    relation = { tag = CYN value = -200 }
    relation = { tag = FIN value = 50 }
    relation =
    { tag        = GER
      value      = 135
      guaranteed = { day = 27 month = september year = 1940 }
    }
    relation = { tag = HOL value = -150 }
    relation =
    { tag        = HUN
      value      = 125
      guaranteed = { day = 20 month = november year = 1940 }
    }
    relation =
    { tag        = ITA
      value      = 125
      guaranteed = { day = 20 month = november year = 1940 }
    }
    relation = { tag = MAN value = 200 access = yes }
    relation = { tag = MEN value = 200 access = yes }
    relation =
    { tag        = ROM
      value      = 125
      guaranteed = { day = 27 month = september year = 1940 }
    }
    relation = { tag = SIA value = 150 }
    relation = { tag = VIC value = 50 }
    relation = { tag = USA value = -125 }
    relation = { tag = SIK value = -170 }
  }
  headofstate            = { type = 9 id = 5001 }
  headofgovernment       = { type = 9 id = 5042 }
  foreignminister        = { type = 9 id = 5065 }
  armamentminister       = { type = 9 id = 5091 }
  ministerofsecurity     = { type = 9 id = 5122 }
  ministerofintelligence = { type = 9 id = 5144 }
  chiefofstaff           = { type = 9 id = 5156 }
  chiefofarmy            = { type = 9 id = 5166 }
  chiefofnavy            = { type = 9 id = 5200 }
  chiefofair             = { type = 9 id = 5193 }
  dormant_ministers      = { 5002 5040 5033 5034 5041 5003 5057 5063 5053 5055 5056 5004 5005 5105 5106 5107 5115 5006 5134 5007 5008 5189 5035 5036
			     5059 5080 5090 5108 5116 5117 5118 5119 5120 5136 5142 5155 5165 5172 5185
			   }
  # China Expeditionary Army
  landunit =
  { id       = { type = 10300 id = 500 }
    name     = "Chu-Shina Hômengun" #"China Exp Army HQ"
    location = 1240
    division =
    { experience = 25
      id         = { type = 10300 id = 501 }
      name       = "Dai Chu-Shina Hômengun Sheribu" #"China Exp Army HQ"
      strength   = 100
      type       = hq
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 505 }
      name       = "Dai 13 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = artillery
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 506 }
      name       = "Dai 34 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = engineer
    }
  }
  landunit =
  { id       = { type = 10300 id = 502 }
    name     = "Dai 11 Gun" # Hanchow, China
    location = 1238
    division =
    { experience = 25
      id         = { type = 10300 id = 503 }
      name       = "Dai 3 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = engineer
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 504 }
      name       = "Dai 6 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = artillery
    }
  }
  landunit =
  { id       = { type = 10300 id = 3000 }
    name     = "Dai 39 Gun" # Hanchow, China
    location = 1239
    division =
    { experience = 25
      id         = { type = 10300 id = 507 }
      name       = "Dai 39 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 1
    }
  }
  landunit =
  { id       = { type = 10300 id = 3001 }
    name     = "Dai 13 Hômengun" # Hanchow, China
    location = 1245
    division =
    { experience = 25
      id         = { type = 10300 id = 508 }
      name       = "Dai 40 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = artillery
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 509 }
      name       = "Dai 14 Dokuritsu konsei ryodan"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 510 }
      name       = "Dai 18 Dokuritsu konsei ryodan"
      strength   = 100
      type       = infantry
      model      = 2
    }
  }
  landunit =
  { id       = { type = 10300 id = 511 }
    name     = "Dai 13 Gun" # Shanghai, China
    location = 1234
    division =
    { experience = 25
      id         = { type = 10300 id = 512 }
      name       = "Dai 15 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 513 }
      name       = "Dai 17 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
    }
  }
  landunit =
  { id       = { type = 10300 id = 3002 }
    name     = "Dai 43 Gun"
    location = 1251
    division =
    { experience = 25
      id         = { type = 10300 id = 514 }
      name       = "Dai 22 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 515 }
      name       = "Dai 116 Hoheishidan"
      strength   = 100
      type       = infantry
      extra      = artillery
      model      = 2
    }
  }
  landunit =
  { id       = { type = 10300 id = 3003 }
    name     = "11. Dokuritsu konsei Shûdan"
    location = 1251
    division =
    { experience = 25
      id         = { type = 10300 id = 516 }
      name       = "Dai 11 Dokuritsu konsei ryodan"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 517 }
      name       = "Dai 12 Dokuritsu konsei ryodan"
      strength   = 100
      type       = infantry
      model      = 2
    }
  }
  landunit =
  { id       = { type = 10300 id = 3004 }
    name     = "Dai 13 Dokuritsu konsei Shûdan" #"Mixed Brigade Group"
    location = 1253
    division =
    { experience = 25
      id         = { type = 10300 id = 518 }
      name       = "Dai 13 Dokuritsu konsei ryodan"
      strength   = 50
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 519 }
      name       = "Dai 17 Dokuritsu konsei ryodan"
      strength   = 50
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 520 }
      name       = "Dai 20 Dokuritsu konsei ryodan"
      strength   = 50
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 521 }
      name       = "Dai 2 Dokuritsu konsei ryodan"
      strength   = 50
      type       = infantry
      model      = 2
    }
  }
  landunit =
  { id       = { type = 10300 id = 522 }
    name     = "Dai 23 Gun" # Canton, China
    location = 1252
    division =
    { experience = 25
      id         = { type = 10300 id = 523 }
      name       = "Dai 38 Hoheishidan"
      strength   = 100
      type       = infantry
      extra      = engineer
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 524 }
      name       = "Dai 51 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = artillery
    }
  }
  landunit =
  { id       = { type = 10300 id = 3005 }
    name     = "Dai 58 Gun"
    location = 1232
    division =
    { experience = 25
      id         = { type = 10300 id = 525 }
      name       = "Dai 104 Hoheishidan"
      strength   = 100
      type       = infantry
      extra      = artillery
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 526 }
      name       = "Dai 19 Dokuritsu konsei ryodan"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = anti_tank
    }
  }
  # # North China Theater Army
  landunit =
  { id       = { type = 10300 id = 527 }
    name     = "Kita-Shina Hômengun" #"Nth China Theater Army HQ" # Peking, China
    location = 1224
    division =
    { experience = 25
      id         = { type = 10300 id = 528 }
      name       = "Kita-Shina Hômengun Sheribu"
      strength   = 100
      type       = hq
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 529 }
      name       = "Dai 27 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 530 }
      name       = "Dai 35 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = anti_air
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 531 }
      name       = "Dai 110 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
    }
  }
  landunit =
  { id       = { type = 10300 id = 3006 }
    name     = "1. Dokuritsu konsei Shûdan"
    location = 1230
    division =
    { experience = 25
      id         = { type = 10300 id = 532 }
      name       = "Dai 1 Dokuritsu konsei ryodan"
      strength   = 50
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 533 }
      name       = "Dai 7 Dokuritsu konsei ryodan"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 534 }
      name       = "Dai 8 Dokuritsu konsei ryodan"
      strength   = 50
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 535 }
      name       = "Dai 15 Dokuritsu konsei ryodan"
      strength   = 50
      type       = infantry
      model      = 2
    }
  }
  landunit =
  { id       = { type = 10300 id = 536 }
    name     = "Dai 1 Hômengun" # Taiyuan, China
    location = 1225
    division =
    { experience = 25
      id         = { type = 10300 id = 537 }
      name       = "Dai 36 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 538 }
      name       = "Dai 37 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = artillery
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 539 }
      name       = "Dai 41 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 540 }
      name       = "Dai 3 Dokuritsu konsei ryodan"
      strength   = 50
      type       = infantry
      model      = 2
    }
  }
  landunit =
  { id       = { type = 10300 id = 3007 }
    name     = "4. Dokuritsu konsei Shûdan"
    location = 1313
    division =
    { experience = 25
      id         = { type = 10300 id = 541 }
      name       = "Dai 4 Dokuritsu konsei ryodan"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 542 }
      name       = "Dai 9 Dokuritsu konsei ryodan"
      strength   = 50
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 543 }
      name       = "Dai 16 Dokuritsu konsei ryodan"
      strength   = 50
      type       = infantry
      model      = 2
    }
  }
  landunit =
  { id       = { type = 10300 id = 544 }
    name     = "Dai 12 Gun" # Sainan, China
    location = 1226
    division =
    { experience = 25
      id         = { type = 10300 id = 545 }
      name       = "Dai 32 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 546 }
      name       = "Dai 5 Dokuritsu konsei ryodan"
      strength   = 50
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 547 }
      name       = "Dai 6 Dokuritsu konsei ryodan"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 548 }
      name       = "Dai 10 Dokuritsu konsei ryodan"
      strength   = 50
      type       = infantry
      model      = 2
    }
  }
  landunit =
  { id       = { type = 10300 id = 549 }
    name     = "Moukogo Gun" # Changchiakou, China
    location = 1209
    division =
    { experience = 25
      id         = { type = 10300 id = 550 }
      name       = "Dai 26 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = anti_air
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 551 }
      name       = "Dai 2 Dokuritsu konsei ryodan"
      strength   = 50
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 552 }
      name       = "Dai 1 Moukogo Kiheishidan"
      strength   = 100
      type       = cavalry
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 553 }
      name       = "Dai 2 Moukogo Kiheishidan"
      strength   = 100
      type       = cavalry
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 554 }
      name       = "Dai 3 Moukogo Kiheishidan"
      strength   = 100
      type       = cavalry
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 555 }
      name       = "Dai 4 Moukogo Kiheishidan"
      strength   = 100
      type       = cavalry
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 556 }
      name       = "Dai 5 Moukogo Kiheishidan"
      strength   = 100
      type       = cavalry
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 557 }
      name       = "Dai 6 Moukogo Kiheishidan"
      strength   = 100
      type       = cavalry
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 558 }
      name       = "Dai 7 Moukogo Kiheishidan"
      strength   = 100
      type       = cavalry
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 559 }
      name       = "Dai 8 Moukogo Kiheishidan"
      strength   = 100
      type       = cavalry
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 560 }
      name       = "Dai 9 Moukogo Kiheishidan"
      strength   = 100
      type       = cavalry
      model      = 0
    }
  }
  # Kwantung Theater Army
  landunit =
  { id       = { type = 10300 id = 561 }
    name     = "kantô Gun" #"Kwantung Theater Army HQ" # Changchung, Manchuria
    location = 1396
    division =
    { experience = 25
      id         = { type = 10300 id = 562 }
      name       = "kantô Gun Sheribu"
      strength   = 100
      type       = hq
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 563 }
      name       = "Dai 10 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = anti_air
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 564 }
      name       = "Dai 28 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = anti_air
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 565 }
      name       = "Dai 29 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = anti_air
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 566 }
      name       = "Kwantung Boei Shireibu"
      strength   = 100
      type       = garrison
      model      = 1
      extra      = police
    }
  }
  landunit =
  { id       = { type = 10300 id = 567 }
    name     = "Dai 3 Gun" # Botanko, Manchuko
    location = 1530
    division =
    { experience = 25
      id         = { type = 10300 id = 568 }
      name       = "Dai 9 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = artillery
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 569 }
      name       = "Dai 12 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = artillery
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 570 }
      name       = "Dai 57 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = artillery
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 571 }
      name       = "Dai 1 Senshashidan"
      strength   = 50
      type       = light_armor
      model      = 1
      extra      = sp_artillery
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 572 }
      name       = "Dai 1 Dokuritsu shubitai"
      strength   = 100
      type       = garrison
      model      = 1
      extra      = anti_air
    }
  }
  landunit =
  { id       = { type = 10300 id = 573 }
    name     = "Dai 4 Gun" # Songo, Manchuko
    location = 1381
    division =
    { experience = 25
      id         = { type = 10300 id = 574 }
      name       = "Dai 1 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = artillery
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 575 }
      name       = "Dai 2 Dokuritsu shubitai"
      strength   = 100
      type       = garrison
      model      = 2
      extra      = anti_air
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 576 }
      name       = "Dai 3 Dokuritsu shubitai"
      strength   = 100
      type       = garrison
      model      = 2
    }
  }
  landunit =
  { id       = { type = 10300 id = 577 }
    name     = "Dai 5 Hômengun" # Toan, Manchuko
    location = 1374
    division =
    { experience = 25
      id         = { type = 10300 id = 578 }
      name       = "Dai 11 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = artillery
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 579 }
      name       = "Dai 24 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = engineer
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 580 }
      name       = "Dai 2 Senshashidan"
      strength   = 50
      type       = light_armor
      model      = 1
      extra      = engineer
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 581 }
      name       = "Dai 4 Dokuritsu shubitai"
      strength   = 100
      type       = garrison
      model      = 1
      extra      = anti_air
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 582 }
      name       = "Dai 5 Dokuritsu shubitai"
      strength   = 100
      type       = garrison
      model      = 1
      extra      = anti_air
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 583 }
      name       = "Dai 3 Manchuko Kiheishidan"
      strength   = 50
      type       = cavalry
      model      = 0
    }
  }
  landunit =
  { id       = { type = 10300 id = 584 }
    name     = "Dai 6 Gun" # Hailar, Manchuko
    location = 1382
    division =
    { experience = 25
      id         = { type = 10300 id = 585 }
      name       = "Dai 14 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = anti_tank
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 586 }
      name       = "Dai 23 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = police
    }
  }
  landunit =
  { id       = { type = 10300 id = 587 }
    name     = "Dai 20 Gun" # Keinei, Manchuko
    location = 1375
    division =
    { experience = 25
      id         = { type = 10300 id = 588 }
      name       = "Dai 8 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = artillery
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 589 }
      name       = "Dai 25 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = artillery
    }
    division =
    { id       = { type = 10300 id = 590 }
      name     = "6 Dokuritsu shubitai"
      strength = 100
      type     = garrison
      model    = 2
      extra    = anti_tank
    }
    division =
    { id       = { type = 10300 id = 591 }
      name     = "7 Dokuritsu shubitai"
      strength = 100
      type     = garrison
      model    = 2
    }
  }
  # Southern Expeditionary Army
  landunit =
  { id       = { type = 10300 id = 592 }
    name     = "Nanpô So-gun" #"Southern Expeditionary Army HQ" # Saigon, Indochina
    location = 1337
    division =
    { experience = 25
      id         = { type = 10300 id = 593 }
      name       = "Nanpô So-gun Sheribu"
      strength   = 100
      type       = hq
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 594 }
      name       = "Dai 1 TeishinShudan" #"Dash Forward"
      strength   = 100
      type       = paratrooper
      model      = 1
      extra      = anti_air
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 595 }
      name       = "Dai 21 Dokuritsu konsei ryodan"
      strength   = 50
      type       = infantry
      model      = 2
      extra      = artillery
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 596 }
      name       = "Dai 4 Dokuritsu konsei rentai"
      strength   = 50
      type       = infantry
      model      = 2
      extra      = anti_air
    }
  }
  landunit =
  { id       = { type = 10300 id = 597 }
    name     = "Minami-Shina Hômengun" #
    location = 1248
    division =
    { experience = 25
      id         = { type = 10300 id = 598 }
      name       = "Dai 16 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = engineer
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 599 }
      name       = "Dai 48 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = artillery
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 600 }
      name       = "Dai 65 Ryodan" # brigade
      strength   = 100
      type       = infantry
      model      = 2
      extra      = anti_tank
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 601 }
      name       = "Dai 4/7. Senshashidan"
      strength   = 50
      type       = light_armor
      model      = 1
    }
  }
  landunit =
  { id       = { type = 10300 id = 602 }
    name     = "Dai 15 Gun"
    location = 1338
    division =
    { experience = 25
      id         = { type = 10300 id = 603 }
      name       = "Dai 33 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 604 }
      name       = "Dai 55 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
    }
  }
  landunit =
  { id       = { type = 10300 id = 605 }
    name     = "Dai 15 Hômengun" # Hainan
    location = 1321
    division =
    { experience = 25
      id         = { type = 10300 id = 606 }
      name       = "Dai 2 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = engineer
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 607 }
      name       = "Dai 56 Ryodan"
      strength   = 50
      type       = infantry
      model      = 2
      extra      = anti_air
    }
  }
  landunit =
  { id       = { type = 10300 id = 2800 }
    name     = "Indoshina Chuton Gun"
    location = 1306
    division =
    { experience = 25
      id         = { type = 10300 id = 2801 }
      name       = "Dai 8 Indoshina Shubitai"
      strength   = 100
      type       = garrison
      model      = 1
      extra      = anti_air
    }
  }
  landunit =
  { id       = { type = 10300 id = 4605 }
    name     = "Indoshina Chuton Gun" #"8. Garrison"
    location = 1326
    division =
    { experience = 25
      id         = { type = 10300 id = 3636 }
      name       = "Dai 2 Indoshina Shubitai"
      strength   = 100
      type       = garrison
      model      = 1
      extra      = anti_air
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 3637 }
      name       = "Dai 1 Indoshina Shubitai"
      strength   = 100
      type       = garrison
      model      = 1
      extra      = anti_air
    }
  }
  landunit =
  { id       = { type = 10300 id = 608 }
    name     = "Dai 25 Hômengun" # Saigon
    location = 1337
    division =
    { experience = 25
      id         = { type = 10300 id = 609 }
      name       = "Dai 5 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = anti_air
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 610 }
      name       = "Dai 18 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = artillery
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 611 }
      name       = "Dai 56 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
      extra      = anti_tank
    }
    division =
    { experience = 35
      id         = { type = 10300 id = 612 }
      name       = "Konoe Shidan"
      strength   = 100
      type       = infantry
      model      = 3
      extra      = artillery
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 613 }
      name       = "Dai 3 Senshashidan"
      strength   = 50
      type       = light_armor
      model      = 1
      extra      = sp_artillery
    }
  }
  # Imperial General Headquarters
  landunit =
  { id       = { type = 10300 id = 614 }
    name     = "Daihon'ei" # Imperial General HQ" # Tokyo
    location = 1184
    division =
    { experience = 25
      id         = { type = 10300 id = 615 }
      name       = "Daihon'ei" #"Imperial General HQ"
      strength   = 100
      type       = hq
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 616 }
      name       = "Dai 4 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 2
    }
    division =
    { experience = 35
      id         = { type = 10300 id = 617 }
      name       = "Tokubetsu Rikusentai" #"South Seas Detachment"
      strength   = 100
      type       = marine
      model      = 2
    }
  }
  landunit =
  { id       = { type = 10300 id = 618 }
    name     = "Kita Hômengun" #"North Japan Army"
    location = 1181
    division =
    { id       = { type = 10300 id = 619 }
      name     = "Dai 7 Hoheishidan"
      strength = 100
      type     = infantry
      model    = 1
      extra    = anti_air
    }
    division =
    { id       = { type = 10300 id = 620 }
      name     = "Dai 57 Hoheishidan"
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
    }
    division =
    { id       = { type = 10300 id = 621 }
      name     = "Karafuto"
      strength = 100
      type     = infantry
      model    = 0
      extra    = anti_air
    }
    division =
    { id       = { type = 10300 id = 622 }
      name     = "Dai 1 Shubitai"
      strength = 100
      type     = garrison
      model    = 1
    }
    division =
    { id       = { type = 10300 id = 623 }
      name     = "Dai 2 Shubitai"
      strength = 100
      type     = garrison
      model    = 1
    }
    division =
    { id       = { type = 10300 id = 624 }
      name     = "Dai 3 Shubitai"
      strength = 100
      type     = garrison
      model    = 1
      extra    = artillery
    }
    division =
    { id       = { type = 10300 id = 625 }
      name     = "Dai 4 Shubitai"
      strength = 100
      type     = garrison
      model    = 1
      extra    = anti_air
    }
  }
  landunit =
  { id       = { type = 10300 id = 626 }
    name     = "Chûô Hômengun" # "Central Japan Army"
    location = 1185
    division =
    { experience = 25
      id         = { type = 10300 id = 627 }
      name       = "Dai 53 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 1
      extra      = anti_air
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 628 }
      name       = "Dai 54 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 0
      extra      = artillery
    }
    division =
    { id       = { type = 10300 id = 629 }
      name     = "Dai 3 Hômen Konkyochi-tai" # depot
      strength = 100
      type     = infantry
      model    = 0
      extra    = anti_air
    }
    division =
    { id       = { type = 10300 id = 630 }
      name     = "Dai 5 Shubitai"
      strength = 100
      type     = garrison
      model    = 1
      extra    = anti_air
    }
    division =
    { id       = { type = 10300 id = 631 }
      name     = "Dai 6 Shubitai"
      strength = 100
      type     = garrison
      model    = 1
      extra    = anti_air
    }
  }
  landunit =
  { id       = { type = 10300 id = 632 }
    name     = "Roppou Hômengun" # "West Japan Army"
    location = 1187
    division =
    { id       = { type = 10300 id = 633 }
      name     = "Dai 5 Hômen Konkyochi-tai" #depot
      strength = 100
      type     = infantry
      model    = 0
      extra    = anti_air
    }
    division =
    { id       = { type = 10300 id = 634 }
      name     = "Dai 7 Shubitai"
      strength = 100
      type     = garrison
      model    = 1
      extra    = anti_air
    }
    division =
    { id       = { type = 10300 id = 635 }
      name     = "Dai 8 Shubitai"
      strength = 100
      type     = garrison
      model    = 1
      extra    = anti_air
    }
    division =
    { id       = { type = 10300 id = 636 }
      name     = "Dai 9 Shubitai"
      strength = 100
      type     = garrison
      model    = 1
      extra    = anti_air
    }
    division =
    { id       = { type = 10300 id = 637 }
      name     = "Dai 10 Shubitai"
      strength = 100
      type     = garrison
      model    = 1
      extra    = anti_air
    }
    division =
    { id       = { type = 10300 id = 638 }
      name     = "Dai 11 Shubitai"
      strength = 100
      type     = garrison
      model    = 1
      extra    = anti_air
    }
    division =
    { id       = { type = 10300 id = 639 }
      name     = "Dai 12 Shubitai"
      strength = 100
      type     = garrison
      model    = 1
      extra    = anti_air
    }
    division =
    { id       = { type = 10300 id = 640 }
      name     = "Dai 13 Shubitai"
      strength = 100
      type     = garrison
      model    = 1
      extra    = anti_air
    }
    division =
    { id       = { type = 10300 id = 641 }
      name     = "Dai 14 Shubitai"
      strength = 100
      type     = garrison
      model    = 1
      extra    = anti_air
    }
  }
  landunit =
  { id       = { type = 10300 id = 642 }
    name     = "Tôbu Hômengun" #"East Japan Army"
    location = 1190
    division =
    { experience = 25
      id         = { type = 10300 id = 643 }
      name       = "Dai 52 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 1
      extra      = anti_air
    }
    division =
    { id       = { type = 10300 id = 644 }
      name     = "Dai 15 Shubitai"
      strength = 100
      type     = garrison
      model    = 1
      extra    = anti_air
    }
    division =
    { id       = { type = 10300 id = 645 }
      name     = "Dai 16 Shubitai"
      strength = 100
      type     = garrison
      model    = 1
      extra    = anti_air
    }
    division =
    { id       = { type = 10300 id = 646 }
      name     = "Dai 17 Shubitai"
      strength = 100
      type     = garrison
      model    = 1
      extra    = anti_air
    }
  }
  landunit =
  { id       = { type = 10300 id = 647 }
    name     = "Chosen Gun" #"Korean Army"
    location = 1376
    division =
    { experience = 25
      id         = { type = 10300 id = 648 }
      name       = "Dai 19 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 1
      extra      = anti_air
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 649 }
      name       = "Dai 20 Hoheishidan"
      strength   = 100
      type       = infantry
      model      = 1
      extra      = artillery
    }
    division =
    { id       = { type = 10300 id = 650 }
      name     = "Dai 1 Chosen Shubitai"
      strength = 100
      type     = garrison
      model    = 1
    }
    division =
    { id       = { type = 10300 id = 651 }
      name     = "Dai 2 Chosen Shubitai"
      strength = 100
      type     = garrison
      model    = 1
    }
    division =
    { id       = { type = 10300 id = 652 }
      name     = "Dai 3 Chosen Shubitai"
      strength = 100
      type     = garrison
      model    = 1
    }
    division =
    { id       = { type = 10300 id = 653 }
      name     = "Dai 4 Chosen Shubitai"
      strength = 100
      type     = garrison
      model    = 1
    }
  }
  landunit =
  { id       = { type = 10300 id = 654 }
    name     = "Takasago Gun" #"Taiwan Army"
    location = 1322
    division =
    { id       = { type = 10300 id = 655 }
      name     = "Dai 1 Takasago Shubitai"
      strength = 100
      type     = garrison
      model    = 1
    }
    division =
    { id       = { type = 10300 id = 656 }
      name     = "Dai 2 Takasago Shubitai"
      strength = 100
      type     = garrison
      model    = 1
    }
    division =
    { id       = { type = 10300 id = 657 }
      name     = "Dai 3 Takasago Shubitai"
      strength = 100
      type     = garrison
      model    = 1
      extra    = anti_air
    }
  }
  landunit =
  { id       = { type = 10300 id = 1881 }
    name     = "Dai 81 Boei Gun"
    location = 1317
    division =
    { experience = 25
      id         = { type = 10300 id = 1882 }
      name       = "Dai 2 Boeitai" #"Defence Division"
      strength   = 100
      type       = garrison
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 1883 }
      name       = "Dai 1 Boeitai"
      strength   = 100
      type       = garrison
      model      = 1
      extra      = anti_air
    }
  }
  landunit =
  { id       = { type = 10300 id = 1884 }
    name     = "Dai 3 Boei Gun"
    location = 1247
    division =
    { experience = 25
      id         = { type = 10300 id = 1885 }
      name       = "Dai 3 Boeitai"
      strength   = 100
      type       = garrison
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 1886 }
      name       = "Dai 4 Boeitai"
      strength   = 100
      type       = garrison
      model      = 1
    }
  }
  landunit =
  { id       = { type = 10300 id = 1887 }
    name     = "Dai 5 Boei Gun"
    location = 1223
    division =
    { experience = 25
      id         = { type = 10300 id = 1888 }
      name       = "Dai 5 Boeitai" #"Defence Division"
      strength   = 100
      type       = garrison
      model      = 1
    }
  }
  landunit =
  { id       = { type = 10300 id = 1889 }
    name     = "Dai 1 Boei Gun"
    location = 1222
    division =
    { experience = 25
      id         = { type = 10300 id = 1890 }
      name       = "Dai 11 Boeitai" #"Defence Division"
      strength   = 100
      type       = garrison
      model      = 1
      extra      = anti_air
    }
  }
  # Pacific garrisons:
  landunit =
  { id       = { type = 10300 id = 658 }
    name     = "Saishu Chuton Gun"
    location = 1177
    division =
    { id       = { type = 10300 id = 659 }
      name     = "Saishu Shubitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 10300 id = 660 }
    name     = "Naha Chuton Gun"
    location = 1193
    division =
    { id       = { type = 10300 id = 661 }
      name     = "Naha Shubitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 10300 id = 662 }
    name     = "Toyohara Chuton Gun"
    location = 1184
    division =
    { id       = { type = 10300 id = 663 }
      name     = "Toyohara Shubitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 10300 id = 664 }
    name     = "Tomari Chuton Gun"
    location = 1184
    division =
    { id       = { type = 10300 id = 665 }
      name     = "Tomari Shubitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 10300 id = 667 }
    name     = "Shana Chuton Gun"
    location = 1177
    division =
    { id       = { type = 10300 id = 668 }
      name     = "Shana Shubitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 10300 id = 669 }
    name     = "Mariane konkyochi tai"
    location = 1184
    division =
    { id       = { type = 10300 id = 670 }
      name     = "Mariane Keibitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 10300 id = 671 }
    name     = "Palau konkyochi tai"
    location = 1621
    division =
    { id       = { type = 10300 id = 672 }
      name     = "Palau Keibitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 10300 id = 673 }
    name     = "Eniwetok konkyochi tai"
    location = 1601
    division =
    { id       = { type = 10300 id = 674 }
      name     = "Eniwetok Keibitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 10300 id = 675 }
    name     = "Bikini konkyochi tai"
    location = 1600
    division =
    { id       = { type = 10300 id = 676 }
      name     = "Bikini Keibitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 10300 id = 677 }
    name     = "Kwajalein konkyochi tai"
    location = 1608
    division =
    { id       = { type = 10300 id = 678 }
      name     = "Kwajalein Keibitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 10300 id = 679 }
    name     = "Saipan konkyochi tai"
    location = 1627
    division =
    { id       = { type = 10300 id = 680 }
      name     = "Saipan Keibitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 10300 id = 681 }
    name     = "Shumushushima Chuton Gun"
    location = 1174
    division =
    { id       = { type = 10300 id = 682 }
      name     = "Shumushushima Shubitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 10300 id = 683 }
    name     = "Iwo Jima konkyochi tai"
    location = 1599
    division =
    { id       = { type = 10300 id = 684 }
      name     = "Bonin Keibitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 10300 id = 685 }
    name     = "Marcus konkyochi tai"
    location = 1785
    division =
    { id       = { type = 10300 id = 686 }
      name     = "Marcus Keibitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 10300 id = 687 }
    name     = "Ulithi konkyochi tai"
    location = 1618
    division =
    { id       = { type = 10300 id = 688 }
      name     = "Ulithi Keibitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 10300 id = 689 }
    name     = "Truk konkyochi tai"
    location = 1613
    division =
    { id       = { type = 10300 id = 690 }
      name     = "Truk Keibitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 10300 id = 691 }
    name     = "Ponape konkyochi tai"
    location = 1610
    division =
    { id       = { type = 10300 id = 692 }
      name     = "Ponape Keibitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 10300 id = 693 }
    name     = "Marshall konkyochi tai"
    location = 1605
    division =
    { id       = { type = 10300 id = 694 }
      name     = "Marshall Keibitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 10300 id = 695 }
    name     = "Yap konkyochi tai"
    location = 1619
    division =
    { id       = { type = 10300 id = 696 }
      name     = "Yap Keibitai"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { location = 1184
    id       = { type = 10300 id = 1200 }
    name     = "koku minhei" #"Home Army Group HQ"
    division =
    { id            = { type = 10300 id = 1201 }
      name          = "koku minhei Sheribu" #"Home Army Group HQ"
      type          = hq
      model         = 1
      strength      = 100
      extra         = anti_air
      brigade_model = 1
    }
  }
  landunit =
  { location = 1391
    id       = { type = 10300 id = 1202 }
    name     = "Chosen Gun" # Korea Army
    division =
    { id            = { type = 10300 id = 1203 }
      name          = "Chosen Gun Sheribu"
      type          = hq
      model         = 1
      strength      = 100
      extra         = anti_air
      brigade_model = 1
    }
  }
  landunit =
  { location = 1379
    id       = { type = 10300 id = 1204 }
    name     = "Manchuko Hômengun"
    division =
    { id            = { type = 10300 id = 1205 }
      name          = "Manchuko Hômengun Sheribu"
      type          = hq
      model         = 1
      strength      = 100
      extra         = anti_air
      brigade_model = 1
    }
  }
  #### Japan Naval OOB ###
  navalunit =
  { id       = { type = 10300 id = 1000 }
    name     = "Rengo Kantai dai 1 Sentai" #"Combined Fleet 1 Squadron"
    location = 1188
    base     = 1188
    division =
    { experience = 15
      id         = { type = 10300 id = 18 }
      name       = "IJN Nagato"
      type       = battleship
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 20 }
      name       = "IJN Mutsu"
      type       = battleship
      model      = 2
    }
  }
  navalunit =
  { id       = { type = 10300 id = 1002 }
    name     = "Rengo Kantai dai 9 Sentai"
    location = 1188
    base     = 1188
    division =
    { experience = 15
      id         = { type = 10300 id = 52 }
      name       = "IJN Kitakami"
      type       = light_cruiser
      model      = 1
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 53 }
      name       = "IJN Oi"
      type       = light_cruiser
      model      = 1
    }
  }
  navalunit =
  { id       = { type = 10300 id = 1003 }
    name     = "Dai 1 Kantai dai 2 Sentai"
    location = 1188
    base     = 1188
    division =
    { experience = 15
      id         = { type = 10300 id = 10 }
      name       = "IJN Fuso"
      type       = battleship
      model      = 1
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 12 }
      name       = "IJN Yamashiro"
      type       = battleship
      model      = 1
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 14 }
      name       = "IJN Ise"
      type       = battleship
      model      = 1
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 16 }
      name       = "IJN Hyuga"
      type       = battleship
      model      = 1
    }
  }
  navalunit =
  { id       = { type = 10300 id = 1004 }
    name     = "Dai 1 Kantai dai 3 Sentai"
    location = 1188
    base     = 1188
    division =
    { experience = 15
      id         = { type = 10300 id = 2 }
      name       = "IJN Kongo"
      type       = battlecruiser
      model      = 1
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 4 }
      name       = "IJN Hiei"
      type       = battlecruiser
      model      = 1
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 6 }
      name       = "IJN Haruna"
      type       = battlecruiser
      model      = 1
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 8 }
      name       = "IJN Kirishima"
      type       = battlecruiser
      model      = 1
    }
  }
  navalunit =
  { id       = { type = 10300 id = 1005 }
    name     = "Dai 1 Kantai dai 6 Sentai"
    location = 1188
    base     = 1188
    division =
    { experience = 15
      id         = { type = 10300 id = 22 }
      name       = "IJN Furutaka"
      type       = heavy_cruiser
      model      = 1
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 23 }
      name       = "IJN Kako"
      type       = heavy_cruiser
      model      = 1
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 24 }
      name       = "IJN Aoba"
      type       = heavy_cruiser
      model      = 1
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 25 }
      name       = "IJN Kinugasa"
      type       = heavy_cruiser
      model      = 1
    }
  }
  navalunit =
  { id       = { type = 10300 id = 1006 }
    name     = "Dai 1 Kantai Dai 3 Kidô Butai" # 3 Carrier division
    location = 1188
    base     = 1188
    division =
    { experience    = 20
      id            = { type = 10300 id = 1008 }
      name          = "IJN Hosho"
      type          = escort_carrier
      model         = 0
    }
    division =
    { experience    = 15
      id            = { type = 10300 id = 1007 }
      name          = "IJN Zuiho"
      type          = escort_carrier
      model         = 1
    }
    division =
    { experience    = 15
      id            = { type = 10300 id = 1023 }
      name          = "IJN Chitose"
      type          = escort_carrier
      model         = 1
    }
    division =
    { id            = { type = 10300 id = 1024 }
      name          = "IJN Taiyo"
      type          = escort_carrier
      model         = 2
    }
  }
  navalunit =
  { id       = { type = 10300 id = 1009 }
    name     = "Dai 1 Kantai 1&3 Kuchiku Butai"
    location = 1188
    base     = 1188
    division =
    { experience = 15
      id         = { type = 10300 id = 64 }
      name       = "IJN Sendai"
      type       = light_cruiser
      model      = 1
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 149 }
      name       = "Dai 40 Kuchikusentai"
      type       = destroyer
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 150 }
      name       = "Dai 41 Kuchikusentai"
      type       = destroyer
      model      = 1
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 151 }
      name       = "Dai 42 Kuchikusentai"
      type       = destroyer
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 152 }
      name       = "Dai 43 Kuchikusentai"
      type       = destroyer
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 153 }
      name       = "Dai 44 Kuchikusentai"
      type       = destroyer
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 154 }
      name       = "Dai 45 Kuchikusentai"
      type       = destroyer
      model      = 1
    }
  }
  navalunit =
  { id       = { type = 10300 id = 1010 }
    name     = "Dai 2 Kantai dai 4 Sentai"
    location = 1321
    base     = 1321
    division =
    { experience = 15
      id         = { type = 10300 id = 34 }
      name       = "IJN Takao"
      type       = heavy_cruiser
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 35 }
      name       = "IJN Atago"
      type       = heavy_cruiser
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 36 }
      name       = "IJN Maya"
      type       = heavy_cruiser
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 37 }
      name       = "IJN Chokai"
      type       = heavy_cruiser
      model      = 2
    }
  }
  navalunit =
  { id       = { type = 10300 id = 1011 }
    name     = "Dai 2 Kantai dai 5 Sentai"
    location = 1321
    base     = 1321
    division =
    { experience = 15
      id         = { type = 10300 id = 27 }
      name       = "IJN Myoko"
      type       = heavy_cruiser
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 28 }
      name       = "IJN Nachi"
      type       = heavy_cruiser
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 29 }
      name       = "IJN Haguro"
      type       = heavy_cruiser
      model      = 2
    }
  }
  navalunit =
  { id       = { type = 10300 id = 1041 }
    name     = "Dai 2 Kantai dai 7 Sentai"
    location = 1321
    base     = 1321
    division =
    { experience = 15
      id         = { type = 10300 id = 39 }
      name       = "IJN Mogami"
      type       = heavy_cruiser
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 40 }
      name       = "IJN Mikuma"
      type       = heavy_cruiser
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 41 }
      name       = "IJN Suzuya"
      type       = heavy_cruiser
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 42 }
      name       = "IJN Kumano"
      type       = heavy_cruiser
      model      = 2
    }
  }
  navalunit =
  { id       = { type = 10300 id = 1012 }
    name     = "Dai 2 Kantai dai 8 Sentai"
    location = 1321
    base     = 1321
    division =
    { experience = 15
      id         = { type = 10300 id = 44 }
      name       = "IJN Tone"
      type       = heavy_cruiser
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 45 }
      name       = "IJN Chikuma"
      type       = heavy_cruiser
      model      = 2
    }
  }
  navalunit =
  { id       = { type = 10300 id = 1055 }
    name     = "Dai 2 Kantai 2&4 Kuchiku Butai"
    location = 1321
    base     = 1321
    division =
    { experience = 15
      id         = { type = 10300 id = 65 }
      name       = "IJN Jintsu"
      type       = light_cruiser
      model      = 1
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 89 }
      name       = "Dai 1 Kuchikusentai"
      type       = destroyer
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 90 }
      name       = "Dai 2 Kuchikusentai"
      type       = destroyer
      model      = 1
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 91 }
      name       = "Dai 3 Kuchikusentai"
      type       = destroyer
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 92 }
      name       = "Dai 4 Kuchikusentai"
      type       = destroyer
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 93 }
      name       = "Dai 5 Kuchikusentai"
      type       = destroyer
      model      = 1
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 94 }
      name       = "Dai 6 Kuchikusentai"
      type       = destroyer
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 63 }
      name       = "IJN Naka"
      type       = light_cruiser
      model      = 1
    }
  }
  navalunit =
  { id       = { type = 10300 id = 1013 }
    name     = "Dai 3 Kantai dai 16 Sentai"
    location = 1322
    base     = 1322
    division =
    { experience = 15
      id         = { type = 10300 id = 30 }
      name       = "IJN Ashigara"
      type       = heavy_cruiser
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 50 }
      name       = "IJN Kuma"
      type       = light_cruiser
      model      = 1
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 56 }
      name       = "IJN Nagara"
      type       = light_cruiser
      model      = 1
    }
  }
  navalunit =
  { id       = { type = 10300 id = 1014 }
    name     = "Dai 3 Kantai dai 5 Kuchiku Butai"
    location = 1322
    base     = 1322
    division =
    { experience = 15
      id         = { type = 10300 id = 59 }
      name       = "IJN Natori"
      type       = light_cruiser
      model      = 1
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 96 }
      name       = "Dai 7 Kuchikusentai"
      type       = destroyer
      model      = 1
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 97 }
      name       = "Dai 8 Kuchikusentai"
      type       = destroyer
      model      = 0
    }
  }
  navalunit =
  { id       = { type = 10300 id = 1015 }
    name     = "Dai 4 Kantai dai 18 Squadron"
    location = 1613
    base     = 1613
    division =
    { experience = 15
      id         = { type = 10300 id = 47 }
      name       = "IJN Tenryu"
      type       = light_cruiser
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 48 }
      name       = "IJN Tatsuta"
      type       = light_cruiser
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 68 }
      name       = "IJN Kashima"
      type       = light_cruiser
      model      = 1
      maxspeed   = 18
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 98 }
      name       = "Dai 9 Kuchikusentai"
      type       = destroyer
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 99 }
      name       = "Dai 10 Kuchikusentai"
      type       = destroyer
      model      = 0
    }
  }
  navalunit =
  { id       = { type = 10300 id = 1016 }
    name     = "Dai 5 Kantai dai 21 Sentai"
    location = 1337
    base     = 1337
    division =
    { experience = 15
      id         = { type = 10300 id = 51 }
      name       = "IJN Tama"
      type       = light_cruiser
      model      = 1
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 54 }
      name       = "IJN Kiso"
      type       = light_cruiser
      model      = 1
    }
  }
  navalunit =
  { id       = { type = 10300 id = 1017 }
    name     = "Dai 6 Kantai"
    location = 1608
    base     = 1608
    division =
    { experience = 15
      id         = { type = 10300 id = 69 }
      name       = "IJN Katori"
      type       = light_cruiser
      model      = 1
      maxspeed   = 18
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 292 }
      name       = "Dai 1 Sensuisentai"
      type       = submarine
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 293 }
      name       = "Dai 2 Sensuisentai"
      type       = submarine
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 294 }
      name       = "Dai 3 Sensuisentai"
      type       = submarine
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 295 }
      name       = "Dai 4 Sensuisentai"
      type       = submarine
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 297 }
      name       = "Dai 7 Sensuisentai"
      type       = submarine
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 298 }
      name       = "Dai 8 Sensuisentai"
      type       = submarine
      model      = 3
    }
  }
  navalunit =
  { id       = { type = 10300 id = 1018 }
    name     = "Dai 1 Kidô Butai" # 1. Carrier fleet
    location = 1184
    base     = 1184
    division =
    { experience    = 25
      id            = { type = 10300 id = 401 }
      name          = "IJN Kaga"
      type          = carrier
      model         = 1
      extra         = cag
      brigade_model = 4
    }
    division =
    { experience    = 25
      id            = { type = 10300 id = 402 }
      name          = "IJN Agaki"
      type          = carrier
      model         = 1
      extra         = cag
      brigade_model = 4
    }
    division =
    { id    = { type = 10300 id = 403 }
      name  = "IJN Ryujo"
      type  = escort_carrier
      model = 1
    }
    division =
    { experience    = 25
      id            = { type = 10300 id = 404 }
      name          = "IJN Soryu"
      type          = carrier
      model         = 2
      extra         = cag
      brigade_model = 4
    }
    division =
    { experience    = 25
      id            = { type = 10300 id = 405 }
      name          = "IJN Hiryu"
      type          = carrier
      model         = 2
      extra         = cag
      brigade_model = 4
    }
  }
  navalunit =
  { id       = { type = 10300 id = 1019 }
    name     = "Yobikantai"
    location = 1190
    base     = 1190
    division =
    { experience = 15
      id         = { type = 10300 id = 57 }
      name       = "IJN Isuzu"
      type       = light_cruiser
      model      = 1
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 58 }
      name       = "IJN Yura"
      type       = light_cruiser
      model      = 1
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 60 }
      name       = "IJN Kinu"
      type       = light_cruiser
      model      = 1
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 61 }
      name       = "IJN Abukuma"
      type       = light_cruiser
      model      = 1
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 67 }
      name       = "IJN Yubari"
      type       = light_cruiser
      model      = 1
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 70 }
      name       = "IJN Izumo"
      type       = heavy_cruiser
      model      = 0
    }
  }
  navalunit =
  { id       = { type = 10300 id = 1020 }
    name     = "Shina Hômen Kantai" #"China Fleet"
    location = 1237
    base     = 1237
    division =
    { experience = 15
      id         = { type = 10300 id = 156 }
      name       = "Dai 46 Kuchikusentai"
      type       = destroyer
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 157 }
      name       = "Dai 47 Kuchikusentai"
      type       = destroyer
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 158 }
      name       = "Dai 48 Kuchikusentai"
      type       = destroyer
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 355 }
      name       = "Dai 1 Yuso Sentai"
      type       = transport
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 356 }
      name       = "Dai 2 Yuso Sentai"
      type       = transport
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 353 }
      name       = "Dai 3 Yuso Sentai"
      type       = transport
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 354 }
      name       = "Dai 4 Yuso Sentai"
      type       = transport
    }
  }
  navalunit =
  { id       = { type = 10300 id = 1021 }
    name     = "Chosen Kantai"
    location = 1196
    base     = 1196
    division =
    { experience = 15
      id         = { type = 10300 id = 143 }
      name       = "Dai 35 Kuchikusentai"
      type       = destroyer
      model      = 1
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 144 }
      name       = "Dai 36 Kuchikusentai"
      type       = destroyer
      model      = 1
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 357 }
      name       = "Dai 5 Yuso Sentai"
      type       = transport
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 358 }
      name       = "Dai 6 Yuso Sentai"
      type       = transport
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 359 }
      name       = "Dai 7 Yuso Sentai"
      type       = transport
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 360 }
      name       = "Dai 8 Yuso Sentai"
      type       = transport
    }
  }
  navalunit =
  { id       = { type = 10300 id = 1022 }
    name     = "Nanken Kantai" #"Southern Fleet"
    location = 1337
    base     = 1337
    division =
    { experience = 15
      id         = { type = 10300 id = 145 }
      name       = "Dai 37 Kuchikusentai"
      type       = destroyer
      model      = 1
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 146 }
      name       = "Dai 38 Kuchikusentai"
      type       = destroyer
      model      = 1
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 147 }
      name       = "Dai 39 Kuchikusentai"
      type       = destroyer
      model      = 1
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 361 }
      name       = "Dai 9 Yuso Sentai"
      type       = transport
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 362 }
      name       = "Dai 10 Yuso Sentai"
      type       = transport
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 363 }
      name       = "Dai 11 Yuso Sentai"
      type       = transport
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 364 }
      name       = "Dai 12 Yuso Sentai"
      type       = transport
    }
  }
  navalunit =
  { id       = { type = 10300 id = 1065 }
    name     = "Dai 2 Yobikantai" #reserve fleet
    location = 1186
    base     = 1186
    division =
    { experience = 15
      id         = { type = 10300 id = 365 }
      name       = "Dai 13 Yuso Sentai"
      type       = transport
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 366 }
      name       = "Dai 14 Yuso Sentai"
      type       = transport
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 285 }
      name       = "Dai 9 Sensuisentai"
      type       = submarine
      model      = 3
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 286 }
      name       = "Dai 13 Sensuisentai"
      type       = submarine
      model      = 3
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 288 }
      name       = "Dai 26 Sensuisentai"
      type       = submarine
      model      = 3
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 289 }
      name       = "Dai 27 Sensuisentai"
      type       = submarine
      model      = 3
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 290 }
      name       = "Dai 33 Sensuisentai"
      type       = submarine
      model      = 3
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 300 }
      name       = "Dai 11 Sensuisentai"
      type       = submarine
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 10300 id = 301 }
      name       = "Dai 12 Sensuisentai"
      type       = submarine
      model      = 2
    }
  }
######## Japan Air OOB ##############
  airunit =
  { id       = { type = 10300 id = 303 }
    name     = "Dai 17 Kokutai"
    location = 1184
    base     = 1184
    division =
    { experience = 25
      id         = { type = 10300 id = 304 }
      name       = "Dai 5 Kyokutsi Hikodan"
      strength   = 100
      type       = interceptor
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 305 }
      name       = "Dai 144 Kyokutsi Hikodan"
      strength   = 100
      type       = interceptor
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 306 }
      name       = "Dai 105 Keibakugeki Hikodan"
      strength   = 30
      type       = tactical_bomber
      model      = 1
    }
  }
  airunit =
  { id       = { type = 10300 id = 307 }
    name     = "Dai 4 Kokutai"
    location = 1184
    base     = 1184
    division =
    { experience = 25
      id         = { type = 10300 id = 308 }
      name       = "Dai 4 Kyokutsi Hikodan"
      strength   = 100
      type       = interceptor
      model      = 2
    }
  }
  airunit =
  { id       = { type = 10300 id = 309 }
    name     = "Dai 1 Kokutai"
    location = 1184
    base     = 1184
    division =
    { experience = 25
      id         = { type = 10300 id = 310 }
      name       = "Dai 44 Kaigunkogeki Hikodan"
      strength   = 100
      type       = naval_bomber
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 311 }
      name       = "Dai 54 Kyokutsi Hikodan"
      strength   = 100
      type       = interceptor
      model      = 2
    }
  }
  airunit =
  { id       = { type = 10300 id = 312 }
    name     = "Dai 2 Kokutai"
    location = 1187
    base     = 1187
    division =
    { experience = 25
      id         = { type = 10300 id = 313 }
      name       = "Dai 6 Keibakugeki Hikodan"
      strength   = 35
      type       = tactical_bomber
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 314 }
      name       = "Dai 9 Kyokutsi Hikodan"
      strength   = 40
      type       = interceptor
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 316 }
      name       = "Dai 3 Keibakugeki Hikodan"
      strength   = 30
      type       = tactical_bomber
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 317 }
      name       = "Dai 33 Kyokutsi Hikodan"
      strength   = 40
      type       = interceptor
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 318 }
      name       = "Dai 58 Keibakugeki Hikodan"
      strength   = 30
      type       = tactical_bomber
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 319 }
      name       = "Dai 6 Keibakugeki Hikodan"
      strength   = 30
      type       = tactical_bomber
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 321 }
      name       = "Dai 70 Kyokutsi Hikodan"
      strength   = 40
      type       = interceptor
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 322 }
      name       = "Dai 85 Kyokutsi Hikodan"
      strength   = 40
      type       = interceptor
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 323 }
      name       = "Dai 87 Kyokutsi Hikodan"
      strength   = 40
      type       = interceptor
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 324 }
      name       = "Dai 6 Kaigunkogeki Hikodan"
      strength   = 100
      type       = naval_bomber
      model      = 1
    }
  }
  airunit =
  { id       = { type = 10300 id = 326 }
    name     = "Dai 3 Kokutai"
    location = 1613
    base     = 1613
    division =
    { experience = 25
      id         = { type = 10300 id = 327 }
      name       = "Dai 27 Keibakugeki Hikodan"
      strength   = 100
      type       = tactical_bomber
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 328 }
      name       = "Dai 59 Kyokutsi Hikodan"
      strength   = 100
      type       = interceptor
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 329 }
      name       = "Dai 75 Hikodan"
      strength   = 100
      type       = tactical_bomber
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 332 }
      name       = "Dai 60 Keibakugeki Hikodan"
      strength   = 100
      type       = tactical_bomber
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 333 }
      name       = "Dai 64 Kyokutsi Hikodan"
      strength   = 100
      type       = interceptor
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 334 }
      name       = "Dai 98 Kaigunkogeki Hikodan"
      strength   = 100
      type       = naval_bomber
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 335 }
      name       = "Dai 31 Kaigunkogeki Hikodan"
      strength   = 100
      type       = naval_bomber
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 337 }
      name       = "Dai 77 Kyokutsi Hikodan"
      strength   = 100
      type       = interceptor
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 338 }
      name       = "Dai 1 Kyokutsi Hikodan"
      strength   = 100
      type       = interceptor
      model      = 2
    }
  }
  airunit =
  { id       = { type = 10300 id = 340 }
    name     = "Dai 5 Kokutai"
    location = 1337
    base     = 1337
    division =
    { experience = 25
      id         = { type = 10300 id = 341 }
      name       = "Dai 8 Keibakugeki Hikodan"
      strength   = 100
      type       = tactical_bomber
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 342 }
      name       = "Dai 14 Keibakugeki Hikodan"
      strength   = 100
      type       = tactical_bomber
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 343 }
      name       = "Dai 16 Kaigunkogeki Hikodan"
      strength   = 100
      type       = naval_bomber
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10300 id = 344 }
      name       = "Dai 50 Kyokutsi Hikodan"
      strength   = 100
      type       = interceptor
      model      = 2
    }
    division =
    { id       = { type = 10300 id = 345 }
      name     = "Dai 11 Yuso Hikodan"
      strength = 100
      type     = transport_plane
    }
    division =
    { id       = { type = 10300 id = 346 }
      name     = "Dai 12 Yuso Hikodan"
      strength = 100
      type     = transport_plane
    }
  }
  division_development =
  { name  = "IJN Yamato"
    type  = battleship
    model = 6
    cost  = 12.2
    id    = { type = 10300 id = 1100 }
    date  = { year = 1941 month = december day = 12 }
  }
  division_development =
  { name  = "IJN Musashi"
    type  = battleship
    model = 6
    cost  = 12.2
    id    = { type = 10300 id = 1101 }
    date  = { year = 1942 month = august day = 5 }
  }
  division_development =
  { name  = "IJN Shokaku"
    type  = carrier
    model = 3
    cost  = 5.4
    id    = { type = 10300 id = 1102 }
    date  = { year = 1941 month = august day = 8 }
    extra = cag
    brigade_model = 4
  }
  division_development =
  { name  = "IJN Zuikaku"
    type  = carrier
    model = 3
    cost  = 5.4
    id    = { type = 10300 id = 1104 }
    date  = { year = 1941 month = september day = 25 }
    extra = cag
    brigade_model = 4
  }
  division_development =
  { name  = "IJN Shoho"
    type  = escort_carrier
    model = 1
    cost  = 3.8
    id    = { type = 10300 id = 1118 }
    date  = { year = 1942 month = january day = 26 }
  }
  division_development =
  { name  = "IJN Chiyoda"
    type  = escort_carrier
    model = 1
    cost  = 3.8
    id    = { type = 10300 id = 1107 }
    date  = { year = 1942 month = november day = 6 }
  }
  division_development =
  { name  = "Dai 2 Koku Sentai"
    type  = carrier
    model = 0
    cost  = 3.8
    id    = { type = 10300 id = 1106 }
    date  = { year = 1942 month = january day = 26 }
    extra = cag
    brigade_model = 4
  }
  division_development =
  { name  = "IJN Junyo"
    type  = carrier
    model = 1
    cost  = 3.8
    id    = { type = 10300 id = 1110 }
    date  = { year = 1942 month = may day = 5 }
    extra = cag
    brigade_model = 4
  }
  division_development =
  { name  = "IJN Hiyo"
    type  = carrier
    model = 1
    cost  = 3.8
    id    = { type = 10300 id = 1112 }
    date  = { year = 1942 month = july day = 31 }
    extra = cag
    brigade_model = 4
  }
  division_development =
  { name  = "IJN Kashii"
    type  = light_cruiser
    model = 1
    cost  = 3.2
    id    = { type = 10300 id = 1114 }
    date  = { year = 1941 month = december day = 5 }
  }
  division_development =
  { name  = "Dai 52 Kuchikusentai"
    type  = destroyer
    model = 2
    cost  = 1.6
    id    = { type = 10300 id = 1115 }
    date  = { year = 1941 month = october day = 1 }
  }
  division_development =
  { name  = "Dai 34 Sensuisentai"
    type  = submarine
    model = 2
    cost  = 1.5
    id    = { type = 10300 id = 1116 }
    date  = { year = 1941 month = august day = 1 }
  }
  division_development =
  { name  = "Dai 35 Sensuisentai"
    type  = submarine
    model = 3
    cost  = 2.3
    id    = { type = 10300 id = 1117 }
    date  = { year = 1941 month = september day = 1 }
  }
}
