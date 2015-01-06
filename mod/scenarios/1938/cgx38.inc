
##############################
# Country definition for CGX #
##############################

province = { id = 1258 province_revoltrisk = 10 } # Guilin
province = { id = 1309 province_revoltrisk = 10 } # Bose
province = { id = 1310 province_revoltrisk = 10 } # Liuzhou
province = { id = 1311 province_revoltrisk = 10 } # Wuzhou
province = { id = 1319 province_revoltrisk = 10 } # Nanning
province = { id = 1325 province_revoltrisk = 10 } # Qinzhou

#####################
# Country main data #
#####################

country =
{ tag                    = CGX
  regular_id             = CHI
  intrinsic_gov_type     = left_wing_radical
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 1258 # Guilin
  manpower               = 665
  dissent                = 15
  diplomacy =
  { relation = { tag = CHI value = 200 }
    relation = { tag = CSX value = 200 }
    relation = { tag = CXB value = 200 }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -200 }
    relation = { tag = MAN value = -200 }
    relation = { tag = MEN value = -200 }
    relation = { tag = CHC value = 100 }
  }
  # Guangxi
  nationalprovinces      = { 1258 1309 1310 1311 1319 1325 }
  ownedprovinces         = { 1258 1309 1310 1311 1319 1325 }
  # Guangxi
  controlledprovinces    = { 1258 1309 1310 1311 1319 1325 }
  # Guangxi
  # ROTW Minor Tech '36
  # Group E 1939 techs
  # ######################
  techapps               = { 3010 4010 2150 2290 1010 1190 6210 6300 }
  SpyInfo                = { country = "CGX" NumberOfSpies = 4 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 7
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 502001 }
  headofgovernment       = { type = 9 id = 502002 }
  foreignminister        = { type = 9 id = 502003 }
  armamentminister       = { type = 9 id = 502004 }
  ministerofsecurity     = { type = 9 id = 502005 }
  ministerofintelligence = { type = 9 id = 502006 }
  chiefofstaff           = { type = 9 id = 502007 }
  chiefofarmy            = { type = 9 id = 502008 }
  chiefofnavy            = { type = 9 id = 502009 }
  chiefofair             = { type = 9 id = 502010 }
  # ######
  # GUANGXI 1939 Land OOB
  # TYPE: 22400
  # ######
  # landunit = {
  # location = 1231 # Xiangfan
  # name = "Henan-Hubei Bianqu"
  # id = { type = 22400 id = 1 }
  # division = {
  # id = { type = 22400 id = 2 }
  # name = "7. Jun"
  # type = infantry
  # }
  # division = {
  # id = { type = 22400 id = 3 }
  # name = "48. Jun"
  # type = militia
  # }
  # }
  # landunit = {
  # location = 1227 # Luoyang
  # name = "Anhui Jingbei"
  # id = { type = 22400 id = 4 }
  # division = {
  # id = { type = 22400 id = 5 }
  # name = "Anhui Baoantui"
  # type = militia
  # }
  # }
  # landunit = {
  # location = 1325 # Bobai (Qinzhou)
  # name = "16. Juntuan"
  # id = { type = 22400 id = 6 }
  # division = {
  # id = { type = 22400 id = 7 }
  # name = "64. Jun"
  # type = militia
  # }
  # division = {
  # id = { type = 22400 id = 8 }
  # name = "46. Jun"
  # type = militia
  # }
  # }
  landunit =
  { location = 1258 # Guilin
    name     = "Guangxi Jingbei"
    id       = { type = 22400 id = 9 }
    division =
    { id   = { type = 22400 id = 10 }
      name = "Guangxi Baoantui"
      type = militia
    }
    division =
    { id   = { type = 22400 id = 11 }
      name = "Guangxi Minshi Jun"
      type = militia
    }
  }
}
