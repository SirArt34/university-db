#include "student.hpp"
#include <iostream>
int main()
{

//DisplayMenu();

Student Adam("Adam", "Kowalski", "Warszawa", 12345, "99120390865", "Male");
Student Ewa("Ewa", "Nowak", "Gdansk", 12455, "98909876656", "Female");
Student Ewa2("Ewa", "Kowalski", "Gdansk", 12455, "93120390865", "Female");
vectorOfStudent.push_back(Adam);
vectorOfStudent.push_back(Ewa);
vectorOfStudent.push_back(Ewa2);

//addStudent();
displayDB(vectorOfStudent);
//SearchByName(vectorOfStudent);
//SearchByPesel(vectorOfStudent);
SortByPesel(vectorOfStudent);
std::cout<<"\n";
displayDB(vectorOfStudent);
}