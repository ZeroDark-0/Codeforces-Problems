#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int max, curr = 0;
    while(n-- > 0) {
        int a,b; cin >> a >> b;
        if(n == 0) {
            b = 0;
        }

        curr -= a;
        curr += b;
        max = std::max(curr,max);
    }
    cout << max << endl;
}