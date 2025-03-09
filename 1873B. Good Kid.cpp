#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int ans = 1;
        int cc;
        int zero_count = 0;
        bool first = true;

        for(int i = 0; i < n; i++) {
            int iter;
            cin >> iter;

            if (first) {
                cc = iter;
                first = false;
            } else if (iter < cc) {
                cc = iter;
            }
            if (iter == 0) {
                zero_count++;
            } else {
                ans *= iter;
            }
        }

        if (zero_count > 1) {
            cout << 0 << '\n';
        } else if (zero_count == 1) {
            cout << ans << '\n';
        } else {
            ans = ans / cc * (cc + 1);
            cout << ans << '\n';
        }
    }
    return 0;
}