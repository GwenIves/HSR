
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
  # Resource Reserves
  oil                    = 200
  metal                  = 200
  energy                 = 200
  rare_materials         = 200
  manpower               = 4
  money                  = 100
  capital                = 757
  SpyInfo                = { country = "GUA" NumberOfSpies = 2 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 1
    free_market       = 5
    freedom           = 5
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 5
  }
  nationalprovinces      = { 757 }
  ownedprovinces         = { 757 }
  controlledprovinces    = { 757 }
  # Group D 1941 techs
  # ######################
  techapps               = { 4010  4020  4030  4120  4130  2010  2020  2030  2040  2050  2150  2290  2300  2310  2320  1010  1020  1030  1190  1200
			     1210  1110  2330  2400  2450  2460  2470  2510  9010  5010  5050  5080  5090  5100  5190  6010  6020  14000
			   }
  diplomacy =
  { relation = { tag = HON value = 100 }
    relation = { tag = USA value = 125 }
    relation = { tag = ENG value = 50 }
  }
  headofstate            = { type = 9 id = 46001 }
  headofgovernment       = { type = 9 id = 46002 }
  foreignminister        = { type = 9 id = 46041 }
  armamentminister       = { type = 9 id = 46047 }
  ministerofsecurity     = { type = 9 id = 46054 }
  ministerofintelligence = { type = 9 id = 46061 }
  chiefofstaff           = { type = 9 id = 46066 }
  chiefofarmy            = { type = 9 id = 46071 }
  chiefofnavy            = { type = 9 id = 46009 }
  chiefofair             = { type = 9 id = 46010 }
  dormant_ministers      = { 46003 46004 46005 46007 46008 }
  landunit =
  { id       = { type = 10008 id = 1 }
    name     = "Ejercito de Guatemala"
    location = 757
    division =
    { id       = { type = 10008 id = 2 }
      name     = "1a Brig. de Infant. 'Adolfo V. Hall'"
      strength = 100
      type     = infantry
      model    = 1
    }
  }
}
