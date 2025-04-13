#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool isSorted = true;
        for (int i = 1; i < n;i++) {
            if (a[i] < a[i- 1]) {
                isSorted = false;
                break;
            }
        }
        if (!isSorted) {
            cout << 0 << endl;
            continue;
        }
        int min_ops = INT_MAX;

        for (int j = 0; j < n - 1; j++) {
            if (a[j] < a[j +1]) {
                int diff = a[j + 1] - a[j];
                int k = (diff+ 2) / 2;
                min_ops = min(min_ops, k);
            } else if (a[j] == a[j +1]) {
                min_ops = min(min_ops,1);
            }
        }
        cout << min_ops << endl;
    }
    return 0;
}