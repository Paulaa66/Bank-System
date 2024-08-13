#include <iostream>
#include <string>
#include <cctype> // for isalpha, islower, isupper
#include <algorithm> // for any_of
using namespace std;

// Define the Employee class
class Employee {
private:
    int id;               // Employee ID
    string name;          // Employee name
    string password;      // Employee password
    double balance;       // Employee balance

public:
    // Default Constructor (Non-Parameterized)
    // This constructor initializes the member variables with default values
    Employee() {
        id = 0;
        name = "Unnamed";
        password = "NoPassword";
        balance =0;

    }

    // Parameterized Constructor
    // This constructor initializes the member variables with user-provided values
    Employee(int id, string n, string pwd, double bal) {
        this->id=id;
        this->name=n;
        this->password=pwd;
        this->balance=bal;

    }


    // Setter for name
    // This function validates and sets the employee's name
    void setName(string n) {
        // Check if the name length is between 5 and 20 characters
        if (n.length() < 5 || n.length() > 20) {
            cout << "Warning: Name must be between 5 and 20 characters.\n";
        }
        // Check if the name contains only alphabetic characters
        bool isAlphabetic = all_of(n.begin(), n.end(), [](char c) { return isalpha(c); });
        if (!isAlphabetic) {
            cout << "Warning: Name must contain only alphabetic characters.\n";
        }
        // If both conditions are met, set the name
        if (isAlphabetic && n.length() >= 5 && n.length() <= 20) {
            name = n;
        } else {
            cout << "Name is invalid\n";
        }
    }

    // Setter for password
    // This function validates and sets the employee's password
    void setPassword(string pwd) {
        // Check if the password length is between 8 and 20 characters
        if (pwd.length() < 8 || pwd.length() > 20) {
            cout << "Warning: Password must be between 8 and 20 characters.\n";
        }

        // Check if the password contains at least one uppercase letter, one lowercase letter, and one special character
        bool hasUpper = any_of(pwd.begin(), pwd.end(), [](char c) { return isupper(c); });
        bool hasLower = any_of(pwd.begin(), pwd.end(), [](char c) { return islower(c); });
        bool hasSpecial = any_of(pwd.begin(), pwd.end(), [](char c) { return ispunct(c); });

        if (!hasUpper || !hasLower || !hasSpecial) {
            cout << "Warning: Password must contain at least one uppercase letter, one lowercase letter, and one special character.\n";
            return;
        }

        // If all conditions are met, set the password
        else{
        this->password = pwd;
    }

    // Setter for balance
    // This function sets the employee's balance with a minimum check
    void setBalance(double bal) {
        // Ensure the balance is not below 5000
        if (bal < 5000) {
            cout << "Warning: Balance must be at least 5000.\n";
        }
        else {
            this->balance = bal;

        }
    }

    // Setter for ID
    // This function sets the employee's ID
    void setId(int i) {
        this->id = i;
    }

    // Getter for ID
    // Returns the employee's ID
    int getId(){
        return id;
    }

    // Getter for name
    // Returns the employee's name
    string getName(){
        return name;
    }

    // Getter for password
    // Returns the employee's password
    string getPassword(){
        return password;
    }

    // Getter for balance
    // Returns the employee's balance
    double getBalance(){
        return balance;
    }

    // Display function
    // This function displays the employee's details
    void display() const {
        cout << "Employee ID: " << id << "\n";
        cout << "Name: " << name << "\n";
        cout << "Balance: " << balance << "\n";
        cout<<"\n=======================================\n";
    }
};

int main() {
    // Create an Employee object using the default constructor
    Employee emp1;
    emp1.display();  // Display the employee's details
     cout<<"\n=======================================\n";
    // Create an Employee object using the parameterized constructor
    Employee emp2(2, "JaneDoe", "Secure@123", 7000);
    emp2.display();  // Display the employee's details
   cout<<"\n=======================================\n";
    // Testing invalid inputs
    emp2.setName("Jo");  // Attempt to set an invalid name (too short)
    emp2.setName("JaneDoe123");  // Attempt to set an invalid name (contains digits)
    emp2.setPassword("pass");  // Attempt to set an invalid password (too short)
    emp2.setPassword("password");  // Attempt to set an invalid password (no uppercase, special character)
    emp2.setBalance(4000);  // Attempt to set an invalid balance (less than 5000)
}
