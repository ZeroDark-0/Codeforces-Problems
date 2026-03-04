#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long long a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        if (i) cout << ' ';
        cout << a;
        long long c = a + b;
        a = b;
        b = c;
    }
    cout << '\n';
}