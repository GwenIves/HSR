
##############################
# Country definition for CHI #
##############################

province =
{ id         = 1215
  naval_base = { size = 10 current_size = 10 }
}              # Qingdao
province =
{ id         = 1237
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
province =
{ id       = 1360
  air_base = { size = 3 current_size = 3 }
}            # Chengdu

#####################
# Country main data #
#####################

country =
{ tag                    = CHI
  capital                = 1235 # Nanjing
  # Resource Reserves
  energy                 = 1000
  metal                  = 3000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 10
  manpower               = 1800
  dissent                = 25
  transports             = 10
  escorts                = 2
  diplomacy =
  { relation = { tag = CHC value = -200 }
    relation = { tag = CGX value = 200 }
    relation = { tag = CSX value = 200 access = yes }
    relation = { tag = CXB value = 200 access = yes }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -100 }
    relation = { tag = MAN value = -100 }
  }
  SpyInfo                = { country = "CHI" NumberOfSpies = 5 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  #SpyInfo                = { country = "FRA" NumberOfSpies = 3 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 6 }
  #SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  #SpyInfo                = { country = "CXB" NumberOfSpies = 6 }
  #SpyInfo                = { country = "CHC" NumberOfSpies = 5 }
  #SpyInfo                = { country = "JAP" NumberOfSpies = 8 }
  #SpyInfo                = { country = "CYN" NumberOfSpies = 6 }
  #SpyInfo                = { country = "CSX" NumberOfSpies = 6 }
  #SpyInfo                = { country = "CGX" NumberOfSpies = 3 }
  # Fujian
  nationalprovinces      = { 1275 1276 1277 1440 1441 1267 1268 1269 1270 1271 1278 1222 1223 1224 1227 1228 1229 1230 1273 1274 1439 1207 1208 1272
			     1209 1225 1226 1203 1204 1205 1206 1210 1211 1212 1213 1214 1215 1216 1386 1398 1388 1397 1202 1377 1387 1389 1390 1394
			     1395 1396 1374 1375 1378 1379 1380 1381 1382 1530 1218 1221 1233 1234 1217 1219 1220 1235 1236 1237 1263 1265 1279 1280
			     1360 1361 1231 1232 1253 1264 1266 1238 1239 1240 1241 1262 1363 1364 1365 1255 1256 1257 1259 1260 1261 1242 1250 1251
			     1252 1254 1243 1244 1245 1246 1247 1293 1294 1305 1307 1308 1327 1362 1281 1282 1283 1448 1450 1451 1452 1453 1442 1443
			     1444 1421 1430 1431 1432 1433 1435 1445 1446 1447 1258 1309 1310 1311 1319 1325 1248 1249 1312 1313 1314 1317 1318 1320
			     1321 1322 1323 1324 1385 1399 1404 1419 1420 1434 1436 1437 1438
			   }
  ownedprovinces         = { 1276 1277 1267 1268 1269 1278 1222 1223 1224 1227 1228 1229 1230 1214 1215 1218 1221 1233 1234 1217 1219 1220 1235 1236
			     1237 1263 1265 1279 1280 1360 1361 1231 1232 1253 1264 1266 1238 1239 1240 1241 1262 1363 1364 1365 1255 1256 1257 1259
			     1260 1261 1242 1250 1251 1252 1254 1243 1244 1245 1246 1247
			   }
  # Fujian
  controlledprovinces    = { 1276 1277 1267 1268 1269 1278 1222 1223 1224 1227 1228 1229 1230 1214 1215 1218 1221 1233 1234 1217 1219 1220 1235 1236
			     1237 1263 1265 1279 1280 1360 1361 1231 1232 1253 1264 1266 1238 1239 1240 1241 1262 1363 1364 1365 1255 1256 1257 1259
			     1260 1261 1242 1250 1251 1252 1254 1243 1244 1245 1246 1247
			   }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 1010 1190 2150 2290 3010 3070 3080 3130 4010 4120 5080 5090 8050 9010 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    free_market       = 9
    freedom           = 4
    professional_army = 3
    defense_lobby     = 8
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 52001 }
  headofgovernment       = { type = 9 id = 52002 }
  foreignminister        = { type = 9 id = 52003 }
  armamentminister       = { type = 9 id = 52004 }
  ministerofsecurity     = { type = 9 id = 52005 }
  ministerofintelligence = { type = 9 id = 52006 }
  chiefofstaff           = { type = 9 id = 52007 }
  chiefofarmy            = { type = 9 id = 52008 }
  chiefofnavy            = { type = 9 id = 52009 }
  chiefofair             = { type = 9 id = 52010 }
  dormant_leaders        = { 50370 50377 }
  # CHINA 1936 Land OOB
  landunit =
  { location = 1276 # Lanzhou
    name     = "1. Jun"
    # ## leader = # Chen Jicheng
    id       = { type = 22000 id = 1 }
    division =
    { experience = 20
      id         = { type = 22000 id = 2 }
      name       = "1. Jun"
      type       = infantry
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1269 # Xi'an
    name     = "7. Jun"
    leader   = 50082 # Zeng Wanzhong
    id       = { type = 22000 id = 18 }
    division =
    { experience = 20
      id         = { type = 22000 id = 19 }
      name       = "7. Jun"
      type       = infantry
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1244 # Fuzhou
    name     = "14. Jun"
    leader   = 50329 # Wei Lihuang
    id       = { type = 22000 id = 30 }
    division =
    { experience = 20
      id         = { type = 22000 id = 31 }
      name       = "14. Jun"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1254 # Pingxiang
    name     = "22. Jun"
    # ## leader = # Tan Taoyuan
    id       = { type = 22000 id = 54 }
    division =
    { experience = 20
      id         = { type = 22000 id = 55 }
      name       = "22. Jun"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1254 # Pingxiang
    name     = "27. Jun"
    leader   = 50208 # Liu Xing
    id       = { type = 22000 id = 65 }
    division =
    { experience = 20
      id         = { type = 22000 id = 66 }
      name       = "27. Jun"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1227 # Luoyang
    name     = "30. Jun"
    leader   = 50266 # Sun Lianzhong
    id       = { type = 22000 id = 72 }
    division =
    { experience = 20
      id         = { type = 22000 id = 73 }
      name       = "30. Jun"
      type       = infantry
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1269 # Xi'an
    name     = "37. Jun"
    leader   = 50241 # Mao Pingwen
    id       = { type = 22000 id = 90 }
    division =
    { experience = 20
      id         = { type = 22000 id = 91 }
      name       = "37. Jun"
      type       = infantry
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1278 # Baoji
    name     = "38. Jun"
    leader   = 50270 # Sun Weiru
    id       = { type = 22000 id = 93 }
    division =
    { experience = 20
      id         = { type = 22000 id = 94 }
      name       = "38. Jun"
      type       = infantry
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1240 # Wenzhou
    name     = "39. Jun"
    leader   = 50206 # Liu Heding
    id       = { type = 22000 id = 95 }
    division =
    { experience = 20
      id         = { type = 22000 id = 96 }
      name       = "39. Jun"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1224 # Anyang
    name     = "40. Jun"
    leader   = 50250 # Pang Bingxun
    id       = { type = 22000 id = 97 }
    division =
    { experience = 20
      id         = { type = 22000 id = 98 }
      name       = "40. Jun"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1269 # Xi'an
    name     = "46. Jun"
    # ## leader = # Fan Songfu
    id       = { type = 22000 id = 119 }
    division =
    { experience = 20
      id         = { type = 22000 id = 120 }
      name       = "46. Jun"
      type       = infantry
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1269 # Xi'an
    name     = "51. Jun"
    leader   = 50010 # Yu Xuezhong (Zhang Xuezhong substituted)
    id       = { type = 22000 id = 124 }
    division =
    { experience = 20
      id         = { type = 22000 id = 125 }
      name       = "51. Jun"
      type       = infantry
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1269 # Xi'an
    name     = "57. Jun"
    # ## leader = # Dong Yingbin
    id       = { type = 22000 id = 133 }
    division =
    { experience = 20
      id         = { type = 22000 id = 134 }
      name       = "57. Jun"
      type       = infantry
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1269 # Xi'an
    name     = "67. Jun"
    leader   = 50319 # Wang Yizhe
    id       = { type = 22000 id = 138 }
    division =
    { experience = 20
      id         = { type = 22000 id = 139 }
      name       = "67. Jun"
      type       = infantry
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1276 # Lanzhou
    name     = "1. Xin Jun"
    leader   = 50285 # Deng Baoshan
    id       = { type = 22000 id = 142 }
    division =
    { experience = 20
      id         = { type = 22000 id = 143 }
      name       = "1. Xin Jun"
      type       = infantry
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1241 # Quzhou
    name     = "4. Lujun"
    # ## leader = #
    id       = { type = 22000 id = 151 }
    division =
    { experience = 20
      id         = { type = 22000 id = 152 }
      name       = "4. Lujun"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1269 # Xi'an
    name     = "4. Lujun"
    leader   = 50340 # Yang Hucheng
    id       = { type = 22000 id = 163 }
    division =
    { experience = 20
      id         = { type = 22000 id = 164 }
      name       = "4. Lujun"
      type       = infantry
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1251 # Nanchang
    name     = "20. Lujun"
    leader   = 50007 # Zhang Fang
    id       = { type = 22000 id = 165 }
    division =
    { experience = 20
      id         = { type = 22000 id = 166 }
      name       = "20. Lujun"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1220 # Yangzhou
    name     = "26. Lujun"
    # ## leader = #
    id       = { type = 22000 id = 168 }
    division =
    { experience = 20
      id         = { type = 22000 id = 169 }
      name       = "26. Lujun"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1235 # Nanjing
    name     = "2. Bubing Shi"
    leader   = 50043 # Zheng Dongguo
    id       = { type = 22000 id = 170 }
    division =
    { experience   = 20
      id           = { type = 22000 id = 171 }
      name         = "2. Bubing Shi"
      type         = infantry
      max_strength = 80
      strength     = 80
      model        = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1238 # Hangzhou
    name     = "21. Bubing Shi"
    leader   = 50176 # Li Xianzhou
    id       = { type = 22000 id = 172 }
    division =
    { experience   = 20
      id           = { type = 22000 id = 173 }
      name         = "21. Bubing Shi"
      type         = infantry
      max_strength = 50
      strength     = 50
      model        = 0
    }
  }
  landunit =
  { location = 1219 # Xiangfan
    name     = "51. Bubing Shi"
    leader   = 50326 # Wang Yaoyu
    id       = { type = 22000 id = 176 }
    division =
    { experience   = 20
      id           = { type = 22000 id = 177 }
      name         = "51. Bubing Shi"
      type         = infantry
      max_strength = 50
      strength     = 50
      model        = 0
    }
  }
  landunit =
  { location = 1231 # Xiangfan
    name     = "Jiangxi Silingbu"
    # ## leader = #
    id       = { type = 22000 id = 178 }
    division =
    { experience = 20
      id         = { type = 22000 id = 179 }
      name       = "Jiangxi Silingbu"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1244 # Fuzhou
    name     = "Fujian Silingbu"
    # ## leader = #
    id       = { type = 22000 id = 194 }
    division =
    { experience = 20
      id         = { type = 22000 id = 195 }
      name       = "Fujian Silingbu"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1222 # Fuyang
    name     = "Anhui Silingbu"
    # ## leader = #
    id       = { type = 22000 id = 208 }
    division =
    { experience = 20
      id         = { type = 22000 id = 209 }
      name       = "Anhui Silingbu"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1223 # Kaifeng
    name     = "Henan Silingbu"
    # ## leader = #
    id       = { type = 22000 id = 211 }
    division =
    { experience = 20
      id         = { type = 22000 id = 212 }
      name       = "Henan Silingbu"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1232 # Hankou
    name     = "Hubei Silingbu"
    # ## leader = #
    id       = { type = 22000 id = 224 }
    division =
    { experience = 20
      id         = { type = 22000 id = 225 }
      name       = "Hubei Silingbu"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1232 # Hankou
    name     = "Xibei Silingbu"
    # ## leader = #
    id       = { type = 22000 id = 232 }
    division =
    { experience = 20
      id         = { type = 22000 id = 233 }
      name       = "Xibei Silingbu"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1235 # Nanjing
    name     = "Jiaodao Zongdui"
    leader   = 50156 # Gui Yongqing
    id       = { type = 22000 id = 242 }
    division =
    { experience = 20
      id         = { type = 22000 id = 243 }
      name       = "Jiaodao Zongdui"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1217 # Lianyungang
    name     = "Suijing Zongtuan"
    leader   = 50125 # Huang Jie
    id       = { type = 22000 id = 244 }
    division =
    { experience = 20
      id         = { type = 22000 id = 245 }
      name       = "Customs Police 1st Detachment"
      type       = infantry
      model      = 0
    }
    division =
    { experience = 20
      id         = { type = 22000 id = 246 }
      name       = "Customs Police 2nd Detachment"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1237 # Shanghai
    name     = "Shanghai Jingbei"
    leader   = 50339 # Yang Hu
    id       = { type = 22000 id = 247 }
    division =
    { experience = 20
      id         = { type = 22000 id = 248 }
      name       = "Shanghai Jingbei"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1237 # Ningbo
    name     = "Marine Brigade"
    # ## leader = #
    id       = { type = 22000 id = 251 }
    division =
    { experience = 20
      id         = { type = 22000 id = 252 }
      name       = "Marine Brigade"
      type       = garrison
      model      = 0
    }
  }
  landunit =
  { location = 1235 # Nanjing
    name     = "Jiangsu Baoantui"
    # ## leader = #
    id       = { type = 22000 id = 254 }
    division =
    { experience = 20
      id         = { type = 22000 id = 255 }
      name       = "Jiangsu Baoantui"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1233 # Anqing
    name     = "Anhui Baoantui"
    # ## leader = #
    id       = { type = 22000 id = 256 }
    division =
    { experience = 20
      id         = { type = 22000 id = 257 }
      name       = "Anhui Baoantui"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1238 # Hangzhou
    name     = "Zhejiang Baoantui"
    # ## leader = #
    id       = { type = 22000 id = 258 }
    division =
    { experience = 20
      id         = { type = 22000 id = 259 }
      name       = "Zhejiang Baoantui"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1255 # Changsha
    name     = "Hunan Baoantui"
    # ## leader = #
    id       = { type = 22000 id = 260 }
    division =
    { experience = 20
      id         = { type = 22000 id = 261 }
      name       = "Hunan Baoantui"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1253 # Wuchang
    name     = "Hubei Baoantui"
    # ## leader = #
    id       = { type = 22000 id = 262 }
    division =
    { experience = 20
      id         = { type = 22000 id = 263 }
      name       = "Hubei Baoantui"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1223 # Kaifeng
    name     = "Henan Baoantui"
    # ## leader = #
    id       = { type = 22000 id = 264 }
    division =
    { experience = 20
      id         = { type = 22000 id = 265 }
      name       = "Henan Baoantui"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1276 # Lanzhou
    name     = "Gansu Baoantui"
    # ## leader = #
    id       = { type = 22000 id = 268 }
    division =
    { experience = 20
      id         = { type = 22000 id = 269 }
      name       = "Gansu Baoantui"
      type       = militia
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1251 # Nanchang
    name     = "Jiangxi Baoantui"
    # ## leader = #
    id       = { type = 22000 id = 274 }
    division =
    { experience = 20
      id         = { type = 22000 id = 275 }
      name       = "Jiangxi Baoantui"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1244 # Fuzhou
    name     = "Fujian Baoantui"
    # ## leader = #
    id       = { type = 22000 id = 276 }
    division =
    { id         = { type = 22000 id = 278 }
      experience = 20
      name       = "Fujian Baoantui"
      type       = militia
      model      = 0
    }
  }
  # China 1936 Naval OOB
  navalunit =
  { location = 1237 # Shanghai
    base     = 1237
    name     = "1st Fleet"
    id       = { type = 22000 id = 300 }
    division =
    { id    = { type = 22000 id = 301 }
      name  = "Ning-Hai"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 22000 id = 302 }
      name  = "Ying-Swei"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 22000 id = 303 }
      name  = "Chao-Ho"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 22000 id = 304 }
      name  = "Hai-Chen"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 22000 id = 307 }
      name  = "1. Quzujian Dadui"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 22000 id = 308 }
      name  = "2. Quzujian Dadui"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 22000 id = 309 }
      name  = "1. Yunshujian Dadui"
      type  = transport
      model = 0
    }
  }
  # China 1936 Airforce OOB
  airunit =
  { location = 1251 # Nanchang
    id       = { type = 22000 id = 400 }
    name     = "1. Kongjun"
    base     = 1251 # Nanchang
    division =
    { id           = { type = 22000 id = 401 }
      name         = "1. Kongjun"
      max_strength = 60
      strength     = 54
      type         = tactical_bomber
      model        = 0
    }
  }
  airunit =
  { location = 1251 # Nanchang
    id       = { type = 22000 id = 407 }
    name     = "2. Kongjun"
    base     = 1251 # Nanchang
    division =
    { id           = { type = 22000 id = 408 }
      name         = "2. Kongjun"
      max_strength = 60
      strength     = 52
      type         = interceptor
      model        = 0
    }
  }
}
