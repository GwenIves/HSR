
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
  SpyInfo                = { country = "SIA" NumberOfSpies = 5 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 5
  }
  nationalprovinces      = { 1348 1347 1345 1343 1342 1331 1330 1344 1304 1349 1350 }
  ownedprovinces         = { 1303 1304 1330 1331 1342 1343 1344 1345 1347 }
  controlledprovinces    = { 1303 1304 1330 1331 1342 1343 1344 1345 1347 }
  # ROTW Minor Tech '36
  # Group D 1944 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1110  1120  1190  1200  1210  1220  1310  14000 14010 2010  2020  2030  2040  2050  2070  2150
			     2160  2290  2300  2310  2320  2330  2330  2400  2410  2450  2460  2470  2510  2520  3010  3070  3400  4010  4020  4030
			     4120  4130  4140  4190  4200  5010  5050  5080  5090  5100  5190  5200  6210  6300  6310  8050  9010  9020
			   }
  # relation = { tag = CHI value = 100 }
  diplomacy =
  { relation = { tag = ENG value = 70 }
    relation = { tag = FRA value = -100 }
  }
  headofstate            = { type = 9 id = 62032 }
  headofgovernment       = { type = 9 id = 62037 }
  foreignminister        = { type = 9 id = 62048 }
  armamentminister       = { type = 9 id = 62064 }
  ministerofsecurity     = { type = 9 id = 62078 }
  ministerofintelligence = { type = 9 id = 62088 }
  chiefofstaff           = { type = 9 id = 62093 }
  chiefofarmy            = { type = 9 id = 62099 }
  chiefofnavy            = { type = 9 id = 62104 }
  chiefofair             = { type = 9 id = 62109 }
  dormant_leaders        = { 62031 62042 100003 100009 100013 100024 100033 100042 100050 }
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
}
