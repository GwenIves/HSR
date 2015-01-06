#
# by Aregorn for HSR2_DD
#
##############################
# Country definition for MAN #
##############################

province =
{ id       = 1379
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
}            # Harbin

#####################
# Country main data #
#####################

country =
{ tag                    = MAN
  puppet                 = JAP
  control                = JAP
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 200
  supplies               = 100
  money                  = 10
  manpower               = 100
  capital                = 1390

	research_mod = 1.15
	peacetime_ic_mod = 0.75

  free                   = { energy = 14 metal = 7 rare_materials = 4 }
  diplomacy =
  { relation = { tag = CHC value = -100 }
    relation = { tag = CHI value = -100 }
    relation = { tag = CSX value = -75 }
    relation = { tag = CXB value = -75 }
    relation = { tag = CYN value = -75 }
    relation = { tag = CGX value = -75 }
    relation = { tag = GER value = 20 }
    relation = { tag = JAP value = 200 access = yes }
    relation = { tag = SIA value = 75 }
    relation = { tag = USA value = 1 }
  }

  SpyInfo                = { country = "MAN" NumberOfSpies = 5 }

  nationalprovinces      = { 1389 1390 1377 1378 1375 1374 1379 1530 1380 1387 1382 1381 1394 1395 1396 1388 1397 1398 1386 }
  ownedprovinces         = { 1389 1390 1377 1378 1375 1374 1379 1530 1380 1387 1382 1381 1394 1395 1396 1388 1386 }
  controlledprovinces    = { 1389 1390 1377 1378 1375 1374 1379 1530 1380 1387 1382 1381 1394 1395 1396 1388 1386 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 5080 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 3
    defense_lobby     = 8
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 58001 }
  headofgovernment       = { type = 9 id = 58002 }
  foreignminister        = { type = 9 id = 58003 }
  armamentminister       = { type = 9 id = 58004 }
  ministerofsecurity     = { type = 9 id = 58005 }
  ministerofintelligence = { type = 9 id = 58006 }
  chiefofstaff           = { type = 9 id = 58007 }
  chiefofarmy            = { type = 9 id = 58008 }
  chiefofnavy            = { type = 9 id = 58009 }
  chiefofair             = { type = 9 id = 58010 }
  # Basic Construction Engineering Development Process
  landunit =
  { location = 1389
    id       = { type = 28500 id = 1 }
    name     = "1 Fang'tien Jüntuan"
    division =
    { id       = { type = 28500 id = 2 }
      name     = "7 Man'chu Lü"
      type     = militia
      strength = 90
    }
  }
  landunit =
  { location = 1389
    id       = { type = 28500 id = 8 }
    name     = "2 Ji'lin Jüntuan"
    division =
    { id       = { type = 28500 id = 9 }
      name     = "8 Man'chu Lü"
      type     = militia
      strength = 60
    }
    division =
    { id       = { type = 28500 id = 13 }
      name     = "2 Man'chu Qi'Bing"
      type     = cavalry
      strength = 45
    }
  }
  landunit =
  { location = 1382
    id       = { type = 28500 id = 16 }
    name     = "3 Qiqihar Jüntuan"
    division =
    { id       = { type = 28500 id = 17 }
      name     = "9 Man'chu Lü"
      type     = militia
      strength = 75
    }
  }
  landunit =
  { location = 1379
    id       = { type = 28500 id = 23 }
    name     = "4 Harbin Jüntuan"
    division =
    { id       = { type = 28500 id = 24 }
      name     = "10 Man'chu Lü"
      type     = militia
      strength = 15
    }
  }
  landunit =
  { location = 1374
    id       = { type = 28500 id = 33 }
    name     = "5 Chengde Jüntuan"
    division =
    { id       = { type = 28500 id = 34 }
      name     = "12 Man'chu Lü"
      type     = militia
      strength = 45
    }
  }
}
