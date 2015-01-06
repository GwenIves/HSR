
##############################
# Country definition for MON #
##############################

country =
{ tag                    = MON
  puppet                 = SOV
  control                = SOV
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 200
  supplies               = 500
  manpower               = 7
  capital                = 1404
  diplomacy =
  { relation = { tag = SOV value = 150 }
  }
  nationalprovinces      = { 1420 1419 1434 1436 1437 1438 1399 1404 1207 1398 1386 1382 1387 1388 1397 1385 }
  ownedprovinces         = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 }
  controlledprovinces    = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 }
  # ROTW Minor Tech '36
  # Group D 1944 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1110  1120  1190  1200  1210  1220  1310  14000 14010 2010  2020  2030  2040  2050  2070  2150
			     2160  2290  2300  2310  2320  2330  2330  2400  2410  2450  2460  2470  2510  2520  4010  4020  4030  4120  4130  4140
			     5010  5050  5080  5090  5100  5190  5200  6210  6300  6310  9010  9020
			   }
  SpyInfo                = { country = "MON" NumberOfSpies = 3 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 10
    freedom           = 5
    free_market       = 3
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 1
  }
  dormant_ministers      = { 94001 94002 94003 94044 94004 94052 94005 94062 94006 94071 94007 94009 94093 94010 94100 94033 94038 94039 94045 94046
			     94053 94054 94063 94064 94072 94073 94082 94008 94088 94094 94101 94040 94047
			   }
  headofstate            = { type = 9 id = 94034 }
  headofgovernment       = { type = 9 id = 94041 }
  foreignminister        = { type = 9 id = 94048 }
  armamentminister       = { type = 9 id = 94056 }
  ministerofsecurity     = { type = 9 id = 94065 }
  ministerofintelligence = { type = 9 id = 94075 }
  chiefofstaff           = { type = 9 id = 94081 }
  chiefofarmy            = { type = 9 id = 94089 }
  chiefofnavy            = { type = 9 id = 94096 }
  chiefofair             = { type = 9 id = 94103 }
  landunit =
  { location = 1404
    id       = { type = 11532 id = 1 }
    name     = "People's Army"
    division =
    { id    = { type = 11532 id = 2 }
      name  = "People's Militia"
      type  = militia
      model = 1
    }
    division =
    { id    = { type = 11532 id = 3 }
      name  = "People's Cavalry"
      type  = cavalry
      model = 2
    }
  }
  landunit =
  { location = 1419 # Choybalsan
    name     = "Mongolian Army"
    id       = { type = 11532 id = 4 }
    division =
    { id    = { type = 30034 id = 5 }
      name  = "1st Division"
      type  = infantry
      model = 2
    }
    division =
    { id    = { type = 11532 id = 6 }
      name  = "2nd Division"
      type  = cavalry
      model = 1
    }
    division =
    { id    = { type = 11532 id = 7 }
      name  = "3rd Division"
      type  = militia
      model = 1
    }
    division =
    { id    = { type = 11532 id = 8 }
      name  = "4th Division"
      type  = militia
      model = 1
    }
  }
}
