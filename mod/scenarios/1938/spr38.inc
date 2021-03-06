
##############################
# Country definition for SPR #
##############################

province =
{ id       = 341
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
}            # Madrid
province =
{ id         = 352
  anti_air   = 1
  naval_base = { size = 6 current_size = 6 }
  air_base   = { size = 1 current_size = 1 }
}              # Murcia
province =
{ id         = 354
  anti_air   = 1
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
}              # Val�ncia
province =
{ id         = 356
  anti_air   = 1
  naval_base = { size = 6 current_size = 6 }
  air_base   = { size = 1 current_size = 1 }
}              # Tarragona

#####################
# Country main data #
#####################

country =
{ tag                    = SPR
  regular_id             = SPA
  intrinsic_gov_type     = left_wing_radical
  ai                     = "scw_spr.ai"
  capital                = 354
  dissent                = 20
  manpower               = 20
  transports             = 60
  escorts                = 14
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 500
  money                  = 100
  nationalprovinces      = { 329 330 331 332 333 334 338 339 340 341 342 343 346 347 348 349 350 351 352 353 354 355 356 357 535 536 537 954 955 957
			     961 962 963 964 965 967 971 972
			   }
  ownedprovinces         = { 341 342 351 352 353 354 356 357 }
  controlledprovinces    = { 341 342 351 352 353 354 356 357 }
  # GW Infantry
  techapps               = { 1010  1020  1110  1120  1190  1310  2010  2020  2150  2290  2300  2310  2400  2450  2460  2510  3010  3020  3030  3070
			     3080  3130  3140  3150  3250  3260  3400  3410  4010  4020  4120  5080  5090  6010  6020  8010  8020  8040  8050  9010
			     14000
			   }
  dormant_leaders	= { 3007 3050 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 9
    free_market       = 6
    freedom           = 6
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 8
  }
  diplomacy =
  { relation = { tag = SOV value = 50 }
    relation = { tag = ENG value = -25 }
  }
  SpyInfo                = { country = "SPR" NumberOfSpies = 7 }
  #SpyInfo                = { country = "SPA" NumberOfSpies = 5 }
  #SpyInfo                = { country = "POR" NumberOfSpies = 3 }
  #SpyInfo                = { country = "FRA" NumberOfSpies = 3 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  #SpyInfo                = { country = "ITA" NumberOfSpies = 3 }
  headofstate            = { type = 9 id = 11046 }
  headofgovernment       = { type = 9 id = 11060 }
  foreignminister        = { type = 9 id = 11092 }
  armamentminister       = { type = 9 id = 11134 }
  ministerofsecurity     = { type = 9 id = 11176 }
  ministerofintelligence = { type = 9 id = 11217 }
  chiefofstaff           = { type = 9 id = 11247 }
  chiefofarmy            = { type = 9 id = 11277 }
  chiefofnavy            = { type = 9 id = 11305 }
  chiefofair             = { type = 9 id = 11010 }
  # UNIDADES EN DESARROLLO
  # Ninguna
  # EJERCITO DE TIERRA
  landunit =
  { id       = { type = 16500 id = 1 }
    location = 351 # Jaen
    name     = "Ej�rcito de Andalucia"
    division =
    { id       = { type = 16500 id = 2 }
      name     = "Cuerpo Ej�rcito IX"
      type     = infantry
      model    = 1
      strength = 60
    }
    division =
    { id       = { type = 16500 id = 3 }
      name     = "Cuerpo Ej�rcito XXIII"
      type     = infantry
      model    = 1
      strength = 70
    }
  }
  landunit =
  { id       = { type = 16500 id = 4 }
    location = 341 # Madrid
    name     = "Ej�rcito del Centro"
    leader   = 3011 # Casado L�pez
    division =
    { id       = { type = 16500 id = 5 }
      name     = "Cuerpo Ej�rcito I"
      type     = infantry
      model    = 1
      strength = 80
    }
    division =
    { id    = { type = 16500 id = 6 }
      name  = "Cuerpo Ej�rcito II"
      type  = infantry
      model = 1
    }
    division =
    { id       = { type = 16500 id = 7 }
      name     = "Cuerpo Ej�rcito III"
      type     = infantry
      model    = 1
      strength = 90
    }
    division =
    { id       = { type = 16500 id = 8 }
      name     = "Cuerpo Ej�rcito IV"
      type     = infantry
      model    = 1
      strength = 80
    }
    division =
    { id           = { type = 16500 id = 35 }
      name         = "Abraham Lincoln Brigade"
      max_strength = 50
      type         = militia
      model        = 0
    }
    division =
    { id           = { type = 16500 id = 36 }
      name         = "15a Brigada Internacional"
      max_strength = 50
      type         = militia
      model        = 0
    }
  }
  landunit =
  { id       = { type = 16500 id = 9 }
    location = 352 # Murcia
    name     = "Cuerpo Ej�rcito XXI"
    division =
    { id    = { type = 16500 id = 10 }
      name  = "Cuerpo Ej�rcito XXI"
      type  = infantry
      model = 1
    }
  }
  landunit =
  { id       = { type = 16500 id = 11 }
    location = 353 # Albacete
    name     = "Ej�rcito de Extremadura"
    division =
    { id    = { type = 16500 id = 12 }
      name  = "Cuerpo Ej�rcito VII"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 16500 id = 13 }
      name  = "Cuerpo Ej�rcito VIII"
      type  = infantry
      model = 1
    }
  }
  landunit =
  { id       = { type = 16500 id = 14 }
    location = 354 # Valencia
    name     = "Ej�rcito de Levante"
    division =
    { id    = { type = 16500 id = 15 }
      name  = "Cuerpo Ej�rcito XIII"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 16500 id = 16 }
      name  = "Cuerpo Ej�rcito XIX"
      type  = infantry
      model = 1
    }
    division =
    { id       = { type = 16500 id = 17 }
      name     = "Cuerpo Ej�rcito XX"
      type     = infantry
      model    = 1
      strength = 70
    }
    division =
    { id    = { type = 16500 id = 18 }
      name  = "Cuerpo Ej�rcito XXII"
      type  = infantry
      model = 1
    }
  }
  landunit =
  { id       = { type = 16500 id = 19 }
    location = 356 # Tarragona
    name     = "Ej�rcito del Este"
    division =
    { id       = { type = 16500 id = 20 }
      name     = "Cuerpo Ej�rcito X"
      type     = infantry
      model    = 1
      strength = 70
    }
    division =
    { id       = { type = 16500 id = 21 }
      name     = "Cuerpo Ej�rcito XI"
      type     = infantry
      model    = 1
      strength = 70
    }
    division =
    { id    = { type = 16500 id = 22 }
      name  = "Cuerpo Ej�rcito XII"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 16500 id = 23 }
      name  = "Cuerpo Ej�rcito XVIII"
      type  = infantry
      model = 1
    }
  }
  landunit =
  { id       = { type = 16500 id = 24 }
    location = 356 # Tarragona
    name     = "Ej�rcito del Ebro"
    leader   = 3048 # L�ster Forj�n
    division =
    { id    = { type = 16500 id = 25 }
      name  = "Cuerpo Ej�rcito V"
      type  = infantry
      model = 1
    }
  }
  landunit =
  { id       = { type = 16500 id = 26 }
    location = 357 # Barcelona
    name     = "Ej�rcito del Norte"
    division =
    { id       = { type = 16500 id = 27 }
      name     = "Cuerpo Ej�rcito XIV"
      type     = infantry
      model    = 1
      strength = 70
    }
    division =
    { id    = { type = 16500 id = 28 }
      name  = "Cuerpo Ej�rcito XV"
      type  = infantry
      model = 1
    }
  }
  landunit =
  { id       = { type = 16500 id = 29 }
    location = 342 # Guadalajara
    name     = "Reserva del GERC"
    division =
    { id       = { type = 16500 id = 30 }
      name     = "Cuerpo Ej�rcito XVI"
      type     = infantry
      model    = 1
      strength = 70
    }
    division =
    { id    = { type = 16500 id = 31 }
      name  = "Cuerpo Ej�rcito XVII"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 16500 id = 32 }
      name  = "Cuerpo Ej�rcito XXIV"
      type  = infantry
      model = 1
    }
  }
  landunit =
  { id       = { type = 16500 id = 33 }
    location = 357 # Barcelona
    name     = "Columna Durruti"
    division =
    { id       = { type = 16500 id = 34 }
      name     = "Columna Durruti"
      type     = militia
      model    = 0
      strength = 40
    }
  }
  # ARMADA
  navalunit =
  { location = 352 # Murcia/Cartagena
    base     = 352 # Murcia/Cartagena
    id       = { type = 16500 id = 121 }
    name     = "Base Naval Cartagena"
    leader   = 3094 # Buiza
    division =
    { id       = { type = 16500 id = 122 }
      name     = "Miguel de Cervantes"
      strength = 100
      type     = light_cruiser
      model    = 1
    }
    division =
    { id       = { type = 16500 id = 123 }
      name     = "Flotilla de Escolta"
      strength = 100
      type     = destroyer
      model    = 1
    }
  }
  navalunit =
  { location = 2428 # Navegando enfrente de huelva
    base     = 352 # Murcia/Cartagena
    id       = { type = 16500 id = 151 }
    name     = "Flotilla M�ndez N��ez"
    division =
    { id       = { type = 16500 id = 124 }
      name     = "ARE M�ndez N��ez"
      strength = 100
      type     = light_cruiser
      model    = 1
    }
  }
  navalunit =
  { location = 2429 # Navegando en el estrecho de gibraltar
    base     = 352 # Murcia/Cartagena
    id       = { type = 16500 id = 125 }
    name     = "Armada Republicana"
    division =
    { id       = { type = 16500 id = 126 }
      name     = "ARE Jaime I"
      strength = 50
      type     = battleship
      model    = 1
    }
    division =
    { id       = { type = 16500 id = 127 }
      name     = "ARE Libertad"
      strength = 50
      type     = light_cruiser
      model    = 1
    }
    division =
    { id       = { type = 16500 id = 128 }
      name     = "Flotilla de Torpedeiros nro. 1"
      strength = 100
      type     = destroyer
      model    = 0
    }
    division =
    { id       = { type = 16500 id = 129 }
      name     = "Flotilla de Torpedeiros nro. 2"
      strength = 100
      type     = destroyer
      model    = 1
    }
    division =
    { id       = { type = 16500 id = 130 }
      name     = "1a Flotilla de Transporte Naval"
      strength = 100
      type     = transport
    }
    division =
    { id       = { type = 16500 id = 131 }
      name     = "2a Flotilla de Transporte Naval"
      strength = 100
      type     = transport
    }
  }
  navalunit =
  { location = 352 # Murcia/Cartagena
    base     = 352 # Murcia/cartagena
    id       = { type = 16500 id = 132 }
    name     = "Armada de Escolta Cart."
    division =
    { id       = { type = 16500 id = 133 }
      name     = "Flotilla de Torpedeiros nro. 3"
      strength = 100
      type     = destroyer
      model    = 1
    }
    division =
    { id       = { type = 16500 id = 134 }
      name     = "Flotilla de Torpedeiros nro. 4"
      strength = 100
      type     = destroyer
      model    = 2
    }
    division =
    { id       = { type = 16500 id = 135 }
      name     = "3a Flotilla de Transporte Naval"
      strength = 100
      type     = transport
    }
    division =
    { id       = { type = 16500 id = 136 }
      name     = "4a Flotilla de Transporte Naval"
      strength = 100
      type     = transport
    }
  }
  navalunit =
  { location = 2431 # Mar de albor�n
    base     = 352 # Murcia/Cartagena
    id       = { type = 16500 id = 137 }
    name     = "Serie-C"
    division =
    { id       = { type = 16500 id = 138 }
      name     = "C-1"
      strength = 100
      type     = submarine
      model    = 0
    }
    division =
    { id       = { type = 16500 id = 139 }
      name     = "C-3"
      strength = 100
      type     = submarine
      model    = 0
    }
  }
  navalunit =
  { location = 2431 # Mar de albor�n
    base     = 352 # Murcia/Cartagena
    id       = { type = 16500 id = 140 }
    name     = "Serie-B"
    division =
    { id       = { type = 16500 id = 141 }
      name     = "B-1"
      strength = 75
      type     = submarine
      model    = 1
    }
    division =
    { id       = { type = 16500 id = 142 }
      name     = "B-2"
      strength = 75
      type     = submarine
      model    = 1
    }
  }
  # EJERCITO DE AIRE
  airunit =
  { location = 341 # Madrid
    base     = 341
    id       = { type = 16500 id = 143 }
    name     = "1a Escuadra A�rea"
    division =
    { id       = { type = 16500 id = 144 }
      name     = "1a Grupo A�reo T�ctica ARE"
      strength = 30
      type     = tactical_bomber
    }
    division =
    { id       = { type = 16500 id = 145 }
      name     = "2a Grupo A�reo T�ctica ARE"
      strength = 30
      type     = tactical_bomber
    }
  }
}
