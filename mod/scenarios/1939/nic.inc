
##############################
# Country definition for NIC #
##############################

country =
{ tag                    = NIC
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 539
  manpower               = 3
  diplomacy =
  { relation = { tag = HON value = 100 }
    relation = { tag = USA value = 100 }
  }
  nationalprovinces      = { 539 }
  ownedprovinces         = { 539 }
  controlledprovinces    = { 539 }
  # ROTW Minor Tech '36
  # Group D 1939 techs
  # ######################
  techapps               = { 2320 4010 4020 2150 2010 2020 2290 2300 2310 1010 1020 1190 1200 1110 2330 2400 2450 2460 2510 5010 5080 5090 5100 5190
			     6010
			   }
  SpyInfo                = { country = "NIC" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 5
    freedom           = 4
    free_market       = 7
    professional_army = 4
    defense_lobby     = 8
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 48033 }
  headofgovernment       = { type = 9 id = 48039 }
  foreignminister        = { type = 9 id = 48045 }
  armamentminister       = { type = 9 id = 48052 }
  ministerofsecurity     = { type = 9 id = 48059 }
  ministerofintelligence = { type = 9 id = 48065 }
  chiefofstaff           = { type = 9 id = 48007 }
  chiefofarmy            = { type = 9 id = 48074 }
  chiefofnavy            = { type = 9 id = 48009 }
  chiefofair             = { type = 9 id = 48010 }
  dormant_ministers      = { 48001 48031 48002 48036 48038 48003 48043 48049 48005 48006 48071 }
  # Wild estimation
  landunit =
  { id       = { type = 30056 id = 45 }
    name     = "Ejercito de Nicaragua"
    location = 539
    division =
    { id       = { type = 30056 id = 4500 }
      name     = "Guardia de Presidente"
      strength = 60
      type     = infantry
      extra    = anti_air
    }
  }
}
