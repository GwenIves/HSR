
##############################
# Country definition for ROM #
##############################

province = { id = 161 infra = 0.2 } # Surovikino
province = { id = 162 infra = 0.2 } # Kalach
province = { id = 163 infra = 0.2 energy = 0 max_energy = 0 } # Stalingrad
province = { id = 164 infra = 0.2 } # Cherny Yar
province = { id = 225 infra = 0.4 } # Mozyr
province = { id = 226 infra = 0.4 } # Korosten
province = { id = 227 infra = 0.2 energy = 0 max_energy = 0 } # Zhitomir
province = { id = 228 infra = 0.2 ic = 10 energy = 0 max_energy = 0 metal = 0 max_metal = 0 anti_air = 1 } # Vinnitsa
province = { id = 229 infra = 0.2 metal = 0 max_metal = 0 } # Stanislawow
province = { id = 230 ic = 9 energy = 0 max_energy = 0 metal = 0 max_metal = 0 air_base = 4 anti_air = 2 } # Beltsy
province = { id = 231 infra = 0.2 ic = 9 rare_materials = 24 oil = 22 anti_air = 1 } # Mogilev Podolski
province = { id = 232 infra = 0.2 ic = 10 anti_air = 2 } # Balta
province = { id = 234 infra = 0.2 } # Kherson
province = { id = 235 infra = 0.2 ic = 10 } # Dnepropetrovsk
province = { id = 236 infra = 0.2 energy = 0 max_energy = 0 metal = 61 max_metal = 61 rare_materials = 20 oil = 30 } # Krivoy Rog
province = { id = 237 infra = 0.2 ic = 10 rare_materials = 30 oil = 15 } # Cherkassy
province = { id = 238 infra = 0.1 ic = 13 rare_materials = 6 oil = 10 air_base = 6 anti_air = 3 } # Kiev
province = { id = 239 infra = 0.2 ic = 10 } # Priluki
province = { id = 240 infra = 0.2 } # Vyshgorod
province = { id = 241 infra = 0.2 } # Chernigov
province = { id = 242 infra = 0.2 } # Konotop
province = { id = 243 infra = 0.2 } # Kursk
province = { id = 244 infra = 0.2 ic = 10 anti_air = 1 } # Sumy
province = { id = 245 infra = 0.2 ic = 10 } # Poltava
province = { id = 246 infra = 0.2 ic = 10 energy = 6 max_energy = 6 anti_air = 1 } # Zaporozhye
province = { id = 247 infra = 0.2 } # Belgorod
province =
{ id       = 248
  infra    = 0.2
  air_base = { size = 2 current_size = 2 }
  anti_air = 1
}            # Kharkov
province = { id = 249 infra = 0.2 } # Stalino
province = { id = 250 infra = 0.2 } # Melitopol
province = { id = 251 infra = 0.2 } # Perekop
province = { id = 252 infra = 0.2 naval_base = 3 air_base = 5 anti_air = 3 } # Yevpatoriya
province = { id = 253 infra = 0.1 } # Sevastopol
province = { id = 254 infra = 0.2 } # Kerch
province = { id = 256 infra = 0.2 } # Krasnodar
province = { id = 257 infra = 0.2 } # Tikhoretsk
province = { id = 258 infra = 0.2 naval_base = 1 } # Rostov
province = { id = 259 infra = 0.2 } # Kamensk-Shakhtinski
province = { id = 260 infra = 0.2 } # Bilovodsk
province = { id = 261 infra = 0.2 } # Rossosh
province = { id = 262 infra = 0.2 } # Ostrogozhsk
province = { id = 265 infra = 0.2 } # Boguchar
province = { id = 266 infra = 0.2 ic = 9 air_base = 4 anti_air = 1 } # Kashary
province = { id = 267 infra = 0.2 } # Bokovskaya
province = { id = 268 infra = 0.2 ic = 9 anti_air = 1 } # Morozovsk
province = { id = 269 infra = 0.2 ic = 9 anti_air = 1 } # Konstatinovsk
province = { id = 270 infra = 0.2 } # Salsk
province = { id = 271 infra = 0.2 } # Kotelnikovo
province = { id = 272 infra = 0.2 } # Zhlobin
province =
{ id         = 423
  anti_air   = 2
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
  ic         = 1
}              # Constanta
province =
{ id       = 424
  anti_air = 2
  air_base = { size = 5 current_size = 5 }
}            # Bucharest
province = { id = 429 infra = 0.2 } # Bacau
province = { id = 430 infra = 0.2 } # Brasov
province = { id = 431 anti_air = 3 ic = 2 } # Ploesti
province = { id = 435 anti_air = 1 } # Ismail
province = { id = 502 infra = 0.2 } # Tarnopol
province = { id = 1833 infra = 0.4 } # Enotaevka
province = { id = 1837 infra = 0.4 } # Elista
province = { id = 1842 infra = 0.6 air_base = 3 } # Bashanta
province = { id = 1846 infra = 0.2 } # Voroshilovsk
province = { id = 1847 infra = 0.2 } # Grozny

