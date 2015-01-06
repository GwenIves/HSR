
##############################
# Country definition for CUB #
##############################

province =
{ id         = 654
  anti_air   = 1
  naval_base = { size = 4 current_size = 4 }
}              # Havana

#####################
# Country main data #
#####################

country =
{ tag                    = CUB
  # Resource Reserves
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  money                  = 10
  manpower               = 13
  capital                = 654
  diplomacy =
  { relation = { tag = DOM value = 50 }
    relation = { tag = HAI value = 30 }
    relation = { tag = USA value = 200 access = yes }
  }
  nationalprovinces      = { 654 655 656 657 }
  ownedprovinces         = { 654 655 656 657 }
  controlledprovinces    = { 654 655 656 657 }
  # ROTW Minor Tech '36
  # Group D 1939 techs
  # ######################
  techapps               = { 2320 4010 4020 2150 2010 2020 2290 2300 2310 1010 1020 1190 1200 1110 2330 2400 2450 2460 2510 5010 5080 5090 5100 5190
			     5200 6010
			   }
  SpyInfo                = { country = "CUB" NumberOfSpies = 3 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 6
    free_market       = 8
    freedom           = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 33033 }
  headofgovernment       = { type = 9 id = 33041 }
  foreignminister        = { type = 9 id = 33051 }
  armamentminister       = { type = 9 id = 33065 }
  ministerofsecurity     = { type = 9 id = 33078 }
  ministerofintelligence = { type = 9 id = 33090 }
  chiefofstaff           = { type = 9 id = 33097 }
  chiefofarmy            = { type = 9 id = 33103 }
  chiefofnavy            = { type = 9 id = 33109 }
  chiefofair             = { type = 9 id = 33010 }
  dormant_ministers      = { 33002 33003 33050 33004 33064 33005 33006 33001 33049 }
  # Superior Firepower
  # Rather wild estimations
  landunit =
  { id       = { type = 30058 id = 40 }
    name     = "Ejercito de Cuba"
    location = 654
    division =
    { id       = { type = 30058 id = 4000 }
      name     = "1a Brigada de Ejercito"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30058 id = 4001 }
      name     = "1a Brigada de Caballería 'Floridita'"
      strength = 100
      type     = cavalry
      extra    = artillery
    }
  }
}
