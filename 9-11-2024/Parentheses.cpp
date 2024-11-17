#include<bits/stdc++.h>
string parathensis(const string str){
    int count_open=0;
    int count_close=0;
    for(cahr i : str){
        if(i=="("){
            count_open+=1;
        }
        else{
            count_close+=1;
        }
    }
    if (count_open==count_close){
            return "Balanced";
        }
    else{
        return "Not Balanced";
        }
    }

int main(){
    string S="())((())";
    cout<<parathensis(S);
}