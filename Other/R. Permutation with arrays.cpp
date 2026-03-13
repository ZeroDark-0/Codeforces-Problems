#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    unordered_map<int,int> mp,mp2;
    for(int i = 0;i<n;i++) {
        int x;cin>>x;
        mp[x]++;
    }
    for (int i = 0; i < n; i++) {
        int x;cin >> x;
        mp2[x]++;
    }
    if (mp == mp2) cout << "yes";
    else cout << "no";
}