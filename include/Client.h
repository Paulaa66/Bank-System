#include<iostream>
#include<string>
#include "Person.h"
using namespace std;

class Client : public Person {
private:
    //attributes:
    double balance;
public:
    //constructor:
    Client() {
        balance = 0;
    }
    Client(string name, string password, int id, double balance) : Person(name, password, id) {
        this->balance = balance;
    }
    //setters:
    void setBalance(double balance) {
        if (balance >= 1500) {
            this->balance = balance;
        }
        else {
            cout << "balance must be more than 1500 to added\n";
        }
    }
    void setName(string name) {
        if (name.length() >= 6 && name.length() <= 20) {
            this->name = name;
        }
        else {
            cout << "name must be more than 6 letters and less than 20 letters\n";
        }
    }

    //getters:
    double getBalance() {
        return this->balance;
    }

    //methods:
    void Display() {
        cout << "name     : " << name << endl;
        cout << "id       : " << id << endl;
        cout << "password : " << password << endl;
        cout << "balance  : " << balance << endl;
    }
    void deposite(double amount) {
        this->balance += amount;
    }
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "can not withdraw this amount" << endl;
        }
        else
            this->balance -= amount;
    }
    void transferto(double amount, Client c) {
        if (amount <= balance) {
            c.deposite(amount);
        }
        else
            cout << "can not withdraw this amount" << endl;
    }

};


