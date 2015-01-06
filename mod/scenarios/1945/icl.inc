
##############################
# Country definition for ICL #
##############################

province =
{ id         = 1
  anti_air   = 1
  naval_base = { size = 7 current_size = 7 }
  air_base   = { size = 6 current_size = 6 }
  ic         = 2
}              # Reykjavik

#####################
# Country main data #
#####################

country =
{ tag                    = ICL
  manpower               = 5
  # Resource Reserves
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  capital                = 1
  SpyInfo                = { country = "ICL" NumberOfSpies = 1 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 8
    free_market       = 4
    freedom           = 2
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 3
  }
  nationalprovinces      = { 1 2 }
  ownedprovinces         = { 1 2 }
  controlledprovinces    = { 1 2 }
  # ROTW Minor Tech '36
  # Group E 1944 techs
  # ######################
  techapps               = { 1010  1020  1190  1200  14000 14010 14020 2010  2020  2030  2040  2150  2290  2300  2310  2320  2330  2400  2450  2460
			     2510  4010  4020  4120  4130  5050  5080  6010
			   }
  diplomacy =
  { relation = { tag = USA value = 200 }
    relation = { tag = DEN value = 100 }
    relation = { tag = FRA value = 100 }
    relation = { tag = ENG value = 150 }
  }
  headofstate            = { type = 9 id = 581001 }
  headofgovernment       = { type = 9 id = 581022 }
  foreignminister        = { type = 9 id = 581011 }
  armamentminister       = { type = 9 id = 581023 }
  ministerofsecurity     = { type = 9 id = 581024 }
  ministerofintelligence = { type = 9 id = 581025 }
  chiefofstaff           = { type = 9 id = 581015 }
  chiefofarmy            = { type = 9 id = 581016 }
  chiefofnavy            = { type = 9 id = 581017 }
  chiefofair             = { type = 9 id = 581018 }
}
