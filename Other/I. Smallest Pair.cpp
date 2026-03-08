#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while (t-->0) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int mn = INT_MAX;

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int curr = a[i] + a[j] + (j - i);
                mn = min(mn, curr);
            }
        }

        cout << mn << endl;
    }
}