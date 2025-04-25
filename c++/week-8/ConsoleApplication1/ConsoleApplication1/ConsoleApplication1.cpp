#include <iostream>
using namespace std;

int power(int n, int y);

int main() {
    int i, j;
    cout << "give me a number: ";
    cin >> i;
    cout << "give me power of number: ";
    cin >> j;
   
    int result = power(i, j); 
    cout << "Result: " << result << endl;

    return 0;
}

int power(int n, int y) {
    if (y == 0) {
        return 1;
    }
    return n * power(n, y - 1);
}
