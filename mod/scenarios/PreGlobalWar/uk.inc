
##############################
# Country definition for ENG #
##############################

province = { id = 1 infra = 0.2 oil = 3 } # Reykjavik
province = { id = 2 infra = 0.2 } # H�fn
province = { id = 3 rare_materials = 11 oil = 25 } # Stornoway
province =
{ id             = 5
  anti_air       = 4
  air_base       = { size = 4 current_size = 4 }
  naval_base     = { size = 10 current_size = 10 }
  rare_materials = 5
  oil            = 20
}                  # Scapa Flow
province =
{ id             = 6
  oil            = 27
  air_base       = { size = 4 current_size = 4 }
  rare_materials = 5
  anti_air       = 1
}                  # Inverness
province = { id = 12 anti_air = 1 } # Blackpool
province =
{ id         = 13
  anti_air   = 2
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
  oil        = 3
}              # Sheffield
province =
{ id         = 14
  anti_air   = 4
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
  energy     = 31
  max_energy = 31
}              # Liverpool
province = { id = 15 energy = 0 max_energy = 0 } # Cardiff
province = { id = 16 anti_air = 2 rare_materials = 4 energy = 0 max_energy = 0 } # Birmingham
province =
{ id         = 17
  anti_air   = 4
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
  energy     = 0
  max_energy = 0
}              # Norwich
province = { id = 19 anti_air = 3 energy = 0 max_energy = 0 } # London
province =
{ id          = 20
  anti_air    = 5
  air_base    = { size = 10 current_size = 10 }
  naval_base  = { size = 10 current_size = 10 }
  landfort    = 0
  coastalfort = 3
  energy      = 0
  max_energy  = 0
}               # Dover
province =
{ id         = 21
  anti_air   = 6
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
  energy     = 0
  max_energy = 0
}              # Portsmouth
province = { id = 22 energy = 0 max_energy = 0 } # Bristol
province =
{ id         = 23
  anti_air   = 6
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
  energy     = 0
  max_energy = 0
}              # Plymouth
province = { id = 24 energy = 0 max_energy = 0 naval_base = 6 air_base = 6 anti_air = 3 } # Cork
province = { id = 28 oilpool = 1000 supplypool = 2000 energy = 0 max_energy = 0 } # Belfast
province = { id = 29 energy = 0 max_energy = 0 } # Portadown
province = { id = 30 energy = 0 max_energy = 0 } # Dublin
province = { id = 45 energy = 0 max_energy = 0 } # Ghent
province = { id = 47 energy = 0 max_energy = 0 air_base = 7 anti_air = 2 } # Amsterdam
province = { id = 48 energy = 0 max_energy = 0 } # Utrecht
province = { id = 49 energy = 0 max_energy = 0 } # Eindhoven
province = { id = 50 energy = 0 max_energy = 0 } # Antwerp
province = { id = 51 energy = 0 max_energy = 0 } # Brussels
province = { id = 52 energy = 0 max_energy = 0 } # Mons
province = { id = 65 energy = 0 max_energy = 0 } # Namur
province = { id = 66 energy = 0 max_energy = 0 } # Aachen
province = { id = 68 energy = 0 max_energy = 0 } # Li�ge
province = { id = 71 energy = 0 max_energy = 0 anti_air = 3 } # Luxembourg
province = { id = 77 energy = 0 max_energy = 0 } # Arnhem
province = { id = 78 energy = 0 max_energy = 0 } # Leeuwarden
province = { id = 79 energy = 0 max_energy = 0 } # Groningen
province = { id = 80 energy = 0 max_energy = 0 } # Wilhelmshafen
province = { id = 81 energy = 0 max_energy = 0 anti_air = 1 } # M�nster
province = { id = 86 metal = 1 energy = 0 max_energy = 0 max_metal = 13 } # Hannover
province = { id = 87 energy = 0 max_energy = 0 naval_base = 3 air_base = 4 anti_air = 2 } # Bremen
province = { id = 88 energy = 0 max_energy = 0 } # Hamburg
province = { id = 92 energy = 0 max_energy = 0 } # �rhus
province = { id = 292 energy = 0 max_energy = 0 } # Aalborg
province = { id = 293 energy = 0 max_energy = 0 naval_base = 1 air_base = 3 anti_air = 2 } # Odense
province = { id = 294 energy = 0 max_energy = 0 } # Copenhagen
province =
{ id         = 538
  infra      = 0.2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
  oilpool    = 100
  supplypool = 500
  anti_air   = 3
}              # Bermuda
province = { id = 800 infra = 0.6 naval_base = 5 air_base = 5 anti_air = 2 } # Greenland


