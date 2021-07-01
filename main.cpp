#include "student.hpp"
#include <iostream>
int main()
{
Student adam("Adam","Kowalski","Warszawa", 1234, "70989089099", "Male");
Student ewa("Ewa","Nowak","Gdansk", 4567, "76451238955", "Female");
std::cout<<adam.getName();

DisplayMenu();

vectorOfStudent.push_back(adam);
vectorOfStudent.push_back(ewa);

displayBase(vectorOfStudent);


}