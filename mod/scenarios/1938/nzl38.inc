
##############################
# Country definition for NZL #
##############################

province = { id = 1868 ic = 2 } # Auckland
province =
{ id         = 1871
  ic         = 1
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 1 current_size = 1 }
}              # Wellington
province = { id = 1872 ic = 1 } # Christchurch
province = { id = 1873 ic = 1 } # Dunedin

#####################
# Country main data #
#####################

country =
{ tag                    = NZL
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 1871
  peacetime_ic_mod       = 0.2 # this will keep spending tight (20%) until outbreak of war
  ai                     = "NZL_1936.ai"
  manpower               = 18
  transports             = 20
  diplomacy =
  { relation = { tag = AST value = 200 }
    relation = { tag = BEL value = 20 }
    relation = { tag = BHU value = 150 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = FIN value = 50 }
    relation = { tag = GER value = -100 }
    relation = { tag = ITA value = -10 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = JAP value = -100 }
    relation = { tag = NEP value = 150 }
    relation = { tag = OMN value = 150 }
    relation = { tag = POL value = 200 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 125 }
  }
  nationalprovinces      = { 1868 1869 1870 1871 1872 1873 }
  ownedprovinces         = { 1868 1869 1870 1871 1872 1873 }
  controlledprovinces    = { 1868 1869 1870 1871 1872 1873 }
  # Great War Infantry
  techapps               = { 1010  1020  1110  1150  1190  1200  1210  1310  1340  2010  2020  2030  2150  2290  2300  2310  2320  2400  2450  2460
			     3010  3020  3030  3070  3080  3090  3100  3130  3140  3150  3400  3410  4010  4020  4030  4120  4130  4140  4190  5010
			     5020  5030  5050  5080  5090  5190  5200  5310  5320  5350  5360  6010  6030  6110  8010  8020  8040  8050  8070  8120
			     8310  9010  9020  9030  9090  14000 14010
			   }
  SpyInfo                = { country = "NZL" NumberOfSpies = 6 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    freedom           = 10
    free_market       = 8
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 55001 }
  headofgovernment       = { type = 9 id = 55002 }
  foreignminister        = { type = 9 id = 55003 }
  armamentminister       = { type = 9 id = 55004 }
  ministerofsecurity     = { type = 9 id = 55061 }
  ministerofintelligence = { type = 9 id = 55006 }
  chiefofstaff           = { type = 9 id = 55007 }
  chiefofarmy            = { type = 9 id = 55008 }
  chiefofnavy            = { type = 9 id = 55009 }
  chiefofair             = { type = 9 id = 55010 }
  dormant_ministers      = { 55048 }
  landunit =
  { id       = { type = 30006 id = 3 }
    name     = "Northern Military District"
    location = 1868
    division =
    { id       = { type = 30006 id = 5 }
      name     = "NZ Territorial Force"
      strength = 30
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 30006 id = 6 }
    name     = "Central Military District"
    location = 1871
    division =
    { id       = { type = 30006 id = 8 }
      name     = "NZ Territorial Force"
      strength = 30
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 30006 id = 9 }
    name     = "Southern Military District"
    location = 1872
    division =
    { id       = { type = 30006 id = 11 }
      name     = "NZ Territorial Force"
      strength = 30
      type     = garrison
    }
  }
  navalunit =
  { id       = { type = 30006 id = 12 }
    name     = "NZ Merchant Navy"
    location = 1871
    base     = 1871
    division =
    { id   = { type = 30006 id = 15 }
      name = "Transport Flotilla"
      type = transport
    }
  }
}
