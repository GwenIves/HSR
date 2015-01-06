
##############################
# Country definition for HON #
##############################

province =
{ id         = 760
  anti_air   = 1
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}              # Tegucigalpa

#####################
# Country main data #
#####################

country =
{ tag                    = HON
  manpower               = 10
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 760
  diplomacy =
  { relation = { tag = ENG value = 50 }
    relation = { tag = GUA value = 100 }
    relation = { tag = NIC value = 100 }
    relation = { tag = SAL value = 100 }
    relation = { tag = USA value = 100 }
  }
  nationalprovinces      = { 760 }
  ownedprovinces         = { 760 }
  controlledprovinces    = { 760 }
  # ROTW Minor Tech '36
  # Group D 1939 techs
  # ######################
  techapps               = { 4010 4020 2150 2010 2020 2290 2300 2310 2320 1010 1020 1190 1200 1110 2330 2400 2450 2460 2510 5010 5080 5090 5100 5190 6010
			   }
  SpyInfo                = { country = "HON" NumberOfSpies = 3 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 2
    free_market       = 6
    freedom           = 4
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 79001 }
  headofgovernment       = { type = 9 id = 79002 }
  foreignminister        = { type = 9 id = 79048 }
  armamentminister       = { type = 9 id = 79056 }
  ministerofsecurity     = { type = 9 id = 79072 }
  ministerofintelligence = { type = 9 id = 79079 }
  chiefofstaff           = { type = 9 id = 79007 }
  chiefofarmy            = { type = 9 id = 79094 }
  chiefofnavy            = { type = 9 id = 79009 }
  chiefofair             = { type = 9 id = 79102 }
  dormant_ministers      = { 79001 79032 79002 79003 79108 79046 79047 79004 79005 79006 79008 }
  # Superior Firepower
  # Wild estimation
  landunit =
  { id       = { type = 30065 id = 55 }
    name     = "Ejercito de Honduras"
    location = 760
    division =
    { id       = { type = 30065 id = 5500 }
      name     = "1a Brig. de Inf. 'Francesco Marazán'"
      strength = 60
      type     = infantry
      extra    = anti_air
    }
  }
}
