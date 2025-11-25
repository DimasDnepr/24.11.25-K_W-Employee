#include "Employee.h"
#include<iostream>
Employee::Employee(std::string n, unsigned short a, float s):name(n),age(a),salary(s){}

std::ostream& operator<<(std::ostream& os, const Employee& obj)
{
	os << "Name: " << obj.name<<" | "
		<<"Age: "<<obj.age<<" | "
		<<"Salary: "<<obj.salary<<" | \n";
	return os;
}
