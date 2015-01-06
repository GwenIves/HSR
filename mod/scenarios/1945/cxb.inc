
##############################
# Country definition for CXB #
##############################

province =
{ id       = 1276
  air_base = { size = 3 current_size = 3 }
}            # Lanzhou

#####################
# Country main data #
#####################

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
  industrial_modifier = 0.15
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
  nationalprovinces   = { 1273 1274 1275 1276 1277 1439 1440 1441 1442 1443 1444 }
  ownedprovinces      = { 1273 1274 1275 1276 1277 1439 1440 1441 1442 1443 1444 }
  controlledprovinces = { 1273 1274 1275 1276 1277 1439 1440 1441 1442 1443 1444 }
  # ROTW Minor Tech '36
  # ######################
  techapps            = { 1010  1020  1030  1040  1110  1120  1190  1200  1210  1220  1310  14000 14010 2010  2020  2030  2040  2050  2070  2150
			  2160  2290  2300  2310  2320  2330  2330  2400  2410  2450  2460  2470  2510  2520  3010  3070  3080  3130  4010  4020
			  4030  4120  4130  4140  5010  5050  5080  5090  5100  5190  5200  6210  6300  6310  6320  6340  8010  8050  9010  9020
			}
  diplomacy =
  { relation = { tag = CHC value = 100 }
    relation = { tag = CHI value = 200 }
    relation = { tag = CYN value = 200 }
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
    { id    = { type = 22003 id = 4 }
      name  = "1. Ningxia Jun"
      type  = militia
      model = 1
    }
    division =
    { id    = { type = 22003 id = 5 }
      name  = "2. Ningxia Jun"
      type  = militia
      model = 1
    }
    division =
    { id    = { type = 22003 id = 6 }
      name  = "3. Ningxia Jun"
      type  = militia
      model = 1
    }
    division =
    { id    = { type = 22003 id = 7 }
      name  = "11. Jun"
      type  = cavalry
      model = 2
    }
    division =
    { id    = { type = 22003 id = 8 }
      name  = "81. Jun"
      type  = militia
      model = 1
    }
  }
  landunit =
  { location = 1443 # Xining
    name     = "Qinghai Jun"
    id       = { type = 22003 id = 9 }
    division =
    { id    = { type = 22003 id = 10 }
      name  = "82. Jun"
      type  = militia
      model = 1
    }
    division =
    { id    = { type = 22003 id = 11 }
      name  = "Qinghai Baoantui"
      type  = militia
      model = 1
    }
    division =
    { id    = { type = 22003 id = 12 }
      name  = "Qinghai Qibing"
      type  = cavalry
      model = 2
    }
  }
}
