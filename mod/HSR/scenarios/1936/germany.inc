#
# by Aregorn for HSR2_ARM
#
##############################
# Country definition for GER #
##############################

province =
{ id       = 67
  anti_air = 3
  air_base = { size = 4 current_size = 4 }
}            # Essen
province = { id = 76 anti_air = 2 } # Dortmund
province =
{ id         = 80
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}              # Wilhelmshafen
province =
{ id       = 82
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}            # Kassel
province = { id = 88 anti_air = 2 } # Hamburg
province = { id = 89 anti_air = 1 } # Lübeck
province =
{ id         = 90
  anti_air   = 1
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}              # Kiel
province =
{ id         = 296
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}              # Rostock
province = { id = 298 anti_air = 2 } # Magdeburg
province =
{ id       = 300
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}            # Berlin
province = { id = 304 supplypool = 100 } # Elbing
province = { id = 310 anti_air = 1 } # Leipzig
province = { id = 312 anti_air = 1 } # Nuremberg
province =
{ id       = 313
  anti_air = 3
  air_base = { size = 4 current_size = 4 }
}            # Frankfurt-am-Main
province =
{ id       = 314
  air_base = { size = 4 current_size = 4 }
}            # Stuttgart
province =
{ id       = 376
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}            # Munich
province =
{ id       = 473
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}            # Breslau
province =
{ id         = 510
  anti_air   = 4
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Königsberg

#####################
# Country main data #
#####################

country =
{ tag                    = GER
  peacetime_ic_mod       = 0.9
  capital                = 300
  manpower               = 850
  transports             = 35
  escorts                = 23
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 250
  diplomacy =
  { relation = { tag = ARG value = 75 }
    relation = { tag = AST value = 1 }
    relation =
    { tag        = AUS
      value      = 100
      guaranteed = { day = 30 month = december year = 1932 }
    }
    relation = { tag = BEL value = 20 }
    relation = { tag = BHU value = 1 }
    relation = { tag = BOL value = 15 }
    relation = { tag = BRA value = 50 }
    relation =
    { tag        = BUL
      value      = 25
      guaranteed = { day = 30 month = december year = 1935 }
    }
    relation = { tag = CAN value = 1 }
    relation = { tag = CHL value = 50 }
    relation = { tag = COL value = -20 }
    relation =
    { tag        = CZE
      value      = -25
      guaranteed = { day = 30 month = december year = 1932 }
    }
    relation = { tag = ENG value = 1 }
    relation =
    { tag        = DEN
      value      = 25
      guaranteed = { day = 30 month = december year = 1932 }
    }
    relation = { tag = EST value = 10 }
    relation =
    { tag        = FIN
      value      = 25
      guaranteed = { day = 22 month = august year = 1934 }
    }
    relation = { tag = FRA value = -35 }
    relation = { tag = GRE value = 15 }
    relation = { tag = HOL value = 1 }
    relation = { tag = HUN value = 100 }
    relation = { tag = IRE value = 15 }
    relation = { tag = IRQ value = 25 }
    relation =
    { tag        = ITA
      value      = 50
      guaranteed = { day = 30 month = december year = 1935 }
    }
    relation = { tag = JAP value = 20 }
    relation = { tag = LAT value = 10 }
    relation = { tag = LIT value = 10 }
    relation = { tag = LUX value = -50 }
    relation = { tag = MAN value = 20 }
    relation = { tag = NEP value = 1 }
    relation = { tag = NZL value = 1 }
    relation = { tag = OMN value = 1 }
    relation =
    { tag        = POL
      value      = -10
      guaranteed = { day = 30 month = december year = 1932 }
    }
    relation = { tag = POR value = 75 }
    relation =
    { tag        = ROM
      value      = 50
      guaranteed = { day = 30 month = december year = 1935 }
    }
    relation = { tag = SAF value = 1 }
    relation =
    { tag        = SCH
      value      = 50
      guaranteed = { day = 16 month = may year = 1935 }
    }
    relation = { tag = SOV value = 1 }
    relation = { tag = SPR value = -50 }
    relation =
    { tag        = SWE
      value      = 50
      guaranteed = { day = 30 month = december year = 1935 }
    }
    relation =
    { tag        = TUR
      value      = 10
      guaranteed = { day = 30 month = december year = 1935 }
    }
    relation = { tag = USA value = -10 }
    relation = { tag = YEM value = 1 }
    relation =
    { tag        = YUG
      value      = 50
      guaranteed = { day = 30 month = december year = 1932 }
    }
  }

  SpyInfo                = { country = "GER" NumberOfSpies = 9 }


  nationalprovinces      = { 66  67  74  75  76  80  81  82  83  84  85  86  87  88  89  90  296 297 298 299 300 301 302 304 308 309 310 311 312 313
			     314 315 374 375 376 473 482 510 72  73  316 71
			   }
  ownedprovinces         = { 66  67  74  75  76  80  81  82  83  84  85  86  87  88  89  90  296 297 298 299 300 301 302 304 308 309 310 311 312 313
			     314 315 374 375 376 473 482 510
			   }
  controlledprovinces    = { 66  67  74  75  76  80  81  82  83  84  85  86  87  88  89  90  296 297 298 299 300 301 302 304 308 309 310 311 312 313
			     314 315 374 375 376 473 482 510
			   }
  # Germany 1936 techs
  # ######################
  techapps               = { 4010  4120  4130  4170  4250  2150  2010  2020  2030  2290  2300  2310  2320  2400  2450  2460  2510  1010  1020  1190
			     1200  1210  1220  1110  1310  5010  5020  5080  5090  5190  5310  5470  5480  5490  5550  9010  9020  9030  9040  9050
			     9090  6210  6220  6230  6240  6250  8010  8020  8030  8040  8050  3010  3020  3070  3080  3090
			     3100  3130  3140  3150  3160  3190  3200  3210  3220  3250  3260  3270  3280  3320  3400  3410  14000
			   }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 1
    free_market       = 5
    freedom           = 2
    professional_army = 6
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 1 }
  headofgovernment       = { type = 9 id = 2 }
  foreignminister        = { type = 9 id = 3 }
  armamentminister       = { type = 9 id = 77 }
  ministerofsecurity     = { type = 9 id = 5 }
  ministerofintelligence = { type = 9 id = 6 }
  chiefofstaff           = { type = 9 id = 7 }
  chiefofarmy            = { type = 9 id = 8 }
  chiefofnavy            = { type = 9 id = 9 }
  chiefofair             = { type = 9 id = 10 }
  dormant_leaders        = { 544 545 546 547 548 549 550 551 552 553 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573
			     574 575 576 577 578 579
			   }
###### Wehrmacht ######

	landunit = {
	location = 510
	name = "I. Korps"
	leader = 33 #Busch
	id = { type = 14500 id = 34 }

		division = {
		id = { type = 14500 id = 35 }
		name = "1. Infanterie-Division"
		type = infantry
		experience = 40
		model = 1
		strength  = 100
		extra = engineer
		brigade_model = 22
		}
		division = {
	 	id = { type = 14500 id = 36 }
		name = "11. Infanterie-Division"
		type = infantry
		experience = 40
		model = 1
		extra = engineer
		brigade_model = 22
		}

		division = {
		id = { type = 14500 id = 37 }
		name = "21. Infanterie-Division"
		type = infantry
		experience = 40
		model = 1
		strength  = 100
		extra = engineer
		brigade_model = 22
		}
	}

	landunit = {
	location = 302
	name = "II. Korps"
	leader = 279 #Bock
	id = { type = 14500 id = 38 }

		division = {
	        id = { type = 14500 id = 58 }
		name = "9. Infanterie-Division"
		type = infantry
		experience = 40
		model = 1
		strength  = 100
		extra = engineer
		brigade_model = 22
		}
		division = {
		id = { type = 14500 id = 40 }
		name = "12. Infanterie-Division"
		type = infantry
		experience = 40
		model = 1
		strength  = 100
		extra = engineer
		brigade_model = 22
		}
		division = {
		id = { type = 14500 id = 41 }
		name = "32. Infanterie-Division"
		type = infantry
		experience = 40
		model = 1
		strength  = 100
		extra = engineer
		brigade_model = 22
		}
	}

	landunit = {
	location = 300
	name = "III. Korps"
	leader = 335 #Rundstedt
	id = { type = 14500 id = 42 }

		division = {
		id = { type = 14500 id = 1706 }
		name = "Heeresgruppe A"
		type = hq
		model = 0
		strength = 100
		extra = rocket_artillery
		experience = 40
		}
		division = {
		id = { type = 14500 id = 46 }
		name = "8. Infanterie-Division"
		type = infantry
		experience = 40
		model = 1
		strength  = 100
		extra = engineer
		brigade_model = 22
		}
		division = {
		id = { type = 14500 id = 44 }
		name = "23. Infanterie-Division"
		type = infantry
		experience = 40
		model = 1
		strength  = 100
		extra = engineer
		brigade_model = 22
		}
	}

	landunit = {
	location = 473
	name = "VIII. Korps"
	leader = 52 #Dollmann
	id = { type = 14500 id =  45 }

		division = {
		id = { type = 14500 id = 55 }
		name = "16. Infanterie-Division"
		type = infantry
		model = 1
		strength  = 100
		}
		division = {
	        id = { type = 14500 id = 47 }
		name = "18. Infanterie-Division"
		type = infantry
		model = 1
		strength  = 100
		}
		division = {
	        id = { type = 14500 id = 51 }
		name = "25. Infanterie-Division"
		type = infantry
		model = 1
		strength  = 100
		}
	}

	landunit = {
	location = 314
	name = "V. Korps"
	leader = 316 #Leeb
	id = { type = 14500 id = 49 }

		division = {
	 	id = { type = 14500 id = 50 }
		name = "5. Infanterie-Division"
		type = infantry
		experience = 40
		model = 1
		extra = engineer
		brigade_model = 22
		}
		division = {
		id = { type = 14500 id = 48 }
		name = "28. Infanterie-Division"
		type = infantry
		experience = 40
		model = 1
		strength  = 100
		extra = engineer
		brigade_model = 22
		}
		division = {
		id = { type = 14500 id = 52 }
		name = "35. Infanterie-Division"
		type = infantry
		experience = 40
		model = 1
		strength  = 100
		extra = engineer
		brigade_model = 22
		}
	}

	landunit = {
	location = 81
	name = "VI. Korps"
	leader = 354 #Witzleben
	id = { type = 14500 id = 53 }

		division = {
	        id = { type = 14500 id = 66 }
		name = "4. Infanterie-Division"
		type = infantry
		experience = 40
		model = 1
		strength  = 100
		extra = engineer
		brigade_model = 22
		}
		division = {
		id = { type = 14500 id = 54 }
		name = "6. Infanterie-Division"
		type = infantry
		experience = 40
		model = 1
		strength  = 100
		extra = engineer
		brigade_model = 22
		}
		division = {
		id = { type = 14500 id = 56 }
		name = "26. Infanterie-Division"
		type = infantry
		experience = 40
		model = 1
		strength  = 100
		extra = engineer
		brigade_model = 22
		}
	}

	landunit = {
	location = 82
	name = "IX. Korps"
	leader = 20 #Blaskowitz
	id = { type = 14500 id = 57 }

		division = {
		id = { type = 14500 id = 39 }
		name = "2. Infanterie-Division"
		type = infantry
		model = 1
		strength  = 100
		}
		division = {
	        id = { type = 14500 id = 59 }
		name = "15. Infanterie-Division"
		experience = 40
		type = infantry
		model = 1
		strength  = 100
		extra = engineer
		brigade_model = 22
		}
		division = {
		id = { type = 14500 id = 76 }
		name = "22. Infanterie-Division"
		type = infantry
		model = 1
		strength  = 100
		}
	}

	landunit = {
	location = 76
	name = "XII. Korps"
	leader = 294 #Falken
	id = { type = 14500 id = 61 }

		division = {
		id = { type = 14500 id = 62 }
		name = "33. Infanterie-Division"
		type = infantry
		experience = 40
		model = 1
		strength  = 100
		extra = engineer
		brigade_model = 22
		}
		division = {
		id = { type = 14500 id = 63 }
		name = "34. Infanterie-Division"
		type = infantry
		experience = 40
		model = 1
		strength  = 100
		extra = engineer
		brigade_model = 22
		}
		division = {
		id = { type = 14500 id = 64 }
		name = "36. Infanterie-Division"
		experience = 40
		type = infantry
		model = 1
		strength  = 100
		extra = engineer
		brigade_model = 22
		}
	}

	landunit = {
	location = 311
	name = "IV. Korps"
	leader = 189 #List
	id = { type = 14500 id = 65 }

		division = {
		id = { type = 14500 id = 43  }
		name = "3. Infanterie-Division"
		type = infantry
		model = 1
		strength  = 100
		}
		division = {
		id = { type = 14500 id = 71 }
		name = "10. Infanterie-Division"
		type = infantry
		model = 1
		strength  = 100
		}
		division = {
		id = { type = 14500 id = 67 }
		name = "14. Infanterie-Division"
		type = infantry
		model = 1
		strength  = 100
		}
	}

	landunit = {
	location = 376
	name = "VII. Korps"
	leader = 311 #Kluge
	id = { type = 14500 id = 69 }

		division = {
		id = { type = 14500 id = 70 }
		name = "7. Infanterie-Division"
		type = infantry
		experience = 40
		model = 1
		strength  = 100
		}
		division = {
		id = { type = 14500 id = 68 }
		name = "24. Infanterie-Division"
		type = infantry
		experience = 40
		model = 1
		strength  = 100
		}
		division = {
		id = { type = 14500 id = 73 }
		name = "27. Infanterie-Division"
		type = infantry
		experience = 40
		model = 1
		strength  = 100
		}
	}

	landunit = {
	location = 88
	name = "X. Korps"
	leader = 334 #Reichenau
	id = { type = 14500 id = 74 }

		division = {
	        id = { type = 14500 id = 75 }
		name = "20. Infanterie-Division"
		type = infantry
		model = 1
		strength  = 100
		}
		division = {
	 	id = { type = 14500 id = 60 }
		name = "29. Infanterie-Division"
		type = infantry
		model = 1
		strength  = 100
		}
		division = {
		id = { type = 14500 id = 79 }
		name = "13. Infanterie-Division"
		type = infantry
		model = 1
		strength  = 100
		}
	}

	landunit = {
	location = 86
	name = "XI. Korps"
	leader = 351 #Weich
	id = { type = 14500 id = 78 }

		division = {
		id = { type = 14500 id = 80 }
		name = "19. Infanterie-Division"
		type = infantry
		experience = 40
		model = 1
		strength  = 100
		extra = engineer
		brigade_model = 22
		}
		division = {
	        id = { type = 14500 id = 77 }
		name = "30. Infanterie-Division"
		type = infantry
		experience = 40
		model = 1
		extra = engineer
		brigade_model = 22
		}
		division = {
		id = { type = 14500 id = 81 }
		name = "31. Infanterie-Division"
		type = infantry
		experience = 40
		model = 1
		strength  = 100
		extra = engineer
		brigade_model = 22
		}
	}

	landunit = {
	location = 300
	name = "Kraftfahrkampftruppen"
	leader = 324 #Manstein
	id = { type = 14500 id = 82 }

		division = {
		id = { type = 14500 id = 83 }
		name = "1. Panzer-Division"
		type = light_armor
		experience = 40
		model = 0
		strength  = 100
		extra = light_armor_brigade
		}
		division = {
		id = { type = 14500 id = 84 }
		name = "2. Panzer-Division"
		type = light_armor
		experience = 40
		model = 0
		strength  = 100
		extra = light_armor_brigade
		}
		division = {
		id = { type = 14500 id = 85 }
		name = "3. Panzer-Division"
		type = light_armor
		experience = 40
		model = 0
		strength  = 100
		organisation = 30
		extra = light_armor_brigade
		}
	}

 ###### Kriegsmarine ######

	navalunit = {
		name = "Kriegsmarine"
		leader = 409 #Raeder
		id = { type = 14500 id = 1 }
		location = 80
		base = 80
		division = { id = { type = 14500 id = 2 } name = "KMS Deutschland"	type = heavy_cruiser model = 3 extra = naval_fire_controll_l brigade_model = 0 experience = 20}
		division = { id = { type = 14500 id = 3 } name = "KMS Admiral Scheer"	type = heavy_cruiser model = 3 extra = naval_fire_controll_l brigade_model = 0 experience = 20}
		division = { id = { type = 14500 id = 4 } name = "KMS Nürnberg"		type = light_cruiser model = 3 }
		division = { id = { type = 14500 id = 5 } name = "KMS Leipzig"		type = light_cruiser model = 3 }
		division = { id = { type = 14500 id = 6 } name = "KMS Königsberg"	type = light_cruiser model = 2 }
		division = { id = { type = 14500 id = 7 } name = "KMS Karlsruhe"	type = light_cruiser model = 2 }
		division = { id = { type = 14500 id = 8 } name = "KMS Köln"		type = light_cruiser model = 2 }
		division = { id = { type = 14500 id = 9 } name = "KMS Emden"		type = light_cruiser model = 1 }
		division = { id = { type = 17750 id = 10 } name = "KMS Graf Spee" 	type = battlecruiser model = 3 extra = naval_fire_controll_l brigade_model = 0 experience = 40}
		}

	navalunit = {
		name = "Baltische Flotte"
		leader = 413 #Saalwächter
		id = { type = 14500 id = 28 }
		location = 89
		base = 89
		division = { id = { type = 14500 id = 29 } name = "KMS Schleswig-Holstein" type = battlecruiser model = 0 }
		division = { id = { type = 14500 id = 30 } name = "KMS Schlesien" type = battlecruiser model = 0 }
		division = { id = { type = 14500 id = 31 } name = "1. Torpedobootegeschwader" type = destroyer model = 0 }
		division = { id = { type = 14500 id = 32 } name = "2. Torpedobootegeschwader" type = destroyer model = 0 }
		division = { id = { type = 14500 id = 33 } name = "3. Torpedobootegeschwader" type = destroyer model = 0 }
	}

  navalunit =
  { name     = "II. Unterseebootsflotte"
    id       = { type = 14500 id = 20 }
    location = 90
    base     = 90
    division =
    { id    = { type = 14500 id = 21 }
      name  = "2. Unterseebootsflottille"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 14500 id = 25 }
      name  = "3. Unterseebootsflottille"
      type  = submarine
      model = 1
    }
  }
  navalunit =
  { name     = "I. Unterseebootsflotte"
    id       = { type = 14500 id = 26 }
    location = 80
    base     = 80
    division =
    { id    = { type = 14500 id = 27 }
      name  = "1. Unterseebootsflottille"
      type  = submarine
      model = 1
    }
  }


