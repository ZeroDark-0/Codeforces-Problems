#include <bits/stdc++.h>

using namespace std;

int checker(const unordered_map<int,int>x) {

}

int main() {
    int t;
    cin >>t;
    while(t--) {
        int n;
        cin >> n;
        unordered_map<int,int> hh = {{0, 3},{1, 1},{2, 2},{3, 1},{5, 1}};
        unordered_map<int,int> hh2;
        for(int i = 0;i<n;i++) {
            int in = 0;
            cin >> in;
            hh2[in]++;
        }


    }
}