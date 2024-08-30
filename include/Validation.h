#include <iostream>
#include <string>

using namespace std;
#ifndef BANK_SYSTEM_VALIDATION_H
#define BANK_SYSTEM_VALIDATION_H

class Validation {
public:
    static bool validateName(string name) {
        if (name.size() < 5 || name.size() > 20) {
            cout << "Warning: The Length of the Name must be between 5 and 20 letters\n";
            return false;
        }
        for (int i = 0; i < name.size(); i++) {
            if (!(name[i] >= 'a' && name[i] <= 'z' || name[i] >= 'A' && name[i] <= 'Z')) {
                cout << "Warning: Name must contain only alphabetic characters.\n";
                return false;
            }
        }
        return true;
    }
//========================================================================================

    static bool validatePassword(string password) {
        if (password.size() < 8 || password.size() > 20) {
            cout << "Warning: Password must be between 8 and 20 characters.\n";
            return false;
        } else {
            return true;
        }
    }

    //========================================================================================
    static bool validateBalance(double balance) {
        if (balance >= 1500) {
            return true;
        } else {
            cout << "Warning: Balance must be more than 5000 to added\n";
            return false;
        }
    }

    //========================================================================================
    static bool validateSalary(double salary) {
        if (salary >= 5000) {
            return true;
        } else {
            cout << "Warning: Balance must be more than 5000 to added\n";
            return false;
        }
    }

};


#endif //BANK_SYSTEM_VALIDATION_H
