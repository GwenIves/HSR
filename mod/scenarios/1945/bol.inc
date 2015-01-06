
##############################
# Country definition for BOL #
##############################

country =
{ tag                    = BOL
  manpower               = 25
  # Resource Reserves
  energy                 = 5000
  metal                  = 5000
  rare_materials         = 500
  oil                    = 2000
  supplies               = 15000
  capital                = 832
  SpyInfo                = { country = "BOL" NumberOfSpies = 4 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 9
    free_market       = 8
    freedom           = 7
    professional_army = 7
    defense_lobby     = 8
    interventionism   = 5
  }
  nationalprovinces      = { 836 833 838 832 828 827 837 822 839 }
  ownedprovinces         = { 836 833 838 832 828 827 }
  controlledprovinces    = { 836 833 838 832 828 827 }
  # ROTW Minor Tech '36
  # Group D 1944 techs
  # ######################
  techapps               = { 1010  1020  1030  1040  1110  1120  1190  1200  1210  1220  1310  14000 14010 2010  2020  2030  2040  2050  2070  2150
			     2160  2290  2300  2310  2320  2330  2330  2400  2410  2450  2460  2470  2510  2520  4010  4020  4030  4120  4130  4140
			     5010  5050  5080  5090  5100  5190  5200  6010  6020  6040  9010  9020
			   }
  diplomacy =
  { relation =
    { tag        = ARG
      value      = 50
      guaranteed = { day = 4 month = january year = 1944 }
    }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = -50 }
    relation = { tag = ECU value = -20 }
    relation = { tag = PAR value = -50 }
    relation = { tag = PRU value = 30 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 85 }
  }
  dormant_ministers      = { 43001 43031 43033 43036 43002 43048 43054 43050 43069 43070 43074 43003 43095 43005 43130 43006 43153 43008 43180 43009
			     43207 43010 43032 43037 43049 43051 43004 43135 43166 43170 43195 43045 43034 43040 43043 43046 43062 43055 43057 43060
			     43064 43070 43086 43105 43100 43098 43122 43136 43126 43163 43150 43173 43168 43007 43187 43188 43198 43209
			   }
  headofstate            = { type = 9 id = 43041 }
  headofgovernment       = { type = 9 id = 43058 }
  foreignminister        = { type = 9 id = 43088 }
  armamentminister       = { type = 9 id = 43118 }
  ministerofsecurity     = { type = 9 id = 43144 }
  ministerofintelligence = { type = 9 id = 43161 }
  chiefofstaff           = { type = 9 id = 43176 }
  chiefofarmy            = { type = 9 id = 43190 }
  chiefofnavy            = { type = 9 id = 43203 }
  chiefofair             = { type = 9 id = 43217 }
  # Superior Firepower, Delay
  landunit =
  { id       = { type = 10343 id = 1 }
    name     = "Bolivian Army"
    location = 832
    division =
    { id            = { type = 10343 id = 2 }
      name          = "1a División de Infantería"
      strength      = 90
      type          = infantry
      extra         = artillery
      model         = 3
      brigade_model = 4
    }
    division =
    { id       = { type = 10343 id = 3 }
      name     = "1a División de Caballería"
      strength = 60
      type     = cavalry
      model    = 1
    }
  }
}
