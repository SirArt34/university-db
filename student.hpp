#pragma once
#include <string>



class Student{

    private: 
    const std::string name_;
    std::string surName_;
    std::string address_;
    unsigned indexNumber_;
    std::string pesel_;
    std::string gender_;

    public :
    
    Student(const std::string& name, std::string& surName,std::string& address,unsigned indexNumber,std::string& pesel, std::string& gender)
    : name_(name)
    , surName_(surName)
    , address_(address)
    , indexNumber_(indexNumber)
    , pesel_(pesel)
    , gender_(gender) {} 

    std::string getName() const {return name_;}
};