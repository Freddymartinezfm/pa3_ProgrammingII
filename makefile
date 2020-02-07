TARGET = pa3
CXX = g++
CPPFLAGS = -g -Wall
TYPE = w
CPP = Employee.cpp main.cpp Employee.cpp Node.cpp Log.cpp
HEADER = Employee.h Log.h Node.h Log.h
OBJ = main.o Employee.o Node.o Log.o

$(TARGET): $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(TARGET)
main.o: main.cpp Employee.h
	$(CXX) $(CPPFLAGS) -c main.cpp
Employee.o: Employee.h Employee.cpp
	$(CXX) $(CPPFLAGS) -c Employee.cpp
Log.o: Log.h Log.cpp
	$(CXX) $(CPPFLAGS) -c Log.cpp
Node.o: Node.h Node.cpp
	$(CXX) $(CPPFLAGS) -c Node.cpp

# %.cpp:
# 	@$

clean:
ifeq ($(TYPE), w)
	del pa3.exe
	del *.o
else
	rm -f *.o
	rm -f pa3.out
endif 




