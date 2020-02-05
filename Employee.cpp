#include "Employee.h"
#include <string>
#include <cstring>
#include <iostream>
#include "Log.h"
#include <sstream>
#include <cstring>
#include <iomanip>

const static std::string TAG {"Employee"};
int Employee::size = 0;

Employee::Employee(): code{""}, ssn{""}, first{""}, last{""}, department{""}, 	role{""}, salary{0}{
	std::string mTAG {"Employee()"};
	Log::m(TAG, mTAG, "Called");
}

Employee::Employee(std::string input){
	std::string mTAG {"Employee(input)"}; 
	Log::m(TAG, mTAG, "Called"); 
	std::string field;
	std::istringstream ss{input};

	int count = 0;
	while (ss >> field){
		parse(count, field);
		++count;
	}
	Employee::size++;
}

int Employee::getEmpSize(){
	return Employee::size;

}

std::ostream& operator<<(std::ostream& os, const Employee& employee) {
	//std::cout << Employee::getEmpSize();
    os 
	<< std::setw(8) << std::left << employee.getCode()
	<< std::setw(15) << std::left <<  employee.getSSN() 
	<< std::setw(18) << std::left << employee.getFirst()
	<< std::setw(18) << std::left << employee.getLast()
	<< std::setw(16) << std::left << employee.getDept()
	<< std::setw(19) << std::left << employee.getRole()
	<< std::setw(9) << std::right << employee.getSalary()
	<< std::endl;
    return os;
}

void Employee::display()  {
	std::cout << *this;
}

Employee::~Employee(){
	std::string mTAG {"~Employee()"}; 
	Log::m(TAG, mTAG, "Called");
	Employee::size--;

	
}

void Employee::parse(int count, std::string field){
	//std::string mTAG {"parse"}; Log::m(TAG, mTAG);	

	// curly's around each switch case?
	switch (count) {
	case 0:
		code = field;
		break;
	case 1:
		ssn = field;
		break;
	case 2:
		first = field;
		break;
	case 3:
		last = field;
		break;
	case 4:
		department = field;
		break;
	case 5:
		role = field;
		break;
	case 6: 
		salary = std::stof(field);
		break;
	default:
		std::cout << "INVALID_FIELD";
		break;
	}

}

std::string Employee::getSSN() const { return ssn; }
void Employee::setSSN(std::string ssn){ this->ssn = ssn; }

std::string Employee::getFirst() const { return std::string(first); }
void Employee::setFirst(std::string  first){ this->first = first; }

std::string Employee::getLast() const { return last; }
void Employee::setLast(std::string last){ this->last = last.c_str(); }

std::string Employee::getCode() const { return code; }
void Employee::setCode(std::string code){ this->code = code; }

std::string Employee::getDept() const { return department; }
void Employee::setDept(std::string department){ this->department = department; }

std::string Employee::getRole() const { return role; }
void Employee::setRole(std::string role){ this->role = role; }

double Employee::getSalary() const { return salary; }
void Employee::setSalary(double salary){ this->salary = salary; }