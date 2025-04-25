#include "student.h"
#include <iostream>

student::student() : name (""),studentid (0),score (0){}
student::student(std::string n, int id, int s) :name(n), studentid(id), score(s) {};
void  student::setname(std::string n)
{ 
	name = n; 
}
std::string student::getName()
{ 
	return name;
}
void student::setstudentid(int id)
{
	studentid = id;
}
int student::getstudentid()
{
	return 0;
}
void student::setscore(int s)
{
	score = s;
}
int student::getGrade()
{
	return score;
}

void student::display()
{
	std::cout << "name:" << name << std::endl;
	std::cout << "Student ID:" << studentid << std::endl;
	std::cout << "score:" << score << std::endl;
}