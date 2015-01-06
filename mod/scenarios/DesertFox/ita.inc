#Tobruk
province = {	id = 919	landfort = 3 }
province = {	id = 932	landfort = 3 }

#Anti Aircraft Batteries
province = { id = 523   anti_air = 2 } #Taranto
province = { id = 525   anti_air = 1 } #Palermo
province = { id = 932   anti_air = 1
	     supplypool = 1500
	     oilpool = 1500 } #Tripoli
province = { id = 919   anti_air = 1 } #Tobruk
province = { id = 924   anti_air = 1 } #Benghazi


province = { id =	523	naval_base = { size =	10	current_size = 	10	} }
province = { id =	525	naval_base = { size =	3	current_size = 	3	} }
province = { id =	924	naval_base = { size =	2	current_size = 	2	} }
province = { id =	919	naval_base = { size =	3	current_size = 	3	} }
province = { id =	932	naval_base = { size =	5	current_size = 	5	} }
province = { id =	932	air_base = { size =	6	current_size = 	6	} }
province = { id =	924	air_base = { size =	3	current_size = 	3	} }
province = { id =	919	air_base = { size =	4	current_size = 	4	} }
province = { id =	925	air_base = { size =	3	current_size = 	3	} }

country = {
    tag = ITA
	ai = "desertfox_ita.ai"

	manpower = 460

    control = GER

	policy = {
	date = { year = 0 month = january day = 0 }
	democratic = 2
	political_left = 3
	freedom = 4
	free_market = 7
	professional_army = 3
	defense_lobby = 7
	interventionism = 6
    }

	headofstate = { type = 9 id = 3001 }
	headofgovernment = { type = 9 id = 3002 }
	foreignminister = { type = 9 id = 3003 }
	armamentminister = { type = 9 id = 3067 }
	ministerofsecurity = { type = 9 id = 3005 }
	ministerofintelligence = { type = 9 id = 3109 }
	chiefofstaff = { type = 9 id = 3125 }
	chiefofarmy = { type = 9 id = 3139 }
	chiefofnavy = { type = 9 id = 3149 }
	chiefofair = { type = 9 id = 3161 }


	# Resource Reserves
	oil 	=	500
	supplies = 1500

	free = 		{
		oil 	=	12
		supplies =	45
		ic = 25
	}


	extra_tc = 35

	steal_leader = 6009 #Armellini
##	steal_leader = 6284 #Azzi
	steal_leader = 6018 #Barbasetti di Prun
	steal_leader = 6021 #Bastico
	steal_leader = 6042 #Bitossi
	steal_leader = 6024 #Bergonzoli
	steal_leader = 6033 #Calvi di Bergolo
	steal_leader = 6059 #de Stefanis
	steal_leader = 6062 #di Nisio
	steal_leader = 6071 #Frattini
	steal_leader = 6074 #Gambara
	steal_leader = 6080 #Gioda
	steal_leader = 6240 #Giorgis
	steal_leader = 6239 #La Ferla
	steal_leader = 6263 #Mannerini
	steal_leader = 6101 #Masina
	steal_leader = 6102 #Messe
	steal_leader = 6267 #Navarini
	steal_leader = 6111 #Orlando
	steal_leader = 6043 #Priore

	steal_leader = 6195 #Bernasconi
	steal_leader = 6222 #Pezzi
	steal_leader = 6234 #Silvestri


	capital = 523

	ownedprovinces =      { 916 917 918 919 920 921 922 923 924 925 926 927 928 929 930 931 932 933	523  525 526 524
		}
	controlledprovinces = {  925 926 927 928 929 930 931 932 933	523 525 526 524

	}
	nationalprovinces =   {
				523  525 526 524
	}

	transports = 130
	escorts = 35




	techapps = {
	# ITA 1941 techs
	#######################

	1240 4070 4200

	4010 4020 4030 # Basic Interceptor

	4040 # Basic MR

	4050 # Basic Escort

	4120 4130 4140 # Basic medium bomber

	4190 # Basic Naval Bomber

	4250 4260 # Imp air transport

	2010 2020 2040 # Basic light tank

	2030 2050 2070 # Basic Medium

	2150

	2290 2300 2310 2320 # Early Field Artillery

	2330 2400 # Early AT

	2450 2460 2470 # Basic Static AA

	2510 2520 # Imp. AA

	1010 1020 # Early infantry

	1150 1160

	1190 1200 1210 1220 # Semi-moto cavalry

	1110 1120 1130 1030 1070 # Imp. Mountain/Early para

	1230 # Basic motorized

	1310 1340 #rear area

	5010 # Agriculture (basic)

	5050 5060 # Basic Machine Tools

	5080 5090 5100 # Construction (up to the forts)

	5190 5200 # Imp. oil conversion

	5310 5320 # Basic CT machine

	5470 5480 5490 #Nuclear Tier 2

	9010 9020 9030 9040 9050 9060 9070 9080 9090 9100 # Doctrines (air)

	6010 6030 6110 6120 6130 # doctrine (land)

	8010 8020 8030 8040 8050 8070 8120 8310

	3010 3020 3030 #(Navigatori)
	3070 3080 3090 3100 #(Abruzzi)
	3130 3140 3150 #(Zara)
	3190 3200 #(blank)
	3250 3260 3270 3280 #(Littorio)
	3320 #(blank)
	3400 3410 3420 3430 #(Calvi)

	}


	### Italy OOB 1941 Author: MH ###
	##XX Corpo d´Armata ###leader = Gen. Giuseppe De Stefanis

landunit = { location = 925 id = { type = 12000 id = 7 } name = "132a Divisione Corazzata Ariete" ###leader = Gen. F. Arena
division = { id = { type = 12000 id = 8 } name = "32° Rgt.Carri (Ariete)" strength = 30 max_strength = 30 type = light_armor model = 0 }
division = { id = { type = 12000 id = 9 } name = "132° Rgt.Carri (Ariete)" strength = 30 max_strength = 30 type = armor model = 2 }
division = { id = { type = 12000 id = 10 } name = "8° Rgt.Bersaglieri (Ariete)" strength = 30 max_strength = 30 type = motorized }
}
###"XXI Corpo d´Armata"
landunit = { location = 925 id = { type = 12000 id = 13 } name = "17a Divisione Pavia" ###leader = Gen. N. Scattaglia
division = { id = { type = 12000 id = 14 } name = "27° Rgt.Fanteria (Pavia)" strength = 30 max_strength = 30 type = infantry model = 2 }
division = { id = { type = 12000 id = 15 } name = "28° Rgt.Fanteria (Pavia)" strength = 30 max_strength = 30 type = infantry model = 2 }
}
landunit = { location = 925 id = { type = 12000 id = 17 } name = "25a Divisione Bologna" ###leader = Gen. A. Gloria
division = { id = { type = 12000 id = 18 } name = "39° Rgt.Fanteria (Bologna)" strength = 30 max_strength = 30 type = infantry model = 2 }
division = { id = { type = 12000 id = 19 } name = "40° Rgt.Fanteria (Bologna)" strength = 30 max_strength = 30 type = infantry model = 2 }
}
landunit = { location = 925 id = { type = 12000 id = 21 } name = "27a Divisione Brescia" ###leader = Gen. B. Brunetti
division = { id = { type = 12000 id = 22 } name = "19° Rgt.Fanteria (Brescia)" strength = 30 max_strength = 30 type = infantry model = 2 }
division = { id = { type = 12000 id = 23 } name = "20° Rgt.Fanteria (Brescia)" strength = 30 max_strength = 30 type = infantry model = 2 }
}

####"DAK"
landunit = { location = 925 id = { type = 12000 id = 30 } name = "55a Divisione Savona"
division = { id = { type = 12000 id = 31 } name = "15° Rgt.Fanteria (Savona)" strength = 30 max_strength = 30 type = infantry model = 2 }
division = { id = { type = 12000 id = 32 } name = "16° Rgt.Fanteria (Savona)" strength = 30 max_strength = 30 type = infantry model = 2 }
}

##reinforcements

####Trento april: Trento ###leader = Gen. G. Masina
landdivision = { dormant = yes id = { type = 12000 id = 26 } name = "61° Rgt.Fanteria  (Trento)" strength = 30 max_strength = 30 type = infantry model = 2 }
landdivision = { dormant = yes id = { type = 12000 id = 27 } name = "62° Rgt.Fanteria (Trento)" strength = 30 max_strength = 30 type = infantry model = 2 }

###location = 925  "101st Division Trieste" ###leader = Gen. F. La Ferla
landdivision = { dormant = yes id = { type = 12000 id = 3 } name = "65° Rgt.Fanteria (Triest)" strength = 30 max_strength = 30 type = motorized }
landdivision = { dormant = yes id = { type = 12000 id = 4 } name = "66° Rgt.Fanteria (Triest)" strength = 30 max_strength = 30 type = motorized }
landdivision = { dormant = yes id = { type = 12000 id = 5 } name = "9° Rgt.Bersaglieri (Triest)" strength = 30 max_strength = 30 type = motorized }


###"133rd Division Littorio" ###leader = Gen. G. Bitossi
landdivision = { dormant = yes id = { type = 12000 id = 33 } name = "33° Rgt.Carri(Littorio)" strength = 30 max_strength = 30 type = light_armor model = 0 }
landdivision = { dormant = yes id = { type = 12000 id = 34 } name = "133° Rgt.Carri(Littorio)" strength = 30 max_strength = 30 type = armor model = 2 }
landdivision = { dormant = yes id = { type = 12000 id = 35 } name = "12° Rgt.Bersaglieri (Littorio)" strength = 30 max_strength = 30 type = motorized }

###"136th Division Giovani Fascisti" ###leader = Gen. I. Di Nisio
landdivision = { dormant = yes id = { type = 12000 id = 36 } name = "Giovani Fascisti Rgt.Carri" strength = 30 max_strength = 30 type = armor model = 2 }
landdivision = { dormant = yes id = { type = 12000 id = 37 } name = "Giovani Fascisti Rgt.Bersaglieri" strength = 30 max_strength = 30 type = motorized }

###"185th Folgore ###leader = Gen. E. Frattini
landdivision = { dormant = yes id = { type = 12000 id = 38 } name = "186° Rgt.Fanteria (Folgore)" strength = 30 max_strength = 30 type = paratrooper model = 1 }
landdivision = { dormant = yes id = { type = 12000 id = 39 } name = "187° Rgt.Fanteria (Folgore)" strength = 30 max_strength = 30 type = paratrooper model = 1 }

####"134 Division Centauro"
landdivision = { dormant = yes id = { type = 12000 id = 40 } name = "31° Rgt.Carri(Centauro)" strength = 30 max_strength = 30 type = light_armor model = 0 }
landdivision = { dormant = yes id = { type = 12000 id = 41 } name = "131° Rgt.Carri(Centauro)" strength = 30 max_strength = 30 type = armor model = 2 }
landdivision = { dormant = yes id = { type = 12000 id = 42 } name = "5th Bersaglieri Rgt.(Centauro)" strength = 30 max_strength = 30 type = motorized }

###16th Division Pistoia"
landdivision = { dormant = yes id = { type = 12000 id = 43 } name = "35° Rgt.Fanteria (Pistoia)" strength = 30 max_strength = 30 type = infantry model = 2 }
landdivision = { dormant = yes id = { type = 12000 id = 44 } name = "36° Rgt.Fanteria (Pistoia)" strength = 30 max_strength = 30 type = infantry model = 2 }

###"80th La Spezia
landdivision = { dormant = yes id = { type = 12000 id = 45 } name = "125° Rgt.Fanteria (La Spezia)" strength = 30 max_strength = 30 type = paratrooper model = 1 }
landdivision = { dormant = yes id = { type = 12000 id = 46 } name = "126° Rgt.Fanteria (La Spezia)" strength = 30 max_strength = 30 type = paratrooper model = 1 }

###1st Division Superga"
landdivision = { dormant = yes id = { type = 12000 id = 47 } name = "91° Rgt.Fanteria (Pistoia)" strength = 30 max_strength = 30 type = infantry model = 2 }
landdivision = { dormant = yes id = { type = 12000 id = 48 } name = "92° Rgt.Fanteria (Pistoia)" strength = 30 max_strength = 30 type = infantry model = 2 }


landunit = { location = 932 id = { type = 12000 id = 49 } name = "Tripolis Base Force"
division = { id = { type = 12000 id = 50 } name = "1° Rgt.Fanteria (Tripolis)" strength = 30 max_strength = 30 type = garrison model = 0 }
division = { id = { type = 12000 id = 51 } name = "2° Rgt.Fanteria (Tripolis)" strength = 30 max_strength = 30 type = garrison model = 0 }
division = { id = { type = 12000 id = 53 } name = "3° Rgt.Fanteria (Tripolis)" strength = 30 max_strength = 30 type = garrison model = 0 }
}


####Italian Air force
airunit = { location = 932 base = 932 id = { type = 12000 id = 100 } name = "Comando Aereo Libico"
division = { id = { type = 12000 id = 101 } name = "10° Stormo Bombardieri" strength = 47 max_strength = 80 type = tactical_bomber model = 1 ##SM81
 }
division = { id = { type = 12000 id = 102 } name = "14° Stormo Bombardieri" strength = 45 max_strength = 80 type = tactical_bomber model = 0 ##SM79
}
division = { id = { type = 12000 id = 103 } name = "15° Stormo Bombardieri" strength = 45 max_strength = 80 type = tactical_bomber model = 0 ##SM79
}
division = { id = { type = 12000 id = 104 } name = "33° Stormo Bombardieri" strength = 45 max_strength = 80 type = tactical_bomber model = 0 ##SM79
}
division = { id = { type = 12000 id = 105 } name = "50° Stormo D'Assalto" strength = 45 max_strength = 80 type = cas model = 1 ##BA65
}
division = { id = { type = 12000 id = 106 } name = "32° Stormo Caccia" strength = 28 max_strength = 80 type = interceptor model = 1 ##CR42
}
}



airdivision = { dormant = yes id = { type = 12000 id = 107 } name = "14° Stormo Caccia 'Rex'" strength = 47 type = interceptor model = 2  }

}
