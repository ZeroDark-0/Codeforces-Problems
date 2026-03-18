#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // main code
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    
    if (s.empty()) return 0;

    int count = 1;
    for (int i = 1; i < (int)s.length(); ++i) {
        if (s[i] == s[i-1]) {
            count++;
        } else {
            cout << s[i-1] << " : " << count << endl;
            count = 1;
        }
    }
    cout << s.back() << " : " << count << endl;
    return 0;
}