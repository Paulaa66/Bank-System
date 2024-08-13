// Created by Paula on 8/12/2024.
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    // ================Attriputes===================
    string name,password;
    int id;
public:
    // ============constructors==============
    Person(){
        id = 0;
    }
    Person(string name,string password , int id){
        this->name = name;
        this->password = password;
        this->id = id;
    }
    // ==================Setters====================
    void setName(string name){
        this->name = name;
    }
    void setPassword(string password){
        this->password = password;
    }
    void setId(int id){
        this->id = id;
    }
    // =================Getters====================
    string getName(){
        return name;
    }
    string getPassword(){
        return password;
    }
    int getId(){
        return id;
    }
    // ================Method======================
    virtual void Display() = 0;
};


