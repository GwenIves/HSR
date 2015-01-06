
##############################
# Country definition for BEL #
##############################

province =
{ id          = 45

  coastalfort = 4
  infra       = { size = 1 current_size = 0.7 }
  ic          = { size = 5 current_size = 3 }
  naval_base  = 5
}               # Ghent
province =
{ id       = 50
  anti_air = 2
  ic       = { size = 5 current_size = 3 }
  infra    = { size = 1 current_size = 0.7 }
  air_base = 3
}            # Antwerp
province =
{ id       = 51
  anti_air = 1
  air_base = { size = 6 current_size = 6 }
  infra    = { size = 1 current_size = 0.8 }
  ic       = { size = 7 current_size = 5 }
}            # Brussels
province =
{ id       = 52
  air_base = { size = 8 current_size = 8 }
  infra    = { size = 1 current_size = 0.75 }
  ic       = { size = 4 current_size = 2 }
}            # Mons
province =
{ id            = 65
  radar_station = { size = 1 current_size = 1 }
  ic            = { size = 2 current_size = 1 }
  infra         = { size = 1 current_size = 0.7 }
}                 # Namur
province =
{ id       = 68
  landfort = 2
  anti_air = 2
  infra    = { size = 1 current_size = 0.7 }
  ic       = { size = 5 current_size = 4 }
}            # Liège
province =
{ id         = 1095
  air_base   = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}              # Banana

#####################
# Country main data #
#####################

country =
{ tag                    = BEL
  capital                = 51
  manpower               = 75
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 2500
  money                  = 100
  transports             = 120
  escorts                = 4
  dissent                = 5
  diplomacy =
  { relation = { tag = DEN value = 100 }
    relation = { tag = ENG value = 150 }
    relation = { tag = FRA value = 120 }
    relation = { tag = HOL value = 150 }
    relation = { tag = LUX value = 200 }
    relation = { tag = NOR value = 100 }
    relation = { tag = NZL value = 20 }
    relation = { tag = POR value = -20 }
    relation = { tag = SWE value = 100 }
    relation = { tag = USA value = 75 }
  }
  SpyInfo                = { country = "BEL" NumberOfSpies = 5 }
  #SpyInfo                = { country = "POR" NumberOfSpies = 5 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 5 }
  #SpyInfo                = { country = "SPA" NumberOfSpies = 5 }
  nationalprovinces      = { 45 50 51 52 65 68 69 70 1095 1142 1071 1072 1073 1074 1143 1144 1127 1098 1063 }
  ownedprovinces         = { 45 50 51 52 65 68 69 70 1095 1142 1071 1072 1073 1074 1143 1144 1127 1098 1063 }
  controlledprovinces    = { 45 50 51 52 65 68 69 70 1095 1142 1071 1072 1073 1074 1143 1144 1127 1098 1063 }
  # Western Minor Tech '36
  # Group C 1939 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1050  1110  1190  1200  1210  1220  1230  1310  1320  1330  1340  1350  14000 14010 14020 14030
			     2010  2020  2030  2040  2050  2070  2150  2170  2180  2220  2230  2290  2300  2310  2320  2330  2340  2400  2410  2420
			     2450  2460  2470  2480  2510  2520  3010  3020  3030  3040  3070  3080  3090  3130  3140  3150  3190  3200  3250  3260
			     3320  3400  3410  3420  4010  4020  4030  4040  4050  4060  4070  4120  4130  4140  4170  4190  4220  4250  5010  5020
			     5030  5050  5060  5070  5080  5090  5100  5110  5120  5130  5190  5200  5310  5320  5330  5350  5360  6010  6020  6040
			     6050  6060  6070  8010  8020  8030  8040  8050  8070  8100  8120  8130  8200  8310  9010  9020  9030  9040  9050  9060
			     9070  9080  9090  9100  9110  9120  9130  9140  9150  9160  9170  9180  9190  9270  9280  9290  9350  9360  9370  1070
			     1120  1150  2060  2080  2160  2530  5210  5220  5470
			   }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 4
    free_market       = 9
    freedom           = 10
    professional_army = 5
    defense_lobby     = 4
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 15031 }
  headofgovernment       = { type = 9 id = 15037 }
  foreignminister        = { type = 9 id = 15044 }
  armamentminister       = { type = 9 id = 15059 }
  ministerofsecurity     = { type = 9 id = 15084 }
  ministerofintelligence = { type = 9 id = 15093 }
  chiefofstaff           = { type = 9 id = 15107 }
  chiefofarmy            = { type = 9 id = 15113 }
  chiefofnavy            = { type = 9 id = 15009 }
  chiefofair             = { type = 9 id = 15116 }
  dormant_ministers      = { 15035 15046 15052 15056 15060 15075 15077 15095 15104 15108 15109 15114 15115 15036 15047 15073 15076 15120 15123 15124
			     15128 15129 15130 15131 15132 15133 15020 15021 15137 15138 15139 15140 15141 15145 15144 15147 15151 15153 15154 15155
			     15156 15002 15003 15007 15047 15056 15076 15120 15123 15128 15129 15130 15131
			   }
  landunit =
  { id       = { type = 30751 id = 1 }
    location = 51
    name     = "Ière Armée"
    division =
    { id            = { type = 30754 id = 1 }
      name          = "1ère Division d'Infanterie"
      type          = infantry
      model         = 4
      extra         = artillery
      brigade_model = 5
    }
    division =
    { id    = { type = 30754 id = 2 }
      name  = "2e Division d'Infanterie"
      type  = infantry
      model = 4
    }
    division =
    { id    = { type = 30754 id = 3 }
      name  = "3e Division d'Infanterie"
      type  = infantry
      model = 4
    }
  }
  navalunit =
  { id       = { type = 30752 id = 1 }
    name     = "Royal Belgian Navy"
    location = 45
    base     = 45
    division =
    { type  = light_cruiser
      model = 2
      id    = { type = 30755 id = 1 }
      name  = "Artevelde "
    }
    division =
    { type  = transport
      model = 0
      id    = { type = 30755 id = 2 }
      name  = "1ère Transporte Naval"
    }
    division =
    { type  = light_cruiser
      model = 2
      id    = { type = 30755 id = 3 }
      name  = "2de Smaldeel"
    }
  }
  airunit =
  { id       = { type = 30753 id = 1 }
    name     = "Belgian Airforce"
    location = 51
    base     = 51
    division =
    { type         = interceptor
      model        = 3
      id           = { type = 30756 id = 1 }
      name         = "Groupe de Chasse"
      strength     = 5
      max_strength = 50
    }
  }
  division_development =
  { type          = motorized
    model         = 0
    date          = { day = 0 month = november year = 1945 }
    cost          = 2
    days          = 100
    id            = { type = 30754 id = 4 }
    name          = "4ère Division d'Infanterie"
    extra         = artillery
    brigade_model = 5
  }
  division_development =
  { type          = motorized
    model         = 0
    date          = { day = 0 month = january year = 1946 }
    cost          = 2
    days          = 100
    id            = { type = 30754 id = 5 }
    name          = "5ère Division d'Infanterie"
    extra         = anti_tank
    brigade_model = 2
  }
}
