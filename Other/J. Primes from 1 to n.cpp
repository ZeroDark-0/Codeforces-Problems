#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;
    for (int d = 3; 1LL * d * d <= x; d += 2) {
        if (x % d == 0) return false;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) cout << i << ' ';
    }
    return 0;
}