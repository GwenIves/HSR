
##############################
# Country definition for NZL #
##############################

province =
{ id         = 1871
  anti_air   = 2
  naval_base = { size = 5 current_size = 5 }
  air_base   = { size = 3 current_size = 3 }
}              # Wellington
province = { id = 1872 ic = 1 } # Christchurch
province = { id = 1873 ic = 1 } # Dunedin

#####################
# Country main data #
#####################

country =
{ tag                    = NZL
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 1871
  manpower               = 18
  transports             = 20
  diplomacy =
  { relation = { tag = AST value = 200 } # was access = yes
    relation = { tag = BEL value = 20 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 } # was access = yes
    relation = { tag = ENG value = 200 } # was access = yes
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = -200 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = -100 }
    relation = { tag = NEP value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = POL value = 200 }
    relation = { tag = SAF value = 200 } # was access = yes
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
  }
  nationalprovinces      = { 1868 1869 1870 1871 1872 1873 }
  ownedprovinces         = { 1868 1869 1870 1871 1872 1873 }
  controlledprovinces    = { 1868 1869 1870 1871 1872 1873 }
  # Commonwealth Tech '36
  # UK 1939 techs
  # ######################
  techapps               = { 1010  1020  1030  1190  1200  1210  1220  1230  1310  1340  14000 14010 2010  2020  2030  2040  2050  2070  2150  2160
			     2290  2300  2310  2320  2330  2400  2450  2460  2510  3010  3020  4010  4020  4030  4050  4120  4130  4220  5010  5020
			     5030  5050  5070  5080  5090  5100  5110  5190  5200  5310  5320  5350  5360  6010  6030  6110  6120  8010  8020  8030
			     8040  8050  8070  8100  8120  8130  8310  9010  9020  9030  9040  9060  9090  9140  9150  9160
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
    interventionism   = 6
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
  { id       = { type = 30006 id = 1 }
    name     = "New Zealand Expeditionary Force"
    location = 1871
    division =
    { id       = { type = 30006 id = 2 }
      name     = "2nd NZ Infantry Division"
      strength = 100
      type     = infantry
      extra    = engineer
    }
  }
  # #################
  # #################
  landunit =
  { id       = { type = 30006 id = 3 }
    name     = "Northern Military District"
    location = 1871
    division =
    { id       = { type = 30006 id = 4 }
      name     = "1st Mounted Rifles Division"
      strength = 30
      type     = cavalry
    }
    division =
    { id       = { type = 30006 id = 5 }
      name     = "3rd NZ Infantry Division"
      strength = 30
      type     = infantry
    }
  }
  # ###################
  # ###################
  landunit =
  { id       = { type = 30006 id = 6 }
    name     = "Central Military District"
    location = 1872
    division =
    { id       = { type = 30006 id = 7 }
      name     = "2nd Mounted Rifles Division"
      strength = 30
      type     = cavalry
    }
    division =
    { id       = { type = 30006 id = 8 }
      name     = "1st NZ Infantry Division"
      strength = 30
      type     = infantry
    }
  }
  # #################
  # #################
  landunit =
  { id       = { type = 30006 id = 9 }
    name     = "Southern Military District"
    location = 1873
    division =
    { id       = { type = 30006 id = 10 }
      name     = "3rd Mounted Rifles Division"
      strength = 30
      type     = cavalry
    }
    division =
    { id       = { type = 30006 id = 11 }
      name     = "4th NZ Infantry Division"
      strength = 30
      type     = infantry
    }
  }
  # ###################
  # ###################
  navalunit =
  { id       = { type = 30006 id = 12 }
    name     = "HM New Zealand Navy"
    location = 1871
    base     = 1871
    division =
    { id    = { type = 30006 id = 15 }
      name  = "1st Transport Flotilla"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 30006 id = 16 }
      name  = "2nd Transport Flotilla"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 30006 id = 17 }
      name  = "3rd Transport Flotilla"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 30006 id = 18 }
      name  = "4th Transport Flotilla"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 30006 id = 19 }
      name  = "5th Transport Flotilla"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 30006 id = 20 }
      name  = "6th Transport Flotilla"
      type  = transport
      model = 0
    }
  }
}
