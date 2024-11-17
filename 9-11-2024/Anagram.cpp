#include <iostream>
#include <algorithm>
using namespace std;

bool areAnagrams(string s1, string s2) {
    if (s1.length() != s2.length()) return false;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}

int main() {
    string s1a = "geeks", s2a = "kseeg";
    string s1b = "allergy", s2b = "allergic";
    string s1c = "g", s2c = "g";
    cout << (areAnagrams(s1a, s2a) ? "true" : "false") << endl;
    cout << (areAnagrams(s1b, s2b) ? "true" : "false") << endl;
    cout << (areAnagrams(s1c, s2c) ? "true" : "false") << endl;
    return 0;
}
