
##############################
# Country definition for SIA #
##############################

province = { id = 1331 ic = 1 } # Khon Kaen
province =
{ id         = 1343
  naval_base = { size = 6 current_size = 6 }
  air_base   = { size = 6 current_size = 6 }
  ic         = 3
}              # Bangkok
province = { id = 1345 ic = 1 } # Thom Buri

#####################
# Country main data #
#####################

country =
{ tag                    = SIA
  puppet		 = JAP
  belligerence           = 3
  # relation = { tag = MEN value = 75 }
  # Resource Reserves
  energy                 = 500
  metal                  = 500
  rare_materials         = 500
  oil                    = 200
  supplies               = 200
  capital                = 1343
  manpower               = 145
  SpyInfo                = { country = "SIA" NumberOfSpies = 6 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 5
  }
  nationalprovinces      = { 1348 1347 1345 1343 1342 1331 1330 1344 1339 1340 1341 1304 1349 1350 }
  ownedprovinces         = { 1348 1347 1345 1343 1342 1331 1330 1344 1303 1341 1339 1340 }
  controlledprovinces    = { 1347 1345 1343 1342 1331 1330 1344 1303 1341 1348 1304 1349 1350 1339 1340 }
  # ROTW Minor Tech '36
  # Group D 1944 techs
  # ######################
  techapps               = { 4010  4020  4030  4120  4130  4140  4190  4200  2010  2020  2030  2040  2050  2070  2150  2160  2290  2300  2310  2320
			     2330  1010  1020  1030  1040  1190  1200  1210  1220  1110  1120  2330  2400  2410  2450  2460  2470  2510  2520  1310
			     9010  9020  5010  5050  5080  5090  5100  5190  5200  6210  6300  6310  3010  3070  3400  8050  14000
			   }
  # relation = { tag = CHI value = 100 }
  diplomacy =
  { relation = { tag = ENG value = 70 }
    relation = { tag = FRA value = -100 }
    relation = { tag = JAP value = 150 }
    relation = { tag = MAN value = 75 }
  }
  headofstate            = { type = 9 id = 62112 }
  headofgovernment       = { type = 9 id = 62035 }
  foreignminister        = { type = 9 id = 62046 }
  armamentminister       = { type = 9 id = 62061 }
  ministerofsecurity     = { type = 9 id = 62075 }
  ministerofintelligence = { type = 9 id = 62086 }
  chiefofstaff           = { type = 9 id = 62091 }
  chiefofarmy            = { type = 9 id = 62097 }
  chiefofnavy            = { type = 9 id = 62102 }
  chiefofair             = { type = 9 id = 62107 }
  dormant_leaders        = { 100003 100009 100013 100024 100033 100042 100050 }
  landunit =
  { location = 1304
    name     = "Royal Thai Army"
    id       = { type = 11744 id = 1 }
    Division =
    { id            = { type = 11744 id = 2 }
      name          = "1st Infantry Division"
      type          = infantry
      model         = 1
      extra         = anti_tank
      brigade_model = 1
      strength      = 90
    }
    Division =
    { id       = { type = 11744 id = 3 }
      name     = "2nd Infantry Division"
      type     = infantry
      model    = 1
      strength = 80
    }
    Division =
    { id       = { type = 11744 id = 4 }
      name     = "3rd Infantry Division"
      type     = militia
      model    = 1
      strength = 80
    }
  }
  # #########################
  # ## SIAM NAVY OOB 1944 ###
  # #########################
  navalunit =
  { id       = { type = 11744 id = 15 }
    name     = "Royal Thai Navy"
    location = 1343
    base     = 1343
    division =
    { id    = { type = 11744 id = 16 }
      name  = "RTNS Sri Ayuthia"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 11744 id = 18 }
      name  = "Phra Ruang Flotille"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 11744 id = 17 }
      name  = "Sinsamudar Flotille"
      type  = submarine
      model = 0
    }
  }
  airunit =
  { location = 1343
    base     = 1343
    name     = "Royal Thai Airforce"
    id       = { type = 11744 id = 7 }
    Division =
    { id       = { type = 11744 id = 8 }
      name     = "1st interceptor Squadron"
      type     = interceptor
      model    = 1
      strength = 100
    }
    Division =
    { id       = { type = 11744 id = 12 }
      name     = "2nd interceptor Squadron"
      type     = interceptor
      model    = 1
      strength = 38
    }
    Division =
    { id       = { type = 11744 id = 9 }
      name     = "1st Bomber Squadron"
      type     = tactical_bomber
      model    = 1
      strength = 59
    }
    Division =
    { id       = { type = 11744 id = 13 }
      name     = "1st Naval Squadron"
      type     = naval_bomber
      strength = 23
      model    = 1
    }
  }
}
