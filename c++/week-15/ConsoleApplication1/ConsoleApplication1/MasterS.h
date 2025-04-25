#pragma once
#include "Student.h"
class MasterS : public Student
{
public:
    MasterS();
    MasterS(std::string name, long long id, int pass);
    void display() const;
};
