#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    replace(s.begin(),s.end(),',',' ');
    for (char c : s) {
        if (islower(c)) {
            cout << char(toupper(c));
        } else if (isupper(c)) {
            cout << char(tolower(c));
        } else {
            cout << c;
        }
    }
    cout << endl;
}