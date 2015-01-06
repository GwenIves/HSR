
##############################
# Country definition for CYN #
##############################

country =
{ tag                 = CYN
  regular_id          = CHI
  intrinsic_gov_type  = paternal_autocrat
  # Resource Reserves
  energy              = 20000
  metal               = 20000
  rare_materials      = 5000
  oil                 = 5000
  supplies            = 2000
  capital             = 1307 # Kunming
  manpower            = 665
  dissent             = 14
  industrial_modifier = 0.15
  SpyInfo                = { country = "CYN" NumberOfSpies = 4 }
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
  nationalprovinces   = { 1327 1305 1308 1362 1307 1293 1294 }
  ownedprovinces      = { 1327 1305 1308 1362 1307 1293 1294 }
  controlledprovinces = { 1327 1305 1308 1362 1307 1293 1294 }
  # ROTW Minor Tech '36
  # ######################
  techapps            = { 1010  1020  1030  1040  1110  1120  1190  1200  1210  1220  1310  14000 14010 2010  2020  2030  2040  2050  2070  2150
			  2160  2290  2300  2310  2320  2330  2330  2400  2410  2450  2460  2470  2510  2520  3010  3070  3080  3130  4010  4020
			  4030  4120  4130  4140  5010  5050  5080  5090  5100  5190  5200  6210  6300  6310  6320  6340  8010  8050  9010  9020
			}
  diplomacy =
  { relation = { tag = CHC value = 100 }
    relation = { tag = CHI value = 200 access = yes }
    relation = { tag = CXB value = 200 }
  }
  landunit =
  { location = 1305 # Changsha
    name     = "1. Juntuan"
    id       = { type = 22001 id = 1 }
    division =
    { id    = { type = 22001 id = 2 }
      name  = "Xin 3. Jun"
      type  = militia
      model = 1
    }
    division =
    { id    = { type = 22001 id = 3 }
      name  = "58. Jun"
      type  = militia
      model = 1
    }
    division =
    { id    = { type = 22001 id = 4 }
      name  = "60. Jun"
      type  = militia
      model = 1
    }
  }
  landunit =
  { location = 1307 # Kunming
    name     = "Yunnan Jingbei"
    id       = { type = 22001 id = 5 }
    division =
    { id    = { type = 22001 id = 6 }
      name  = "Yunnan Daiji Jun"
      type  = militia
      model = 1
    }
    division =
    { id    = { type = 22001 id = 7 }
      name  = "Yunnan Baoantui"
      type  = militia
      model = 1
    }
  }
  landunit =
  { location = 1281 # Wutunghliao (Ya'an)
    name     = "Xikang Jingbei"
    id       = { type = 22001 id = 8 }
    division =
    { id    = { type = 22001 id = 9 }
      name  = "24. Jun"
      type  = militia
      model = 1
    }
    division =
    { id    = { type = 22001 id = 10 }
      name  = "Xikang Baoantui"
      type  = militia
      model = 1
    }
  }
}
