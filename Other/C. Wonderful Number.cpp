#include <bits/stdc++.h>
using namespace std;

int odd_check(int x) {
    if (x%2!=0) return true;
    if (x%2==0) return false;
}
bool isBinaryPalindrome(unsigned int n) {
    if (n == 0) return true;

    string s;
    while (n > 0) {
        s.push_back(char('0' + (n & 1)));
        n >>= 1;
    }
    for (int i = 0, j = (int)s.size() - 1; i < j; i++, j--) {
        if (s[i] != s[j]) return false;
    }
    return true;
}
int main() {
    int N;cin>>N;
    if (odd_check(N) && isBinaryPalindrome(N)) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }

}