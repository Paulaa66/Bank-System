// Created by Paula on 8/12/2024.
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    //============Att:============
    string name,pw;
    int id;
public:
    //============Default Cosntrctors============
    Person(){
        id = 0;
    }
    //============Parametrized Cosntrctors============
    Person(string name,int id,string pw){
        this->name = name;
        this->id = id;
        this->pw = pw;
    }
    //============Setters:============
    void setName(string name){
        this->name = name;
    }
    void setId(int id){
        this->id = id;
    }
    void setPw(string pw){
        this->pw = pw;
    }
    //============Getters:============
    string getName(){
        return name;
    }
    int getId(){
        return id;
    }
    string getPw(){
        return pw;
    }
    //============Methods:============
    virtual void Display() = 0;
};


