#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string str) {
    stack<char> s;
    for (char ch : str) {
        if (ch == '(') s.push(ch);
        else if (!s.empty() && s.top() == '(') s.pop();
        else return false;
    }
    return s.empty();
}

int main() {
    string str1 = "((()))()()";
    string str2 = "())((())";
    
    if (isBalanced(str1))
        cout << "Balanced" << endl;
    else
        cout << "Not Balanced" << endl;

    if (isBalanced(str2))
        cout << "Balanced" << endl;
    else
        cout << "Not Balanced" << endl;

    return 0;
}
