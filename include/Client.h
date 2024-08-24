#include<iostream>
#include<string>
#include "Person.h"
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
        this->balance = balance;
    }
    // ==================Setters====================
    void setBalance(double balance) {
        if (balance >= 1500) {
            this->balance = balance;
        }
        else {
            cout << "balance must be more than 1500 to added\n";
        }
    }
    // =================Getters====================
    double getBalance() {
        return this->balance;
    }
    // ================Method======================
    void deposite(double amount) {
        this->balance += amount;
    }
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Can't withdraw this amount" << endl;
        }
        else
            this->balance -= amount;
    }
    void transferto(double amount, Client &c) {
        if (amount <= balance) {
            balance -= amount;
            c.deposite(amount);
        }
        else
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


