#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while (t--> 0) {
        long long n;
        cin >> n;

        int ones = __builtin_popcountll((unsigned long long)n);
        int ans=0;
        for (int i = 0; i < ones; i++) {
            ans = ans + pow(2,i);
        }
        cout << ans << endl;
    }

}