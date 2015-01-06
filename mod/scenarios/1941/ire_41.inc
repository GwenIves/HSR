
##############################
# Country definition for IRE #
##############################

province =
{ id         = 30
  anti_air   = 3
  air_base   = { size = 8 current_size = 8 }
  naval_base = { size = 10 current_size = 10 }
}              # Dublin

#####################
# Country main data #
#####################

country =
{ tag                    = IRE
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 100
  manpower               = 30
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
  SpyInfo                = { country = "IRE" NumberOfSpies = 5 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 10 }
  #SpyInfo                = { country = "GER" NumberOfSpies = 5 }
  #SpyInfo                = { country = "USA" NumberOfSpies = 5 }
  nationalprovinces      = { 27 26 25 24 30 29 28 }
  ownedprovinces         = { 27 26 25 24 30 }
  controlledprovinces    = { 27 26 25 24 30 }
  # Group D 1941 techs
  # ######################
  techapps               = { 4010  4020  4030  4120  4130  2010  2020  2030  2040  2050  2150  2290  2300  2310  2320  1010  1020  1030  1190  1200
			     1210  1110  2330  2400  2450  2460  2470  2510  9010  5010  5050  5080  5090  5100  5190  6010  6020  5470  14000
			   }
  diplomacy =
  { relation = { tag = ENG value = 50 }
    relation = { tag = FIN value = 50 }
    relation = { tag = USA value = 75 }
  }
  headofstate            = { type = 9 id = 25035 }
  headofgovernment       = { type = 9 id = 25002 }
  foreignminister        = { type = 9 id = 25003 }
  armamentminister       = { type = 9 id = 25073 }
  ministerofsecurity     = { type = 9 id = 25095 }
  ministerofintelligence = { type = 9 id = 25111 }
  chiefofstaff           = { type = 9 id = 25124 }
  chiefofarmy            = { type = 9 id = 25136 }
  chiefofnavy            = { type = 9 id = 25143 }
  chiefofair             = { type = 9 id = 25153 }
  dormant_ministers      = { 25001 25034 25037 }
  landunit =
  { id       = { type = 10116 id = 1 }
    name     = "Army of the Irish Republic"
    location = 30
    division =
    { id       = { type = 10116 id = 2 }
      name     = "1st 'Thunderbolt' Division"
      strength = 100
      type     = infantry
      model    = 1
      extra    = artillery
    }
  }
  landunit =
  { id       = { type = 10116 id = 3 }
    name     = "II Irish Army Corps"
    location = 24
    division =
    { id       = { type = 10116 id = 4 }
      name     = "2nd 'Spearhead' Division"
      strength = 100
      type     = infantry
      model    = 1
    }
  }
  navalunit =
  { id       = { type = 10116 id = 5 }
    name     = "Irish Republic Navy"
    location = 30
    base     = 30
    # division = {
    # id = { type = 10116 id = 6 }
    # name = "1st Destroyer Flotilla"
    # type = destroyer
    # model = 0
    # }
    division =
    { id    = { type = 10116 id = 7 }
      name  = "1st Transport Flotilla"
      type  = transport
      model = 0
    }
  }
}
