
##############################
# Country definition for BEL #
##############################

province =
{ id         = 45
  naval_base = { size = 4 current_size = 4 }
}              # Ghent
province =
{ id       = 50
  air_base = { size = 2 current_size = 2 }
  landfort = 4
  anti_air = 1
}            # Antwerp
province =
{ id       = 51
  air_base = { size = 2 current_size = 2 }
  anti_air = 1
}            # Brussels
province = { id = 68 landfort = 3 anti_air = 1 } # Liège
province =
{ id         = 1095
  air_base   = { size = 1 current_size = 1 }
  naval_base = { size = 2 current_size = 2 }
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
  supplies               = 500
  money                  = 100
  transports             = 100
  escorts                = 4
  diplomacy =
  { relation = { tag = AST value = 75 }
    relation = { tag = CAN value = 150 }
    relation = { tag = DEN value = 100 }
    relation = { tag = ENG value = 150 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 120 }
    relation = { tag = GER value = 20 }
    relation = { tag = HOL value = 150 }
    relation = { tag = ITA value = -5 }
    relation = { tag = JAP value = -25 }
    relation = { tag = LUX value = 200 }
    relation = { tag = NOR value = 100 }
    relation = { tag = NZL value = 20 }
    relation = { tag = POR value = -20 }
    relation = { tag = SAF value = 35 }
    relation = { tag = SWE value = 100 }
    relation = { tag = USA value = 75 }
  }
  nationalprovinces      = { 45 50 51 52 65 68 69 70 1095 1142 1071 1072 1073 1074 1143 1144 1127 1098 1063 }
  ownedprovinces         = { 45 50 51 52 65 68 69 70 1095 1142 1071 1072 1073 1074 1143 1144 1127 1098 1063 }
  controlledprovinces    = { 45 50 51 52 65 68 69 70 1095 1142 1071 1072 1073 1074 1143 1144 1127 1098 1063 }
  # Great War Infantry
  techapps               = { 1010  1020  1190  1200  1210  1220  1230  1310  1340  2010  2020  2150  2290  2300  2310  2320  2400  2450  2460  3010
			     3020  4010  4020  4120  4130  4250  5010  5020  5050  5060  5080  5090  5190  5200  5310  6010  6020  9010  9020  14000
			     14010
			   }
  SpyInfo                = { country = "BEL" NumberOfSpies = 6 }

  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 7
    free_market       = 9
    freedom           = 10
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 15135 }
  headofgovernment       = { type = 9 id = 15034 }
  foreignminister        = { type = 9 id = 15044 }
  armamentminister       = { type = 9 id = 15061 }
  ministerofsecurity     = { type = 9 id = 15073 }
  ministerofintelligence = { type = 9 id = 15092 }
  chiefofstaff           = { type = 9 id = 15105 }
  chiefofarmy            = { type = 9 id = 15110 }
  chiefofnavy            = { type = 9 id = 15009 }
  chiefofair             = { type = 9 id = 15116 }
  dormant_ministers      = { 15002 15003 15007 15047 15056 15076 15120 15123 15128 15129 15130 15131 }
  landunit =
  { id       = { type = 11500 id = 1 }
    location = 51
    name     = "Ière Armée"
    division =
    { id            = { type = 11500 id = 2 }
      name          = "1ère Division d'Infanterie"
      type          = infantry
      model         = 0
      extra         = artillery
      brigade_model = 2
    }
  }
  landunit =
  { id       = { type = 11500 id = 3 }
    location = 65
    name     = "IIe Armée"
    division =
    { id    = { type = 11500 id = 4 }
      name  = "2e Division d'Infanterie"
      type  = infantry
      model = 0
    }
    division =
    { id    = { type = 11500 id = 5 }
      name  = "3e Division d'Infanterie"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { id       = { type = 11500 id = 6 }
    location = 50
    name     = "IIIe Armée"
    division =
    { id            = { type = 11500 id = 12 }
      name          = "6e Division d'Infanterie"
      type          = infantry
      model         = 0
      extra         = artillery
      brigade_model = 2
    }
    division =
    { id    = { type = 11500 id = 7 }
      name  = "1ère Chasseurs à Pied"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { id       = { type = 11500 id = 8 }
    location = 69
    name     = "IVe Armée"
    division =
    { id    = { type = 11500 id = 9 }
      name  = "4e Division d'Infanterie"
      type  = infantry
      model = 0
      extra = engineer
    }
  }
  landunit =
  { id       = { type = 11500 id = 11 }
    location = 70
    name     = "Ve Armée"
    division =
    { id    = { type = 11500 id = 17 }
      name  = "1ère Chasseurs Ardennais"
      type  = bergsjaeger
      model = 0
    }
  }
  landunit =
  { id       = { type = 11500 id = 13 }
    location = 68
    name     = "VIe Armée"
    division =
    { id    = { type = 11500 id = 14 }
      name  = "2de Jagers te Voet"
      type  = infantry
      model = 0
    }
    division =
    { id    = { type = 11500 id = 15 }
      name  = "7e Division d'Infanterie"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { id       = { type = 11500 id = 18 }
    location = 51
    name     = "Armée de Lancers"
    division =
    { id    = { type = 11500 id = 19 }
      name  = "1ère Division Motorisée"
      type  = motorized
      model = 0
    }
    division =
    { id    = { type = 11500 id = 20 }
      name  = "1ère Division de Guides"
      type  = cavalry
      model = 3
    }
  }
  landunit =
  { id       = { type = 11500 id = 21 }
    location = 1095
    name     = "Garde Royale Coloniale"
    division =
    { id    = { type = 11500 id = 22 }
      name  = "1ère Garde Coloniale"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { id       = { type = 11500 id = 27 }
    location = 50
    name     = "Fort Eben-Emael"
    division =
    { id            = { type = 11500 id = 28 }
      name          = "Fort Eben-Emael"
      type          = garrison
      locked        = yes
      model         = 0
      extra         = artillery
      brigade_model = 4
    }
  }
  landunit =
  { id       = { type = 11500 id = 29 }
    location = 68
    name     = "Fort de Battice"
    division =
    { id            = { type = 11500 id = 30 }
      name          = "Fort de Battice"
      type          = garrison
      locked        = yes
      model         = 0
      extra         = artillery
      brigade_model = 3
    }
  }
  navalunit =
  { id       = { type = 11500 id = 23 }
    location = 45
    base     = 45
    name     = "1ste Transportatie Smaldeel"
    division =
    { id   = { type = 11500 id = 24 }
      name = "1ère Transporte Naval"
      type = transport
    }
    division =
    { id   = { type = 11500 id = 26 }
      name = "2de Smaldeel"
      type = transport
    }
  }
  airunit =
  { id       = { type = 11500 id = 31 }
    location = 51
    base     = 51
    name     = "Aviation Militaire"
    division =
    { id    = { type = 11500 id = 32 }
      name  = "Groupe de Chasse"
      type  = interceptor
      model = 1
    }
  }
}
