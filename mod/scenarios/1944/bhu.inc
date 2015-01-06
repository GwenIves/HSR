
##############################
# Country definition for BHU #
##############################

country =
{ tag                    = BHU
  manpower               = 5
  control                = ENG
  puppet                 = ENG
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 200
  supplies               = 200
  capital                = 1455
  SpyInfo                = { country = "BHU" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    free_market       = 8
    freedom           = 9
    professional_army = 1
    defense_lobby     = 1
    interventionism   = 1
  }
  nationalprovinces      = { 1455 }
  ownedprovinces         = { 1455 }
  controlledprovinces    = { 1455 }
  # Group E 1944 techs
  # ######################
  techapps               = { 6210  2320  4010  4020  4120  4130  2010  2020  2030  2040  2150  2290  2300  2310  2400  2450  2460  2510  5050  5080
			     1010  1020  1190  1200  6300  2330  14000
			   }
  diplomacy =
  { relation = { tag = AST value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = -200 }
    # relation = { tag = IRQ value = 100 }
    # relation = { tag = ITA value = -200 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    # relation = { tag = POL value = 200 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 100 }
    relation = { tag = YEM value = 150 }
  }
  headofstate            = { type = 9 id = 74001 }
  headofgovernment       = { type = 9 id = 74002 }
  foreignminister        = { type = 9 id = 74015 }
  armamentminister       = { type = 9 id = 74028 }
  ministerofsecurity     = { type = 9 id = 74035 }
  ministerofintelligence = { type = 9 id = 74041 }
  chiefofstaff           = { type = 9 id = 74047 }
  chiefofarmy            = { type = 9 id = 74050 }
  chiefofnavy            = { type = 9 id = 74053 }
  chiefofair             = { type = 9 id = 74054 }
  landunit =
  { location = 1455
    id       = { type = 11581 id = 1 }
    name     = "Royal Army"
    division =
    { id       = { type = 11581 id = 2 }
      name     = "Household Division"
      type     = infantry
      strength = 80
      model    = 0
    }
    division =
    { id       = { type = 11581 id = 3 }
      name     = "Royal Division"
      type     = infantry
      strength = 80
      model    = 0
    }
  }
}
