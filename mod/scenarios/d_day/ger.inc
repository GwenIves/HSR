#################################
# Designed by Greven and Tracid #
#################################
province = { id = 39 landfort = 0 coastalfort = 3 }#Caen
province = { id = 38 landfort = 0 coastalfort = 3 }#Cherbourg
province = { id = 41 landfort = 0 coastalfort = 3 }#Le Havre
province = { id = 42 landfort = 0 coastalfort = 3 }#Dieppe
province = { id = 18 landfort = 0 coastalfort = 3 }#Calais
province = { id = 43 landfort = 0 coastalfort = 3 }#Dunkirk
province = { id = 32 landfort = 3 coastalfort = 0 }#Brest
province = { id = 43 landfort = 3 coastalfort = 0 }#Dunkirk
province = { id = 35 landfort = 3 coastalfort = 0 }#Lorient
province = { id = 74 landfort = 3 coastalfort = 0 }#Westwall
province = { id = 75 landfort = 3 coastalfort = 0 }#Westwall

province = { id = 50 radar_station = { size = 2 current_size = 2 } } #Antwerp
province = { id = 51 radar_station = { size = 2 current_size = 2 } } #Brussels
province = { id = 47 radar_station = { size = 2 current_size = 2 } } #Amsterdam
province = { id = 75 radar_station = { size = 4 current_size = 4 } } #Cologne
province = { id = 67 radar_station = { size = 4 current_size = 4 } } #Essen
province = { id = 76 radar_station = { size = 4 current_size = 4 } } #Dortmund
province = { id = 80 radar_station = { size = 2 current_size = 2 } } #Wilhelmshafen
province = { id = 18 radar_station = { size = 1 current_size = 1 } } #Calais
province = { id = 43 radar_station = { size = 1 current_size = 1 } } #Dunkerque
province = { id = 65 radar_station = { size = 1 current_size = 1 } } #Namur
province = { id = 46 radar_station = { size = 1 current_size = 1 } } #Rotterdam
province = { id = 78 radar_station = { size = 1 current_size = 1 } } #Leeuwarden
province = { id = 79 radar_station = { size = 1 current_size = 1 } } #Groningen
province = { id = 66 radar_station = { size = 2 current_size = 2 } } #Aachen
province = { id = 74 radar_station = { size = 1 current_size = 1 } } #Saarbrucken
province = { id = 314 radar_station = { size = 1 current_size = 1 } } #Stuttgart
province = { id = 81 radar_station = { size = 2 current_size = 2 } } #Munster
province = { id = 92 radar_station = { size = 1 current_size = 1 } } #Arhus

province = {
	id = 53
	anti_air = 6
	air_base = {
		size = 10
		current_size = 10
	}
}
province = {
	id = 56
	anti_air = 6
	air_base = {
		size = 10
		current_size = 10
	}
}
province = {
	id = 61
	anti_air = 6
	air_base = {
		size = 10
		current_size = 10
	}
}
province = {
	id = 527
	anti_air = 6
	air_base = {
		size = 10
		current_size = 10
	}
}
province = {
	id = 528
	anti_air = 6
	air_base = {
		size = 10
		current_size = 10
	}
}

