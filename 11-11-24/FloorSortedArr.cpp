#include<bits/stdc++.h>
using namespace std;
int FloorSortedArr(int arr[],int n, int x){
    int left=0;
    int right=n-1;
    int floorindex=-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(x>arr[mid]){
            floorindex=mid;
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return floorindex;

}

int main(){
    int arr[]={1, 2, 8, 10, 10, 12, 19};
    int x = 0;
    int n=sizeof(arr)/sizeof(arr[0]);
    int res=FloorSortedArr(arr,n,x);
    if(res==-1){
        cout<<-1;
    }else{
        cout<<arr[res];
    }

}