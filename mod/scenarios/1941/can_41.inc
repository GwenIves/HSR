
##############################
# Country definition for CAN #
##############################

province =
{ id         = 541
  anti_air   = 2
  ic =  2
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Vancouver
province =
{ id       = 569
  anti_air = 1
  ic = 2
  air_base = { size = 4 current_size = 4 }
}            # Winnipeg
province =
{ id       = 579
  ic       = 2
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}            # Halifax
province =
{ id         = 581
  anti_air   = 2
  air_base   = { size = 6 current_size = 6 }
  naval_base = { size = 10 current_size = 10 }
}              # Saint John
province =
{ id       = 585
  ic       = 5
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            # Montréal
province =
{ id         = 586
  ic         = 4
  anti_air   = 2
  air_base   = { size = 6 current_size = 6 }
  naval_base = { size = 10 current_size = 10 }
}              # Québec City
province = { id = 587 ic = 1 } # Gatineau
province =
{ id       = 588
  ic = 3
  anti_air = 3
  air_base = { size = 4 current_size = 4 }
}            # Ottawa
province = { id = 589 ic = 1 anti_air = 1 } # Toronto
province =
{ id       = 797
  ic       = 1
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}            # Calgary

#####################
# Country main data #
#####################

country =
{ tag                    = CAN
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 200
  manpower               = 110
  capital                = 588
  transports             = 30
  escorts                = 10
  SpyInfo                = { country = "CAN" NumberOfSpies = 10 }
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
  # UK 1941 techs
  # ######################
  techapps               = { 4010  4020  4030  4040  4120  4130  4140  4220  4190  4250  2010  2020  2040  2050  2030  2070  2290  2300  2310
			     2320  2330  2340  2400  2410  2450  2460  2470  2510  2520  1010  1020  1030  1190  1200  1210  1220  1110  1120  1130
			     1070  1230  1150  1160  1310  1340  5010  5020  5030  5050  5060  5070  5080  5090  5100  5110  5120  5130  5140  5160
			     5180  5190  5200  5310  5320  5330  5350  5360  5370  5380  5410  5420  5470  5480  5490  5550  9010  9020  9030  9040
			     9050  9060  9070  9080  9090  9100  9110  9120  9130  9140  9190  9210  9220  9230  9240  9250  9350  6010  6030  6110
			     6120  8010  8020  8030  8040  8050  8070  8100  8120  8130  8190  8200  8310  3010  3020  3030  3070  3080  14000 14010
			     14020 2150
			   }
  diplomacy =
  { relation = { tag = NIC value = 200 }
    relation = { tag = AST value = 200 access = yes }
    relation = { tag = BEL value = 200 }
    relation = { tag = BHU value = 200 }
    relation = { tag = ENG value = 200 access = yes }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = -200 }
    relation = { tag = HOL value = 80 }
    relation = { tag = ITA value = -200 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 access = yes }
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 200 access = yes }
    relation = { tag = USA value = 200 }
    relation = { tag = YEM value = 150 }
  }
  headofstate            = { type = 9 id = 45132 }
  headofgovernment       = { type = 9 id = 45002 }
  foreignminister        = { type = 9 id = 45003 }
  armamentminister       = { type = 9 id = 45004 }
  ministerofsecurity     = { type = 9 id = 45068 }
  ministerofintelligence = { type = 9 id = 45086 }
  chiefofstaff           = { type = 9 id = 45099 }
  chiefofarmy            = { type = 9 id = 45108 }
  chiefofnavy            = { type = 9 id = 45009 }
  chiefofair             = { type = 9 id = 45010 }
  dormant_ministers      = { 45128 45001 45129 45130 45036 45043 45005 45004 }
  landunit =
  { location = 586
    id       = { type = 10101 id = 1100 }
    name     = "Home Army HQ"
    division =
    { id       = { type = 10101 id = 1101 }
      name     = "Home Army HQ"
      type     = hq
      model    = 1
      strength = 100
    }
  }
  landunit =
  { id       = { type = 10101 id = 1 }
    name     = "Royal Canadian Army"
    location = 17
    division =
    { id       = { type = 10101 id = 2 }
      name     = "1st Canadian Infantry Div."
      strength = 100
      type     = motorized
      extra    = artillery
      model    = 0
    }
    division =
    { id       = { type = 10101 id = 3 }
      name     = "2nd Canadian Infantry Div."
      strength = 100
      type     = motorized
      model    = 0
    }
    division =
    { id       = { type = 10101 id = 4 }
      name     = "3rd Canadian Infantry Div."
      strength = 100
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 10101 id = 6 }
      name     = "5th Canadian Armoured Division"
      strength = 100
      type     = armor
      model    = 2
    }
  }
  landunit =
  { id       = { type = 10101 id = 16 }
    name     = "Home Army"
    location = 586
    division =
    { id       = { type = 10101 id = 17 }
      name     = "4th Canadian Infantry Div."
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 10101 id = 18 }
      name     = "6th Canadian Infantry Div."
      strength = 10
      type     = infantry
    }
  }
  navalunit =
  { id       = { type = 10101 id = 7 }
    location = 586
    base     = 586
    name     = "Canadian Transport Fleet"
    division =
    { id   = { type = 10101 id = 8 }
      name = "'Empress of Japan' Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10101 id = 9 }
      name = "'Empress of Australia' Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10101 id = 10 }
      name = "'Empress of Britain' Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10101 id = 11 }
      name = "'Empress of Canada' Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10101 id = 12 }
      name = "'Empress of Russia' Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10101 id = 13 }
      name = "'Empress of Asia' Flotilla"
      type = transport
    }
  }
  navalunit =
  { id       = { type = 10101 id = 14 }
    name     = "Royal Canadian Navy"
    location = 586
    base     = 586
    division =
    { id       = { type = 20000 id = 15 }
      name     = "Destroyer Flotilla 1"
      strength = 100
      type     = destroyer
      model    = 1
    }
  }
}
