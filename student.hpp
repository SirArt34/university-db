#pragma once
#include <string>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <fstream>



class Student{

    private: 
    std::string name_;
    std::string surname_;
    std::string address_;
    unsigned indexNumber_;
    std::string pesel_;
    std::string gender_;

    public : 
    Student();
    Student(const std::string & name, const std::string& surname, const std::string address, unsigned index, const std::string & pesel, const std::string gender);
    
    void set_name(const std::string &name) { name_ = name; }
    void setSurname(const std::string& surname) { surname_ = surname; }
    void setAddress(const std::string& address) { address_ = address; }
    void setIndex(unsigned indexnumber) { indexNumber_ = indexnumber;}
    void setPesel(const std::string& pesel) 
    { 
        
        std::string peseltest = pesel;
        std::cout<<"peseltest = " <<peseltest<<"\n";
        bool validation = false;
        while(!validation)
        {
           if(peseltest.length() == 11)
           {
            int sum = 0;
            int p;
            std::string a = "";
            for (size_t i = 0; i < (peseltest.length()-1); i++)
               {
                a = peseltest[i];
                p = std::stoi(a);
                if(i == 0 || i == 4 || i == 8) {sum = sum + p;}
                if(i == 1 || i == 5 || i == 9) {sum = sum + p* 3;}
                if(i == 2 || i == 6 ){sum = sum + p * 7;}
                if(i == 3 || i == 7) {sum = sum + p * 9;}
               }
                            
            sum = sum % 10;
            sum = 10 - sum;
            a = peseltest[10];
            p = std::stoi(a);
            if (sum == p)
                {
                    validation = true;
                    pesel_ = peseltest; 
                }
            else
                { 
                std::cout<<"nie poprawny pesel podaj ponownie: ";
                std::cin>>peseltest;
                }
            
           }
           else
           {
            std::cout<<"please provide pesel with 11 digit ! \n";
            std::cin>>peseltest;
           }
        }        
    }
    void setGender(const std::string& gender) { gender_ = gender; }

    std::string getName() const { return name_; }
    std::string getSurname() const {return surname_;}
    std::string getAddress() const {return address_;}
    unsigned getIndex() const {return indexNumber_;}
    std::string getPesel() const {return pesel_;}
    std::string getGender() const {return gender_;}
};



void DisplayMenu();
void FillData();
void DisplayDB(std::vector<Student>& data);
void AddStudent();
void SearchByName(std::vector<Student>& data);
void SearchByPesel(std::vector<Student>& data);
void SortByPesel(std::vector<Student> & a );
void SortBySurName(std::vector<Student> & a );
void EraseByIndeNumber(std::vector<Student> & data);
void SaveToFile(std::vector<Student>& data);
void ExitProgram();

extern char choice;
extern std::vector<Student> vectorOfStudent;