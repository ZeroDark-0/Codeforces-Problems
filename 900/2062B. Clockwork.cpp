#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false),
        cin.tie(0);
    int t;
    cin >> t;
    while(t-- > 0) {
        int n;
        cin >> n;
        bool flag = 0;
        for(int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if(a<=i*2||a<=(n-i-1)*2) {
                flag = 1;
            }
        }
        if(flag) {
            cout << "no\n";
        }
        else {
            cout << "yes\n";
        }
    }
}