
##############################
# Country definition for CAN #
##############################

province =
{ id            = 541
  anti_air      = 3
  naval_base    = { size = 10 current_size = 10 }
  air_base      = { size = 10 current_size = 10 }
  radar_station = { size = 1 current_size = 1 }
}                 # Vancouver
province =
{ id            = 579
  ic            = 6
  naval_base    = { size = 7 current_size = 7 }
  air_base      = { size = 5 current_size = 5 }
  radar_station = { size = 1 current_size = 1 }
}                 # Halifax
province = { id = 585 anti_air = 3 ic = 9 } # Montréal
province = { id = 586 anti_air = 6 ic = 6 } # Québec City
province = { id = 587 ic = 6 } # Gatineau
province = { id = 588 anti_air = 6 } # Ottawa
province = { id = 589 anti_air = 3 ic = 6 } # Toronto
province = { id = 797 ic = 6 } # Calgary

#####################
# Country main data #
#####################

country =
{ tag                    = CAN
  # Resource Reserves
  energy                 = 5000
  metal                  = 5000
  rare_materials         = 5000
  oil                    = 3000
  supplies               = 5000
  transports             = 115
  escorts                = 36
  manpower               = 110
  capital                = 588
  SpyInfo                = { country = "CAN" NumberOfSpies = 9 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 2
    free_market       = 10
    freedom           = 10
    professional_army = 6
    defense_lobby     = 7
    interventionism   = 8
  }
  nationalprovinces      = { 556  541  555  554  552  558  557  796  797  799  798  795  794  559  560  561  563  566  567  570  568  569  571  565
			     572  588  589  590  591  587  585  584  573  586  574  564  581  580  579  578  1909
			   }
  ownedprovinces         = { 556  541  555  554  552  558  557  796  797  799  798  795  794  559  560  561  563  566  567  570  568  569  571  565
			     572  588  589  590  591  587  585  584  573  586  574  564  581  580  579  578  1909
			   }
  controlledprovinces    = { 556  541  555  554  552  558  557  796  797  799  798  795  794  559  560  561  563  566  567  570  568  569  571  565
			     572  588  589  590  591  587  585  584  573  586  574  564  581  580  579  578  1909
			   }
  # UK 1944 techs
  # ######################
  techapps               = { 4010  4020  4030  4040  4050  4060  4070  4080  4090  4100  4110  4120  4130  4140  4150  4160  4170  4280  4180  4190
			     4200  4210  4220  4230  4240  4250  4260  2010  2020  2040  2050  2060  2030  2070  2080  2090  2100  2110  2120  2150
			     2160  2170  2180  2190  2220  2230  2240  2260  2270  2290  2300  2310  2320  2330  2340  2350  2360  2370  2380  2400
			     2410  2420  2430  2450  2460  2470  2480  2490  2510  2520  2530  1010  1020  1030  1040  1050  1190  1200  1210  1220
			     1110  1120  1130  1040  1070  1080  1090  1230  1240  1250  1260  1270  1280  1310  1320  1330  1340  1350  1360  5010
			     5020  5030  5050  5060  5070  5080  5090  5100  5110  5120  5130  5140  5160  5180  5190  5200  5210  5220  5230  5310
			     5320  5330  5340  5350  5360  5370  5380  5390  5400  5410  5420  5430  5440  5470  5480  5490  5500  5510  5550  5560
			     9010  9020  9030  9040  9050  9060  9070  9080  9090  9100  9110  9120  9130  9140  9150  9160  9170  9180  9190  9200
			     9210  9220  9230  9240  9250  9260  9270  9280  9290  9300  9310  9320  9330  9340  9350  9360  9370  9380  9390  9400
			     9410  9420  9430  9440  9450  9460  6010  6030  6110  6120  6130  6140  6170  6200  1150  1160  1170  1180  8010  8020
			     8030  8040  8050  8070  8100  8110  8120  8130  8140  8190  8200  8250  8090  8160  3010  3020  3030  3070  3080  3090
			     3100  12100  8310  14000 14010 14020
			   }
  diplomacy =
  { relation = { tag = SAF access = yes value = 200 }
    relation = { tag = ENG access = yes value = 200 }
    relation = { tag = AST access = yes value = 200 }
    relation = { tag = NZL access = yes value = 200 }
    relation = { tag = BEL value = 200 }
    relation = { tag = BHU value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = -200 }
    # relation = { tag = IRQ value = 100 }
    # relation = { tag = ITA value = -200 }
    relation = { tag = NEP value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = USA value = 200 }
    relation = { tag = YEM value = 150 }
  }
  dormant_ministers      = { 45128 45001 45129 45130 45036 45043 45037 45045 45049 45005 45004 }
  headofstate            = { type = 9 id = 45132 }
  headofgovernment       = { type = 9 id = 45002 }
  foreignminister        = { type = 9 id = 45003 }
  armamentminister       = { type = 9 id = 45054 }
  ministerofsecurity     = { type = 9 id = 45069 }
  ministerofintelligence = { type = 9 id = 45087 }
  chiefofstaff           = { type = 9 id = 45100 }
  chiefofarmy            = { type = 9 id = 45109 }
  chiefofnavy            = { type = 9 id = 45009 }
  chiefofair             = { type = 9 id = 45010 }
  # ## Canada OOB 1944 Author: JA ###
  landunit =
  { location = 521 # Napoli
    id       = { type = 6789 id = 1 }
    name     = "Canadian 1st Corps"
    division =
    { experience    = 60
      id            = { type = 6789 id = 2 }
      name          = "1st Canadian Infantry Div."
      strength      = 100
      type          = motorized
      model         = 2
      extra         = artillery
      brigade_model = 5
    }
    division =
    { experience = 60
      id         = { type = 6789 id = 3 }
      name       = "2nd Canadian Infantry Div."
      strength   = 100
      type       = motorized
      model      = 2
      extra      = engineer
    }
  }
  landunit =
  { location = 37
    id       = { type = 6789 id = 4 }
    name     = "Canadian 2nd Corps"
    division =
    { experience    = 60
      id            = { type = 6789 id = 5 }
      name          = "3rd Canadian Infantry Div."
      strength      = 100
      type          = motorized
      model         = 2
      extra         = artillery
      brigade_model = 5
    }
    division =
    { experience = 60
      id         = { type = 6789 id = 6 }
      name       = "4th Canadian Armoured Div."
      strength   = 100
      type       = armor
      model      = 3
      extra      = engineer
    }
    division =
    { experience    = 60
      id            = { type = 6789 id = 7 }
      name          = "5th Canadian Armoured Div."
      strength      = 100
      type          = armor
      model         = 3
      extra         = anti_air
      brigade_model = 2
    }
  }
  landunit =
  { location = 541 # Vancouver
    id       = { type = 6789 id = 8 }
    name     = "6th Division"
    division =
    { experience = 60
      id         = { type = 6789 id = 9 }
      name       = "6th Canadian Infantry Div."
      strength   = 100
      type       = motorized
      model      = 2
      extra      = engineer
    }
  }
  landunit =
  { location = 579 # Halifax
    id       = { type = 6789 id = 10 }
    name     = "7th Division"
    division =
    { experience    = 60
      id            = { type = 6789 id = 11 }
      name          = "7th Canadian Infantry Div."
      strength      = 100
      type          = motorized
      model         = 2
      extra         = anti_air
      brigade_model = 2
    }
  }
  landunit =
  { location = 553
    id       = { type = 6789 id = 12 }
    name     = "8th Division"
    division =
    { experience = 60
      id         = { type = 6789 id = 13 }
      name       = "8th Canadian Infantry Div."
      strength   = 100
      type       = motorized
      model      = 2
      extra      = engineer
    }
  }
  landunit =
  { location = 579 # Halifax
    id       = { type = 6789 id = 14 }
    name     = "1st Army HQ"
    division =
    { experience = 60
      id         = { type = 6789 id = 15 }
      name       = "1st Army HQ"
      type       = hq
      model      = 2
      strength   = 100
    }
  }
  # #######################
  # ##CANADIAN NAVAL OOB###
  # #########1941##########
  # #######################
  navalunit =
  { id       = { type = 11128 id = 100 }
    name     = "Royal Canadian Fleet"
    location = 579
    base     = 579
    division =
    { experience = 60
      id         = { type = 11128 id = 101 }
      name       = "Destroyer Flotilla 1"
      strength   = 100
      type       = destroyer
      model      = 1
    }
    division =
    { experience = 60
      id         = { type = 11128 id = 102 }
      name       = "Destroyer Flotilla 2"
      strength   = 100
      type       = destroyer
      model      = 2
    }
    division =
    { experience = 60
      id         = { type = 11128 id = 103 }
      name       = "'Empress of Japan' Flotilla"
      type       = transport
    }
    division =
    { experience = 60
      id         = { type = 11128 id = 104 }
      name       = "'Empress of Australia' Flotilla"
      type       = transport
    }
    division =
    { experience = 60
      id         = { type = 11128 id = 105 }
      name       = "'Empress of Britain' Flotilla"
      type       = transport
    }
    division =
    { experience = 60
      id         = { type = 11128 id = 106 }
      name       = "'Empress of Canada' Flotilla"
      type       = transport
    }
    division =
    { experience = 60
      id         = { type = 11128 id = 107 }
      name       = "'Empress of Russia' Flotilla"
      type       = transport
    }
    division =
    { experience = 60
      id         = { type = 11128 id = 108 }
      name       = "'Empress of Asia' Flotilla"
      type       = transport
    }
    division =
    { experience = 60
      id         = { type = 11128 id = 109 }
      name       = "'Duchess of Richmond' Flotilla"
      type       = transport
    }
    division =
    { experience = 60
      id         = { type = 11128 id = 110 }
      name       = "'Duchess of Bedford' Flotilla"
      type       = transport
    }
    division =
    { experience = 60
      id         = { type = 11128 id = 111 }
      name       = "'Duchess of York' Flotilla"
      type       = transport
    }
  }
  airunit =
  { location = 21
    base     = 21
    id       = { type = 11128 id = 647 }
    name     = "100. Group"
    division =
    { experience = 60
      id         = { type = 11128 id = 648 }
      name       = "No.23 Squadron "
      strength   = 100
      type       = tactical_bomber
      model      = 2
    }
    division =
    { experience = 60
      id         = { type = 11128 id = 649 }
      name       = "No.157 Squadron"
      strength   = 100
      type       = tactical_bomber
      model      = 1
    }
    division =
    { experience = 60
      id         = { type = 11128 id = 650 }
      name       = "No.199 Squadron"
      strength   = 100
      type       = strategic_bomber
      model      = 1
    }
  }
}
