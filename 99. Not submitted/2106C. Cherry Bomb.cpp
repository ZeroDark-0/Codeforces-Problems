#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;cin >> t;
    while(t-- > 0) {
        int n,k; cin >> n >> k;
        int a[n],b[n];
        bool flag = false;
        for(int i = 0;i<n;i++) {
            cin >> a[i];
            if(a[i] == 0) {
                flag = true;
            }
        }
        for(int i = 0;i<n;i++) {
            cin >> b[i];
            if(b[i] == 0) {
                flag = true;
            }
        }
        if(flag) {
            cout << 0 << endl;
            break;
        }


    }
}