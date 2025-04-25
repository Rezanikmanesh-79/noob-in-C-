#include <iostream>
int fact(int x);
using namespace std;
int main()
{
	int p;
	cout << "give me numb : ";
	cin >> p;
	cout << "Fact  " << p<<" is :" << fact(p);
}
int fact(int x)
{
	int y=1;
	if (x==0)
	{
		return 1;
	}
	for (int i = 1; i <= x; i++)
	{
		y *= i;
	}
	return y;
}