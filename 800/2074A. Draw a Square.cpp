#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t-- > 0) {
        int l,r, d, u;
        cin >> l>> r >>d >> u;
        bool x;
        if ((l+r == d+u) && l == d && l == r) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}


