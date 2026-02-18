#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long A, B, C;
    cin >> A >> B >> C;

    long long mn = min({A, B, C});
    long long mx = max({A, B, C});

    cout << mn << ' ' << mx << '\n';
    return 0;
}