
##############################
# Country definition for CXB #
##############################

country =
{ tag                 = CXB
  regular_id          = CHI
  intrinsic_gov_type  = paternal_autocrat
  puppet              = CHI
  capital             = 1442 # Golmud
  # Resource Reserves
  energy              = 5000
  metal               = 5000
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  manpower            = 2170
  dissent             = 17
  diplomacy =
  { relation = { tag = CHC value = 100 }
    relation = { tag = CHI value = 200 }
    relation = { tag = CSX value = 200 }
    relation = { tag = CGX value = 200 }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -200 }
    relation = { tag = MAN value = -200 }
    relation = { tag = MEN value = -200 }
  }
  nationalprovinces   = { 1442 1441 1273 1440 1443 1274 1444 1439 }
  ownedprovinces      = { 1442 1441 1273 1440 1443 1274 1444 1439 }
  controlledprovinces = { 1442 1441 1273 1440 1443 1274 1444 1439 }
  # ROTW Minor Tech '36
  # ######################
  techapps            = { 4010  4020  4030  4120  4130  4140  2010  2020  2030  2040  2050  2070  2150  2160  2290  2300  2310  2320  2330  1010
			  1020  1030  1040  1190  1200  1210  1220  1110  1120  2330  2400  2410  2450  2460  2470  2510  2520  1310  9010  9020
			  5010  5050  5080  5090  5100  5190  5200  6210  6300  6310  6320  6340  3010  3070  3080  3130  8010  8050  14000 14010
			}
  SpyInfo                = { country = "CXB" NumberOfSpies = 4 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 5
  }
  # ## OOB
  landunit =
  { location = 1441 # Anxi (Dunhuang)
    name     = "5. Qibing Jun"
    id       = { type = 22003 id = 1 }
    division =
    { id    = { type = 22003 id = 2 }
      name  = "5. Qibing Shi"
      type  = cavalry
      model = 2
    }
  }
  landunit =
  { location = 1439 # Jinchang
    name     = "17. Juntuan"
    id       = { type = 22003 id = 3 }
    division =
    { id   = { type = 22003 id = 4 }
      name = "1. Ningxia Jun"
      type = militia
    }
    division =
    { id   = { type = 22003 id = 5 }
      name = "2. Ningxia Jun"
      type = militia
    }
    division =
    { id   = { type = 22003 id = 6 }
      name = "3. Ningxia Jun"
      type = militia
    }
    division =
    { id    = { type = 22003 id = 7 }
      name  = "11. Jun"
      type  = cavalry
      model = 2
    }
    division =
    { id   = { type = 22003 id = 8 }
      name = "81. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1443 # Xining
    name     = "Qinghai Jun"
    id       = { type = 22003 id = 9 }
    division =
    { id   = { type = 22003 id = 10 }
      name = "82. Jun"
      type = militia
    }
    division =
    { id   = { type = 22003 id = 11 }
      name = "Qinghai Baoantui"
      type = militia
    }
    division =
    { id    = { type = 22003 id = 12 }
      name  = "Qinghai Qibing"
      type  = cavalry
      model = 2
    }
  }
}
