#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    int check;
    while(n--) {
        check = 0;
        int input;
        for(int i=0;i<3;i++) {
            cin >> input;
            if(input == 1) {
                check++;
            }
        }
        if(check>=2) {
            ans++;
        }
    }
    cout << ans;
}