#####################
# Country main data #
#####################

country =
{ tag                    = UTC
  ai 			 = "globalwar/ROM.ai"
  belligerence           = 50
  capital                = 235
  manpower               = 1000
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 15
  transports             = 100
  escorts                = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 7
    freedom           = 6
    free_market       = 6
    professional_army = 6
    defense_lobby     = 6
    interventionism   = 10
  }
  diplomacy              = { }
  nationalprovinces      = { 423  424  425  431  429  430  432  436  433  435  230  434  229  500  501  502  226  227  228  231  232  233  234  251
			     250  235  236  237  238  240  239  241  242  244  245  246  248  247  243  258  259  260  262  261  249  269  268  267
			     266  265  161  256  257  270  225  272  163  162  271  164  1847 1846 1842 1837 1833 252  253  254  255  1843 1844 1849
			     1857 1838 1836 1834 1835 159  160  264  263  283  282  277  276  273  274  220  221  222  562  506  489  499  498  428
			     427  426  420  422
			   }
  ownedprovinces         = { 423  424  425  431  429  430  432  436  433  435  230  434  229  500  501  502  226  227  228  231  232  233  234  251
			     250  235  236  237  238  240  239  241  242  244  245  246  248  247  243  258  259  260  262  261  249  269  268  267
			     266  265  161  256  257  270  225  272  163  162  271  164  1847 1846 1842 1837 1833 252  253  254
			   }
  controlledprovinces    = { 423  424  425  431  429  430  432  436  433  435  230  434  229  500  501  502  226  227  228  231  232  233  234  251
			     250  235  236  237  238  240  239  241  242  244  245  246  248  247  243  258  259  260  262  261  249  269  268  267
			     266  265  161  256  257  270  225  272  163  162  271  164  1847 1846 1842 1837 1833 252  253  254
			   }

  # ######################
 techapps               = { 1010 1190 2010 2290 2450 3010 3070 3130 3190 3250 3320 3400 4010 4120 5080 8010 8020 8030 8040 8050 9010 }

 landunit =
  { id       = { type = 30015 id = 1 }
    name     = "1. Corps"
    location = 424
    division =
    { id       = { type = 30015 id = 2 }
      name     = "1st Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30015 id = 3 }
      name     = "2nd Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30015 id = 4 }
      name     = "3rd Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30015 id = 5 }
    name     = "2. Corps"
    location = 424
    division =
    { id       = { type = 30015 id = 6 }
      name     = "4th Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30015 id = 7 }
      name     = "5th Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30015 id = 8 }
      name     = "6th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30015 id = 9 }
    name     = "3. Corps"
    location = 424
    division =
    { id       = { type = 30015 id = 10 }
      name     = "7th Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30015 id = 11 }
      name     = "8th Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30015 id = 12 }
      name     = "9th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30015 id = 13 }
    name     = "4. Corps"
    location = 424
    division =
    { id       = { type = 30015 id = 14 }
      name     = "10th Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30015 id = 15 }
      name     = "11th Infantry Division"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30015 id = 16 }
      name     = "12th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30015 id = 17 }
    name     = "Armored Corps"
    location = 424
    division =
    { type  = armor
      model = 0
      id    = { type = 30015 id = 18 }
      name  = "1st Armored Division"
    }
    division =
    { type  = armor
      model = 0
      id    = { type = 30015 id = 19 }
      name  = "2nd Armored Division"
    }
    division =
    { type  = armor
      model = 0
      id    = { type = 30015 id = 20 }
      name  = "3rd Armored Division"
    }
  }
  navalunit =
  { id       = { type = 30015 id = 193 }
    name     = "Main Fleet"
    location = 423
    base     = 423
    division =
    { type          = carrier
      model         = 0
      id            = { type = 30015 id = 194 }
      name          = "Carrier 1"
      extra         = cag
      brigade_model = 0
    }
    division =
    { type          = carrier
      model         = 0
      id            = { type = 30015 id = 195 }
      name          = "Carrier 2"
      extra         = cag
      brigade_model = 0
    }
    division =
    { type  = battleship
      model = 0
      id    = { type = 30015 id = 196 }
      name  = "Battleship 1"
    }
    division =
    { type  = battleship
      model = 0
      id    = { type = 30015 id = 197 }
      name  = "Battleship 2"
    }
    division =
    { type  = battlecruiser
      model = 0
      id    = { type = 30015 id = 198 }
      name  = "Battlecruiser 1"
    }
    division =
    { type  = battlecruiser
      model = 0
      id    = { type = 30015 id = 199 }
      name  = "Battlecruiser 2"
    }
    division =
    { type  = heavy_cruiser
      model = 0
      id    = { type = 30015 id = 200 }
      name  = "Heavy Cruiser 1"
    }
    division =
    { type  = heavy_cruiser
      model = 0
      id    = { type = 30015 id = 201 }
      name  = "Heavy Cruiser 2"
    }
    division =
    { type  = light_cruiser
      model = 0
      id    = { type = 30015 id = 202 }
      name  = "Light Cruiser 1"
    }
    division =
    { type  = light_cruiser
      model = 0
      id    = { type = 30015 id = 203 }
      name  = "Light Cruiser 2"
    }
    division =
    { type  = light_cruiser
      model = 0
      id    = { type = 30015 id = 204 }
      name  = "Light Cruiser 3"
    }
    division =
    { type  = light_cruiser
      model = 0
      id    = { type = 30015 id = 205 }
      name  = "Light Cruiser 4"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30015 id = 206 }
      name  = "Destroyer 1"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30015 id = 207 }
      name  = "Destroyer 2"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30015 id = 208 }
      name  = "Destroyer 3"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30015 id = 209 }
      name  = "Destroyer 4"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30015 id = 210 }
      name  = "Destroyer 5"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30015 id = 211 }
      name  = "Destroyer 6"
    }
    division =
    { type  = transport
      model = 0
      id    = { type = 30015 id = 212 }
      name  = "Transport 1"
    }
    division =
    { type  = transport
      model = 0
      id    = { type = 30015 id = 213 }
      name  = "Transport 2"
    }
    division =
    { type  = submarine
      model = 0
      id    = { type = 30015 id = 214 }
      name  = "Submarine 1"
    }
    division =
    { type  = submarine
      model = 0
      id    = { type = 30015 id = 215 }
      name  = "Submarine 2"
    }
    division =
    { type  = submarine
      model = 0
      id    = { type = 30015 id = 216 }
      name  = "Submarine 3"
    }
    division =
    { type  = submarine
      model = 0
      id    = { type = 30015 id = 217 }
      name  = "Submarine 4"
    }
  }
  airunit =
  { id       = { type = 30015 id = 173 }
    name     = "Bomber Group 1"
    location = 424
    base     = 424
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30015 id = 174 }
      name  = "1st Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30015 id = 175 }
      name  = "2nd Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30015 id = 176 }
      name  = "3rd Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30015 id = 177 }
      name  = "4th Air Wing"
    }
  }
  airunit =
  { id       = { type = 30015 id = 178 }
    name     = "Bomber Group 2"
    location = 424
    base     = 424
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30015 id = 179 }
      name  = "5th Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30015 id = 180 }
      name  = "6th Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30015 id = 181 }
      name  = "7th Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30015 id = 182 }
      name  = "8th Air Wing"
    }
  }
  airunit =
  { id       = { type = 30015 id = 183 }
    name     = "Fighter Group 1"
    location = 424
    base     = 424
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30015 id = 184 }
      name  = "9th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30015 id = 185 }
      name  = "10th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30015 id = 186 }
      name  = "11th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30015 id = 187 }
      name  = "12th Air Wing"
    }
  }
  airunit =
  { id       = { type = 30015 id = 188 }
    name     = "Fighter Group 2"
    location = 424
    base     = 424
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30015 id = 189 }
      name  = "13th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30015 id = 190 }
      name  = "14th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30015 id = 191 }
      name  = "15th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30015 id = 192 }
      name  = "16th Air Wing"
    }
  }
}
