
##############################
# Country definition for CAN #
##############################

province =
{ id          = 541

  coastalfort = 1
  air_base    = { size = 2 current_size = 2 }
  naval_base  = { size = 6 current_size = 6 }
}               # Vancouver
province =
{ id       = 569
  air_base = { size = 1 current_size = 1 }
}            # Winnipeg
province =
{ id          = 579
  ic          = 1

  coastalfort = 1
  air_base    = { size = 1 current_size = 1 }
  naval_base  = { size = 6 current_size = 6 }
}               # Halifax
province =
{ id          = 581

  coastalfort = 1
  air_base    = { size = 1 current_size = 1 }
  naval_base  = { size = 6 current_size = 6 }
}               # Saint John
province =
{ id       = 585
  ic       = 2
  air_base = { size = 1 current_size = 1 }
}            # Montréal
province =
{ id         = 586
  air_base   = { size = 1 current_size = 1 }
  naval_base = { size = 6 current_size = 6 }
}              # Québec City
province =
{ id       = 588
  air_base = { size = 2 current_size = 2 }
}            # Ottawa
province = { id = 589 ic = 1 } # Toronto
province =
{ id       = 797
  ic       = 1
  air_base = { size = 1 current_size = 1 }
}            # Calgary

#####################
# Country main data #
#####################

country =
{ tag                    = CAN
  peacetime_ic_mod       = 0.2 # this will keep spending tight (20%) until outbreak of war
  ai                     = "CAN_1936.ai"
  energy                 = 10000
  metal                  = 10000
  rare_materials         = 5000
  oil                    = 500
  supplies               = 500
  money                  = 100
  manpower               = 10
  capital                = 588
  diplomacy =
  { relation = { tag = AST value = 200 }
    relation = { tag = BEL value = 150 }
    relation = { tag = BHU value = 150 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = -50 }
    relation = { tag = HOL value = 80 }
    relation = { tag = ITA value = -10 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = NEP value = 150 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = POL value = 200 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 175 }
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
  # Great War Infantry
  techapps               = { 1010  1020  1110  1150  1190  1200  1210  1220  1230  1310  1340  2010  2020  2030  2040  2150  2290  2300  2310  2320
			     2330  2400  2450  2460  2510  3010  3020  3030  3070  3080  3090  3100  3400  3410  4010  4020  4030  4120  4130  4140
			     4190  5010  5020  5030  5050  5080  5090  5190  5200  5310  5320  5350  5360  5410  6010  6030  6110  8010  8020  8050
			     8070  8120  8310  9010  9020  9030  9090  14000 14010
			   }
  SpyInfo                = { country = "CAN" NumberOfSpies = 6 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 3
    free_market       = 10
    freedom           = 10
    professional_army = 6
    defense_lobby     = 7
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 45001 } # John Baron Tweedsmuir
  headofgovernment       = { type = 9 id = 45002 } # Mackenzie King
  foreignminister        = { type = 9 id = 45003 } # Mackenzie King
  armamentminister       = { type = 9 id = 45004 } # Ian A. MacKenzie
  ministerofsecurity     = { type = 9 id = 45005 } # Ernest Lapointe
  ministerofintelligence = { type = 9 id = 45085 } # Herbert Brown Ames
  chiefofstaff           = { type = 9 id = 45101 } # Kenneth Stuart
  chiefofarmy            = { type = 9 id = 45110 } # Kenneth Stuart
  chiefofnavy            = { type = 9 id = 45009 } # Percy Nelles
  chiefofair             = { type = 9 id = 45010 } # George Croil
  landunit =
  { id       = { type = 11128 id = 1 }
    name     = "1st (Halifax) Coast Brigade"
    location = 579
    division =
    { id         = { type = 11128 id = 2 }
      name       = "Halifax Rifles"
      experience = 10
      strength   = 10
      type       = garrison
      model      = 1
    }
  }
  landunit =
  { id       = { type = 11128 id = 3 }
    name     = "15th (Vancouver) Coast Brigade"
    location = 541
    division =
    { id         = { type = 11128 id = 4 }
      name       = "Irish Fusiliers"
      experience = 10
      strength   = 10
      type       = garrison
      model      = 1
    }
  }
  landunit =
  { id       = { type = 11128 id = 7 }
    name     = "3rd (New Brunswick) Coast Brigade"
    location = 581
    division =
    { id         = { type = 11128 id = 8 }
      name       = "St. John Fusiliers"
      experience = 10
      strength   = 10
      type       = garrison
      model      = 1
    }
  }
  navalunit =
  { id       = { type = 11128 id = 9 }
    name     = "Royal Canadian Navy"
    location = 579
    base     = 579
    division =
    { id    = { type = 11128 id = 10 }
      name  = "Destroyer Flotilla 1"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 11128 id = 18 }
      name  = "Destroyer Flotilla 2"
      type  = destroyer
      model = 1
    }
    division =
    { id   = { type = 10128 id = 13 }
      name = "Prince David"
      type = transport
    }
    division =
    { id   = { type = 10128 id = 16 }
      name = "Prince Robert"
      type = transport
    }
    division =
    { id   = { type = 10128 id = 17 }
      name = "Prince Henry"
      type = transport
    }
  }
  airunit =
  { id       = { type = 11128 id = 11 }
    name     = "RCAF Station Vancouver"
    location = 541
    base     = 541
    division =
    { id       = { type = 11128 id = 12 }
      name     = "No. 6 (Torpedo Bomber) Squadron "
      strength = 20
      type     = naval_bomber
      model    = 0
    }
  }
  airunit =
  { id       = { type = 11128 id = 13 }
    name     = "Royal Canadian Air Force"
    location = 588
    base     = 588
    division =
    { id       = { type = 11128 id = 14 }
      name     = "No. 3 (Bomber) Squadron"
      strength = 20
      type     = tactical_bomber
      model    = 1
    }
    division =
    { id       = { type = 11128 id = 15 }
      name     = "No. 1 (Fighter) Squadron "
      strength = 10
      type     = interceptor
      model    = 1
    }
  }
}
