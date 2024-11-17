#include <iostream>
#include <stack>
using namespace std;

void deleteMiddle(stack<int>& s, int current, int middle) {
    if (current == middle) {
        s.pop();
        return;
    }
    int top = s.top();
    s.pop();
    deleteMiddle(s, current + 1, middle);
    s.push(top);
}

void deleteMiddleElement(stack<int>& s) {
    if (s.empty()) return;
    int middle = s.size() / 2;
    deleteMiddle(s, 0, middle);
}

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    deleteMiddleElement(s);

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
