#include <iostream>
#include<string>
using namespace std;
	int main()
	{
		int x;
		string user,after;
		
		cout << "What is your name: ";
		cin >> user;
		x = user.length();
		for (int i=0;i<x;i++)
		{
			if (user[i] == 'a' || user[i] == 'i' || user[i] == 'u' || user[i] == 'o' ||user[i] == 'e')
			{
				user[i] = 'z';
			}
			
		}
		cout << user;
		
	}