###### Luftwaffe ######

  airunit =
  { location = 300
    id       = { type = 14500 id = 86 }
    name     = "Luftflotte II"
    base     = 300
    division =
    { id       = { type = 14500 id = 87 }
      name     = "KG 2 'Holzhammer'"
      strength = 100
      type     = tactical_bomber
      experience = 40
      model    = 0
    }
    division =
    { id       = { type = 14500 id = 88 }
      name     = "KG 3 'Blitz'"
      strength = 100
      type     = tactical_bomber
      experience = 40
      model    = 0
    }
    division =
    { id       = { type = 14500 id = 89 }
      name     = "Sturzkampfgeschwader 51"
      strength = 100
      type     = tactical_bomber
      experience = 40
      model    = 0
    }
    division =
    { id            = { type = 14500 id = 90 }
      name          = "JG 2 'Richthofen'"
      strength      = 100
      type          = interceptor
      model         = 0
      experience = 40
      brigade_model = 1
    }
    division =
    { id            = { type = 14500 id = 91 }
      name          = "JG 26 'Schlageter'"
      strength      = 100
      type          = interceptor
      model         = 0
      experience = 40
      brigade_model = 1
    }
  }
  airunit =
  { location = 473
    id       = { type = 14500 id = 95 }
    name     = "Luftflotte III"
    base     = 473
    division =
    { id       = { type = 14500 id = 96 }
      name     = "KG 53 'Legion Condor'"
      strength = 100
      type     = tactical_bomber
      experience = 40
      model    = 0
    }
    division =
    { id       = { type = 14500 id = 97 }
      name     = "Kampfgeschwader 25"
      strength = 100
      type     = tactical_bomber
      experience = 40
      model    = 0
    }
    division =
    { id       = { type = 14500 id = 98 }
      name     = "KG 30 'Adler'"
      strength = 100
      type     = tactical_bomber
      experience = 40
      model    = 0
    }
  }
  airunit =
  { location = 82
    id       = { type = 14500 id = 99 }
    name     = "Luftflotte IV"
    base     = 82
    division =
    { id       = { type = 14500 id = 100 }
      name     = "KG 1 'Hindenburg'"
      strength = 100
      type     = tactical_bomber
      experience = 40
      model    = 0
    }
    division =
    { id       = { type = 14500 id = 101 }
      name     = "JG 3 'Udet'"
      strength = 100
      type     = interceptor
      experience = 40
      model    = 0
    }
  }
  airunit =
  { location = 376
    id       = { type = 14500 id = 102 }
    name     = "Luftflotte V"
    base     = 376
    division =
    { id       = { type = 14500 id = 103 }
      name     = "KG 4 'General Wever'"
      strength = 100
      type     = tactical_bomber
      experience = 40
      model    = 0
    }
  }

