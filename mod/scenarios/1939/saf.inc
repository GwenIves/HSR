
##############################
# Country definition for SAF #
##############################

province =
{ id         = 1108
  anti_air   = 2
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
}              # Walvis Bay
province =
{ id         = 1116
  ic         = 2
  anti_air   = 2
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # Cape Town
province = { id = 1117 anti_air = 1 } # Port Elisabeth
province =
{ id         = 1119
  anti_air   = 2
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
}              # Durban
province = { id = 1120 ic = 1 anti_air = 3 } # Johannesburg

#####################
# Country main data #
#####################

country =
{ tag                    = SAF
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  manpower               = 100
  capital                = 1121
  diplomacy =
  { relation = { tag = AST value = 200 } # was access = yes
    relation = { tag = BEL value = 35 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 } # was access = yes
    relation = { tag = ENG value = 200 } # was access = yes
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = -200 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = -100 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 } # was access = yes
    relation = { tag = OMN value = 150 }
    relation = { tag = POL value = 200 }
    relation = { tag = POR value = 125 }
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
  }
  # Southwest Africa Mandate
  nationalprovinces      = { 1115 1116 1114 1117 1118 1120 1113 1121 1119 }
  ownedprovinces         = { 1115 1116 1114 1117 1118 1120 1113 1121 1119 1108 1107 1106 1109 1110 }
  # Southwest Africa Mandate
  controlledprovinces    = { 1115 1116 1114 1117 1118 1120 1113 1121 1119 1108 1107 1106 1109 1110 }
  # Commonwealth Tech '36
  # UK 1939 techs
  # ######################
  techapps               = { 1010  1020  1030  1190  1200  1210  1220  1230  1310  1340  14000 2010  2020  2030  2040  2050  2070  2150  2160  2290
			     2300  2310  2320  2330  2400  2450  2460  2510  3010  4010  4020  4030  4050  4120  4130  4220  5010  5020  5030  5050
			     5060  5070  5080  5090  5100  5110  5190  5200  5310  5320  5350  5360  6010  6030  6110  6120  8010  8020  8030  8040
			     8050  8070  8100  8120  8130  8310  9010  9020  9030  9040  9060  9090  9140  9150  9160
			   }
  SpyInfo                = { country = "SAF" NumberOfSpies = 5 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 10
    free_market       = 8
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 70023 }
  headofgovernment       = { type = 9 id = 70002 }
  foreignminister        = { type = 9 id = 70003 }
  armamentminister       = { type = 9 id = 70043 }
  ministerofsecurity     = { type = 9 id = 70061 }
  ministerofintelligence = { type = 9 id = 70066 }
  chiefofstaff           = { type = 9 id = 70007 }
  chiefofarmy            = { type = 9 id = 70077 }
  chiefofnavy            = { type = 9 id = 70009 }
  chiefofair             = { type = 9 id = 70010 }
  dormant_ministers      = { 70001 70022 }
  landunit =
  { name     = "Cape Command"
    location = 1116
    id       = { type = 11156 id = 1 }
    division =
    { id       = { type = 11156 id = 2 }
      name     = "Cape Command Garrison"
      type     = garrison
      strength = 50
    }
  }
  landunit =
  { name     = "Witwatersrand Command"
    location = 1120
    id       = { type = 11156 id = 3 }
    division =
    { id       = { type = 11156 id = 4 }
      name     = "Witwatersrand Command Garrison"
      type     = garrison
      strength = 50
    }
  }
  landunit =
  { name     = "Natal Command"
    location = 1119
    id       = { type = 11156 id = 5 }
    division =
    { id       = { type = 11156 id = 6 }
      name     = "Natal Command Garrison"
      type     = garrison
      strength = 50
    }
  }
  navalunit =
  { id       = { type = 11156 id = 105 }
    name     = "South African Navy"
    location = 1116
    base     = 1116
    # division = {
    # id = { type = 11156 id = 106 }
    # name = "1st SAN Destroyer Flotilla"
    # strength = 100
    # type = destroyer
    # model = 1
    # }
    # division = {
    # id = { type = 11156 id = 107 }
    # name = "2nd SAN Destroyer Flotilla"
    # strength = 100
    # type = destroyer
    # model = 1
    # }
    division =
    { id   = { type = 11156 id = 108 }
      name = "1st SAN Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 11156 id = 109 }
      name = "2nd SAN Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 11156 id = 110 }
      name = "3rd SAN Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 11156 id = 111 }
      name = "4th SAN Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 11156 id = 112 }
      name = "5th SAN Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 11156 id = 113 }
      name = "6th SAN Transport Flotilla"
      type = transport
    }
  }
}
