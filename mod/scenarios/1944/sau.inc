
##############################
# Country definition for SAU #
##############################

province =
{ id       = 1807
  air_base = { size = 1 current_size = 1 }
}            # Riyadh

#####################
# Country main data #
#####################

country =
{ tag                    = SAU
  # Resource Reserves
  energy                 = 500
  metal                  = 500
  rare_materials         = 200
  oil                    = 500
  supplies               = 200
  capital                = 1807
  manpower               = 27
  SpyInfo                = { country = "SAU" NumberOfSpies = 5 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 3
  }
  nationalprovinces      = { 1821 1818 1809 1808 1807 1805 1804 }
  ownedprovinces         = { 1821 1818 1809 1808 1807 1805 1804 }
  controlledprovinces    = { 1821 1818 1809 1808 1807 1805 1804 }
  # ROTW Minor Tech '36
  # Group E 1944 techs
  # ######################
  techapps               = { 6210  2320  4010  4020  4120  4130  2010  2020  2030  2040  2150  2290  2300  2310  2400  2450  2460  2510  5050  5080
			     1010  1020  1190  1200  6300  2330  14000
			   }
  diplomacy =
  { relation = { tag = AFG value = 50 }
    # relation = { tag = AUS value = 50 }
    relation = { tag = ENG value = 100 }
    # relation = { tag = IRQ value = 125 }
    # relation = { tag = ITA value = -25 }
    relation = { tag = OMN value = 125 }
    relation = { tag = PER value = 100 }
    relation = { tag = TUR value = 50 }
    relation = { tag = YEM value = 125 }
  }
  headofstate            = { type = 9 id = 63001 }
  headofgovernment       = { type = 9 id = 63002 }
  foreignminister        = { type = 9 id = 63003 }
  armamentminister       = { type = 9 id = 63004 }
  ministerofsecurity     = { type = 9 id = 63005 }
  ministerofintelligence = { type = 9 id = 63006 }
  chiefofstaff           = { type = 9 id = 63007 }
  chiefofarmy            = { type = 9 id = 63008 }
  chiefofnavy            = { type = 9 id = 63009 }
  chiefofair             = { type = 9 id = 63010 }
  landunit =
  { location = 1807
    id       = { type = 11277 id = 1 }
    name     = "Royal Saudi Army"
    division =
    { id           = { type = 11277 id = 2 }
      name         = "1st Cavalry Division"
      type         = infantry
      strength     = 100
      organisation = 40
    }
    division =
    { id           = { type = 11277 id = 3 }
      name         = "2nd Cavalry Division"
      type         = infantry
      strength     = 100
      organisation = 40
    }
    division =
    { id           = { type = 11277 id = 4 }
      name         = "3rd Cavalry Division"
      type         = infantry
      strength     = 100
      organisation = 40
    }
  }
}
