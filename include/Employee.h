#include <iostream>
#include <string>
#include "Person.h"
#include "Validation.h"

using namespace std;

class Employee : public Person {
protected:
    // ================Attriputes===================
    double salary{};
public:
    // ============constructors==============
    Employee() {
        salary = 0;
    }

    // ==========parameterized constructor==========
    Employee(int id, string name, string password, double salary) : Person(name, password, id) {
        setSalary(salary);
    }

    // ==================Setters====================
    void setSalary(double salary) {
        while (true) {
            if (Validation::validateSalary(salary)) {
                this->salary = salary;
                break;
            } else {
                cout << "Please Insert your Salary again:\n";
                cin >> salary;
            }
        }
    }

    // =================Getters====================
    double getSalary() {
        return salary;
    }

    // ================Method======================
    void Display() {
        cout << "Name     : " << name << endl;
        cout << "Id       : " << id << endl;
        cout << "Password : " << password << endl;
        cout << "Salary  : " << salary << endl;
    }
};
