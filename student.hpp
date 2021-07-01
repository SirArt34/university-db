#pragma once
#include <string>
#include <vector>

void DisplayMenu();

class Student{

    private: 
    const std::string name_;
    const std::string surname_;
    const std::string address_;
    unsigned indexNumber_;
    const std::string pesel_;
    const std::string gender_;

    public : 
    
    Student(const std::string & name, const std::string& surname, const std::string address, unsigned index, const std::string & pesel, const std::string gender) ;

    std::string getName() const {return name_;}
};

extern std::vector<Student> vectorOfStudent;

void displayBase(std::vector<Student> vec);