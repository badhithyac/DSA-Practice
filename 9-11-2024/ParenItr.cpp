#include <iostream>
using namespace std;

bool isBalanced(string str) {
    int openCount = 0, closeCount = 0;
    for (char ch : str) {
        if (ch == '(') openCount++;
        else closeCount++;
        
        if (closeCount > openCount) return false;
    }
    return openCount == closeCount;
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
