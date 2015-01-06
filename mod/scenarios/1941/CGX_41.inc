
##############################
# Country definition for CGX #
##############################

country =
{ tag                 = CGX
  regular_id          = CHI
  intrinsic_gov_type  = left_wing_radical
  # Resource Reserves
  energy              = 200
  metal               = 200
  rare_materials      = 200
  oil                 = 200
  supplies            = 200
  money               = 100
  capital             = 1258 # Guilin
  manpower            = 665
  dissent             = 14
  diplomacy =
  { relation = { tag = CHI value = 200 }
    relation = { tag = CHC value = 100 }
    relation = { tag = CSX value = 200 }
    relation = { tag = CXB value = 200 }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -200 }
    relation = { tag = MAN value = -200 }
    relation = { tag = MEN value = -200 }
  }
  # Guangxi
  nationalprovinces   = { 1309 1310 1258 1311 1325 1319 }
  ownedprovinces      = { 1309 1310 1258 1311 1325 1319 }
  # Guangxi
  controlledprovinces = { 1309 1310 1258 1311 1325 1319 }
  # Guangxi
  # ROTW Minor Tech '36
  # Group E 1941 techs
  # ######################
  techapps            = { 2320 3010 4010 4020 2010 2020 2030 2040 2150 2290 2300 2310 2330 2400 2450 2460 2510 1010 1190 6210 6300 14000 }
  SpyInfo                = { country = "CGX" NumberOfSpies = 4 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 7
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 5
  }
  landunit =
  { location = 1258 # Guilin
    name     = "Guangxi Jingbei"
    id       = { type = 22004 id = 1 }
    division =
    { id   = { type = 22004 id = 2 }
      name = "Guangxi Baoantui"
      type = militia
    }
  }
  landunit =
  { location = 1227 # Luoyang
    name     = "Anhui Jingbei"
    id       = { type = 22004 id = 3 }
    division =
    { id   = { type = 22004 id = 4 }
      name = "Anhui Baoantui"
      type = militia
    }
  }
  landunit =
  { location = 1231 # Xiangfan
    name     = "21. Juntuan"
    id       = { type = 22004 id = 5 }
    division =
    { id   = { type = 22004 id = 6 }
      name = "7. Jun"
      type = infantry
    }
    division =
    { id   = { type = 22004 id = 7 }
      name = "48. Jun"
      type = militia
    }
    division =
    { id   = { type = 22004 id = 8 }
      name = "Hubei Dong Youjidui"
      type = militia
    }
  }
  landunit =
  { location = 1231 # Xiangfan
    name     = "11. Juntuan"
    id       = { type = 22004 id = 9 }
    division =
    { id   = { type = 22004 id = 10 }
      name = "84. Jun"
      type = infantry
    }
    division =
    { id   = { type = 22004 id = 11 }
      name = "39. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1310 # Liuzhou
    name     = "16. Juntuan"
    id       = { type = 22004 id = 12 }
    division =
    { id   = { type = 22004 id = 13 }
      name = "46. Jun"
      type = militia
    }
    division =
    { id   = { type = 22004 id = 14 }
      name = "31. Jun"
      type = militia
    }
  }
  navalunit =
  { location = 1325 # Bobai (Qinzhou)
    base     = 1325
    name     = "Guangdong-Guangxi Jiang Jiandui"
    id       = { type = 22004 id = 100 }
    division =
    { id       = { type = 22004 id = 101 }
      name     = "Destroyer Group"
      type     = destroyer
      model    = 0
      strength = 25
    }
  }
}
