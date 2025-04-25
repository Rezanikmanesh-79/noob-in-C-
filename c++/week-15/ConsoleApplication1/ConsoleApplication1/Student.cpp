#include "Student.h"
#include <iostream>
Student::Student() : name(""), studentID(0), Pass(0) {}
Student::Student(std::string name, long long id, int pass) : name(name), studentID(id), Pass(pass) {}
