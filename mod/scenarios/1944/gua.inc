
##############################
# Country definition for GUA #
##############################

province =
{ id         = 757
  anti_air   = 1
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}              # Guatemala

#####################
# Country main data #
#####################

country =
{ tag                    = GUA
  manpower               = 7
  # Resource Reserves
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  capital                = 757
  SpyInfo                = { country = "GUA" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 1
    free_market       = 6
    freedom           = 4
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 4
  }
  nationalprovinces      = { 757 759 }
  ownedprovinces         = { 757 }
  controlledprovinces    = { 757 }
  # San Salvador
  # ROTW Minor Tech '36
  # Group D 1944 techs
  # ######################
  techapps               = { 4010  4020  4030  4120  4130  4140  2010  2020  2030  2040  2050  2070  2150  2160  2290  2300  2310  2320  2330  1010
			     1020  1030  1040  1190  1200  1210  1220  1110  1120  2330  2400  2410  2450  2460  2470  2510  2520  1310  9010  9020
			     5010  5050  5080  5090  5100  5190  5200  6010  6020  6040  14000
			   }
  diplomacy =
  { relation = { tag = HON value = 100 }
    relation = { tag = USA value = 125 }
    relation = { tag = ENG value = 50 }
  }
  dormant_ministers      = { 46003 46004 46005 46007 46008 46047 46054 }
  headofstate            = { type = 9 id = 46026 }
  headofgovernment       = { type = 9 id = 46034 }
  foreignminister        = { type = 9 id = 46041 }
  armamentminister       = { type = 9 id = 46049 }
  ministerofsecurity     = { type = 9 id = 46056 }
  ministerofintelligence = { type = 9 id = 46062 }
  chiefofstaff           = { type = 9 id = 46066 }
  chiefofarmy            = { type = 9 id = 46071 }
  chiefofnavy            = { type = 9 id = 46009 }
  chiefofair             = { type = 9 id = 46010 }
  landunit =
  { id       = { type = 10252 id = 1 }
    name     = "Army of Guatemala"
    location = 757
    division =
    { id       = { type = 10252 id = 2 }
      name     = "1a División de Infantería"
      strength = 60
      type     = infantry
      model    = 1
    }
  }
}
