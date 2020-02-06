

TARGET = pa3
CC = g++
FLAGS = -g -Wall
OBJ = main.o Employee.o 
HEADERS = Employee.h Log.h
TYPE = win
CPP = Employee.cpp main.cpp 

pa2: clean $(OBJ)
	$(CC) $(FLAGS) $(OBJ)  -o $(TARGET)

main.o: $(HEADERS) $(CPP)
	$(CC) $(FLAGS) -c $(CPP)

Employee.o: Employee.cpp Employee.h
	$(CC) $(FLAGS) Employee.cpp
clean:
ifeq ($(TYPE), win)
	del *.o pa2
else
	rm *.o pa2
endif