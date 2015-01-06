
##############################
# Country definition for UGS #
##############################

province = { id = 93 landfort = 0 coastalfort = 1 } # Malmö
province =
{ id          = 95
  anti_air    = 2
  naval_base  = { size = 7 current_size = 7 }
  air_base    = { size = 4 current_size = 4 }
  landfort    = 0
  coastalfort = 3
}               # Karlskrona
province = { id = 96 ic = 5 naval_base = 2 air_base = 2 anti_air = 3 } # Gotland
province =
{ id          = 98
  anti_air    = 2
  naval_base  = { size = 7 current_size = 7 }
  air_base    = { size = 4 current_size = 4 }
  landfort    = 0
  coastalfort = 3
}               # Göteborg
province = { id = 99 landfort = 1 coastalfort = 0 } # Skövde
province = { id = 100 ic = 5 } # Norrköping
province =
{ id          = 101
  ic          = 4
  anti_air    = 2
  naval_base  = { size = 7 current_size = 7 }
  air_base    = { size = 4 current_size = 4 }
  landfort    = 0
  coastalfort = 3
}               # Stockholm
province = { id = 102 ic = 10 anti_air = 2 } # Uppsala
province = { id = 103 ic = 5 } # Åland
province = { id = 104 ic = 5 energy = 33 metal = 11 rare_materials = 13 oil = 25 } # Västerås
province = { id = 105 ic = 5 energy = 31 metal = 10 rare_materials = 5 oil = 25 anti_air = 1 } # Karlstad
province = { id = 106 energy = 36 metal = 10 rare_materials = 5 oil = 20 } # Åmål
province = { id = 111 infra = 0.2 ic = 5 energy = 31 metal = 11 rare_materials = 6 oil = 25 anti_air = 1 } # Hamar
province = { id = 112 infra = 0.2 ic = 5 energy = 30 metal = 10 rare_materials = 5 oil = 25 } # Ludvika
province = { id = 113 infra = 0.2 ic = 5 energy = 31 metal = 28 rare_materials = 5 oil = 5 anti_air = 1 } # Falun
province = { id = 115 infra = 0.2 energy = 30 metal = 10 rare_materials = 5 air_base = 6 anti_air = 2 } # Sveg
province = { id = 116 infra = 0.2 ic = 5 energy = 35 metal = 10 rare_materials = 5 } # Röros
province = { id = 119 infra = 0.2 ic = 5 energy = 30 metal = 10 rare_materials = 5 } # Östersund
province = { id = 120 ic = 5 anti_air = 1 } # Sundsvall
province = { id = 121 infra = 0.2 ic = 5 energy = 20 metal = 10 rare_materials = 5 } # Vilhelmina
province = { id = 123 infra = 0.2 ic = 5 } # Gällivare
province = { id = 124 infra = 0.2 } # Mo i Rana
province = { id = 125 infra = 0.2 } # Narvik
province = { id = 126 infra = 0.2 ic = 5 } # Kiruna
province =
{ id          = 127
  anti_air    = 2
  naval_base  = { size = 3 current_size = 3 }
  air_base    = { size = 4 current_size = 4 }
  landfort    = 3
  coastalfort = 0
}               # Luleå
province = { id = 128 infra = 0.4 naval_base = 3 air_base = 1 anti_air = 1 } # Hammerfest
province = { id = 129 infra = 0.4 } # Vardö
province = { id = 130 infra = 0.4 ic = 5 } # Rovaniemi
province = { id = 132 infra = 0.4 ic = 5 } # Petsamo
province = { id = 133 infra = 0.4 } # Murmansk
province = { id = 134 infra = 0.4 } # Kola
province = { id = 135 infra = 0.4 } # Kandalaksja
province = { id = 136 infra = 0.3 ic = 5 air_base = 4 anti_air = 2 } # Kajaani
province = { id = 139 ic = 5 } # Seinäjoki
province = { id = 140 ic = 5 } # Pori
province = { id = 141 ic = 5 } # Turku
province = { id = 144 infra = 0.2 } # Mikkeli
province = { id = 146 infra = 0.3 } # Sortavala
province = { id = 147 infra = 0.2 } # Jyväskylä
province = { id = 148 infra = 0.2 } # Kuopio
province = { id = 149 infra = 0.3 } # Joensuu
province = { id = 150 infra = 0.4 } # Kem
province = { id = 151 infra = 0.4 air_base = 2 } # Segezha
province = { id = 152 infra = 0.3 } # Petrozavodsk
province = { id = 187 ic = 5 anti_air = 2 } # Leningrad
province = { id = 188 infra = 0.4 } # Kingisepp
province = { id = 194 ic = 5 naval_base = 1 } # Tallinn
province = { id = 197 ic = 5 } # Riga
province = { id = 199 infra = 0.2 } # Voru
province = { id = 202 infra = 0.2 } # Dagaupulis
province = { id = 203 infra = 0.2 } # Jekapils
province = { id = 204 oil = 5 air_base = 10 anti_air = 2 } # Jelgava
province = { id = 207 infra = 0.2 anti_air = 1 } # Kaunas