########################################
# AI Garrisons & Dormant Divisions
########################################

	landdivision = {
		dormant = yes
	        	id = { type = 14500 id = 104 }
			name = "Panzerarmee Afrika HQ"
			type = hq
			model = 1
			extra = rocket_artillery
			brigade_model = 23
			experience = 40
		}
	landdivision = {
		dormant = yes
	        	id = { type = 14500 id = 105 }
			name = "15. Panzer-Division"
			type = armor
			model = 2
			extra = sp_rct_artillery
			brigade_model = 0
			experience = 40
		}
	landdivision = {
		dormant = yes
	        	id = { type = 14500 id = 106 }
			name = "21. Panzer-Division"
			type = armor
			model = 2
			extra = sp_artillery
			brigade_model = 1
			experience = 40
		}
	landdivision = {
		dormant = yes
	        	id = { type = 14500 id = 107 }
			name = "5. Panzer-Division"
			type = armor
			model = 2
			extra = sp_artillery
			brigade_model = 1
			experience = 40
		}
	landdivision = {
		dormant = yes
	        	id = { type = 14500 id = 108 }
			name = "90. Light-Division"
			type = motorized
			model = 1
			extra = engineer
			brigade_model = 23
			experience = 40
		}
	landdivision = {
		dormant = yes
	        	id = { type = 14500 id = 109 }
			name = "164. Light-Division"
			type = motorized
			model = 1
			extra = engineer
			brigade_model = 23
			experience = 40
		}
	landdivision = {
		dormant = yes
	        	id = { type = 14500 id = 110 }
			name = "15. Panzer-Division"
			type = armor
			model = 2
			extra = sp_artillery
			brigade_model = 1
			experience = 40
		}
	landdivision = {
		dormant = yes
	        	id = { type = 14500 id = 111 }
			name = "21. Panzer-Division"
			type = armor
			model = 2
			extra = sp_artillery
			brigade_model = 1
			experience = 40
		}
	landdivision = {
		dormant = yes
	        	id = { type = 14500 id = 112 }
			name = "90. Light-Division"
			type = motorized
			model = 1
			extra = engineer
			brigade_model = 23
			experience = 40
		}
	landdivision = {
		dormant = yes
	        	id = { type = 14500 id = 113 }
			name = "164. Light-Division"
			type = motorized
			model = 1
			extra = engineer
			brigade_model = 23
			experience = 40
		}
	landdivision = {
		dormant = yes
	        	id = { type = 14500 id = 114 }
			name = "7. Flieger-Division"
			type = paratrooper
			model = 0
			extra = engineer
			brigade_model = 22
			experience = 40
		}
	landdivision = {
		dormant = yes
	        	id = { type = 14500 id = 115 }
			name = "22. Luftlande-Division"
			type = paratrooper
			model = 0
			extra = engineer
			brigade_model = 22
			experience = 20
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 14500 id = 116 }
			name = "Atlantic Wall"
			type = infantry
			model = 2
			extra = engineer
			brigade_model = 23
			experience = 40
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 14500 id = 117 }
			name = "Atlantic Wall"
			type = infantry
			model = 2
			extra = engineer
			brigade_model = 23
			experience = 40
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 14500 id = 118 }
			name = "Atlantic Wall"
			type = infantry
			model = 2
			extra = engineer
			brigade_model = 23
			experience = 40
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 14500 id = 119 }
			name = "Atlantic Wall"
			type = infantry
			model = 2
			extra = engineer
			brigade_model = 23
			experience = 40
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 14500 id = 120 }
			name = "Atlantic Wall"
			type = infantry
			model = 2
			extra = engineer
			brigade_model = 23
			experience = 40
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 14500 id = 121 }
			name = "Atlantic Wall"
			type = infantry
			model = 2
			extra = engineer
			brigade_model = 23
			experience = 40
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 14500 id = 122 }
			name = "Atlantic Wall"
			type = infantry
			model = 2
			extra = engineer
			brigade_model = 23
			experience = 40
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 14500 id = 123 }
			name = "Atlantic Wall"
			type = infantry
			model = 2
			extra = engineer
			brigade_model = 23
			experience = 40
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 14500 id = 124 }
			name = "Atlantic Wall"
			type = infantry
			model = 2
			extra = engineer
			brigade_model = 23
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 14500 id = 125 }
			name = "Paris"
			type = armor
			model = 2
			extra = sp_artillery
		}

	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 14500 id = 126 }
			name = "Atlantic Wall"
			type = infantry
			model = 2
			extra = engineer
			brigade_model = 23
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 14500 id = 127 }
			name = "Atlantic Wall"
			type = infantry
			model = 2
			extra = engineer
			brigade_model = 23
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 14500 id = 128 }
			name = "Atlantic Wall"
			type = infantry
			model = 2
			extra = engineer
			brigade_model = 23
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 14500 id = 129 }
			name = "Atlantic Wall"
			type = infantry
			model = 2
			extra = engineer
			brigade_model = 23
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 14500 id = 130 }
			name = "Atlantic Wall"
			type = infantry
			model = 2
			extra = engineer
			brigade_model = 23
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 14500 id = 131 }
			name = "Kiev"
			type = infantry
			model = 2
			extra = engineer
			brigade_model = 23
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 14500 id = 132 }
			name = "Temp"
			type = infantry
			model = 2
			extra = engineer
			brigade_model = 23
		}

