#include <iostream>
using namespace std;
class MyClass
{
private:
	string student;
	int student_id;
public:
	int get_id()
	{

		return student_id;
	}
	void set_id(int x)
	{
		student_id = x;
	}


};

int main()
{
	MyClass myobj;
	myobj.set_id(312312);
	cout << myobj.get_id();
			
}
