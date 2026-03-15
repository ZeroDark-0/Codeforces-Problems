#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1,s2,word,last1,last2;
    getline(cin,s1);
    getline(cin,s2);
    stringstream ss1(s1);
    stringstream ss2(s2);
    while (ss1 >> word) {
        last1 = word;
    }
    while (ss2 >> word) {
        last2 = word;
    }
    if (last1 == last2) cout << "ARE Brothers";
    else cout << "NOT";
}