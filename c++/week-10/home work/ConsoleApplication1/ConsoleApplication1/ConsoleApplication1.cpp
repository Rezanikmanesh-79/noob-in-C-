#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class student {
private:
    string name;
    int student_id;
    int score;
    int rank;

public:
    string get_name() const {
        return name;
    }

    int get_id() const {
        return student_id;
    }

    int get_score() const {
        return score;
    }

    int get_rank() const {
        return rank;
    }

    void set_name(string x) {
        name = x;
    }

    void set_id(int x) {
        student_id = x;
    }

    void set_score(int x) {
        score = x;
    }

    void set_rank(int x) {
        rank = x;
    }
};

bool compare_students(const student& a, const student& b) {
    return a.get_score() > b.get_score();
}

int main() {
    ifstream inFile("pre.txt");
    if (!inFile) {
        cerr << "Unable to open file." << endl;
        return 1;
    }

    vector<student> students;
    student s;

    string line;
    while (getline(inFile, line)) {
        istringstream iss(line);
        string name;
        int id, score;

        iss >> name >> id >> score;

        s.set_name(name);
        s.set_id(id);
        s.set_score(score);

        students.push_back(s);
    }

    // مرتب‌سازی دانش‌آموزان بر اساس نمره
    sort(students.begin(), students.end(), compare_students);

    // اعمال رتبه‌بندی جدید
    for (size_t i = 0; i < students.size(); ++i) {
        students[i].set_rank(i + 1);
    }

    // نوشتن اطلاعات دانش‌آموزان به فایل "After.txt" به همراه شماره رتبه
    ofstream outFile("After.txt");
    if (!outFile) {
        cerr << "Unable to create file." << endl;
        return 1;
    }

    for (size_t i = 0; i < students.size(); ++i) {
        outFile << students[i].get_name() <<" ";
        outFile << students[i].get_id() << " ";
        outFile <<  students[i].get_score() <<" ";
        outFile << students[i].get_rank() << " "; // شماره رتبه
        outFile << endl;
    }

    outFile.close();
    cout << "Student information has been written to After.txt." << endl;

    // گرفتن شماره دانشجویی و چاپ مشخصات مربوطه
    int target_id;
    cout << "Enter student ID to search: ";
    cin >> target_id;

    bool found = false;
    for (size_t i = 0; i < students.size(); ++i) {
        if (students[i].get_id() == target_id) {
            cout << "Name: " << students[i].get_name() << endl;
            cout << "ID: " << students[i].get_id() << endl;
            cout << "Score: " << students[i].get_score() << endl;
            cout << "Rank: " << students[i].get_rank() << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student with ID " << target_id << " not found." << endl;
    }

    return 0;
}
