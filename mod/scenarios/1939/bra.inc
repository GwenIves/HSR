
##############################
# Country definition for BRA #
##############################

province = { id = 847 anti_air = 1 } # Curitiba
province =
{ id         = 848
  ic         = 1
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 8 current_size = 8 }
}              # Pôrto Alegre
province = { id = 881 ic = 1 } # Recife
province = { id = 883 anti_air = 2 } # Goiás
province =
{ id         = 885
  anti_air   = 3
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
}              # Rio de Janeiro
province =
{ id         = 886
  ic         = 1
  anti_air   = 3
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
}              # São Paulo

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
  money                  = 100
  manpower               = 123
  capital                = 885
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
  nationalprovinces      = { 848 847 835 834 825 823 822 820 872 824 826 878 876 877 879 883 887 886 885 884 882 880 881 }
  ownedprovinces         = { 848 847 835 834 825 823 822 820 872 824 826 878 876 877 879 883 887 886 885 884 882 880 881 }
  controlledprovinces    = { 848 847 835 834 825 823 822 820 872 824 826 878 876 877 879 883 887 886 885 884 882 880 881 }
  # Semi-Major Tech '36
  # Group C 1939 techs
  # ######################
  techapps               = { 3410  4010  4020  4120  4130  2150  2010  2020  2030  2040  2290  2300  2310  2320  2330  2400  2450  2460  2510  1010
			     1020  1190  1200  1110  9010  9020  5010  5020  5080  5090  5100  5190  6010  6020  3010  3070  3130  3250  3400  8010
			     8020  8040  8050  14000
			   }
  SpyInfo                = { country = "BRA" NumberOfSpies = 7 }
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
  headofstate            = { type = 9 id = 34001 }
  headofgovernment       = { type = 9 id = 34002 }
  foreignminister        = { type = 9 id = 34076 }
  armamentminister       = { type = 9 id = 34094 }
  ministerofsecurity     = { type = 9 id = 34120 }
  ministerofintelligence = { type = 9 id = 34134 }
  chiefofstaff           = { type = 9 id = 34007 }
  chiefofarmy            = { type = 9 id = 34162 }
  chiefofnavy            = { type = 9 id = 34179 }
  chiefofair             = { type = 9 id = 34010 }
  # Number and type of divisions estimated.
  # It is known that army was expanded to 9 infantry divisions during the war.
  landunit =
  { id       = { type = 30052 id = 999 }
    name     = "1o Exército"
    location = 883
    division =
    { id       = { type = 30052 id = 906 }
      name     = "I Divisão de Infantaria"
      strength = 100
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 30052 id = 101 }
      name     = "II Divisão de Infantaria"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30052 id = 102 }
      name     = "III Divisão de Infantaria"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30052 id = 103 }
      name     = "IV Divisão de Infantaria"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30052 id = 903 }
    name     = "2o Exército"
    location = 824
    division =
    { id       = { type = 30052 id = 904 }
      name     = "V Divisão de Infantaria"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30052 id = 201 }
      name     = "CCLXVIII Divisão do Guarda Civíl"
      strength = 100
      type     = militia
    }
    division =
    { id       = { type = 30052 id = 202 }
      name     = "CCLXIX Divisão do Guarda Civíl"
      strength = 100
      type     = militia
    }
    division =
    { id       = { type = 30052 id = 203 }
      name     = "XCII Divisão de Cavalaria"
      strength = 100
      type     = cavalry
    }
  }
  navalunit =
  { id       = { type = 30052 id = 204 }
    location = 885
    base     = 885
    name     = "Navais do Transporte"
    division =
    { id   = { type = 30052 id = 205 }
      name = "1. Flotilla de Navios de Transporte"
      type = transport
    }
    division =
    { id   = { type = 30052 id = 206 }
      name = "2. Flotilla de Navios de Transporte"
      type = transport
    }
    division =
    { id   = { type = 30052 id = 207 }
      name = "3. Flotilla de Navios de Transporte"
      type = transport
    }
    division =
    { id   = { type = 30052 id = 208 }
      name = "4. Flotilla de Navios de Transporte"
      type = transport
    }
    division =
    { id   = { type = 30052 id = 209 }
      name = "5. Flotilla de Navios de Transporte"
      type = transport
    }
    division =
    { id   = { type = 30052 id = 210 }
      name = "6. Flotilla de Navios de Transporte"
      type = transport
    }
  }
  navalunit =
  { name     = "Brazilian Navy"
    id       = { type = 30052 id = 18 }
    location = 848
    base     = 848
    division =
    { id    = { type = 30052 id = 19 }
      name  = "NRB São Paulo"
      type  = battleship
      model = 0
    }
    division =
    { id    = { type = 30052 id = 29 }
      name  = "NRB Minas Gerais"
      type  = battleship
      model = 0
    }
    division =
    { id    = { type = 30052 id = 21 }
      name  = "NRB Bahia"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 30052 id = 23 }
      name  = "NRB Rio Grande do Sul"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 30052 id = 27 }
      name  = "1. Flotilla de Submarinos"
      type  = submarine
      model = 1
    }
  }
  airunit =
  { id       = { type = 30052 id = 901 }
    name     = "Aereo do Brésil"
    location = 885
    base     = 885
    division =
    { id       = { type = 30052 id = 902 }
      name     = "1. Grupo de Caças"
      strength = 100
      type     = interceptor
      model    = 0
    }
  }
}
