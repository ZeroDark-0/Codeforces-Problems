#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    if (n == 0) cout << 00;
    if (n == 1) cout << 05;
    if (n>=2) cout << 25;
    return 0;
}