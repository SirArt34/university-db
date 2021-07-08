

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
    std::cout<<"0. Display Base\n";
    std::cout<<"1. Add new student\n";
    std::cout<<"2. Search by surname \n";
    std::cout<<"3. Search by PESEL number\n";
    std::cout<<"4. Sort by PESEL\n";
    std::cout<<"5. Sort by surname \n";
    std::cout<<"6. Remove by Index number \n";
    std::cout<<"7. Save to file\n";
    std::cout<<"Enter n/N to end program\n";

    while (std::cin>>choice || (choice == 'N' || choice == 'n'))
    {
        switch (choice)
        {
            case '0':
                DisplayDB(vectorOfStudent);
            break;
            case '1':
                AddStudent();
                DisplayDB(vectorOfStudent);
            break;
            case '2':
                SearchByName(vectorOfStudent);
            break;
            case '3':
                SearchByPesel(vectorOfStudent);
            break;
            case '4':
                SortByPesel(vectorOfStudent);
            break;
            case '5':
                SortBySurName(vectorOfStudent);
            break;
            case '6': 
                EraseByIndeNumber(vectorOfStudent);
                DisplayDB(vectorOfStudent);
            break;
            case '7':
            SaveToFile(vectorOfStudent);
            break;
            case 'N':
            case 'n':
            ExitProgram();
            break;
            default:
            std::cout<<"wrong number, input again\n";
            break;
        }
        std::cout<<"\n";
        DisplayMenu();
    }
}

void DisplayDB(std::vector<Student>& data)
{
    if (data.size() == 0)
    {
        std::cout<<"no data to display\n";
    }
    size_t i = 0;
    for(auto & val : data)
    {
        std::cout<<++i<<". ";
        std::cout<<val.getName()<<"\t";
        std::cout<<val.getSurname()<<"\t";
        std::cout<<val.getAddress()<<"\t";
        std::cout<<val.getIndex()<<"\t";
        std::cout<<val.getPesel()<<"\t";
        std::cout<<val.getGender()<<"\t\n";
    }
}
void AddStudent()
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
    std::cout<<"Please provide address (city) ";
    std::cin>>temp;
    st.setAddress(temp);
    std::cout<<"Please provide index number ";
    std::cin>>temp2;
    st.setIndex(temp2);
    std::cout<<"Please provide pesel ";
    std::cin>>temp;
    st.setPesel(temp);
    vectorOfStudent.push_back(st);
    std::cout<<"Added successfully!\n\n";
}

void SearchByName(std::vector<Student>& data)
{
    std::string temp = "";
    auto counter = 0;
    std::vector<Student> vec {};
    std::cout<<"Please provide surname which you want to search : ";
    std::cin>>temp;
    
    for(auto & val : data)
    {
        if (temp == val.getSurname())
        {
            counter++;
            vec.push_back(val);
        }       
    }
    if (counter == 1){std::cout<<"Found "<<counter<<" record.\n";}
    else{std::cout<<"Found "<<counter<<" records.\n";}
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
    std::cout<<"Provide PESEL which you want to search  : ";
    std::cin>>temp;
    
    for(auto & val : data)
    {
        if (temp == val.getPesel())
        {
            counter++;
            vec.push_back(val);
        }       
    }
    if (counter == 1){std::cout<<"Found "<<counter<<" record.\n";}
    else{std::cout<<"Found "<<counter<<" records.\n";}

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
    for(auto & val : a)
    {
      std::cout<<val.getName()<<" ";
      std::cout<<val.getSurname()<<" ";
      std::cout<<val.getAddress()<<" ";
      std::cout<<val.getIndex()<<" ";
      std::cout<<val.getPesel()<<" ";
      std::cout<<val.getGender()<<"\n";
    }
}
void SortBySurName(std::vector<Student> & a )
{
    std::sort(a.begin(), a.end(), [] (auto &st1, auto &st2) {
    return st1.getSurname() < st2.getSurname();});

    for(auto & val : a)
    {
        std::cout<<val.getName()<<" ";
        std::cout<<val.getSurname()<<" ";
        std::cout<<val.getAddress()<<" ";
        std::cout<<val.getIndex()<<" ";
        std::cout<<val.getPesel()<<" ";
        std::cout<<val.getGender()<<"\n";
    }
}

void EraseByIndeNumber(std::vector<Student> & data)
{

    unsigned temp ;
    std::cout<<"Provide which Index you want to remove : \n";
    std::cin>>temp;

    for(auto & val : data)
    {
        if (!temp == val.getIndex())
        {
            std::cout<<"index does not exist.\n";
        }
        else
        {
             auto new_end = std::remove_if(data.begin(), data.end(),
                                [&temp](const Student& st)
                                { return st.getIndex() == temp; });

            data.erase(new_end, data.end());    
            std::cout<<"index removed ! \n";
        }
    }
   

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
    std::cout<<"File saved successfully! In you folder with program files called filename.txt!\n";
  MyFile.close();

}
void ExitProgram(){
    std::cout<<"End of program, Goodbye ! \n";
    exit(0);
}

char choice;
std::vector<Student> vectorOfStudent {};