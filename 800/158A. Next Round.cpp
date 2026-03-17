#include <iostream>

using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int p[n];
    int target = 0;
    for(int i  = 0; i < n; i++) {
        cin >> p[i];
        if(i+1 == k) {
            target = p[i];
        }
    }
    int ans=0;
    for(int i = 0; i < n; i++) {
        if(p[i]>=target && p[i]>0) {
            ans++;
        }
    }
    cout << ans;

}