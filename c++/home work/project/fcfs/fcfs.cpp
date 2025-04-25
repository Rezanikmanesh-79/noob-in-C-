#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// تعریف ساختار Process برای ذخیره اطلاعات هر فرآیند
struct Process {
    int pid; // شناسه فرآیند
    int arrival_time; // زمان ورود
    int burst_time; // زمان اجرای فرآیند
    int completion_time; // زمان تکمیل
    int waiting_time; // زمان انتظار
    int turnaround_time; // زمان برگشت
};

// تابع مقایسه برای مرتب‌سازی فرآیندها بر اساس زمان ورود
bool compareArrivalTime(Process a, Process b) {
    return a.arrival_time < b.arrival_time;
}

// تابع اجرای الگوریتم FCFS
void fcfsScheduling(vector<Process>& processes) {
    // مرتب‌سازی فرآیندها بر اساس زمان ورود
    sort(processes.begin(), processes.end(), compareArrivalTime);
    
    int current_time = 0;
    for (auto& process : processes) {
        // محاسبه زمان تکمیل فرآیند
        if (current_time < process.arrival_time) {
            current_time = process.arrival_time;
        }
        process.completion_time = current_time + process.burst_time;
        current_time = process.completion_time;
        
        // محاسبه زمان برگشت و زمان انتظار
        process.turnaround_time = process.completion_time - process.arrival_time;
        process.waiting_time = process.turnaround_time - process.burst_time;
    }
}

// تابع نمایش نتایج
void printResults(const vector<Process>& processes) {
    cout << "PID\tArrival\tBurst\tCompletion\tWaiting\tTurnaround" << endl;
    for (const auto& process : processes) {
        cout << process.pid << "\t" << process.arrival_time << "\t" 
             << process.burst_time << "\t" << process.completion_time << "\t\t" 
             << process.waiting_time << "\t" << process.turnaround_time << endl;
    }
}

int main() {
    // تعریف فرآیندها
    vector<Process> processes = {
        {1, 0, 4},
        {2, 1, 3},
        {3, 2, 1},
        {4, 3, 2}
    };

    // اجرای الگوریتم FCFS
    fcfsScheduling(processes);

    // نمایش نتایج
    printResults(processes);

    return 0;
}
