#include <bits/stdc++.h>
using namespace std;

int editDistRec(string& s1, string& s2, int m, int n) {
    if (m == 0) return n;
    if (n == 0) return m;
    if (s1[m - 1] == s2[n - 1]) 
        return editDistRec(s1, s2, m - 1, n - 1);
    return 1 + min({editDistRec(s1, s2, m, n - 1),
                    editDistRec(s1, s2, m - 1, n),
                    editDistRec(s1, s2, m - 1, n - 1)});
}

int editDist(string& s1, string& s2) {
    return editDistRec(s1, s2, s1.length(), s2.length());
}

int main() {
    string s1 = "GEEXSFRGEEKKS";
    string s2 = "GEEKSFORGEEKS";
    cout << editDist(s1, s2);
    return 0;
}
