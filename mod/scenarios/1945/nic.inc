
##############################
# Country definition for NIC #
##############################

province =
{ id         = 539
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
}              # Managua

#####################
# Country main data #
#####################

country =
{ tag                    = NIC
  # Resource Reserves
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  capital                = 539
  manpower               = 8
  diplomacy =
  { relation = { tag = HON value = 100 }
    relation = { tag = USA value = 100 }
  }
  nationalprovinces      = { 539 }
  ownedprovinces         = { 539 }
  controlledprovinces    = { 539 }
  # ROTW Minor Tech '36
  # Group D 1944 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1110  1120  1190  1200  1210  1220  1310  14000 14010 2010  2020  2030  2040  2050  2070  2150
			     2160  2290  2300  2310  2320  2330  2330  2400  2410  2450  2460  2470  2510  2520  4010  4020  4030  4120  4130  4140
			     5010  5050  5080  5090  5100  5190  5200  6010  6020  6040  9010  9020
			   }
  SpyInfo                = { country = "NIC" NumberOfSpies = 1 }
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
  dormant_ministers      = { 48001 48031 48002 48036 48038 48003 48043 48044 48045 48049 48005 48006 48071 48050 48064 48039 48051 48065 }
  headofstate            = { type = 9 id = 48033 }
  headofgovernment       = { type = 9 id = 48041 }
  foreignminister        = { type = 9 id = 48046 }
  armamentminister       = { type = 9 id = 48055 }
  ministerofsecurity     = { type = 9 id = 48061 }
  ministerofintelligence = { type = 9 id = 48067 }
  chiefofstaff           = { type = 9 id = 48007 }
  chiefofarmy            = { type = 9 id = 48076 }
  chiefofnavy            = { type = 9 id = 48079 }
  chiefofair             = { type = 9 id = 48082 }
  # Superior Firepower, Delay
  landunit =
  { id       = { type = 10255 id = 1 }
    name     = "Army of Nicaragua"
    location = 539
    division =
    { id       = { type = 10255 id = 2 }
      name     = "1a División de Infantería"
      strength = 60
      type     = infantry
      model    = 3
    }
  }
}