##### Leicht


landdivision = {
		dormant = yes
	        	id = { type = 14500 id = 133 }
			name = "1. Leicht-Division"
			type = cavalry
			model = 7
			experience = 40
		}
landdivision = {
		dormant = yes
	        	id = { type = 14500 id = 134 }
			name = "2. Leicht-Division"
			type = cavalry
			model = 7
			experience = 40
		}
landdivision = {
		dormant = yes
	        	id = { type = 14500 id = 135 }
			name = "3. Leicht-Division"
			type = cavalry
			model = 7
			experience = 40
		}
landdivision = {
		dormant = yes
	        	id = { type = 14500 id = 136 }
			name = "4. Leicht-Division"
			type = cavalry
			model = 7
			experience = 40
		}
landdivision = {
		dormant = yes
	        	id = { type = 14500 id = 137 }
			name = "6. Panzer-Division"
			type = armor
			model = 2
			strength  = 30
			experience = 100
		}
landdivision = {
		dormant = yes
	        	id = { type = 14500 id = 138 }
			name = "7. Panzer-Division"
			type = armor
			model = 2
			strength  = 30
			experience = 100
		}
landdivision = {
		dormant = yes
	        	id = { type = 14500 id = 139 }
			name = "6. Panzer-Division"
			type = light_armor
			model = 2
			strength  = 5
			experience = 100
		}
