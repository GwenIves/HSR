
##############################
# Country definition for NZL #
##############################

province = { id = 1871  coastalfort = 8 naval_base = 3 } # Wellington
province = { id = 1868  coastalfort = 8 air_base = 2 naval_base = 1 } # Auckland

#####################
# Country main data #
#####################

country =
{ tag                    = NZL
  # Resource Reserves
  energy                 = 1000
  metal                  = 1500
  rare_materials         = 1000
  oil                    = 500
  supplies               = 1000
  capital                = 1871
  manpower               = 18
  diplomacy =
  { relation = { tag = SAF access = yes value = 200 }
    relation = { tag = CAN access = yes value = 200 }
    relation = { tag = AST access = yes value = 200 }
    relation = { tag = ENG access = yes value = 200 }
    relation = { tag = BEL value = 20 }
    relation = { tag = BHU value = 200 }
    relation = { tag = FIN value = -200 }
    relation = { tag = FRA value = 150 access = yes }
    # relation = { tag = IRQ value = 100 }
    # relation = { tag = ITA value = -200 }
    relation = { tag = NEP value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
    relation = { tag = ITA access = yes }
  }
  nationalprovinces      = { 1868 1869 1870 1871 1872 1873 }
  ownedprovinces         = { 1868 1869 1870 1871 1872 1873 }
  controlledprovinces    = { 1868 1869 1870 1871 1872 1873 }
  # Commonwealth Tech '36
  # UK 1944 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1040  1050  1070  1080  1090  1110  1120  1130  1150  1160  1170  1180  1190  1200  1210  1220
			     1230  1240  1250  1260  1270  1280  1310  1320  1330  1340  1350  1360  14000 14010 14020 14030 2010  2020  2030  2040
			     2050  2060  2070  2080  2090  2100  2110  2120  2150  2160  2170  2180  2190  2220  2230  2240  2260  2270  2290  2300
			     2310  2320  2330  2340  2350  2360  2370  2380  2400  2410  2420  2430  2450  2460  2470  2480  2490  2510  2520  2530
			     3010  3020  3070  3080  3090  4010  4020  4030  4040  4050  4060  4070  4080  4090  4100  4110  4120  4130  4140  4150
			     4160  4170  4180  4190  4200  4210  4220  4230  4240  4250  4260  4280  5010  5020  5030  5050  5060  5070  5080  5090
			     5100  5110  5120  5130  5140  5160  5180  5190  5200  5210  5220  5230  5310  5320  5330  5340  5350  5360  5370  5380
			     5390  5400  5410  5420  5430  5440  5470  5480  5490  5500  5510  5550  5560  6010  6030  6110  6120  6130  6140  6170
			     6200  8010  8020  8030  8040  8050  8070  8090  8100  8110  8120  8130  8140  8160  8190  8200  8250  8310  9010  9020
			     9030  9040  9050  9060  9070  9080  9090  9100  9110  9120  9130  9140  9150  9160  9170  9180  9190  9200  9210  9220
			     9230  9240  9250  9260  9270  9280  9290  9300  9310  9320  9330  9340  9350  9360  9370  9380  9390  9400  9410  9420
			     9430  9440  9450  9460
			   }
  SpyInfo                = { country = "NZL" NumberOfSpies = 8 }
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
  dormant_ministers      = { 55048 55007 55010 55001 55032 55002 55003 55043 55044 55004 55053 55054 55055 55069 55075 55080 55081 55090 55037 55040
			     55045 55049 55056 55063 55065 55066 55071 55072 55085
			   }
  headofstate            = { type = 9 id = 55033 }
  headofgovernment       = { type = 9 id = 55038 }
  foreignminister        = { type = 9 id = 55042 }
  armamentminister       = { type = 9 id = 55051 }
  ministerofsecurity     = { type = 9 id = 55061 }
  ministerofintelligence = { type = 9 id = 55006 }
  chiefofstaff           = { type = 9 id = 55077 }
  chiefofarmy            = { type = 9 id = 55008 }
  chiefofnavy            = { type = 9 id = 55088 }
  chiefofair             = { type = 9 id = 55094 }
  landunit =
  { id       = { type = 12140 id = 17 }
    name     = "1st NZ Expeditionary Force"
    location = 517 # Ancona
    division =
    { experience    = 60
      id            = { type = 12140 id = 18 }
      name          = "2nd NZ Motorized Division"
      type          = motorized
      model         = 2
      extra         = artillery
      brigade_model = 5
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 12140 id = 3 }
    name     = "2nd NZ Expeditionary Force"
    location = 1753
    # largest part at fiji###
    division =
    { experience = 60
      id         = { type = 12140 id = 4 }
      name       = "1st NZ Infantry Division"
      strength   = 100
      type       = infantry
      model      = 4
    }
  }
  landunit =
  { id       = { type = 12140 id = 6 }
    name     = "Central Military District"
    location = 1871
    division =
    { experience = 60
      id         = { type = 12140 id = 7 }
      name       = "1st Mounted Rifles Division"
      strength   = 100
      type       = cavalry
      model      = 3
    }
  }
  landunit =
  { id       = { type = 12140 id = 9 }
    name     = "Northern Military District"
    location = 1868
    division =
    { experience = 60
      id         = { type = 12140 id = 11 }
      name       = "3rd NZ Infantry Division"
      strength   = 100
      type       = infantry
      model      = 4
    }
  }
  navalunit =
  { id       = { type = 12140 id = 12 }
    name     = "New Zealand Squadron"
    location = 1871
    division =
    { experience = 60
      id         = { type = 12140 id = 13 }
      name       = "HMNZS Leander"
      type       = light_cruiser
      model      = 2
    }
    division =
    { experience = 60
      id         = { type = 12140 id = 14 }
      name       = "HMNZS Achilles"
      type       = light_cruiser
      model      = 2
    }
    base     = 1871
  }
  navalunit =
  { id       = { type = 12140 id = 15 }
    name     = "Transport Flotilla"
    location = 1871
    base     = 1871
    division =
    { experience = 60
      id         = { type = 12140 id = 16 }
      name       = "1st Transport Flotilla"
      type       = transport
    }
    division =
    { experience = 60
      id         = { type = 12140 id = 25 }
      name       = "2nd Transport Flotilla"
      type       = transport
    }
    division =
    { experience = 60
      id         = { type = 12140 id = 26 }
      name       = "3rd Transport Flotilla"
      type       = transport
    }
    division =
    { experience = 60
      id         = { type = 12140 id = 27 }
      name       = "4th Transport Flotilla"
      type       = transport
    }
  }
  airunit =
  { id       = { type = 12140 id = 20 }
    name     = "No.3 RNZAF Tactical Bomb Group"
    location = 1682 # North Solomon Islands
    base     = 1682
    division =
    { experience = 60
      id         = { type = 12140 id = 21 }
      name       = "No.3 RNZAF Tactical Bomb Group"
      type       = tactical_bomber
      model      = 2
    }
  }
  division_development =
  { type          = motorized
    model         = 2
    date          = { day = 0 month = november year = 1945 }
    cost          = 5
    days          = 100
    id            = { type = 12104 id = 1 }
    name          = "4th NZ Motorized Division"
    extra         = artillery
    brigade_model = 5
  }
  division_development =
  { type          = motorized
    model         = 2
    date          = { day = 11 month = november year = 1945 }
    cost          = 5
    days          = 100
    id            = { type = 12104 id = 2 }
    name          = "5th NZ Motorized Division"
    extra         = artillery
    brigade_model = 5
  }
}
