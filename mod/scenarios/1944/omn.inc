
##############################
# Country definition for OMN #
##############################

country =
{ tag                    = OMN
  puppet                 = ENG
  control                = ENG
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 200
  supplies               = 200
  capital                = 1819
  manpower               = 3
  SpyInfo                = { country = "OMN" NumberOfSpies = 1 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 5
    professional_army = 3
    defense_lobby     = 4
    interventionism   = 3
  }
  nationalprovinces      = { 1819 }
  ownedprovinces         = { 1819 }
  controlledprovinces    = { 1819 }
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
    # relation = { tag = POL value = 200 }
    relation = { tag = SAF value = 150 }
    relation = { tag = SAU value = 125 }
    relation = { tag = TUR value = 35 }
    relation = { tag = USA value = 100 }
    relation = { tag = YEM value = 150 }
  }
  headofstate            = { type = 9 id = 92001 }
  headofgovernment       = { type = 9 id = 92002 }
  foreignminister        = { type = 9 id = 92012 }
  armamentminister       = { type = 9 id = 92014 }
  ministerofsecurity     = { type = 9 id = 92016 }
  ministerofintelligence = { type = 9 id = 92018 }
  chiefofstaff           = { type = 9 id = 92020 }
  chiefofarmy            = { type = 9 id = 92023 }
  chiefofnavy            = { type = 9 id = 92025 }
  chiefofair             = { type = 9 id = 92027 }
}