landdivision = {
		dormant = yes
	        	id = { type = 14500 id = 140 }
			name = "7. Panzer-Division"
			type = light_armor
			model = 2
			strength  = 5
			experience = 100
		}
############ SS

landdivision = {
		dormant = yes
	        	id = { type = 14500 id = 141 }
			name = "SS-Division V.T."
			type = motorized
			model = 0
			extra = super_heavy_armor
			strength  = 25
			experience = 100
		}
landdivision = {
		dormant = yes
	        	id = { type = 14500 id = 142 }
			name = "3. SS-Panzer-Div. 'Totenkopf'"
			type = armor
			model = 2
			extra = super_heavy_armor
			strength  = 5
			experience = 100
		}
landdivision = {
		dormant = yes
	        	id = { type = 14500 id = 143 }
			name = "Polizei-Division"
			type = infantry
			model = 2
			extra = engineer
			brigade_model = 23
			experience = 40
		}
landdivision = {
		dormant = yes
	        	id = { type = 14500 id = 144 }
			name = "2. SS-Panzer-Div. 'Das Reich'"
			type = light_armor
			model = 2
			extra = super_heavy_armor
			strength  = 65
			experience = 80
		}
landdivision = {
		dormant = yes
	        	id = { type = 14500 id = 145 }
			name = "5. SS-Panzer-Div. Wiking"
			type = armor
			model = 2
			extra = super_heavy_armor
			strength  = 5
			experience = 100
}
landdivision = {
		dormant = yes
	        	id = { type = 14500 id = 149 }
			name = "4. SS-Polizei PzG-Div."
			type = mechanized
			model = 0
			extra = super_heavy_armor
			brigade_model = 1
			strength  = 50
			experience = 80
}
landdivision = {
		dormant = yes
	        	id = { type = 14500 id = 151 }
			name = "temp"
			type = armor
			model = 3
			extra = super_heavy_armor
			brigade_model = 1
			strength  = 20
			experience = 100
}
###### A.I.

	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 14500 id = 152 }
			name = "41. Festungs-Division"
			type = garrison
			model = 1
			extra = police
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 14500 id = 153 }
			name = "133. Festungs-Division"
			type = garrison
			model = 1
			extra = police
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 14500 id = 154 }
			name = "232. Infanterie-Division"
			type = garrison
			model = 1
			extra = police
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 14500 id = 155 }
			name = "Reserve-Gebirgs-Division"
			type = garrison
			model = 1
			extra = police
		}

