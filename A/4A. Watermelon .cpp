#include <bits/stdc++.h>

using namespace std;

int main() {
    int w;
    cin >> w;
    if(w == 2) {
        cout <<"NO";
    }
    else if(w%2 == 0) {
        if((w%2)%2 == 0 ) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    }
    else {
        cout << "NO";
    }

}
