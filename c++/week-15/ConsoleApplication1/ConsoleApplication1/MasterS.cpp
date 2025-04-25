#include "MasterS.h"
#include <string>
#include <iostream>
void MasterS::display() const
{
    std::cout << "Name is : " << name << std::endl;
    std::cout << "studentId is : " << studentID << std::endl;
    std::cout << "unit pass : " << Pass << std::endl;
}
MasterS::MasterS() : Student() {}
MasterS::MasterS(std::string name, long long id, int pass) : Student(name, id, pass) {}
