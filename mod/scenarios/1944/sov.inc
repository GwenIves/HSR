
##############################
# Country definition for SOV #
##############################

province =
{ id         = 133
  naval_base = { size = 6 current_size = 6 }
  anti_air   = 2
}              # Murmansk
province =
{ id         = 154
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 3 current_size = 3 }
  anti_air   = 2
}              # Archangelsk
province =
{ id          = 163
  air_base    = { size = 6 current_size = 6 }
  landfort    = 5

  anti_air    = 3
  ic          = 15
}               # Stalingrad
province = { id = 175 landfort = 5  anti_air = 4 ic = 15 air_base = 10 } # Moscow
province =
{ id       = 181
  air_base = { size = 3 current_size = 3 }
  anti_air = 1
}            # Kaluga
province = { id = 184 ic = 3 } # Tikhvin
province = { id = 185 ic = 3 } # Volkhov
province =
{ id          = 187
  naval_base  = { size = 10 current_size = 10 }
  air_base    = { size = 10 current_size = 10 }
  landfort    = 5
  coastalfort = 5
  anti_air    = 4
  ic          = 15
}               # Leningrad
province =
{ id       = 191
  air_base = { size = 6 current_size = 6 }
  anti_air = 1
}            # Porkhov
province =
{ id         = 194
  naval_base = { size = 6 current_size = 6 }
  air_base   = { size = 6 current_size = 6 }
}              # Tallinn
province =
{ id         = 197
  naval_base = { size = 6 current_size = 6 }
  air_base   = { size = 6 current_size = 6 }
}              # Riga
province =
{ id       = 207
  air_base = { size = 2 current_size = 2 }
}            # Kaunas
province =
{ id       = 211
  air_base = { size = 3 current_size = 3 }
  anti_air = 3
}            # Lida
province =
{ id       = 212
  air_base = { size = 10 current_size = 10 }
}            # Minsk
province =
{ id       = 217
  air_base = { size = 2 current_size = 2 }
  anti_air = 2
}            # Vitebsk
province =
{ id       = 219
  air_base = { size = 10 current_size = 10 }
  anti_air = 3
}            # Smolensk
province =
{ id       = 229
  air_base = { size = 4 current_size = 4 }
}            # Stanislawow
province =
{ id       = 233
  air_base = { size = 6 current_size = 6 }
  anti_air = 3
}            # Odessa
province =
{ id       = 238
  air_base = { size = 10 current_size = 10 }
  anti_air = 3
}            # Kiev
province = { id = 246 anti_air = 2 } # Zaporozhye
province =
{ id       = 248
  air_base = { size = 6 current_size = 6 }
  anti_air = 1
}            # Kharkov
province =
{ id          = 253
  naval_base  = { size = 3 current_size = 3 }
  air_base    = { size = 3 current_size = 3 }
  landfort    = 3
  coastalfort = 5
  anti_air    = 3
}               # Sevastopol
province =
{ id       = 258
  air_base = { size = 4 current_size = 4 }
  anti_air = 2
}            # Rostov
province = { id = 263 anti_air = 1 } # Svoboda
province =
{ id       = 264
  air_base = { size = 2 current_size = 2 }
}            # Pavlovsk
province =
{ id       = 273
  air_base = { size = 3 current_size = 3 }
}            # Gomel
province = { id = 277 anti_air = 2 } # Bryansk
province =
{ id       = 289
  air_base = { size = 2 current_size = 2 }
}            # Demyansk
province =
{ id       = 501
  air_base = { size = 10 current_size = 10 }
  ic       = 1
}            # Lvov
province =
{ id       = 504
  air_base = { size = 3 current_size = 3 }
}            # Brest Litovsk
province = { id = 1150 anti_air = 2 ic = 12 } # Osa
province =
{ id         = 1175
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
}              # Ocha
province =
{ id          = 1372
  naval_base  = { size = 5 current_size = 5 }
  air_base    = { size = 5 current_size = 5 }
  landfort    = 1
  coastalfort = 3
  anti_air    = 3
}               # Vladivostok
province =
{ id       = 1416
  air_base = { size = 3 current_size = 3 }
}            # Irkutsk
province =
{ id       = 1550
  air_base = { size = 2 current_size = 2 }
}            # Semipalatinsk
province = { id = 1570 anti_air = 2 ic = 12 } # Chkalov
province = { id = 1577 anti_air = 2 ic = 12 } # Orsk
province = { id = 1781 anti_air = 2 ic = 12 } # Melekess
province = { id = 1827 anti_air = 2 ic = 12 } # Naberezhnye Chelny
province =
{ id       = 1828
  air_base = { size = 4 current_size = 4 }
  anti_air = 2
  ic       = 23
}            # Kuybyshev
province = { id = 1830 anti_air = 2 ic = 12 } # Syzran
province =
{ id       = 1832
  air_base = { size = 3 current_size = 3 }
}            # Saratov
province = { id = 1838 ic = 3 } # Astrakhan
province =
{ id         = 1848
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 1 current_size = 1 }
  ic         = 3
}              # Batum

#####################
# Country main data #
#####################

