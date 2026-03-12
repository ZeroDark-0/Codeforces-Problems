#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >> t;
    while (t--> 0) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j <= n; j++) {
                int max_sum = INT_MIN;
                for (int k = i; k < j; k++) {
                    max_sum = max(max_sum, a[k]);
                }
                cout << max_sum << " ";
            }
        }
        cout << endl;
    }
}