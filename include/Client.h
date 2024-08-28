#include<iostream>
#include<string>
#include "Person.h"
#include "Validation.h"

using namespace std;

class Client : public Person {
private:
    // ================Attriputes===================
    double balance;
public:
    // ============constructors==============
    Client() {
        balance = 0;
    }

    // ==========parameterized constructor==========
    Client(string name, string password, int id, double balance) : Person(name, password, id) {
        setBalance(balance);
    }

    // ==================Setters====================
    void setBalance(double balance) {
        while (true) {
            if (Validation::validateBalance(balance)) {
                this->balance = balance;
                break;
            } else {
                cout << "Please Insert your balance again:\n";
                cin >> balance;
            }
        }
    }

    // =================Getters====================
    double getBalance() {
        return balance;
    }

    // ================Method======================
    void deposite(double amount) {
        this->balance += amount;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Can't withdraw this amount" << endl;
        } else
            this->balance -= amount;
    }

    void transferto(double amount, Client &c) {
        if (amount <= balance) {
            balance -= amount;
            c.deposite(amount);
        } else
            cout << "Can't withdraw this amount" << endl;
    }

    void checkBalance() {
        cout << "Your Balance is = " << balance << endl;
    }

    void Display() {
        cout << "Name     : " << name << endl;
        cout << "Id       : " << id << endl;
        cout << "Password : " << password << endl;
        cout << "Balance  : " << balance << endl;
    }

};


