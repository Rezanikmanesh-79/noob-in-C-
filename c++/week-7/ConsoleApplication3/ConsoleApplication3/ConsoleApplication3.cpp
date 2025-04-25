#include <iostream>

using namespace std;

int countDigits(int number) {
    int length = 0;
    while (number != 0) {
        number /= 10;
        length++;
    }
    return length;
}

int main() {
    int inputNumber;
    cout << "soucal numb : ";
    cin >> inputNumber;
    if (countDigits(inputNumber) == 10) {
        cout << "Valid";
    }
    else {
        cout << "Not Valid";
    }

    return 0;
}
