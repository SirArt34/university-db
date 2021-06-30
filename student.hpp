#pragma once
#include <string>



class Student{

    private: 
    const std::string name_;
    const std::string surname_;
    const std::string address_;
    unsigned indexNumber_;
    const std::string pesel_;
    const std::string gender_;

    public : 
    
    Student(const std::string & name, const std::string& surname, const std::string address, unsigned index, const std::string & pesel, const std::string gender) : name_(name), surname_(surname), address_(address), indexNumber_(index), pesel_(pesel), gender_(gender) {}
    // Student(const std::string& name, std::string& surName,std::string& address,unsigned indexNumber,std::string& pesel, std::string& gender)
    // : name_(name)
    // , surName_(surName)
    // , address_(address)
    // , indexNumber_(indexNumber)
    // , pesel_(pesel)
    // , gender_(gender) {} 

    std::string getName() const {return name_;}
};