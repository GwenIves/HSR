
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
	ic = 20
	energy	=	60
	metal	=	30
	rare_materials = 15
	oil	=	15
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





country = {
    tag = USA

	# Resource Reserves


	energy	=	400
	metal	=	400
	rare_materials =	400
	oil	=	5000
	supplies = 1000

	extra_tc = 40
	free =		{
		oil	=	15
		supplies =	25
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

    ownedprovinces =      { 1668 1669 1670 1671 1681 1682 1683 1614 1622 1684 1685 1686 1687 1688 1689 1690 1692  1691 1752 1753 1754 1755 1756 1758  }
    controlledprovinces = { 1685 1686 1687 1688 1689 1690 1692 1691 1752 1753 1754 1755 1756 1758 }
    nationalprovinces =   { 1756 }

	techapps = {
# Usa 1941 techs
#######################

4010 4020 4030 # Basic Interceptor (P-40's)

4040 4050 # Basic MR/Basic Escort

4120 4130 4140 4150 # Imp. medium bomber

4190 # Basic naval bomber (Patrol planes)

4250 # Basic transport (DC-3)

2150 2160 # Imp. Armoured Car

2010 2020 2030 2040 2050 # Improved light tank

2030 2070 # Basic Medium (Grant)

2290 2300 2310 2320 2330 2340 # Imp. WWII artillery (120mm)

2400 2410 # Basic AT

2450 2460 2470 # Basic Static AA

2510 2520 # Imp. AA

1010 1020 1030 1040 # Imp. infantry

1190 1200 1210 1220 # Semi-moto cavalry

1110 1120 1130 1070 # Imp. Mountain/Early para

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

5410 5420 # Imp. Dec. Radar

5470 5480 5490 5500 5510 # Nuke Fuel Analisys

9010 9020 9030 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9190 9210 9220 9230 9240 9250

9350 # Doctrines (air)

6010 6020 6040 6050 6060 # Stand off doctrine (land)


8010 8020 8030 8040 8050 8060 8090 8100 8110 8130 8160 8180

3010 3020 3030 3040 3050
3070 3080 3090 3100
3130 3140 3150 3160
3190 3200 3210 3220
3250 3260 3270 3280 3290
3320 3330 3340 3350 3360
3400 3410 3420 3430
4220 4230
12100 12110 12120 #esc car
14000 14010 14020

		}


	transports = 720
	escorts = 54





		landunit = {
		id = { type = 10200 id = 1 }
		name = "Americal Divison"
		location = 1692
		leader = 60291 #Patch

			division = {
			id = { type = 10200 id = 2 }
			name = "Americal Division"
			strength = 100
			type = infantry
			model = 3
			extra = artillery
		brigade_model = 4
			}
			}


		landunit = {
		id = { type = 10200 id = 3 }
		name = "Esperitu Santo Base Force"
		location = 1689

			division = {
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

			division = {
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

			division = {
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

			division = {
			id = { type = 10200 id = 10 }
			name = "Samoa Base Force"
			type = garrison
			model = 1
			extra = engineer
			}
		       }



		navalunit = {
		id = { type = 10200 id = 50 }
		name = "Brisbane Force"
		location = 1722
		base = 1722
		leader = 60426 #Kinkaid

		division = { id = { type = 10200 id = 51 } name = "USS Chicago" type = heavy_cruiser model = 2 }
		}


		navalunit = {
		id = { type = 10200 id = 52 }
		name = "CV Squadron 1"
		location = 1692
		base = 1692
		leader = 60404 #Fletcher

		division = { id = { type = 10200 id = 53 } name = "USS Lexington" type = carrier model = 1 extra = cag                 brigade_model = 4 }
		division = { id = { type = 10200 id = 54 } name = "USS Yorktown" type = carrier model = 2 extra = cag                 brigade_model = 4 }
		division = { id = { type = 10200 id = 55 } name = "USS Chester" type = heavy_cruiser model = 2 }
		division = { id = { type = 10200 id = 56 } name = "USS Portland" type = heavy_cruiser model = 2 }
		division = { id = { type = 10200 id = 57 } name = "USS New Orleans" type = heavy_cruiser model = 2 }
		division = { id = { type = 10200 id = 58 } name = "USS Astoria" type = heavy_cruiser model = 2 }
		division = { id = { type = 10200 id = 59 } name = "USS Minneapolis" type = heavy_cruiser model = 2 }
		division = { id = { type = 10200 id = 60 } name = "7th Destroyer Division" type = destroyer model = 1 }
		division = { id = { type = 10200 id = 61 } name = "8th Destroyer Division" type = destroyer model = 1 }
		}

		navalunit = {
		id = { type = 10200 id = 62 }
		name = "41st Submarine Division"
		location = 2247
		base = 1692
		leader = 60401 #English
		division = { id = { type = 10200 id = 63 } name = "41st Submarine Division" type = submarine model = 2 }
		}


		navalunit = {
		id = { type = 10200 id = 64 }
		name = "42nd Submarine Division"
		location = 2117
		base = 1692
		leader = 60479 #Withers
		division = { id = { type = 10200 id = 65 } name = "42nd Submarine Division" type = submarine model = 2 }
		}

		navalunit = {
		id = { type = 10200 id = 66 }
		name = "SWPAC Transports"
		location = 1692
		base = 1692
		leader = 60387 #Calhoun

		division = { id = { type = 10200 id = 67 } name = "50th Destroyer Division" type = destroyer model = 1 }
		division = { id = { type = 10200 id = 68 } name = "'Abraham Lincoln' Flotilla" type = transport }
		division = { id = { type = 10200 id = 69 } name = "'Susan B. Anthony' Flotilla" type = transport }
		}




airunit = { id = { type = 10200 id = 70 } name = "7th Bombardment Group"
	    location = 1722 base = 1722
		   division = { id = { type = 10200 id = 71 } name = "7th Bombardment Group" strength = 40 max_strength = 80                    type = strategic_bomber model = 1 }
	  }
airunit = { id = { type = 10200 id = 72 } name = "3rd Bombardment Group"
	    location = 1722 base = 1722 leader = 60527 #Kenney
		   division = { id = { type = 10200 id = 73 } name = "3rd Bombardment Group" strength = 40 max_strength = 80                    type = tactical_bomber model = 1 }
	  }
airunit = { id = { type = 10200 id = 74 } name = "7th Bombardment Group"
	    location = 1722 base = 1722
		   division = { id = { type = 10200 id = 75 } name = "7th Bombardment Group" strength = 40 max_strength = 80                    type = strategic_bomber model = 1 }
	  }
airunit = { id = { type = 10200 id = 76 } name = "19th Bombardment Group"
	    location = 1722 base = 1722 leader = 60490 #Brett
		   division = { id = { type = 10200 id = 77 } name = "19th Bombardment Group" strength = 40 max_strength =                    80 type = strategic_bomber model = 1 }
	  }
airunit = { id = { type = 10200 id = 78 } name = "8th Fighter Group"
	    location = 1722 base = 1722
		   division = { id = { type = 10200 id = 79 } name = "8th Fighter Group" strength = 40 max_strength =                    80 type = interceptor model = 1 }
	  }



airdivision = { dormant = yes id = { type = 10200 id = 80 } name = "22nd Bombardment Group" strength = 60 max_strength = 80 type = strategic_bomber model = 1 }

airdivision = { dormant = yes id = { type = 10200 id = 81 } name = "38th Bombardment Group" strength = 40 max_strength = 80                    type = tactical_bomber model = 1 }

airdivision = { dormant = yes id = { type = 10200 id = 82 } name = "43rd Bombardment Group" strength = 60 max_strength = 80 type = strategic_bomber model = 1 }

airdivision = { dormant = yes id = { type = 10200 id = 83 } name = "90th Bombardment Group" strength = 40 max_strength = 80                    type = tactical_bomber model = 1 }

airdivision = { dormant = yes id = { type = 10200 id = 84 } name = "5th Bombardment Group" strength = 60 max_strength = 80 type = strategic_bomber model = 1 }

airdivision = { dormant = yes id = { type = 10200 id = 85 } name = "42nd Bombardment Group" strength = 40 max_strength = 80                    type = tactical_bomber model = 1 }

airdivision = { dormant = yes id = { type = 10200 id = 86 } name = "307th Bombardment Group" strength = 60 max_strength = 80 type = strategic_bomber model = 1 }

airdivision = { dormant = yes id = { type = 10200 id = 87 } name = "380th Bombardment Group" strength = 60 max_strength = 80 type = strategic_bomber model = 2 }

airdivision = { dormant = yes id = { type = 10200 id = 88 } name = "35th Fighter Group" strength = 40 max_strength = 80 type = multi_role model = 1 }

airdivision = { dormant = yes id = { type = 10200 id = 89 } name = "49th Fighter Group" strength = 40 max_strength = 80 type = multi_role model = 1 }

airdivision = { dormant = yes id = { type = 10200 id = 90 } name = "58th Fighter Group" strength = 40 max_strength = 80 type = multi_role model = 1 }

airdivision = { dormant = yes id = { type = 10200 id = 91 } name = "18th Fighter Group" strength = 40 max_strength = 80 type = interceptor model = 1 }

airdivision = { dormant = yes id = { type = 10200 id = 92 } name = "347th Fighter Group" strength = 40 max_strength = 80 type = interceptor model = 2 }

airdivision = { dormant = yes id = { type = 10200 id = 93 } name = "475th Fighter Group" strength = 40 max_strength = 80 type = multi_role model = 2 }


airdivision = { dormant = yes id = { type = 10200 id = 94 } name = "VMF 121/122" strength = 40 max_strength = 80 type = interceptor model = 1}

airdivision = { dormant = yes id = { type = 10200 id = 95 } name = "VMF 123/124" strength = 40 max_strength = 80 type = interceptor model = 2 }

airdivision = { dormant = yes id = { type = 10200 id = 96 } name = "VMSB 131/132" strength = 40 max_strength = 80 type = cas model = 1 }

airdivision = { dormant = yes id = { type = 10200 id = 97 } name = "VMSB 141/142" strength = 40 max_strength = 80 type = cas model = 1 }
airdivision = { dormant = yes id = { type = 10200 id = 98 } name = "VMF 223/224" strength = 40 max_strength = 80 type = interceptor model = 1 }

airdivision = { dormant = yes id = { type = 10200 id = 99 } name = "VMSB 231/232/233" strength = 60 type = cas model = 1 }


####reinforcements

####jun -aug
landdivision = { dormant = yes id = { type = 10200 id = 200 } name = "32. Infantry Division" strength = 100 type = infantry model = 2 extra = artillery brigade_model = 4 }
landdivision = { dormant = yes id = { type = 10200 id = 201 } name = "41. Infantry Division" strength = 100 type = infantry model = 2 extra = light_armor_brigade }

navaldivision = { dormant = yes id = { type = 10200 id = 202 } name = "USS Saratoga" type = carrier model = 1 extra = cag                 brigade_model = 4 }
navaldivision = { dormant = yes id = { type = 10200 id = 203 } name = "USS Enterprise" type = carrier model = 2 extra = cag                 brigade_model = 4  }
navaldivision = { dormant = yes id = { type = 10200 id = 204 } name = "USS Wasp" type = carrier model = 2 extra = cag                 brigade_model = 4 }
navaldivision = { dormant = yes id = { type = 10200 id = 205 } name = "USS Long Island" type = escort_carrier model = 0 } # extra = cag brigade_model = 2
navaldivision = { dormant = yes id = { type = 10200 id = 206 } name = "USS North Carolina" type = battleship model = 3 }
navaldivision = { dormant = yes id = { type = 10200 id = 207 } name = "USS Indianapolis" type = heavy_cruiser model = 2 }
navaldivision = { dormant = yes id = { type = 10200 id = 208 } name = "USS Northampton" type = heavy_cruiser model = 2 }
navaldivision = { dormant = yes id = { type = 10200 id = 209 } name = "USS Pensacola" type = heavy_cruiser model = 2 }
navaldivision = { dormant = yes id = { type = 10200 id = 210 } name = "USS Salt Lake City" type = heavy_cruiser model = 2 }
navaldivision = { dormant = yes id = { type = 10200 id = 211 } name = "USS Louisville" type = heavy_cruiser model = 2 }
navaldivision = { dormant = yes id = { type = 10200 id = 212 } name = "USS San Francisco" type = heavy_cruiser model = 2 }
navaldivision = { dormant = yes id = { type = 10200 id = 213 } name = "11th Destroyer Division" type = destroyer model = 2 }
navaldivision = { dormant = yes id = { type = 10200 id = 214 } name = "12th Destroyer Division" type = destroyer model = 2 }
navaldivision = { dormant = yes id = { type = 10200 id = 215 } name = "10th Destroyer Division" type = destroyer model = 2 }
navaldivision = { dormant = yes id = { type = 10200 id = 216 } name = "USS Boise" type = light_cruiser model = 1  }
navaldivision = { dormant = yes id = { type = 10200 id = 217 } name = "USS Memphis" type = light_cruiser model = 1  }
navaldivision = { dormant = yes id = { type = 10200 id = 218 } name = "USS Atlanta" type = light_cruiser model = 1  }

landdivision = { dormant = yes id = { type = 10200 id = 219 } name = "1. Marine Division" strength = 100 type = marine model = 3 extra = artillery brigade_model = 4 }
landdivision = { dormant = yes id = { type = 10200 id = 220 } name = "1. SF Regiment" strength = 100 type = bergsjaeger model = 3 strength = 35 max_strength = 35 }

###sep
landdivision = { dormant = yes id = { type = 10200 id = 221 } name = "2. Marine Regiment" strength = 100 type = marine model = 3 strength = 35 max_strength = 35}

navaldivision = { dormant = yes id = { type = 10200 id = 222 } name = "USS Hornet" type = carrier model = 2  extra = cag                 brigade_model = 4 }

###oct
navaldivision = { dormant = yes id = { type = 10200 id = 223 } name = "USS Washington" type = battleship model = 3 }
navaldivision = { dormant = yes id = { type = 10200 id = 224 } name = "USS Brooklyn" type = light_cruiser model = 1 }
navaldivision = { dormant = yes id = { type = 10200 id = 225 } name = "USS Nashville" type = light_cruiser model = 1  }

##nov
navaldivision = { dormant = yes id = { type = 10200 id = 226 } name = "USS Savannah" type = light_cruiser model = 1 }
navaldivision = { dormant = yes id = { type = 10200 id = 227 } name = "USS Omaha" type = light_cruiser model = 1 }
navaldivision = { dormant = yes id = { type = 10200 id = 228 } name = "USS South Dakota" type = battleship model = 3 }
navaldivision = { dormant = yes id = { type = 10200 id = 229 } name = "5th Destroyer Division" type = destroyer model = 1 }
navaldivision = { dormant = yes id = { type = 10200 id = 230 } name = "6th Destroyer Division" type = destroyer model = 2 }
navaldivision = { dormant = yes id = { type = 10200 id = 231 } name = "9th Destroyer Division" type = destroyer model = 2 }
navaldivision = { dormant = yes id = { type = 10200 id = 232 } name = "'State Of Maryland' Flotilla" type = transport }
navaldivision = { dormant = yes id = { type = 10200 id = 233 } name = "'Amherst Victory' Flotilla" type = transport }

landdivision = { dormant = yes id = { type = 10200 id = 234 } name = "8. Marine Regiment" strength = 100 type = marine model = 3 strength = 35 max_strength = 35}

navaldivision = { dormant = yes id = { type = 10200 id = 235 } name = "USS Quincy" type = heavy_cruiser model = 2 }
navaldivision = { dormant = yes id = { type = 10200 id = 236 } name = "USS Vincennes" type = heavy_cruiser model = 2 }
navaldivision = { dormant = yes id = { type = 10200 id = 237 } name = "USS Richmond" type = light_cruiser model = 1 }
navaldivision = { dormant = yes id = { type = 10200 id = 238 } name = "USS Concord" type = light_cruiser model = 1 }

####dec
navaldivision = { dormant = yes id = { type = 10200 id = 239 } name = "USS Raleigh" type = light_cruiser model = 1  }
navaldivision = { dormant = yes id = { type = 10200 id = 240 } name = "USS Detroit" type = light_cruiser model = 1  }
navaldivision = { dormant = yes id = { type = 10200 id = 241 } name = "59th Destroyer Division" type = destroyer model = 2 }

landdivision = { dormant = yes id = { type = 10200 id = 242 } name = "2. Marine Division" strength = 100 type = marine model = 3 extra = artillery brigade_model = 4 }

###jan
navaldivision = { dormant = yes id = { type = 10200 id = 243 } name = "USS Trenton" type = light_cruiser model = 1  }
navaldivision = { dormant = yes id = { type = 10200 id = 244 } name = "USS Phoenix" type = light_cruiser model = 1  }
navaldivision = { dormant = yes id = { type = 10200 id = 245 } name = "USS Cleveland" type = light_cruiser model = 1 }
navaldivision = { dormant = yes id = { type = 10200 id = 246 } name = "USS Helena" type = light_cruiser model = 1 }
navaldivision = { dormant = yes id = { type = 10200 id = 247 } name = "'Booker T. Washington' Flotilla" type = transport }

landdivision = { dormant = yes id = { type = 10200 id = 248 } name = "25. Infantry Division" strength = 100 type = infantry model = 3 extra = light_armor_brigade }


##feb

navaldivision = { dormant = yes id = { type = 10200 id = 249 } name = "USS Augusta" type = heavy_cruiser model = 2 }
navaldivision = { dormant = yes id = { type = 10200 id = 250 } name = "USS Wichita" type = heavy_cruiser model = 2 }
navaldivision = { dormant = yes id = { type = 10200 id = 251 } name = "USS Omaha" type = light_cruiser model = 1 }
navaldivision = { dormant = yes id = { type = 10200 id = 252 } name = "USS Cincinnati" type = light_cruiser model = 1  }

landdivision = { dormant = yes id = { type = 10200 id = 253 } name = "43. Infantry Division" strength = 100 type = infantry model = 3 extra = light_armor_brigade }


###jun
navaldivision = { dormant = yes id = { type = 10200 id = 254 } name = "60th Destroyer Division" type = destroyer model = 2 }
navaldivision = { dormant = yes id = { type = 10200 id = 255 } name = "'Sea Marlin' Flotilla" type = transport }


##aug
navaldivision = { dormant = yes id = { type = 10200 id = 256 } name = "60th Destroyer Division" type = destroyer model = 2 }

###nov

navaldivision = { dormant = yes id = { type = 10200 id = 257 } name = "USS Essex" type = carrier model = 4 extra = cag                 brigade_model = 4 }
navaldivision = { dormant = yes id = { type = 10200 id = 258 } name = "USS Bunker Hill" type = carrier model = 4 extra = cag                 brigade_model = 4 }
navaldivision = { dormant = yes id = { type = 10200 id = 259 } name = "USS Independence" type = escort_carrier model = 0 } # extra = cag brigade_model = 2
navaldivision = { dormant = yes id = { type = 10200 id = 260 } name = "USS Princeton" type = escort_carrier model = 0 } # extra = cag brigade_model =  2
navaldivision = { dormant = yes id = { type = 10200 id = 261 } name = "61st Destroyer Division" type = destroyer model = 3 }
navaldivision = { dormant = yes id = { type = 10200 id = 262 } name = "62nd Destroyer Division" type = destroyer model = 3 }
navaldivision = { dormant = yes id = { type = 10200 id = 263 } name = "63th Destroyer Division" type = destroyer model = 3 }
navaldivision = { dormant = yes id = { type = 10200 id = 264 } name = "64th Destroyer Division" type = destroyer model = 3 }
navaldivision = { dormant = yes id = { type = 10200 id = 265 } name = "'Storm King' Flotilla" type = transport }


###dec
navaldivision = { dormant = yes id = { type = 10200 id = 266 } name = "USS Monterey" type = carrier model = 0 extra = cag                 brigade_model = 2 }

landdivision = { dormant = yes id = { type = 10200 id = 267 } name = "112. Cavalry Regiment" strength = 35 max_strength = 35 type = cavalry model = 3 }

###mar44
navaldivision = { dormant = yes id = { type = 10200 id = 268 } name = "USS New Mexico" type = battleship model = 1 }
navaldivision = { dormant = yes id = { type = 10200 id = 269 } name = "USS Mississippi" type = battleship model = 1 }
navaldivision = { dormant = yes id = { type = 10200 id = 270 } name = "USS Idaho" type = battleship model = 1 }
navaldivision = { dormant = yes id = { type = 10200 id = 271 } name = "USS Tennessee" type = battleship model = 1 }


landdivision = { dormant = yes id = { type = 10200 id = 272 } name = "1. Cavalry Division" strength = 100 type = cavalry model = 3 }

}


