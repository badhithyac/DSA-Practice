#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> nums) {
    if (nums.empty()) {
        return 0;
    }
    
    int maxproduct = nums[0];
    int minproduct = nums[0];
    int result = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] < 0) {
            swap(maxproduct, minproduct);
        }
        
        maxproduct = max(nums[i], maxproduct * nums[i]);
        minproduct = min(nums[i], minproduct * nums[i]);
        
        result = max(result, maxproduct);
    }

    return result;
}

int main() {
    vector<int> nums = {-2, 6, -3, -10, 0, 2};
    cout << maxProduct(nums) << endl;

    vector<int> nums2 = {-1, -3, -10, 0, 60};
    cout << maxProduct(nums2) << endl;

    return 0;
}
