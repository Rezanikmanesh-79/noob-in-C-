#include <iostream>
#include <string>
using namespace std;
int main()
{
    int z;
    string a;
    cin >> a;
    cout << "enter your name : ";
    z= a.length();
    for (int i=0;i<z;i++)
    {
        a[i] = toupper(a[i]);
    }
    cout << a;
}

