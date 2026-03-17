#include <bits/stdc++.h>

using namespace std;

void fial_(string s) {
    string ans = "";
    if (!s.empty()) {
        ans += s[0];
    }
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == ' ') {
            ans += s[i + 1];
        }
    }
    cout <<  ans <<  endl;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t-- > 0) {
        string s;
        getline(cin,s);
        fial_(s);
    }
}