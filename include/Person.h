// Created by Paula on 8/12/2024.
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    string password;
    int id;
public:
    Person(){
        id = 0;
    }
    Person(string name,string password , int id){
        this->name = name;
        this->password = pw;
        this->id = id;
    }
    void setName(string name){
        this->name = name;
    }
    void setPassword(string password){
        this->password = pw;
    }
    void setId(int id){
        this->id = id;
    }
    string getName(){
        return name;
    }
    string getPassword(){
        return password;
    }
    int getId(){
        return id;
    }
    virtual void Display() = 0;
};


