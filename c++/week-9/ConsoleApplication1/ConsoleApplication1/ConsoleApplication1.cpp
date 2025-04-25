#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("mmd.txt");
    string line;

    if (file.is_open()) {
        while (getline(file, line)) {
            cout << line << '\n';
        }
        file.close();
    }
    else {
        cout << "Unable to open file";
    }

    return 0;
}