#####################
# Country main data #
#####################

country =
{ tag                    = UGS
  ai                     = "globalwar/SWE.ai"
  belligerence           = 0
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  manpower               = 1000
  capital                = 101
  transports             = 100
  escorts                = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 4
    freedom           = 6
    free_market       = 6
    professional_army = 6
    defense_lobby     = 6
    interventionism   = 10
  }
  nationalprovinces      = { 112  126  127  123  122  121  120  119  115  113  114  106  105  104  102  101  100  99   98   97   93   95   96   107
			     108  109  110  111  116  117  118  124  125  128  129  103  141  142  140  143  138  139  137  131  130  132  136  148
			     147  144  145  146  149  187  188  193  194  195  196  199  205  204  203  197  202  198  206  207  511  577  151  152
			     150  135  134  133  153  183  185  186  192  200  201  1874 214  208  209  509  510  294
			   }
  ownedprovinces         = { 112 126 127 123 122 121 120 119 115 113 114 106 105 104 102 101 100 99  98  97  93  95  96  107 108 109 110 111 116 117
			     118 124 125 128 129 103 141 142 140 143 138 139 137 131 130 132 136 148 147 144 145 146 149 187 188 193 194 195 196 199
			     205 204 203 197 202 198 206 207 511 577 151 152 150 135 134 133
			   }
  controlledprovinces    = { 112 126 127 123 122 121 120 119 115 113 114 106 105 104 102 101 100 99  98  97  93  95  96  107 108 109 110 111 116 117
			     118 124 125 128 129 103 141 142 140 143 138 139 137 131 130 132 136 148 147 144 145 146 149 187 188 193 194 195 196 199
			     205 204 203 197 202 198 206 207 511 577 151 152 150 135 134 133
			   }
  # Group C 1936 techs
  # ######################
  techapps               = { 1010 1190 2010 2290 2450 3010 3070 3130 3190 3250 3320 3400 4010 4120 5010 5080 8010 8020 8030 8040 8050 9010 }
  diplomacy              = { }

  landunit =
  { id       = { type = 30012 id = 1 }
    name     = "1. Corps"
    location = 151
    division =
    { id       = { type = 30012 id = 2 }
      name     = "1st Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 3 }
    name     = "2. Corps"
    location = 152
    division =
    { id       = { type = 30012 id = 4 }
      name     = "2nd Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 5 }
    name     = "3. Corps"
    location = 187
    division =
    { id       = { type = 30012 id = 6 }
      name     = "3rd Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 7 }
    name     = "4. Corps"
    location = 188
    division =
    { id       = { type = 30012 id = 8 }
      name     = "4th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 9 }
    name     = "5. Corps"
    location = 199
    division =
    { id       = { type = 30012 id = 10 }
      name     = "5th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 11 }
    name     = "6. Corps"
    location = 198
    division =
    { id       = { type = 30012 id = 12 }
      name     = "6th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 13 }
    name     = "7. Corps"
    location = 202
    division =
    { id       = { type = 30012 id = 14 }
      name     = "7th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 15 }
    name     = "8. Corps"
    location = 203
    division =
    { id       = { type = 30012 id = 16 }
      name     = "8th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 17 }
    name     = "9. Corps"
    location = 207
    division =
    { id       = { type = 30012 id = 18 }
      name     = "9th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 19 }
    name     = "10. Corps"
    location = 511
    division =
    { id       = { type = 30012 id = 20 }
      name     = "10th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 21 }
    name     = "11. Corps"
    location = 577
    division =
    { id       = { type = 30012 id = 22 }
      name     = "11th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 23 }
    name     = "12. Corps"
    location = 206
    division =
    { id       = { type = 30012 id = 24 }
      name     = "12th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 25 }
    name     = "13. Corps"
    location = 205
    division =
    { id       = { type = 30012 id = 26 }
      name     = "13th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 27 }
    name     = "14. Corps"
    location = 204
    division =
    { id       = { type = 30012 id = 28 }
      name     = "14th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 29 }
    name     = "15. Corps"
    location = 197
    division =
    { id       = { type = 30012 id = 30 }
      name     = "15th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 31 }
    name     = "16. Corps"
    location = 196
    division =
    { id       = { type = 30012 id = 32 }
      name     = "16th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 33 }
    name     = "17. Corps"
    location = 194
    division =
    { id       = { type = 30012 id = 34 }
      name     = "17th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 35 }
    name     = "18. Corps"
    location = 193
    division =
    { id       = { type = 30012 id = 170 }
      name     = "18th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 36 }
    name     = "19. Corps"
    location = 145
    division =
    { id       = { type = 30012 id = 37 }
      name     = "19th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 38 }
    name     = "20. Corps"
    location = 142
    division =
    { id       = { type = 30012 id = 39 }
      name     = "20th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 40 }
    name     = "21. Corps"
    location = 141
    division =
    { id       = { type = 30012 id = 41 }
      name     = "21st Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 42 }
    name     = "22. Corps"
    location = 140
    division =
    { id       = { type = 30012 id = 43 }
      name     = "22nd Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 44 }
    name     = "23. Corps"
    location = 138
    division =
    { id       = { type = 30012 id = 45 }
      name     = "23rd Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 46 }
    name     = "24. Corps"
    location = 137
    division =
    { id       = { type = 30012 id = 47 }
      name     = "24th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 48 }
    name     = "25. Corps"
    location = 131
    division =
    { id       = { type = 30012 id = 49 }
      name     = "25th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 50 }
    name     = "26. Corps"
    location = 133
    division =
    { id       = { type = 30012 id = 51 }
      name     = "26th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 52 }
    name     = "27. Corps"
    location = 127
    division =
    { id       = { type = 30012 id = 53 }
      name     = "27th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 54 }
    name     = "28. Corps"
    location = 122
    division =
    { id       = { type = 30012 id = 55 }
      name     = "28th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 56 }
    name     = "29. Corps"
    location = 120
    division =
    { id       = { type = 30012 id = 57 }
      name     = "29th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 58 }
    name     = "30. Corps"
    location = 114
    division =
    { id       = { type = 30012 id = 59 }
      name     = "30th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 60 }
    name     = "31. Corps"
    location = 102
    division =
    { id       = { type = 30012 id = 61 }
      name     = "31st Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 62 }
    name     = "32. Corps"
    location = 101
    division =
    { id       = { type = 30012 id = 63 }
      name     = "32nd Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 64 }
    name     = "33. Corps"
    location = 103
    division =
    { id       = { type = 30012 id = 65 }
      name     = "33rd Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 66 }
    name     = "34. Corps"
    location = 100
    division =
    { id       = { type = 30012 id = 67 }
      name     = "34th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 68 }
    name     = "35. Corps"
    location = 97
    division =
    { id       = { type = 30012 id = 69 }
      name     = "35th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 70 }
    name     = "36. Corps"
    location = 95
    division =
    { id       = { type = 30012 id = 71 }
      name     = "36th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 72 }
    name     = "37. Corps"
    location = 96
    division =
    { id       = { type = 30012 id = 73 }
      name     = "37th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 74 }
    name     = "38. Corps"
    location = 93
    division =
    { id       = { type = 30012 id = 75 }
      name     = "38th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 76 }
    name     = "39. Corps"
    location = 98
    division =
    { id       = { type = 30012 id = 77 }
      name     = "39th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 78 }
    name     = "40. Corps"
    location = 107
    division =
    { id       = { type = 30012 id = 79 }
      name     = "40th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 80 }
    name     = "41. Corps"
    location = 108
    division =
    { id       = { type = 30012 id = 81 }
      name     = "41st Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 82 }
    name     = "42. Corps"
    location = 109
    division =
    { id       = { type = 30012 id = 83 }
      name     = "42nd Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 84 }
    name     = "43. Corps"
    location = 110
    division =
    { id       = { type = 30012 id = 85 }
      name     = "43rd Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 86 }
    name     = "44. Corps"
    location = 117
    division =
    { id       = { type = 30012 id = 87 }
      name     = "44th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 88 }
    name     = "45. Corps"
    location = 118
    division =
    { id       = { type = 30012 id = 89 }
      name     = "45th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 90 }
    name     = "46. Corps"
    location = 124
    division =
    { id       = { type = 30012 id = 91 }
      name     = "46th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 92 }
    name     = "47. Corps"
    location = 125
    division =
    { id       = { type = 30012 id = 93 }
      name     = "47th Infantry Division"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 30012 id = 218 }
    name     = "Armored Corps"
    location = 101
    division =
    { type  = armor
      model = 0
      id    = { type = 30012 id = 219 }
      name  = "1st Armored Division"
    }
    division =
    { type  = armor
      model = 0
      id    = { type = 30012 id = 220 }
      name  = "2nd Armored Division"
    }
    division =
    { type  = armor
      model = 0
      id    = { type = 30012 id = 221 }
      name  = "3rd Armored Division"
    }
    division =
    { type  = armor
      model = 0
      id    = { type = 30012 id = 222 }
      name  = "4th Armored Division"
    }
    division =
    { type  = armor
      model = 0
      id    = { type = 30012 id = 223 }
      name  = "5th Armored Division"
    }
    division =
    { type  = armor
      model = 0
      id    = { type = 30012 id = 224 }
      name  = "6th Armored Division"
    }
  }
  navalunit =
  { id       = { type = 30012 id = 193 }
    name     = "Main Fleet"
    location = 101
    base     = 101
    division =
    { type          = carrier
      model         = 0
      id            = { type = 30012 id = 194 }
      name          = "Carrier 1"
      extra         = cag
      brigade_model = 0
    }
    division =
    { type          = carrier
      model         = 0
      id            = { type = 30012 id = 195 }
      name          = "Carrier 2"
      extra         = cag
      brigade_model = 0
    }
    division =
    { type  = battleship
      model = 0
      id    = { type = 30012 id = 196 }
      name  = "Battleship 1"
    }
    division =
    { type  = battleship
      model = 0
      id    = { type = 30012 id = 197 }
      name  = "Battleship 2"
    }
    division =
    { type  = battlecruiser
      model = 0
      id    = { type = 30012 id = 198 }
      name  = "Battlecruiser 1"
    }
    division =
    { type  = battlecruiser
      model = 0
      id    = { type = 30012 id = 199 }
      name  = "Battlecruiser 2"
    }
    division =
    { type  = heavy_cruiser
      model = 0
      id    = { type = 30012 id = 200 }
      name  = "Heavy Cruiser 1"
    }
    division =
    { type  = heavy_cruiser
      model = 0
      id    = { type = 30012 id = 201 }
      name  = "Heavy Cruiser 2"
    }
    division =
    { type  = light_cruiser
      model = 0
      id    = { type = 30012 id = 202 }
      name  = "Light Cruiser 1"
    }
    division =
    { type  = light_cruiser
      model = 0
      id    = { type = 30012 id = 203 }
      name  = "Light Cruiser 2"
    }
    division =
    { type  = light_cruiser
      model = 0
      id    = { type = 30012 id = 204 }
      name  = "Light Cruiser 3"
    }
    division =
    { type  = light_cruiser
      model = 0
      id    = { type = 30012 id = 205 }
      name  = "Light Cruiser 4"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30012 id = 206 }
      name  = "Destroyer 1"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30012 id = 207 }
      name  = "Destroyer 2"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30012 id = 208 }
      name  = "Destroyer 3"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30012 id = 209 }
      name  = "Destroyer 4"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30012 id = 210 }
      name  = "Destroyer 5"
    }
    division =
    { type  = destroyer
      model = 0
      id    = { type = 30012 id = 211 }
      name  = "Destroyer 6"
    }
    division =
    { type  = transport
      model = 0
      id    = { type = 30012 id = 212 }
      name  = "Transport 1"
    }
    division =
    { type  = transport
      model = 0
      id    = { type = 30012 id = 213 }
      name  = "Transport 2"
    }
    division =
    { type  = submarine
      model = 0
      id    = { type = 30012 id = 214 }
      name  = "Submarine 1"
    }
    division =
    { type  = submarine
      model = 0
      id    = { type = 30012 id = 215 }
      name  = "Submarine 2"
    }
    division =
    { type  = submarine
      model = 0
      id    = { type = 30012 id = 216 }
      name  = "Submarine 3"
    }
    division =
    { type  = submarine
      model = 0
      id    = { type = 30012 id = 217 }
      name  = "Submarine 4"
    }
  }
  airunit =
  { id       = { type = 30012 id = 173 }
    name     = "Bomber Group 1"
    location = 101
    base     = 101
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30012 id = 174 }
      name  = "1st Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30012 id = 175 }
      name  = "2nd Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30012 id = 176 }
      name  = "3rd Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30012 id = 177 }
      name  = "4th Air Wing"
    }
  }
  airunit =
  { id       = { type = 30012 id = 178 }
    name     = "Bomber Group 2"
    location = 101
    base     = 101
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30012 id = 179 }
      name  = "5th Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30012 id = 180 }
      name  = "6th Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30012 id = 181 }
      name  = "7th Air Wing"
    }
    division =
    { type  = tactical_bomber
      model = 0
      id    = { type = 30012 id = 182 }
      name  = "8th Air Wing"
    }
  }
  airunit =
  { id       = { type = 30012 id = 183 }
    name     = "Fighter Group 1"
    location = 101
    base     = 101
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30012 id = 184 }
      name  = "9th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30012 id = 185 }
      name  = "10th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30012 id = 186 }
      name  = "11th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30012 id = 187 }
      name  = "12th Air Wing"
    }
  }
  airunit =
  { id       = { type = 30012 id = 188 }
    name     = "Fighter Group 2"
    location = 101
    base     = 101
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30012 id = 189 }
      name  = "13th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30012 id = 190 }
      name  = "14th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30012 id = 191 }
      name  = "15th Air Wing"
    }
    division =
    { type  = interceptor
      model = 0
      id    = { type = 30012 id = 192 }
      name  = "16th Air Wing"
    }
  }
}
