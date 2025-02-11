#include  <bits/stdc++.h>

using namespace std;

int main() {
    long long n,m,a;
    cin >> n >> m >> a;
    cout << ((n+a-1)/a)*((m+a-1)/a);
}

/*
 * we can use the ceiling method in this problem but it will show the error for the
 * case where the new tiles are fit perfectly on the old tiles (⌈n/a⌉)(⌈m/a⌉)
 */