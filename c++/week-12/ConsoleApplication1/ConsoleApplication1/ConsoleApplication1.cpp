#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <list>
using namespace std;

class student {
private:
    string name;
    int student_id;
    int score;

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

    void set_name(string x) {
        name = x;
    }

    void set_id(int x) {
        student_id = x;
    }

    void set_score(int x) {
        score = x;
    }
};

int main() {
    ifstream inFile("pre.txt");
    if (!inFile) {
        cerr << "Unable to open file." << endl;
        return 1;
    }

    list<student> students;

    string line;
    while (getline(inFile, line)) {
        istringstream iss(line);
        string name;
        int id, score;

        iss >> name >> id >> score;

        student s;
        s.set_name(name);
        s.set_id(id);
        s.set_score(score);

        students.push_back(s);
    }

    students.sort([](const student& a, const student& b) {
        return a.get_score() > b.get_score();
        });

    ofstream outFile("analys.txt");
    if (!outFile) {
        cerr << "Unable to create file." << endl;
        return 1;
    }

    double total_score = 0.0;
    size_t count = 0; // تعداد دانش‌آموزان برای محاسبه میانگین

    for (const student& s : students) {
        outFile << s.get_name() << " ";
        outFile << s.get_id() << " ";
        outFile << s.get_score() << " ";
        outFile << endl;

        total_score += s.get_score();
        ++count;
    }

    double average_score = total_score / count;
    outFile << "Average Score: " << average_score << endl;

    // محاسبه میانه
    double median_score;
    size_t size = students.size();
    auto middle_it = students.begin();
    advance(middle_it, size / 2); // پیدا کردن مکان میانه در لیست
    if (size % 2 == 0) {
        auto prev_middle_it = middle_it;
        --prev_middle_it;
        median_score = (middle_it->get_score() + prev_middle_it->get_score()) / 2.0;
    }
    else {
        median_score = middle_it->get_score();
    }

    outFile << "Median Score: " << median_score << endl;

    outFile.close();
    cout << "Student information has been written to analys.txt." << endl;

    return 0;
}
