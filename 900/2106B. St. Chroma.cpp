#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;cin >> t;
    while(t-- > 0) {
        int n,x; cin >> n >> x;
        vector<int> perm;
        if (x == 0) {
            for (int i = 1; i < n; ++i) {
                perm.push_back(i);
            }
            perm.push_back(0);
        } else if (x == n) {
            for (int i = 0; i < n; ++i) {
                perm.push_back(i);
            }
        } else {
            for (int i = 0; i < x; ++i) {
                perm.push_back(i);
            }
            for (int i = x + 1; i < n; ++i) {
                perm.push_back(i);
            }
            perm.push_back(x);
        }
        for (size_t i = 0; i < perm.size(); ++i) {
            if (i > 0) cout << ' ';
            cout << perm[i];
        }
        cout << '\n';
    }
}