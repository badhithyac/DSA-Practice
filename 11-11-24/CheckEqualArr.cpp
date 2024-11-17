#include <bits/stdc++.h>
using namespace std;

bool Arrayequal(const vector<int>& arr1, const vector<int>& arr2) {
    if (arr1.size() != arr2.size()) {
        return false;
    }

    unordered_map<int, int> freq1, freq2;
    for (int num : arr1) {
        freq1[num]++;
    }
    for (int num : arr2) {
        freq2[num]++;
    }

    return freq1 == freq2;
}

int main() {
    vector<int> arr1 = {1, 2, 5, 4, 0};
    vector<int> arr2 = {2, 4, 5, 0, 1};

    if (Arrayequal(arr1, arr2)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
