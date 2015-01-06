
##############################
# Country definition for CHI #
##############################

province =
{ id         = 1215
  naval_base = { size = 10 current_size = 10 }
}              # Qingdao
province = { id = 1228 ic = -2 } # Zhengzhou -IC from move industry
province =
{ id         = 1237
  anti_air   = 2
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Shanghai
province =
{ id       = 1238
  air_base = { size = 10 current_size = 10 }
}            # Hangzhou
province =
{ id       = 1244
  air_base = { size = 1 current_size = 1 }
}            # Fuzhou
province =
{ id       = 1251
  air_base = { size = 10 current_size = 10 }
}            # Nanchang
province = { id = 1261 ic = 5 } # Huaihua IC from move industry
province =
{ id       = 1262
  air_base = { size = 3 current_size = 3 }
}            # Zunyi
province = { id = 1276 IC = 3 infra = 0.2 } # Lanzhou ic + infra from move industry
province = { id = 1280 IC = 16 energy = 14 metal = 7 rare_materials = 4 } # Chongqing (ic + resources from event 4104,4105,4107,4108,4109)

province =
{ id         = 1313
  ic = -6
  air_base   = { size = 3 current_size = 3 }
  naval_base = { size = 5 current_size = 5 }
}              # Guangzhou
province =
{ id         = 1320
  naval_base = { size = 5 current_size = 5 }
}              # Zhanjiang
province =
{ id         = 1321
  anti_air   = 2
  air_base   = { size = 6 current_size = 6 }
  naval_base = { size = 10 current_size = 10 }
  supplypool = 500
  oilpool    = 50
}              # Hainan
province =
{ id       = 1360
  air_base = { size = 3 current_size = 3 }
}            # Chengdu

#####################
# Country main data #
#####################

country =
{ tag                    = CHI
  capital                = 1280 # Chongqing
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 20
  manpower               = 2170
  dissent                = 10
  diplomacy =
  { relation = { tag = CGX value = 200 }
    relation = { tag = CSX value = 200 }
    relation = { tag = CXB value = 200 }
    relation = { tag = CYN value = 200 }
    relation = { tag = ENG value = 100 }
    relation = { tag = JAP value = -200 }
    relation = { tag = MAN value = -200 }
    relation = { tag = MEN value = -200 }
    relation = { tag = CHC value = 100 }
    relation = { tag = SIK value = -125 }
  }
  nationalprovinces      = { 1275 1276 1277 1440 1441 1267 1268 1269 1270 1271 1278 1222 1223 1224 1227 1228 1229 1230 1273 1274 1439 1207 1208 1272
			     1209 1225 1226 1203 1204 1205 1206 1210 1211 1212 1213 1214 1215 1216 1386 1398 1388 1397 1202 1377 1387 1389 1390 1394
			     1395 1396 1374 1375 1378 1379 1380 1381 1382 1530 1218 1221 1233 1234 1217 1219 1220 1235 1236 1237 1263 1265 1279 1280
			     1360 1361 1231 1232 1253 1264 1266 1238 1239 1240 1241 1262 1363 1364 1365 1255 1256 1257 1259 1260 1261 1242 1250 1251
			     1252 1254 1243 1244 1245 1246 1247 1293 1294 1305 1307 1308 1327 1362 1281 1282 1283 1448 1450 1451 1452 1453 1442 1443
			     1444 1421 1430 1431 1432 1433 1435 1445 1446 1447 1258 1309 1310 1311 1319 1325 1248 1249 1312 1313 1314 1317 1318 1320
			     1321 1322 1323 1324 1385 1399 1404 1419 1420 1434 1436 1437 1438
			   }
  ownedprovinces         = { 1276 1277 1267 1268 1269 1278 1222 1223 1224 1227 1228 1229 1230 1214 1215 1218 1219 1221 1233 1234 1217 1220 1235 1236 1237
			     1263 1265 1279 1280 1360 1361 1231 1232 1253 1264 1266 1238 1239 1240 1241 1262 1363 1364 1365 1255 1256 1257 1259 1260
			     1261 1242 1250 1251 1252 1254 1243 1244 1245 1246 1247 1248 1249 1312 1313 1314 1317 1318 1320 1321
			   }
  # Guangdong
  controlledprovinces    = { 1276 1277 1267 1268 1269 1278 1227 1228 1229 1263 1265 1279 1280 1360 1361 1231 1264 1266 1240 1241 1262 1363 1364 1365
			     1255 1256 1257 1259 1260 1261 1242 1250 1254 1243 1244 1245 1246 1247 1249 1312 1313 1314 1317 1318 1320
			   }
  # ROTW Minor Tech '36
  # Group E 1939 techs
  # ######################
  techapps               = { 1110 4010 2150 2290 1010 1020 1310 1190 6210 6300 3010 3070 3080 3130 5080 5090 5100 8050 9010 14000 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 5 }
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
  headofstate            = { type = 9 id = 52001 }
  headofgovernment       = { type = 9 id = 52027 }
  foreignminister        = { type = 9 id = 52035 }
  armamentminister       = { type = 9 id = 52047 }
  ministerofsecurity     = { type = 9 id = 52066 }
  ministerofintelligence = { type = 9 id = 52079 }
  chiefofstaff           = { type = 9 id = 52089 }
  chiefofarmy            = { type = 9 id = 52097 }
  chiefofnavy            = { type = 9 id = 52102 }
  chiefofair             = { type = 9 id = 52108 }
  dormant_teams		 = { 1005 }
  dormant_leaders	 = { 50304 }
  # ######
  # CHINA 1939 Land OOB
  # TYPE: 22000
  # ######
  landunit =
  { location = 1227 # Luoyang
    name     = "2. Juntuan"
    # ## leader = #
    id       = { type = 22000 id = 1 }
    division =
    { id         = { type = 22000 id = 2 }
      name       = "30. Jun"
      type       = bergsjaeger
      experience = 30
    }
    division =
    { id         = { type = 22000 id = 3 }
      name       = "42. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id   = { type = 22000 id = 4 }
      name = "68. Jun"
      type = militia
    }
    division =
    { id   = { type = 22000 id = 5 }
      name = "40. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1229 # Nanyang (Luoyang)
    name     = "3. Juntuan"
    # ## leader = #
    id       = { type = 22000 id = 6 }
    division =
    { id   = { type = 22000 id = 7 }
      name = "12. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1269 # Xi'an (Luoyang)
    name     = "Bei Henan Tifang Juntuan"
    # ## leader = #
    id       = { type = 22000 id = 8 }
    division =
    { id   = { type = 22000 id = 9 }
      name = "97. Jun"
      type = militia
    }
    division =
    { id         = { type = 22000 id = 10 }
      name       = "Xin 5. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id   = { type = 22000 id = 11 }
      name = "76. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1228 # Zhengzhou (Luoyang)
    name     = "14. Juntuan"
    # ## leader = #
    id       = { type = 22000 id = 12 }
    division =
    { id         = { type = 22000 id = 13 }
      name       = "14. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id   = { type = 22000 id = 14 }
      name = "93. Jun"
      type = militia
    }
    division =
    { id   = { type = 22000 id = 15 }
      name = "98. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1269 # Xianyang (Xi'an)
    name     = "4. Juntuan"
    # ## leader = #
    id       = { type = 22000 id = 16 }
    division =
    { id         = { type = 22000 id = 17 }
      name       = "38. Jun"
      type       = bergsjaeger
      experience = 30
    }
    division =
    { id         = { type = 22000 id = 18 }
      name       = "47. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id   = { type = 22000 id = 19 }
      name = "96. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1247 # Xiamen (Xi'an)
    name     = "5. Juntuan"
    # ## leader = #
    id       = { type = 22000 id = 20 }
    division =
    { id   = { type = 22000 id = 21 }
      name = "3. Jun"
      type = militia
    }
    division =
    { id   = { type = 22000 id = 22 }
      name = "15. Jun"
      type = militia
    }
    division =
    { id   = { type = 22000 id = 23 }
      name = "17. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1273 # Yinchuan
    name     = "Shanxi-Shaanxi-Suiyuan Bianqu"
    # ## leader = #
    id       = { type = 22000 id = 24 }
    division =
    { id   = { type = 22000 id = 25 }
      name = "Xin 1. Jun"
      type = militia
    }
    division =
    { id   = { type = 22000 id = 26 }
      name = "22. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1241 # Quzhou (Wenzhou)
    name     = "10. Juntuan"
    # ## leader = #
    id       = { type = 22000 id = 27 }
    division =
    { id         = { type = 22000 id = 28 }
      name       = "28. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id   = { type = 22000 id = 29 }
      name = "91. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1249 # Chao'an (Fuzhou)
    name     = "23. Juntuan"
    # ## leader = #
    id       = { type = 22000 id = 30 }
    division =
    { id         = { type = 22000 id = 31 }
      name       = "21. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id   = { type = 22000 id = 32 }
      name = "50. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1244 # Fuzhou
    name     = "25. Juntuan"
    # ## leader = #
    id       = { type = 22000 id = 33 }
    division =
    { id   = { type = 22000 id = 34 }
      name = "100. Jun"
      type = militia
    }
    division =
    { id           = { type = 22000 id = 35 }
      name         = "Xin 28. Bubing Shi"
      type         = militia
      max_strength = 33
      strength     = 33
    }
  }
  landunit =
  { location = 1242 # Shangrao (Wenzhou)
    name     = "32. Juntuan"
    # ## leader = #
    id       = { type = 22000 id = 36 }
    division =
    { id   = { type = 22000 id = 37 }
      name = "25. Jun"
      type = militia
    }
    division =
    { id   = { type = 22000 id = 38 }
      name = "29. Jun"
      type = militia
    }
    division =
    { id           = { type = 22000 id = 39 }
      name         = "67. Bubing Shi"
      type         = militia
      max_strength = 33
      strength     = 33
    }
  }
  landunit =
  { location = 1317 # Jiangmen
    name     = "9. Juntuan"
    # ## leader = #
    id       = { type = 22000 id = 40 }
    division =
    { id         = { type = 22000 id = 41 }
      name       = "4. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id   = { type = 22000 id = 42 }
      name = "49. Jun"
      type = militia
    }
    division =
    { id   = { type = 22000 id = 43 }
      name = "65. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1312 # Shaoguan
    name     = "12. Juntuan"
    # ## leader = #
    id       = { type = 22000 id = 44 }
    division =
    { id   = { type = 22000 id = 45 }
      name = "66. Jun"
      type = militia
    }
    division =
    { id   = { type = 22000 id = 46 }
      name = "62. Jun"
      type = militia
    }
    division =
    { id   = { type = 22000 id = 47 }
      name = "63. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1229 # Nanyang (Xiangfan)
    name     = "11. Juntuan"
    # ## leader = #
    id       = { type = 22000 id = 48 }
    division =
    { id         = { type = 22000 id = 49 }
      name       = "84. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id   = { type = 22000 id = 50 }
      name = "39. Jun"
      type = militia
    }
    division =
    { id         = { type = 22000 id = 51 }
      name       = "92. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
  }
  landunit =
  { location = 1260 # Changde (Xiangfan)
    name     = "33. Juntuan"
    # ## leader = #
    id       = { type = 22000 id = 52 }
    division =
    { id         = { type = 22000 id = 53 }
      name       = "55. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id   = { type = 22000 id = 54 }
      name = "59. Jun"
      type = militia
    }
    division =
    { id   = { type = 22000 id = 55 }
      name = "77. Jun"
      type = militia
    }
    division =
    { id         = { type = 22000 id = 56 }
      name       = "26. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
  }
  landunit =
  { location = 1250 # Ganzhou (Xiangfan)
    name     = "22. Juntuan"
    # ## leader = #
    id       = { type = 22000 id = 57 }
    division =
    { id         = { type = 22000 id = 58 }
      name       = "41. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id   = { type = 22000 id = 59 }
      name = "45. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1231 # Xiangfan
    name     = "29. Juntuan"
    # ## leader = #
    id       = { type = 22000 id = 60 }
    division =
    { id         = { type = 22000 id = 61 }
      name       = "44. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id   = { type = 22000 id = 62 }
      name = "67. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1276 # Lanzhou
    name     = "8. Zhanqu Budui"
    # ## leader = #
    id       = { type = 22000 id = 63 }
    division =
    { id   = { type = 22000 id = 64 }
      name = "80. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1254 # Pingxiang (Changsha)
    name     = "19. Juntuan"
    # ## leader = #
    id       = { type = 22000 id = 65 }
    division =
    { id   = { type = 22000 id = 66 }
      name = "74. Jun"
      type = militia
    }
    division =
    { id         = { type = 22000 id = 67 }
      name       = "79. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id   = { type = 22000 id = 68 }
      name = "6. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1318 # Maoming (Hengyang)
    name     = "27. Juntuan"
    # ## leader = #
    id       = { type = 22000 id = 69 }
    division =
    { id   = { type = 22000 id = 70 }
      name = "20. Jun"
      type = militia
    }
    division =
    { id   = { type = 22000 id = 71 }
      name = "70. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1257 # Hengyang
    name     = "Hunan-Hubei-Jiangxi Bianqu"
    # ## leader = #
    id       = { type = 22000 id = 72 }
    division =
    { id   = { type = 22000 id = 73 }
      name = "8. Jun"
      type = militia
    }
    division =
    { id         = { type = 22000 id = 74 }
      name       = "73. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
  }
  landunit =
  { location = 1257 # Hengyang
    name     = "31. Juntuan"
    # ## leader = #
    id       = { type = 22000 id = 75 }
    division =
    { id         = { type = 22000 id = 76 }
      name       = "18. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id   = { type = 22000 id = 77 }
      name = "78. Jun"
      type = militia
    }
    division =
    { id   = { type = 22000 id = 78 }
      name = "37. Jun"
      type = militia
    }
    division =
    { id         = { type = 22000 id = 79 }
      name       = "52. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
  }
  landunit =
  { location = 1255 # Changsha
    name     = "20. Juntuan"
    # ## leader = #
    id       = { type = 22000 id = 80 }
    division =
    { id   = { type = 22000 id = 81 }
      name = "53. Jun"
      type = militia
    }
    division =
    { id         = { type = 22000 id = 82 }
      name       = "54. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id   = { type = 22000 id = 83 }
      name = "87. Jun"
      type = militia
    }
    division =
    { id         = { type = 22000 id = 84 }
      name       = "2. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
  }
  landunit =
  { location = 1231 # Xi'an
    name     = "34. Juntuan"
    # ## leader = #
    id       = { type = 22000 id = 85 }
    division =
    { id   = { type = 22000 id = 86 }
      name = "16. Jun"
      type = militia
    }
    division =
    { id   = { type = 22000 id = 87 }
      name = "27. Jun"
      type = militia
    }
    division =
    { id   = { type = 22000 id = 88 }
      name = "90. Jun"
      type = militia
    }
    division =
    { id         = { type = 22000 id = 89 }
      name       = "Juntuan Qibing"
      type       = cavalry
      model      = 1
      experience = 30
    }
    division =
    { id   = { type = 22000 id = 90 }
      name = "Shaanxi Baoantui"
      type = militia
    }
  }
  landunit =
  { location = 1227 # Luoyang
    name     = "Jiangsu-Shandong Zhanqu"
    # ## leader = #
    id       = { type = 22000 id = 91 }
    division =
    { id   = { type = 22000 id = 92 }
      name = "51. Jun"
      type = militia
    }
    division =
    { id   = { type = 22000 id = 93 }
      name = "57. Jun"
      type = militia
    }
    division =
    { id   = { type = 22000 id = 94 }
      name = "89. Jun"
      type = militia
    }
    division =
    { id   = { type = 22000 id = 95 }
      name = "Shandong Youjidui"
      type = militia
    }
  }
  landunit =
  { location = 1266 # Yichang (Luoyang)
    name     = "Hebei-Chahar Zhanqu"
    # ## leader = #
    id       = { type = 22000 id = 96 }
    division =
    { id         = { type = 22000 id = 97 }
      name       = "55. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id   = { type = 22000 id = 98 }
      name = "59. Jun"
      type = militia
    }
    division =
    { id   = { type = 22000 id = 99 }
      name = "77. Jun"
      type = militia
    }
    division =
    { id         = { type = 22000 id = 100 }
      name       = "26. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
  }
  landunit =
  { location = 1280 # Chongqing
    name     = "Zhong Daiji Budui"
    # ## leader = #
    id       = { type = 22000 id = 101 }
    division =
    { id   = { type = 22000 id = 102 }
      name = "1. Jun"
      type = militia
    }
    division =
    { id   = { type = 22000 id = 103 }
      name = "31. Jun"
      type = militia
    }
    division =
    { id         = { type = 22000 id = 104 }
      name       = "36. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id   = { type = 22000 id = 105 }
      name = "71. Jun"
      type = militia
    }
    division =
    { id   = { type = 22000 id = 106 }
      name = "99. Jun"
      type = militia
    }
    division =
    { id         = { type = 22000 id = 107 }
      name       = "5. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id         = { type = 22000 id = 108 }
      name       = "Haiguan Jingcha Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
  }
  landunit =
  { location = 1262 # Zunyi
    name     = "Shang Chang Jiang Jingbei"
    # ## leader = #
    id       = { type = 22000 id = 109 }
    division =
    { id   = { type = 22000 id = 110 }
      name = "94. Jun"
      type = militia
    }
    division =
    { id         = { type = 22000 id = 111 }
      name       = "75. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id         = { type = 22000 id = 112 }
      name       = "85. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id   = { type = 22000 id = 113 }
      name = "13. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1277 # Wudu (Tianshui)
    name     = "Sichuan-Shaanxi-Hubei Bianqu"
    # ## leader = #
    id       = { type = 22000 id = 114 }
    division =
    { id   = { type = 22000 id = 115 }
      name = "56. Jun"
      type = militia
    }
    division =
    { id   = { type = 22000 id = 116 }
      name = "95. Jun"
      type = militia
    }
    division =
    { id   = { type = 22000 id = 117 }
      name = "Xin 6. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1240 # Wenzhou
    name     = "Zhejiang Jingbei"
    # ## leader = #
    id       = { type = 22000 id = 118 }
    division =
    { id   = { type = 22000 id = 119 }
      name = "Zhejiang Baoantui"
      type = militia
    }
  }
  landunit =
  { location = 1244 # Fuzhou
    name     = "Fujian Jingbei"
    # ## leader = #
    id       = { type = 22000 id = 120 }
    division =
    { id   = { type = 22000 id = 121 }
      name = "Fujian Baoantui"
      type = militia
    }
  }
  landunit =
  { location = 1320 # Zhanjiang
    name     = "Guangdong Jingbei"
    # ## leader = #
    id       = { type = 22000 id = 122 }
    division =
    { id   = { type = 22000 id = 123 }
      name = "Guangdong Baoantui"
      type = militia
    }
  }
  landunit =
  { location = 1364 # Guiyang
    name     = "Guizhou Jingbei"
    # ## leader = #
    id       = { type = 22000 id = 124 }
    division =
    { id   = { type = 22000 id = 125 }
      name = "Guizhou Baoantui"
      type = militia
    }
  }
  landunit =
  { location = 1360 # Chengdu
    name     = "Sichuan Jingbei"
    # ## leader = #
    id       = { type = 22000 id = 126 }
    division =
    { id   = { type = 22000 id = 127 }
      name = "Sichuan Baoantui"
      type = militia
    }
  }
  landunit =
  { location = 1231 # Xiangfan
    name     = "Hubei Jingbei"
    # ## leader = #
    id       = { type = 22000 id = 128 }
    division =
    { id   = { type = 22000 id = 129 }
      name = "Hubei Baoantui"
      type = militia
    }
  }
  landunit =
  { location = 1255 # Changsha
    name     = "Hunan Jingbei"
    # ## leader = #
    id       = { type = 22000 id = 130 }
    division =
    { id   = { type = 22000 id = 131 }
      name = "Hunan Baoantui"
      type = militia
    }
  }
  landunit =
  { location = 1312 # Shaoguan
    name     = "Jiangxi Jingbei"
    # ## leader = #
    id       = { type = 22000 id = 132 }
    division =
    { id   = { type = 22000 id = 133 }
      name = "Jiangxi Baoantui"
      type = militia
    }
  }
  landunit =
  { location = 1227 # Luoyang
    name     = "Henan Jingbei"
    # ## leader = #
    id       = { type = 22000 id = 134 }
    division =
    { id   = { type = 22000 id = 135 }
      name = "Henan Baoantui"
      type = militia
    }
  }
  landunit =
  { location = 1276 # Lanzhou
    name     = "Gansu Jingbei"
    # ## leader = #
    id       = { type = 22000 id = 136 }
    division =
    { id   = { type = 22000 id = 137 }
      name = "Gansu Baoantui"
      type = militia
    }
  }
  landunit =
  { location = 1280 # Chongqing
    name     = "Chongqing Jingbei"
    # ## leader = #
    id       = { type = 22000 id = 138 }
    division =
    { id         = { type = 22000 id = 139 }
      name       = "Chongqing Jingcha Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
  }
  landunit =
  { location = 1240 # Wenzhou
    name     = "Zhongcheng Zhengjiu Jun"
    # ## leader = #
    id       = { type = 22000 id = 141 }
    division =
    { id   = { type = 22000 id = 142 }
      name = "Zhongcheng Zhengjiu Jun"
      type = bergsjaeger
    }
  }
  # ######
  # China 1939 Airforce OOB
  # TYPE : 22000
  # ######
  airunit =
  { location = 1262 # Zunyi
    id       = { type = 22000 id = 404 }
    name     = "Russian Volunteer Group"
    base     = 1262 # Zunyi
    division =
    { id    = { type = 22000 id = 405 }
      name  = "Qianjiji Hang Kong Dui"
      type  = interceptor
      model = 1
    }
    division =
    { id    = { type = 22000 id = 407 }
      name  = "Hongzhaji Hang Kong Dui"
      type  = tactical_bomber
      model = 1
    }
  }
  division_development =
  { name = "Xin 11. Jun"
    id   = { type = 22000 id = 140 }
    type = infantry
    cost = 3
    date = { day = 25 year = 1939 month = december }
  }
}
