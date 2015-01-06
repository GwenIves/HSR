
##############################
# Country definition for CAN #
##############################

province =
{ id         = 541
  anti_air   = 3
  ic =  1
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Vancouver
province =
{ id       = 569
  anti_air = 1
  ic = 1
  air_base = { size = 4 current_size = 4 }
}            # Winnipeg
province =
{ id         = 579
  ic         = 1
  anti_air   = 1
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 8 current_size = 8 }
}              # Halifax
province =
{ id         = 581
  anti_air   = 2
  air_base   = { size = 6 current_size = 6 }
  naval_base = { size = 10 current_size = 10 }
}              # Saint John
province =
{ id       = 585
  ic       = 3
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            # Montréal
province =
{ id         = 586
  anti_air   = 4
  ic = 2
  air_base   = { size = 6 current_size = 6 }
  naval_base = { size = 10 current_size = 10 }
}              # Québec City
province =
{ id       = 588
  ic = 2
  anti_air = 3
  air_base = { size = 4 current_size = 4 }
}            # Ottawa
province = { id = 589 ic = 1 anti_air = 1 } # Toronto
province =
{ id       = 797
  ic       = 2
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}            # Calgary

#####################
# Country main data #
#####################

country =
{ tag                    = CAN
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  manpower               = 110
  capital                = 588
  diplomacy =
  { relation = { tag = AST value = 200 } # was access = yes
    relation = { tag = BEL value = 150 }
    relation = { tag = BHU value = 200 }
    relation = { tag = ENG value = 200 } # was access = yes
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = -200 }
    relation = { tag = HOL value = 80 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = -100 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 } # was access = yes
    relation = { tag = OMN value = 150 }
    relation = { tag = POL value = 200 }
    relation = { tag = SAF value = 200 } # was access = yes
    relation = { tag = USA value = 175 }
    relation = { tag = YEM value = 150 }
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
  # Commonwealth Tech '36
  # UK 1939 techs
  # ######################
  techapps               = { 1010  1020  1030  1190  1200  1210  1220  1230  1310  1340  14000 14010 2010  2020  2030  2040  2050  2070  2150  2160
			     2290  2300  2310  2320  2330  2400  2450  2460  2510  3010  3020  3070  4010  4020  4030  4050  4120  4130  4220  5010
			     5020  5030  5050  5080  5090  5100  5190  5200  5310  5320  5350  5360  6010  6030  6110  6120  8010  8020  8030  8040
			     8050  8070  8100  8120  8130  8310  9010  9020  9030  9040  9060  9090  9140  9150  9160
			   }
  SpyInfo                = { country = "CAN" NumberOfSpies = 7 }
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
  headofstate            = { type = 9 id = 45001 }
  headofgovernment       = { type = 9 id = 45002 }
  foreignminister        = { type = 9 id = 45003 }
  armamentminister       = { type = 9 id = 45004 }
  ministerofsecurity     = { type = 9 id = 45005 }
  ministerofintelligence = { type = 9 id = 45006 }
  chiefofstaff           = { type = 9 id = 45007 }
  chiefofarmy            = { type = 9 id = 45008 }
  chiefofnavy            = { type = 9 id = 45009 }
  chiefofair             = { type = 9 id = 45010 }
  landunit =
  { id       = { type = 20000 id = 1 }
    name     = "Royal Canadian Army"
    location = 588
    division =
    { experience    = 25
      id            = { type = 20000 id = 2 }
      name          = "1st Canadian Infantry Div."
      strength      = 100
      type          = infantry
      model         = 1
      extra         = artillery
      brigade_model = 3
    }
    division =
    { experience = 25
      id         = { type = 20000 id = 3 }
      name       = "2nd Canadian Infantry Div."
      strength   = 100
      type       = infantry
      model      = 1
    }
  }
  navalunit =
  { id       = { type = 11128 id = 7 }
    name     = "Royal Canadian Fleet"
    location = 579
    base     = 579
    division =
    { id       = { type = 11128 id = 8 }
      name     = "Destroyer Flotilla 1"
      strength = 100
      type     = destroyer
      model    = 1
    }
    division =
    { id       = { type = 11128 id = 9 }
      name     = "Destroyer Flotilla 2"
      strength = 100
      type     = destroyer
      model    = 1
    }
    division =
    { id    = { type = 11128 id = 10 }
      name  = "'Empress of Japan' Flotilla"
      type  = transport
      model = 0
    }
    division =
    { id   = { type = 10128 id = 11 }
      name = "'Empress of Australia' Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10128 id = 12 }
      name = "'Empress of Britain' Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10128 id = 13 }
      name = "'Empress of Canada' Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10128 id = 14 }
      name = "'Empress of Russia' Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10128 id = 15 }
      name = "'Empress of Asia' Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10128 id = 16 }
      name = "'Duchess of Richmond' Flotilla"
      type = transport
    }
  }
}
