#Anti Aircraft Batteries
province = { id = 76   anti_air = 2 } #Köln
province = { id = 67   anti_air = 2 } #Essen
province = { id = 74   anti_air = 2 } #Saarbrücken
province = { id = 82   anti_air = 2 } #Frankfurt-am-Main
province = { id = 313   anti_air = 2 } #Mannheim
province = { id = 314   anti_air = 1 } #Stuttgart

#Wilhelmshafen
province = {
	id = 80
	anti_air = 1
	naval_base = {
		size = 10
		current_size = 10
	}
	air_base = {
		size = 5
		current_size = 5
	}
}


province = {
	id = 75
	air_base = {
		size = 5
		current_size = 5
	}
}
province = {
	id = 314
	air_base = {
		size = 5
		current_size = 5
	}
}

#ruhr
province = {
	id = 76
	air_base = {
		size = 10
		current_size = 10
	}
}
#ruhr
province = {
	id = 67
	air_base = {
		size = 10
		current_size = 10
	}
}

#fam
province = {
	id = 81
	air_base = {
		size = 10
		current_size = 10
	}
}

province = { id = 310   anti_air = 1 } #Leipzig
province = { id = 510   anti_air = 1 } #Königsberg


country = {
    tag = GER
	ai = "fallgelb_ger.ai"

    policy = {
	date = { year = 0 month = january day = 0 }
	democratic = 1
	political_left = 1
	free_market = 5
	freedom = 2
	professional_army = 5
	defense_lobby = 10
	interventionism = 10
    }

	headofstate = { type = 9 id = 1 }
	headofgovernment = { type = 9 id = 2 }
	foreignminister = { type = 9 id = 55 }
	armamentminister = { type = 9 id = 80 }
	ministerofsecurity = { type = 9 id = 108 }
	ministerofintelligence = { type = 9 id = 6 }
	chiefofstaff = { type = 9 id = 156 }
	chiefofarmy = { type = 9 id = 176 }
	chiefofnavy = { type = 9 id = 9 }
	chiefofair = { type = 9 id = 10 }

	capital = 67

	manpower = 850

	transports = 35
	escorts = 23

	# Resource Reserves
	# Resource Reserves
	oil 	=	5000
	supplies =	5000
	extra_tc = 125

	free = 		{
		oil 	=	60
		supplies =	250
		ic = 80
	}

    ownedprovinces =
	{
		67 74 75 76 80 81 313 314 315 66 86
	}
    controlledprovinces =
	{
		67 74 75 76 80 81 313 314 315 66 86
	}
    nationalprovinces =
	{
		67 74 75 76 80 81 313 314 315 66 86
		# Elsass-Lothringen
		72 73 316
		# Luxemburg
		71
	}
	techapps = {
# Germany 1939 techs
#######################

4010 4020 4030 # Basic Interceptor (bf-109E Emil)

4040 4050 # Basic MR (bf-109E Jabo)/Basic Escort (bf-110)

4120 4130 4140 # Basic medium bomber

4170 # Basic CAS (Ju-87)

4190

4220

4250 # Basic transport (Ju-52)

2150 # Basic Armoured Car

2010 2020 2040 2050 # Improved light tank

2030 2070 # Basic Medium (Pz.IV)

2290 2300 2310 2320 2330 # Basic WWII artillery (105mm)

2400 # Basic AT

2450 2460 # Early Static AA

2510 # Basic AA

1010 1020 1030 # Early infantry

1190 1200 1210 1220 # Semi-moto Cavalry

1230 # Basic Motorized

1110 1120 1070 1080 # Basic Mountain/Basic para

1310 1340 # Supply/repair - basics only

5010 5020 5030 # Mechanized Agriculture (up to fertilizers)

5050 5060 # Improved Machine Tools

5080 5090 5100 # Construction (up to the forts)

5110 5120 5130 5180 # Assembly line experiments

5190 5200 # Imp. oil conversion

5310 5320 # Basic CT machine

5350 5360 # Encryption/decryption

5470 5480 5490 # Nukes faculty

5550

9010 9020 9030 9040 9050 9060 9070 9080 9090 9100 9110 9120  9140 9270 9290

9190 9200 # Mostly bomber doctrines (air)

6210 6220 6230 6240 6250 6260 # up to Blitzkrieg (land)

5070

# tech apps
		8010 8020 8030 8040 8050
1240 1130 4280 4070
	}



### Germany OOB 1940 Author: mh ###
landunit = { location = 86 id = { type = 10000 id = 1 } name = "18. Armee Reserve"
division = { id = { type = 10000 id = 2 } name = "208. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 3 } name = "225. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 4 } name = "9. Panzer Division" strength = 100 experience = 88 type = light_armor model = 2 }
}
landunit = { location = 80 id = { type = 10000 id = 6 } name = "X. Korps"
division = { id = { type = 10000 id = 7 } name = "SS LAH " strength = 100             offensive = { year = 1940 month = june day = 8 hour = 0 } experience = 88 type = motorized model = 1 }
division = { id = { type = 10000 id = 8 } name = "207. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 9 } name = "1. Kavallerie Division" strength = 100 experience = 80 type = cavalry model = 2 }
division = { id = { type = 10000 id = 10 } name = "227. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
}
landunit = { location = 81 id = { type = 10000 id = 12 } name = "XXVI. Korps "
division = { id = { type = 10000 id = 13 } name = "SS Verfügungstruppen"             offensive = { year = 1940 month = june day = 8 hour = 0 } strength = 100 experience = 85 type = motorized model = 1 }
division = { id = { type = 10000 id = 14 } name = "256. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
}
landunit = { location = 81 id = { type = 10000 id = 16 } name = "XXVI. Korps "
division = { id = { type = 10000 id = 17 } name = "269. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 18 } name = "253. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
}
landunit = { location = 81 id = { type = 10000 id = 20 } name = "IV. Korps "
division = { id = { type = 10000 id = 21 } name = "18. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 22 } name = "35. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
}
landunit = { location = 81 id = { type = 10000 id = 24 } name = "6. Armee Reserve"
division = { id = { type = 10000 id = 25 } name = "255. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 26 } name = "223. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
}
landunit = { location = 76 id = { type = 10000 id = 28 } name = "I. Korps"
division = { id = { type = 10000 id = 29 } name = "63. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 30 } name = "216. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 31 } name = "1. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 32 } name = "11. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
}
landunit = { location = 76 id = { type = 10000 id = 34 } name = "XVI. Panzer Korps"
division = { id = { type = 10000 id = 35 } name = "3. Panzer Division"             offensive = { year = 1940 month = june day = 8 hour = 0 } strength = 100 experience = 88 type = light_armor model = 2 }
division = { id = { type = 10000 id = 36 } name = "4. Panzer Division"             offensive = { year = 1940 month = june day = 8 hour = 0 } strength = 100 experience = 88 type = light_armor model = 2 }
division = { id = { type = 10000 id = 37 } name = "20. Infanterie Division (mot.)"             offensive = { year = 1940 month = june day = 8 hour = 0 } strength = 100 experience = 88 type = motorized model = 1 }
}
landunit = { location = 76 id = { type = 10000 id = 39 } name = "XI. Korps"
division = { id = { type = 10000 id = 40 } name = "7. Infanterie Division " strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 41 } name = "14. Infanterie Division " strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 42 } name = "31. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
}
landunit = { location = 76 id = { type = 10000 id = 44 } name = "IX. Korps"
division = { id = { type = 10000 id = 45 } name = "19. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 46 } name = "30. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 47 } name = "65. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
}
landunit = { location = 76 id = { type = 10000 id = 49 } name = "V. Korps"
division = { id = { type = 10000 id = 50 } name = "251. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 51 } name = "267. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
}
landunit = { location = 67 id = { type = 10000 id = 53 } name = "4. Armee Reserve"
division = { id = { type = 10000 id = 54 } name = "87. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 55 } name = "211. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 56 } name = "263. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
}
landunit = { location = 66 id = { type = 10000 id = 58 } name = "XV Panzer Korps"
division = { id = { type = 10000 id = 59 } name = "5. Panzer Division"             offensive = { year = 1940 month = june day = 8 hour = 0 } strength = 100 experience = 88 type = light_armor model = 2 }
division = { id = { type = 10000 id = 60 } name = "7. Panzer Division"             offensive = { year = 1940 month = june day = 8 hour = 0 } strength = 100 experience = 88 type = light_armor model = 2 }
division = { id = { type = 10000 id = 61 } name = "62 Infanterie Division"             offensive = { year = 1940 month = june day = 8 hour = 0 } strength = 100 experience = 80 type = motorized model = 1 }
}
landunit = { location = 66 id = { type = 10000 id = 63 } name = "II. Korps"
division = { id = { type = 10000 id = 64 } name = "12. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 65 } name = "32. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
}
landunit = { location = 66 id = { type = 10000 id = 67 } name = "VIII. Korps"
division = { id = { type = 10000 id = 68 } name = "8. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 69 } name = "28. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
}
landunit = { location = 66 id = { type = 10000 id = 71 } name = "III. Korps"
division = { id = { type = 10000 id = 72 } name = "3. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 73 } name = "23. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
}
landunit = { location = 75 id = { type = 10000 id = 75 } name = "XLI. Korps"
division = { id = { type = 10000 id = 76 } name = "6. Panzer Division"             offensive = { year = 1940 month = june day = 8 hour = 0 } strength = 100 experience = 88 type = light_armor model = 2 }
division = { id = { type = 10000 id = 77 } name = "8. Panzer Division"             offensive = { year = 1940 month = june day = 8 hour = 0 } strength = 100 experience = 88 type = light_armor model = 2 }
division = { id = { type = 10000 id = 78 } name = "2. Infanterie Division (mot.)"             offensive = { year = 1940 month = june day = 8 hour = 0 } strength = 100 experience = 88 type = motorized model = 1 }
}
landunit = { location = 75 id = { type = 10000 id = 80 } name = "VI. Korps"
division = { id = { type = 10000 id = 81 } name = "16. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 82 } name = "24. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
}
landunit = { location = 75 id = { type = 10000 id = 84 } name = "XVIII. Korps"
division = { id = { type = 10000 id = 85 } name = "5. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 86 } name = "21. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 87 } name = "25. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 88 } name = "1. Gebirgsjägerdivision" strength = 100 experience = 80 type = bergsjaeger model = 2 }
}
landunit = { location = 75 id = { type = 10000 id = 90 } name = "XIX. Panzerkorps"
division = { id = { type = 10000 id = 91 } name = "1. Panzer Division"             offensive = { year = 1940 month = june day = 8 hour = 0 } strength = 100 experience = 88 type = light_armor model = 2 }
division = { id = { type = 10000 id = 92 } name = "2. Panzer Division"             offensive = { year = 1940 month = june day = 8 hour = 0 } strength = 100 experience = 88 type = light_armor model = 2 }
division = { id = { type = 10000 id = 93 } name = "10. Panzer Division"             offensive = { year = 1940 month = june day = 8 hour = 0 } strength = 100 experience = 88 type = light_armor model = 2 }
division = { id = { type = 10000 id = 94 } name = "Grossdeutschland"             offensive = { year = 1940 month = june day = 8 hour = 0 } strength = 45 max_strength = 45 experience = 88 type = motorized model = 1 }
}
landunit = { location = 75 id = { type = 10000 id = 96 } name = "XIV. Korps (mot.)"
division = { id = { type = 10000 id = 97 } name = "13. Infanterie Division (mot.)"             offensive = { year = 1940 month = june day = 8 hour = 0 } strength = 100 experience = 88 type = motorized model = 1 }
division = { id = { type = 10000 id = 98 } name = "29. Infanterie Division (mot.)"             offensive = { year = 1940 month = june day = 8 hour = 0 } strength = 100 experience = 88 type = motorized model = 1 }
}
landunit = { location = 75 id = { type = 10000 id = 100 } name = "XXIII. Korps"
division = { id = { type = 10000 id = 101 } name = "58. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 102 } name = "73. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 103 } name = "76. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
}
landunit = { location = 75 id = { type = 10000 id = 105 } name = "12. Armee Reserve"
division = { id = { type = 10000 id = 106 } name = "9. Infanterie Division " strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 107 } name = "27. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
}
landunit = { location = 74 id = { type = 10000 id = 109 } name = "16. Armee Reserve"
division = { id = { type = 10000 id = 110 } name = "6. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 111 } name = "15. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 112 } name = "26. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 113 } name = "33. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
}
landunit = { location = 74 id = { type = 10000 id = 115 } name = "XIII. Korps"
division = { id = { type = 10000 id = 116 } name = "17. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 117 } name = "34. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 118 } name = "71. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
}
landunit = { location = 74 id = { type = 10000 id = 120 } name = "VII. Korps"
division = { id = { type = 10000 id = 121 } name = "36. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 122 } name = "52. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 123 } name = "68. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
}
landunit = { location = 313 id = { type = 10000 id = 125 } name = "Heeresgruppe A Reserve"
division = { id = { type = 10000 id = 126 } name = "4. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 127 } name = "267. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
}
landunit = { location = 74 id = { type = 10000 id = 129 } name = "XXIV. Korps"
division = { id = { type = 10000 id = 130 } name = "215. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 131 } name = "246. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
}
landunit = { location = 74 id = { type = 10000 id = 133 } name = "XXX. Korps"
division = { id = { type = 10000 id = 134 } name = "79. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 135 } name = "95. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 136 } name = "268. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
}
landunit = { location = 74 id = { type = 10000 id = 138 } name = "XII. Korps"
division = { id = { type = 10000 id = 139 } name = "75. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 140 } name = "93. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { id = { type = 10000 id = 141 } name = "258. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
}
landunit = { location = 74 id = { type = 10000 id = 143 } name = "XXIV. Korps"
division = { locked = yes  id = { type = 10000 id = 144 } name = "252. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { locked = yes  id = { type = 10000 id = 145 } name = "262. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { locked = yes  id = { type = 10000 id = 146 } name = "268. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
}
landunit = { location = 314 id = { type = 10000 id = 148 } name = "Heeresgruppe C Reserve"
division = { locked = yes id = { type = 10000 id = 149 } name = "197. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { locked = yes id = { type = 10000 id = 150 } name = "213. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { locked = yes id = { type = 10000 id = 151 } name = "215. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { locked = yes id = { type = 10000 id = 152 } name = "246. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { locked = yes id = { type = 10000 id = 153 } name = "262. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { locked = yes id = { type = 10000 id = 154 } name = "554. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
}
landunit = { location = 314 id = { type = 10000 id = 156 } name = "XXV. Korps"
division = { locked = yes id = { type = 10000 id = 157 } name = "555. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { locked = yes id = { type = 10000 id = 158 } name = "557. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
}
landunit = { location = 315 id = { type = 10000 id = 160 } name = "XXXIII. Korps"
division = { locked = yes id = { type = 10000 id = 161 } name = "239. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { locked = yes id = { type = 10000 id = 162 } name = "556. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
}
landunit = { location = 315 id = { type = 10000 id = 164 } name = "XXVII. Korps"
division = { locked = yes id = { type = 10000 id = 165 } name = "218. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
division = { locked = yes id = { type = 10000 id = 166 } name = "221. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
}
landunit = { location = 315 id = { type = 10000 id = 168 } name = "7. Armee Reserve"
division = { locked = yes id = { type = 10000 id = 169 } name = "96. Infanterie Division" strength = 100 experience = 80 type = infantry model = 2 }
}

###luftflotte 2
airunit = { location = 80 base = 80 id = { type = 10000 id = 171 } name = "Fliegerkorps z.b.V.2"
division = { id = { type = 10000 id = 172 } name = "KG 4 'General Wever'" strength = 100 experience = 80 type = tactical_bomber model = 1  ##He 111, Ju 88
}
division = { id = { type = 10000 id = 173 } name = "KG 54 'Totenkopf'" strength = 100 experience = 80 type = tactical_bomber model = 1 ##He 111
}
}
airunit = { location = 80 base = 80  id = { type = 10000 id = 175 } name = "IV Fliegerkorps"
division = { id = { type = 10000 id = 176 } name = "LG 1" strength = 100 experience = 80 type = tactical_bomber model = 1 ##He 111, Ju 88
}
division = { id = { type = 10000 id = 177 } name = "KG 30 'Adler'" strength = 100 experience = 80 type = tactical_bomber model = 2  ##Ju 88
 }
division = { id = { type = 10000 id = 178 } name = "KG 27 'Boelcke'" strength = 100 experience = 80 type = tactical_bomber model = 1  #He 111
}
}
airunit = { location = 76 base = 76  id = { type = 10000 id = 180 } name = "VIII Fliegerkorps"

division = { id = { type = 10000 id = 181 } name = "Kampfgeschwader 77" strength = 100 experience = 80  type = tactical_bomber model = 0 ##Do 17
}
division = { id = { type = 10000 id = 182 } name = "I/II/StG 2 'Immelmann'" strength = 100 experience = 80  type = cas model = 1 }
division = { id = { type = 10000 id = 183 } name = "I/Sturzkampfgeschwader 76" strength = 100 experience = 80  type = cas model = 1 }
division = { id = { type = 10000 id = 184 } name = "I/II/Sturzkampfgeschwader 77" strength = 100 experience = 80  type = cas model = 1 }
division = { id = { type = 10000 id = 185 } name = "IV/Schlachtgeschwader 1" strength = 100 experience = 80  type = cas model = 0 ###HS123
 }
division = { id = { type = 10000 id = 186 } name = "II/Schlachtgeschwader 2" strength = 100 experience = 80  type = cas model = 1 }
division = { id = { type = 10000 id = 187 } name = "3./JG 1, 3./JG 21, 3./JG 27" strength = 100 experience = 80  type = interceptor model = 1 }
}
airunit = { location = 81 base = 81  id = { type = 10000 id = 189 } name = "Jagdfliegerführer 2"
division = { id = { type = 10000 id = 190 } name = "III/JG 3 'Udet'" strength = 100 experience = 80  type = interceptor model = 1 }
division = { id = { type = 10000 id = 191 } name = "JG 26 'Schlageter'" strength = 100 experience = 80  type = interceptor model = 1 }
division = { id = { type = 10000 id = 192 } name = "I/Jagdgeschwader 20" strength = 100 experience = 80  type = interceptor model = 1 }
division = { id = { type = 10000 id = 193 } name = "II/Jagdgeschwader 27" strength = 100 experience = 80  type = interceptor model = 1 }
division = { id = { type = 10000 id = 194 } name = "I/JG 51 'Mölders'" strength = 100 experience = 80  type = interceptor model = 1 }
division = { id = { type = 10000 id = 195 } name = "I/II/ZG 1" strength = 100 experience = 80  type = multi_role model = 1 }
division = { id = { type = 10000 id = 196 } name = "I/III/ZG 26" strength = 100 experience = 80  type = multi_role model = 1 }
}

###luftflotte 3
airunit = { location = 67 base = 67 id = { type = 10000 id = 198 } name = "I Fliegerkorps"
division = { id = { type = 10000 id = 199 } name = "KG 1 'Hindenburg'" strength = 100 experience = 80  type = tactical_bomber model = 1 }
division = { id = { type = 10000 id = 200 } name = "III/Kampfgeschwader 28" strength = 100 experience = 80  type = tactical_bomber model = 1 }
division = { id = { type = 10000 id = 201 } name = "Kampfgeschwader 76" strength = 100 experience = 80  type = tactical_bomber model = 0 ##do17
}
division = { id = { type = 10000 id = 202 } name = "III/Sturzkampfgeschwader 51" strength = 100 experience = 80  type = cas model = 1 }
division = { id = { type = 10000 id = 203 } name = "2./JG 3, 2./JG 77" strength = 100 experience = 80  type = interceptor model = 1 }
division = { id = { type = 10000 id = 204 } name = "2./ZG 26, 2./ZG 76" strength = 100 experience = 80  type = multi_role model = 1
}
}
airunit = { location = 75 base = 75 id = { type = 10000 id = 206 } name = "II Fliegerkorps"
division = { id = { type = 10000 id = 207 } name = "KG 2 'Holzhammer'" strength = 100 experience = 80  type = tactical_bomber model = 0 ##do 17
 }
division = { id = { type = 10000 id = 208 } name = "KG 3 'Blitz'" strength = 100 experience = 80  type = tactical_bomber model = 0 ##do 17
}
division = { id = { type = 10000 id = 209 } name = "KG 53 'Legion Condor'" strength = 100 experience = 80  type = tactical_bomber model = 1 }
division = { id = { type = 10000 id = 210 } name = "III/StG 2 'Immelmann'" strength = 100 experience = 80  type = cas model = 1 }
division = { id = { type = 10000 id = 211 } name = "I/Sturzkampfgeschwader 186" strength = 100 experience = 80  type = cas model = 1 }
}
airunit = { location = 67 base = 67 id = { type = 10000 id = 213 } name = "V Fliegerkorps"
division = { id = { type = 10000 id = 214 } name = "KG 51 'Edelweiß'" strength = 100 experience = 80  type = tactical_bomber model = 1 }
division = { id = { type = 10000 id = 215 } name = "KG 55 'Greif'" strength = 100 experience = 80  type = tactical_bomber model = 1 }
division = { id = { type = 10000 id = 216 } name = "4./JG 51, 4./JG 52, 4./JG 54" strength = 100 experience = 80  type = interceptor model = 1 }
division = { id = { type = 10000 id = 217 } name = "2./ZG 52, 2./LG 1, Bf 110" strength = 100 experience = 80  type = multi_role model = 1 }
}
airunit = { location = 314 base = 314 id = { type = 10000 id = 219 } name = "Jagdfliegerführer 3"
division = { id = { type = 10000 id = 220 } name = "I/III/JG 2 'Richthofen'" strength = 100 experience = 80  type = interceptor model = 1 }
division = { id = { type = 10000 id = 221 } name = "III/Jagdgeschwader 52" strength = 100 experience = 80  type = interceptor model = 1 }
division = { id = { type = 10000 id = 222 } name = "JG 53 'Pik As'" strength = 100 experience = 80  type = interceptor model = 1 }
division = { id = { type = 10000 id = 223 } name = "I/Jagdgeschwader 76" strength = 100 experience = 80  type = interceptor model = 1 }
division = { id = { type = 10000 id = 224 } name = "I/ZG 2" strength = 100 experience = 80  type = multi_role model = 1 }
}


###dormant air
airdivision = { dormant = yes id = { type = 10000 id = 225 } name = "Kampfgeschwader 40" strength = 100 experience = 80 type = tactical_bomber model = 1  }
airdivision = { dormant = yes id = { type = 10000 id = 226 } name = "Kampfgeschwader 25" strength = 100 experience = 80 type = tactical_bomber model = 1 }

landunit = { location = 314 id = { type = 10000 id = 227 } name = "HQ Heeresgruppe C"
division = { locked = yes id = { type = 10000 id = 228 } name = "HQ Heeresgruppe C" strength = 100 experience = 80 type = hq model = 1 }
}


landunit = { location = 75 id = { type = 10000 id = 229 } name = "HQ Heeresgruppe A"
division = { id = { type = 10000 id = 230 } name = "HQ Heeresgruppe A" strength = 100 experience = 80 type = hq model = 1 }
}

landunit = { location = 81 id = { type = 10000 id = 231 } name = "HQ Heeresgruppe B"
division = { id = { type = 10000 id = 232 } name = "HQ Heeresgruppe B" strength = 100 experience = 80 type = hq model = 1 }
}

}
