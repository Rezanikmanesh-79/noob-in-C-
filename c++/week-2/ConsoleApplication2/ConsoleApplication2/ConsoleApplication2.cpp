#include <iostream>
#include <string>
using namespace std;
int main()

{
    int sall_miladi, sall_shamsi, a;

    do
    {
        do
        {
            cout << "sall tavalod khod ra  be miladi vared kooned : \n";
            cin >> sall_miladi;
        } while (!(1923 <= sall_miladi && sall_miladi <= 2022));
        do
        {
            cout << "sall tavalod khod ra  be shamsi vared kooned : \n";
            cin >> sall_shamsi;
        } while (!(1300 <= sall_shamsi && sall_shamsi <= 1400));
        a = (sall_miladi - sall_shamsi) == (621) || (sall_miladi - sall_shamsi) == (622);
        if (a==1)
        {
            cout << "motabar ast";
        }
        else
        {
            cout << "try agen\n";
        }
    } while (!a);
    cout << a;
}

