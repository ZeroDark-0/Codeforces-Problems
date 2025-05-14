#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t-- > 0) {
        int n;
        cin >> n;
        int ans = 1;
        for(int i = 0; i < n; i++) {
            int q;
            cin >> q;
            ans += q;
        }
        cout << ans-n << endl;

    }
}