#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;cin>>x;
    if (x>0 && (x & (x -1)) == 0) {
        cout << 1<<endl;
    }else {
        int count=0;
        while (x) {
            count += x & 1;
            x >>= 1;
        }
        cout << count << endl;
    }
}