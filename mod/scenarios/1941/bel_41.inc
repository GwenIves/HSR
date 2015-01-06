
##############################
# Country definition for BEL #
##############################

province =
{ id         = 1095
  oilpool    = 1
  supplypool = 50
  air_base   = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}              # Banana

#####################
# Country main data #
#####################

country =
{ tag                    = BEL
  capital                = 1142
  manpower               = 5
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 100
  transports             = 120
  escorts                = 20
  SpyInfo                = { country = "BEL" NumberOfSpies = 5 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 2
    free_market       = 9
    freedom           = 10
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 4
  }
  nationalprovinces      = { 45 50 51 52 65 68 69 70 1095 1142 1071 1072 1073 1074 1143 1144 1127 1098 1063 }
  ownedprovinces         = { 1095 1142 1071 1072 1073 1074 1143 1144 1127 1098 1063 }
  controlledprovinces    = { 1095 1142 1071 1072 1073 1074 1143 1144 1127 1098 1063 }
  # Group C 1941 techs
  # ######################
  techapps               = { 5070  4010  4020  4030  4040  4120  4130  4140  2010  2020  2030  2040  2050  2150  2290  2300  2310  2320  2330  2400
			     2410  2450  2460  2470  2510  2520  1010  1020  1030  1190  1200  1210  1220  1110  2330  9010  9020  9030  5010  5020
			     5050  5080  5090  5100  5110  5190  5200  5470  5480  6010  6020  6040  14000 14010 14020
			   }
  diplomacy =
  { relation = { tag = AST value = 200 }
    relation = { tag = CAN value = 200 }
    # relation = { tag = DEN value = 100 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 200 }
    relation = { tag = GER value = -200 }
    relation = { tag = HOL value = 200 }
    relation = { tag = ITA value = -200 }
    relation = { tag = JAP value = -150 }
    # relation = { tag = LUX value = 200 }
    # relation = { tag = NOR value = 100 }
    relation = { tag = NZL value = 200 }
    relation = { tag = POR value = -20 }
    relation = { tag = SAF value = 200 }
    relation = { tag = SWE value = 100 }
    relation = { tag = USA value = 75 }
  }
  headofstate            = { type = 9 id = 15118 }
  headofgovernment       = { type = 9 id = 15036 }
  foreignminister        = { type = 9 id = 15044 }
  armamentminister       = { type = 9 id = 15059 }
  ministerofsecurity     = { type = 9 id = 15081 }
  ministerofintelligence = { type = 9 id = 15096 }
  chiefofstaff           = { type = 9 id = 15107 }
  chiefofarmy            = { type = 9 id = 15111 }
  chiefofnavy            = { type = 9 id = 15009 }
  chiefofair             = { type = 9 id = 15116 }
  dormant_ministers      = { 15002 15003 15007 15047 15056 15076 15004 15005 15006 15048 15062 15071 15072 15073 15110 15105 15120 15123 15127 15128
			     15129 15130 15131 15132 15133
			   }
  dormant_leaders        = { 68001 68002 68003 68004 68005 68010 68011 68022 68024 68027 }
  landunit =
  { id       = { type = 11500 id = 21 }
    location = 1095
    name     = "Garde Royale Coloniale"
    division =
    { id    = { type = 11500 id = 22 }
      name  = "1ère Garde Coloniale"
      type  = infantry
      model = 1
    }
  }
  navalunit =
  { id       = { type = 11500 id = 23 }
    location = 1095
    base     = 1095
    name     = "1ste Transportatie Smaldeel"
    division =
    { id   = { type = 11500 id = 24 }
      name = "1ère Transporte Naval"
      type = transport
    }
  }
}
