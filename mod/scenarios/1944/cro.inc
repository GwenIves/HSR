
##############################
# Country definition for CRO #
##############################

province =
{ id       = 382
  air_base = { size = 3 current_size = 3 }
}            # Zagreb

#####################
# Country main data #
#####################

country =
{ tag                    = CRO
  control                = GER
  manpower               = 27
  # Resource Reserves
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  capital                = 382
  free = {
	ic 		= 3
	energy 		= 20
	metal	 	= 10
	rare_materials	= 5
	}
  nationalprovinces      = { 455 382 383 }
  ownedprovinces         = { 455 382 383 }
  controlledprovinces    = { 455 382 383 }
  # Group D 1944 techs
  # ######################
  techapps               = { 4010  4020  4030  4120  4130  4140  2010  2020  2030  2040  2050  2070  2150  2160  2290  2300  2310  2320  2330  1010
			     1020  1030  1040  1190  1200  1210  1220  1110  1120  2330  2400  2410  2450  2460  2470  2510  2520  1310  9010  9020
			     5010  5050  5080  5090  5100  5190  5200  6010  6020  6040  14000
			   }
  SpyInfo                = { country = "CRO" NumberOfSpies = 4 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 4
    free_market       = 4
    freedom           = 3
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 30021 }
  headofgovernment       = { type = 9 id = 30024 }
  foreignminister        = { type = 9 id = 30028 }
  armamentminister       = { type = 9 id = 30033 }
  ministerofsecurity     = { type = 9 id = 30039 }
  ministerofintelligence = { type = 9 id = 30006 }
  chiefofstaff           = { type = 9 id = 30049 }
  chiefofarmy            = { type = 9 id = 30056 }
  chiefofnavy            = { type = 9 id = 30009 }
  chiefofair             = { type = 9 id = 30010 }
  landunit =
  { id       = { type = 10624 id = 1 }
    name     = "1st Corps"
    location = 382
    division =
    { experience = 25
      id         = { type = 10624 id = 2 }
      name       = "1. pjesacka divizija"
      strength   = 40
      type       = infantry
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10624 id = 3 }
      name       = "2. pjesacka divizija"
      strength   = 40
      type       = infantry
      model      = 1
    }
  }
  landunit =
  { id       = { type = 10624 id = 4 }
    name     = "2nd Corps"
    location = 383
    division =
    { experience = 25
      id         = { type = 10624 id = 5 }
      name       = "3. pjesacka divizija"
      strength   = 40
      type       = infantry
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10624 id = 6 }
      name       = "4. pjesacka divizija"
      strength   = 40
      type       = infantry
      model      = 1
    }
  }
  landunit =
  { id       = { type = 10624 id = 7 }
    name     = "3rd Corps"
    location = 455
    division =
    { experience = 25
      id         = { type = 10624 id = 8 }
      name       = "5. pjesacka divizija"
      strength   = 40
      type       = infantry
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10624 id = 9 }
      name       = "6. pjesacka divizija"
      strength   = 40
      type       = infantry
      model      = 1
    }
  }
}
