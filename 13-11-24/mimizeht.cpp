#include <bits/stdc++.h>
using namespace std;

int minimizeMaxDifference(vector<int>& heights, int k) {
    int n = heights.size();
    sort(heights.begin(), heights.end());
    int result = heights[n - 1] - heights[0];

    for (int i = 1; i < n; i++) {
        if (heights[i] - k < 0)
            continue;

        int minHeight = min(heights[0] + k, heights[i] - k);
        int maxHeight = max(heights[i - 1] + k, heights[n - 1] - k);
        result = min(result, maxHeight - minHeight);
    }
    return result;
}

int main() {
    int k = 6;
    vector<int> heights = {12, 6, 4, 15, 17, 10};

    int answer = minimizeMaxDifference(heights, k);
    cout << answer;

    return 0;
}
