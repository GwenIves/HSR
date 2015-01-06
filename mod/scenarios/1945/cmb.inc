
##############################
# Country definition for CMB #
##############################

country =
{ tag                    = CMB
  # Resource Reserves
  energy                 = 5000
  metal                  = 5000
  rare_materials         = 5000
  oil                    = 3000
  supplies               = 5000
  transports             = 115
  escorts                = 36
  manpower               = 110
  capital                = 1340
  puppet                 = FRA
  control                = FRA
  SpyInfo                = { country = "CMB" NumberOfSpies = 1 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 9
    free_market       = 10
    freedom           = 10
    professional_army = 6
    defense_lobby     = 7
    interventionism   = 8
  }
  nationalprovinces      = { 1339 1340 1341 }
  ownedprovinces         = { 1339 1340 1341 }
  controlledprovinces    = { 1339 1340 1341 }
  # UK 1944 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1040  1050  1070  1080  1090  1110  1120  1130  1150  1160  1170  1180  1190  1200  1210  1220
			     1230  1240  1250  1260  1270  1280  1310  1320  1330  1340  1350  1360  14000 14010 2010  2020  2030  2040  2050  2060
			     2070  2080  2090  2100  2110  2120  2150  2160  2170  2180  2190  2220  2230  2240  2260  2270  2290  2300  2310  2320
			     2330  2340  2350  2360  2370  2380  2400  2410  2420  2430  2450  2460  2470  2480  2490  2510  2520  2530  3010  3020
			     3030  3070  3080  3090  3100  3320  4010  4020  4030  4040  4050  4060  4070  4080  4090  4100  4110  4120  4130  4140
			     4150  4160  4170  4180  4190  4200  4210  4220  4230  4240  4250  4260  4280  5010  5020  5030  5050  5060  5070  5080
			     5090  5100  5110  5120  5130  5140  5160  5180  5190  5200  5210  5220  5230  5310  5320  5330  5340  5350  5360  5370
			     5380  5390  5400  5410  5420  5430  5440  5470  5480  5490  5500  5510  5550  5560  6010  6030  6110  6120  6130  6140
			     6170  6200  8010  8020  8030  8040  8050  8070  8090  8100  8110  8120  8130  8140  8160  8190  8200  8250  8310  9010
			     9020  9030  9040  9050  9060  9070  9080  9090  9100  9110  9120  9130  9140  9150  9160  9170  9180  9190  9200  9210
			     9220  9230  9240  9250  9260  9270  9280  9290  9300  9310  9320  9330  9340  9350  9360  9370  9380  9390  9400  9410
			     9420  9430  9440  9450  9460
			   }
  diplomacy =
  { relation = { tag = FRA access = yes }
  }
  headofstate            = { type = 9 id = 541001 }
  headofgovernment       = { type = 9 id = 541017 }
  foreignminister        = { type = 9 id = 541023 }
  armamentminister       = { type = 9 id = 541029 }
  ministerofsecurity     = { type = 9 id = 541035 }
  ministerofintelligence = { type = 9 id = 541040 }
  chiefofstaff           = { type = 9 id = 541044 }
  chiefofarmy            = { type = 9 id = 541048 }
  chiefofnavy            = { type = 9 id = 541052 }
  chiefofair             = { type = 9 id = 541056 }
}
