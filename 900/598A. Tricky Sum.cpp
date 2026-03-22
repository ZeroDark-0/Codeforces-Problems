#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t-- > 0) {
        long long n;
        cin >> n;

        long long normal_sum = n * (n + 1) / 2;

        long long power_sum = 0;
        for (long long p = 1; p <= n; p <<= 1){
            power_sum += p;
        }

        cout << normal_sum - 2 * power_sum << endl;
    }

    return 0;
}