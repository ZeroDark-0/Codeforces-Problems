#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n), b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        long long prefA = 0;
        long long prefB = 0;

        bool possible = true;

        for (int i = 0; i < n; i++) {
            prefA += a[i];
            prefB += b[i];

            if (prefA > prefB) {
                possible = false;
            }
        }

        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
