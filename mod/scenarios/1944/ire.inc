
##############################
# Country definition for IRE #
##############################

province =
{ id         = 30
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 5 current_size = 5 }
}              # Dublin

#####################
# Country main data #
#####################

country =
{ tag                    = IRE
  manpower               = 30
  # Resource Reserves
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  capital                = 30
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 4
    freedom           = 8
    free_market       = 7
    professional_army = 3
    defense_lobby     = 4
    interventionism   = 2
  }
  SpyInfo                = { country = "IRE" NumberOfSpies = 5}
  #SpyInfo                = { country = "ENG" NumberOfSpies = 12}
  #SpyInfo                = { country = "GER" NumberOfSpies = 5}
  #SpyInfo                = { country = "USA" NumberOfSpies = 5}
  nationalprovinces      = { 27 26 25 24 30 29 28 }
  ownedprovinces         = { 27 26 25 24 30 }
  controlledprovinces    = { 27 26 25 24 30 }
  # Western Minor Tech '36
  # Group D 1944 techs
  # ######################
  techapps               = { 4010  4020  4030  4120  4130  4140  2010  2020  2030  2040  2050  2070  2150  2160  2290  2300  2310  2320  2330  1010
			     1020  1030  1040  1190  1200  1210  1220  1110  1120  2330  2400  2410  2450  2460  2470  2510  2520  1310  9010  9020
			     5010  5050  5080  5090  5100  5190  5200  6010  6020  6040  14000 14010
			   }
  diplomacy =
  { relation = { tag = ENG value = 50 }
    relation = { tag = FIN value = 50 }
    relation = { tag = USA value = 75 }
  }
  dormant_ministers      = { 25001 25034 25037 25042 }
  headofstate            = { type = 9 id = 25036 }
  headofgovernment       = { type = 9 id = 25002 }
  foreignminister        = { type = 9 id = 25003 }
  armamentminister       = { type = 9 id = 25074 }
  ministerofsecurity     = { type = 9 id = 25095 }
  ministerofintelligence = { type = 9 id = 25111 }
  chiefofstaff           = { type = 9 id = 25125 }
  chiefofarmy            = { type = 9 id = 25136 }
  chiefofnavy            = { type = 9 id = 25144 }
  chiefofair             = { type = 9 id = 25154 }
  landunit =
  { location = 26 # Cork
    id       = { type = 10495 id = 1 }
    name     = "Western Defense Area"
    division =
    { id    = { type = 10495 id = 2 }
      name  = "1st 'Thunderbolt' Division"
      type  = infantry
      model = 2
    }
  }
  landunit =
  { location = 30 # Dublin
    id       = { type = 10495 id = 3 }
    name     = "Eastern Defense Area"
    division =
    { id    = { type = 10495 id = 4 }
      name  = "2nd 'Spearhead' Division"
      type  = infantry
      model = 2
    }
  }
}
