#include <iostream>
#include <string>
using namespace std;

string longestPalindrome(string str) {
    int n = str.size();
    if (n == 0) return "";
    int start = 0, maxLength = 1;
    for (int i = 0; i < n; i++) {
        int low = i - 1, high = i + 1;
        while (high < n && str[high] == str[i]) high++;
        while (low >= 0 && str[low] == str[i]) low--;
        while (low >= 0 && high < n && str[low] == str[high]) {
            low--;
            high++;
        }
        int length = high - low - 1;
        if (length > maxLength) {
            start = low + 1;
            maxLength = length;
        }
    }
    return str.substr(start, maxLength);
}

int main() {
    string str1 = "forgeeksskeegfor";
    string str2 = "Geeks";
    string str3 = "abc";
    string str4 = "";
    cout << longestPalindrome(str1) << endl;
    cout << longestPalindrome(str2) << endl;
    cout << longestPalindrome(str3) << endl;
    cout << longestPalindrome(str4) << endl;
    return 0;
}
