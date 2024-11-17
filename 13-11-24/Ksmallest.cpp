#include<bits/stdc++.h>
using namespace std;
int ksmallest(int arr[],int n,int k){
    sort(arr,arr+n);
    return arr[k-1];
}
int main()
{
    int arr[] = { 7, 10, 4, 3, 20, 15 };
    int N = sizeof(arr) / sizeof(arr[0]), K = 3;

    // Function call
    cout << "K'th smallest element is "
         << ksmallest(arr, N, K);
    return 0;
}