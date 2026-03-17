#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;string s;
        cin >> n >> s;
        int k = 0;
        for (char c : s) {
            if (c == '1') k++;
        }
        int tot = k * (n - 2) + n;
        cout << tot << endl;
    }
}