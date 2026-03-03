#include <bits/stdc++.h>
using namespace std;

int somesums(int i, int a, int b) {
    int x = i;
    int i_sum = 0;
    while (x != 0) {
        i_sum += x % 10;
        x /= 10;
    }
    if (i_sum >= a && i_sum <= b) return i;
    return 0;
}

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += somesums(i, a, b);
    }
    cout << ans << "\n";
}