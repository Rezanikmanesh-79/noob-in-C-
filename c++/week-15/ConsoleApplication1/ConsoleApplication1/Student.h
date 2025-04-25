#pragma once
#include <string>
class Student
{
protected:
    std::string name;
    long long studentID;
    int Pass;
public:
    Student();
    Student(std::string name, long long id, int pass);
    void display() const;
};
