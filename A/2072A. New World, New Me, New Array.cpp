#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        double n , k , p ,x;
        cin >> n >> k >> p;
        if(k<0) {
            x = -p;
        }
        else {
            x = p;
        }
        if(ceil(k/x) > n) {
            cout << -1 << endl;
        }
        else {
            cout << ceil(k/x) << endl;
        }
    }

}