
##############################
# Country definition for CXB #
##############################

province = { id = 1273 province_revoltrisk = 10 } # Yinchuan
province = { id = 1274 province_revoltrisk = 10 } # Guyuan
province = { id = 1439 province_revoltrisk = 10 } # Bayan Nur
province = { id = 1440 province_revoltrisk = 10 } # Jinchang
province = { id = 1441 province_revoltrisk = 10 } # Dunhuang
province = { id = 1442 province_revoltrisk = 10 } # Golmud
province = { id = 1443 province_revoltrisk = 10 } # Xining
province = { id = 1444 province_revoltrisk = 10 } # Yushu

#####################
# Country main data #
#####################

country =
{ tag                 = CXB
  regular_id          = CHI
  intrinsic_gov_type  = paternal_autocrat
  puppet              = CHI
  # Resource Reserves
  energy              = 200
  metal               = 200
  rare_materials      = 100
  oil                 = 100
  supplies            = 200
  money               = 10
  capital             = 1442 # Golmud
  manpower            = 665
  dissent             = 12
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
  # Ningxia
  nationalprovinces   = { 1442 1443 1444 1275 1276 1277 1440 1441 1273 1274 1439 1421 1430 1431 1432 1433 1435 1445 1446 1447 }
  ownedprovinces      = { 1442 1443 1444 1440 1441 1273 1274 1439 }
  # Ningxia
  controlledprovinces = { 1442 1443 1444 1440 1441 1273 1274 1439 }
  # Xinjiang
  # ROTW Minor Tech '36
  # Group E 1939 techs
  # ######################
  # GW fighter
  techapps            = { 4010 2150 2290 1010 1190 6210 6300 }
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
  # Human Wave
  # ######
  # XIBEI SAN MA 1939 Land OOB
  # TYPE: 22200
  # ######
  landunit =
  { location = 1441 # Anxi (Dunhuang)
    name     = "5. Qibing Jun"
    id       = { type = 22200 id = 1 }
    division =
    { id   = { type = 22200 id = 2 }
      name = "5. Qibing Shi"
      type = cavalry
    }
  }
  landunit =
  { location = 1440 # Zhangye (Jinchang)
    name     = "17. Juntuan"
    id       = { type = 22200 id = 3 }
    division =
    { id   = { type = 22200 id = 4 }
      name = "1. Ningxia Jun"
      type = militia
    }
    division =
    { id   = { type = 22200 id = 5 }
      name = "2. Ningxia Jun"
      type = militia
    }
    division =
    { id   = { type = 22200 id = 6 }
      name = "3. Ningxia Jun"
      type = militia
    }
    division =
    { id   = { type = 22200 id = 7 }
      name = "81. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1443 # Xining
    name     = "Qinghai Jun"
    id       = { type = 22200 id = 8 }
    division =
    { id   = { type = 22200 id = 9 }
      name = "82. Jun"
      type = militia
    }
    division =
    { id   = { type = 22200 id = 10 }
      name = "Qinghai Baoantui"
      type = militia
    }
    division =
    { id   = { type = 22200 id = 11 }
      name = "Qinghai Qibing"
      type = cavalry
    }
  }
}
