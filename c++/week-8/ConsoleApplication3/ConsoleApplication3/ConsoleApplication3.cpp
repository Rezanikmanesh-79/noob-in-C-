#include <iostream>
#include <stack>
#include <string>
using namespace std;

void push1(stack<string>& ss, string p) {
    for (size_t i = 0; i < p.size(); i++) {
        string character(1, p[i]);
        ss.push(character);
    }
}

string pop1(stack<string>& ss) {
    string top_element = ss.top(); // آخرین عنصر را ذخیره می‌کنیم
    ss.pop(); // آخرین عنصر را حذف می‌کنیم
    return top_element; // آخرین عنصر را برمی‌گردانیم
}

int main() {
    string c;
    cout << "what is your name : ";
    cin >> c;

    stack<string> result_stack;
    push1(result_stack, c); // استک را با استفاده از تابع push1 پر می‌کنیم
    cout << "Stack after popping" << endl;
    // چاپ آخرین عنصر با استفاده از تابع pop1
    cout  << pop1(result_stack) << endl;

    // چاپ بقیه عناصر استک
    while (!result_stack.empty()) {
        cout << result_stack.top() << endl;
        result_stack.pop();
    }

    return 0;
}
