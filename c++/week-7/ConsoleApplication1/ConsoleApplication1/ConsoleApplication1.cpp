#include <iostream>
#include <string>
using namespace std;

int valed_siucial_number(int x);

int main()
{
    int i;
    cout << "enter your sucal number : ";
    cin >> i;
    if (valed_siucial_number(i))
    {
        cout << "Valed";
    }
    
    else
    {
        cout << "Not Valid";
    }
}

int valed_siucial_number(int x) {
    if (x > 999999999 && x < 99999999999)
    {
        return true;

    }
    else
    {
        return false;
    }
}