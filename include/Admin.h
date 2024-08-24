#ifndef ADMIN_H
#define ADMIN_H
#include <iostream>
#include <string>
#include "Person.h"
#include "Employee.h"
using namespace std;

class Admin : public Employee
{
public:
	// ============constructors==============
	Admin(int id, string name, string password, double salary) : Employee(id,name,password,salary) {
	}
	// ================Method======================
	void Display() {
		Employee::Display();
	}
};

#endif // ADMIN_H
