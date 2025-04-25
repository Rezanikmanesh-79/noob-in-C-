#include <iostream>
#include "student.h"
using namespace std;
int main()
{
	student student1;

	student1.setname("jhoni sins");
	student1.setstudentid(666);
	student1.setscore(20);


	std::cout << "student 1 details:" << std::endl;
	student1.display();

	student student2("Alexis Texas", 999, 19);

	std::cout << "student2 details :" << endl;
	student2.display();
	return 0;
}