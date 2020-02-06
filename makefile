pa3: main.o Employee.o Log.o
	g++ main.o Employee.o Log.o -o pa3
main.o: main.cpp Log.h
	g++ -c -g -Wall main.cpp
Log.o: Log.h Log.cpp
	g++ -c -g -Wall Log.cpp
Employee.o: Employee.cpp Employee.h
	g++ -c -g -Wall Employee.cpp
clean:
	rm -f *.o  pa2
# clean:
	# del *.o