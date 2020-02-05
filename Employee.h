#ifndef __EMPLOYEE__H__
#define __EMPLOYEE__H__

#include <string>
#include <iostream>


class Employee {
private:
	// the rest of these are instance/member variables 
	std::string code;
	std::string ssn;
	char* first;
	char* last;
	std::string department;
	std::string role;
	double salary;
	static int size; // static data member
	void parse(int, std::string); //assists the parameter constructor to parse the std::string
	
public:
	Employee(); //default constructor
	Employee(std::string); //parameter constructor that overloads the default constructor
	~Employee(); //destructor
	Employee(const Employee&);

	std::string getFirst() const;
	void setFirst(std::string);

	std::string getLast() const;
	void setLast(std::string);
	
	
	static int getEmpSize(); //return the number of all the employee objects

	std::string getCode() const;
	void setCode(std::string);

	std::string getSSN() const;
	void setSSN(std::string);

	std::string getDept() const;
	void setDept(std::string);

	std::string getRole() const;
	void setRole(std::string);

	double getSalary() const;
	void setSalary(double);


	void display() ; //display the information of the employee
	friend std::ostream& operator<<(std::ostream& os, const Employee& employee);
};

#endif