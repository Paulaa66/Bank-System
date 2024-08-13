// Created by Paula on 8/12/2024.
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string nameofperson;
    string passwordofperson;
    int idofperson;
public:
    Person(){
        idofperson = 0;
    }
    Person(string name,int id,string password){
        this->nameofperson = name;
        this->idofperson = id;
        this->passwordofperson = pw;
    }
    void setName(string name){
        this->nameofperson = name;
    }
    void setId(int id){
        this->idofperson = id;
    }
    void setPw(string password){
        this->passwordofperson = pw;
    }
    string getName(){
        return nameofperson;
    }
    int getId(){
        return idofperson;
    }
    string getPw(){
        return passwordofperson;
    }
    virtual void Display() = 0;
};


