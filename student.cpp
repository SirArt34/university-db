

#include "student.hpp"
#include <iostream>

std::vector<Student> vectorOfStudent {};

Student::Student(const std::string & name, const std::string& surname, const std::string address, unsigned index, const std::string & pesel, const std::string gender) : name_(name), surname_(surname), address_(address), indexNumber_(index), pesel_(pesel), gender_(gender) {}

void DisplayMenu()
{
    std::cout<<"0. Wyswietl Baze\n";
    std::cout<<"1. Dodaj nowego studenta\n";
    std::cout<<"2. wyszukaj po nazwisku \n";
    std::cout<<"3. wyszukaj po numerze pesel\n";
    std::cout<<"4. sortowanie po numerze pesel\n";
    std::cout<<"5. sortowanie po nazwisku \n";
    std::cout<<"6. usuwanie po numerze \n";
}

