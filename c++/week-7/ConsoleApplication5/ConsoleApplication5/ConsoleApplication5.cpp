#include <iostream>
using namespace std;
int feb(int n);
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Febonachi of " << number << " is " << feb(number) << endl;
    return 0;
}
int feb(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return feb(n - 2) + feb(n - 1);
}