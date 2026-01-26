#include <iostream>
using namespace std;

bool isValid(string p, string s) {
    int i = 0, j = 0;
    while (i < p.size() && j < s.size()) {
        if (p[i] != s[j]) return false;
        int cnt = 0;
        while (j < s.size() && s[j] == p[i] && cnt < 2) {
            ++j;
            ++cnt;
        }
        ++i;
    }
    return i == p.size() && j == s.size();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string p, s;
        cin >> p >> s;
        cout << (isValid(p, s) ? "YES" : "NO") << endl;
    }
    return 0;
}
