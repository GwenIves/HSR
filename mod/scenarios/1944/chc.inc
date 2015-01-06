
##############################
# Country definition for CHC #
##############################

country =
{ tag                    = CHC
  regular_id             = CHI
  intrinsic_gov_type     = leninist
  capital                = 1271 # Yan'an
  # Resource Reserves
  energy                 = 5000
  metal                  = 5000
  rare_materials         = 800
  oil                    = 500
  supplies               = 1000
  manpower               = 330
  SpyInfo                = { country = "CHC" NumberOfSpies = 5}
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 10
    free_market       = 1
    freedom           = 2
    professional_army = 5
    defense_lobby     = 10
    interventionism   = 5
  }
  nationalprovinces      = { 1275 1276 1277 1440 1441 1267 1268 1269 1270 1271 1278 1222 1223 1224 1227 1228 1229 1230 1273 1274 1439 1207 1208 1272
			     1209 1225 1226 1203 1204 1205 1206 1210 1211 1212 1213 1214 1215 1216 1386 1398 1388 1397 1202 1377 1387 1389 1390 1394
			     1395 1396 1374 1375 1378 1379 1380 1381 1382 1530 1218 1221 1233 1234 1217 1219 1220 1235 1236 1237 1263 1265 1279 1280
			     1360 1361 1231 1232 1253 1264 1266 1238 1239 1240 1241 1262 1363 1364 1365 1255 1256 1257 1259 1260 1261 1242 1250 1251
			     1252 1254 1243 1244 1245 1246 1247 1293 1294 1305 1307 1308 1327 1362 1281 1282 1283 1448 1450 1451 1452 1453 1442 1443
			     1444 1421 1430 1431 1432 1433 1435 1445 1446 1447 1258 1309 1310 1311 1319 1325 1248 1249 1312 1313 1314 1317 1318 1320
			     1321 1322 1323 1324 1385 1399 1404 1419 1420 1434 1436 1437 1438
			   }
  ownedprovinces         = { 1270 1271 1275 }
  controlledprovinces    = { 1270 1271 1275 }
  # ROTW Minor Tech '36
  # Group D 1944 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1110  1120  1130  1190  1200  1210  1220  1310  14000 14010 2010  2020  2030  2040  2050  2070
			     2150  2160  2290  2300  2310  2320  2330  2330  2400  2410  2450  2460  2470  2510  2520  4010  4020  4030  4120  4130
			     4140  5010  5050  5080  5090  5100  5190  5200  6210  6300  6310  6320  6340  9010  9020
			   }
  diplomacy =
  { relation = { tag = CGX value = 100 }
    relation = { tag = CHI value = 100 }
    relation = { tag = CSX value = 100 }
    relation = { tag = CXB value = 100 }
    relation = { tag = CYN value = 100 }
    relation = { tag = JAP value = -200 }
  }
  headofstate            = { type = 9 id = 51001 }
  headofgovernment       = { type = 9 id = 51002 }
  foreignminister        = { type = 9 id = 51019 }
  armamentminister       = { type = 9 id = 51025 }
  ministerofsecurity     = { type = 9 id = 51033 }
  ministerofintelligence = { type = 9 id = 51039 }
  chiefofstaff           = { type = 9 id = 51045 }
  chiefofarmy            = { type = 9 id = 51050 }
  chiefofnavy            = { type = 9 id = 51009 }
  chiefofair             = { type = 9 id = 51010 }
  landunit =
  { location = 1271 # Yanan
    name     = "8. Lujun"
    leader   = 76312 # Zhu De
    id       = { type = 11571 id = 1 }
    division =
    { experience = 25
      id         = { type = 11571 id = 2 }
      name       = "115. Zhidui"
      type       = bergsjaeger
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 11571 id = 3 }
      name       = "120. Bubing Shi"
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 11571 id = 4 }
      name       = "129. Bubing Shi"
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 11571 id = 10 }
      name       = "7. Bubing Lü"
      type       = Militia
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 11571 id = 11 }
      name       = "93. Bubing Shi"
      type       = infantry
      model      = 1
    }
  }
  landunit =
  { location = 1270 # Xianyang
    name     = "4. Hongjun"
    # leader = 	#Zhu De duplicate of above
    id       = { type = 11571 id = 5 }
    division =
    { experience = 25
      id         = { type = 11571 id = 6 }
      name       = "24. Bubing Shi"
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 11571 id = 9 }
      name       = "12. Bubing Shi"
      type       = infantry
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 11571 id = 7 }
      name       = "8. Bubing Lü"
      type       = Militia
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 11571 id = 8 }
      name       = "9. Bubing Lü"
      type       = Militia
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 11571 id = 12 }
      name       = "10. Bubing Lü"
      type       = Militia
      model      = 1
    }
  }
}
