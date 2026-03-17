#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        bool usedButton = false;
        int buttonStartTime = -1;
        bool possible = true;

        for (int currentTime = 0; currentTime < n; ++currentTime) {
            if (a[currentTime] == 0) {
                continue;
            }


            if (!usedButton) {

                usedButton = true;
                buttonStartTime = currentTime;
            } else {
                if (currentTime - buttonStartTime >= x) {
                    possible = false;
                    break;
                }
            }
        }

        cout << (possible ? "YES" : "NO") << '\n';
    }

    return 0;
}
