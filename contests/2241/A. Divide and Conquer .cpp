#include <bits/stdc++.h>
using namespace std;
long long MOD = 1e9 + 7;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t-- > 0) {
        int x, y;
        cin >> x >> y;

        if (x >= y && x % y == 0) {
            cout << "yes" << '\n';
        } else {
            cout << "no" << '\n';
        }
    }
}