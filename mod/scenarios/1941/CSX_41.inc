
##############################
# Country definition for CSX #
##############################

province =
{ id       = 1205
  air_base = { size = 5 current_size = 5 }
}            # Beiping
province =
{ id       = 1216
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            # Jinan

#####################
# Country main data #
#####################

country =
{ tag                 = CSX
  regular_id          = CHI
  intrinsic_gov_type  = paternal_autocrat
  # Resource Reserves
  energy              = 200
  metal               = 200
  rare_materials      = 200
  oil                 = 200
  supplies            = 200
  money               = 100
  capital             = 1272 # Yuling
  manpower            = 665
  dissent             = 10
  diplomacy =
  { relation = { tag = CHC value = 100 }
    relation = { tag = CHI value = 200 }
    relation = { tag = CGX value = 200 }
    relation = { tag = CXB value = 200 }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -200 }
    relation = { tag = MAN value = -200 }
    relation = { tag = MEN value = -200 }
  }
  nationalprovinces   = { 1204 1205 1206 1210 1211 1212 1213 1216 1207 1208 1272 1209 1225 1226 }
  ownedprovinces      = { 1225 1226 1272 1204 1205 1210 1211 1212 1213 1216 }
  # Shandong
  controlledprovinces = { 1272 }
  # Shanxi
  # ROTW Minor Tech '36
  # Group E 1941 techs
  # ######################
  techapps            = { 2320 4010 4020 2010 2020 2030 2040 2150 2290 2300 2310 2330 2400 2450 2460 2510 1010 1190 6210 6300 14000 }
  SpyInfo                = { country = "CSX" NumberOfSpies = 4 }
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
  { location = 1269 # Xianyang (Xi'an)
    name     = "6. Juntuan"
    id       = { type = 22002 id = 1 }
    division =
    { id   = { type = 22002 id = 2 }
      name = "83. Jun"
      type = militia
    }
    division =
    { id   = { type = 22002 id = 3 }
      name = "61. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1269 # Xianyang (Xi'an)
    name     = "7. Juntuan"
    id       = { type = 22002 id = 4 }
    division =
    { id   = { type = 22002 id = 5 }
      name = "1. Qibing Jun"
      type = cavalry
    }
  }
  landunit =
  { location = 1269 # Xianyang (Xi'an)
    name     = "8. Juntuan"
    id       = { type = 22002 id = 6 }
    division =
    { id   = { type = 22002 id = 7 }
      name = "34. Jun"
      type = militia
    }
    division =
    { id   = { type = 22002 id = 8 }
      name = "Linshi 1. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1269 # Xianyang (Xi'an)
    name     = "13. Juntuan"
    id       = { type = 22002 id = 9 }
    division =
    { id   = { type = 22002 id = 10 }
      name = "19. Jun"
      type = militia
    }
    division =
    { id   = { type = 22002 id = 11 }
      name = "33. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1269 # Xianyang (Xi'an)
    name     = "2. Zhanqu"
    id       = { type = 22002 id = 12 }
    division =
    { id   = { type = 22002 id = 13 }
      name = "Shanxi Daiji Jun"
      type = militia
    }
  }
  landunit =
  { location = 1273 # Yinchuan
    name     = "Suiyuan Jingbei"
    id       = { type = 22002 id = 14 }
    division =
    { id   = { type = 22002 id = 15 }
      name = "35. Jun"
      type = militia
    }
    division =
    { id   = { type = 22002 id = 16 }
      name = "Linshi 3. Jun"
      type = militia
    }
    division =
    { id   = { type = 22002 id = 17 }
      name = "Linshi 4. Jun"
      type = militia
    }
    division =
    { id   = { type = 22002 id = 18 }
      name = "Suiyuan Qibing Jun"
      type = cavalry
    }
    division =
    { id   = { type = 22002 id = 19 }
      name = "Suiyuan Tifang Jun"
      type = militia
    }
  }
}
