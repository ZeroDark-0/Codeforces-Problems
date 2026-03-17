#include<bits/stdc++.h>

using namespace std;

int main() {
    int n ;
    cin >> n;
    vector<int> a;
    for(int i = 0;i < n ;i++) {
        int b;
        cin >> b;
        a.push_back(b);
    }
    if(is_sorted(a.begin(),a.end())) {
        for(int ele: a) {
            cout << ele << " ";
        }
    }
    else {
        std :: sort(a.begin(),a.end());
        for(int ele: a) {
            cout << ele << " ";
        }
    }

}