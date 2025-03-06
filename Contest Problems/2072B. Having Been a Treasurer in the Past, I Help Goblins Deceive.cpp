#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n;
        cin >> s;

        long long m = 0,u = 0;
        for (char c : s) {
            if (c == '-') {
                m++;
            } else if (c == '_') {
                u++;
            }
        }
        if (m < 2 || u < 1) {
            cout << 0 << endl;
        }
        else {
            long long ans = u * (m/2) * (m - (m/2));
            cout << ans << endl;
        }
    }

}