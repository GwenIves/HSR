
##############################
# Country definition for BRA #
##############################

province = { id = 847 anti_air = 1 } # Curitiba
province =
{ id         = 848
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 8 current_size = 8 }
}              # P�rto Alegre
province = { id = 883 anti_air = 2 } # Goi�s
province =
{ id         = 885
  anti_air   = 1
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
}              # Rio de Janeiro
province =
{ id         = 886
  anti_air   = 1
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
}              # S�o Paulo

#####################
# Country main data #
#####################

country =
{ tag                    = BRA
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  manpower               = 125
  capital                = 885
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 9
    free_market       = 8
    freedom           = 7
    professional_army = 5
    defense_lobby     = 6
    interventionism   = 3
  }
  nationalprovinces      = { 848 847 835 834 825 823 822 820 872 824 826 878 876 877 879 883 887 886 885 884 882 880 881 }
  ownedprovinces         = { 848 847 835 834 825 823 822 820 872 824 826 878 876 877 879 883 887 886 885 884 882 880 881 }
  controlledprovinces    = { 848 847 835 834 825 823 822 820 872 824 826 878 876 877 879 883 887 886 885 884 882 880 881 }
  # Semi-Major Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 4010 4020 4120 2150 2010 2290 2300 2310 2450 2460 2510 1010 1190 1110 9010 5010 5080 5090 5190 6010 6020 3010 3070 3130
			     3250 3400 8010 8020 8040 8050
			   }
  diplomacy =
  { relation = { tag = ARG value = -10 }
    relation = { tag = BOL value = 10 }
    relation = { tag = CHL value = 10 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 10 }
    relation = { tag = GER value = 50 }
    relation = { tag = IRE value = 20 }
    relation = { tag = PAR value = 10 }
    relation = { tag = POR value = 75 }
    relation = { tag = PRU value = 10 }
    relation = { tag = SOV value = -50 }
    relation = { tag = URU value = 125 }
    relation = { tag = USA value = 120 }
    relation = { tag = VEN value = 10 }
  }
  SpyInfo                = { country = "BRA" NumberOfSpies = 5 }
  #SpyInfo                = { country = "ARG" NumberOfSpies = 3 }
  #SpyInfo                = { country = "BOL" NumberOfSpies = 3 }
  #SpyInfo                = { country = "CHL" NumberOfSpies = 3 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  #SpyInfo                = { country = "FRA" NumberOfSpies = 3 }
  #SpyInfo                = { country = "HOL" NumberOfSpies = 3 }
  #SpyInfo                = { country = "VEN" NumberOfSpies = 3 }
  #SpyInfo                = { country = "COL" NumberOfSpies = 3 }
  #SpyInfo                = { country = "ECU" NumberOfSpies = 3 }
  #SpyInfo                = { country = "PRU" NumberOfSpies = 3 }
  #SpyInfo                = { country = "USA" NumberOfSpies = 3 }
  #SpyInfo                = { country = "MEX" NumberOfSpies = 3 }
  headofstate            = { type = 9 id = 34001 }
  headofgovernment       = { type = 9 id = 34002 }
  foreignminister        = { type = 9 id = 34003 }
  armamentminister       = { type = 9 id = 34004 }
  ministerofsecurity     = { type = 9 id = 34005 }
  ministerofintelligence = { type = 9 id = 34006 }
  chiefofstaff           = { type = 9 id = 34007 }
  chiefofarmy            = { type = 9 id = 34008 }
  chiefofnavy            = { type = 9 id = 34009 }
  chiefofair             = { type = 9 id = 34010 }
  landunit =
  { id       = { type = 18000 id = 1 }
    name     = "1o Ex�rcito do Brasil"
    location = 883
    division =
    { id       = { type = 18000 id = 2 }
      name     = "I Divis�o de Infantaria"
      strength = 100
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 18000 id = 3 }
      name     = "II Divis�o de Infantaria"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 18000 id = 4 }
      name     = "CCLXVIII Divis�o do Guarda Civ�l"
      strength = 100
      type     = militia
      extra    = anti_air
    }
    division =
    { id       = { type = 18000 id = 5 }
      name     = "CCLXIX Divis�o do Guarda Civ�l"
      strength = 100
      type     = militia
    }
  }
  landunit =
  { id       = { type = 18000 id = 6 }
    name     = "2o Ex�rcito do Brasil"
    location = 885
    division =
    { id       = { type = 18000 id = 7 }
      name     = "III Divis�o de Infantaria"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 18000 id = 8 }
      name     = "XCII Divis�o de Cavalaria"
      strength = 100
      type     = cavalry
    }
  }
  navalunit =
  { id       = { type = 18000 id = 11 }
    location = 885
    base     = 885
    name     = "Navais do Transporte"
    division =
    { id   = { type = 18000 id = 12 }
      name = "1. Flotilla de Navios de Transporte"
      type = transport
    }
    division =
    { id   = { type = 18000 id = 13 }
      name = "2. Flotilla de Navios de Transporte"
      type = transport
    }
    division =
    { id   = { type = 18000 id = 14 }
      name = "3. Flotilla de Navios de Transporte"
      type = transport
    }
    division =
    { id   = { type = 18000 id = 15 }
      name = "4. Flotilla de Navios de Transporte"
      type = transport
    }
    division =
    { id   = { type = 18000 id = 16 }
      name = "5. Flotilla de Navios de Transporte"
      type = transport
    }
    division =
    { id   = { type = 18000 id = 17 }
      name = "6. Flotilla de Navios de Transporte"
      type = transport
    }
  }
  navalunit =
  { name     = "Brazilian Navy"
    id       = { type = 18000 id = 18 }
    location = 848
    base     = 848
    division =
    { id    = { type = 18000 id = 19 }
      name  = "NRB S�o Paulo"
      type  = battleship
      model = 0
    }
    division =
    { id    = { type = 18000 id = 29 }
      name  = "NRB Minas Gerais"
      type  = battleship
      model = 0
    }
    division =
    { id    = { type = 18000 id = 21 }
      name  = "NRB Bahia"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 18000 id = 23 }
      name  = "NRB Rio Grande do Sul"
      type  = light_cruiser
      model = 0
    }
  }
  airunit =
  { id       = { type = 18000 id = 9 }
    name     = "Aereo do Br�sil"
    location = 885
    base     = 885
    division =
    { id       = { type = 18000 id = 10 }
      name     = "1. Grupo de Ca�as"
      strength = 50
      type     = interceptor
      model    = 0
    }
  }
}
