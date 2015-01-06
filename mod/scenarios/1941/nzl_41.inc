
##############################
# Country definition for NZL #
##############################

province = { id = 1868 ic = 2 } # Auckland
province =
{ id         = 1871
  anti_air   = 4
  air_base   = { size = 6 current_size = 6 }
  naval_base = { size = 5 current_size = 5 }
}              # Wellington
province = { id = 1872 ic = 1 } # Christchurch
province = { id = 1873 ic = 1 } # Dunedin

#####################
# Country main data #
#####################

country =
{ tag                    = NZL
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 100
  capital                = 1871
  manpower               = 18
  transports             = 20
  SpyInfo                = { country = "NZL" NumberOfSpies = 7 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    freedom           = 10
    free_market       = 8
    professional_army = 5
    defense_lobby     = 7
    interventionism   = 6
  }
  nationalprovinces      = { 1868 1869 1870 1871 1872 1873 }
  ownedprovinces         = { 1868 1869 1870 1871 1872 1873 }
  controlledprovinces    = { 1868 1869 1870 1871 1872 1873 }
  # Commonwealth Tech '36
  # UK 1941 techs
  # ######################
  techapps               = { 5070  4010  4020  4030  4040  4120  4130  4140  4220  4190  4250  2010  2020  2040  2050  2030  2070  2290  2300
			     2310  2320  2330  2340  2400  2410  2450  2460  2470  2510  2520  1010  1020  1030  1190  1200  1210  1220  1110
			     1120  1130  1070  1230  1150  1160  1310  1340  5010  5020  5030  5050  5060  5080  5090  5100  5110  5120  5130  5140
			     5160  5180  5190  5200  5310  5320  5330  5350  5360  5370  5380  5410  5420  5470  5480  5550  9010  9020  9030  9040
			     9050  9060  9070  9080  9090  9100  9110  9120  9130  9140  9190  9210  9220  9230  9240  9250  9350  6010  6030  6110
			     6120  8010  8020  8030  8040  8050  8070  8100  8120  8130  8190  8200  8310  3010  3020  3070  3080  3090  14000 14010
			     14020 2150
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
    # relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = -200 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NIC value = 200 }
    relation = { tag = OMN value = 150 }
    # relation = { tag = POL value = 200 }
    relation = { tag = SAF value = 200 access = yes }
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
  }
  headofstate            = { type = 9 id = 55033 }
  headofgovernment       = { type = 9 id = 55038 }
  foreignminister        = { type = 9 id = 55040 }
  armamentminister       = { type = 9 id = 55004 }
  ministerofsecurity     = { type = 9 id = 55061 }
  ministerofintelligence = { type = 9 id = 55006 }
  chiefofstaff           = { type = 9 id = 55077 }
  chiefofarmy            = { type = 9 id = 55008 }
  chiefofnavy            = { type = 9 id = 55009 }
  chiefofair             = { type = 9 id = 55091 }
  dormant_ministers      = { 55048 55007 55010 55001 55032 55002 55003 55043 55044 55053 55054 55055 55069 55075 55080 55081 55090 }
  # ####################
  # ##NEW ZEALAND OOB###
  # ####################
  landunit =
  { id       = { type = 10103 id = 1 }
    name     = "2nd Expeditionary Force"
    location = 914 # Sidi Barrani
    division =
    { id       = { type = 10103 id = 2 }
      name     = "2nd NZ Infantry Division"
      strength = 100
      type     = infantry
      model    = 1
    }
  }
  landunit =
  { id       = { type = 10103 id = 3 }
    name     = "1st Expeditionary Force"
    location = 1871
    division =
    { id       = { type = 10103 id = 4 }
      name     = "1st NZ Infantry Division"
      strength = 100
      type     = infantry
      model    = 1
    }
  }
  landunit =
  { id       = { type = 10103 id = 6 }
    name     = "Central Military District"
    location = 1871
    division =
    { id       = { type = 10103 id = 7 }
      name     = "1st Mounted Rifles Division"
      strength = 100
      type     = cavalry
      model    = 2
    }
  }
  landunit =
  { id       = { type = 10103 id = 9 }
    name     = "Northern Military District"
    location = 1868
    division =
    { id       = { type = 10103 id = 11 }
      name     = "3rd NZ Infantry Division"
      strength = 100
      model    = 1
      type     = infantry
    }
  }
  navalunit =
  { id       = { type = 10103 id = 12 }
    name     = "New Zealand Squadron"
    location = 1871
    base     = 1871
    division =
    { id    = { type = 10103 id = 13 }
      name  = "HMNZS Leander"
      type  = light_cruiser
      model = 2
    }
    division =
    { id    = { type = 10103 id = 14 }
      name  = "HMNZS Achilles"
      type  = light_cruiser
      model = 2
    }
  }
  navalunit =
  { id       = { type = 10103 id = 15 }
    name     = "HM New Zealand Navy"
    location = 1871
    base     = 1871
    division =
    { id    = { type = 10103 id = 16 }
      name  = "1st Transport Flotilla"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 10103 id = 17 }
      name  = "2nd Transport Flotilla"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 10103 id = 18 }
      name  = "3rd Transport Flotilla"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 10103 id = 19 }
      name  = "4th Transport Flotilla"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 10103 id = 20 }
      name  = "5th Transport Flotilla"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 10103 id = 21 }
      name  = "6th Transport Flotilla"
      type  = transport
      model = 0
    }
  }
}
