#include <iostream>
#include <fstream>
#include <string>
#include "Employee.h"
#include "Log.h"

int main(int argc, char** argv){
		const int  MAX_CAPACITY {23};
		std::string fileName;
		argc > 1 ? fileName = argv[1] : fileName =  "employees.txt";
		
		std::ifstream inFile(fileName);
		if (!inFile.good()){
			std::cerr << "Error opening file " << std::endl;
		}

		Employee* emp[MAX_CAPACITY];
		Employee regEmp;
		for (int i =0; i < MAX_CAPACITY; i++) emp[i] = nullptr;
		int count = 0;
		if (!inFile.fail()){
			std::string input;
			while (std::getline(inFile, input)){
				if (input != " "){
					emp[count++] = new Employee(input);
				}	
			}
	}
	inFile.close();

	for (int i =0; i < MAX_CAPACITY; i++){
		std::cout << "size: " << emp[i]->getEmpSize() << " ";
		emp[i]->display();
	}

	for (int i = 0; i < MAX_CAPACITY; i++){
		delete emp[i];
	}
	
}