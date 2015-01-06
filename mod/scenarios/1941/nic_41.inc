
##############################
# Country definition for NIC #
##############################

country =
{ tag                    = NIC
  # Resource Reserves
  oil                    = 200
  metal                  = 200
  energy                 = 200
  rare_materials         = 200
  money                  = 100
  manpower               = 2
  capital                = 539
  SpyInfo                = { country = "NIC" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 5
    free_market       = 5
    freedom           = 5
    professional_army = 2
    defense_lobby     = 3
    interventionism   = 1
  }
  nationalprovinces      = { 539 }
  ownedprovinces         = { 539 }
  controlledprovinces    = { 539 }
  # Group D 1941 techs
  # ######################
  techapps               = { 4010  4020  4030  4120  4130  2010  2020  2030  2040  2050  2150  2290  2300  2310  2320  1010  1020  1030  1190  1200
			     1210  1110  2330  2400  2450  2460  2470  2510  9010  5010  5050  5080  5090  5100  5190  6010  6020  14000
			   }
  diplomacy =
  { relation = { tag = AST value = 200 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = -200 }
    relation = { tag = ITA value = -200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 100 }
    relation = { tag = YEM value = 150 }
    relation = { tag = HON value = 100 }
  }
  headofstate            = { type = 9 id = 48033 }
  headofgovernment       = { type = 9 id = 48040 }
  foreignminister        = { type = 9 id = 48044 }
  armamentminister       = { type = 9 id = 48053 }
  ministerofsecurity     = { type = 9 id = 48060 }
  ministerofintelligence = { type = 9 id = 48066 }
  chiefofstaff           = { type = 9 id = 48007 }
  chiefofarmy            = { type = 9 id = 48075 }
  chiefofnavy            = { type = 9 id = 48009 }
  chiefofair             = { type = 9 id = 48010 }
  dormant_ministers      = { 48001 48031 48002 48036 48038 48003 48043 48045 48049 48005 48006 48071 48050 48064 }
  landunit =
  { id       = { type = 10007 id = 1 }
    name     = "Ejercito de Nicaragua"
    location = 539
    division =
    { id       = { type = 10007 id = 2 }
      name     = "Guardia de Presidente"
      strength = 100
      type     = infantry
      model    = 0
      extra    = anti_air
    }
  }
}
