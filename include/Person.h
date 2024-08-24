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
        id = 0;
    }
    // ==========parameterized constructor==========
    Person(string name, string password, int id) {
        this->name = name;
        this->password = password;
        this->id = id;
    }
    // ==================Setters====================
    void setName(string name) {
        bool hasDigit = false;
        for (char c : name) {
            if (isdigit(c)) {
                hasDigit = true;
                break;
            }
        }
        if (hasDigit) {
            cout << "Warning: Name must contain only alphabetic characters.\n";
        }
        else {
            // Check if the name length is between 5 and 20 characters
            if (name.length() < 5 || name.length() > 20) {
                cout << "Warning: Name must be between 5 and 20 characters.\n";
            }
            else {
                this->name = name;
            }
        }
    }
    void setPassword(string password) {
            // Check if the password length is between 8 and 20 characters
            if (password.length() < 8 || password.length() > 20) {
                cout << "Warning: Password must be between 8 and 20 characters.\n";
            }

            // Check if the password contains at least one uppercase letter, one lowercase letter, and one special character
            bool hasUpper = any_of(password.begin(), password.end(), [](char c) { return isupper(c); });
            bool hasLower = any_of(password.begin(), password.end(), [](char c) { return islower(c); });
            bool hasSpecial = any_of(password.begin(), password.end(), [](char c) { return ispunct(c); });

            if (!hasUpper || !hasLower || !hasSpecial) {
                cout << "Warning: Password must contain at least one uppercase letter, one lowercase letter, and one special character.\n";
                return;
            }
            // If all conditions are met, set the password
            else {
                this->password = password;
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
