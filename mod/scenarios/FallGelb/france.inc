#Anti Aircraft Batteries
province = { id = 44   anti_air = 1 } #Lille
province = { id = 72   anti_air = 1 } #Metz
province = { id = 56   anti_air = 3 } #Paris
province = { id = 32   anti_air = 2 } #Brest
province = { id = 73   anti_air = 2 } #Strasbourg
province = { id = 317   anti_air = 1 } #Chaumont
province = { id = 38   anti_air = 1 } #Cherbourg
province = { id = 316   anti_air = 2 } #Mulhouse


province = { id =	38	naval_base = { size =	5	current_size = 	5	} }
province = { id =	18	air_base = { size =	5	current_size = 	5	} }
province = { id =	38	air_base = { size =	5	current_size = 	5	} }
province = { id =	317	air_base = { size =	4	current_size = 	4	} }
province = { id =	53	air_base = { size =	8	current_size = 	8	} }
province = { id =	56	air_base = { size =	10	current_size = 	10	} }


#Maginot line
province = {	id = 72	landfort = 10 }#Metz
province = {	id = 73	landfort = 10 }#Strasbourg
province = {	id = 316 landfort = 10 }#Mulhouse



country = {
	tag = FRA

	ai = "fallgelb_fra.ai"

steal_leader = 8029
steal_leader = 8106
steal_leader = 8075

	policy = {
	date = { year = 0 month = january day = 0 }
	democratic = 10
	political_left = 7
	free_market = 8
	freedom = 10
	professional_army = 5
	defense_lobby = 7
	interventionism = 8
    }

		headofstate = { type = 9 id = 2001 }
		headofgovernment = { type = 9 id = 2038 }
		foreignminister = { type = 9 id = 2055 }
		armamentminister = { type = 9 id = 2077 }
		ministerofsecurity = { type = 9 id = 2107 }
		ministerofintelligence = { type = 9 id = 2128 }
		chiefofstaff = { type = 9 id = 2007 }
		chiefofarmy = { type = 9 id = 2008 }
		chiefofnavy = { type = 9 id = 2009 }
		chiefofair = { type = 9 id = 2187 }

	capital = 56

	# Resource Reserves
	oil 	=	500
	supplies =	500


	free = 		{
		oil 	=	30
		supplies =	100
		ic = 25
	}


	extra_tc = 110

	manpower = 425

	transports = 100
	escorts = 60

	ownedprovinces =      {
		#Metropolitan France
		43 44 53 64 72 73 18 41 42 54 55 63 317 316 318 62 56 57 40 39 38

	}
	controlledprovinces = {
		43 44 53 64 72 73 18 41 42 54 55 63 317 316 318 62 56 57 40 39 38 	}
	nationalprovinces =   {
		43 44 53 64 72 73 18 41 42 54 55 63 317 316 318 62 56 57 40 39 38
			}

	techapps = {
# FRA 1939 techs
#######################

4010 4020 4030 # Basic Fighter (first D.520)

4120 4130 4140 # Basic medium bomber

2150 2160 # Improved Armoured Car

2010 2020 2040 # Basic light tank

2030 2070 # Basic medium tank

2100

2290 2300 2310 # GW artillery

2400 # Basic AT

2450 2460 # Early Static AA

2510 # Basic AA

1010 1020 # Early infantry

1190 1200 1210 1220 # Semi-moto Cavalry

1230 # Basic motorized

1110 1120 # Basic Mountain

5010 5020 # Agriculture (up to mechanized)

5050 5060 # Improved Machine Tools

5080 5090 5100 # Construction (up to the forts)

5110 5120 5130 # Assembly line experiments

5190 5200 # Imp. oil conversion


5310 5320 # Basic CT machine

5470 5480 # Nukes labs

9010 9020 9030 9040 9050 9060 # Mostly bomber doctrines (air)

6010 6030 6110 6120 # Attrition doctrine (land)

##temp navy
8010 8020 8030 8040 8050

1030 1240 3260 3250 3320 3080 3010 3090 3070 5070

	}

##################
####FRENCH OOB####
##################

landunit = {
 id = { type = 10527 id = 1 }
 name = "7e Armée"
 location = 64

  division = {
   id = { type = 10527 id = 2 }
   name = "4e Division d'Infanterie"
   strength = 70 experience = 55
   type = infantry model = 2
	     }

  division = {
   id = { type = 10527 id = 3 }
   name = "21e Division d'Infanterie"
   strength = 70 experience = 55
   type = infantry model = 2
	     }

  division = {
   id = { type = 10527 id = 4 }
   name = "60e Division d'Infanterie"
   strength = 70 experience = 55
   type = infantry model = 2
	     }

  division = {
   id = { type = 10527 id = 5 }
   name = "1ère Division Légère Mécanique"
   strength = 70 experience = 55
   type = armor model = 2
	     }

  division = {
   id = { type = 10527 id = 6 }
   name = "25e Division d'Infanterie Motorisée"
   strength = 70 experience = 55
   type = cavalry model = 3
	     }

  division = {
   id = { type = 10527 id = 7 }
   name = "4e Division d'Infanterie Motorisée"
   strength = 70 experience = 55
   type = cavalry model = 3
	     }
	   }

########################

landunit = {
 id = { type = 10527 id = 8 }
 name = "1ère Armée"
 location = 53

  division = {
   id = { type = 10527 id = 9 }
   name = "1ère Division Cuirassée"
   strength = 70 experience = 55
   type = armor model = 2
	     }

  division = {
   id = { type = 10527 id = 10 }
   name = "32e Division d'Infanterie"
   strength = 70 experience = 55
   type = infantry model = 0
   extra = anti_tank
  }


  division = {
   id = { type = 10527 id = 11 }
   name = "2e Division Légère Mécanique"
   strength = 70 experience = 55
   type = armor model = 2
	     }

  division = {
   id = { type = 10527 id = 12 }
   name = "3e Division Légère Mécanique"
   strength = 70 experience = 55
   type = armor model = 2
	     }

  division = {
   id = { type = 10527 id = 13 }
   name = "1ère Division d'Infanterie Motorisée"
   strength = 70 experience = 55
   type = cavalry model = 3
	     }

  division = {
   id = { type = 10527 id = 14 }
   name = "2e Division d'Infanterie Nord-Africaine"
   strength = 70 experience = 55
   type = infantry model = 2
	     }

  division = {
   id = { type = 10527 id = 15 }
   name = "15e Division d'Infanterie Motorisée"
   strength = 70 experience = 55
   type = cavalry model = 3
	     }

  division = {
   id = { type = 10527 id = 315 }
   name = "1ère Division d'Infanterie"
   strength = 70 experience = 55
   type = infantry model = 2
	     }

  division = {
   id = { type = 10527 id = 16 }
   name = "12e Division d'Infanterie Motorisée"
   strength = 70 experience = 55
   type = cavalry model = 3
	     }

  division = {
   id = { type = 10527 id = 17 }
   name = "5e Division d'Infanterie Nord-Africaine"
   strength = 70 experience = 55
   type = infantry model = 2
  extra = anti_tank brigade_model = 0
  }
	}

 #####################
#####################

landunit = {
 id = { type = 10527 id = 18 }
 name = "9e Armée"
 location = 56


  division = {
   id = { type = 10527 id = 19 }
   name = "1ère Division Légère de Cavalerie"
   strength = 70 experience = 55
   type = cavalry model = 1
	     }

  division = {
   id = { type = 10527 id = 20 }
   name = "4e Division Légère de Cavalerie"
   strength = 70 experience = 55
   type = cavalry model = 1
	     }

  division = {
   id = { type = 10527 id = 21 }
   name = "4e Division d'Infanterie Nord-Africaine"
   strength = 70 experience = 55
   type = infantry model = 2
	     }

  division = {
   id = { type = 10527 id = 22 }
   name = "53e Division d'Infanterie"
   strength = 70 experience = 55
   type = infantry model = 2
  extra = anti_tank brigade_model = 0
 }

  division = {
   id = { type = 10527 id = 23 }
   name = "5e Division d'Infanterie Motorisée"
   strength = 70 experience = 55
   type = cavalry model = 3
	     }

  division = {
   id = { type = 10527 id = 24 }
   name = "18e Division d'Infanterie"
   strength = 70 experience = 55
   type = infantry model = 2
	     }

  division = {
   id = { type = 10527 id = 25 }
   name = "22e Division d'Infanterie"
   strength = 70 experience = 55
   type = infantry model = 2
	     }
	   }

############################

landunit = {
 id = { type = 10527 id = 26 }
 name = "2e Armée"
 location = 18

  division = {
   id = { type = 10527 id = 27 }
   name = "2e Division Légère de Cavalerie"
   strength = 70 experience = 55
   type = cavalry model = 1
	     }

  division = {
   id = { type = 10527 id = 28 }
   name = "5e Division Légère de Cavalerie"
   strength = 70 experience = 55
   type = cavalry model = 1
	     }

  division = {
   id = { type = 10527 id = 29 }
   name = "71e Division d'Infanterie"
   strength = 70 experience = 55
   type = infantry model = 2
  extra = anti_tank brigade_model = 0
	     }

  division = {
   id = { type = 10527 id = 30 }
   name = "3e Division d'Infanterie Nord-Africaine"
   strength = 70 experience = 55
   type = infantry model = 2
	     }

  division = {
   id = { type = 10527 id = 31 }
   name = "55e Division d'Infanterie"
   strength = 70 experience = 55
   type = infantry model = 2
	     }

  division = {
   id = { type = 10527 id = 32 }
   name = "1ère Division d'Infanterie Coloniale"
   strength = 60
   type = infantry model = 2
	     }

  division = {
   id = { type = 10527 id = 33 }
   name = "3e Division d'Infanterie Coloniale"
   strength = 60
   type = infantry model = 2
	     }

  division = {
   id = { type = 10527 id = 34 }
   name = "41e Division d'Infanterie"
   strength = 70 experience = 55
   type = infantry model = 2
	     }
	   }

###################
###################

###locked!
landunit = {
 id = { type = 10527 id = 35 }
 name = "3e Armée"
 location = 73

  division = { locked = yes
   id = { type = 10527 id = 36 }
   name = "3e Division Légère de Cavalerie"
   strength = 75
   type = cavalry model = 1
	     }

  division = { locked = yes
   id = { type = 10527 id = 37 }
   name = "6e Division d'Infanterie"
   strength = 70 experience = 42
   type =  infantry model = 1
	     }

  division = { locked = yes
   id = { type = 10527 id = 38 }
   name = "7e Division d'Infanterie"
   strength = 70 experience = 42
   type = infantry  model = 1
	     }

  division = { locked = yes
   id = { type = 10527 id = 39 }
   name = "8e Division d'Infanterie"
   strength = 70 experience = 42
   type = infantry model = 2
	     }

  division = { locked = yes
   id = { type = 10527 id = 40 }
   name = "6e Division d'Infanterie Coloniale"
   strength = 60
   type = infantry model = 2
	     }

  division = { locked = yes
   id = { type = 10527 id = 41 }
   name = "6e Division d'Infanterie Nord-Africaine"
   strength = 70 experience = 42
   type = infantry  model = 1
   extra = anti_tank brigade_model = 0
	  }

  division = { locked = yes
   id = { type = 10527 id = 44 }
   name = "26e Division d'Infanterie"
   strength = 70 experience = 42
   type = infantry model = 2
	     }

  division = { locked = yes
   id = { type = 10527 id = 45 }
   name = "42e Division d'Infanterie"
   strength = 70 experience = 42
   type = infantry  model = 1
	     }

  division = { locked = yes
   id = { type = 10527 id = 46 }
   name = "51e Division d'Infanterie"
   strength = 70 experience = 42
   type = infantry  model = 1
   extra = anti_tank brigade_model = 0
	     }

  division = { locked = yes
   id = { type = 10527 id = 47 }
   name = "20e Division d'Infanterie"
   strength = 70 experience = 42
   type = infantry model = 2
	     }

  division = { locked = yes
   id = { type = 10527 id = 48 }
   name = "58e Division d'Infanterie"
   strength = 55
   type = infantry model = 2
	     }
	  }


###locked!
landunit = {
 id = { type = 10527 id = 144 }
 name = "CAC/3e Armée"
 location = 72

  division = { locked = yes
   id = { type = 10527 id = 42 }
   name = "2e Division d'Infanterie"
   strength = 70 experience = 42
   type = infantry  model = 1
   extra = anti_tank brigade_model = 0
	     }

  division = { locked = yes
   id = { type = 10527 id = 43 }
   name = "56e Division d'Infanterie"
   strength = 70 experience = 42
   type = infantry  model = 1
	     }
}

#######################
########################

landunit = {
 id = { type = 10527 id = 49 }
 name = "4e Armée"
 location = 57


  division = {
   id = { type = 10527 id = 50 }
   name = "45e Division d'Infanterie"
   strength = 70 experience = 42
   type = infantry model = 2
	     }

  division = {
   id = { type = 10527 id = 51 }
   name = "11e Division d'Infanterie"
   strength = 70 experience = 42
   type = infantry model = 2
	     }

  division = {
   id = { type = 10527 id = 52 }
   name = "47e Division d'Infanterie"
   strength = 70 experience = 42
   type = infantry model = 2
	     }

  division = {
   id = { type = 10527 id = 53 }
   name = "52e Division d'Infanterie"
   strength = 70 experience = 42
   type = infantry model = 2
   extra = anti_tank brigade_model = 0
	     }

  division = {
   id = { type = 10527 id = 54 }
   name = "58e Division d'Infanterie d'Afrique"
   strength = 70 experience = 42
   type = infantry model = 2
	     }

	  }
###locked!
######################

landunit = {
 id = { type = 10527 id = 55 }
 name = "5e Armée"
 location = 316 #Colmar

  division = { locked = yes
   id = { type = 10527 id = 56 }
   name = "44e Division d'Infanterie"
   strength = 70 experience = 42
   type = infantry model = 2
	     }

  division = { locked = yes
   id = { type = 10527 id = 57 }
   name = "24e Division d'Infanterie"
   strength = 70 experience = 42
   type = infantry model = 2
	     }

  division = { locked = yes
   id = { type = 10527 id = 58 }
   name = "31e Division d'Infanterie"
   strength = 60
   type = infantry  model = 1
	     }

  division = { locked = yes
   id = { type = 10527 id = 59 }
   name = "16e Division d'Infanterie"
   strength = 70 experience = 42
   type = infantry  model = 1
	     }

  division = { locked = yes
   id = { type = 10527 id = 60 }
   name = "35e Division d'Infanterie"
   strength = 70 experience = 42
   type = infantry  model = 1
	     }

  division = { locked = yes
   id = { type = 10527 id = 61 }
   name = "70e Division d'Infanterie"
   strength = 70 experience = 42
   type = infantry  model = 1
   extra = anti_tank brigade_model = 0
	     }

  division = { locked = yes
   id = { type = 10527 id = 62 }
   name = "62e Division d'Infanterie"
   strength = 70 experience = 42
   type = infantry  model = 1
   extra = anti_tank brigade_model = 0
	     }

  division = { locked = yes
   id = { type = 10527 id = 63 }
   name = "30e Division d'Infanterie"
   strength = 60
   type = infantry  model = 1
	     }

	}

##########################

landunit = {
 id = { type = 10527 id = 64 }
 name = "8e Armée"
 location = 38


  division = {
   id = { type = 10527 id = 65 }
   name = "13e Division d'Infanterie"
   strength = 70 experience = 42
   type = infantry model = 2
   extra = anti_tank brigade_model = 0
	     }

  division = {
   id = { type = 10527 id = 66 }
   name = "27e Division d'Infanterie"
   strength = 60
   type = bergsjaeger model = 1
	     }

  division = {
   id = { type = 10527 id = 67 }
   name = "19e Division d'Infanterie"
   strength = 70 experience = 42
   type = infantry model = 2
	     }

  division = {
   id = { type = 10527 id = 68 }
   name = "54e Division d'Infanterie"
   strength = 70 experience = 42
   type = infantry model = 2
	     }

  division = {
   id = { type = 10527 id = 69 }
   name = "67e Division d'Infanterie"
   strength = 70 experience = 42
   type = infantry model = 2
	     }
	  }


navalunit = {
 id = { type = 10527 id = 98 }
 name = "1ère Flotte de la France"
 location = 38
 base = 38

 division = { id = { type = 10527 id = 501 } name = "Dunkerque" type = battleship model = 1 seaattack = 15 seadefence = 15 maxspeed= 21 }
  division = { id = { type = 10527 id = 192 } name = "Diderot" type = battleship model = 0 }
  division = { id = { type = 10527 id = 193 } name = "Condorcet" type = battleship model = 0 }
  division = { id = { type = 10527 id = 99 } name = "Béarn" type = carrier model = 0 }
  division = { id = { type = 10527 id = 100 } name = "Primauguet" type = light_cruiser  model = 1 }
  division = { id = { type = 10527 id = 101 } name = "Duguay-Trouin" type = light_cruiser  model = 1  }
  division = { id = { type = 10527 id = 102 } name = "Lamotte-Picquet" type = light_cruiser  model = 1  }
  division = { id = { type = 10527 id = 103 } name = "La Galissonnière" type = light_cruiser  model = 1  }
  division = { id = { type = 10527 id = 185 } name = "Loup et Groupe" type = destroyer model = 0 }
  division = { id = { type = 10527 id = 186 } name = "Renard et Groupe" type = destroyer model = 0 }
  division = { id = { type = 10527 id = 990 } name = "Colin et Groupe" type = transport model = 0 }
      }


navalunit = {
 id = { type = 10527 id = 120 }
 name = "4e Flotte de la France"
 location = 38
 base = 38

  division = { id = { type = 10527 id = 121 } name = "Lorraine" type = battleship model = 1 }
  division = { id = { type = 10527 id = 122 } name = "Provence" type = battleship model = 1 }
  division = { id = { type = 10527 id = 123 } name = "Colbert" type = light_cruiser  model = 2 }
  division = { id = { type = 10527 id = 124 } name = "Dupleix" type = light_cruiser  model = 2 }
  division = { id = { type = 10527 id = 199 } name = "Metz" type = light_cruiser  model = 0 }
  division = { id = { type = 10527 id = 200 } name = "Thionville" type = light_cruiser  model = 0 }
  division = { id = { type = 10527 id = 125 } name = "Emile-Bertin" type = light_cruiser  model = 0  }
  division = { id = { type = 10527 id = 126 } name = "Le Malin et Groupe" type = destroyer model = 0 }
  division = { id = { type = 10527 id = 189 } name = "Vautour et Groupe" type = destroyer model = 0 }
  division = { id = { type = 10527 id = 190 } name = "Dragon et Groupe" type = destroyer model = 0 }
  division = { id = { type = 10527 id = 993 } name = "Sandre et Groupe" type = transport model = 0 }
      }



#############################
#Armée de l'Air 1940 OOB####
#############################

airunit = {
		location = 18
 base = 18
	id = { type = 10527 id = 136 }
		name = "Zone d'Opérations Aériennes Nord"

		division = {
	        id = { type = 10527 id = 137 }
			name = "Groupe de Chasse 21"
			type = multi_role
			model = 1
			strength = 80
				}
		division = {
	        id = { type = 10527 id = 138 }
			name = "Groupe de Chasse 23"
			type = multi_role
			model = 1
			strength = 80
				}
		division = {
	        id = { type = 10527 id = 139 }
			name = "Groupe de Chasse 25"
			type = multi_role
			model = 1
			strength = 40
				}
		division = {
	        id = { type = 10527 id = 140 }
			name = "Groupe de Bombardement Tactique 1"
			type = tactical_bomber
			model = 1
			strength = 50
				}
	}

airunit = {
		location = 317
 base = 317
	id = { type = 10527 id = 141 }
		name = "Zone d'Opérations Aériennes Est"

		division = {
	        id = { type = 10527 id = 142 }
			name = "Groupe de Chasse 22"
			type = multi_role
			model = 1
			strength = 80
				}
		division = {
	        id = { type = 10527 id = 143 }
			name = "Groupe de Bombardement Tactique 3"
			type = tactical_bomber
			model = 1
			strength = 30
				}
	}


landunit = { location = 73 id = { type = 10527 id = 152 } name = "Dywizja Grenadierow" leader = 8029
division = { id = { type = 10527 id = 145 } name = "Dywizja Grenadierow (1. POLISH)" strength = 100 experience = 65 type = infantry model = 2 }
}
landunit = { location = 316 id = { type = 10527 id = 146 } name = "Dywizja Strzelcow Pieszych" leader = 8106
division = { id = { type = 10527 id = 147 } name = "Dywizja Strzelcow Pieszych (2. POLISH)" strength = 100 experience = 65 type = infantry model = 2 }
}
landunit = { location = 18 id = { type = 10527 id = 148 } name = "Brygada Kawalerii Pancernej" leader = 8075
division = { id = { type = 10527 id = 149 } name = "Brygada Kawalerii Pancernej (10. POLISH BRIGADE)" strength = 20 max_strength = 20 experience = 65 type = light_armor model = 1 }
}


landunit = { location = 56 id = { type = 10527 id = 150 } name = "Quartier général d'Armée"
division = { id = { type = 10527 id = 151 } name = "Quartier général d'Armée" strength = 100 experience = 80 type = hq model = 0 }
}

}




