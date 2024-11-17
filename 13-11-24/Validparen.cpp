#include<bits/stdc++.h>
using namespace std;
bool validparen(string s){
    stack<char> stk;
    for(int i=0;i<s.length();i++){
        if (s[i] == '[' || s[i] == '(' || s[i] == '{' ){
            stk.push(s[i]);
        }else{
            if(!stk.empty() && 
            ((stk.top()=='(' && s[i]==')') ||
            (stk.top()=='{' && s[i]=='}') ||
            (stk.top()=='[' && s[i]==']')))
            {
                stk.pop();
            }
            else{
                return false;
            }
            
        }
    }
    return stk.empty();
}
int main() {
  
    string s = "[(])";

    // Function call
    if (validparen(s))
        cout << "true";
    else
        cout << "false";
    return 0;
}
