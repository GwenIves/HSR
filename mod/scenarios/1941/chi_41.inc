
##############################
# Country definition for CHI #
##############################

province =
{ id         = 1215
  naval_base = { size = 10 current_size = 10 }
}              # Qingdao
province = { id = 1228 ic = -2 } # Zhengzhou
province =
{ id         = 1237
  anti_air   = 2
  air_base   = { size = 6 current_size = 6 }
  naval_base = { size = 10 current_size = 10 }
}              # Shanghai
province =
{ id       = 1238
  air_base = { size = 10 current_size = 10 }
}            # Hangzhou
province = { id = 1243 ic = 2 } # Nanping
province =
{ id       = 1244
  air_base = { size = 1 current_size = 1 }
}            # Fuzhou
province =
{ id       = 1250
  ic       = 1
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
{ id       = 1260
  ic       = 1
  air_base = { size = 3 current_size = 3 }
}            # Changde
province = { id = 1261 ic = 5 } # Huaihua

province =
{ id       = 1264
  ic       = 1
  anti_air = 2
  air_base = { size = 3 current_size = 3 }
}            # Enshi
province = { id = 1268 ic = 2 } # Nancheng
province = { id = 1276 ic = 3 infra = 0.2 } # Lanzhou (ic + infra from event 4106)
province = { id = 1279 ic = 1 } # Nanchong
province = { id = 1280 IC = 16 energy = 14 metal = 7 rare_materials = 4 } # Chongqing
province =
{ id         = 1320
  naval_base = { size = 5 current_size = 5 }
}              # Zhanjiang
province =
{ id         = 1321
  anti_air   = 2
  air_base   = { size = 6 current_size = 6 }
  naval_base = { size = 10 current_size = 10 }
}              # Hainan
province =
{ id       = 1360
  air_base = { size = 3 current_size = 3 }
}            # Chengdu
province = { id = 1361 ic = 2 } # Zigong

#####################
# Country main data #
#####################

country =
{ tag                    = CHI
  capital                = 1280 # Chongqing
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 100
  manpower               = 2170
  dissent                = 15
  transports             = 10
  escorts                = 2
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
  nationalprovinces      = { 1275 1276 1277 1440 1441 1267 1268 1269 1270 1271 1278 1222 1223 1224 1227 1228 1229 1230 1273 1274 1439 1207 1208 1272
			     1209 1225 1226 1203 1204 1205 1206 1210 1211 1212 1213 1214 1215 1216 1386 1398 1388 1397 1202 1377 1387 1389 1390 1394
			     1395 1396 1374 1375 1378 1379 1380 1381 1382 1530 1218 1221 1233 1234 1217 1219 1220 1235 1236 1237 1263 1265 1279 1280
			     1360 1361 1231 1232 1253 1264 1266 1238 1239 1240 1241 1262 1363 1364 1365 1255 1256 1257 1259 1260 1261 1242 1250 1251
			     1252 1254 1243 1244 1245 1246 1247 1293 1294 1305 1307 1308 1327 1362 1281 1282 1283 1448 1450 1451 1452 1453 1442 1443
			     1444 1421 1430 1431 1432 1433 1435 1445 1446 1447 1258 1309 1310 1311 1319 1325 1248 1249 1312 1313 1314 1317 1318 1320
			     1321 1322 1323 1324 1385 1399 1404 1419 1420 1434 1436 1437 1438
			   }
  # To Yunnan 1327 1305 1308 1362 1307 1293
  # To Xibei San Ma 1273 1275 1274
  # To Guanxi-Guangdong Clique 1309 1310 1258 1311 1248 1325  1319
  ownedprovinces         = { 1312 1249 1318 1320 1317 1217 1220 1221 1218 1223 1222 1230 1233 1234 1238 1239 1237 1236 1321 1314 1313 1235 1232 1253
			     1252 1251 1248 1228 1244 1282 1281 1360 1361 1363 1364 1365 1276 1277 1269 1268 1267 1266 1279 1280 1265 1264 1263 1262
			     1261 1260 1259 1257 1256 1255 1254 1250 1246 1243 1242 1241 1247 1245 1240 1231 1229 1227 1278 1219 1214 1215 1224
			   }
  # To Yunnan 1327 1305 1308 1362 1307 1293
  # To Xibei San Ma 1273 1276 1275 1274
  # To Guanxi-Guangdong Clique 1309 1310 1258 1311 1312 1249 1248  1318 1325  1319
  controlledprovinces    = { 1312 1249 1318 1320 1276 1277 1228 1244 1282 1281 1360 1361 1363 1364 1365 1269 1268 1267 1266 1279 1280 1265 1264 1263
			     1262 1261 1260 1259 1257 1256 1255 1254 1250 1246 1243 1242 1241 1231 1229 1227 1278
			   }
  # Group E 1941 techs
  # ######################
  techapps               = { 1110  4010  4020  2010  2020  2030  2040  2150  2290  2300  2310  2320  2330  2400  2450  2460  2510  1010  1020  1310
			     1190  5080  5090  5100  6210  6300  3010  3070  3080  3130  8050  9010  14000 14010
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
  }
  headofstate            = { type = 9 id = 52001 }
  headofgovernment       = { type = 9 id = 52027 }
  foreignminister        = { type = 9 id = 52036 }
  armamentminister       = { type = 9 id = 52050 }
  ministerofsecurity     = { type = 9 id = 52068 }
  ministerofintelligence = { type = 9 id = 52080 }
  chiefofstaff           = { type = 9 id = 52090 }
  chiefofarmy            = { type = 9 id = 52097 }
  chiefofnavy            = { type = 9 id = 52102 }
  chiefofair             = { type = 9 id = 52109 }
  dormant_teams		 = { 1005 }
  dormant_ministers      = { 52003 52042 52064 52030 52033 }
  dormant_leaders	 = { 50304 }
  landunit =
  { location = 1260 # Changde (Xiangfan)
    name     = "2. Juntuan"
    id       = { type = 11616 id = 1 }
    division =
    { id   = { type = 11616 id = 2 }
      name = "30. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 3 }
      name = "Hubei-Henan Youjidui"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 4 }
      name = "68. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1228 # Zhengzhou (Luoyang)
    name     = "3. Juntuan"
    id       = { type = 11616 id = 5 }
    division =
    { id   = { type = 11616 id = 6 }
      name = "12. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 7 }
      name = "Xin 12. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 8 }
      name = "71. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1231 # Xiangfan (Xi'an)
    name     = "14. Juntuan"
    id       = { type = 11616 id = 9 }
    division =
    { id         = { type = 11616 id = 10 }
      name       = "14. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id   = { type = 11616 id = 11 }
      name = "93. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 12 }
      name = "15. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 13 }
      name = "17. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 14 }
      name = "9. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 15 }
      name = "27. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1311 # Wuzhou (Luoyang)
    name     = "36. Juntuan"
    id       = { type = 11616 id = 16 }
    division =
    { id         = { type = 11616 id = 17 }
      name       = "47. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
  }
  landunit =
  { location = 1269 # Xianyang (Xi'an)
    name     = "4. Juntuan"
    id       = { type = 11616 id = 18 }
    division =
    { id         = { type = 11616 id = 19 }
      name       = "38. Jun"
      type       = bergsjaeger
      experience = 30
    }
    division =
    { id   = { type = 11616 id = 20 }
      name = "96. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1260 # Changde (Xi'an)
    name     = "5. Juntuan"
    id       = { type = 11616 id = 21 }
    division =
    { id   = { type = 11616 id = 22 }
      name = "3. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 23 }
      name = "98. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1273 # Yinchuan
    name     = "Shanxi-Shaanxi-Suiyuan Bianqu"
    id       = { type = 11616 id = 24 }
    division =
    { id   = { type = 11616 id = 25 }
      name = "22. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 26 }
      name = "90. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1244 # Wenzhou
    name     = "10. Juntuan"
    id       = { type = 11616 id = 27 }
    division =
    { id   = { type = 11616 id = 28 }
      name = "10. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 29 }
      name = "88. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 30 }
      name = "28. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 31 }
      name = "Wenzhou-Taizhou-Ningbo Jingbei"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 32 }
      name = "Zhejiang Baoantui"
      type = militia
    }
  }
  landunit =
  { location = 1241 # Wenzhou
    name     = "25. Juntuan"
    id       = { type = 11616 id = 33 }
    division =
    { id   = { type = 11616 id = 34 }
      name = "100. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 35 }
      name = "Fujian Baoantui"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 36 }
      name = "Zhejiang Tifang Jun"
      type = militia
    }
  }
  landunit =
  { location = 1249 # Chao'an (Shaoguan)
    name     = "23. Juntuan"
    id       = { type = 11616 id = 37 }
    division =
    { id   = { type = 11616 id = 38 }
      name = "21. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 39 }
      name = "50. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 40 }
      name = "25. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1246 # Longyan (Shaoguan)
    name     = "32. Juntuan"
    id       = { type = 11616 id = 41 }
    division =
    { id   = { type = 11616 id = 42 }
      name = "70. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 43 }
      name = "49. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 44 }
      name = "86. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1242 # Wenzhou
    name     = "3. Zhanqu Jun"
    id       = { type = 11616 id = 45 }
    division =
    { id   = { type = 11616 id = 46 }
      name = "2. Youjidui Qu"
      type = militia
    }
  }
  landunit =
  { location = 1318 # Maoming (Jiangmen)
    name     = "9. Juntuan"
    id       = { type = 11616 id = 47 }
    division =
    { id         = { type = 11616 id = 48 }
      name       = "54. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id   = { type = 11616 id = 49 }
      name = "6. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1325 # Bobai (Qinzhou)
    name     = "35. Juntuan"
    id       = { type = 11616 id = 50 }
    division =
    { id         = { type = 11616 id = 51 }
      name       = "64. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id   = { type = 11616 id = 52 }
      name = "52. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 53 }
      name = "Guangdong-Kwangsi Bianqu"
      type = militia
    }
  }
  landunit =
  { location = 1312 # Shaoguan
    name     = "12. Juntuan"
    id       = { type = 11616 id = 54 }
    division =
    { id         = { type = 11616 id = 55 }
      name       = "62. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id   = { type = 11616 id = 56 }
      name = "65. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 57 }
      name = "63. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 58 }
      name = "Linshi 2. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 59 }
      name = "Fujian-Guangdong-Jiangxi Bianqu"
      type = militia
    }
  }
  landunit =
  { location = 1229 # Nanyang (Xiangfan)
    name     = "33. Juntuan"
    id       = { type = 11616 id = 60 }
    division =
    { id         = { type = 11616 id = 61 }
      name       = "55. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id   = { type = 11616 id = 62 }
      name = "59. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 63 }
      name = "77. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1229 # Nanyang (Xiangfan)
    name     = "22. Juntuan"
    id       = { type = 11616 id = 64 }
    division =
    { id         = { type = 11616 id = 65 }
      name       = "41. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id   = { type = 11616 id = 66 }
      name = "45. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1266 # Yichang (Xiangfan)
    name     = "29. Juntuan"
    id       = { type = 11616 id = 67 }
    division =
    { id   = { type = 11616 id = 68 }
      name = "67. Jun"
      type = militia
    }
    division =
    { id         = { type = 11616 id = 69 }
      name       = "44. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
  }
  landunit =
  { location = 1227 # Luoyang
    name     = "Henan-Anhwei-Jiangsu Bianqu"
    id       = { type = 11616 id = 70 }
    division =
    { id         = { type = 11616 id = 71 }
      name       = "2. Qibing Jun"
      type       = cavalry
      experience = 30
    }
  }
  landunit =
  { location = 1243 # Nanping (Changsha)
    name     = "19. Juntuan"
    id       = { type = 11616 id = 72 }
    division =
    { id   = { type = 11616 id = 73 }
      name = "74. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 74 }
      name = "32. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1320 # Zhanjiang (Hengyang)
    name     = "30. Juntuan"
    id       = { type = 11616 id = 75 }
    division =
    { id   = { type = 11616 id = 76 }
      name = "72. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 77 }
      name = "78. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1256 # Zhuzhou (Hengyang)
    name     = "27. Juntuan"
    id       = { type = 11616 id = 78 }
    division =
    { id   = { type = 11616 id = 79 }
      name = "Hunan-Hubei-Jiangxi Vanguard Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 80 }
      name = "20. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1250 # Ganzhou (Hengyang)
    name     = "15. Juntuan"
    id       = { type = 11616 id = 81 }
    division =
    { id   = { type = 11616 id = 82 }
      name = "4. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 83 }
      name = "37. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 84 }
      name = "99. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1255 # Changsha
    name     = "20. Juntuan"
    id       = { type = 11616 id = 85 }
    division =
    { id   = { type = 11616 id = 86 }
      name = "53. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 87 }
      name = "87. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1262 # Zunyi
    name     = "Chang Jiang Shang Jingbei"
    id       = { type = 11616 id = 88 }
    division =
    { id         = { type = 11616 id = 89 }
      name       = "73. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id         = { type = 11616 id = 90 }
      name       = "18. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id         = { type = 11616 id = 91 }
      name       = "26. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id   = { type = 11616 id = 92 }
      name = "Hubei Zhong Youjidui"
      type = militia
    }
  }
  landunit =
  { location = 1257 # Hengyang
    name     = "26. Juntuan"
    id       = { type = 11616 id = 93 }
    division =
    { id   = { type = 11616 id = 94 }
      name = "75. Jun"
      type = militia
    }
    division =
    { id         = { type = 11616 id = 95 }
      name       = "92. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id   = { type = 11616 id = 96 }
      name = "94. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 97 }
      name = "79. Jun"
      type = militia
    }
    division =
    { id         = { type = 11616 id = 98 }
      name       = "2. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id         = { type = 11616 id = 99 }
      name       = "8. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
  }
  landunit =
  { location = 1269 # Xi'an
    name     = "34. Juntuan"
    id       = { type = 11616 id = 100 }
    division =
    { id         = { type = 11616 id = 101 }
      name       = "1. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id   = { type = 11616 id = 102 }
      name = "16. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 103 }
      name = "36. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 104 }
      name = "76. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 105 }
      name = "80. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1254 # Lianyungang
    name     = "Jiangsu-Shandong Zhanqu"
    id       = { type = 11616 id = 106 }
    division =
    { id   = { type = 11616 id = 107 }
      name = "51. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 108 }
      name = "89. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 109 }
      name = "Shandong Youjidui"
      type = militia
    }
  }
  landunit =
  { location = 1227 # Luoyang
    name     = "39. Juntuan"
    id       = { type = 11616 id = 110 }
    division =
    { id   = { type = 11616 id = 111 }
      name = "Chahar Youjidui"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 112 }
      name = "69. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1227 # Luoyang
    name     = "24. Juntuan"
    id       = { type = 11616 id = 113 }
    division =
    { id   = { type = 11616 id = 114 }
      name = "40. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 115 }
      name = "Xin 5. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 116 }
      name = "Hopei Minshi Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 117 }
      name = "Hopei Baoantui"
      type = militia
    }
  }
  landunit =
  { location = 1277 # Wudu (Tianshui)
    name     = "Sichuan-Shaanxi-Hubei Bianqu"
    id       = { type = 11616 id = 118 }
    division =
    { id   = { type = 11616 id = 119 }
      name = "56. Jun"
      type = militia
    }
    division =
    { id   = { type = 11616 id = 120 }
      name = "95. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1273 # Yinchuan
    name     = "8. Zhanqu Direct"
    id       = { type = 11616 id = 121 }
    division =
    { id         = { type = 11616 id = 122 }
      name       = "Manzhou Qianke Jun"
      type       = cavalry
      experience = 30
    }
  }
  landunit =
  { location = 1254 # Pingxiang (Hengyang)
    name     = "31. Juntuan"
    id       = { type = 11616 id = 123 }
    division =
    { id         = { type = 11616 id = 124 }
      name       = "85. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id         = { type = 11616 id = 125 }
      name       = "13. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id         = { type = 11616 id = 126 }
      name       = "Xin 2. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
    division =
    { id         = { type = 11616 id = 127 }
      name       = "5. Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
  }
  landunit =
  { location = 1364 # Guiyang
    name     = "Guizhou Jingbei"
    id       = { type = 11616 id = 128 }
    division =
    { id   = { type = 11616 id = 129 }
      name = "Guizhou Baoantui"
      type = militia
    }
  }
  landunit =
  { location = 1360 # Chengdu
    name     = "Sichuan Jingbei"
    id       = { type = 11616 id = 130 }
    division =
    { id   = { type = 11616 id = 131 }
      name = "Sichuan Baoantui"
      type = militia
    }
  }
  landunit =
  { location = 1231 # Xiangfan
    name     = "Hubei Jingbei"
    id       = { type = 11616 id = 132 }
    division =
    { id   = { type = 11616 id = 133 }
      name = "Hubei Baoantui"
      type = militia
    }
  }
  landunit =
  { location = 1255 # Changsha
    name     = "Hunan Jingbei"
    id       = { type = 11616 id = 134 }
    division =
    { id   = { type = 11616 id = 135 }
      name = "Hunan Baoantui"
      type = militia
    }
  }
  landunit =
  { location = 1312 # Shaoguan
    name     = "Jiangxi Jingbei"
    id       = { type = 11616 id = 136 }
    division =
    { id   = { type = 11616 id = 137 }
      name = "Jiangxi Baoantui"
      type = militia
    }
  }
  landunit =
  { location = 1227 # Luoyang
    name     = "Henan Jingbei"
    id       = { type = 11616 id = 138 }
    division =
    { id   = { type = 11616 id = 139 }
      name = "Henan Baoantui"
      type = militia
    }
  }
  landunit =
  { location = 1269 # Xi'an
    name     = "Shaanxi Jingbei"
    id       = { type = 11616 id = 140 }
    division =
    { id   = { type = 11616 id = 141 }
      name = "Shaanxi Baoantui"
      type = militia
    }
  }
  landunit =
  { location = 1312 # Shaoguan
    name     = "Guangdong Jingbei"
    id       = { type = 11616 id = 142 }
    division =
    { id   = { type = 11616 id = 143 }
      name = "Guangdong Baoantui"
      type = militia
    }
  }
  landunit =
  { location = 1276 # Lanzhou
    name     = "Gansu Jingbei"
    id       = { type = 11616 id = 144 }
    division =
    { id   = { type = 11616 id = 145 }
      name = "Gansu Baoantui"
      type = militia
    }
  }
  landunit =
  { location = 1280 # Chongqing
    name     = "Chongqing Jingbei"
    id       = { type = 11616 id = 146 }
    division =
    { id         = { type = 11616 id = 147 }
      name       = "Chongqing Jingcha Jun"
      type       = infantry
      model      = 1
      experience = 30
    }
  }
  landunit =
  { location = 1319 # Nanning
    name     = "38. Juntuan"
    id       = { type = 11616 id = 148 }
    division =
    { id   = { type = 11616 id = 149 }
      name = "97. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1250 # Ganzhou (Shaoguan)
    name     = "Zhongcheng Zhengjiu Jun"
    id       = { type = 11616 id = 150 }
    division =
    { id         = { type = 11616 id = 151 }
      name       = "Zhongcheng Zhengjiu Jun"
      type       = bergsjaeger
      experience = 30
    }
  }
  landunit =
  { location = 1266 # Yichang
    name     = "1. Fangmianjun"
    # ## leader = #
    id       = { type = 22000 id = 155 }
    division =
    { id         = { type = 22000 id = 156 }
      name       = "1. Fangmianjun"
      type       = HQ
      experience = 30
    }
  }
  landunit =
  { location = 1327 # Kaiyuan (Wenshan)
    name     = "Yunnan-Guizhou Bianqu"
    id       = { type = 11616 id = 153 }
    division =
    { id   = { type = 11616 id = 154 }
      name = "Xin 6. Jun"
      type = bergsjaeger
    }
  }
  # ######
  # China 1941 Airforce OOB
  # TYPE : 11616
  # ######
  airunit =
  { location = 1264 # Chongqing
    id       = { type = 11616 id = 400 }
    name     = "Qianjiji Kongjun"
    base     = 1264 # Chongqing
    division =
    { id           = { type = 11616 id = 401 }
      name         = "3. Dadui"
      max_strength = 5
      strength     = 5
      type         = interceptor
      model        = 1
    }
    division =
    { id           = { type = 11616 id = 402 }
      name         = "5. Dadui"
      max_strength = 5
      strength     = 5
      type         = interceptor
      model        = 1
    }
    division =
    { id           = { type = 11616 id = 403 }
      name         = "4. Dadui"
      max_strength = 5
      strength     = 5
      type         = interceptor
      model        = 1
    }
  }
  airunit =
  { location = 1260 # Chengdu
    id       = { type = 11616 id = 408 }
    name     = "Hongzhaji Kongjun"
    base     = 1260 # Chengdu
    division =
    { id           = { type = 11616 id = 409 }
      name         = "1. Dadui"
      max_strength = 2
      strength     = 2
      type         = tactical_bomber
      model        = 1
    }
    division =
    { id           = { type = 11616 id = 410 }
      name         = "2. Dadui"
      max_strength = 2
      strength     = 2
      type         = tactical_bomber
      model        = 1
    }
    division =
    { id           = { type = 11616 id = 411 }
      name         = "6. Dadui"
      max_strength = 2
      strength     = 2
      type         = tactical_bomber
      model        = 1
    }
    division =
    { id           = { type = 11616 id = 412 }
      name         = "8. Dadui"
      max_strength = 2
      strength     = 2
      type         = tactical_bomber
      model        = 1
    }
  }
  airunit =
  { location = 1260 # Baoshan
    id       = { type = 11616 id = 413 }
    name     = "Flying Tigers"
    base     = 1260 # Zunyi
    division =
    { id    = { type = 11616 id = 414 }
      name  = "Qianjiji Hang Kong Dui"
      type  = interceptor
      model = 3
    }
    division =
    { id    = { type = 11616 id = 415 }
      name  = "Qianjiji Hang Kong Dui"
      type  = interceptor
      model = 3
    }
  }
  division_development =
  { name = "Xin 11. Jun"
    type = infantry
    id   = { type = 11616 id = 152 }
    cost = 0
    date = { year = 1941 month = december day = 25 }
  }
}
