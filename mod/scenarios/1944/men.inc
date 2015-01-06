
##############################
# Country definition for MEN #
##############################

country =
{ tag                 = MEN
  puppet              = JAP
  control             = JAP
  # Resource Reserves
  energy              = 200
  metal               = 200
  rare_materials      = 100
  oil                 = 200
  supplies            = 500
  money               = 150
  manpower            = 100
  capital             = 1206 # Kalgan
  dissent             = 5
  free = {
	ic 		= 5
	energy 		= 14
	metal	 	= 9
	oil		= 2
	rare_materials	= 3
	}
  SpyInfo                = { country = "MEN" NumberOfSpies = 1 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 3
    defense_lobby     = 8
    interventionism   = 8
  }
  # Part of Shanxi
  # Mongolia
  nationalprovinces   = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 1206 1208 1207 1272 1273 1274 1386 1398 1439 1418 1520 1384 }
  ownedprovinces      = { 1208 1207 1398 1386 1206 1209 }
  # Part of Shanxi
  controlledprovinces = { 1208 1207 1398 1386 1206 1209 }
  # Group E 1941 techs
  # ######################
  techapps            = { 2320 4010 4020 2010 2020 2030 2040 2150 2290 2300 2310 2330 2400 2450 2460 2510 1010 1190 6010 14000 }
  diplomacy =
  { relation = { tag = CHI value = -200 }
    relation = { tag = CSX value = -200 }
    relation = { tag = CXB value = -200 }
    relation = { tag = CYN value = -200 }
    relation = { tag = CGX value = -200 }
    relation = { tag = MAN value = 200 access = yes }
    relation = { tag = JAP value = 200 access = yes }
  }
  landunit =
  { id       = { type = 11548 id = 1 }
    name     = "Di'2 Mengkukuo Jun"
    location = 1208 # Hohhot
    division =
    { id   = { type = 11548 id = 2 }
      name = "1. Mengkukuo Hoheishidan"
      type = militia
    }
  }
  landunit =
  { id       = { type = 11548 id = 3 }
    name     = "Di'1 Mengkukuo Jun"
    location = 1209 # Datong
    division =
    { id   = { type = 11548 id = 4 }
      name = "3. Mengkukuo Kiheishidan"
      type = cavalry
    }
  }
  landunit =
  { id       = { type = 11548 id = 5 }
    name     = "Roppou Suiyuan hontai"
    location = 1208 # Baotou (Hohhot)
    division =
    { id   = { type = 11548 id = 6 }
      name = "Roppou Suiyuan shûsei butai"
      type = militia
    }
  }
}
