
##############################
# Country definition for CGX #
##############################

province =
{ id         = 1325
  naval_base = { size = 6 current_size = 6 }
  air_base   = { size = 6 current_size = 6 }
}              # Qinzhou

#####################
# Country main data #
#####################

country =
{ tag                 = CGX
  regular_id          = CHI
  intrinsic_gov_type  = left_wing_radical
  # Resource Reserves
  energy              = 20000
  metal               = 20000
  rare_materials      = 5000
  oil                 = 5000
  supplies            = 2000
  capital             = 1258 # Guilin
  manpower            = 665
  dissent             = 14
  diplomacy =
  { relation = { tag = CHC value = 100 }
    relation = { tag = CHI value = 200 }
    relation = { tag = CSX value = 200 }
    relation = { tag = CXB value = 200 }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -200 }
    relation = { tag = MAN value = -200 }
    relation = { tag = MEN value = -200 }
    relation = { tag = SOV value = 20 }
  }
  nationalprovinces   = { 1309 1310 1258 1311 1325 1319 }
  ownedprovinces      = { 1309 1310 1258 1311 1325 1319 }
  # Guangxi
  controlledprovinces = { 1309 1310 1258 1311 1319 }
  # Guangxi
  # ROTW Minor Tech '36
  # ######################
  techapps            = { 4010  4020  4030  4120  4130  4140  2010  2020  2030  2040  2050  2070  2150  2160  2290  2300  2310  2320  2330  1010
			  1020  1030  1040  1190  1200  1210  1220  1110  1120  2330  2400  2410  2450  2460  2470  2510  2520  1310  9010  9020
			  5010  5050  5080  5090  5100  5190  5200  6210  6300  6310  6320  3010  3070  3080  3130  8010  8050  14000 14010
			}
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
  { location = 1257 # Guilin
    name     = "Guangxi Jingbei"
    id       = { type = 22004 id = 1 }
    division =
    { id   = { type = 22004 id = 2 }
      name = "Guangxi Baoantui"
      type = militia
    }
  }
  landunit =
  { location = 1311 # Luoyang
    name     = "Anhui Jingbei"
    id       = { type = 22004 id = 3 }
    division =
    { id           = { type = 22004 id = 4 }
      name         = "Anhui Baoantui"
      type         = militia
      organisation = 3
    }
  }
  landunit =
  { location = 1313
    name     = "21. Juntuan"
    id       = { type = 22004 id = 5 }
    division =
    { id           = { type = 22004 id = 6 }
      name         = "7. Jun"
      type         = infantry
      organisation = 3
    }
    division =
    { id           = { type = 22004 id = 7 }
      name         = "48. Jun"
      type         = militia
      organisation = 3
    }
    division =
    { id           = { type = 22004 id = 8 }
      name         = "Hubei Dong Youjidui"
      type         = militia
      organisation = 3
    }
  }
  landunit =
  { location = 1249
    name     = "11. Juntuan"
    id       = { type = 22004 id = 9 }
    division =
    { id           = { type = 22004 id = 10 }
      name         = "84. Jun"
      type         = infantry
      organisation = 3
    }
    division =
    { id           = { type = 22004 id = 11 }
      name         = "39. Jun"
      type         = militia
      organisation = 3
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
}
