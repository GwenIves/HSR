
##############################
# Country definition for IRQ #
##############################

province =
{ id         = 1823
  anti_air   = 2
  naval_base = { size = 4 current_size = 4 }
}              # Basrah
province =
{ id       = 1866
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            # Baghdad

#####################
# Country main data #
#####################

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
  diplomacy =
  { relation = { tag = AST value = 100 }
    relation = { tag = BHU value = 100 }
    relation = { tag = CAN value = 100 }
    relation = { tag = ENG value = 100 }
    relation = { tag = FRA value = 100 }
    relation = { tag = GER value = 25 }
    relation = { tag = ITA value = 25 }
    relation = { tag = NEP value = 100 }
    relation = { tag = NZL value = 100 }
    relation = { tag = OMN value = 125 }
    relation = { tag = PER value = 125 }
    relation = { tag = SAF value = 100 }
    relation = { tag = SAU value = 125 }
    relation = { tag = USA value = 120 }
    relation = { tag = YEM value = 125 }
  }
  nationalprovinces      = { 1860 1864 1865 1866 1790 1824 1823 1806 1791 1825 }
  ownedprovinces         = { 1860 1864 1865 1866 1790 1824 1823 1806 1791 }
  controlledprovinces    = { 1860 1864 1865 1866 1790 1824 1823 1806 1791 }
  # ROTW Minor Tech '36
  # Group E 1939 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 6010 14000 }
  SpyInfo                = { country = "IRQ" NumberOfSpies = 3 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 6
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 91037 }
  headofgovernment       = { type = 9 id = 91048 }
  foreignminister        = { type = 9 id = 91064 }
  armamentminister       = { type = 9 id = 91090 }
  ministerofsecurity     = { type = 9 id = 91108 }
  ministerofintelligence = { type = 9 id = 91123 }
  chiefofstaff           = { type = 9 id = 91140 }
  chiefofarmy            = { type = 9 id = 91149 }
  chiefofnavy            = { type = 9 id = 91157 }
  chiefofair             = { type = 9 id = 91165 }
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
    }
    division =
    { id       = { type = 28006 id = 5 }
      name     = "2nd Iraqi Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 28006 id = 6 }
      name     = "3rd Iraqi Infantry Division"
      strength = 100
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 28006 id = 7 }
      name     = "4th Iraqi Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  # ###############
  # ###IRAQ OOB####
  # ###############
  airunit =
  { id       = { type = 28006 id = 1 }
    name     = "Royal Army Air Force"
    location = 1866
    base     = 1866
    division =
    { id       = { type = 28006 id = 2 }
      name     = "1. RIAF interceptor Group"
      strength = 30
      type     = interceptor
      model    = 0
    }
  }
}
