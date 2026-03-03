#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a,b,c,d;
    cin >> a >> b >> c >> d;

    long double left = (long double)b * logl((long double)a);
    long double right = (long double)d * logl((long double)c);

    if (left > right) cout << "YES";
    else cout << "NO";
}