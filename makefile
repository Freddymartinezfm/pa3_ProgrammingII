TARGET = pa3
CC = g++
FLAGS = -g -Wall
OBJ = main.o Employee.o Node.o Log.o
HEADER = Employee.h Log.h Node.h Log.h
TYPE = win
CPP = Employee.cpp main.cpp Employee.cpp Node.cpp Log.cpp



$(TARGET): clean $(OBJ)
	g++ -g -Wall $(OBJ) -o pa3
main.o: main.cpp Employee.h
	g++ -g -c -Wall -c main.cpp
Employee.o: Employee.h Employee.cpp
	g++ -g -c -Wall Employee.cpp
Log.o: Log.h Log.cpp
	g++ -g -Wall -c Log.cpp
Node.o: Node.h Node.cpp
	g++ -g -Wall -c Node.cpp

clean:
ifeq ($(TYPE), win)
	del pa3
	del *.o
else
	rm *.o pa3
endif