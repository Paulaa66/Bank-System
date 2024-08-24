#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Employee : public Person {
protected:
    // ================Attriputes===================
    double salary;
public:
    // ============constructors==============
    Employee() {
        salary = 0;
    }
    // ==========parameterized constructor==========
    Employee(int id, string name, string password, double salary) : Person(name, password, id) {
        this->salary = salary;
    }

    // ==================Setters====================
    void setSalary()
     {
        while(true)
        {
            cout << "Please Enter Your Salary :";
            double salary;
            cin >> salary;
            if (salary >= 5000) {
                this->salary = salary;
            break;
            }
            else {
                cout << "Salary must be more than 5000 to added\n";
            }
        }
    }
    // =================Getters====================
    double getSalary() {
        return salary;
    }
    // ================Method======================
    void Display(){
        cout << "Name     : " << name << endl;
        cout << "Id       : " << id << endl;
        cout << "Password : " << password << endl;
        cout << "Salary  : " << salary << endl;
    }
    };
