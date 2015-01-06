
##############################
# Country definition for CYN #
##############################

country =
{ tag                 = CYN
  regular_id          = CHI
  intrinsic_gov_type  = paternal_autocrat
  # Resource Reserves
  energy              = 200
  metal               = 200
  rare_materials      = 200
  oil                 = 200
  supplies            = 200
  money               = 100
  capital             = 1307 # Kunming
  manpower            = 665
  dissent             = 14
  diplomacy =
  { relation = { tag = CHC value = 100 }
    relation = { tag = CHI value = 200 }
    relation = { tag = CSX value = 200 }
    relation = { tag = CXB value = 200 }
    relation = { tag = CGX value = 200 }
    relation = { tag = JAP value = -200 }
    relation = { tag = MAN value = -200 }
    relation = { tag = MEN value = -200 }
  }
  nationalprovinces   = { 1327 1305 1308 1362 1307 1293 1294 }
  ownedprovinces      = { 1327 1305 1308 1362 1307 1293 1294 }
  controlledprovinces = { 1327 1305 1308 1362 1307 1293 1294 }
  # ROTW Minor Tech '36
  # Group E 1941 techs
  # ######################
  techapps            = { 2320 4010 4020 2010 2020 2030 2040 2150 2290 2300 2310 2330 2400 2450 2460 2510 1010 1190 6210 6300 14000 }
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
  landunit =
  { location = 1255 # Changsha
    name     = "1. Juntuan"
    id       = { type = 22001 id = 1 }
    division =
    { id   = { type = 22001 id = 2 }
      name = "Xin 3. Jun"
      type = militia
    }
    division =
    { id   = { type = 22001 id = 3 }
      name = "58. Jun"
      type = militia
    }
    division =
    { id   = { type = 22001 id = 4 }
      name = "60. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1307 # Kunming
    name     = "Yunnan Jingbei"
    id       = { type = 22001 id = 5 }
    division =
    { id   = { type = 22001 id = 6 }
      name = "Yunnan Daiji Jun"
      type = militia
    }
    division =
    { id   = { type = 22001 id = 7 }
      name = "Yunnan Baoantui"
      type = militia
    }
  }
  landunit =
  { location = 1281 # Wutunghliao (Ya'an)
    name     = "Xikang Jingbei"
    id       = { type = 22001 id = 8 }
    division =
    { id   = { type = 22001 id = 9 }
      name = "24. Jun"
      type = militia
    }
    division =
    { id   = { type = 22001 id = 10 }
      name = "Xikang Baoantui"
      type = militia
    }
  }
}
