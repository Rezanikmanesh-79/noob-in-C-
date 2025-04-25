#include <iostream>
using namespace std;
int main()
{
    int a;
    string seasons[4] = { "zmestan","bahar","tabestan","paiz" };
    a = (sizeof(seasons) / sizeof(seasons[0]))-1;
    cout << seasons[0]<<"\n" << seasons[a]<<"\n"<<a;

}