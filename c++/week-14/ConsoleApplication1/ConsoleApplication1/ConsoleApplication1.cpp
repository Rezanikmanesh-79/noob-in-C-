#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <cctype>

using namespace std;

// تابع برای شمارش تعداد تکرار هر حرف در یک فایل متنی
map<char, int> countLetterOccurrences(const string& filename) {
    map<char, int> letterCount;

    // باز کردن فایل برای خواندن
    ifstream inputFile(filename);
    if (!inputFile) {
        cerr << "Unable to open file " << filename << endl;
        return letterCount; // بازگرداندن نتیجه خالی در صورت شکست در باز کردن فایل
    }

    // خواندن تمام محتوای فایل
    string line;
    while (getline(inputFile, line)) {
        // شمارش تعداد تکرار هر حرف در هر خط
        for (char c : line) {
            if (isalpha(c)) {
                char lowerChar = tolower(c);
                letterCount[lowerChar]++;
            }
        }
    }

    // بستن فایل
    inputFile.close();

    return letterCount;
}

int main() {
    // فراخوانی تابع برای فایل "input.txt"
    map<char, int> result = countLetterOccurrences("input.txt");

    // چاپ نتایج
    for (const auto& pair : result) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
