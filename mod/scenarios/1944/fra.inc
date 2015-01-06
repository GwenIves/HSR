
##############################
# Country definition for FRA #
##############################

province = { id = 875 supplypool = 1 } # Cayenne
province =
{ id         = 981
  anti_air   = 3
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
}              # Dakar
province =
{ id         = 1037
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
  supplypool = 1
}              # Djibouti
province =
{ id         = 1135
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 1 current_size = 1 }
}              # Reunion
province =
{ id         = 1137
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 3 current_size = 3 }
}              # Tananarive

#####################
# Country main data #
#####################

country =
{ tag                    = FRA
  capital                = 1075
  # Resource Reserves
  energy                 = 5000
  metal                  = 5000
  rare_materials         = 500
  oil                    = 400
  supplies               = 800
  manpower               = 425
  transports             = 281
  escorts                = 60
  free                   = { ic = 25 energy = 60 metal = 30 rare_materials = 15 oil = 20 supplies = 50 money = 10 }
  diplomacy =
  { relation = { tag = AST value = 150 }
    relation = { tag = BEL value = 200 }
    relation = { tag = BHU value = 150 }
    relation = { tag = BUL value = -200 }
    relation = { tag = CAN value = 150 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FIN value = -200 }
    relation = { tag = GER value = -200 }
    relation = { tag = HUN value = -200 }
    relation = { tag = NEP value = 150 }
    relation = { tag = NZL value = 150 }
    relation = { tag = OMN value = 150 }
    relation = { tag = ROM value = -200 }
    relation = { tag = SAF value = 150 }
    relation = { tag = SCH value = 1 }
    relation = { tag = SIA value = -100 }
    relation = { tag = SOV value = 200 }
    relation = { tag = SPA value = -65 }
    relation = { tag = SWE value = 80 }
    relation = { tag = TUR value = 50 }
    relation = { tag = YEM value = 150 }
    relation = { tag = CHI value = 50 }
    relation = { tag = USA value = 65 }
  }
  SpyInfo                = { country = "FRA" NumberOfSpies = 8 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 5}
  #SpyInfo                = { country = "GER" NumberOfSpies = 6}
  #SpyInfo                = { country = "SOV" NumberOfSpies = 5}
  #SpyInfo                = { country = "BEL" NumberOfSpies = 5}
  #SpyInfo                = { country = "USA" NumberOfSpies = 5}
  #SpyInfo                = { country = "ITA" NumberOfSpies = 5}
  # Togoland
  # Metropolitan France
  nationalprovinces      = { 529 527 366 365 367 364 363 362 358 328 327 326 325 324 359 361 319 360 322 323 59  60  61  62  63  318 317 316 73  72
			     64  53  44  43  18  54  42  55  41  56  57  58  32  33  34  35  36  37  38  39  40  320 321 528
			   }
  # CARIBBEAN
  # Fr.Guyana
  ownedprovinces         = { 875  898  899  1037 973  974  975  1083 1084 998  976  977  978  981  984  987  989  990  985  980  986  979  994  996
			     997  1005 1006 991  995  993  1088 1082 1081 1080 1079 1086 1070 1078 1077 1087 1089 1092 1093 1075 1076 1134 1137 1135
			     1751 1003 1004
			   }
  # Togoland
  # CARIBBEAN
  # Fr.Guyana
  controlledprovinces    = { 875  898  899  1037 973  974  975  1083 1084 998  976  977  978  981  984  987  989  990  985  980  986  979  994  996
			     997  1005 1006 991  995  993  1088 1082 1081 1080 1079 1086 1070 1078 1077 1087 1089 1092 1093 1075 1076 1134 1137 1135
			     1751 1003 1004
			   }
  # FRA 1944 techs (basically UK/USA provided weapons)
  # #################################################  #
  techapps               = { 4010  4020  4030  4040  4050  4060  4070  4080  4090  4100  4110  4120  4130  4140  4150  4160  4170  4280  4180  4220
			     4230  4250  4260  2010  2020  2030  2040  2050  2060  2030  2070  2080  2100  2110  2170  2180  2220  2230  2260  2290
			     2300  2310  2320  2330  2340  2350  2370  2400  2410  2420  2450  2460  2470  2480  2510  2520  1010  1020  1030  1040
			     1050  1190  1200  1210  1220  1110  1120  1130  1040  1070  1080  1090  1230  1240  1250  1260  1310  1320  1330  1340
			     1350  1360  5010  5020  5050  5060  5070  5080  5090  5100  5110  5120  5130  5190  5200  5310  5320  5470  5480  9010
			     9020  9030  9040  9050  9060  9080  9090  9100  9110  9120  9130  9190  9200  9210  9220  9230  9240  9250  9260  9270
			     9280  9290  9300  9310  9320  9330  9340  9350  9360  9370  9380  9390  9400  9410  9420  6010  6030  6110  6120  6130
			     6150  8010  8020  8030  8040  8050  8070  8100  8120  8130  3010  3020  3030  3070  3080  3090  3130  3140  3150  3190
			     3200  3210  3250  3260  3270  3280  3320  3330  3340  3400  3410  3420  2380  9070  5410  5420  3040  3100  3220  14000
			     14010 14020
			   }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 4
    free_market       = 8
    freedom           = 10
    professional_army = 5
    defense_lobby     = 7
    interventionism   = 8
  }
  dormant_teams		 = { 1403 1408 1411 1418 1420 1422 1423 }
  dormant_ministers      = { 2002 2033 2036 2003 2049 2053 2004 2091 2005 2117 2006 2010 2001 2037 2038 2033 2040 2041 2054 2055 2052 2057 2062 2068
			     2069 2073 2074 2075 2076 2077 2079 2080 2081 2082 2098 2099 2100 2101 2105 2106 2107 2110 2111 2123 2124 2128 2131 2132
			     2007 2146 2148 2008 2009 2045 2202 2203 2063 2092 2093 2118 2119 2140 2166 2179
			   }
  dormant_leaders        = { 24004 24005 24020 24022 24027 24029 24034 24043 24046 24054 24056 24059 24060 24062 24065 24070 24071 24074 24095 24103
			     24115 24117 24120 24124 24145 24146 24151 24153 24154 24157 24158 24159 24160 24161 24167 24176 24178 24182 24183 24186
			     24188 24199 24200 24208 24209 24213 24215
			   }
  headofstate            = { type = 9 id = 2031 }
  headofgovernment       = { type = 9 id = 2046 }
  foreignminister        = { type = 9 id = 2061 }
  armamentminister       = { type = 9 id = 2089 }
  ministerofsecurity     = { type = 9 id = 2115 }
  ministerofintelligence = { type = 9 id = 2136 }
  chiefofstaff           = { type = 9 id = 2152 }
  chiefofarmy            = { type = 9 id = 2158 }
  chiefofnavy            = { type = 9 id = 2178 }
  chiefofair             = { type = 9 id = 2194 }
  landunit =
  { id       = { type = 10269 id = 50 }
    location = 516
    name     = "Corps Expéditionnaire Français"
    division =
    { experience    = 35
      id            = { type = 10269 id = 51 }
      name          = "1ère Division Française Libre"
      type          = motorized
      model         = 3
      strength      = 100
      extra         = anti_tank
      brigade_model = 2
    }
    division =
    { experience    = 35
      id            = { type = 10269 id = 52 }
      name          = "2e Div. d'Infanterie Nord-Africaine"
      type          = infantry
      model         = 4
      strength      = 100
      extra         = artillery
      brigade_model = 5
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 53 }
      name       = "3e Div. d'Infanterie Nord-Africaine"
      type       = infantry
      model      = 4
      strength   = 100
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 54 }
      name       = "1ère Div. des Goums Marocains"
      type       = bergsjaeger
      model      = 3
      strength   = 100
      extra      = engineer
    }
    division =
    { experience    = 35
      id            = { type = 10269 id = 55 }
      name          = "4e Div. Marocaine de Montagne"
      type          = bergsjaeger
      model         = 3
      strength      = 100
      extra         = anti_tank
      brigade_model = 2
    }
  }
  landunit =
  { id       = { type = 10269 id = 56 }
    location = 39
    name     = "Corps Expéditionnaire Français"
    division =
    { experience    = 35
      id            = { type = 10269 id = 57 }
      name          = "2e Div. Blindée Française Libre"
      type          = armor
      model         = 3
      strength      = 100
      extra         = sp_artillery
      brigade_model = 3
    }
  }
  landunit =
  { id       = { type = 10269 id = 1 }
    location = 1692
    name     = "Troupes de Nouvelle Calédonie"
    division =
    { experience = 35
      id         = { type = 10269 id = 2 }
      name       = "Troupes de Nouvelle Calédonie"
      type       = militia
      model      = 1
      strength   = 100
    }
  }
  landunit =
  { id       = { type = 10269 id = 5 }
    location = 1037
    name     = "Troupes de Djibouti"
    division =
    { experience = 35
      id         = { type = 10269 id = 6 }
      name       = "Troupes de Djibouti"
      type       = militia
      model      = 1
      strength   = 100
    }
  }
  landunit =
  { id       = { type = 10269 id = 7 }
    location = 875
    name     = "Troupes de Guyanne"
    division =
    { experience = 35
      id         = { type = 10269 id = 8 }
      name       = "Troupes de Guyanne"
      type       = militia
      model      = 1
      strength   = 100
    }
  }
  landunit =
  { id       = { type = 10269 id = 9 }
    location = 899
    name     = "Troupes de Fort de France"
    division =
    { experience = 35
      id         = { type = 10269 id = 10 }
      name       = "Troupes de Fort de France"
      type       = militia
      model      = 1
      strength   = 100
    }
  }
  landunit =
  { id       = { type = 10269 id = 11 }
    location = 1092
    name     = "Troupes du Gabon"
    division =
    { experience = 35
      id         = { type = 10269 id = 12 }
      name       = "Troupes du Gabon"
      type       = militia
      model      = 1
      strength   = 100
    }
  }
  landunit =
  { id       = { type = 10269 id = 13 }
    location = 1862
    name     = "Troupes de Aleppo"
    division =
    { experience = 35
      id         = { type = 10269 id = 14 }
      name       = "Troupes d'Aleppo"
      type       = militia
      model      = 1
      strength   = 100
    }
  }
  landunit =
  { id       = { type = 10269 id = 15 }
    location = 1793
    name     = "Troupes de Beirut"
    division =
    { experience = 35
      id         = { type = 10269 id = 16 }
      name       = "Troupes de Beirut"
      type       = militia
      model      = 1
      strength   = 100
    }
  }
  landunit =
  { id       = { type = 10269 id = 17 }
    location = 1792
    name     = "Troupes de Damascus"
    division =
    { experience = 35
      id         = { type = 10269 id = 18 }
      name       = "Troupes de Damascus"
      type       = militia
      model      = 1
      strength   = 100
    }
  }
  landunit =
  { id       = { type = 10269 id = 19 }
    location = 981
    name     = "Troupe d'Afrique"
    division =
    { experience = 35
      id         = { type = 10269 id = 20 }
      name       = "1ère Div. d'Infanterie Coloniale"
      type       = infantry
      model      = 4
      strength   = 100
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 21 }
      name       = "2e Div. d'Infanterie Coloniale"
      type       = infantry
      model      = 4
      strength   = 100
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 22 }
      name       = "3e Div. d'Infanterie Coloniale"
      type       = infantry
      model      = 4
      strength   = 100
    }
  }
  navalunit =
  { id       = { type = 10269 id = 63 }
    location = 23
    base     = 23
    name     = "Force Naval Française Libre"
    division =
    { experience    = 35
      id            = { type = 10269 id = 104 }
      name          = "Bearn"
      type          = carrier
      model         = 1
      extra         = cag
      brigade_model = 2
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 105 }
      name       = "Richelieu"
      type       = battleship
      model      = 3
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 106 }
      name       = "Lorraine"
      type       = battleship
      model      = 1
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 107 }
      name       = "Duquesne"
      type       = heavy_cruiser
      model      = 1
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 108 }
      name       = "Suffren"
      type       = heavy_cruiser
      model      = 1
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 109 }
      name       = "Tourville"
      type       = heavy_cruiser
      model      = 1
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 110 }
      name       = "Duguay Trouin"
      type       = light_cruiser
      model      = 1
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 111 }
      name       = "Jeanne D'Arc"
      type       = light_cruiser
      model      = 1
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 112 }
      name       = "Emile Bertin"
      type       = light_cruiser
      model      = 2
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 113 }
      name       = "Georges Leygues"
      type       = light_cruiser
      model      = 3
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 114 }
      name       = "Gloire"
      type       = light_cruiser
      model      = 3
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 115 }
      name       = "Montcalm"
      type       = light_cruiser
      model      = 3
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 116 }
      name       = "1ère Flottille de Contre-torpilleurs"
      type       = destroyer
      model      = 0
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 117 }
      name       = "2e Flottille de Contre-torpilleurs"
      type       = destroyer
      model      = 1
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 118 }
      name       = "3e Flottille de Contre-torpilleurs"
      type       = destroyer
      model      = 2
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 119 }
      name       = "4e Flottille de Contre-torpilleurs"
      type       = destroyer
      model      = 2
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 100 }
      name       = "1ère Flottille de Sous-Marins"
      type       = submarine
      model      = 2
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 101 }
      name       = "2e Flottille de Sous-Marins"
      type       = submarine
      model      = 1
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 102 }
      name       = "3e Flottille de Sous-Marins"
      type       = submarine
      model      = 1
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 103 }
      name       = "4e Flottille de Sous-Marins"
      type       = submarine
      model      = 1
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 65 }
      name       = "5e Flottille de Sous-Marins"
      type       = submarine
      model      = 1
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 66 }
      name       = "1ère Flottille de Convois"
      type       = transport
      strength   = 100
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 67 }
      name       = "2e Flottille de Convois"
      type       = transport
      strength   = 100
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 68 }
      name       = "3e Flottille de Convois"
      type       = transport
      strength   = 100
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 69 }
      name       = "4e Flottille de Convois"
      type       = transport
      strength   = 100
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 70 }
      name       = "5e Flottille de Convois"
      type       = transport
      strength   = 100
    }
  }
  airunit =
  { id       = { type = 10269 id = 60 }
    location = 21
    base     = 21
    name     = "Groupe Expéditionnaire Français"
    division =
    { experience = 35
      id         = { type = 10269 id = 61 }
      name       = "Groupe de Chasse 'Lorraine'"
      type       = multi_role
      model      = 2
      strength   = 100
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 62 }
      name       = "Groupe de Bomb. Tact. 'Alsace'"
      type       = tactical_bomber
      model      = 2
      strength   = 100
    }
  }
  airunit =
  { location = 1792
    base     = 1792
    id       = { type = 10269 id = 32 }
    name     = "Escadre du Moyen-Orient"
    division =
    { experience = 35
      id         = { type = 10269 id = 33 }
      name       = "Groupe de Chasse 21"
      type       = multi_role
      model      = 2
      strength   = 100
    }
    division =
    { experience = 35
      id         = { type = 10269 id = 34 }
      name       = "Groupe de Bombardement Tactique 1"
      type       = tactical_bomber
      model      = 1
      strength   = 100
    }
  }
  airunit =
  { location = 1692
    base     = 1692
    id       = { type = 10269 id = 35 }
    name     = "Escadre de Nouvelle Calédonie"
    division =
    { experience = 35
      id         = { type = 10269 id = 36 }
      name       = "Groupe de Bombardement Naval 1"
      type       = naval_bomber
      model      = 2
      strength   = 100
    }
  }
  airunit =
  { location = 981
    base     = 981
    id       = { type = 10269 id = 37 }
    name     = "Escadre d'Afrique Ouest"
    division =
    { experience = 35
      id         = { type = 10269 id = 38 }
      name       = "Groupe de Bombardement Naval 2"
      type       = naval_bomber
      model      = 2
      strength   = 100
    }
  }
}
