#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a,min,index=0 ;cin >>n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if(a<min) {
            min = a;
            index = i;
        }
    }
    cout << min << " " << index+1;

}