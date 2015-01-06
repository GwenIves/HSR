
##############################
# Country definition for CSX #
##############################

province =
{ id       = 1205
  air_base = { size = 5 current_size = 5 }
}            # Beiping
province =
{ id       = 1216
  air_base = { size = 6 current_size = 6 }
}            # Jinan

#####################
# Country main data #
#####################

country =
{ tag                 = CSX
  regular_id          = CHI
  intrinsic_gov_type  = paternal_autocrat
  # Resource Reserves
  energy              = 20000
  metal               = 20000
  rare_materials      = 5000
  oil                 = 5000
  supplies            = 2000
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
  nationalprovinces   = { 1209 1225 1226 }
  ownedprovinces      = { 1225 1226 1272 1205 1210 1211 1212 1213 1216 }
  controlledprovinces = { 1272 }
  # ROTW Minor Tech '36
  # ######################
  techapps            = { 4010  4020  4030  4120  4130  4140  2010  2020  2030  2040  2050  2070  2150  2160  2290  2300  2310  2320  2330  1010
			  1020  1030  1040  1190  1200  1210  1220  1110  1120  2330  2400  2410  2450  2460  2470  2510  2520  1310  9010  9020
			  5010  5050  5080  5090  5100  5190  5200  6210  6300  6310  6320  6340  3010  3070  3080  3130  8010  8050  14000 14010
			}
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
    { id    = { type = 22002 id = 5 }
      name  = "1. Qibing Jun"
      type  = cavalry
      model = 2
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
  { location = 1311
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
  { location = 1272 # Yinchuan
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
    { id    = { type = 22002 id = 18 }
      name  = "Suiyuan Qibing Jun"
      type  = cavalry
      model = 2
    }
    division =
    { id   = { type = 22002 id = 19 }
      name = "Suiyuan Tifang Jun"
      type = militia
    }
  }
}
