#include <iostream>
#include <string>
#include <algorithm> // for any_of
#include "Validation.h"

#ifndef PERSON_H
#define PERSON_H
using namespace std;

class Person {
protected:
    // ================Attriputes===================
    string name, password;
    int id;
public:
    // ============constructors==============
    Person() {
        name = "No Name";
        password = "No Password";
        id = 0;
    }

    // ==========parameterized constructor==========
    Person(string name, string password, int id) {
        setName(name);
        setPassword(password);
        setId(id);
    }

    // ==================Setters====================
    void setName(string name) {
        while (true) {
            if (Validation::validateName(name)) {
                this->name = name;
                break; // Exit loop if name is valid
            } else {
                cout << "Please Insert your name again:\n";
                cin >> name;
            }
        }
    }

    void setPassword(string password) {
        while (true) {
            if (Validation::validatePassword(password)) {
                this->password = password;
                break; // Exit loop if name is valid
            } else {
                cout << "Please Insert your password again:\n";
                cin >> password;
            }
        }
    }

    void setId(int id) {
        this->id = id;
    }

    // =================Getters====================
    string getName() {
        return name;
    }

    string getPassword() {
        return password;
    }

    int getId() {
        return id;
    }

    // ================Method======================
    virtual void Display() = 0;
};

#endif // PERSON_H
