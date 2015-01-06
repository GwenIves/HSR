
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
  rare_materials      = 100
  oil                 = 100
  supplies            = 200
  money               = 10
  capital             = 1307 # Kunming
  manpower            = 665
  dissent             = 17
  diplomacy =
  { relation = { tag = CHC value = 100 }
    relation = { tag = CHI value = 200 }
    relation = { tag = CSX value = 200 }
    relation = { tag = CXB value = 200 }
    relation = { tag = CGX value = 200 }
    relation = { tag = JAP value = -100 }
    relation = { tag = MAN value = -200 }
    relation = { tag = MEN value = -200 }
  }
  nationalprovinces   = { 1327 1305 1308 1362 1307 1293 1294 1281 1282 }
  ownedprovinces      = { 1327 1305 1308 1362 1307 1293 1294 1281 1282 }
  controlledprovinces = { 1327 1305 1308 1362 1307 1293 1294 1281 1282 }
  # ROTW Minor Tech '36
  # Group E 1939 techs
  # ######################
  techapps            = { 6210 4010 2150 2290 1010 1190 6300 }
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
  # ######
  # YUNNAN 1939 Land OOB
  # TYPE: 22100
  # ######
  landunit =
  { location = 1364 # Guiyang
    name     = "1. Juntuan"
    # ## leader = # Chen Jicheng
    id       = { type = 22100 id = 1 }
    division =
    { id   = { type = 22100 id = 2 }
      name = "Xin 3. Jun"
      type = militia
    }
    division =
    { id   = { type = 22100 id = 3 }
      name = "58. Jun"
      type = militia
    }
    division =
    { id   = { type = 22100 id = 4 }
      name = "60. Jun"
      type = militia
    }
    division =
    { id   = { type = 22100 id = 5 }
      name = "32. Jun"
      type = militia
    }
  }
  landunit =
  { location = 1307 # Kunming
    name     = "Yunnan Jingbei"
    id       = { type = 22100 id = 6 }
    division =
    { id   = { type = 22100 id = 7 }
      name = "Yunnan Daiji Jun"
      type = militia
    }
    division =
    { id   = { type = 22100 id = 8 }
      name = "Yunnan Baoantui"
      type = militia
    }
  }
  landunit =
  { location = 1281 # Ya'an
    name     = "5. Jun"
    id       = { type = 22100 id = 9 }
    division =
    { id   = { type = 22100 id = 10 }
      name = "24. Jun"
      type = militia
    }
    division =
    { id   = { type = 22100 id = 11 }
      name = "Xikang Baoantui"
      type = militia
    }
  }
}
