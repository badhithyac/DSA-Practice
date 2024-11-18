#include <bits/stdc++.h>
using namespace std;

bool myCompare(const string& X, const string& Y) {
    return (X + Y) > (Y + X);
}

string largestNumber(const vector<string>& arr) {
    vector<string> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end(), myCompare);
    if (sortedArr[0] == "0") {
        return "0";
    }
    string result;
    for (const string& num : sortedArr) {
        result += num;
    }
    return result;
}

int main() {
    vector<string> arr1 = { "3", "30", "34", "5", "9" };
    cout << largestNumber(arr1) << endl;

    vector<string> arr2 = { "54", "546", "548", "60" };
    cout << largestNumber(arr2) << endl;

    return 0;
}
