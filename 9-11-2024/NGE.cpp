#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreaterElement(vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n, -1);
    stack<int> s;
    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && s.top() <= arr[i]) s.pop();
        if (!s.empty()) result[i] = s.top();
        s.push(arr[i]);
    }
    return result;
}

int main() {
    vector<int> arr1 = {4, 5, 2, 25};
    vector<int> arr2 = {13, 7, 6, 12};

    vector<int> result1 = nextGreaterElement(arr1);
    for (int i = 0; i < result1.size(); i++) {
        cout << arr1[i] << " -> " << result1[i] << endl;
    }

    vector<int> result2 = nextGreaterElement(arr2);
    for (int i = 0; i < result2.size(); i++) {
        cout << arr2[i] << " -> " << result2[i] << endl;
    }

    return 0;
}
