
##############################
# Country definition for CSX #
##############################

province = { id = 1204 province_revoltrisk = 10 } # Tianjin
province = { id = 1205 province_revoltrisk = 10 } # Beiping
province = { id = 1210 province_revoltrisk = 10 } # Baoding
province = { id = 1211 province_revoltrisk = 10 } # Shijiazhuang
province = { id = 1212 province_revoltrisk = 10 } # Handan
province = { id = 1213 province_revoltrisk = 10 } # Yucheng
province =
{ id                  = 1216
  province_revoltrisk = 10
  air_base            = { size = 4 current_size = 4 }
  anti_air            = 1
}                       # Jinan
province = { id = 1225 province_revoltrisk = 10 } # Taiyuan
province = { id = 1226 province_revoltrisk = 10 } # Changzhi
province = { id = 1272 province_revoltrisk = 10 } # Yuling

#####################
# Country main data #
#####################

country =
{ tag                    = CSX
  regular_id             = CHI
  intrinsic_gov_type     = paternal_autocrat
  capital                = 1272
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  manpower               = 330
  dissent                = 10
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
  nationalprovinces      = { 1209 1225 1226 }
  ownedprovinces         = { 1213 1216 1225 1226 1272 1204 1205 1210 1211 1212 }
  # Hebei
  # Part of Suiyuan
  controlledprovinces    = { 1272 }
  # GW infantry
  techapps               = { 1010 1110 1190 4010 2150 2290 6210 6300 }
  SpyInfo                = { country = "CSX" NumberOfSpies = 4 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 503001 }
  headofgovernment       = { type = 9 id = 503002 }
  foreignminister        = { type = 9 id = 503003 }
  armamentminister       = { type = 9 id = 503004 }
  ministerofsecurity     = { type = 9 id = 503005 }
  ministerofintelligence = { type = 9 id = 503006 }
  chiefofstaff           = { type = 9 id = 503007 }
  chiefofarmy            = { type = 9 id = 503008 }
  chiefofnavy            = { type = 9 id = 503009 }
  chiefofair             = { type = 9 id = 503010 }
  landunit =
  { location = 1269 # Xianyang (Xi'an)
    name     = "2. Zhanqu Budui"
    id       = { type = 22300 id = 1 }
    division =
    { id   = { type = 22300 id = 2 }
      name = "9. Jun"
      type = militia
    }
    division =
    { id   = { type = 22300 id = 3 }
      name = "Shanxi Daiji Jun"
      type = militia
    }
  }
  landunit =
  { location = 1273 # Yinchuan
    name     = "Suiyuan Jingbei"
    id       = { type = 22300 id = 4 }
    division =
    { id   = { type = 22300 id = 5 }
      name = "Suiyuan Baoantui"
      type = militia
    }
    division =
    { id   = { type = 22300 id = 6 }
      name = "35. Jun"
      type = militia
    }
    division =
    { id   = { type = 22300 id = 7 }
      name = "6. Qibing Jun"
      type = cavalry
    }
    division =
    { id   = { type = 22300 id = 8 }
      name = "Suiyuan Youjidui"
      type = cavalry
    }
    division =
    { id   = { type = 22300 id = 9 }
      name = "Manzhou Qianke Jun"
      type = cavalry
    }
    division =
    { id   = { type = 22300 id = 10 }
      name = "2. Qibing Jun"
      type = cavalry
    }
  }
  landunit =
  { location = 1272 # Yuling
    name     = "7. Juntuan"
    # ## leader = # Fu Zuoyi
    id       = { type = 22300 id = 11 }
    division =
    { id   = { type = 22300 id = 12 }
      name = "83. Jun"
      type = militia
    }
    division =
    { id   = { type = 22300 id = 13 }
      name = "1. Qibing Jun"
      type = cavalry
    }
  }
  landunit =
  { location = 1269 # Xianyang (Xi'an)
    name     = "6/13. Juntuan"
    id       = { type = 22300 id = 14 }
    division =
    { id   = { type = 22300 id = 15 }
      name = "19. Jun"
      type = bergsjaeger
    }
    division =
    { id   = { type = 22300 id = 16 }
      name = "61. Jun"
      type = militia
    }
  }
}
