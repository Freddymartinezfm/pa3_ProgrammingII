

pa3: main.o Employee.o Log.o
	g++ -g main.o Employee.o Log.o  -o pa3
main.o: main.cpp Employee.h Log.h
	g++ -g -c main.cpp 
Log.o: Log.cpp Log.h
	g++ -g -c Log.cpp
Employee.o: Employee.h Employee.cpp
	g++ -c -g Employee.cpp
clean:
	del *.o pa3