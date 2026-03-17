#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // main code
    string s1,s2;
    cin >> s1 >> s2;
    if (s1 < s2)
    {
        cout << s1 <<endl;
    }
    else if (s2 < s1) {
        cout << s2 <<endl;
    }else {
        cout << s1 <<endl;
    }
    return 0;
}