###### Motorised formations

	landdivision = {
		dormant = yes
		id = { type = 14500 id = 156 }
		name = "2. Infanterie-Division (Mot)"
		type = motorized
		model = 0
		strength  = 100
		extra = engineer
		brigade_model = 23
		experience = 40
		}
	landdivision = {
		dormant = yes
		id = { type = 14500 id = 157 }
		name = "13. Infanterie-Division (Mot)"
		type = motorized
		model = 0
		strength  = 100
		extra = engineer
		brigade_model = 23
		experience = 40
		}
	landdivision = {
		dormant = yes
		id = { type = 14500 id = 158 }
		name = "20. Infanterie-Division (Mot)"
		type = motorized
		model = 0
		strength  = 100
		extra = engineer
		brigade_model = 23
		experience = 40
		}
	landdivision = {
		dormant = yes
		id = { type = 14500 id = 159 }
		name = "29. Infanterie-Division (Mot)"
		type = motorized
		model = 0
		strength  = 100
		extra = engineer
		brigade_model = 23
		experience = 40
		}

	landdivision = {
		dormant = yes
		id = { type = 14500 id = 160 }
		name = "3. Infanterie-Division (Mot)"
		type = motorized
		model = 0
		strength  = 100
		extra = engineer
		brigade_model = 23
		experience = 40
		}
	landdivision = {
		dormant = yes
		id = { type = 14500 id = 161 }
		name = "10. Infanterie-Division (Mot)"
		type = motorized
		model = 0
		strength  = 100
		extra = engineer
		brigade_model = 23
		experience = 40
		}
	landdivision = {
		dormant = yes
		id = { type = 14500 id = 162 }
		name = "14. Infanterie-Division (Mot)"
		type = motorized
		model = 0
		strength  = 100
		extra = engineer
		brigade_model = 23
		experience = 40
		}

	landdivision = {
		dormant = yes
		id = { type = 14500 id = 163 }
		name = "16. Infanterie-Division (Mot)"
		type = motorized
		model = 0
		strength  = 100
		extra = engineer
		brigade_model = 23
		experience = 40
		}
	landdivision = {
		dormant = yes
		id = { type = 14500 id = 164 }
		name = "18. Infanterie-Division (Mot)"
		type = motorized
		model = 0
		strength  = 100
		extra = engineer
		brigade_model = 23
		experience = 40
		}
	landdivision = {
		dormant = yes
		id = { type = 14500 id = 165 }
		name = "25. Infanterie-Division (Mot)"
		type = motorized
		model = 0
		strength  = 100
		extra = engineer
		brigade_model = 23
		experience = 40
		}

