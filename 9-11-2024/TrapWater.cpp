#include<bits/stdc++.h>
using namespace std;

int trapRainwater(const vector<int>& arr) {
    int n = arr.size();
    if (n <= 2) return 0;

    vector<int> leftMax(n), rightMax(n);
    leftMax[0] = arr[0];
    for (int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i - 1], arr[i]);
    }

    rightMax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i + 1], arr[i]);
    }

    int trappedWater = 0;
    for (int i = 0; i < n; i++) {
        trappedWater += min(leftMax[i], rightMax[i]) - arr[i];
    }

    return trappedWater;
}

int main() {
    vector<int> arr1 = {3, 0, 1, 0, 4, 0, 2};
    cout << trapRainwater(arr1) << endl;

    vector<int> arr2 = {3, 0, 2, 0, 4};
    cout << trapRainwater(arr2) << endl;

    vector<int> arr3 = {1, 2, 3, 4};
    cout << trapRainwater(arr3) << endl;

    return 0;
}
