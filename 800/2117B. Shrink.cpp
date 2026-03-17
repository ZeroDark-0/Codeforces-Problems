#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    vector<int> res(n);
    int low = 1, high = n;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0)
            res[i] = low++;
        else
            res[i] = high--;
    }
    for (int num : res)
        cout << num << " ";
    cout << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