country = {
    tag = GER

	ai = "dday_ger.ai"

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
	headofgovernment = { type = 9 id = 42 }
	foreignminister = { type = 9 id = 55 }
	armamentminister = { type = 9 id = 86 }
	ministerofsecurity = { type = 9 id = 108 }
	ministerofintelligence = { type = 9 id = 138 }
	chiefofstaff = { type = 9 id = 163 }
	chiefofarmy = { type = 9 id = 177 }
	chiefofnavy = { type = 9 id = 192 }
	chiefofair = { type = 9 id = 10 }


	steal_leader = 335
	steal_leader = 224
	steal_leader = 230
	steal_leader = 336
	steal_leader = 614
	steal_leader = 83
	steal_leader = 175
	steal_leader = 52
	steal_leader = 194
	steal_leader = 257
	steal_leader = 8
	steal_leader = 198
	steal_leader = 20
	steal_leader = 289
	steal_leader = 327
	steal_leader = 343
	steal_leader = 85
	steal_leader = 496
	steal_leader = 512
	steal_leader = 297
	steal_leader = 484
	steal_leader = 461
	steal_leader = 477
	steal_leader = 615
	steal_leader = 632
	steal_leader = 640
	steal_leader = 622
	steal_leader = 641
	steal_leader = 642
	steal_leader = 626
	steal_leader = 628
	steal_leader = 481
	steal_leader = 437
	steal_leader = 617 #schwalbe
	steal_leader = 356 #von Zangen
	steal_leader = 308 #von Knobelsdorff
	steal_leader = 503 #Hausser
	steal_leader = 53 #Eberbach
	steal_leader = 27 #Brandenberger
	steal_leader = 9 #Balck
	steal_leader = 364 #Wiese
	steal_leader = 222 #Rasp
	steal_leader = 511 #Krämer
	steal_leader = 508 #Keppler
	steal_leader = 521 #Priess
	steal_leader = 913 #Fröhlich
	steal_leader = 431 #Bülowinus
	steal_leader = 446 #Huth

	capital = 313 #Frankfurt-am-Main

	manpower = 100



	# Resource Reserves	(No Production or Trade in this scenario)
	oil 	=	4000
	supplies =	6500
	extra_TC = 120
	free =
	{
		ic = 65
	}


    ownedprovinces =
	{
		32 33 34 37 38 39 40 41 42 43 44 18 53 54 55 56 57 58 36 35 59 60 61 62 63
		64 72 317 73 71 70 69 68 65 50 51 52 45 46 49 47 48 77 78 79 74 75 66 67 76
		80 81 82 313 314 315 320 321 322 323 324 325 326 327 328 358 359 360 361 362
		363 364 365 366 527 528 529 319 318 316
	}
    controlledprovinces =
	{
		32 33 34 37 38 39 40 41 42 43 44 18 53 54 55 56 57 58 36 35 59 60 61 62 63
		64 72 317 73 71 70 69 68 65 50 51 52 45 46 49 47 48 77 78 79 74 75 66 67 76
		80 81 82 313 314 315 320 321 322 323 324 325 326 327 328 358 359 360 361 362
		363 364 365 366 527 528 529 319 318 316
	}
    nationalprovinces =
	{
		32 33 34 37 38 39 40 41 42 43 44 18 53 54 55 56 57 58 36 35 59 60 61 62 63
		64 72 317 73 71 70 69 68 65 50 51 52 45 46 49 47 48 77 78 79 74 75 66 67 76
		80 81 82 313 314 315 320 321 322 323 324 325 326 327 328 358 359 360 361 362
		363 364 365 366 527 528 529 319 318 316
	}
	techapps               = { 1010  1020  1030  1040  1040  1050  1070  1080  1090  1100  1110  1120  1130  1140  1190  1200  1210  1220  1230  1240
			     1250  1260  1270  1280  1310  1320  1330  1340  1350  1360  14000 14010 14020 2010  2020  2030  2040  2050  2060  2070
			     2080  2090  2100  2110  2120  2150  2160  2170  2180  2190  2200  2220  2230  2240  2250  2260  2270  2280  2290  2300
			     2310  2320  2330  2340  2350  2360  2370  2380  2390  2400  2410  2420  2430  2450  2460  2470  2480  2490  2510  2520
			     2530  2540  3010  3020  3030  3040  3070  3080  3090  3100  3130  3140  3150  3160  3190  3200  3210  3220  3250  3260
			     3270  3280  3290  3320  3330  3340  3400  3410  3420  3430  3440  4010  4020  4030  4040  4050  4060  4070  4080  4090
			     4100  4110  4120  4130  4140  4150  4160  4170  4180  4190  4200  4210  4220  4230  4240  4250  4260  4270  4280  5010
			     5020  5030  5050  5060  5070  5080  5090  5100  5110  5120  5130  5140  5150  5160  5170  5180  5190  5200  5210  5220
			     5230  5310  5320  5330  5340  5350  5360  5370  5380  5410  5420  5430  5440  5450  5470  5480  5490  5500  5550  5560
			     5570  5580  5590  6210  6220  6230  6240  6250  6260  6270  6290  7010  7020  7030  7040  7060  7070  7100  7110  7140
			     7260  7280  7290  8010  8020  8030  8040  8050  8080  8090  8150  8160  8170  8210  8280  8290  9010  9020  9030  9040
			     9050  9060  9070  9080  9090  9100  9110  9120  9130  9190  9200  9210  9220  9230  9240  9250  9260  9270  9280  9290
			     9300  9310  9320  9330  9340  9350  9360  9370  9380  9390  9400  9410  9420
			   }
################################
#  OBERKOMMAND WEST 	   	   #
################################

landunit = {
id = { type = 10602 id = 1 }
name = "Oberkommand West"
leader = 335 #v.Rundstedt
location = 56

division = {
id = { type = 10602 id = 2 }
name = "Oberkommand West HQ"
type = hq
model = 2
extra = artillery
}
}

################################
#  WMBH NIEDERLANDE	   	       #
################################

landunit = {
id = { type = 10602 id = 3 }
name = "WmBh Niederlande"
leader = 615 #F.Christiansen
location = 47

division = {
id = { type = 10602 id = 4 }
name = "WmBh Niederlande HQ"
type = hq
model = 2
extra = artillery
}
}

landunit = {
id = { type = 10602 id = 5 }
name = "LXXXVIII Armeekorps"
leader = 224 #Reinhard
location = 46


division = {
id = { type = 10602 id = 7 }
name = "347. Infanterie-Div"
strength = 100
type = infantry
model = 4
}

division = {
id = { type = 10602 id = 8 }
name = "16. Luftwaffefeld-Div"
strength = 100
type = infantry
model = 4
}

division = {
id = { type = 10602 id = 9 }
name = "719. Infanterie-Div"
strength = 100
type = infantry
model = 4
}
}

################################
#  HEERESGRUPPE B	   	       #
################################

landunit = {
id = { type = 10602 id = 10 }
name = "Heeresgruppe B"
leader = 230 #Rommel
location = 56

division = {
id = { type = 10602 id = 11 }
name = "Heeresgruppe B HQ"
type = hq
model = 2
extra = artillery
}
}
###############
landunit = {
id = { type = 10602 id = 12 }
name = "15. Armee" 					#Frozen
leader = 336 #v.Salmuth
location = 44

division = {
	locked = yes
id = { type = 10602 id = 13 }
name = "15. Armee HQ"
type = hq
model = 2
strength = 50
   max_strength = 50
extra = artillery
}

division = {
	locked = yes
id = { type = 10602 id = 14 }
name = "19. Luftwaffefeld-Div"
strength = 100
type = infantry
model = 4
}

division = {
	locked = yes
id = { type = 10602 id = 15 }
name = "84. Infanterie-Div"
strength = 100
type = infantry
model = 4
}

division = {
	locked = yes
id = { type = 10602 id = 16 }
name = "85. Infanterie-Div"
strength = 100
type = infantry
model = 4
}

division = {
	locked = yes
id = { type = 10602 id = 17 }
name = "182. Reserve-Inf.-Div"
strength = 100
type = infantry
model = 3
}

division = {
	locked = yes
id = { type = 10602 id = 18 }
name = "326. Infanterie-Div"
strength = 100
type = infantry
model = 4
}

division = {
	locked = yes
id = { type = 10602 id = 19 }
name = "331. Infanterie-Div"
strength = 100
type = infantry
model = 4
}

division = {
	locked = yes
id = { type = 10602 id = 20 }
name = "346. Infanterie-Div"
strength = 100
type = infantry
model = 4
}

}
###
landunit = {
id = { type = 10602 id = 21 }
name = "LXXXIX Armeekorps" 						#Frozen
leader = 614 #von und zu Gilsa
location = 51


division = {
	locked = yes
id = { type = 10602 id = 23 }
name = "70. Infanterie-Div"
strength = 100
type = infantry
model = 4
}

division = {
	locked = yes
id = { type = 10602 id = 24 }
name = "712. Infanterie-Div"
strength = 100
type = infantry
model = 4
}

division = {
	locked = yes
id = { type = 10602 id = 25 }
name = "48. Infanterie-Div"
strength = 100
type = infantry
model = 4
}
}
###
landunit = {
	locked = yes
id = { type = 10602 id = 26 }
name = "LXXXII Armeekorps" 					#Frozen
leader = 632 #Sinnhuber
location = 52

division = {
	locked = yes
id = { type = 10602 id = 28 }
name = "18. Luftwaffefeld-Div"
strength = 100
type = infantry
model = 4
}

division = {
	locked = yes
id = { type = 10602 id = 29 }
name = "47. Infanterie-Div"
strength = 100
type = infantry
model = 4
}

division = {
	locked = yes
id = { type = 10602 id = 30 }
name = "49. Infanterie-Div"
strength = 100
type = infantry
model = 4
}
}
###
landunit = {
	locked = yes
id = { type = 10602 id = 31 }
name = "LXVII Armeekorps" 					#Frozen
leader = 83 #Gause
location = 44


division = {
	locked = yes
id = { type = 10602 id = 33 }
name = "344. Infanterie-Div"
strength = 100
type = infantry
model = 4
}

division = {
	locked = yes
id = { type = 10602 id = 34 }
name = "348. Infanterie-Div"
strength = 100
type = infantry
model = 4
}
}
###
landunit = {
id = { type = 10602 id = 35 }
name = "LXXXI Armeekorps" 					#Frozen
leader = 175 #Kuntzen
location = 55


division = {
	locked = yes
id = { type = 10602 id = 37 }
name = "245. Infanterie-Div"
strength = 100
type = infantry
model = 4
}

division = {
	locked = yes
id = { type = 10602 id = 38 }
name = "17. Luftwaffefeld-Div"
strength = 100
type = infantry
model = 4
}

division = {
	locked = yes
id = { type = 10602 id = 39 }
name = "711. Infanterie-Div"
strength = 100
type = infantry
model = 4
}
}
###############
landunit = {
id = { type = 10602 id = 40 }
name = "7. Armee"
leader = 52 #Dollman
location = 36

division = {
id = { type = 10602 id = 41 }
name = "7. Armee HQ"
type = hq
model = 2
strength = 40
   max_strength = 50
extra = artillery
}

division = {
id = { type = 10602 id = 42 }
name = "30. Schnelle-Brig"
strength = 30
max_strength = 40
type = motorized
model = 2
}

division = {
id = { type = 10602 id = 43 }
name = "91. Luftlande-Div"
strength = 90
type = infantry
model = 4
}

division = {
id = { type = 10602 id = 44 }
name = "243. Infanterie-Div"
strength = 90
type = infantry
model = 4
}
}

###
landunit = {
id = { type = 10602 id = 45 }
name = "LXXXIV Armeekorps"
leader = 194 #Marcks
location = 37


division = {
id = { type = 10602 id = 47 }
name = "716. Infanterie-Div"
strength = 90
type = infantry
model = 4
}

division = {
id = { type = 10602 id = 48 }
name = "352. Infanterie-Div"
strength = 90
type = infantry
model = 4
}

division = {
id = { type = 10602 id = 49 }
name = "709. Infanterie-Div"
strength = 90
type = infantry
model = 4
}

division = {
id = { type = 10602 id = 50 }
name = "319. Infanterie-Div"
strength = 90
type = infantry
model = 4
}

division = {
id = { type = 10602 id = 51 }
name = "Ostregimentstab 752"
strength = 30
max_strength = 40
type = militia
}
}
###
landunit = {
id = { type = 10602 id = 52 }
name = "LXXIV Armeekorps"
leader = 257 #Straube
location = 33


division = {
id = { type = 10602 id = 54 }
name = "77. Infanterie-Div"
strength = 80
type = infantry
model = 4
}

division = {
id = { type = 10602 id = 55 }
name = "266. Infanterie-Div"
strength = 80
type = infantry
model = 4
}
}
###
landunit = {
id = { type = 10602 id = 56 }
name = "XXV Armeekorps"
leader = 8 #Fahrmbacher
location = 32

division = {
id = { type = 10602 id = 58 }
name = "343. Infanterie-Div"
strength = 100
type = infantry
model = 4
}

division = {
id = { type = 10602 id = 59 }
name = "265. Infanterie-Div"
strength = 100
type = infantry
model = 4
}

division = {
id = { type = 10602 id = 60 }
name = "275. Infanterie-Div"
strength = 100
type = infantry
model = 4
}
}

###
landunit = {
id = { type = 10602 id = 61 }
name = "II Fallschirmjäger-Korps"
leader = 198
location = 32

division = {
id = { type = 10602 id = 62 }
name = "3. Fallschirmjäger-Div"
strength = 100
type = paratrooper
model = 3
}

division = {
id = { type = 10602 id = 63 }
name = "5. Fallschirmjäger-Div"
strength = 100
type = paratrooper
model = 3
}
}

################################
#  ARMEEGRUPPE G	   	       #
################################

landunit = {
id = { type = 10602 id = 64 }
name = "Armeegruppe G"
leader = 20 #Blaskowitz
location = 320

division = {
id = { type = 10602 id = 65 }
name = "Armeegruppe G HQ"
type = hq
model = 2
extra = artillery
}
}

###############
landunit = {
id = { type = 10602 id = 66 }
name = "1. Armee"
leader = 289 #von der Chevallerie
location = 322

division = {
id = { type = 10602 id = 67 }
name = "1. Armee HQ"
type = hq
model = 2
strength = 50
   max_strength = 50
extra = artillery
}
}

###
landunit = {
id = { type = 10602 id = 68 }
name = "LXXX Armeekorps"
leader = 640 #Gallenkamp
location = 325

division = {
id = { type = 10602 id = 70 }
name = "158. Reserve-Inf.-Div"
strength = 100
type = infantry
model = 3
}

division = {
id = { type = 10602 id = 71 }
name = "708. Infanterie-Div"
strength = 100
type = infantry
model = 4
}
}

###
landunit = {
id = { type = 10602 id = 72 }
name = "LXXXVI Armeekorps"
leader = 327 #v.Obstfelder
location = 323

division = {
id = { type = 10602 id = 74 }
name = "159. Reserve-Inf.-Div"
strength = 100
type = infantry
model = 3
}

division = {
id = { type = 10602 id = 75 }
name = "276. Infanterie-Div"
strength = 100
type = infantry
model = 4
}
}

###############
landunit = {
id = { type = 10602 id = 76 }
name = "19. Armee"
leader = 343 #v.Sodenstern
location = 528

division = {
id = { type = 10602 id = 77 }
name = "19. Armee HQ"
type = hq
model = 2
strength = 50
   max_strength = 50
extra = artillery
}
}

###
landunit = {
id = { type = 10602 id = 78 }
name = "IV Luftwaffe-Feldkorps"
leader = 622 #Erich Petersen
location = 362

division = {
id = { type = 10602 id = 80 }
name = "272. Infanterie-Div"
strength = 100
type = infantry
model = 4
}

division = {
id = { type = 10602 id = 81 }
name = "277. Infanterie-Div"
strength = 100
type = infantry
model = 4
}

division = {
id = { type = 10602 id = 82 }
name = "271. Infanterie-Div"
strength = 100
type = infantry
model = 4
}
}
###
landunit = {
id = { type = 10602 id = 83 }
name = "LXXXV Armeekorps"
leader = 641 #Kniess
location = 364

division = {
id = { type = 10602 id = 85 }
name = "338. Infanterie-Div"
strength = 100
type = infantry
model = 4
}

division = {
id = { type = 10602 id = 86 }
name = "244. Infanterie-Div"
strength = 100
type = infantry
model = 4
}
}
###
landunit = {
id = { type = 10602 id = 87 }
name = "LXII Reserve-Armeekorps"
leader = 642 #Neuling
location = 365

division = {
id = { type = 10602 id = 89 }
name = "157. Reserve-Inf.-Div"
strength = 100
type = infantry
model = 3
}

division = {
id = { type = 10602 id = 90 }
name = "242. Infanterie-Div"
strength = 100
type = infantry
model = 4
}
}

################################
#  PANZERGRUPPE WEST	   	   #
################################

landunit = {
id = { type = 10602 id = 91 }
name = "Panzergruppe West"
leader = 85 #v.Schweppenburg
location = 56

division = {
id = { type = 10602 id = 92 }
name = "Panzergruppe West HQ"
type = hq
model = 2
strength = 50
   max_strength = 50
extra = sp_artillery
}
}
###
landunit = {
id = { type = 10602 id = 93 }
name = "I SS-Panzerkorps"
leader = 496 #Dietrich
location = 58

division = {
	locked = yes
id = { type = 10602 id = 95 }
name = "1. SS-Panzer-Div"
strength = 100
type = armor
model = 4
}

division = {
id = { type = 10602 id = 96 }
	locked = yes
name = "17. SS-Panzergrenadier-Div"
strength = 100
type = motorized
model = 2
}

division = {
	locked = yes
id = { type = 10602 id = 97 }
name = "Panzer-Lehr-Div"
strength = 100
type = armor
model = 4
}
}
###
landunit = {
id = { type = 10602 id = 98 }
name = "LVIII Reserve-Panzerkorps"
leader = 512 #Walter Krueger
location = 320


division = {
id = { type = 10602 id = 100 }
name = "2. SS-Panzer-Div"
strength = 100
type = armor
model = 4
}

division = {
id = { type = 10602 id = 101 }
name = "17. Reserve-Inf.-Div"
strength = 100
type = infantry
model = 3
}

division = {
id = { type = 10602 id = 102 }
name = "9. Panzer-Div"
strength = 100
type = armor
model = 4
}
}

###
landunit = {
id = { type = 10602 id = 103 }
name = "LXVI Reserve-Panzerkorps" 		#Frozen
leader = 297 #v.Funck
location = 55


division = {
	locked = yes
id = { type = 10602 id = 105 }
name = "2. Panzer-Div"
strength = 100
type = armor
model = 4
}

division = {
	locked = yes
id = { type = 10602 id = 106 }
name = "21. Panzer-Div"
strength = 100
type = armor
model = 4
}

division = {
	locked = yes
id = { type = 10602 id = 107 }
name = "11. Panzer-Div"
strength = 100
type = armor
model = 4
}

division = {
	locked = yes
id = { type = 10602 id = 108 }
name = "116. Panzer-Div"
strength = 100
type = armor
model = 4
}
}

###############################
# 		Luftwaffe OOB		  #
###############################

########LUFTFLOTTE 3########

landunit = {
id = { type = 10602 id = 109 }
name = "Luftflotte 3"
#leader = 484 #wimmer
location = 56 #Paris

division = {
id = { type = 10602 id = 110 }
name = "Luftflotte 3 Base"
type = hq
strength = 50
max_strength = 50
extra = anti_air
}
}

###
airunit = {
id = { type = 10602 id = 111 }
name = "IX. Fliegerkorps"
leader = 913 # Fröhlich
location = 53 #53
base = 53 #53

division = {
id = { type = 10602 id = 112 }
name = "Kampfgeschwader 6"
strength = 80
type = tactical_bomber
model = 3 #Ju 88
}

division = { 				#	withdraws Sept 30th
id = { type = 10602 id = 114 }
name = "KG 54 'Totenkopf'"
strength = 80
type = tactical_bomber
model = 3 #ju 88
}

division = { 				#	withdraws nov 22nd
id = { type = 10602 id = 115 }
name = "Kampfgeschwader 66"
strength = 80
type = tactical_bomber
model = 4 #ju 188
}
}


###
airunit = {
id = { type = 10602 id = 116 }
name = "5. Jagddivision"
leader = 431 # Bülowinus
location = 56 #56
base = 56 #56

division = {
id = { type = 10602 id = 117 }
name = "JG 2 'Richthofen'"
strength = 80
type = multi_role
model = 1 #Fw 190
}
}

#Reinforcements
airdivision = {
	dormant = yes				#	reinf Juli 10th
id = { type = 10602 id = 113 }
name = "KG 2 'Holzhammer'"
strength = 100
type = tactical_bomber
model = 4 #Ju 188
}

airdivision = {
	dormant = yes				#	reinf June 12th
id = { type = 10602 id = 118 }
name = "JG 3 'Udet'"
strength = 100
type = interceptor
model = 3 #Me 109E
}

airdivision = {
		dormant = yes			#	reinf June 10th
id = { type = 10602 id = 119 }
name = "JG 1 'Oesau'"
strength = 100
type = multi_role
model = 1 #Fw 190
}

airdivision = {
		dormant = yes			#	reinf June 20th
id = { type = 10602 id = 120 }
name = "JG 5 'Eismeer'"
strength = 30
max_strength = 30
type = interceptor
model = 3 #Me 109
}

airdivision = {
		dormant = yes			#	reinf July 1st
id = { type = 10602 id = 121 }
name = "Jagdgeschwader 11"
strength = 60
max_strength = 60
type = interceptor
model = 3 #Me 109
}

airdivision = {
		dormant = yes		#reinf July 10th, withdraws Sept 2nd
id = { type = 10602 id = 122 }
name = "Jagdgeschwader 27"
strength = 100
type = multi_role
model = 1 #Fw 190
}

###
airunit = {
id = { type = 10602 id = 123 }
name = "2. Flieger-Division"
leader = 446 # Huth
location = 61 #61
base = 61 #61

division = {
id = { type = 10602 id = 125 }
name = "Kampfgeschwader 100"
strength = 80
type = naval_bomber
model = 1 #Do 217
}
}

airdivision = {
	dormant = yes			#reinforcement August 5th
id = { type = 10602 id = 124 }
name = "KG 26 'Löwen'"
strength = 100
type = tactical_bomber
model = 3 #Ju 88
}

airdivision = {
	dormant = yes			#reinforcement June 28th
id = { type = 10602 id = 126 }
name = "Kampfgeschwader 30"
strength = 80
type = tactical_bomber
model = 3 #Ju 88
}

######################################
#  Dragoon Area - Luftwaffe Forces   #
######################################

########LUFTFLOTTE 2########

landunit = {
id = { type = 10602 id = 127 }
name = "Luftflotte 2"
#leader = 477 #
location = 528 #528

division = {
id = { type = 10602 id = 128 }
name = "Luftflotte 2 Base"
type = hq
strength = 50
max_strength = 50
extra = anti_air
}
}

###
airunit = {
id = { type = 10602 id = 129 }
name = "JG 77 'Herz As'"
leader = 481 #?
location = 528 #528
base = 528 #528

division = {
id = { type = 10602 id = 130 }
name = "JG 77 'Herz As'"
strength = 80
type = multi_role
model = 1 #Fw 190
}
}

airunit = {
id = { type = 10602 id = 131 }
name = "JG 26 'Schlageter'"
leader = 437 #?
location = 527 #527
base = 527 #527

division = {
id = { type = 10602 id = 132 }
name = "JG 26 'Schlageter'"
strength = 80
type = multi_role
model = 1 #Fw 190
}
}
}
