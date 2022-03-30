clean :
	rm *.o a.out

all : Reverse.o TruckLoads.o main.cpp
	g++ Reverse.o TruckLoads.o main.cpp

Reverse.o : Reverse.cpp Reverse.h
	g++ -c Reverse.cpp -o Reverse.o

TruckLoads.o : TruckLoads.cpp TruckLoads.h
	g++ -c TruckLoads.cpp -o TruckLoads.o