
##############################
# Country definition for FRA #
##############################

province = { id = 1037 supplypool = 1 } # Djibouti
province =
{ id 		= 1075
  anti_air   	= 2
  air_base   	= { size = 4 current_size = 4 }
 } # Djibouti
province =
{ id         = 1794
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}              # Beirut

#####################
# Country main data #
#####################

country =
{ tag                    = FRA
  capital                = 1075
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 100
  manpower               = 425
  transports             = 350
  escorts                = 60
  free                   = { ic = 25 energy = 60 metal = 30 rare_materials = 15 oil = 20 supplies = 50 money = 10 }
  diplomacy =
  { relation = { tag = AST value = 150 }
    relation = { tag = BEL value = 200 }
    relation = { tag = BHU value = 150 }
    relation = { tag = BUL value = -200 }
    relation = { tag = CAN value = 150 }
    relation = { tag = SLO value = -200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FIN value = 85 }
    relation = { tag = GER value = -200 }
    relation = { tag = HOL value = 200 }
    relation = { tag = HUN value = -200 }
    relation = { tag = ITA value = -200 }
    relation = { tag = NEP value = 150 }
    relation = { tag = NZL value = 150 }
    relation = { tag = OMN value = 150 }
    relation = { tag = ROM value = -200 }
    relation = { tag = SAF value = 150 }
    relation = { tag = SCH value = 1 }
    relation = { tag = SIA value = -100 }
    relation = { tag = SOV value = 100 }
    relation = { tag = SPA value = -65 }
    relation = { tag = SWE value = 80 }
    relation = { tag = TUR value = 50 }
    relation = { tag = USA value = 65 }
    relation = { tag = YEM value = 150 }
    relation = { tag = NIC value = 150 }
  }
  SpyInfo                = { country = "FRA" NumberOfSpies = 10 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 5 }
  #SpyInfo                = { country = "GER" NumberOfSpies = 5 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 5 }
  #SpyInfo                = { country = "BEL" NumberOfSpies = 5 }
  #SpyInfo                = { country = "USA" NumberOfSpies = 5 }
  #SpyInfo                = { country = "ITA" NumberOfSpies = 5 }
  #SpyInfo                = { country = "VIC" NumberOfSpies = 8 }
  # Metropolitan France
  nationalprovinces      = { 529 527 366 365 367 364 363 362 358 328 327 326 325 324 359 361 319 360 322 323 59  60  61  62  63  318 317 316 73  72
			     64  53  44  43  18  54  42  55  41  56  57  58  32  33  34  35  36  37  38  39  40  320 321 528
			   }
  # MIDDLE-EAST
  ownedprovinces         = { 1862 1861 1863 1792 1793 1794 1795 1082 1081 1080 1079 1086 1070 1078 1077 1087 1089 1092 1093 1075 1076 1088 1692 1691
			     1687 1690 1689 1688 1682 1751 1037
			   }
  # MIDDLE-EAST
  controlledprovinces    = { 1862 1861 1863 1792 1793 1794 1795 1082 1081 1080 1079 1086 1070 1078 1077 1087 1089 1092 1093 1075 1076 1088 1692 1691
			     1687 1690 1689 1688 1682 1751 1037
			   }
  # FRA 1941 techs
  # ######################
  techapps               = { 4010  4020  4030  4040  4120  4130  4140  4150  4250  2010  2020  2040  2050  2030  2070  2290  2300  2310  2320  2330
			     2400  2450  2460  2470  2510  2520  1010  1020  1030  1190  1200  1210  1220  1110  1120  1130  1070  1230  1310  1340
			     5010  5020  5050  5060  5070  5080  5090  5100  5110  5120  5130  5190  5200  5310  5320  5410  5470  5480  5490  9010
			     9020  9030  9040  9050  9060  9070  9080  9090  9100  9110  9120  9130  9190  9200  6010  6030  6110  6120  6150  8010
			     8020  8030  8040  8050  8070  8100  8120  3010  3020  3030  3040  3070  3080  3090  3100  3130  3140  3150  3190  3200
			     3210  3220  3250  3260  3270  3280  3320  3330  3340  3400  3410  3420  14000 14010 14020
			   }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 4
    free_market       = 8
    freedom           = 10
    professional_army = 4
    defense_lobby     = 7
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 2031 }
  headofgovernment       = { type = 9 id = 2046 }
  foreignminister        = { type = 9 id = 2056 }
  armamentminister       = { type = 9 id = 2088 }
  ministerofsecurity     = { type = 9 id = 2114 }
  ministerofintelligence = { type = 9 id = 2134 }
  chiefofstaff           = { type = 9 id = 2150 }
  chiefofarmy            = { type = 9 id = 2164 }
  chiefofnavy            = { type = 9 id = 2178 }
  chiefofair             = { type = 9 id = 2193 }
  dormant_teams		 = { 1403 1408 1411 1418 1420 1422 1423 }
  dormant_ministers      = { 2002 2033 2036 2003 2049 2053 2004 2091 2005 2117 2006 2010 2001 2037 2038 2033 2040 2041 2054 2055 2052 2057 2062 2068
			     2069 2073 2074 2075 2076 2077 2079 2080 2081 2082 2098 2099 2100 2101 2105 2106 2107 2110 2111 2123 2124 2128 2131 2132
			     2007 2146 2148 2008 2009
			   }
  dormant_leaders        = { 24004 24005 24020 24022 24027 24029 24034 24043 24046 24054 24056 24059 24060 24062 24065 24070 24071 24074 24095 24103
			     24115 24117 24120 24124 24145 24146 24151 24153 24154 24157 24158 24159 24160 24161 24167 24176 24178 24182 24183 24186
			     24188 24199 24200 24208 24209 24213 24215
			   }
  landunit =
  { id       = { type = 10269 id = 1 }
    location = 1692
    name     = "Troupes de Nouvelle Calédonie"
    division =
    { id       = { type = 10269 id = 2 }
      name     = "Troupes de Nouvelle Calédonie"
      type     = militia
      strength = 50
    }
  }
  landunit =
  { id       = { type = 10269 id = 13 }
    location = 1862
    name     = "Troupes de Aleppo"
    division =
    { id       = { type = 10269 id = 14 }
      name     = "Troupes de Aleppo"
      type     = militia
      strength = 50
    }
  }
  landunit =
  { id       = { type = 10269 id = 15 }
    location = 1794
    name     = "Troupes de Beirut"
    division =
    { id       = { type = 10269 id = 16 }
      name     = "Troupes de Beirut"
      type     = militia
      strength = 50
    }
  }
  landunit =
  { id       = { type = 10269 id = 17 }
    location = 1792
    name     = "Troupes de Damascus"
    division =
    { id       = { type = 10269 id = 18 }
      name     = "Troupes de Damascus"
      type     = militia
      strength = 50
    }
  }
  navalunit =
  { id       = { type = 10269 id = 30 }
    location = 1794
    base     = 1794
    name     = "Escadre de Méditerranée"
    division =
    { id    = { type = 10269 id = 31 }
      name  = "1ère Flottille de Sous-Marins"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 10269 id = 401 }
      name  = "2e Flottille de Sous-Marins"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 10269 id = 406 }
      name  = "3e Flottille de Sous-Marins"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 10269 id = 100 }
      name  = "4e Flottille de Sous-Marins"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 10268 id = 400 }
      name  = "Lorraine"
      type  = battleship
      model = 1
    }
    division =
    { id    = { type = 10268 id = 402 }
      name  = "Duguay-Trouin"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 10268 id = 403 }
      name  = "Suffren"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 10268 id = 404 }
      name  = "Duquesne"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 10268 id = 405 }
      name  = "Tourville"
      type  = heavy_cruiser
      model = 1
    }
    division =
    { id    = { type = 10268 id = 101 }
      name  = "1ère Flottille de Contre-torpilleurs"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 10268 id = 102 }
      name  = "2e Flottille de Contre-torpilleurs"
      type  = destroyer
      model = 2
    }
  }
  airunit =
  { location = 1794
    base     = 1794
    id       = { type = 10269 id = 32 }
    name     = "Commande Aérienne Moyen-Orient"
    division =
    { id       = { type = 10269 id = 33 }
      name     = "Groupe de Chasse 21"
      type     = interceptor
      model    = 2
      strength = 100
    }
    division =
    { id       = { type = 10269 id = 34 }
      name     = "Groupe de Bombardement Tactique 1"
      type     = tactical_bomber
      model    = 1
      strength = 100
    }
  }
}
