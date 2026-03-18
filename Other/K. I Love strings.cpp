#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    while (n-- > 0) {
        string s, t;
        cin >> s >> t;

        string ans = "";
        int i = 0, j = 0;

        while (i < (int)s.size() && j < (int)t.size()) {
            ans += s[i];
            ans += t[j];
            i++;
            j++;
        }
        while (i < (int)s.size()) {
            ans += s[i];
            i++;
        }
        while (j < (int)t.size()) {
            ans += t[j];
            j++;
        }
        cout << ans << endl;
    }

    return 0;
}