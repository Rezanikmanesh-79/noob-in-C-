#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	float wight, height,bmi ,x ;
	cout << "pls enter your wight :";
	cin >> wight;
	cout << "pls enter your height :";
	cin >> height;
	//x = ;
	bmi = (wight / pow(height, 2));
	cout<<"bmi :" << bmi << "\n";
	if (bmi<18)
	{
		cout << "kambod vazn";
	}
	else if (bmi >=18 && bmi<=25)
		{
			cout << "perfect !!";
		}
			
	else if (bmi>=26)
	{
		cout << "ezafe vazn ";
	}
	else
	{
		cout << "Error";
	}
	
		
	

}

