#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // main code
    string s;cin >> s;
    string s1  = s ;reverse(s1.begin(),s1.end());
    bool check = true;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != s1[i]) {
            check = false;
            break;
        }

    }
    if (check) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
    return 0;
}