###### Blue

	landdivision = {
		dormant = yes
	        	id = { type = 14500 id = 166 }
			name = "Division Azul A"
			type = infantry
			model = 2
			extra = engineer
			brigade_model = 23
			experience = 40
		}
	landdivision = {
		dormant = yes
	        	id = { type = 14500 id = 167 }
			name = "Division Azul B"
			type = infantry
			model = 2
			extra = engineer
			brigade_model = 23
			experience = 40
		}
###### Condor

airdivision = {
		dormant = yes
	        	id = { type = 14500 id = 606 }
			name = "KG 53 'Legion Condor'"
			type = tactical_bomber
			model = 2
			extra = escort
			brigade_model = 0
			strength  = 100
			experience = 40
}
airdivision = {
		dormant = yes
	        	id = { type = 14500 id = 607 }
			name = "JG 2 'Richthofen'"
			type = multi_role
			model = 0
			strength  = 100
			experience = 40
}

###### Z Plan

navaldivision = {
		dormant = yes
	        	id = { type = 14500 id = 608 }
			name = "KMS Bismarck"
			type = battleship
			model = 3
			strength  = 100
			extra = naval_fire_controll_l
			brigade_model = 0
			experience = 40
}
navaldivision = {
		dormant = yes
	        	id = { type = 14500 id = 609 }
			name = "KMS Tirpitz"
			type = battleship
			model = 3
			strength  = 100
			extra = naval_fire_controll_l
			brigade_model = 0
			experience = 40
}
navaldivision = {
		dormant = yes
	        	id = { type = 14500 id = 610 }
			name = "KMS Graf Zeppelin"
			type = carrier
			model = 2
			extra = cag
			brigade_model = 3
			strength  = 100
			experience = 40
}
navaldivision = {
		dormant = yes
	        	id = { type = 14500 id = 611 }
			name = "KMS Graf Zeppelin"
			type = carrier
			model = 3
			extra = cag
			brigade_model = 3
			strength  = 100
			experience = 40
}
#####under developement#####


