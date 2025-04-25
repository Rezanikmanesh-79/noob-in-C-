#include <iostream>
#include <string>
#pragma once
class student {
private :
	std::string name;
	int studentid;
	int score;
public:
	student();
	student(std::string n, int id, int s);
	void setname(std::string n);
	std::string getName();
	void setstudentid(int id);
	int getstudentid();
	void setscore(int s);
	int getGrade();
	void display();
};