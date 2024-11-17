#include<bits/stdc++.h>
using namespace std;
int subarray_sum(int arr[],int size){
    int current_sum=arr[0];
    int maximum_sum=arr[0];
    for(int i=1;i<size;i++){
        current_sum=max(arr[i],arr[i]+current_sum);
        maximum_sum=max(current_sum,maximum_sum);

    }
    return maximum_sum;

}
int main(){
    int arr[]={2, 3, -8, 7, -1, 2, 3} ;
    int size=sizeof(arr)/sizeof(arr[0]);
    int arr2[]={-2, -4} ;
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    int arr3[]= {5, 4, 1, 7, 8};
    int size3=sizeof(arr3)/sizeof(arr3[0]);
    cout<<subarray_sum(arr,size)<<endl;
    cout<<subarray_sum(arr2,size2)<<endl;
    cout<<subarray_sum(arr3,size3)<<endl;
}