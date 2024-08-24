#include <iostream>
#include <string>
#include <cctype> // for isalpha, islower, isupper
#include <algorithm> // for any_of
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
        id = 999;
    }
    // ==========parameterized constructor==========
    Person(string name, string password, int id) {
        this->name = name;
        this->password = password;
        this->id = id;
    }
    // ==================Setters====================
    void setName() {
            while (true) {
            cout << "Please Enter Your Name: ";
            string name;
            cin >> name;

            bool hasDigit = false;
            for (char c : name) {
                if (isdigit(c)) {
                    hasDigit = true;
                    break;
                }
            }

            if (hasDigit) {
                cout << "Warning: Name must contain only alphabetic characters.\n";
            } else if (name.length() < 5 || name.length() > 20) {
                cout << "Warning: Name must be between 5 and 20 characters.\n";
            } else {
                this->name = name;
                break; // Exit loop if name is valid
            }
        }
    }
    void setPassword() {
              while (true) {
            cout << "Please Enter Your Password : ";
            string password;
            cin >> password;

            if (password.length() < 8 || password.length() > 20) {
                cout << "Warning: Password must be between 8 and 20 characters.\n";
                continue;
            }

            bool hasUpper = any_of(password.begin(), password.end(), [](char c) { return isupper(c); });
            bool hasLower = any_of(password.begin(), password.end(), [](char c) { return islower(c); });
            bool hasSpecial = any_of(password.begin(), password.end(), [](char c) { return ispunct(c); });

            if (!hasUpper || !hasLower || !hasSpecial) {
                cout << "Warning: Password must contain at least one uppercase letter, one lowercase letter, and one special character.\n";
            } else {
                this->password = password;
                break; // Exit loop if password is valid
            }
        }
    }

    void setId() {
        id++;
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
