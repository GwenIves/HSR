
##############################
# Country definition for NEP #
##############################

country =
{ tag                    = NEP
  puppet                 = ENG
  control                = ENG
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 200
  supplies               = 200
  capital                = 1473
  manpower               = 7
  diplomacy =
  { relation = { tag = AST value = 200 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 100 }
    relation = { tag = YEM value = 150 }
  }
  nationalprovinces      = { 1473 }
  ownedprovinces         = { 1473 }
  controlledprovinces    = { 1473 }
  # ROTW Minor Tech '36
  # Group E 1944 techs
  # ######################
  techapps               = { 1010  1020  1190  1200  14000 14010 2010  2020  2030  2040  2150  2290  2300  2310  2320  2330  2400  2450  2460  2510
			     4010  4020  4120  4130  5050  5080  6210  6300
			   }
  SpyInfo                = { country = "NEP" NumberOfSpies = 1 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 6
    free_market       = 5
    professional_army = 9
    defense_lobby     = 2
    interventionism   = 2
  }
  dormant_ministers      = { 75003 75004 75021 75007 75008 75025 75005 75006 }
  headofstate            = { type = 9 id = 75001 }
  headofgovernment       = { type = 9 id = 75012 }
  foreignminister        = { type = 9 id = 75020 }
  armamentminister       = { type = 9 id = 75029 }
  ministerofsecurity     = { type = 9 id = 75037 }
  ministerofintelligence = { type = 9 id = 75043 }
  chiefofstaff           = { type = 9 id = 75048 }
  chiefofarmy            = { type = 9 id = 75053 }
  chiefofnavy            = { type = 9 id = 75054 }
  chiefofair             = { type = 9 id = 75056 }
  landunit =
  { location = 1473
    name     = "Nepal Army"
    id       = { type = 11494 id = 1 }
    division =
    { id    = { type = 11494 id = 2 }
      name  = "Regulars"
      type  = infantry
      model = 3
    }
    division =
    { id    = { type = 11494 id = 3 }
      name  = "Militia"
      type  = militia
      model = 1
    }
  }
}
