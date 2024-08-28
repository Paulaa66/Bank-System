#include <iostream>
#include <string>
#include <cctype> // for isalpha, islower, isupper
#include <algorithm> // for any_of
#include "Person.h"
#include "Client.h"
#include "Employee.h"
#include "Validation.h"

using namespace std;

int main() {
    Employee e;
    e.setName("Paulaa");
    e.setPassword("Batman53562321");
    e.setId(50);
    e.setSalary(6000);
    e.Display();
}
