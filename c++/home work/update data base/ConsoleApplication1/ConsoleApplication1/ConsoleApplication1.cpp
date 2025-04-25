#include <iostream>
#include <list>
#include <string>
#include <fstream>
#include <sstream>
#include "code_meli.h"

using namespace std;

class Student {
private:
    list<list<string>> studentData;

public:
    void addStudent(string studentID, string name, string nationalID, int grade) {
        list<string> studentInfo;
        studentInfo.push_back(studentID);
        studentInfo.push_back(name);

        if (algorith_aval(nationalID)) {
            studentInfo.push_back(nationalID);
        }
        else {
            studentInfo.push_back("Not Valid");
        }

        studentInfo.push_back(to_string(grade));
        studentData.push_back(studentInfo);
    }

    void displayData() {
        for (const auto& student : studentData) {
            for (const auto& info : student) {
                cout << info << " ";
            }
            cout << endl;
        }
    }

    void readFromFile(string filename) {
        ifstream file(filename);
        if (!file.is_open()) {
            cerr << "Error: Unable to open file " << filename << endl;
            return;
        }

        string line;
        while (getline(file, line)) {
            istringstream iss(line);
            string studentID, name, nationalID, gradeStr;
            getline(iss, studentID, ' ');
            getline(iss, name, ' ');
            getline(iss, nationalID, ' ');
            getline(iss, gradeStr, ' ');
            int grade = stoi(gradeStr);
            addStudent(studentID, name, nationalID, grade);
        }

        file.close();
    }
};

int main() {
    Student studentManager;

    studentManager.readFromFile("pre.txt");
    studentManager.displayData();

    return 0;
}
