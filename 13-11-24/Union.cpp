#include <bits/stdc++.h>
using namespace std;

int countUnionElements(vector<int>& a, vector<int>& b) {
    unordered_set<int> unionSet;

    for (int num : a) {
        unionSet.insert(num);
    }

    for (int num : b) {
        unionSet.insert(num);
    }

    return unionSet.size();
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {1, 2, 3};

    int result = countUnionElements(a, b);
    cout << result << endl;

    vector<int> c = {85, 25, 1, 32, 54, 6};
    vector<int> d = {85, 2};

    result = countUnionElements(c, d);
    cout << result << endl;

    vector<int> e = {1, 2, 1, 1, 2};
    vector<int> f = {2, 2, 1, 2, 1};

    result = countUnionElements(e, f);
    cout << result << endl;

    return 0;
}
