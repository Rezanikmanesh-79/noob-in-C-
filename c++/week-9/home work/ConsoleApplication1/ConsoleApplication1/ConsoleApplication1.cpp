#include <iostream>
#include <string>
#include <fstream>
using namespace std;
bool algorith_aval(string);
bool extera(string x);
int main() {
    string user_natc_code;
    ifstream test("test.csv");
    ofstream ver1("ver1.csv");

    if (!test.is_open()) {
        cerr << "Error opening file." << endl;
        return 1; 
    }

    while (getline(test, user_natc_code, ',')) {
        if (algorith_aval(user_natc_code)) {
            ver1 << user_natc_code <<"\t"<<"Valid" << "\n";
        }
        else
        {
            ver1 << user_natc_code << "\t" << "Not Valid" << ",\n";
        }
    }

    test.close();
    ver1.close();

    return 0;
}

bool extera(string x) {
    char y = x[0];
    for (int i = 1; i < 10; i++) {
        if (y != x[i]) {
            return true;
        }
    }
    return false;
}

bool algorith_aval(string x) {
    if (x.length() < 8 || x.length() > 10) 
        return false;

    if (extera(x)) {
        int l = (x[x.size() - 1] - '0');
        int sum = 0;
        for (int i = 8; i >= 0; --i) {
            int digit = x[i] - '0';
            sum += (10 - i) * digit;
        }
        int remainder = sum % 11;
        if (remainder < 2) {
            if (remainder == l) {
                return true;
            }
            else {
                return false;
            }
        }
        else if ((11 - remainder) == l) {
            return true;
        }
    }
    return false;
}
