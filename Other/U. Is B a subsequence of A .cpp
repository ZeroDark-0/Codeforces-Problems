#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;cin >> n>>m;
    vector<int> a(n),b(m);
    for (int i = 0; i < n; i++) {
        int x;cin>>x;
        a[i] = x;
    }
    for (int i = 0; i < m; i++) {
        int x;cin>>x;
        b[i] = x;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == b[0]) {
            b.erase(b.begin());
        }
    }
    if (b.empty()) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
