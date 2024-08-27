#include <iostream>
#include <string>
#include <cctype> // for isalpha, islower, isupper
#include <algorithm> // for any_of
#include "Person.h"
#include "Client.h"
#include "Employee.h"
using namespace std;

int Person::id = 999;

int main()
{
    Employee e;
    e.setName();
    e.setPassword();
    e.setSalary();
    e.Display();

}
