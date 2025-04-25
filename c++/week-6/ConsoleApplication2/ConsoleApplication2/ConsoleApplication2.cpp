#include <iostream>
using namespace std;
int main()
{
    string a;
    cout << "Enter your name: ";
    cin >> a;
    int z = a.length();
    for (int i = 0; i < z; i++)
    {
        if (isalpha(a[i])) 
        {
            int ascii_code = int(a[i]);
            if (ascii_code >= 97 && ascii_code <= 122) 
            {
                char bigger = char(ascii_code - ' ');
                cout << bigger;
            }
            else
            {
                cout << a[i];
            }
        }        
    }
    cout << "\n";
    return 0;
}
