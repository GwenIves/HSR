
##############################
# Country definition for IRQ #
##############################

country =
{ tag                    = IRQ
  puppet                 = ENG
  control                = ENG
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 1000
  supplies               = 500
  money                  = 10
  manpower               = 35
  capital                = 1866
  SpyInfo                = { country = "IRQ" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 4
    freedom           = 4
    free_market       = 6
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 6
  }
  nationalprovinces      = { 1860 1864 1865 1866 1790 1824 1823 1806 1791 1825 }
  ownedprovinces         = { 1860 1864 1865 1866 1790 1824 1823 1806 1791 }
  controlledprovinces    = { 1860 1864 1865 1866 1790 1824 1823 1806 1791 }
  # ROTW Minor Tech '36
  # Group E 1939 techs
  # ######################
  # GW fighter
  techapps               = { 1010 1190 14000 14010 2150 2290 4010 6010 2010 2020 2030 2040 2300 2400 2450 2460 4020 4120 4130 5050 }
  diplomacy =
  { relation = { tag = ENG value = 100 }
    relation = { tag = FRA value = 100 }
    relation = { tag = ITA value = 25 }
    relation = { tag = PER value = 125 }
    relation = { tag = USA value = 120 }
  }
  headofstate            = { type = 9 id = 91037 }
  headofgovernment       = { type = 9 id = 91049 }
  foreignminister        = { type = 9 id = 91072 }
  armamentminister       = { type = 9 id = 91094 }
  ministerofsecurity     = { type = 9 id = 91110 }
  ministerofintelligence = { type = 9 id = 91127 }
  chiefofstaff           = { type = 9 id = 91138 }
  chiefofarmy            = { type = 9 id = 91152 }
  chiefofnavy            = { type = 9 id = 91157 }
  chiefofair             = { type = 9 id = 91168 }
  dormant_ministers      = { 91001 91031 91033 91034 91002 91174 91047 91046 91003 91080 91004 91005 91006 91007 91144 91148 91009 91010 }
  # ########################
  # ########################
  landunit =
  { id       = { type = 28006 id = 3 }
    name     = "Royal Iraqi Army"
    location = 1864
    division =
    { id       = { type = 28006 id = 4 }
      name     = "1st Iraqi Infantry Division"
      strength = 100
      type     = infantry
      model    = 3
    }
    division =
    { id       = { type = 28006 id = 5 }
      name     = "2nd Iraqi Infantry Division"
      strength = 100
      type     = infantry
      model    = 3
    }
    division =
    { id            = { type = 28006 id = 6 }
      name          = "3rd Iraqi Infantry Division"
      strength      = 100
      type          = infantry
      extra         = artillery
      model         = 3
      brigade_model = 0
    }
    division =
    { id       = { type = 28006 id = 7 }
      name     = "4th Iraqi Infantry Division"
      strength = 100
      type     = infantry
      model    = 3
    }
  }
}
