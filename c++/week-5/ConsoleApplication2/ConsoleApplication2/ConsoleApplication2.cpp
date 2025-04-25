#include <iostream>
#include <string>
using namespace std;

int main()
{
    string user;
    cout << "What is your name: ";
    cin >> user;

    char voice[] = { 'a', 'e', 'i', 'o', 'u' };
    for (int i = 0; i < sizeof(voice) / sizeof(voice[0]); i++)
    {
        size_t y = user.find(voice[i]);
        while (y != string::npos)
        {
            user[y] = 'z';
            y = user.find(voice[i], y + 1);
        }
    }
    cout << user;

    return 0;
}
