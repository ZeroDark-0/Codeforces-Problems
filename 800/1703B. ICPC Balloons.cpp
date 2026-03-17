#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        unordered_map<char ,int> hashmap;
        int ss;
        cin >> ss;
        string m;
        cin >> m;
        for (int i = 0; i < ss; i++) {
            hashmap[m[i]]++;
        }
        int ans = 0;
        for(auto &entry : hashmap) {
            entry.second > 1 ? ans+=entry.second + 1 : ans+=2;
        }
        cout << ans << '\n';
    }
}