
##############################
# Country definition for IRE #
##############################

province =
{ id         = 30
  anti_air   = 2
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 4 current_size = 4 }
}              # Dublin

#####################
# Country main data #
#####################

country =
{ tag                    = IRE
  manpower               = 30
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 30
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 3
    freedom           = 8
    free_market       = 7
    professional_army = 3
    defense_lobby     = 4
    interventionism   = 2
  }
  SpyInfo                = { country = "IRE" NumberOfSpies = 4 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 8 }
  #SpyInfo                = { country = "GER" NumberOfSpies = 4 }
  #SpyInfo                = { country = "USA" NumberOfSpies = 4 }
  nationalprovinces      = { 27 26 25 24 30 29 28 }
  ownedprovinces         = { 27 26 25 24 30 }
  controlledprovinces    = { 27 26 25 24 30 }
  # Western Minor Tech '36
  # Group D 1939 techs
  # ######################
  techapps               = { 2320  4010  4020  2150  2010  2020  2290  2300  2310  1010  1020  1190  1200  1110  2330  2400  2450  2460  2510  5010
			     5080  5090  5100  5190  6010  14000
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
  chiefofnavy            = { type = 9 id = 25142 }
  chiefofair             = { type = 9 id = 25152 }
  dormant_ministers      = { 25001 25034 25037 }
  # ###############################
  # ##IRISH ARMY OOB39#############
  # ###############################
  landunit =
  { location = 24 # Cork
    id       = { type = 13018 id = 1 }
    name     = "Army of the Irish Republic"
    division =
    { id    = { type = 13018 id = 2 }
      name  = "1st 'Thunderbolt' Division"
      type  = infantry
      extra = artillery
    }
  }
  landunit =
  { location = 30 # Dublin
    id       = { type = 13018 id = 3 }
    name     = "II Irish Army Corps"
    division =
    { id   = { type = 13018 id = 4 }
      name = "2nd 'Spearhead' Division"
      type = infantry
    }
  }
  navalunit =
  { id       = { type = 13018 id = 5 }
    name     = "Irish Republic Navy"
    location = 30
    base     = 30
    # division = {
    # id = { type = 13018 id = 6 }
    # name = "1st Destroyer Flotilla"
    # type = destroyer
    # model = 0
    # }
    division =
    { id    = { type = 13018 id = 7 }
      name  = "1st Transport Flotilla"
      type  = transport
      model = 0
    }
  }
}
