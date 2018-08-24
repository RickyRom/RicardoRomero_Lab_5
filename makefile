Main: 	Avion.o Propulsores.o Misiles.o Piloto.o RangeAirForce.o
	g++ Avion.o Propulsores.o Misiles.o Piloto.o RangeAirForce.o -o RangeAirForce

RangeAirForce.o: 	RangeAirForce.cpp
	g++ -c RangeAirForce.cpp

Avion.o: 	Avion.h Avion.cpp
	g++ -c Avion.cpp

Propulsores.o:	Propulsores.h Propulsores.cpp
	g++ -c Propulsores.cpp

Misiles.o: 	Misiles.h Misiles.cpp
	g++ -c Misiles.cpp

Piloto.o: 	Piloto.h Piloto.cpp
	g++ -c Piloto.cpp