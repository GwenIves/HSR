
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
  manpower               = 25
  diplomacy =
  { relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = -20 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 20 }
    relation = { tag = PAR value = 25 }
    relation = { tag = PRU value = -50 }
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
  techapps               = { 4010 4020 2150 2010 2020 2290 2300 2310 2320 1010 1020 1190 1200 1110 2330 2400 2450 2460 2510 5010 5080 5090 5100 5190 6010
			   }
  SpyInfo                = { country = "ECU" NumberOfSpies = 5 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 1
    free_market       = 8
    freedom           = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 40044 }
  headofgovernment       = { type = 9 id = 40062 }
  foreignminister        = { type = 9 id = 40081 }
  armamentminister       = { type = 9 id = 40093 }
  ministerofsecurity     = { type = 9 id = 40105 }
  ministerofintelligence = { type = 9 id = 40123 }
  chiefofstaff           = { type = 9 id = 40007 }
  chiefofarmy            = { type = 9 id = 40008 }
  chiefofnavy            = { type = 9 id = 40156 }
  chiefofair             = { type = 9 id = 40163 }
  dormant_ministers      = { 40001 40002 40003 40004 40005 40006 40007 40008 40043 40044 40061 40062 40081 40088 40110 40129 40170 }
  # Superior Firepower
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
