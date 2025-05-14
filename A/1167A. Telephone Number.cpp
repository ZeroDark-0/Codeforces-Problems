#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    int n;
    string s;
    while(t-- > 0){
        cin >> n >> s;
        int p = n;
        for(int i = 0; i < n; ++i)
            if(s[i] == '8'){
                p = i;
                break;
            }

        if(n - p >= 11)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}