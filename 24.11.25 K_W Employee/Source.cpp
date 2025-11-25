#include<iostream>
#include<list>
#include"Employee.h"
//#include<forward_list>
int main()
{
	/*class work {
		std::list<int>li = { 5,8,3 };
		li.push_front(20);
		li.push_back(30);
		auto it = li.begin();
		advance(it, 3);
		li.insert(it, 100);
		li.erase(li.begin());
		li.remove(3);
		li.remove_if([](int el) { return el > 30; });
		for (auto it = li.begin(); it != li.end(); it++)
			std::cout << *it<<" ";
	};*/

	std::list<Employee> emp;
	emp.push_back(Employee("Ivanov",25,100000.0f));
	emp.push_front(Employee("Sidorov", 35, 200000.0f));
	emp.push_back(Employee("Kozlov", 33, 350000.0f));
	emp.push_front(Employee("Petrov", 45, 550000.0f));

	auto it = emp.begin();
	std::advance(it, 3);
	emp.insert(it, Employee("Kovalenko", 37, 55000.0f));
	emp.erase(emp.begin());
	
	for (auto it = emp.begin(); it != emp.end(); it++)
		std::cout << *it;
}