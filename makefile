TARGET = pa3
CC = g++
FLAGS = -g -Wall
OBJ = main.o Employee.o Node.o
HEADER = Employee.h Log.h Node.h
TYPE = win
CPP = Employee.cpp main.cpp Employee.cpp Node.cpp

$(TARGET): clean $(OBJ)
	$(CC) $(FLAGS) $(OBJ)  -o $(TARGET)
main.o: $(HEADER) $(CPP)
	$(CC) $(FLAGS) -c $(CPP)
Employee.o: Employee.cpp Employee.h
	$(CC) $(FLAGS) Employee.cpp
Node.o: Node.cpp Node.h
	$(CC) $(FLAGS) Node.cpp
clean:
ifeq ($(TYPE), win)
	del *.o pa2
else
	rm *.o pa2
endif