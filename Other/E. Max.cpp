#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int max = 0;
    while (n-->0) {
        int x;cin>>x;
        if (x>=max) max = x;
    }
    cout << max << endl;
}