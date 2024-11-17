#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string>& arr) {
    if (arr.empty()) return "-1";
    sort(arr.begin(), arr.end());
    string first = arr[0], last = arr[arr.size() - 1];
    int i = 0;
    while (i < first.size() && i < last.size() && first[i] == last[i]) i++;
    return i > 0 ? first.substr(0, i) : "-1";
}

int main() {
    vector<string> arr1 = {"geeksforgeeks", "geeks", "geek", "geezer"};
    vector<string> arr2 = {"hello", "world"};
    cout << longestCommonPrefix(arr1) << endl;
    cout << longestCommonPrefix(arr2) << endl;
    return 0;
}
