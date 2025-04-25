#include <iostream>
#include <fstream>
#include <string>

using namespace std;

float equton_slover(string equation);

int main()
{
    ifstream inputFile("equations.txt");

    if (!inputFile.is_open()) {
        cout << "Failed to open the file." << endl;
        return 1;
    }

    string equation;
    while (getline(inputFile, equation)) {
        cout << "Equation: " << equation << endl;
        float result = equton_slover(equation);
        cout << "Result of solving equation: " << result << endl << endl;
    }

    inputFile.close();

    return 0;
}

float equton_slover(string equation)
{
    double a = 0, b = 0;
    size_t x_pos = equation.find('x');
    size_t eq_pos = equation.find('=');

    if (x_pos != string::npos && eq_pos != string::npos) {
        string a_str = equation.substr(0, x_pos);
        string b_str = equation.substr(x_pos + 1, eq_pos - x_pos - 1);
        a_str.erase(remove(a_str.begin(), a_str.end(), ' '), a_str.end());
        b_str.erase(remove(b_str.begin(), b_str.end(), ' '), b_str.end());

        if (a_str.empty()) {
            a = 1;
        }
        else {
            a = stod(a_str);
        }
        b = stod(b_str);

        if (a != 0) {
            double x = -b / a;
            return x;
        }
        else {
            if (b == 0) {
                return INFINITY;
            }
            else {
                return NAN;
            }
        }
    }
    else {
        return NAN;
    }
}
