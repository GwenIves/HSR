
##############################
# Country definition for IRQ #
##############################

province =
{ id         = 1823
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 3 current_size = 3 }
}              # Basrah
province = { id = 1864 anti_air = 1 } # Mosul
province =
{ id       = 1866
  air_base = { size = 3 current_size = 3 }
  anti_air = 3
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
  manpower               = 35
  capital                = 1866
  SpyInfo                = { country = "IRQ" NumberOfSpies = 3 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 4
    free_market       = 6
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 6
  }
  ownedprovinces         = { 1860 1864 1865 1866 1790 1824 1823 1806 1791 }
  controlledprovinces    = { 1860 1864 1865 1866 1790 1824 1823 1806 1791 }
  # ROTW Minor Tech '36
  # Group E 1944 techs
  # ######################
  techapps               = { 4010  4020  4120  4130  2010  2020  2030  2040  2150  2290  2300  2310  2400  2450  2460  2510  5050  5080  1010  1020
			     1190  1200  6300  14000 14010
			   }
  nationalprovinces      = { 1860 1864 1865 1866 1790 1824 1823 1806 1791 1825 }
  dormant_ministers      = { 91001 91002 91003 91004 91005 91006 91007 91009 91010 91031 91033 91034 91044 91046 91047 91048 91051 91052 91054 91076 91078 91080 91086 91090
			     91113 91114 91122 91129 91144 91148 91160 91172 91174 91175 91176
			   }
  diplomacy = {
	relation = { tag = PER value = 125 }
	}
  headofstate            = { type = 9 id = 91037 }
  headofgovernment       = { type = 9 id = 91049 }
  foreignminister        = { type = 9 id = 91072 }
  armamentminister       = { type = 9 id = 91094 }
  ministerofsecurity     = { type = 9 id = 91110 }
  ministerofintelligence = { type = 9 id = 91126 }
  chiefofstaff           = { type = 9 id = 91140 }
  chiefofarmy            = { type = 9 id = 91151 }
  chiefofnavy            = { type = 9 id = 91157 }
  chiefofair             = { type = 9 id = 91168 }
  # ########################
  # ########################
  landunit =
  { id       = { type = 11272 id = 1 }
    name     = "Royal Iraqi Army"
    location = 1866
    division =
    { id       = { type = 11272 id = 2 }
      name     = "1st Infantry Division"
      strength = 100
      type     = infantry
      model    = 1
    }
  }
}
