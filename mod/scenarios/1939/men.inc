
##############################
# Country definition for MEN #
##############################

country =
{ tag                 = MEN
  regular_id          = MON
  puppet              = JAP
  control             = JAP
  # Resource Reserves
  energy              = 200
  metal               = 200
  rare_materials      = 100
  oil                 = 200
  supplies            = 500
  money               = 10
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
  diplomacy =
  { relation = { tag = GER value = 20 }
    relation = { tag = CHI value = -200 }
    relation = { tag = CSX value = -200 }
    relation = { tag = CXB value = -200 }
    relation = { tag = CYN value = -200 }
    relation = { tag = CGX value = -200 }
    relation = { tag = MAN value = 200 access = yes }
    relation = { tag = JAP value = 200 access = yes }
    relation = { tag = SIA value = 75 }
    relation = { tag = SIK value = -175 }
    relation = { tag = USA value = 1 }
  }
  # Part of Shanxi
  # Mongolia
  nationalprovinces   = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 1206 1208 1209 1207 1272 1273 1274 1386 1398 1439 1418 1520 1384 }
  ownedprovinces      = { 1208 1207 1398 1386 1206 1209 }
  # Part of Shanxi
  controlledprovinces = { 1208 1207 1398 1386 1206 1209 }
  # ROTW Minor Tech '36
  # Group E 1939 techs
  # ######################
  # GW fighter
  techapps            = { 4010 2150 2290 1010 1190 6010 }
  SpyInfo                = { country = "MEN" NumberOfSpies = 2 }
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
  # Firepower
  # ######
  # MENGKUKUO 1939 Land OOB
  # TYPE: 22700
  # ######
  landunit =
  { location = 1208 # Hohhot
    name     = "Di'1 Mengkukuo Jun"
    # ## leader = #
    id       = { type = 22700 id = 1 }
    division =
    { id   = { type = 22700 id = 2 }
      name = "1. Mengkukuo Hoheishidan"
      type = militia
    }
    division =
    { id   = { type = 22700 id = 3 }
      name = "3. Mengkukuo Kiheishidan"
      type = cavalry
    }
    division =
    { id   = { type = 22700 id = 4 }
      name = "4. Mengkukuo Kiheishidan"
      type = cavalry
    }
    division =
    { id       = { type = 22700 id = 5 }
      name     = "Roppou Suiyuan shûsei butai"
      type     = militia
      strength = 10
    }
  }
}
