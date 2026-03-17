#include <iostream>

using namespace std;

int main() {
    string s,t;
    cin >> s >> t;
    int check = 0;
    if(s.size() == t.size()) {
        for(int i  = 0; i < s.size(); i++) {
            if(s[i] == t[s.size()-1-i]) {
                check ++;
            }
        }
        if(check == s.size()) {
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