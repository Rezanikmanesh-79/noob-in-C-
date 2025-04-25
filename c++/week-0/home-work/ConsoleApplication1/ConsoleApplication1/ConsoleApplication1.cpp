#include <iostream>
using namespace std;

int main()
{
    cout <<
        "                                                                                                                     \n"
        " d8888b. d88888b d88888D  .d8b.       d8b   db d888888b db   dD .88b  d88.  .d8b.  d8b   db d88888b .d8888. db   db \n"
        " 88  `8D 88'     YP  d8' d8' `8b      888o  88   `88'   88 ,8P' 88'YbdP`88 d8' `8b 888o  88 88'     88'  YP 88   88 \n"
        " 88oobY' 88ooooo    d8'  88ooo88      88V8o 88    88    88,8P   88  88  88 88ooo88 88V8o 88 88ooooo `8bo.   88ooo88 \n"
        " 88`8b   88~~~~~   d8'   88~~~88      88 V8o88    88    88`8b   88  88  88 88~~~88 88 V8o88 88~~~~~   `Y8b. 88~~~88 \n"
        " 88 `88. 88.      d8' db 88   88      88  V888   .88.   88 `88. 88  88  88 88   88 88  V888 88.     db   8D 88   88 \n"
        " 88   YD Y88888P d88888P YP   YP      VP   V8P Y888888P YP   YD YP  YP  YP YP   YP VP   V8P Y88888P `8888Y' YP   YP \n";
    int sall_tavalod;
    string userName;
    cout << "pleas enter your name : ";
    cin >> userName ;
    sall_tavalod = 0;
    do
    {
        cout << "sall tavalod shoma :";
        cin >> sall_tavalod;

        if (sall_tavalod <= 1300 && sall_tavalod > 1400)
        {
            cout << "erroe: sall wared shode na motabar ast !!!\n";
        }
    } while (sall_tavalod <= 1300 && sall_tavalod > 1400);
    cout << userName << " jan sall tavalod shoma " << sall_tavalod << " :D";
   
}
