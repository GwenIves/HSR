
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
  manpower               = 20
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 757
  # San Salvador
  diplomacy =
  { relation = { tag = ENG value = 50 }
    relation = { tag = HON value = 100 }
    relation = { tag = USA value = 125 }
  }
  nationalprovinces      = { 757 759 }
  ownedprovinces         = { 757 }
  controlledprovinces    = { 757 }
  # ROTW Minor Tech '36
  # Group D 1939 techs
  # ######################
  techapps               = { 4010 4020 2150 2010 2020 2290 2300 2310 2320 1010 1020 1190 1200 1110 2330 2400 2450 2460 2510 5010 5080 5090 5100 5190 6010
			   }
  SpyInfo                = { country = "GUA" NumberOfSpies = 3 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 4
    free_market       = 6
    freedom           = 4
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 46001 }
  headofgovernment       = { type = 9 id = 46031 }
  foreignminister        = { type = 9 id = 46041 }
  armamentminister       = { type = 9 id = 46047 }
  ministerofsecurity     = { type = 9 id = 46054 }
  ministerofintelligence = { type = 9 id = 46061 }
  chiefofstaff           = { type = 9 id = 46066 }
  chiefofarmy            = { type = 9 id = 46071 }
  chiefofnavy            = { type = 9 id = 46009 }
  chiefofair             = { type = 9 id = 46010 }
  dormant_ministers      = { 46003 46004 46005 46007 46008 }
  # Superior Firepower
  # Wild estimation
  landunit =
  { id       = { type = 30056 id = 65 }
    name     = "Ejercito de Guatemala"
    location = 757
    division =
    { id       = { type = 30056 id = 6500 }
      name     = "1a Brig. de Infant. 'Adolfo V. Hall'"
      strength = 100
      type     = infantry
      extra    = anti_air
    }
  }
}
