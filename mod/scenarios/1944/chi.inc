
##############################
# Country definition for CHI #
##############################

province =
{ id         = 1204
  naval_base = { size = 6 current_size = 6 }
  air_base   = { size = 6 current_size = 6 }
}              # Tianjin
province =
{ id         = 1215
  naval_base = { size = 10 current_size = 10 }
}              # Qingdao
province = { id = 1228 ic = -2 } # Zhengzhou
province =
{ id         = 1237
  naval_base = { size = 10 current_size = 10 }
}              # Shanghai
province =
{ id       = 1238
  air_base = { size = 10 current_size = 10 }
}            # Hangzhou
province =
{ id         = 1239
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # Ningbo
province =
{ id       = 1244
  air_base = { size = 1 current_size = 1 }
}            # Fuzhou
province =
{ id       = 1250
  air_base = { size = 3 current_size = 3 }
}            # Ganzhou
province =
{ id       = 1251
  air_base = { size = 10 current_size = 10 }
}            # Nanchang
province =
{ id       = 1257
  air_base = { size = 3 current_size = 3 }
}            # Hengyang
province =
{ id       = 1259
  air_base = { size = 2 current_size = 2 }
}            # Shaoyang
province =
{ id       = 1260
  air_base = { size = 3 current_size = 3 }
}            # Changde
province = { id = 1261 ic = 5 } # Huaihua
province =
{ id       = 1264
  anti_air = 2
  air_base = { size = 3 current_size = 3 }
}            # Enshi
province = { id = 1268 ic = 6 } # Nancheng
province = { id = 1269 ic = 6 } # Xi'an
province =
{ id       = 1276
  ic = 3
  infra = 0.2
  air_base = { size = 3 current_size = 3 }
}            # Lanzhou
province = { id = 1279 ic = 6 } # Nanchong
province =
{ id       = 1280
  ic       = 16
  air_base = { size = 3 current_size = 3 }
}            # Chongqing
province =
{ id         = 1313
  ic = -6
  air_base   = { size = 3 current_size = 3 }
  naval_base = { size = 5 current_size = 5 }
}   # Guangzhou
province =
{ id         = 1320
  naval_base = { size = 5 current_size = 5 }
}              # Zhanjiang
province =
{ id       = 1360
  air_base = { size = 7 current_size = 7 }
}            # Chengdu
province = { id = 1361 ic = 6 } # Zigong
province =
{ id       = 1364
  air_base = { size = 3 current_size = 3 }
}            # Guiyang
province =
{ id       = 1433
  air_base = { size = 1 current_size = 1 }
}            # Urumqi

#####################
# Country main data #
#####################

country =
{ tag                    = CHI
  capital                = 1280 # Chongqing
  # Resource Reserves
  energy                 = 5000
  metal                  = 5000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  manpower               = 2170
  dissent                = 5
  SpyInfo                = { country = "CHI" NumberOfSpies = 6 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    free_market       = 9
    freedom           = 4
    professional_army = 3
    defense_lobby     = 8
    interventionism   = 6
  }
  nationalprovinces      = { 1275 1276 1277 1440 1441 1267 1268 1269 1270 1271 1278 1222 1223 1224 1227 1228 1229 1230 1273 1274 1439 1207 1208 1272
			     1209 1225 1226 1203 1204 1205 1206 1210 1211 1212 1213 1214 1215 1216 1386 1398 1388 1397 1202 1377 1387 1389 1390 1394
			     1395 1396 1374 1375 1378 1379 1380 1381 1382 1530 1218 1221 1233 1234 1217 1219 1220 1235 1236 1237 1263 1265 1279 1280
			     1360 1361 1231 1232 1253 1264 1266 1238 1239 1240 1241 1262 1363 1364 1365 1255 1256 1257 1259 1260 1261 1242 1250 1251
			     1252 1254 1243 1244 1245 1246 1247 1293 1294 1305 1307 1308 1327 1362 1281 1282 1283 1448 1450 1451 1452 1453 1442 1443
			     1444 1421 1430 1431 1432 1433 1435 1445 1446 1447 1258 1309 1310 1311 1319 1325 1248 1249 1312 1313 1314 1317 1318 1320
			     1321 1322 1323 1324 1385 1399 1404 1419 1420 1434 1436 1437 1438
			   }
  ownedprovinces         = { 1214 1215 1224 1320 1321 1318 1312 1313 1317 1314 1360 1361 1363 1364 1365 1277 1269 1268 1267 1266 1279 1280 1265 1264
			     1263 1262 1261 1260 1259 1257 1256 1255 1254 1253 1252 1251 1250 1249 1248 1247 1246 1245 1244 1243 1242 1241 1240 1239
			     1238 1237 1236 1235 1234 1233 1232 1231 1230 1229 1228 1227 1223 1222 1221 1220 1219 1218 1217 1204 1276 1278 1421 1432
			     1433 1435 1446 1447 1445 1430 1431
			   }
  controlledprovinces    = { 1227 1228 1229 1250 1257 1259 1260 1261 1262 1263 1264 1265 1266 1267 1268 1269 1276 1277 1278 1279 1280 1312 1360 1361
			     1363 1364 1365 1241 1242 1243 1246 1249 1421 1432 1433 1435 1446 1447 1445 1430 1431 1231 1313
			   }
  # ROTW Minor Tech '36
  # Group D 1944 techs
  # ######################
  techapps               = { 4010  4020  4030  4120  4130  4140  2010  2020  2030  2040  2050  2070  2150  2160  2290  2300  2310  2320  2330  1010
			     1020  1030  1040  1190  1200  1210  1220  1110  1120  2330  2400  2410  2450  2460  2470  2510  2520  1310  9010  9020
			     5010  5050  5080  5090  5100  5190  5200  6210  6300  6310  6320  3010  3070  3080  3130  8050  14000 14010
			   }
  diplomacy =
  { relation = { tag = CHC value = 100 }
    relation = { tag = CGX value = 200 }
    relation = { tag = CSX value = 200 }
    relation = { tag = CXB value = 200 }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -200 }
    relation = { tag = MAN value = -200 }
    relation = { tag = MEN value = -200 }
    relation = { tag = SOV value = 125 }
    relation = { tag = USA value = 130 }
    relation = { tag = ENG value = 50 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GER value = -50 }
  }
  dormant_teams		 = { 1005 }
  dormant_ministers      = { 52003 52042 52064 52030 52033 52001 52023 52001 52023 52039 }
  dormant_leaders	 = { 50304 }

  headofstate            = { type = 9 id = 52022 }
  headofgovernment       = { type = 9 id = 52002 }
  foreignminister        = { type = 9 id = 52037 }
  armamentminister       = { type = 9 id = 52054 }
  ministerofsecurity     = { type = 9 id = 52069 }
  ministerofintelligence = { type = 9 id = 52083 }
  chiefofstaff           = { type = 9 id = 52091 }
  chiefofarmy            = { type = 9 id = 52098 }
  chiefofnavy            = { type = 9 id = 52103 }
  chiefofair             = { type = 9 id = 52010 }

  # ## OOB
  landunit =
  { location = 1250
    name     = "2. Lujun"
    id       = { type = 11616 id = 1 }
    division =
    { experience   = 15
      id           = { type = 11616 id = 2 }
      name         = "30. Jun"
      type         = militia
      model        = 0
      organisation = 3
    }
    division =
    { experience   = 15
      id           = { type = 11616 id = 3 }
      name         = "42. Jun"
      type         = militia
      model        = 0
      organisation = 3
    }
    division =
    { experience   = 15
      id           = { type = 11616 id = 4 }
      name         = "58. Jun"
      type         = militia
      model        = 0
      organisation = 3
    }
    division =
    { experience   = 15
      id           = { type = 11616 id = 6 }
      name         = "40. Jun"
      type         = militia
      model        = 0
      organisation = 3
    }
    division =
    { experience   = 15
      id           = { type = 11616 id = 7 }
      name         = "76. Jun"
      type         = militia
      model        = 0
      organisation = 3
    }
    division =
    { experience   = 15
      id           = { type = 11616 id = 8 }
      name         = "12. Jun"
      type         = militia
      model        = 0
      organisation = 3
    }
  }
  landunit =
  { location = 1319
    name     = "4. Lujun"
    id       = { type = 11616 id = 12 }
    division =
    { experience = 15
      id         = { type = 11616 id = 13 }
      name       = "38. Jun"
      type       = militia
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 14 }
      name       = "47. Jun"
      type       = infantry
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 15 }
      name       = "96. Jun"
      type       = militia
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 17 }
      name       = "3. Jun"
      type       = militia
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 18 }
      name       = "15. Jun"
      type       = militia
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 19 }
      name       = "17. Jun"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1246
    name     = "6. Lujun"
    id       = { type = 11616 id = 20 }
    division =
    { experience   = 15
      id           = { type = 11616 id = 21 }
      name         = "19. Jun"
      type         = militia
      model        = 0
      organisation = 3
    }
    division =
    { experience   = 15
      id           = { type = 11616 id = 22 }
      name         = "61. Jun"
      type         = militia
      model        = 0
      organisation = 3
    }
    division =
    { experience   = 15
      id           = { type = 11616 id = 23 }
      name         = "1 Qui-Jun"
      type         = cavalry
      model        = 2
      organisation = 3
    }
    division =
    { experience   = 15
      id           = { type = 11616 id = 103 }
      name         = "51. Jun"
      type         = militia
      model        = 0
      organisation = 3
    }
  }
  landunit =
  { location = 1260
    name     = "7. Lujun"
    id       = { type = 11616 id = 24 }
    division =
    { experience = 15
      id         = { type = 11616 id = 25 }
      name       = "Xin 1. Jun"
      type       = infantry
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 26 }
      name       = "22. Jun"
      type       = militia
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 79 }
      name       = "74. Jun"
      type       = infantry
      model      = 2
    }
  }
  landunit =
  { location = 1227
    name     = "15. Lujun"
    id       = { type = 11616 id = 110 }
    division =
    { experience = 15
      id         = { type = 11616 id = 27 }
      name       = "35. Jun"
      type       = militia
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 28 }
      name       = "Manchuria Advanced Corps"
      type       = infantry
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 81 }
      name       = "73. Jun"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1228
    name     = "10. Lujun"
    id       = { type = 11616 id = 33 }
    division =
    { experience = 15
      id         = { type = 11616 id = 34 }
      name       = "28. Jun"
      type       = militia
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 35 }
      name       = "91. Jun"
      type       = infantry
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 36 }
      name       = "4. New Corps"
      type       = infantry
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 30 }
      name       = "14. Jun"
      type       = militia
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 31 }
      name       = "93. Jun"
      type       = militia
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 32 }
      name       = "98. Jun"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1243
    name     = "23. Lujun"
    id       = { type = 11616 id = 37 }
    division =
    { experience   = 15
      id           = { type = 11616 id = 38 }
      name         = "21. Jun"
      type         = militia
      model        = 0
      organisation = 3
    }
    division =
    { experience   = 15
      id           = { type = 11616 id = 39 }
      name         = "50. Jun"
      type         = militia
      model        = 0
      organisation = 3
    }
    division =
    { experience   = 15
      id           = { type = 11616 id = 40 }
      name         = "100. Jun"
      type         = militia
      model        = 0
      organisation = 3
    }
    division =
    { experience   = 15
      id           = { type = 11616 id = 42 }
      name         = "25. Jun"
      type         = militia
      model        = 0
      organisation = 3
    }
    division =
    { experience   = 15
      id           = { type = 11616 id = 43 }
      name         = "29. Jun"
      type         = militia
      model        = 0
      organisation = 3
    }
    division =
    { experience   = 15
      id           = { type = 11616 id = 44 }
      name         = "Xin 28. Jun"
      type         = infantry
      model        = 2
      organisation = 3
    }
    division =
    { experience   = 15
      id           = { type = 11616 id = 113 }
      name         = "Xin 2. Jun"
      type         = motorized
      model        = 0
      strength     = 33
      organisation = 3
    }
  }
  landunit =
  { location = 1227
    name     = "9. Lujun"
    id       = { type = 11616 id = 45 }
    division =
    { experience = 15
      id         = { type = 11616 id = 46 }
      name       = "4. Jun"
      type       = infantry
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 47 }
      name       = "65. Jun"
      type       = militia
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 48 }
      name       = "83. Jun"
      type       = infantry
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 50 }
      name       = "62. Jun"
      type       = militia
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 51 }
      name       = "63. Jun"
      type       = militia
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 52 }
      name       = "66. Jun"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1272 # Yinchuan 		containing the communist
    name     = "11. Lujun"
    id       = { type = 11616 id = 56 }
    division =
    { experience = 15
      id         = { type = 11616 id = 57 }
      name       = "84. Jun"
      type       = militia
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 58 }
      name       = "39. Jun"
      type       = militia
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 59 }
      name       = "7. Jun"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1309 # Nanning	4. War Area, Kwangtung-Kwangsi
    name     = "22. Lujun"
    id       = { type = 11616 id = 60 }
    division =
    { experience = 15
      id         = { type = 11616 id = 61 }
      name       = "44. Jun"
      type       = militia
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 62 }
      name       = "48. Jun"
      type       = militia
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 63 }
      name       = "45. Jun"
      type       = infantry
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 54 }
      name       = "46. Jun"
      type       = militia
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 55 }
      name       = "64. Jun"
      type       = militia
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 10 }
      name       = "9. Jun"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1229
    name     = "33. Lujun"
    id       = { type = 11616 id = 64 }
    division =
    { experience = 15
      id         = { type = 11616 id = 65 }
      name       = "55. Jun"
      type       = militia
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 11 }
      name       = "1. Jun (Temporary)"
      type       = militia
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 66 }
      name       = "59. Jun"
      type       = infantry
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 67 }
      name       = "77. Jun"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1327 # Mojiang
    name     = "29. Lujun"
    id       = { type = 11616 id = 68 }
    division =
    { experience = 15
      id         = { type = 11616 id = 69 }
      name       = "Xin 2. Jun"
      type       = infantry
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 77 }
      name       = "83. Jun"
      type       = militia
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 70 }
      name       = "80. Jun"
      type       = militia
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 71 }
      name       = "82. Jun"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1241
    name     = "Qibing Lujun"
    id       = { type = 11616 id = 72 }
    division =
    { experience   = 15
      id           = { type = 11616 id = 73 }
      name         = "2. Qibing Jun"
      type         = cavalry
      model        = 2
      organisation = 3
    }
    division =
    { experience   = 15
      id           = { type = 11616 id = 74 }
      name         = "5 Qibing Jun"
      type         = cavalry
      model        = 2
      organisation = 3
    }
    division =
    { experience   = 15
      id           = { type = 11616 id = 75 }
      name         = "6 Qibing Jun"
      type         = cavalry
      model        = 2
      organisation = 3
    }
    division =
    { experience   = 15
      id           = { type = 11616 id = 80 }
      name         = "8. Jun"
      type         = infantry
      model        = 2
      organisation = 3
    }
    division =
    { experience   = 15
      id           = { type = 11616 id = 104 }
      name         = "57. Jun"
      type         = militia
      model        = 0
      organisation = 3
    }
    division =
    { experience   = 15
      id           = { type = 11616 id = 105 }
      name         = "89. Jun"
      type         = militia
      model        = 0
      organisation = 3
    }
  }
  landunit =
  { location = 1307 # Baoshan	Hunan province 1706;Changsha
    name     = "1. Lujun"
    id       = { type = 11616 id = 82 }
    division =
    { experience = 15
      id         = { type = 11616 id = 83 }
      name       = "58. Jun"
      type       = militia
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 118 }
      name       = "81. Jun"
      type       = militia
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 84 }
      name       = "3. New Corps"
      type       = infantry
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 85 }
      name       = "60. Jun"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1242
    name     = "19. Lujun"
    id       = { type = 11616 id = 86 }
    division =
    { experience   = 15
      id           = { type = 11616 id = 87 }
      name         = "79. Jun"
      type         = militia
      model        = 0
      organisation = 3
    }
    division =
    { experience   = 15
      id           = { type = 11616 id = 88 }
      name         = "49. Jun"
      type         = militia
      model        = 0
      organisation = 3
    }
    division =
    { experience   = 15
      id           = { type = 11616 id = 89 }
      name         = "70. Jun"
      type         = militia
      model        = 0
      organisation = 3
    }
    division =
    { experience   = 15
      id           = { type = 11616 id = 91 }
      name         = "53. Jun"
      type         = militia
      model        = 0
      organisation = 3
    }
    division =
    { experience   = 15
      id           = { type = 11616 id = 92 }
      name         = "54. Jun"
      type         = militia
      model        = 0
      organisation = 3
    }
    division =
    { experience   = 15
      id           = { type = 11616 id = 93 }
      name         = "87. Jun"
      type         = militia
      model        = 0
      organisation = 3
    }
  }
  landunit =
  { location = 1231
    name     = "27. Lujun"
    id       = { type = 11616 id = 94 }
    division =
    { experience = 15
      id         = { type = 11616 id = 95 }
      name       = "78. Jun"
      type       = infantry
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 96 }
      name       = "20. Jun"
      type       = militia
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 97 }
      name       = "72. Jun"
      type       = militia
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 99 }
      name       = "16. Jun"
      type       = infantry
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 100 }
      name       = "27. Jun"
      type       = militia
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 101 }
      name       = "90. Jun"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1259
    name     = "31. Lujun"
    id       = { type = 11616 id = 106 }
    division =
    { experience = 15
      id         = { type = 11616 id = 107 }
      name       = "Xin 5. Jun"
      type       = infantry
      model      = 2
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 108 }
      name       = "69. Jun"
      type       = militia
      model      = 0
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 109 }
      name       = "99. Jun"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1433 # Urumqi
    name     = "Xinjiang Jun"
    id       = { type = 11616 id = 129 }
    division =
    { experience = 15
      id         = { type = 11616 id = 119 }
      name       = "1. Bubing Shi"
      type       = militia
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 120 }
      name       = "2. Bubing Shi"
      type       = militia
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 121 }
      name       = "3. Bubing Shi"
      type       = militia
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 122 }
      name       = "4. Bubing Shi"
      type       = militia
    }
  }
  airunit =
  { location = 1307 # Baoshan
    base     = 1307
    name     = "The Flying Tigers"
    # leader = 	#Chennault
    id       = { type = 11616 id = 111 }
    division =
    { experience = 75
      id         = { type = 11616 id = 112 }
      name       = "The Flying Tigers"
      type       = interceptor
      model      = 2
    }
  }
  airunit =
  { location = 1280 # Shaoyang
    base     = 1280
    name     = "Zhongguo Kongjun"
    id       = { type = 11616 id = 114 }
    division =
    { experience = 15
      id         = { type = 11616 id = 115 }
      name       = "1. Zhandouji"
      type       = interceptor
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 116 }
      name       = "1. Hongzhaji"
      type       = tactical_bomber
      strength   = 50
    }
    division =
    { experience = 15
      id         = { type = 11616 id = 117 }
      name       = "1. Kongyunji"
      type       = transport_plane
      strength   = 30
    }
  }
  airunit =
  { location = 1433 # Urumqi
    base     = 1433
    name     = "Xinjiang Kongjun"
    id       = { type = 11616 id = 127 }
    division =
    { experience = 15
      id         = { type = 11616 id = 128 }
      name       = "Zhandouji Zhongdui"
      type       = interceptor
      strength   = 20
    }
  }
}
