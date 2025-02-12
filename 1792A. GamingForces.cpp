#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int count1 = 0;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            count1 += (x == 1);
        }
        cout << n - count1 / 2 << '\n';
    }
}
