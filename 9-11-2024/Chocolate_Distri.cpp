#include <bits/stdc++.h>

using namespace std;

int findMinDiff(vector<int>& arr, int m) {
    int n = arr.size();
    if (n < m) return -1;

    sort(arr.begin(), arr.end());

    int minDiff = INT_MAX;
    for (int i = 0; i <= n - m; i++) {
        int diff = arr[i + m - 1] - arr[i];
        minDiff = min(minDiff, diff);
    }

    return minDiff;
}

int main() {
    vector<int> arr1 = {7, 3, 2, 4, 9, 12, 56};
    int m1 = 3;
    cout  << findMinDiff(arr1, m1) << endl;  
    vector<int> arr2 = {7, 3, 2, 4, 9, 12, 56};
    int m2 = 5;
    cout  << findMinDiff(arr2, m2) << endl;  

    return 0;
}