country =
{ tag                    = SOV
  ground_def_eff         = 0.700
  belligerence           = 20
  regular_id             = RUS
  intrinsic_gov_type     = leninist
  capital                = 175
  # Resource Reserves
  energy                 = 50000
  metal                  = 50000
  rare_materials         = 5000
  oil                    = 5000
  supplies               = 5000
  manpower               = 1600
  # ###########################
  # ## SOVIET NAVY OOB 1944 ###
  # ###########################
  transports             = 30
  escorts                = 15
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 10
    freedom           = 1
    free_market       = 1
    professional_army = 4
    defense_lobby     = 10
    interventionism   = 10
  }
  SpyInfo                = { country = "SOV" NumberOfSpies = 14 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 6}
  #SpyInfo                = { country = "FRA" NumberOfSpies = 5}
  #SpyInfo                = { country = "GER" NumberOfSpies = 5}
  #SpyInfo                = { country = "SLO" NumberOfSpies = 5}
  #SpyInfo                = { country = "SPA" NumberOfSpies = 5}
  #SpyInfo                = { country = "POL" NumberOfSpies = 7}
  #SpyInfo                = { country = "SWE" NumberOfSpies = 6}
  #SpyInfo                = { country = "NOR" NumberOfSpies = 5}
  #SpyInfo                = { country = "FIN" NumberOfSpies = 7}
  #SpyInfo                = { country = "YUG" NumberOfSpies = 7}
  #SpyInfo                = { country = "HUN" NumberOfSpies = 6}
  #SpyInfo                = { country = "BUL" NumberOfSpies = 7}
  #SpyInfo                = { country = "BEL" NumberOfSpies = 5}
  #SpyInfo                = { country = "DEN" NumberOfSpies = 5}
  #SpyInfo                = { country = "CXB" NumberOfSpies = 6}
  #SpyInfo                = { country = "MON" NumberOfSpies = 7}
  #SpyInfo                = { country = "CGX" NumberOfSpies = 5}
  #SpyInfo                = { country = "USA" NumberOfSpies = 7}
  #SpyInfo                = { country = "GUA" NumberOfSpies = 5}
  #SpyInfo                = { country = "GRE" NumberOfSpies = 5}
  #SpyInfo                = { country = "CYN" NumberOfSpies = 7}
  #SpyInfo                = { country = "CSX" NumberOfSpies = 5}
  #SpyInfo                = { country = "JAP" NumberOfSpies = 12}
  #SpyInfo                = { country = "ROM" NumberOfSpies = 6}
  #SpyInfo                = { country = "POR" NumberOfSpies = 5}
  #SpyInfo                = { country = "ITA" NumberOfSpies = 7}
  #SpyInfo                = { country = "CHI" NumberOfSpies = 6}
  #SpyInfo                = { country = "SCH" NumberOfSpies = 5}
  #SpyInfo                = { country = "TUR" NumberOfSpies = 7}
  nationalprovinces      = { 1372 1373 1371 1370 1369 1367 1366 1527 1529 1528 1526 1523 1410 1525 1524 1409 1164 1165 1166 1167 1170 1171 1172 1405
			     1175 1176 1522 1521 1384 1383 1520 1416 1415 1414 1413 1162 1412 1411 1163 1159 1160 1158 1417 1558 1557 1423 1556 1550
			     1549 1547 1546 1559 1561 1560 1562 1563 1532 1537 1538 1545 1544 1548 1543 1540 1539 1536 1535 1533 1534 1157 1531 1156
			     1155 1154 1565 1564 1571 1597 1598 1554 1555 1553 1552 1594 1596 1573 1593 1592 1591 1590 1589 1588 1587 1424 1586 1585
			     1584 1583 1581 1576 1575 1574 1572 1566 1567 1570 1577 1578 1580 1582 1579 1569 1568 1150 1151 1152 1153 1773 1772 1771
			     154  1840 1841 165  153  151  152  150  135  134  133  1838 1847 1857 1849 1850 1848 1845 1844 1846 1843 255  256  257
			     270  1842 1837 271  164  1833 1834 1836 1839 1827 1828 1835 1829 1832 1831 1830 252  253  254  1777 1778 1776 1775 1780
			     1781 1782 1783 1774 163  162  161  160  159  157  156  158  155  169  168  167  179  180  166  178  177  170  171  172
			     173  174  175  176  181  182  183  184  190  191  189  185  186  187  188  192  200  201  202  214  212  226  227  228
			     231  232  233  234  251  250  235  236  237  238  239  240  220  272  241  273  274  275  276  277  278  279  280  281
			     282  283  284  249  258  259  260  248  247  243  262  261  269  268  267  266  265  264  263  1490 1491 1485 1487 1488
			     1427 1428 1426 1425 1429 1431 1430 198  199  215  216  217  218  219  221  242  244  245  246  285  286  287  288  289
			     1149 1161 1368 1422 1489 1856 1858 1907 1541 1542 1551 500  501  502  503  504  505  506  507  508  509  209  208  213
			     211  210  222  229  562  205  204  203  197  207  511  193  194  195  196
			   }
  ownedprovinces         = { 1372 1373 1371 1370 1369 1367 1366 1527 1529 1528 1526 1523 1410 1525 1524 1409 1164 1165 1166 1167 1170 1171 1172 1405
			     1175 1522 1521 1384 1383 1520 1416 1415 1414 1413 1162 1412 1411 1163 1159 1160 1158 1417 1558 1557 1423 1556 1550 1549
			     1547 1546 1559 1561 1560 1562 1563 1532 1537 1538 1545 1544 1548 1543 1540 1539 1536 1535 1533 1534 1157 1531 1156 1155
			     1154 1565 1564 1571 1597 1598 1554 1555 1553 1552 1594 1596 1573 1593 1592 1591 1590 1589 1588 1587 1424 1586 1585 1584
			     1583 1581 1576 1575 1574 1572 1566 1567 1570 1577 1578 1580 1582 1579 1569 1568 1150 1151 1152 1153 1773 1772 1771 154
			     1840 1841 165  153  151  152  150  135  134  133  1838 1847 1857 1849 1850 1848 1845 1844 1846 1843 255  256  257  270
			     1842 1837 271  164  1833 1834 1836 1839 1827 1828 1835 1829 1832 1831 1830 252  253  254  1777 1778 1776 1775 1780 1781
			     1782 1783 1774 163  162  161  160  159  157  156  158  155  169  168  167  179  180  166  178  177  170  171  172  173
			     174  175  176  181  182  183  184  190  191  189  185  186  187  188  192  200  201  214  212  225  226  227  228  231
			     232  233  234  251  250  235  236  237  238  239  240  220  272  241  273  274  275  276  277  278  279  280  281  282
			     283  284  249  258  259  260  248  247  243  262  261  269  268  267  266  265  264  263  1490 1491 1485 1487 1488 1427
			     1428 1426 1425 1429 1874 198  199  215  216  217  218  219  221  242  244  245  246  285  286  287  288  289  1149 1161
			     1368 1422 1489 1856 1858 1907 1541 1542 1551 94   562  500  501  503  504  506  507  508  509  577  208  213  211  210
			     222  202  209  229  502  505  205  204  203  197  207  511  193  194  195  196
			   }
  # #per
  controlledprovinces    = { 1372 1373 1371 1370 1369 1367 1366 1527 1529 1528 1526 1523 1410 1525 1524 1409 1164 1165 1166 1167 1170 1171 1172 1405
			     1175 1522 1521 1384 1383 1520 1416 1415 1414 1413 1162 1412 1411 1163 1159 1160 1158 1417 1558 1557 1423 1556 1550 1549
			     1547 1546 1559 1561 1560 1562 1563 1532 1537 1538 1545 1544 1548 1543 1540 1539 1536 1535 1533 1534 1157 1531 1156 1155
			     1154 1565 1564 1571 1597 1598 1554 1555 1553 1552 1594 1596 1573 1593 1592 1591 1590 1589 1588 1587 1424 1586 1585 1584
			     1583 1581 1576 1575 1574 1572 1566 1567 1570 1577 1578 1580 1582 1579 1569 1568 1150 1151 1152 1153 1773 1772 1771 154
			     1840 1841 165  153  151  152  150  135  134  133  1838 1847 1857 1849 1850 1848 1845 1844 1846 1843 255  256  257  270
			     1842 1837 271  164  1833 1834 1836 1839 1827 1828 1835 1829 1832 1831 1830 252  253  254  1777 1778 1776 1775 1780 1781
			     1782 1783 1774 163  162  161  160  159  157  156  158  155  169  168  167  179  180  166  178  177  170  171  172  173
			     174  175  176  181  182  183  184  190  191  189  185  186  187  188  192  228  231  232  233  234  251  250  235  236
			     237  238  239  240  272  241  273  274  275  276  277  278  279  280  281  282  283  284  249  258  259  260  248  247
			     243  262  261  269  268  267  266  265  264  263  1490 1491 1485 1487 1488 1427 1428 1426 1425 1429 215  216  217  219
			     242  244  245  246  285  286  287  288  289  1149 1161 1368 1422 1489 1856 1858 1907 1541 1542 1551 94   227  230  229
			     502  226  1500 1501 1503 1787 1788 1859
			   }
  # Air Doctrines 1936
  # ################
  techapps               = { 1010  1020  1030  1040  1070  1080  1110  1120  1130  1190  1200  1210  1220  1230  1240  1260  1270  1310  1320  1330
			     1340  1350  14000 14010 14020 2010  2020  2030  2040  2050  2060  2070  2080  2090  2100  2110  2120  2120  2130  2150
			     2160  2170  2180  2190  2200  2260  2270  2280  2290  2300  2310  2320  2330  2340  2350  2370  2380  2390  2400  2410
			     2420  2430  2450  2460  2470  2510  2520  3010  3020  3030  3040  3070  3080  3090  3130  3140  3150  3190  3250  3260
			     3270  3280  3400  3410  3420  3430  4010  4020  4030  4040  4050  4060  4070  4080  4090  4100  4120  4130  4140  4150
			     4160  4170  4180  4190  4200  4220  4250  4260  4280  5010  5020  5050  5060  5070  5080  5090  5100  5110  5120  5130
			     5140  5160  5180  5190  5200  5210  5220  5230  5310  5320  5350  5360  5410  5470  5480  5490  6210  6300  6310  6320
			     6330  6340  6350  6360  6370  8010  8020  8030  8040  8050  8070  9010  9020  9030  9040  9050  9060  9070  9080  9090
			     9100  9110  9120  9130  9140  9150  9190  9200  9210  9220  9230  9240  9260  9270  9280  9310  9320  9330  9350  5550
			     5560
			   }
  diplomacy =
  { relation = { tag = CHI value = 125 }
    relation = { tag = CGX value = 20 }
    relation = { tag = AFG value = 1 }
    relation = { tag = BRA value = -50 }
    relation = { tag = BUL value = -200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FIN value = -200 }
    relation = { tag = FRA value = 200 }
    relation = { tag = GER value = -200 }
    relation =
    { tag        = MON
      value      = 150
      guaranteed = { day = 8 month = april year = 1943 }
      access     = yes
    }
    relation = { tag = PER value = -20 }
    relation = { tag = ROM value = -200 }
    relation = { tag = SPA value = -100 }
    relation = { tag = TAN value = 200 }
    relation = { tag = TUR value = 70 }
    relation = { tag = URU value = -100 }
    relation = { tag = USA value = 200 }
  }
  dormant_ministers      = { 4003 4005 4006 4007 4009 4010 4039 4040 4045 4046 4061 4064 4066 4004 4008 4051 }
  headofstate            = { type = 9 id = 4001 }
  headofgovernment       = { type = 9 id = 4002 }
  foreignminister        = { type = 9 id = 4034 }
  armamentminister       = { type = 9 id = 4038 }
  ministerofsecurity     = { type = 9 id = 4041 }
  ministerofintelligence = { type = 9 id = 4049 }
  chiefofstaff           = { type = 9 id = 4054 }
  chiefofarmy            = { type = 9 id = 4059 }
  chiefofnavy            = { type = 9 id = 4062 }
  chiefofair             = { type = 9 id = 4068 }
  dormant_teams		 = { 3706 3716 }
  dormant_leaders        = { 9839  9841  9843  9849  9884  9894  9896  9900  9907  9910  9926  9930  9951  9955  9969  9974  9991  9993  10006 10016
			     10019 10028 10031 10042 10054 10066 10071 10114 10115 10137 10138 10202 10208 10215 10253 10271 10276 10283 10286 10297
			     10322 10342 10349 10369 10370 10371 10401 10417 10453 10463 10472 10477 10500 10514 10515 10516 10517 10518 10520 10521
			     10522 10363
			   }
  # ## Soviet Union OOB 1944 Author: MH ###
  landunit =
  { location = 188
    id       = { type = 10849 id = 1 }
    name     = "2. Shock Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 2 }
      name       = "191. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 3 }
      name       = "131. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 4 }
      name       = "256. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 188
    id       = { type = 10849 id = 6 }
    name     = "8. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 7 }
      name       = "120. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 8 }
      name       = "43. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 9 }
      name       = "189. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 10 }
      name       = "196. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 11 }
      name       = "2. 'Belorusskaya' Strelk. Div."
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 12 }
      name       = "201. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 13 }
      name       = "98. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 188
    id       = { type = 10849 id = 16 }
    name     = "42. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 17 }
      name       = "48. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 18 }
      name       = "128. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 19 }
      name       = "245. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 20 }
      name       = "376. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 192
    id       = { type = 10849 id = 22 }
    name     = "67. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 23 }
      name       = "56. 'Moskovskaya' Strelk. Div."
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 24 }
      name       = "123. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 25 }
      name       = "326. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 26 }
      name       = "86. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 27 }
      name       = "85. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 28 }
      name       = "364. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 191
    id       = { type = 10849 id = 30 }
    name     = "1. Shock Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 31 }
      name       = "321. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 32 }
      name       = "208. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 33 }
      name       = "146. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 34 }
      name       = "33. 'Belorusskaya' Strelk. Div."
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 35 }
      name       = "26. 'Zlatoustovskaya' Strelk. Div."
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 36 }
      name       = "11. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 37 }
      name       = "285. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 38 }
      name       = "282. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 39 }
      name       = "182. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 191
    id       = { type = 10849 id = 41 }
    name     = "54. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 42 }
      name       = "225. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 43 }
      name       = "198. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 44 }
      name       = "44. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 45 }
      name       = "229. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 46 }
      name       = "374. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 47 }
      name       = "288. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 215
    id       = { type = 10849 id = 49 }
    name     = "10 .Army"
    division =
    {
      id         = { type = 10849 id = 50 }
      name       = "7. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 51 }
      name       = "8. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 52 }
      name       = "391. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 53 }
      name       = "30. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 54 }
      name       = "29. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 55 }
      name       = "22. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 56 }
      name       = "11. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 57 }
      name       = "85. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 58 }
      name       = "56. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 59 }
      name       = "65. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 61 }
      name       = "19. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
  }
  landunit =
  { location = 215
    id       = { type = 10849 id = 63 }
    name     = "3. Shock Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 64 }
      name       = "7. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 65 }
      name       = "379. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 66 }
      name       = "115. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 67 }
      name       = "207. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 68 }
      name       = "171. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 69 }
      name       = "150. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 70 }
      name       = "52. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 71 }
      name       = "219. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 215
    id       = { type = 10849 id = 73 }
    name     = "22. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 74 }
      name       = "319. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 75 }
      name       = "28. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 76 }
      name       = "21.  Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 216
    id       = { type = 10849 id = 79 }
    name     = "4. Shock Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 80 }
      name       = "16. 'Ul'yanovskaya' Strelk. Div."
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 81 }
      name       = "119. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 82 }
      name       = "360. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 83 }
      name       = "332. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 84 }
      name       = "34. Guards Tank Corps"
      experience = 80
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 85 }
      name       = "5. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
  }
  landunit =
  { location = 216
    id       = { type = 10849 id = 87 }
    name     = "6. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 88 }
      name       = "166. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 89 }
      name       = "46. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 90 }
      name       = "9. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 91 }
      name       = "67. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 92 }
      name       = "51. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 93 }
      name       = "47. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 94 }
      name       = "90. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 95 }
      name       = "270. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 96 }
      name       = "29. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 97 }
      name       = "51. 'Perekopskaya' Strelk. Div."
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 98 }
      name       = "71. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 99 }
      name       = "1. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
  }
  landunit =
  { location = 216
    id       = { type = 10849 id = 101 }
    name     = "43. Army"
    division =
    {
      id         = { type = 10849 id = 102 }
      name       = "10. Guards Tank Corps"
      experience = 80
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 103 }
      name       = "306. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 104 }
      name       = "179. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 105 }
      name       = "334. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 106 }
      name       = "235. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 107 }
      name       = "357. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 108 }
      name       = "204. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 109 }
      name       = "145. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 217
    id       = { type = 10849 id = 111 }
    name     = "39 .Army"
    division =
    {
      id         = { type = 10849 id = 112 }
      name       = "29. Guards Tank Corps"
      experience = 80
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    {
      id         = { type = 10849 id = 113 }
      name       = "34. Guards Tank Corps"
      experience = 80
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 114 }
      name       = "262. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 115 }
      name       = "164. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 116 }
      name       = "158. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 117 }
      name       = "251. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 118 }
      name       = "91. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 119 }
      name       = "19. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 217
    id       = { type = 10849 id = 121 }
    name     = "5. Army"
    division =
    {
      id         = { type = 10849 id = 122 }
      name       = "35. Guards Tank Corps"
      experience = 80
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 123 }
      name       = "215. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 124 }
      name       = "63. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 125 }
      name       = "14. Guards Tank Corps"
      experience = 80
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 126 }
      name       = "277. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 127 }
      name       = "371. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 128 }
      name       = "144. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 129 }
      name       = "97. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 130 }
      name       = "184. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 131 }
      name       = "159. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 217
    id       = { type = 10849 id = 133 }
    name     = "3. Cavalry Corps"
    division =
    {
      id         = { type = 10849 id = 134 }
      name       = "5. Guards Cavalry Division"
      experience = 80
      strength   = 100
      type       = cavalry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 135 }
      name       = "8. Guards Tank Corps"
      experience = 80
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    {
      id         = { type = 10849 id = 136 }
      name       = "32. Guards Cavalry Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 137 }
      name       = "6. Guards Cavalry Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 219
    id       = { type = 10849 id = 139 }
    name     = "11. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 140 }
      name       = "338. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 141 }
      name       = "11. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 142 }
      name       = "1. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 143 }
      name       = "26. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 145 }
      name       = "84. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 146 }
      name       = "18. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 147 }
      name       = "16. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 148 }
      name       = "83. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 149 }
      name       = "2. Guards Tank Corps"
      experience = 80
      strength   = 100
      type       = armor
      model      = 4
    }
  }
  landunit =
  { location = 219
    id       = { type = 10849 id = 151 }
    name     = "2. White Russian Front"
    division =
    { experience = 25
      id         = { type = 10849 id = 152 }
      name       = "32. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    {
      id         = { type = 10849 id = 153 }
      name       = "23. Guards Tank Corps"
      experience = 80
      strength   = 100
      type       = armor
      model      = 4
    }
  }
  landunit =
  { location = 219
    id       = { type = 10849 id = 155 }
    name     = "31. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 156 }
      name       = "352. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 157 }
      name       = "220. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 158 }
      name       = "173. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 159 }
      name       = "331. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 160 }
      name       = "192. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 162 }
      name       = "174. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 163 }
      name       = "62. 'Turkestanskaya' Strelk. Div."
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 275
    id       = { type = 10849 id = 165 }
    name     = "33. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 166 }
      name       = "344. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 167 }
      name       = "157. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 168 }
      name       = "70. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 275
    id       = { type = 10849 id = 170 }
    name     = "31. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 171 }
      name       = "331. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 172 }
      name       = "192. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 173 }
      name       = "88. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 275
    id       = { type = 10849 id = 175 }
    name     = "49. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 176 }
      name       = "222. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 177 }
      name       = "42. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 178 }
      name       = "153. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 179 }
      name       = "95. 'Moldavskaya' Strelk. Div."
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 180 }
      name       = "32. 'Saratovskaya' Strelk. Div."
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 181 }
      name       = "290. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 182 }
      name       = "199. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 183 }
      name       = "49. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 184 }
      name       = "369. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 185 }
      name       = "330. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 186 }
      name       = "64. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 187 }
      name       = "43. Guards Tank Corps"
      experience = 80
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    {
      id         = { type = 10849 id = 188 }
      name       = "42. Guards Tank Corps"
      experience = 80
      strength   = 100
      type       = armor
      model      = 4
    }
  }
  landunit =
  { location = 274
    id       = { type = 10849 id = 190 }
    name     = "50. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 191 }
      name       = "380. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 192 }
      name       = "307. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 193 }
      name       = "238. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 194 }
      name       = "385. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 195 }
      name       = "139. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 196 }
      name       = "110. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 197 }
      name       = "362. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 198 }
      name       = "324. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 274
    id       = { type = 10849 id = 200 }
    name     = "3. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 201 }
      name       = "269. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 202 }
      name       = "12. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 203 }
      name       = "413. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 204 }
      name       = "108. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 205 }
      name       = "82. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 206 }
      name       = "283. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 207 }
      name       = "186. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 208 }
      name       = "5. 'Vitebskaya' Strelk. Div."
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 209 }
      name       = "348. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 210 }
      name       = "323. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 211 }
      name       = "250. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 272
    id       = { type = 10849 id = 213 }
    name     = "9. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 214 }
      name       = "24. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 215 }
      name       = "1. 'Moskovskaya Proletar.' Div."
      strength   = 100
      type       = mechanized
      model      = 1
    }
    division =
    {
      id         = { type = 10849 id = 216 }
      name       = "5. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = motorized
      model      = 1
    }
  }
  landunit =
  { location = 272
    id       = { type = 10849 id = 218 }
    name     = "48. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 219 }
      name       = "399. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 220 }
      name       = "170. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 221 }
      name       = "137. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 222 }
      name       = "217. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 223 }
      name       = "102. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 224 }
      name       = "17. 'Gor'kovskaya' Strelk. Div."
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 225 }
      name       = "194. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 226 }
      name       = "73. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 227 }
      name       = "96. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 226
    id       = { type = 10849 id = 229 }
    name     = "65. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 230 }
      name       = "15. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 231 }
      name       = "75. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 232 }
      name       = "356. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 233 }
      name       = "354. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 234 }
      name       = "193. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 235 }
      name       = "69. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 236 }
      name       = "44. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 237 }
      name       = "37. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 240
    id       = { type = 10849 id = 239 }
    name     = "28. Army"
    division =
    {
      id         = { type = 10849 id = 240 }
      name       = "96. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 241 }
      name       = "54. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 242 }
      name       = "50 . Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 243 }
      name       = "5. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 244 }
      name       = "48. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 245 }
      name       = "130. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 246 }
      name       = "61. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 247 }
      name       = "152. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 248 }
      name       = "20. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 226
    id       = { type = 10849 id = 250 }
    name     = "1. Tank Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 251 }
      name       = "15. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 252 }
      name       = "17. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 253 }
      name       = "1. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 254 }
      name       = "2. Motostrelkovaya Diviziya"
      strength   = 100
      type       = mechanized
      model      = 1
    }
  }
  landunit =
  { location = 226
    id       = { type = 10849 id = 256 }
    name     = "61. Army"
    division =
    {
      id         = { type = 10849 id = 257 }
      name       = "12. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 258 }
      name       = "212. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 259 }
      name       = "23. 'Har'kovskaya' Strelk. Div."
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 260 }
      name       = "55. 'Kurskaya' Strelk. Div."
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 261 }
      name       = "397. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 262 }
      name       = "415. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 263 }
      name       = "1. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 227
    id       = { type = 10849 id = 265 }
    name     = "2. Guards Cavalry Corps"
    division =
    {
      id         = { type = 10849 id = 266 }
      name       = "17. Guards Cavalry Division"
      experience = 80
      strength   = 100
      type       = cavalry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 267 }
      name       = "4. Guards Cavalry Division"
      experience = 80
      strength   = 100
      type       = cavalry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 268 }
      name       = "3. Guards Cavalry Division"
      experience = 80
      strength   = 100
      type       = cavalry
      model      = 3
    }
  }
  landunit =
  { location = 227
    id       = { type = 10849 id = 270 }
    name     = "70 .Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 271 }
      name       = "160. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 272 }
      name       = "38. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 273 }
      name       = "76. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 502
    id       = { type = 10849 id = 275 }
    name     = "47. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 276 }
      name       = "143. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 277 }
      name       = "76. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 278 }
      name       = "132. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 279 }
      name       = "165. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 280 }
      name       = "234. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 281 }
      name       = "175. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 282 }
      name       = "185. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 283 }
      name       = "260. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 284 }
      name       = "60. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 285 }
      name       = "328. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 502
    id       = { type = 10849 id = 287 }
    name     = "8. Army"
    division =
    {
      id         = { type = 10849 id = 288 }
      name       = "39. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 289 }
      name       = "35. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 290 }
      name       = "27. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 291 }
      name       = "74. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 292 }
      name       = "57. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 293 }
      name       = "47. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 294 }
      name       = "88. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 295 }
      name       = "82. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 296 }
      name       = "79. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 227
    id       = { type = 10849 id = 298 }
    name     = "69. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 299 }
      name       = "4. 'Smolenskaya' Strelk. Div."
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 300 }
      name       = "370. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 301 }
      name       = "247. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 302 }
      name       = "134. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 304 }
      name       = "41. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 305 }
      name       = "77. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 306 }
      name       = "274. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 307 }
      name       = "68. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
  }
  landunit =
  { location = 502
    id       = { type = 10849 id = 309 }
    name     = "3. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 310 }
      name       = "106. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 311 }
      name       = "81. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 312 }
      name       = "58. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 313 }
      name       = "389. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 314 }
      name       = "329. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 315 }
      name       = "273. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 316 }
      name       = "50. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 317 }
      name       = "51. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 318 }
      name       = "181. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 319 }
      name       = "149. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 320 }
      name       = "136. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 321 }
      name       = "11. Guards Tank Corps"
      experience = 80
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 322 }
      name       = "253. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 323 }
      name       = "218. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 324 }
      name       = "197. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 238
    id       = { type = 10849 id = 326 }
    name     = "13. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 327 }
      name       = "162. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 328 }
      name       = "112. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 329 }
      name       = "350. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 330 }
      name       = "6. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 331 }
      name       = "287. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 332 }
      name       = "172. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 333 }
      name       = "12. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 335 }
      name       = "25. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 336 }
      name       = "31. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
  }
  landunit =
  { location = 238
    id       = { type = 10849 id = 338 }
    name     = "1. Guards Cavalry Corps"
    division =
    {
      id         = { type = 10849 id = 339 }
      name       = "7.  Guards Cavalry Division"
      experience = 80
      strength   = 100
      type       = cavalry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 340 }
      name       = "2.  Guards Cavalry Division"
      experience = 80
      strength   = 100
      type       = cavalry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 341 }
      name       = "1.  Guards Cavalry Division"
      experience = 80
      strength   = 100
      type       = cavalry
      model      = 3
    }
  }
  landunit =
  { location = 238
    id       = { type = 10849 id = 343 }
    name     = "60. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 344 }
      name       = "322. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 345 }
      name       = "246. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 346 }
      name       = "148. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 347 }
      name       = "359. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 348 }
      name       = "340. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 349 }
      name       = "336. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 350 }
      name       = "172. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 351 }
      name       = "302. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 352 }
      name       = "140. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 353 }
      name       = "107. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 354 }
      name       = "100. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 355 }
      name       = "99. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 356 }
      name       = "6. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
  }
  landunit =
  { location = 226
    id       = { type = 10849 id = 358 }
    name     = "38. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 359 }
      name       = "237. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 360 }
      name       = "151. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 361 }
      name       = "121. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 362 }
      name       = "70. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 363 }
      name       = "305. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 364 }
      name       = "211. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 365 }
      name       = "161. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 366 }
      name       = "241. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 226
    id       = { type = 10849 id = 368 }
    name     = "1. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 369 }
      name       = "395. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 370 }
      name       = "276. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 371 }
      name       = "183. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 372 }
      name       = "12. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 373 }
      name       = "316. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 374 }
      name       = "167. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 375 }
      name       = "155. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 376 }
      name       = "147. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 377 }
      name       = "309. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 378 }
      name       = "304. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 379 }
      name       = "280. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 380 }
      name       = "141. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 381 }
      name       = "127. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 382 }
      name       = "30. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 229
    id       = { type = 10849 id = 384 }
    name     = "18. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 385 }
      name       = "8. 'Minskaya' Strelk. Div."
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 386 }
      name       = "271. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 387 }
      name       = "71. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 388 }
      name       = "138. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 389 }
      name       = "24. 'Samaro-Ul'yanov.' Strelk. Div."
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 390 }
      name       = "9. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 391 }
      name       = "317. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 392 }
      name       = "226. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 229
    id       = { type = 10849 id = 394 }
    name     = "2. Tank Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 395 }
      name       = "16. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 396 }
      name       = "3. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 397 }
      name       = "25. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 398 }
      name       = "9. Motostrelkovaya Diviziya"
      strength   = 100
      type       = mechanized
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 399 }
      name       = "6. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 400 }
      name       = "7. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 401 }
      name       = "8. Motostrelkovaya Diviziya"
      strength   = 100
      type       = mechanized
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 402 }
      name       = "11. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 403 }
      name       = "8. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 404 }
      name       = "6. Mechanized Corps"
      strength   = 100
      type       = mechanized
      model      = 1
    }
    division =
    {
      id         = { type = 10849 id = 405 }
      name       = "10. Guards Tank Corps"
      experience = 80
      strength   = 100
      type       = armor
      model      = 4
    }
  }
  landunit =
  { location = 229
    id       = { type = 10849 id = 406 }
    name     = "2. Ukrainian Front (Rsr)"
    division =
    { experience = 25
      id         = { type = 10849 id = 407 }
      name       = "214. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 408 }
      name       = "203. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 409 }
      name       = "409. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 410 }
      name       = "299. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 411 }
      name       = "297. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 412 }
      name       = "228. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 413 }
      name       = "26. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
  }
  landunit =
  { location = 229
    id       = { type = 10849 id = 415 }
    name     = "40. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 416 }
      name       = "163. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 417 }
      name       = "240. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 418 }
      name       = "74. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 419 }
      name       = "38. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 420 }
      name       = "68. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 421 }
      name       = "42. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 422 }
      name       = "232. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 229
    id       = { type = 10849 id = 424 }
    name     = "5. Cavalry Corps"
    division =
    { experience = 25
      id         = { type = 10849 id = 425 }
      name       = "63. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 426 }
      name       = "12. Guards Cavalry Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 427 }
      name       = "11. Guards Cavalry Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 229
    id       = { type = 10849 id = 429 }
    name     = "7. Army"
    division =
    {
      id         = { type = 10849 id = 430 }
      name       = "36. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 431 }
      name       = "173. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 432 }
      name       = "53. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 433 }
      name       = "73. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 434 }
      name       = "72. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 435 }
      name       = "41. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 436 }
      name       = "81. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 230
    id       = { type = 10849 id = 438 }
    name     = "27. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 439 }
      name       = "180. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 440 }
      name       = "78. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 441 }
      name       = "202. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 442 }
      name       = "10. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 443 }
      name       = "337. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 444 }
      name       = "206. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 230
    id       = { type = 10849 id = 446 }
    name     = "52. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 447 }
      name       = "252. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 448 }
      name       = "213. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 449 }
      name       = "50. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 450 }
      name       = "116. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 451 }
      name       = "111. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 452 }
      name       = "373. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 453 }
      name       = "294. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 454 }
      name       = "254. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 230
    id       = { type = 10849 id = 456 }
    name     = "53. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 457 }
      name       = "233. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 458 }
      name       = "375. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 459 }
      name       = "6. 'Orlovskaya' Strelk. Div."
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 460 }
      name       = "11. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 461 }
      name       = "89. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 462 }
      name       = "25. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 230
    id       = { type = 10849 id = 464 }
    name     = "3. Tank Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 465 }
      name       = "23. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 466 }
      name       = "5. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 467 }
      name       = "18. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 468 }
      name       = "3. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 469 }
      name       = "5. Motostrelkovaya Diviziya"
      strength   = 100
      type       = mechanized
      model      = 1
    }
  }
  landunit =
  { location = 230
    id       = { type = 10849 id = 471 }
    name     = "4. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 472 }
      name       = "84. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 473 }
      name       = "31. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 474 }
      name       = "4. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 475 }
      name       = "303. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 476 }
      name       = "69. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 477 }
      name       = "62. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 478 }
      name       = "80. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 232
    id       = { type = 10849 id = 480 }
    name     = "5. Shock Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 481 }
      name       = "248. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 484 }
      name       = "266. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 485 }
      name       = "86. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 486 }
      name       = "60. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 487 }
      name       = "49. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 232
    id       = { type = 10849 id = 489 }
    name     = "57. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 490 }
      name       = "52. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 491 }
      name       = "223. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 492 }
      name       = "113. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 493 }
      name       = "19. 'Voronezhskaya' Strelk. Div."
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 494 }
      name       = "230. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 495 }
      name       = "93. 'Vostochno-Sibir.' Strelk. Div."
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 496 }
      name       = "301. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 233
    id       = { type = 10849 id = 498 }
    name     = "37. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 499 }
      name       = "333. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 500 }
      name       = "188. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 501 }
      name       = "20. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 502 }
      name       = "244. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 503 }
      name       = "195. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 504 }
      name       = "61. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 505 }
      name       = "28. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 506 }
      name       = "4. Motostrelkovaya Diviziya"
      strength   = 100
      type       = mechanized
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 507 }
      name       = "7. Motostrelkovaya Diviziya"
      strength   = 100
      type       = mechanized
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 508 }
      name       = "7. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 509 }
      name       = "4. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 510 }
      name       = "92. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 233
    id       = { type = 10849 id = 512 }
    name     = "46. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 513 }
      name       = "259. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 514 }
      name       = "236. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 515 }
      name       = "320. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 516 }
      name       = "394. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 517 }
      name       = "353. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 518 }
      name       = "59. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 519 }
      name       = "40. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 520 }
      name       = "34. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 235
    id       = { type = 10849 id = 522 }
    name     = "3. Ukrainian Front"
    division =
    {
      id         = { type = 10849 id = 523 }
      name       = "10. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    {
      id         = { type = 10849 id = 524 }
      name       = "94. Guards Rifle Division"
      experience = 80
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 188
    id       = { type = 10849 id = 529 }
    name     = "97th Army Corps"
    division =
    { experience = 25
      id         = { type = 10849 id = 530 }
      name       = "358. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 531 }
      name       = "314. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 532 }
      name       = "178. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 188
    id       = { type = 10849 id = 535 }
    name     = "30th Gds Corps"
    division =
    { experience = 25
      id         = { type = 10849 id = 536 }
      name       = "46th Gds Rifle Division"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 537 }
      name       = "45th Gds Rifle Division"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 538 }
      name       = "118. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 539 }
      name       = "19. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 540 }
      name       = "18. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 541 }
      name       = "115. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 187
    id       = { type = 10849 id = 550 }
    name     = "23rd Army "
    division =
    { experience = 25
      id         = { type = 10849 id = 551 }
      name       = "13. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 552 }
      name       = "125. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 553 }
      name       = "382. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 554 }
      name       = "291. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 555 }
      name       = "198. Motostrelkovaya Diviziya"
      strength   = 100
      type       = mechanized
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 556 }
      name       = "123. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 152
    id       = { type = 10849 id = 560 }
    name     = "7th Army "
    division =
    { experience = 25
      id         = { type = 10849 id = 561 }
      name       = "176. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 562 }
      name       = "289. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 563 }
      name       = "386. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 564 }
      name       = "168. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 565 }
      name       = "372. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 566 }
      name       = "54. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 567 }
      name       = "71. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 568 }
      name       = "272. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 569 }
      name       = "63rd Gds Rifle Division"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 570 }
      name       = "172. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 150
    id       = { type = 10849 id = 573 }
    name     = "32nd Army "
    division =
    { experience = 25
      id         = { type = 10849 id = 574 }
      name       = "43. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 575 }
      name       = "115. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 576 }
      name       = "265. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 577 }
      name       = "26. 'Zlatoustovskaya' Strelk. Div."
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 133
    id       = { type = 10849 id = 581 }
    name     = "21st Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 582 }
      name       = "109. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 583 }
      name       = "108. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 584 }
      name       = "110. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 585 }
      name       = "97. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 586 }
      name       = "98. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 587 }
      name       = "286. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 588 }
      name       = "168. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 135
    id       = { type = 10849 id = 606 }
    name     = "42nd Rifle Corps "
    division =
    { experience = 25
      id         = { type = 10849 id = 607 }
      name       = "104. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 608 }
      name       = "122. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 609 }
      name       = "14. 'Krivorozhskaya' Strelk. Div."
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 610 }
      name       = "52. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  # Soviet Far East Army OOB// jc#
  # Soviet Far East Army OOB#
  landunit =
  { location = 1372
    id       = { type = 10849 id = 651 }
    name     = "Far Eastern Front"
    division =
    { experience = 25
      id         = { type = 10849 id = 652 }
      name       = "214. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 653 }
      name       = "79. Gornostrelkovaya Diviziya"
      strength   = 100
      type       = bergsjaeger
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 654 }
      name       = "100. Gornostrelkovaya Diviziya"
      strength   = 100
      type       = bergsjaeger
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 655 }
      name       = "101. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 1373
    id       = { type = 10849 id = 656 }
    name     = "13. Diviziya Morskoi Pekhoty"
    division =
    { experience = 25
      id         = { type = 10849 id = 657 }
      name       = "13. Diviziya Morskoi Pekhoty"
      strength   = 100
      type       = marine
      model      = 2
    }
  }
  landunit =
  { location = 1370
    id       = { type = 10849 id = 658 }
    name     = "15. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 659 }
      name       = "165. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 660 }
      name       = "203. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 661 }
      name       = "37. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 662 }
      name       = "39. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 663 }
      name       = "255. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 664 }
      name       = "260. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 1367
    id       = { type = 10849 id = 665 }
    name     = "16. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 666 }
      name       = "53. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 667 }
      name       = "75. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 1366
    id       = { type = 10849 id = 668 }
    name     = "1. Special Red Banner Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 669 }
      name       = "75. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 670 }
      name       = "204. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 671 }
      name       = "209. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 672 }
      name       = "22. 'Krasnodarskaya' Strelk. Div."
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 673 }
      name       = "59. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 674 }
      name       = "66. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 675 }
      name       = "105. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 676 }
      name       = "187. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 677 }
      name       = "231. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 1368
    id       = { type = 10849 id = 678 }
    name     = "18. Cavalry Corps"
    division =
    { experience = 25
      id         = { type = 10849 id = 679 }
      name       = "67. Kavaleriyskaya Diviziya"
      strength   = 100
      type       = cavalry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 680 }
      name       = "84. Kavaleriyskaya Diviziya"
      strength   = 100
      type       = cavalry
      model      = 3
    }
  }
  landunit =
  { location = 1529
    id       = { type = 10849 id = 681 }
    name     = "25. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 682 }
      name       = "72. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 683 }
      name       = "218. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 684 }
      name       = "40. 'Bogucharskaya' Strelk. Div."
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 685 }
      name       = "190. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 686 }
      name       = "258. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 1523
    id       = { type = 10849 id = 687 }
    name     = "39. Corps"
    division =
    { experience = 25
      id         = { type = 10849 id = 688 }
      name       = "156. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 689 }
      name       = "249. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 690 }
      name       = "261. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 1373
    id       = { type = 10849 id = 691 }
    name     = "2. Special Red Banner Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 692 }
      name       = "73. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience    = 25
      id            = { type = 10849 id = 693 }
      name          = "3. 'Tihookeanskaya' Strelk. Div."
      strength      = 100
      type          = infantry
      model         = 3
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience    = 25
      id            = { type = 10849 id = 694 }
      name          = "12. Strelkovaya Diviziya"
      strength      = 100
      type          = infantry
      model         = 3
      extra         = tank_destroyer
      brigade_model = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 695 }
      name       = "259. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 1370
    id       = { type = 10849 id = 696 }
    name     = "35. Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 697 }
      name       = "125. Tankovaya Diviziya"
      strength   = 100
      type       = armor
      model      = 4
    }
    division =
    { experience    = 25
      id            = { type = 10849 id = 698 }
      name          = "35. 'Sibirskaya' Strelk. Div."
      strength      = 100
      type          = infantry
      model         = 3
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 699 }
      name       = "341. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  landunit =
  { location = 1372
    id       = { type = 10849 id = 700 }
    name     = "5. Corps"
    division =
    { experience = 25
      id         = { type = 10849 id = 701 }
      name       = "94. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 702 }
      name       = "243. Strelkovaya Diviziya"
      strength   = 100
      type       = infantry
      model      = 3
    }
  }
  # ###################################
  # ## SOVIET UNION STAVKA RESERVES ###
  # ###### and border garrisons #######
  # ###################################
  landunit =
  { id       = { type = 10849 id = 704 }
    name     = "Boryza Garrison"
    location = 1522
    division =
    { experience    = 25
      id            = { type = 10849 id = 705 }
      name          = "10. Strelkovaya Diviziya"
      type          = infantry
      model         = 3
      strength      = 100
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 706 }
      name       = "18. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 707 }
      name       = "38. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
  }
  landunit =
  { id       = { type = 10849 id = 708 }
    name     = "Tahe Garrison"
    location = 1523
    division =
    { experience    = 25
      id            = { type = 10849 id = 709 }
      name          = "54. Strelkovaya Diviziya"
      type          = infantry
      model         = 3
      strength      = 100
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 710 }
      name       = "67. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 711 }
      name       = "80. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
  }
  landunit =
  { id       = { type = 10849 id = 712 }
    name     = "Tynda Garrison"
    location = 1528
    division =
    { experience    = 25
      id            = { type = 10849 id = 713 }
      name          = "86. Strelkovaya Diviziya"
      type          = infantry
      model         = 3
      strength      = 100
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 714 }
      name       = "112. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 715 }
      name       = "124. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 716 }
      name       = "144. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
  }
  landunit =
  { id       = { type = 10849 id = 717 }
    name     = "Stalingrad Garrison"
    location = 163
    division =
    { experience    = 25
      id            = { type = 10849 id = 718 }
      name          = "13. 'Dagestanskaya' Strelk. Div."
      type          = infantry
      model         = 3
      strength      = 100
      extra         = anti_air
      brigade_model = 3
    }
    division =
    { experience    = 25
      id            = { type = 10849 id = 719 }
      name          = "34. 'Srednevolzhskaya' Strelk. Div."
      type          = infantry
      model         = 3
      strength      = 100
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 720 }
      name       = "99. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 721 }
      name       = "106. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 722 }
      name       = "117. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 723 }
      name       = "133. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 724 }
      name       = "135. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 725 }
      name       = "146. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 726 }
      name       = "148. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
  }
  landunit =
  { id       = { type = 10849 id = 727 }
    name     = "STAVKA Reserves"
    location = 167
    division =
    { experience    = 25
      id            = { type = 10849 id = 728 }
      name          = "21. 'Permskaya' Strelk. Div."
      type          = infantry
      model         = 3
      strength      = 100
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience    = 25
      id            = { type = 10849 id = 729 }
      name          = "25. 'Chapaevskaya' Strelk. Div."
      type          = infantry
      model         = 3
      strength      = 100
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience    = 25
      id            = { type = 10849 id = 730 }
      name          = "27. 'Omskaya' Strelk. Div."
      type          = infantry
      model         = 3
      strength      = 100
      extra         = artillery
      brigade_model = 4
    }
    division =
    { experience    = 25
      id            = { type = 10849 id = 731 }
      name          = "42. Strelkovaya Diviziya"
      type          = infantry
      model         = 3
      strength      = 100
      extra         = anti_air
      brigade_model = 3
    }
    division =
    { experience    = 25
      id            = { type = 10849 id = 732 }
      name          = "45. 'Volynskaya' Strelk. Div."
      type          = infantry
      model         = 3
      strength      = 100
      extra         = anti_air
      brigade_model = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 733 }
      name       = "46. 'Dnepropetrovskaya' Strelk. Div."
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 734 }
      name       = "50. 'Tamanskaya' Strelk. Div."
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 735 }
      name       = "60. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 736 }
      name       = "65. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 737 }
      name       = "69. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 738 }
      name       = "72. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 739 }
      name       = "74. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 740 }
      name       = "76. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 741 }
      name       = "79. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 742 }
      name       = "82. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 743 }
      name       = "83. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 744 }
      name       = "87. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 745 }
      name       = "89. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 746 }
      name       = "90. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 747 }
      name       = "91. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 748 }
      name       = "101. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 749 }
      name       = "103. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 750 }
      name       = "109. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 751 }
      name       = "114. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 752 }
      name       = "120. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 753 }
      name       = "126. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 754 }
      name       = "128. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 755 }
      name       = "129. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 756 }
      name       = "131. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 757 }
      name       = "138. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 758 }
      name       = "142. Strelkovaya Diviziya"
      type       = infantry
      model      = 3
      strength   = 100
    }
  }
  landunit =
  { location = 152
    id       = { type = 10849 id = 2000 }
    name     = "Karelian Front"
    division =
    { experience = 25
      id         = { type = 10849 id = 2002 }
      name       = "Karelian Front"
      type       = hq
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 187
    id       = { type = 10849 id = 2003 }
    name     = "Leningrad Front"
    division =
    { experience = 25
      id         = { type = 10849 id = 2004 }
      name       = "Leningrad Front"
      type       = hq
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 188
    id       = { type = 10849 id = 2005 }
    name     = "Volkov Front"
    division =
    { experience = 25
      id         = { type = 10849 id = 2006 }
      name       = "1. Baltic Front"
      type       = hq
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 216
    id       = { type = 10849 id = 2007 }
    name     = "1. Baltic Front"
    division =
    { experience = 25
      id         = { type = 10849 id = 2008 }
      name       = "1. Baltic Front"
      type       = hq
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 215
    id       = { type = 10849 id = 2009 }
    name     = "2. Baltic Front"
    division =
    { experience = 25
      id         = { type = 10849 id = 2010 }
      name       = "2. Baltic Front"
      type       = hq
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 191
    id       = { type = 10849 id = 2011 }
    name     = "3. Baltic Front"
    division =
    { experience = 25
      id         = { type = 10849 id = 2012 }
      name       = "3. Baltic Front"
      type       = hq
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 219
    id       = { type = 10849 id = 2013 }
    name     = "1. Byelorussian Front"
    division =
    { experience = 25
      id         = { type = 10849 id = 2014 }
      name       = "1. Byelorussian Front"
      type       = hq
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 274
    id       = { type = 10849 id = 2015 }
    name     = "2. Byelorussian Front"
    division =
    { experience = 25
      id         = { type = 10849 id = 2016 }
      name       = "2. Byelorussian Front"
      type       = hq
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 275
    id       = { type = 10849 id = 2017 }
    name     = "3. Byelorussian Front"
    division =
    { experience = 25
      id         = { type = 10849 id = 2018 }
      name       = "3. Byelorussian Front"
      type       = hq
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 226
    id       = { type = 10849 id = 2019 }
    name     = "1. Ukrainian Front"
    division =
    { experience = 25
      id         = { type = 10849 id = 2020 }
      name       = "1. Ukrainian Front"
      type       = hq
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 233
    id       = { type = 10849 id = 2021 }
    name     = "2. Ukrainian Front"
    division =
    { experience = 25
      id         = { type = 10849 id = 2022 }
      name       = "2. Ukrainian Front"
      type       = hq
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 230
    id       = { type = 10849 id = 2023 }
    name     = "3. Ukrainian Front"
    division =
    { experience = 25
      id         = { type = 10849 id = 2024 }
      name       = "3. Ukrainian Front"
      type       = hq
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 502
    id       = { type = 10849 id = 2025 }
    name     = "4. Ukrainian Front"
    division =
    { experience = 25
      id         = { type = 10849 id = 2026 }
      name       = "4. Ukrainian Front"
      type       = hq
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 258
    id       = { type = 10849 id = 2027 }
    name     = "Transcaucasus Front"
    division =
    { experience = 25
      id         = { type = 10849 id = 2028 }
      name       = "Transcaucasus Front"
      type       = hq
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 238
    id       = { type = 10849 id = 2029 }
    name     = "RVGK"
    division =
    { experience = 25
      id         = { type = 10849 id = 2030 }
      name       = "RVGK"
      type       = hq
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 175
    id       = { type = 10849 id = 2031 }
    name     = "STAVKA"
    division =
    { experience = 25
      id         = { type = 10849 id = 2032 }
      name       = "STAVKA"
      type       = hq
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 1828
    id       = { type = 10849 id = 2033 }
    name     = "Central Asian Military District"
    division =
    { experience = 25
      id         = { type = 10849 id = 2034 }
      name       = "Central Asian Military District"
      type       = hq
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 1372
    id       = { type = 10849 id = 2035 }
    name     = "1. Far Eastern Front"
    division =
    { experience = 25
      id         = { type = 10849 id = 2036 }
      name       = "1. Far Eastern Front"
      type       = hq
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 1367
    id       = { type = 10849 id = 2037 }
    name     = "2. Far Eastern Front"
    division =
    { experience = 25
      id         = { type = 10849 id = 2038 }
      name       = "1. Far Eastern Front"
      type       = hq
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 1528
    id       = { type = 10849 id = 2039 }
    name     = "3. Far Eastern Front"
    division =
    { experience = 25
      id         = { type = 10849 id = 2040 }
      name       = "1. Far Eastern Front"
      type       = hq
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 1523
    id       = { type = 10849 id = 2041 }
    name     = "4. Far Eastern Front"
    division =
    { experience = 25
      id         = { type = 10849 id = 2042 }
      name       = "4. Far Eastern Front"
      type       = hq
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 226
    id       = { type = 10849 id = 2043 }
    name     = "1. Tank Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 2044 }
      name       = "1. Tank Army"
      type       = hq
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 229
    id       = { type = 10849 id = 2045 }
    name     = "2. Tank Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 2046 }
      name       = "2. Tank Army"
      type       = hq
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 230
    id       = { type = 10849 id = 2047 }
    name     = "3. Tank Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 2048 }
      name       = "3. Tank Army"
      type       = hq
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 228
    id       = { type = 10849 id = 2049 }
    name     = "NKVD"
    division =
    { experience = 25
      id         = { type = 10849 id = 2050 }
      name       = "NKVD"
      type       = hq
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 175
    id       = { type = 10849 id = 2051 }
    name     = "4. Tank Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 2052 }
      name       = "4. Tank Army"
      type       = hq
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 1369 # ##in prep.
    id       = { type = 10849 id = 2053 }
    name     = "5. Tank Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 2054 }
      name       = "5. Tank Army"
      type       = hq
      model      = 2
      strength   = 100
    }
  }
  landunit =
  { location = 133
    id       = { type = 10849 id = 2055 }
    name     = "Murmansk Front"
    division =
    { experience = 25
      id         = { type = 10849 id = 2056 }
      name       = "Murmansk Front"
      type       = hq
      model      = 2
      strength   = 100
    }
  }
  navalunit =
  { id       = { type = 10849 id = 800 }
    name     = "Cernoje Flote"
    location = 253
    base     = 253
    division =
    { experience = 25
      id         = { type = 10849 id = 801 }
      name       = "Parishskaya Kommuna"
      type       = battleship
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 802 }
      name       = "Voroshilov"
      type       = heavy_cruiser
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 803 }
      name       = "Molotov"
      type       = heavy_cruiser
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 804 }
      name       = "Kaganovich"
      type       = heavy_cruiser
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 805 }
      name       = "Krasnyi Kavkaz"
      type       = heavy_cruiser
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 806 }
      name       = "Profintern"
      type       = light_cruiser
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 808 }
      name       = "1. Flotiliya Esmintsev"
      type       = destroyer
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 809 }
      name       = "2. Flotiliya Esmintsev"
      type       = destroyer
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 810 }
      name       = "3. Flotiliya Esmintsev"
      type       = destroyer
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 811 }
      name       = "4. Flotiliya Esmintsev"
      type       = destroyer
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 862 }
      name       = "1. Transportnaya Flotiliya"
      type       = transport
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 863 }
      name       = "2. Transportnaya Flotiliya"
      type       = transport
    }
  }
  navalunit =
  { id       = { type = 10849 id = 864 }
    name     = "Arskoje Flote"
    location = 133
    base     = 133
    division =
    { experience = 25
      id         = { type = 10849 id = 819 }
      name       = "Murmansk"
      type       = light_cruiser
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 868 }
      name       = "13. Flotiliya Esmintsev"
      type       = destroyer
      model      = 1
    }
  }
  navalunit =
  { id       = { type = 10849 id = 869 }
    name     = "Beringovo Flote"
    location = 1372
    base     = 1372 # Vladivostok
    division =
    { experience = 25
      id         = { type = 10849 id = 872 }
      name       = "16. Flotiliya Esmintsev"
      type       = destroyer
      model      = 2
    }
  }
  navalunit =
  { id       = { type = 10849 id = 812 }
    name     = "CCCP Baltijskoje Flote"
    location = 187
    base     = 187 # Leningrad
    division =
    { experience = 25
      id         = { type = 10849 id = 813 }
      name       = "Oktyabrskaya Revolutsia"
      type       = battleship
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 815 }
      name       = "Kirov"
      type       = heavy_cruiser
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 816 }
      name       = "Maxim Gor'kiy"
      type       = heavy_cruiser
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 817 }
      name       = "Kalinin"
      type       = heavy_cruiser
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 824 }
      name       = "9. Flotiliya Esmintsev"
      type       = destroyer
      model      = 2
    }
  }
  navalunit =
  { id       = { type = 10849 id = 827 }
    name     = "2. Flote Podlodok"
    location = 187
    base     = 187 # Leningrad
    division =
    { experience = 25
      id         = { type = 10849 id = 830 }
      name       = "9. Flotiliya Podlodok"
      type       = submarine
      model      = 1
    }
  }
  navalunit =
  { id       = { type = 10849 id = 833 }
    name     = "3. Flote Podlodok"
    location = 187
    base     = 187 # Leningrad
    division =
    { experience = 25
      id         = { type = 10849 id = 834 }
      name       = "12. Flotiliya Podlodok"
      type       = submarine
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 835 }
      name       = "13. Flotiliya Podlodok"
      type       = submarine
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 836 }
      name       = "14. Flotiliya Podlodok"
      type       = submarine
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 837 }
      name       = "15. Flotiliya Podlodok"
      type       = submarine
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 838 }
      name       = "16. Flotiliya Podlodok"
      type       = submarine
      model      = 3
    }
  }
  navalunit =
  { id       = { type = 10849 id = 839 }
    name     = "4. Flote Podlodok"
    location = 253
    base     = 253 # Sevastopol
    division =
    { experience = 25
      id         = { type = 10849 id = 840 }
      name       = "17. Flotiliya Podlodok"
      type       = submarine
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 841 }
      name       = "18. Flotiliya Podlodok"
      type       = submarine
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 842 }
      name       = "19. Flotiliya Podlodok"
      type       = submarine
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 843 }
      name       = "20. Flotiliya Podlodok"
      type       = submarine
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 844 }
      name       = "21. Flotiliya Podlodok"
      type       = submarine
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 845 }
      name       = "22. Flotiliya Podlodok"
      type       = submarine
      model      = 1
    }
  }
  navalunit =
  { id       = { type = 10849 id = 846 }
    name     = "5. Flote Podlodok"
    location = 253
    base     = 253 # Sevastopol
    division =
    { experience = 25
      id         = { type = 10849 id = 847 }
      name       = "23. Flotiliya Podlodok"
      type       = submarine
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 848 }
      name       = "24. Flotiliya Podlodok"
      type       = submarine
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 849 }
      name       = "25. Flotiliya Podlodok"
      type       = submarine
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 850 }
      name       = "26. Flotiliya Podlodok"
      type       = submarine
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 851 }
      name       = "27. Flotiliya Podlodok"
      type       = submarine
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 852 }
      name       = "28. Flotiliya Podlodok"
      type       = submarine
      model      = 1
    }
  }
  navalunit =
  { id       = { type = 10849 id = 853 }
    name     = "6. Flote Podlodok"
    location = 1372
    base     = 1372 # Vladivostok
    division =
    { experience = 25
      id         = { type = 10849 id = 854 }
      name       = "29. Flotiliya Podlodok"
      type       = submarine
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 855 }
      name       = "30. Flotiliya Podlodok"
      type       = submarine
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 856 }
      name       = "31. Flotiliya Podlodok"
      type       = submarine
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 857 }
      name       = "32. Flotiliya Podlodok"
      type       = submarine
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 858 }
      name       = "33. Flotiliya Podlodok"
      type       = submarine
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 859 }
      name       = "34. Flotiliya Podlodok"
      type       = submarine
      model      = 2
    }
  }
  navalunit =
  { id       = { type = 10849 id = 874 }
    name     = "1. Flote Podlodok"
    location = 133
    base     = 133 # ##murmansk
    division =
    { experience = 25
      id         = { type = 10849 id = 875 }
      name       = "1. Flotiliya Podlodok"
      type       = submarine
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 876 }
      name       = "2. Flotiliya Podlodok"
      type       = submarine
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 878 }
      name       = "3. Flotiliya Podlodok"
      type       = submarine
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 879 }
      name       = "4. Flotiliya Podlodok"
      type       = submarine
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 880 }
      name       = "5. Flotiliya Podlodok"
      type       = submarine
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 881 }
      name       = "6. Flotiliya Podlodok"
      type       = submarine
      model      = 1
    }
  }
  # ###################
  # ## USSR AIR OOB ###
  # ###################
  airunit =
  { location = 238
    base     = 238
    id       = { type = 10849 id = 1001 }
    name     = "4th Bomber Aviation Corps"
    division =
    { experience = 25
      id         = { type = 10849 id = 1002 }
      name       = "202. BAD"
      strength   = 100
      type       = tactical_bomber
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1003 }
      name       = "219. BAD"
      strength   = 100
      type       = tactical_bomber
      model      = 3
    }
  }
  airunit =
  { location = 238
    base     = 238
    id       = { type = 10849 id = 1005 }
    name     = "5th Assault Avialtion Corps"
    division =
    { experience = 25
      id         = { type = 10849 id = 1006 }
      name       = "4th Gds Assault Division"
      strength   = 100
      type       = cas
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1007 }
      name       = "264. ShAD"
      strength   = 100
      type       = cas
      model      = 1
    }
  }
  airunit =
  { location = 238
    base     = 238
    id       = { type = 10849 id = 1010 }
    name     = "8th Assault Aviation Corps"
    division =
    { experience = 25
      id         = { type = 10849 id = 1011 }
      name       = "224. ShAD"
      strength   = 100
      type       = cas
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1012 }
      name       = "226. ShAD"
      strength   = 100
      type       = cas
      model      = 1
    }
  }
  airunit =
  { location = 238
    base     = 238
    id       = { type = 10849 id = 1015 }
    name     = "5th interceptor Aviation Corps"
    division =
    { experience = 25
      id         = { type = 10849 id = 1016 }
      name       = "5th Gds interceptor Division"
      strength   = 100
      type       = interceptor
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1017 }
      name       = "256. IAD"
      strength   = 100
      type       = interceptor
      model      = 3
    }
  }
  airunit =
  { location = 238
    base     = 238
    id       = { type = 10849 id = 1020 }
    name     = "10th interceptor Aviation Corps"
    division =
    { experience = 25
      id         = { type = 10849 id = 1021 }
      name       = "10th Gds interceptor Division"
      strength   = 100
      type       = interceptor
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1022 }
      name       = "235. IAD"
      strength   = 100
      type       = interceptor
      model      = 3
    }
  }
  airunit =
  { location = 233
    base     = 233
    id       = { type = 10849 id = 1023 }
    name     = "2nd Air Army Night Bomber Corps"
    division =
    { experience = 25
      id         = { type = 10849 id = 1024 }
      name       = "208th Night Bomber Division"
      strength   = 100
      type       = strategic_bomber
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1025 }
      name       = "326th Night Bomber Division"
      strength   = 100
      type       = strategic_bomber
      model      = 0
    }
  }
  airunit =
  { location = 233
    base     = 233
    id       = { type = 10849 id = 1029 }
    name     = "2nd Gds Bomber Aviation Corps"
    division =
    { experience = 25
      id         = { type = 10849 id = 1030 }
      name       = "1st Gds Bomber Division"
      strength   = 100
      type       = tactical_bomber
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1031 }
      name       = "8th Gds Bomber Division"
      strength   = 100
      type       = tactical_bomber
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1032 }
      name       = "218. BAD"
      strength   = 100
      type       = tactical_bomber
      model      = 3
    }
  }
  airunit =
  { location = 233
    base     = 233
    id       = { type = 10849 id = 1035 }
    name     = "1st Gds Assault Aviation Corps"
    division =
    { experience = 25
      id         = { type = 10849 id = 1036 }
      name       = "8. BAD"
      strength   = 100
      type       = tactical_bomber
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1037 }
      name       = "9th Gds Bomber Division"
      strength   = 100
      type       = tactical_bomber
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1038 }
      name       = "12th Gds interceptor Division"
      strength   = 100
      type       = interceptor
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1039 }
      name       = "312 Night Bomber Division"
      strength   = 100
      type       = strategic_bomber
      model      = 0
    }
  }
  airunit =
  { location = 233
    base     = 233
    id       = { type = 10849 id = 1041 }
    name     = "2nd Assault Aviation Corps"
    division =
    { experience = 25
      id         = { type = 10849 id = 1042 }
      name       = "7th Gds Assault Division"
      strength   = 100
      type       = cas
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1043 }
      name       = "231. ShAD"
      strength   = 100
      type       = cas
      model      = 1
    }
  }
  airunit =
  { location = 233
    base     = 233
    id       = { type = 10849 id = 1046 }
    name     = "4th interceptor Aviation Corps"
    division =
    { experience = 25
      id         = { type = 10849 id = 1047 }
      name       = "294. IAD"
      strength   = 100
      type       = interceptor
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1048 }
      name       = "302. IAD"
      strength   = 100
      type       = interceptor
      model      = 3
    }
  }
  airunit =
  { location = 233
    base     = 233
    id       = { type = 10849 id = 1051 }
    name     = "7th interceptor Aviation Corps"
    division =
    { experience = 25
      id         = { type = 10849 id = 1052 }
      name       = "9th Gds interceptor Division"
      strength   = 100
      type       = interceptor
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1053 }
      name       = "205. IAD"
      strength   = 100
      type       = interceptor
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1054 }
      name       = "304. IAD"
      strength   = 100
      type       = interceptor
      model      = 2
    }
  }
  airunit =
  { location = 238
    base     = 238
    id       = { type = 10849 id = 1058 }
    name     = "1st Gds Mixed Air Corps"
    division =
    { experience = 25
      id         = { type = 10849 id = 1059 }
      name       = "5th Gds Assault Division"
      strength   = 100
      type       = cas
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1060 }
      name       = "6th Gds Assault Division"
      strength   = 100
      type       = cas
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1061 }
      name       = "11th Gds interceptor Division"
      strength   = 100
      type       = interceptor
      model      = 3
    }
  }
  airunit =
  { location = 238
    base     = 238
    id       = { type = 10849 id = 1064 }
    name     = "9 Mixed Air Corps"
    division =
    { experience = 25
      id         = { type = 10849 id = 1065 }
      name       = "305. ShAD"
      strength   = 100
      type       = cas
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1066 }
      name       = "306. ShAD"
      strength   = 100
      type       = cas
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1067 }
      name       = "295. IAD"
      strength   = 100
      type       = interceptor
      model      = 3
    }
  }
  airunit =
  { location = 238
    base     = 238
    id       = { type = 10849 id = 1070 }
    name     = "17th Air Army Reserves"
    division =
    { experience = 25
      id         = { type = 10849 id = 1071 }
      name       = "236. IAD"
      strength   = 100
      type       = multi_role
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1072 }
      name       = "238. IAD"
      strength   = 100
      type       = multi_role
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1073 }
      name       = "262nd Night Bomber Division"
      strength   = 100
      type       = strategic_bomber
      model      = 0
    }
  }
  airunit =
  { location = 219
    base     = 219
    id       = { type = 10849 id = 1076 }
    name     = "11th Mixed Air Corps"
    division =
    { experience = 25
      id         = { type = 10849 id = 1077 }
      name       = "4, 148 & 293 interceptor Regiments"
      strength   = 100
      type       = multi_role
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1078 }
      name       = "658 & 724 Assault Regiments"
      strength   = 100
      type       = cas
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1079 }
      name       = "225. ShAD"
      strength   = 100
      type       = cas
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1080 }
      name       = "284th Night Bomber Division"
      strength   = 100
      type       = strategic_bomber
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1081 }
      name       = "313rd Night Bomber Division"
      strength   = 100
      type       = strategic_bomber
      model      = 0
    }
  }
  airunit =
  { location = 219
    base     = 219
    id       = { type = 10849 id = 1085 }
    name     = "14th Air Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 1086 }
      name       = "281. ShAD"
      strength   = 100
      type       = cas
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1087 }
      name       = "269. IAD"
      strength   = 100
      type       = interceptor
      model      = 3
    }
  }
  airunit =
  { id       = { type = 10269 id = 58 }
    location = 238 # USSR
    base     = 238
    name     = "Groupe Expéditionnaire Française"
    control  = fra
    division =
    { experience = 25
      id         = { type = 10269 id = 59 }
      name       = "Groupe de Chasse 'Normandie'"
      type       = multi_role
      model      = 2
      strength   = 100
    }
  }
  airunit =
  { location = 187
    base     = 187
    id       = { type = 10849 id = 1090 }
    name     = "13 Air Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 1091 }
      name       = "276. DBAD"
      strength   = 100
      type       = strategic_bomber
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1092 }
      name       = "277. ShAD"
      strength   = 100
      type       = cas
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1093 }
      name       = "275. IAD"
      strength   = 100
      type       = multi_role
      model      = 1
    }
  }
  airunit =
  { location = 187
    base     = 187
    id       = { type = 10849 id = 1096 }
    name     = "12th Air Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 1097 }
      name       = "30. DBAD"
      strength   = 100
      type       = strategic_bomber
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1098 }
      name       = "247. BAD"
      strength   = 100
      type       = tactical_bomber
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1099 }
      name       = "248. ShAD"
      strength   = 100
      type       = cas
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1100 }
      name       = "316. ShAD"
      strength   = 100
      type       = cas
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1101 }
      name       = "246. IAD"
      strength   = 100
      type       = multi_role
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1102 }
      name       = "246. IAD"
      strength   = 100
      type       = multi_role
      model      = 1
    }
  }
  airunit =
  { location = 219
    base     = 219
    id       = { type = 10849 id = 1105 }
    name     = "11th interceptor Aviation Corps"
    division =
    { experience = 25
      id         = { type = 10849 id = 1106 }
      name       = "5th Gds interceptor Division"
      strength   = 100
      type       = interceptor
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1107 }
      name       = "190. IAD"
      strength   = 100
      type       = interceptor
      model      = 3
    }
  }
  airunit =
  { location = 219
    base     = 219
    id       = { type = 10849 id = 1117 }
    name     = "1st Guards Bomber Aviation Corps"
    division =
    { experience = 25
      id         = { type = 10849 id = 1118 }
      name       = "4th Gds Bomber Division"
      strength   = 100
      type       = tactical_bomber
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1119 }
      name       = "5th Gds Bomber Division"
      strength   = 100
      type       = tactical_bomber
      model      = 3
    }
  }
  airunit =
  { location = 219
    base     = 219
    id       = { type = 10849 id = 1122 }
    name     = "3rd Assault Aviation Corps"
    division =
    { experience = 25
      id         = { type = 10849 id = 1123 }
      name       = "307. ShAD"
      strength   = 100
      type       = cas
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1124 }
      name       = "308. ShAD"
      strength   = 100
      type       = cas
      model      = 1
    }
  }
  airunit =
  { location = 219
    base     = 219
    id       = { type = 10849 id = 1128 }
    name     = "3rd Gds Bomber Division"
    division =
    { experience = 25
      id         = { type = 10849 id = 1129 }
      name       = "113. DBAD"
      strength   = 100
      type       = strategic_bomber
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1130 }
      name       = "311. ShAD"
      strength   = 100
      type       = cas
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1131 }
      name       = "240. IAD"
      strength   = 100
      type       = interceptor
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1132 }
      name       = "303. IAD"
      strength   = 100
      type       = multi_role
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1133 }
      name       = "213th Night Bomber Division"
      strength   = 100
      type       = strategic_bomber
      model      = 0
    }
  }
  airunit =
  { location = 219
    base     = 219
    id       = { type = 10849 id = 1136 }
    name     = "1st Guards interceptor Aviation Corps "
    division =
    { experience = 25
      id         = { type = 10849 id = 1137 }
      name       = "3rd Gds interceptor Division"
      strength   = 100
      type       = interceptor
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1138 }
      name       = "4th Gds interceptor Division"
      strength   = 100
      type       = interceptor
      model      = 3
    }
  }
  #airunit =
  #{ location = 219
  #  base     = 219
  #  id       = { type = 10849 id = 1141 }
  #  name     = "2nd interceptor Aviation Corps"
  # division = { experience = 25
  # id = { type = 10849 id = 1142 }
  # name = "7th Gds interceptor Division"
  # strength = 100
  # type = multi_role
  # model = 1
  # }
  # division = { experience = 25
  # id = { type = 10849 id = 1143 }
  # name = "322. IAD"
  # strength = 100
  # type = multi_role
  # model = 1
  # }
  #}
  airunit =
  { location = 219
    base     = 219
    id       = { type = 10849 id = 1146 }
    name     = "3rd interceptor Aviation Corps"
    division =
    { experience = 25
      id         = { type = 10849 id = 1147 }
      name       = "265. IAD"
      strength   = 100
      type       = interceptor
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1148 }
      name       = "278. IAD"
      strength   = 100
      type       = interceptor
      model      = 3
    }
  }
  airunit =
  { location = 219
    base     = 219
    id       = { type = 10849 id = 1151 }
    name     = "1st Air Army Reserves"
    division =
    { experience = 25
      id         = { type = 10849 id = 1152 }
      name       = "6th Gds Bomber Division"
      strength   = 100
      type       = tactical_bomber
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1153 }
      name       = "1st Gds Assault Division"
      strength   = 100
      type       = cas
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1154 }
      name       = "240. IAD"
      strength   = 100
      type       = interceptor
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1155 }
      name       = "334. BAD"
      strength   = 100
      type       = tactical_bomber
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1156 }
      name       = "311. ShAD"
      strength   = 100
      type       = cas
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1157 }
      name       = "303. IAD"
      strength   = 100
      type       = interceptor
      model      = 1
    }
  }
  airunit =
  { location = 273
    base     = 273
    id       = { type = 10849 id = 1161 }
    name     = "4th Air Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 1162 }
      name       = "230. ShAD"
      strength   = 100
      type       = cas
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1163 }
      name       = "229. IAD"
      strength   = 100
      type       = interceptor
      model      = 4
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1164 }
      name       = "325th Night Bomber Division"
      strength   = 100
      type       = strategic_bomber
      model      = 0
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1165 }
      name       = "233. ShAD"
      strength   = 100
      type       = cas
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1166 }
      name       = "309. IAD"
      strength   = 100
      type       = interceptor
      model      = 4
    }
  }
  airunit =
  { location = 273
    base     = 273
    id       = { type = 10849 id = 1169 }
    name     = "6th Air Army"
    division =
    { experience = 25
      id         = { type = 10849 id = 1170 }
      name       = "3rd Guards Assault Division"
      strength   = 100
      type       = cas
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1171 }
      name       = "336. IAD"
      strength   = 100
      type       = interceptor
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1172 }
      name       = "242nd Night Bomber Division"
      strength   = 100
      type       = strategic_bomber
      model      = 0
    }
  }
  airunit =
  { location = 273
    base     = 273
    id       = { type = 10849 id = 1176 }
    name     = "3rd Bomber Aviation Corps"
    division =
    { experience = 25
      id         = { type = 10849 id = 1177 }
      name       = "241. BAD"
      strength   = 100
      type       = tactical_bomber
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1178 }
      name       = "301. BAD"
      strength   = 100
      type       = tactical_bomber
      model      = 3
    }
  }
  airunit =
  { location = 273
    base     = 273
    id       = { type = 10849 id = 1181 }
    name     = "6th Mixed Aviation Corps"
    division =
    { experience = 25
      id         = { type = 10849 id = 1182 }
      name       = "132. BAD"
      strength   = 100
      type       = tactical_bomber
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1183 }
      name       = "221. BAD"
      strength   = 100
      type       = tactical_bomber
      model      = 3
    }
  }
  # division = { experience = 25
  # id = { type = 10849 id = 1184 }
  # name = "282. IAD"
  # strength = 100
  # type = multi_role
  # model = 1
  # }
  airunit =
  { location = 273
    base     = 273
    id       = { type = 10849 id = 1187 }
    name     = "6th interceptor Aviation Corps"
    # division = { experience = 25
    # id = { type = 10849 id = 1188 }
    # name = "273. IAD"
    # strength = 100
    # type = multi_role
    # model = 1
    # }
    division =
    { experience = 25
      id         = { type = 10849 id = 1189 }
      name       = "279. IAD"
      strength   = 100
      type       = interceptor
      model      = 3
    }
  }
  airunit =
  { location = 273
    base     = 273
    id       = { type = 10849 id = 1192 }
    name     = "16th Air Army Mixed units"
    division =
    { experience = 25
      id         = { type = 10849 id = 1193 }
      name       = "2nd Gds Assault Division"
      strength   = 100
      type       = cas
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1194 }
      name       = "299. ShAD"
      strength   = 100
      type       = cas
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1195 }
      name       = "1st Guards interceptor Division"
      strength   = 100
      type       = interceptor
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1196 }
      name       = "234. IAD"
      strength   = 100
      type       = interceptor
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1197 }
      name       = "283. IAD"
      strength   = 100
      type       = interceptor
      model      = 2
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1198 }
      name       = "286. IAD"
      strength   = 100
      type       = interceptor
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1199 }
      name       = "271st Night Bomber Division"
      strength   = 100
      type       = strategic_bomber
      model      = 0
    }
  }
  airunit =
  { location = 1372
    base     = 1372
    id       = { type = 10849 id = 1203 }
    name     = "Far East Airunits"
    division =
    { experience = 25
      id         = { type = 10849 id = 1204 }
      name       = "115. IAD"
      strength   = 100
      type       = interceptor
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1205 }
      name       = "107. ShAD"
      strength   = 100
      type       = cas
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1206 }
      name       = "100. IAD"
      strength   = 100
      type       = interceptor
      model      = 3
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1207 }
      name       = "95. BAD"
      strength   = 100
      type       = tactical_bomber
      model      = 1
    }
  }
  airunit =
  { location = 191
    base     = 191
    id       = { type = 10849 id = 1211 }
    name     = "3rd Air Army Reserves"
    division =
    { experience = 25
      id         = { type = 10849 id = 1212 }
      name       = "211. ShAD"
      strength   = 100
      type       = cas
      model      = 1
    }
    division =
    { experience = 25
      id         = { type = 10849 id = 1213 }
      name       = "335. ShAD"
      strength   = 100
      type       = cas
      model      = 1
    }
    # division = { experience = 25
    # id = { type = 10849 id = 1214 }
    # name = "259. IAD"
    # strength = 100
    # type = multi_role
    # model = 1
    # }
    division =
    { experience = 25
      id         = { type = 10849 id = 1215 }
      name       = "314th Night Bomber Division"
      strength   = 100
      type       = strategic_bomber
      model      = 0
    }
  }
}
