
##############################
# Country definition for PAN #
##############################

country =
{ tag                    = PAN
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 888
  manpower               = 5
  diplomacy =
  { relation = { tag = USA value = 175 }
    relation = { tag = COL value = 50 }
  }
  nationalprovinces      = { 889 888 }
  ownedprovinces         = { 888 }
  controlledprovinces    = { 888 }
  # ROTW Minor Tech '36
  # Group D 1939 techs
  # ######################
  techapps               = { 4010 4020 2150 2010 2020 2290 2300 2310 2320 1010 1020 1190 1200 1110 2330 2400 2450 2460 2510 5010 5080 5090 5100 5190 6010
			   }
  SpyInfo                = { country = "PAN" NumberOfSpies = 3 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 4
    freedom           = 4
    free_market       = 4
    professional_army = 3
    defense_lobby     = 4
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 95031 }
  headofgovernment       = { type = 9 id = 95036 }
  foreignminister        = { type = 9 id = 95044 }
  armamentminister       = { type = 9 id = 95052 }
  ministerofsecurity     = { type = 9 id = 95058 }
  ministerofintelligence = { type = 9 id = 95063 }
  chiefofstaff           = { type = 9 id = 95068 }
  chiefofarmy            = { type = 9 id = 95073 }
  chiefofnavy            = { type = 9 id = 95009 }
  chiefofair             = { type = 9 id = 95082 }
  dormant_ministers      = { 95001 95002 95041 }
  # Superior Firepower
  # Wild estimation
  landunit =
  { id       = { type = 30056 id = 50 }
    name     = "Ejercito de Panama"
    location = 888
    division =
    { id       = { type = 30056 id = 5000 }
      name     = "1a Brigada de Infantería"
      strength = 60
      type     = infantry
      extra    = anti_tank
    }
  }
}
