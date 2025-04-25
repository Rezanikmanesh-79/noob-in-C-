#include <iostream>
#include<string>
using namespace std;
int main()
{
    string a, b;
    cout << "give me your full name : ";
    cin >> a>>b;
    /*cout << "give me your last name : ";
    cin >> b;*/
    cout << "hello " << char(toupper(a[0])) << "." << char(toupper(b[0])) << " wellcom to c++ consol program";
}

