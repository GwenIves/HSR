
province = {   ###represents off map facilities
	id = 1756
	anti_air = 1
	air_base = {
		size = 10
		current_size = 10
		}
	Naval_base = {
		size = 10
		current_size = 10
		}
	supplypool = 500
	oilpool = 200
	coastalfort = 10
}



province = {
	id = 1692
	anti_air = 1
	air_base = {
		size = 4
		current_size = 4
		}
	Naval_base = {
		size = 4
		current_size = 4
		}
	supplypool = 2500
	oilpool = 2000
}


province = {
	id = 1689
	air_base = {
		size = 1
		current_size = 1
		}
	supplypool = 200
	oilpool = 60
}

province = {
	id = 1690
	supplypool = 200
	oilpool = 60
}


# Rabaul
province = {
	id = 1817
	air_base = {
		size = 3
		current_size = 0
		}

	naval_base = {
		size = 5
		current_size = 0
		}
	}


#Guam
Province = {
	id = 1624
	anti_air = 1
	air_base = {
		size = 4
		current_size = 4
		}
	Naval_base = {
		size = 4
		current_size = 4
		}
	supplypool = 200
	oilpool = 60
}


country = {
    tag = USA

	# Resource Reserves


	oil	=	5000
	supplies = 1000

	extra_tc = 20
	free =		{
		oil	=	15
		supplies =	40
		transports = 1.5
		ic = 10
	}


	manpower = 180



	policy = {
	date = { year = 0 month = january day = 0 }
	democratic = 10
	political_left = 7
	freedom = 10
	free_market = 10
	professional_army = 1
	defense_lobby = 5
	interventionism = 1
    }

		headofstate = { type = 9 id = 6001 }
		headofgovernment = { type = 9 id = 6044 }
		foreignminister = { type = 9 id = 6003 }
		armamentminister = { type = 9 id = 6077 }
		ministerofsecurity = { type = 9 id = 6005 }
		ministerofintelligence = { type = 9 id = 6128 }
		chiefofstaff = { type = 9 id = 6136 }
		chiefofarmy = { type = 9 id = 6144 }
		chiefofnavy = { type = 9 id = 6163 }
		chiefofair = { type = 9 id = 6167 }

	capital = 1756

    ownedprovinces =      { 1624 1668 1669 1670 1671 1681 1682 1683 1614 1622 1684 1685 1686 1687 1688 1689 1690 1692  1691 1752 1753 1754 1755 1756 1758  }
    controlledprovinces = { 1624 1668 1669 1670 1671 1681 1682 1683 1614 1622 1684 1685 1686 1687 1688 1689 1690 1692  1691 1752 1753 1754 1755 1756 1758  }
    nationalprovinces =   { 1624 1756 }

	techapps = {
# Usa 1941 techs
#######################

6070 4060

4010 4020 4030 # Basic Interceptor (P-40's)

4040 4050 # Basic MR/Basic Escort

4120 4130 4140 4150 # Imp. medium bomber

4190 # Basic naval bomber (Patrol planes)

4220 4230	#Basic and Improved STR

4250 4260 # Imp transport (C-47)

2150 2160 # Imp. Armoured Car

2010 2020 2030 2040 2050 # Improved light tank

2030 2070 # Basic Medium (Grant)

2290 2300 2310 2320 2330 2340 # Imp. WWII artillery (120mm)

2400 2410 # Basic AT

2450 2460 2470 # Basic Static AA

2510 2520 # Imp. AA

1010 1020 1030 # Basic infantry

1190 1200 1210 1220 # Semi-moto cavalry

1230 # Basic motorized

1150 1160 # Basic Marine

1310 1340 # Supply/repair - basics only

5010 5020 5030 # Agriculture (up to fertilizers)

5050 5060 5070 # Advanced Machine Tools

5080 5090 5100 # Construction (up to the forts)

5110 5120 5130 5140 5150 5160 5180 # Assembly lines (all except rockets)

5190 5200 5210 5220 5230 # Adv. oil plant (0.75)

5310 5320 5330 # Imp. Comp. machine

5350 5360 5370 5380 # Imp. encryption/Imp. decryption

5410 5420 5430 5440 # Cent. Radar

5470 5480 5490 5500 # Nuclear Tier 1

9010 9020 9030 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9190 9210 9220 9230 9240 9250

9350 # Doctrines (air)

6010 6020 6040 6050 6060 # Stand off doctrine (land)


8010 8020 8030 8040 8050 8060 8090 8100 8110 8160 8180

3010 3020 3030 #(Somers)
3070 3080 3090 3100 #(Brooklyn)
3130 3140 3150 #(New Orleans)
3190 3200 3210 3220 #(blank-one away from Alaska)
3250 3260 3270 3280 #(N.Carolina)
3320 3330 3340 3350 3360 #(Essex is in the que)
3400 3410 3420 3430 #(Perch)

#hospital
14000 14010 14020
		}


	transports = 400
	escorts = 14


  convoy = {
	id = { type = 10205 id = 110 }
	transports = 17
	escorts = 14
	rare_materials = no
	energy = no
	metal = no
	oil = yes
	supplies = yes
	path = { 1756 1980 1976 1883 2115 1689 }
	}
    convoy = {
	id = { type = 10205 id = 111 }
	transports = 17
	escorts = 0
	rare_materials = no
	energy = no
	metal = no
	oil = yes
	supplies = yes
	path = { 1756 1980 1976 1883 2115 1690 }
	}
    convoy = {
	id = { type = 10205 id = 112 }
	transports = 15
	escorts = 0
	rare_materials = no
	energy = no
	metal = no
	oil = yes
	supplies = yes
	path = { 1756 1980 1976 2107 1692 }
	}
    convoy = {
	id = { type = 10205 id = 251 }
	transports = 19
	escorts = 0
	rare_materials = no
	energy = no
	metal = no
	oil = yes
	supplies = yes
	path = { 1756 1980 1976 1883 2115 2118 1685 }
	}
    convoy = {
	id = { type = 10205 id = 252 }
	transports = 75
	escorts = 0
	rare_materials = no
	energy = no
	metal = no
	oil = yes
	supplies = yes
	path = { 1756 1980 1976 1883 2101 1686 }
	}





		landunit = {
		id = { type = 10200 id = 3 }
		name = "Esperitu Santo Base Force"
		location = 1689

			division = { experience = 45
			id = { type = 10200 id = 4 }
			name = "Esperitu Santo Base Force"
			strength = 20
			max_strength = 20
			type = garrison
			model = 1
			extra = engineer
			}
		       }

		landunit = {
		id = { type = 10200 id = 5 }
		name = "Efate Base Force"
		location = 1690

			division = { experience = 45
			id = { type = 10200 id = 6 }
			name = "Efate Base Force"
			strength = 20
			max_strength = 20
			type = garrison
			model = 1
			}
		       }

		landunit = {
		id = { type = 10200 id = 7 }
		name = "Noumea Base Force"
		location = 1692

			division = { experience = 45
			id = { type = 10200 id = 8 }
			name = "Noumea Base Force"
			strength = 20
			max_strength = 20
			type = garrison
			model = 1
			}
		       }
		landunit = {
		id = { type = 10200 id = 9 }
		name = "Samoa Base Force"
		location = 1756

			division = { experience = 45
			id = { type = 10200 id = 10 }
			name = "Samoa Base Force"
			type = garrison
			model = 1
			extra = engineer
			}
		       }



		landunit = {
		id = { type = 10200 id = 11 }
		name = "Guam Insular Force Guard"
		location = 1624

			division = { experience = 45
			id = { type = 10200 id = 12 }
			name = "Guam Insular Force Guard"
			type = marine
			strength = 20
			max_strength = 20
			model = 1
			}
		       }





		navalunit = {
		id = { type = 10200 id = 17 }
		name = "Submarine Squadron 20"
		location = 1737
		base = 1737

		division = { experience = 45  id = { type = 10200 id = 18 } name = "21st Submarine Division" type = submarine model = 1 }
		division = { experience = 45  id = { type = 10200 id = 19 } name = "22nd Submarine Division" type = submarine model = 1 }
		division = { experience = 45  id = { type = 10200 id = 20 } name = "201st Submarine Division" type = submarine model = 1 }
		division = { experience = 45  id = { type = 10200 id = 21 } name = "202nd Submarine Division" type = submarine model = 2 }
		division = { experience = 45  id = { type = 10200 id = 22 } name = "203rd Submarine Division" type = submarine model = 2 }
		}

		navalunit = {
		id = { type = 10200 id = 23 }
		name = "Destroyer Squadron 29"
		location = 1737
		base = 1737

		division = { experience = 45  id = { type = 10200 id = 24 } name = "57th Destroyer Division" type = destroyer }
		division = { experience = 45  id = { type = 10200 id = 25 } name = "58th Destroyer Division" type = destroyer }
		division = { experience = 45  id = { type = 10200 id = 26 } name = "59th Destroyer Division" type = destroyer }
		division = { experience = 45  id = { type = 10200 id = 27 } name = "'Edward Rutledge' Flotilla" type = transport }
		division = { experience = 45  id = { type = 10200 id = 28 } name = "'Young America' Flotilla" type = transport }
		}

		navalunit = {
		id = { type = 10200 id = 29 }
		name = "Asiatic Fleet"
		location = 1737
		base = 1737

		division = { experience = 45  id = { type = 10200 id = 30 } name = "USS Houston" type = heavy_cruiser model = 2 }
		division = { experience = 45  id = { type = 10200 id = 31 } name = "USS Marblehead" type = heavy_cruiser model = 1 }
		division = { experience = 45  id = { type = 10200 id = 32 } name = "USS Langley" type = carrier model = 0 extra = cag brigade_model =  0 }
		}



		landunit = {
		id = { type = 10200 id = 33 }
		name = "Army Reserve"
		location = 1739
		division = { experience = 35  id = { type = 10200 id = 34 } name = "U.S. Philippine Division" strength = 100 type = infantry model = 2 }
		}


		landunit = {
		id = { type = 10200 id = 35 }
		name = "4th Marine Regiment"
		location = 1738
		division = { experience = 65  id = { type = 10200 id = 36 } name = "4th Marine Regiment" strength = 32 max_strength = 35 type = marine model = 1 }
		}






		navalunit = {
		id = { type = 10200 id = 62 }
		name = "41st Submarine Division"
		location = 1756
		base = 1756
		division = { experience = 45  id = { type = 10200 id = 63 } name = "41st Submarine Division" type = submarine model = 2 }
		}


		navalunit = {
		id = { type = 10200 id = 64 }
		name = "42nd Submarine Division"
		location = 1756
		base = 1756
		division = { experience = 45  id = { type = 10200 id = 65 } name = "42nd Submarine Division" type = submarine model = 2 }
		}

		navalunit = {
		id = { type = 10200 id = 66 }
		name = "SWPAC Transports"
		location = 1756
		base = 1756

		division = { experience = 45  id = { type = 10200 id = 67 } name = "50th Destroyer Division" type = destroyer model = 1 }
		division = { experience = 45  id = { type = 10200 id = 68 } name = "'Abraham Lincoln' Flotilla" type = transport }
		division = { experience = 45  id = { type = 10200 id = 69 } name = "'Susan B. Anthony' Flotilla" type = transport }
		}


	airunit = {
	id = { type = 10200 id = 13 }
	name = "Fourth Air Force"
	location = 1739
	base = 1739


		division = { experience = 45
		id = { type = 10200 id = 14 }
		name = "4th USAF Strategic Bomb. Wing"
		strength = 62
		type = strategic_bomber
		model = 1
		}

		division = { experience = 45
		id = { type = 10200 id = 15 }
		name = "10th USAF interceptor Wing"
		strength = 56
		type = interceptor
		model = 0
		}

		division = { experience = 45
		id = { type = 10200 id = 16 }
		name = "57th USAF Tactical Bomb. Wing"
		strength = 43
		type = tactical_bomber
		model = 1
		}
	}



landdivision = { experience = 65  dormant = yes id = { type = 10200 id = 2 } name = "Americal Division" strength = 45 type = infantry		model = 3 extra = artillery brigade_model = 4}


navaldivision = { experience = 65  dormant = yes id = { type = 10200 id = 51 } name = "USS Chicago" type = heavy_cruiser model = 2 }

navaldivision = { experience = 65  dormant = yes id = { type = 10200 id = 53 } name = "USS Lexington" type = carrier model = 1 extra = cag                 brigade_model = 2}
navaldivision = { experience = 65  id = { type = 10200 id = 54 } name = "USS Yorktown" type = carrier model = 2 extra = cag                 brigade_model = 2 }
navaldivision = { experience = 65  dormant = yes id = { type = 10200 id = 55 } name = "USS Chester" type = heavy_cruiser model = 2 }
navaldivision = { experience = 65  dormant = yes id = { type = 10200 id = 56 } name = "USS Portland" type = heavy_cruiser model = 2 }
navaldivision = { experience = 65  dormant = yes id = { type = 10200 id = 57 } name = "USS New Orleans" type = heavy_cruiser model = 2 }
navaldivision = { experience = 65  dormant = yes id = { type = 10200 id = 58 } name = "USS Astoria" type = heavy_cruiser model = 2 }
navaldivision = { experience = 65  dormant = yes id = { type = 10200 id = 59 } name = "USS Minneapolis" type = heavy_cruiser model = 2 }
navaldivision = { experience = 65  dormant = yes id = { type = 10200 id = 60 } name = "7th Destroyer Division" type = destroyer model = 1 }
navaldivision = { experience = 65  dormant = yes id = { type = 10200 id = 61 } name = "8th Destroyer Division" type = destroyer model = 1 }



airdivision = { experience = 65  dormant = yes id = { type = 10200 id = 71 } name = "7th Bombardement Group" strength = 40 max_strength = 80                    type = strategic_bomber model = 1 }
airdivision = { experience = 65  dormant = yes id = { type = 10200 id = 73 } name = "3rd Bombardement Group" strength = 40 max_strength = 80                    type = tactical_bomber model = 1 }
airdivision = { experience = 65  dormant = yes id = { type = 10200 id = 75 } name = "7th Bombardement Group" strength = 40 max_strength = 80                    type = strategic_bomber model = 1 }
airdivision = { experience = 65  dormant = yes id = { type = 10200 id = 77 } name = "19th Bombardement Group" strength = 40 max_strength =                    80 type = strategic_bomber model = 1 }
airdivision = { experience = 65  dormant = yes id = { type = 10200 id = 79 } name = "8th Fighter Group" strength = 40 max_strength =                    80 type = interceptor model = 1 }



airdivision = { experience = 65  dormant = yes id = { type = 10200 id = 80 } name = "22nd Bombardement Group" strength = 60 max_strength = 80 type = strategic_bomber model = 1 }

airdivision = { experience = 65  dormant = yes id = { type = 10200 id = 81 } name = "38th Bombardement Group" strength = 40 max_strength = 80                    type = tactical_bomber model = 1 }

airdivision = { experience = 65  dormant = yes id = { type = 10200 id = 82 } name = "43rd Bombardement Group" strength = 60 max_strength = 80 type = strategic_bomber model = 1 }

airdivision = { experience = 65  dormant = yes id = { type = 10200 id = 83 } name = "90th Bombardement Group" strength = 40 max_strength = 80                    type = tactical_bomber model = 1 }

airdivision = { experience = 65  dormant = yes id = { type = 10200 id = 84 } name = "5th Bombardement Group" strength = 60 max_strength = 80 type = strategic_bomber model = 1 }

airdivision = { experience = 65  dormant = yes id = { type = 10200 id = 85 } name = "42nd Bombardement Group" strength = 40 max_strength = 80                    type = tactical_bomber model = 1 }

airdivision = { experience = 65  dormant = yes id = { type = 10200 id = 86 } name = "307th Bombardement Group" strength = 60 max_strength = 80 type = strategic_bomber model = 1 }

airdivision = { experience = 65  dormant = yes id = { type = 10200 id = 87 } name = "380th Bombardement Group" strength = 60 max_strength = 80 type = strategic_bomber model = 2 }

airdivision = { experience = 65  dormant = yes id = { type = 10200 id = 88 } name = "35th Fighter Group" strength = 40 max_strength = 80 type = multi_role model = 1 }

airdivision = { experience = 65  dormant = yes id = { type = 10200 id = 89 } name = "49th Fighter Group" strength = 40 max_strength = 80 type = multi_role model = 1 }

airdivision = { experience = 65  dormant = yes id = { type = 10200 id = 90 } name = "58th Fighter Group" strength = 40 max_strength = 80 type = multi_role model = 1 }

airdivision = { experience = 65  dormant = yes id = { type = 10200 id = 91 } name = "18th Fighter Group" strength = 40 max_strength = 80 type = interceptor model = 1 }

airdivision = { experience = 65  dormant = yes id = { type = 10200 id = 92 } name = "347th Fighter Group" strength = 40 max_strength = 80 type = interceptor model = 2 }

airdivision = { experience = 65  dormant = yes id = { type = 10200 id = 93 } name = "475th Fighter Group" strength = 40 max_strength = 80 type = multi_role model = 2 }


airdivision = { experience = 65  dormant = yes id = { type = 10200 id = 94 } name = "VMF 121/122" strength = 40 max_strength = 80 type = interceptor model = 1}

airdivision = { experience = 65  dormant = yes id = { type = 10200 id = 95 } name = "VMF 123/124" strength = 40 max_strength = 80 type = interceptor model = 2 }

airdivision = { experience = 65  dormant = yes id = { type = 10200 id = 96 } name = "VMSB 131/132" strength = 40 max_strength = 80 type = cas model = 1 }

airdivision = { experience = 65  dormant = yes id = { type = 10200 id = 97 } name = "VMSB 141/142" strength = 40 max_strength = 80 type = cas model = 1 }
airdivision = { experience = 65  dormant = yes id = { type = 10200 id = 98 } name = "VMF 223/224" strength = 40 max_strength = 80 type = interceptor model = 1 }

airdivision = { experience = 65  dormant = yes id = { type = 10200 id = 99 } name = "VMSB 231/232/233" strength = 60 type = cas model = 1 }


####reinforcements

####jun -aug
landdivision = { experience = 65  dormant = yes id = { type = 10200 id = 200 } name = "32. Infantry Division" strength = 100 type = infantry model = 2 extra = artillery brigade_model = 4 }
landdivision = { experience = 65  dormant = yes id = { type = 10200 id = 201 } name = "41. Infantry Division" strength = 100 type = infantry model = 2 extra = light_armor_brigade }

navaldivision = { experience = 65  dormant = yes id = { type = 10200 id = 202 } name = "USS Saratoga" type = carrier model = 1 extra = cag                 brigade_model = 2}
navaldivision = { experience = 65  dormant = yes id = { type = 10200 id = 203 } name = "USS Enterprise" type = carrier model = 2 extra = cag                 brigade_model = 2 }
navaldivision = { experience = 65  dormant = yes id = { type = 10200 id = 204 } name = "USS Wasp" type = carrier model = 2 extra = cag                 brigade_model = 2}
navaldivision = { experience = 65  dormant = yes id = { type = 10200 id = 205 } name = "USS Long Island" type = escort_carrier model = 0 } # extra = cag brigade_model = 2
navaldivision = { experience = 65  dormant = yes id = { type = 10200 id = 206 } name = "USS North Carolina" type = battleship model = 3 }
navaldivision = { experience = 65  dormant = yes id = { type = 10200 id = 207 } name = "USS Indianapolis" type = heavy_cruiser model = 2 }
navaldivision = { experience = 65  dormant = yes id = { type = 10200 id = 208 } name = "USS Northampton" type = heavy_cruiser model = 2 }
navaldivision = { experience = 65  dormant = yes id = { type = 10200 id = 209 } name = "USS Pensacola" type = heavy_cruiser model = 2 }
navaldivision = { experience = 65  dormant = yes id = { type = 10200 id = 210 } name = "USS Salt Lake City" type = heavy_cruiser model = 2 }
navaldivision = { experience = 65  dormant = yes id = { type = 10200 id = 211 } name = "USS Louisville" type = heavy_cruiser model = 2 }
navaldivision = { experience = 65  dormant = yes id = { type = 10200 id = 212 } name = "USS San Francisco" type = heavy_cruiser model = 2 }
navaldivision = { experience = 65  dormant = yes id = { type = 10200 id = 213 } name = "11th Destroyer Division" type = destroyer model = 2 }
navaldivision = { experience = 65  dormant = yes id = { type = 10200 id = 214 } name = "12th Destroyer Division" type = destroyer model = 2 }
navaldivision = { experience = 65  dormant = yes id = { type = 10200 id = 215 } name = "10th Destroyer Division" type = destroyer model = 2 }
navaldivision = { experience = 65  dormant = yes id = { type = 10200 id = 216 } name = "USS Boise" type = light_cruiser model = 1  }
navaldivision = { experience = 65  dormant = yes id = { type = 10200 id = 217 } name = "USS Memphis" type = light_cruiser model = 1  }
navaldivision = { experience = 65  dormant = yes id = { type = 10200 id = 218 } name = "USS Atlanta" type = light_cruiser model = 1  }

landdivision = { experience = 65  dormant = yes id = { type = 10200 id = 219 } name = "1. Marine Division" strength = 100 type = marine model = 3 extra = artillery brigade_model = 4 }
landdivision = { experience = 65  dormant = yes id = { type = 10200 id = 220 } name = "1. SF Regiment" type = bergsjaeger model = 3 strength = 35 max_strength = 35 }

###sep
landdivision = { experience = 65  dormant = yes id = { type = 10200 id = 221 } name = "2. Marine Regiment" type = marine model = 3 strength = 35 max_strength = 35}

navaldivision = { experience = 65  dormant = yes id = { type = 10200 id = 222 } name = "USS Hornet" type = carrier model = 2 }


}


