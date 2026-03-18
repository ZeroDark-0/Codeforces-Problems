#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // main code
    int t; cin >> t;
    while (t-- > 0) {
        string s;
        cin >> s;

        bool good = false;
        for (int i = 0; i + 2 < (int)s.size(); i++) {
            if ((s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0') ||
                (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1')) {
                good = true;
                break;
            }
        }

        cout << (good ? "Good" : "Bad") << endl;
    }

    return 0;
}