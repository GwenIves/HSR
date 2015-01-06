


country = {
    tag = GER
	ai = "desertfox_ger.ai"

    control = ITA

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

	steal_leader = 7 #Baade
	steal_leader = 12 #Bayerlein
	steal_leader = 978 #Borowietz
	steal_leader = 431 #Bülowius
	steal_leader = 41 #Cramer
	steal_leader = 674 #Crasemann
	steal_leader = 43 #Crüwell
	steal_leader = 693 #Fehn
	steal_leader = 699 #Fischer W.
	steal_leader = 970 #Hildebrandt
	steal_leader = 162 #Kleemann
	steal_leader = 975 #Krause
	steal_leader = 319 #von Liebenstein zu Barchfeld
	steal_leader = 323 #von Manteuffel
	steal_leader = 206 #Nehring
	steal_leader = 976 #Neumann-Silkow
	steal_leader = 221 #Ramcke
	steal_leader = 333 #von Ravenstein
	steal_leader = 230 #Rommel
	steal_leader = 237 #Schaal
	steal_leader = 261 #Stumme
	steal_leader = 972 #Sümmermann
	steal_leader = 973 #Veith
	steal_leader = 272 #von Arnim
	steal_leader = 278 #von Bismarck
	steal_leader = 977 #von Broich
	steal_leader = 292 #von Esebeck H.K.
	steal_leader = 971 #von Hülsen
	steal_leader = 331 #von Prittwitz und Gaffron
	steal_leader = 969 #von Randow
	steal_leader = 974 #von Sponeck
	steal_leader = 345 #von Thoma
	steal_leader = 347 #von Vaerst
	steal_leader = 363 #Westphal
	steal_leader = 371 #Ziegler

	steal_leader = 444 #Hoffmann von Waldau
	steal_leader = 451 #Kesselring
	steal_leader = 454 #Lörzer
	steal_leader = 460 #Osterkamp


	capital = 522

	manpower = 850

	transports = 35
	escorts = 23

	# Resource Reserves
	oil 	=	100
	supplies =	1200


	extra_tc = 35

	free = 		{
		oil 	=	12
		supplies =	45
		ic = 28
	}

    ownedprovinces =
	{
	522
	}
    controlledprovinces =
	{
	522
	}
    nationalprovinces =
	{
	522
	}
	techapps = {

	# Germany 1941 techs
	#######################

	1090 1240 2530 4200

	4010 4020 4030 4060 # Imp. Interceptor (Fw-190A)

	4040 4050 # Basic MR (bf-109E Jabo)/Basic Escort (bf-110)

	4120 4130 4140 4150 # Imp. medium bomber (Ju-88)

	4170 # Basic CAS (Ju-87)

	4190 # Basic naval bomber (Fw-200C Condor)

	4220 4250 # Basic transport (Ju-52)

	2010 2020 2040 2050 # Improved light tank

	2030 2070 2080 # Basic Medium (Pz.IV)

	2150 2170 2220 2230 # JagdPz. I/Stug IIIb

	2370 # Basic Rocket artillery

	2290 2300 2310 2320 2330 2340 # Imp. WWII artillery (120mm)

	2400 2410 # Basic AT

	2450 2460 2470 # Basic Static AA

	2510 2520 # Imp. AA

	1010 1020 1030 1040 # Imp. infantry

	1190 1200 1210 1220 # Semi-moto cavalry

	1110 1120 1130 1070 1080 # Imp. Mountain/Basic para

	1230 # Basic motorized

	1310 1340 # Supply/repair - basics only

	5010 5020 5030 # Mechanized Agriculture (up to fertilizers)

	5050 5060 5070 # Advanced Machine Tools

	5080 5090 5100 # Construction (up to the forts)

	5110 5120 5130 5140 5160 5180 # Assembly lines (planes, tanks, small arms)

	5190 5200 5210 5220 # Imp. oil conversion

	5310 5320 5330 # Basic CT machine

	5350 5360 5370 # Imp. encryption/B. decryption

	5410 5420 #  Dec. Radar

	5470 5480 5490 5500 # Nuclear Tier 1

	5550 # Rocket test site

	9010 9020 9030 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9190 9200 9210 9220 9350 9270 9290 9140 # Doctrines (air)

	6210 6220 6230 6240 6250 6260 6270 6290 # Spearhead HQ (land)

	8010 8020 8030 8040 8050 8080 8090 8150 8160 8170 8210 8280 8290

	3010 3020 3030 3040 #(Z23)
	3070 3080 3090 3100 #(Nurnberg)
	3130 3140 3150 3160 #(Hipper)
	3190 3200 3210 3220 #(Scharnhorst)
	3250 3260 3270 3280 #(Bismarck)
	3320 3330 3340 #(Graf Zeppelin)
	3400 3410 3420 3430 #(Type IX)


}



### Germany OOB 1941 Author: MH ###
###"Panzergruppe Afrika "
landunit = { location = 925 id = { type = 10000 id = 2 } name = "15th Panzer Division" leader = 230 #Rommel
division = { id = { type = 10000 id = 3 } name = "8. Panzerregiment" strength = 50 max_strength = 50 type = armor model = 2  offensive = { year = 1941 month = april day = 29 hour = 0 } }
division = { id = { type = 10000 id = 4 } name = "15. Schützenbrigade (mot.)" strength = 58 max_strength = 58 type = motorized model = 1  offensive = { year = 1941 month = april day = 29 hour = 0 } }
}
landunit = { location = 925 id = { type = 10000 id = 6 } name = "5. Leichte Division" ##21. Panzer -> August 41
division = { id = { type = 10000 id = 7 } name = "5. Panzer Regiment" strength = 50 max_strength = 50 type = armor model = 2  offensive = { year = 1941 month = april day = 29 hour = 0 } }
division = { id = { type = 10000 id = 8 } name = "104. Infanterie-Regiment (mot.)" strength = 40 max_strength = 40 type = motorized model = 1  offensive = { year = 1941 month = april day = 29 hour = 0 } }
}

########DORMANT LAND
#"Division z.b.V. Afrika"  //90. leichte division
landdivision = { dormant = yes id = { type = 10000 id = 11 } name = "200. Infanterie-Regiment (mot.)" strength = 35 max_strength = 35 type = motorized  model = 1}   ###spring-summer 41
landdivision = { dormant = yes id = { type = 10000 id = 12 } name = "361. Infanterie-Regiment (mot.)" strength = 35 max_strength = 35 type = motorized  model = 1}   ###spring-summer 41
landdivision = { dormant = yes id = { type = 10000 id = 13 } name = "Panzergrenadier-Regiment 'Afrika'" strength = 35 max_strength = 35 type = mechanized model = 1} ###autumn 41

#Fallschirm Brigade 'Ramcke'
landdivision = { dormant = yes id = { type = 10000 id = 14 } name = "Fallschirm Brigade 'Ramcke'" strength = 50  max_strength = 50 type = paratrooper  model = 1} ###autumn 41

###10. Panzer Division  <- activated through us landings in algeria
landdivision = { dormant = yes id = { type = 10000 id = 15 } name = "7. Panzerregiment" strength = 40 type = armor model = 3 extra = heavy_armor brigade_model = 1 }
landdivision = { dormant = yes id = { type = 10000 id = 16 } name = "69. Infanterie-Regiment (mot.)" strength = 35  max_strength = 35 type = motorized model = 1 }
landdivision = { dormant = yes id = { type = 10000 id = 17 } name = "86. Infanterie-Regiment (mot.)" strength = 35 max_strength = 35 type = motorized model = 1 }
landdivision = { dormant = yes id = { type = 10000 id = 18 } name = "Sturm-Regiment 'Hermann Göring'" strength = 35 max_strength = 35 type = mechanized model = 1 }

####164. le. Division
landdivision = { dormant = yes id = { type = 10000 id = 19 } name = "125. Infanterie-Regiment (mot.)" strength = 35 max_strength = 35 type = motorized model = 1 }  ###juli42
landdivision = { dormant = yes id = { type = 10000 id = 20 } name = "382. Infanterie-Regiment (mot.)" strength = 35 max_strength = 35 type = motorized model = 1 }  ###juli42
landdivision = { dormant = yes id = { type = 10000 id = 21 } name = "433. Infanterie-Regiment (mot.)" strength = 35 type = motorized model = 2 }  ###juli42

####999. le. Division
landdivision = { dormant = yes id = { type = 10000 id = 22 } name = "Afrika-schützen-Regiment (mot.) 961" strength = 35 max_strength = 35 type = motorized model = 1 }  ###dec42
landdivision = { dormant = yes id = { type = 10000 id = 23 } name = "Afrika-schützen-Regiment (mot.) 962" strength = 35 max_strength = 35 type = motorized model = 1 }  ###dec42


####replacements pz III-> IV
landdivision = { dormant = yes id = { type = 10000 id = 24 } name = "8. Panzerregiment" strength = 50 max_strength = 50 max_strength = 50 type = armor model = 3 }
landdivision = { dormant = yes id = { type = 10000 id = 25 } name = "5. Panzer Regiment" strength = 50 max_strength = 50 max_strength = 50 type = armor model = 3 }

##DAK/Luftwaffe
airunit = { location = 925 base = 925 id = { type = 10000 id = 30 } name = "Fliegerführer Afrika" leader = 460 #Osterkamp
division = { id = { type = 10000 id = 31 } name = "Stukageschwader 3" strength = 57 type = cas model = 0 }
division = { id = { type = 10000 id = 32 } name = "Jagdgeschwader 27" strength = 26 type = interceptor model = 2 }
division = { id = { type = 10000 id = 33 } name = "LG1" strength = 23 type = tactical_bomber model = 2 }
}


###autumn 41 remove: spring summer 42
airdivision = { dormant = yes id = { type = 10000 id = 34 } name = "Kampfgeschwader 54" strength = 54 type = tactical_bomber model = 2 }
###autumn 41 remove: spring summer 42
airdivision = { dormant = yes id = { type = 10000 id = 35 } name = "Kampfgeschwader 100" strength = 54 type = tactical_bomber model = 2 }
##spring-summer 41
airdivision = { dormant = yes id = { type = 10000 id = 36 } name = "Zerstörergeschwader 26" strength = 27 max_strength = 60 type = multi_role model = 2 }






landdivision = { dormant = yes id = { type = 10000 id = 37 } name = "Gebirgsjäger-Regiment 100" strength = 45 max_strength = 45 type = bergsjaeger model = 1 } ###Oberst Willibald Utz (Knight's Cross)

airdivision = { dormant = yes id = { type = 10000 id = 38 } name = "H/101" strength = 26 max_strength = 36 type = interceptor model = 2 }

landdivision = { dormant = yes id = { type = 10000 id = 39 } name = "Fallshirmjäger-Regiment 1" strength = 35 max_strength = 45 type =  paratrooper  model = 1}

landdivision = { dormant = yes id = { type = 10000 id = 40 } name = "Fallshirmjäger-Regiment 2" strength = 35 max_strength = 45 type =  paratrooper  model = 1}

airdivision = { dormant = yes id = { type = 10000 id = 41 } name = "III/Stukageschwader 3" strength = 24 max_strength = 24 type = cas model = 0 }


landunit = { location = 925 id = { type = 10000 id = 42 } name = "Deutsches Afrikakorps (HQ)"
division = { id = { type = 10000 id = 43 } name = "Deutsches Afrikakorps (HQ)" strength = 35 max_strength = 35 experience = 80 type = hq model = 1 }
}


}
