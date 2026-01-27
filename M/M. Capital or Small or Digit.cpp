#include <bits/stdc++.h>
using namespace std;

int main() {
    char x;
    cin >> x;
    int ascii = static_cast<int>(x);
    if (ascii >= 65 && ascii <= 90) {
        cout << "ALPHA"<<endl;
        cout << "IS CAPITAL";
    }
    else if (ascii >= 97 && ascii <= 122) {
        cout << "ALPHA"<<endl;
        cout << "IS SMALL";
    }else {
        cout << "IS DIGIT"<<endl;
    }


}