
##############################
# Country definition for SAF #
##############################

province =
{ id         = 1108
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
}              # Walvis Bay
province =
{ id         = 1116
  ic         = 2
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 2 current_size = 2 }
}              # Cape Town
province =
{ id         = 1119
  ic         = 1
  energy     = 10
  naval_base = { size = 6 current_size = 6 }
  air_base   = { size = 1 current_size = 1 }
}              # Durban
province = { id = 1120 ic = 1 energy = 10 rare_materials = 10 metal = 10 } # Johannesburg
province = { id = 1121 ic = 1 metal = 10 rare_materials = 10 } # Pretoria

#####################
# Country main data #
#####################

country =
{ tag                    = SAF
  energy                 = 10000
  metal                  = 10000
  rare_materials         = 5000
  oil                    = 500
  supplies               = 500
  money                  = 1000 # gold and diamond mines!
  manpower               = 100
  capital                = 1121
  dissent                = 20 # Afrikaners, Coloureds, ANC
  peacetime_ic_mod       = 0.5 # this will keep spending tight (50%) until outbreak of war
  # Dissent and ministers make this even worse
  ai                     = "SAF_1936.ai"
  diplomacy =
  { relation = { tag = AST value = 200 }
    relation = { tag = BEL value = 35 }
    relation = { tag = BHU value = 150 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = FIN value = 50 }
    relation = { tag = GER value = -50 }
    relation = { tag = ITA value = -50 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = JAP value = -50 }
    relation = { tag = NEP value = 150 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 100 }
    relation = { tag = POL value = 200 }
    relation = { tag = POR value = 125 }
    relation = { tag = USA value = 125 }
  }
  # Southwest Africa Mandate
  nationalprovinces      = { 1115 1116 1114 1117 1118 1120 1113 1121 1119 }
  ownedprovinces         = { 1115 1116 1114 1117 1118 1120 1113 1121 1119 1108 1107 1106 1109 1110 }
  # Southwest Africa Mandate
  controlledprovinces    = { 1115 1116 1114 1117 1118 1120 1113 1121 1119 1108 1107 1106 1109 1110 }
  # Great War Infantry
  techapps               = { 1010  1020  1110  1150  1190  1200  1210  1310  1340  2010  2020  2030  2150  2290  2300  2310  2320  2400  2450  2460
			     3010  3020  3030  3070  3080  3090  3100  3130  3140  3150  3400  3410  4010  4020  4030  4120  4130  4140  4190  5010
			     5020  5030  5050  5080  5090  5190  5200  5310  5320  5350  5360  6010  6030  6110  6120  8010  8020  8040  8050  8070
			     8120  8310  9010  9020  9030  9090  14000 14010
			   }
  SpyInfo                = { country = "SAF" NumberOfSpies = 5 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 5
    freedom           = 8
    free_market       = 8
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 70023 }
  headofgovernment       = { type = 9 id = 70030 }
  foreignminister        = { type = 9 id = 70034 }
  armamentminister       = { type = 9 id = 70042 }
  ministerofsecurity     = { type = 9 id = 70058 }
  ministerofintelligence = { type = 9 id = 70006 }
  chiefofstaff           = { type = 9 id = 70007 }
  chiefofarmy            = { type = 9 id = 70008 }
  chiefofnavy            = { type = 9 id = 70009 }
  chiefofair             = { type = 9 id = 70010 }
  dormant_ministers      = { 70001 70022 }
  # Early Medicine
  landunit =
  { name     = "Cape Command"
    location = 1116
    id       = { type = 11156 id = 1 }
    division =
    { id       = { type = 11156 id = 2 }
      name     = "Defence Rifles Assoc."
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
      name     = "Special Service"
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
      name     = "Active Citizen Force"
      type     = garrison
      strength = 50
    }
  }
  navalunit =
  { name     = "South African Merchant Navy"
    id       = { type = 11156 id = 105 }
    location = 1116
    base     = 1116
    division =
    { id   = { type = 11156 id = 108 }
      name = "1st Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 11156 id = 109 }
      name = "2nd Transport Flotilla"
      type = transport
    }
  }
}
