#include <iostream>
#include <string>
using namespace std;
int main()
{
    string sall;
    
    cout << "sall tavalod khod ra vared kooned : ";
    cin >> sall;
    int a = stoi(sall);
    /* int x = sall[0] - '0';
    int y = sall[1] - '0';
    int z = sall[2] - '0';
    int p = sall[3] - '0';
     */    
    int sum = 0;
    for (int i = 0; i <= 3; i++)
    {
        int x = sall[i] - '0';
        sum += x;
    }
    if (a > 1923 && a < 2023)
    {
        cout << "jam sall tavalod shoma :" << sum;
    }
    else
    {
        cout << " na motabar ast\n";
    }

}

