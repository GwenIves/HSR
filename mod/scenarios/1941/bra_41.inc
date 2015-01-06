
##############################
# Country definition for BRA #
##############################

province = { id = 847 ic = 1 anti_air = 1 } # Curitiba
province =
{ id         = 848
  ic         = 1
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 8 current_size = 8 }
}              # Pôrto Alegre
province = { id = 881 ic = 1 } # Recife
province = { id = 883 anti_air = 2 } # Goiás
province = { id = 885 ic = 1 anti_air = 2 } # Rio de Janeiro
province =
{ id         = 886
  ic         = 2
  anti_air   = 1
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
}              # São Paulo

#####################
# Country main data #
#####################

country =
{ tag                    = BRA
  # Resource Reserves
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 100
  manpower               = 123
  capital                = 885
  SpyInfo                = { country = "BRA" NumberOfSpies = 8 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 9
    free_market       = 8
    freedom           = 5
    professional_army = 5
    defense_lobby     = 6
    interventionism   = 3
  }
  nationalprovinces      = { 848 847 835 834 825 823 822 820 872 824 826 878 876 877 879 883 887 886 885 884 882 880 881 }
  ownedprovinces         = { 848 847 835 834 825 823 822 820 872 824 826 878 876 877 879 883 887 886 885 884 882 880 881 }
  controlledprovinces    = { 848 847 835 834 825 823 822 820 872 824 826 878 876 877 879 883 887 886 885 884 882 880 881 }
  # Group C 1941 techs
  # ######################
  techapps               = { 5070  3410  4010  4020  4030  4040  4120  4130  4140  2010  2020  2030  2040  2050  2150  2290  2300  2310  2320  2330
			     2400  2410  2450  2460  2470  2510  2520  1010  1020  1030  1190  1200  1210  1220  1110  2330  9010  9020  9030  5010
			     5020  5050  5080  5090  5100  5110  5190  5200  5470  6010  6020  6040  3010  3070  3130  3250  3400  8010  8020  8040
			     8050  14000
			   }
  diplomacy =
  { relation = { tag = ARG value = -10 }
    relation = { tag = BOL value = 10 }
    relation = { tag = CHL value = 10 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 10 }
    relation = { tag = GER value = 50 }
    relation = { tag = PAR value = 10 }
    relation = { tag = POR value = 75 }
    relation = { tag = PRU value = 10 }
    relation = { tag = SOV value = -50 }
    relation = { tag = URU value = 125 }
    relation = { tag = USA value = 120 }
    relation = { tag = VEN value = 10 }
  }
  headofstate            = { type = 9 id = 34001 }
  headofgovernment       = { type = 9 id = 34002 }
  foreignminister        = { type = 9 id = 34076 }
  armamentminister       = { type = 9 id = 34095 }
  ministerofsecurity     = { type = 9 id = 34121 }
  ministerofintelligence = { type = 9 id = 34134 }
  chiefofstaff           = { type = 9 id = 34007 }
  chiefofarmy            = { type = 9 id = 34162 }
  chiefofnavy            = { type = 9 id = 34179 }
  chiefofair             = { type = 9 id = 34010 }
  landunit =
  { location = 885
    id       = { type = 10110 id = 1100 }
    name     = "Brazilian Army HQ"
    division =
    { id       = { type = 10110 id = 1101 }
      name     = "Brazilian Army HQ"
      type     = hq
      model    = 1
      strength = 100
    }
  }
  landunit =
  { id       = { type = 10110 id = 1 }
    name     = "1o Exército do Brasil"
    location = 883
    division =
    { id       = { type = 10110 id = 2 }
      name     = "I Divisão de Infantaria"
      strength = 100
      type     = infantry
      model    = 1
      extra    = artillery
    }
    division =
    { id       = { type = 10110 id = 3 }
      name     = "II Divisão de Infantaria"
      strength = 100
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 10110 id = 4 }
      name     = "CCLXVIII Divisão do Guarda Civíl"
      strength = 100
      type     = militia
      extra    = anti_air
    }
    division =
    { id       = { type = 10110 id = 5 }
      name     = "CCLXIX Divisão do Guarda Civíl"
      strength = 100
      type     = militia
    }
  }
  landunit =
  { id       = { type = 10110 id = 6 }
    name     = "2o Exército do Brasil"
    location = 885
    division =
    { id       = { type = 10110 id = 7 }
      name     = "III Divisão de Infantaria"
      strength = 100
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 10110 id = 8 }
      name     = "XCII Divisão de Cavalaria"
      strength = 100
      type     = cavalry
      model    = 1
    }
  }
  navalunit =
  { id       = { type = 10110 id = 11 }
    location = 886
    base     = 886
    name     = "Navais do Transporte"
    division =
    { id   = { type = 10110 id = 12 }
      name = "1. Flotilla de Navios de Transporte"
      type = transport
    }
    division =
    { id   = { type = 10110 id = 13 }
      name = "2. Flotilla de Navios de Transporte"
      type = transport
    }
    division =
    { id   = { type = 10110 id = 14 }
      name = "3. Flotilla de Navios de Transporte"
      type = transport
    }
    division =
    { id   = { type = 10110 id = 15 }
      name = "4. Flotilla de Navios de Transporte"
      type = transport
    }
    division =
    { id   = { type = 10110 id = 16 }
      name = "5. Flotilla de Navios de Transporte"
      type = transport
    }
    division =
    { id   = { type = 10110 id = 17 }
      name = "6. Flotilla de Navios de Transporte"
      type = transport
    }
  }
  navalunit =
  { name     = "Brazilian Navy"
    id       = { type = 10110 id = 18 }
    location = 848
    base     = 848
    division =
    { id    = { type = 10110 id = 19 }
      name  = "NRB São Paulo"
      type  = battleship
      model = 0
    }
    division =
    { id    = { type = 10110 id = 29 }
      name  = "NRB Minas Gerais"
      type  = battleship
      model = 0
    }
    division =
    { id    = { type = 10110 id = 21 }
      name  = "NRB Bahia"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 10110 id = 23 }
      name  = "NRB Rio Grande do Sul"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 10110 id = 27 }
      name  = "1. Flotilla de Submarinos"
      type  = submarine
      model = 1
    }
  }
  airunit =
  { id       = { type = 10110 id = 9 }
    name     = "Aereo do Brésil"
    location = 848
    base     = 848
    division =
    { id       = { type = 10110 id = 10 }
      name     = "1. Grupo de Caças"
      strength = 100
      type     = interceptor
      model    = 0
    }
  }
}
