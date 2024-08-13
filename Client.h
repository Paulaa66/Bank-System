//Created by Ahmed on 13/8/2024.
#include <iostream>
#include <string>
#include "person.h"
using namespace std;

class Client : public person
{
private :
    double balanceofclient;
public :
    Client()
    {
        this->balanceofclient = 0.0;
    }
    Client(string name , string password , int id , double balance) : person(name , password , id)
    {
        this->balance;
    }
    void setBalanceofclient (double balance)
    {
        if (balance >= 1500)
        {
            this->balanceofclient = balance;
        }
    }
};
