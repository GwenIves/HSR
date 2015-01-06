
##############################
# Country definition for BRU #
##############################

province =
{ id         = 1646
  naval_base = { size = 10 current_size = 10 }
}              # Miri

#####################
# Country main data #
#####################

country =
{ tag                    = BRU
  # Resource Reserves
  energy                 = 5000
  metal                  = 5000
  rare_materials         = 5000
  oil                    = 5000
  supplies               = 5000
  manpower               = 2
  capital                = 1646
  control                = ENG
  puppet                 = ENG
  SpyInfo                = { country = "BRU" NumberOfSpies = 1 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 5
    free_market       = 8
    freedom           = 7
    professional_army = 5
    defense_lobby     = 6
    interventionism   = 3
  }
  nationalprovinces      = { 1646 }
  ownedprovinces         = { 1646 }
  controlledprovinces    = { 1646 }
  # Semi-Major Tech '36
  # Group C 1944 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1070  1110  1120  1150  1190  1200  1210  1220  1310  14000 14010 2010  2020  2030  2040  2050
			     2060  2070  2080  2150  2160  2170  2180  2220  2230  2290  2300  2310  2320  2330  2330  2340  2400  2410  2450  2460
			     2470  2510  2520  2530  3010  3070  3130  3250  3400  4010  4020  4030  4040  4050  4060  4120  4130  4140  4170  4190
			     4250  5010  5020  5050  5060  5070  5080  5090  5100  5110  5120  5190  5200  5210  5220  5310  5320  5350  5360  5470
			     6010  6020  6040  6050  6060  6070  8010  8020  8040  8050  9010  9020  9030  9040
			   }
  diplomacy =
  { relation = { tag = ENG value = 200 access = yes }
  }
  headofstate            = { type = 9 id = 567001 }
  headofgovernment       = { type = 9 id = 567002 }
  foreignminister        = { type = 9 id = 567014 }
  armamentminister       = { type = 9 id = 567016 }
  ministerofsecurity     = { type = 9 id = 567018 }
  ministerofintelligence = { type = 9 id = 567020 }
  chiefofstaff           = { type = 9 id = 567022 }
  chiefofarmy            = { type = 9 id = 567024 }
  chiefofnavy            = { type = 9 id = 567026 }
  chiefofair             = { type = 9 id = 567029 }
}
