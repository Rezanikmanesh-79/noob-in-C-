#include <iostream>
using namespace std;
int main()
{  
    int a, b, c;
    int d=0;
    while (d <= 75)
    {
        cout << "give me your first score:  ";
        cin >> a;
        cout << "give me oyur second score: ";
        cin >> b;
        cout << "give me oyur third score: ";
        cin >> c;
        d = (a + b + c) / 3;
        if (d <= 75)
        {
            cout << "you are faild ! \n try again \n";

        }
        if (d  >= 75)
        {
            cout << "you are passed ! ";
        }
    }
   }


