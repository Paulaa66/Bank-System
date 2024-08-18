
#include<iostream>
#include<string>
#include"Person.h"
using namespace std;

class Clint:public Person{
    //attributes:
private:
    double balance;
public:
    //constructor:
    Clint(){
        this->balance=0;
    }
    Clint(string name,string password , int id,double bal){
        this->name=name;
        this->password=password;
        this->id=id;
        this->balance=bal;
    }

    //setters:
    void setBalance(double bal){
        if(bal>=1500){
            this->balance=bal;
        }
        else
            cout"balance must be more than 1500 to added";
    }
    void setValidName(string newname){
          if(newname.length()>=6&&newname.length()<=20){
                this->name=newname;
        }
        else
            cout<<"name must be more than 6 letters and less than 20 letters";
    }

    //getters:
    double getBalance(){
        return this->balance;
    }

    //methods:
     void Display(){
        cout<<"name     : "<<name<<endl;
        cout<<"id       : "<<id<<endl;
        cout<<"balance  : "<<balance<<endl;
        cout<<"password : "<<password<<endl;
     }
     void deposite(double amount){
        this->balance+=amount;
     }
     void withdraw(double amount){
        if(amount>balance){
            cout<<"can not withdraw this amount"<<endl;
        }
        else
            this->balance-=amount;
     }
     void transferto(double amount,Clint c){
        if(amount<=balance){
            c.deposite(amount);
        }
        else
            cout<<"can not withdraw this amount"<<endl;
     }

};


