
##############################
# Country definition for URU #
##############################

province =
{ id         = 849
  anti_air   = 1
  air_base   = { size = 1 current_size = 1 }
  naval_base = { size = 6 current_size = 6 }
}              # Montevideo

#####################
# Country main data #
#####################

country =
{ tag                    = URU
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 849
  manpower               = 6
  diplomacy =
  { relation = { tag = ARG value = -50 }
    relation = { tag = BOL value = 10 }
    relation = { tag = BRA value = 125 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 10 }
    relation = { tag = PAR value = 20 }
    relation = { tag = PRU value = 25 }
    relation = { tag = SOV value = -100 }
    relation = { tag = USA value = 100 }
    relation = { tag = VEN value = 10 }
    relation = { tag = GER value = 10 }
  }
  nationalprovinces      = { 849 }
  ownedprovinces         = { 849 }
  controlledprovinces    = { 849 }
  # ROTW Minor Tech '36
  techapps               = { 1010 1190 14000 2150 2290 4010 5010 5020 5050 5070 5080 5090 5100 5110 5190 5200 6210 6300 }
  SpyInfo                = { country = "URU" NumberOfSpies = 4 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 5
    free_market       = 5
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 41031 }
  headofgovernment       = { type = 9 id = 41037 }
  foreignminister        = { type = 9 id = 41043 }
  armamentminister       = { type = 9 id = 41053 }
  ministerofsecurity     = { type = 9 id = 41061 }
  ministerofintelligence = { type = 9 id = 41070 }
  chiefofstaff           = { type = 9 id = 41007 }
  chiefofarmy            = { type = 9 id = 41081 }
  chiefofnavy            = { type = 9 id = 41009 }
  chiefofair             = { type = 9 id = 41093 }
  dormant_ministers      = { 41001 41002 41003 41004 41050 41005 41060 41006 41068 41008 41010 }
  landunit =
  { id       = { type = 30056 id = 40 }
    name     = "Ejercito de Uruguay"
    location = 849
    division =
    { id       = { type = 30056 id = 4000 }
      name     = "4a Brigada de Inf. 'Don Claudio'"
      strength = 100
      type     = infantry
      extra    = artillery
    }
  }
}
