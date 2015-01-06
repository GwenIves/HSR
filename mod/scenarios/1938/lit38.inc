
province =
{ id       = 207
  anti_air = 1
  air_base = { size = 1 current_size = 1 }
}            # Kaunas


country =
{ tag                    = LIT
  capital                = 207
  manpower               = 28
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  diplomacy =
  { relation = { tag = ENG value = 65 }
    relation =
    { tag        = EST
      value      = 120
      guaranteed = { day = 12 month = september year = 1934 }
    }
    relation = { tag = FIN value = 80 }
    relation = { tag = FRA value = 65 }
    relation = { tag = GER value = 10 }
    relation =
    { tag        = LAT
      value      = 120
      guaranteed = { day = 12 month = september year = 1934 }
    }
    relation = { tag = POL value = 10 }
    relation = { tag = SOV value = -30 }
  }
  nationalprovinces      = { 206 207 511 208 209 577 }
  ownedprovinces         = { 206 207 511 577 }
  controlledprovinces    = { 206 207 511 577 }
  techapps               = { 4010 4020 2150 2010 2020 2290 2300 2310 2320 1010 1020 1190 1200 1110 2330 2400 2450 2460 2510 5010 5020 5080 5090 5100 5190
			     5200 6010
			   }
  SpyInfo                = { country = "LIT" NumberOfSpies = 4 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 1
    freedom           = 5
    free_market       = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 28001 }
  headofgovernment       = { type = 9 id = 28044 }
  foreignminister        = { type = 9 id = 28058 }
  armamentminister       = { type = 9 id = 28072 }
  ministerofsecurity     = { type = 9 id = 28085 }
  ministerofintelligence = { type = 9 id = 28101 }
  chiefofstaff           = { type = 9 id = 28115 }
  chiefofarmy            = { type = 9 id = 28124 }
  chiefofnavy            = { type = 9 id = 28009 }
  chiefofair             = { type = 9 id = 28010 }
  dormant_ministers      = { 28002 28101 }

  landunit =
  { id       = { type = 30021 id = 1 }
    location = 207
    name     = "1. Lietuvas Kariuomenes Korpusas"
    Division =
    { id           = { type = 30021 id = 2 }
      name         = "I Pestininkai Brigata"
      type         = infantry
      strength     = 100
      organisation = 30
    }
    Division =
    { id           = { type = 30021 id = 3 }
      name         = "II Pestininkai Brigata"
      type         = infantry
      strength     = 100
      organisation = 30
      extra        = artillery
    }
    Division =
    { id           = { type = 30021 id = 4 }
      name         = "III Pestininkai Brigata"
      type         = infantry
      strength     = 100
      organisation = 30
    }
  }
  airunit =
  { id       = { type = 30021 id = 5 }
    location = 207
    base     = 207
    name     = "Lietuvas Karines Oro Pajegos"
    Division =
    { id           = { type = 30021 id = 6 }
      name         = "1. Naikintuvas Aviacijos Grupo"
      type         = interceptor
      model        = 0
      strength     = 45
      organisation = 50
    }
  }
}
