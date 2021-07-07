

#include "student.hpp"
#include <iostream>
#include <list>
#include <algorithm>
#include <iostream>
#include <fstream>

Student::Student()
{
    name_ = "";
    surname_="";
    address_ = "";
    indexNumber_= 0;
    pesel_="";
    gender_="";
}

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

std::vector<Student> vectorOfStudent;


void displayDB(std::vector<Student>& data)
{
    if (data.size() == 0 )
    {
        std::cout<<"no data to display\n";
    }
   size_t i = 0;
  for(auto & val : data)
  {
      std::cout<<++i<<". ";
      std::cout<<val.getName()<<" ";
      std::cout<<val.getSurname()<<" ";
      std::cout<<val.getAddress()<<" ";
      std::cout<<val.getIndex()<<" ";
      std::cout<<val.getPesel()<<" ";
      std::cout<<val.getGender()<<"\n";
  }
}
void addStudent()
{
    std::string temp = "";
    unsigned temp2 ;
    Student st;
    std::cout<<"Please provide name ";
    std::cin>>temp;
    st.set_name(temp);
    std::cout<<"Please provide surname ";
    std::cin>>temp;
    st.setSurname(temp);
    std::cout<<"Please provide gender Male/Female ";
    std::cin>>temp;
    st.setGender(temp);
    std::cout<<"Please provide address ";
    std::cin>>temp;
    st.setAddress(temp);
    std::cout<<"Please provide index number ";
    std::cin>>temp2;
     st.setIndex(temp2);
     std::cout<<"Please provide pesel ";
     std::cin>>temp;
     st.setPesel(temp);
    // vectorOfStudent.push_back(st);
}

void SearchByName(std::vector<Student>& data)
{
    std::string temp = "";
    auto counter = 0;
    std::vector<Student> vec {};
    std::cout<<"Podaj nazwisko jakie chcesz wyszukac : ";
    std::cin>>temp;
    
    for(auto & val : data)
    {
        if (temp == val.getSurname())
        {
            counter++;
            vec.push_back(val);
        }       
    }
    std::cout<<"Znaleziono "<<counter<<" rekordow";
     for(auto & val : vec)
  {
      std::cout<<val.getName()<<" ";
      std::cout<<val.getSurname()<<" ";
      std::cout<<val.getAddress()<<" ";
      std::cout<<val.getIndex()<<" ";
      std::cout<<val.getPesel()<<" ";
      std::cout<<val.getGender()<<"\n";
  }
}

void SearchByPesel(std::vector<Student>& data)
{
    std::string temp = "";
    auto counter = 0;
    std::vector<Student> vec {};
    std::cout<<"Podaj pesel jakie chcesz wyszukac : ";
    std::cin>>temp;
    
    for(auto & val : data)
    {
        if (temp == val.getPesel())
        {
            counter++;
            vec.push_back(val);
        }       
    }
    std::cout<<"Znaleziono "<<counter<<" rekordow";

    for(auto & val : vec)
    {
        std::cout<<val.getName()<<" ";
        std::cout<<val.getSurname()<<" ";
        std::cout<<val.getAddress()<<" ";
        std::cout<<val.getIndex()<<" ";
        std::cout<<val.getPesel()<<" ";
        std::cout<<val.getGender()<<"\n";
    }
}
void SortByPesel(std::vector<Student> & a )
{
    std::sort(a.begin(), a.end(), [] (auto &st1, auto &st2) {
    return st1.getPesel() < st2.getPesel();});
}
void SortBySurName(std::vector<Student> & a )
{
    std::sort(a.begin(), a.end(), [] (auto &st1, auto &st2) {
    return st1.getSurname() < st2.getSurname();});
}

void EraseByIndeNumber(std::vector<Student> & data)
{
    unsigned temp ;
    std::cout<<"Podaj index ktory ma zostac usuniety : \n";
    std::cin>>temp;
    
auto new_end = std::remove_if(data.begin(), data.end(),
                              [&temp](const Student& st)
                              { return st.getIndex() == temp; });

data.erase(new_end, data.end());    
 
}

void SaveToFile(std::vector<Student>& data)
{
  
  // Create and open a text file
  std::ofstream MyFile("filename.txt");
  // Write to the file
 MyFile <<"Name\tSurname\tAddress\tIndex\tPesel\tGender\n";
   for(auto & val : data)
    {
        MyFile << val.getName()<<" ";
        MyFile << val.getSurname()<<" ";
        MyFile << val.getAddress()<<" ";
        MyFile << val.getIndex()<<" ";
        MyFile << val.getPesel()<<" ";
        MyFile << val.getGender()<<"\n";
    }
    std::cout<<"File saved successfully!\n";
  MyFile.close();

}