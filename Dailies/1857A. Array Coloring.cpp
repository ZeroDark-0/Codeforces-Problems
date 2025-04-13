#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0;i<n;i++) {
            cin >> a[i];
        }
        int check =0 ;
        while(n--) {
            if(a[n]%2!=0) {
                check++;
            }
        }
        if(check %2==0) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }





    }
}