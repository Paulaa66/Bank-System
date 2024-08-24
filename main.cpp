#include <iostream>
#include <string>
#include <cctype> // for isalpha, islower, isupper
#include <algorithm> // for any_of
#include "Person.h"
#include "Client.h"
#include "Employee.h"
using namespace std;

int main()
{
    Employee e;
    cout << "Please Enter Employee Name: ";
    string inputName;
    cin >> inputName;
    e.setName(inputName);
    cout << "Please Enter Employee PW: ";
    string inputPw;
    cin >> inputPw;
    e.setPassword(inputPw);
    e.setId(54646);
    int s;
    cout << "Please Enter Employee Salary: ";
    cin >> s;
    e.setSalary(s);
    e.Display();

}
