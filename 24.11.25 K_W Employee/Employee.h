#pragma once
#include<iostream>
class Employee
{
	std::string name;
	unsigned short age;
	float salary;
public:
	Employee() = default;
	Employee(std::string , unsigned short , float );
	friend std::ostream& operator<< (std::ostream&, const Employee&);
};

