
##############################
# Country definition for YEM #
##############################

province =
{ id         = 1812
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 1 current_size = 1 }
}              # Sanaa

#####################
# Country main data #
#####################

country =
{ tag                    = YEM
  puppet                 = ENG
  control                = ENG
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  manpower               = 5
  capital                = 1812
  SpyInfo                = { country = "YEM" NumberOfSpies = 1 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 4
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 1
  }
  nationalprovinces      = { 1812 1813 1814 }
  ownedprovinces         = { 1812 }
  controlledprovinces    = { 1812 }
  # ROTW Minor Tech '36
  # Group E 1944 techs
  # ######################
  techapps               = { 6210  2320  4010  4020  4120  4130  2010  2020  2030  2040  2150  2290  2300  2310  2400  2450  2460  2510  5050  5080
			     1010  1020  1190  1200  6300  2330  14000
			   }
  diplomacy =
  { relation = { tag = AST value = 150 }
    relation = { tag = BHU value = 150 }
    relation = { tag = CAN value = 150 }
    relation = { tag = ENG value = 150 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = -200 }
    # relation = { tag = IRQ value = 125 }
    # relation = { tag = ITA value = -200 }
    relation = { tag = NEP value = 150 }
    relation = { tag = NZL value = 150 }
    relation = { tag = OMN value = 150 }
    # relation = { tag = POL value = 200 }
    relation = { tag = SAF value = 150 }
    relation = { tag = SAU value = 125 }
    relation = { tag = TUR value = 35 }
    relation = { tag = USA value = 100 }
  }
  headofstate            = { type = 9 id = 93001 }
  headofgovernment       = { type = 9 id = 93002 }
  foreignminister        = { type = 9 id = 93011 }
  armamentminister       = { type = 9 id = 93015 }
  ministerofsecurity     = { type = 9 id = 93017 }
  ministerofintelligence = { type = 9 id = 93019 }
  chiefofstaff           = { type = 9 id = 93020 }
  chiefofarmy            = { type = 9 id = 93023 }
  chiefofnavy            = { type = 9 id = 93025 }
  chiefofair             = { type = 9 id = 93026 }
}
