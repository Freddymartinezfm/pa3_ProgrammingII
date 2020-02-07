TARGET = pa3
CC = g++
FLAGS = -g -Wall
OBJ = main.o Employee.o Node.o
HEADER = Employee.h Log.h Node.h
TYPE = win
CPP = Employee.cpp main.cpp Employee.cpp Node.cpp



pa3: main.o Employee.o Log.o
	g++ -g -Wall main.o Employee.o Log.o -o pa3
main.o: main.cpp Employee.h
	g++ -g -c -Wall -c main.cpp
Employee.o: Employee.h Employee.cpp
	g++ -g -c -Wall Employee.cpp
Log.o: Log.h Log.cpp
	g++ -g -Wall -c Log.cpp

clean:
ifeq ($(TYPE), win)
	del pa3
	del *.o
else
	rm *.o pa3
endif