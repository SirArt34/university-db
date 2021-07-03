#pragma once
#include <string>
#include <vector>
#include <iostream>

void DisplayMenu();

class Student{

    private: 
    std::string name_;
    std::string surname_;
    std::string address_;
    unsigned indexNumber_;
    std::string pesel_;
    std::string gender_;

    public : 
    Student(const std::string & name, const std::string& surname, const std::string address, unsigned index, const std::string & pesel, const std::string gender);// : name_(name), surname_(surname), address_(address), indexNumber_(index), pesel_(pesel), gender_(gender) {}

    //settery
    void setName( std::string& name)  { name_ = name; }
    void setSurname( std::string& surname) { surname_ = surname; }
    void setAddress( std::string& address) { address_ = address; }
    void setIndex(unsigned indexnumber) { indexNumber_ = indexnumber;}
    void setPesel( std::string& pesel) { pesel_ = pesel; }
    void setGender( std::string& gender) { gender_ = gender; }
     
    // //gettery
    std::string getName() const { return name_; }
    std::string getSurname() const {return surname_;}
    std::string getAddress() const {return address_;}
    unsigned getIndex() const {return indexNumber_;}
    std::string getPesel() const {return pesel_;}
    std::string getGender() const {return gender_;}
};

