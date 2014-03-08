CC=g++
CFLAGS=-c -Wall

all: main

main: main.o vehicle.o car.o
	$(CC) main.o vehicle.o car.o -o carapp

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

vehicle.o: vehicle.cpp
	$(CC) $(CFLAGS) vehicle.cpp

car.o: car.cpp
	$(CC) $(CFLAGS) car.cpp

clean:
	rm -rf *.o carapp
