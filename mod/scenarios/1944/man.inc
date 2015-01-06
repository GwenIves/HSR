
##############################
# Country definition for MAN #
##############################

country =
{ tag                    = MAN
  puppet                 = JAP
  control                = JAP
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 200
  supplies               = 500
  manpower               = 100
  capital                = 1390
  free                   = { energy = 14 metal = 7 rare_materials = 4 }
  diplomacy =
  { relation = { tag = CHI value = -200 }
    relation = { tag = CSX value = -200 }
    relation = { tag = CXB value = -200 }
    relation = { tag = CYN value = -200 }
    relation = { tag = CGX value = -200 }
    relation = { tag = JAP value = 200 access = yes }
    relation = { tag = MEN value = 200 access = yes }
    relation = { tag = GER value = 20 }
    relation = { tag = SIA value = 75 }
    relation = { tag = USA value = -200 }
  }
  nationalprovinces      = { 1393 1389 1390 1377 1378 1375 1374 1379 1530 1380 1387 1382 1381 1394 1395 1396 1397 1388 }
  ownedprovinces         = { 1389 1390 1377 1378 1375 1374 1379 1530 1380 1387 1382 1381 1394 1395 1396 1397 1388 }
  controlledprovinces    = { 1389 1390 1377 1378 1375 1374 1379 1530 1380 1387 1382 1381 1394 1395 1396 1397 1388 }
  # ROTW Minor Tech '36
  # Group D 1944 techs
  # ######################
  techapps               = { 4010  4020  4030  4120  4130  4140  2010  2020  2030  2040  2050  2070  2150  2160  2290  2300  2310  2320  2330  1010
			     1020  1030  1040  1190  1200  1210  1220  1110  1120  2330  2400  2410  2450  2460  2470  2510  2520  1310  9010  9020
			     5010  5050  5080  5090  5100  5190  5200  6210  6300  6310  14000
			   }
  SpyInfo                = { country = "MAN" NumberOfSpies = 4 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 2
    freedom           = 3
    free_market       = 3
    professional_army = 3
    defense_lobby     = 8
    interventionism   = 8
  }
  dormant_ministers      = { 58002 58014 58016 58017 }
  headofstate            = { type = 9 id = 58012 }
  headofgovernment       = { type = 9 id = 58018 }
  foreignminister        = { type = 9 id = 58025 }
  armamentminister       = { type = 9 id = 58032 }
  ministerofsecurity     = { type = 9 id = 58039 }
  ministerofintelligence = { type = 9 id = 58046 }
  chiefofstaff           = { type = 9 id = 58052 }
  chiefofarmy            = { type = 9 id = 58058 }
  chiefofnavy            = { type = 9 id = 58065 }
  chiefofair             = { type = 9 id = 58072 }
  landunit =
  { location = 1530
    id       = { type = 11558 id = 1 }
    name     = "Di'1 Fangtien Jüntuan"
    division =
    { id       = { type = 11558 id = 2 }
      name     = "1 Man'chu Lü"
      type     = militia
      model    = 1
      strength = 90
    }
  }
  landunit =
  { location = 1375
    id       = { type = 11558 id = 8 }
    name     = "Di'2 Jilin Jüntuan"
    division =
    { id       = { type = 11558 id = 9 }
      name     = "2 Man'chu Lü"
      type     = militia
      model    = 1
      strength = 60
    }
    division =
    { id       = { type = 11558 id = 13 }
      name     = "2 Man'chu Qi'Bing"
      type     = cavalry
      model    = 2
      strength = 45
    }
  }
  landunit =
  { location = 1380
    id       = { type = 11558 id = 16 }
    name     = "Di'3 Qiqihar Jüntuan"
    division =
    { id       = { type = 11558 id = 17 }
      name     = "3 Man'chu Lü"
      type     = militia
      model    = 1
      strength = 75
    }
    division =
    { id       = { type = 11558 id = 22 }
      name     = "5 Man'chu Qi'Bing"
      type     = cavalry
      model    = 2
      strength = 15
    }
  }
  landunit =
  { location = 1379
    id       = { type = 11558 id = 23 }
    name     = "Di'4 Harbin Jüntuan"
    division =
    { id       = { type = 11558 id = 24 }
      name     = "4 Man'chu Lü"
      type     = militia
      model    = 1
      strength = 15
    }
    division =
    { id       = { type = 11558 id = 30 }
      name     = "41 Man'chu Lü"
      type     = militia
      model    = 1
      strength = 30
    }
    division =
    { id       = { type = 11558 id = 32 }
      name     = "6 Man'chu Qi'Bing"
      type     = cavalry
      model    = 2
      strength = 15
    }
  }
  landunit =
  { location = 1382
    id       = { type = 11558 id = 33 }
    name     = "Di'5 Hailar Jüntuan"
    division =
    { id       = { type = 11558 id = 34 }
      name     = "5 Man'chu Lü" #"5th Mixed Division"
      type     = militia
      model    = 1
      strength = 45
    }
    division =
    { id       = { type = 11558 id = 37 }
      name     = "7 Man'chu Qi'Bing"
      type     = cavalry
      model    = 2
      strength = 15
    }
  }
}
