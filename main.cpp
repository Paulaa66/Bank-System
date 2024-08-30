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
    e.setName("Plaa");
    e.setPassword("tman");
    e.setId(50);
    e.setSalary(6000);
    e.Display();
    //Hi ya gma3a 3malen eh

}
