all: main

main: main.o wheel.o engine.o vehicle.o car.o motor.o
	g++ main.o wheel.o engine.o vehicle.o car.o motor.o -o main 

main.o: main.cpp 
	g++ -c main.cpp  -o main.o

wheel.o: wheel.cpp wheel.h
	g++ -c wheel.cpp  -o wheel.o

engine.o: engine.cpp engine.h
	g++ -c engine.cpp  -o engine.o

vehicle.o: vehicle.cpp vehicle.h
	g++ -c vehicle.cpp  -o vehicle.o

car.o: car.cpp car.h
	g++ -c car.cpp  -o car.o

motor.o: motor.cpp motor.h
	g++ -c motor.cpp  -o motor.o

clean:
	rm *.o main