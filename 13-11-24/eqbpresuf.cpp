#include<bits/stdc++.h>
using namespace std;
int eqbpresuf(vector<int> arr){ // finding equilibrium using prefix and suffix method
    int n=arr.size();
    if(n==1) return 1;
    int prefix[n]={0};
    int suffix[n]={0};
    prefix[0]=arr[0];
    suffix[n-1]=arr[n-1];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    for(int i=n-2;i>=0;i--){
        suffix[i]=suffix [i-1]+arr[i];
    }
    for(int i=0;i<n-1;i++){
       if( prefix[i]==suffix[i])
        return(i+1);
    }
    return -1;


}
int main()
{
    vector<int> arr = { -7, 1, 5, 2, -4, 3, 0 };

    // Function call
    cout << eqbpresuf(arr) << "\n";
    return 0;
}