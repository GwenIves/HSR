# ASD 26-Jan-07 Remove Kuwait

province =
{ id         = 1804
  anti_air   = 2
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
}              # Medina

#####################
# Country main data #
#####################

country =
{ tag                    = SAU
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 100
  capital                = 1807
  manpower               = 27
  diplomacy =
  { relation = { tag = AFG value = 50 }
    # relation = { tag = AUS value = 50 }
    relation = { tag = ENG value = 100 }
    relation = { tag = IRQ value = 125 }
    relation = { tag = ITA value = -25 }
    relation = { tag = OMN value = 125 }
    relation = { tag = PER value = 100 }
    relation = { tag = TUR value = 50 }
    relation = { tag = YEM value = 125 }
  }
  nationalprovinces      = { 1821 1818 1809 1808 1807 1805 1804 }
  ownedprovinces         = { 1821 1818 1809 1808 1807 1805 1804 }
  controlledprovinces    = { 1821 1818 1809 1808 1807 1805 1804 }
  # ROTW Minor Tech '36
  # Group E 1939 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 6010 }
  SpyInfo                = { country = "SAU" NumberOfSpies = 4 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 5
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 63001 }
  headofgovernment       = { type = 9 id = 63002 }
  foreignminister        = { type = 9 id = 63003 }
  armamentminister       = { type = 9 id = 63036 }
  ministerofsecurity     = { type = 9 id = 63041 }
  ministerofintelligence = { type = 9 id = 63046 }
  chiefofstaff           = { type = 9 id = 63052 }
  chiefofarmy            = { type = 9 id = 63055 }
  chiefofnavy            = { type = 9 id = 63059 }
  chiefofair             = { type = 9 id = 63062 }
  # Firepower
  landunit =
  { location = 1807
    id       = { type = 30024 id = 1 }
    name     = "Royal Saudi Army"
    division =
    { id       = { type = 30024 id = 2 }
      name     = "1. Royal Saudi Inf.Div."
      type     = infantry
      strength = 100
      extra    = anti_air
    }
    division =
    { id       = { type = 30024 id = 3 }
      name     = "Royal Lifeguard"
      type     = infantry
      strength = 100
    }
    division =
    { id       = { type = 30024 id = 4 }
      name     = "Royal Saudi Cav. 'Medina'"
      type     = cavalry
      strength = 100
    }
  }
}
