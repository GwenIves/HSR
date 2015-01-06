
##############################
# Country definition for CXB #
##############################

country =
{ tag                 = CXB
  regular_id          = CHI
  intrinsic_gov_type  = paternal_autocrat
  puppet              = CHI
  # Resource Reserves
  energy              = 200
  metal               = 200
  rare_materials      = 200
  oil                 = 200
  supplies            = 200
  money               = 100
  capital             = 1442 # Golmud
  manpower            = 665
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
  # Group E 1941 techs
  # ######################
  techapps            = { 2320 4010 4020 2010 2020 2030 2040 2150 2290 2300 2310 2330 2400 2450 2460 2510 1010 1190 6210 6300 14000 }
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
  landunit =
  { location = 1441 # Anxi (Dunhuang)
    name     = "5. Qibing Jun"
    id       = { type = 22003 id = 1 }
    division =
    { id   = { type = 22003 id = 2 }
      name = "5. Qibing Shi"
      type = cavalry
    }
  }
  landunit =
  { location = 1440 # Jinchang
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
    { id   = { type = 22003 id = 7 }
      name = "11. Jun"
      type = cavalry
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
    { id   = { type = 22003 id = 12 }
      name = "Qinghai Qibing"
      type = cavalry
    }
  }
}
