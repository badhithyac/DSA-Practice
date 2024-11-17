#include <iostream>
#include <algorithm>
using namespace std;

int knapsack(int weights[], int values[], int capacity, int n) {
    if (n == 0 || capacity == 0) {
        return 0;
    }

    if (weights[n - 1] > capacity) {
        return knapsack(weights, values, capacity, n - 1);
    } else {
        int include = values[n - 1] + knapsack(weights, values, capacity - weights[n - 1], n - 1);
        int exclude = knapsack(weights, values, capacity, n - 1);
        return max(include, exclude);
    }
}

int main() {
    int weights[] = {1, 2, 3};
    int values[] = {10, 15, 40};
    int capacity = 6;
    int n = sizeof(weights) / sizeof(weights[0]);

    cout << knapsack(weights, values, capacity, n) << endl;
    return 0;
}
