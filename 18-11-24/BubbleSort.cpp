#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        bool swapped=false;
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        if(swapped == true){
            break;
        }
        }
    }
}
void printVector(const vector<int>& arr) {
    for (int num : arr)
        cout << " " << num;
}

int main() {
    vector<int> arr = { 64, 34, 25, 12, 22, 11, 90 };
    bubbleSort(arr);
    cout << "Sorted array: \n";
    printVector(arr);
    return 0;
}