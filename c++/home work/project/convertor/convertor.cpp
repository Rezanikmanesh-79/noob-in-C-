
#include <iostream>
#include <string>
#include <bitset>
#include <sstream>
#include <iomanip>

using namespace std;

// Function to convert binary to decimal
int binary_to_decimal(const string& binary) {
    return stoi(binary, nullptr, 2);
}

// Function to convert binary to hexadecimal
string binary_to_hexadecimal(const string& binary) {
    int decimal = binary_to_decimal(binary);
    stringstream ss;
    ss << hex << decimal;
    return ss.str();
}

// Function to convert decimal to binary
string decimal_to_binary(int decimal) {
    return bitset<32>(decimal).to_string();
}

// Function to convert decimal to hexadecimal
string decimal_to_hexadecimal(int decimal) {
    stringstream ss;
    ss << hex << decimal;
    return ss.str();
}

// Function to convert hexadecimal to binary
string hexadecimal_to_binary(const string& hexadecimal) {
    int decimal = stoi(hexadecimal, nullptr, 16);
    return decimal_to_binary(decimal);
}

// Function to convert hexadecimal to decimal
int hexadecimal_to_decimal(const string& hexadecimal) {
    return stoi(hexadecimal, nullptr, 16);
}

int main() {
    cout << "Choose the conversion type:\n";
    cout << "1. Binary to Decimal\n";
    cout << "2. Binary to Hexadecimal\n";
    cout << "3. Decimal to Binary\n";
    cout << "4. Decimal to Hexadecimal\n";
    cout << "5. Hexadecimal to Binary\n";
    cout << "6. Hexadecimal to Decimal\n";

    int choice;
    cout << "Enter the number of the conversion type (1-6): ";
    cin >> choice;

    if (choice == 1) {
        string binary;
        cout << "Enter the binary number: ";
        cin >> binary;
        cout << "Decimal value: " << binary_to_decimal(binary) << "\n";
    } else if (choice == 2) {
        string binary;
        cout << "Enter the binary number: ";
        cin >> binary;
        cout << "Hexadecimal value: " << binary_to_hexadecimal(binary) << "\n";
    } else if (choice == 3) {
        int decimal;
        cout << "Enter the decimal number: ";
        cin >> decimal;
        cout << "Binary value: " << decimal_to_binary(decimal) << "\n";
    } else if (choice == 4) {
        int decimal;
        cout << "Enter the decimal number: ";
        cin >> decimal;
        cout << "Hexadecimal value: " << decimal_to_hexadecimal(decimal) << "\n";
    } else if (choice == 5) {
        string hexadecimal;
        cout << "Enter the hexadecimal number: ";
        cin >> hexadecimal;
        cout << "Binary value: " << hexadecimal_to_binary(hexadecimal) << "\n";
    } else if (choice == 6) {
        string hexadecimal;
        cout << "Enter the hexadecimal number: ";
        cin >> hexadecimal;
        cout << "Decimal value: " << hexadecimal_to_decimal(hexadecimal) << "\n";
    } else {
        cout << "Invalid choice. Please enter a number between 1 and 6.\n";
    }

    return 0;
}
