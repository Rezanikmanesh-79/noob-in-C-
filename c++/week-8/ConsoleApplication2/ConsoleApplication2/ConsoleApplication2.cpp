#include <iostream>
#include<stack>
using namespace std;
int main()
{
	stack <string> ss;
	string x [5] = {"reza","mmd","ali","hossin","taha"};
	
	for (size_t i = 0; i < 5; i++)
	{
		ss.push(x[i]);
	}
	ss.pop();
	cout << ss.top();
}

