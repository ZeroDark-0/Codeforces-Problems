#include <iostream>

using namespace std;

int main() {
    int t = 0;
    cin >> t;
    while(t--) {
        int l ,r;
        int n;
        cin >> n;
        string s;
        cin >> s;
        l = s.find('B');
        r = s.find_last_of("B");
        cout << r-l+1 << '\n';
    }
}