
##############################
# Country definition for DEN #
##############################

province =
{ id         = 1
  anti_air   = 1
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 4 current_size = 4 }
}              # Reykjavik
province =
{ id         = 292
  anti_air   = 1
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 4 current_size = 4 }
}              # Aalborg
province =
{ id         = 294
  anti_air   = 2
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # Copenhagen

#####################
# Country main data #
#####################

country =
{ tag                    = DEN
  manpower               = 35
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 294
  SpyInfo                = { country = "DEN" NumberOfSpies = 3 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    free_market       = 6
    freedom           = 8
    professional_army = 3
    defense_lobby     = 1
    interventionism   = 3
  }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 8 }
  #SpyInfo                = { country = "FRA" NumberOfSpies = 5 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 4 }
  #SpyInfo                = { country = "POL" NumberOfSpies = 4 }
  #SpyInfo                = { country = "SWE" NumberOfSpies = 4 }
  #SpyInfo                = { country = "NOR" NumberOfSpies = 4 }
  #SpyInfo                = { country = "FIN" NumberOfSpies = 4 }
  #SpyInfo                = { country = "GER" NumberOfSpies = 10 }
  #SpyInfo                = { country = "HOL" NumberOfSpies = 4 }
  #SpyInfo                = { country = "USA" NumberOfSpies = 4 }
  nationalprovinces      = { 91 92 292 293 294 295 800 1 2 }
  ownedprovinces         = { 91 92 292 293 294 295 800 1 2 }
  controlledprovinces    = { 91 92 292 293 294 295 800 1 2 }
  # Western Minor Tech '36
  # Group C 1939 techs
  # ######################
  techapps               = { 5070  3130  4010  4020  4120  4130  2150  2010  2020  2030  2040  2290  2300  2310  2320  2330  2400  2450  2460  2510
			     1010  1020  1190  1200  1110  9010  9020  5010  5020  5030  5080  5090  5100  5050  5110  5190  5200  5470  6010  6020
			     3010  3070  3400  3410  8020  8040  8050  14000
			   }
  diplomacy =
  { relation = { tag = BEL value = 100 }
    relation = { tag = ENG value = 100 }
    relation = { tag = FIN value = 75 }
    relation = { tag = FRA value = 75 }
    relation = { tag = HOL value = 100 }
    relation = { tag = LUX value = 100 }
    relation = { tag = NOR value = 150 }
    relation = { tag = PER value = 50 }
    relation = { tag = SWE value = 75 }
    relation = { tag = USA value = 75 }
  }
  headofstate            = { type = 9 id = 16001 }
  headofgovernment       = { type = 9 id = 16002 }
  foreignminister        = { type = 9 id = 16003 }
  armamentminister       = { type = 9 id = 16004 }
  ministerofsecurity     = { type = 9 id = 16005 }
  ministerofintelligence = { type = 9 id = 16087 }
  chiefofstaff           = { type = 9 id = 16007 }
  chiefofarmy            = { type = 9 id = 16109 }
  chiefofnavy            = { type = 9 id = 16009 }
  chiefofair             = { type = 9 id = 16010 }
  dormant_ministers      = { 16006 }
  # #######################################
  # ##DANISH ARMY OOB1939##################
  # #######################################
  landunit =
  { location = 294
    id       = { type = 30020 id = 1 }
    name     = "Den Danske H�r"
    leader   = 9502
    division =
    { id       = { type = 30020 id = 2 }
      name     = "2. Sj�llandske Division"
      type     = infantry
      strength = 35
    }
  }
  landunit =
  { location = 91
    id       = { type = 30020 id = 3 }
    name     = "Jydske H�rafdeling"
    leader   = 9500
    division =
    { id       = { type = 30020 id = 4 }
      name     = "1. Jydske Division"
      type     = infantry
      strength = 35
    }
  }
  # ##################################
  # ##DANISH NAVY OOB1939#############
  # ##################################
  navalunit =
  { name     = "Den Danske Fl�de"
    id       = { type = 30020 id = 44 }
    location = 294
    base     = 294
    division =
    { id    = { type = 30020 id = 45 }
      name  = "HDMS Niels Juel"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 30020 id = 46 }
      name  = "HDMS Peder Skram"
      type  = heavy_cruiser
      model = 0
    }
    division =
    { id    = { type = 30020 id = 47 }
      name  = "1. Ub�ds Flotille"
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 30020 id = 48 }
      name  = "2. Ub�ds Flotille"
      type  = submarine
      model = 0
    }
  }
}
