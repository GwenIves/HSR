
##############################
# Country definition for BRA #
##############################

province = { id = 847 anti_air = 3 ic = 6 } # Curitiba
province = { id = 848 ic = 6 } # Pôrto Alegre
province = { id = 881 ic = 6 } # Recife
province = { id = 883 anti_air = 6 } # Goiás
province =
{ id         = 885
  anti_air   = 6
  ic         = 6
  naval_base = { size = 6 current_size = 6 }
  air_base   = { size = 5 current_size = 5 }
}              # Rio de Janeiro
province = { id = 886 anti_air = 6 ic = 6 } # São Paulo

#####################
# Country main data #
#####################

country =
{ tag                    = BRA
  # Resource Reserves
  energy                 = 5000
  metal                  = 5000
  rare_materials         = 5000
  oil                    = 5000
  supplies               = 5000
  manpower               = 156
  capital                = 885
  SpyInfo                = { country = "BRA" NumberOfSpies = 8 }
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
  # Group C 1944 techs
  # ######################
  techapps               = { 4010  4020  4030  4040  4050  4060  4120  4130  4140  4170  4190  4250  2010  2020  2030  2040  2050  2060  2070  2080
			     2150  2160  2170  2180  2220  2230  2290  2300  2310  2320  2330  2340  2400  2410  2450  2460  2470  2510  2520  2530
			     1010  1020  1030  1040  1190  1200  1210  1220  1110  1120  1070  1150  2330  1310  9010  9020  9030  9040  5010  5020
			     5050  5060  5070  5080  5090  5100  5110  5120  5190  5200  5210  5220  5310  5350  5360  5470  6010  6020  6040  6050
			     6060  6070  3010  3070  3130  3250  3400  8010  8020  8040  8050  5320  14000 14010
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
  dormant_ministers      = { 34083 34078 34108 34098 }
  headofstate            = { type = 9 id = 34001 }
  headofgovernment       = { type = 9 id = 34002 }
  foreignminister        = { type = 9 id = 34076 }
  armamentminister       = { type = 9 id = 34096 }
  ministerofsecurity     = { type = 9 id = 34116 }
  ministerofintelligence = { type = 9 id = 34135 }
  chiefofstaff           = { type = 9 id = 34149 }
  chiefofarmy            = { type = 9 id = 34163 }
  chiefofnavy            = { type = 9 id = 34009 }
  chiefofair             = { type = 9 id = 34185 }
  # ## OOB
  landunit =
  { id       = { type = 30052 id = 30 }
    name     = "FEB"
    location = 521 # Naples, place of disembark
    division =
    { id            = { type = 10356 id = 2 }
      name          = "1a Divisão de Infantaria"
      strength      = 1
      type          = infantry
      model         = 2
      extra         = artillery
      brigade_model = 4
    }
  }
  landunit =
  { id       = { type = 30052 id = 1 }
    name     = "1o Exército"
    location = 885
    division =
    { id       = { type = 10356 id = 3 }
      name     = "2a Divisão de Infantaria"
      strength = 100
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 10356 id = 4 }
      name     = "3a Divisão de Infantaria"
      strength = 100
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 10356 id = 5 }
      name     = "4a Divisão de Infantaria"
      strength = 100
      type     = infantry
      model    = 2
    }
  }
  landunit =
  { id       = { type = 10356 id = 6 }
    name     = "2o Exército"
    location = 847
    division =
    { id       = { type = 10356 id = 7 }
      name     = "5a Divisão de Infantaria"
      strength = 100
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 10356 id = 8 }
      name     = "6a Divisão de Infantaria"
      strength = 100
      type     = militia
      model    = 1
    }
    division =
    { id       = { type = 10356 id = 9 }
      name     = "7a Divisão de Infantaria"
      strength = 100
      type     = militia
      model    = 1
    }
    division =
    { id       = { type = 10356 id = 10 }
      name     = "1a Divisão de Cavalaria"
      strength = 100
      type     = cavalry
      model    = 2
    }
  }
  # ###########################
  # ## BRAZIL NAVY OOB 1944 ###
  # ###########################
  navalunit =
  { id       = { type = 10356 id = 15 }
    name     = "Marinha do Brazil"
    location = 885
    base     = 885
    division =
    { id    = { type = 10356 id = 16 }
      name  = "NRB São Paulo"
      type  = battleship
      model = 1
    }
    division =
    { id    = { type = 10356 id = 17 }
      name  = "NRB Minas Gerais"
      type  = battleship
      model = 1
    }
    division =
    { id    = { type = 10356 id = 18 }
      name  = "NRB Bahia"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 10356 id = 19 }
      name  = "NRB Rio Grande do Sul"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 10356 id = 20 }
      name  = "1. Flotilla de Contratorpedeiros"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 10356 id = 21 }
      name  = "2. Flotilla de Contratorpedeiros"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 10356 id = 22 }
      name  = "3. Flotilla de Contratorpedeiros"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 10356 id = 23 }
      name  = "1. Flotilla de Submarinos"
      type  = submarine
      model = 1
    }
    division =
    { id   = { type = 10356 id = 24 }
      name = "1. Flotilla de Navios de Transporte"
      type = transport
    }
    division =
    { id   = { type = 10356 id = 25 }
      name = "2. Flotilla de Navios de Transporte"
      type = transport
    }
    division =
    { id   = { type = 10356 id = 26 }
      name = "3. Flotilla de Navios de Transporte"
      type = transport
    }
    division =
    { id   = { type = 10356 id = 27 }
      name = "4. Flotilla de Navios de Transporte"
      type = transport
    }
    division =
    { id   = { type = 10356 id = 28 }
      name = "5. Flotilla de Navios de Transporte"
      type = transport
    }
    division =
    { id   = { type = 10356 id = 29 }
      name = "6. Flotilla de Navios de Transporte"
      type = transport
    }
    division =
    { id   = { type = 10356 id = 30 }
      name = "7. Flotilla de Navios de Transporte"
      type = transport
    }
    division =
    { id   = { type = 10356 id = 31 }
      name = "8. Flotilla de Navios de Transporte"
      type = transport
    }
    division =
    { id   = { type = 10356 id = 32 }
      name = "9. Flotilla de Navios de Transporte"
      type = transport
    }
  }
  airunit =
  { id       = { type = 10356 id = 11 }
    name     = "Aereo do Brésil"
    location = 885
    base     = 885
    division =
    { id       = { type = 10356 id = 12 }
      name     = "1a Divisão de Caças"
      strength = 100
      type     = interceptor
      model    = 1
    }
    division =
    { id       = { type = 10356 id = 13 }
      name     = "2a Divisão de Caças"
      strength = 100
      type     = interceptor
      model    = 1
    }
  }
}
