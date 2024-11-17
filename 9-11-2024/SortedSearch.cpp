#include <iostream>
using namespace std;

int search(int arr[], int n, int key) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return mid;
        }

        if (arr[left] <= arr[mid]) {
            if (key >= arr[left] && key < arr[mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        else {
            if (key > arr[mid] && key <= arr[right]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }

    return -1;
}

int main() {
    int arr1[] = {4, 5, 6, 7, 0, 1, 2};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int key1 = 0;

    int index1 = search(arr1, n1, key1);
    cout << index1 << endl;

    int arr2[] = {4, 5, 6, 7, 0, 1, 2};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int key2 = 3;

    int index2 = search(arr2, n2, key2);
    cout  << index2 << endl;

    return 0;
}
