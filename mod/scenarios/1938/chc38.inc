
##############################
# Country definition for CHC #
##############################

province = { id = 1270 province_revoltrisk = 10 } # Xianyang
province = { id = 1271 province_revoltrisk = 10 } # Yan'an
province = { id = 1275 province_revoltrisk = 10 } # Pingliang

#####################
# Country main data #
#####################

country =
{ tag                    = CHC
  regular_id             = CHI
  intrinsic_gov_type     = leninist
  capital                = 1271 # Yan'an
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  manpower               = 330
  dissent                = 5
  diplomacy =
  { relation = { tag = CGX value = 100 }
    relation = { tag = CHI value = 100 }
    relation = { tag = CSX value = 100 }
    relation = { tag = CXB value = 100 }
    relation = { tag = CYN value = 100 }
    relation = { tag = JAP value = -200 }
    relation = { tag = SIK value = -125 }
  }
  nationalprovinces      = { 1275 1276 1277 1440 1441 1267 1268 1269 1270 1271 1278 1222 1223 1224 1227 1228 1229 1230 1273 1274 1439 1207 1208 1272
			     1209 1225 1226 1203 1204 1205 1206 1210 1211 1212 1213 1214 1215 1216 1386 1398 1388 1397 1202 1377 1387 1389 1390 1394
			     1395 1396 1374 1375 1378 1379 1380 1381 1382 1530 1218 1221 1233 1234 1217 1219 1220 1235 1236 1237 1263 1265 1279 1280
			     1360 1361 1231 1232 1253 1264 1266 1238 1239 1240 1241 1262 1363 1364 1365 1255 1256 1257 1259 1260 1261 1242 1250 1251
			     1252 1254 1243 1244 1245 1246 1247 1293 1294 1305 1307 1308 1327 1362 1281 1282 1283 1448 1450 1451 1452 1453 1442 1443
			     1444 1421 1430 1431 1432 1433 1435 1445 1446 1447 1258 1309 1310 1311 1319 1325 1248 1249 1312 1313 1314 1317 1318 1320
			     1321 1322 1323 1324
			   }
  ownedprovinces         = { 1270 1271 1275 }
  controlledprovinces    = { 1270 1271 1275 }
  # Taiwan
  # GW infantry
  techapps               = { 1010 1110 1190 14080 2150 2290 4010 6210 6300 }
  SpyInfo                = { country = "CHC" NumberOfSpies = 4 }

  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 9
    free_market       = 1
    freedom           = 2
    professional_army = 5
    defense_lobby     = 10
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 51001 }
  headofgovernment       = { type = 9 id = 51002 }
  foreignminister        = { type = 9 id = 51003 }
  armamentminister       = { type = 9 id = 51004 }
  ministerofsecurity     = { type = 9 id = 51005 }
  ministerofintelligence = { type = 9 id = 51006 }
  chiefofstaff           = { type = 9 id = 51007 }
  chiefofarmy            = { type = 9 id = 51008 }
  chiefofnavy            = { type = 9 id = 51009 }
  chiefofair             = { type = 9 id = 51010 }
  # ######
  # COMMUNIST CHINA 1939 Land OOB
  # TYPE: 11571
  # ######
  landunit =
  { location = 1270 # Xianyang
    name     = "18. Juntuan"
    id       = { type = 11571 id = 1 }
    division =
    { id   = { type = 11571 id = 2 }
      name = "115. Bubing Shi"
      type = bergsjaeger
    }
    division =
    { id   = { type = 11571 id = 3 }
      name = "120. Bubing Shi"
      type = bergsjaeger
    }
    division =
    { id    = { type = 11571 id = 4 }
      name  = "129. Bubing Shi"
      type  = infantry
      extra = artillery
    }
    division =
    { id   = { type = 11571 id = 5 }
      name = "1. Zongdui Shi"
      type = militia
    }
    division =
    { id   = { type = 11571 id = 6 }
      name = "3. Zongdui Shi"
      type = militia
    }
    division =
    { id   = { type = 11571 id = 7 }
      name = "4. Zongdui Shi"
      type = militia
    }
    division =
    { id           = { type = 11571 id = 8 }
      name         = "Duli 1. Bubing Lü"
      type         = infantry
      max_strength = 50
      strength     = 50
    }
    division =
    { id           = { type = 11571 id = 9 }
      name         = "Duli 2. Bubing Lü"
      type         = infantry
      max_strength = 50
      strength     = 50
    }
    division =
    { id   = { type = 11571 id = 10 }
      name = "Dong Zongdui Shi"
      type = militia
    }
    division =
    { id   = { type = 11571 id = 11 }
      name = "Shanxi Xin Jun"
      type = infantry
    }
  }
  landunit =
  { location = 1271 # Yan'an
    name     = "Shaanxi-Gan-Ning Jingbei"
    id       = { type = 11571 id = 12 }
    division =
    { id   = { type = 11571 id = 13 }
      name = "Jingbei Juntuan"
      type = infantry
    }
    division =
    { id           = { type = 11571 id = 14 }
      name         = "385. Bubing Lü"
      type         = bergsjaeger
      max_strength = 50
      strength     = 50
    }
    division =
    { id           = { type = 11571 id = 15 }
      name         = "359. Bubing Lü"
      type         = bergsjaeger
      max_strength = 50
      strength     = 50
    }
    division =
    { id   = { type = 11571 id = 16 }
      name = "Baoantui"
      type = infantry
    }
    division =
    { id   = { type = 11571 id = 17 }
      name = "1. Zongdui Shi"
      type = militia
    }
  }
  landunit =
  { location = 1271 # South Anhui (Nantong)
    name     = "Xin 4. Jun"
    id       = { type = 11571 id = 18 }
    division =
    { id   = { type = 11571 id = 19 }
      name = "1. Fenqian"
      type = militia
    }
    division =
    { id   = { type = 11571 id = 20 }
      name = "2. Fenqian"
      type = militia
    }
    division =
    { id   = { type = 11571 id = 21 }
      name = "3. Fenqian"
      type = militia
    }
    division =
    { id   = { type = 11571 id = 22 }
      name = "4. Fenqian"
      type = militia
    }
    division =
    { id   = { type = 11571 id = 23 }
      name = "5. Fenqian"
      type = militia
    }
    division =
    { id   = { type = 11571 id = 24 }
      name = "6. Fenqian"
      type = militia
    }
    division =
    { id   = { type = 11571 id = 25 }
      name = "Henan-Hubei Qianke"
      type = militia
    }
  }
}
