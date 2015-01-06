
##############################
# Country definition for POL #
##############################

province =
{ id       = 208
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
}            # Wilno
province = { id = 211 anti_air = 1 } # Lida
province =
{ id         = 303
  ic         = 2
  anti_air   = 1
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 6 current_size = 6 }
}              # Danzig
province =
{ id       = 305
  anti_air = 1
  landfort = 1
  air_base = { size = 2 current_size = 2 }
}            # Torun
province =
{ id       = 307
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
}            # Poznan
province =
{ id       = 479
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
}            # Cracow
province = { id = 483 anti_air = 1 } # Lodz
province =
{ id       = 485
  ic       = 2
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}            # Warsaw
province = { id = 486 landfort = 2 } # Lomza
province =
{ id       = 489
  air_base = { size = 2 current_size = 2 }
}            # Przemysl
province = { id = 501 ic = 1 anti_air = 1 } # Lvov
province = { id = 504 landfort = 2 } # Brest Litovsk
province =
{ id       = 509
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
}            # Suwalki

#####################
# Country main data #
#####################

country =
{ tag                    = POL
  capital                = 485
  manpower               = 275
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 3
    freedom           = 4
    free_market       = 5
    professional_army = 3
    defense_lobby     = 8
    interventionism   = 6
  }
  SpyInfo                = { country = "POL" NumberOfSpies = 7 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  #SpyInfo                = { country = "FRA" NumberOfSpies = 6 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 8 }
  #SpyInfo                = { country = "CZE" NumberOfSpies = 6 }
  #SpyInfo                = { country = "AUS" NumberOfSpies = 3 }
  #SpyInfo                = { country = "GER" NumberOfSpies = 8 }
  #SpyInfo                = { country = "LAT" NumberOfSpies = 6 }
  #SpyInfo                = { country = "SWE" NumberOfSpies = 3 }
  #SpyInfo                = { country = "FIN" NumberOfSpies = 3 }
  #SpyInfo                = { country = "YUG" NumberOfSpies = 3 }
  #SpyInfo                = { country = "HUN" NumberOfSpies = 3 }
  #SpyInfo                = { country = "BUL" NumberOfSpies = 3 }
  #SpyInfo                = { country = "EST" NumberOfSpies = 3 }
  #SpyInfo                = { country = "LIT" NumberOfSpies = 8 }
  #SpyInfo                = { country = "USA" NumberOfSpies = 3 }
  #SpyInfo                = { country = "ROM" NumberOfSpies = 6 }
  nationalprovinces      = { 303 306 307 479 480 481 483 484 305 485 486 487 489 488 500 501 502 503 504 505 506 507 508 509 209 208 213 211 210 222
			     229 562 214 212 221 225 226 227 228 231 218
			   }
  ownedprovinces         = { 303 306 307 479 480 481 483 484 305 485 486 487 489 488 500 501 502 503 504 505 506 507 508 509 209 208 213 211 210 222
			     229 562 214
			   }
  controlledprovinces    = { 303 306 307 479 480 481 483 484 305 485 486 487 489 488 500 501 502 503 504 505 506 507 508 509 209 208 213 211 210 222
			     229 562 214
			   }
  # Great War Infantry
  techapps               = { 1010  1020  1110  1190  1200  1210  1220  1310  1340  2010  2020  2030  2150  2290  2300  2310  2320  2400  2450  2510
			     3010  3020  3400  3410  4010  4020  4120  4130  4140  5010  5050  5080  5090  5190  5310  5320  5350  5360  6010  6030
			     8040  9010  9020  9030  9040  9090  14000
			   }
  diplomacy =
  { relation = { tag = AST value = 200 }
    relation = { tag = BHU value = 200 }
    relation = { tag = SLO value = -200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = EST value = 75 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 200 }
    relation = { tag = GER value = -200 }
    relation = { tag = GRE value = 35 }
    relation = { tag = HUN value = 50 }
    relation = { tag = LAT value = 75 }
    relation = { tag = LIT value = 10 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 200 }
    relation = { tag = ROM value = 40 }
    relation = { tag = SAF value = 200 }
    relation = { tag = SOV value = -50 }
    relation = { tag = YEM value = 200 }
  }
  headofstate            = { type = 9 id = 13001 }
  headofgovernment       = { type = 9 id = 13002 }
  foreignminister        = { type = 9 id = 13003 }
  armamentminister       = { type = 9 id = 13004 }
  ministerofsecurity     = { type = 9 id = 13005 }
  ministerofintelligence = { type = 9 id = 13006 }
  chiefofstaff           = { type = 9 id = 13007 }
  chiefofarmy            = { type = 9 id = 13008 }
  chiefofnavy            = { type = 9 id = 13009 }
  chiefofair             = { type = 9 id = 13010 }
  dormant_ministers      = { 13055 }
  # #Polish OOB based on Halibutt's 39 OOB minus reserve units and with lower level infamtry.
  landunit =
  { id       = { type = 30013 id = 1 }
    name     = "SGO Narew"
    location = 509 # Suwalki
    division =
    { id       = { type = 30013 id = 2 }
      name     = "18 Dywizja Piechoty"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 30013 id = 4 }
      name     = "Podlaska i Suwalska BK"
      strength = 90
      type     = cavalry
      model    = 2
    }
  }
  landunit =
  { id       = { type = 30013 id = 5 }
    name     = "GO Grodno"
    location = 209 # Grodno
    division =
    { id       = { type = 30013 id = 6 }
      name     = "OW Grodno"
      strength = 20
      type     = militia
    }
  }
  landunit =
  { id       = { type = 30013 id = 7 }
    name     = "Armia Modlin"
    location = 305 # Torun
    division =
    { id       = { type = 30013 id = 8 }
      name     = "8 Dywizja Piechoty"
      strength = 100
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 30013 id = 9 }
      name     = "20 Dywizja Piechoty"
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
    }
    division =
    { id       = { type = 30013 id = 10 }
      name     = "Mazowiecka BK"
      strength = 30.000
      type     = cavalry
      model    = 2
    }
    division =
    { id       = { type = 30013 id = 11 }
      name     = "Nowogródzka BK"
      strength = 30.000
      type     = cavalry
      model    = 2
    }
  }
  landunit =
  { id       = { type = 30013 id = 12 }
    name     = "GO Wyszków"
    location = 486 # Ostroleka
    division =
    { id       = { type = 30013 id = 13 }
      name     = "1 DP Legionów"
      strength = 100
      type     = infantry
      model    = 1
    }
  }
  landunit =
  { id       = { type = 30013 id = 16 }
    name     = "Obóz Warowny Modlin"
    location = 486 # Ostroleka
    division =
    { id       = { type = 30013 id = 17 }
      name     = "Obóz Warowny Modlin"
      strength = 20
      type     = infantry
      model    = 0
    }
  }
  landunit =
  { id       = { type = 30013 id = 20 }
    name     = "Armia Pomorze"
    location = 303 # Danzig
    division =
    { id       = { type = 30013 id = 21 }
      name     = "9 Dywizja Piechoty"
      strength = 100
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 30013 id = 22 }
      name     = "15 Dywizja Piechoty"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 30013 id = 23 }
      name     = "27 Dywizja Piechoty"
      strength = 100
      type     = infantry
      model    = 0
    }
  }
  landunit =
  { id       = { type = 30013 id = 24 }
    name     = "GO Wschód"
    location = 305 # Torun
    division =
    { id       = { type = 30013 id = 25 }
      name     = "4 Dywizja Piechoty"
      strength = 100
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 30013 id = 26 }
      name     = "16 Pomorska DP"
      strength = 100
      type     = infantry
      model    = 0
    }
  }
  landunit =
  { id       = { type = 30013 id = 27 }
    name     = "GO Czersk"
    location = 303 # Danzig
    division =
    { id       = { type = 30013 id = 28 }
      name     = "Pomorska BK"
      strength = 30.000
      type     = cavalry
      model    = 2
    }
  }
  landunit =
  { id       = { type = 30013 id = 29 }
    name     = "Ladowa Obrona Wybrzeza"
    location = 303 # Danzig
    division =
    { id       = { type = 30013 id = 30 }
      name     = "Morska Brygada ON"
      strength = 40
      type     = infantry
      model    = 0
    }
  }
  landunit =
  { id       = { type = 30013 id = 31 }
    name     = "GO Kutno"
    location = 306 # Bydgoszcz
    division =
    { id       = { type = 30013 id = 32 }
      name     = "5 Dywizja Piechoty"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 30013 id = 33 }
      name     = "24 Dywizja Piechoty"
      strength = 100
      type     = infantry
      model    = 0
    }
  }
  landunit =
  { id       = { type = 30013 id = 34 }
    name     = "Armia Poznan"
    location = 307 # Poznan
    division =
    { id       = { type = 30013 id = 35 }
      name     = "Wielkopolska BK"
      strength = 30.000
      type     = cavalry
      model    = 2
    }
    division =
    { id       = { type = 30013 id = 36 }
      name     = "14 Dywizja Piechoty"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 30013 id = 37 }
      name     = "25 Dywizja Piechoty"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 30013 id = 38 }
      name     = "26 Dywizja Piechoty"
      strength = 100
      type     = infantry
      model    = 0
    }
  }
  landunit =
  { id       = { type = 30013 id = 39 }
    name     = "17 Dywizja Piechoty"
    location = 307 # Poznan
    division =
    { id       = { type = 30013 id = 40 }
      name     = "17 Dywizja Piechoty"
      strength = 100
      type     = infantry
      model    = 0
    }
  }
  landunit =
  { id       = { type = 30013 id = 41 }
    name     = "Podolska BK"
    location = 307 # Poznan
    division =
    { id       = { type = 30013 id = 42 }
      name     = "Podolska BK"
      strength = 30.000
      type     = cavalry
      model    = 2
    }
  }
  landunit =
  { id       = { type = 30013 id = 43 }
    name     = "Armia Lódz"
    location = 481 # Czestochowa
    division =
    { id       = { type = 30013 id = 45 }
      name     = "10 Dywizja Piechoty"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 30013 id = 46 }
      name     = "28 Dywizja Piechoty"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 30013 id = 47 }
      name     = "Kresowa BK"
      strength = 30.000
      type     = cavalry
      model    = 2
    }
  }
  landunit =
  { id       = { type = 30013 id = 48 }
    name     = "GO Piotrków"
    location = 481 # Czestochowa
    division =
    { id       = { type = 30013 id = 49 }
      name     = "30 Dywizja Piechoty"
      strength = 30
      type     = infantry
      model    = 0
      extra    = anti_tank
    }
    division =
    { id       = { type = 30013 id = 50 }
      name     = "Wolynska BK"
      strength = 30.000
      type     = cavalry
      model    = 2
    }
  }
  landunit =
  { id       = { type = 30013 id = 51 }
    name     = "Armia Kraków"
    location = 479 # Cieszyn
    division =
    { id       = { type = 30013 id = 52 }
      name     = "6 Dywizja Piechoty"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 30013 id = 53 }
      name     = "7 Dywizja Piechoty"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 30013 id = 55 }
      name     = "Krakowska BK"
      strength = 30.000
      type     = cavalry
      model    = 2
    }
  }
  landunit =
  { id       = { type = 30013 id = 56 }
    name     = "10 Pancerno-Motorowa BK"
    location = 479
    division =
    { id       = { type = 30013 id = 57 }
      name     = "10 Brygada Kawalerii"
      strength = 40.000
      type     = motorized
      extra    = anti_tank
    }
  }
  landunit =
  { id       = { type = 30013 id = 58 }
    name     = "GO Bielsko"
    location = 479 # Cieszyn
    division =
    { id       = { type = 30013 id = 59 }
      name     = "21 DP Górskiej"
      strength = 100
      type     = bergsjaeger
      model    = 0
    }
  }
  landunit =
  { id       = { type = 30013 id = 60 }
    name     = "GO Slask"
    location = 479 # Cieszyn
    division =
    { id       = { type = 30013 id = 61 }
      name     = "23 Górnoslaska DP"
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
    }
  }
  landunit =
  { id       = { type = 30013 id = 63 }
    name     = "Armia Karpaty"
    location = 489 # Przemysl
    division =
    { id       = { type = 30013 id = 64 }
      name     = "1,2,3. Brygada Górska"
      strength = 100
      type     = bergsjaeger
      model    = 0
    }
    division =
    { id       = { type = 30013 id = 65 }
      name     = "11 Karpacka DP"
      strength = 80
      type     = infantry
      model    = 0
    }
  }
  landunit =
  { id       = { type = 30013 id = 66 }
    name     = "GO Tarnów"
    location = 489 # Przemysl
    division =
    { id       = { type = 30013 id = 67 }
      name     = "22 DP Górskiej"
      strength = 100
      type     = bergsjaeger
      model    = 0
    }
  }
  landunit =
  { id       = { type = 30013 id = 69 }
    name     = "Armia Prusy - Pln"
    location = 487 # Lublin
    division =
    { id       = { type = 30013 id = 70 }
      name     = "13 Dywizja Piechoty"
      strength = 70
      type     = infantry
      model    = 0
      extra    = anti_tank
    }
    division =
    { id       = { type = 30013 id = 71 }
      name     = "19 Dywizja Piechoty"
      strength = 70
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 30013 id = 72 }
      name     = "29 Dywizja Piechoty"
      strength = 70
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 30013 id = 73 }
      name     = "Wilenska BK"
      strength = 30.000
      type     = cavalry
      model    = 2
    }
  }
  landunit =
  { id       = { type = 30013 id = 74 }
    name     = "Armia Prusy - Pld"
    location = 484 # Radom
    division =
    { id       = { type = 30013 id = 76 }
      name     = "12 Dywizja Piechoty"
      strength = 40
      type     = infantry
      model    = 0
    }
  }
  landunit =
  { id       = { type = 30013 id = 80 }
    name     = "Warszawska Brygada Panc-Mot"
    location = 487 # Lublin
    division =
    { id       = { type = 30013 id = 81 }
      name     = "Warszawska Brygada Panc-Mot"
      strength = 45
      type     = light_armor
      model    = 0 # Basic Light
    }
  }
  landunit =
  { id       = { type = 30013 id = 82 }
    name     = "Garnizon Warszawy"
    location = 485 # Warsaw
    division =
    { experience = 25
      id         = { type = 30013 id = 1208 }
      name       = "Supreme HQ"
      strength   = 100
      type       = hq
      model      = 0
    }
    division =
    { id       = { type = 30013 id = 83 }
      name     = "Garnizon Warszawy"
      strength = 90
      type     = militia
    }
  }
  landunit =
  { id       = { type = 30013 id = 84 }
    name     = "SGO Polesie" # entered fight on Sept. 14th
    location = 504 # Brzesc
    division =
    { id       = { type = 30013 id = 85 }
      name     = "50 Dywizja Piechoty"
      strength = 20 # Brzesc fortress garrison
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 30013 id = 86 }
      name     = "Grupa KOP"
      strength = 70
      type     = infantry
      model    = 0
    }
  }
  landunit =
  { id       = { type = 30013 id = 87 }
    name     = "OW KOP 'Wilno'"
    location = 208 # Wilno
    division =
    { id       = { type = 30013 id = 88 }
      name     = "KOP 'Wilno'"
      type     = militia
      strength = 20.000
    }
  }
  landunit =
  { id       = { type = 30013 id = 89 }
    name     = "KOP 'Polesie'"
    location = 503 # Pinsk
    division =
    { id       = { type = 30013 id = 90 }
      name     = "BKOP 'Polesie'"
      type     = infantry
      # KOP
      strength = 33.000
    }
  }
  landunit =
  { id       = { type = 30013 id = 91 }
    name     = "KOP 'Równe'"
    location = 562 # Równe
    division =
    { id       = { type = 30013 id = 92 }
      name     = "KOP 'Wilno'"
      type     = militia
      strength = 20.000
    }
  }
  # ###############################
  # Polish Naval OOB
  # ###############################
  navalunit =
  { id       = { type = 30013 id = 114 }
    name     = "Polska Flota Wojenna"
    location = 303 # Danzig
    base     = 303
    division =
    { id    = { type = 30013 id = 115 }
      name  = "1 Flotylla Niszczycieli"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 30013 id = 116 }
      name  = "1 Flotylla Okretow Podwodnych"
      type  = submarine
      model = 1
    }
  }
  # #######################
  # Polish 1939 air OOB
  # #######################
  airunit =
  { location = 485 # Warszawa
    id       = { type = 30013 id = 93 }
    name     = "Brygada Poscigowa"
    base     = 485
    division =
    { id       = { type = 30013 id = 94 }
      name     = "1 pulk Brygady Poscigowej"
      type     = interceptor
      model    = 1
      strength = 50
    }
    division =
    { id       = { type = 30013 id = 95 }
      name     = "Jednostki Dyspozycyjne Sztabów"
      type     = interceptor
      strength = 20
    }
  }
  airunit =
  { id       = { type = 30013 id = 96 }
    name     = "Brygada Bombowa"
    location = 485 # Warszawa
    base     = 485
    division =
    { id       = { type = 30013 id = 97 }
      name     = "1 pulk Brygady Bombowej"
      type     = tactical_bomber
      model    = 1
      strength = 45 # 45 planes in the first line on Sept 1st
    }
    division =
    { id       = { type = 30013 id = 98 }
      name     = "2 pulk Brygady Bombowej"
      type     = tactical_bomber
      model    = 0
      strength = 46
    }
  }
  airunit =
  { id       = { type = 30013 id = 99 }
    name     = "Lotnictwo Armii Poznan"
    location = 307 # Poznan
    base     = 307
    division =
    { id       = { type = 30013 id = 100 }
      name     = "Lotnictwo Armii Poznan"
      type     = interceptor
      model    = 1
      strength = 36
    }
  }
  airunit =
  { id       = { type = 30013 id = 101 }
    name     = "Lotnictwo Armii Lódz"
    location = 307 # Czestochowa
    base     = 307
    division =
    { id       = { type = 30013 id = 102 }
      name     = "Lotnictwo Armii Lódz"
      type     = interceptor
      strength = 34
    }
  }
  airunit =
  { id       = { type = 30013 id = 103 }
    name     = "Lotnictwo Armii Kraków"
    location = 479 # Cieszyn
    base     = 479
    division =
    { id       = { type = 30013 id = 104 }
      name     = "Lotnictwo Armii Kraków"
      type     = interceptor
      model    = 1
      strength = 33
    }
  }
  airunit =
  { id       = { type = 30013 id = 105 }
    name     = "Lotnictwo Armii Karpaty"
    location = 489 # Przemysl
    base     = 489
    division =
    { id       = { type = 30013 id = 106 }
      name     = "Lotnictwo Armii Karpaty"
      type     = interceptor
      model    = 0
      strength = 22
    }
  }
  airunit =
  { id       = { type = 30013 id = 107 }
    name     = "Lotnictwo Armii Pomorze"
    location = 303 # Danzig
    base     = 303
    division =
    { id       = { type = 30013 id = 108 }
      name     = "Lotnictwo Armii Pomorze"
      type     = interceptor
      model    = 1
      strength = 30
    }
  }
  airunit =
  { id       = { type = 30013 id = 109 }
    name     = "Lotnictwo Armii Modlin"
    location = 305 # Torun
    base     = 305
    division =
    { id       = { type = 30013 id = 110 }
      name     = "Lotnictwo Armii Modlin"
      type     = interceptor
      model    = 0
      strength = 20
    }
  }
  airunit =
  { id       = { type = 30013 id = 111 }
    name     = "Lotnictwo SGO Narew"
    location = 509 # Suwalki
    base     = 509
    division =
    { id       = { type = 30013 id = 112 }
      name     = "Lotnictwo SGO Narew"
      type     = interceptor
      model    = 0
      strength = 20
    }
  }
}
