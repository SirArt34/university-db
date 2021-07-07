#pragma once
#include <string>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <fstream>
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
    Student();
    Student(const std::string & name, const std::string& surname, const std::string address, unsigned index, const std::string & pesel, const std::string gender);// : name_(name), surname_(surname), address_(address), indexNumber_(index), pesel_(pesel), gender_(gender) {}

    //settery
   // void setName( std::string& name)  { name_ = name; }
  
    void set_name(const std::string &name) { name_ = name; }
    void setSurname(const std::string& surname) { surname_ = surname; }
    void setAddress(const std::string& address) { address_ = address; }
    void setIndex(unsigned indexnumber) { indexNumber_ = indexnumber;}
    void setPesel(const std::string& pesel) { 
        
           if(pesel.length() == 11)
           {
               int sum = 0;
               int p;
                std::string a = "";
               for (size_t i = 0; i < (pesel.length()-1); i++)
               {
                    //int i = std::stoi(str);
                    a = pesel[i];
                    p = std::stoi(a);
                    if (i == 0 || i == 4 || i == 8)
                    {
                        sum = sum + p;
                    }
                    if (i == 1 || i == 5 || i == 9)
                    {
                       sum = sum + p* 3;
                    }
                    if (i == 2 || i == 6 )
                    {
                        sum = sum + p * 7;
                    }
                    if(i == 3 || i == 7)
                    {
                        sum = sum + p * 9;
                    }
               }
                            
              sum = sum % 10;
              sum = 10 - sum;
              a = pesel[10];
              p = std::stoi(a);
              if (sum == p)
              {
                  std::cout<<"pesel ok ";
              }
              else{ std::cout<<"nie";}
             pesel_ = pesel;

           }
        // bool validation = false;
        // while (!validation)
        // {
        //     bool validationpesellenght = false;
        //     while(!validationpesellenght)
        //     {
        //         if (pesel.length() == 11 )
        //         {
        //             validationpesellenght == true;
        //         }
        //         else{
                    
        //             std::string temporary = "";
                    
        //             while (temporary.size() != 11 )
        //             {
        //                 std::cout<<"nie zadziala , podaj pesel ponownie: ";
        //                 std::cin>>temporary;
        //             }
        //             validationpesellenght = true;
        //             pesel = temporary;
        //         }
        //         validation = true;
        //     }
        // }
        
      //  int sum = 0;
        // std::cout<<pesel;
        // sum = atoi(pesel[0]);
        // std::cout<<"sum = "<sum;


        
        
}
    void setGender(const std::string& gender) { gender_ = gender; }
     
    // //gettery
    std::string getName() const { return name_; }
    std::string getSurname() const {return surname_;}
    std::string getAddress() const {return address_;}
    unsigned getIndex() const {return indexNumber_;}
    std::string getPesel() const {return pesel_;}
    std::string getGender() const {return gender_;}
};

extern std::vector<Student> vectorOfStudent;
void displayDB(std::vector<Student>& data);
void addStudent();
void SearchByName(std::vector<Student>& data);
void SearchByPesel(std::vector<Student>& data);
void SortByPesel(std::vector<Student> & a );
void SortBySurName(std::vector<Student> & a );
void EraseByIndeNumber(std::vector<Student> & data);
void SaveToFile(std::vector<Student>& data);