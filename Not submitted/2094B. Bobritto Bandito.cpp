#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        int len = m + 1;
        int l_p = l;
        int r_p = l + len - 1;
        cout << l_p << " " << r_p<< endl;
    }
}

