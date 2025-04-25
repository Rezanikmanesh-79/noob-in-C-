#include <iostream>
#include <string>

using namespace std; 
int countDigits(int number);


int main() {
    int inputNumber;
    cout << "soucal numb : ";
    cin >> inputNumber;
    if (countDigits(inputNumber))
    {
        cout << "Valid";
    }
    else {
        cout << "Not Valid";
    }

    return 0;
}
int countDigits(int number) {
    int x;
    string numStr = to_string(number);
    x = numStr.length();
    if (x == 10)
    {
        return true;
    }
    return false;
}