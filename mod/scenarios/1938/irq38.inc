
##############################
# Country definition for IRQ #
##############################

province =
{ id         = 1823
  air_base   = { size = 1 current_size = 1 }
  naval_base = { size = 1 current_size = 1 }
}              # Basrah
province =
{ id       = 1866
  air_base = { size = 2 current_size = 2 }
}            # Baghdad

#####################
# Country main data #
#####################

country =
{ tag                    = IRQ
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 1000
  supplies               = 500
  money                  = 10
  manpower               = 35
  capital                = 1866
  # Abadan claim
  diplomacy =
  { relation = { tag = AST value = 100 }
    relation = { tag = BHU value = 100 }
    relation = { tag = CAN value = 100 }
    relation = { tag = ENG value = 100 } # Nuri es-Sa'id was pro-British but constrained by Nationalists
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
  # GW infantry
  techapps               = { 1010 1190 2150 2290 4010 6010 }
  SpyInfo                = { country = "IRQ" NumberOfSpies = 4 }
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
  headofstate            = { type = 9 id = 91033 }
  headofgovernment       = { type = 9 id = 91047 }
  foreignminister        = { type = 9 id = 91062 }
  armamentminister       = { type = 9 id = 91089 }
  ministerofsecurity     = { type = 9 id = 91107 }
  ministerofintelligence = { type = 9 id = 91122 }
  chiefofstaff           = { type = 9 id = 91140 }
  chiefofarmy            = { type = 9 id = 91148 }
  chiefofnavy            = { type = 9 id = 91157 }
  chiefofair             = { type = 9 id = 91165 }
  dormant_ministers      = { 91001 91031 91033 91034 91002 91174 91047 91046 91003 91080 91004 91005 91006 91007 91144 91148 91009 91010 }
  landunit =
  { id       = { type = 28006 id = 3 }
    name     = "Royal Iraqi Army"
    location = 1866
    division =
    { id   = { type = 28006 id = 4 }
      name = "1st Iraqi Infantry Division"
      type = infantry
    }
    division =
    { id   = { type = 28006 id = 5 }
      name = "2nd Iraqi Infantry Division"
      type = infantry
    }
  }
  # Firepower
  airunit =
  { id       = { type = 28006 id = 1 }
    name     = "Iraqi Air Force"
    location = 1866
    base     = 1866
    division =
    { id       = { type = 28006 id = 2 }
      name     = "1. Group"
      strength = 30
      type     = interceptor
    }
  }
}