#####################
# Country main data #
#####################

country =
{ tag                    = UES
  ai 			 = "globalwar/ENG.ai"
  belligerence           = 50
  capital                = 19
  manpower               = 1000
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 70
  transports             = 100
  escorts                = 150
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 10
    freedom           = 6
    free_market       = 6
    professional_army = 6
    defense_lobby     = 6
    interventionism   = 10
  }
  diplomacy              = { }
  # GREAT BRITAIN
  nationalprovinces      = { 3    5    6    7    8    9    10   11   12   13   14   15   16   17   19   20   21   22   23   28   29   80   85   86
			     87   88   89   90   538  45   50   51   52   65   68   69   70   91   92   292  293  294  295  800  1    2    46   93
			     47   48   49   77   78   79   66   81   71   27   26   25   24   30   296  297  310  84   82   76   67   75   74   73
			     72   64   53   44   43
			   }
  # GREAT BRITAIN
  ownedprovinces         = { 3    5    6    7    8    9    10   11   12   13   14   15   16   17   19   20   21   22   23   28   29   80   85   86
			     87   88   89   90   538  45   50   51   52   65   68   69   70   91   92   292  293  294  295  800  1    2    46
			     47   48   49   77   78   79   66   81   71   27   26   25   24   30
			   }
  # GREAT BRITAIN
  controlledprovinces    = { 3    5    6    7    8    9    10   11   12   13   14   15   16   17   19   20   21   22   23   28   29   80   85   86
			     87   88   89   90   538  45   50   51   52   65   68   69   70   91   92   292  293  294  295  800  1    2    46
			     47   48   49   77   78   79   66   81   71   27   26   25   24   30
			   }

  # ######################
 techapps               = { 1010 1190 2010 2290 2450 3010 3070 3130 3190 3250 3320 3400 4010 4120 5080 8010 8020 8030 8040 8050 9010 }

 landunit =
  { id       = { type = 30014 id = 1 }
    name     = "1. Corps"
    location = 19
    division =
    { id       = { type = 30014 id = 2 }
      name     = "1st Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30014 id = 3 }
      name     = "2nd Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30014 id = 4 }
      name     = "3rd Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30014 id = 5 }
    name     = "2. Corps"
    location = 19
    division =
    { id       = { type = 30014 id = 6 }
      name     = "4th Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30014 id = 7 }
      name     = "5th Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30014 id = 8 }
      name     = "6th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30014 id = 9 }
    name     = "3. Corps"
    location = 19
    division =
    { id       = { type = 30014 id = 10 }
      name     = "7th Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30014 id = 11 }
      name     = "8th Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30014 id = 12 }
      name     = "9th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30014 id = 13 }
    name     = "4. Corps"
    location = 19
    division =
    { id       = { type = 30014 id = 14 }
      name     = "10th Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30014 id = 15 }
      name     = "11th Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30014 id = 16 }
      name     = "12th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30014 id = 17 }
    name     = "Armored Corps"
    location = 19
    division =
    { type  = armor
      model = 0
      id    = { type = 30014 id = 18 }
      name  = "1st Armored Division"
    }
    division =
    { type  = armor
      model = 0
      id    = { type = 30014 id = 19 }
      name  = "2nd Armored Division"
    }
    division =
    { type  = armor
      model = 0
      id    = { type = 30014 id = 20 }
      name  = "3rd Armored Division"
    }
  }
  navalunit =
  { id       = { type = 30014 id = 193 }
    name     = "Main Fleet"
    location = 20
    base     = 20
    division =
    { type          = carrier
      model         = 0
      id            = { type = 30014 id = 194 }
      name          = "Carrier 1"
      extra         = cag
      brigade_model = 0
    }
    division =
    { type          = carrier
      model         = 0
      id            = { type = 30014 id = 195 }
      name          = "Carrier 2"
      extra         = cag
      brigade_model = 0
    }
    division =
    { type  = battleship
      model = 0
      id    = { type = 30014 id = 196 }
      name  = "Battleship 1"
    }
    division =
    { type  = battleship
      model = 0
      id    = { type = 30014 id = 197 }
      name  = "Battleship 2"
    }
    division =
    { type  = battlecruiser
      model = 0
      id    = { type = 30014 id = 198 }
      name  = "Battlecruiser 1"
    }
    division =
    { type  = battlecruiser
      model = 0
      id    = { type = 30014 id = 199 }
      name  = "Battlecruiser 2"
    }
    division =
    { type  = heavy_cruiser
      model = 0
      id    = { type = 30014 id = 200 }
      name  = "Heavy Cruiser 1"
    }
    division =
    { type  = heavy_cruiser
      model = 0
      id    = { type = 30014 id = 201 }
      name  = "Heavy Cruiser 2"
    }
    division =
    { type  = light_cruiser
      model = 0
      id    = { type = 30014 id = 202 }
      name  = "Light Cruiser 1"
    }
    division =
    { type  = light_cruiser
      model = 0
      id    = { type = 30014 id = 203 }
      name  = "Light Cruiser 2"
    }
    division =
    { type  = light_cruiser
      model = 0
      id    = { type = 30014 id = 204 }
      name  = "Light Cruiser 3"
    }
    division =
    { type  = light_cruiser
      model = 0
      id    = { type = 30014 id = 205 }
      name  = "Light Cruiser 4"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30014 id = 206 }
      name  = "Destroyer 1"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30014 id = 207 }
      name  = "Destroyer 2"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30014 id = 208 }
      name  = "Destroyer 3"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30014 id = 209 }
      name  = "Destroyer 4"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30014 id = 210 }
      name  = "Destroyer 5"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30014 id = 211 }
      name  = "Destroyer 6"
    }
    division =
    { type  = transport
      model = 0
      id    = { type = 30014 id = 212 }
      name  = "Transport 1"
    }
    division =
    { type  = transport
      model = 0
      id    = { type = 30014 id = 213 }
      name  = "Transport 2"
    }
    division =
    { type  = submarine
      model = 0
      id    = { type = 30014 id = 214 }
      name  = "Submarine 1"
    }
    division =
    { type  = submarine
      model = 0
      id    = { type = 30014 id = 215 }
      name  = "Submarine 2"
    }
    division =
    { type  = submarine
      model = 0
      id    = { type = 30014 id = 216 }
      name  = "Submarine 3"
    }
    division =
    { type  = submarine
      model = 0
      id    = { type = 30014 id = 217 }
      name  = "Submarine 4"
    }
  }
  airunit =
  { id       = { type = 30014 id = 173 }
    name     = "Bomber Group 1"
    location = 19
    base     = 19
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30014 id = 174 }
      name  = "1st Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30014 id = 175 }
      name  = "2nd Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30014 id = 176 }
      name  = "3rd Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30014 id = 177 }
      name  = "4th Air Wing"
    }
  }
  airunit =
  { id       = { type = 30014 id = 178 }
    name     = "Bomber Group 2"
    location = 19
    base     = 19
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30014 id = 179 }
      name  = "5th Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30014 id = 180 }
      name  = "6th Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30014 id = 181 }
      name  = "7th Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30014 id = 182 }
      name  = "8th Air Wing"
    }
  }
  airunit =
  { id       = { type = 30014 id = 183 }
    name     = "Fighter Group 1"
    location = 19
    base     = 19
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30014 id = 184 }
      name  = "9th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30014 id = 185 }
      name  = "10th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30014 id = 186 }
      name  = "11th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30014 id = 187 }
      name  = "12th Air Wing"
    }
  }
  airunit =
  { id       = { type = 30014 id = 188 }
    name     = "Fighter Group 2"
    location = 19
    base     = 19
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30014 id = 189 }
      name  = "13th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30014 id = 190 }
      name  = "14th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30014 id = 191 }
      name  = "15th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30014 id = 192 }
      name  = "16th Air Wing"
    }
  }
}
