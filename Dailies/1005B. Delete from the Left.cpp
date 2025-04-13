#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int s1 = s.size(), s2 = t.size();
    int total = s1 + s2;
    int commonSuffixLength = 0;
    while (s1 > 0 && s2 > 0 && s[s1 - 1] == t[s2 - 1]) {
        commonSuffixLength++;
        s1--;
        s2--;
    }
    int minDeletions = total - (2 * commonSuffixLength);

    cout << minDeletions << endl;
    return 0;
}
