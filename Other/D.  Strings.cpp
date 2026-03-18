#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // main code
    string s1,s2;
    cin >> s1 >> s2;
    cout << s1.size() << " " <<s2.size() <<endl;
    cout << s1+s2 <<endl;
    cout << s2.substr(0,1) << s1.substr(1,s1.size())
    << " " << s1.substr(0,1)<<s2.substr(1,s2.size());
    return 0;
}