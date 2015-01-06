
##############################
# Country definition for SIK #
##############################

province = { id = 1421 province_revoltrisk = 10 } # Altay
province = { id = 1430 province_revoltrisk = 10 } # Kashgar
province = { id = 1431 province_revoltrisk = 10 } # Aksu
province = { id = 1432 province_revoltrisk = 10 } # Gulja
province = { id = 1433 province_revoltrisk = 10 } # Urumqi
province = { id = 1435 province_revoltrisk = 10 } # Qumul
province = { id = 1445 province_revoltrisk = 10 } # Korla
province = { id = 1446 province_revoltrisk = 10 } # Taklimakan Desert
province = { id = 1447 province_revoltrisk = 10 } # Hotan

#####################
# Country main data #
#####################

country =
{ tag                    = SIK
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 100
  capital                = 1433
  manpower               = 665
  dissent                = 45
  diplomacy =
  { relation = { tag = CHI value = -125 }
    relation = { tag = CHC value = -125 }
    relation = { tag = JAP value = -170 }
    relation = { tag = MAN value = -175 }
    relation = { tag = MEN value = -175 }
    relation = { tag = MON value = 100 }
    relation = { tag = SOV value = 150 access = yes }
    relation = { tag = TAN value = 125 }
  }
  nationalprovinces      = { 1421 1432 1433 1435 1445 1446 1447 1430 1431 }
  ownedprovinces         = { 1421 1432 1433 1435 1445 1446 1447 1430 1431 }
  controlledprovinces    = { 1421 1432 1433 1435 1445 1446 1447 1430 1431 }
  # ROTW Minor Tech '36
  # Group E 1939 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 6010 }
  SpyInfo                = { country = "SIK" NumberOfSpies = 3 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 72001 }
  headofgovernment       = { type = 9 id = 72002 }
  foreignminister        = { type = 9 id = 72031 }
  armamentminister       = { type = 9 id = 72032 }
  ministerofsecurity     = { type = 9 id = 72035 }
  ministerofintelligence = { type = 9 id = 72036 }
  chiefofstaff           = { type = 9 id = 72007 }
  chiefofarmy            = { type = 9 id = 72008 }
  chiefofnavy            = { type = 9 id = 72009 }
  chiefofair             = { type = 9 id = 72010 }
  # Firepower
  landunit =
  { location = 1433
    name     = "Xin'jiang J・tuan 1"
    id       = { type = 11514 id = 1 }
    division =
    { id   = { type = 11514 id = 2 }
      name = "7 Xin'jiang L・"
      type = militia
    }
    division =
    { id   = { type = 11514 id = 3 }
      name = "8 Xin'jiang L・"
      type = militia
    }
    division =
    { id   = { type = 11514 id = 4 }
      name = "9 Xin'jiang L・"
      type = militia
    }
  }
  landunit =
  { location = 1433
    name     = "Xin'jiang J・tuan 2"
    id       = { type = 11514 id = 5 }
    division =
    { id   = { type = 11514 id = 6 }
      name = "10 Xin'jiang L・"
      type = militia
    }
    division =
    { id   = { type = 11514 id = 7 }
      name = "11 Xin'jiang L・"
      type = militia
    }
    division =
    { id   = { type = 11514 id = 8 }
      name = "12 Xin'jiang L・"
      type = militia
    }
  }
}
