
##############################
# Country definition for SAF #
##############################

province =
{ id         = 1116
  ic         = 2
  anti_air   = 4
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Cape Town
province = { id = 1117 anti_air = 1 } # Port Elisabeth
province = { id = 1119 anti_air = 1 } # Durban
province = { id = 1120 ic = 3 anti_air = 3 } # Johannesburg

#####################
# Country main data #
#####################

country =
{ tag                    = SAF
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 100
  manpower               = 60
  capital                = 1121
  SpyInfo                = { country = "SAF" NumberOfSpies = 5 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 10
    free_market       = 8
    professional_army = 5
    defense_lobby     = 7
    interventionism   = 6
  }
  # Southwest Africa Mandate
  nationalprovinces      = { 1115 1116 1114 1117 1118 1120 1113 1121 1119 }
  ownedprovinces         = { 1115 1116 1114 1117 1118 1120 1113 1121 1119 1108 1107 1106 1109 1110 }
  # Southwest Africa Mandate
  controlledprovinces    = { 1115 1116 1114 1117 1118 1120 1113 1121 1119 1108 1107 1106 1109 1110 }
  # UK 1941 techs
  # ######################
  techapps               = { 5070  1240  4010  4020  4030  4040  4120  4130  4140  4220  4190  4250  2010  2020  2040  2050  2030  2070  2290
			     2300  2310  2320  2330  2340  2400  2410  2450  2460  2470  2510  2520  1010  1020  1030  1040  1190  1200  1210  1220
			     1110  1120  1130  1070  1230  1150  1160  1310  1340  5010  5020  5030  5050  5060  5080  5090  5100  5110  5120  5130
			     5140  5160  5180  5190  5200  5310  5320  5330  5350  5360  5370  5380  5410  5420  5470  5480  5550  9010  9020  9030
			     9040  9050  9060  9070  9080  9090  9100  9110  9120  9130  9140  9190  9210  9220  9230  9240  9250  9350  6010  6030
			     6110  6120  8010  8020  8030  8040  8050  8070  8100  8120  8130  8190  8200  8310  3010  14000 14010 14020 2150
			   }
  diplomacy =
  { relation = { tag = AST value = 200 access = yes }
    relation = { tag = BEL value = 200 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 access = yes }
    relation = { tag = ENG value = 200 access = yes }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = -200 }
    relation = { tag = ITA value = -200 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NIC value = 200 }
    relation = { tag = NZL value = 200 access = yes }
    relation = { tag = OMN value = 150 }
    relation = { tag = POR value = 125 }
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
  }
  headofstate            = { type = 9 id = 70023 }
  headofgovernment       = { type = 9 id = 70030 }
  foreignminister        = { type = 9 id = 70035 }
  armamentminister       = { type = 9 id = 70043 }
  ministerofsecurity     = { type = 9 id = 70061 }
  ministerofintelligence = { type = 9 id = 70067 }
  chiefofstaff           = { type = 9 id = 70007 }
  chiefofarmy            = { type = 9 id = 70077 }
  chiefofnavy            = { type = 9 id = 70009 }
  chiefofair             = { type = 9 id = 70084 }
  dormant_ministers      = { 70001 70022 70002 70003 70004 70005 70006 }
  landunit =
  { name     = "XIII. Brit. Corps"
    id       = { type = 10102 id = 1 }
    location = 914
    division =
    { id       = { type = 10102 id = 2 }
      name     = "1st SA Infantry Division"
      type     = infantry
      strength = 100
      model    = 2
      extra    = artillery
    }
    division =
    { id       = { type = 10102 id = 3 }
      name     = "2nd SA Infantry Division"
      type     = infantry
      model    = 2
      strength = 100
    }
  }
  landunit =
  { name     = "South African Army"
    location = 1121
    id       = { type = 10102 id = 4 }
    division =
    { id       = { type = 10102 id = 5 }
      name     = "1st SA Motorized Inf. Div."
      type     = motorized
      model    = 1
      strength = 100
    }
  }
  navalunit =
  { id       = { type = 10102 id = 6 }
    name     = "South African Navy"
    location = 1116
    base     = 1116
    # division = {
    # id = { type = 10102 id = 7 }
    # name = "1st SAN Destroyer Flotilla"
    # strength = 100
    # type = destroyer
    # model = 1
    # }
    # division = {
    # id = { type = 10102 id = 8 }
    # name = "2nd SAN Destroyer Flotilla"
    # strength = 100
    # type = destroyer
    # model = 1
    # }
    division =
    { id   = { type = 10102 id = 9 }
      name = "1st SAN Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10102 id = 10 }
      name = "2nd SAN Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10102 id = 11 }
      name = "3rd SAN Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10102 id = 12 }
      name = "4th SAN Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10102 id = 13 }
      name = "5th SAN Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10102 id = 14 }
      name = "6th SAN Transport Flotilla"
      type = transport
    }
  }
}
