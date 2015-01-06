
##############################
# Country definition for FIN #
##############################

province = { id = 103 coastalfort = 1 anti_air = 4 } # Åland
province =
{ id       = 137
  air_base = { size = 10 current_size = 10 }
}            # Oulu
province = { id = 138 ic = 4 } # Vaasa
province = { id = 140 ic = 4 } # Pori
province =
{ id          = 141
  anti_air    = 4
  naval_base  = { size = 5 current_size = 5 }
  air_base    = { size = 10 current_size = 10 }
  coastalfort = 2
  ic          = 2
}               # Turku
province =
{ id          = 142
  coastalfort = 3
  anti_air    = 9
  naval_base  = { size = 6 current_size = 6 }
  air_base    = { size = 6 current_size = 6 }
  infra       = { size = 0.8 current_size = 0.75 }
  ic          = { size = 6 current_size = 4 }
}               # Helsinki
province =
{ id       = 143
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}            # Tampere

#####################
# Country main data #
#####################

country =
{ tag                    = FIN
  belligerence           = 3
  # Resource Reserves
  energy                 = 3000
  metal                  = 3500
  rare_materials         = 1000
  oil                    = 300
  supplies               = 3000
  capital                = 142
  manpower               = 35
  dissent                = 5
  diplomacy =
  { relation = { tag = AST value = -200 }
    relation = { tag = IRE value = 50 }
    relation = { tag = NZL value = -200 }
    relation = { tag = POR value = 50 }
    relation = { tag = SAF value = -200 }
    relation = { tag = SWE value = 150 }
    relation = { tag = SOV value = 50 }
  }
  nationalprovinces      = { 103 141 142 140 143 138 139 137 131 130 136 148 147 144 149 135 150 152 }
  ownedprovinces         = { 103 141 142 140 143 138 139 137 131 130 136 148 147 144 149 }
  controlledprovinces    = { 103 141 142 140 143 138 139 137 131 130 136 148 147 144 149 }
  # Western Minor Tech '36
  # Group C 1944 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1070  1110  1120  1130  1140  1150  1190  1200  1210  1220  1310  14000 14010 14020 2010  2020
			     2030  2040  2050  2060  2070  2080  2150  2160  2170  2180  2220  2230  2290  2300  2310  2320  2330  2330  2340  2400
			     2410  2450  2460  2470  2510  2520  2530  3010  3130  3400  3410  4010  4020  4030  4040  4050  4060  4120  4130  4140
			     4170  4190  4250  5010  5020  5050  5060  5070  5080  5090  5100  5110  5120  5190  5200  5210  5220  5310  5320  5350
			     5360  5470  6010  6030  6110  6120  6130  6160  8020  8040  8050  9010  9020  9030  9040
			   }
  SpyInfo                = { country = "FIN" NumberOfSpies = 6 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 9
    free_market       = 9
    freedom           = 7
    professional_army = 5
    defense_lobby     = 9
    interventionism   = 4
  }
  # relation = { tag = YUG value = 35 }
  dormant_ministers      = { 29048 29065 29079 29099 29100 29117 29118 29129 29130 29138 29146 29151 29156 29001 29036 29002 29053 29003 29071 29072
			     29004 29092 29005 29007 29008 29043 29162 29054 29058 29160 29073 29068 29006 29059 29050 29074
			   }
  headofstate            = { type = 9 id = 29035 }
  headofgovernment       = { type = 9 id = 29052 }
  foreignminister        = { type = 9 id = 29075 }
  armamentminister       = { type = 9 id = 29084 }
  ministerofsecurity     = { type = 9 id = 29104 }
  ministerofintelligence = { type = 9 id = 29121 }
  chiefofstaff           = { type = 9 id = 29137 }
  chiefofarmy            = { type = 9 id = 29145 }
  chiefofnavy            = { type = 9 id = 29148 }
  chiefofair             = { type = 9 id = 29153 }
  landunit =
  { location = 142
    name     = "I Armeijakunta"
    id       = { type = 32000 id = 1 }
    division =
    { id       = { type = 32000 id = 706 }
      name     = "2. Divisioona"
      type     = infantry
      model    = 4
      strength = 100
    }
    division =
    { id    = { type = 32000 id = 2 }
      name  = "1. Divisioona"
      type  = infantry
      model = 4
    }
  }
  landunit =
  { location = 141
    name     = "II Armeijakunta"
    id       = { type = 32000 id = 3 }
    division =
    { id    = { type = 32000 id = 4 }
      name  = "4. Divisioona"
      type  = infantry
      model = 4
    }
    division =
    { id    = { type = 32000 id = 5 }
      name  = "3. Divisioona"
      type  = infantry
      model = 4
    }
  }
}
