#include<bits/stdc++.h>
using namespace std;
char nonRepeatingChar(string s){
    unordered_map<char,int> umap;
    for(char ch: s){
        umap[ch]++;
    }
    for(char ch:s){
        if(umap[ch]==1) return ch;
    }
    return '$';
}


int main() {
    string s = "racecar";
  
    cout << nonRepeatingChar(s);
    return 0;
}