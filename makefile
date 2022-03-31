clean :
	rm *.o a.out

all : Reverse.o Truckloads.o EfficientTruckloads.o main.cpp
	g++ Reverse.o Truckloads.o EfficientTruckloads.o main.cpp

Reverse.o : Reverse.cpp Reverse.h
	g++ -c Reverse.cpp -o Reverse.o

Truckloads.o : Truckloads.cpp Truckloads.h
	g++ -c Truckloads.cpp -o Truckloads.o

EfficientTruckloads.o : EfficientTruckloads.cpp EfficientTruckloads.h
	g++ -c EfficientTruckloads.cpp -o EfficientTruckloads.o