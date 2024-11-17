#include<bits/stdc++.h>
using namespace std;
int eqbpoint(vector<long long>arr){
    int n=arr.size();
    long long leftsum ,rightsum;
    for(int i =0;i<n;i++){
        leftsum=0;
        for(int j=0;j<i;j++){
            leftsum+=arr[j];
        }
        rightsum=0;
        for(int j=i+1;j<n;j++){
            rightsum+=arr[j];
        }
        if(rightsum==leftsum) return i+1;
    }
    return -1;
}
int main()
{
    vector<long long> arr = { -7, 1, 5, 2, -4, 3, 0 };

    
    cout << eqbpoint(arr);
    return 0;
}
