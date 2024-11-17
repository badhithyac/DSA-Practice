#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals) {
    if (intervals.empty()) return {};
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> merged;
    merged.push_back(intervals[0]);
    for (int i = 1; i < intervals.size(); i++) {
        if (merged.back()[1] >= intervals[i][0]) {
            merged.back()[1] = max(merged.back()[1], intervals[i][1]);
        } else {
            merged.push_back(intervals[i]);
        }
    }
    return merged;
}

int main() {
    vector<vector<int>> arr1 = {{1, 3}, {2, 4}, {6, 8}, {9, 10}};
    vector<vector<int>> result1 = mergeIntervals(arr1);
    for (auto interval : result1) cout << "[" << interval[0] << ", " << interval[1] << "] ";
    cout << endl;

    vector<vector<int>> arr2 = {{7, 8}, {1, 5}, {2, 4}, {4, 6}};
    vector<vector<int>> result2 = mergeIntervals(arr2);
    for (auto interval : result2) cout << "[" << interval[0] << ", " << interval[1] << "] ";
    cout << endl;

    return 0;
}