division_development = {
	name = "1. Truppentransporterflottille"
	type = transport
	model = 0
	cost = 5.0
	id = { type = 14500 id = 503 }
	date = { year = 1936 month = january day = 10 }
	}
division_development = {
	name = "2. Truppentransporterflottille"
	type = transport
	model = 0
	cost = 5.0
	id = { type = 14500 id = 504 }
	date = { year = 1936 month = january day = 10 }
	}
division_development = {
	name = "3. Truppentransporterflottille"
	type = transport
	model = 0
	cost = 5.0
	id = { type = 14500 id = 505 }
	date = { year = 1936 month = january day = 10 }
	}
###
division_development = {
	name = "KMS Gneisenau"
	id = { type = 30510 id = 600 }
	type = battlecruiser
	model = 3
	extra = naval_fire_controll_l
	brigade_model = 0
	cost = 4.6
	date = { year = 1937 month = february day = 21 }
}
division_development = {
	name = "KMS Scharnhorst"
	id = { type = 30510 id = 601 }
	type = battlecruiser
	model = 3
	extra = naval_fire_controll_l
	brigade_model = 0
	cost = 3.8
	date = { year = 1937 month = february day = 7 }
}
division_development = {
	name = "KMS Admiral Hipper"
	id = { type = 30510 id = 602 }
	type = heavy_cruiser
	model = 3
	extra = naval_fire_controll_l
	brigade_model = 0
	cost = 1.7
	date = { year = 1936 month = july day = 0 }
}
division_development = {
	name = "KMS Blücher"
	id = { type = 30510 id = 603 }
	type = heavy_cruiser
	model = 3
	extra = naval_fire_controll_l
	brigade_model = 0
	cost = 1.6
	date = { year = 1936 month = july day = 0 }
}

division_development = {
	name = "1. Zerstörergeschwader"
	type = destroyer
	model = 2
	brigade_model = 0
	cost = 0.5
	id = { type = 14500 id = 604 }
	date = { year = 1936 month = february day = 10 }
}
division_development = {
	name = "2. Zerstörergeschwader"
	type = destroyer
	model = 2
	brigade_model = 0
	cost = 0.6
	id = { type = 14500 id = 605 }
	date = { year = 1936 month = february day = 10 }
}
}
