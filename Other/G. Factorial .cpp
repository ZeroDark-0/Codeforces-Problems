#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t-- > 0) {
        int n;
        cin >> n;

        long long ans = 1;

        for(int i = 1; i <= n; i++) {
            ans *= i;
        }

        cout << ans << endl;
    }
}