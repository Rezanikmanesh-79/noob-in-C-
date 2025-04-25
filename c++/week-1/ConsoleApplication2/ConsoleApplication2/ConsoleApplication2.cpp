#include <iostream>
#include<string>
using namespace std;
int main()
{
    int x, y;
    string a, b;
    cout << "give me your full name : ";
    cin >> a >> b;    

    x = size(a);
    y = size(b);
   
    cout << "hello " << char(toupper(a[(x-1)])) << "." << char(toupper(b[(y-1)])) << " wellcom to c++ consol program";
}

