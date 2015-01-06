#
# by Aregorn for HSR2_DD
#
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
  manpower               = 5
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 760

	research_mod = 1.15
	extra_tc = 5
	peacetime_ic_mod = 0.75

  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    free_market       = 6
    freedom           = 4
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 4
  }

  SpyInfo                = { country = "HON" NumberOfSpies = 1 }

  nationalprovinces      = { 760 }
  ownedprovinces         = { 760 }
  controlledprovinces    = { 760 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 6010 }
  diplomacy =
  { relation = { tag = ENG value = 50 }
    relation = { tag = GUA value = 100 }
    relation = { tag = NIC value = 100 }
    relation = { tag = SAL value = 100 }
    relation = { tag = USA value = 100 }
  }
  headofstate            = { type = 9 id = 79001 }
  headofgovernment       = { type = 9 id = 79002 }
  foreignminister        = { type = 9 id = 79003 }
  armamentminister       = { type = 9 id = 79004 }
  ministerofsecurity     = { type = 9 id = 79005 }
  ministerofintelligence = { type = 9 id = 79006 }
  chiefofstaff           = { type = 9 id = 79007 }
  chiefofarmy            = { type = 9 id = 79008 }
  chiefofnavy            = { type = 9 id = 79009 }
  chiefofair             = { type = 9 id = 79010 }
  landunit =
  { id       = { type = 19500 id = 55 }
    name     = "Ejercito de Honduras"
    location = 760
    division =
    { id       = { type = 19500 id = 5500 }
      name     = "1a Brig. de Inf. 'Francesco Marazán'"
      strength = 60
      type     = infantry
      extra    = anti_air
    }
  }
}
