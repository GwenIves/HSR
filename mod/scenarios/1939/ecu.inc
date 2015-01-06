
##############################
# Country definition for ECU #
##############################

country =
{ tag                    = ECU
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 815
  manpower               = 8
  diplomacy =
  { relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = -20 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 20 }
    relation = { tag = PAR value = 25 }
    relation = { tag = PRU value = -30 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 20 }
  }
  nationalprovinces      = { 814 815 817 818 }
  ownedprovinces         = { 814 815 817 818 }
  controlledprovinces    = { 814 815 817 818 }
  # ROTW Minor Tech '36
  # Group D 1939 techs
  # ######################
  techapps               = { 2320 4010 4020 2150 2010 2020 2290 2300 2310 1010 1020 1190 1200 1110 2330 2400 2450 2460 2510 5010 5080 5090 5100 5190
			     6010
			   }
  SpyInfo                = { country = "ECU" NumberOfSpies = 4 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 3
    free_market       = 8
    freedom           = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 40036 }
  headofgovernment       = { type = 9 id = 40054 }
  foreignminister        = { type = 9 id = 40072 }
  armamentminister       = { type = 9 id = 40089 }
  ministerofsecurity     = { type = 9 id = 40103 }
  ministerofintelligence = { type = 9 id = 40117 }
  chiefofstaff           = { type = 9 id = 40130 }
  chiefofarmy            = { type = 9 id = 40165 }
  chiefofnavy            = { type = 9 id = 40009 }
  chiefofair             = { type = 9 id = 40010 }
  dormant_ministers      = { 40001 40043 40044 40002 40061 40062 40003 40170 40081 40004 40088 40005 40110 40006 40007 40129 40008 }
  # Very rough estimation:
  landunit =
  { id       = { type = 30054 id = 50 }
    name     = "Ejercito de Ecuador"
    location = 815
    division =
    { id       = { type = 30054 id = 5000 }
      name     = "1a Brigada de Infantería"
      strength = 100
      type     = infantry
      extra    = anti_air
    }
  }
}
