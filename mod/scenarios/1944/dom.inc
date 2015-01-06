
##############################
# Country definition for DOM #
##############################

province =
{ id         = 893
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
}              # Santiago

#####################
# Country main data #
#####################

country =
{ tag                    = DOM
  # Resource Reserves
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  manpower               = 2
  capital                = 894
  SpyInfo                = { country = "DOM" NumberOfSpies = 1 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    free_market       = 8
    freedom           = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 1
  }
  nationalprovinces      = { 893 894 }
  ownedprovinces         = { 893 894 }
  controlledprovinces    = { 893 894 }
  # ROTW Minor Tech '36
  # Group D 1944 techs
  # ######################
  techapps               = { 4010  4020  4030  4120  4130  4140  2010  2020  2030  2040  2050  2070  2150  2160  2290  2300  2310  2320  2330  1010
			     1020  1030  1040  1190  1200  1210  1220  1110  1120  2330  2400  2410  2450  2460  2470  2510  2520  1310  9010  9020
			     5010  5050  5080  5090  5100  5190  5200  6010  6020  6040  14000
			   }
  diplomacy =
  { relation = { tag = CUB value = 50 }
    relation = { tag = HAI value = -30 }
    relation = { tag = USA value = 125 }
  }
  dormant_ministers      = { 49002 49003 49047 49031 49038 49004 49064 49032 49036 49040 49046 49056 49073 49006 49095 }
  headofstate            = { type = 9 id = 49001 }
  headofgovernment       = { type = 9 id = 49039 }
  foreignminister        = { type = 9 id = 49048 }
  armamentminister       = { type = 9 id = 49057 }
  ministerofsecurity     = { type = 9 id = 49005 }
  ministerofintelligence = { type = 9 id = 49074 }
  chiefofstaff           = { type = 9 id = 49007 }
  chiefofarmy            = { type = 9 id = 49008 }
  chiefofnavy            = { type = 9 id = 49088 }
  chiefofair             = { type = 9 id = 49092 }
  landunit =
  { id       = { type = 10262 id = 1 }
    name     = "1st Army"
    location = 894
    division =
    { id       = { type = 10262 id = 2 }
      name     = "1a División de Infantería"
      strength = 50
      type     = infantry
      model    = 1
    }
  }
}
