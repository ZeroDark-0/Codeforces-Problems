#include <bits/stdc++.h>

using namespace std;

int f(int l,int r, int k, int p[]) {
    if(l>r) {
        return -1;
    }
    int m = (l+r)/2;
    if(p[m] == k) {

    }
    else if(p[m]<k) {
        f(m+1,r,k);
    }
    else if (p[m]>k) {
        f(l,m-1,k);
    }
}

int main() {
    int t;cin >> t;
    while(t-- > 0) {
        int n,q,p_s;cin >> n >> q >> p_s;
        int p [p_s];
        int l,r,k;cin >>l >>r >>k;
        f(l,r,k,p);
    }
}