#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;
    int maxArea = 0;

    while (left < right) {
        int height = min(arr[left], arr[right]);
        int width = right - left;
        int area = height * width;
        maxArea = max(maxArea, area);
        if (arr[left] < arr[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxArea;
}

int main() {
    vector<int> arr1 = {1, 5, 4, 3};
    cout << maxArea(arr1) << endl;

    vector<int> arr2 = {3, 1, 2, 4, 5};
    cout<< maxArea(arr2) << endl;

    return 0;
}
